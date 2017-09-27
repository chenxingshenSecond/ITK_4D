C
C ------------------------------------------------------------------
C
      SUBROUTINE DNPPLA(OP, IOVECT, N, NPERM, NOP, NMVAL, VAL,
     *   NMVEC, VEC, NBLOCK, H, HV, P, Q, BOUND, D, DELTA, SMALL,
     *   RARITZ, EPS)
C
      INTEGER N, NPERM, NOP, NMVAL, NMVEC, NBLOCK
      LOGICAL SMALL, RARITZ
      DOUBLE PRECISION VAL(NMVAL,4), VEC(NMVEC,1), H(NPERM,1),
     *   HV(NPERM,1), P(N,1), Q(N,1), BOUND(1), D(1), DELTA, EPS
      EXTERNAL OP, IOVECT
C
C THIS SUBROUTINE POST PROCESSES THE EIGENVECTORS.  BLOCK MATRIX
C VECTOR PRODUCTS ARE USED TO MINIMIZED THE NUMBER OF CALLS TO OP.
C
      INTEGER I, J, JJ, K, KK, L, M, MOD
      DOUBLE PRECISION HMIN, HMAX, TEMP, DDOT, DNRM2, DZERO(1)
      EXTERNAL DAXPY, DCOPY, DDOT, DLAGER, DLAEIG
C
C IF RARITZ IS .TRUE.  A FINAL RAYLEIGH-RITZ PROCEDURE IS APPLIED
C TO THE EIGENVECTORS.
C
      DZERO(1) = 0.0D0
      IF (.NOT.RARITZ) GO TO 190
C
C ------------------------------------------------------------------
C
C THIS CONSTRUCTS H=Q*AQ, WHERE THE COLUMNS OF Q ARE THE
C APPROXIMATE EIGENVECTORS.  TEMP = -1 IS USED WHEN SMALL IS
C FALSE TO AVOID HAVING TO RESORT THE EIGENVALUES AND EIGENVECTORS
C COMPUTED BY DLAEIG.
C
      CALL DCOPY(NPERM*NPERM, DZERO, 0, H, 1)
      TEMP = -1.0D0
      IF (SMALL) TEMP = 1.0D0
      M = MOD(NPERM,NBLOCK)
      IF (M.EQ.0) GO TO 40
      DO 10 I=1,M
         CALL DCOPY(N, VEC(1,I), 1, P(1,I), 1)
   10 CONTINUE
      CALL IOVECT(N, M, P, M, 0)
      CALL OP(N, M, P, Q)
      NOP = NOP + 1
      DO 30 I=1,M
         DO 20 J=I,NPERM
            JJ = J - I + 1
            H(JJ,I) = TEMP*DDOT(N,VEC(1,J),1,Q(1,I),1)
   20    CONTINUE
   30 CONTINUE
      IF (NPERM.LT.NBLOCK) GO TO 90
   40 M = M + NBLOCK
      DO 80 I=M,NPERM,NBLOCK
         DO 50 J=1,NBLOCK
            L = I - NBLOCK + J
            CALL DCOPY(N, VEC(1,L), 1, P(1,J), 1)
   50    CONTINUE
         CALL IOVECT(N, NBLOCK, P, I, 0)
         CALL OP(N, NBLOCK, P, Q)
         NOP = NOP + 1
         DO 70 J=1,NBLOCK
            L = I - NBLOCK + J
            DO 60 K=L,NPERM
               KK = K - L + 1
               H(KK,L) = TEMP*DDOT(N,VEC(1,K),1,Q(1,J),1)
   60       CONTINUE
   70      CONTINUE
   80 CONTINUE
C
C THIS COMPUTES THE SPECTRAL DECOMPOSITION OF H.
C
   90 HMIN = H(1,1)
      HMAX = H(1,1)
      CALL DLAGER(NPERM, NPERM, 1, H, HMIN, HMAX)
      CALL DLAEIG(NPERM, NPERM, 1, NPERM, H, VAL, NPERM,
     1  HV, BOUND, P, D, Q, EPS, HMIN, HMAX)
C
C THIS COMPUTES THE RITZ VECTORS--THE COLUMNS OF
C Y = QS WHERE S IS THE MATRIX OF EIGENVECTORS OF H.
C
      DO 120 I=1,NPERM
         CALL DCOPY(N, DZERO, 0, VEC(1,I), 1)
  120 CONTINUE
      M = MOD(NPERM,NBLOCK)
      IF (M.EQ.0) GO TO 150
      CALL IOVECT(N, M, P, M, 1)
      DO 140 I=1,M
         DO 130 J=1,NPERM
            CALL DAXPY(N, HV(I,J), P(1,I), 1, VEC(1,J), 1)
  130    CONTINUE
  140 CONTINUE
      IF (NPERM.LT.NBLOCK) GO TO 190
  150 M = M + NBLOCK
      DO 180 I=M,NPERM,NBLOCK
         CALL IOVECT(N, NBLOCK, P, I, 1)
         DO 170 J=1,NBLOCK
            L = I - NBLOCK + J
            DO 160 K=1,NPERM
               CALL DAXPY(N, HV(L,K), P(1,J), 1, VEC(1,K), 1)
  160       CONTINUE
  170    CONTINUE
  180 CONTINUE
C
C ------------------------------------------------------------------
C
C THIS SECTION COMPUTES THE RAYLEIGH QUOTIENTS (IN VAL(*,1))
C AND RESIDUAL NORMS (IN VAL(*,2)) OF THE EIGENVECTORS.
C
  190 IF (.NOT.SMALL) DELTA = -DELTA
      M = MOD(NPERM,NBLOCK)
      IF (M.EQ.0) GO TO 220
      DO 200 I=1,M
         CALL DCOPY(N, VEC(1,I), 1, P(1,I), 1)
  200 CONTINUE
      CALL OP(N, M, P, Q)
      NOP = NOP + 1
      DO 210 I=1,M
         VAL(I,1) = DDOT(N,P(1,I),1,Q(1,I),1)
         CALL DAXPY(N, -VAL(I,1), P(1,I), 1, Q(1,I), 1)
         VAL(I,2) = DNRM2(N,Q(1,I),1)
  210 CONTINUE
      IF (NPERM.LT.NBLOCK) GO TO 260
  220 M = M + 1
      DO 250 I=M,NPERM,NBLOCK
         DO 230 J=1,NBLOCK
            L = I - 1 + J
            CALL DCOPY(N, VEC(1,L), 1, P(1,J), 1)
  230    CONTINUE
         CALL OP(N, NBLOCK, P, Q)
         NOP = NOP + 1
         DO 240 J=1,NBLOCK
            L = I - 1 + J
            VAL(L,1) = DDOT(N,P(1,J),1,Q(1,J),1)
            CALL DAXPY(N, -VAL(L,1), P(1,J), 1, Q(1,J), 1)
            VAL(L,2) = DNRM2(N,Q(1,J),1)
  240    CONTINUE
  250 CONTINUE
C
C THIS COMPUTES THE ACCURACY ESTIMATES.  FOR CONSISTENCY WITH DILASO
C A DO LOOP IS NOT USED.
C
  260 I = 0
  270 I = I + 1
      IF (I.GT.NPERM) RETURN
      TEMP = DELTA - VAL(I,1)
      IF (.NOT.SMALL) TEMP = -TEMP
      VAL(I,4) = 0.0D0
      IF (TEMP.GT.0.0D0) VAL(I,4) = VAL(I,2)/TEMP
      VAL(I,3) = VAL(I,4)*VAL(I,2)
      GO TO 270
C
      END

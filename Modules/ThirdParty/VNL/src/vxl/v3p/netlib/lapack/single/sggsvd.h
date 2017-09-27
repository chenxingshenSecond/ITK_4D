extern int v3p_netlib_sggsvd_(
  const char *jobu,
  const char *jobv,
  const char *jobq,
  v3p_netlib_integer *m,
  v3p_netlib_integer *n,
  v3p_netlib_integer *p,
  v3p_netlib_integer *k,
  v3p_netlib_integer *l,
  v3p_netlib_real *a,
  v3p_netlib_integer *lda,
  v3p_netlib_real *b,
  v3p_netlib_integer *ldb,
  v3p_netlib_real *alpha,
  v3p_netlib_real *beta,
  v3p_netlib_real *u,
  v3p_netlib_integer *ldu,
  v3p_netlib_real *v,
  v3p_netlib_integer *ldv,
  v3p_netlib_real *q,
  v3p_netlib_integer *ldq,
  v3p_netlib_real *work,
  v3p_netlib_integer *iwork,
  v3p_netlib_integer *info,
  v3p_netlib_ftnlen jobu_len,
  v3p_netlib_ftnlen jobv_len,
  v3p_netlib_ftnlen jobq_len
  );

/*: Minimizes the sum of the squares of m nonlin functions in n variables */
extern int v3p_netlib_lmdif_(
  void (*fcn)(v3p_netlib_integer*,
              v3p_netlib_integer*,
              v3p_netlib_doublereal*,
              v3p_netlib_doublereal*,
              v3p_netlib_integer*,
              void*),
  v3p_netlib_integer *m,
  v3p_netlib_integer *n,
  v3p_netlib_doublereal *x,
  v3p_netlib_doublereal *fvec,
  v3p_netlib_doublereal *ftol,
  v3p_netlib_doublereal *xtol,
  v3p_netlib_doublereal *gtol,
  v3p_netlib_integer *maxfev,
  v3p_netlib_doublereal *epsfcn,
  v3p_netlib_doublereal *diag,
  v3p_netlib_integer *mode,
  v3p_netlib_doublereal *factor,
  v3p_netlib_integer *nprint,
  v3p_netlib_integer *info,
  v3p_netlib_integer *nfev,
  v3p_netlib_doublereal *fjac,
  v3p_netlib_integer *ldfjac,
  v3p_netlib_integer *ipvt,
  v3p_netlib_doublereal *qtf,
  v3p_netlib_doublereal *wa1,
  v3p_netlib_doublereal *wa2,
  v3p_netlib_doublereal *wa3,
  v3p_netlib_doublereal *wa4,
  void* userdata
  );

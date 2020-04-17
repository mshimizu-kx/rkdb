/*---------------------------------------------------------*/
/*  File: r2q_ex.c                                         */
/*  Overview: Distinct code in rkdb for R -> Q interface   */
/*---------------------------------------------------------*/

/*
 * Conversion from R to Q
 */
 
 ZK from_pairlist_robject(SEXP sxp) {
  K k= knk(0);
  K v= knk(0);
  SEXP s= sxp;
  while(s!=R_NilValue){
    jk(&k,from_any_robject(TAG(s)));
    jk(&v,from_any_robject(CAR(s)));
    s= CDR(s);
  }
  return xD(k, v);
}
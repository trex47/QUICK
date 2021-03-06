#ifdef COMPILE_PK09
static __constant__ lda_ptr maple2cf_lda[31] = 
#else
static __constant__ lda_ptr maple2cf_lda[30] = 
#endif
{&xc_lda_c_1d_csc_func_kernel,
&xc_lda_c_1d_loos_func_kernel,
&xc_lda_c_2d_amgb_func_kernel,
&xc_lda_c_2d_prm_func_kernel,
&xc_lda_c_chachiyo_func_kernel,
&xc_lda_c_gk72_func_kernel,
&xc_lda_c_gombas_func_kernel,
&xc_lda_c_hl_func_kernel,
&xc_lda_c_lp96_func_kernel,
&xc_lda_c_ml1_func_kernel,
&xc_lda_c_pw_func_kernel,
&xc_lda_c_pz_func_kernel,
&xc_lda_c_rc04_func_kernel,
&xc_lda_c_rpa_func_kernel,
&xc_lda_c_vwn_1_func_kernel,
&xc_lda_c_vwn_2_func_kernel,
&xc_lda_c_vwn_3_func_kernel,
&xc_lda_c_vwn_4_func_kernel,
&xc_lda_c_vwn_func_kernel,
&xc_lda_c_vwn_rpa_func_kernel,
&xc_lda_c_wigner_func_kernel,
&xc_lda_k_tf_func_kernel,
&xc_lda_k_zlp_func_kernel,
&xc_lda_x_func_kernel,
&xc_lda_x_2d_func_kernel,
&xc_lda_xc_1d_ehwlrg_func_kernel,
&xc_lda_xc_ksdt_func_kernel,
&xc_lda_xc_teter93_func_kernel,
&xc_lda_xc_zlp_func_kernel,
&xc_lda_x_rel_func_kernel
#ifdef COMPILE_PK09
,&xc_lda_c_pk09_func_kernel
#endif
//,&xc_lda_x_erf_func_kernel
};

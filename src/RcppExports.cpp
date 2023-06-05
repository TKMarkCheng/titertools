// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif


RcppExport SEXP _rcpp_module_boot_stan_fit4compare_crossreactivity_breadth_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4gmt_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4gmt_fixed_sigma_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4gmt_me_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4lm_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4logdiff_unpaired_me_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4priors_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4sr_effects_mod();
RcppExport SEXP _rcpp_module_boot_stan_fit4sr_effects_fixed_sigma_mod();

static const R_CallMethodDef CallEntries[] = {
    {"_rcpp_module_boot_stan_fit4compare_crossreactivity_breadth_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4compare_crossreactivity_breadth_mod, 0},
    {"_rcpp_module_boot_stan_fit4gmt_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4gmt_mod, 0},
    {"_rcpp_module_boot_stan_fit4gmt_fixed_sigma_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4gmt_fixed_sigma_mod, 0},
    {"_rcpp_module_boot_stan_fit4gmt_me_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4gmt_me_mod, 0},
    {"_rcpp_module_boot_stan_fit4lm_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4lm_mod, 0},
    {"_rcpp_module_boot_stan_fit4logdiff_unpaired_me_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4logdiff_unpaired_me_mod, 0},
    {"_rcpp_module_boot_stan_fit4priors_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4priors_mod, 0},
    {"_rcpp_module_boot_stan_fit4sr_effects_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4sr_effects_mod, 0},
    {"_rcpp_module_boot_stan_fit4sr_effects_fixed_sigma_mod", (DL_FUNC) &_rcpp_module_boot_stan_fit4sr_effects_fixed_sigma_mod, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_titertools(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

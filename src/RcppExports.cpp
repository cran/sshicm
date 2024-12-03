// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppThread.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// IC_SSH
double IC_SSH(const std::vector<double>& d, const std::vector<int>& s, const std::string& bin_method);
RcppExport SEXP _sshicm_IC_SSH(SEXP dSEXP, SEXP sSEXP, SEXP bin_methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<double>& >::type d(dSEXP);
    Rcpp::traits::input_parameter< const std::vector<int>& >::type s(sSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type bin_method(bin_methodSEXP);
    rcpp_result_gen = Rcpp::wrap(IC_SSH(d, s, bin_method));
    return rcpp_result_gen;
END_RCPP
}
// IC_SSHICM
std::vector<double> IC_SSHICM(const std::vector<double>& d, const std::vector<int>& s, unsigned int seed, int permutation_number, const std::string& bin_method);
RcppExport SEXP _sshicm_IC_SSHICM(SEXP dSEXP, SEXP sSEXP, SEXP seedSEXP, SEXP permutation_numberSEXP, SEXP bin_methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<double>& >::type d(dSEXP);
    Rcpp::traits::input_parameter< const std::vector<int>& >::type s(sSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< int >::type permutation_number(permutation_numberSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type bin_method(bin_methodSEXP);
    rcpp_result_gen = Rcpp::wrap(IC_SSHICM(d, s, seed, permutation_number, bin_method));
    return rcpp_result_gen;
END_RCPP
}
// IN_SSH
double IN_SSH(const std::vector<int>& d, const std::vector<int>& s);
RcppExport SEXP _sshicm_IN_SSH(SEXP dSEXP, SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<int>& >::type d(dSEXP);
    Rcpp::traits::input_parameter< const std::vector<int>& >::type s(sSEXP);
    rcpp_result_gen = Rcpp::wrap(IN_SSH(d, s));
    return rcpp_result_gen;
END_RCPP
}
// IN_SSHICM
std::vector<double> IN_SSHICM(const std::vector<int>& d, const std::vector<int>& s, unsigned int seed, int permutation_number);
RcppExport SEXP _sshicm_IN_SSHICM(SEXP dSEXP, SEXP sSEXP, SEXP seedSEXP, SEXP permutation_numberSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<int>& >::type d(dSEXP);
    Rcpp::traits::input_parameter< const std::vector<int>& >::type s(sSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< int >::type permutation_number(permutation_numberSEXP);
    rcpp_result_gen = Rcpp::wrap(IN_SSHICM(d, s, seed, permutation_number));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_sshicm_IC_SSH", (DL_FUNC) &_sshicm_IC_SSH, 3},
    {"_sshicm_IC_SSHICM", (DL_FUNC) &_sshicm_IC_SSHICM, 5},
    {"_sshicm_IN_SSH", (DL_FUNC) &_sshicm_IN_SSH, 2},
    {"_sshicm_IN_SSHICM", (DL_FUNC) &_sshicm_IN_SSHICM, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_sshicm(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

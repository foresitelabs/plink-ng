// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// NewPgen
SEXP NewPgen(String filename, Nullable<List> pvar, Nullable<int> raw_sample_ct, Nullable<IntegerVector> sample_subset);
RcppExport SEXP _pgenlibr_NewPgen(SEXP filenameSEXP, SEXP pvarSEXP, SEXP raw_sample_ctSEXP, SEXP sample_subsetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< Nullable<List> >::type pvar(pvarSEXP);
    Rcpp::traits::input_parameter< Nullable<int> >::type raw_sample_ct(raw_sample_ctSEXP);
    Rcpp::traits::input_parameter< Nullable<IntegerVector> >::type sample_subset(sample_subsetSEXP);
    rcpp_result_gen = Rcpp::wrap(NewPgen(filename, pvar, raw_sample_ct, sample_subset));
    return rcpp_result_gen;
END_RCPP
}
// GetRawSampleCt
int GetRawSampleCt(List pgen);
RcppExport SEXP _pgenlibr_GetRawSampleCt(SEXP pgenSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type pgen(pgenSEXP);
    rcpp_result_gen = Rcpp::wrap(GetRawSampleCt(pgen));
    return rcpp_result_gen;
END_RCPP
}
// GetVariantCt
int GetVariantCt(List pvar_or_pgen);
RcppExport SEXP _pgenlibr_GetVariantCt(SEXP pvar_or_pgenSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type pvar_or_pgen(pvar_or_pgenSEXP);
    rcpp_result_gen = Rcpp::wrap(GetVariantCt(pvar_or_pgen));
    return rcpp_result_gen;
END_RCPP
}
// GetAlleleCt
int GetAlleleCt(List pvar_or_pgen, int variant_num);
RcppExport SEXP _pgenlibr_GetAlleleCt(SEXP pvar_or_pgenSEXP, SEXP variant_numSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type pvar_or_pgen(pvar_or_pgenSEXP);
    Rcpp::traits::input_parameter< int >::type variant_num(variant_numSEXP);
    rcpp_result_gen = Rcpp::wrap(GetAlleleCt(pvar_or_pgen, variant_num));
    return rcpp_result_gen;
END_RCPP
}
// GetMaxAlleleCt
int GetMaxAlleleCt(List pvar_or_pgen);
RcppExport SEXP _pgenlibr_GetMaxAlleleCt(SEXP pvar_or_pgenSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type pvar_or_pgen(pvar_or_pgenSEXP);
    rcpp_result_gen = Rcpp::wrap(GetMaxAlleleCt(pvar_or_pgen));
    return rcpp_result_gen;
END_RCPP
}
// HardcallPhasePresent
bool HardcallPhasePresent(List pgen);
RcppExport SEXP _pgenlibr_HardcallPhasePresent(SEXP pgenSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type pgen(pgenSEXP);
    rcpp_result_gen = Rcpp::wrap(HardcallPhasePresent(pgen));
    return rcpp_result_gen;
END_RCPP
}
// Buf
NumericVector Buf(List pgen);
RcppExport SEXP _pgenlibr_Buf(SEXP pgenSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type pgen(pgenSEXP);
    rcpp_result_gen = Rcpp::wrap(Buf(pgen));
    return rcpp_result_gen;
END_RCPP
}
// AlleleCodeBuf
NumericVector AlleleCodeBuf(List pgen);
RcppExport SEXP _pgenlibr_AlleleCodeBuf(SEXP pgenSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type pgen(pgenSEXP);
    rcpp_result_gen = Rcpp::wrap(AlleleCodeBuf(pgen));
    return rcpp_result_gen;
END_RCPP
}
// IntBuf
IntegerVector IntBuf(List pgen);
RcppExport SEXP _pgenlibr_IntBuf(SEXP pgenSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type pgen(pgenSEXP);
    rcpp_result_gen = Rcpp::wrap(IntBuf(pgen));
    return rcpp_result_gen;
END_RCPP
}
// IntAlleleCodeBuf
IntegerVector IntAlleleCodeBuf(List pgen);
RcppExport SEXP _pgenlibr_IntAlleleCodeBuf(SEXP pgenSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type pgen(pgenSEXP);
    rcpp_result_gen = Rcpp::wrap(IntAlleleCodeBuf(pgen));
    return rcpp_result_gen;
END_RCPP
}
// BoolBuf
LogicalVector BoolBuf(List pgen);
RcppExport SEXP _pgenlibr_BoolBuf(SEXP pgenSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type pgen(pgenSEXP);
    rcpp_result_gen = Rcpp::wrap(BoolBuf(pgen));
    return rcpp_result_gen;
END_RCPP
}
// ReadHardcalls
void ReadHardcalls(List pgen, SEXP buf, int variant_num, int allele_num);
RcppExport SEXP _pgenlibr_ReadHardcalls(SEXP pgenSEXP, SEXP bufSEXP, SEXP variant_numSEXP, SEXP allele_numSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type pgen(pgenSEXP);
    Rcpp::traits::input_parameter< SEXP >::type buf(bufSEXP);
    Rcpp::traits::input_parameter< int >::type variant_num(variant_numSEXP);
    Rcpp::traits::input_parameter< int >::type allele_num(allele_numSEXP);
    ReadHardcalls(pgen, buf, variant_num, allele_num);
    return R_NilValue;
END_RCPP
}
// Read
void Read(List pgen, NumericVector buf, int variant_num, int allele_num);
RcppExport SEXP _pgenlibr_Read(SEXP pgenSEXP, SEXP bufSEXP, SEXP variant_numSEXP, SEXP allele_numSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type pgen(pgenSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type buf(bufSEXP);
    Rcpp::traits::input_parameter< int >::type variant_num(variant_numSEXP);
    Rcpp::traits::input_parameter< int >::type allele_num(allele_numSEXP);
    Read(pgen, buf, variant_num, allele_num);
    return R_NilValue;
END_RCPP
}
// ReadAlleles
void ReadAlleles(List pgen, SEXP acbuf, int variant_num, Nullable<LogicalVector> phasepresent_buf);
RcppExport SEXP _pgenlibr_ReadAlleles(SEXP pgenSEXP, SEXP acbufSEXP, SEXP variant_numSEXP, SEXP phasepresent_bufSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type pgen(pgenSEXP);
    Rcpp::traits::input_parameter< SEXP >::type acbuf(acbufSEXP);
    Rcpp::traits::input_parameter< int >::type variant_num(variant_numSEXP);
    Rcpp::traits::input_parameter< Nullable<LogicalVector> >::type phasepresent_buf(phasepresent_bufSEXP);
    ReadAlleles(pgen, acbuf, variant_num, phasepresent_buf);
    return R_NilValue;
END_RCPP
}
// ClosePgen
void ClosePgen(List pgen);
RcppExport SEXP _pgenlibr_ClosePgen(SEXP pgenSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type pgen(pgenSEXP);
    ClosePgen(pgen);
    return R_NilValue;
END_RCPP
}
// NewPvar
SEXP NewPvar(String filename);
RcppExport SEXP _pgenlibr_NewPvar(SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< String >::type filename(filenameSEXP);
    rcpp_result_gen = Rcpp::wrap(NewPvar(filename));
    return rcpp_result_gen;
END_RCPP
}
// GetVariantId
String GetVariantId(List pvar, int variant_num);
RcppExport SEXP _pgenlibr_GetVariantId(SEXP pvarSEXP, SEXP variant_numSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type pvar(pvarSEXP);
    Rcpp::traits::input_parameter< int >::type variant_num(variant_numSEXP);
    rcpp_result_gen = Rcpp::wrap(GetVariantId(pvar, variant_num));
    return rcpp_result_gen;
END_RCPP
}
// GetAlleleCode
String GetAlleleCode(List pvar, int variant_num, int allele_num);
RcppExport SEXP _pgenlibr_GetAlleleCode(SEXP pvarSEXP, SEXP variant_numSEXP, SEXP allele_numSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type pvar(pvarSEXP);
    Rcpp::traits::input_parameter< int >::type variant_num(variant_numSEXP);
    Rcpp::traits::input_parameter< int >::type allele_num(allele_numSEXP);
    rcpp_result_gen = Rcpp::wrap(GetAlleleCode(pvar, variant_num, allele_num));
    return rcpp_result_gen;
END_RCPP
}
// ClosePvar
void ClosePvar(List pvar);
RcppExport SEXP _pgenlibr_ClosePvar(SEXP pvarSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type pvar(pvarSEXP);
    ClosePvar(pvar);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_pgenlibr_NewPgen", (DL_FUNC) &_pgenlibr_NewPgen, 4},
    {"_pgenlibr_GetRawSampleCt", (DL_FUNC) &_pgenlibr_GetRawSampleCt, 1},
    {"_pgenlibr_GetVariantCt", (DL_FUNC) &_pgenlibr_GetVariantCt, 1},
    {"_pgenlibr_GetAlleleCt", (DL_FUNC) &_pgenlibr_GetAlleleCt, 2},
    {"_pgenlibr_GetMaxAlleleCt", (DL_FUNC) &_pgenlibr_GetMaxAlleleCt, 1},
    {"_pgenlibr_HardcallPhasePresent", (DL_FUNC) &_pgenlibr_HardcallPhasePresent, 1},
    {"_pgenlibr_Buf", (DL_FUNC) &_pgenlibr_Buf, 1},
    {"_pgenlibr_AlleleCodeBuf", (DL_FUNC) &_pgenlibr_AlleleCodeBuf, 1},
    {"_pgenlibr_IntBuf", (DL_FUNC) &_pgenlibr_IntBuf, 1},
    {"_pgenlibr_IntAlleleCodeBuf", (DL_FUNC) &_pgenlibr_IntAlleleCodeBuf, 1},
    {"_pgenlibr_BoolBuf", (DL_FUNC) &_pgenlibr_BoolBuf, 1},
    {"_pgenlibr_ReadHardcalls", (DL_FUNC) &_pgenlibr_ReadHardcalls, 4},
    {"_pgenlibr_Read", (DL_FUNC) &_pgenlibr_Read, 4},
    {"_pgenlibr_ReadAlleles", (DL_FUNC) &_pgenlibr_ReadAlleles, 4},
    {"_pgenlibr_ClosePgen", (DL_FUNC) &_pgenlibr_ClosePgen, 1},
    {"_pgenlibr_NewPvar", (DL_FUNC) &_pgenlibr_NewPvar, 1},
    {"_pgenlibr_GetVariantId", (DL_FUNC) &_pgenlibr_GetVariantId, 2},
    {"_pgenlibr_GetAlleleCode", (DL_FUNC) &_pgenlibr_GetAlleleCode, 3},
    {"_pgenlibr_ClosePvar", (DL_FUNC) &_pgenlibr_ClosePvar, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_pgenlibr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
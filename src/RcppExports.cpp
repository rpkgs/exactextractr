// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// CPP_coverage_fraction
Rcpp::S4 CPP_coverage_fraction(Rcpp::S4& rast, const Rcpp::RawVector& wkb, bool crop);
RcppExport SEXP _exactextractr_CPP_coverage_fraction(SEXP rastSEXP, SEXP wkbSEXP, SEXP cropSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4& >::type rast(rastSEXP);
    Rcpp::traits::input_parameter< const Rcpp::RawVector& >::type wkb(wkbSEXP);
    Rcpp::traits::input_parameter< bool >::type crop(cropSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_coverage_fraction(rast, wkb, crop));
    return rcpp_result_gen;
END_RCPP
}
// CPP_exact_extract2
Rcpp::List CPP_exact_extract2(Rcpp::S4& rast, const Rcpp::RawVector& wkb);
RcppExport SEXP _exactextractr_CPP_exact_extract2(SEXP rastSEXP, SEXP wkbSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4& >::type rast(rastSEXP);
    Rcpp::traits::input_parameter< const Rcpp::RawVector& >::type wkb(wkbSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_exact_extract2(rast, wkb));
    return rcpp_result_gen;
END_RCPP
}
// CPP_exact_extract
Rcpp::List CPP_exact_extract(Rcpp::S4& rast, Rcpp::Nullable<Rcpp::S4>& weights, const Rcpp::RawVector& wkb, double default_value, double default_weight, bool include_xy, bool include_cell_number, bool include_area, bool area_weights, bool coverage_areas, Rcpp::Nullable<Rcpp::CharacterVector>& p_area_method, Rcpp::Nullable<Rcpp::List>& include_cols, Rcpp::CharacterVector& src_names, Rcpp::Nullable<Rcpp::CharacterVector>& p_weights_names, bool warn_on_disaggregate);
RcppExport SEXP _exactextractr_CPP_exact_extract(SEXP rastSEXP, SEXP weightsSEXP, SEXP wkbSEXP, SEXP default_valueSEXP, SEXP default_weightSEXP, SEXP include_xySEXP, SEXP include_cell_numberSEXP, SEXP include_areaSEXP, SEXP area_weightsSEXP, SEXP coverage_areasSEXP, SEXP p_area_methodSEXP, SEXP include_colsSEXP, SEXP src_namesSEXP, SEXP p_weights_namesSEXP, SEXP warn_on_disaggregateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4& >::type rast(rastSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::S4>& >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::RawVector& >::type wkb(wkbSEXP);
    Rcpp::traits::input_parameter< double >::type default_value(default_valueSEXP);
    Rcpp::traits::input_parameter< double >::type default_weight(default_weightSEXP);
    Rcpp::traits::input_parameter< bool >::type include_xy(include_xySEXP);
    Rcpp::traits::input_parameter< bool >::type include_cell_number(include_cell_numberSEXP);
    Rcpp::traits::input_parameter< bool >::type include_area(include_areaSEXP);
    Rcpp::traits::input_parameter< bool >::type area_weights(area_weightsSEXP);
    Rcpp::traits::input_parameter< bool >::type coverage_areas(coverage_areasSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::CharacterVector>& >::type p_area_method(p_area_methodSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::List>& >::type include_cols(include_colsSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector& >::type src_names(src_namesSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::CharacterVector>& >::type p_weights_names(p_weights_namesSEXP);
    Rcpp::traits::input_parameter< bool >::type warn_on_disaggregate(warn_on_disaggregateSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_exact_extract(rast, weights, wkb, default_value, default_weight, include_xy, include_cell_number, include_area, area_weights, coverage_areas, p_area_method, include_cols, src_names, p_weights_names, warn_on_disaggregate));
    return rcpp_result_gen;
END_RCPP
}
// CPP_stats
Rcpp::NumericMatrix CPP_stats(Rcpp::S4& rast, Rcpp::Nullable<Rcpp::S4> weights, const Rcpp::RawVector& wkb, double default_value, double default_weight, bool coverage_areas, Rcpp::Nullable<Rcpp::CharacterVector>& p_area_method, const Rcpp::StringVector& stats, int max_cells_in_memory, const Rcpp::Nullable<Rcpp::NumericVector>& quantiles);
RcppExport SEXP _exactextractr_CPP_stats(SEXP rastSEXP, SEXP weightsSEXP, SEXP wkbSEXP, SEXP default_valueSEXP, SEXP default_weightSEXP, SEXP coverage_areasSEXP, SEXP p_area_methodSEXP, SEXP statsSEXP, SEXP max_cells_in_memorySEXP, SEXP quantilesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4& >::type rast(rastSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::S4> >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::RawVector& >::type wkb(wkbSEXP);
    Rcpp::traits::input_parameter< double >::type default_value(default_valueSEXP);
    Rcpp::traits::input_parameter< double >::type default_weight(default_weightSEXP);
    Rcpp::traits::input_parameter< bool >::type coverage_areas(coverage_areasSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<Rcpp::CharacterVector>& >::type p_area_method(p_area_methodSEXP);
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type stats(statsSEXP);
    Rcpp::traits::input_parameter< int >::type max_cells_in_memory(max_cells_in_memorySEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<Rcpp::NumericVector>& >::type quantiles(quantilesSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_stats(rast, weights, wkb, default_value, default_weight, coverage_areas, p_area_method, stats, max_cells_in_memory, quantiles));
    return rcpp_result_gen;
END_RCPP
}
// CPP_resample
Rcpp::S4 CPP_resample(Rcpp::S4& rast_in, Rcpp::S4& rast_out, const Rcpp::StringVector& stat);
RcppExport SEXP _exactextractr_CPP_resample(SEXP rast_inSEXP, SEXP rast_outSEXP, SEXP statSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::S4& >::type rast_in(rast_inSEXP);
    Rcpp::traits::input_parameter< Rcpp::S4& >::type rast_out(rast_outSEXP);
    Rcpp::traits::input_parameter< const Rcpp::StringVector& >::type stat(statSEXP);
    rcpp_result_gen = Rcpp::wrap(CPP_resample(rast_in, rast_out, stat));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_exactextractr_CPP_coverage_fraction", (DL_FUNC) &_exactextractr_CPP_coverage_fraction, 3},
    {"_exactextractr_CPP_exact_extract2", (DL_FUNC) &_exactextractr_CPP_exact_extract2, 2},
    {"_exactextractr_CPP_exact_extract", (DL_FUNC) &_exactextractr_CPP_exact_extract, 15},
    {"_exactextractr_CPP_stats", (DL_FUNC) &_exactextractr_CPP_stats, 10},
    {"_exactextractr_CPP_resample", (DL_FUNC) &_exactextractr_CPP_resample, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_exactextractr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

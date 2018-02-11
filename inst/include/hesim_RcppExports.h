// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#ifndef RCPP_hesim_RCPPEXPORTS_H_GEN_
#define RCPP_hesim_RCPPEXPORTS_H_GEN_

#include <RcppArmadillo.h>
#include <RcppEigen.h>
#include <Rcpp.h>

namespace hesim {

    using namespace Rcpp;

    namespace {
        void validateSignature(const char* sig) {
            Rcpp::Function require = Rcpp::Environment::base_env()["require"];
            require("hesim", Rcpp::Named("quietly") = true);
            typedef int(*Ptr_validate)(const char*);
            static Ptr_validate p_validate = (Ptr_validate)
                R_GetCCallable("hesim", "_hesim_RcppExport_validate");
            if (!p_validate(sig)) {
                throw Rcpp::function_not_exported(
                    "C++ function with signature '" + std::string(sig) + "' not found in hesim");
            }
        }
    }

    inline std::vector<double> C_weibull_to_weibullNMA(double shape, double scale) {
        typedef SEXP(*Ptr_C_weibull_to_weibullNMA)(SEXP,SEXP);
        static Ptr_C_weibull_to_weibullNMA p_C_weibull_to_weibullNMA = NULL;
        if (p_C_weibull_to_weibullNMA == NULL) {
            validateSignature("std::vector<double>(*C_weibull_to_weibullNMA)(double,double)");
            p_C_weibull_to_weibullNMA = (Ptr_C_weibull_to_weibullNMA)R_GetCCallable("hesim", "_hesim_C_weibull_to_weibullNMA");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_C_weibull_to_weibullNMA(Shield<SEXP>(Rcpp::wrap(shape)), Shield<SEXP>(Rcpp::wrap(scale)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<std::vector<double> >(rcpp_result_gen);
    }

    inline double qgompertz(double p, double shape, double rate) {
        typedef SEXP(*Ptr_qgompertz)(SEXP,SEXP,SEXP);
        static Ptr_qgompertz p_qgompertz = NULL;
        if (p_qgompertz == NULL) {
            validateSignature("double(*qgompertz)(double,double,double)");
            p_qgompertz = (Ptr_qgompertz)R_GetCCallable("hesim", "_hesim_qgompertz");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_qgompertz(Shield<SEXP>(Rcpp::wrap(p)), Shield<SEXP>(Rcpp::wrap(shape)), Shield<SEXP>(Rcpp::wrap(rate)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline double rgompertz(double shape, double rate) {
        typedef SEXP(*Ptr_rgompertz)(SEXP,SEXP);
        static Ptr_rgompertz p_rgompertz = NULL;
        if (p_rgompertz == NULL) {
            validateSignature("double(*rgompertz)(double,double)");
            p_rgompertz = (Ptr_rgompertz)R_GetCCallable("hesim", "_hesim_rgompertz");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_rgompertz(Shield<SEXP>(Rcpp::wrap(shape)), Shield<SEXP>(Rcpp::wrap(rate)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline double qllogis(double p, double shape, double scale, int lt = 1, int lg = 0) {
        typedef SEXP(*Ptr_qllogis)(SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_qllogis p_qllogis = NULL;
        if (p_qllogis == NULL) {
            validateSignature("double(*qllogis)(double,double,double,int,int)");
            p_qllogis = (Ptr_qllogis)R_GetCCallable("hesim", "_hesim_qllogis");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_qllogis(Shield<SEXP>(Rcpp::wrap(p)), Shield<SEXP>(Rcpp::wrap(shape)), Shield<SEXP>(Rcpp::wrap(scale)), Shield<SEXP>(Rcpp::wrap(lt)), Shield<SEXP>(Rcpp::wrap(lg)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline double rllogis(double shape, double scale) {
        typedef SEXP(*Ptr_rllogis)(SEXP,SEXP);
        static Ptr_rllogis p_rllogis = NULL;
        if (p_rllogis == NULL) {
            validateSignature("double(*rllogis)(double,double)");
            p_rllogis = (Ptr_rllogis)R_GetCCallable("hesim", "_hesim_rllogis");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_rllogis(Shield<SEXP>(Rcpp::wrap(shape)), Shield<SEXP>(Rcpp::wrap(scale)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline double rgengamma(double mu, double sigma, double Q) {
        typedef SEXP(*Ptr_rgengamma)(SEXP,SEXP,SEXP);
        static Ptr_rgengamma p_rgengamma = NULL;
        if (p_rgengamma == NULL) {
            validateSignature("double(*rgengamma)(double,double,double)");
            p_rgengamma = (Ptr_rgengamma)R_GetCCallable("hesim", "_hesim_rgengamma");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_rgengamma(Shield<SEXP>(Rcpp::wrap(mu)), Shield<SEXP>(Rcpp::wrap(sigma)), Shield<SEXP>(Rcpp::wrap(Q)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline std::vector<double> C_rgengamma_vec(int n, std::vector<double> mu, std::vector<double> sigma, std::vector<double> Q) {
        typedef SEXP(*Ptr_C_rgengamma_vec)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_C_rgengamma_vec p_C_rgengamma_vec = NULL;
        if (p_C_rgengamma_vec == NULL) {
            validateSignature("std::vector<double>(*C_rgengamma_vec)(int,std::vector<double>,std::vector<double>,std::vector<double>)");
            p_C_rgengamma_vec = (Ptr_C_rgengamma_vec)R_GetCCallable("hesim", "_hesim_C_rgengamma_vec");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_C_rgengamma_vec(Shield<SEXP>(Rcpp::wrap(n)), Shield<SEXP>(Rcpp::wrap(mu)), Shield<SEXP>(Rcpp::wrap(sigma)), Shield<SEXP>(Rcpp::wrap(Q)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<std::vector<double> >(rcpp_result_gen);
    }

    inline double rtruncnorm(double mean, double sd, double lower, double upper) {
        typedef SEXP(*Ptr_rtruncnorm)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_rtruncnorm p_rtruncnorm = NULL;
        if (p_rtruncnorm == NULL) {
            validateSignature("double(*rtruncnorm)(double,double,double,double)");
            p_rtruncnorm = (Ptr_rtruncnorm)R_GetCCallable("hesim", "_hesim_rtruncnorm");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_rtruncnorm(Shield<SEXP>(Rcpp::wrap(mean)), Shield<SEXP>(Rcpp::wrap(sd)), Shield<SEXP>(Rcpp::wrap(lower)), Shield<SEXP>(Rcpp::wrap(upper)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline double rpwexp(arma::rowvec rate, arma::rowvec time) {
        typedef SEXP(*Ptr_rpwexp)(SEXP,SEXP);
        static Ptr_rpwexp p_rpwexp = NULL;
        if (p_rpwexp == NULL) {
            validateSignature("double(*rpwexp)(arma::rowvec,arma::rowvec)");
            p_rpwexp = (Ptr_rpwexp)R_GetCCallable("hesim", "_hesim_rpwexp");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_rpwexp(Shield<SEXP>(Rcpp::wrap(rate)), Shield<SEXP>(Rcpp::wrap(time)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<double >(rcpp_result_gen);
    }

    inline std::vector<double> C_rpwexp_vec(int n, arma::mat rate, arma::rowvec time) {
        typedef SEXP(*Ptr_C_rpwexp_vec)(SEXP,SEXP,SEXP);
        static Ptr_C_rpwexp_vec p_C_rpwexp_vec = NULL;
        if (p_C_rpwexp_vec == NULL) {
            validateSignature("std::vector<double>(*C_rpwexp_vec)(int,arma::mat,arma::rowvec)");
            p_C_rpwexp_vec = (Ptr_C_rpwexp_vec)R_GetCCallable("hesim", "_hesim_C_rpwexp_vec");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_C_rpwexp_vec(Shield<SEXP>(Rcpp::wrap(n)), Shield<SEXP>(Rcpp::wrap(rate)), Shield<SEXP>(Rcpp::wrap(time)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<std::vector<double> >(rcpp_result_gen);
    }

    inline int rcat(arma::rowvec probs) {
        typedef SEXP(*Ptr_rcat)(SEXP);
        static Ptr_rcat p_rcat = NULL;
        if (p_rcat == NULL) {
            validateSignature("int(*rcat)(arma::rowvec)");
            p_rcat = (Ptr_rcat)R_GetCCallable("hesim", "_hesim_rcat");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_rcat(Shield<SEXP>(Rcpp::wrap(probs)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<int >(rcpp_result_gen);
    }

    inline arma::vec C_rcat_vec(int n, arma::mat probs) {
        typedef SEXP(*Ptr_C_rcat_vec)(SEXP,SEXP);
        static Ptr_C_rcat_vec p_C_rcat_vec = NULL;
        if (p_C_rcat_vec == NULL) {
            validateSignature("arma::vec(*C_rcat_vec)(int,arma::mat)");
            p_C_rcat_vec = (Ptr_C_rcat_vec)R_GetCCallable("hesim", "_hesim_C_rcat_vec");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_C_rcat_vec(Shield<SEXP>(Rcpp::wrap(n)), Shield<SEXP>(Rcpp::wrap(probs)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::vec >(rcpp_result_gen);
    }

    inline arma::rowvec rdirichlet(arma::rowvec alpha) {
        typedef SEXP(*Ptr_rdirichlet)(SEXP);
        static Ptr_rdirichlet p_rdirichlet = NULL;
        if (p_rdirichlet == NULL) {
            validateSignature("arma::rowvec(*rdirichlet)(arma::rowvec)");
            p_rdirichlet = (Ptr_rdirichlet)R_GetCCallable("hesim", "_hesim_rdirichlet");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_rdirichlet(Shield<SEXP>(Rcpp::wrap(alpha)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::rowvec >(rcpp_result_gen);
    }

    inline arma::cube C_rdirichlet_mat(int n, arma::mat alpha) {
        typedef SEXP(*Ptr_C_rdirichlet_mat)(SEXP,SEXP);
        static Ptr_C_rdirichlet_mat p_C_rdirichlet_mat = NULL;
        if (p_C_rdirichlet_mat == NULL) {
            validateSignature("arma::cube(*C_rdirichlet_mat)(int,arma::mat)");
            p_C_rdirichlet_mat = (Ptr_C_rdirichlet_mat)R_GetCCallable("hesim", "_hesim_C_rdirichlet_mat");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_C_rdirichlet_mat(Shield<SEXP>(Rcpp::wrap(n)), Shield<SEXP>(Rcpp::wrap(alpha)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::cube >(rcpp_result_gen);
    }

    inline arma::mat C_DisModSurv_summary(Rcpp::Environment R_DisModSurv, double discount_rate, std::vector<double> x, std::string type) {
        typedef SEXP(*Ptr_C_DisModSurv_summary)(SEXP,SEXP,SEXP,SEXP);
        static Ptr_C_DisModSurv_summary p_C_DisModSurv_summary = NULL;
        if (p_C_DisModSurv_summary == NULL) {
            validateSignature("arma::mat(*C_DisModSurv_summary)(Rcpp::Environment,double,std::vector<double>,std::string)");
            p_C_DisModSurv_summary = (Ptr_C_DisModSurv_summary)R_GetCCallable("hesim", "_hesim_C_DisModSurv_summary");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_C_DisModSurv_summary(Shield<SEXP>(Rcpp::wrap(R_DisModSurv)), Shield<SEXP>(Rcpp::wrap(discount_rate)), Shield<SEXP>(Rcpp::wrap(x)), Shield<SEXP>(Rcpp::wrap(type)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::mat >(rcpp_result_gen);
    }

    inline arma::mat C_DecModSurv_effects(Rcpp::Environment R_DisModSurv, int t, SEXP state_values, std::vector<double> discount_rate, std::vector<int> type) {
        typedef SEXP(*Ptr_C_DecModSurv_effects)(SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_C_DecModSurv_effects p_C_DecModSurv_effects = NULL;
        if (p_C_DecModSurv_effects == NULL) {
            validateSignature("arma::mat(*C_DecModSurv_effects)(Rcpp::Environment,int,SEXP,std::vector<double>,std::vector<int>)");
            p_C_DecModSurv_effects = (Ptr_C_DecModSurv_effects)R_GetCCallable("hesim", "_hesim_C_DecModSurv_effects");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_C_DecModSurv_effects(Shield<SEXP>(Rcpp::wrap(R_DisModSurv)), Shield<SEXP>(Rcpp::wrap(t)), Shield<SEXP>(Rcpp::wrap(state_values)), Shield<SEXP>(Rcpp::wrap(discount_rate)), Shield<SEXP>(Rcpp::wrap(type)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::mat >(rcpp_result_gen);
    }

    inline arma::mat C_DecModSurv_costs(Rcpp::Environment R_DisModSurv, std::vector<int> t, SEXP state_values, int n_components, std::vector<double> discount_rate) {
        typedef SEXP(*Ptr_C_DecModSurv_costs)(SEXP,SEXP,SEXP,SEXP,SEXP);
        static Ptr_C_DecModSurv_costs p_C_DecModSurv_costs = NULL;
        if (p_C_DecModSurv_costs == NULL) {
            validateSignature("arma::mat(*C_DecModSurv_costs)(Rcpp::Environment,std::vector<int>,SEXP,int,std::vector<double>)");
            p_C_DecModSurv_costs = (Ptr_C_DecModSurv_costs)R_GetCCallable("hesim", "_hesim_C_DecModSurv_costs");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_C_DecModSurv_costs(Shield<SEXP>(Rcpp::wrap(R_DisModSurv)), Shield<SEXP>(Rcpp::wrap(t)), Shield<SEXP>(Rcpp::wrap(state_values)), Shield<SEXP>(Rcpp::wrap(n_components)), Shield<SEXP>(Rcpp::wrap(discount_rate)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<arma::mat >(rcpp_result_gen);
    }

}

#endif // RCPP_hesim_RCPPEXPORTS_H_GEN_

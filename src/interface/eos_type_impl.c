

#include "eos_type_impl.h"

#include "eos-linear.h"
#include "eos-iapws95.h"
#include "eos-if97.h"
#include "eos-iaps84.h"
#include "eos-driesner07.h"
#ifdef USE_FREESTEAM
#include "eos-if97-freesteam.h"
#endif
#ifdef USE_PROST
#include "eos-iaps84-prost.h"
#include "eos-driesner07-prost.h"
#endif
#include "eos-iapws95sbtl-ph.h"


EOS_IMPL_REGISTER eos_impl_register[EOS_IMPL_ARRAY_MAX_SIZE];
EOS_IMPL_CREATE eos_impl_create[EOS_IMPL_ARRAY_MAX_SIZE];
EOS_IMPL_FREE eos_impl_free[EOS_IMPL_ARRAY_MAX_SIZE];
EOS_IMPL_CALC_RHO_PT eos_impl_calc_rho_pT[EOS_IMPL_ARRAY_MAX_SIZE];
EOS_IMPL_CALC_RHO_PH eos_impl_calc_rho_ph[EOS_IMPL_ARRAY_MAX_SIZE];
EOS_IMPL_CALC_DRHO_DT eos_impl_calc_drho_dh[EOS_IMPL_ARRAY_MAX_SIZE];
EOS_IMPL_CALC_DRHO_DT eos_impl_calc_drho_dT[EOS_IMPL_ARRAY_MAX_SIZE];
EOS_IMPL_CALC_DRHO_DP eos_impl_calc_drho_dp[EOS_IMPL_ARRAY_MAX_SIZE];
EOS_IMPL_CALC_U_PT eos_impl_calc_u_pT[EOS_IMPL_ARRAY_MAX_SIZE];
EOS_IMPL_CALC_H_RHOT eos_impl_calc_h_rhoT[EOS_IMPL_ARRAY_MAX_SIZE];
EOS_IMPL_CALC_H_PT eos_impl_calc_h_pT[EOS_IMPL_ARRAY_MAX_SIZE];
EOS_IMPL_CALC_DH_DT eos_impl_calc_dh_dT[EOS_IMPL_ARRAY_MAX_SIZE];
EOS_IMPL_CALC_DH_DP eos_impl_calc_dh_dp[EOS_IMPL_ARRAY_MAX_SIZE];
EOS_IMPL_CALC_P_RHOT eos_impl_calc_p_rhoT[EOS_IMPL_ARRAY_MAX_SIZE];
EOS_IMPL_CALC_T_PU eos_impl_calc_T_pu[EOS_IMPL_ARRAY_MAX_SIZE];
EOS_IMPL_CALC_T_PH eos_impl_calc_T_ph[EOS_IMPL_ARRAY_MAX_SIZE];
EOS_IMPL_CALC_WV_PH eos_impl_calc_wv_ph[EOS_IMPL_ARRAY_MAX_SIZE];
EOS_IMPL_CALC_SAT_P_T eos_impl_calc_sat_p_T[EOS_IMPL_ARRAY_MAX_SIZE];
EOS_IMPL_CALC_SAT_T_P eos_impl_calc_sat_T_p[EOS_IMPL_ARRAY_MAX_SIZE];
EOS_IMPL_CALC_SAT_RHOL_T eos_impl_calc_sat_rhol_T[EOS_IMPL_ARRAY_MAX_SIZE];
EOS_IMPL_CALC_SAT_RHOV_T eos_impl_calc_sat_rhov_T[EOS_IMPL_ARRAY_MAX_SIZE];
EOS_IMPL_CALC_SAT_RHOLV_T eos_impl_calc_sat_rholv_T[EOS_IMPL_ARRAY_MAX_SIZE];
EOS_IMPL_CALC_SAT_RHOLV_P eos_impl_calc_sat_rholv_p[EOS_IMPL_ARRAY_MAX_SIZE];
EOS_IMPL_CALC_SAT_RHOLV_T eos_impl_calc_sat_hlv_T[EOS_IMPL_ARRAY_MAX_SIZE];
EOS_IMPL_CALC_SAT_RHOLV_P eos_impl_calc_sat_hlv_p[EOS_IMPL_ARRAY_MAX_SIZE];
EOS_IMPL_CALC_VIS_RHOT eos_impl_calc_vis_rhoT[EOS_IMPL_ARRAY_MAX_SIZE];

void eos_impl_init_register()
{
    for (int i=0; i<EOS_IMPL_ARRAY_MAX_SIZE; i++)
        eos_impl_register[i] = NULL;

    eos_impl_register[EOS_TYPE_LINEAR] = eos_linear_register;
    eos_impl_register[EOS_TYPE_WATER_IAPWS95] = eos_iapws95_register;
    eos_impl_register[EOS_TYPE_WATER_IF97] = eos_if97_register;
    eos_impl_register[EOS_TYPE_WATER_IAPS84] = eos_iaps84_register;
    eos_impl_register[EOS_TYPE_H2ONaCl_DRIESNER07] = eos_driesner07_register;
#ifdef USE_FREESTEAM
    eos_impl_register[EOS_TYPE_WATER_IF97_FREESTEAM] = eos_if97_freesteam_register;
#endif
#ifdef USE_PROST
    eos_impl_register[EOS_TYPE_WATER_IAPS84_PROST] = eos_iaps84_prost_register;
    eos_impl_register[EOS_TYPE_H2ONaCl_DRIESNER07_PROST] = eos_driesner07_prost_register;
#endif
    eos_impl_register[EOS_TYPE_WATER_IAPWS95_SBTL] = eos_iapws95sbtl_ph_register;
}


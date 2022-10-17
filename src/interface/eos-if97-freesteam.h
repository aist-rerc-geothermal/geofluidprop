
#ifndef _EOS_IF97_FREESTEAM_H_
#define _EOS_IF97_FREESTEAM_H_

#include "eos_args.h"

void eos_if97_freesteam_register();

void* eos_if97_freesteam_create();

void eos_if97_freesteam_free(void* eos);

double eos_if97_freesteam_rho_pT(void* eos, EOS_ARGS* args);

double eos_if97_freesteam_rho_ph(void* eos, EOS_ARGS* args);

double eos_if97_freesteam_drho_dT(void* eos, EOS_ARGS* args);

double eos_if97_freesteam_drho_dp(void* eos, EOS_ARGS* args);

double eos_if97_freesteam_h_rhoT(void* eos, EOS_ARGS* args);

double eos_if97_freesteam_h_pT(void* eos, EOS_ARGS* args);

double eos_if97_freesteam_dh_dT(void* eos, EOS_ARGS* args);

double eos_if97_freesteam_dh_dp(void* eos, EOS_ARGS* args);

double eos_if97_freesteam_p_rhoT(void* eos, EOS_ARGS* args);

double eos_if97_freesteam_T_ph(void* eos, EOS_ARGS* args);

double eos_if97_freesteam_T_rhop(void* eos, EOS_ARGS* args);

double eos_if97_freesteam_sat_p_T(void* eos, EOS_ARGS* args);

double eos_if97_freesteam_sat_T_p(void* eos, EOS_ARGS* args);

double eos_if97_freesteam_sat_rhol_T(void* eos, EOS_ARGS* args);

double eos_if97_freesteam_sat_rhov_T(void* eos, EOS_ARGS* args);

double eos_if97_freesteam_wv_ph(void* eos, EOS_ARGS* args);

double eos_if97_freesteam_vis_rhoT(void* eos, EOS_ARGS* args);

double eos_if97_freesteam_vis_pT(void* eos, EOS_ARGS* args);

#endif // _EOS_IF97_FREESTEAM_H_

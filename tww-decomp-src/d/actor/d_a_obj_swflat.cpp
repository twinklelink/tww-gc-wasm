/**
 * d_a_obj_swflat.cpp
 * Object - Tower of the Gods - Floor switch (requires statues to stay active)
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_obj_swflat.h"
#include "d/d_cc_d.h"

namespace daObjSwflat {
static dCcD_SrcCyl l_cyl_src = {
    // dCcD_SrcGObjInf
    {
        /* Flags             */ 0,
        /* SrcObjAt  Type    */ 0,
        /* SrcObjAt  Atp     */ 0,
        /* SrcObjAt  SPrm    */ 0,
        /* SrcObjTg  Type    */ 0,
        /* SrcObjTg  SPrm    */ 0,
        /* SrcObjCo  SPrm    */ cCcD_CoSPrm_Set_e | cCcD_CoSPrm_IsOther_e | cCcD_CoSPrm_VsGrpAll_e | cCcD_CoSPrm_NoCrr_e | cCcD_CoSPrm_NoCoHitInfSet_e,
        /* SrcGObjAt Se      */ 0,
        /* SrcGObjAt HitMark */ dCcG_AtHitMark_None_e,
        /* SrcGObjAt Spl     */ dCcG_At_Spl_UNK0,
        /* SrcGObjAt Mtrl    */ 0,
        /* SrcGObjAt SPrm    */ 0,
        /* SrcGObjTg Se      */ 0,
        /* SrcGObjTg HitMark */ 0,
        /* SrcGObjTg Spl     */ dCcG_Tg_Spl_UNK0,
        /* SrcGObjTg Mtrl    */ 0,
        /* SrcGObjTg SPrm    */ dCcG_TgSPrm_NoHitMark_e,
        /* SrcGObjCo SPrm    */ 0,
    },
    // cM3dGCylS
    {{
        /* Center */ {0.0f, 0.0f, 0.0f},
        /* Radius */ 10.0f,
        /* Height */ 20.0f,
    }},
};
}


/* 000000EC-00000138       .text __ct__17daObjSwflat_HIO_cFv */
daObjSwflat_HIO_c::daObjSwflat_HIO_c() {
    /* __ct__17daObjSwflat_HIO_cFv: 无实义指令 */
}

/* 00000138-00000280       .text CreateHeap__Q211daObjSwflat5Act_cFv */
BOOL daObjSwflat::Act_c::CreateHeap() {
}

/* 000002C8-00000630       .text Create__Q211daObjSwflat5Act_cFv */
BOOL daObjSwflat::Act_c::Create() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        cullMtx = (this->field_0x2d0 + 36);
        /* ((daObjSwflat::Act_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->init_mtx(); */
        /* fopAcM_setCullSizeSphere(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* ((dCcD_Stts*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 728)))->Init(255, 255, _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* ((dCcD_Cyl*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 788)))->Set(((char*)&l_cyl_src__11daObjSwflat + 0)); */
        /* field_0x358 = (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 728); */
        /* field_0x460 = PrmAbstract<Q311daObjSwflat5Act_c5Prm_e>__5daObjFPC10fopAc_ac_cQ311daObjSwflat5Act_c5Prm_eQ311daObjSwflat5Act_c5Prm_e(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 2, 0); */
        /* field_0x463 = PrmAbstract<Q311daObjSwflat5Act_c5Prm_e>__5daObjFPC10fopAc_ac_cQ311daObjSwflat5Act_c5Prm_eQ311daObjSwflat5Act_c5Prm_e(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 8, 8); */
        /* field_0x464 = PrmAbstract<Q311daObjSwflat5Act_c5Prm_e>__5daObjFPC10fopAc_ac_cQ311daObjSwflat5Act_c5Prm_eQ311daObjSwflat5Act_c5Prm_e(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 8, 16); */
        /* field_0x458 = 0; */
        /* field_0x44c = 0; */
        /* field_0x450 = 0; */
        /* field_0x454 = 0; */
        /* field_0x467 = 0; */
        /* if (this->field_0x19 != 1) goto L_344; */
        /* if (this->field_0x463 == 255) goto L_324; */
        ((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->offSwitch(this->field_0x463, (this->field_0x1e2 & 255));
        /* L_324:; */
        /* if (this->field_0x464 == 255) goto L_344; */
        ((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->offSwitch(this->field_0x464, (this->field_0x1e2 & 255));
        /* L_344:; */
        /* if (this->field_0x460 != 2) goto L_38c; */
        /* if (((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->isSwitch(this->field_0x464, (this->field_0x1e2 & 255)) == 0) goto L_384; */
        /* field_0x460 = 0; */
        /* goto L_38c; */
        /* L_384:; */
        /* field_0x460 = 1; */
        /* L_38c:; */
        /* if (((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->isSwitch((this->field_0x464 & 16777215), (this->field_0x1e2 & 255)) == 0) goto L_468; */
        /* field_0x462 = 1; */
        /* field_0x461 = 1; */
        /* if (this->field_0x460 == 0) goto L_41c; */
        /* field_0x448 = ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
        /* field_0x466 = 250; */
        /* goto L_458; */
        /* L_41c:; */
        /* field_0x448 = 0; */
        /* field_0x466 = 0; */
        /* field_0x467 = ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
        /* field_0x10 = 0; */
        /* L_458:; */
        /* field_0x444 = 0; */
        /* field_0x465 = 0; */
        /* goto L_4d0; */
        /* L_468:; */
        /* field_0x462 = 0; */
        /* field_0x461 = 0; */
        /* field_0x444 = ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
        /* field_0x465 = 250; */
        /* field_0x448 = 0; */
        /* field_0x466 = 0; */
        /* L_4d0:; */
        /* field_0x468 = 0; */
        /* field_0x45c = 0; */
        /* field_0x45e = 0; */
        /* if (this->field_0x4 != 0) goto L_514; */
        /* field_0x4 = ((mDoHIO_subRoot_c*)(((char*)&mDoHIO_root + 4)))->createChild(((char*)&@stringBase0 + 0), ((char*)&l_HIO + 0)); */
        /* L_514:; */
        /* field_0x8 = (this->field_0x8 + 1); */
        return _restgpr_29(1, ((char*)&l_HIO + 0));
}

/* 00000630-000007BC       .text Mthd_Create__Q211daObjSwflat5Act_cFv */
cPhs_State daObjSwflat::Act_c::Mthd_Create() {
        /* if (/ * bne * / 1) goto L_618; */
        /* if (/ * beq * / 1) goto L_60c; */
        __ct();
        mAcch = 0;
        /* field_0x2f0 = 0; */
        __ct();
        /* field_0x2f0 = 0; */
        /* field_0x2f4 = 0; */
        __ct();
        /* field_0x114 = 0; */
        /* field_0x110 = 0; */
        /* field_0x12c = 0; */
        /* field_0x114 = 0; */
        /* field_0x12c = 0; */
        /* field_0x3c = 0; */
        /* field_0x114 = 0; */
        /* field_0x12c = 0; */
        /* L_60c:; */
        /* L_618:; */
        /* if (dComIfG_resLoad((this + 712), ((char*)&M_arcname__Q211daObjSwflat5Act_c + 0)) != 4) goto L_6b4; */
        /* if ((MoveBGCreate(((char*)&M_arcname__Q211daObjSwflat5Act_c + 0), 11, 0, -1) + -4) != 0) goto L_674; */
        /* L_674:; */
        /* if (0 != 0) goto L_6b4; */
        ((JUTAssertion*)(((JUTAssertion*)(-1))->getSDevice()))->showAssert(((char*)&@stringBase0 + 17), 385, ((char*)&@stringBase0 + 36));
        OSPanic(((char*)&@stringBase0 + 17), 385, ((char*)&@stringBase0 + 103));
        /* L_6b4:; */
        return MoveBGCreate(((char*)&M_arcname__Q211daObjSwflat5Act_c + 0), 11, 0, -1);
}

/* 00000974-0000097C       .text Delete__Q211daObjSwflat5Act_cFv */
BOOL daObjSwflat::Act_c::Delete() {
    return 1;
}

/* 0000097C-00000A64       .text Mthd_Delete__Q211daObjSwflat5Act_cFv */
BOOL daObjSwflat::Act_c::Mthd_Delete() {
        /* if (heap == 0) goto L_904; */
        /* if (this->field_0x444 == 0) goto L_8dc; */
        /* field_0x60 = -1; */
        /* field_0x444 = 0; */
        /* L_8dc:; */
        /* if (this->field_0x448 == 0) goto L_904; */
        /* field_0x60 = -1; */
        /* field_0x448 = 0; */
        /* L_904:; */
        /* if (this->field_0x4 != 0) goto L_940; */
        /* field_0x8 = 0; */
        /* if (/ * bne * / 1) goto L_940; */
        /* ((mDoHIO_subRoot_c*)(((char*)&mDoHIO_root + 4)))->deleteChild(this->field_0x4, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x4 = -1; */
        /* L_940:; */
        MoveBGDelete();
        dComIfG_resDelete((this + 712), ((char*)&M_arcname__Q211daObjSwflat5Act_c + 0));
        return MoveBGDelete();
}

/* 00000A64-00000AE4       .text set_mtx__Q211daObjSwflat5Act_cFv */
void daObjSwflat::Act_c::set_mtx() {
    /* PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0), arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* mDoMtx_ZXYrotM(((char*)&now__14mDoMtx_stack_c + 0), shape_angle, this->field_0x20e); */
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x2d0 + 36));
    return PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), ((char*)&M_tmp_mtx__Q211daObjSwflat5Act_c + 0));
}

/* 00000AE4-00000B20       .text init_mtx__Q211daObjSwflat5Act_cFv */
void daObjSwflat::Act_c::init_mtx() {
    /* field_0x18 = 0; */
    /* field_0x1c = 0; */
    /* field_0x20 = 0; */
    return set_mtx();
}

/* 00000B20-0000121C       .text Execute__Q211daObjSwflat5Act_cFPPA3_A4_f */
BOOL daObjSwflat::Act_c::Execute(Mtx**) {
        /* ((cM3dGCyl*)((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1068)))->SetC((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504)); */
        /* if (this->field_0x18 == 0) goto L_a9c; */
        /* ((cM3dGCyl*)((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1068)))->SetR(); */
        /* ((cM3dGCyl*)((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1068)))->SetH(((char*)&l_HIO + 0)); */
        /* L_a9c:; */
        /* ((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 788)); */
        /* if (this->field_0x344 == 0) goto L_af0; */
        /* if (((dCcD_GAtTgCoCommonBase*)((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1008)))->GetAc() == 0) goto L_af0; */
        /* if (/ * beq * / 1) goto L_af0; */
        /* if (this->field_0xe != 169) goto L_af0; */
        /* L_af0:; */
        /* if (this->field_0x45c != 0) goto L_b3c; */
        /* if (1 == 0) goto L_b1c; */
        /* field_0x461 = 1; */
        /* ((cM3dGCyl*)((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1068)))->SetR(); */
        /* goto L_b3c; */
        /* L_b1c:; */
        /* if (this->field_0x460 != 1) goto L_b3c; */
        /* field_0x461 = 0; */
        /* ((cM3dGCyl*)((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1068)))->SetR(); */
        /* L_b3c:; */
        /* if (PrmAbstract<Q311daObjSwflat5Act_c5Prm_e>__5daObjFPC10fopAc_ac_cQ311daObjSwflat5Act_c5Prm_eQ311daObjSwflat5Act_c5Prm_e(_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 2, 0) != 2) goto L_ba0; */
        /* if (((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->isSwitch(this->field_0x464, (this->field_0x1e2 & 255)) == 0) goto L_ba0; */
        /* field_0x460 = 0; */
        /* if (this->field_0x467 != 0) goto L_ba0; */
        /* field_0x467 = 1; */
        /* L_ba0:; */
        /* if (this->field_0x461 != 1) goto L_dc4; */
        /* if (this->field_0x462 != 0) goto L_bf0; */
        /* ((JAIZelBasic*)(base))->seStart(26976, (_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), 0, 0, 0); */
        /* L_bf0:; */
        /* if (this->field_0x467 != 0) goto L_c30; */
        /* ((JAIZelBasic*)(base))->seStart(28711, (_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), 0, 0, 0); */
        /* L_c30:; */
        /* if (this->field_0x458 >= this->field_0x45a) goto L_c74; */
        /* field_0x458 = (this->field_0x458 + 1); */
        /* field_0x10 = 0; */
        /* L_c74:; */
        /* if (1 != 0) goto L_c94; */
        ((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->onSwitch(this->field_0x463, (this->field_0x1e2 & 255));
        /* L_c94:; */
        /* if (this->field_0x467 != 0) goto L_d70; */
        /* if (this->field_0x448 != 0) goto L_d38; */
        /* field_0x448 = ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
        /* field_0x466 = 250; */
        /* if (PrmAbstract<Q311daObjSwflat5Act_c5Prm_e>__5daObjFPC10fopAc_ac_cQ311daObjSwflat5Act_c5Prm_eQ311daObjSwflat5Act_c5Prm_e(_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 2, 0) != 0) goto L_d70; */
        /* field_0x467 = 1; */
        /* goto L_d70; */
        /* L_d38:; */
        /* if (this->field_0x466 >= 250) goto L_d70; */
        /* field_0x466 = (this->field_0x466 + 25); */
        ((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->onSwitch(this->field_0x463, (this->field_0x1e2 & 255));
        /* L_d70:; */
        /* if (this->field_0x444 == 0) goto L_ef0; */
        /* field_0x465 = (this->field_0x465 + -25); */
        /* if (this->field_0x465 != 0) goto L_ef0; */
        /* field_0x60 = -1; */
        /* field_0x444 = 0; */
        /* goto L_ef0; */
        /* L_dc4:; */
        /* if (this->field_0x458 <= 0) goto L_e04; */
        /* field_0x458 = (this->field_0x458 + -1); */
        /* field_0x10 = 0; */
        /* L_e04:; */
        ((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->offSwitch(this->field_0x463, (this->field_0x1e2 & 255));
        /* if (this->field_0x444 != 0) goto L_e80; */
        /* field_0x444 = ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
        /* field_0x465 = 250; */
        /* goto L_ea0; */
        /* L_e80:; */
        /* if (this->field_0x465 >= 250) goto L_ea0; */
        /* field_0x465 = (this->field_0x465 + 25); */
        /* L_ea0:; */
        /* if (this->field_0x448 == 0) goto L_ef0; */
        /* field_0x466 = (this->field_0x466 + -25); */
        /* if (this->field_0x466 != 0) goto L_ef0; */
        /* field_0x60 = -1; */
        /* field_0x448 = 0; */
        /* L_ef0:; */
        /* if (this->field_0x468 == 1) goto L_f44; */
        /* if (/ * bge * / 1) goto L_f0c; */
        /* if (this->field_0x468 >= 0) goto L_f18; */
        /* goto L_fe0; */
        /* L_f0c:; */
        /* if (this->field_0x468 >= 3) goto L_fe0; */
        /* goto L_f9c; */
        /* L_f18:; */
        /* field_0x45c = 0; */
        /* if (1 == 0) goto L_fe0; */
        /* if (1 == 0) goto L_fe0; */
        /* field_0x468 = 1; */
        /* field_0x45c = 30; */
        /* goto L_fe0; */
        /* L_f44:; */
        /* if (this->field_0xf8 != 2) goto L_f78; */
        /* field_0x468 = 2; */
        /* if (this->field_0x18 == 0) goto L_fe0; */
        /* goto L_fe0; */
        /* L_f78:; */
        /* fopAcM_orderPotentialEvent(_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 1, 0, 0); */
        /* goto L_fe0; */
        /* L_f9c:; */
        /* field_0x45c = (this->field_0x45c + -1); */
        /* if (this->field_0x45c > 1) goto L_fe0; */
        /* field_0x468 = 0; */
        ((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->onSwitch(this->field_0x463, (this->field_0x1e2 & 255));
        /* L_fe0:; */
        /* if (this->field_0x467 == 0) goto L_10f4; */
        /* field_0x461 = 1; */
        /* if (this->field_0x45e == 0) goto L_100c; */
        /* field_0x45e = (this->field_0x45e + -1); */
        /* goto L_10f4; */
        /* L_100c:; */
        /* if (this->field_0x448 == 0) goto L_105c; */
        /* field_0x466 = (this->field_0x466 + -25); */
        /* if (this->field_0x466 != 0) goto L_105c; */
        /* field_0x60 = -1; */
        /* field_0x448 = 0; */
        /* L_105c:; */
        /* if (this->field_0x444 == 0) goto L_10ac; */
        /* field_0x465 = (this->field_0x465 + -25); */
        /* if (this->field_0x465 != 0) goto L_10ac; */
        /* field_0x60 = -1; */
        /* field_0x444 = 0; */
        /* L_10ac:; */
        /* if (this->field_0x458 >= (this->field_0x45a + 5)) goto L_10f4; */
        /* field_0x458 = (this->field_0x458 + 1); */
        /* field_0x10 = 0; */
        /* L_10f4:; */
        /* ((daObjSwflat::Act_c*)(_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->set_mtx(); */
        base = 0;
        return _restgpr_26(1);
}

/* 0000121C-000012D4       .text Draw__Q211daObjSwflat5Act_cFv */
BOOL daObjSwflat::Act_c::Draw() {
    ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(1, (this + 504), (this + 268));
    ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x2d0, (this + 268));
    /* ((mDoExt_brkAnm*)(this->field_0x2d4))->entry(this->field_0x4, this->field_0x4); */
    /* mDoExt_modelUpdateDL(this->field_0x2d0); */
    return 1;
}

/* 000012D4-000012DC       .text IsDelete__Q211daObjSwflat5Act_cFv */
BOOL daObjSwflat::Act_c::IsDelete() {
    return 1;
}

namespace daObjSwflat {
namespace {
/* 000012DC-000012FC       .text Mthd_Create__Q211daObjSwflat28@unnamed@d_a_obj_swflat_cpp@FPv */
cPhs_State Mthd_Create(void* i_this) {
    return ((daObjSwflat::Act_c*)i_this)->Mthd_Create();
}

/* 000012FC-0000131C       .text Mthd_Delete__Q211daObjSwflat28@unnamed@d_a_obj_swflat_cpp@FPv */
BOOL Mthd_Delete(void* i_this) {
    return ((daObjSwflat::Act_c*)i_this)->Mthd_Delete();
}

/* 0000131C-0000133C       .text Mthd_Execute__Q211daObjSwflat28@unnamed@d_a_obj_swflat_cpp@FPv */
BOOL Mthd_Execute(void* i_this) {
    return ((daObjSwflat::Act_c*)i_this)->MoveBGExecute();
}

/* 0000133C-00001368       .text Mthd_Draw__Q211daObjSwflat28@unnamed@d_a_obj_swflat_cpp@FPv */
BOOL Mthd_Draw(void* i_this) {
    return ((daObjSwflat::Act_c*)i_this)->Draw();
}

/* 00001368-00001394       .text Mthd_IsDelete__Q211daObjSwflat28@unnamed@d_a_obj_swflat_cpp@FPv */
BOOL Mthd_IsDelete(void* i_this) {
    return ((daObjSwflat::Act_c*)i_this)->IsDelete();
}

static actor_method_class Mthd_Table = {
    (process_method_func)Mthd_Create,
    (process_method_func)Mthd_Delete,
    (process_method_func)Mthd_Execute,
    (process_method_func)Mthd_IsDelete,
    (process_method_func)Mthd_Draw,
};
}; // namespace
}; // namespace daObjSwflat

actor_process_profile_definition g_profile_Obj_Swflat = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0002,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_Obj_Swflat_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daObjSwflat::Act_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_Obj_Swflat_e,
    /* Actor SubMtd */ &daObjSwflat::Mthd_Table,
    /* Status       */ fopAcStts_CULL_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_ACTOR_e,
    /* Cull Type    */ fopAc_CULLSPHERE_CUSTOM_e,
};

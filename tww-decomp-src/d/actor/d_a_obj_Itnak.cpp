/**
 * d_a_obj_Itnak.cpp
 * Object - Unused - Darknut statue
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_obj_Itnak.h"
#include "d/d_cc_d.h"

namespace daObjItnak {

const dCcD_SrcCyl M_cyl_src = {
    // dCcD_SrcGObjInf
    {
        /* Flags             */ 0,
        /* SrcObjAt  Type    */ 0,
        /* SrcObjAt  Atp     */ 0,
        /* SrcObjAt  SPrm    */ 0,
        /* SrcObjTg  Type    */ AT_TYPE_ALL & ~AT_TYPE_WATER & ~AT_TYPE_UNK20000 & ~AT_TYPE_WIND & ~AT_TYPE_UNK400000 & ~AT_TYPE_LIGHT,
        /* SrcObjTg  SPrm    */ cCcD_TgSPrm_Set_e | cCcD_TgSPrm_IsEnemy_e | cCcD_TgSPrm_IsPlayer_e | cCcD_TgSPrm_IsOther_e,
        /* SrcObjCo  SPrm    */ cCcD_CoSPrm_Set_e | cCcD_CoSPrm_IsOther_e | cCcD_CoSPrm_VsEnemy_e | cCcD_CoSPrm_VsPlayer_e | cCcD_CoSPrm_VsOther_e,
        /* SrcGObjAt Se      */ 0,
        /* SrcGObjAt HitMark */ dCcG_AtHitMark_None_e,
        /* SrcGObjAt Spl     */ dCcG_At_Spl_UNK0,
        /* SrcGObjAt Mtrl    */ 0,
        /* SrcGObjAt SPrm    */ 0,
        /* SrcGObjTg Se      */ 0,
        /* SrcGObjTg HitMark */ 0,
        /* SrcGObjTg Spl     */ dCcG_Tg_Spl_UNK0,
        /* SrcGObjTg Mtrl    */ 0,
        /* SrcGObjTg SPrm    */ dCcG_TgSPrm_Shield_e | dCcG_TgSPrm_NoConHit_e,
        /* SrcGObjCo SPrm    */ 0,
    },
    // cM3dGCylS
    {{
        /* Center */ {0.0f, 0.0f, 0.0f},
        /* Radius */ 100.0f,
        /* Height */ 200.0f,
    }},
};

}; // namespace daObjItnak


/* 00000078-0000009C       .text solidHeapCB__Q210daObjItnak5Act_cFP10fopAc_ac_c */
void daObjItnak::Act_c::solidHeapCB(fopAc_ac_c*) {
    /* return (*(u32*)(this+176) >> arg2) & ((1 << arg1) - 1); */
}

/* 0000009C-0000016C       .text create_heap__Q210daObjItnak5Act_cFv */
void daObjItnak::Act_c::create_heap() {
    /* L_28:; */
    /* goto L_28; */
}

/* 0000016C-000003A0       .text _create__Q210daObjItnak5Act_cFv */
cPhs_State daObjItnak::Act_c::_create() {
        /* if (/ * beq * / 1) goto L_10c; */
        /* field_0x61c = 0; */
        /* L_10c:; */
        /* if (/ * beq * / 1) goto L_194; */
        /* field_0x510 = 0; */
        /* field_0x5e8 = 0; */
        /* field_0x600 = 0; */
        /* if (/ * beq * / 1) goto L_188; */
        /* field_0x5e8 = 0; */
        /* field_0x600 = 0; */
        /* if (/ * beq * / 1) goto L_160; */
        /* field_0x600 = 0; */
        /* L_160:; */
        /* if (/ * beq * / 1) goto L_188; */
        /* field_0x5e8 = 0; */
        /* if (/ * beq * / 1) goto L_188; */
        /* field_0x5e4 = 0; */
        /* L_188:; */
        __dt();
        /* L_194:; */
        /* if (/ * beq * / 1) goto L_1ec; */
        /* field_0x4b0 = 0; */
        /* field_0x4b4 = 0; */
        /* if (/ * beq * / 1) goto L_1d8; */
        /* field_0x4b4 = 0; */
        /* if (/ * beq * / 1) goto L_1d8; */
        /* field_0x4b4 = 0; */
        /* L_1d8:; */
        /* if (/ * beq * / 1) goto L_1ec; */
        /* field_0x4b0 = 0; */
        /* L_1ec:; */
        /* if (/ * beq * / 1) goto L_274; */
        /* field_0x3a4 = 0; */
        /* field_0x47c = 0; */
        /* field_0x494 = 0; */
        /* if (/ * beq * / 1) goto L_268; */
        /* field_0x47c = 0; */
        /* field_0x494 = 0; */
        /* if (/ * beq * / 1) goto L_240; */
        /* field_0x494 = 0; */
        /* L_240:; */
        /* if (/ * beq * / 1) goto L_268; */
        /* field_0x47c = 0; */
        /* if (/ * beq * / 1) goto L_268; */
        /* field_0x478 = 0; */
        /* L_268:; */
        __dt();
        /* L_274:; */
        /* if (/ * beq * / 1) goto L_2cc; */
        /* field_0x344 = 0; */
        /* field_0x348 = 0; */
        /* if (/ * beq * / 1) goto L_2b8; */
        /* field_0x348 = 0; */
        /* if (/ * beq * / 1) goto L_2b8; */
        /* field_0x348 = 0; */
        /* L_2b8:; */
        /* if (/ * beq * / 1) goto L_2cc; */
        /* field_0x344 = 0; */
        /* L_2cc:; */
        /* if (/ * beq * / 1) goto L_3cc; */
        /* field_0x2e4 = 0; */
        /* field_0x2f4 = 0; */
        /* field_0x314 = 0; */
        /* field_0x320 = 0; */
        /* if (/ * beq * / 1) goto L_3cc; */
        /* field_0x2e4 = 0; */
        /* field_0x2f4 = 0; */
        /* field_0x314 = 0; */
        /* field_0x320 = 0; */
}

/* 00000D10-00000D40       .text _delete__Q210daObjItnak5Act_cFv */
bool daObjItnak::Act_c::_delete() {
    /* dComIfG_resDelete((this + 660), ((char*)&M_arcname__Q210daObjItnak5Act_c + 0), arg2); */
    return 1;
}

/* 00000D40-00000DEC       .text set_mtx__Q210daObjItnak5Act_cFv */
void daObjItnak::Act_c::set_mtx() {
    /* field_0x18 = 0; */
    /* field_0x1c = 0; */
    /* field_0x20 = 0; */
    /* PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0), arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* mDoMtx_ZXYrotM(((char*)&now__14mDoMtx_stack_c + 0), shape_angle, this->field_0x20e); */
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (mBck0 + 36));
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this + 672));
    return mBck0;
}

/* 00000DEC-00000EB0       .text set_co_se__Q210daObjItnak5Act_cFP8dCcD_Cyl */
void daObjItnak::Act_c::set_co_se(dCcD_Cyl*) {
        /* if (/ * beq * / 1) goto L_e18; */
        /* ((daObj*)((this + 504)))->HitSeStart((this->field_0x20a & 255), arg1, 13, arg4, arg5, arg6); */
        /* if (this == 0) goto L_de4; */
        /* goto L_de8; */
        /* L_de4:; */
        /* L_de8:; */
        dKy_Sound_set();
        /* HitEff_hibana(arg1); */
        return 1;
        /* L_e18:; */
        return 0;
}

/* 00000EB0-00000F94       .text manage_draw_flag__Q210daObjItnak5Act_cFv */
void daObjItnak::Act_c::manage_draw_flag() {
        /* if (this->field_0x770 != 1) goto L_ea4; */
        /* if (this->field_0x774 != 1) goto L_f04; */
        /* if (((((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->isSwitch(PrmAbstract<i>__5daObjFPC10fopAc_ac_cii(this, 8, 8, arg3, arg4, arg5, arg6, arg7), (this->field_0x1e2 & 255)) + -1) & 16777215) != 1) goto L_f04; */
        /* field_0x774 = 0; */
        /* goto L_f04; */
        /* L_ea4:; */
        /* if (0 != 0) goto L_efc; */
        /* if (this->field_0x774 != 0) goto L_f04; */
        /* if (((((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->isSwitch(PrmAbstract<i>__5daObjFPC10fopAc_ac_cii(((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->isSwitch(PrmAbstract<i>__5daObjFPC10fopAc_ac_cii(this, 8, 8, arg3, arg4, arg5, arg6, arg7), (this->field_0x1e2 & 255)), 8, 8), (this->field_0x1e2 & 255)) + -1) & 16777215) != 1) goto L_f04; */
        /* field_0x774 = 1; */
        /* goto L_f04; */
        /* L_efc:; */
        /* field_0x774 = 1; */
        /* L_f04:; */
        /* return ((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->isSwitch(PrmAbstract<i>__5daObjFPC10fopAc_ac_cii(((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->isSwitch(PrmAbstract<i>__5daObjFPC10fopAc_ac_cii(this, 8, 8, arg3, arg4, arg5, arg6, arg7), (this->field_0x1e2 & 255)), 8, 8), (this->field_0x1e2 & 255)); */
}

/* 00000F94-00001118       .text set_collision__Q210daObjItnak5Act_cFv */
void daObjItnak::Act_c::set_collision() {
        /* if (this->field_0x774 != 1) goto L_1084; */
        /* if (set_co_se((this + 872)) != 0) goto L_f8c; */
        ((cM3dGCyl*)((this + 1152)))->SetR();
        ((cM3dGCyl*)((this + 1152)))->SetH();
        ((cM3dGCyl*)((this + 1152)))->SetC((this + 504));
        ((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set((this + 872));
        /* L_f8c:; */
        /* if (set_co_se((this + 1236)) != 0) goto L_1000; */
        PSMTXMultVec((this + 672));
        ((cM3dGCyl*)((this + 1516)))->SetR();
        ((cM3dGCyl*)((this + 1516)))->SetH();
        ((cM3dGCyl*)((this + 1516)))->SetC();
        ((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set((this + 1236));
        /* L_1000:; */
        /* if (set_co_se((this + 1600)) != 0) goto L_1074; */
        PSMTXMultVec((this + 672));
        ((cM3dGCyl*)((this + 1880)))->SetR();
        ((cM3dGCyl*)((this + 1880)))->SetH();
        ((cM3dGCyl*)((this + 1880)))->SetC();
        ((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set((this + 1600));
        /* L_1074:; */
        /* L_1084:; */
        return fopAcM_rollPlayerCrash(this, 13);
}

/* 00001118-00001158       .text _execute__Q210daObjItnak5Act_cFv */
bool daObjItnak::Act_c::_execute() {
    set_mtx();
    manage_draw_flag();
    set_collision();
    return 1;
}

/* 00001158-0000123C       .text _draw__Q210daObjItnak5Act_cFv */
bool daObjItnak::Act_c::_draw() {
    if (this->field_0x774 != 0) {
        ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(1, (this + 504), (this + 268));
        ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(mBck0, (this + 268));
        mDoExt_modelUpdateDL(mBck0);
        /* field_0x2d0 = dComIfGd_setShadow(this->field_0x2d0, 1, mBck0); */
    }
    return 1;
}

namespace daObjItnak {
namespace {
/* 0000123C-0000125C       .text Mthd_Create__Q210daObjItnak27@unnamed@d_a_obj_Itnak_cpp@FPv */
cPhs_State Mthd_Create(void* i_this) {
    return ((daObjItnak::Act_c*)i_this)->_create();
}

/* 0000125C-00001280       .text Mthd_Delete__Q210daObjItnak27@unnamed@d_a_obj_Itnak_cpp@FPv */
BOOL Mthd_Delete(void* i_this) {
    return ((daObjItnak::Act_c*)i_this)->_delete();
}

/* 00001280-000012A4       .text Mthd_Execute__Q210daObjItnak27@unnamed@d_a_obj_Itnak_cpp@FPv */
BOOL Mthd_Execute(void* i_this) {
    return ((daObjItnak::Act_c*)i_this)->_execute();
}

/* 000012A4-000012C8       .text Mthd_Draw__Q210daObjItnak27@unnamed@d_a_obj_Itnak_cpp@FPv */
BOOL Mthd_Draw(void* i_this) {
    return ((daObjItnak::Act_c*)i_this)->_draw();
}

/* 000012C8-000012D0       .text Mthd_IsDelete__Q210daObjItnak27@unnamed@d_a_obj_Itnak_cpp@FPv */
BOOL Mthd_IsDelete(void*) {
    return 1;
}

static actor_method_class Mthd_Table = {
    (process_method_func)Mthd_Create,
    (process_method_func)Mthd_Delete,
    (process_method_func)Mthd_Execute,
    (process_method_func)Mthd_IsDelete,
    (process_method_func)Mthd_Draw,
};
}; // namespace
}; // namespace daObjItnak

actor_process_profile_definition g_profile_Obj_Itnak = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0007,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_Obj_Itnak_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daObjItnak::Act_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_Obj_Itnak_e,
    /* Actor SubMtd */ &daObjItnak::Mthd_Table,
    /* Status       */ fopAcStts_NOCULLEXEC_e | fopAcStts_CULL_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_ACTOR_e,
    /* Cull Type    */ fopAc_CULLBOX_CUSTOM_e,
};

/**
 * d_a_obj_htetu1.cpp
 * Object - Tower of the Gods - Large yellow gate (blocks room containing Small Key)
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_obj_htetu1.h"

/* 00000078-00000178       .text create_s__19daObjHtetu1Splash_cFUsP4cXyzP5csXyzP12dKy_tevstr_c */
void daObjHtetu1Splash_c::create_s(unsigned short, cXyz*, csXyz*, dKy_tevstr_c*) {
    /* field_0x14 = 0; */
    /* field_0x18 = 0; */
    /* field_0x1c = 0; */
    /* ((dPa_control_c*)(this->field_0x5ab8))->set(0, short, (this + 20), (this + 32), 0, 255, this); */
    if (this->field_0x4 != 0) {
    }
    if (this->field_0x4 != 0) {
        /* field_0x28 = 0; */
    }
    /* field_0x28 = 0; */
    /* field_0x26 = -2; */
    /* return this->field_0x4; */
}

/* 00000178-00000198       .text solidHeapCB__13daObjHtetu1_cFP10fopAc_ac_c */
void daObjHtetu1_c::solidHeapCB(fopAc_ac_c*) {
    create_heap();
}

/* 00000198-00000298       .text create_heap__13daObjHtetu1_cFv */
void daObjHtetu1_c::create_heap() {
    /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    ((dRes_control_c*)(((char*)&M_arcname__13daObjHtetu1_c + 0)))->getRes(4);
    if (/* bne */ 1) {
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&M_arcname__13daObjHtetu1_c + 0)))->getRes(4)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 281, ((char*)&@stringBase0 + 19));
        OSPanic(((char*)&@stringBase0 + 0), 281, ((char*)&@stringBase0 + 33));
    }
    if (/* bne */ 1) {
    } else {
        /* field_0x290 = mDoExt_J3DModel(OSPanic(((char*)&@stringBase0 + 0), 281, ((char*)&@stringBase0 + 33)), 0); */
        /* field_0x2cc = dBgW_NewSet(((dRes_control_c*)(((char*)&M_arcname__13daObjHtetu1_c + 0)))->getRes(7), 1, (this->field_0x290 + 36)); */
        /* if (this->field_0x2cc == 0) goto L_204; */
    }
    /* L_204:; */
    return _restgpr_28(0);
}

/* 00000298-00000460       .text _create__13daObjHtetu1_cFv */
cPhs_State daObjHtetu1_c::_create() {
        /* _savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_288; */
        /* if (/ * beq * / 1) goto L_27c; */
        __ct();
        /* __construct_array((actor_condition + 720), ((char*)&__ct__19daObjHtetu1Splash_cFv + 0), ((char*)&__dt__19daObjHtetu1Splash_cFv + 0), 44, 2); */
        /* L_27c:; */
        /* L_288:; */
        /* if (dComIfG_resLoad((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 660), ((char*)&l_daObjHtetu1_splash_id_table + 4)) != 4) goto L_3cc; */
        /* if (fopAcM_entrySolidHeap(_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), ((char*)&solidHeapCB__13daObjHtetu1_cFP10fopAc_ac_c + 0), 2784) == 0) goto L_3cc; */
        cullMtx = (this->field_0x290 + 36);
        /* field_0x29c = (this->field_0xb0 & 16777215); */
        /* field_0x2b8 = (this->field_0x1fc - this->field_0xc); */
        /* if (((daObjHtetu1_c*)(_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->check_sw() == 0) goto L_308; */
        /* field_0x1fc = 0; */
        /* field_0x2c6 = 2; */
        /* L_308:; */
        /* field_0x2c8 = -1; */
        /* ((daObjHtetu1_c*)(_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->init_mtx(); */
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(2, (_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        /* L_340:; */
        /* ((daObjHtetu1Splash_c*)((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + (0 + 720))))->create_s(); */
        /* if ((0 + 1) < 2) goto L_340; */
        /* fopAcM_setCullSizeBox(_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->Regist(this->field_0x2cc, _savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* field_0x2c4 = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getEventIdx(((char*)&@stringBase0 + 38), 255); */
        /* L_3cc:; */
        return _restgpr_26(4);
}

/* 00000508-00000610       .text _delete__13daObjHtetu1_cFv */
bool daObjHtetu1_c::_delete() {
        /* _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x2c8 <= 0) goto L_4d0; */
        ((dVibration_c*)(((char*)&g_dComIfG_gameInfo + 22944)))->StopQuake(-1);
        /* field_0x2c8 = -1; */
        /* L_4d0:; */
        /* L_4dc:; */
        /* if (this->field_0x2d4 == 0) goto L_504; */
        /* field_0x2f8 = 0; */
        /* L_504:; */
        /* if ((0 + 1) < 2) goto L_4dc; */
        /* if (heap == 0) goto L_56c; */
        /* if (this->field_0x2cc == 0) goto L_56c; */
        /* if (base < 0) goto L_548; */
        /* if (base >= 256) goto L_548; */
        /* goto L_54c; */
        /* L_548:; */
        /* L_54c:; */
        /* if (0 == 0) goto L_56c; */
        /* ((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->Release(this->field_0x2cc); */
        /* field_0x2cc = 0; */
        /* L_56c:; */
        /* dComIfG_resDelete((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 660), ((char*)&M_arcname__13daObjHtetu1_c + 0)); */
        return _restgpr_27(1);
}

/* 00000610-00000648       .text check_sw__13daObjHtetu1_cFv */
void daObjHtetu1_c::check_sw() {
    return ((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->isSwitch();
}

/* 00000648-000006E4       .text init_mtx__13daObjHtetu1_cFv */
void daObjHtetu1_c::init_mtx() {
    /* field_0x18 = 0; */
    /* field_0x1c = 0; */
    /* field_0x20 = 0; */
    /* PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0), arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* mDoMtx_ZXYrotM(((char*)&now__14mDoMtx_stack_c + 0), shape_angle, this->field_0x20e); */
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x290 + 36));
    /* return this->field_0x290; */
}

/* 000006E4-000007F8       .text unlock__13daObjHtetu1_cFv */
void daObjHtetu1_c::unlock() {
    /* PSVECSubtract((this + 672), (this + 684), (this + 672), arg3, arg4, arg5, arg6, arg7); */
    PSVECScale();
    PSVECAdd((this + 672));
    /* field_0x2ac = 0; */
    /* field_0x2b0 = 0; */
    /* field_0x2b4 = 0; */
    return cLib_addCalc((this + 700));
}

/* 000007F8-0000098C       .text get_water_h__13daObjHtetu1_cFv */
void daObjHtetu1_c::get_water_h() {
        __ct();
        /* mDoMtx_YrotS(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x206); */
        PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0), ((char*)&BaseZ__4cXyz + 0));
        PSVECScale();
        PSVECAdd();
        /* if (dBgS_SplGrpChk_In_ObjGnd() == 0) goto L_82c; */
        /* L_82c:; */
        /* if (/ * beq * / 1) goto L_8dc; */
        /* if (/ * beq * / 1) goto L_8b8; */
        /* if (/ * beq * / 1) goto L_8b8; */
        /* L_8b8:; */
        /* if (/ * beq * / 1) goto L_8dc; */
        /* if (/ * beq * / 1) goto L_8dc; */
        /* L_8dc:; */
        __dt();
        return __vt__13cBgS_PolyInfo;
}

/* 00000AB0-00000BCC       .text splash_manager__13daObjHtetu1_cFv */
void daObjHtetu1_c::splash_manager() {
        get_water_h();
        /* if (this->field_0x2f6 != 0) goto L_aa0; */
        /* if (this->field_0x2f8 == 0) goto L_b38; */
        /* if (this->field_0x2d4 == 0) goto L_b38; */
        /* field_0x2f8 = 0; */
        /* goto L_b38; */
        /* L_aa0:; */
        /* if (this->field_0x2f6 != 0) goto L_ab0; */
        /* if (this->field_0x2f6 != -1) goto L_b38; */
        /* L_ab0:; */
        /* if (/ * ble * / 1) goto L_af8; */
        /* if (this->field_0x2f8 != 0) goto L_b24; */
        /* if (this->field_0x2d4 == 0) goto L_b24; */
        /* field_0x2f8 = 1; */
        /* goto L_b24; */
        /* L_af8:; */
        /* if (this->field_0x2f8 == 0) goto L_b24; */
        /* if (this->field_0x2d4 == 0) goto L_b24; */
        /* field_0x2f8 = 0; */
        /* L_b24:; */
        /* if (this->field_0x2f6 != 0) goto L_b38; */
        /* field_0x2f6 = (this->field_0x2f6 + -1); */
        /* L_b38:; */
        return (0 + 44);
}

/* 00000BCC-0000101C       .text _execute__13daObjHtetu1_cFv */
bool daObjHtetu1_c::_execute() {
        /* _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x2c6 == 1) goto L_cdc; */
        /* if (/ * bge * / 1) goto L_d0c; */
        /* if (this->field_0x2c6 >= 0) goto L_b94; */
        /* goto L_d0c; */
        /* goto L_d0c; */
        /* L_b94:; */
        /* if (((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->isSwitch(this->field_0x29c, (this->field_0x1e2 & 255)) == 0) goto L_d0c; */
        /* if (this->field_0xf8 == 2) goto L_bf0; */
        /* fopAcM_orderOtherEventId(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x2c4, 255); */
        /* goto L_d0c; */
        /* L_bf0:; */
        /* field_0x2bc = 0; */
        /* field_0x2c0 = 70; */
        __ml();
        /* field_0x2ac = 0; */
        /* field_0x2b0 = 0; */
        /* field_0x2b4 = 0; */
        ((JAIZelBasic*)(base))->seStart(2054, 0, 0, 0, 0);
        /* field_0x2c2 = 1; */
        /* field_0x2c6 = 1; */
        ((dVibration_c*)(((char*)&g_dComIfG_gameInfo + 22944)))->StartShock(5, -33);
        /* if (this->field_0x2d4 == 0) goto L_cd0; */
        /* field_0x2f8 = 1; */
        /* field_0x2f6 = 30; */
        /* L_cd0:; */
        /* goto L_d0c; */
        /* L_cdc:; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->endCheck(this->field_0x2c4) == 0) goto L_d0c; */
        /* field_0x2c6 = 2; */
        /* L_d0c:; */
        /* field_0x2a0 = 0; */
        /* field_0x2a4 = 0; */
        /* field_0x2a8 = 0; */
        /* if (this->field_0x2c2 == 1) goto L_d44; */
        /* if (/ * bge * / 1) goto L_d38; */
        /* goto L_ee0; */
        /* L_d38:; */
        /* if (this->field_0x2c2 >= 3) goto L_ee0; */
        /* goto L_e28; */
        /* L_d44:; */
        /* ((daObjHtetu1_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->unlock(); */
        /* if (this->field_0x2c0 == 0) goto L_da4; */
        /* field_0x2c0 = (this->field_0x2c0 + -1); */
        /* ((JAIZelBasic*)(base))->seStart(4219, (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* goto L_ee0; */
        /* L_da4:; */
        ((dVibration_c*)(((char*)&g_dComIfG_gameInfo + 22944)))->StartQuake(6, 3);
        /* field_0x2c2 = 2; */
        /* field_0x2c8 = 200; */
        /* if (this->field_0x2d4 == 0) goto L_e1c; */
        /* field_0x2f8 = 1; */
        /* field_0x2f6 = -1; */
        /* L_e1c:; */
        /* goto L_ee0; */
        /* L_e28:; */
        /* field_0x2a4 = (this->field_0x2a4 - this->field_0x4c); */
        /* ((JAIZelBasic*)(base))->seStart(4219, (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* if (this->field_0x2a4 != this->field_0x2b8) goto L_ee0; */
        /* L_e98:; */
        /* if (this->field_0x2d4 == 0) goto L_ec0; */
        /* field_0x2f8 = 0; */
        /* L_ec0:; */
        /* if ((0 + 1) < 2) goto L_e98; */
        /* field_0x2a4 = 0; */
        /* field_0x2c2 = 0; */
        /* L_ee0:; */
        current = 0;
        /* field_0x1fc = 0; */
        /* field_0x200 = 0; */
        /* ((daObjHtetu1_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->init_mtx(); */
        /* ((daObjHtetu1_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->splash_manager(); */
        /* if (this->field_0x2c8 != 0) goto L_f34; */
        ((dVibration_c*)(((char*)&g_dComIfG_gameInfo + 22944)))->StopQuake(-1);
        /* field_0x2c8 = -1; */
        /* goto L_f44; */
        /* L_f34:; */
        /* if (((dVibration_c*)(((char*)&g_dComIfG_gameInfo + 22944)))->StopQuake(-1) != 0) goto L_f44; */
        /* field_0x2c8 = (((dVibration_c*)(((char*)&g_dComIfG_gameInfo + 22944)))->StopQuake(-1) + -1); */
        /* L_f44:; */
        /* if (heap == 0) goto L_f88; */
        /* if (this->field_0x2cc == 0) goto L_f88; */
        /* if (base < 0) goto L_f78; */
        /* if (base >= 256) goto L_f78; */
        /* goto L_f7c; */
        /* L_f78:; */
        /* L_f7c:; */
        /* if (0 == 0) goto L_f88; */
        /* ((dBgW*)(this->field_0x2cc))->Move(); */
        /* L_f88:; */
        return _restgpr_27(1);
}

/* 0000101C-0000107C       .text _draw__13daObjHtetu1_cFv */
bool daObjHtetu1_c::_draw() {
    ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(1, (this + 504), (this + 268));
    ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x290, (this + 268));
    /* mDoExt_modelUpdateDL(this->field_0x290); */
    return 1;
}

namespace {
/* 0000107C-0000109C       .text Mthd_Create__28@unnamed@d_a_obj_htetu1_cpp@FPv */
cPhs_State Mthd_Create(void* i_this) {
    return ((daObjHtetu1_c*)i_this)->_create();
}

/* 0000109C-000010C0       .text Mthd_Delete__28@unnamed@d_a_obj_htetu1_cpp@FPv */
BOOL Mthd_Delete(void* i_this) {
    return ((daObjHtetu1_c*)i_this)->_delete();
}

/* 000010C0-000010E4       .text Mthd_Execute__28@unnamed@d_a_obj_htetu1_cpp@FPv */
BOOL Mthd_Execute(void* i_this) {
    return ((daObjHtetu1_c*)i_this)->_execute();
}

/* 000010E4-00001108       .text Mthd_Draw__28@unnamed@d_a_obj_htetu1_cpp@FPv */
BOOL Mthd_Draw(void* i_this) {
    return ((daObjHtetu1_c*)i_this)->_draw();
}

/* 00001108-00001110       .text Mthd_IsDelete__28@unnamed@d_a_obj_htetu1_cpp@FPv */
BOOL Mthd_IsDelete(void*) {
    return 1;
}

static actor_method_class Htetu1_Mthd_Table = {
    (process_method_func)Mthd_Create,
    (process_method_func)Mthd_Delete,
    (process_method_func)Mthd_Execute,
    (process_method_func)Mthd_IsDelete,
    (process_method_func)Mthd_Draw,
};
}; // namespace

actor_process_profile_definition g_profile_Obj_Htetu1 = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0003,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_Obj_Htetu1_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daObjHtetu1_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_Obj_Htetu1_e,
    /* Actor SubMtd */ &Htetu1_Mthd_Table,
    /* Status       */ fopAcStts_CULL_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_ACTOR_e,
    /* Cull Type    */ fopAc_CULLBOX_CUSTOM_e,
};

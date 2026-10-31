/**
 * d_a_obj_Vds.cpp
 * Object - Earth Temple - Face statue (lights up when eyes are hit with Mirror Shield)
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_obj_Vds.h"

/* 00000078-00000134       .text SetLoopJointAnimation__Q28daObjVds5Act_cFP18J3DAnmTransformKeyP18J3DAnmTransformKeyff */
void daObjVds::Act_c::SetLoopJointAnimation(J3DAnmTransformKey*, J3DAnmTransformKey*, float, float) {
    /* SetLoopJointAnimation__Q28daObjVds5Act_cFP18J3DAnmTransformKeyP18J3DAnmTransformKeyff: 无实义指令 */
}

/* 00000134-00000188       .text PlayLoopJointAnimation__Q28daObjVds5Act_cFv */
void daObjVds::Act_c::PlayLoopJointAnimation() {
    if (/* ble */ 1) {
    }
    return __dl(this);
}

/* 00000188-000001E8       .text set_first_process__Q28daObjVds5Act_cFv */
void daObjVds::Act_c::set_first_process() {
    /* return process_init(((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->isSwitch(PrmAbstract<i>__5daObjFPC10fopAc_ac_cii(this, 8, 0, arg3, arg4, arg5, arg6, arg7), (this->field_0x1e2 & 255))); */
}

/* 000001E8-00000214       .text ds_search_switchCB__8daObjVdsFPvPv */
void daObjVds::ds_search_switchCB(void*, void*) {
    /* return ((daObjVds::Act_c*)(arg1))->search_switchCB(this); */
}

/* 00000214-000002B0       .text search_switchCB__Q28daObjVds5Act_cFP10fopAc_ac_c */
void daObjVds::Act_c::search_switchCB(fopAc_ac_c*) {
        /* if (fopAc_IsActor(arg1) == 0) goto L_21c; */
        /* if (this->field_0x8 != 32) goto L_21c; */
        /* if ((0 + 804) != 65535) goto L_214; */
        /* if (arg1 == 0) goto L_204; */
        /* goto L_208; */
        /* L_204:; */
        /* L_208:; */
        /* field_0x324 = -1; */
        /* goto L_21c; */
        /* L_214:; */
        /* L_21c:; */
        return 0;
}

/* 000002EC-000003C8       .text process_off_init__Q28daObjVds5Act_cFv */
void daObjVds::Act_c::process_off_init() {
    if (((mDoExt_brkAnm*)((this + 724)))->init(this->field_0x4, this->field_0x2ec, 1, 0, 0, -1, 1) != 0) {
        /* field_0xc = 0; */
        /* if (((mDoExt_brkAnm*)((this + 760)))->init(this->field_0x4, this->field_0x310, 1, 0, 0, -1, 1) != 0) goto L_338; */
        /* field_0xc = 0; */
        return 1;
    }
    /* L_338:; */
    return 0;
}

/* 000003C8-00000474       .text process_off_main__Q28daObjVds5Act_cFv */
void daObjVds::Act_c::process_off_main() {
    /* _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* L_378:; */
    fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0));
    /* field_0x32c = 0; */
    /* if ((0 + 1) >= 2) goto L_378; */
    /* if (((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->isSwitch(PrmAbstract<i>__5daObjFPC10fopAc_ac_cii(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 8, 0), (this->field_0x1e2 & 255)) != 0) { */
    /* return _restgpr_27(((daObjVds::Act_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->process_init(1)); */

/* 00000474-000004F0       .text process_on_init__Q28daObjVds5Act_cFv */
void daObjVds::Act_c::process_on_init() {
    /* if (SetLoopJointAnimation(this->field_0x2d0, this->field_0x2f4, C_@4016, arg4) != 0) { */
        /* return 1; */
    return 0;
}

/* 000004F0-000004F4       .text process_on_main__Q28daObjVds5Act_cFv */
void daObjVds::Act_c::process_on_main() {
}

/* 000004F4-000005C0       .text process_init__Q28daObjVds5Act_cFi */
void daObjVds::Act_c::process_init(int) {
    if (base != 0) {
        base = 1;
    }
    if (int >= 0) {
        /* if (int < 2) goto L_52c; */
        /* if (__ptmf_scall(this, ((C_@2100 + 0) + 76), ((char*)&init$4166 + 0), (C_@2100 + 0), arg4, arg5, arg6, arg7) != 0) goto L_52c; */
        /* field_0x31c = int; */
        return 1;
    }
    /* L_52c:; */
    return 0;
}

/* 000005C0-0000065C       .text process_main__Q28daObjVds5Act_cFv */
void daObjVds::Act_c::process_main() {
    if (base != 0) {
        base = 1;
    }
    if (this->field_0x31c >= 0) {
        /* if (this->field_0x31c < 2) goto L_5d4; */
    }
    /* L_5d4:; */
    /* return __ptmf_scall(this, this->field_0x70, ((C_@2100 + 0) + 124), ((char*)&init$4180 + 0), (C_@2100 + 0), arg5, arg6, arg7); */
}

/* 0000065C-000007EC       .text process_common__Q28daObjVds5Act_cFv */
void daObjVds::Act_c::process_common() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x320 == 1) goto L_6e4; */
        /* if (/ * bge * / 1) goto L_618; */
        /* if (this->field_0x320 >= 0) goto L_624; */
        /* goto L_75c; */
        /* L_618:; */
        /* if (this->field_0x320 >= 3) goto L_75c; */
        /* goto L_758; */
        /* L_624:; */
        /* fopAcIt_Judge(((char*)&ds_search_switchCB__8daObjVdsFPvPv + 0), _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if ((0 + 804) == 65535) goto L_75c; */
        /* if ((0 + 804) == 65535) goto L_75c; */
        /* if (fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0)) == 0) goto L_75c; */
        /* if (fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0)) == 0) goto L_75c; */
        /* if ((this->field_0x20e - this->field_0x20e) != 0) goto L_6d8; */
        /* L_6d8:; */
        /* field_0x320 = 1; */
        /* goto L_75c; */
        /* L_6e4:; */
        /* if (fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0)) == 0) goto L_75c; */
        /* if (fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0)) == 0) goto L_75c; */
        /* ((daObjVds::Act_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->create_point_light(0, (fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0)) + 504)); */
        /* ((daObjVds::Act_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->create_point_light(1, (fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0)) + 504)); */
        /* field_0x320 = 2; */
        /* goto L_75c; */
        /* L_758:; */
        /* L_75c:; */
        /* return _restgpr_29(((daObjVds::Act_c*)(((daObjVds::Act_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->create_point_light(1, (fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0)) + 504))))->execute_point_light()); */
}

/* 000007EC-0000087C       .text create_point_light__Q28daObjVds5Act_cFiP4cXyz */
void daObjVds::Act_c::create_point_light(int, cXyz*) {
    /* field_0x33c = 0; */
    /* field_0x340 = 0; */
    /* field_0x344 = 0; */
    /* field_0x37c = 0; */
    /* field_0x380 = 0; */
    /* field_0x384 = 0; */
    /* field_0x348 = 1024; */
    /* field_0x34a = 1024; */
    /* field_0x34c = 1024; */
    /* field_0x350 = 0; */
    /* field_0x354 = 0; */
    /* return dKy_plight_set((this + (arg3 + 828))); */
}

/* 0000087C-00000900       .text execute_point_light__Q28daObjVds5Act_cFv */
void daObjVds::Act_c::execute_point_light() {
    /* field_0x350 = 0; */
    /* field_0x33c = 0; */
    /* field_0x340 = 0; */
    /* field_0x344 = 0; */
    /* field_0x348 = 1024; */
    /* field_0x34a = 1024; */
    /* field_0x34c = 1024; */
    return this;
}

/* 00000900-00000954       .text delete_point_light__Q28daObjVds5Act_cFv */
void daObjVds::Act_c::delete_point_light() {
    /* L_8a8:; */
    /* dKy_plight_cut((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + (0 + 828))); */
    /* if ((0 + 1) >= 2) goto L_8a8; */
    /* return _restgpr_29(dKy_plight_cut((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + (0 + 828)))); */
}

/* 00000954-00000968       .text Event_init__Q28daObjVds5Act_cFv */
void daObjVds::Act_c::Event_init() {
    /* field_0x334 = -1; */
    /* field_0x336 = 0; */
    return this;
}

/* 00000968-00000A28       .text Event_exe__Q28daObjVds5Act_cFv */
void daObjVds::Act_c::Event_exe() {
        /* if (this->field_0x336 == 2) goto L_968; */
        /* if (/ * bge * / 1) goto L_998; */
        /* if (this->field_0x336 >= 1) goto L_924; */
        /* goto L_998; */
        /* L_924:; */
        /* if (this->field_0xf8 != 2) goto L_93c; */
        /* field_0x336 = 2; */
        /* goto L_998; */
        /* L_93c:; */
        /* fopAcM_orderOtherEventId(this, this->field_0x334, 255, (arg3 + -1), 0, 1); */
        /* goto L_998; */
        /* L_968:; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->endCheck(this->field_0x334) == 0) goto L_998; */
        /* L_998:; */
        return Event_init();
}

/* 00000A28-00000A4C       .text solidHeapCB__Q28daObjVds5Act_cFP10fopAc_ac_c */
void daObjVds::Act_c::solidHeapCB(fopAc_ac_c*) {
    return (create_heap() & 16777215);
}

/* 00000A4C-00001020       .text create_heap__Q28daObjVds5Act_cFv */
void daObjVds::Act_c::create_heap() {
        /* _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        ((dRes_control_c*)(((char*)&M_arcname__Q28daObjVds5Act_c + 0)))->getRes(10);
        /* if (/ * bne * / 1) goto L_a4c; */
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&M_arcname__Q28daObjVds5Act_c + 0)))->getRes(10)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 848, ((char*)&@stringBase0 + 16));
        OSPanic(((char*)&@stringBase0 + 0), 848, ((char*)&@stringBase0 + 31));
        /* L_a4c:; */
        /* field_0x2d0 = ((dRes_control_c*)(((char*)&M_arcname__Q28daObjVds5Act_c + 0)))->getRes(6); */
        /* if (this->field_0x2d0 != 0) goto L_aa4; */
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&M_arcname__Q28daObjVds5Act_c + 0)))->getRes(6)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 852, ((char*)&@stringBase0 + 36));
        OSPanic(((char*)&@stringBase0 + 0), 852, ((char*)&@stringBase0 + 31));
        /* L_aa4:; */
        /* if (/ * beq * / 1) goto L_b20; */
        /* if (this->field_0x2d0 == 0) goto L_b20; */
        __nw(180);
        /* if (/ * beq * / 1) goto L_b1c; */
        /* L_b1c:; */
        /* field_0x2cc = __ct(__nw(180), 1); */
        /* L_b20:; */
        /* if (this->field_0x2cc != 0) goto L_b5c; */
        ((JUTAssertion*)(((JUTAssertion*)(__ct(__nw(180), 1)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 865, ((char*)&@stringBase0 + 53));
        OSPanic(((char*)&@stringBase0 + 0), 865, ((char*)&@stringBase0 + 31));
        /* L_b5c:; */
        ((dRes_control_c*)(((char*)&M_arcname__Q28daObjVds5Act_c + 0)))->getRes(11);
        /* if (/ * bne * / 1) goto L_bac; */
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&M_arcname__Q28daObjVds5Act_c + 0)))->getRes(11)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 869, ((char*)&@stringBase0 + 65));
        OSPanic(((char*)&@stringBase0 + 0), 869, ((char*)&@stringBase0 + 31));
        /* L_bac:; */
        /* field_0x2f4 = ((dRes_control_c*)(((char*)&M_arcname__Q28daObjVds5Act_c + 0)))->getRes(7); */
        /* if (this->field_0x2f4 != 0) goto L_c04; */
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&M_arcname__Q28daObjVds5Act_c + 0)))->getRes(7)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 873, ((char*)&@stringBase0 + 80));
        OSPanic(((char*)&@stringBase0 + 0), 873, ((char*)&@stringBase0 + 31));
        /* L_c04:; */
        /* if (/ * beq * / 1) goto L_c80; */
        /* if (this->field_0x2f4 == 0) goto L_c80; */
        __nw(180);
        /* if (/ * beq * / 1) goto L_c7c; */
        /* L_c7c:; */
        /* field_0x2f0 = __ct(__nw(180), 1); */
        /* L_c80:; */
        /* if (this->field_0x2f0 != 0) goto L_cbc; */
        ((JUTAssertion*)(((JUTAssertion*)(__ct(__nw(180), 1)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 886, ((char*)&@stringBase0 + 97));
        OSPanic(((char*)&@stringBase0 + 0), 886, ((char*)&@stringBase0 + 31));
        /* L_cbc:; */
        /* field_0x2ec = ((dRes_control_c*)(((char*)&M_arcname__Q28daObjVds5Act_c + 0)))->getRes(14); */
        /* if (this->field_0x2ec != 0) goto L_d14; */
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&M_arcname__Q28daObjVds5Act_c + 0)))->getRes(14)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 891, ((char*)&@stringBase0 + 109));
        OSPanic(((char*)&@stringBase0 + 0), 891, ((char*)&@stringBase0 + 31));
        /* L_d14:; */
        /* ((mDoExt_brkAnm*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 724)))->init(); */
        /* field_0x310 = ((dRes_control_c*)(((char*)&M_arcname__Q28daObjVds5Act_c + 0)))->getRes(15); */
        /* if (this->field_0x310 != 0) goto L_da4; */
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&M_arcname__Q28daObjVds5Act_c + 0)))->getRes(15)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 904, ((char*)&@stringBase0 + 126));
        OSPanic(((char*)&@stringBase0 + 0), 904, ((char*)&@stringBase0 + 31));
        /* L_da4:; */
        /* ((mDoExt_brkAnm*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 760)))->init(); */
        /* ((daObjVds::Act_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->set_mtx(); */
        ((dRes_control_c*)(((char*)&M_arcname__Q28daObjVds5Act_c + 0)))->getRes(18);
        /* if (/ * bne * / 1) goto L_e34; */
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&M_arcname__Q28daObjVds5Act_c + 0)))->getRes(18)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 926, ((char*)&@stringBase0 + 143));
        OSPanic(((char*)&@stringBase0 + 0), 926, ((char*)&@stringBase0 + 31));
        /* L_e34:; */
        /* if (/ * beq * / 1) goto L_e74; */
        __nw(188);
        /* if (/ * beq * / 1) goto L_e54; */
        /* L_e54:; */
        /* field_0x314 = __ct(); */
        /* if (this->field_0x314 == 0) goto L_e74; */
        /* ((cBgW*)(this->field_0x314))->Set(); */
        /* L_e74:; */
        /* if (this->field_0x2d0 == 0) goto L_eb8; */
        /* if (this->field_0x2cc == 0) goto L_eb8; */
        /* L_eb8:; */
        /* if (1 == 0) goto L_ed4; */
        /* if (this->field_0x50 == 0) goto L_ed4; */
        /* L_ed4:; */
        /* if (1 == 0) goto L_eec; */
        /* if (this->field_0x2f4 == 0) goto L_eec; */
        /* L_eec:; */
        /* if (1 == 0) goto L_f04; */
        /* if (this->field_0x2f0 == 0) goto L_f04; */
        /* L_f04:; */
        /* if (1 == 0) goto L_f20; */
        /* if (this->field_0x50 == 0) goto L_f20; */
        /* L_f20:; */
        /* if (1 == 0) goto L_f38; */
        /* if (this->field_0x314 == 0) goto L_f38; */
        /* L_f38:; */
        /* if (1 == 0) goto L_f50; */
        /* if (this->field_0x2ec == 0) goto L_f50; */
        /* L_f50:; */
        /* if (1 == 0) goto L_f68; */
        /* if (this->field_0x310 == 0) goto L_f68; */
        /* L_f68:; */
        /* if (1 == 0) goto L_f7c; */
        /* if (((mDoExt_brkAnm*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 724)))->init() == 0) goto L_f7c; */
        /* L_f7c:; */
        /* if (1 == 0) goto L_f90; */
        /* if (((mDoExt_brkAnm*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 760)))->init() == 0) goto L_f90; */
        /* L_f90:; */
        return _restgpr_27(1, this->field_0x2f0, 1, 1, 1, 1, 1, 1);
}

/* 00001020-000011EC       .text _create__Q28daObjVds5Act_cFv */
cPhs_State daObjVds::Act_c::_create() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_1078; */
        /* if (/ * beq * / 1) goto L_106c; */
        __ct();
        mPhase = 0;
        /* field_0x2d4 = 0; */
        /* field_0x2d8 = 0; */
        /* field_0x2d4 = 0; */
        /* field_0x2e0 = 0; */
        /* field_0x2e4 = 0; */
        /* field_0x2f8 = 0; */
        /* field_0x2fc = 0; */
        /* field_0x2f8 = 0; */
        /* field_0x304 = 0; */
        /* field_0x308 = 0; */
        /* __construct_array((actor_condition + 828), ((char*)&__ct__15LIGHT_INFLUENCEFv + 0), ((char*)&__dt__15LIGHT_INFLUENCEFv + 0), 32, 2); */
        /* __construct_array((actor_condition + 892), ((char*)&__ct__4cXyzFv + 0), ((char*)&__dt__4cXyzFv + 0), 12, 2); */
        /* L_106c:; */
        /* L_1078:; */
        /* if (dComIfG_resLoad((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 660), ((char*)&L_attr__Q28daObjVds25@unnamed@d_a_obj_Vds_cpp@ + 72)) != 4) goto L_1158; */
        /* if (fopAcM_entrySolidHeap(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), ((char*)&solidHeapCB__Q28daObjVds5Act_cFP10fopAc_ac_c + 0), 0) == 0) goto L_1154; */
        /* ((daObjVds::Act_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->set_first_process(); */
        cullMtx = (this->field_0x50 + 36);
        /* fopAcM_setCullSizeBox(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->Regist(this->field_0x314, _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* field_0xa8 = 0; */
        /* ((daObjVds::Act_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->Event_init(); */
        /* field_0x338 = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getEventIdx(((char*)&@stringBase0 + 157), 255); */
        /* goto L_1158; */
        /* L_1154:; */
        /* L_1158:; */
        return _restgpr_29(5, -1);
}

/* 000012D4-00001368       .text _delete__Q28daObjVds5Act_cFv */
bool daObjVds::Act_c::_delete() {
        /* if (heap == 0) goto L_12c0; */
        /* if (this->field_0x314 == 0) goto L_12c0; */
        /* if (base < 0) goto L_12a4; */
        /* if (base >= 256) goto L_12a4; */
        /* goto L_12a8; */
        /* L_12a4:; */
        /* L_12a8:; */
        /* if (0 == 0) goto L_12c0; */
        /* ((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->Release(this->field_0x314); */
        /* L_12c0:; */
        delete_point_light();
        dComIfG_resDelete((this + 660), ((char*)&M_arcname__Q28daObjVds5Act_c + 0));
        return 1;
}

/* 00001368-00001420       .text set_mtx__Q28daObjVds5Act_cFv */
void daObjVds::Act_c::set_mtx() {
    /* field_0x18 = 0; */
    /* field_0x1c = 0; */
    /* field_0x20 = 0; */
    /* PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0), arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* mDoMtx_ZXYrotM(((char*)&now__14mDoMtx_stack_c + 0), shape_angle, this->field_0x20e); */
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x50 + 36));
    return PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this + 668));
}

/* 00001420-000014EC       .text _execute__Q28daObjVds5Act_cFv */
bool daObjVds::Act_c::_execute() {
    Event_exe();
    PlayLoopJointAnimation();
    /* field_0x10 = 0; */
    /* field_0x10 = 0; */
    process_common();
    process_main();
    set_mtx();
    if (this->field_0x314 != 0) {
        /* ((dBgW*)(this->field_0x314))->Move(); */
    }
    return 1;
}

/* 000014EC-000015A8       .text _draw__Q28daObjVds5Act_cFv */
bool daObjVds::Act_c::_draw() {
    ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(1, (this + 504), (this + 268));
    ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x50, (this + 268));
    /* ((mDoExt_brkAnm*)((this + 724)))->entry(this->field_0x4); */
    /* ((mDoExt_brkAnm*)((this + 760)))->entry(this->field_0x4); */
    /* ((mDoExt_McaMorf*)(this->field_0x2cc))->updateDL(); */
    /* ((mDoExt_McaMorf*)(this->field_0x2f0))->updateDL(); */
    return 1;
}

namespace daObjVds {
namespace {
/* 000015A8-000015C8       .text Mthd_Create__Q28daObjVds25@unnamed@d_a_obj_Vds_cpp@FPv */
cPhs_State Mthd_Create(void* i_this) {
    return ((daObjVds::Act_c*)i_this)->_create();
}

/* 000015C8-000015EC       .text Mthd_Delete__Q28daObjVds25@unnamed@d_a_obj_Vds_cpp@FPv */
BOOL Mthd_Delete(void* i_this) {
    return ((daObjVds::Act_c*)i_this)->_delete();
}

/* 000015EC-00001610       .text Mthd_Execute__Q28daObjVds25@unnamed@d_a_obj_Vds_cpp@FPv */
BOOL Mthd_Execute(void* i_this) {
    return ((daObjVds::Act_c*)i_this)->_execute();
}

/* 00001610-00001634       .text Mthd_Draw__Q28daObjVds25@unnamed@d_a_obj_Vds_cpp@FPv */
BOOL Mthd_Draw(void* i_this) {
    return ((daObjVds::Act_c*)i_this)->_draw();

/* 00001634-0000163C       .text Mthd_IsDelete__Q28daObjVds25@unnamed@d_a_obj_Vds_cpp@FPv */
BOOL Mthd_IsDelete(void*) {
    return 1;

static actor_method_class Mthd_Table = {
    (process_method_func)Mthd_Create,
    (process_method_func)Mthd_Delete,
    (process_method_func)Mthd_Execute,
    (process_method_func)Mthd_IsDelete,
    (process_method_func)Mthd_Draw,
};
}; // namespace
}; // namespace daObjVds

actor_process_profile_definition g_profile_Obj_Vds = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0003,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_Obj_Vds_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daObjVds::Act_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_Obj_Vds_e,
    /* Actor SubMtd */ &daObjVds::Mthd_Table,
    /* Status       */ fopAcStts_CULL_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_ACTOR_e,
    /* Cull Type    */ fopAc_CULLBOX_CUSTOM_e,
};

/* 由 fix_decomp_braces.py 补齐：反编译产物末尾缺 3 个 } */
}}}

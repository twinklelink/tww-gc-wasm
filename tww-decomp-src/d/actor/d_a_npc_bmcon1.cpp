/**
 * d_a_npc_bmcon1.cpp
 * NPC - Willi & Obli (Flight Control Platform)
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_npc_bmcon1.h"

/* 000000EC-000002A4       .text __ct__12daNpcBmcon_cFv */
daNpcBmcon_c::daNpcBmcon_c() {
    /* __ct__12daNpcBmcon_cFv: 无实义指令 */
}

/* 00000690-000007F0       .text daNpc_Bmcon_nodeCallBack__FP7J3DNodei */
static BOOL daNpc_Bmcon_nodeCallBack(J3DNode*, int) {
        /* _savegpr_28(arg0, int, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_6e8; */
        /* PSMTXCopy((this->field_0x8c + (this->field_0x18 * 48)), this->field_0x0); */
        /* if (this->field_0x18 != (this->field_0x7b0 & 255)) goto L_630; */
        /* mDoMtx_XrotM(this->field_0x0, this->field_0x292); */
        /* mDoMtx_ZrotM(this->field_0x0, ((-this->field_0x290) & 65535)); */
        /* L_630:; */
        /* if (this->field_0x18 != (this->field_0x299 & 255)) goto L_670; */
        /* mDoMtx_XrotM(this->field_0x0, this->field_0x296); */
        /* mDoMtx_ZrotM(this->field_0x0, ((-this->field_0x294) & 65535)); */
        /* L_670:; */
        /* if (this->field_0x18 != (this->field_0x7b1 & 255)) goto L_694; */
        PSMTXCopy(this->field_0x0, (this->field_0x14 + 1732));
        /* L_694:; */
        /* if (this->field_0x18 != (this->field_0x7b2 & 255)) goto L_6b8; */
        PSMTXCopy(this->field_0x0, (this->field_0x14 + 1780));
        /* L_6b8:; */
        PSMTXCopy(this->field_0x0, (this->field_0x8c + (this->field_0x18 * 48)));
        PSMTXCopy(this->field_0x0, ((char*)&mCurrentMtx__6J3DSys + 0));
        /* L_6e8:; */
        return _restgpr_28(1);
}

/* 000007F0-00000834       .text daNpc_Arm_nodeCallBack__FP7J3DNodei */
static BOOL daNpc_Arm_nodeCallBack(J3DNode*, int) {
    if (int == 0) {
        /* ((daNpcBmcon_c*)(this->field_0x14))->nodeArmControl(arg0, this->field_0x38); */
    }
    return 1;
}

/* 00000834-000008E4       .text nodeArmControl__12daNpcBmcon_cFP7J3DNodeP8J3DModel */
void daNpcBmcon_c::nodeArmControl(J3DNode*, J3DModel*) {
    /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    PSMTXCopy();
    if (/* bne */ 1) {
        /* PSMTXCopy((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1732), ((char*)&mCurrentMtx__6J3DSys + 0)); */
        /* PSMTXCopy((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1732)); */
    }
    if (/* bne */ 1) {
        /* PSMTXCopy((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1780), ((char*)&mCurrentMtx__6J3DSys + 0)); */
    }
    /* return _restgpr_28(PSMTXCopy((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1780))); */
}

/* 000008E4-00000904       .text CheckCreateHeap__FP10fopAc_ac_c */
static BOOL CheckCreateHeap(fopAc_ac_c* i_this) {
    static_cast<daNpcBmcon_c*>(i_this)->createHeap();
    return TRUE;
}

/* 00000904-00000994       .text phase_1__FP12daNpcBmcon_c */
void phase_1(daNpcBmcon_c*) {
        /* if (/ * bne * / 1) goto L_850; */
        /* if (arg0 == 0) goto L_844; */
        __ct();
        /* L_844:; */
        /* L_850:; */
        /* if (this->field_0x5b40 == 0) goto L_880; */
        /* if (/ * beq * / 1) goto L_870; */
        /* goto L_874; */
        /* L_870:; */
        /* L_874:; */
        /* if (fpcM_IsCreating(-1) == 0) goto L_888; */
        /* L_880:; */
        return 0;
        /* L_888:; */
        /* field_0x7b6 = 1; */
        return 2;
}

/* 00000994-00000A14       .text phase_2__FP12daNpcBmcon_c */
void phase_2(daNpcBmcon_c*) {
        /* if (dComIfG_resLoad((arg0 + 1828), ((char*)&l_arcname_tbl + 0), arg2) != 4) goto L_914; */
        /* if (fopAcM_entrySolidHeap(arg0, ((char*)&CheckCreateHeap__FP10fopAc_ac_c + 0), 0) == 0) goto L_908; */
        ((daNpcBmcon_c*)(arg0))->createInit();
        /* goto L_914; */
        /* L_908:; */
        /* field_0x330 = 0; */
        /* L_914:; */
        return 5;
}

/* 00000A14-00000A44       .text _create__12daNpcBmcon_cFv */
cPhs_State daNpcBmcon_c::_create() {
    /* return dComLbG_PhaseHandler((this + 1836), ((char*)&l_method$4376 + 0), this, arg3, arg4, arg5, arg6, arg7); */
}

/* 00000A44-0000105C       .text createHeap__12daNpcBmcon_cFv */
void daNpcBmcon_c::createHeap() {
    /* _savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    ((dRes_control_c*)(((char*)&l_arcname_tbl + 0)))->getIDRes(((this->field_0x7b7 << 2) & 65535));
    __nw(180);
    if (/* beq */ 1) {
    }
    /* field_0x330 = __ct(((dRes_control_c*)(((char*)&l_arcname_tbl + 0)))->getIDRes(((this->field_0x7b9 << 2) & 65535)), 1, ((dRes_control_c*)(((char*)&l_arcname_tbl + 0)))->getIDRes(((this->field_0x7b7 << 2) & 65535)), 0, 0, ((dRes_control_c*)(((char*)&l_arcname_tbl + 0)))->getIDRes(((this->field_0x7b9 << 2) & 65535)), 2, 0); */
    ((dRes_control_c*)(((char*)&l_arcname_tbl + 0)))->getIDRes(((this->field_0x7b7 << 2) & 65535));
    __nw(180);
    if (/* beq */ 1) {
    }
    /* field_0x734 = __ct(__ct(((dRes_control_c*)(((char*)&l_arcname_tbl + 0)))->getIDRes(((this->field_0x7b9 << 2) & 65535)), 1, ((dRes_control_c*)(((char*)&l_arcname_tbl + 0)))->getIDRes(((this->field_0x7b7 << 2) & 65535)), 0, 0, ((dRes_control_c*)(((char*)&l_arcname_tbl + 0)))->getIDRes(((this->field_0x7b9 << 2) & 65535)), 2, 0), 1, ((dRes_control_c*)(((char*)&l_arcname_tbl + 0)))->getIDRes(((this->field_0x7b7 << 2) & 65535)), 0, 0, ((dRes_control_c*)(((char*)&l_arcname_tbl + 0)))->getIDRes(((this->field_0x7b9 << 2) & 65535)), 2, 0); */
    if (this->field_0x734 != 0) {
        /* if (this->field_0x50 == 0) goto L_b48; */
    }
    return 0;
    /* L_b48:; */
    /* field_0x738 = mDoExt_J3DModel(((dRes_control_c*)(((char*)&l_arcname_tbl + 0)))->getIDRes(((this->field_0x7b7 << 2) & 65535))); */
    if (this->field_0x738 == 0) {
        return 0;
    }
    /* field_0x298 = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 14)); */
    if (this->field_0x298 != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 14))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 19), 1007, ((char*)&@stringBase0 + 38)); */
        OSPanic(((char*)&@stringBase0 + 19), 1007, ((char*)&@stringBase0 + 65));
    }
    /* field_0x299 = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 70)); */
    if (this->field_0x299 != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 70))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 19), 1011, ((char*)&@stringBase0 + 79)); */
        OSPanic(((char*)&@stringBase0 + 19), 1011, ((char*)&@stringBase0 + 65));
    }
    /* field_0x7b0 = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 110)); */
    if (this->field_0x7b0 != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 110))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 19), 1018, ((char*)&@stringBase0 + 115)); */
        OSPanic(((char*)&@stringBase0 + 19), 1018, ((char*)&@stringBase0 + 65));
    }
    /* field_0x7b1 = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 134)); */
    if (this->field_0x7b1 != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 134))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 19), 1022, ((char*)&@stringBase0 + 139)); */
        OSPanic(((char*)&@stringBase0 + 19), 1022, ((char*)&@stringBase0 + 65));
    }
    /* field_0x7b2 = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 160)); */
    if (this->field_0x7b2 != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 160))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 19), 1024, ((char*)&@stringBase0 + 165)); */
        OSPanic(((char*)&@stringBase0 + 19), 1024, ((char*)&@stringBase0 + 65));
    }
    /* field_0x7b3 = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 186)); */
    if (this->field_0x7b3 != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 186))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 19), 1028, ((char*)&@stringBase0 + 194)); */
        OSPanic(((char*)&@stringBase0 + 19), 1028, ((char*)&@stringBase0 + 65));
    }
    /* field_0x7b4 = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 215)); */
    if (this->field_0x7b4 != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 215))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 19), 1030, ((char*)&@stringBase0 + 223)); */
        OSPanic(((char*)&@stringBase0 + 19), 1030, ((char*)&@stringBase0 + 65));
    }
    /* goto L_e98; */
    /* L_e28:; */
    if ((0 & 65535) != (this->field_0x298 & 255)) {
        /* if ((0 & 65535) != (this->field_0x299 & 255)) goto L_e7c; */
        /* if ((0 & 65535) != (this->field_0x7b0 & 255)) goto L_e7c; */
        /* if ((0 & 65535) != (this->field_0x7b1 & 255)) goto L_e7c; */
        /* if ((0 & 65535) == (this->field_0x7b2 & 255)) goto L_e94; */
    }
    /* L_e7c:; */
    /* field_0x8 = 0; */
    /* L_e94:; */
    /* L_e98:; */
    /* if (((0 + 1) & 65535) >= this->field_0x28) goto L_e28; */
    /* field_0x14 = _savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* goto L_efc; */
    /* L_ec4:; */
    if ((0 & 65535) != (this->field_0x7b3 & 255)) {
        /* if ((0 & 65535) == (this->field_0x7b4 & 255)) goto L_ef8; */
    }
    /* field_0x8 = 0; */
    /* L_ef8:; */
    /* L_efc:; */
    /* if (((0 + 1) & 65535) >= this->field_0x28) goto L_ec4; */
    /* field_0x14 = _savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* ((dBgS_AcchCir*)((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1272)))->SetWall(((char*)&daNpc_Arm_nodeCallBack__FP7J3DNodei + 0), (0 + 1)); */
    /* ((dBgS_Acch*)((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 820)))->Set((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 484), _savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 1, (_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1272), (_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 544), (_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 516)); */
    return _restgpr_26(1);
}

/* 0000105C-0000107C       .text daNpcBmcon_XyCheckCB__FPvi */
static s16 daNpcBmcon_XyCheckCB(void* i_this, int i_param) {
    return static_cast<daNpcBmcon_c*>(i_this)->XyCheckCB(i_param);
}

/* 0000107C-00001468       .text createInit__12daNpcBmcon_cFv */
void daNpcBmcon_c::createInit() {
        /* if ((((daNpcBmcon_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getPrmRailID() & 16777215) == 255) goto L_1068; */
        /* ((dNpc_PathRun_c*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1880)))->setInf(((daNpcBmcon_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getPrmRailID(), this->field_0x20a, 1); */
        /* if (this->field_0x758 != 0) goto L_ff4; */
        return 5;
        /* L_ff4:; */
        dPath_GetNextRoomPath(5, -1);
        /* getPoint((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1880)); */
        old = 0;
        /* field_0x1e8 = 0; */
        /* field_0x1ec = 0; */
        current = 0;
        /* field_0x1fc = 0; */
        /* field_0x200 = 0; */
        /* ((dNpc_PathRun_c*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1880)))->incIdxLoop(); */
        /* field_0x796 = 1; */
        /* L_1068:; */
        gravity = 0;
        /* ((daNpcBmcon_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnmTbl(((C_@2100 + 0) + 96)); */
        /* if (this->field_0x7b7 == 1) goto L_114c; */
        /* if (/ * bge * / 1) goto L_1190; */
        /* if (this->field_0x7b7 >= 0) goto L_10a4; */
        /* goto L_1190; */
        /* L_10a4:; */
        /* field_0x792 = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getEventIdx(((char*)&@stringBase0 + 244), 255); */
        /* field_0x794 = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getEventIdx(((char*)&@stringBase0 + 257), 255); */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 4440)))->isEventBit(528) == 0) goto L_1190; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 4440)))->offEventBit(528);
        /* fopAcM_orderChangeEventId(this->field_0x5b40, _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x792, 0); */
        /* goto L_1190; */
        /* L_114c:; */
        /* field_0x792 = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getEventIdx(((char*)&@stringBase0 + 272), 255); */
        /* field_0x794 = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getEventIdx(((char*)&@stringBase0 + 282), 255); */
        /* L_1190:; */
        /* field_0x104 = 0; */
        /* ((dNpc_EventCut_c*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 708)))->setActorInfo2(((C_@2100 + 0) + 48), _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* field_0x7a8 = 0; */
        /* field_0x7ac = 0; */
        /* field_0x7ad = 0; */
        /* field_0x7c1 = 0; */
        cullMtx = (this->field_0x50 + 36);
        /* fopAcM_setCullSizeBox(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* field_0x26d = 169; */
        /* field_0x26f = 169; */
        /* field_0x280 = 10; */
        /* ((dNpc_JntCtrl_c*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 656)))->setParam(this->field_0x4, this->field_0x6, this->field_0xc, this->field_0xe, ((C_@2100 + 0) + 128), this->field_0x2, this->field_0x8); */
        /* field_0x788 = 0; */
        /* ((dBgS_Acch*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 820)))->CrrPos(((char*)&g_dComIfG_gameInfo + 4768)); */
        /* if (/ * beq * / 1) goto L_12d4; */
        /* field_0x1d4 = 0; */
        /* field_0x1fc = 0; */
        /* L_12d4:; */
        /* ((daNpcBmcon_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setMtx(); */
        /* ((dCcD_Stts*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1336)))->Init(254, 255, _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* ((dCcD_Cyl*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1396)))->Set(((char*)&dNpc_cyl_src + 0)); */
        /* field_0x5b8 = (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1336); */
        /* ((daNpcBmcon_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setCollision((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1396)); */
        return _restgpr_27(4);
}

/* 00001468-000014D8       .text _delete__12daNpcBmcon_cFv */
bool daNpcBmcon_c::_delete() {
    if (this->field_0x7b6 != 0) {
        /* dComIfG_resDelete((this + 1828), ((char*)&l_arcname_tbl + 0), arg2); */
    }
    if (heap != 0) {
        /* if (this->field_0x330 != 0) goto L_13d4; */
        /* ((mDoExt_McaMorf*)(this->field_0x330))->stopZelAnime(); */
    }
    /* L_13d4:; */
    return 1;
}

/* 000014D8-00001694       .text _draw__12daNpcBmcon_cFv */
bool daNpcBmcon_c::_draw() {
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(0, (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x50, (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x738, (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        /* ((mDoExt_McaMorf*)(this->field_0x330))->updateDL(); */
        /* ((mDoExt_McaMorf*)(this->field_0x734))->updateDL(); */
        PSMTXCopy((this->field_0x8c + ((this->field_0x298 & 255) * 48)), (this->field_0x738 + 36));
        /* mDoExt_modelUpdateDL(this->field_0x738); */
        /* field_0x754 = dComIfGd_setShadow(this->field_0x754, 1, this->field_0x50); */
        /* if (this->field_0x754 == 0) goto L_153c; */
        /* ((dDlst_shadowControl_c*)(((char*)&g_dComIfG_gameInfo + 24416)))->addReal(this->field_0x754, this->field_0x738); */
        /* ((dDlst_shadowControl_c*)(((char*)&g_dComIfG_gameInfo + 24416)))->addReal(this->field_0x754, this->field_0x50); */
        /* L_153c:; */
        /* if (this->field_0x7b7 == 1) goto L_1574; */
        /* if (/ * bge * / 1) goto L_158c; */
        /* if (this->field_0x7b7 >= 0) goto L_1558; */
        /* goto L_158c; */
        /* L_1558:; */
        /* dSnap_RegistFig(149, _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_158c; */
        /* L_1574:; */
        /* dSnap_RegistFig(148, _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_158c:; */
        return _restgpr_27(1);
}

/* 00001694-00001878       .text _execute__12daNpcBmcon_cFv */
bool daNpcBmcon_c::_execute() {
        /* ((daNpcBmcon_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->chkAttention(); */
        /* ((daNpcBmcon_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->checkOrder(); */
        /* if (this->field_0x529a == 0) goto L_15f8; */
        /* if (this->field_0xf8 != 1) goto L_161c; */
        /* L_15f8:; */
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), moveProc, (this->field_0x7b5 * 12)); */
        /* goto L_1624; */
        /* L_161c:; */
        /* ((daNpcBmcon_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->eventMove(); */
        /* L_1624:; */
        /* ((daNpcBmcon_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->eventOrder(); */
        /* ((daNpcBmcon_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->playAnm(); */
        /* if (this->field_0x7b9 != 5) goto L_1694; */
        /* cLib_chaseF((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 596)); */
        /* if ((speedF * this->field_0x34) >= this->field_0x98) goto L_1680; */
        /* L_1680:; */
        /* field_0x64 = 0; */
        /* field_0x64 = 0; */
        /* goto L_16a4; */
        /* L_1694:; */
        /* cLib_chaseF((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 596)); */
        /* L_16a4:; */
        /* fopAcM_posMoveF(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1336)); */
        /* ((dBgS_Acch*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 820)))->CrrPos(((char*)&g_dComIfG_gameInfo + 4768)); */
        /* ((daNpcBmcon_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setCollision((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1396)); */
        /* field_0x274 = 0; */
        /* field_0x278 = (this->field_0x1fc + this->field_0x18); */
        /* field_0x27c = 0; */
        eyePos = 0;
        /* field_0x264 = (this->field_0x1fc + this->field_0x1c); */
        /* field_0x268 = 0; */
        /* ((daNpcBmcon_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->lookBack(); */
        /* ((daNpcBmcon_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setMtx(); */
        return _restgpr_29(0);
}

/* 00001878-00001BC8       .text executeCommon__12daNpcBmcon_cFv */
void daNpcBmcon_c::executeCommon() {
        /* if (this->field_0x7ad == 0) goto L_17d0; */
        /* if (this->field_0x7c3 != 0) goto L_17d0; */
        /* field_0x7ae = 1; */
        /* goto L_17d8; */
        /* L_17d0:; */
        /* field_0x7ae = 0; */
        /* L_17d8:; */
        /* if (this->field_0x7ac != 1) goto L_17fc; */
        /* if (this->field_0x7b5 == 1) goto L_17fc; */
        executeSetMode(1);
        /* L_17fc:; */
        /* if (this->field_0x7b7 == 1) goto L_1810; */
        /* if (/ * bge * / 1) goto L_1ac0; */
        /* goto L_1ac0; */
        /* L_1810:; */
        /* if ((this->field_0x513f & 255) == 2) goto L_1830; */
        /* if ((this->field_0x513f & 255) != 3) goto L_1ac0; */
        /* L_1830:; */
        calcFlyDist();
        /* if (this->field_0x7c5 != 0) goto L_18c8; */
        /* if (this->field_0x14 <= this->field_0xa0) goto L_18c8; */
        /* field_0x7c5 = (this->field_0x513f & 255); */
        ((JAIZelBasic*)(base))->bgmStart();
        ((JAIZelBasic*)(base))->seStart(2304, 0, 0, 0, 0);
        /* L_18c8:; */
        /* if (this->field_0x7c4 != 1) goto L_1988; */
        /* if (this->field_0x20 <= this->field_0xa4) goto L_192c; */
        /* if (this->field_0x28 >= this->field_0xa8) goto L_192c; */
        /* if (this->field_0x28 <= this->field_0xac) goto L_192c; */
        /* field_0x7c4 = 0; */
        /* field_0x5b6c = (this->field_0x5b6c + ((-this->field_0x13) & 65535)); */
        /* goto L_1988; */
        /* L_192c:; */
        /* if (this->field_0x20 < this->field_0xb0) goto L_1960; */
        /* if (this->field_0x20 > this->field_0xa4) goto L_1960; */
        /* if (this->field_0x28 < this->field_0xb4) goto L_1960; */
        /* if (this->field_0x28 <= this->field_0xb8) goto L_1988; */
        /* L_1960:; */
        /* field_0x7c4 = 2; */
        /* field_0x5b6c = (this->field_0x5b6c + ((-this->field_0x13) & 65535)); */
        /* L_1988:; */
        /* if (/ * beq * / 1) goto L_1ac0; */
        /* if (this->field_0x7a2 >= 0) goto L_19cc; */
        /* field_0x7c4 = 3; */
        /* L_19cc:; */
        /* ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 4440)))->setEventReg(((char*)&g_dComIfG_gameInfo + -1789), this->field_0x7c4); */
        /* if (this->field_0x7c4 == 0) goto L_19fc; */
        /* if (this->field_0x7c4 != 1) goto L_1a08; */
        /* L_19fc:; */
        /* field_0x7ae = 3; */
        /* goto L_1a10; */
        /* L_1a08:; */
        /* field_0x7ae = 4; */
        /* L_1a10:; */
        /* setFlyDistNow(this->field_0x7a2); */
        /* if (this->field_0x7c4 == 2) goto L_1a48; */
        /* if (this->field_0x7a2 <= (getFlyDistMax() & 65535)) goto L_1a48; */
        /* setFlyDistMax(this->field_0x7a2); */
        /* L_1a48:; */
        getPoint((this + 1880));
        old = 0;
        /* field_0x1e8 = 0; */
        /* field_0x1ec = 0; */
        current = 0;
        /* field_0x1fc = 0; */
        /* field_0x200 = 0; */
        /* field_0x79c = -24576; */
        /* field_0x206 = -24576; */
        /* if (/ * bne * / 1) goto L_1ac0; */
        /* field_0x7c5 = -24576; */
        ((JAIZelBasic*)(base))->bgmStop(90, 0);
        /* L_1ac0:; */
        /* return this->field_0x7ac; */
}

/* 00001BC8-00001C1C       .text executeSetMode__12daNpcBmcon_cFUc */
void daNpcBmcon_c::executeSetMode(unsigned char) {
    /* field_0x780 = 0; */
    /* field_0x7b5 = __ptmf_scall(this, l_execute_init, ((char & 16777215) * 12), arg3, arg4, arg5, arg6, arg7); */
    /* return __ptmf_scall(this, l_execute_init, ((char & 16777215) * 12), arg3, arg4, arg5, arg6, arg7); */
}

/* 00001C1C-00001CC8       .text executeWaitInit__12daNpcBmcon_cFv */
void daNpcBmcon_c::executeWaitInit() {
    speedF = 0;
    if (this->field_0x7b7 != 0) {
        setAnmTbl(((C_@2100 + 0) + 68));
    } else {
        ((daNpcBmcon_c*)(setAnmTbl(((C_@2100 + 0) + 68))))->setAnmTbl(((C_@2100 + 0) + 64));
    }
    /* ((dNpc_JntCtrl_c*)((this + 656)))->setParam(this->field_0x4, this->field_0x6, this->field_0xc, this->field_0xe, ((C_@2100 + 0) + 128), this->field_0x2, this->field_0x8); */
    return 0;
}

/* 00001CC8-00001D38       .text executeWait__12daNpcBmcon_cFv */
void daNpcBmcon_c::executeWait() {
    if (executeCommon() != 0) {
        /* if (this->field_0x7b7 == 1) goto L_1c38; */
        /* if (this->field_0x7ad != 0) goto L_1c38; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(10816) == 0) goto L_1c38; */
        /* field_0x7ae = 2; */
    }
    /* L_1c38:; */
    return ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(10816);
}

/* 00001D38-00001D48       .text executeTalkInit__12daNpcBmcon_cFv */
void daNpcBmcon_c::executeTalkInit() {
    /* field_0x7bf = 1; */
    return 1;
}

/* 00001D48-00001E40       .text executeTalk__12daNpcBmcon_cFv */
void daNpcBmcon_c::executeTalk() {
        executeCommon();
        /* if ((talk2(1) & 65535) != 18) goto L_1d38; */
        /* field_0x7ac = 0; */
        executeSetMode(0);
        /* if (this->field_0x7c2 == 0) goto L_1d20; */
        /* field_0x7c3 = 1; */
        /* field_0x7ae = 0; */
        dComIfGp_setNextStage(((char*)&@stringBase0 + 293), 1, 14, 2, 0, 1, 0);
        /* goto L_1d40; */
        /* L_1d20:; */
        /* goto L_1d40; */
        /* L_1d38:; */
        /* L_1d40:; */
        return setAnmFromMsgTag();
}

/* 00001E40-00001E6C       .text executeWalkInit__12daNpcBmcon_cFv */
void daNpcBmcon_c::executeWalkInit() {
    setAnmTbl(((char*)&l_npc_anm_walk + 0));
    return 2;
}

/* 00001E6C-00002050       .text executeWalk__12daNpcBmcon_cFv */
void daNpcBmcon_c::executeWalk() {
        /* if (executeCommon() != 0) goto L_1f4c; */
        /* if (((dNpc_PathRun_c*)((this + 1880)))->chkPointPass() == 0) goto L_1df8; */
        /* if (((dNpc_PathRun_c*)((this + 1880)))->nextIdxAuto() != 0) goto L_1df8; */
        /* L_1df8:; */
        /* if (1 != 0) goto L_1eb8; */
        getPoint((this + 1880));
        dNpc_calc_DisXZ_AngY();
        /* field_0x790 = 0; */
        /* field_0x7be = 2; */
        /* field_0x29a = 1; */
        /* field_0x780 = 0; */
        /* goto L_1f4c; */
        /* L_1eb8:; */
        getPoint((this + 1880));
        dNpc_calc_DisXZ_AngY();
        ((dNpc_PathRun_c*)((this + 1880)))->setInf(255, this->field_0x20a, 1);
        /* L_1f4c:; */
        return executeSetMode(0);
}

/* 00002050-00002194       .text executeTurnInit__12daNpcBmcon_cFv */
void daNpcBmcon_c::executeTurnInit() {
    getPoint((this + 1880));
    dNpc_calc_DisXZ_AngY();
    if (/* bne */ 1) {
        setAnmTbl(((char*)&l_npc_anm_walk + 0));
        cM_rndF(C_@4938);
        return 2;
    }
    return 3;
}

/* 00002194-00002264       .text executeTurn__12daNpcBmcon_cFv */
void daNpcBmcon_c::executeTurn() {
    if (executeCommon() != 0) {
        getPoint((this + 1880));
        dNpc_calc_DisXZ_AngY();
        /* field_0x790 = 0; */
        /* field_0x7be = 2; */
        /* field_0x29a = 1; */
        /* if (this->field_0x206 == 0) goto L_2164; */
    }
    /* L_2164:; */
    return executeSetMode(2);
}

/* 00002264-00002360       .text checkOrder__12daNpcBmcon_cFv */
void daNpcBmcon_c::checkOrder() {
        /* if (this->field_0xf8 != 2) goto L_222c; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->startCheck(this->field_0x792) == 0) goto L_21d4; */
        /* if (this->field_0x7ae != 3) goto L_21d4; */
        /* field_0x7ae = 0; */
        /* goto L_225c; */
        /* L_21d4:; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->startCheck(this->field_0x794) == 0) goto L_2200; */
        /* if (this->field_0x7ae != 4) goto L_2200; */
        /* field_0x7ae = 0; */
        /* goto L_225c; */
        /* L_2200:; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->startCheck(this->field_0x794) == 0) goto L_225c; */
        /* if (this->field_0x7ae != 6) goto L_225c; */
        /* field_0x7ae = 0; */
        /* goto L_225c; */
        /* L_222c:; */
        /* if (0 != 1) goto L_225c; */
        /* if (this->field_0x7ae == 2) goto L_2248; */
        /* if (this->field_0x7ae != 1) goto L_225c; */
        /* L_2248:; */
        /* field_0x7ac = 1; */
        /* L_225c:; */
        return executeSetMode(1);
}

/* 00002360-00002444       .text eventOrder__12daNpcBmcon_cFv */
void daNpcBmcon_c::eventOrder() {
        /* if (this->field_0x7ae == 2) goto L_2298; */
        /* if (this->field_0x7ae != 1) goto L_22c8; */
        /* L_2298:; */
        /* if (/ * bne * / 1) goto L_2348; */
        fopAcM_orderSpeakEvent(this);
        /* goto L_2348; */
        /* L_22c8:; */
        /* if (/ * bne * / 1) goto L_22f4; */
        /* fopAcM_orderChangeEventId(this->field_0x5b38); */
        /* goto L_2348; */
        /* L_22f4:; */
        /* if (/ * bne * / 1) goto L_2320; */
        /* fopAcM_orderChangeEventId(this->field_0x5b38); */
        /* goto L_2348; */
        /* L_2320:; */
        /* if (/ * bne * / 1) goto L_2348; */
        /* L_2348:; */
        /* return fopAcM_orderChangeEventId(this->field_0x5b38); */
}

/* 00002444-000024C8       .text eventMove__12daNpcBmcon_cFv */
void daNpcBmcon_c::eventMove() {
        /* if (chkEndEvent() != 0) goto L_23b8; */
        /* if (((dNpc_EventCut_c*)((this + 708)))->cutProc() == 0) goto L_23a4; */
        /* if (this->field_0x324 != 0) goto L_23c4; */
        /* goto L_23c4; */
        /* L_23a4:; */
        privateCut();
        setAnmFromMsgTag();
        /* goto L_23c4; */
        /* L_23b8:; */
        /* L_23c4:; */
        return executeSetMode(0);
}

/* 000024C8-000025F8       .text privateCut__12daNpcBmcon_cFv */
void daNpcBmcon_c::privateCut() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&l_npc_staff_id + 0), 0, 0) == -1) goto L_24f4; */
        /* field_0x7bc = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyActIdx(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&l_npc_staff_id + 0), 0, 0), ((char*)&cut_name_tbl$5038 + 0), 2, 1, 0); */
        /* if ((this->field_0x7bc & 255) != -1) goto L_2474; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&l_npc_staff_id + 0), 0, 0));
        /* goto L_24f4; */
        /* L_2474:; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getIsAddvance(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&l_npc_staff_id + 0), 0, 0)) == 0) goto L_24c0; */
        /* if ((this->field_0x7bc & 255) == 1) goto L_24b8; */
        /* if (/ * bge * / 1) goto L_24c0; */
        /* if ((this->field_0x7bc & 255) >= 0) goto L_24a8; */
        /* goto L_24c0; */
        /* L_24a8:; */
        /* ((daNpcBmcon_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->eventMesSetInit(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&l_npc_staff_id + 0), 0, 0)); */
        /* goto L_24c0; */
        /* L_24b8:; */
        /* ((daNpcBmcon_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->eventGetItemInit(); */
        /* L_24c0:; */
        /* if (this->field_0x7bc == 0) goto L_24d0; */
        /* goto L_24dc; */
        /* L_24d0:; */
        /* ((daNpcBmcon_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->eventMesSet(); */
        /* goto L_24e0; */
        /* L_24dc:; */
        /* L_24e0:; */
        /* if (1 == 0) goto L_24f4; */
        /* L_24f4:; */
        return _restgpr_29(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&l_npc_staff_id + 0), 0, 0)));
}

/* 000025F8-00002A48       .text eventMesSetInit__12daNpcBmcon_cFi */
void daNpcBmcon_c::eventMesSetInit(int) {
        /* _savegpr_28(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP() == 0) goto L_2928; */
        /* field_0x77c = 0; */
        /* if (base == 2) goto L_2778; */
        /* if (/ * bge * / 1) goto L_2584; */
        /* if (base == 0) goto L_2590; */
        /* if (/ * bge * / 1) goto L_25b4; */
        /* goto L_2904; */
        /* L_2584:; */
        /* if (base == 10) goto L_27f4; */
        /* goto L_2904; */
        /* L_2590:; */
        /* ((daNpcBmcon_c*)(_savegpr_28(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->setMessage(_savegpr_28(this, int, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_290c; */
        /* L_25b4:; */
        /* if (this->field_0x7c4 == 2) goto L_2730; */
        /* if (/ * bge * / 1) goto L_25d4; */
        /* if (this->field_0x7c4 == 0) goto L_25e0; */
        /* if (/ * bge * / 1) goto L_2688; */
        /* goto L_274c; */
        /* L_25d4:; */
        /* if (this->field_0x7c4 >= 4) goto L_274c; */
        /* goto L_2740; */
        /* L_25e0:; */
        /* ((daNpcBmcon_c*)(_savegpr_28(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->setMessage(10930); */
        ((dVibration_c*)(((char*)&g_dComIfG_gameInfo + 22944)))->StartShock(8, 1);
        ((dVibration_c*)(((char*)&g_dComIfG_gameInfo + 22944)))->StartShock(4, 30);
        ((JAIZelBasic*)(base))->seStart(2306, 0, 0, 0, 0);
        /* goto L_274c; */
        /* L_2688:; */
        /* ((daNpcBmcon_c*)(_savegpr_28(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->setMessage(10931); */
        ((dVibration_c*)(((char*)&g_dComIfG_gameInfo + 45888)))->StartShock(8, 1);
        ((dVibration_c*)(((char*)&g_dComIfG_gameInfo + 45888)))->StartShock(4, 30);
        ((JAIZelBasic*)(base))->seStart(2305, 0, 0, 0, 0);
        /* goto L_274c; */
        /* L_2730:; */
        /* ((daNpcBmcon_c*)(_savegpr_28(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->setMessage(10928); */
        /* goto L_274c; */
        /* L_2740:; */
        /* ((daNpcBmcon_c*)(_savegpr_28(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->setMessage(10933); */
        /* L_274c:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(10497);
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 4440)))->onEventBit(528);
        /* goto L_290c; */
        /* L_2778:; */
        /* if (this->field_0x7c4 == 2) goto L_27d4; */
        /* if (/ * bge * / 1) goto L_2798; */
        /* if (this->field_0x7c4 == 0) goto L_27a4; */
        /* if (/ * bge * / 1) goto L_27b4; */
        /* goto L_290c; */
        /* L_2798:; */
        /* if (this->field_0x7c4 >= 4) goto L_290c; */
        /* goto L_27e4; */
        /* L_27a4:; */
        /* ((daNpcBmcon_c*)(_savegpr_28(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->setMessage(10932); */
        /* goto L_290c; */
        /* L_27b4:; */
        /* ((daNpcBmcon_c*)(_savegpr_28(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->setMessage(10918); */
        /* goto L_290c; */
        /* L_27d4:; */
        /* ((daNpcBmcon_c*)(_savegpr_28(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->setMessage(10928); */
        /* goto L_290c; */
        /* L_27e4:; */
        /* ((daNpcBmcon_c*)(_savegpr_28(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->setMessage(10933); */
        /* goto L_290c; */
        /* L_27f4:; */
        /* if ((((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 4440)))->getEventReg() & 16777215) == 2) goto L_28e4; */
        /* if (/ * bge * / 1) goto L_282c; */
        /* if ((((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 4440)))->getEventReg() & 16777215) == 0) goto L_2838; */
        /* if (/ * bge * / 1) goto L_287c; */
        /* goto L_290c; */
        /* L_282c:; */
        /* if ((((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 4440)))->getEventReg() & 16777215) >= 4) goto L_290c; */
        /* goto L_28f4; */
        /* L_2838:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(11072) == 0) goto L_2864; */
        /* field_0x77c = ((C_@2100 + 0) + 416); */
        /* goto L_290c; */
        /* L_2864:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(11072);
        /* field_0x77c = ((C_@2100 + 0) + 392); */
        /* goto L_290c; */
        /* L_287c:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(11072) == 0) goto L_28a8; */
        /* ((daNpcBmcon_c*)(_savegpr_28(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->setMessage(10927); */
        /* goto L_290c; */
        /* L_28a8:; */
        /* if (((((daNpcBmcon_c*)(_savegpr_28(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->getFlyDistNow() & 65535) * 6) <= 4) goto L_28cc; */
        /* L_28cc:; */
        /* ((daNpcBmcon_c*)(_savegpr_28(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->setMessage(((C_@2100 + 0) + 372)); */
        /* goto L_290c; */
        /* L_28e4:; */
        /* ((daNpcBmcon_c*)(_savegpr_28(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->setMessage(10929); */
        /* goto L_290c; */
        /* L_28f4:; */
        /* ((daNpcBmcon_c*)(_savegpr_28(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->setMessage(10934); */
        /* goto L_290c; */
        /* L_2904:; */
        /* ((daNpcBmcon_c*)(_savegpr_28(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->setMessage(); */
        /* L_290c:; */
        /* if (this->field_0x77c == 0) goto L_2944; */
        /* ((daNpcBmcon_c*)(_savegpr_28(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->setMessage(base); */
        /* goto L_2944; */
        /* L_2928:; */
        /* field_0x77c = (this->field_0x77c + 4); */
        /* L_2944:; */
        /* return _restgpr_28(((daNpcBmcon_c*)(_savegpr_28(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->setMessage(base)); */
}

/* 00002A48-00002ADC       .text eventMesSet__12daNpcBmcon_cFv */
void daNpcBmcon_c::eventMesSet() {
        /* if ((talk2(0) & 65535) != 18) goto L_29cc; */
        /* if (this->field_0x7b8 == 0) goto L_29ac; */
        /* field_0x7b8 = (talk2(0) & 65535); */
        /* field_0x78c = 7; */
        /* field_0x7ae = 6; */
        /* goto L_29cc; */
        /* L_29ac:; */
        /* if (/ * beq * / 1) goto L_29cc; */
        /* field_0x7b8 = 6; */
        /* field_0x78c = 5; */
        /* field_0x7ae = 6; */
        /* L_29cc:; */
        return ((18 - (talk2(0) & 65535)) >> 5);
}

/* 00002ADC-00002B38       .text eventGetItemInit__12daNpcBmcon_cFv */
void daNpcBmcon_c::eventGetItemInit() {
    fopAcM_createItemForPresentDemo((this + 504));
    if (/* beq */ 1) {
        /* field_0x52a8 = fopAcM_createItemForPresentDemo((this + 504)); */
    }
    return fopAcM_createItemForPresentDemo((this + 504));
}

/* 00002B38-00002C8C       .text talk2__12daNpcBmcon_cFi */
void daNpcBmcon_c::talk2(int) {
        /* if (/ * bne * / 1) goto L_2abc; */
        /* if (int != 1) goto L_2a94; */
        mMessage = this;
        /* L_2a94:; */
        /* field_0x6ac = fopMsgM_messageSet(mMessage, this); */
        /* field_0x6b0 = 0; */
        /* field_0x79e = (fopMsgM_messageSet(mMessage, this) + -1); */
        /* goto L_2b84; */
        /* L_2abc:; */
        /* if (this->field_0x6b0 == 0) goto L_2b78; */
        /* if (this->field_0xf8 == 14) goto L_2af0; */
        /* if (/ * bge * / 1) goto L_2ae4; */
        /* if (this->field_0xf8 == 6) goto L_2b28; */
        /* goto L_2b58; */
        /* L_2ae4:; */
        /* if (this->field_0xf8 == 18) goto L_2b48; */
        /* goto L_2b58; */
        /* L_2af0:; */
        /* field_0xf8 = fopMsgM_messageSet(mMessage, this); */
        /* if (this->field_0xf8 != 15) goto L_2b58; */
        fopMsgM_messageSet(mMessage);
        /* goto L_2b58; */
        /* L_2b28:; */
        /* if (this->field_0x79e == 15) goto L_2b3c; */
        /* if (this->field_0x79e != 2) goto L_2b58; */
        /* L_2b3c:; */
        chkMsg();
        /* goto L_2b58; */
        /* L_2b48:; */
        /* field_0xf8 = 19; */
        /* field_0x6ac = -1; */
        /* L_2b58:; */
        /* goto L_2b84; */
        /* L_2b78:; */
        /* field_0x6b0 = fopMsgM_SearchByID(this); */
        /* L_2b84:; */
        /* return this->field_0xf8; */
}

/* 00002C8C-00002E58       .text next_msgStatus__12daNpcBmcon_cFPUl */
void daNpcBmcon_c::next_msgStatus(unsigned long*) {
        /* if (/ * beq * / 1) goto L_2bbc; */
        /* goto L_2bc8; */
        /* L_2bbc:; */
        base = 11007;
        /* goto L_2d64; */
        /* L_2bc8:; */
        /* if (this->field_0x77c == 0) goto L_2d60; */
        /* field_0x77c = (this->field_0x77c + 4); */
        /* if (base == 3) goto L_2d00; */
        /* if (/ * bge * / 1) goto L_2c08; */
        /* if (base == 1) goto L_2c28; */
        /* if (/ * bge * / 1) goto L_2c94; */
        /* if (base >= 0) goto L_2c18; */
        /* goto L_2d58; */
        /* L_2c08:; */
        /* if (base == 5) goto L_2d44; */
        /* if (/ * bge * / 1) goto L_2d58; */
        /* goto L_2d30; */
        /* L_2c18:; */
        /* field_0x77c = 0; */
        /* goto L_2d64; */
        /* L_2c28:; */
        /* if (this->field_0xfa != 0) goto L_2c7c; */
        /* if (this->field_0x4 >= this->field_0x5bb0) goto L_2c5c; */
        /* field_0x77c = ((C_@2100 + 0) + 320); */
        /* goto L_2c84; */
        /* L_2c5c:; */
        /* field_0x77c = ((C_@2100 + 0) + 300); */
        /* field_0x5b54 = (this->field_0x5b54 + (-this->field_0x5bb0)); */
        /* goto L_2c84; */
        /* L_2c7c:; */
        /* field_0x77c = (this->field_0x5b54 + 312); */
        /* L_2c84:; */
        /* goto L_2d64; */
        /* L_2c94:; */
        /* if (this->field_0xfa != 0) goto L_2ce8; */
        /* if (this->field_0x4 >= this->field_0x5bb0) goto L_2cc8; */
        /* field_0x77c = (this->field_0x5b54 + 320); */
        /* goto L_2cf0; */
        /* L_2cc8:; */
        /* field_0x77c = (this->field_0x5b54 + 348); */
        /* field_0x5b54 = (this->field_0x5b54 + (-this->field_0x5bb0)); */
        /* goto L_2cf0; */
        /* L_2ce8:; */
        /* field_0x77c = (this->field_0x5b54 + 356); */
        /* L_2cf0:; */
        /* goto L_2d64; */
        /* L_2d00:; */
        /* field_0x5b6c = (this->field_0x5b6c + this->field_0x13); */
        /* field_0x7c2 = 1; */
        /* field_0x77c = 0; */
        /* goto L_2d64; */
        /* L_2d30:; */
        /* goto L_2d64; */
        /* L_2d44:; */
        /* goto L_2d64; */
        /* L_2d58:; */
        /* goto L_2d64; */
        /* L_2d60:; */
        /* L_2d64:; */
        return 16;
}

/* 00002E58-0000301C       .text getMsg__12daNpcBmcon_cFv */
void daNpcBmcon_c::getMsg() {
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x77c = 0; */
        /* if (this->field_0x52b8 == 1) goto L_2dbc; */
        /* if (this->field_0x52b8 == 2) goto L_2dbc; */
        /* if (this->field_0x52b8 != 3) goto L_2dc0; */
        /* L_2dbc:; */
        /* L_2dc0:; */
        /* if (1 != 0) goto L_2f04; */
        /* if (this->field_0x7b7 == 1) goto L_2e74; */
        /* if (/ * bge * / 1) goto L_2f04; */
        /* if (this->field_0x7b7 >= 0) goto L_2de4; */
        /* goto L_2f04; */
        /* L_2de4:; */
        /* if (this->field_0x7c2 == 0) goto L_2dfc; */
        /* field_0x77c = ((C_@2100 + 0) + 364); */
        /* goto L_2f04; */
        /* L_2dfc:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(10497) != 0) goto L_2e24; */
        /* field_0x77c = ((C_@2100 + 0) + 280); */
        /* goto L_2f04; */
        /* L_2e24:; */
        /* if (((daNpcBmcon_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->isClear() == 0) goto L_2e54; */
        /* field_0x77c = ((C_@2100 + 0) + 340); */
        /* field_0x5bac = ((daNpcBmcon_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getFlyDistMax(); */
        /* goto L_2f04; */
        /* L_2e54:; */
        /* field_0x5bac = ((daNpcBmcon_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getFlyDistMax(); */
        /* field_0x77c = ((C_@2100 + 0) + 328); */
        /* goto L_2f04; */
        /* L_2e74:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(10816) != 0) goto L_2eac; */
        /* field_0x77c = ((C_@2100 + 0) + 436); */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(10816);
        /* goto L_2f04; */
        /* L_2eac:; */
        /* if (((daNpcBmcon_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->isClear() == 0) goto L_2ec8; */
        /* field_0x77c = ((C_@2100 + 0) + 444); */
        /* goto L_2f04; */
        /* L_2ec8:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(10497) == 0) goto L_2efc; */
        /* field_0x5bac = ((daNpcBmcon_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getFlyDistMax(); */
        /* field_0x77c = ((C_@2100 + 0) + 452); */
        /* goto L_2f04; */
        /* L_2efc:; */
        /* field_0x77c = ((C_@2100 + 0) + 468); */
        /* L_2f04:; */
        /* if (this->field_0x77c == 0) goto L_2f14; */
        /* L_2f14:; */
        return _restgpr_28(base, ((char*)&g_dComIfG_gameInfo + 0));
}

/* 0000301C-00003098       .text chkMsg__12daNpcBmcon_cFv */
void daNpcBmcon_c::chkMsg() {
        /* if (mMessage == 10931) goto L_2f7c; */
        /* if (/ * bge * / 1) goto L_2f9c; */
        /* if (mMessage >= 10930) goto L_2f58; */
        /* goto L_2f9c; */
        /* L_2f58:; */
        /* ((JAIZelBasic*)(base))->bgmStart((arg1 + 81), 0, 0); */
        /* goto L_2f9c; */
        /* L_2f7c:; */
        /* L_2f9c:; */
        return ((JAIZelBasic*)(base))->bgmStart();
}

/* 00003098-000030A0       .text setMessage__12daNpcBmcon_cFUl */
void daNpcBmcon_c::setMessage(unsigned long msg) {
    mMessage = msg;
}

/* 000030A0-00003158       .text setAnmFromMsgTag__12daNpcBmcon_cFv */
void daNpcBmcon_c::setAnmFromMsgTag() {
    if (this->field_0x5bcf <= 19) {
        setAnmTbl(((C_@2100 + 0) + 64));
        /* goto L_3050; */
        ((daNpcBmcon_c*)(setAnmTbl(((C_@2100 + 0) + 64))))->setAnmTbl();
        /* goto L_3050; */
        ((daNpcBmcon_c*)(((daNpcBmcon_c*)(setAnmTbl(((C_@2100 + 0) + 64))))->setAnmTbl()))->setAnmTbl();
        /* goto L_3050; */
        ((daNpcBmcon_c*)(((daNpcBmcon_c*)(((daNpcBmcon_c*)(setAnmTbl(((C_@2100 + 0) + 64))))->setAnmTbl()))->setAnmTbl()))->setAnmTbl();
        /* goto L_3050; */
        /* field_0x7c0 = 0; */
        ((daNpcBmcon_c*)(((daNpcBmcon_c*)(((daNpcBmcon_c*)(((daNpcBmcon_c*)(setAnmTbl(((C_@2100 + 0) + 64))))->setAnmTbl()))->setAnmTbl()))->setAnmTbl()))->setAnmTbl();
        /* goto L_3050; */
        ((daNpcBmcon_c*)(((daNpcBmcon_c*)(((daNpcBmcon_c*)(((daNpcBmcon_c*)(((daNpcBmcon_c*)(setAnmTbl(((C_@2100 + 0) + 64))))->setAnmTbl()))->setAnmTbl()))->setAnmTbl()))->setAnmTbl()))->setAnmTbl();
        /* goto L_3050; */
        ((daNpcBmcon_c*)(((daNpcBmcon_c*)(((daNpcBmcon_c*)(((daNpcBmcon_c*)(((daNpcBmcon_c*)(((daNpcBmcon_c*)(setAnmTbl(((C_@2100 + 0) + 64))))->setAnmTbl()))->setAnmTbl()))->setAnmTbl()))->setAnmTbl()))->setAnmTbl()))->setAnmTbl();
    }
    /* L_3050:; */
    /* field_0x5bcf = 255; */
    return ((daNpcBmcon_c*)(((daNpcBmcon_c*)(((daNpcBmcon_c*)(((daNpcBmcon_c*)(((daNpcBmcon_c*)(((daNpcBmcon_c*)(setAnmTbl(((C_@2100 + 0) + 64))))->setAnmTbl()))->setAnmTbl()))->setAnmTbl()))->setAnmTbl()))->setAnmTbl()))->setAnmTbl();
}

/* 00003158-00003178       .text getPrmNpcNo__12daNpcBmcon_cFv */
void daNpcBmcon_c::getPrmNpcNo() {
    if (argument != 0) {
    }
    return 0;
}

/* 00003178-000031A4       .text getPrmRailID__12daNpcBmcon_cFv */
void daNpcBmcon_c::getPrmRailID() {
    /* return (PrmAbstract<Q212daNpcBmcon_c5Prm_e>__5daObjFPC10fopAc_ac_cQ212daNpcBmcon_c5Prm_eQ212daNpcBmcon_c5Prm_e(this, 8, 16, arg3, arg4, arg5, arg6, arg7) & 16777215); */
}

/* 000031A4-0000322C       .text setMtx__12daNpcBmcon_cFv */
void daNpcBmcon_c::setMtx() {
    /* field_0x18 = 0; */
    /* field_0x1c = 0; */
    /* field_0x20 = 0; */
    /* PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0), arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x206); */
    return PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x50 + 36));
}

/* 0000322C-0000356C       .text chkAttention__12daNpcBmcon_cFv */
void daNpcBmcon_c::chkAttention() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x7c1 = 0; */
        /* if (this->field_0x324 == 0) goto L_31d8; */
        getAttnPos();
        /* field_0x76c = 0; */
        /* field_0x770 = 0; */
        /* field_0x774 = 0; */
        /* field_0x7be = 1; */
        /* if (this->field_0x7bf == 0) goto L_31bc; */
        /* field_0x790 = 0; */
        /* field_0x29a = 1; */
        /* goto L_31c0; */
        /* L_31bc:; */
        /* field_0x790 = 1; */
        /* L_31c0:; */
        /* if (this->field_0x7ad != 0) goto L_3444; */
        /* field_0x7ad = 1; */
        /* goto L_3444; */
        /* L_31d8:; */
        dNpc_calc_DisXZ_AngY();
        /* if (this->field_0x7ad == 0) goto L_324c; */
        /* L_324c:; */
        /* if ((this->field_0x788 + base) <= this->field_0xc) goto L_3334; */
        /* if ((this->field_0x79a + 1820) <= abs()) goto L_3334; */
        /* if (this->field_0x1fc <= (this->field_0x1fc - base)) goto L_3334; */
        dNpc_playerEyePos();
        /* field_0x76c = 0; */
        /* field_0x770 = 0; */
        /* field_0x774 = 0; */
        /* field_0x7be = 1; */
        /* if (this->field_0x7bf == 0) goto L_32ec; */
        /* field_0x790 = 0; */
        /* goto L_32f0; */
        /* L_32ec:; */
        /* field_0x790 = 1; */
        /* L_32f0:; */
        /* if (this->field_0x7c0 != 0) goto L_331c; */
        /* field_0x790 = 0; */
        /* field_0x7be = 2; */
        /* field_0x29a = 1; */
        /* L_331c:; */
        /* if (this->field_0x7ad != 0) goto L_3444; */
        /* field_0x7ad = 1; */
        /* goto L_3444; */
        /* L_3334:; */
        /* if (this->field_0x7ad != 1) goto L_3364; */
        /* field_0x7ad = 0; */
        /* L_3364:; */
        /* if (this->field_0x24 <= this->field_0xc) goto L_3408; */
        dNpc_playerEyePos();
        /* field_0x76c = 0; */
        /* field_0x770 = 0; */
        /* field_0x774 = 0; */
        /* field_0x7be = 1; */
        /* if (this->field_0x7bf == 0) goto L_33cc; */
        /* field_0x790 = 0; */
        /* goto L_33d0; */
        /* L_33cc:; */
        /* field_0x790 = 1; */
        /* L_33d0:; */
        /* if (this->field_0x7c0 != 0) goto L_33fc; */
        /* field_0x790 = 0; */
        /* field_0x7be = 2; */
        /* field_0x29a = 1; */
        /* L_33fc:; */
        /* field_0x7c1 = 1; */
        /* goto L_3444; */
        /* L_3408:; */
        /* field_0x7be = 0; */
        /* if (this->field_0x798 == 0) goto L_3428; */
        /* field_0x798 = (this->field_0x798 + -1); */
        /* goto L_3444; */
        /* L_3428:; */
        /* field_0x790 = 0; */
        /* field_0x7be = 2; */
        /* field_0x29a = 1; */
        /* L_3444:; */
        return _restgpr_29((((char*)&l_npc_dat + 0) + (this->field_0x7b7 * 76)), 0);
}

/* 0000356C-000036B8       .text lookBack__12daNpcBmcon_cFv */
void daNpcBmcon_c::lookBack() {
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if ((this->field_0x7be & 255) == 1) goto L_34e4; */
        /* if (/ * bge * / 1) goto L_34d8; */
        /* goto L_3508; */
        /* L_34d8:; */
        /* if ((this->field_0x7be & 255) >= 3) goto L_3508; */
        /* goto L_3504; */
        /* L_34e4:; */
        /* goto L_3508; */
        /* L_3504:; */
        /* L_3508:; */
        /* if (this->field_0x7ac == 0) goto L_352c; */
        /* if (this->field_0x7bf == 0) goto L_352c; */
        /* field_0x29a = 1; */
        /* L_352c:; */
        /* if (this->field_0x29a == 0) goto L_355c; */
        /* if (this->field_0x326 == 0) goto L_3548; */
        /* L_3548:; */
        /* cLib_addCalcAngleS2((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1960), this->field_0x326, 4, 2048); */
        /* goto L_3564; */
        /* L_355c:; */
        /* field_0x7a8 = 0; */
        /* L_3564:; */
        /* return _restgpr_28(((dNpc_JntCtrl_c*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 656)))->lookAtTarget((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518))); */
}

/* 000036B8-00003794       .text playAnm__12daNpcBmcon_cFv */
void daNpcBmcon_c::playAnm() {
        /* ((mDoExt_McaMorf*)(this->field_0x734))->play(0, 0, 0, arg4, arg5, arg6, arg7); */
        /* if (((mDoExt_McaMorf*)(this->field_0x330))->play(0, 0, 0) == 0) goto L_3694; */
        /* if (this->field_0x778 == 0) goto L_3694; */
        /* if (this->field_0x7bb != 0) goto L_3694; */
        /* field_0x7bb = (this->field_0x7bb + -1); */
        /* if (this->field_0x7bb != 0) goto L_3678; */
        /* field_0x778 = (this->field_0x778 + 3); */
        /* if (setAnmTbl(this->field_0x778) == 0) goto L_3694; */
        /* goto L_3694; */
        /* L_3678:; */
        /* L_3694:; */
        return setAnm(base, 0, C_@4086);
}

/* 00003794-000038C0       .text setAnm__12daNpcBmcon_cFUcif */
void daNpcBmcon_c::setAnm(unsigned char, int, float) {
    /* _savegpr_26(this, char, int, float, arg4, arg5, arg6, arg7); */
    /* if (this->field_0x784 == this->field_0x64) { */
        /* field_0x784 = 0; */
    /* ((mDoExt_McaMorf*)(this->field_0x330))->setAnm(((dRes_control_c*)(((char*)&l_arcname_tbl + 0)))->getIDRes(((this->field_0x7b7 << 2) & 65535))); */
    /* return _restgpr_26(((mDoExt_McaMorf*)(this->field_0x734))->setAnm(((dRes_control_c*)(((char*)&l_arcname_tbl + 0)))->getIDRes(((this->field_0x7b7 << 2) & 65535)))); */

/* 000038C0-00003960       .text setAnmTbl__12daNpcBmcon_cFP12sBmconAnmDat */
void daNpcBmcon_c::setAnmTbl(sBmconAnmDat*) {
    if (/* bne */ 1) {
        /* field_0x778 = 0; */
        return 1;
    }
    /* field_0x778 = arg1; */
    if (this->field_0x7bb != 0) {
    }
    if (this->field_0x7b9 == base) {
        /* if (0 == 0) goto L_3860; */
    }
    ((daNpcBmcon_c*)(1))->setAnm(base, 0, C_@5598);
    /* L_3860:; */
    return 0;
}

/* 00003960-00003968       .text XyCheckCB__12daNpcBmcon_cFi */
int daNpcBmcon_c::XyCheckCB(int) {
    return 0;
}

/* 00003968-000039E0       .text setCollision__12daNpcBmcon_cFP8dCcD_Cyl4cXyzff */
void daNpcBmcon_c::setCollision(dCcD_Cyl*, cXyz, float, float) {
    /* ((cM3dGCyl*)((arg1 + 280)))->SetC(cXyz, cXyz); */
    /* ((cM3dGCyl*)((arg1 + 280)))->SetR(); */
    /* ((cM3dGCyl*)((arg1 + 280)))->SetH(); */
    /* return ((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set(arg1); */
}

/* 000039E0-00003A7C       .text calcFlyDist__12daNpcBmcon_cFv */
void daNpcBmcon_c::calcFlyDist() {
    PSVECSubtract();
    mDoMtx_YrotS(((char*)&now__14mDoMtx_stack_c + 0), -24576);
    PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0));
    base = 0;
    /* field_0x4 = 0; */
    /* field_0x8 = 0; */
    return PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0));
}

/* 00003A7C-00003AE8       .text getFlyDistMax__12daNpcBmcon_cFv */
void daNpcBmcon_c::getFlyDistMax() {
    /* ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->getEventReg((arg1 + -22529)); */
    ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->getEventReg();
}

/* 00003AE8-00003B6C       .text setFlyDistMax__12daNpcBmcon_cFs */
void daNpcBmcon_c::setFlyDistMax(short) {
    ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->setEventReg((short + -22529), (((((short & 65535) >> 31) - ((short & 65535) << 24)) + ((short & 65535) >> 31)) & 16777215));
    return ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->setEventReg();
}

/* 00003B6C-00003BD8       .text getFlyDistNow__12daNpcBmcon_cFv */
void daNpcBmcon_c::getFlyDistNow() {
    /* ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 4440)))->getEventReg((arg1 + -1025)); */
    ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 4440)))->getEventReg();
}

/* 00003BD8-00003C5C       .text setFlyDistNow__12daNpcBmcon_cFs */
void daNpcBmcon_c::setFlyDistNow(short) {
    ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 4440)))->setEventReg((short + -1025), (((((short & 65535) >> 31) - ((short & 65535) << 24)) + ((short & 65535) >> 31)) & 16777215));
    return ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 4440)))->setEventReg();
}

/* 00003C5C-00003DC4       .text chkEndEvent__12daNpcBmcon_cFv */
void daNpcBmcon_c::chkEndEvent() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x7b7 == 1) goto L_3c58; */
        /* if (/ * bge * / 1) goto L_3cbc; */
        /* if (this->field_0x7b7 >= 0) goto L_3ba4; */
        /* goto L_3cbc; */
        /* L_3ba4:; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->endCheck(this->field_0x792) == 0) goto L_3c14; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 4440)))->getEventReg() == 0) goto L_3c14; */
        return 1;
        /* L_3c14:; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->endCheck(this->field_0x794) == 0) goto L_3cbc; */
        return 1;
        /* L_3c58:; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->endCheck(this->field_0x792) != 0) goto L_3c8c; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->endCheck(this->field_0x794) == 0) goto L_3cbc; */
        /* L_3c8c:; */
        return 1;
        /* L_3cbc:; */
        return _restgpr_29(0);
}

/* 00003DC4-00003DFC       .text isClear__12daNpcBmcon_cFv */
void daNpcBmcon_c::isClear() {
    return ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(11072);
}

/* 00003DFC-00003E1C       .text daNpc_BmconCreate__FPv */
static cPhs_State daNpc_BmconCreate(void* i_this) {
    return ((daNpcBmcon_c*)i_this)->_create();
}

/* 00003E1C-00003E40       .text daNpc_BmconDelete__FPv */
static BOOL daNpc_BmconDelete(void* i_this) {
    return ((daNpcBmcon_c*)i_this)->_delete();
}

/* 00003E40-00003E64       .text daNpc_BmconExecute__FPv */
static BOOL daNpc_BmconExecute(void* i_this) {
    return ((daNpcBmcon_c*)i_this)->_execute();
}

/* 00003E64-00003E88       .text daNpc_BmconDraw__FPv */
static BOOL daNpc_BmconDraw(void* i_this) {
    return ((daNpcBmcon_c*)i_this)->_draw();
}

/* 00003E88-00003E90       .text daNpc_BmconIsDelete__FPv */
static BOOL daNpc_BmconIsDelete(void*) {
    return 1;

static actor_method_class daNpc_BmconMethodTable = {
    (process_method_func)daNpc_BmconCreate,
    (process_method_func)daNpc_BmconDelete,
    (process_method_func)daNpc_BmconExecute,
    (process_method_func)daNpc_BmconIsDelete,
    (process_method_func)daNpc_BmconDraw,
};

actor_process_profile_definition g_profile_NPC_BMCON1 = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0007,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_NPC_BMCON1_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daNpcBmcon_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_NPC_BMCON1_e,
    /* Actor SubMtd */ &daNpc_BmconMethodTable,
    /* Status       */ fopAcStts_CULL_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_ACTOR_e,
    /* Cull Type    */ fopAc_CULLBOX_CUSTOM_e,
};

/* 由 fix_decomp_braces.py 补齐：反编译产物末尾缺 2 个 } */
}}

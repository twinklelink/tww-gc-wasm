/**
 * d_a_npc_sv.cpp
 * NPC - Salvage Corp group members
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_npc_sv.h"
#include "m_Do/m_Do_ext.h"
#include "d/actor/d_a_obj_ikada.h"

/* 00000078-0000021C       .text __ct__9daNpcSv_cFv */
daNpcSv_c::daNpcSv_c() {
    /* __ct__9daNpcSv_cFv: 无实义指令 */
}

/* 00000528-00000640       .text daNpc_People_nodeCallBack__FP7J3DNodei */
static BOOL daNpc_People_nodeCallBack(J3DNode*, int) {
        /* _savegpr_28(arg0, int, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_5ac; */
        /* PSMTXCopy((this->field_0x8c + (this->field_0x18 * 48)), this->field_0x0); */
        /* if (this->field_0x18 != (this->field_0x298 & 255)) goto L_53c; */
        /* mDoMtx_XrotM(this->field_0x0, this->field_0x292); */
        /* mDoMtx_ZrotM(this->field_0x0, ((-this->field_0x290) & 65535)); */
        /* L_53c:; */
        /* if (this->field_0x18 != (this->field_0x299 & 255)) goto L_57c; */
        /* mDoMtx_XrotM(this->field_0x0, this->field_0x296); */
        /* mDoMtx_ZrotM(this->field_0x0, ((-this->field_0x294) & 65535)); */
        /* L_57c:; */
        PSMTXCopy(this->field_0x0, (this->field_0x8c + (this->field_0x18 * 48)));
        PSMTXCopy(this->field_0x0, ((char*)&mCurrentMtx__6J3DSys + 0));
        /* L_5ac:; */
        return _restgpr_28(1);
}

/* 00000640-00000660       .text CheckCreateHeap__FP10fopAc_ac_c */
static BOOL CheckCreateHeap(fopAc_ac_c* i_this) {
    static_cast<daNpcSv_c*>(i_this)->createHeap();
    return TRUE;
}

/* 00000660-000006B8       .text phase_1__FP9daNpcSv_c */
void phase_1(daNpcSv_c*) {
        /* if (/ * bne * / 1) goto L_620; */
        /* if (arg0 == 0) goto L_614; */
        __ct();
        /* L_614:; */
        /* L_620:; */
        /* field_0x73a = 1; */
        return 2;
}

/* 000006B8-00000738       .text phase_2__FP9daNpcSv_c */
void phase_2(daNpcSv_c*) {
        /* if (dComIfG_resLoad((arg0 + 1732), ((char*)&l_arcname_tbl + 0), arg2) != 4) goto L_6ac; */
        /* if (fopAcM_entrySolidHeap(arg0, ((char*)&CheckCreateHeap__FP10fopAc_ac_c + 0), 14336) == 0) goto L_6a0; */
        ((daNpcSv_c*)(arg0))->createInit();
        /* goto L_6ac; */
        /* L_6a0:; */
        /* field_0x330 = 0; */
        /* L_6ac:; */
        return 5;
}

/* 00000738-00000768       .text _create__9daNpcSv_cFv */
cPhs_State daNpcSv_c::_create() {
    /* return dComLbG_PhaseHandler((this + 1740), ((char*)&l_method$4402 + 0), this, arg3, arg4, arg5, arg6, arg7); */
}

/* 00000768-00000A04       .text createHeap__9daNpcSv_cFv */
void daNpcSv_c::createHeap() {
    /* _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    ((dRes_control_c*)(((char*)&l_arcname_tbl + 0)))->getIDRes(((this->field_0x73b << 2) & 65535));
    __nw(180);
    if (/* beq */ 1) {
    }
    /* field_0x330 = __ct(((dRes_control_c*)(((char*)&l_arcname_tbl + 0)))->getIDRes((((this->field_0x73b * 24) + (this->field_0x73d << 2)) & 65535)), 1, ((dRes_control_c*)(((char*)&l_arcname_tbl + 0)))->getIDRes(((this->field_0x73b << 2) & 65535)), 0, 0, ((dRes_control_c*)(((char*)&l_arcname_tbl + 0)))->getIDRes((((this->field_0x73b * 24) + (this->field_0x73d << 2)) & 65535)), 2, 0); */
    if (this->field_0x330 != 0) {
        /* if (this->field_0x50 == 0) goto L_818; */
    }
    return 0;
    /* L_818:; */
    /* field_0x298 = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 19)); */
    if (this->field_0x298 != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 19))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 24), 946, ((char*)&@stringBase0 + 39)); */
        OSPanic(((char*)&@stringBase0 + 24), 946, ((char*)&@stringBase0 + 66));
    }
    /* field_0x299 = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 71)); */
    if (this->field_0x299 != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 71))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 24), 950, ((char*)&@stringBase0 + 80)); */
        OSPanic(((char*)&@stringBase0 + 24), 950, ((char*)&@stringBase0 + 66));
    }
    /* goto L_918; */
    /* L_8e0:; */
    if ((0 & 65535) != (this->field_0x298 & 255)) {
        /* if ((0 & 65535) == (this->field_0x299 & 255)) goto L_914; */
    }
    /* field_0x8 = 0; */
    /* L_914:; */
    /* L_918:; */
    /* if (((0 + 1) & 65535) >= this->field_0x28) goto L_8e0; */
    /* field_0x14 = _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* ((dBgS_AcchCir*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1272)))->SetWall(((char*)&daNpc_People_nodeCallBack__FP7J3DNodei + 0), (0 + 1)); */
    /* ((dBgS_Acch*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 820)))->Set((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 484), _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 1, (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1272), (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 544), (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 516)); */
    return _restgpr_27(1);
}

/* 00000A04-00000C74       .text createInit__9daNpcSv_cFv */
void daNpcSv_c::createInit() {
    /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    gravity = 0;
    /* ((daNpcSv_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnmTbl(((C_@2100 + 0) + 80)); */
    /* field_0x71e = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getEventIdx(((char*)&@stringBase0 + 111), 255); */
    /* field_0x720 = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getEventIdx(((char*)&@stringBase0 + 126), 255); */
    /* field_0x722 = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getEventIdx(((char*)&@stringBase0 + 141), 255); */
    /* ((daNpcSv_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getTalkNo(); */
    /* ((dNpc_EventCut_c*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 708)))->setActorInfo2(((C_@2100 + 0) + 48), _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
    /* field_0x730 = 0; */
    /* field_0x736 = 0; */
    /* field_0x737 = 0; */
    /* field_0x745 = 0; */
    cullMtx = (this->field_0x50 + 36);
    /* fopAcM_setCullSizeBox(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
    /* field_0x26d = 177; */
    /* field_0x26f = 177; */
    /* field_0x280 = 10; */
    /* ((dNpc_JntCtrl_c*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 656)))->setParam(this->field_0x4, this->field_0x6, this->field_0xc, this->field_0xe, ((C_@2100 + 0) + 200), this->field_0x2, this->field_0x8); */
    /* field_0x710 = 0; */
    /* ((daNpcSv_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setMtx(); */
    /* ((dCcD_Stts*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1336)))->Init(255, 255, _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
    /* ((dCcD_Cyl*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1396)))->Set(((char*)&dNpc_cyl_src + 0)); */
    /* field_0x5b8 = (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1336); */
    /* ((daNpcSv_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setCollision((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1396)); */
    return _restgpr_28(4);
}

/* 00000C74-00000CD8       .text _delete__9daNpcSv_cFv */
bool daNpcSv_c::_delete() {
    /* dComIfG_resDelete((this + 1732), ((char*)&l_arcname_tbl + 0), arg2); */
    if (heap != 0) {
        /* if (this->field_0x330 != 0) goto L_c48; */
        /* ((mDoExt_McaMorf*)(this->field_0x330))->stopZelAnime(); */
    }
    /* L_c48:; */
    return 1;
}

/* 00000CD8-00000DAC       .text _draw__9daNpcSv_cFv */
bool daNpcSv_c::_draw() {
    ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(0, (this + 504), (this + 268));
    ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x50, (this + 268));
    /* ((mDoExt_McaMorf*)(this->field_0x330))->updateDL(); */
    /* field_0x6d4 = dComIfGd_setShadow(this->field_0x6d4, 1, this->field_0x50); */
    return 1;
}

/* 00000DAC-00000F90       .text _execute__9daNpcSv_cFv */
bool daNpcSv_c::_execute() {
        fopAcM_SearchByID(parentActorID);
        chkAttention();
        checkOrder();
        /* if (this->field_0x529a != 0) goto L_da4; */
        __ptmf_scall(this, moveProc, (this->field_0x739 * 12));
        /* goto L_dac; */
        /* L_da4:; */
        eventMove();
        /* L_dac:; */
        eventOrder();
        /* if (this->field_0x73b != 0) goto L_e20; */
        /* if (this->field_0x73d != 5) goto L_e20; */
        /* field_0x68 = 0; */
        /* goto L_e28; */
        /* L_e20:; */
        playAnm();
        /* L_e28:; */
        /* if (/ * beq * / 1) goto L_e3c; */
        /* L_e3c:; */
        ((dBgS_Acch*)((this + 820)))->CrrPos(((char*)&g_dComIfG_gameInfo + 4768));
        setCollision((this + 1396));
        /* field_0x274 = 0; */
        /* field_0x278 = (this->field_0x1fc + this->field_0x24); */
        /* field_0x27c = 0; */
        eyePos = 0;
        /* field_0x264 = (this->field_0x1fc + this->field_0x28); */
        /* field_0x268 = 0; */
        lookBack();
        setMtx();
        return 0;
}

/* 00000F90-00000FB8       .text executeCommon__9daNpcSv_cFv */
void daNpcSv_c::executeCommon() {
    if (this->field_0x737 != 0) {
        /* field_0x738 = 1; */
    } else {
        /* field_0x738 = 0; */
    }
    return 0;
}

/* 00000FB8-00001000       .text executeSetMode__9daNpcSv_cFUc */
void daNpcSv_c::executeSetMode(unsigned char) {
    /* field_0x739 = __ptmf_scall(this, l_execute_init, ((char & 16777215) * 12), arg3, arg4, arg5, arg6, arg7); */
    /* return __ptmf_scall(this, l_execute_init, ((char & 16777215) * 12), arg3, arg4, arg5, arg6, arg7); */
}

/* 00001000-00001080       .text executeWaitInit__9daNpcSv_cFv */
void daNpcSv_c::executeWaitInit() {
    setAnmTbl(((char*)&l_npc_anm_wait + 0));
    /* ((dNpc_JntCtrl_c*)((this + 656)))->setParam(this->field_0x4, this->field_0x6, this->field_0xc, this->field_0xe, ((char*)&l_npc_dat + 0), this->field_0x2, this->field_0x8); */
    return 0;
}

/* 00001080-0000131C       .text executeWait__9daNpcSv_cFv */
void daNpcSv_c::executeWait() {
        fopAcM_SearchByID(parentActorID);
        /* if (/ * beq * / 1) goto L_128c; */
        /* if (this->field_0x73b != 0) goto L_1108; */
        /* if (this->field_0x745 == 0) goto L_1084; */
        /* field_0x738 = 1; */
        /* if (this->field_0x745 == this->field_0x74a) goto L_1074; */
        /* field_0x749 = 1; */
        /* L_1074:; */
        /* field_0x1166 = 1; */
        /* goto L_1098; */
        /* L_1084:; */
        /* field_0x738 = 0; */
        /* field_0x749 = 0; */
        /* field_0x1166 = 0; */
        /* L_1098:; */
        /* if (this->field_0x749 == 0) goto L_10b4; */
        setAnmTbl(((C_@2100 + 0) + 80));
        /* goto L_10fc; */
        /* L_10b4:; */
        /* field_0x741 = 2; */
        /* field_0x71c = 0; */
        /* field_0x29a = 1; */
        setAnmTbl(((C_@2100 + 0) + 112));
        /* L_10fc:; */
        /* goto L_128c; */
        /* L_1108:; */
        m743 = 1;
        /* if (/ * beq * / 1) goto L_1130; */
        /* if (/ * beq * / 1) goto L_1130; */
        /* if (/ * bne * / 1) goto L_1154; */
        /* L_1130:; */
        /* field_0x741 = 2; */
        /* field_0x71c = 0; */
        /* field_0x29a = 1; */
        /* goto L_1234; */
        /* L_1154:; */
        /* if (1 == 4) goto L_1164; */
        /* if (1 != 6) goto L_11a8; */
        /* L_1164:; */
        /* if (/ * bne * / 1) goto L_1180; */
        /* field_0x732 = 0; */
        /* goto L_118c; */
        /* L_1180:; */
        /* field_0x732 = 0; */
        /* L_118c:; */
        /* field_0x741 = 2; */
        /* field_0x71c = 0; */
        /* field_0x29a = 1; */
        /* goto L_1234; */
        /* L_11a8:; */
        /* if (/ * bne * / 1) goto L_11c4; */
        /* goto L_11d0; */
        /* L_11c4:; */
        /* L_11d0:; */
        /* if (this->field_0x206 != 0) goto L_1218; */
        getCranePos();
        /* field_0x6ec = 0; */
        /* field_0x6f0 = 0; */
        /* field_0x6f4 = 0; */
        /* field_0x741 = 1; */
        /* field_0x71c = 1; */
        m743 = 0;
        /* goto L_1234; */
        /* L_1218:; */
        /* field_0x741 = 2; */
        /* field_0x71c = 0; */
        /* field_0x29a = 1; */
        /* L_1234:; */
        /* if (this->field_0x2f0 != 7) goto L_126c; */
        /* if (this->field_0x748 != 0) goto L_128c; */
        /* field_0x748 = 1; */
        /* setAnmTbl(this->field_0x4); */
        /* goto L_128c; */
        /* L_126c:; */
        /* if (this->field_0x748 != 1) goto L_128c; */
        /* field_0x748 = 0; */
        /* L_128c:; */
        /* return setAnmTbl(this->field_0x98); */
}

/* 0000131C-00001338       .text executeTalkInit__9daNpcSv_cFv */
void daNpcSv_c::executeTalkInit() {
        /* if (this->field_0x742 == 0) goto L_12b8; */
        return 1;
}

/* 00001338-000013B8       .text executeTalk__9daNpcSv_cFv */
void daNpcSv_c::executeTalk() {
    executeCommon();
    if ((talk2(1, this) & 65535) == 18) {
        /* field_0x736 = 0; */
        /* field_0x749 = 0; */
    }
    return setAnmFromMsgTag();
}

/* 000013B8-000013EC       .text checkOrder__9daNpcSv_cFv */
void daNpcSv_c::checkOrder() {
    if (this->field_0x738 != 2) {
    }
    /* field_0x736 = 1; */
    return this;
}

/* 000013EC-00001458       .text eventOrder__9daNpcSv_cFv */
void daNpcSv_c::eventOrder() {
    if (this->field_0x738 != 2) {
        /* if (this->field_0x738 == 1) goto L_13cc; */
    }
    if (isTalkOK() != 0) {
        /* if (this->field_0x738 == 2) goto L_13cc; */
    }
    /* L_13cc:; */
    return fopAcM_orderSpeakEvent(this);
}

/* 00001458-00001570       .text eventMove__9daNpcSv_cFv */
void daNpcSv_c::eventMove() {
    /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->endCheck(this->field_0x71e) == 0) { */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->endCheck(this->field_0x720) == 0) goto L_1440; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->endCheck(this->field_0x722) != 0) goto L_149c; */
    /* L_1440:; */
    /* ((daNpcSv_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getTalkNo(); */
    /* field_0x736 = 0; */
    /* field_0x749 = 0; */
    /* ((daNpcSv_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->executeSetMode(0); */
    /* goto L_14e0; */
    /* L_149c:; */
    /* if (((dNpc_EventCut_c*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 708)))->cutProc() == 0) { */
        /* if (this->field_0x324 == 0) goto L_14e0; */
    /* } else { */
        /* ((daNpcSv_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->privateCut(); */
        /* if (this->field_0x73b == 0) goto L_14e0; */
    /* } */
    /* L_14e0:; */
    /* return _restgpr_29(((daNpcSv_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnmFromMsgTag()); */

/* 00001570-00001744       .text privateCut__9daNpcSv_cFv */
void daNpcSv_c::privateCut() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&l_npc_staff_id + 0), 0, 0) == -1) goto L_1688; */
        /* field_0x740 = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyActIdx(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&l_npc_staff_id + 0), 0, 0), ((char*)&cut_name_tbl$4773 + 0), 5, 1, 0); */
        /* if ((this->field_0x740 & 255) != -1) goto L_1590; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&l_npc_staff_id + 0), 0, 0));
        /* goto L_1688; */
        /* L_1590:; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getIsAddvance(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&l_npc_staff_id + 0), 0, 0)) == 0) goto L_161c; */
        /* if ((this->field_0x740 & 255) == 2) goto L_15f8; */
        /* if (/ * bge * / 1) goto L_15c8; */
        /* if ((this->field_0x740 & 255) == 0) goto L_15d8; */
        /* if (/ * bge * / 1) goto L_15e8; */
        /* goto L_161c; */
        /* L_15c8:; */
        /* if ((this->field_0x740 & 255) == 4) goto L_1614; */
        /* if (/ * bge * / 1) goto L_161c; */
        /* goto L_1604; */
        /* L_15d8:; */
        /* ((daNpcSv_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->eventMesSetInit(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&l_npc_staff_id + 0), 0, 0)); */
        /* goto L_161c; */
        /* L_15e8:; */
        /* ((daNpcSv_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->eventGetItemInit(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&l_npc_staff_id + 0), 0, 0)); */
        /* goto L_161c; */
        /* L_15f8:; */
        /* ((daNpcSv_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->eventSetAngleInit(); */
        /* goto L_161c; */
        /* L_1604:; */
        /* ((daNpcSv_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->eventAttentionInit(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&l_npc_staff_id + 0), 0, 0)); */
        /* goto L_161c; */
        /* L_1614:; */
        /* ((daNpcSv_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->eventTurnOkInit(); */
        /* L_161c:; */
        /* if ((this->field_0x740 & 255) == 2) goto L_1670; */
        /* if (/ * bge * / 1) goto L_1640; */
        /* if ((this->field_0x740 & 255) == 0) goto L_164c; */
        /* if (/ * bge * / 1) goto L_1658; */
        /* goto L_1670; */
        /* L_1640:; */
        /* if ((this->field_0x740 & 255) >= 4) goto L_1670; */
        /* goto L_1664; */
        /* L_164c:; */
        /* ((daNpcSv_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->eventMesSet(); */
        /* goto L_1674; */
        /* L_1658:; */
        /* ((daNpcSv_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->eventGetItem(); */
        /* goto L_1674; */
        /* L_1664:; */
        /* ((daNpcSv_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->eventAttention(); */
        /* goto L_1674; */
        /* L_1670:; */
        /* L_1674:; */
        /* if (1 == 0) goto L_1688; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&l_npc_staff_id + 0), 0, 0));
        /* L_1688:; */
        /* if (/ * beq * / 1) goto L_16b4; */
        /* field_0x741 = 2; */
        /* field_0x71c = 0; */
        /* field_0x29a = 1; */
        /* L_16b4:; */
        return _restgpr_29(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&l_npc_staff_id + 0), 0, 0)));
}

/* 00001744-00001814       .text eventMesSetInit__9daNpcSv_cFi */
void daNpcSv_c::eventMesSetInit(int) {
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(int, ((char*)&@stringBase0 + 201), 3, arg4) == 0) goto L_1754; */
        /* field_0x708 = 0; */
        /* if (base == 0) goto L_1724; */
        /* goto L_1748; */
        /* L_1724:; */
        setMessage(this);
        /* goto L_1770; */
        /* L_1748:; */
        setMessage();
        /* goto L_1770; */
        /* L_1754:; */
        /* field_0x708 = (this->field_0x708 + 4); */
        setMessage(base);
        /* L_1770:; */
        /* field_0xcc = ((dEvt_control_c*)(((char*)&g_dComIfG_gameInfo + 20952)))->getPId(this); */
        return ((dEvt_control_c*)(((char*)&g_dComIfG_gameInfo + 20952)))->getPId(this);
}

/* 00001814-0000184C       .text eventMesSet__9daNpcSv_cFv */
void daNpcSv_c::eventMesSet() {
    return ((18 - (talk2(0, this) & 65535)) >> 5);
}

/* 0000184C-000018F0       .text eventGetItemInit__9daNpcSv_cFi */
void daNpcSv_c::eventGetItemInit(int) {
    /* ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(int, ((char*)&@stringBase0 + 207), 3, arg4); */
    }
    fopAcM_createItemForPresentDemo((this + 504), this->field_0x714, 0, -1, (this->field_0x20a & 255), 0, 0);
    if (/* beq */ 1) {
        /* field_0x52a8 = fopAcM_createItemForPresentDemo((this + 504), this->field_0x714, 0, -1, (this->field_0x20a & 255), 0, 0); */
    }
    return fopAcM_createItemForPresentDemo((this + 504), this->field_0x714, 0, -1, (this->field_0x20a & 255), 0, 0);


/* 000018F0-000018F8       .text eventGetItem__9daNpcSv_cFv */
int daNpcSv_c::eventGetItem() {
    return 1;
}

/* 000018F8-000019E0       .text eventSetAngleInit__9daNpcSv_cFv */
void daNpcSv_c::eventSetAngleInit() {
        fopAcM_SearchByID(parentActorID);
        /* if (/ * beq * / 1) goto L_1940; */
        dNpc_calc_DisXZ_AngY();
        /* if (/ * ble * / 1) goto L_1928; */
        /* field_0x72c = 0; */
        /* goto L_1934; */
        /* L_1928:; */
        /* field_0x72c = 0; */
        /* L_1934:; */
        /* goto L_1948; */
}

/* 000019E0-00001A74       .text eventAttentionInit__9daNpcSv_cFi */
void daNpcSv_c::eventAttentionInit(int) {
    /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(int, ((char*)&@stringBase0 + 214), 3, arg4) != 0) { */
    /* } else { */
        /* field_0x72a = 12; */
    /* } */
    /* field_0x748 = 0; */
    /* if (this->field_0x73b == 2) { */
        /* field_0xcc = ((dEvt_control_c*)(((char*)&g_dComIfG_gameInfo + 20952)))->getPId(this); */
    /* } */
    /* return ((dEvt_control_c*)(((char*)&g_dComIfG_gameInfo + 20952)))->getPId(this); */

/* 00001A74-00001BC8       .text eventAttention__9daNpcSv_cFv */
void daNpcSv_c::eventAttention() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x72a == 0) goto L_1b18; */
        /* field_0x72a = (this->field_0x72a + -1); */
        /* if (this->field_0x72a != 0) goto L_1b34; */
        fopAcM_searchFromName(this->field_0x30, 0, 0);
        /* if (/ * beq * / 1) goto L_1ac4; */
        /* ((daNpcSv_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnmTbl(((C_@2100 + 0) + 152)); */
        /* if (this->field_0x73b != 1) goto L_1b34; */
        ((JAIZelBasic*)(base))->seStart(((C_@2100 + 0) + 176), 0, 0, 0, 0);
        /* goto L_1b34; */
        /* L_1ac4:; */
        /* ((daNpcSv_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnmTbl(this->field_0x8); */
        ((JAIZelBasic*)(base))->seStart(this->field_0x8, 0, 0, 0, 0);
        /* goto L_1b34; */
        /* L_1b18:; */
        /* if (this->field_0x73e == 0) goto L_1b34; */
        /* ((daNpcSv_c*)(((JAIZelBasic*)(base))->seStart(this->field_0x8, 0, 0, 0, 0)))->setAnmTbl(this->field_0x98); */
        return 1;
        /* L_1b34:; */
        return _restgpr_29(0);
}

/* 00001BC8-00001BD4       .text eventTurnOkInit__9daNpcSv_cFv */
void daNpcSv_c::eventTurnOkInit() {
    m743 = 1;
}

/* 00001BD4-00001CF0       .text talk2__9daNpcSv_cFiP10fopAc_ac_c */
void daNpcSv_c::talk2(int, fopAc_ac_c*) {
        /* _savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_1bc4; */
        /* if (/ * bne * / 1) goto L_1ba8; */
        /* mMessage = _savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* L_1ba8:; */
        /* field_0x6ac = fopMsgM_messageSet(mMessage); */
        /* field_0x6b0 = 0; */
        /* goto L_1c5c; */
        /* L_1bc4:; */
        /* if (this->field_0x6b0 == 0) goto L_1c50; */
        /* if (this->field_0xf8 == 18) goto L_1c24; */
        /* if (/ * bge * / 1) goto L_1c34; */
        /* if (this->field_0xf8 == 14) goto L_1bec; */
        /* goto L_1c34; */
        /* L_1bec:; */
        /* field_0xf8 = fopMsgM_messageSet(mMessage); */
        /* if (this->field_0xf8 != 15) goto L_1c34; */
        fopMsgM_messageSet(mMessage);
        /* goto L_1c34; */
        /* L_1c24:; */
        /* field_0xf8 = 19; */
        /* field_0x6ac = -1; */
        /* L_1c34:; */
        /* goto L_1c5c; */
        /* L_1c50:; */
        /* field_0x6b0 = fopMsgM_SearchByID(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_1c5c:; */
        /* return _restgpr_29(this->field_0xf8); */
}

/* 00001CF0-00001DC8       .text next_msgStatus__9daNpcSv_cFPUl */
void daNpcSv_c::next_msgStatus(unsigned long*) {
        /* if (/ * beq * / 1) goto L_1c8c; */
        /* goto L_1c94; */
        /* L_1c8c:; */
        /* goto L_1d48; */
        /* L_1c94:; */
        /* if (this->field_0x708 == 0) goto L_1d44; */
        /* field_0x708 = (this->field_0x708 + 4); */
        /* if (base == 3) goto L_1cfc; */
        /* if (/ * bge * / 1) goto L_1cd4; */
        /* if (base == 1) goto L_1ce4; */
        /* if (/ * bge * / 1) goto L_1cec; */
        /* if (base >= 0) goto L_1d2c; */
        /* goto L_1d3c; */
        /* L_1cd4:; */
        /* if (base == 5) goto L_1d1c; */
        /* if (/ * bge * / 1) goto L_1d3c; */
        /* goto L_1d0c; */
        /* L_1ce4:; */
        /* goto L_1d48; */
        /* L_1cec:; */
        /* field_0x747 = 2; */
        /* goto L_1d48; */
        /* L_1cfc:; */
        /* field_0x747 = 3; */
        /* goto L_1d48; */
        /* L_1d0c:; */
        /* field_0x747 = 4; */
        /* goto L_1d48; */
        /* L_1d1c:; */
        /* field_0x747 = 5; */
        /* goto L_1d48; */
        /* L_1d2c:; */
        /* field_0x708 = 0; */
        /* goto L_1d48; */
        /* L_1d3c:; */
        base = 0;
        /* goto L_1d48; */
        /* L_1d44:; */
        /* L_1d48:; */
        return 16;
}

/* 00001DC8-00001EB4       .text getMsg__9daNpcSv_cFv */
void daNpcSv_c::getMsg() {
    /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* field_0x708 = 0; */
    if (this->field_0x52b8 != 1) {
        /* if (this->field_0x52b8 != 2) goto L_1da0; */
        /* if (this->field_0x52b8 == 3) goto L_1da4; */
    }
    /* L_1da0:; */
    /* L_1da4:; */
    if (1 != 0) {
        /* field_0x708 = (this->field_0x746 << 2); */
        /* field_0x734 = (this->field_0x734 | (this->field_0x746 << 1)); */
        /* if (/ * beq * / 1) goto L_1dfc; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(12160);
    }
    /* L_1dfc:; */
    if (this->field_0x708 != 0) {
    }
    if (base == 0) {
        /* ((daNpcSv_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnmTbl(((C_@2100 + 0) + 84)); */
    }
    return _restgpr_29(base);
}

/* 00001EB4-00001EBC       .text setMessage__9daNpcSv_cFUl */
void daNpcSv_c::setMessage(unsigned long msg) {
    mMessage = msg;
}

/* 00001EBC-00001F74       .text setAnmFromMsgTag__9daNpcSv_cFv */
void daNpcSv_c::setAnmFromMsgTag() {
        /* if (this->field_0x5bcf == 3) goto L_1ec0; */
        /* if (/ * bge * / 1) goto L_1e8c; */
        /* if (this->field_0x5bcf == 1) goto L_1ea8; */
        /* if (/ * bge * / 1) goto L_1eb4; */
        /* if (this->field_0x5bcf >= 0) goto L_1e9c; */
        /* goto L_1ee0; */
        /* L_1e8c:; */
        /* if (this->field_0x5bcf == 5) goto L_1ed8; */
        /* if (/ * bge * / 1) goto L_1ee0; */
        /* goto L_1ecc; */
        /* L_1e9c:; */
        setAnmTbl(((C_@2100 + 0) + 80));
        /* goto L_1ee0; */
        /* L_1ea8:; */
        ((daNpcSv_c*)(setAnmTbl(((C_@2100 + 0) + 80))))->setAnmTbl();
        /* goto L_1ee0; */
        /* L_1eb4:; */
        ((daNpcSv_c*)(((daNpcSv_c*)(setAnmTbl(((C_@2100 + 0) + 80))))->setAnmTbl()))->setAnmTbl();
        /* goto L_1ee0; */
        /* L_1ec0:; */
        ((daNpcSv_c*)(((daNpcSv_c*)(((daNpcSv_c*)(setAnmTbl(((C_@2100 + 0) + 80))))->setAnmTbl()))->setAnmTbl()))->setAnmTbl();
        /* goto L_1ee0; */
        /* L_1ecc:; */
        ((daNpcSv_c*)(((daNpcSv_c*)(((daNpcSv_c*)(((daNpcSv_c*)(setAnmTbl(((C_@2100 + 0) + 80))))->setAnmTbl()))->setAnmTbl()))->setAnmTbl()))->setAnmTbl();
        /* goto L_1ee0; */
        /* L_1ed8:; */
        ((daNpcSv_c*)(((daNpcSv_c*)(((daNpcSv_c*)(((daNpcSv_c*)(((daNpcSv_c*)(setAnmTbl(((C_@2100 + 0) + 80))))->setAnmTbl()))->setAnmTbl()))->setAnmTbl()))->setAnmTbl()))->setAnmTbl();
        /* L_1ee0:; */
        /* field_0x5bcf = 255; */
        return ((daNpcSv_c*)(((daNpcSv_c*)(((daNpcSv_c*)(((daNpcSv_c*)(((daNpcSv_c*)(setAnmTbl(((C_@2100 + 0) + 80))))->setAnmTbl()))->setAnmTbl()))->setAnmTbl()))->setAnmTbl()))->setAnmTbl();
}

/* 00001F74-00001F94       .text getPrmNpcNo__9daNpcSv_cFv */
void daNpcSv_c::getPrmNpcNo() {
    if (argument != 0) {
    }
    return 0;
}

/* 00001F94-0000209C       .text setMtx__9daNpcSv_cFv */
void daNpcSv_c::setMtx() {
    /* field_0x18 = 0; */
    /* field_0x1c = 0; */
    /* field_0x20 = 0; */
    /* mDoMtx_YrotS(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x206); */
    PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0));
    PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
    mDoMtx_XYZrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x204, 0);
    /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x206); */
    return PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x50 + 36));
}

/* 0000209C-000023D4       .text chkAttention__9daNpcSv_cFv */
void daNpcSv_c::chkAttention() {
        /* field_0x745 = 0; */
        /* if (this->field_0x324 == 0) goto L_20bc; */
        getAttnPos();
        /* field_0x6ec = 0; */
        /* field_0x6f0 = 0; */
        /* field_0x6f4 = 0; */
        /* field_0x741 = 1; */
        /* if (m743 == 0) goto L_20a0; */
        /* field_0x71c = 0; */
        /* field_0x29a = 1; */
        /* goto L_20a4; */
        /* L_20a0:; */
        /* field_0x71c = 1; */
        /* L_20a4:; */
        /* if (this->field_0x737 != 0) goto L_2320; */
        /* field_0x737 = 1; */
        /* goto L_2320; */
        /* L_20bc:; */
        dNpc_calc_DisXZ_AngY();
        /* if (this->field_0x737 == 0) goto L_2130; */
        /* L_2130:; */
        /* if ((this->field_0x710 + base) <= this->field_0xc) goto L_2204; */
        /* if ((this->field_0x726 + 1820) <= abs()) goto L_2204; */
        dNpc_playerEyePos();
        /* field_0x6ec = 0; */
        /* field_0x6f0 = 0; */
        /* field_0x6f4 = 0; */
        /* field_0x741 = 1; */
        /* if (m743 == 0) goto L_21b4; */
        /* field_0x71c = 0; */
        /* goto L_21b8; */
        /* L_21b4:; */
        /* field_0x71c = 1; */
        /* L_21b8:; */
        /* if (this->field_0x744 != 0) goto L_21e4; */
        /* field_0x71c = 0; */
        /* field_0x741 = 2; */
        /* field_0x29a = 1; */
        /* L_21e4:; */
        /* if (this->field_0x737 != 0) goto L_21f8; */
        /* field_0x737 = 1; */
        /* L_21f8:; */
        /* field_0x745 = 1; */
        /* goto L_2320; */
        /* L_2204:; */
        /* if (this->field_0x737 != 1) goto L_2234; */
        /* field_0x737 = 0; */
        /* L_2234:; */
        /* if (this->field_0x30 <= this->field_0xc) goto L_22d8; */
        dNpc_playerEyePos();
        /* field_0x6ec = 0; */
        /* field_0x6f0 = 0; */
        /* field_0x6f4 = 0; */
        /* field_0x741 = 1; */
        /* if (m743 == 0) goto L_229c; */
        /* field_0x71c = 0; */
        /* goto L_22a0; */
        /* L_229c:; */
        /* field_0x71c = 1; */
        /* L_22a0:; */
        /* if (this->field_0x744 != 0) goto L_22cc; */
        /* field_0x71c = 0; */
        /* field_0x741 = 2; */
        /* field_0x29a = 1; */
        /* L_22cc:; */
        /* field_0x745 = 1; */
        /* goto L_2320; */
        /* L_22d8:; */
        /* field_0x741 = 0; */
        /* if (this->field_0x6d8 != 0) goto L_2320; */
        /* if (this->field_0x724 == 0) goto L_2304; */
        /* field_0x724 = (this->field_0x724 + -1); */
        /* goto L_2320; */
        /* L_2304:; */
        /* field_0x71c = 0; */
        /* field_0x741 = 2; */
        /* field_0x29a = 1; */
        /* L_2320:; */
        return (((char*)&l_npc_dat + 0) + (this->field_0x73b * 68));
}

/* 000023D4-00002520       .text lookBack__9daNpcSv_cFv */
void daNpcSv_c::lookBack() {
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if ((this->field_0x741 & 255) == 1) goto L_23c0; */
        /* if (/ * bge * / 1) goto L_23b4; */
        /* goto L_23e4; */
        /* L_23b4:; */
        /* if ((this->field_0x741 & 255) >= 3) goto L_23e4; */
        /* goto L_23e0; */
        /* L_23c0:; */
        /* goto L_23e4; */
        /* L_23e0:; */
        /* L_23e4:; */
        /* if (this->field_0x736 == 0) goto L_2408; */
        /* if (m743 == 0) goto L_2408; */
        /* field_0x29a = 1; */
        /* L_2408:; */
        /* if (this->field_0x29a == 0) goto L_2438; */
        /* if (this->field_0x326 == 0) goto L_2424; */
        /* L_2424:; */
        /* cLib_addCalcAngleS2((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1840), this->field_0x326, 4, 2048); */
        /* goto L_2440; */
        /* L_2438:; */
        /* field_0x730 = 0; */
        /* L_2440:; */
        /* return _restgpr_28(((dNpc_JntCtrl_c*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 656)))->lookAtTarget((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518))); */
}

/* 00002520-000025E8       .text playAnm__9daNpcSv_cFv */
void daNpcSv_c::playAnm() {
        /* if (((mDoExt_McaMorf*)(this->field_0x330))->play(0, 0, 0, arg4, arg5, arg6, arg7) == 0) goto L_255c; */
        /* if (this->field_0x704 == 0) goto L_255c; */
        /* if (this->field_0x73f != 0) goto L_255c; */
        /* field_0x73f = (this->field_0x73f + -1); */
        /* if (this->field_0x73f != 0) goto L_2540; */
        /* field_0x704 = (this->field_0x704 + 3); */
        /* if (setAnmTbl(this->field_0x704) == 0) goto L_255c; */
        /* goto L_255c; */
        /* L_2540:; */
        /* L_255c:; */
        return setAnm(base, 0, C_@4501);
}

/* 000025E8-000026C8       .text setAnm__9daNpcSv_cFUcif */
void daNpcSv_c::setAnm(unsigned char, int, float) {
    /* _savegpr_28(this, char, int, float, arg4, arg5, arg6, arg7); */
    /* if (this->field_0x70c == this->field_0x88) { */
        /* field_0x70c = 0; */
    /* return _restgpr_28(((mDoExt_McaMorf*)(this->field_0x330))->setAnm(((dRes_control_c*)(((char*)&l_arcname_tbl + 0)))->getIDRes((((this->field_0x73b * 24) + (this->field_0x73b << 2)) & 65535), ((char*)&g_dComIfG_gameInfo + -16460), 64))); */

/* 000026C8-00002768       .text setAnmTbl__9daNpcSv_cFP9sSvAnmDat */
void daNpcSv_c::setAnmTbl(sSvAnmDat*) {
    if (/* bne */ 1) {
        /* field_0x704 = 0; */
        return 1;
    }
    /* field_0x704 = arg1; */
    if (this->field_0x73f != 0) {
    }
    if (this->field_0x73d == base) {
        /* if (0 == 0) goto L_26dc; */
    }
    ((daNpcSv_c*)(1))->setAnm(base, 0, C_@5223);
    /* L_26dc:; */
    return 0;
}

/* 00002768-000027E0       .text setCollision__9daNpcSv_cFP8dCcD_Cyl4cXyzff */
void daNpcSv_c::setCollision(dCcD_Cyl*, cXyz, float, float) {
    /* ((cM3dGCyl*)((arg1 + 280)))->SetC(cXyz, cXyz); */
    /* ((cM3dGCyl*)((arg1 + 280)))->SetR(); */
    /* ((cM3dGCyl*)((arg1 + 280)))->SetH(); */
    /* return ((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set(arg1); */
}

/* 000027E0-0000293C       .text getTalkNo__9daNpcSv_cFv */
void daNpcSv_c::getTalkNo() {
        dComIfGs_checkGetItem(37);
        /* field_0x746 = 0; */
        /* if (/ * bne * / 1) goto L_2810; */
        /* if (this->field_0x734 != 0) goto L_27c8; */
        /* if (/ * beq * / 1) goto L_27c0; */
        /* field_0x746 = 1; */
        /* goto L_289c; */
        /* L_27c0:; */
        /* field_0x746 = 0; */
        /* goto L_289c; */
        /* L_27c8:; */
        /* if (/ * bne * / 1) goto L_27f0; */
        /* if (/ * beq * / 1) goto L_27e4; */
        /* field_0x746 = 3; */
        /* goto L_289c; */
        /* L_27e4:; */
        /* field_0x746 = 2; */
        /* goto L_289c; */
        /* L_27f0:; */
        /* if (/ * beq * / 1) goto L_2804; */
        /* field_0x746 = 5; */
        /* goto L_289c; */
        /* L_2804:; */
        /* field_0x746 = 4; */
        /* goto L_289c; */
        /* L_2810:; */
        /* if (/ * bne * / 1) goto L_2838; */
        /* if (/ * bne * / 1) goto L_282c; */
        /* field_0x746 = 6; */
        /* goto L_289c; */
        /* L_282c:; */
        /* field_0x746 = 7; */
        /* goto L_289c; */
        /* L_2838:; */
        /* if (dComIfGs_checkGetItem(57) != 0) goto L_286c; */
        /* if (/ * bne * / 1) goto L_2860; */
        /* field_0x746 = 8; */
        /* goto L_289c; */
        /* L_2860:; */
        /* field_0x746 = 9; */
        /* goto L_289c; */
        /* L_286c:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(12160) != 0) goto L_2894; */
        /* field_0x746 = 10; */
        /* goto L_289c; */
        /* L_2894:; */
        /* field_0x746 = 11; */
        /* L_289c:; */
        /* return this->field_0x746; */
}

/* 0000293C-00002958       .text isTalkOK__9daNpcSv_cFv */
void daNpcSv_c::isTalkOK() {
    /* isTalkOK__9daNpcSv_cFv: 无实义指令 */
}

/* 00002958-00002978       .text daNpc_PeopleCreate__FPv */
static cPhs_State daNpc_PeopleCreate(void* i_this) {
    return ((daNpcSv_c*)i_this)->_create();
}

/* 00002978-0000299C       .text daNpc_PeopleDelete__FPv */
static BOOL daNpc_PeopleDelete(void* i_this) {
    return ((daNpcSv_c*)i_this)->_delete();
}

/* 0000299C-000029C0       .text daNpc_PeopleExecute__FPv */
static BOOL daNpc_PeopleExecute(void* i_this) {
    return ((daNpcSv_c*)i_this)->_execute();
}

/* 000029C0-000029E4       .text daNpc_PeopleDraw__FPv */
static BOOL daNpc_PeopleDraw(void* i_this) {
    return ((daNpcSv_c*)i_this)->_draw();

/* 000029E4-000029EC       .text daNpc_PeopleIsDelete__FPv */
static BOOL daNpc_PeopleIsDelete(void*) {
    return 1;

static actor_method_class daNpc_PeopleMethodTable = {
    (process_method_func)daNpc_PeopleCreate,
    (process_method_func)daNpc_PeopleDelete,
    (process_method_func)daNpc_PeopleExecute,
    (process_method_func)daNpc_PeopleIsDelete,
    (process_method_func)daNpc_PeopleDraw,
};

actor_process_profile_definition g_profile_NPC_SV = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0007,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_NPC_SV_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daNpcSv_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_NPC_SV_e,
    /* Actor SubMtd */ &daNpc_PeopleMethodTable,
    /* Status       */ fopAcStts_CULL_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_ACTOR_e,
    /* Cull Type    */ fopAc_CULLBOX_CUSTOM_e,
};

/* 由 fix_decomp_braces.py 补齐：反编译产物末尾缺 5 个 } */
}}}}}

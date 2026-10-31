/**
 * d_a_npc_kg1.cpp
 * NPC - Salvatore (Squid-Hunt/"Sploosh Kaboom" Minigame)
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_npc_kg1.h"
#include "d/d_lib.h"
#include "d/d_cc_d.h"

static dCcD_SrcCyl l_cyl_src = {
    // dCcD_SrcGObjInf
    {
        /* Flags             */ 0,
        /* SrcObjAt  Type    */ 0,
        /* SrcObjAt  Atp     */ 0,
        /* SrcObjAt  SPrm    */ 0,
        /* SrcObjTg  Type    */ AT_TYPE_ALL,
        /* SrcObjTg  SPrm    */ cCcD_TgSPrm_Set_e | cCcD_TgSPrm_IsEnemy_e,
        /* SrcObjCo  SPrm    */ cCcD_CoSPrm_Set_e | cCcD_CoSPrm_IsPlayer_e | cCcD_CoSPrm_VsGrpAll_e,
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
        /* Radius */ 40.0f,
        /* Height */ 160.0f,
    }},
};


/* 000000EC-000001E0       .text __ct__15daNpc_Kg1_HIO_cFv */
daNpc_Kg1_HIO_c::daNpc_Kg1_HIO_c() {
    if (/* beq */ 1) {
        /* field_0x0 = 0; */
        /* if (arg1 != 0) goto L_30; */
    }
    /* L_30:; */
    return __dl(arg0);
}

/* 000001E0-00000428       .text daNpc_Kg1_nodeCallBack__FP7J3DNodei */
static BOOL daNpc_Kg1_nodeCallBack(J3DNode*, int) {
        /* _savegpr_26(arg0, int, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_320; */
        PSMTXCopy((this->field_0x8c + (this->field_0x18 * 48)), ((char*)&now__14mDoMtx_stack_c + 0), C_@4168);
        /* if (this->field_0x18 != (this->field_0x298 & 255)) goto L_27c; */
        /* mDoMtx_XrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x292); */
        /* mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), ((-this->field_0x290) & 65535)); */
        /* if (this->field_0xd0 != 0) goto L_1c4; */
        /* field_0xd4 = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* __register_global_object(((C_@3569 + 0) + 212), ((char*)&__dt__4cXyzFv + 0), ((C_@3569 + 0) + 196)); */
        /* field_0xd0 = 1; */
        /* L_1c4:; */
        /* if (this->field_0xec != 0) goto L_204; */
        /* field_0xf0 = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* __register_global_object(((C_@3569 + 0) + 240), ((char*)&__dt__4cXyzFv + 0), ((C_@3569 + 0) + 224)); */
        /* field_0xec = 1; */
        /* L_204:; */
        PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0), ((C_@3569 + 0) + 212), (this->field_0x14 + 1856));
        /* mDoMtx_XrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x292); */
        /* mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), ((-this->field_0x290) & 65535)); */
        PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0), ((C_@3569 + 0) + 240), (this->field_0x14 + 1844));
        PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0), ((C_@3569 + 0) + 212), (this->field_0x14 + 628));
        /* field_0x278 = (this->field_0x278 + this->field_0x2c); */
        /* L_27c:; */
        /* if (this->field_0x18 != (this->field_0x299 & 255)) goto L_2b4; */
        /* mDoMtx_XrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x296); */
        /* mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), ((-this->field_0x294) & 65535)); */
        /* L_2b4:; */
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x8c + (this->field_0x18 * 48)));
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), ((char*)&mCurrentMtx__6J3DSys + 0));
        /* if (this->field_0x18 != 8) goto L_320; */
        ((mDoMtx_stack_c*)(PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), ((char*)&mCurrentMtx__6J3DSys + 0))))->transM();
        mDoMtx_XYZrotM(((char*)&now__14mDoMtx_stack_c + 0), 8011, -20224);
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x6c4 + 36));
        /* L_320:; */
        return _restgpr_26(1);
}

/* 00000464-00000688       .text lookBack__11daNpc_Kg1_cFv */
void daNpc_Kg1_c::lookBack() {
        __mi();
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_438; */
        /* L_438:; */
        /* if (this->field_0x324 == 0) goto L_484; */
        /* field_0x29a = 1; */
        getAttnPos();
        m731 = 1;
        /* goto L_508; */
        /* L_484:; */
        /* if (m74D != 8) goto L_4b4; */
        /* goto L_508; */
        /* L_4b4:; */
        /* if (/ * bge * / 1) goto L_500; */
        dNpc_playerEyePos();
        m731 = chkAttention();
        /* goto L_508; */
        /* L_500:; */
        m731 = 0;
        /* L_508:; */
        /* if (this->field_0x29a == 0) goto L_544; */
        /* if (this->field_0x326 == 0) goto L_530; */
        /* L_530:; */
        cLib_addCalcAngleS2((this + 1838), this->field_0x326, 4, 2048);
        /* goto L_54c; */
        /* L_544:; */
        m72E = 0;
        /* L_54c:; */
        return ((dNpc_JntCtrl_c*)((this + 656)))->lookAtTarget((this + 518));
}

/* 00000688-000007D8       .text chkAttention__11daNpc_Kg1_cFv */
void daNpc_Kg1_c::chkAttention() {
    /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    __mi();
    PSVECSquareMag();
    if (/* ble */ 1) {
    }
    /* if (this->field_0x8 > this->field_0x34) { */
        /* if ((abs(((((this->field_0x206 + (this->field_0x292 + this->field_0x296)) & 65535) - cM_atan2s(((char*)&l_HIO + 0))) & 65535), this->field_0x292, this->field_0x206) & 65535) < this->field_0x30) goto L_6d0; */
        /* return 1; */
    /* L_6d0:; */
    return _restgpr_29(0);
}

/* 000007D8-000008D8       .text initTexPatternAnm__11daNpc_Kg1_cFib */
void daNpc_Kg1_c::initTexPatternAnm(int, bool) {
    /* _savegpr_28(this, int, bool, arg3, arg4, arg5, arg6, arg7); */
    /* field_0x6f4 = ((dRes_control_c*)(((C_@4168 + 0) + 12)))->getRes(((C_@4168 + 0) + 20), ((char*)&g_dComIfG_gameInfo + -16460), 64); */
    if (this->field_0x6f4 == 0) {
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((C_@4168 + 0) + 12)))->getRes(((C_@4168 + 0) + 20), ((char*)&g_dComIfG_gameInfo + -16460), 64)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 460, ((char*)&@stringBase0 + 16));
        OSPanic(((char*)&@stringBase0 + 0), 460, ((char*)&@stringBase0 + 39));
    }
    /* if (((mDoExt_btpAnm*)((_savegpr_28(this, int, bool, arg3, arg4, arg5, arg6, arg7) + 1784)))->init(this->field_0x4, this->field_0x6f4, 1, 2, 0, -1) == 0) { */
        /* return 0; */
    m720 = 0;
    m72C = 0;
    return _restgpr_28(1);
}

/* 000008D8-00000944       .text playTexPatternAnm__11daNpc_Kg1_cFv */
void daNpc_Kg1_c::playTexPatternAnm() {
        /* if (cLib_calcTimer<s>__FPs((this + 1836), arg1, arg2, arg3, arg4, arg5, arg6, arg7) != 0) goto L_844; */
        /* if (m720 < (this->field_0x6 & 65535)) goto L_83c; */
        m720 = (this->field_0x6 - m720);
        m72C = 120;
        /* goto L_844; */
        /* L_83c:; */
        m720 = (m720 + 1);
        /* L_844:; */
        return m720;
}

/* 00000944-000009E8       .text set_mtx__11daNpc_Kg1_cFv */
void daNpc_Kg1_c::set_mtx() {
    /* field_0x18 = 0; */
    /* field_0x1c = 0; */
    /* field_0x20 = 0; */
    /* PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0), arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x206); */
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x50 + 36));
    /* field_0x18 = 0; */
    /* field_0x1c = 0; */
    /* field_0x20 = 0; */
    return m6C4;
}

/* 000009E8-00000A08       .text CheckCreateHeap__FP10fopAc_ac_c */
static BOOL CheckCreateHeap(fopAc_ac_c* i_this) {
    ((daNpc_Kg1_c*)i_this)->CreateHeap();
    return TRUE;
}

/* 00000A08-00000D34       .text CreateHeap__11daNpc_Kg1_cFv */
void daNpc_Kg1_c::CreateHeap() {
    /* _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    ((dRes_control_c*)(((C_@4168 + 0) + 12)))->getRes(5);
    __nw(180);
    if (/* beq */ 1) {
    }
    /* field_0x330 = __ct(((dRes_control_c*)(((C_@4168 + 0) + 12)))->getRes(17), 1, ((dRes_control_c*)(((C_@4168 + 0) + 12)))->getRes(5), 0, 0, ((dRes_control_c*)(((C_@4168 + 0) + 12)))->getRes(17), 2, 0); */
    if (this->field_0x330 != 0) {
        /* if (this->field_0x50 == 0) goto L_a04; */
    }
    return 0;
    /* L_a04:; */
    /* field_0x298 = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 44)); */
    if (this->field_0x298 != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 44))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 547, ((char*)&@stringBase0 + 49)); */
        OSPanic(((char*)&@stringBase0 + 0), 547, ((char*)&@stringBase0 + 39));
    }
    /* field_0x299 = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 76)); */
    if (this->field_0x299 != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 76))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 552, ((char*)&@stringBase0 + 86)); */
        OSPanic(((char*)&@stringBase0 + 0), 552, ((char*)&@stringBase0 + 39));
    }
    /* if (((daNpc_Kg1_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->initTexPatternAnm(3, 0) == 0) { */
        /* return 0; */
    /* ((daNpc_Kg1_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->initTexPatternAnm(0, 1); */
    m6C4 = mDoExt_J3DModel(((dRes_control_c*)(((C_@4168 + 0) + 12)))->getRes(6));
    if (m6C4 == 0) {
        return 0;
    }
    ((dRes_control_c*)(((C_@4168 + 0) + 12)))->getRes(10);
    /* if (((mDoExt_btpAnm*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1736)))->init(((dRes_control_c*)(((C_@4168 + 0) + 12)))->getRes(6), ((dRes_control_c*)(((C_@4168 + 0) + 12)))->getRes(10), 1, 2, 0, -1, 0) == 0) { */
        /* return 0; */
    /* goto L_bd4; */
    /* L_b94:; */
    if ((0 & 65535) != (this->field_0x298 & 255)) {
        /* if ((0 & 65535) != (this->field_0x299 & 255)) goto L_bc0; */
        /* if ((0 & 65535) == 8) goto L_bd0; */
    }
    /* L_bc0:; */
    /* field_0x8 = 0; */
    /* L_bd0:; */
    /* L_bd4:; */
    /* if (((0 + 1) & 65535) >= this->field_0x28) goto L_b94; */
    /* field_0x14 = _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* ((dBgS_AcchCir*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1272)))->SetWall(((char*)&daNpc_Kg1_nodeCallBack__FP7J3DNodei + 0), (0 + 1)); */
    /* ((dBgS_Acch*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 820)))->Set((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 484), _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 1, (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1272), (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 544), (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 516)); */
    return _restgpr_27(1);
}

/* 00000D34-00000EF0       .text CreateInit__11daNpc_Kg1_cFv */
void daNpc_Kg1_c::CreateInit() {
    ((dCcD_Stts*)((this + 1336)))->Init(255, 255, this);
    ((dCcD_Cyl*)((this + 1396)))->Set(((char*)&l_cyl_src + 0));
    /* field_0x5b8 = (this + 1336); */
    setCollision();
    gravity = 0;
    ((dNpc_EventCut_c*)((this + 708)))->setActorInfo2(((char*)&@stringBase0 + 117), this);
    set_mtx();
    m72E = 0;
    m730 = 0;
    m731 = 0;
    cullMtx = (this->field_0x50 + 36);
    wait_action_init();
    if (this->field_0x8 < 0) {
        /* field_0x4 = ((mDoHIO_subRoot_c*)(((char*)&mDoHIO_root + 4)))->createChild(((char*)&@stringBase0 + 122), ((char*)&l_HIO + 0)); */
    }
    /* field_0x8 = (this->field_0x8 + 1); */
    /* field_0x280 = 10; */
    m784 = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getEventIdx(((char*)&@stringBase0 + 135), 255);
    m786 = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getEventIdx(((char*)&@stringBase0 + 150), 255);
    m788 = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getEventIdx(((char*)&@stringBase0 + 163), 255);
    m74E = 0;
    m74D = 2;
    setAnm();
    /* field_0x29b = 1; */
    /* field_0x29c = 1; */
    m750 = 1;
    /* field_0x734 = 0; */
    /* field_0x738 = 0; */
    /* field_0x73c = 0; */
    return 4;
}

/* 00000EF0-00000FE8       .text eventOrder__11daNpc_Kg1_cFv */
void daNpc_Kg1_c::eventOrder() {
        /* if (m732 == 2) goto L_e2c; */
        /* if (m732 != 1) goto L_e50; */
        /* L_e2c:; */
        /* if (m732 != 2) goto L_ee8; */
        fopAcM_orderSpeakEvent(this);
        /* goto L_ee8; */
        /* L_e50:; */
        /* if (m732 != 3) goto L_e84; */
        fopAcM_orderOtherEventId(fopAcM_orderSpeakEvent(this), m784, 255);
        /* goto L_ee8; */
        /* L_e84:; */
        /* if (this->field_0xfa != 4) goto L_eb8; */
        fopAcM_orderOtherEventId(fopAcM_orderOtherEventId(fopAcM_orderSpeakEvent(this), m784, 255), m786, 255);
        /* goto L_ee8; */
        /* L_eb8:; */
        /* if (this->field_0xfa != 5) goto L_ee8; */
        /* L_ee8:; */
        return fopAcM_orderOtherEventId(fopAcM_orderOtherEventId(fopAcM_orderOtherEventId(fopAcM_orderSpeakEvent(this), m784, 255), m786, 255), m788, 255);
}

/* 00000FE8-000010C4       .text checkOrder__11daNpc_Kg1_cFv */
void daNpc_Kg1_c::checkOrder() {
        /* if (this->field_0xf8 != 2) goto L_f9c; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->startCheck(m784) == 0) goto L_f54; */
        /* if (m732 != 3) goto L_f54; */
        m732 = 0;
        /* L_f54:; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->endCheck(m784) == 0) goto L_f70; */
        m732 = 0;
        /* L_f70:; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->startCheck(m788) == 0) goto L_fc0; */
        /* if (m732 != 5) goto L_fc0; */
        m732 = 0;
        /* goto L_fc0; */
        /* L_f9c:; */
        /* if (0 != 1) goto L_fc0; */
        /* if (m732 == 2) goto L_fb8; */
        /* if (m732 != 1) goto L_fc0; */
        /* L_fb8:; */
        m730 = 1;
        /* L_fc0:; */
        return ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->startCheck(m788);
}

/* 000010C4-00001188       .text kg1_talk_camera__11daNpc_Kg1_cFv */
void daNpc_Kg1_c::kg1_talk_camera() {
    if (m751 != 0) {
        /* if (this->field_0x5b04 != 0) goto L_1088; */
        ((dCamera_c*)((this->field_0x5b04 + 580)))->Stay();
        ((dCamera_c*)((this->field_0x5b04 + 580)))->Set();
        ((dCamera_c*)((this->field_0x5b04 + 580)))->Reset();
    }
    /* L_1088:; */
    return ((dCamera_c*)((this->field_0x5b04 + 580)))->SetTrimSize(1);
}

/* 00001188-000011D4       .text wait_action_init__11daNpc_Kg1_cFv */
void daNpc_Kg1_c::wait_action_init() {
    clr_seq_flag();
    return base;
}

/* 000011D4-00001858       .text wait_action__11daNpc_Kg1_cFv */
void daNpc_Kg1_c::wait_action() {
        /* _savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&@stringBase0 + 178), 0, 0);
        fopAcIt_Judge(((char*)&fpcSch_JudgeForPName__FPvPv + 0));
        /* if (mWaitMode > 11) goto L_174c; */
        m751 = 0;
        /* field_0x29b = 1; */
        /* field_0x29c = 1; */
        /* if (fopAcIt_Judge(((char*)&fpcSch_JudgeForPName__FPvPv + 0)) == 0) goto L_1194; */
        ((daMgBoard_c*)(fopAcIt_Judge(((char*)&fpcSch_JudgeForPName__FPvPv + 0))))->clrGInfoDraw();
        /* L_1194:; */
        /* ((daNpc_Kg1_c*)(_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->clr_seq_flag(); */
        /* if (m731 == 0) goto L_11b4; */
        m732 = 1;
        /* goto L_11bc; */
        /* L_11b4:; */
        m732 = 0;
        /* L_11bc:; */
        /* if (m730 == 0) goto L_174c; */
        mWaitMode = 1;
        /* field_0x10 = 0; */
        /* ((fopNpc_npc_c*)(_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->talk(1); */
        /* if (this->field_0x6a4 >= 7510) goto L_120c; */
        /* if (m74D != 4) goto L_120c; */
        /* field_0x29b = 0; */
        /* goto L_1214; */
        /* L_120c:; */
        /* field_0x29b = 1; */
        /* L_1214:; */
        /* if (this->field_0x6a4 != 7515) goto L_122c; */
        m750 = 0;
        /* goto L_125c; */
        /* L_122c:; */
        /* if (this->field_0x6a4 != 7516) goto L_1240; */
        /* if ((((fopNpc_npc_c*)(_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->talk(1) & 65535) == 6) goto L_1254; */
        /* L_1240:; */
        /* if (this->field_0x6a4 != 7511) goto L_125c; */
        /* if ((((fopNpc_npc_c*)(_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->talk(1) & 65535) != 6) goto L_125c; */
        /* L_1254:; */
        m750 = 1;
        /* L_125c:; */
        /* if ((((fopNpc_npc_c*)(_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->talk(1) & 65535) != 18) goto L_174c; */
        /* if (this->field_0x772 == 0) goto L_129c; */
        m732 = 3;
        mWaitMode = 2;
        m751 = 0;
        /* goto L_12ac; */
        /* L_129c:; */
        m74D = 2;
        mWaitMode = 0;
        /* L_12ac:; */
        m730 = 0;
        /* goto L_174c; */
        m751 = 0;
        /* if (fopAcIt_Judge(((char*)&fpcSch_JudgeForPName__FPvPv + 0)) == 0) goto L_12d4; */
        /* ((daMgBoard_c*)(((fopNpc_npc_c*)(_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->talk(1)))->reqStartGame(); */
        ((daMgBoard_c*)(fopAcIt_Judge(((char*)&fpcSch_JudgeForPName__FPvPv + 0))))->setGInfoDraw();
        /* L_12d4:; */
        mWaitMode = 3;
        /* ((JAIZelBasic*)(base))->seStart(2216, (_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        mEndGameTimer = 60;
        /* goto L_174c; */
        /* if (m732 != 0) goto L_174c; */
        /* if (fopAcIt_Judge(((char*)&fpcSch_JudgeForPName__FPvPv + 0)) == 0) goto L_174c; */
        /* mbGameEnd = (((daMgBoard_c*)(((JAIZelBasic*)(base))->seStart(2216, (_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0)))->checkEndGame() + -1); */
        /* if (mbGameEnd == 0) goto L_174c; */
        /* if (cLib_calcTimer<Uc>__FPUc((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1915)) != 0) goto L_174c; */
        mbDidClearGame = ((daMgBoard_c*)(fopAcIt_Judge(((char*)&fpcSch_JudgeForPName__FPvPv + 0))))->checkClearGame();
        /* if (mbDidClearGame == 0) goto L_1390; */
        mGameBoardScore = ((daMgBoard_c*)(fopAcIt_Judge(((char*)&fpcSch_JudgeForPName__FPvPv + 0))))->getScore();
        /* goto L_1398; */
        /* L_1390:; */
        m74D = 4;
        /* L_1398:; */
        mEndGameTimer = 90;
        m778 = 0;
        mWaitMode = 4;
        m779 = 1;
        /* goto L_174c; */
        /* if (this->field_0x32 == 0) goto L_174c; */
        m779 = 0;
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(9536);
        /* if (fopAcIt_Judge(((char*)&fpcSch_JudgeForPName__FPvPv + 0)) == 0) goto L_1408; */
        /* field_0x63f = 1; */
        /* L_1408:; */
        /* if (fopAcIt_Judge(((char*)&fpcSch_JudgeForPName__FPvPv + 0)) == 0) goto L_1418; */
        ((daMgBoard_c*)(fopAcIt_Judge(((char*)&fpcSch_JudgeForPName__FPvPv + 0))))->clrGInfoDraw();
        /* L_1418:; */
        mWaitMode = 5;
        m732 = 2;
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&@stringBase0 + 178), 0, 0));
        /* goto L_174c; */
        /* if (m730 != 1) goto L_174c; */
        m751 = 1;
        /* if ((((fopNpc_npc_c*)(_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->talk(1) & 65535) != 18) goto L_174c; */
        m732 = 0;
        m730 = 0;
        /* if (mbDidClearGame == 0) goto L_14a8; */
        m732 = 5;
        mWaitMode = 6;
        /* goto L_174c; */
        /* L_14a8:; */
        /* if (this->field_0x772 == 0) goto L_14c8; */
        m732 = 3;
        mWaitMode = 2;
        /* goto L_174c; */
        /* L_14c8:; */
        m74D = 2;
        mWaitMode = 0;
        /* goto L_174c; */
        /* if (m732 != 0) goto L_174c; */
        m751 = 0;
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->getEventReg();
        /* m77C = fopAcM_createItemForPresentDemo((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504)); */
        /* if (((((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->getEventReg() + -1) & 16777215) == 65535) goto L_155c; */
        /* L_155c:; */
        mWaitMode = 7;
        /* goto L_174c; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->endCheck(m788) == 0) goto L_174c; */
        m775 = 1;
        m732 = 2;
        mWaitMode = 8;
        m74D = 11;
        /* goto L_174c; */
        /* field_0x29c = 1; */
        /* field_0x29b = 1; */
        /* if (m730 != 1) goto L_174c; */
        m751 = 1;
        /* if ((((fopNpc_npc_c*)(_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->talk(1) & 65535) != 18) goto L_174c; */
        m730 = 0;
        m732 = 0;
        /* if (this->field_0x777 == 0) goto L_1618; */
        m732 = 5;
        mWaitMode = 9;
        /* goto L_174c; */
        /* L_1618:; */
        m74D = 2;
        mWaitMode = 0;
        /* goto L_174c; */
        /* if (m732 != 0) goto L_174c; */
        m751 = 0;
        /* if (((((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->getEventReg() + -1) & 16777215) <= 1) goto L_1670; */
        /* L_1670:; */
        /* m77C = fopAcM_createItemForPresentDemo((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504)); */
        /* if ((1 & 16777215) == 65535) goto L_16b4; */
        /* L_16b4:; */
        mWaitMode = 10;
        /* goto L_174c; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->endCheck(m788) == 0) goto L_174c; */
        /* field_0x776 = 1; */
        m732 = 2;
        mWaitMode = 11;
        /* goto L_174c; */
        /* if (m730 != 1) goto L_174c; */
        m751 = 1;
        /* if ((((fopNpc_npc_c*)(_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->talk(1) & 65535) != 18) goto L_174c; */
        m732 = 0;
        m730 = 0;
        mWaitMode = 0;
        m74D = 2;
        /* L_174c:; */
        /* return _restgpr_26(((daNpc_Kg1_c*)(_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->kg1_talk_camera()); */
}

/* 00001858-00001878       .text clr_seq_flag__11daNpc_Kg1_cFv */
void daNpc_Kg1_c::clr_seq_flag() {
    /* field_0x772 = 0; */
    mbDidClearGame = 0;
    mbGameEnd = 0;
    m775 = 0;
    /* field_0x776 = 0; */
    /* field_0x777 = 0; */
    return this;
}

/* 00001878-000019B4       .text getMsg__11daNpc_Kg1_cFv */
void daNpc_Kg1_c::getMsg() {
        /* if (mbGameEnd == 0) goto L_1898; */
        /* if (mbDidClearGame == 0) goto L_1890; */
        /* if (m775 == 0) goto L_186c; */
        /* if (this->field_0x776 != 0) goto L_186c; */
        /* if ((((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->getEventReg((arg1 + -16641)) & 16777215) <= mGameBoardScore) goto L_1864; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(3588);
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->setEventReg();
        /* if ((((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->getEventReg() & 16777215) >= 3) goto L_1854; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->setEventReg();
        /* L_1854:; */
        /* field_0x777 = 1; */
        return 7523;
        /* L_1864:; */
        return 7524;
        /* L_186c:; */
        /* if (7524 == 0) goto L_1888; */
        /* if (this->field_0x776 == 0) goto L_1888; */
        return 7524;
        /* L_1888:; */
        return 7519;
        /* L_1890:; */
        return 7517;
        /* L_1898:; */
        /* if (this->field_0x770 != 0) goto L_18ac; */
        return 7501;
        /* L_18ac:; */
        return 7502;
}

/* 000019B4-00001C7C       .text next_msgStatus__11daNpc_Kg1_cFPUl */
void daNpc_Kg1_c::next_msgStatus(u32*) {
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if ((base + -7501) > 18) goto L_1b70; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(3588) != 0) goto L_193c; */
        base = 7506;
        /* goto L_1994; */
        /* L_193c:; */
        /* if (dLib_getIplDaysFromSaveTime() >= 4) goto L_1954; */
        base = 7503;
        /* goto L_1994; */
        /* L_1954:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 4440)))->isEventBit(257) == 0) goto L_1980; */
        base = 7504;
        /* goto L_1994; */
        /* L_1980:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 4440)))->onEventBit(257);
        base = 7505;
        /* L_1994:; */
        /* field_0x770 = 1; */
        /* goto L_1b74; */
        base = 7506;
        /* goto L_1b74; */
        /* ((daNpc_Kg1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->clr_seq_flag(); */
        /* if (this->field_0xfa == 1) goto L_1a54; */
        /* if (/ * bge * / 1) goto L_1b74; */
        /* if (this->field_0xfa >= 0) goto L_19d4; */
        /* goto L_1b74; */
        /* L_19d4:; */
        /* if (this->field_0x4 >= 10) goto L_19f4; */
        base = 7508;
        /* goto L_1b74; */
        /* L_19f4:; */
        m74D = 1;
        /* field_0x5b54 = (this->field_0x5b54 + -10); */
        m751 = 1;
        /* field_0x29b = 1; */
        base = 7509;
        /* goto L_1b74; */
        /* L_1a54:; */
        base = 7507;
        /* goto L_1b74; */
        /* if (this->field_0x771 != 0) goto L_1a78; */
        base = 7510;
        /* goto L_1a80; */
        /* L_1a78:; */
        base = 7516;
        /* L_1a80:; */
        /* field_0x772 = 1; */
        /* goto L_1b74; */
        base = (base + 1);
        /* goto L_1b74; */
        /* if (this->field_0xfa == 1) goto L_1ac8; */
        /* if (/ * bge * / 1) goto L_1b74; */
        /* if (this->field_0xfa >= 0) goto L_1abc; */
        /* goto L_1b74; */
        /* L_1abc:; */
        base = 7516;
        /* goto L_1b74; */
        /* L_1ac8:; */
        base = 7515;
        /* goto L_1b74; */
        base = 7511;
        /* goto L_1b74; */
        /* if ((getEventReg() & 16777215) == 1) goto L_1b20; */
        /* if (/ * bge * / 1) goto L_1b2c; */
        /* if ((getEventReg() & 16777215) >= 0) goto L_1b14; */
        /* goto L_1b2c; */
        /* L_1b14:; */
        base = 7520;
        /* goto L_1b34; */
        /* L_1b20:; */
        base = 7521;
        /* goto L_1b34; */
        /* L_1b2c:; */
        base = 7522;
        /* L_1b34:; */
        /* if ((getEventReg() & 16777215) >= 3) goto L_1b4c; */
        /* L_1b4c:; */
        setEventReg();
        /* goto L_1b74; */
        /* field_0x771 = 1; */
        /* goto L_1b74; */
        /* L_1b70:; */
        /* L_1b74:; */
        return _restgpr_28(16);
}

/* 00001C7C-00001CB8       .text anmAtr__11daNpc_Kg1_cFUs */
void daNpc_Kg1_c::anmAtr(u16) {
    /* field_0x5bcf = 255; */
    return this;
}

/* 00001CB8-00001E60       .text daNpc_Kg1_bcks_setAnm__FPCcP14mDoExt_McaMorfPScPScPScPCiPC14dLib_anm_prm_c */
void daNpc_Kg1_bcks_setAnm(const char*, mDoExt_McaMorf*, signed char*, signed char*, signed char*, const int*, const dLib_anm_prm_c*) {
    /* _savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (/* beq */ 1) {
        /* if (/ * beq * / 1) goto L_1cf4; */
        /* field_0x0 = 0; */
        /* ((mDoExt_McaMorf*)(((dRes_control_c*)(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getRes()))->setAnm(((dRes_control_c*)(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getRes(), this->field_0xc, 0); */
        /* if (this->field_0x8 > this->field_0x0) goto L_1cf4; */
        /* field_0x68 = ((this->field_0x0 - this->field_0x8) - this->field_0x8); */
    }
    /* L_1cf4:; */
    if (this->field_0x5d != 0) {
        /* if (/ * beq * / 1) goto L_1d24; */
    }
    /* L_1d24:; */
    if (0 == 0) {
        /* if ((this->field_0x1 & 255) != -1) goto L_1d5c; */
        /* if (this->field_0xc == 0) goto L_1d5c; */
    }
    /* L_1d5c:; */
    return _restgpr_28();
}

/* 00001E60-00001F8C       .text setAnm__11daNpc_Kg1_cFv */
void daNpc_Kg1_c::setAnm() {
        /* if ((m74D & 255) == (m74E & 255)) goto L_1de8; */
        initTexPatternAnm(((C_@4168 + 0) + 184), 1);
        /* L_1de8:; */
        /* if ((this->field_0x74c & 255) == 4) goto L_1e28; */
        /* if ((this->field_0x74c & 255) == 2) goto L_1e28; */
        /* if ((this->field_0x74c & 255) == 5) goto L_1e28; */
        /* if ((this->field_0x74c & 255) == 6) goto L_1e28; */
        /* if ((this->field_0x74c & 255) == 7) goto L_1e28; */
        /* if ((this->field_0x74c & 255) == 8) goto L_1e28; */
        /* if ((this->field_0x74c & 255) != 9) goto L_1e60; */
        /* L_1e28:; */
        /* field_0x74f = 1; */
        /* if (this->field_0x74c != 9) goto L_1e68; */
        /* if (/ * bne * / 1) goto L_1e68; */
        /* field_0x10 = 0; */
        /* goto L_1e68; */
        /* L_1e60:; */
        /* field_0x74f = 0; */
        /* L_1e68:; */
        return daNpc_Kg1_bcks_setAnm(((C_@4168 + 0) + 12), this->field_0x330, (this + 1868), (this + 1869), (this + 1870), ((C_@4168 + 0) + 144));
}

/* 00001F8C-00001FAC       .text daNpc_Kg1Create__FPv */
static cPhs_State daNpc_Kg1Create(void* i_this) {
    return ((daNpc_Kg1_c*)i_this)->_create();
}

/* 00001FAC-0000203C       .text _create__11daNpc_Kg1_cFv */
cPhs_State daNpc_Kg1_c::_create() {
        /* if (/ * bne * / 1) goto L_1ef8; */
        /* if (this == 0) goto L_1eec; */
        __ct();
        /* L_1eec:; */
        /* L_1ef8:; */
        /* if (dComIfG_resLoad((this + 1756), ((char*)&m_arcname__11daNpc_Kg1_c + 0)) != 4) goto L_1f3c; */
        /* if (fopAcM_entrySolidHeap(this, ((char*)&CheckCreateHeap__FP10fopAc_ac_c + 0)) == 0) goto L_1f38; */
        CreateInit();
        /* goto L_1f3c; */
        /* L_1f38:; */
        /* L_1f3c:; */
        return 5;
}

/* 00002480-0000250C       .text daNpc_Kg1Delete__FPv */
static BOOL daNpc_Kg1Delete(void*) {
    /* dComIfG_resDelete((arg0 + 1756), ((char*)&m_arcname__11daNpc_Kg1_c + 0), arg2); */
    if (this->field_0xf0 != 0) {
        /* if (this->field_0x330 != 0) goto L_23d4; */
        /* ((mDoExt_McaMorf*)(this->field_0x330))->stopZelAnime(); */
    }
    /* L_23d4:; */
    if (this->field_0x8 >= 0) {
        /* if (/ * bge * / 1) goto L_2408; */
        /* ((mDoHIO_subRoot_c*)(((char*)&mDoHIO_root + 4)))->deleteChild(this->field_0x4); */
    }
    /* L_2408:; */
    return 1;
}

/* 0000250C-00002648       .text daNpc_Kg1Execute__FPv */
static BOOL daNpc_Kg1Execute(void*) {
    /* ((dNpc_JntCtrl_c*)((arg0 + 656)))->setParam(this->field_0x1a, this->field_0x1e, this->field_0x22, this->field_0x26, this->field_0x18, this->field_0x1c, this->field_0x20); */
    ((daNpc_Kg1_c*)(arg0))->checkOrder();
    __ptmf_scall(arg0);
    ((daNpc_Kg1_c*)(arg0))->eventOrder();
    ((daNpc_Kg1_c*)(arg0))->playTexPatternAnm();
    ((daNpc_Kg1_c*)(arg0))->setAnm();
    if (this->field_0x750 != 0) {
        /* ((mDoExt_McaMorf*)(this->field_0x330))->play(0, 0, 0); */
    }
    ((dBgS_Acch*)((arg0 + 820)))->CrrPos(((char*)&g_dComIfG_gameInfo + 4768));
    ((fopNpc_npc_c*)(arg0))->setCollision();
    /* field_0x274 = 0; */
    /* field_0x278 = (this->field_0x194 + this->field_0x1fc); */
    /* field_0x27c = 0; */
    /* field_0x260 = 0; */
    /* field_0x264 = (this->field_0x5c + this->field_0x1fc); */
    /* field_0x268 = 0; */
    ((daNpc_Kg1_c*)(arg0))->lookBack();
    ((daNpc_Kg1_c*)(arg0))->set_mtx();
    return 0;
}

/* 00002648-000027CC       .text daNpc_Kg1Draw__FPv */
static BOOL daNpc_Kg1Draw(void*) {
    /* dSnap_RegistFig(129, _savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(0, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x50, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x6c4, (_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
    /* ((mDoExt_btpAnm*)((_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1784)))->entry(this->field_0x4, this->field_0x720); */
    /* ((mDoExt_McaMorf*)(this->field_0x330))->updateDL(); */
    /* ((J3DMaterialTable*)((this->field_0x4 + 88)))->removeTexNoAnimator(this->field_0x700); */
    if (this->field_0x74f != 0) {
        /* ((mDoExt_btpAnm*)((_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1736)))->entry(this->field_0x4); */
        /* mDoExt_modelUpdateDL(this->field_0x6c4); */
    /* field_0x724 = dComIfGd_setShadow(this->field_0x724, 1, this->field_0x50); */
    if (this->field_0x779 != 0) {
        /* field_0x5bc6 = 25; */
    return _restgpr_27(1);

/* 000027CC-000027D4       .text daNpc_Kg1IsDelete__FPv */
static BOOL daNpc_Kg1IsDelete(void*) {
    return 1;

static actor_method_class daNpc_Kg1MethodTable = {
    (process_method_func)daNpc_Kg1Create,
    (process_method_func)daNpc_Kg1Delete,
    (process_method_func)daNpc_Kg1Execute,
    (process_method_func)daNpc_Kg1IsDelete,
    (process_method_func)daNpc_Kg1Draw,
};

actor_process_profile_definition g_profile_NPC_KG1 = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0007,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_NPC_KG1_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daNpc_Kg1_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_NPC_KG1_e,
    /* Actor SubMtd */ &daNpc_Kg1MethodTable,
    /* Status       */ 0x07 | fopAcStts_SHOWMAP_e | fopAcStts_CULL_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_ACTOR_e,
    /* Cull Type    */ fopAc_CULLBOX_0_e,
};

/* 由 fix_decomp_braces.py 补齐：反编译产物末尾缺 4 个 } */
}}}}

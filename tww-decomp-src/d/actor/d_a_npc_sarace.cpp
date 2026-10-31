/**
 * d_a_npc_sarace.cpp
 * NPC - Loot the Sailor (Boating Course)
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_npc_sarace.h"
#include "m_Do/m_Do_ext.h"
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
        /* Radius */ 30.0f,
        /* Height */ 80.0f,
    }},
};


/* 000000EC-00000198       .text __ct__18daNpc_Sarace_HIO_cFv */
daNpc_Sarace_HIO_c::daNpc_Sarace_HIO_c() {
    if (/* beq */ 1) {
        /* field_0x0 = 0; */
        /* if (arg1 != 0) goto L_30; */
    }
    /* L_30:; */
    return __dl(arg0);
}

/* 00000198-00000328       .text nodeCallBack__FP7J3DNodei */
static BOOL nodeCallBack(J3DNode*, int) {
        /* _savegpr_26(arg0, int, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_220; */
        /* if (this->field_0x14 == 0) goto L_220; */
        PSMTXCopy((this->field_0x8c + (this->field_0x18 * 48)), ((char*)&now__14mDoMtx_stack_c + 0), C_@4060);
        /* if (this->field_0x18 != (this->field_0x298 & 255)) goto L_1c0; */
        /* if (this->field_0x9c != 0) goto L_154; */
        /* field_0xa0 = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* __register_global_object(((C_@3569 + 0) + 160), ((char*)&__dt__4cXyzFv + 0), ((C_@3569 + 0) + 144)); */
        /* field_0x9c = 1; */
        /* L_154:; */
        PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0), ((C_@3569 + 0) + 160), (this->field_0x14 + 1800));
        /* mDoMtx_XrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x292); */
        /* mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), ((-this->field_0x290) & 65535)); */
        PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0));
        /* goto L_1f8; */
        /* L_1c0:; */
        /* if (this->field_0x18 != (this->field_0x299 & 255)) goto L_1f8; */
        /* mDoMtx_XrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x296); */
        /* mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), ((-this->field_0x294) & 65535)); */
        /* L_1f8:; */
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), ((char*)&mCurrentMtx__6J3DSys + 0));
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x8c + (this->field_0x18 * 48)));
        /* L_220:; */
        return _restgpr_26(1);
}

/* 00000364-00000478       .text initTexPatternAnm__14daNpc_Sarace_cFb */
void daNpc_Sarace_c::initTexPatternAnm(bool) {
    /* _savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* field_0x6e0 = ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(((char*)&l_btp_ix_tbl + 0), ((char*)&g_dComIfG_gameInfo + -16460), 64); */
    if (this->field_0x6e0 == 0) {
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(((char*)&l_btp_ix_tbl + 0), ((char*)&g_dComIfG_gameInfo + -16460), 64)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 7), 249, ((char*)&@stringBase0 + 26));
        OSPanic(((char*)&@stringBase0 + 7), 249, ((char*)&@stringBase0 + 37));
    }
    /* if (((mDoExt_btpAnm*)((_savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7) + 1764)))->init(this->field_0x4, this->field_0x6e0, 1, 2, 0, -1) == 0) { */
        /* return 0; */
    /* field_0x6f8 = 0; */
    /* field_0x6fa = 0; */
    return _restgpr_29(1);
}

/* 00000478-00000504       .text playTexPatternAnm__14daNpc_Sarace_cFv */
void daNpc_Sarace_c::playTexPatternAnm() {
        /* if (cLib_calcTimer<s>__FPs((this + 1786), arg1, arg2, arg3, arg4, arg5, arg6, arg7) != 0) goto L_404; */
        /* if (this->field_0x6f8 < (this->field_0x6 & 65535)) goto L_3fc; */
        /* field_0x6f8 = (this->field_0x6 - this->field_0x6f8); */
        cM_rndF(C_@4161);
        /* goto L_404; */
        /* L_3fc:; */
        /* field_0x6f8 = (C_@4160 + 1); */
        /* L_404:; */
        return C_@4160;
}

/* 00000504-0000060C       .text setAnm__14daNpc_Sarace_cFScf */
void daNpc_Sarace_c::setAnm(signed char, float) {
    /* _savegpr_29(this, char, float, arg3, arg4, arg5, arg6, arg7); */
    if (/* bge */ 1) {
    }
    if (/* beq */ 1) {
        /* if ((this->field_0x741 & 255) != -1) goto L_500; */
        dNpc_setAnm(this->field_0x330, ((C_@2100 + 0) + 116), ((C_@4060 + 0) + 20), -1, ((char*)&@stringBase0 + 0));
    }
    /* L_500:; */
    return _restgpr_29(dNpc_setAnm(this->field_0x6cc, ((C_@2100 + 0) + 116), ((C_@4060 + 0) + 32), -1, ((char*)&@stringBase0 + 0)));
}

/* 0000060C-00000760       .text chkAttention__14daNpc_Sarace_cF4cXyzs */
void daNpc_Sarace_c::chkAttention(cXyz, short) {
    /* _savegpr_28(this, cXyz, short, arg3, arg4, arg5, arg6, arg7); */
    /* if ((((current - base) * (current - base)) + ((this->field_0x200 - this->field_0x8) * (this->field_0x200 - this->field_0x8))) < this->field_0x30) { */
    cM_atan2s(((char*)&l_HIO + 0));
    if (this->field_0x728 != 0) {
    }
    if ((this->field_0x28 + 1820) > abs()) {
        /* if ((this->field_0x2c + this->field_0x58) < this->field_0x8) goto L_648; */
    }
    /* L_648:; */
    return _restgpr_28(1);
}

/* 00000760-000007D8       .text eventOrder__14daNpc_Sarace_cFv */
void daNpc_Sarace_c::eventOrder() {
        /* if ((this->field_0x742 & 255) != 3) goto L_6b0; */
        /* fopAcM_orderOtherEvent2(this, ((char*)&@stringBase0 + 42), 1, (arg3 + -1)); */
        /* goto L_6dc; */
        /* L_6b0:; */
        /* if ((this->field_0x742 & 255) == 1) goto L_6c0; */
        /* if ((this->field_0x742 & 255) != 2) goto L_6dc; */
        /* L_6c0:; */
        /* if (this->field_0x742 != 1) goto L_6dc; */
        /* L_6dc:; */
        /* return fopAcM_orderSpeakEvent(fopAcM_orderOtherEvent2(this, ((char*)&@stringBase0 + 42), 1, (arg3 + -1))); */
}

/* 000007D8-000008E8       .text checkOrder__14daNpc_Sarace_cFv */
void daNpc_Sarace_c::checkOrder() {
        /* if (this->field_0xf8 != 2) goto L_7b8; */
        /* if (this->field_0x742 != 3) goto L_7e8; */
        /* if (__ptmf_cmpr((this + 1844)) == 0) goto L_7ac; */
        /* if (__ptmf_test((this + 1844)) == 0) goto L_778; */
        /* field_0x746 = -1; */
        __ptmf_scall(this, 0);
        /* L_778:; */
        /* field_0x746 = 0; */
        __ptmf_scall(this, 0);
        /* L_7ac:; */
        /* field_0x742 = 0; */
        /* goto L_7e8; */
        /* L_7b8:; */
        /* if (0 != 1) goto L_7e8; */
        /* if ((this->field_0x742 & 255) == 1) goto L_7d8; */
        /* if ((this->field_0x742 & 255) != 2) goto L_7e8; */
        /* L_7d8:; */
        /* field_0x742 = 0; */
        /* field_0x729 = 1; */
        /* L_7e8:; */
        return __ptmf_scall(this, 0);
}

/* 000008E8-00000A6C       .text next_msgStatus__14daNpc_Sarace_cFPUl */
void daNpc_Sarace_c::next_msgStatus(u32*) {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bgt * / 1) goto L_960; */
        base = (base + 1);
        /* goto L_964; */
        base = 4019;
        /* goto L_964; */
        base = 4003;
        /* goto L_964; */
        /* if (this->field_0xfa != 0) goto L_884; */
        base = 4004;
        /* goto L_964; */
        /* L_884:; */
        /* if (4004 != 1) goto L_8d0; */
        /* if (this->field_0x4 >= 30) goto L_8ac; */
        base = 4015;
        /* goto L_964; */
        /* L_8ac:; */
        /* field_0x5b54 = (this->field_0x5b54 + -30); */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->offEventBit(10272);
        base = 4016;
        /* goto L_964; */
        /* L_8d0:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(10248) != 0) goto L_908; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(10248);
        base = 4013;
        /* goto L_964; */
        /* L_908:; */
        base = 4014;
        /* goto L_964; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(10272) == 0) goto L_93c; */
        base = 4010;
        /* goto L_964; */
        /* L_93c:; */
        base = 4009;
        /* goto L_964; */
        base = 4009;
        /* goto L_964; */
        base = 4003;
        /* goto L_964; */
        /* L_960:; */
        /* L_964:; */
        return _restgpr_29(16);
}

/* 00000A6C-00000B50       .text getMsg__14daNpc_Sarace_cFv */
void daNpc_Sarace_c::getMsg() {
        /* if (this->field_0x724 == 0) goto L_9f8; */
        /* if (this->field_0x724 != 4020) goto L_9e8; */
        /* if (base != 1) goto L_9c0; */
        /* field_0x724 = 4023; */
        /* goto L_9e8; */
        /* L_9c0:; */
        /* if (4023 != 3) goto L_9d4; */
        /* field_0x724 = 4017; */
        /* goto L_9e8; */
        /* L_9d4:; */
        /* L_9e8:; */
        /* field_0x724 = 0; */
        /* goto L_a4c; */
        /* L_9f8:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(10256) != 0) goto L_a2c; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(10256);
        /* goto L_a4c; */
        /* L_a2c:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(10304) != 0) goto L_a48; */
        /* goto L_a4c; */
        /* L_a48:; */
        /* L_a4c:; */
        return 4002;
}

/* 00000B50-00000BEC       .text anmAtr__14daNpc_Sarace_cFUs */
void daNpc_Sarace_c::anmAtr(u16) {
        /* if (this->field_0x5bcf == 1) goto L_ab8; */
        /* if (/ * bge * / 1) goto L_a98; */
        /* if (this->field_0x5bcf >= 0) goto L_aa4; */
        /* goto L_ae4; */
        /* L_a98:; */
        /* if (this->field_0x5bcf >= 3) goto L_ae4; */
        /* goto L_ad0; */
        /* L_aa4:; */
        /* setAnm(0, C_@4343, arg3, arg4, arg5, arg6, arg7); */
        /* goto L_ae4; */
        /* L_ab8:; */
        /* ((daNpc_Sarace_c*)(setAnm(0, C_@4343, arg3, arg4, arg5, arg6, arg7)))->setAnm(1, ((char*)&l_HIO + 0)); */
        /* goto L_ae4; */
        /* L_ad0:; */
        /* ((daNpc_Sarace_c*)(((daNpc_Sarace_c*)(setAnm(0, C_@4343, arg3, arg4, arg5, arg6, arg7)))->setAnm(1, ((char*)&l_HIO + 0))))->setAnm(2, ((char*)&l_HIO + 0)); */
        /* L_ae4:; */
        /* field_0x5bcf = 255; */
        /* return ((daNpc_Sarace_c*)(((daNpc_Sarace_c*)(setAnm(0, C_@4343, arg3, arg4, arg5, arg6, arg7)))->setAnm(1, ((char*)&l_HIO + 0))))->setAnm(2, ((char*)&l_HIO + 0)); */
}

/* 00000BEC-00000E24       .text CreateInit__14daNpc_Sarace_cFv */
void daNpc_Sarace_c::CreateInit() {
        /* field_0x280 = 10; */
        gravity = 0;
        /* if (__ptmf_cmpr((this + 1844)) == 0) goto L_bdc; */
        /* if (__ptmf_test((this + 1844)) == 0) goto L_ba8; */
        /* field_0x746 = -1; */
        __ptmf_scall(this, 0);
        /* L_ba8:; */
        /* field_0x746 = 0; */
        __ptmf_scall(this, 0);
        /* L_bdc:; */
        /* field_0x708 = 0; */
        /* field_0x70c = 0; */
        /* field_0x710 = 0; */
        /* field_0x6fc = 0; */
        /* field_0x700 = 0; */
        /* field_0x704 = 0; */
        ((dCcD_Stts*)((this + 1336)))->Init(255, 255, this);
        ((dCcD_Cyl*)((this + 1396)))->Set(((char*)&l_cyl_src + 0));
        /* field_0x5b8 = (this + 1336); */
        setCollision();
        /* field_0x730 = 0; */
        ((dNpc_EventCut_c*)((this + 708)))->setActorInfo2(((char*)&@stringBase0 + 0), this);
        /* field_0x26d = 173; */
        /* field_0x26f = 173; */
        set_mtx();
        /* field_0x724 = 0; */
        /* field_0x6d8 = -1; */
        /* field_0x6dc = -1; */
        setAnm(0);
        /* if (this->field_0x513c != 1) goto L_ce4; */
        /* if (this->field_0x513e != 48) goto L_ce4; */
        /* if (base == 0) goto L_ce4; */
        /* field_0x742 = 1; */
        /* field_0x724 = 4020; */
        fopAcM_orderSpeakEvent(this);
        /* L_ce4:; */
        /* ((mDoExt_McaMorf*)(this->field_0x330))->play((this + 608), 0, 0); */
        /* ((mDoExt_McaMorf*)(this->field_0x330))->calc(); */
        /* ((mDoExt_McaMorf*)(this->field_0x6cc))->play(0, 0, 0); */
        /* ((mDoExt_McaMorf*)(this->field_0x6cc))->calc(); */
        return 1;
}

/* 00000E24-00000E68       .text setAttention__14daNpc_Sarace_cFv */
void daNpc_Sarace_c::setAttention() {
    eyePos = 0;
    /* field_0x264 = 0; */
    /* field_0x268 = 0; */
    /* field_0x274 = 0; */
    /* field_0x278 = (this->field_0x70c + this->field_0x24); */
    /* field_0x27c = 0; */
    return this;
}

/* 00000E68-00000FF4       .text lookBack__14daNpc_Sarace_cFv */
void daNpc_Sarace_c::lookBack() {
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if ((this->field_0x743 & 255) >= 3) goto L_e94; */
        /* if ((this->field_0x743 & 255) >= 1) goto L_dd0; */
        /* goto L_e94; */
        /* L_dd0:; */
        /* if ((this->field_0x743 & 255) != 2) goto L_e38; */
        /* field_0x29a = 1; */
        /* if (this->field_0x728 != 0) goto L_e38; */
        dNpc_playerEyePos();
        /* cLib_addCalcAngleS2((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518), cLib_targetAngleY((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504)), 4, 6144); */
        /* L_e38:; */
        /* if (this->field_0x728 == 0) goto L_e94; */
        dNpc_playerEyePos();
        /* L_e94:; */
        /* if (this->field_0x29a == 0) goto L_ea8; */
        /* goto L_eb0; */
        /* L_ea8:; */
        /* field_0x714 = 0; */
        /* L_eb0:; */
        /* return _restgpr_28(((dNpc_JntCtrl_c*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 656)))->lookAtTarget((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518))); */
}

/* 00000FF4-00001024       .text wait01__14daNpc_Sarace_cFv */
void daNpc_Sarace_c::wait01() {
    if (*(unsigned char*)(this + 1833) != 0) {
        *(unsigned char*)(this + 1859) = 2;
    }
}

/* 00001024-000014B8       .text talk01__14daNpc_Sarace_cFv */
void daNpc_Sarace_c::talk01() {
        /* if ((((fopNpc_npc_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->talk(1) & 65535) != 18) goto L_1320; */
        /* field_0x743 = 1; */
        /* if (this->field_0x6a4 != 4004) goto L_108c; */
        /* if (this->field_0xb8 != 0) goto L_1010; */
        /* field_0xc8 = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* __register_global_object(((C_@3569 + 0) + 200), ((char*)&__dt__4cXyzFv + 0), ((C_@3569 + 0) + 172)); */
        /* field_0xc = 0; */
        /* field_0x10 = 0; */
        /* field_0x14 = 0; */
        /* __register_global_object((((C_@3569 + 0) + 200) + 12), ((char*)&__dt__4cXyzFv + 0), ((C_@3569 + 0) + 188)); */
        /* field_0xb8 = 1; */
        /* L_1010:; */
        /* field_0x742 = 3; */
        /* field_0x6d8 = fopAcM_create(463); */
        /* field_0x6dc = fopAcM_create(463); */
        /* goto L_1314; */
        /* L_108c:; */
        /* if (3 != 4016) goto L_12dc; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(10304);
        dComIfGp_setNextStage(((char*)&@stringBase0 + 56), 1, 0, 0, 0, 1, 0);
        /* if (this->field_0x9 == 1) goto L_1244; */
        /* if (this->field_0xa == 1) goto L_1244; */
        /* if (this->field_0xb == 1) goto L_1244; */
        /* field_0xa = 1; */
        /* if (1 == 255) goto L_123c; */
        /* if (1 >= 21) goto L_1120; */
        /* goto L_1184; */
        /* L_1120:; */
        /* if (this->field_0x3d >= 24) goto L_1130; */
        /* goto L_1184; */
        /* L_1130:; */
        /* if (255 >= 32) goto L_1140; */
        /* goto L_1184; */
        /* L_1140:; */
        /* if (this->field_0x5f >= 36) goto L_1150; */
        /* goto L_1184; */
        /* L_1150:; */
        /* if (255 >= 44) goto L_1160; */
        /* goto L_1184; */
        /* L_1160:; */
        /* if (this->field_0x5b >= 48) goto L_1170; */
        /* goto L_1184; */
        /* L_1170:; */
        /* if (255 >= 56) goto L_1180; */
        /* goto L_1184; */
        /* L_1180:; */
        /* L_1184:; */
        /* field_0x5bc8 = 255; */
        /* if (this->field_0xa >= 21) goto L_11a8; */
        /* goto L_1224; */
        /* L_11a8:; */
        /* if (this->field_0xa >= 24) goto L_11b8; */
        /* goto L_1224; */
        /* L_11b8:; */
        /* if (255 >= 32) goto L_11d0; */
        /* goto L_1224; */
        /* L_11d0:; */
        /* if (255 >= 36) goto L_11e0; */
        /* goto L_1224; */
        /* L_11e0:; */
        /* if (255 >= 44) goto L_11f8; */
        /* goto L_1224; */
        /* L_11f8:; */
        /* if (255 >= 48) goto L_1208; */
        /* goto L_1224; */
        /* L_1208:; */
        /* if (255 >= 56) goto L_1220; */
        /* goto L_1224; */
        /* L_1220:; */
        /* L_1224:; */
        /* if ((255 & 16777215) != 255) goto L_1244; */
        /* field_0xa = 255; */
        /* goto L_1244; */
        /* L_123c:; */
        /* field_0x5bc8 = 255; */
        /* L_1244:; */
        /* if (__ptmf_cmpr((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1844)) == 0) goto L_1314; */
        /* if (__ptmf_test((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1844)) == 0) goto L_12a4; */
        /* field_0x746 = -1; */
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* L_12a4:; */
        /* field_0x746 = 0; */
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* goto L_1314; */
        /* L_12dc:; */
        base = 0;
        base = 0;
        /* ((daNpc_Sarace_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm(0); */
        /* L_1314:; */
        /* field_0x729 = 0; */
        /* goto L_13b4; */
        /* L_1320:; */
        /* if (this->field_0x6a4 != 4022) goto L_13b4; */
        /* if (this->field_0x5bdc != 1) goto L_13b4; */
        /* field_0x5b54 = (this->field_0x5b54 + base); */
        /* if (((((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->getEventReg((this->field_0x5b54 + -21761)) & 16777215) + 1) > 12) goto L_1384; */
        /* L_1384:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->setEventReg();
        /* if ((((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->getEventReg((this->field_0x5b54 + -21761)) & 16777215) == (((((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->getEventReg((this->field_0x5b54 + -21761)) & 16777215) + 1) & 16777215)) goto L_13b4; */
        /* L_13b4:; */
        return _restgpr_29(((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(10272));
}

/* 000014B8-000014E0       .text dummy_action__14daNpc_Sarace_cFPv */
void daNpc_Sarace_c::dummy_action(void*) {
    if (this->field_0x746 != 0) {
        /* field_0x743 = 1; */
        /* field_0x746 = (this->field_0x746 + 1); */
    }
    return 1;
}

/* 000014E0-000015BC       .text wait_action__14daNpc_Sarace_cFPv */
void daNpc_Sarace_c::wait_action(void*) {
        /* if (this->field_0x746 != 0) goto L_142c; */
        /* field_0x743 = 1; */
        /* field_0x746 = (this->field_0x746 + 1); */
        /* goto L_14b8; */
        /* L_142c:; */
        /* if ((this->field_0x746 & 255) == -1) goto L_14b8; */
        /* field_0x728 = ((daNpc_Sarace_c*)(this->field_0x746))->chkAttention(); */
        /* if ((this->field_0x743 & 255) == 2) goto L_14a0; */
        /* if (/ * bge * / 1) goto L_14a8; */
        /* if ((this->field_0x743 & 255) >= 1) goto L_1494; */
        /* goto L_14a8; */
        /* L_1494:; */
        wait01();
        /* goto L_14a8; */
        /* L_14a0:; */
        talk01();
        /* L_14a8:; */
        lookBack();
        setAttention();
        /* L_14b8:; */
        return 1;
}

/* 000015BC-0000173C       .text event_endCheck_action__14daNpc_Sarace_cFPv */
void daNpc_Sarace_c::event_endCheck_action(void*) {
        /* if (this->field_0x746 != 0) goto L_1500; */
        /* field_0x746 = (this->field_0x746 + 1); */
        /* goto L_1634; */
        /* L_1500:; */
        /* if ((this->field_0x746 & 255) == -1) goto L_1634; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->endCheckOld(((char*)&@stringBase0 + 42), arg2) == 0) goto L_1634; */
        /* field_0x724 = 4007; */
        /* field_0x742 = 1; */
        /* if (__ptmf_cmpr((this + 1844)) == 0) goto L_15e0; */
        /* if (__ptmf_test((this + 1844)) == 0) goto L_15ac; */
        /* field_0x746 = -1; */
        __ptmf_scall(this, 0);
        /* L_15ac:; */
        /* field_0x746 = 0; */
        __ptmf_scall(this, 0);
        /* L_15e0:; */
        /* if (fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0)) == 0) goto L_1624; */
        /* field_0x475 = 1; */
        /* L_1624:; */
        /* if (fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0)) == 0) goto L_1634; */
        /* field_0x475 = 1; */
        /* L_1634:; */
        return 1;
}

/* 0000173C-000017E0       .text set_mtx__14daNpc_Sarace_cFv */
void daNpc_Sarace_c::set_mtx() {
    /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
    /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x206); */
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x50 + 36));
    /* ((mDoExt_McaMorf*)(this->field_0x330))->calc(); */
    PSMTXCopy((this->field_0x8c + ((this->field_0x298 & 255) * 48)), (this->field_0x50 + 36));
    /* return _restgpr_29(((mDoExt_McaMorf*)(this->field_0x6cc))->calc()); */
}

/* 000017E0-00001938       .text _draw__14daNpc_Sarace_cFv */
BOOL daNpc_Sarace_c::_draw() {
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(0, (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x50, (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
    /* ((mDoExt_btpAnm*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1764)))->entry(this->field_0x4, this->field_0x6f8); */
    /* ((mDoExt_McaMorf*)(this->field_0x330))->entryDL(); */
    /* ((mDoExt_McaMorf*)(this->field_0x6cc))->entryDL(); */
    /* ((J3DMaterialTable*)((this->field_0x4 + 88)))->removeTexNoAnimator(this->field_0x6ec); */
    /* field_0x6d0 = dComIfGd_setShadow(this->field_0x6d0, 1, this->field_0x50); */
    if (this->field_0x6d0 != 0) {
        /* ((dDlst_shadowControl_c*)(((char*)&g_dComIfG_gameInfo + 24416)))->addReal(this->field_0x6d0, this->field_0x50); */
    }
    /* dSnap_RegistFig(130, _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
    return _restgpr_27(1);
}

/* 00001938-00001A68       .text _execute__14daNpc_Sarace_cFv */
BOOL daNpc_Sarace_c::_execute() {
    /* ((dNpc_JntCtrl_c*)((this + 656)))->setParam(this->field_0x12, this->field_0x16, this->field_0x1a, this->field_0x1e, this->field_0x10, this->field_0x14, this->field_0x18); */
    playTexPatternAnm();
    /* ((mDoExt_McaMorf*)(this->field_0x330))->play(0, 0, 0); */
    /* ((mDoExt_McaMorf*)(this->field_0x6cc))->play(0, 0, 0); */
    checkOrder();
    __ptmf_scall(this, 0);
    ((dNpc_EventCut_c*)((this + 708)))->cutProc();
    eventOrder();
    fopAcM_posMoveF(this, (this + 1336));
    ((dBgS_Acch*)((this + 820)))->CrrPos(((char*)&g_dComIfG_gameInfo + 4768));
    /* field_0x1b5 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetRoomId((this + 1052)); */
    /* field_0x1b6 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetPolyColor((this + 1052)); */
    set_mtx();
    setCollision(C_@4373);
    return 1;
}

/* 00001A68-00001AE0       .text _delete__14daNpc_Sarace_cFv */
BOOL daNpc_Sarace_c::_delete() {
    /* dComIfG_resDelete((this + 1732), ((char*)&@stringBase0 + 0), arg2); */
    if (this->field_0x330 != 0) {
        /* ((mDoExt_McaMorf*)(this->field_0x330))->stopZelAnime(); */
    }
    if (this->field_0x4 != 0) {
        /* ((mDoHIO_subRoot_c*)(((char*)&mDoHIO_root + 4)))->deleteChild(this->field_0x4); */
        /* field_0x4 = -1; */
    }
    return 1;
}

/* 00001AE0-00001B00       .text CallbackCreateHeap__FP10fopAc_ac_c */
static BOOL CallbackCreateHeap(fopAc_ac_c* i_this) {
    static_cast<daNpc_Sarace_c*>(i_this)->CreateHeap();
    return TRUE;
}

/* 00001B00-00001D1C       .text _create__14daNpc_Sarace_cFv */
cPhs_State daNpc_Sarace_c::_create() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_1b74; */
        /* if (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_1b68; */
        __ct();
        /* field_0x6c0 = 0; */
        /* field_0x29c = 0; */
        /* field_0x29b = 0; */
        /* field_0x2cc = 0; */
        /* field_0x2d0 = 0; */
        /* field_0x32c = 0; */
        __ct();
        /* field_0x10 = 0; */
        /* field_0x14 = 0; */
        /* field_0x20 = 0; */
        /* field_0x18 = 1; */
        __ct();
        /* field_0x550 = 0; */
        __ct();
        /* field_0x550 = 0; */
        /* field_0x554 = 0; */
        __ct();
        /* field_0x114 = 0; */
        /* field_0x110 = 0; */
        /* field_0x12c = 0; */
        /* field_0x114 = 0; */
        /* field_0x12c = 0; */
        /* field_0x3c = 0; */
        /* field_0x114 = 0; */
        /* field_0x12c = 0; */
        /* field_0x6ac = -1; */
        /* field_0x6b0 = 0; */
        /* field_0x6c0 = 0; */
        /* field_0x6e4 = 0; */
        /* field_0x6e8 = 0; */
        /* field_0x6e4 = 0; */
        /* field_0x6f0 = 0; */
        /* L_1b68:; */
        /* L_1b74:; */
        /* if (dComIfG_resLoad((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1732), ((char*)&@stringBase0 + 0)) != 4) goto L_1c14; */
        /* if (fopAcM_entrySolidHeap(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), ((char*)&CallbackCreateHeap__FP10fopAc_ac_c + 0), 10080) != 0) goto L_1bb4; */
        return 5;
        /* L_1bb4:; */
        cullMtx = (this->field_0x50 + 36);
        /* if (this->field_0x4 != 0) goto L_1bfc; */
        /* field_0x4 = ((mDoHIO_subRoot_c*)(((char*)&mDoHIO_root + 4)))->createChild(((char*)&@stringBase0 + 62), ((char*)&l_HIO + 0)); */
        /* L_1bfc:; */
        /* if (((daNpc_Sarace_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->CreateInit() != 0) goto L_1c14; */
        return 5;
        /* L_1c14:; */
        /* return _restgpr_29(dComIfG_resLoad((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1732), ((char*)&@stringBase0 + 0))); */
}

/* 000020CC-00002498       .text CreateHeap__14daNpc_Sarace_cFv */
void daNpc_Sarace_c::CreateHeap() {
    /* _savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(14);
    if (/* bne */ 1) {
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(14)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 7), 1008, ((char*)&@stringBase0 + 85));
        OSPanic(((char*)&@stringBase0 + 7), 1008, ((char*)&@stringBase0 + 37));
    }
    __nw(180);
    if (/* beq */ 1) {
    }
    /* field_0x330 = __ct(((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(9), 1); */
    if (this->field_0x330 != 0) {
        /* if (this->field_0x50 == 0) goto L_2110; */
    }
    /* field_0x330 = 0; */
    return 0;
    /* L_2110:; */
    /* field_0x298 = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 100)); */
    if (this->field_0x298 != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 100))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 7), 1024, ((char*)&@stringBase0 + 105)); */
        OSPanic(((char*)&@stringBase0 + 7), 1024, ((char*)&@stringBase0 + 37));
    }
    /* field_0x299 = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 132)); */
    if (this->field_0x299 != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 132))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 7), 1026, ((char*)&@stringBase0 + 141)); */
        OSPanic(((char*)&@stringBase0 + 7), 1026, ((char*)&@stringBase0 + 37));
    }
    ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(17);
    if (/* bne */ 1) {
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(17)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 7), 1034, ((char*)&@stringBase0 + 172));
        OSPanic(((char*)&@stringBase0 + 7), 1034, ((char*)&@stringBase0 + 37));
    }
    __nw(180);
    if (/* beq */ 1) {
    }
    /* field_0x6cc = __ct(((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(7), 1, __ct(((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(9), 1), 0, 0, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(7), 2, 0); */
    if (this->field_0x6cc != 0) {
        /* if (this->field_0x50 == 0) goto L_22c0; */
    }
    return 0;
    /* L_22c0:; */
    /* field_0x740 = 0; */
    /* if (((daNpc_Sarace_c*)(_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->initTexPatternAnm(0) == 0) { */
        /* return 0; */
    /* goto L_2338; */
    /* L_22f4:; */
    if ((0 & 65535) != (this->field_0x298 & 255)) {
        /* if ((0 & 65535) == (this->field_0x299 & 255)) goto L_2334; */
    }
    /* field_0x8 = 0; */
    /* L_2334:; */
    /* L_2338:; */
    /* if (((0 + 1) & 65535) >= this->field_0x28) goto L_22f4; */
    /* field_0x14 = _savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* ((dBgS_AcchCir*)((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1272)))->SetWall(((char*)&nodeCallBack__FP7J3DNodei + 0), (0 + 1)); */
    /* ((dBgS_Acch*)((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 820)))->Set((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 484), _savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 1, (_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1272), (_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 544), 0); */
    return _restgpr_26(1);
}

/* 00002498-000024B8       .text daNpc_Sarace_Create__FP10fopAc_ac_c */
static cPhs_State daNpc_Sarace_Create(fopAc_ac_c* i_this) {
    return ((daNpc_Sarace_c*)i_this)->_create();
}

/* 000024B8-000024D8       .text daNpc_Sarace_Delete__FP14daNpc_Sarace_c */
static BOOL daNpc_Sarace_Delete(daNpc_Sarace_c* i_this) {
    return ((daNpc_Sarace_c*)i_this)->_delete();
}

/* 000024D8-000024F8       .text daNpc_Sarace_Execute__FP14daNpc_Sarace_c */
static BOOL daNpc_Sarace_Execute(daNpc_Sarace_c* i_this) {
    return ((daNpc_Sarace_c*)i_this)->_execute();

/* 000024F8-00002518       .text daNpc_Sarace_Draw__FP14daNpc_Sarace_c */
static BOOL daNpc_Sarace_Draw(daNpc_Sarace_c* i_this) {
    return ((daNpc_Sarace_c*)i_this)->_draw();

/* 00002518-00002520       .text daNpc_Sarace_IsDelete__FP14daNpc_Sarace_c */
static BOOL daNpc_Sarace_IsDelete(daNpc_Sarace_c*) {
    return 1;

static actor_method_class l_daNpc_Sarace_Method = {
    (process_method_func)daNpc_Sarace_Create,
    (process_method_func)daNpc_Sarace_Delete,
    (process_method_func)daNpc_Sarace_Execute,
    (process_method_func)daNpc_Sarace_IsDelete,
    (process_method_func)daNpc_Sarace_Draw,
};

actor_process_profile_definition g_profile_NPC_SARACE = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0007,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_NPC_SARACE_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daNpc_Sarace_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_NPC_SARACE_e,
    /* Actor SubMtd */ &l_daNpc_Sarace_Method,
    /* Status       */ fopAcStts_NOCULLEXEC_e | fopAcStts_CULL_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_ACTOR_e,
    /* Cull Type    */ fopAc_CULLBOX_12_e,
};

/* 由 fix_decomp_braces.py 补齐：反编译产物末尾缺 3 个 } */
}}}

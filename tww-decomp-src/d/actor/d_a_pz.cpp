/**
 * d_a_pz.cpp
 * NPC - Princess Zelda
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_pz.h"
#include "d/d_cc_d.h"

const dCcD_SrcCyl daPz_c::m_cyl_src = {
    // dCcD_SrcGObjInf
    {
        /* Flags             */ 0,
        /* SrcObjAt  Type    */ 0,
        /* SrcObjAt  Atp     */ 0,
        /* SrcObjAt  SPrm    */ 0,
        /* SrcObjTg  Type    */ AT_TYPE_ALL & ~AT_TYPE_WATER & ~AT_TYPE_UNK20000 & ~AT_TYPE_WIND & ~AT_TYPE_UNK400000,
        /* SrcObjTg  SPrm    */ cCcD_TgSPrm_Set_e | cCcD_TgSPrm_IsOther_e,
        /* SrcObjCo  SPrm    */ cCcD_CoSPrm_Set_e | cCcD_CoSPrm_VsGrpAll_e,
        /* SrcGObjAt Se      */ 0,
        /* SrcGObjAt HitMark */ dCcG_AtHitMark_None_e,
        /* SrcGObjAt Spl     */ dCcG_At_Spl_UNK0,
        /* SrcGObjAt Mtrl    */ 0,
        /* SrcGObjAt SPrm    */ 0,
        /* SrcGObjTg Se      */ dCcG_SE_UNK23,
        /* SrcGObjTg HitMark */ 0,
        /* SrcGObjTg Spl     */ dCcG_Tg_Spl_UNK0,
        /* SrcGObjTg Mtrl    */ 0,
        /* SrcGObjTg SPrm    */ dCcG_TgSPrm_NoConHit_e | dCcG_TgSPrm_NoHitMark_e,
        /* SrcGObjCo SPrm    */ 0,
    },
    // cM3dGCylS
    {{
        /* Center */ {0.0f, 0.0f, 0.0f},
        /* Radius */ 0.0f,
        /* Height */ 0.0f,
    }},
};


/* 000000EC-00000310       .text __ct__10daPz_HIO_cFv */
daPz_HIO_c::daPz_HIO_c() {
        /* if (/ * beq * / 1) goto L_44; */
        /* field_0x0 = 0; */
        /* if (/ * beq * / 1) goto L_34; */
        /* field_0x0 = 0; */
        /* L_34:; */
        /* if (arg1 != 0) goto L_44; */
        __dl(__vt__14J3DMaterialAnm);
}

/* 00000310-00000340       .text stealItem_CB__FPv */
static void stealItem_CB(void*) {
    if (arg0 != 0) {
        /* field_0x214 = 0; */
        /* field_0x218 = 0; */
        /* field_0x21c = 0; */
    }
    return 1;
}

/* 00000340-0000038C       .text nodeHeadControl_CB__FP7J3DNodei */
static BOOL nodeHeadControl_CB(J3DNode*, int) {
    if (int == 0) {
        /* if (this->field_0x14 != 0) goto L_28c; */
        /* ((daPz_c*)(this->field_0x14))->_nodeHeadControl(arg0, this->field_0x38); */
    }
    /* L_28c:; */
    return 1;
}

/* 0000038C-000004FC       .text _nodeHeadControl__6daPz_cFP7J3DNodeP8J3DModel */
void daPz_c::_nodeHeadControl(J3DNode*, J3DModel*) {
    /* _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    PSMTXCopy();
    if (this->field_0x170 != 0) {
        /* field_0x174 = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* __register_global_object(((C_@3569 + 0) + 372), ((char*)&__dt__4cXyzFv + 0), ((C_@3569 + 0) + 356)); */
        /* field_0x170 = 1; */
    }
    if (this->field_0x18c != 0) {
        /* field_0x190 = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* __register_global_object(((C_@3569 + 0) + 400), ((char*)&__dt__4cXyzFv + 0), ((C_@3569 + 0) + 384)); */
        /* field_0x18c = 1; */
    }
    /* PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0), ((C_@3569 + 0) + 372), (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2232)); */
    /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), ((-this->field_0x292) & 65535)); */
    mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), ((-m_jnt) & 65535));
    /* PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0), ((C_@3569 + 0) + 400), (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2268)); */
    /* field_0x72c = 0; */
    /* field_0x730 = 0; */
    /* field_0x734 = 0; */
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), ((char*)&mCurrentMtx__6J3DSys + 0));
    return _restgpr_27(PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0)));
}

/* 00000538-00000584       .text nodeWaistControl_CB__FP7J3DNodei */
static BOOL nodeWaistControl_CB(J3DNode*, int) {
    if (int == 0) {
        /* if (this->field_0x14 != 0) goto L_484; */
        /* ((daPz_c*)(this->field_0x14))->_nodeWaistControl(arg0, this->field_0x38); */
    }
    /* L_484:; */
    return 1;
}

/* 00000584-00000710       .text _nodeWaistControl__6daPz_cFP7J3DNodeP8J3DModel */
void daPz_c::_nodeWaistControl(J3DNode*, J3DModel*) {
    /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    base = (base + 4096);
    PSMTXCopy();
    if ((m06D3 & 255) != 4) {
        /* if ((m06D3 & 255) != 5) goto L_504; */
        /* if ((m06D3 & 255) == 6) goto L_524; */
    }
    /* L_504:; */
    mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), 3500);
    mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), 1500);
    /* L_524:; */
    if (this->field_0x750 != 0) {
        mDoMtx_XrotM(((char*)&now__14mDoMtx_stack_c + 0), base);
    } else {
        /* mDoMtx_XrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x296); */
        /* mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), ((-this->field_0x294) & 65535)); */
    }
    if ((m06D3 & 255) != 4) {
        /* if ((m06D3 & 255) != 5) goto L_59c; */
        /* if ((m06D3 & 255) == 6) goto L_5bc; */
    }
    /* L_59c:; */
    mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), -1500);
    mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), -3500);
    /* L_5bc:; */
    /* PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 3848)); */
    /* field_0xf38 = 0; */
    /* field_0xf3c = 0; */
    /* field_0xf40 = 0; */
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), ((char*)&mCurrentMtx__6J3DSys + 0));
    return _restgpr_29(PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0)));
}

/* 00000710-0000075C       .text nodeWaist2Control_CB__FP7J3DNodei */
static BOOL nodeWaist2Control_CB(J3DNode*, int) {
    if (int == 0) {
        /* if (this->field_0x14 != 0) goto L_65c; */
        /* ((daPz_c*)(this->field_0x14))->_nodeWaist2Control(arg0, this->field_0x38); */
    }
    /* L_65c:; */
    return 1;
}

/* 0000075C-000007F4       .text _nodeWaist2Control__6daPz_cFP7J3DNodeP8J3DModel */
void daPz_c::_nodeWaist2Control(J3DNode*, J3DModel*) {
    /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    PSMTXCopy();
    /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0xf7a); */
    /* mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0xf78); */
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), ((char*)&mCurrentMtx__6J3DSys + 0));
    return _restgpr_29(PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0)));
}

/* 000007F4-00000840       .text nodeSkirtControl_CB__FP7J3DNodei */
static BOOL nodeSkirtControl_CB(J3DNode*, int) {
    if (int == 0) {
        /* if (this->field_0x14 != 0) goto L_740; */
        /* ((daPz_c*)(this->field_0x14))->_nodeSkirtControl(arg0, this->field_0x38); */
    }
    /* L_740:; */
    return 1;
}

/* 00000840-00000920       .text _nodeSkirtControl__6daPz_cFP7J3DNodeP8J3DModel */
void daPz_c::_nodeSkirtControl(J3DNode*, J3DModel*) {
    /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    PSMTXCopy();
    /* if (this->field_0xf78 > this->field_0xf7a) { */
    /* mDoMtx_XrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x748); */
    /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x74a); */
    /* mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), ((-(this->field_0xf7a + this->field_0x74c)) & 65535)); */
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), ((char*)&mCurrentMtx__6J3DSys + 0));
    return _restgpr_28(PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0)));
}

/* 00000920-00000940       .text createHeap_CB__FP10fopAc_ac_c */
static BOOL createHeap_CB(fopAc_ac_c* i_this) {
    static_cast<daPz_c*>(i_this)->_createHeap();
    return TRUE;
}

/* 00000940-00000D54       .text bodyCreateHeap__6daPz_cFv */
void daPz_c::bodyCreateHeap() {
    /* _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    ((dRes_control_c*)(((char*)&m_arc_name__6daPz_c + 0)))->getRes(24);
    if (/* bne */ 1) {
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&m_arc_name__6daPz_c + 0)))->getRes(24)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 574, ((char*)&@stringBase0 + 11));
        OSPanic(((char*)&@stringBase0 + 0), 574, ((char*)&@stringBase0 + 26));
    }
    /* goto L_900; */
    /* L_8d4:; */
    __nw(128);
    if (/* beq */ 1) {
    }
    /* field_0x3c = __ct(); */
    /* L_900:; */
    /* if (((0 + 1) & 65535) >= this->field_0x5c) goto L_8d4; */
    __nw(180);
    if (/* beq */ 1) {
    }
    mpMorf = __ct(__nw(180), 1);
    if (mpMorf != 0) {
        /* if (this->field_0x50 == 0) goto L_99c; */
    }
    return 0;
    /* L_99c:; */
    /* field_0x14 = _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* if (((mDoExt_invisibleModel*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1912)))->create(this->field_0x50) == 0) { */
        /* return 0; */
    /* field_0x298 = 4; */
    /* field_0x8 = 0; */
    /* field_0x299 = 1; */
    /* field_0x8 = 0; */
    /* field_0x8 = 0; */
    /* field_0x8 = 0; */
    ((dRes_control_c*)(((char*)&m_arc_name__6daPz_c + 0)))->getRes(39);
    if (/* bne */ 1) {
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&m_arc_name__6daPz_c + 0)))->getRes(39)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 631, ((char*)&@stringBase0 + 31));
        OSPanic(((char*)&@stringBase0 + 0), 631, ((char*)&@stringBase0 + 26));
    }
    /* if (((mDoExt_btpAnm*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 4028)))->init() == 0) { */
        /* return 0; */
    ((dRes_control_c*)(((char*)&m_arc_name__6daPz_c + 0)))->getRes(31);
    if (/* bne */ 1) {
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&m_arc_name__6daPz_c + 0)))->getRes(31)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 637, ((char*)&@stringBase0 + 40));
        OSPanic(((char*)&@stringBase0 + 0), 637, ((char*)&@stringBase0 + 26));
    }
    /* if (((mDoExt_btkAnm*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 4008)))->init() == 0) { */
        /* return 0; */
    /* goto L_bac; */
    /* L_b68:; */
    /* L_bac:; */
    /* if (((0 + 1) & 65535) >= (3 & 65535)) goto L_b68; */
    ((dRes_control_c*)(((char*)&m_arc_name__6daPz_c + 0)))->getRes(27);
    if (/* bne */ 1) {
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&m_arc_name__6daPz_c + 0)))->getRes(27)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 654, ((char*)&@stringBase0 + 49));
        OSPanic(((char*)&@stringBase0 + 0), 654, ((char*)&@stringBase0 + 26));
    }
    /* if (((mDoExt_brkAnm*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 3984)))->init() == 0) { */
        /* return 0; */
    return _restgpr_27(1);


/* 00000D54-00000E74       .text bowCreateHeap__6daPz_cFv */
void daPz_c::bowCreateHeap() {
    /* ((dRes_control_c*)(((char*)&m_arc_name__6daPz_c + 0)))->getRes(23, ((char*)&g_dComIfG_gameInfo + -16460), 64, arg4, arg5); */
    if (/* bne */ 1) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&m_arc_name__6daPz_c + 0)))->getRes(23, ((char*)&g_dComIfG_gameInfo + -16460), 64, arg4, arg5)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 671, ((char*)&@stringBase0 + 11)); */
        OSPanic(((char*)&@stringBase0 + 0), 671, ((char*)&@stringBase0 + 26));
    }
    __nw(180);
    if (/* beq */ 1) {
    }
    mpBowMcaMorf = __ct(__nw(180), 1);
    if (mpBowMcaMorf != 0) {
        /* if (this->field_0x50 == 0) goto L_d68; */
    }
    return 0;
    /* L_d68:; */
    /* field_0x14 = this; */
    return 1;
}

/* 00000E74-00000EC0       .text _createHeap__6daPz_cFv */
void daPz_c::_createHeap() {
    if (bodyCreateHeap() == 0) {
        return 0;
    }
    return bowCreateHeap();
}

/* 00000EC0-00000F20       .text __ct__13daPz_matAnm_cFv */
daPz_matAnm_c::daPz_matAnm_c() {
    /* field_0x0 = 0; */
    ((J3DMaterialAnm*)(arg0))->initialize();
    /* field_0x0 = 0; */
    /* field_0x7c = 0; */
    /* field_0x6c = 0; */
    /* field_0x70 = 0; */
    return arg0;
}

/* 00000F20-00000FB4       .text calc__13daPz_matAnm_cCFP11J3DMaterial */
void daPz_matAnm_c::calc(J3DMaterial*) const {
    /* ((J3DMaterialAnm*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->calc(); */
    /* L_e5c:; */
    if ((0 + 12) != 0) {
        /* if (this->field_0x7c != 0) goto L_ea0; */
        /* field_0x1c = 0; */
        /* field_0x20 = 0; */
    }
    /* L_ea0:; */
    /* if ((0 + 1) >= 8) goto L_e5c; */
    return _restgpr_28(this->field_0x28, 0);
}

/* 00000FB4-00001038       .text getGndPos__6daPz_cFv */
void daPz_c::getGndPos() {
    mbHasGanondorf = 0;
    if (fopAcM_SearchByName(248) != 0) {
        mGanondorfPos4 = 0;
        /* field_0xf5c = 0; */
        /* field_0xf60 = 0; */
        mGanondorfPosCurrent = 0;
        /* field_0xf50 = 0; */
        /* field_0xf54 = 0; */
        mbHasGanondorf = 1;
    }
}

/* 00001038-0000114C       .text checkEyeArea__6daPz_cFR4cXyz */
void daPz_c::checkEyeArea(cXyz&) {
    /* cLib_distanceAngleS(this->field_0x20e, cLib_targetAngleY((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504))); */
    __mi();
    PSVECSquareMag();
    if (/* ble */ 1) {
    }
    /* if (cLib_distanceAngleS(this->field_0x20e, cLib_targetAngleY((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504))) < this->field_0x54) { */
        /* if (this->field_0x8 > this->field_0x58) goto L_1044; */
        /* return 1; */
    /* L_1044:; */
    return _restgpr_28(0);
}

/* 0000114C-00001194       .text getMsg__6daPz_cFv */
u32 daPz_c::getMsg() {
        /* if (m08B0 != 0) goto L_1078; */
        /* goto L_10a0; */
        /* L_1078:; */
        /* if (m08B0 != 2) goto L_10a0; */
        /* if (m0F65 != 0) goto L_109c; */
        m0F65 = 1;
        /* goto L_10a0; */
        /* L_109c:; */
        /* L_10a0:; */
        return 13669;
}

/* 00001194-00001208       .text next_msgStatus__6daPz_cFPUl */
u16 daPz_c::next_msgStatus(u32*) {
    if (/* beq */ 1) {
    } else {
        base = 13668;
        /* goto L_110c; */
    }
    if (13668 == 13668) {
        /* if (fopAcM_SearchByName(248) != 0) goto L_1108; */
        /* if (stealItemBitNo == 0) goto L_1108; */
        stealItemBitNo = 35;
    }
    /* L_1108:; */
    /* L_110c:; */
    return 16;
}

/* 00001208-00001288       .text anmAtr__6daPz_cFUs */
void daPz_c::anmAtr(u16 i_msgStatus) {
        /* if ((i_msgStatus & 65535) == 14) goto L_1184; */
        /* if (/ * bge * / 1) goto L_118c; */
        /* if ((i_msgStatus & 65535) == 6) goto L_1144; */
        /* goto L_118c; */
        /* L_1144:; */
        /* if (this->field_0x6cc != 0) goto L_118c; */
        /* field_0x6cc = 1; */
        /* setAnm((1 & 255), 0, 15, arg4, arg5, arg6, arg7); */
        /* goto L_118c; */
        /* L_1184:; */
        /* field_0x6cc = 0; */
        /* L_118c:; */
        /* return setAnm((1 & 255), 0, 15, arg4, arg5, arg6, arg7); */
}

/* 00001288-000012D4       .text eventOrder__6daPz_cFv */
void daPz_c::eventOrder() {
    if (m0F82 != 1) {
        /* if (m0F82 == 2) goto L_11d8; */
    }
    if (m0F82 == 1) {
    }
    /* L_11d8:; */
    return fopAcM_orderSpeakEvent(this);
}

/* 000012D4-00001338       .text checkOrder__6daPz_cFv */
void daPz_c::checkOrder() {
        /* if (this->field_0xf8 != 2) goto L_120c; */
        m0F82 = 0;
        /* goto L_123c; */
        /* L_120c:; */
        /* if (0 != 1) goto L_123c; */
        /* if (m0F82 == 1) goto L_1228; */
        /* if (m0F82 != 2) goto L_123c; */
        /* L_1228:; */
        m0F82 = 0;
        /* L_123c:; */
        return modeProc(0);
}

/* 00001338-0000151C       .text setFallSplash__6daPz_cFv */
void daPz_c::setFallSplash() {
        ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(2, (this + 504), (this + 1920));
        /* field_0x71c = 0; */
        /* field_0x720 = 0; */
        /* field_0x724 = 0; */
        /* field_0x720 = (this->field_0x720 + this->field_0xd4); */
        /* if (/ * beq * / 1) goto L_1408; */
        /* if (((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetAttributeCode((this + 1052)) != 23) goto L_1368; */
        /* if (this->field_0x6f8 != 0) goto L_137c; */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0, 35, (this + 1820), (this + 524), 0, 255, (this + 1780)); */
        /* if (this->field_0x6f8 == 0) goto L_137c; */
        /* field_0x38 = 0; */
        /* field_0x5c = 0; */
        /* goto L_137c; */
        /* L_1368:; */
        /* L_137c:; */
        /* if (cLib_calcTimer<i>__FPi((this + 1832), this->field_0x804, this->field_0x6f8) != 0) goto L_141c; */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(5, 63); */
        /* field_0x728 = 15; */
        /* goto L_141c; */
        /* L_1408:; */
        /* L_141c:; */
        return (this + 1780);
}

/* 0000151C-000015F4       .text setHeadSplash__6daPz_cFv */
void daPz_c::setHeadSplash() {
    ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(2, (this + 504), (this + 1920));
    if (this->field_0x70c == 0) {
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
    }
    if (this->field_0x70c != 0) {
    }
    return JPASetRMtxTVecfromMtx((this->field_0x8c + 192), (this->field_0x70c + 424), (this->field_0x70c + 484));
}

/* 000015F4-00001704       .text setRipple__6daPz_cFv */
void daPz_c::setRipple() {
        /* if (/ * beq * / 1) goto L_1600; */
        /* if (((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetAttributeCode((this + 1052)) != 19) goto L_15f8; */
        /* if (this->field_0x6e4 != 0) goto L_1600; */
        /* if (this->field_0x1ac != 0) goto L_1598; */
        /* field_0x1b0 = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* __register_global_object(((C_@3569 + 0) + 432), ((char*)&__dt__4cXyzFv + 0), ((C_@3569 + 0) + 416)); */
        /* field_0x1ac = 1; */
        /* L_1598:; */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(5, 51, (this + 504), 0, ((C_@3569 + 0) + 432), 255, (this + 1760)); */
        /* if (this->field_0x6e4 == 0) goto L_1600; */
        /* field_0x6f0 = 0; */
        /* goto L_1600; */
        /* L_15f8:; */
        /* L_1600:; */
        return ((dPa_rippleEcallBack*)((this + 1760)))->end();
}

/* 00001704-0000175C       .text setJntStatus__6daPz_cFv */
void daPz_c::setJntStatus() {
    /* return ((dNpc_JntCtrl_c*)((this + 656)))->setParam(this->field_0xe, this->field_0x12, this->field_0x16, this->field_0x1a, this->field_0xc, this->field_0x10, this->field_0x14); */
}

/* 0000175C-00001954       .text demo__6daPz_cFv */
void daPz_c::demo() {
        /* if (demoActorID != 0) goto L_16ac; */
        /* if (m0F66 == 0) goto L_184c; */
        m0F66 = 0;
        /* goto L_184c; */
        /* L_16ac:; */
        m0F66 = 1;
        ((dDemo_object_c*)((this->field_0x5abc + 32)))->getActor(demoActorID);
        /* if (/ * beq * / 1) goto L_16f4; */
        /* field_0x7c = 0; */
        /* L_16f4:; */
        /* if (this->field_0xfc4 == 0) goto L_172c; */
        /* field_0xf67 = (this->field_0xf67 + 1); */
        /* if (this->field_0xf67 < (this->field_0x6 & 16777215)) goto L_172c; */
        /* field_0xf67 = (this->field_0x6 & 16777215); */
        /* L_172c:; */
        ((dDemo_actor_c*)(((dDemo_object_c*)((this->field_0x5abc + 32)))->getActor(demoActorID)))->getP_BtpData(((char*)&m_arc_name__6daPz_c + 0));
        /* if (/ * beq * / 1) goto L_1784; */
        /* ((mDoExt_btpAnm*)((this + 4028)))->init(this->field_0x4); */
        /* field_0xf67 = 0; */
        /* L_1784:; */
        ((dDemo_actor_c*)(((dDemo_object_c*)((this->field_0x5abc + 32)))->getActor(demoActorID)))->getP_BtkData(((char*)&m_arc_name__6daPz_c + 0));
        /* if (/ * beq * / 1) goto L_17d4; */
        /* ((mDoExt_btkAnm*)((this + 4008)))->init(this->field_0x4); */
        /* L_17d4:; */
        ((dDemo_actor_c*)(((dDemo_object_c*)((this->field_0x5abc + 32)))->getActor(demoActorID)))->getP_BrkData(((char*)&m_arc_name__6daPz_c + 0));
        /* if (/ * beq * / 1) goto L_1824; */
        /* ((mDoExt_brkAnm*)((this + 3984)))->init(this->field_0x4); */
        /* L_1824:; */
        dDemo_setDemoData(this, 106, mpMorf, ((char*)&m_arc_name__6daPz_c + 0), 0, 0, 0, 0);
        /* L_184c:; */
        return m0F66;
}

/* 00001954-00001EEC       .text checkTgHit__6daPz_cFv */
void daPz_c::checkTgHit() {
        /* ((dCcD_GStts*)((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1364)))->Move(); */
        /* if (cLib_calcTimer<Uc>__FPUc((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1744)) != 0) goto L_1de0; */
        /* if (this->field_0x590 == 0) goto L_1de0; */
        /* if (((dCcD_GObjInf*)((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1396)))->GetTgHitObj() != 0) goto L_18e4; */
        return 0;
        /* L_18e4:; */
        /* if (this->field_0x10 == 0) goto L_1a44; */
        /* if (/ * bge * / 1) goto L_195c; */
        /* if (this->field_0x10 == 1024) goto L_19dc; */
        /* if (/ * bge * / 1) goto L_1934; */
        /* if (this->field_0x10 == 64) goto L_1a2c; */
        /* if (/ * bge * / 1) goto L_1928; */
        /* if (this->field_0x10 == 32) goto L_1a64; */
        /* if (/ * bge * / 1) goto L_1a88; */
        /* if (this->field_0x10 == 2) goto L_19dc; */
        /* goto L_1a88; */
        /* L_1928:; */
        /* if (this->field_0x10 == 128) goto L_1a2c; */
        /* goto L_1a88; */
        /* L_1934:; */
        /* if (this->field_0x10 == 16384) goto L_1a70; */
        /* if (/ * bge * / 1) goto L_194c; */
        /* if (this->field_0x10 == 2048) goto L_19dc; */
        /* goto L_1a88; */
        /* L_194c:; */
        /* if (this->field_0x10 == (0 + -32768)) goto L_1a38; */
        /* goto L_1a88; */
        /* L_195c:; */
        /* if (this->field_0x10 == (0 + -32768)) goto L_1a44; */
        /* if (/ * bge * / 1) goto L_19ac; */
        /* if (this->field_0x10 == (0 + -32768)) goto L_1a70; */
        /* if (/ * bge * / 1) goto L_199c; */
        /* if (this->field_0x10 == (0 + -32768)) goto L_1a70; */
        /* if (/ * bge * / 1) goto L_1a88; */
        /* if (this->field_0x10 == (0 + -32768)) goto L_1a70; */
        /* goto L_1a88; */
        /* L_199c:; */
        /* if (this->field_0x10 == (0 + -32768)) goto L_1a1c; */
        /* goto L_1a88; */
        /* L_19ac:; */
        /* if (this->field_0x10 == (0 + -32768)) goto L_1a7c; */
        /* if (/ * bge * / 1) goto L_19cc; */
        /* if (this->field_0x10 == (0 + -32768)) goto L_19dc; */
        /* goto L_1a88; */
        /* L_19cc:; */
        /* if (this->field_0x10 == (0 + -32768)) goto L_19dc; */
        /* goto L_1a88; */
        /* L_19dc:; */
        /* if ((m_jnt + -5) > 22) goto L_1a10; */
        /* field_0x6d1 = 1; */
        /* goto L_1a88; */
        /* L_1a10:; */
        /* field_0x6d1 = 0; */
        /* goto L_1a88; */
        /* L_1a1c:; */
        /* field_0x6d1 = 3; */
        /* goto L_1a88; */
        /* L_1a2c:; */
        /* field_0x6d1 = 4; */
        /* goto L_1a88; */
        /* L_1a38:; */
        /* field_0x6d1 = 12; */
        /* goto L_1a88; */
        /* L_1a44:; */
        /* field_0x6d1 = 7; */
        /* if (m_jnt != 17) goto L_1a88; */
        /* field_0x6d1 = 8; */
        /* goto L_1a88; */
        /* L_1a64:; */
        /* field_0x6d1 = 6; */
        /* goto L_1a88; */
        /* L_1a70:; */
        /* field_0x6d1 = 5; */
        /* goto L_1a88; */
        /* L_1a7c:; */
        /* field_0x6d1 = 14; */
        /* L_1a88:; */
        /* ((dCcD_GAtTgCoCommonBase*)((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1544)))->GetAc(); */
        /* if (this->field_0x8 != 478) goto L_1ad0; */
        /* if (this->field_0x664 == 0) goto L_1abc; */
        /* field_0x6d1 = 5; */
        /* goto L_1ad0; */
        /* L_1abc:; */
        /* if (m_jnt == 0) goto L_1ad0; */
        return 0;
        /* L_1ad0:; */
        /* if (0 == 0) goto L_1d30; */
        /* field_0xf6c = fopAcM_searchActorAngleY(_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), ((dCcD_GAtTgCoCommonBase*)((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1544)))->GetAc()); */
        /* def_se_set(_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), ((dCcD_GObjInf*)((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1396)))->GetTgHitObj(), 65); */
        dKy_SordFlush_set();
        /* if (this->field_0x6d1 == 1) goto L_1b50; */
        /* if (this->field_0x6d1 == 7) goto L_1b50; */
        /* if (this->field_0x6d1 != 8) goto L_1b5c; */
        /* L_1b50:; */
        /* field_0xf68 = 0; */
        /* goto L_1b64; */
        /* L_1b5c:; */
        /* field_0xf68 = 0; */
        /* L_1b64:; */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0, 12, ((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1544) + 56), (this->field_0x5b38 + 524), 0, 255, 0); */
        /* ((daPz_c*)(_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->modeProc(0); */
        /* if (this->field_0x8 != 248) goto L_1c78; */
        /* field_0x744 = 0; */
        /* field_0x754 = 0; */
        /* field_0x75c = 0; */
        /* field_0x760 = (this->field_0x760 + 1); */
        /* if (this->field_0x760 <= this->field_0xe2) goto L_1c20; */
        /* field_0x760 = 0; */
        /* field_0x768 = 1; */
        /* L_1c20:; */
        cM_rndF(((char*)&l_HIO + 0));
        /* if (/ * bge * / 1) goto L_1d14; */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_1c68; */
        /* goto L_1c6c; */
        /* L_1c68:; */
        /* L_1c6c:; */
        /* ((JAIZelBasic*)(base))->monsSeStart(18784, (_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* goto L_1d14; */
        /* L_1c78:; */
        /* field_0x744 = 1; */
        /* field_0x760 = 0; */
        /* field_0x768 = 0; */
        /* field_0x754 = (this->field_0x754 + 1); */
        /* if (this->field_0x754 <= this->field_0xe6) goto L_1cc0; */
        /* field_0x754 = 0; */
        /* field_0x75c = 1; */
        /* L_1cc0:; */
        cM_rndF(((char*)&l_HIO + 0));
        /* if (/ * bge * / 1) goto L_1d14; */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_1d08; */
        /* goto L_1d0c; */
        /* L_1d08:; */
        /* L_1d0c:; */
        /* ((JAIZelBasic*)(base))->monsSeStart(18784, (_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* L_1d14:; */
        /* field_0x748 = 0; */
        /* field_0x74c = 0; */
        /* field_0x750 = 0; */
        /* goto L_1dd8; */
        /* L_1d30:; */
        /* if (this->field_0x6d1 != 14) goto L_1dd8; */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_1d70; */
        /* goto L_1d74; */
        /* L_1d70:; */
        /* L_1d74:; */
        /* ((JAIZelBasic*)(base))->monsSeStart(18784, (_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* if (this->field_0x2 > 12) goto L_1d98; */
        /* L_1d98:; */
        /* fopAcM_fastCreateItem((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), 30, (this->field_0x20a & 255), (_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 524), 0, -1, ((char*)&stealItem_CB__FPv + 0)); */
        /* ((daPz_c*)(_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->modeProc(0); */
        /* L_1dd8:; */
        return 1;
        /* L_1de0:; */
        return _restgpr_26(0);
}

/* 00001EEC-00001F10       .text getArg__6daPz_cFv */
void daPz_c::getArg() {
    mArg = 0;
    return this;
}

/* 00001F10-000020B8       .text setAttention__6daPz_cFv */
void daPz_c::setAttention() {
        /* field_0x274 = 0; */
        /* field_0x278 = 0; */
        /* field_0x27c = 0; */
        /* field_0x278 = (this->field_0x278 + this->field_0x40); */
        eyePos = 0;
        /* field_0x264 = 0; */
        /* field_0x268 = 0; */
        __mi();
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_1f1c; */
        /* L_1f1c:; */
        cLib_distanceAngleS(this->field_0x20e, cLib_targetAngleY((this + 2268), (this + 2244)));
        /* if (this->field_0x29a == 0) goto L_1f64; */
        /* if (this->field_0x326 == 0) goto L_1f54; */
        /* goto L_1f68; */
        /* L_1f54:; */
        /* goto L_1f68; */
        /* L_1f64:; */
        /* L_1f68:; */
        cLib_addCalcAngleS2((this + 2280), 0, 4, 2048);
        return ((dNpc_JntCtrl_c*)((this + 656)))->lookAtTarget((this + 526), (this + 2244));
}

/* 000020B8-00002114       .text setBowAnm__6daPz_cFScb */
void daPz_c::setBowAnm(signed char, bool) {
    if ((char & 255) != 5) {
        /* field_0x6de = char; */
    }
    return dLib_bcks_setAnm(((char*)&m_heapsize__6daPz_c + 4));
}

/* 00002114-00002184       .text setBowString__6daPz_cFb */
void daPz_c::setBowString(bool) {
        /* if (bool == 0) goto L_2070; */
        /* return this->field_0x8; */
}

/* 00002184-0000246C       .text setAnm__6daPz_cFScbi */
void daPz_c::setAnm(signed char, bool, int) {
        /* _savegpr_28(this, char, bool, int, arg4, arg5, arg6, arg7); */
        /* if (/ * beq * / 1) goto L_20cc; */
        /* L_20cc:; */
        /* if ((m06D4 & 255) == (m06D3 & 255)) goto L_2340; */
        /* if ((m06D3 & 255) != 4) goto L_21bc; */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_28(this, char, bool, int, arg4, arg5, arg6, arg7) == 0) goto L_215c; */
        /* goto L_2160; */
        /* L_215c:; */
        /* L_2160:; */
        /* ((JAIZelBasic*)(base))->monsSeStart(18782, (_savegpr_28(this, char, bool, int, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* ((daPz_c*)(_savegpr_28(this, char, bool, int, arg4, arg5, arg6, arg7)))->setBowAnm(2, 0); */
        /* if (_savegpr_28(this, char, bool, int, arg4, arg5, arg6, arg7) == 0) goto L_2198; */
        /* goto L_219c; */
        /* L_2198:; */
        /* L_219c:; */
        /* m08B4 = fopAcM_createChild(478, -1, 0, (_savegpr_28(this, char, bool, int, arg4, arg5, arg6, arg7) + 504), (this->field_0x20a & 255), 0, 0, -1); */
        /* L_21bc:; */
        /* if (m06D3 != 5) goto L_21d8; */
        /* ((daPz_c*)(_savegpr_28(this, char, bool, int, arg4, arg5, arg6, arg7)))->setBowAnm(3, 1); */
        /* L_21d8:; */
        /* if (m06D3 != 6) goto L_2254; */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_28(this, char, bool, int, arg4, arg5, arg6, arg7) == 0) goto L_2218; */
        /* goto L_221c; */
        /* L_2218:; */
        /* L_221c:; */
        /* ((JAIZelBasic*)(base))->monsSeStart(18783, (_savegpr_28(this, char, bool, int, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* ((daPz_c*)(_savegpr_28(this, char, bool, int, arg4, arg5, arg6, arg7)))->setBowAnm(4, 1); */
        /* if (fopAcM_SearchByID(m08B4) == 0) goto L_2254; */
        /* field_0xb0 = 1; */
        /* L_2254:; */
        /* if ((m06D3 & 255) == 4) goto L_228c; */
        /* if ((m06D3 & 255) == 5) goto L_228c; */
        /* if (fopAcM_SearchByID(m08B4) == 0) goto L_228c; */
        /* field_0xb0 = 1; */
        /* L_228c:; */
        /* if (m06D3 != 9) goto L_22a4; */
        /* ((daPz_c*)(_savegpr_28(this, char, bool, int, arg4, arg5, arg6, arg7)))->setHeadSplash(); */
        /* goto L_22b8; */
        /* L_22a4:; */
        /* L_22b8:; */
        /* if ((m06D3 & 255) == 4) goto L_22d8; */
        /* if ((m06D3 & 255) == 5) goto L_22d8; */
        /* if ((m06D3 & 255) != 6) goto L_22e8; */
        /* L_22d8:; */
        /* ((daPz_c*)(_savegpr_28(this, char, bool, int, arg4, arg5, arg6, arg7)))->setBowString(1); */
        /* goto L_2304; */
        /* L_22e8:; */
        /* ((daPz_c*)(_savegpr_28(this, char, bool, int, arg4, arg5, arg6, arg7)))->setBowAnm(1, 1); */
        /* ((daPz_c*)(_savegpr_28(this, char, bool, int, arg4, arg5, arg6, arg7)))->setBowString(0); */
        /* L_2304:; */
        /* if (/ * bne * / 1) goto L_232c; */
        /* ((daPz_c*)(_savegpr_28(this, char, bool, int, arg4, arg5, arg6, arg7)))->setEyeAnm(((m06D3 & 255) & 255)); */
        /* goto L_2340; */
        /* L_232c:; */
        /* ((daPz_c*)(_savegpr_28(this, char, bool, int, arg4, arg5, arg6, arg7)))->setEyeAnm(((m06D3 & 255) & 255)); */
        /* L_2340:; */
        /* return _restgpr_28(dLib_bcks_setAnm(((char*)&m_heapsize__6daPz_c + 4), mpMorf, (_savegpr_28(this, char, bool, int, arg4, arg5, arg6, arg7) + 1746), (_savegpr_28(this, char, bool, int, arg4, arg5, arg6, arg7) + 1747), (_savegpr_28(this, char, bool, int, arg4, arg5, arg6, arg7) + 1748), ((char*)&m_heapsize__6daPz_c + 320))); */
}

/* 0000246C-00002684       .text setAnmRunSpeed__6daPz_cFv */
void daPz_c::setAnmRunSpeed() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (m06D3 != 3) goto L_257c; */
        __mi();
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_242c; */
        /* L_242c:; */
        /* if ((this->field_0x8 / (this->field_0x78 + this->field_0x6e4)) != this->field_0x80) goto L_245c; */
        /* goto L_2470; */
        /* L_245c:; */
        /* if (this->field_0x80 != this->field_0xac) goto L_2470; */
        /* L_2470:; */
        /* if ((this->field_0xac * this->field_0x44) >= this->field_0x4c) goto L_248c; */
        /* goto L_2490; */
        /* L_248c:; */
        /* L_2490:; */
        /* if ((this->field_0xac * this->field_0x44) <= this->field_0x48) goto L_24a4; */
        /* goto L_24a8; */
        /* L_24a4:; */
        /* L_24a8:; */
        /* field_0x64 = (this->field_0xac * this->field_0x44); */
        /* if (/ * beq * / 1) goto L_24d4; */
        /* if (/ * bne * / 1) goto L_257c; */
        /* L_24d4:; */
        /* if (setID != 0) goto L_24fc; */
        demoActorID = 0;
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        setID = 1;
        /* L_24fc:; */
        /* if (((dPa_control_c*)(this->field_0x5ab8))->setSimpleLand((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1052), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 524), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)) == 0) goto L_257c; */
        /* field_0x38 = 0; */
        /* field_0x5c = 0; */
        /* field_0x1d8 = 0; */
        /* field_0x1dc = 0; */
        /* field_0x1e0 = 0; */
        /* field_0x1f0 = 0; */
        /* field_0x1f4 = 0; */
        current = 0;
        /* L_257c:; */
        /* return _restgpr_29(((dPa_control_c*)(this->field_0x5ab8))->setSimpleLand((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1052), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 524), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)), ((C_@3569 + 0) + 448)); */
}

/* 00002684-0000274C       .text setEyeBtp__6daPz_cFi */
void daPz_c::setEyeBtp(int) {
    /* _savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
    ((dRes_control_c*)(((char*)&m_arc_name__6daPz_c + 0)))->getRes();
    if (/* bne */ 1) {
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&m_arc_name__6daPz_c + 0)))->getRes()))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 1667, ((char*)&@stringBase0 + 31));
        OSPanic(((char*)&@stringBase0 + 0), 1667, ((char*)&@stringBase0 + 26));
    }
    /* field_0xf67 = 0; */
    /* return _restgpr_29(((mDoExt_btpAnm*)((_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7) + 4028)))->init(this->field_0x4)); */
}

/* 0000274C-00002810       .text setEyeBtk__6daPz_cFi */
void daPz_c::setEyeBtk(int) {
    /* _savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
    ((dRes_control_c*)(((char*)&m_arc_name__6daPz_c + 0)))->getRes();
    if (/* bne */ 1) {
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&m_arc_name__6daPz_c + 0)))->getRes()))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 1681, ((char*)&@stringBase0 + 40));
        OSPanic(((char*)&@stringBase0 + 0), 1681, ((char*)&@stringBase0 + 26));
    }
    /* return _restgpr_29(((mDoExt_btkAnm*)((_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7) + 4008)))->init(this->field_0x4)); */
}

/* 00002810-00002888       .text setEyeAnm__6daPz_cFSc */
void daPz_c::setEyeAnm(signed char) {
    /* _savegpr_29(this, char, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (((char*)&a_eye_tbl$5280 + 0) != -1) {
        /* ((daPz_c*)(_savegpr_29(this, char, arg2, arg3, arg4, arg5, arg6, arg7)))->setEyeBtp(((char*)&a_eye_tbl$5280 + 0)); */
    }
    if (this->field_0x4 != -1) {
    }
    /* return _restgpr_29(((daPz_c*)(_savegpr_29(this, char, arg2, arg3, arg4, arg5, arg6, arg7)))->setEyeBtk(this->field_0x4)); */
}

/* 00002888-00002AE0       .text ctrlEye__6daPz_cFv */
void daPz_c::ctrlEye() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        m08D0 = 0;
        /* field_0x8d4 = 0; */
        /* field_0x8d8 = 0; */
        /* cLib_targetAngleX((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2268), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2256)); */
        /* cLib_targetAngleY((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2268), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2256)); */
        /* if (/ * bne * / 1) goto L_28a0; */
        /* if (/ * bne * / 1) goto L_28a0; */
        /* L_28a0:; */
        /* field_0x6dc = ((1 & 16777215) + -1); */
        /* if (/ * bne * / 1) goto L_28d8; */
        /* if (/ * bne * / 1) goto L_28d8; */
        /* L_28d8:; */
        /* field_0x6dc = ((1 & 16777215) + -1); */
        /* if (/ * bge * / 1) goto L_28f8; */
        /* goto L_290c; */
        /* L_28f8:; */
        /* if (/ * ble * / 1) goto L_2908; */
        /* goto L_290c; */
        /* L_2908:; */
        /* L_290c:; */
        /* if (/ * bge * / 1) goto L_291c; */
        /* goto L_2930; */
        /* L_291c:; */
        /* if (/ * ble * / 1) goto L_292c; */
        /* goto L_2930; */
        /* L_292c:; */
        /* L_2930:; */
        /* if (mMode != 3) goto L_2940; */
        /* L_2940:; */
        /* if (m08A8 == 0) goto L_2980; */
        /* cLib_addCalc((m08A8 + 108), (((this->field_0x20e + (this->field_0x292 + this->field_0x296)) & 65535) - cLib_targetAngleY((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2268), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2256))), this->field_0x20e); */
        cLib_addCalc((m08A8 + 112));
        /* L_2980:; */
        /* if (m08AC == 0) goto L_29c8; */
        cLib_addCalc((m08AC + 108));
        /* L_29c8:; */
        return _restgpr_29(cLib_addCalc((m08AC + 112)));
}

/* 00002AE0-00002D38       .text playEyeAnm__6daPz_cFv */
void daPz_c::playEyeAnm() {
        /* if (mCurEye == 0) goto L_2a24; */
        /* if ((mCurEye & 255) != 7) goto L_2ac4; */
        /* L_2a24:; */
        /* if (cLib_calcTimer<i>__FPi((this + 1752), arg1, arg2, arg3, arg4, arg5, arg6, arg7) != 0) goto L_2bac; */
        /* field_0xf67 = (this->field_0xf67 + 1); */
        /* if (/ * ble * / 1) goto L_2bac; */
        cM_rndF(C_@4146);
        /* field_0x6d8 = 0; */
        /* field_0xf67 = 0; */
        /* goto L_2bac; */
        /* L_2ac4:; */
        /* if (0 == 1) goto L_2ae4; */
        /* if (0 == 2) goto L_2ae4; */
        /* if (0 == 5) goto L_2ae4; */
        /* if (0 != 6) goto L_2af0; */
        /* L_2ae4:; */
        /* field_0xf67 = 1; */
        /* goto L_2bac; */
        /* L_2af0:; */
        /* field_0xf67 = (this->field_0xf67 + 1); */
        /* if (/ * ble * / 1) goto L_2bac; */
        cM_rndF(C_@4146);
        /* field_0x6d8 = 0; */
        /* L_2bac:; */
        /* if (mCurEye != 4) goto L_2bbc; */
        /* L_2bbc:; */
        /* if (0 == 0) goto L_2bfc; */
        /* if (/ * beq * / 1) goto L_2be8; */
        /* field_0x7c = 1; */
        /* L_2be8:; */
        ctrlEye();
        /* goto L_2c30; */
        /* L_2bfc:; */
        /* if (/ * beq * / 1) goto L_2c20; */
        /* field_0x7c = 0; */
        /* L_2c20:; */
        /* L_2c30:; */
        return ((mDoExt_baseAnm*)((this + 4008)))->play();
}

/* 00002D38-00002DC8       .text setMtx__6daPz_cFv */
void daPz_c::setMtx() {
    /* field_0x18 = 0; */
    /* field_0x1c = 0; */
    /* field_0x20 = 0; */
    /* PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0), arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* mDoMtx_ZXYrotM(((char*)&now__14mDoMtx_stack_c + 0), shape_angle, this->field_0x20e); */
    return PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x50 + 36));
}

/* 00002DC8-00002E2C       .text modeWaitInit__6daPz_cFv */
void daPz_c::modeWaitInit() {
    m0924 = 0;
    /* setAnm(1, 0, 15, arg4, arg5, arg6, arg7); */
    /* field_0x29a = 0; */
    /* field_0x8ea = 1; */
    /* field_0x29b = 1; */
    /* field_0x29c = 1; */
    /* field_0x8ec = 30; */
    /* return setAnm(1, 0, 15, arg4, arg5, arg6, arg7); */
}

/* 00002E2C-00002FE8       .text modeWait__6daPz_cFv */
void daPz_c::modeWait() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        dNpc_playerEyePos();
        m08C4 = 0;
        /* field_0x8c8 = 0; */
        /* field_0x8cc = 0; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getEventData(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getEventIdx(((char*)&@stringBase0 + 58), 255)) == 0) goto L_2ec8; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&@stringBase0 + 72), 0, 0) == -1) goto L_2ee0; */
        /* if (strcmp(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyNowCutName(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&@stringBase0 + 72), 0, 0)), ((char*)&@stringBase0 + 80)) != 0) goto L_2e3c; */
        /* field_0x8ea = 0; */
        /* field_0x29a = 1; */
        /* field_0x29b = 0; */
        /* field_0x29c = 0; */
        /* if (cLib_calcTimer<i>__FPi((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2284)) != 0) goto L_2ee0; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&@stringBase0 + 72), 0, 0));
        /* goto L_2ee0; */
        /* L_2e3c:; */
        /* if (strcmp(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyNowCutName(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&@stringBase0 + 72), 0, 0)), ((char*)&@stringBase0 + 85)) != 0) goto L_2ea8; */
        /* field_0x6d8 = 0; */
        /* if (this->field_0xf67 < (this->field_0x504 + 4)) goto L_2ee0; */
        /* field_0xf67 = (this->field_0x504 + 4); */
        /* field_0x92e = 1; */
        /* field_0x6d8 = 1000; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&@stringBase0 + 72), 0, 0));
        /* goto L_2ee0; */
        /* L_2ea8:; */
        /* if (this->field_0x92e != 0) goto L_2ebc; */
        /* field_0x6d8 = 1000; */
        /* L_2ebc:; */
        /* field_0x29a = 0; */
        /* goto L_2ee0; */
        /* L_2ec8:; */
        /* field_0x29a = 0; */
        /* field_0x8ea = 1; */
        /* field_0x29b = 1; */
        /* field_0x29c = 1; */
        /* L_2ee0:; */
        return _restgpr_29(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&@stringBase0 + 72), 0, 0)));
}

/* 00002FE8-000031E8       .text modeMoveInit__6daPz_cFv */
void daPz_c::modeMoveInit() {
        cM_rndF(C_@5365);
        /* field_0x8f0 = 10; */
        /* field_0x8f4 = 120; */
        setAnm(3, 0, 15);
        cM_rndF(C_@4146);
        /* if (/ * bge * / 1) goto L_3010; */
        /* if (m0920 != 1) goto L_3008; */
        m0920 = -1;
        /* goto L_3010; */
        /* L_3008:; */
        m0920 = 1;
        /* L_3010:; */
        /* if (this->field_0x30 != 0) goto L_304c; */
        /* if (mbHasGanondorf == 0) goto L_3070; */
        m08C4 = 0;
        /* field_0x8c8 = 0; */
        /* field_0x8cc = 0; */
        /* goto L_3070; */
        /* L_304c:; */
        dNpc_playerEyePos();
        m08C4 = 0;
        /* field_0x8c8 = 0; */
        /* field_0x8cc = 0; */
        /* L_3070:; */
        /* field_0x914 = 0; */
        /* field_0x918 = 0; */
        /* field_0x91e = ((this->field_0x744 + 336) * m0920); */
        /* field_0x8fc = 0; */
        /* field_0x900 = 0; */
        /* field_0x904 = 0; */
        dLib_setCirclePath((this + 2300));
        /* field_0x8ea = 0; */
        /* field_0x29a = 0; */
        /* field_0x29b = 0; */
        /* field_0x29c = 0; */
        return dLib_setCirclePath((this + 2300));
}

/* 000031E8-0000395C       .text modeMove__6daPz_cFv */
void daPz_c::modeMove() {
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x32 == 0) goto L_3154; */
        /* field_0x32 = 0; */
        /* ((daPz_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->modeProc(0); */
        /* goto L_3844; */
        /* L_3154:; */
        /* if (/ * beq * / 1) goto L_3178; */
        /* field_0x34 = 0; */
        /* ((daPz_c*)(((daPz_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->modeProc(0)))->modeProc(0); */
        /* goto L_3844; */
        /* L_3178:; */
        /* ((dBgS_LinChk*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2108)))->Set((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2312), _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->LineCross((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2108)) == 0) goto L_31b0; */
        /* L_31b0:; */
        /* if (/ * beq * / 1) goto L_31c0; */
        /* L_31c0:; */
        /* if (cLib_calcTimer<i>__FPi((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2296)) != 0) goto L_3244; */
        /* if (1 == 0) goto L_3244; */
        /* field_0x8f8 = 60; */
        /* if (m0920 != 1) goto L_31f8; */
        m0920 = -1;
        /* goto L_3200; */
        /* L_31f8:; */
        m0920 = 1;
        /* L_3200:; */
        /* field_0x91e = ((this->field_0x744 + 16384) * m0920); */
        /* if (cLib_calcTimer<i>__FPi((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2292)) != 0) goto L_3244; */
        /* dLib_setCirclePath((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2300)); */
        /* ((daPz_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->modeProc(0); */
        /* L_3244:; */
        /* if (((daPz_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->checkTgHit() != 0) goto L_3844; */
        /* if (this->field_0x30 != 0) goto L_3290; */
        /* if (mbHasGanondorf == 0) goto L_32b4; */
        m08C4 = 0;
        /* field_0x8c8 = 0; */
        /* field_0x8cc = 0; */
        /* goto L_32b4; */
        /* L_3290:; */
        dNpc_playerEyePos();
        m08C4 = 0;
        /* field_0x8c8 = 0; */
        /* field_0x8cc = 0; */
        /* L_32b4:; */
        /* field_0x29a = 0; */
        /* cLib_addCalc2((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2324), ((char*)&l_HIO + 0)); */
        __mi();
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_337c; */
        /* goto L_3380; */
        /* L_337c:; */
        /* L_3380:; */
        __mi();
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_3414; */
        /* L_3414:; */
        __mi();
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_34a8; */
        /* L_34a8:; */
        /* if (/ * bgt * / 1) goto L_34d0; */
        /* if (mbEyesFollowGanondorf != 0) goto L_34e4; */
        /* L_34d0:; */
        m0924 = 0;
        /* goto L_34ec; */
        /* L_34e4:; */
        m0924 = 0;
        /* L_34ec:; */
        /* if (1 != 0) goto L_3530; */
        /* if (/ * beq * / 1) goto L_3530; */
        /* if (this->field_0x10 == (this->field_0x74 * this->field_0x68)) goto L_3530; */
        /* if (mbEyesFollowGanondorf == 0) goto L_357c; */
        /* L_3530:; */
        /* field_0x918 = 0; */
        /* field_0x91e = ((this->field_0x744 + 336) * m0920); */
        /* field_0x8fc = 0; */
        /* field_0x900 = 0; */
        /* field_0x904 = 0; */
        /* dLib_setCirclePath((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2300)); */
        /* L_357c:; */
        /* if (cLib_calcTimer<i>__FPi((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2288)) != 0) goto L_3714; */
        __mi();
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_3628; */
        /* goto L_362c; */
        /* L_3628:; */
        /* L_362c:; */
        /* if (mbHasGanondorf == 0) goto L_36d0; */
        __mi();
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_36cc; */
        /* L_36cc:; */
        /* L_36d0:; */
        /* if (mbEyesFollowGanondorf == 0) goto L_3714; */
        /* if (/ * blt * / 1) goto L_36f8; */
        /* if (this->field_0x8 >= this->field_0xd0) goto L_3714; */
        /* L_36f8:; */
        /* ((daPz_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->modeProc(0); */
        /* goto L_3844; */
        /* L_3714:; */
        /* cLib_addCalcAngleS2((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 526), cLib_targetAngleY((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2312)), 8, 1024); */
        /* if (speedF >= this->field_0x2d8) goto L_375c; */
        /* ((daPz_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm(2, 0, 15); */
        /* goto L_3770; */
        /* L_375c:; */
        /* ((daPz_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm(3, 0, 15); */
        /* L_3770:; */
        /* if (m08B0 != 2) goto L_37c0; */
        m0F81 = dLib_checkActorInFan();
        /* L_37c0:; */
        /* if (this->field_0x35 != 0) goto L_383c; */
        /* if (cLib_calcTimer<i>__FPi((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2284)) != 0) goto L_383c; */
        /* if (m08B0 != 0) goto L_3804; */
        /* ((daPz_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->modeProc(0); */
        /* goto L_383c; */
        /* L_3804:; */
        /* if (m08B0 != 2) goto L_383c; */
        /* if (m0F65 != 0) goto L_3820; */
        m0F81 = 1;
        /* L_3820:; */
        /* if (m0F81 == 0) goto L_383c; */
        /* ((daPz_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->modeProc(0); */
        /* L_383c:; */
        m0F82 = 2;
        /* L_3844:; */
        /* return _restgpr_28(((daPz_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->modeProc(0)); */
}

/* 0000395C-000039C0       .text modeAttackWaitInit__6daPz_cFv */
void daPz_c::modeAttackWaitInit() {
    m0924 = 0;
    /* field_0x8ec = 20; */
    /* field_0x8f0 = 10; */
    /* setAnm(2, 0, 15, arg4, arg5, arg6, arg7); */
    /* field_0x8ea = 0; */
    /* field_0x29b = 0; */
    /* field_0x29c = 0; */
    /* return setAnm(2, 0, 15, arg4, arg5, arg6, arg7); */
}

/* 000039C0-00003D88       .text modeAttackWait__6daPz_cFv */
void daPz_c::modeAttackWait() {
        /* if (checkTgHit() != 0) goto L_3c78; */
        /* if (this->field_0x30 != 0) goto L_3940; */
        /* if (mbHasGanondorf == 0) goto L_3964; */
        m08C4 = 0;
        /* field_0x8c8 = 0; */
        /* field_0x8cc = 0; */
        /* goto L_3964; */
        /* L_3940:; */
        dNpc_playerEyePos();
        m08C4 = 0;
        /* field_0x8c8 = 0; */
        /* field_0x8cc = 0; */
        /* L_3964:; */
        /* if (cLib_calcTimer<i>__FPi((this + 2288)) != 0) goto L_3b20; */
        __mi();
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_3a0c; */
        /* goto L_3a10; */
        /* L_3a0c:; */
        /* L_3a10:; */
        /* if (mbHasGanondorf == 0) goto L_3ab4; */
        __mi();
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_3ab4; */
        /* L_3ab4:; */
        /* if (mbEyesFollowGanondorf == 0) goto L_3b20; */
        /* if (/ * blt * / 1) goto L_3adc; */
        /* if (this->field_0x8 >= this->field_0xd0) goto L_3b20; */
        /* L_3adc:; */
        cM_rndF(((char*)&l_HIO + 0));
        /* if (/ * bge * / 1) goto L_3b0c; */
        modeProc(0);
        /* goto L_3c78; */
        /* L_3b0c:; */
        modeProc(0);
        /* goto L_3c78; */
        /* L_3b20:; */
        /* if (m08B0 != 0) goto L_3bd4; */
        /* if (fopAcM_SearchByName(248) == 0) goto L_3ba0; */
        /* if ((health & 255) <= 60) goto L_3ba0; */
        /* if (this->field_0x2 < 12) goto L_3ba0; */
        /* if (this->field_0x75c == 0) goto L_3ba0; */
        dNpc_playerEyePos();
        m08C4 = 0;
        /* field_0x8c8 = 0; */
        /* field_0x8cc = 0; */
        /* L_3ba0:; */
        /* if (this->field_0x768 == 0) goto L_3c3c; */
        /* if (mbHasGanondorf == 0) goto L_3c3c; */
        m08C4 = 0;
        /* field_0x8c8 = 0; */
        /* field_0x8cc = 0; */
        /* goto L_3c3c; */
        /* L_3bd4:; */
        /* if (this->field_0x75c == 0) goto L_3c0c; */
        dNpc_playerEyePos();
        m08C4 = 0;
        /* field_0x8c8 = 0; */
        /* field_0x8cc = 0; */
        /* L_3c0c:; */
        /* if (this->field_0x768 == 0) goto L_3c3c; */
        /* if (mbHasGanondorf == 0) goto L_3c3c; */
        m08C4 = 0;
        /* field_0x8c8 = 0; */
        /* field_0x8cc = 0; */
        /* L_3c3c:; */
        /* if (this->field_0x2d == 0) goto L_3c70; */
        /* if (cLib_calcTimer<i>__FPi((this + 2284)) != 0) goto L_3c70; */
        modeProc(0);
        /* L_3c70:; */
        /* field_0x29a = 1; */
        /* L_3c78:; */
        return modeProc(0);
}

/* 00003D88-00003F14       .text modeAttackInit__6daPz_cFv */
void daPz_c::modeAttackInit() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x8f4 = 30; */
        /* if (m0F65 != 0) goto L_3ccc; */
        /* L_3ccc:; */
        /* if ((m06D3 & 255) == 4) goto L_3d7c; */
        /* if ((m06D3 & 255) == 5) goto L_3d7c; */
        cM_rndF(C_@5365);
        /* ((daPz_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm(4, 0, 15); */
        /* L_3d7c:; */
        cM_rndF(C_@4146);
        /* if (/ * bge * / 1) goto L_3db0; */
        m0F48 = 1;
        /* goto L_3df8; */
        /* L_3db0:; */
        m0F48 = 0;
        cM_rndF(C_@4146);
        /* if (/ * bge * / 1) goto L_3dec; */
        /* field_0xf44 = 0; */
        /* goto L_3df8; */
        /* L_3dec:; */
        cM_rndF(C_@4147);
        /* L_3df8:; */
        /* field_0x8ea = 0; */
        /* field_0x29b = 1; */
        /* field_0x29c = 0; */
        return _restgpr_29(0);
}

/* 00003F14-0000445C       .text modeAttack__6daPz_cFv */
void daPz_c::modeAttack() {
        /* if (checkTgHit() != 0) goto L_434c; */
        /* if (m0F48 != 0) goto L_3e9c; */
        /* if (mbHasGanondorf == 0) goto L_3ec8; */
        m08C4 = 0;
        /* field_0x8c8 = 0; */
        /* field_0x8cc = 0; */
        /* goto L_3ec8; */
        /* L_3e9c:; */
        dNpc_playerEyePos();
        m08C4 = 0;
        /* field_0x8c8 = 0; */
        /* field_0x8cc = 0; */
        /* L_3ec8:; */
        /* if (m08B0 != 0) goto L_3f7c; */
        /* if (fopAcM_SearchByName(248) == 0) goto L_3f48; */
        /* if ((health & 255) <= 60) goto L_3f48; */
        /* if (this->field_0x2 < 12) goto L_3f48; */
        /* if (this->field_0x75c == 0) goto L_3f48; */
        dNpc_playerEyePos();
        m08C4 = 0;
        /* field_0x8c8 = 0; */
        /* field_0x8cc = 0; */
        /* L_3f48:; */
        /* if (this->field_0x768 == 0) goto L_3fe4; */
        /* if (mbHasGanondorf == 0) goto L_3fe4; */
        m08C4 = 0;
        /* field_0x8c8 = 0; */
        /* field_0x8cc = 0; */
        /* goto L_3fe4; */
        /* L_3f7c:; */
        /* if (this->field_0x75c == 0) goto L_3fb4; */
        dNpc_playerEyePos();
        m08C4 = 0;
        /* field_0x8c8 = 0; */
        /* field_0x8cc = 0; */
        /* L_3fb4:; */
        /* if (this->field_0x768 == 0) goto L_3fe4; */
        /* if (mbHasGanondorf == 0) goto L_3fe4; */
        m08C4 = 0;
        /* field_0x8c8 = 0; */
        /* field_0x8cc = 0; */
        /* L_3fe4:; */
        /* if ((m06D3 & 255) == 4) goto L_3ffc; */
        /* if ((m06D3 & 255) != 5) goto L_41b8; */
        /* L_3ffc:; */
        /* if (cLib_calcTimer<i>__FPi((this + 2292)) != 0) goto L_41b8; */
        __mi();
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_40a4; */
        /* goto L_40a8; */
        /* L_40a4:; */
        /* L_40a8:; */
        /* if (mbHasGanondorf == 0) goto L_414c; */
        __mi();
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_414c; */
        /* L_414c:; */
        /* if (mbEyesFollowGanondorf == 0) goto L_41b8; */
        /* if (/ * blt * / 1) goto L_4174; */
        /* if (this->field_0x8 >= this->field_0xd0) goto L_41b8; */
        /* L_4174:; */
        cM_rndF(((char*)&l_HIO + 0));
        /* if (/ * bge * / 1) goto L_41a4; */
        modeProc(0);
        /* goto L_434c; */
        /* L_41a4:; */
        modeProc(0);
        /* goto L_434c; */
        /* L_41b8:; */
        /* if (m06D3 != 4) goto L_4214; */
        /* if (this->field_0x5d != 0) goto L_41ec; */
        /* if (/ * beq * / 1) goto L_41ec; */
        /* L_41ec:; */
        /* if (0 == 0) goto L_4214; */
        /* field_0x29a = 1; */
        setAnm(5, 0, 15);
        /* goto L_434c; */
        /* L_4214:; */
        /* if (/ * bne * / 1) goto L_4250; */
        /* field_0x29a = 1; */
        /* if (cLib_calcTimer<i>__FPi((this + 2284)) != 0) goto L_434c; */
        setAnm(6, 0, 15);
        /* goto L_434c; */
        /* L_4250:; */
        /* if (1 != 6) goto L_434c; */
        /* if (this->field_0x5d != 0) goto L_4280; */
        /* if (/ * beq * / 1) goto L_4280; */
        /* L_4280:; */
        /* if (0 == 0) goto L_434c; */
        /* field_0x29a = 0; */
        /* if (this->field_0x75c == 0) goto L_42d8; */
        /* field_0x758 = (this->field_0x758 + -1); */
        /* if (cLib_calcTimer<i>__FPi((this + 1880), 0) == 0) goto L_42cc; */
        modeProc(0);
        /* goto L_434c; */
        /* L_42cc:; */
        /* field_0x75c = 0; */
        /* goto L_434c; */
        /* L_42d8:; */
        /* if (this->field_0x768 == 0) goto L_4320; */
        /* field_0x764 = (this->field_0x764 + -1); */
        /* if (cLib_calcTimer<i>__FPi((this + 1892)) == 0) goto L_4314; */
        modeProc(0);
        /* goto L_434c; */
        /* L_4314:; */
        /* field_0x768 = 0; */
        /* goto L_434c; */
        /* L_4320:; */
        /* if (cLib_calcTimer<i>__FPi((this + 2288)) != 0) goto L_4344; */
        modeProc(0);
        /* goto L_434c; */
        /* L_4344:; */
        /* field_0x8ea = 1; */
        /* L_434c:; */
        return modeProc(0);
}

/* 0000445C-000044B4       .text modeDefendInit__6daPz_cFv */
void daPz_c::modeDefendInit() {
    setAnm(10, 1, 15);
    *(int*)(this + 2284) = 30;
}

/* 000044B4-00004630       .text modeDefend__6daPz_cFv */
void daPz_c::modeDefend() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        m0924 = 0;
        /* field_0x29a = 0; */
        /* cLib_addCalcAngleS2((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 526), cLib_targetAngleY((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1864)), 4, 4096); */
        /* cLib_distanceAngleS(this->field_0x20e, cLib_targetAngleY((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1864))); */
        /* if (this->field_0xf68 <= this->field_0x300) goto L_44d0; */
        /* mDoMtx_YrotS(((char*)&now__14mDoMtx_stack_c + 0), this->field_0xf6c); */
        PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0));
        /* PSVECAdd((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504)); */
        /* cLib_addCalc0((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 3944)); */
        /* ((dPa_control_c*)(this->field_0x5ab8))->setSimpleLand((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1052), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 524), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        /* goto L_451c; */
        /* L_44d0:; */
        /* if (this->field_0x75c != 0) goto L_44e8; */
        /* if (this->field_0x768 == 0) goto L_44fc; */
        /* L_44e8:; */
        /* ((daPz_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->modeProc(0); */
        /* goto L_451c; */
        /* L_44fc:; */
        /* if (cLib_calcTimer<i>__FPi((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2284)) != 0) goto L_451c; */
        /* ((daPz_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->modeProc(0); */
        /* L_451c:; */
        /* return _restgpr_29(((daPz_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->checkTgHit()); */
}

/* 00004630-0000470C       .text modeDownInit__6daPz_cFv */
void daPz_c::modeDownInit() {
    /* setAnm(7, 1, 15, arg4, arg5, arg6, arg7); */
    dComIfGp_getReverb((this->field_0x20a & 255));
    }
    ((JAIZelBasic*)(base))->monsSeStart(18784, (this + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255)));
    /* field_0x8ea = 1; */
    m0924 = 0;
    speedF = 0;
    /* field_0x8ea = 0; */
    /* field_0x29a = 0; */
    /* field_0x29b = 1; */
    /* field_0x29c = 1; */
    /* field_0x224 = 0; */
    /* field_0xf70 = 0; */
    return ((char*)&l_HIO + 0);


/* 0000470C-00004C20       .text modeDown__6daPz_cFv */
void daPz_c::modeDown() {
        /* _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        m0924 = 0;
        speedF = 0;
        /* field_0x29a = 0; */
        /* if (m06D3 != 7) goto L_4694; */
        /* if (/ * bne * / 1) goto L_4694; */
        /* if (/ * beq * / 1) goto L_4694; */
        /* ((daPz_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm(8, 0, 15); */
        /* L_4694:; */
        /* if (cLib_calcTimer<i>__FPi((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2284)) == 0) goto L_4768; */
        /* mDoMtx_YrotS(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x20e); */
        PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0));
        /* PSVECAdd((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504)); */
        /* if (m06D3 != 8) goto L_4768; */
        /* if (this->field_0x5d != 0) goto L_472c; */
        /* if (/ * beq * / 1) goto L_472c; */
        /* L_472c:; */
        /* if (0 == 0) goto L_4768; */
        /* ((dPa_control_c*)(this->field_0x5ab8))->setSimpleLand((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1052), (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 524), (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        /* L_4768:; */
        /* if (m06D3 != 8) goto L_4a18; */
        /* if (/ * bne * / 1) goto L_4868; */
        /* if (parentActorID != 0) goto L_47e8; */
        home = 0;
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        parentActorID = 1;
        /* L_47e8:; */
        /* if (((dPa_control_c*)(this->field_0x5ab8))->setSimpleLand((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1052), (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 524), (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)) == 0) goto L_4868; */
        /* field_0x38 = 0; */
        /* field_0x5c = 0; */
        /* field_0x1d8 = 0; */
        /* field_0x1dc = 0; */
        /* field_0x1e0 = 0; */
        /* field_0x1f0 = 0; */
        /* field_0x1f4 = 0; */
        current = 0;
        /* L_4868:; */
        /* if (/ * bne * / 1) goto L_4940; */
        /* if (this->field_0x1dc != 0) goto L_48c0; */
        /* field_0x1e0 = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* field_0x1dc = 1; */
        /* L_48c0:; */
        /* if (((dPa_control_c*)(this->field_0x5ab8))->setSimpleLand((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1052), (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 3896), (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 524), (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)) == 0) goto L_4940; */
        /* field_0x38 = 0; */
        /* field_0x5c = 0; */
        /* field_0x1d8 = 0; */
        /* field_0x1dc = 0; */
        /* field_0x1e0 = 0; */
        /* field_0x1f0 = 0; */
        /* field_0x1f4 = 0; */
        current = 0;
        /* L_4940:; */
        /* if (/ * bne * / 1) goto L_4a18; */
        /* if (this->field_0x1ec != 0) goto L_4998; */
        /* field_0x1f0 = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* field_0x1ec = 1; */
        /* L_4998:; */
        /* if (((dPa_control_c*)(this->field_0x5ab8))->setSimpleLand((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1052), (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2268), (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 524), (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)) == 0) goto L_4a18; */
        /* field_0x38 = 0; */
        /* field_0x5c = 0; */
        /* field_0x1d8 = 0; */
        /* field_0x1dc = 0; */
        /* field_0x1e0 = 0; */
        /* field_0x1f0 = 0; */
        /* field_0x1f4 = 0; */
        current = 0;
        /* L_4a18:; */
        /* if (m06D3 != 8) goto L_4a5c; */
        /* if (this->field_0x5d != 0) goto L_4a4c; */
        /* if (/ * beq * / 1) goto L_4a4c; */
        /* L_4a4c:; */
        /* if (0 == 0) goto L_4a5c; */
        /* field_0x8ea = 1; */
        /* L_4a5c:; */
        /* if (m08B0 == 1) goto L_4b18; */
        /* if (m06D3 != 9) goto L_4ac4; */
        /* if (this->field_0x5d != 0) goto L_4a9c; */
        /* if (/ * beq * / 1) goto L_4a9c; */
        /* L_4a9c:; */
        /* if (0 == 0) goto L_4b18; */
        /* field_0x8ea = 0; */
        /* ((daPz_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm(2, 0, 15); */
        /* goto L_4b18; */
        /* L_4ac4:; */
        /* if (m0740 == 0) goto L_4b04; */
        m0740 = 0;
        m0F80 = 0;
        /* field_0x75c = 0; */
        /* field_0x768 = 0; */
        /* ((daPz_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->modeProc(0); */
        /* goto L_4b18; */
        /* L_4b04:; */
        /* L_4b18:; */
        /* return _restgpr_27(((daPz_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm(9, 0, 15)); */
}

/* 00004C20-00004C78       .text modeAfraidInit__6daPz_cFv */
void daPz_c::modeAfraidInit() {
    /* setAnm(11, 1, 15, arg4, arg5, arg6, arg7); */
    m0924 = 0;
    speedF = 0;
    /* field_0x8ea = 0; */
    /* field_0x29b = 0; */
    /* field_0x29c = 0; */
    return C_@4147;
}

/* 00004C78-00004E8C       .text modeAfraid__6daPz_cFv */
void daPz_c::modeAfraid() {
        m0924 = 0;
        speedF = 0;
        /* field_0x8ea = 0; */
        /* field_0x29a = 0; */
        m073F = 0;
        /* field_0x29b = 0; */
        /* field_0x29c = 0; */
        /* if (fopAcM_SearchByName(248) == 0) goto L_4d84; */
        /* if (this->field_0x756 != 1) goto L_4c2c; */
        m08C4 = 0;
        /* field_0x8c8 = 0; */
        /* field_0x8cc = 0; */
        /* field_0x8c8 = (this->field_0x8c8 + (this->field_0x310 + this->field_0x6f4)); */
        /* goto L_4d60; */
        /* L_4c2c:; */
        /* if (this->field_0x756 != 2) goto L_4c6c; */
        m08C4 = 0;
        /* field_0x8c8 = 0; */
        /* field_0x8cc = 0; */
        /* field_0x8c8 = (this->field_0x8c8 + (this->field_0x90 + this->field_0x6f4)); */
        /* goto L_4d60; */
        /* L_4c6c:; */
        m08C4 = 0;
        /* field_0x8c8 = 0; */
        /* field_0x8cc = 0; */
        __mi();
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_4d20; */
        /* L_4d20:; */
        /* field_0x8c8 = (this->field_0x314 * (this->field_0x264 - (this->field_0x8 * this->field_0x2d8))); */
        /* if (this->field_0x8c8 != (this->field_0x5c + this->field_0x1fc)) goto L_4d60; */
        /* field_0x8c8 = (this->field_0x5c + this->field_0x1fc); */
        /* L_4d60:; */
        /* L_4d84:; */
        return cLib_addCalcAngleS2((this + 526), cLib_targetAngleY((this + 504)), 4, 1024);
}

/* 00004E8C-00004F08       .text modeSideStepInit__6daPz_cFv */
void daPz_c::modeSideStepInit() {
    if (m06C8 != 2) {
        /* if (m06C8 != 3) goto L_4dd4; */
        /* setAnm(11, 1, 15, arg4, arg5, arg6, arg7); */
    }
    /* L_4dd4:; */
    m0924 = 0;
    speedF = 0;
    /* field_0x8ea = 0; */
    /* field_0x224 = 0; */
    /* field_0xf70 = 0; */
    return ((char*)&l_HIO + 0);
}

/* 00004F08-00005098       .text modeSideStep__6daPz_cFv */
void daPz_c::modeSideStep() {
        /* if (checkTgHit() == 0) goto L_4e50; */
        /* field_0xf7a = 0; */
        /* goto L_4f90; */
        /* L_4e50:; */
        m0924 = 0;
        speedF = 0;
        /* field_0x8ea = 0; */
        /* field_0x29a = 1; */
        m073F = 0;
        cLib_addCalcAngleS2((this + 3962), ((m0920 * 4500) & 65535), 4, 2048);
        mDoMtx_YrotS(((char*)&now__14mDoMtx_stack_c + 0), cLib_targetAngleY((this + 2268), (this + 2244)));
        PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0));
        PSVECAdd((this + 504));
        /* if (/ * beq * / 1) goto L_4f90; */
        /* field_0xf7a = 0; */
        /* ((dPa_control_c*)(this->field_0x5ab8))->setSimpleLand((this + 1052), (this + 504), (this + 524), (this + 268)); */
        /* if (m06C8 == 2) goto L_4f6c; */
        /* if (m06C8 != 3) goto L_4f80; */
        /* L_4f6c:; */
        modeProc(0);
        /* goto L_4f90; */
        /* L_4f80:; */
        /* L_4f90:; */
        return modeProc(0);
}

/* 00005098-00005114       .text modeBackStepInit__6daPz_cFv */
void daPz_c::modeBackStepInit() {
    if (m06C8 != 2) {
        /* if (m06C8 != 3) goto L_4fe0; */
        /* setAnm(11, 1, 15, arg4, arg5, arg6, arg7); */
    }
    /* L_4fe0:; */
    m0924 = 0;
    speedF = 0;
    /* field_0x8ea = 0; */
    /* field_0x224 = 0; */
    /* field_0xf70 = 0; */
    return ((char*)&l_HIO + 0);
}

/* 00005114-0000527C       .text modeBackStep__6daPz_cFv */
void daPz_c::modeBackStep() {
        /* if (checkTgHit() == 0) goto L_505c; */
        /* field_0xf78 = 0; */
        /* goto L_5174; */
        /* L_505c:; */
        m0924 = 0;
        speedF = 0;
        /* field_0x8ea = 0; */
        /* field_0x29a = 1; */
        m073F = 0;
        cLib_addCalcAngleS2((this + 3960), -4500, 4, 2048);
        mDoMtx_YrotS(((char*)&now__14mDoMtx_stack_c + 0), cLib_targetAngleY((this + 504), (this + 2244)));
        PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0));
        PSVECAdd((this + 504));
        /* if (/ * beq * / 1) goto L_5174; */
        /* field_0xf78 = 0; */
        /* ((dPa_control_c*)(this->field_0x5ab8))->setSimpleLand((this + 1052), (this + 504), (this + 524), (this + 268)); */
        /* if (m06C8 == 2) goto L_5150; */
        /* if (m06C8 != 3) goto L_5164; */
        /* L_5150:; */
        modeProc(0);
        /* goto L_5174; */
        /* L_5164:; */
        /* L_5174:; */
        return modeProc(0);
}

/* 0000527C-00005304       .text modeTalkInit__6daPz_cFv */
void daPz_c::modeTalkInit() {
    /* setAnm(2, 1, 15, arg4, arg5, arg6, arg7); */
    speedF = 0;
    m0924 = 0;
    /* field_0x8ea = 0; */
    /* field_0x29b = 0; */
    /* field_0x29c = 0; */
    if (m08B0 == 0) {
    }
    return (((char*)&l_HIO + 0) + (1 << 1));
}

/* 00005304-0000539C       .text modeTalk__6daPz_cFv */
void daPz_c::modeTalk() {
    dNpc_playerEyePos();
    m08C4 = 0;
    /* field_0x8c8 = 0; */
    /* field_0x8cc = 0; */
    /* field_0x29a = 1; */
    if ((talk(1) & 65535) == 18) {
    }
    return modeProc(0);
}

/* 0000539C-0000549C       .text modeFollowInit__6daPz_cFv */
void daPz_c::modeFollowInit() {
    cM_rndF(C_@5365);
    /* field_0x8f0 = 10; */
    /* field_0x8f4 = 120; */
    setAnm(3, 0, 15);
    /* field_0x8ea = 0; */
    /* field_0x29a = 0; */
    /* field_0x29b = 0; */
    /* field_0x29c = 0; */
    return setAnm(3, 0, 15);
}

/* 0000549C-000059B8       .text modeFollow__6daPz_cFv */
void daPz_c::modeFollow() {
        /* ((dBgS_LinChk*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2108)))->Set((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2096), _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->LineCross((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2108)) == 0) goto L_5414; */
        /* L_5414:; */
        /* if (/ * beq * / 1) goto L_5424; */
        /* L_5424:; */
        /* if (((daPz_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->checkTgHit() != 0) goto L_58a0; */
        /* if (this->field_0x30 != 0) goto L_5470; */
        /* if (mbHasGanondorf == 0) goto L_5494; */
        m08C4 = 0;
        /* field_0x8c8 = 0; */
        /* field_0x8cc = 0; */
        /* goto L_5494; */
        /* L_5470:; */
        dNpc_playerEyePos();
        m08C4 = 0;
        /* field_0x8c8 = 0; */
        /* field_0x8cc = 0; */
        /* L_5494:; */
        /* field_0x29a = 0; */
        __mi();
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_5530; */
        /* L_5530:; */
        /* if (this->field_0x10 <= this->field_0x68) goto L_5564; */
        /* if (mbEyesFollowGanondorf != 0) goto L_5564; */
        /* if (1 != 0) goto L_5564; */
        m0924 = 0;
        /* goto L_5598; */
        /* L_5564:; */
        /* if (mbEyesFollowGanondorf == 0) goto L_557c; */
        m0924 = 0;
        /* goto L_5598; */
        /* L_557c:; */
        /* if (1 == 0) goto L_5590; */
        m0924 = 0;
        /* goto L_5598; */
        /* L_5590:; */
        m0924 = 0;
        /* L_5598:; */
        m0830 = 0;
        /* field_0x834 = 0; */
        /* field_0x838 = 0; */
        /* cLib_distanceAngleS(cLib_targetAngleY((this->field_0x5b40 + 504), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 3916)), this->field_0x20e); */
        m0830 = 0;
        /* field_0x838 = 0; */
        /* field_0x834 = (this->field_0x834 + this->field_0x68); */
        /* if (cLib_calcTimer<i>__FPi((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2288), base, ((char*)&jmaSinShift + 0), ((char*)&g_regHIO + 0), base, ((cLib_targetAngleY((this->field_0x5b40 + 504), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 3916)) & 65535) + 16384)) != 0) goto L_5808; */
        __mi();
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_571c; */
        /* goto L_5720; */
        /* L_571c:; */
        /* L_5720:; */
        /* if (mbHasGanondorf == 0) goto L_57c4; */
        __mi();
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_57c0; */
        /* L_57c0:; */
        /* L_57c4:; */
        /* if (mbEyesFollowGanondorf == 0) goto L_5808; */
        /* if (/ * blt * / 1) goto L_57ec; */
        /* if (this->field_0x8 >= this->field_0xd0) goto L_5808; */
        /* L_57ec:; */
        /* ((daPz_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->modeProc(0); */
        /* goto L_58a0; */
        /* L_5808:; */
        /* cLib_addCalcAngleS2((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 526), cLib_targetAngleY((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2096)), 8, 1024); */
        /* if (speedF >= this->field_0x2d8) goto L_5850; */
        /* ((daPz_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm(2, 0, 15); */
        /* goto L_5864; */
        /* L_5850:; */
        /* ((daPz_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm(3, 0, 15); */
        /* L_5864:; */
        /* if (this->field_0x35 != 0) goto L_5898; */
        /* if (cLib_calcTimer<i>__FPi((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2284)) != 0) goto L_5898; */
        /* ((daPz_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->modeProc(0); */
        /* L_5898:; */
        m0F82 = 2;
        /* L_58a0:; */
        /* return _restgpr_29(((daPz_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->modeProc(0)); */
}

/* 000059B8-00005C58       .text modeProc__6daPz_cFQ26daPz_c6Proc_ei */
void daPz_c::modeProc(daPz_c::Proc_e, int) {
    if (base != 0) {
        base = 1;
    }
    if (Proc_e == 0) {
        mMode = int;
        /* __ptmf_scall(this, Proc_e, int, ((C_@2100 + 0) + 416), ((char*)&init$6587 + 0), (C_@2100 + 0), this->field_0x194, arg7); */
    } else {
        /* if (/ * bne * / 1) goto L_5b58; */
    }
    /* L_5b58:; */
    /* return __ptmf_scall(__ptmf_scall(this, Proc_e, int, ((C_@2100 + 0) + 416), ((char*)&init$6587 + 0), (C_@2100 + 0), this->field_0x194, arg7), (mMode * 28)); */
}

/* 00005C58-000060D8       .text _execute__6daPz_cFv */
bool daPz_c::_execute() {
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x33 == 0) goto L_5c48; */
        /* ((daPz_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->modeProc(0); */
        current = 0;
        /* field_0x1fc = 0; */
        /* field_0x200 = 0; */
        /* field_0x1fc = (this->field_0x1fc + this->field_0x5c); */
        /* current = (current - (this->field_0x68 * (this->field_0x1fc + this->field_0x5c))); */
        /* field_0x200 = (this->field_0x200 - (this->field_0x68 * (current - (this->field_0x68 * (this->field_0x1fc + this->field_0x5c))))); */
        /* L_5c48:; */
        /* ((daPz_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setFallSplash(); */
        /* ((daPz_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getGndPos(); */
        mbEyesFollowGanondorf = 0;
        /* if (mbHasGanondorf == 0) goto L_5c7c; */
        /* mbEyesFollowGanondorf = ((daPz_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->checkEyeArea((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 3916)); */
        /* L_5c7c:; */
        gravity = 0;
        /* if (mMode == 6) goto L_5cbc; */
        /* if (mMode == 5) goto L_5cbc; */
        /* if (m073F == 0) goto L_5cbc; */
        /* ((daPz_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->modeProc(0); */
        /* L_5cbc:; */
        /* ((daPz_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setRipple(); */
        /* if (mMode == 5) goto L_5cec; */
        /* if (m08B0 != 1) goto L_5cec; */
        /* ((daPz_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->modeProc(0); */
        /* L_5cec:; */
        /* ((daPz_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setJntStatus(); */
        /* if (((daPz_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->demo() == 0) goto L_5d3c; */
        /* ((mDoExt_baseAnm*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 4008)))->play(); */
        /* ((mDoExt_baseAnm*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 3984)))->play(); */
        /* ((daPz_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setMtx(); */
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(0, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        return 1;
        /* L_5d3c:; */
        ((mDoExt_McaMorf*)(mpMorf))->calc();
        /* enemy_fire((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 3296)); */
        /* if (enemy_ice((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2344)) == 0) goto L_5d94; */
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x50 + 36));
        return 1;
        /* L_5d94:; */
        /* if (m06D3 != 9) goto L_5da8; */
        /* ((daPz_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setHeadSplash(); */
        /* L_5da8:; */
        /* if (mArg != 0) goto L_5e78; */
        /* if (m08B0 == 0) goto L_5dc8; */
        /* if (m08B0 != 2) goto L_5e78; */
        /* L_5dc8:; */
        /* if (m0F80 != 0) goto L_5e78; */
        /* if (mMode == 2) goto L_5e78; */
        /* if (mMode == 3) goto L_5e78; */
        /* if (mMode == 5) goto L_5e78; */
        /* if (mMode == 9) goto L_5e78; */
        /* if (cLib_calcTimer<i>__FPi((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 3964)) != 0) goto L_5e78; */
        /* if (fopAcM_SearchByName(248) == 0) goto L_5e78; */
        /* fopAcM_searchActorDistanceXZ(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38); */
        /* if (/ * bge * / 1) goto L_5e78; */
        /* if (this->field_0x2ce != 0) goto L_5e78; */
        m0F82 = 1;
        /* ((daPz_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->modeProc(0); */
        /* L_5e78:; */
        /* ((daPz_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->checkOrder(); */
        /* ((daPz_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->modeProc(1); */
        /* ((daPz_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->eventOrder(); */
        /* ((daPz_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAttention(); */
        /* cLib_addCalc2((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 596)); */
        /* if (/ * beq * / 1) goto L_5ee0; */
        /* ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetMtrlSndId((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1052)); */
        /* goto L_5ee4; */
        /* L_5ee0:; */
        /* L_5ee4:; */
        /* ((mDoExt_McaMorf*)(mpMorf))->play((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        ((mDoExt_McaMorf*)(mpBowMcaMorf))->play(0, 0, 0);
        /* ((mDoExt_baseAnm*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 3984)))->play(); */
        /* ((daPz_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->playEyeAnm(); */
        /* if (this->field_0x2f == 0) goto L_5f4c; */
        /* ((daPz_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm((this->field_0x2f & 255), 0, 15); */
        /* L_5f4c:; */
        /* fopAcM_posMoveF(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* ((dBgS_Acch*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 820)))->CrrPos(((char*)&g_dComIfG_gameInfo + 4768)); */
        /* if (this->field_0x3ffa != 0) goto L_5f8c; */
        /* ((fopNpc_npc_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setCollision(); */
        /* L_5f8c:; */
        /* ((daPz_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnmRunSpeed(); */
        /* ((daPz_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setMtx(); */
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(0, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        return _restgpr_28(1);
}

/* 000060D8-00006154       .text bowDraw__6daPz_cFv */
void daPz_c::bowDraw() {
    ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x50, (this + 268));
    PSMTXCopy((this->field_0x8c + 672), ((char*)&now__14mDoMtx_stack_c + 0));
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x50 + 36));
    return ((mDoExt_McaMorf*)(mpBowMcaMorf))->updateDL();
}

/* 00006154-00006600       .text bodyDraw__6daPz_cFv */
void daPz_c::bodyDraw() {
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x50, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        ((mDoExt_McaMorf*)(mpMorf))->calc();
        /* ((J3DModel*)(this->field_0x50))->unlock(); */
        /* if (mArg == 0) goto L_60cc; */
        /* ((mDoExt_brkAnm*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 3984)))->entry(this->field_0x4); */
        /* L_60cc:; */
        /* ((mDoExt_btpAnm*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 4028)))->entry(this->field_0x4, this->field_0xf67); */
        /* ((J3DDrawBuffer*)(this->field_0x48))->entryImm((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 4228), 0); */
        /* goto L_6168; */
        /* L_6110:; */
        /* if ((0 & 65535) == 3) goto L_6154; */
        /* if ((0 & 65535) == 6) goto L_6154; */
        /* if ((0 & 65535) == 13) goto L_6154; */
        /* if ((0 & 65535) == 16) goto L_6154; */
        /* goto L_6164; */
        /* L_6154:; */
        /* L_6164:; */
        /* L_6168:; */
        /* if (((0 + 1) & 65535) < this->field_0x5c) goto L_6110; */
        /* ((J3DDrawBuffer*)(this->field_0x48))->entryImm((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 4196), 0); */
        /* ((mDoExt_btkAnm*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 4008)))->entry(this->field_0x4); */
        /* ((J3DMaterialTable*)((this->field_0x4 + 88)))->removeTexMtxAnimator(this->field_0xfb0); */
        /* ((J3DDrawBuffer*)(this->field_0x48))->entryImm((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 4212), 0); */
        /* ((J3DDrawBuffer*)(this->field_0x48))->entryImm((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 4180), 0); */
        /* goto L_646c; */
        /* L_63c8:; */
        /* if ((0 & 65535) == 3) goto L_6468; */
        /* if ((0 & 65535) == 2) goto L_6468; */
        /* if ((0 & 65535) == 1) goto L_6468; */
        /* if ((0 & 65535) == 6) goto L_6468; */
        /* if ((0 & 65535) == 5) goto L_6468; */
        /* if ((0 & 65535) == 4) goto L_6468; */
        /* if ((0 & 65535) == 13) goto L_6468; */
        /* if ((0 & 65535) == 12) goto L_6468; */
        /* if ((0 & 65535) == 11) goto L_6468; */
        /* if ((0 & 65535) == 16) goto L_6468; */
        /* if ((0 & 65535) == 15) goto L_6468; */
        /* if ((0 & 65535) == 14) goto L_6468; */
        /* if ((0 & 65535) == 18) goto L_6468; */
        /* if ((0 & 65535) == 19) goto L_6468; */
        /* if ((0 & 65535) == 8) goto L_6468; */
        /* if ((0 & 65535) == 7) goto L_6468; */
        /* L_6468:; */
        /* L_646c:; */
        /* if (((0 + 1) & 65535) < this->field_0x5c) goto L_63c8; */
        ((mDoExt_McaMorf*)(mpMorf))->entryDL();
        /* goto L_64c4; */
        /* L_64a4:; */
        /* L_64c4:; */
        /* if (((0 + 1) & 65535) < this->field_0x5c) goto L_64a4; */
        /* ((J3DMaterialTable*)((this->field_0x4 + 88)))->removeTexNoAnimator(this->field_0xfc4); */
        /* if (mArg == 0) goto L_64f8; */
        /* L_64f8:; */
        /* return _restgpr_29(((J3DMaterialTable*)((this->field_0x4 + 88)))->removeTevRegAnimator(this->field_0xf98)); */
}

/* 00006600-000066D8       .text drawShadow__6daPz_cFv */
void daPz_c::drawShadow() {
    /* m0774 = dComIfGd_setShadow(m0774, 1, this->field_0x50); */
    if (m0F88 != 0) {
        /* if (m0774 != 0) goto L_65d4; */
    }
    /* L_65d4:; */
    /* return ((dDlst_shadowControl_c*)(((char*)&g_dComIfG_gameInfo + 24416)))->addReal(m0774, this->field_0x50); */
}

/* 000066D8-0000676C       .text _draw__6daPz_cFv */
bool daPz_c::_draw() {
    if (this->field_0x936 > 20) {
        /* ((dMat_ice_c*)(base))->entryDL(mpMorf, -1, (this + 1912), arg4, arg5, arg6, arg7); */
    } else {
        /* ((daPz_c*)(((dMat_ice_c*)(base))->entryDL(mpMorf, -1, (this + 1912), arg4, arg5, arg6, arg7)))->bodyDraw(); */
    }
    if (m0F88 != 0) {
        bowDraw();
    }
    drawShadow();
    dSnap_RegistFig(135, this, C_@4158);
    return 1;
}

/* 0000676C-00006974       .text bodyCreateInit__6daPz_cFv */
void daPz_c::bodyCreateInit() {
    /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (strcmp(((char*)&g_dComIfG_gameInfo + 20788), ((char*)&@stringBase0 + 171)) == 0) {
        /* field_0xfc = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getEventIdx(((char*)&@stringBase0 + 178), 255); */
    }
    }
    /* field_0x3c = 0; */
    /* field_0x3c = 0; */

    /* field_0x3c = 0; */
    /* field_0x3c = 0; */

    /* field_0x3c = 0; */
    /* field_0x3c = 0; */

    /* field_0x3c = 0; */
    /* field_0x3c = 0; */
    /* return _restgpr_29(this->field_0xff8, 0, (((C_@2100 + 0) + 740) + 1), this->field_0x1004, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 0)); */


/* 00006974-00006BAC       .text createInit__6daPz_cFv */
void daPz_c::createInit() {
    max_health = 30;
    stealItemLeft = 10;
    mEnemyFire = this;
    mEventIce = this;
    /* field_0x934 = 1; */
    /* field_0xac8 = 0; */
    /* field_0xac4 = 0; */
    m08B0 = 0;
    m0F80 = 0;
    bodyCreateInit();
    if (mArg == 0) {
        m0F88 = 1;
        modeProc(0);
        /* field_0x26d = 3; */
        /* field_0x26f = 3; */
    } else {
        /* field_0x280 = 10; */
        modeProc(0);
    }
    m0920 = 1;
    cullMtx = (this->field_0x50 + 36);
    fopAcM_setCullSizeBox(this);
    ((dBgS_AcchCir*)((this + 1272)))->SetWall();
    ((dBgS_Acch*)((this + 820)))->Set((this + 504), (this + 484), this, 1, (this + 1272), (this + 544), 0);
    gravity = 0;
    ((dCcD_Stts*)((this + 1336)))->Init(255, 255, this);
    ((dCcD_Cyl*)((this + 1396)))->Set(((char*)&m_heapsize__6daPz_c + 20));
    /* field_0x5b8 = (this + 1336); */
    setCollision();
    dKy_tevstr_init((this + 1920), this->field_0x1e2, 255);
    return ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(0, (this + 504), (this + 268));
}

/* 00006BAC-00006CB0       .text _create__6daPz_cFv */
cPhs_State daPz_c::_create() {
        /* dComIfG_resLoad((this + 1900), ((char*)&m_arc_name__6daPz_c + 0), arg2); */
        /* if (/ * bne * / 1) goto L_6b10; */
        /* if (this == 0) goto L_6b04; */
        __ct();
        /* L_6b04:; */
        /* L_6b10:; */
        /* if (dComIfG_resLoad((this + 1900), ((char*)&m_arc_name__6daPz_c + 0), arg2) != 4) goto L_6ba4; */
        getArg();
        /* if (mArg == 0) goto L_6b74; */
        /* if (strcmp(((char*)&g_dComIfG_gameInfo + 20788), ((char*)&@stringBase0 + 186)) != 0) goto L_6b74; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(13600) != 1) goto L_6b74; */
        return 5;
        /* L_6b74:; */
        /* if (fopAcM_entrySolidHeap(this, ((char*)&createHeap_CB__FP10fopAc_ac_c + 0)) != 0) goto L_6b9c; */
        return 5;
        /* L_6b9c:; */
        createInit();
        /* L_6ba4:; */
        /* return dComIfG_resLoad((this + 1900), ((char*)&m_arc_name__6daPz_c + 0), arg2); */
}

/* 00007DA0-00007E20       .text _delete__6daPz_cFv */
bool daPz_c::_delete() {
    /* dComIfG_resDelete((this + 1900), ((char*)&m_arc_name__6daPz_c + 0), arg2); */
    ((dPa_rippleEcallBack*)((this + 1760)))->end();
    if (heap != 0) {
        ((mDoExt_McaMorf*)(mpMorf))->stopZelAnime();
    }
    return 1;

/* 00007E20-00007E40       .text daPzCreate__FPv */
static cPhs_State daPzCreate(void* i_this) {
    return ((daPz_c*)i_this)->_create();

/* 00007E40-00007E64       .text daPzDelete__FPv */
static BOOL daPzDelete(void* i_this) {
    return ((daPz_c*)i_this)->_delete();

/* 00007E64-00007E88       .text daPzExecute__FPv */
static BOOL daPzExecute(void* i_this) {
    return ((daPz_c*)i_this)->_execute();

/* 00007E88-00007EAC       .text daPzDraw__FPv */
static BOOL daPzDraw(void* i_this) {
    return ((daPz_c*)i_this)->_draw();

/* 00007EAC-00007EB4       .text daPzIsDelete__FPv */
static BOOL daPzIsDelete(void*) {
    return 1;

static actor_method_class daPzMethodTable = {
    (process_method_func)daPzCreate,
    (process_method_func)daPzDelete,
    (process_method_func)daPzExecute,
    (process_method_func)daPzIsDelete,
    (process_method_func)daPzDraw,
};

actor_process_profile_definition g_profile_PZ = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0007,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_PZ_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daPz_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_PZ_e,
    /* Actor SubMtd */ &daPzMethodTable,
    /* Status       */ 0x08 | fopAcStts_SHOWMAP_e | fopAcStts_CULL_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_ACTOR_e,
    /* Cull Type    */ fopAc_CULLBOX_CUSTOM_e,
};

/* 由 fix_decomp_braces.py 补齐：反编译产物末尾缺 7 个 } */
}}}}}}}

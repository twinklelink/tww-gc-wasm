/**
 * d_a_npc_bms1.cpp
 * NPC - Bomb-Master Cannon (Windfall Bomb Shop shopkeeper)
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_npc_bms1.h"
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


/* 000000EC-00000108       .text __ct__21daNpc_Bms1_childHIO_cFv */
daNpc_Bms1_childHIO_c::daNpc_Bms1_childHIO_c() {
        /* 指令序列（未能结构化，待人工转换） */
        /* 00000000: stwu r1,-96(r1)              __vt__21daNpc_Bms1_childHIO_c */
        /* 00000004: mflr r0                      __vt__21daNpc_Bms1_childHIO_c */
        /* 00000008: stw r0,100(r1)                */
        /* 0000000c: stfd f31,80(r1)              __vt__10dNpc_HIO_c */
        /* 00000010: xscmpgtdp vs31,f1,f0         __vt__10dNpc_HIO_c */
        /* 00000014: stw r31,76(r1)                */
        /* 00000018: stw r30,72(r1)               __vt__10dNpc_HIO_c */
}

/* 00000108-00000148       .text daNpc_Bms1_shopMsgCheck__FUl */
void daNpc_Bms1_shopMsgCheck(unsigned long) {
    __mi();
}

/* 00000148-00000188       .text daNpc_Bms1_shopStickMoveMsgCheck__FUl */
void daNpc_Bms1_shopStickMoveMsgCheck(unsigned long) {
    if (/* bne */ 1) {
    }
    __ml();
    __pl();
}

/* 00000188-000002A0       .text __ct__16daNpc_Bms1_HIO_cFv */
daNpc_Bms1_HIO_c::daNpc_Bms1_HIO_c() {
    /* field_0x0 = 0; */
    /* field_0x4 = 0; */
    /* field_0x8 = 0; */
    return arg0;
}

/* 00000300-000004C4       .text nodeCallBack_Bms__FP7J3DNodei */
static BOOL nodeCallBack_Bms(J3DNode*, int) {
        /* _savegpr_27(arg0, int, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_3bc; */
        /* if (this->field_0x14 == 0) goto L_3bc; */
        PSMTXCopy((this->field_0x8c + (this->field_0x18 * 48)), this->field_0x0, C_@4186);
        /* if (this->field_0x18 != (this->field_0x6d4 & 255)) goto L_354; */
        /* mDoMtx_YrotM(this->field_0x0, ((-(this->field_0x6de + this->field_0x292)) & 65535)); */
        /* mDoMtx_ZrotM(this->field_0x0, ((-(this->field_0x6dc + this->field_0x290)) & 65535)); */
        MtxPosition();
        /* ((daNpc_Bms1_c*)(this->field_0x14))->setAttentionBasePos(); */
        MtxPosition();
        /* ((daNpc_Bms1_c*)(this->field_0x14))->setEyePos(); */
        /* goto L_38c; */
        /* L_354:; */
        /* if (this->field_0x18 != (this->field_0x6d5 & 255)) goto L_38c; */
        /* mDoMtx_XrotM(this->field_0x0, this->field_0x6e2); */
        /* mDoMtx_ZrotM(this->field_0x0, this->field_0x6e0); */
        /* L_38c:; */
        PSMTXCopy(this->field_0x0, ((char*)&mCurrentMtx__6J3DSys + 0));
        PSMTXCopy(this->field_0x0, (this->field_0x8c + (this->field_0x18 * 48)));
        /* L_3bc:; */
        return _restgpr_27(1);
}

/* 000004C4-00000A00       .text nodeCallBack_BmsHead__FP7J3DNodei */
static BOOL nodeCallBack_BmsHead(J3DNode*, int) {
        /* _savegpr_26(arg0, int, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_8f8; */
        /* if (this->field_0x14 == 0) goto L_8f8; */
        /* if (this->field_0xc8 != 0) goto L_468; */
        /* field_0xcc = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* __register_global_object(((C_@3569 + 0) + 204), ((char*)&__dt__4cXyzFv + 0), ((C_@3569 + 0) + 188)); */
        /* field_0xc8 = 1; */
        /* L_468:; */
        /* if (this->field_0xe4 != 0) goto L_4a4; */
        /* field_0xe8 = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* __register_global_object(((C_@3569 + 0) + 232), ((char*)&__dt__4cXyzFv + 0), ((C_@3569 + 0) + 216)); */
        /* field_0xe4 = 1; */
        /* L_4a4:; */
        PSMTXCopy((this->field_0x8c + (this->field_0x18 * 48)), ((char*)&now__14mDoMtx_stack_c + 0));
        /* if (this->field_0x18 != (this->field_0x6d6 & 255)) goto L_6dc; */
        ((mDoMtx_stack_c*)(PSMTXCopy((this->field_0x8c + (this->field_0x18 * 48)), ((char*)&now__14mDoMtx_stack_c + 0))))->scaleM();
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0));
        PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
        ((mDoMtx_stack_c*)((this->field_0x14 + 772)))->quatM();
        PSMTXConcat(((char*)&now__14mDoMtx_stack_c + 0));
        PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0), ((C_@3569 + 0) + 232));
        PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0), ((C_@3569 + 0) + 204));
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x8c + (this->field_0x18 * 48)));
        /* if (((cXyz*)((this->field_0x14 + 724)))->isZero() == 0) goto L_5b8; */
        /* field_0x2d4 = 0; */
        /* field_0x2d8 = 0; */
        /* field_0x2dc = 0; */
        /* L_5b8:; */
        __mi();
        __ml();
        PSVECAdd((this->field_0x14 + 748));
        PSVECScale((this->field_0x14 + 748), (this->field_0x14 + 748), ((C_@3569 + 0) + 96));
        PSVECAdd((this->field_0x14 + 724), (this->field_0x14 + 748), (this->field_0x14 + 724));
        PSVECSubtract();
        quat_rotVec();
        C_QUATSlerp((this->field_0x14 + 772));
        PSVECDotProduct();
        /* field_0x2cc = 0; */
        /* if (this->field_0x2cc >= this->field_0x14) goto L_6c0; */
        /* goto L_6d4; */
        /* L_6c0:; */
        /* if (this->field_0x2cc <= this->field_0x60) goto L_6d0; */
        /* goto L_6d4; */
        /* L_6d0:; */
        /* L_6d4:; */
        /* field_0x2cc = 0; */
        /* goto L_8f8; */
        /* L_6dc:; */
        /* if (this->field_0x18 != (this->field_0x6d7 & 255)) goto L_8f8; */
        ((mDoMtx_stack_c*)(((C_@3569 + 0) + 96)))->scaleM();
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0));
        PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
        ((mDoMtx_stack_c*)((this->field_0x14 + 788)))->quatM();
        PSMTXConcat(((char*)&now__14mDoMtx_stack_c + 0));
        PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0), ((C_@3569 + 0) + 232));
        PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0), ((C_@3569 + 0) + 204));
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x8c + (this->field_0x18 * 48)));
        /* if (((cXyz*)((this->field_0x14 + 736)))->isZero() == 0) goto L_7d8; */
        /* field_0x2e0 = 0; */
        /* field_0x2e4 = 0; */
        /* field_0x2e8 = 0; */
        /* L_7d8:; */
        __mi();
        __ml();
        PSVECAdd((this->field_0x14 + 760));
        PSVECScale((this->field_0x14 + 760), (this->field_0x14 + 760), ((C_@3569 + 0) + 96));
        PSVECAdd((this->field_0x14 + 736), (this->field_0x14 + 760), (this->field_0x14 + 736));
        PSVECSubtract();
        quat_rotVec();
        C_QUATSlerp((this->field_0x14 + 788));
        PSVECDotProduct();
        /* field_0x2d0 = 0; */
        /* if (this->field_0x2d0 >= this->field_0x14) goto L_8e0; */
        /* goto L_8f4; */
        /* L_8e0:; */
        /* if (this->field_0x2d0 <= this->field_0x60) goto L_8f0; */
        /* goto L_8f4; */
        /* L_8f0:; */
        /* L_8f4:; */
        /* field_0x2d0 = 0; */
        /* L_8f8:; */
        return _restgpr_26(1);
}

/* 00000A00-00000C4C       .text set_mtx__12daNpc_Bms1_cFv */
void daNpc_Bms1_c::set_mtx() {
    if (this->field_0x89e != 0) {
        /* PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0), (C_@4186 + 0), arg2, arg3, arg4, arg5, arg6, arg7); */
        /* ((mDoMtx_stack_c*)(mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x206)))->transM(); */
    } else {
        PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
        /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x206); */
    }
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x50 + 36));
    PSMTXCopy((this->field_0x8c + ((this->field_0x6d4 & 255) * 48)), ((char*)&now__14mDoMtx_stack_c + 0));
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x350 + 36));
    if (this->field_0x89e == 1) {
        PSMTXCopy((this->field_0x8c + ((this->field_0x6d4 & 255) * 48)), ((char*)&now__14mDoMtx_stack_c + 0));
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x354 + 36));
        PSMTXCopy((this->field_0x8c + ((this->field_0x6d4 & 255) * 48)), ((char*)&now__14mDoMtx_stack_c + 0));
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x358 + 36));
    } else {
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(2562) != 0) goto L_ad0; */
        PSMTXCopy((this->field_0x8c + ((this->field_0x6d4 & 255) * 48)), ((char*)&now__14mDoMtx_stack_c + 0));
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x354 + 36));
    }
    /* L_ad0:; */
    if (this->field_0x35c != 0) {
        PSMTXCopy((this->field_0x8c + ((this->field_0x6d8 & 255) * 48)), ((char*)&now__14mDoMtx_stack_c + 0));
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x35c + 36));
    }
    if (this->field_0x360 != 0) {
        PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
    }
    return PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x360 + 36));
}

/* 00000C4C-00000D54       .text initTexPatternAnm__12daNpc_Bms1_cFb */
void daNpc_Bms1_c::initTexPatternAnm(bool) {
    /* _savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* field_0x334 = ((dRes_control_c*)(((char*)&m_arcname__12daNpc_Bms1_c + 0)))->getRes(((char*)&l_btp_ix_tbl + 0), ((char*)&g_dComIfG_gameInfo + -16460), 64); */
    if (this->field_0x334 == 0) {
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&m_arcname__12daNpc_Bms1_c + 0)))->getRes(((char*)&l_btp_ix_tbl + 0), ((char*)&g_dComIfG_gameInfo + -16460), 64)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 574, ((char*)&@stringBase0 + 17));
        OSPanic(((char*)&@stringBase0 + 0), 574, ((char*)&@stringBase0 + 41));
    }
    /* if (((mDoExt_btpAnm*)((_savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7) + 824)))->init(this->field_0x4, this->field_0x334, 1, 2, 0, -1) == 0) { */
        /* return 0; */
    /* field_0x34c = 0; */
    /* field_0x34e = 0; */
    return _restgpr_29(1);
}

/* 00000D54-00000DE0       .text playTexPatternAnm__12daNpc_Bms1_cFv */
void daNpc_Bms1_c::playTexPatternAnm() {
        /* if (cLib_calcTimer<s>__FPs((this + 846), arg1, arg2, arg3, arg4, arg5, arg6, arg7) != 0) goto L_ce0; */
        /* if (this->field_0x34c < (this->field_0x6 & 65535)) goto L_cd8; */
        /* field_0x34c = (this->field_0x6 - this->field_0x34c); */
        cM_rndF(C_@4533);
        /* goto L_ce0; */
        /* L_cd8:; */
        /* field_0x34c = (C_@4565 + 1); */
        /* L_ce0:; */
        return C_@4565;
}

/* 00000DE0-00000E78       .text setAnm__12daNpc_Bms1_cFScf */
void daNpc_Bms1_c::setAnm(signed char, float) {
    if (farg0 > base) {
    }
    if ((char & 255) == (this->field_0x899 & 255)) {
        /* if ((this->field_0x899 & 255) == -1) goto L_d7c; */
    }
    /* field_0x899 = char; */
    /* L_d7c:; */
    /* return dNpc_setAnm_2(this->field_0x32c, ((C_@2100 + 0) + 120), ((char*)&l_bck_ix_tbl + 0), 0, ((C_@2100 + 0) + 116), arg5, arg6, arg7); */
}

/* 00000E78-00000EBC       .text setTexAnm__12daNpc_Bms1_cFSc */
void daNpc_Bms1_c::setTexAnm(signed char) {
    if ((m898 & 255) == (char & 255)) {
        /* if ((m898 & 255) == -1) goto L_dc0; */
    }
    m898 = char;
    /* L_dc0:; */
    return initTexPatternAnm(1);
}

/* 00000EBC-00001100       .text setAnmFromMsgTag__12daNpc_Bms1_cFv */
void daNpc_Bms1_c::setAnmFromMsgTag() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x89e == 1) goto L_ffc; */
        /* if (this->field_0x5bcf > 6) goto L_eac; */
        /* ((daNpc_Bms1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm(0); */
        /* goto L_eac; */
        /* ((daNpc_Bms1_c*)(((daNpc_Bms1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm(0)))->setAnm(1); */
        /* goto L_eac; */
        /* ((daNpc_Bms1_c*)(((daNpc_Bms1_c*)(((daNpc_Bms1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm(0)))->setAnm(1)))->setAnm(2); */
        /* goto L_eac; */
        /* ((daNpc_Bms1_c*)(((daNpc_Bms1_c*)(((daNpc_Bms1_c*)(((daNpc_Bms1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm(0)))->setAnm(1)))->setAnm(2)))->setAnm(3); */
        /* goto L_eac; */
        /* ((daNpc_Bms1_c*)(((daNpc_Bms1_c*)(((daNpc_Bms1_c*)(((daNpc_Bms1_c*)(((daNpc_Bms1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm(0)))->setAnm(1)))->setAnm(2)))->setAnm(3)))->setAnm(4); */
        /* field_0x89a = 1; */
        /* goto L_eac; */
        /* ((daNpc_Bms1_c*)(((daNpc_Bms1_c*)(((daNpc_Bms1_c*)(((daNpc_Bms1_c*)(((daNpc_Bms1_c*)(((daNpc_Bms1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm(0)))->setAnm(1)))->setAnm(2)))->setAnm(3)))->setAnm(4)))->setAnm(5); */
        /* field_0x89a = 3; */
        /* goto L_eac; */
        /* ((daNpc_Bms1_c*)(((daNpc_Bms1_c*)(((daNpc_Bms1_c*)(((daNpc_Bms1_c*)(((daNpc_Bms1_c*)(((daNpc_Bms1_c*)(((daNpc_Bms1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm(0)))->setAnm(1)))->setAnm(2)))->setAnm(3)))->setAnm(4)))->setAnm(5)))->setAnm(6); */
        /* field_0x89a = 3; */
        /* L_eac:; */
        /* if ((this->field_0x899 & 255) != 5) goto L_f20; */
        /* if (((J3DFrameCtrl*)((this->field_0x32c + 88)))->checkPass() == 0) goto L_ff4; */
        /* field_0x89a = (this->field_0x89a + -1); */
        /* if ((this->field_0x89a + -1) != 0) goto L_ff4; */
        /* ((daNpc_Bms1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm(0); */
        /* goto L_ff4; */
        /* L_f20:; */
        /* if ((this->field_0x89a + -1) != 6) goto L_f8c; */
        /* if (((J3DFrameCtrl*)((this->field_0x32c + 88)))->checkPass() == 0) goto L_ff4; */
        /* field_0x89a = (this->field_0x89a + -1); */
        /* if ((this->field_0x89a + -1) != 0) goto L_ff4; */
        /* ((daNpc_Bms1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm(1); */
        /* goto L_ff4; */
        /* L_f8c:; */
        /* if ((this->field_0x89a + -1) != 4) goto L_ff4; */
        /* if (((J3DFrameCtrl*)((this->field_0x32c + 88)))->checkPass() == 0) goto L_ff4; */
        /* field_0x89a = (this->field_0x89a + -1); */
        /* if ((this->field_0x89a + -1) != 0) goto L_ff4; */
        /* ((daNpc_Bms1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm(1); */
        /* L_ff4:; */
        /* field_0x5bcf = 255; */
        /* L_ffc:; */
        /* return _restgpr_29(((daNpc_Bms1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm(1)); */
}

/* 00001100-000011D8       .text chkAttention__12daNpc_Bms1_cF4cXyzs */
void daNpc_Bms1_c::chkAttention(cXyz, short) {
    __mi();
    return PSVECDotProduct();
}

/* 000011D8-00001278       .text eventOrder__12daNpc_Bms1_cFv */
void daNpc_Bms1_c::eventOrder() {
        /* if ((this->field_0x89b & 255) != 4) goto L_1128; */
        /* fopAcM_orderOtherEvent2(this, ((char*)&@stringBase0 + 46), 1, (arg3 + -1)); */
        /* goto L_117c; */
        /* L_1128:; */
        /* if ((this->field_0x89b & 255) != 3) goto L_1150; */
        /* fopAcM_orderOtherEvent2(fopAcM_orderOtherEvent2(this, ((char*)&@stringBase0 + 46), 1, (arg3 + -1)), ((char*)&@stringBase0 + 60), 1); */
        /* goto L_117c; */
        /* L_1150:; */
        /* if ((this->field_0x89b & 255) == 1) goto L_1160; */
        /* if ((this->field_0x89b & 255) != 2) goto L_117c; */
        /* L_1160:; */
        /* if (this->field_0x89b != 1) goto L_117c; */
        /* L_117c:; */
        /* return fopAcM_orderSpeakEvent(fopAcM_orderOtherEvent2(fopAcM_orderOtherEvent2(this, ((char*)&@stringBase0 + 46), 1, (arg3 + -1)), ((char*)&@stringBase0 + 60), 1)); */
}

/* 00001278-000014AC       .text checkOrder__12daNpc_Bms1_cFv */
void daNpc_Bms1_c::checkOrder() {
        /* if (this->field_0xf8 != 2) goto L_1320; */
        /* if ((this->field_0x89b & 255) != 4) goto L_1270; */
        /* field_0x89b = 0; */
        ((ShopCam_action_c*)((this + 2040)))->Reset();
        /* if (__ptmf_cmpr((this + 2028)) == 0) goto L_13a8; */
        /* if (__ptmf_test((this + 2028)) == 0) goto L_1238; */
        /* field_0x8a0 = -1; */
        __ptmf_scall(this, 0);
        /* L_1238:; */
        /* field_0x8a0 = 0; */
        __ptmf_scall(this, 0);
        /* goto L_13a8; */
        /* L_1270:; */
        /* if (0 != 3) goto L_13a8; */
        /* field_0x89b = 0; */
        ((ShopCam_action_c*)((this + 2040)))->Reset();
        /* if (__ptmf_cmpr((this + 2028)) == 0) goto L_13a8; */
        /* if (__ptmf_test((this + 2028)) == 0) goto L_12e8; */
        /* field_0x8a0 = -1; */
        __ptmf_scall(this, 0);
        /* L_12e8:; */
        /* field_0x8a0 = 0; */
        __ptmf_scall(this, 0);
        /* goto L_13a8; */
        /* L_1320:; */
        /* if (0 != 1) goto L_13a0; */
        /* if ((this->field_0x89b & 255) == 1) goto L_1340; */
        /* if ((this->field_0x89b & 255) != 2) goto L_13a8; */
        /* L_1340:; */
        /* field_0x89b = 0; */
        /* field_0x7cd = 1; */
        talkInit();
        ((ShopCam_action_c*)((this + 2040)))->shop_cam_action_init();
        /* goto L_13a8; */
        /* L_13a0:; */
        /* L_13a8:; */
        return ((ShopCam_action_c*)((this + 2040)))->Save();
}

/* 000014AC-000017FC       .text next_msgStatus__12daNpc_Bms1_cFPUl */
void daNpc_Bms1_c::next_msgStatus(unsigned long*) {
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bgt * / 1) goto L_16f0; */
        base = (base + 1);
        /* goto L_16f4; */
        base = 10118;
        /* goto L_16f4; */
        /* if (/ * beq * / 1) goto L_1444; */
        base = 10105;
        /* goto L_16f4; */
        /* L_1444:; */
        /* field_0x5bc6 = 23; */
        /* field_0x5bc5 = 39; */
        /* goto L_16f4; */
        /* if (/ * beq * / 1) goto L_1484; */
        base = 10119;
        /* goto L_16f4; */
        /* L_1484:; */
        /* field_0x5bc6 = 23; */
        /* field_0x5bc5 = 39; */
        /* goto L_16f4; */
        /* if (/ * beq * / 1) goto L_14c4; */
        base = 10105;
        /* goto L_16f4; */
        /* L_14c4:; */
        /* field_0x5bc6 = 23; */
        /* field_0x5bc5 = 39; */
        base = (base + 3);
        /* goto L_16f4; */
        /* if (/ * beq * / 1) goto L_150c; */
        base = 10119;
        /* goto L_16f4; */
        /* L_150c:; */
        /* field_0x5bc6 = 23; */
        /* field_0x5bc5 = 39; */
        base = (base + 3);
        /* goto L_16f4; */
        base = 10102;
        /* goto L_16f4; */
        base = 10115;
        /* goto L_16f4; */
        /* if (this->field_0x5bdd == 0) goto L_156c; */
        base = 0;
        /* goto L_16f4; */
        /* L_156c:; */
        /* if (this->field_0xfa != 0) goto L_1590; */
        base = 10112;
        /* goto L_16f4; */
        /* L_1590:; */
        base = (base + -3);
        /* goto L_16f4; */
        /* if (this->field_0x5bdd == 0) goto L_15c0; */
        base = 0;
        /* goto L_16f4; */
        /* L_15c0:; */
        /* if (this->field_0xfa != 0) goto L_16d4; */
        /* dShop_BoughtErrorStatus((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2128), 0, this->field_0x5bb0); */
        /* if (/ * beq * / 1) goto L_1604; */
        base = 10126;
        /* goto L_16f4; */
        /* L_1604:; */
        /* if (/ * beq * / 1) goto L_1618; */
        base = 10127;
        /* goto L_16f4; */
        /* L_1618:; */
        /* ((JAIZelBasic*)(base))->seStart(2175, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* ((ShopItems_c*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2128)))->hideSelectItem(); */
        /* field_0x7e8 = ((ShopItems_c*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2128)))->getSelectItemNo(); */
        /* field_0x5b54 = (this->field_0x5b54 + (-this->field_0x5bb0)); */
        /* if (checkItemGet((((ShopItems_c*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2128)))->getSelectItemNo() & 16777215), 1) != 0) goto L_16b8; */
        /* field_0x89b = 3; */
        /* goto L_16f4; */
        /* L_16b8:; */
        /* execItemGet((((ShopItems_c*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2128)))->getSelectItemNo() & 16777215)); */
        base = 10128;
        /* goto L_16f4; */
        /* L_16d4:; */
        base = (base + -3);
        /* goto L_16f4; */
        base = 10115;
        /* goto L_16f4; */
        /* L_16f0:; */
        /* L_16f4:; */
        return _restgpr_28(16);
}

/* 000017FC-00001860       .text getMsg__12daNpc_Bms1_cFv */
void daNpc_Bms1_c::getMsg() {
        /* if (this->field_0x7e4 == 0) goto L_1738; */
        /* field_0x7e4 = 0; */
        /* goto L_1760; */
        /* L_1738:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(2562) != 0) goto L_175c; */
        /* goto L_1760; */
        /* L_175c:; */
        /* L_1760:; */
        return 10114;
}

/* 00001860-0000191C       .text setCollision__12daNpc_Bms1_cFv */
void daNpc_Bms1_c::setCollision() {
    /* MtxTrans(0, arg1, arg2, arg3); */
    /* mDoMtx_YrotM(base, this->field_0x7c4); */
    MtxPosition();
    ((cM3dGCyl*)((this + 1724)))->SetC();
    ((cM3dGCyl*)((this + 1724)))->SetR();
    ((cM3dGCyl*)((this + 1724)))->SetH();
    return ((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set((this + 1444));
}

/* 0000191C-00001928       .text talkInit__12daNpc_Bms1_cFv */
void daNpc_Bms1_c::talkInit() {
    m8A1 = 0;
}

/* 00001928-00001A34       .text normal_talk__12daNpc_Bms1_cFv */
void daNpc_Bms1_c::normal_talk() {
        /* if (this->field_0xf8 != 14) goto L_18a0; */
        /* field_0xf8 = next_msgStatus((this + 2008), arg2); */
        /* if (this->field_0xf8 != 15) goto L_18c0; */
        /* fopMsgM_messageSet(this->field_0x7d8); */
        /* goto L_18c0; */
        /* L_18a0:; */
        /* if (this->field_0xf8 != 18) goto L_18b4; */
        /* field_0xf8 = 19; */
        /* goto L_18c0; */
        /* L_18b4:; */
        /* if (this->field_0xf8 != 1) goto L_18c0; */
        fopMsgM_demoMsgFlagOn();
        /* L_18c0:; */
        getItemZoomPos((this + 2040));
        ((ShopItems_c*)((this + 2128)))->Item_ZoomUp();
        /* field_0x54 = 0; */
        /* if (this->field_0x5bdc == 0) goto L_192c; */
        /* L_192c:; */
        /* return this->field_0xf8; */
}

/* 00001A34-00001B88       .text shop_talk__12daNpc_Bms1_cFv */
void daNpc_Bms1_c::shop_talk() {
        /* field_0x54 = 1; */
        /* if (dShop_now_triggercheck(base, (this + 1916), (this + 2128), (this + 2008), 0, 0, arg6, arg7) == 0) goto L_19e0; */
        /* field_0x7a4 = 1; */
        /* field_0x7dc = 0; */
        /* if (mShopItems < 0) goto L_19e0; */
        /* if (checkItemGet(105, 1) != 0) goto L_19e0; */
        ((dNpc_HeadAnm_c*)((this + 656)))->swing_vertical_init(1, 6144, 4096, 1);
        /* L_19e0:; */
        /* if (this->field_0xf8 == 14) goto L_1a00; */
        /* if (this->field_0xf8 != 15) goto L_1a58; */
        /* L_1a00:; */
        /* if (this->field_0x7a4 == 0) goto L_1a18; */
        /* field_0x7a4 = 0; */
        /* goto L_1a80; */
        /* L_1a18:; */
        /* field_0xf8 = next_msgStatus((this + 2012)); */
        /* if (this->field_0xf8 != 15) goto L_1a80; */
        /* fopMsgM_messageSet(this->field_0x7dc); */
        /* goto L_1a80; */
        /* L_1a58:; */
        /* if (this->field_0xf8 != 18) goto L_1a74; */
        /* field_0xf8 = 19; */
        mShopItems = -1;
        /* goto L_1a80; */
        /* L_1a74:; */
        /* if (this->field_0xf8 != 1) goto L_1a80; */
        fopMsgM_demoMsgFlagOn();
        /* L_1a80:; */
        /* return this->field_0xf8; */
}

/* 00001B88-00001D68       .text talk__12daNpc_Bms1_cFv */
void daNpc_Bms1_c::talk() {
        /* if (m8A1 != 0) goto L_1b00; */
        base = -1;
        base = 0;
        /* field_0x7d8 = getMsg(); */
        /* field_0x7dc = 0; */
        m8A1 = 1;
        /* field_0x7e8 = 255; */
        /* goto L_1c58; */
        /* L_1b00:; */
        /* if (/ * beq * / 1) goto L_1c58; */
        /* if (/ * bne * / 1) goto L_1b38; */
        base = fopMsgM_messageSet(this->field_0x7d8, this);
        /* goto L_1c58; */
        /* L_1b38:; */
        /* if (base != 0) goto L_1b88; */
        base = fopMsgM_SearchByID(fopMsgM_messageSet(this->field_0x7d8, this));
        /* if (fopMsgM_SearchByID(fopMsgM_messageSet(this->field_0x7d8, this)) == 0) goto L_1c58; */
        /* if (daNpc_Bms1_shopStickMoveMsgCheck(this->field_0x7d8) != 0) goto L_1b7c; */
        m8A1 = 2;
        /* goto L_1c58; */
        /* L_1b7c:; */
        m8A1 = 3;
        /* goto L_1c58; */
        /* L_1b88:; */
        /* ((daNpc_Bms1_c*)(daNpc_Bms1_shopStickMoveMsgCheck(this->field_0x7d8)))->setAnmFromMsgTag(); */
        /* if ((m8A1 & 255) == 3) goto L_1bbc; */
        /* if (/ * bge * / 1) goto L_1bc8; */
        /* if ((m8A1 & 255) >= 2) goto L_1bac; */
        /* goto L_1bc8; */
        /* L_1bac:; */
        normal_talk();
        /* goto L_1bc8; */
        /* L_1bbc:; */
        shop_talk();
        /* L_1bc8:; */
        /* if (this->field_0x5bdc == 0) goto L_1c58; */
        /* if (daNpc_Bms1_shopStickMoveMsgCheck(this->field_0x7d8) != 0) goto L_1c2c; */
        /* if (daNpc_Bms1_shopMsgCheck(this->field_0x7d8) != 0) goto L_1c20; */
        mShopItems = -1;
        ((ShopItems_c*)((this + 2128)))->showItem();
        /* L_1c20:; */
        m8A1 = 2;
        /* goto L_1c58; */
        /* L_1c2c:; */
        /* if (this->field_0x7d8 == 10102) goto L_1c40; */
        /* if (this->field_0x7d8 != 10115) goto L_1c50; */
        /* L_1c40:; */
        mShopItems = -1;
        ((ShopItems_c*)((this + 2128)))->showItem();
        /* L_1c50:; */
        m8A1 = 3;
        /* L_1c58:; */
        return shop_talk();
}

/* 00001D68-00002104       .text CreateInit__12daNpc_Bms1_cFv */
void daNpc_Bms1_c::CreateInit() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x280 = 10; */
        /* field_0x26d = 173; */
        /* field_0x26f = 173; */
        gravity = 0;
        /* if ((this->field_0x89e & 255) == 1) goto L_1d98; */
        /* if (/ * bge * / 1) goto L_1e24; */
        /* if ((this->field_0x89e & 255) >= 0) goto L_1d08; */
        /* goto L_1e24; */
        /* L_1d08:; */
        /* if (__ptmf_cmpr((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2028)) == 0) goto L_1e24; */
        /* if (__ptmf_test((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2028)) == 0) goto L_1d60; */
        /* field_0x8a0 = -1; */
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* L_1d60:; */
        /* field_0x8a0 = 0; */
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* goto L_1e24; */
        /* L_1d98:; */
        /* if (__ptmf_cmpr((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2028)) == 0) goto L_1e24; */
        /* if (__ptmf_test((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2028)) == 0) goto L_1df0; */
        /* field_0x8a0 = -1; */
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* L_1df0:; */
        /* field_0x8a0 = 0; */
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* L_1e24:; */
        /* field_0x7b4 = 0; */
        /* field_0x7b8 = 0; */
        /* field_0x7bc = 0; */
        /* ((dCcD_Stts*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1384)))->Init(255, 255, _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* ((dCcD_Cyl*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1444)))->Set(((C_@2100 + 0) + 48)); */
        /* field_0x5e8 = (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1384); */
        m8A2 = 0;
        /* field_0x7a4 = 0; */
        /* field_0x7e4 = 0; */
        /* field_0x7e8 = 255; */
        checkItemGet(105, 1);
        /* if (this->field_0x89e != 1) goto L_1ecc; */
        m2B4 = 0;
        /* field_0x2b8 = 0; */
        /* field_0x2bc = 0; */
        /* field_0x2c0 = 0; */
        /* field_0x2c4 = 0; */
        /* field_0x2c8 = 0; */
        /* goto L_1f28; */
        /* L_1ecc:; */
        /* if (checkItemGet(105, 1) == 0) goto L_1f00; */
        m2B4 = 0;
        /* field_0x2b8 = 0; */
        /* field_0x2bc = 0; */
        /* field_0x2c0 = 0; */
        /* field_0x2c4 = 0; */
        /* field_0x2c8 = 0; */
        /* goto L_1f28; */
        /* L_1f00:; */
        m2B4 = 0;
        /* field_0x2b8 = 0; */
        /* field_0x2bc = 0; */
        /* field_0x2c0 = 0; */
        /* field_0x2c4 = 0; */
        /* field_0x2c8 = 0; */
        /* L_1f28:; */
        /* field_0x2cc = 0; */
        /* field_0x2d0 = 0; */
        /* field_0x304 = 0; */
        /* field_0x308 = 0; */
        /* field_0x30c = 0; */
        /* field_0x310 = 0; */
        /* field_0x314 = 0; */
        /* field_0x318 = 0; */
        /* field_0x31c = 0; */
        /* field_0x320 = 0; */
        /* field_0x84e = (checkItemGet(105, 1) + 1); */
        /* field_0x892 = (checkItemGet(105, 1) + 1); */
        /* ((ShopItems_c*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2128)))->setItemSetDataList(); */
        /* ((ShopItems_c*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2128)))->createItem(3, (this->field_0x20a & 255)); */
        m7E9 = 0;
        /* field_0x7d4 = 0; */
        /* ((dNpc_EventCut_c*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1808)))->setActorInfo(((char*)&@stringBase0 + 73), _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* field_0x778 = (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1756); */
        /* ((mDoExt_McaMorf*)(this->field_0x32c))->calc(); */
        /* ((daNpc_Bms1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->set_mtx(); */
        return _restgpr_29(1);
}

/* 00002104-00002144       .text setAttention__12daNpc_Bms1_cFb */
void daNpc_Bms1_c::setAttention(bool) {
    if (bool != 0) {
    }
    /* field_0x274 = 0; */
    /* field_0x278 = (this->field_0x7b8 + this->field_0x2c); */
    /* field_0x27c = 0; */
    return this;
}

/* 00002144-000021F4       .text checkPlayerLanding__12daNpc_Bms1_cFv */
void daNpc_Bms1_c::checkPlayerLanding() {
    /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* if ((this->field_0x7d4 - this->field_0x1fc) < base) { */
        /* if (this->field_0x5b38 == 0) goto L_20c4; */
    /* L_20c4:; */
    if (this->field_0x5b38 == 0) {
        /* field_0x7d4 = 0; */
    }
    return _restgpr_29(1);
}

/* 000021F4-00002424       .text lookBack__12daNpc_Bms1_cFv */
void daNpc_Bms1_c::lookBack() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if ((this->field_0x89c & 255) == 2) goto L_21c4; */
        /* if (/ * bge * / 1) goto L_22b4; */
        /* if ((this->field_0x89c & 255) >= 1) goto L_215c; */
        /* goto L_22b4; */
        /* L_215c:; */
        /* if (this->field_0x7cc == 0) goto L_21bc; */
        dNpc_playerEyePos();
        /* goto L_22b4; */
        /* L_21bc:; */
        /* goto L_22b4; */
        /* L_21c4:; */
        /* if (mShopItems != -1) goto L_2200; */
        /* getItemZoomPos((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2040)); */
        /* goto L_2290; */
        /* L_2200:; */
        getSelectItemBasePos();
        getSelectItemPos();
        ((ShopCursor_c*)(mpShopCursor))->setPos();
        /* field_0x48 = 0; */
        /* field_0x4c = 0; */
        /* field_0x50 = 0; */
        /* field_0x38 = 0; */
        /* field_0x3c = 0; */
        ((ShopCursor_c*)(mpShopCursor))->anm_play();
        /* L_2290:; */
        /* L_22b4:; */
        /* if (this->field_0x6e6 == 0) goto L_22e0; */
        /* cLib_addCalcAngleS2((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1984), this->field_0x2a, 4, 2048); */
        /* goto L_22e8; */
        /* L_22e0:; */
        /* field_0x7c0 = 0; */
        /* L_22e8:; */
        /* return _restgpr_29(((dNpc_JntCtrl_c*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1756)))->lookAtTarget((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518))); */
}

/* 00002424-0000249C       .text wait01__12daNpc_Bms1_cFv */
void daNpc_Bms1_c::wait01() {
        /* if (this->field_0x7cd == 0) goto L_2358; */
        /* field_0x89c = 2; */
        /* goto L_2384; */
        /* L_2358:; */
        /* if (this->field_0x7cc == 0) goto L_2384; */
        /* if (this->field_0x89e != 1) goto L_237c; */
        /* field_0x89b = 0; */
        /* goto L_2384; */
        /* L_237c:; */
        /* field_0x89b = 2; */
        /* L_2384:; */
        return (((2 >> 31) + -1) & 16777215);
}

/* 0000249C-00002590       .text talk01__12daNpc_Bms1_cFv */
void daNpc_Bms1_c::talk01() {
    if ((talk() & 65535) == 18) {
        ((ShopCam_action_c*)((this + 2040)))->Reset();
        /* field_0x29c = ((this->field_0x29c >> 0) & 0); */
        /* field_0x7cd = 0; */
    } else {
        /* if (daNpc_Bms1_shopMsgCheck(this->field_0x7d8) != 0) goto L_2464; */
        /* if ((this->field_0x5b38 & 65535) == 8) goto L_2464; */
        /* if (this->field_0x7d8 == ((ShopItems_c*)((this + 2128)))->getSelectItemBuyMsg()) goto L_2464; */
        /* field_0x5bc6 = 23; */
        /* field_0x5bc5 = 39; */
    }
    /* L_2464:; */
    return (((39 >> 31) + -1) & 16777215);
}

/* 00002590-00002764       .text getdemo_action__12daNpc_Bms1_cFPv */
void daNpc_Bms1_c::getdemo_action(void*) {
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&@stringBase0 + 73), 0, 0);
        /* if (this->field_0x8a0 != 0) goto L_2574; */
        /* field_0x29c = ((this->field_0x29c >> 0) & 0); */
        /* ((ShopCam_action_c*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2040)))->Reset(); */
        /* fopAcM_createItemForPresentDemo((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (((ShopItems_c*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2128)))->getSelectItemNo() & 16777215), 0, -1, (this->field_0x20a & 255), 0, 0); */
        /* if (this->field_0x89d == 65535) goto L_2558; */
        /* field_0x52a8 = fopAcM_createItemForPresentDemo((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (((ShopItems_c*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2128)))->getSelectItemNo() & 16777215), 0, -1, (this->field_0x20a & 255), 0, 0); */
        /* L_2558:; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&@stringBase0 + 73), 0, 0));
        /* field_0x8a0 = (this->field_0x8a0 + 1); */
        /* goto L_265c; */
        /* L_2574:; */
        /* if ((this->field_0x8a0 & 255) == -1) goto L_265c; */
        fopMsgM_demoMsgFlagOn();
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&@stringBase0 + 73), 0, 0));
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->endCheckOld(((char*)&@stringBase0 + 60)) == 0) goto L_265c; */
        /* field_0x89b = 1; */
        /* field_0x7e4 = 10128; */
        /* if (__ptmf_cmpr((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2028)) == 0) goto L_265c; */
        /* if (__ptmf_test((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2028)) == 0) goto L_2628; */
        /* field_0x8a0 = -1; */
        /* __ptmf_scall(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* L_2628:; */
        /* field_0x8a0 = 0; */
        /* __ptmf_scall(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* L_265c:; */
        return _restgpr_28(1);
}

/* 00002764-00002918       .text wait_action__12daNpc_Bms1_cFPv */
void daNpc_Bms1_c::wait_action(void*) {
        /* if (this->field_0x8a0 != 0) goto L_26b0; */
        /* field_0x89c = 1; */
        /* field_0x8a0 = (this->field_0x8a0 + 1); */
        /* goto L_2814; */
        /* L_26b0:; */
        /* if ((this->field_0x8a0 & 255) == -1) goto L_2814; */
        /* field_0x7cc = ((daNpc_Bms1_c*)(this->field_0x8a0))->chkAttention(); */
        /* if (this->field_0x89e != 1) goto L_27a8; */
        /* if (((J3DFrameCtrl*)((this->field_0x32c + 88)))->checkPass(C_@4442) == 0) goto L_27a8; */
        /* if (cLib_calcTimer<Sc>__FPSc((this + 2202)) != 0) goto L_27a8; */
        /* field_0x89a = 3; */
        ((JAIZelBasic*)(base))->seStart(18734, (this + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
        /* L_27a8:; */
        /* if ((this->field_0x89c & 255) == 2) goto L_27d4; */
        /* if (/ * bge * / 1) goto L_27dc; */
        /* if ((this->field_0x89c & 255) >= 1) goto L_27c8; */
        /* goto L_27dc; */
        /* L_27c8:; */
        wait01();
        /* goto L_27dc; */
        /* L_27d4:; */
        talk01();
        /* L_27dc:; */
        lookBack();
        /* if (checkPlayerLanding() == 0) goto L_2808; */
        /* if (this->field_0x89e == 1) goto L_2808; */
        /* field_0x89b = 4; */
        /* L_2808:; */
        setAttention(1);
        /* L_2814:; */
        return 1;
}

/* 00002918-00002A98       .text event_action__12daNpc_Bms1_cFPv */
void daNpc_Bms1_c::event_action(void*) {
        /* if (this->field_0x8a0 != 0) goto L_28b4; */
        /* if (this->field_0x89e == 1) goto L_28a4; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(2562) == 0) goto L_2890; */
        setAnm(1, C_@4647);
        /* goto L_28a4; */
        /* L_2890:; */
        setAnm(0, C_@4647);
        /* L_28a4:; */
        /* field_0x8a0 = (this->field_0x8a0 + 1); */
        /* goto L_2990; */
        /* L_28b4:; */
        /* if (/ * beq * / 1) goto L_2990; */
        /* ((daNpc_Bms1_c*)(this->field_0x8a0))->privateCut(); */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->endCheckOld(((char*)&@stringBase0 + 46)) == 0) goto L_2990; */
        /* field_0x89b = 0; */
        /* if (__ptmf_cmpr((this + 2028)) == 0) goto L_2990; */
        /* if (__ptmf_test((this + 2028)) == 0) goto L_295c; */
        /* field_0x8a0 = -1; */
        __ptmf_scall(this, 0);
        /* L_295c:; */
        /* field_0x8a0 = 0; */
        __ptmf_scall(this, 0);
        /* L_2990:; */
        return 1;
}

/* 00002A98-00002B94       .text evn_talk_init__12daNpc_Bms1_cFi */
void daNpc_Bms1_c::evn_talk_init(int) {
    /* _savegpr_28(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
    ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP();
    base = -1;
    base = 0;
    if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP() != 0) {
        /* if (this->field_0x7d8 == 10129) goto L_2a70; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(2562) != 0) goto L_2a70; */
        /* field_0x7d8 = 10130; */
    } else {
        /* field_0x7d8 = 10130; */
    }
    /* L_2a70:; */
    if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP() != 0) {
    } else {
        /* field_0x7e0 = 0; */
    }
    return _restgpr_28(1);
}

/* 00002B94-00002BFC       .text evn_continue_talk_init__12daNpc_Bms1_cFi */
void daNpc_Bms1_c::evn_continue_talk_init(int) {
    /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(int, ((char*)&@stringBase0 + 84), 3, arg4) != 0) { */
    /* } else { */
        /* field_0x7e0 = 0; */
    /* } */
    /* return 1; */

/* 00002BFC-00002DD8       .text evn_talk__12daNpc_Bms1_cFv */
void daNpc_Bms1_c::evn_talk() {
        /* if (/ * bne * / 1) goto L_2b50; */
        base = fopMsgM_messageSet(this->field_0x7d8, (this + 608));
        /* goto L_2cd4; */
        /* L_2b50:; */
        /* if (base != 0) goto L_2b78; */
        base = fopMsgM_SearchByID(fopMsgM_messageSet(this->field_0x7d8, (this + 608)));
        fopMsgM_demoMsgFlagOn();
        /* goto L_2cd4; */
        /* L_2b78:; */
        ((daNpc_Bms1_c*)(fopMsgM_demoMsgFlagOn()))->setAnmFromMsgTag();
        /* if (this->field_0xf8 != 14) goto L_2bc8; */
        /* field_0xf8 = next_msgStatus((this + 2008), base); */
        /* if (this->field_0xf8 != 15) goto L_2cd4; */
        /* fopMsgM_messageSet(this->field_0x7d8); */
        /* goto L_2cd4; */
        /* L_2bc8:; */
        /* if (this->field_0xf8 != 18) goto L_2ca4; */
        /* if (this->field_0x7d8 != 7626) goto L_2c30; */
        /* if (this->field_0x8a3 != 73) goto L_2bf4; */
        /* goto L_2c10; */
        /* L_2bf4:; */
        /* if (4 != 74) goto L_2c08; */
        /* goto L_2c10; */
        /* L_2c08:; */
        /* L_2c10:; */
        /* field_0x5b7c = (this->field_0x5b7c + -30); */
        /* goto L_2c7c; */
        /* L_2c30:; */
        /* if ((this->field_0x5b7c + -30) != 7620) goto L_2c7c; */
        /* if (this->field_0x8a3 != 73) goto L_2c4c; */
        /* goto L_2c60; */
        /* L_2c4c:; */
        /* if (4 != 74) goto L_2c5c; */
        /* goto L_2c60; */
        /* L_2c5c:; */
        /* L_2c60:; */
        /* field_0x5b7c = (this->field_0x5b7c + -10); */
        /* L_2c7c:; */
        /* field_0xf8 = 19; */
        base = 0;
        base = -1;
        return 1;
        /* L_2ca4:; */
        /* if (-1 == 2) goto L_2cb4; */
        /* if (-1 != 6) goto L_2cd4; */
        /* L_2cb4:; */
        /* if (this->field_0x7d8 != this->field_0x7e0) goto L_2cd4; */
        /* field_0x7e0 = 0; */
        return 1;
        /* L_2cd4:; */
        return 0;
}

/* 00002DD8-00002E30       .text evn_viblation_init__12daNpc_Bms1_cFi */
void daNpc_Bms1_c::evn_viblation_init(int) {
    ((dVibration_c*)(((char*)&g_dComIfG_gameInfo + 22944)))->StartShock(5, -17);
    return 1;
}

/* 00002E30-00002E68       .text evn_head_swing_init__12daNpc_Bms1_cFi */
void daNpc_Bms1_c::evn_head_swing_init(int) {
    mHeadAnm.swing_vertical_init(1, 6144, 4096, 1);
}

/* 00002E68-00002FBC       .text privateCut__12daNpc_Bms1_cFv */
void daNpc_Bms1_c::privateCut() {
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x710, 0, 0) != -1) goto L_2dc8; */
        return 0;
        /* L_2dc8:; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyActIdx(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x710, 0, 0), ((char*)&cut_name_tbl$5387 + 0), 4, 1, 0) != -1) goto L_2e04; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x710, 0, 0));
        /* goto L_2eb4; */
        /* L_2e04:; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getIsAddvance(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x710, 0, 0)) == 0) goto L_2e7c; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyActIdx(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x710, 0, 0), ((char*)&cut_name_tbl$5387 + 0), 4, 1, 0) == 2) goto L_2e60; */
        /* if (/ * bge * / 1) goto L_2e34; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyActIdx(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x710, 0, 0), ((char*)&cut_name_tbl$5387 + 0), 4, 1, 0) == 0) goto L_2e40; */
        /* if (/ * bge * / 1) goto L_2e50; */
        /* goto L_2e7c; */
        /* L_2e34:; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyActIdx(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x710, 0, 0), ((char*)&cut_name_tbl$5387 + 0), 4, 1, 0) >= 4) goto L_2e7c; */
        /* goto L_2e70; */
        /* L_2e40:; */
        /* ((daNpc_Bms1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->evn_talk_init(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x710, 0, 0)); */
        /* goto L_2e7c; */
        /* L_2e50:; */
        /* ((daNpc_Bms1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->evn_continue_talk_init(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x710, 0, 0)); */
        /* goto L_2e7c; */
        /* L_2e60:; */
        /* ((daNpc_Bms1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->evn_viblation_init(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x710, 0, 0)); */
        /* goto L_2e7c; */
        /* L_2e70:; */
        /* ((daNpc_Bms1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->evn_head_swing_init(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x710, 0, 0)); */
        /* L_2e7c:; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyActIdx(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x710, 0, 0), ((char*)&cut_name_tbl$5387 + 0), 4, 1, 0) >= 2) goto L_2e9c; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyActIdx(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x710, 0, 0), ((char*)&cut_name_tbl$5387 + 0), 4, 1, 0) >= 0) goto L_2e90; */
        /* goto L_2e9c; */
        /* L_2e90:; */
        /* ((daNpc_Bms1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->evn_talk(); */
        /* goto L_2ea0; */
        /* L_2e9c:; */
        /* L_2ea0:; */
        /* if (1 == 0) goto L_2eb4; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x710, 0, 0));
        /* L_2eb4:; */
        return _restgpr_28(1);
}

/* 00002FBC-000030A4       .text demo_move__12daNpc_Bms1_cFv */
void daNpc_Bms1_c::demo_move() {
        /* if (((dDemo_object_c*)((this->field_0x5abc + 32)))->getActor(demoActorID) != 0) goto L_2f20; */
        /* if (m7E9 != 1) goto L_2f18; */
        demo_end_init();
        /* L_2f18:; */
        return 0;
        /* L_2f20:; */
        m7E9 = 1;
        ((dDemo_actor_c*)(0))->getP_BtpData(((char*)&@stringBase0 + 133));
        /* if (/ * beq * / 1) goto L_2f74; */
        /* ((mDoExt_btpAnm*)((this + 824)))->init(this->field_0x4); */
        /* L_2f74:; */
        dDemo_setDemoData(this, 106, this->field_0x32c, ((char*)&@stringBase0 + 133), 0, 0, 0, 0);
        return 1;
}

/* 000030A4-000030B0       .text demo_end_init__12daNpc_Bms1_cFv */
void daNpc_Bms1_c::demo_end_init() {
    m7E9 = 0;
}

/* 000030B0-00003314       .text _draw__12daNpc_Bms1_cFv */
BOOL daNpc_Bms1_c::_draw() {
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(0, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x50, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
    /* ((mDoExt_btpAnm*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 824)))->entry(this->field_0x4, this->field_0x34c); */
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x350, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
    /* ((mDoExt_McaMorf*)(this->field_0x32c))->entryDL(); */
    /* mDoExt_modelUpdateDL(this->field_0x350); */
    if (this->field_0x89e == 1) {
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x354, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        /* mDoExt_modelUpdateDL(this->field_0x354); */
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x358, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        /* mDoExt_modelUpdateDL(this->field_0x358); */
    } else {
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(2562) != 0) goto L_30d4; */
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x354, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        /* mDoExt_modelUpdateDL(this->field_0x354); */
    }
    /* L_30d4:; */
    if (this->field_0x35c != 0) {
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x35c, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        /* mDoExt_modelUpdateDL(this->field_0x35c); */
    }
    if (this->field_0x360 != 0) {
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x360, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        /* mDoExt_modelUpdateDL(this->field_0x360); */
    }
    /* ((J3DMaterialTable*)((this->field_0x4 + 88)))->removeTexNoAnimator(this->field_0x340); */
    /* field_0x330 = dComIfGd_setShadow(this->field_0x330, 1, this->field_0x50); */
    if (this->field_0x330 != 0) {
        /* ((dDlst_shadowControl_c*)(((char*)&g_dComIfG_gameInfo + 24416)))->addReal(this->field_0x330, this->field_0x350); */
    }
    if (mShopItems >= 0) {
        ((ShopCursor_c*)(mpShopCursor))->draw();
    }
    if (this->field_0x89e == 1) {
    }
    /* dSnap_RegistFig(92, _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
    return _restgpr_28(1);
}

/* 00003314-00003474       .text _execute__12daNpc_Bms1_cFv */
BOOL daNpc_Bms1_c::_execute() {
    /* ((dNpc_JntCtrl_c*)((this + 1756)))->setParam(this->field_0x1a, this->field_0x1e, this->field_0x22, this->field_0x26, this->field_0x18, this->field_0x1c, this->field_0x20); */
    playTexPatternAnm();
    /* field_0x7ca = ((mDoExt_McaMorf*)(this->field_0x32c))->play((this + 608), 0, 0); */
    /* ((mDoExt_McaMorf*)(this->field_0x32c))->calc(); */
    /* if (this->field_0x68 > this->field_0x7d0) { */
        /* field_0x7ca = 1; */
    /* field_0x7d0 = 0; */
    if (demo_move() == 0) {
        checkOrder();
        __ptmf_scall(this, 0);
        ((ShopCam_action_c*)((this + 2040)))->move();
        ((ShopItems_c*)((this + 2128)))->Item_Move();
        eventOrder();
    }
    ((dNpc_HeadAnm_c*)((this + 656)))->move();
    fopAcM_posMoveF(this, (this + 1384));
    ((dBgS_Acch*)((this + 868)))->CrrPos(((char*)&g_dComIfG_gameInfo + 4768));
    /* field_0x1b5 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetRoomId((this + 1100)); */
    /* field_0x1b6 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetPolyColor((this + 1100)); */
    set_mtx();
    setCollision();
    return 1;
}

/* 00003474-00003514       .text _delete__12daNpc_Bms1_cFv */
BOOL daNpc_Bms1_c::_delete() {
    if (this->field_0x8a5 == 1) {
        return 1;
    }
    /* dComIfG_resDelete((this + 804), ((char*)&m_arcname__12daNpc_Bms1_c + 0), arg2); */
    if (heap != 0) {
        /* if (this->field_0x32c != 0) goto L_33dc; */
        /* ((mDoExt_McaMorf*)(this->field_0x32c))->stopZelAnime(); */
    }
    /* L_33dc:; */
    if (this->field_0x8 >= 0) {
        /* if (/ * bge * / 1) goto L_3410; */
        /* ((mDoHIO_subRoot_c*)(((char*)&mDoHIO_root + 4)))->deleteChild(this->field_0x4); */
    }
    /* L_3410:; */
    return 1;
}

/* 00003514-00003534       .text CheckCreateHeap__FP10fopAc_ac_c */
static BOOL CheckCreateHeap(fopAc_ac_c* i_this) {
    ((daNpc_Bms1_c*)i_this)->CreateHeap();
    return TRUE;
}

/* 00003534-00003718       .text _create__12daNpc_Bms1_cFv */
cPhs_State daNpc_Bms1_c::_create() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_3484; */
        /* if (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_3478; */
        __ct();
        /* L_3478:; */
        /* L_3484:; */
        /* field_0x89e = (this->field_0xb0 >> 24); */
        /* if (this->field_0x89e != 0) goto L_34e8; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(2562) == 0) goto L_34dc; */
        /* if (checkItemGet(105, 1) != 0) goto L_34dc; */
        /* field_0x8a5 = 1; */
        return 5;
        /* L_34dc:; */
        /* field_0x8a5 = 0; */
        /* goto L_3534; */
        /* L_34e8:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(2562) == 0) goto L_3524; */
        /* if (checkItemGet(105, 1) != 0) goto L_3524; */
        /* field_0x8a5 = 0; */
        /* goto L_3534; */
        /* L_3524:; */
        /* field_0x8a5 = 1; */
        return 5;
        /* L_3534:; */
        /* if (dComIfG_resLoad((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 804), ((char*)&m_arcname__12daNpc_Bms1_c + 0)) != 4) goto L_3610; */
        /* if (this->field_0x89e == 0) goto L_3560; */
        /* goto L_356c; */
        /* L_3560:; */
        /* field_0x89e = 0; */
        /* goto L_3574; */
        /* L_356c:; */
        /* field_0x89e = 1; */
        /* L_3574:; */
        /* if (fopAcM_entrySolidHeap(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), ((char*)&CheckCreateHeap__FP10fopAc_ac_c + 0)) != 0) goto L_359c; */
        return 5;
        /* L_359c:; */
        cullMtx = (this->field_0x50 + 36);
        /* if (this->field_0x8 >= 0) goto L_35ec; */
        /* field_0x4 = ((mDoHIO_subRoot_c*)(((char*)&mDoHIO_root + 4)))->createChild(((char*)&@stringBase0 + 137), ((char*)&l_HIO + 0)); */
        /* L_35ec:; */
        /* field_0x8 = (this->field_0x8 + 1); */
        /* if (((daNpc_Bms1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->CreateInit() != 0) goto L_3610; */
        return 5;
        /* L_3610:; */
        /* return _restgpr_29(dComIfG_resLoad((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 804), ((char*)&m_arcname__12daNpc_Bms1_c + 0))); */
}

/* 00003CE8-000043B8       .text CreateHeap__12daNpc_Bms1_cFv */
void daNpc_Bms1_c::CreateHeap() {
        /* _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x89e != 0) goto L_3ca8; */
        ((dRes_control_c*)(((char*)&m_arcname__12daNpc_Bms1_c + 0)))->getRes(29);
        /* if (checkItemGet(105, 1) != 0) goto L_3c88; */
        ((dRes_control_c*)(((char*)&m_arcname__12daNpc_Bms1_c + 0)))->getRes(19);
        /* goto L_3cf8; */
        /* L_3c88:; */
        ((dRes_control_c*)(((char*)&m_arcname__12daNpc_Bms1_c + 0)))->getRes(20, ((dRes_control_c*)(((char*)&m_arcname__12daNpc_Bms1_c + 0)))->getRes(19), 64);
        /* goto L_3cf8; */
        /* L_3ca8:; */
        ((dRes_control_c*)(((char*)&m_arcname__12daNpc_Bms1_c + 0)))->getRes(26, (((dRes_control_c*)(((char*)&m_arcname__12daNpc_Bms1_c + 0)))->getRes(20, ((dRes_control_c*)(((char*)&m_arcname__12daNpc_Bms1_c + 0)))->getRes(19), 64) + -16460), 64);
        ((dRes_control_c*)(((char*)&m_arcname__12daNpc_Bms1_c + 0)))->getRes(18, (((dRes_control_c*)(((char*)&m_arcname__12daNpc_Bms1_c + 0)))->getRes(20, ((dRes_control_c*)(((char*)&m_arcname__12daNpc_Bms1_c + 0)))->getRes(19), 64) + -16460), 64);
        /* field_0x89a = 3; */
        /* L_3cf8:; */
        __nw(180);
        /* if (/ * beq * / 1) goto L_3d58; */
        /* L_3d58:; */
        /* field_0x32c = __ct(__nw(180), 1, ((dRes_control_c*)(((char*)&m_arcname__12daNpc_Bms1_c + 0)))->getRes(26, (((dRes_control_c*)(((char*)&m_arcname__12daNpc_Bms1_c + 0)))->getRes(20, ((dRes_control_c*)(((char*)&m_arcname__12daNpc_Bms1_c + 0)))->getRes(19), 64) + -16460), 64), 0, 0, ((dRes_control_c*)(((char*)&m_arcname__12daNpc_Bms1_c + 0)))->getRes(18, (((dRes_control_c*)(((char*)&m_arcname__12daNpc_Bms1_c + 0)))->getRes(20, ((dRes_control_c*)(((char*)&m_arcname__12daNpc_Bms1_c + 0)))->getRes(19), 64) + -16460), 64), 2, 0); */
        /* if (this->field_0x32c == 0) goto L_3d74; */
        /* if (this->field_0x50 != 0) goto L_3d84; */
        /* L_3d74:; */
        /* field_0x32c = 0; */
        return 0;
        /* L_3d84:; */
        /* field_0x6d4 = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 148)); */
        /* if (this->field_0x6d4 != 0) goto L_3dd8; */
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 148))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 2083, ((char*)&@stringBase0 + 153)); */
        OSPanic(((char*)&@stringBase0 + 0), 2083, ((char*)&@stringBase0 + 41));
        /* L_3dd8:; */
        /* field_0x6d5 = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 173)); */
        /* if (this->field_0x6d5 != 0) goto L_3e2c; */
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 173))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 2086, ((char*)&@stringBase0 + 182)); */
        OSPanic(((char*)&@stringBase0 + 0), 2086, ((char*)&@stringBase0 + 41));
        /* L_3e2c:; */
        /* if (this->field_0x89e != 0) goto L_3e8c; */
        /* field_0x6d8 = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 206)); */
        /* if (this->field_0x6d8 != 0) goto L_3e8c; */
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 206))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 2091, ((char*)&@stringBase0 + 213)); */
        OSPanic(((char*)&@stringBase0 + 0), 2091, ((char*)&@stringBase0 + 41));
        /* L_3e8c:; */
        /* field_0x350 = mDoExt_J3DModel(((dRes_control_c*)(((char*)&m_arcname__12daNpc_Bms1_c + 0)))->getRes(35)); */
        /* if (this->field_0x350 != 0) goto L_3ee0; */
        return 0;
        /* L_3ee0:; */
        /* field_0x6d6 = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 232)); */
        /* if (this->field_0x6d6 != 0) goto L_3f34; */
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 232))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 2110, ((char*)&@stringBase0 + 238)); */
        OSPanic(((char*)&@stringBase0 + 0), 2110, ((char*)&@stringBase0 + 41));
        /* L_3f34:; */
        /* field_0x6d7 = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 259)); */
        /* if (this->field_0x6d7 != 0) goto L_3f88; */
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 259))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 2113, ((char*)&@stringBase0 + 265)); */
        OSPanic(((char*)&@stringBase0 + 0), 2113, ((char*)&@stringBase0 + 41));
        /* L_3f88:; */
        m898 = 1;
        /* if (((daNpc_Bms1_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->initTexPatternAnm(0) != 0) goto L_3fac; */
        return 0;
        /* L_3fac:; */
        /* if ((this->field_0x89e & 255) == 1) goto L_4008; */
        /* if (/ * bge * / 1) goto L_4014; */
        /* if ((this->field_0x89e & 255) >= 0) goto L_3fcc; */
        /* goto L_4014; */
        /* L_3fcc:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(2562) == 0) goto L_3ff8; */
        /* ((daNpc_Bms1_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setTexAnm(1); */
        /* goto L_4014; */
        /* L_3ff8:; */
        /* ((daNpc_Bms1_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setTexAnm(0); */
        /* goto L_4014; */
        /* L_4008:; */
        /* ((daNpc_Bms1_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setTexAnm(1); */
        /* L_4014:; */
        /* field_0x354 = mDoExt_J3DModel(((dRes_control_c*)(((char*)&m_arcname__12daNpc_Bms1_c + 0)))->getRes(27), 0); */
        /* if (this->field_0x354 != 0) goto L_4054; */
        return 0;
        /* L_4054:; */
        /* field_0x358 = mDoExt_J3DModel(((dRes_control_c*)(((char*)&m_arcname__12daNpc_Bms1_c + 0)))->getRes(28), 0); */
        /* if (this->field_0x89e != 0) goto L_4144; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(2562) == 0) goto L_40c4; */
        ((dRes_control_c*)(((char*)&m_arcname__12daNpc_Bms1_c + 0)))->getRes(31);
        /* goto L_40dc; */
        /* L_40c4:; */
        /* L_40dc:; */
        /* field_0x35c = mDoExt_J3DModel(((dRes_control_c*)(((char*)&m_arcname__12daNpc_Bms1_c + 0)))->getRes(30), 0); */
        /* if (this->field_0x35c != 0) goto L_4104; */
        return 0;
        /* L_4104:; */
        /* field_0x360 = mDoExt_J3DModel(((dRes_control_c*)(((char*)&m_arcname__12daNpc_Bms1_c + 0)))->getRes(32), 0); */
        /* if (this->field_0x360 != 0) goto L_414c; */
        return 0;
        /* L_4144:; */
        /* field_0x35c = 0; */
        /* L_414c:; */
        /* goto L_41a0; */
        /* L_415c:; */
        /* if ((0 & 65535) == (this->field_0x6d4 & 255)) goto L_4180; */
        /* if ((0 & 65535) != (this->field_0x6d5 & 255)) goto L_419c; */
        /* L_4180:; */
        /* field_0x8 = 0; */
        /* L_419c:; */
        /* L_41a0:; */
        /* if (((0 + 1) & 65535) < this->field_0x28) goto L_415c; */
        /* field_0x14 = _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* goto L_4204; */
        /* L_41cc:; */
        /* if ((0 & 65535) == (this->field_0x6d6 & 255)) goto L_41f0; */
        /* if ((0 & 65535) != (this->field_0x6d7 & 255)) goto L_4200; */
        /* L_41f0:; */
        /* field_0x8 = 0; */
        /* L_4200:; */
        /* L_4204:; */
        /* if (((0 + 1) & 65535) < this->field_0x28) goto L_41cc; */
        /* field_0x14 = _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* ((dBgS_AcchCir*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1320)))->SetWall(((char*)&nodeCallBack_BmsHead__FP7J3DNodei + 0), this->field_0x4); */
        /* ((dBgS_Acch*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 868)))->Set((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 484), _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 1, (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1320), (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 544), 0); */
        ((dRes_control_c*)(((char*)&m_arcname__12daNpc_Bms1_c + 0)))->getRes(11);
        mpShopCursor = ShopCursor_create(((dRes_control_c*)(((char*)&m_arcname__12daNpc_Bms1_c + 0)))->getRes(8), ((dRes_control_c*)(((char*)&m_arcname__12daNpc_Bms1_c + 0)))->getRes(11), ((char*)&l_HIO + 0));
        return _restgpr_27(mpShopCursor);
}

/* 000043B8-000043D8       .text daNpc_Bms1_Create__FP10fopAc_ac_c */
static cPhs_State daNpc_Bms1_Create(fopAc_ac_c* i_this) {
    return ((daNpc_Bms1_c*)i_this)->_create();
}

/* 000043D8-000043F8       .text daNpc_Bms1_Delete__FP12daNpc_Bms1_c */
static BOOL daNpc_Bms1_Delete(daNpc_Bms1_c* i_this) {
    return ((daNpc_Bms1_c*)i_this)->_delete();
}

/* 000043F8-00004418       .text daNpc_Bms1_Execute__FP12daNpc_Bms1_c */
static BOOL daNpc_Bms1_Execute(daNpc_Bms1_c* i_this) {
    return ((daNpc_Bms1_c*)i_this)->_execute();

/* 00004418-00004438       .text daNpc_Bms1_Draw__FP12daNpc_Bms1_c */
static BOOL daNpc_Bms1_Draw(daNpc_Bms1_c* i_this) {
    return ((daNpc_Bms1_c*)i_this)->_draw();

/* 00004438-00004440       .text daNpc_Bms1_IsDelete__FP12daNpc_Bms1_c */
static BOOL daNpc_Bms1_IsDelete(daNpc_Bms1_c*) {
    return 1;

// /* 000047AC-000047C8       .text setEyePos__12daNpc_Bms1_cF4cXyz */
// void daNpc_Bms1_c::setEyePos(cXyz) {
//     /* Nonmatching */
// }

// /* 000047C8-000047E4       .text setAttentionBasePos__12daNpc_Bms1_cF4cXyz */
// void daNpc_Bms1_c::setAttentionBasePos(cXyz) {
//     /* Nonmatching */
// }

// /* 00004820-00004900       .text getItemZoomPos__16ShopCam_action_cFf */
// void ShopCam_action_c::getItemZoomPos(float) {
//     /* Nonmatching */
// }

static actor_method_class l_daNpc_Bms1_Method = {
    (process_method_func)daNpc_Bms1_Create,
    (process_method_func)daNpc_Bms1_Delete,
    (process_method_func)daNpc_Bms1_Execute,
    (process_method_func)daNpc_Bms1_IsDelete,
    (process_method_func)daNpc_Bms1_Draw,
};

actor_process_profile_definition g_profile_NPC_BMS1 = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0007,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_NPC_BMS1_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daNpc_Bms1_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_NPC_BMS1_e,
    /* Actor SubMtd */ &l_daNpc_Bms1_Method,
    /* Status       */ fopAcStts_CULL_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_ACTOR_e,
    /* Cull Type    */ fopAc_CULLBOX_12_e,
};

/* 由 fix_decomp_braces.py 补齐：反编译产物末尾缺 4 个 } */
}}}}

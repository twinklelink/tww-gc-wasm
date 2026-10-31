/**
 * d_a_npc_kg2.cpp
 * NPC - Salvatore (Cannon Minigame)
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_npc_kg2.h"
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


/* 000000EC-00000194       .text __ct__15daNpc_Kg2_HIO_cFv */
daNpc_Kg2_HIO_c::daNpc_Kg2_HIO_c() {
    if (/* beq */ 1) {
        /* field_0x0 = 0; */
        /* if (arg1 != 0) goto L_30; */
    }
    /* L_30:; */
    return __dl(arg0);
}

/* 00000194-00000368       .text nodeCallBack__FP7J3DNodei */
static BOOL nodeCallBack(J3DNode*, int) {
        /* _savegpr_26(arg0, int, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_260; */
        /* if (this->field_0x14 == 0) goto L_260; */
        PSMTXCopy((this->field_0x8c + (this->field_0x18 * 48)), ((char*)&now__14mDoMtx_stack_c + 0), C_@4041);
        /* if (this->field_0x18 != (this->field_0x298 & 255)) goto L_200; */
        /* if (this->field_0x98 != 0) goto L_184; */
        /* field_0x9c = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* __register_global_object(((C_@3569 + 0) + 156), ((char*)&__dt__4cXyzFv + 0), ((C_@3569 + 0) + 140)); */
        /* field_0x98 = 1; */
        /* L_184:; */
        PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0));
        /* mDoMtx_XrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x292); */
        /* mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), ((-this->field_0x290) & 65535)); */
        PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0), ((C_@3569 + 0) + 156), (this->field_0x14 + 1800));
        PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0));
        /* field_0x278 = (this->field_0x278 + this->field_0x24); */
        /* goto L_238; */
        /* L_200:; */
        /* if (this->field_0x18 != (this->field_0x299 & 255)) goto L_238; */
        /* mDoMtx_XrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x296); */
        /* mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), ((-this->field_0x294) & 65535)); */
        /* L_238:; */
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), ((char*)&mCurrentMtx__6J3DSys + 0));
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x8c + (this->field_0x18 * 48)));
        /* L_260:; */
        return _restgpr_26(1);
}

/* 000003A4-0000048C       .text set_mtx__11daNpc_Kg2_cFv */
void daNpc_Kg2_c::set_mtx() {
    /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
    /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x206); */
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x50 + 36));
    /* ((mDoExt_McaMorf*)(this->field_0x330))->calc(); */
    if (this->field_0x736 != 0) {
        ((mDoMtx_stack_c*)(PSMTXCopy((this->field_0x8c + ((this->field_0x6c4 & 255) * 48)), ((char*)&now__14mDoMtx_stack_c + 0))))->transM();
        mDoMtx_XYZrotM(((char*)&now__14mDoMtx_stack_c + 0), 8011, -20224);
    }
    return _restgpr_29(PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x6d4 + 36)));
}

/* 0000048C-000005A0       .text initTexPatternAnm__11daNpc_Kg2_cFb */
void daNpc_Kg2_c::initTexPatternAnm(bool) {
    /* _savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* field_0x6ec = ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(((char*)&l_btp_ix_tbl + 0), ((char*)&g_dComIfG_gameInfo + -16460), 64); */
    if (this->field_0x6ec == 0) {
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(((char*)&l_btp_ix_tbl + 0), ((char*)&g_dComIfG_gameInfo + -16460), 64)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 3), 299, ((char*)&@stringBase0 + 19));
        OSPanic(((char*)&@stringBase0 + 3), 299, ((char*)&@stringBase0 + 30));
    }
    /* if (((mDoExt_btpAnm*)((_savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7) + 1776)))->init(this->field_0x4, this->field_0x6ec, 1, 2, 0, -1) == 0) { */
        /* return 0; */
    /* field_0x704 = 0; */
    /* field_0x706 = 0; */
    return _restgpr_29(1);
}

/* 000005A0-000006EC       .text playTexPatternAnm__11daNpc_Kg2_cFv */
void daNpc_Kg2_c::playTexPatternAnm() {
        /* if (this->field_0x738 != 1) goto L_514; */
        /* if (this->field_0x748 != 0) goto L_514; */
        /* if (this->field_0x704 != 2) goto L_514; */
        /* field_0x704 = 0; */
        /* field_0x748 = 4; */
        initTexPatternAnm(1);
        /* goto L_5e8; */
        /* L_514:; */
        /* if (cLib_calcTimer<s>__FPs((this + 1798)) != 0) goto L_5e8; */
        /* if (this->field_0x748 != 4) goto L_59c; */
        /* if (this->field_0x704 != 0) goto L_568; */
        /* field_0x704 = 1; */
        cM_rndF(cLib_calcTimer<s>__FPs((this + 1798)));
        /* goto L_5e8; */
        /* L_568:; */
        /* field_0x704 = 0; */
        cM_rndF(cM_rndF(cLib_calcTimer<s>__FPs((this + 1798))));
        /* field_0x706 = 0; */
        /* goto L_5e8; */
        /* L_59c:; */
        /* if (this->field_0x704 < (this->field_0x6 & 65535)) goto L_5e0; */
        /* field_0x704 = (this->field_0x6 - this->field_0x704); */
        /* cM_rndF(this->field_0x704); */
        /* goto L_5e8; */
        /* L_5e0:; */
        /* field_0x704 = (cM_rndF(this->field_0x704) + 1); */
        /* L_5e8:; */
        /* return cM_rndF(this->field_0x704); */
}

/* 000006EC-00000838       .text setAnm__11daNpc_Kg2_cFScf */
void daNpc_Kg2_c::setAnm(signed char, float) {
    /* if (farg0 > this->field_0x68) { */
    if ((char & 255) != (this->field_0x749 & 255)) {
        /* if ((this->field_0x749 & 255) != -1) goto L_708; */
        /* field_0x749 = char; */
        /* dNpc_setAnm(this->field_0x330, ((C_@2100 + 0) + 116), ((C_@4041 + 0) + 12), -1, ((char*)&@stringBase0 + 0), arg5, arg6, arg7); */
        /* if (this->field_0x749 == 12) goto L_708; */
        /* field_0x68 = 0; */
        /* field_0x64 = 0; */
    }
    /* L_708:; */
    if (this->field_0x749 == 2) {
        /* field_0x29b = 0; */
        /* field_0x29c = 1; */
    } else {
        /* field_0x29b = 1; */
        /* field_0x29c = 1; */
    }
    /* return this->field_0x330; */
}

/* 00000838-000009E8       .text subAnm__11daNpc_Kg2_cFv */
void daNpc_Kg2_c::subAnm() {
        /* if (this->field_0x748 != 4) goto L_7b8; */
        ((JAIZelBasic*)(base))->seStart(16660, (this + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
        /* L_7b8:; */
        /* if ((this->field_0x749 & 255) == 3) goto L_7d0; */
        /* if ((this->field_0x749 & 255) != 13) goto L_814; */
        /* L_7d0:; */
        /* if (((J3DFrameCtrl*)((this->field_0x330 + 88)))->checkPass() == 0) goto L_814; */
        /* field_0x736 = 1; */
        /* if (this->field_0x749 != 3) goto L_808; */
        /* field_0x737 = 3; */
        /* goto L_8e4; */
        /* L_808:; */
        /* field_0x737 = 4; */
        /* goto L_8e4; */
        /* L_814:; */
        /* if (this->field_0x749 != 9) goto L_84c; */
        /* if (((J3DFrameCtrl*)((this->field_0x330 + 88)))->checkPass() == 0) goto L_84c; */
        /* field_0x736 = 1; */
        /* field_0x737 = 2; */
        /* goto L_8e4; */
        /* L_84c:; */
        /* if (this->field_0x749 != 12) goto L_88c; */
        /* if (((J3DFrameCtrl*)((this->field_0x330 + 88)))->checkPass() == 0) goto L_88c; */
        /* field_0x736 = 0; */
        setAnm(1);
        /* goto L_8e4; */
        /* L_88c:; */
        /* if (this->field_0x749 != 13) goto L_8e4; */
        /* if (((J3DFrameCtrl*)((this->field_0x330 + 88)))->checkPass() == 0) goto L_8e4; */
        /* L_8e4:; */
        return setAnm(4);
}

/* 000009E8-00000B3C       .text chkAttention__11daNpc_Kg2_cF4cXyzs */
void daNpc_Kg2_c::chkAttention(cXyz, short) {
    /* _savegpr_28(this, cXyz, short, arg3, arg4, arg5, arg6, arg7); */
    /* if ((((current - base) * (current - base)) + ((this->field_0x200 - this->field_0x8) * (this->field_0x200 - this->field_0x8))) < this->field_0x68) { */
    cM_atan2s(((char*)&l_HIO + 0));
    if (this->field_0x72c != 0) {
    }
    if ((this->field_0x28 + 1820) > abs()) {
        /* if ((this->field_0x2c + this->field_0xa8) < this->field_0x8) goto L_a24; */
    }
    /* L_a24:; */
    return _restgpr_28(1);
}

/* 00000B3C-00000BC0       .text eventOrder__11daNpc_Kg2_cFv */
void daNpc_Kg2_c::eventOrder() {
        /* if ((this->field_0x750 & 255) == 1) goto L_a74; */
        /* if ((this->field_0x750 & 255) != 2) goto L_a94; */
        /* L_a74:; */
        /* if (this->field_0x750 != 1) goto L_ac4; */
        fopAcM_orderSpeakEvent(this);
        /* goto L_ac4; */
        /* L_a94:; */
        /* if (this->field_0x750 != 3) goto L_ac4; */
        /* L_ac4:; */
        return fopAcM_orderOtherEventId(fopAcM_orderSpeakEvent(this), this->field_0x758, 255);
}

/* 00000BC0-00000CC4       .text checkOrder__11daNpc_Kg2_cFv */
void daNpc_Kg2_c::checkOrder() {
        /* if (this->field_0xf8 != 2) goto L_b94; */
        /* if (__ptmf_cmpr((this + 1852)) == 0) goto L_b88; */
        /* if (__ptmf_test((this + 1852)) == 0) goto L_b54; */
        /* field_0x763 = -1; */
        __ptmf_scall(this, 0);
        /* L_b54:; */
        /* field_0x763 = 0; */
        __ptmf_scall(this, 0);
        /* L_b88:; */
        /* field_0x750 = 0; */
        /* goto L_bc4; */
        /* L_b94:; */
        /* if (0 != 1) goto L_bc4; */
        /* if ((this->field_0x750 & 255) == 1) goto L_bb4; */
        /* if ((this->field_0x750 & 255) != 2) goto L_bc4; */
        /* L_bb4:; */
        /* field_0x750 = 0; */
        /* field_0x72d = 1; */
        /* L_bc4:; */
        return __ptmf_scall(this, 0);
}

/* 00000CC4-00000E38       .text getMsg__11daNpc_Kg2_cFv */
void daNpc_Kg2_c::getMsg() {
        /* if (this->field_0x74c == 0) goto L_cb8; */
        /* ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->getEventReg((arg1 + -18685)); */
        /* if (this->field_0x74c != 12613) goto L_c5c; */
        /* if (this->field_0x735 != 1) goto L_c3c; */
        /* field_0x74c = 12619; */
        /* goto L_ca8; */
        /* L_c3c:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(9480) == 0) goto L_ca8; */
        /* field_0x74c = 12620; */
        /* goto L_ca8; */
        /* L_c5c:; */
        /* if (12620 != 12624) goto L_c78; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(9480) == 0) goto L_ca8; */
        /* field_0x74c = 12628; */
        /* goto L_ca8; */
        /* L_c78:; */
        /* if (12628 != 12626) goto L_ca8; */
        /* if ((((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(9480) & 16777215) != 1) goto L_c98; */
        /* field_0x74c = 12630; */
        /* goto L_ca8; */
        /* L_c98:; */
        /* if (12630 < 2) goto L_ca8; */
        /* field_0x74c = 12632; */
        /* L_ca8:; */
        /* field_0x74c = 0; */
        /* goto L_d34; */
        /* L_cb8:; */
        /* if (this->field_0x738 != 1) goto L_ccc; */
        return 12635;
        /* L_ccc:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(9536) == 0) goto L_d14; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(9504) != 0) goto L_d14; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(9504);
        return 12608;
        /* L_d14:; */
        /* if (this->field_0x734 != 0) goto L_d30; */
        /* field_0x734 = 1; */
        return 12601;
        /* L_d30:; */
        /* L_d34:; */
        return 12602;
}

/* 00000E38-00001028       .text next_msgStatus__11daNpc_Kg2_cFPUl */
void daNpc_Kg2_c::next_msgStatus(u32*) {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bgt * / 1) goto L_f1c; */
        base = (base + 1);
        /* goto L_f20; */
        base = 12615;
        /* goto L_f20; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->getEventReg() != 0) goto L_ddc; */
        base = 12606;
        /* goto L_f20; */
        /* L_ddc:; */
        /* if (dLib_getIplDaysFromSaveTime() >= 4) goto L_df4; */
        base = 12603;
        /* goto L_f20; */
        /* L_df4:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 4440)))->isEventBit(258) == 0) goto L_e20; */
        base = 12604;
        /* goto L_f20; */
        /* L_e20:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 4440)))->onEventBit(258);
        base = 12605;
        /* goto L_f20; */
        /* if (this->field_0xfa != 0) goto L_e70; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(9480);
        /* field_0x735 = 1; */
        base = 12619;
        /* goto L_f20; */
        /* L_e70:; */
        base = 12618;
        /* goto L_f20; */
        base = 12616;
        /* goto L_f20; */
        base = 12607;
        /* goto L_f20; */
        /* if (this->field_0xfa != 0) goto L_ee4; */
        /* if (this->field_0x4 >= 50) goto L_ec4; */
        base = 12611;
        /* goto L_f20; */
        /* L_ec4:; */
        /* field_0x5b54 = (this->field_0x5b54 + -50); */
        /* field_0x5bc5 = 25; */
        base = 12612;
        /* goto L_f20; */
        /* L_ee4:; */
        base = 12610;
        /* goto L_f20; */
        /* if (this->field_0x734 != 0) goto L_f10; */
        /* field_0x734 = 1; */
        base = 12601;
        /* goto L_f20; */
        /* L_f10:; */
        base = 12602;
        /* goto L_f20; */
        /* L_f1c:; */
        /* L_f20:; */
        return _restgpr_29(16, ((char*)&g_dComIfG_gameInfo + 0));
}

/* 00001028-000012EC       .text anmAtr__11daNpc_Kg2_cFUs */
void daNpc_Kg2_c::anmAtr(u16) {
        /* if (this->field_0x738 == 1) goto L_11e8; */
        /* if (this->field_0x5bcf > 11) goto L_1168; */
        /* setAnm(0, C_@4224, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x748 = 0; */
        initTexPatternAnm(1);
        /* goto L_1168; */
        ((daNpc_Kg2_c*)(initTexPatternAnm(1)))->setAnm(1, C_@4224);
        /* field_0x748 = 0; */
        initTexPatternAnm(1);
        /* goto L_1168; */
        ((daNpc_Kg2_c*)(initTexPatternAnm(1)))->setAnm(2, C_@4224);
        /* field_0x748 = 1; */
        initTexPatternAnm(1);
        /* goto L_1168; */
        ((daNpc_Kg2_c*)(initTexPatternAnm(1)))->setAnm(3, C_@4224);
        /* field_0x748 = 0; */
        initTexPatternAnm(1);
        /* goto L_1168; */
        ((daNpc_Kg2_c*)(initTexPatternAnm(1)))->setAnm(5, C_@4224);
        /* field_0x748 = 1; */
        initTexPatternAnm(1);
        /* goto L_1168; */
        ((daNpc_Kg2_c*)(initTexPatternAnm(1)))->setAnm(6, C_@4224);
        /* field_0x748 = 1; */
        initTexPatternAnm(1);
        /* goto L_1168; */
        ((daNpc_Kg2_c*)(initTexPatternAnm(1)))->setAnm(7, C_@4224);
        /* field_0x748 = 2; */
        initTexPatternAnm(1);
        /* goto L_1168; */
        ((daNpc_Kg2_c*)(initTexPatternAnm(1)))->setAnm(8, C_@4224);
        /* field_0x748 = 3; */
        initTexPatternAnm(1);
        /* goto L_1168; */
        ((daNpc_Kg2_c*)(initTexPatternAnm(1)))->setAnm(9, C_@4224);
        /* field_0x748 = 0; */
        initTexPatternAnm(1);
        /* goto L_1168; */
        ((daNpc_Kg2_c*)(initTexPatternAnm(1)))->setAnm(10, C_@4224);
        /* field_0x748 = 1; */
        initTexPatternAnm(1);
        /* goto L_1168; */
        ((daNpc_Kg2_c*)(initTexPatternAnm(1)))->setAnm(11, C_@4224);
        /* field_0x748 = 2; */
        initTexPatternAnm(1);
        /* goto L_1168; */
        ((daNpc_Kg2_c*)(initTexPatternAnm(1)))->setAnm(14, C_@4224);
        /* field_0x748 = 2; */
        initTexPatternAnm(1);
        /* L_1168:; */
        /* if (this->field_0x749 != 3) goto L_11e0; */
        /* if (((J3DFrameCtrl*)((this->field_0x330 + 88)))->checkPass(C_@4159) == 0) goto L_11e0; */
        setAnm(4, C_@4224);
        /* field_0x748 = 0; */
        initTexPatternAnm(1);
        /* L_11e0:; */
        /* field_0x5bcf = 255; */
        /* L_11e8:; */
        return initTexPatternAnm(1);
}

/* 000012EC-00001308       .text setAttention__11daNpc_Kg2_cFv */
void daNpc_Kg2_c::setAttention() {
    eyePos = 0;
    /* field_0x264 = 0; */
    /* field_0x268 = 0; */
    return this;
}

/* 00001308-00001448       .text lookBack__11daNpc_Kg2_cFv */
void daNpc_Kg2_c::lookBack() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if ((this->field_0x760 & 255) >= 3) goto L_12d8; */
        /* if ((this->field_0x760 & 255) >= 1) goto L_126c; */
        /* goto L_12d8; */
        /* L_126c:; */
        /* if ((this->field_0x760 & 255) != 2) goto L_127c; */
        /* field_0x29a = 1; */
        /* L_127c:; */
        /* if (this->field_0x72c == 0) goto L_12d8; */
        dNpc_playerEyePos();
        /* L_12d8:; */
        /* if (this->field_0x29a == 0) goto L_1304; */
        /* cLib_addCalcAngleS2((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1824), this->field_0x22, 4, 2048); */
        /* goto L_130c; */
        /* L_1304:; */
        /* field_0x720 = 0; */
        /* L_130c:; */
        /* return _restgpr_29(((dNpc_JntCtrl_c*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 656)))->lookAtTarget((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518))); */
}

/* 00001448-00001468       .text CallbackCreateHeap__FP10fopAc_ac_c */
static BOOL CallbackCreateHeap(fopAc_ac_c* i_this) {
    static_cast<daNpc_Kg2_c*>(i_this)->CreateHeap();
    return TRUE;
}

/* 00001468-0000180C       .text CreateHeap__11daNpc_Kg2_cFv */
void daNpc_Kg2_c::CreateHeap() {
    /* _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(5);
    if (/* bne */ 1) {
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(5)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 3), 913, ((char*)&@stringBase0 + 35));
        OSPanic(((char*)&@stringBase0 + 3), 913, ((char*)&@stringBase0 + 30));
    }
    __nw(180);
    if (/* beq */ 1) {
    }
    /* field_0x330 = __ct(((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(26), 1); */
    if (this->field_0x330 != 0) {
        /* if (this->field_0x50 == 0) goto L_14a4; */
    }
    return 0;
    /* L_14a4:; */
    /* field_0x298 = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 50)); */
    if (this->field_0x298 != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 50))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 3), 929, ((char*)&@stringBase0 + 55)); */
        OSPanic(((char*)&@stringBase0 + 3), 929, ((char*)&@stringBase0 + 30));
    }
    /* field_0x299 = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 82)); */
    if (this->field_0x299 != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 82))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 3), 934, ((char*)&@stringBase0 + 92)); */
        OSPanic(((char*)&@stringBase0 + 3), 934, ((char*)&@stringBase0 + 30));
    }
    /* field_0x6c4 = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 123)); */
    if (this->field_0x6c4 != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 123))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 3), 938, ((char*)&@stringBase0 + 129)); */
        OSPanic(((char*)&@stringBase0 + 3), 938, ((char*)&@stringBase0 + 30));
    }
    /* field_0x748 = 0; */
    /* if (((daNpc_Kg2_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->initTexPatternAnm(0) == 0) { */
        /* return 0; */
    /* field_0x6d4 = mDoExt_J3DModel(((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(6)); */
    if (this->field_0x6d4 == 0) {
        return 0;
    }
    /* if (((mDoExt_btpAnm*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1752)))->init(((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(6), ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(10), 1, 2, 0, -1, 0) == 0) { */
        /* return 0; */
    /* field_0x8 = 0; */
    /* field_0x8 = 0; */
    /* field_0x14 = _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* ((dBgS_AcchCir*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1272)))->SetWall(((char*)&nodeCallBack__FP7J3DNodei + 0), this->field_0x4); */
    /* ((dBgS_Acch*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 820)))->Set((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 484), _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 1, (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1272), (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 544), 0); */
    return _restgpr_27(1);
}

/* 0000180C-00001A9C       .text CreateInit__11daNpc_Kg2_cFv */
void daNpc_Kg2_c::CreateInit() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x280 = 10; */
        /* field_0x26d = 110; */
        /* field_0x26f = 110; */
        gravity = 0;
        /* if (__ptmf_cmpr((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1852)) == 0) goto L_1808; */
        /* if (__ptmf_test((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1852)) == 0) goto L_17d4; */
        /* field_0x763 = -1; */
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* L_17d4:; */
        /* field_0x763 = 0; */
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* L_1808:; */
        /* field_0x708 = 0; */
        /* field_0x70c = 0; */
        /* field_0x710 = 0; */
        /* ((dCcD_Stts*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1336)))->Init(255, 255, _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* ((dCcD_Cyl*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1396)))->Set(((char*)&l_cyl_src + 0)); */
        /* field_0x5b8 = (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1336); */
        /* ((fopNpc_npc_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setCollision(); */
        /* ((dNpc_EventCut_c*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 708)))->setActorInfo2(((char*)&@stringBase0 + 146), _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* field_0x32c = (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 656); */
        /* field_0x734 = 0; */
        /* field_0x735 = 0; */
        /* field_0x736 = 0; */
        /* field_0x737 = 0; */
        /* field_0x74c = 0; */
        /* field_0x29b = 1; */
        /* field_0x29c = 1; */
        /* field_0x750 = 0; */
        /* field_0x754 = 4; */
        /* field_0x758 = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getEventIdx(((char*)&@stringBase0 + 150), 255); */
        /* field_0x75a = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getEventIdx(((char*)&@stringBase0 + 165), 255); */
        /* field_0x75c = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getEventIdx(((char*)&@stringBase0 + 180), 255); */
        /* field_0x75e = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getEventIdx(((char*)&@stringBase0 + 192), 255); */
        /* ((daNpc_Kg2_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->set_mtx(); */
        /* if (this->field_0x24 != this->field_0xb4) goto L_1974; */
        /* if (this->field_0x24 >= this->field_0xb8) goto L_1974; */
        /* field_0x738 = 0; */
        /* ((daNpc_Kg2_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm(1); */
        /* goto L_198c; */
        /* L_1974:; */
        /* field_0x738 = 1; */
        /* ((daNpc_Kg2_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm(13); */
        /* L_198c:; */
        /* base = _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        return _restgpr_29(1);
}

/* 00001A9C-00001BDC       .text wait01__11daNpc_Kg2_cFv */
void daNpc_Kg2_c::wait01() {
        /* if (this->field_0x24 != this->field_0xb4) goto L_1a30; */
        /* if (this->field_0x24 >= this->field_0xb8) goto L_1a30; */
        /* if (this->field_0x738 != 1) goto L_1a68; */
        /* field_0x738 = 0; */
        /* setAnm(12, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x748 = 0; */
        initTexPatternAnm(1);
        /* goto L_1a68; */
        /* L_1a30:; */
        /* if (this->field_0x738 != 0) goto L_1a68; */
        /* field_0x738 = 1; */
        setAnm(13);
        /* field_0x748 = 0; */
        initTexPatternAnm(1);
        /* L_1a68:; */
        /* if (this->field_0x72d == 0) goto L_1a80; */
        /* field_0x760 = 2; */
        /* goto L_1ad8; */
        /* L_1a80:; */
        /* if (this->field_0x72c == 0) goto L_1ad8; */
        /* if (this->field_0x1fc >= this->field_0xbc) goto L_1ad8; */
        /* if ((this->field_0x749 & 255) == 13) goto L_1ad8; */
        /* if ((this->field_0x749 & 255) == 12) goto L_1ad8; */
        /* field_0x750 = 2; */
        /* L_1ad8:; */
        /* return this->field_0x5b38; */
}

/* 00001BDC-00001CA4       .text talk01__11daNpc_Kg2_cFv */
void daNpc_Kg2_c::talk01() {
        /* if ((talk(1) & 65535) != 18) goto L_1ba4; */
        /* field_0x760 = 1; */
        /* field_0x72d = 0; */
        /* if (this->field_0x6a4 != 12612) goto L_1b58; */
        /* field_0x750 = 3; */
        /* field_0x754 = 0; */
        /* goto L_1ba4; */
        /* L_1b58:; */
        /* if (this->field_0x738 != 0) goto L_1b90; */
        setAnm(1, C_@4224);
        /* field_0x748 = 0; */
        initTexPatternAnm(1);
        /* goto L_1ba4; */
        /* L_1b90:; */
        /* L_1ba4:; */
        return setAnm(4, C_@4224);
}

/* 00001CA4-00001D88       .text evn_setAnm_init__11daNpc_Kg2_cFi */
void daNpc_Kg2_c::evn_setAnm_init(int) {
        /* _savegpr_27(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP() == 0) goto L_1c80; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP() == 0) goto L_1c54; */
        /* L_1c54:; */
        /* ((daNpc_Kg2_c*)(_savegpr_27(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm((base & 255)); */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP() == 0) goto L_1c78; */
        /* goto L_1c80; */
        /* L_1c78:; */
        /* field_0x739 = 0; */
        /* L_1c80:; */
        return _restgpr_27(1);
}

/* 00001D88-00001E4C       .text evn_setAnm__11daNpc_Kg2_cFv */
void daNpc_Kg2_c::evn_setAnm() {
    if (this->field_0x749 == 12) {
        /* if (((J3DFrameCtrl*)((this->field_0x330 + 88)))->checkPass(C_@4159, arg2, arg3, arg4, arg5, arg6, arg7) != 0) goto L_1d38; */
        /* field_0x739 = (this->field_0x739 + -1); */
    } else {
        /* if (((J3DFrameCtrl*)((this->field_0x330 + 88)))->checkPass(C_@4159) != 0) goto L_1d38; */
        /* field_0x739 = (this->field_0x739 + -1); */
    }
    /* L_1d38:; */
    return 1;
}

/* 00001E4C-00001F14       .text evn_jnt_lock_init__11daNpc_Kg2_cFi */
void daNpc_Kg2_c::evn_jnt_lock_init(int) {
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(int, ((char*)&@stringBase0 + 221), 3, arg4) == 0) goto L_1da4; */
        /* L_1da4:; */
        /* if (base == 2) goto L_1df0; */
        /* if (/ * bge * / 1) goto L_1dc0; */
        /* if (base == 0) goto L_1dcc; */
        /* if (/ * bge * / 1) goto L_1ddc; */
        /* goto L_1e10; */
        /* L_1dc0:; */
        /* if (base >= 4) goto L_1e10; */
        /* goto L_1e04; */
        /* L_1dcc:; */
        /* field_0x29b = 0; */
        /* field_0x29c = 0; */
        /* goto L_1e10; */
        /* L_1ddc:; */
        /* field_0x29b = 1; */
        /* field_0x29c = 0; */
        /* goto L_1e10; */
        /* L_1df0:; */
        /* field_0x29b = 0; */
        /* field_0x29c = 1; */
        /* goto L_1e10; */
        /* L_1e04:; */
        /* field_0x29b = 1; */
        /* field_0x29c = 1; */
        /* L_1e10:; */
        return 1;
}

/* 00001F14-00001F88       .text evn_talk_init__11daNpc_Kg2_cFi */
void daNpc_Kg2_c::evn_talk_init(int) {
    /* ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(int, ((char*)&@stringBase0 + 225), 3, arg4); */
    /* field_0x6ac = -1; */
    /* field_0x6b0 = 0; */
    }
    return 1;


/* 00001F88-00001FBC       .text evn_talk__11daNpc_Kg2_cFv */
void daNpc_Kg2_c::evn_talk() {
    return ((18 - (talk(1) & 65535)) >> 5);
}

/* 00001FBC-00002070       .text evn_createItem_init__11daNpc_Kg2_cFi */
void daNpc_Kg2_c::evn_createItem_init(int) {
        /* if ((((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->getEventReg((int + -18685)) & 16777215) == 2) goto L_1f24; */
        /* if (/ * bge * / 1) goto L_1f2c; */
        /* if ((((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->getEventReg((int + -18685)) & 16777215) >= 0) goto L_1f1c; */
        /* goto L_1f2c; */
        /* goto L_1f2c; */
        /* L_1f1c:; */
        /* goto L_1f30; */
        /* L_1f24:; */
        /* goto L_1f30; */
        /* L_1f2c:; */
        /* L_1f30:; */
        fopAcM_createItemForPresentDemo((this + 504), (6 & 16777215), 0, -1, (this->field_0x20a & 255), 0, 0);
        /* if (6 == 65535) goto L_1f6c; */
        /* field_0x52a8 = fopAcM_createItemForPresentDemo((this + 504), (6 & 16777215), 0, -1, (this->field_0x20a & 255), 0, 0); */
        /* L_1f6c:; */
        return 1;
}

/* 00002070-000021EC       .text privateCut__11daNpc_Kg2_cFv */
void daNpc_Kg2_c::privateCut() {
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x2c4, 0, 0) != -1) goto L_1fd0; */
        return 0;
        /* L_1fd0:; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyActIdx(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x2c4, 0, 0), ((char*)&cut_name_tbl$4794 + 0), 5, 1, 0) != -1) goto L_200c; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x2c4, 0, 0));
        /* goto L_20e4; */
        /* L_200c:; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getIsAddvance(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x2c4, 0, 0)) == 0) goto L_2088; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyActIdx(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x2c4, 0, 0), ((char*)&cut_name_tbl$4794 + 0), 5, 1, 0) == 2) goto L_2088; */
        /* if (/ * bge * / 1) goto L_203c; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyActIdx(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x2c4, 0, 0), ((char*)&cut_name_tbl$4794 + 0), 5, 1, 0) == 0) goto L_204c; */
        /* if (/ * bge * / 1) goto L_205c; */
        /* goto L_2088; */
        /* L_203c:; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyActIdx(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x2c4, 0, 0), ((char*)&cut_name_tbl$4794 + 0), 5, 1, 0) == 4) goto L_207c; */
        /* if (/ * bge * / 1) goto L_2088; */
        /* goto L_206c; */
        /* L_204c:; */
        /* ((daNpc_Kg2_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->evn_setAnm_init(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x2c4, 0, 0)); */
        /* goto L_2088; */
        /* L_205c:; */
        /* ((daNpc_Kg2_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->evn_jnt_lock_init(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x2c4, 0, 0)); */
        /* goto L_2088; */
        /* L_206c:; */
        /* ((daNpc_Kg2_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->evn_talk_init(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x2c4, 0, 0)); */
        /* goto L_2088; */
        /* L_207c:; */
        /* ((daNpc_Kg2_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->evn_createItem_init(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x2c4, 0, 0)); */
        /* L_2088:; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyActIdx(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x2c4, 0, 0), ((char*)&cut_name_tbl$4794 + 0), 5, 1, 0) == 2) goto L_20b8; */
        /* if (/ * bge * / 1) goto L_20a0; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyActIdx(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x2c4, 0, 0), ((char*)&cut_name_tbl$4794 + 0), 5, 1, 0) == 0) goto L_20ac; */
        /* goto L_20cc; */
        /* L_20a0:; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyActIdx(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x2c4, 0, 0), ((char*)&cut_name_tbl$4794 + 0), 5, 1, 0) >= 4) goto L_20cc; */
        /* goto L_20c0; */
        /* L_20ac:; */
        /* ((daNpc_Kg2_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->evn_setAnm(); */
        /* goto L_20d0; */
        /* L_20b8:; */
        return 1;
        /* L_20c0:; */
        /* ((daNpc_Kg2_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->evn_talk(); */
        /* goto L_20d0; */
        /* L_20cc:; */
        /* L_20d0:; */
        /* if (1 == 0) goto L_20e4; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x2c4, 0, 0));
        /* L_20e4:; */
        return _restgpr_28(1);
}

/* 000021EC-00002250       .text processMove__11daNpc_Kg2_cFv */
void daNpc_Kg2_c::processMove() {
    /* __ptmf_scall(this, 0, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (((dNpc_EventCut_c*)((this + 708)))->cutProc() != 0) {
        /* if (privateCut() != 0) goto L_214c; */
    }
    return 1;
    /* L_214c:; */
    return 0;
}

/* 00002250-00002334       .text wait_action__11daNpc_Kg2_cFPv */
void daNpc_Kg2_c::wait_action(void*) {
        /* if (this->field_0x763 != 0) goto L_219c; */
        /* field_0x760 = 1; */
        /* field_0x763 = (this->field_0x763 + 1); */
        /* goto L_2230; */
        /* L_219c:; */
        /* if ((this->field_0x763 & 255) == -1) goto L_2230; */
        /* field_0x72c = ((daNpc_Kg2_c*)(this->field_0x763))->chkAttention(); */
        /* field_0x750 = 0; */
        /* if ((this->field_0x760 & 255) == 2) goto L_2218; */
        /* if (/ * bge * / 1) goto L_2220; */
        /* if ((this->field_0x760 & 255) >= 1) goto L_220c; */
        /* goto L_2220; */
        /* L_220c:; */
        wait01();
        /* goto L_2220; */
        /* L_2218:; */
        talk01();
        /* L_2220:; */
        lookBack();
        setAttention();
        /* L_2230:; */
        return 1;
}

/* 00002334-00002590       .text event_wait_action__11daNpc_Kg2_cFPv */
void daNpc_Kg2_c::event_wait_action(void*) {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x763 != 0) goto L_2284; */
        /* field_0x760 = 1; */
        /* field_0x763 = (this->field_0x763 + 1); */
        /* goto L_2488; */
        /* L_2284:; */
        /* if ((this->field_0x763 & 255) == -1) goto L_2488; */
        /* field_0x72c = ((daNpc_Kg2_c*)(this->field_0x763))->chkAttention(); */
        /* ((daNpc_Kg2_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->lookBack(); */
        /* ((daNpc_Kg2_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAttention(); */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->endCheck(this->field_0x758) == 0) goto L_2488; */
        /* if (this->field_0x754 != 0) goto L_2320; */
        /* field_0x750 = 3; */
        /* field_0x754 = 3; */
        /* goto L_23e8; */
        /* L_2320:; */
        /* if (3 != 3) goto L_2360; */
        /* if (base != 1) goto L_234c; */
        /* field_0x750 = 3; */
        /* field_0x754 = 1; */
        /* goto L_23e8; */
        /* L_234c:; */
        /* field_0x750 = 1; */
        /* field_0x74c = 12622; */
        /* goto L_23e8; */
        /* L_2360:; */
        /* if (12622 != 1) goto L_23c4; */
        /* field_0x750 = 3; */
        /* field_0x754 = 2; */
        /* if (((((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->getEventReg() & 16777215) + 1) > 3) goto L_23ac; */
        /* L_23ac:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->setEventReg();
        /* goto L_23e8; */
        /* L_23c4:; */
        /* if (((((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->getEventReg() & 16777215) + 1) != 2) goto L_23e0; */
        /* field_0x750 = 1; */
        /* field_0x74c = 12634; */
        /* goto L_23e8; */
        /* L_23e0:; */
        /* field_0x754 = 4; */
        /* L_23e8:; */
        /* if (__ptmf_cmpr((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1852)) == 0) goto L_2488; */
        /* if (__ptmf_test((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1852)) == 0) goto L_2454; */
        /* field_0x763 = -1; */
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* L_2454:; */
        /* field_0x763 = 0; */
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* L_2488:; */
        return _restgpr_29(1);
}

/* 00002590-000027BC       .text _create__11daNpc_Kg2_cFv */
cPhs_State daNpc_Kg2_c::_create() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_2614; */
        /* if (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_2608; */
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
        /* field_0x6d8 = 0; */
        /* field_0x6dc = 0; */
        /* field_0x6d8 = 0; */
        /* field_0x6e4 = 0; */
        /* field_0x6f0 = 0; */
        /* field_0x6f4 = 0; */
        /* field_0x6f0 = 0; */
        /* field_0x6fc = 0; */
        /* L_2608:; */
        /* L_2614:; */
        /* if (dComIfG_resLoad((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1736), ((char*)&@stringBase0 + 0), 0) != 4) goto L_26b4; */
        /* if (fopAcM_entrySolidHeap(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), ((char*)&CallbackCreateHeap__FP10fopAc_ac_c + 0), 11520) != 0) goto L_2654; */
        return 5;
        /* L_2654:; */
        cullMtx = (this->field_0x50 + 36);
        /* if (this->field_0x4 != 0) goto L_269c; */
        /* field_0x4 = ((mDoHIO_subRoot_c*)(((char*)&mDoHIO_root + 4)))->createChild(((char*)&@stringBase0 + 275), ((char*)&l_HIO + 0)); */
        /* L_269c:; */
        /* if (((daNpc_Kg2_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->CreateInit() != 0) goto L_26b4; */
        return 5;
        /* L_26b4:; */
        /* return _restgpr_29(dComIfG_resLoad((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1736), ((char*)&@stringBase0 + 0), 0)); */
}

/* 00002B6C-00002BFC       .text _delete__11daNpc_Kg2_cFv */
BOOL daNpc_Kg2_c::_delete() {
    /* dComIfG_resDelete((this + 1736), ((char*)&@stringBase0 + 0), arg2); */
    if (heap != 0) {
        /* if (this->field_0x330 != 0) goto L_2ac0; */
        /* ((mDoExt_McaMorf*)(this->field_0x330))->stopZelAnime(); */
    }
    /* L_2ac0:; */
    base = 0;
    if (this->field_0x4 != 0) {
        /* ((mDoHIO_subRoot_c*)(((char*)&mDoHIO_root + 4)))->deleteChild(this->field_0x4); */
        /* field_0x4 = -1; */
    }
    return 1;
}

/* 00002BFC-00002D14       .text _execute__11daNpc_Kg2_cFv */
BOOL daNpc_Kg2_c::_execute() {
    /* ((dNpc_JntCtrl_c*)((this + 656)))->setParam(this->field_0x12, this->field_0x16, this->field_0x1a, this->field_0x1e, this->field_0x10, this->field_0x14, this->field_0x18); */
    playTexPatternAnm();
    /* ((mDoExt_McaMorf*)(this->field_0x330))->play((this + 608), 0, 0); */
    /* ((mDoExt_McaMorf*)(this->field_0x330))->calc(); */
    checkOrder();
    processMove();
    eventOrder();
    subAnm();
    fopAcM_posMoveF(this, (this + 1336));
    ((dBgS_Acch*)((this + 820)))->CrrPos(((char*)&g_dComIfG_gameInfo + 4768));
    /* field_0x1b5 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetRoomId((this + 1052)); */
    /* field_0x1b6 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetPolyColor((this + 1052)); */
    set_mtx();
    setCollision(C_@4185);
    return 1;
}

/* 00002D14-00002E74       .text _draw__11daNpc_Kg2_cFv */
BOOL daNpc_Kg2_c::_draw() {
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(0, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x50, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
    /* ((mDoExt_btpAnm*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1776)))->entry(this->field_0x4, this->field_0x704); */
    /* ((mDoExt_McaMorf*)(this->field_0x330))->entryDL(); */
    /* ((J3DMaterialTable*)((this->field_0x4 + 88)))->removeTexNoAnimator(this->field_0x6f8); */
    if (this->field_0x736 != 0) {
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x6d4, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        /* ((mDoExt_btpAnm*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1752)))->entry(this->field_0x4, this->field_0x737); */
        /* mDoExt_modelUpdateDL(this->field_0x6d4); */
        /* ((J3DMaterialTable*)((this->field_0x4 + 88)))->removeTexNoAnimator(this->field_0x6e0); */
    }
    /* field_0x6d0 = dComIfGd_setShadow(this->field_0x6d0, 1, this->field_0x50); */
    /* dSnap_RegistFig(129, _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), this->field_0x206); */
    return _restgpr_28(1);
}

/* 00002E74-00002E94       .text daNpc_Kg2_Create__FP10fopAc_ac_c */
static cPhs_State daNpc_Kg2_Create(fopAc_ac_c* i_this) {
    return ((daNpc_Kg2_c*)i_this)->_create();

/* 00002E94-00002EB4       .text daNpc_Kg2_Delete__FP11daNpc_Kg2_c */
static BOOL daNpc_Kg2_Delete(daNpc_Kg2_c* i_this) {
    return ((daNpc_Kg2_c*)i_this)->_delete();

/* 00002EB4-00002ED4       .text daNpc_Kg2_Execute__FP11daNpc_Kg2_c */
static BOOL daNpc_Kg2_Execute(daNpc_Kg2_c* i_this) {
    return ((daNpc_Kg2_c*)i_this)->_execute();

/* 00002ED4-00002EF4       .text daNpc_Kg2_Draw__FP11daNpc_Kg2_c */
static BOOL daNpc_Kg2_Draw(daNpc_Kg2_c* i_this) {
    return ((daNpc_Kg2_c*)i_this)->_draw();

/* 00002EF4-00002EFC       .text daNpc_Kg2_IsDelete__FP11daNpc_Kg2_c */
static BOOL daNpc_Kg2_IsDelete(daNpc_Kg2_c*) {
    return 1;

static actor_method_class l_daNpc_Kg2_Method = {
    (process_method_func)daNpc_Kg2_Create,
    (process_method_func)daNpc_Kg2_Delete,
    (process_method_func)daNpc_Kg2_Execute,
    (process_method_func)daNpc_Kg2_IsDelete,
    (process_method_func)daNpc_Kg2_Draw,
};

actor_process_profile_definition g_profile_NPC_KG2 = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0007,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_NPC_KG2_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daNpc_Kg2_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_NPC_KG2_e,
    /* Actor SubMtd */ &l_daNpc_Kg2_Method,
    /* Status       */ fopAcStts_NOCULLEXEC_e | fopAcStts_CULL_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_ACTOR_e,
    /* Cull Type    */ fopAc_CULLBOX_12_e,
};

/* 由 fix_decomp_braces.py 补齐：反编译产物末尾缺 5 个 } */
}}}}}

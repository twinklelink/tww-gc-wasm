/**
 * d_a_mt.cpp
 * Enemy - Magtail
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_mt.h"
#include "m_Do/m_Do_ext.h"
#include "d/d_cc_d.h"

/* 000000EC-000001E8       .text __ct__10daMt_HIO_cFv */
daMt_HIO_c::daMt_HIO_c() {
    /* field_0x0 = 0; */
    /* field_0x0 = 0; */
    /* field_0x4 = 0; */
    /* field_0x5 = 0; */
    /* field_0x6 = 0; */
    /* field_0x7 = 0; */
    /* field_0x8 = 5500; */
    /* field_0xc = 0; */
    /* field_0x10 = 15; */
    /* field_0x14 = 0; */
    /* field_0x18 = 0; */
    /* field_0x1c = 0; */
    /* field_0x20 = 0; */
    /* field_0x24 = 0; */
    /* field_0x28 = 0; */
    /* field_0x2c = 0; */
    /* field_0x30 = 17; */
    /* field_0x32 = 40; */
    /* field_0x34 = 0; */
    /* field_0x38 = 45; */
    /* field_0x3c = 43; */
    /* field_0x3e = 47; */
    /* field_0x3a = 70; */
    /* field_0x40 = 0; */
    /* field_0x44 = 0; */
    /* field_0x48 = 0; */
    /* field_0x4c = 0; */
    /* field_0x50 = -5; */
    /* field_0x52 = 11000; */
    /* field_0x54 = 600; */
    /* field_0x58 = 0; */
    /* field_0x5c = 0; */
    return arg0;
}

/* 00000230-000002D8       .text anm_init__FP8mt_classifUcfi */
void anm_init(mt_class*, int, float, unsigned char, float, int) {
    /* return ((mDoExt_McaMorf*)(this->field_0x2c4))->setAnm(((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(int, ((char*)&g_dComIfG_gameInfo + -16460), 64, float, int), (float & 16777215), 0); */
}

/* 000002D8-00000350       .text mt_a_d_sub__FPvPv */
void mt_a_d_sub(void*, void*) {
    if (fopAc_IsActor(arg0) != 0) {
        /* if (this->field_0x8 == 217) goto L_24c; */
        /* field_0x0 = (this->field_0x0 + 1); */
        /* if (this->field_0x454 == 1) goto L_24c; */
        /* field_0x0 = (this->field_0x0 + 1); */
    }
    /* L_24c:; */
    return 0;
}

/* 00000350-00000390       .text mt_check__FP8mt_class */
void mt_check(mt_class*) {
    /* field_0x0 = 0; */
    /* field_0x0 = 0; */
    /* return fpcEx_Search(((char*)&mt_a_d_sub__FPvPv + 0), arg0, arg2, arg3, arg4, arg5, arg6, arg7); */
}

/* 00000390-00000478       .text mt_bg_check__FP8mt_class */
void mt_bg_check(mt_class*) {
    /* field_0x1fc = (this->field_0x1fc - (this->field_0x38 + this->field_0x18)); */
    /* field_0x1e8 = (this->field_0x1e8 - (this->field_0x38 + this->field_0x18)); */
    ((dBgS_Acch*)((arg0 + 3144)))->CrrPos(((char*)&g_dComIfG_gameInfo + 4768));
    /* field_0x1fc = (this->field_0x1fc + (this->field_0x38 + this->field_0x18)); */
    /* field_0x1e8 = (this->field_0x1e8 + (this->field_0x38 + this->field_0x18)); */
    /* if ((this->field_0x1d4 - this->field_0x1fc) < this->field_0x3c) { */
        /* if ((this->field_0x1fc - this->field_0xcdc) < this->field_0x40) goto L_36c; */
        /* field_0x1cbc = 1; */
    /* L_36c:; */
    return fopAcM_delete(arg0);
}

/* 00000478-0000053C       .text tex_anm_set__FP8mt_classUs */
void tex_anm_set(mt_class*, unsigned short) {
    /* field_0x345 = 1; */
    /* ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(((char*)&mt_tex_anm_idx + 0), ((char*)&g_dComIfG_gameInfo + -16460), 64, arg4, arg5); */
    /* field_0x346 = 1; */
    /* field_0x33c = ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(((char*)&mt_tex_anm_idx + 0), ((char*)&g_dComIfG_gameInfo + -16460), 64, arg4, arg5); */
    /* field_0x344 = 0; */
    /* field_0x8 = 0; */
    /* goto L_42c; */
    /* L_414:; */
    /* L_42c:; */
    /* if (((0 + 1) & 65535) >= this->field_0x1a) goto L_414; */
    /* return ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(((char*)&mt_tex_anm_idx + 0), ((char*)&g_dComIfG_gameInfo + -16460), 64, arg4, arg5); */
}

/* 0000053C-000005EC       .text mt_eye_tex_anm__FP8mt_class */
void mt_eye_tex_anm(mt_class*) {
        /* if (this->field_0x464 == 0) goto L_47c; */
        /* field_0x464 = (this->field_0x464 + -1); */
        /* goto L_4bc; */
        /* L_47c:; */
        cM_rndF(C_@4165);
        /* if (this->field_0x345 != 0) goto L_4bc; */
        tex_anm_set(arg0, 0);
        /* L_4bc:; */
        /* if (this->field_0x345 == 0) goto L_4ec; */
        /* if (this->field_0x344 >= this->field_0x346) goto L_4e4; */
        /* field_0x344 = (this->field_0x344 + 1); */
        /* goto L_4ec; */
        /* L_4e4:; */
        /* field_0x345 = 0; */
        /* L_4ec:; */
        /* return this->field_0x344; */
}

/* 000005EC-00000720       .text nodeCallBack_head__FP7J3DNodei */
static BOOL nodeCallBack_head(J3DNode*, int) {
        /* _savegpr_28(arg0, int, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_618; */
        /* if (this->field_0x14 == 0) goto L_618; */
        /* PSMTXCopy((this->field_0x8c + (this->field_0x18 * 48)), this->field_0x0); */
        /* if (this->field_0x18 != 2) goto L_598; */
        /* mDoMtx_YrotM(this->field_0x0, ((-this->field_0x640) & 65535)); */
        /* mDoMtx_ZrotM(this->field_0x0, ((-this->field_0x644) & 65535)); */
        /* goto L_5e8; */
        /* L_598:; */
        /* if (this->field_0x18 != 3) goto L_5d4; */
        /* mDoMtx_YrotM(this->field_0x0, this->field_0x69a); */
        /* mDoMtx_ZrotM(this->field_0x0, ((-this->field_0x69e) & 65535)); */
        /* goto L_5e8; */
        /* L_5d4:; */
        MtxScale(1);
        /* L_5e8:; */
        PSMTXCopy(this->field_0x0, (this->field_0x8c + (this->field_0x18 * 48)));
        PSMTXCopy(this->field_0x0, ((char*)&mCurrentMtx__6J3DSys + 0));
        /* L_618:; */
        return _restgpr_28(1);
}

/* 0000075C-0000098C       .text nodeCallBack_body__FP7J3DNodei */
static BOOL nodeCallBack_body(J3DNode*, int) {
        /* _savegpr_28(arg0, int, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_884; */
        /* if (this->field_0x14 == 0) goto L_884; */
        /* PSMTXCopy((this->field_0x8c + (this->field_0x18 * 48)), this->field_0x0); */
        /* if (this->field_0x18 != 2) goto L_728; */
        /* mDoMtx_YrotM(this->field_0x0, ((-this->field_0x646) & 65535)); */
        /* mDoMtx_ZrotM(this->field_0x0, ((-this->field_0x64a) & 65535)); */
        /* goto L_854; */
        /* L_728:; */
        /* if (this->field_0x18 != 3) goto L_78c; */
        /* mDoMtx_YrotM(this->field_0x0, ((-this->field_0x64c) & 65535)); */
        /* mDoMtx_ZrotM(this->field_0x0, ((-this->field_0x650) & 65535)); */
        /* goto L_854; */
        /* L_78c:; */
        /* if (this->field_0x18 != 4) goto L_7e8; */
        /* mDoMtx_YrotM(this->field_0x0, this->field_0x6a0); */
        /* mDoMtx_ZrotM(this->field_0x0, ((-this->field_0x6a4) & 65535)); */
        /* goto L_854; */
        /* L_7e8:; */
        /* if (this->field_0x18 != 5) goto L_854; */
        /* mDoMtx_YrotM(this->field_0x0, this->field_0x6a6); */
        /* mDoMtx_ZrotM(this->field_0x0, ((-this->field_0x6aa) & 65535)); */
        /* field_0x0 = (this->field_0x0 + 2); */
        /* L_854:; */
        PSMTXCopy(this->field_0x0, (this->field_0x8c + (this->field_0x18 * 48)));
        PSMTXCopy(this->field_0x0, ((char*)&mCurrentMtx__6J3DSys + 0));
        /* L_884:; */
        return _restgpr_28(1);
}

/* 0000098C-00000B28       .text nodeCallBack_tail__FP7J3DNodei */
static BOOL nodeCallBack_tail(J3DNode*, int) {
        /* _savegpr_28(arg0, int, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_a20; */
        /* if (this->field_0x14 == 0) goto L_a20; */
        /* PSMTXCopy((this->field_0x8c + (this->field_0x18 * 48)), this->field_0x0); */
        /* if (this->field_0x18 != 2) goto L_938; */
        /* mDoMtx_YrotM(this->field_0x0, ((-this->field_0x68e) & 65535)); */
        /* mDoMtx_ZrotM(this->field_0x0, ((-this->field_0x692) & 65535)); */
        /* goto L_9f0; */
        /* L_938:; */
        /* if (this->field_0x18 != 3) goto L_97c; */
        /* mDoMtx_YrotM(this->field_0x0, ((-this->field_0x694) & 65535)); */
        /* mDoMtx_ZrotM(this->field_0x0, ((-this->field_0x698) & 65535)); */
        /* goto L_9f0; */
        /* L_97c:; */
        /* if (this->field_0x18 != 4) goto L_9b8; */
        /* mDoMtx_YrotM(this->field_0x0, this->field_0x6e8); */
        /* mDoMtx_ZrotM(this->field_0x0, ((-this->field_0x6ec) & 65535)); */
        /* goto L_9f0; */
        /* L_9b8:; */
        /* if (this->field_0x18 != 5) goto L_9f0; */
        /* mDoMtx_YrotM(this->field_0x0, this->field_0x6ee); */
        /* mDoMtx_ZrotM(this->field_0x0, ((-this->field_0x6f2) & 65535)); */
        /* L_9f0:; */
        PSMTXCopy(this->field_0x0, (this->field_0x8c + (this->field_0x18 * 48)));
        PSMTXCopy(this->field_0x0, ((char*)&mCurrentMtx__6J3DSys + 0));
        /* L_a20:; */
        return _restgpr_28(1);
}

/* 00000B28-0000171C       .text body_control2__FP8mt_class */
void body_control2(mt_class*) {
        /* _savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x4a0 = 0; */
        /* field_0x4a4 = 0; */
        /* field_0x4a8 = 0; */
        ct();
        /* field_0xc = 0; */
        /* field_0xc = 0; */
        /* field_0x10 = 1; */
        /* if (/ * beq * / 1) goto L_bf0; */
        /* L_bf0:; */
        /* L_c50:; */
        /* if (0 <= 0) goto L_10b8; */
        /* mDoMtx_YrotS(this->field_0x0, this->field_0x2); */
        MtxPosition();
        PSVECAdd();
        Set();
        /* if (LineCross() == 0) goto L_d0c; */
        /* L_d0c:; */
        MtxPosition();
        PSVECAdd();
        Set();
        /* if (LineCross() == 0) goto L_d7c; */
        /* L_d7c:; */
        /* if (((1 + 1) & 16777215) != 2) goto L_e54; */
        /* if ((this->field_0x4 - this->field_0x54) >= (this->field_0x50 + this->field_0x18)) goto L_e54; */
        __mi();
        /* if (((this->field_0x10 * this->field_0x10) + (this->field_0x18 * this->field_0x18)) <= this->field_0x30) goto L_e48; */
        /* L_e48:; */
        /* L_e54:; */
        /* cLib_addCalcAngleS2(((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1376) + 4), (cM_atan2s(__mi()) & 65535), 2, 1024); */
        /* if (this->field_0x48e != 0) goto L_f08; */
        /* mDoMtx_YrotS(this->field_0x0, this->field_0x20e); */
        /* L_f08:; */
        cM_atan2s(MtxPosition());
        /* if (/ * ble * / 1) goto L_fc0; */
        /* L_fc0:; */
        cM_atan2s(cM_atan2s(MtxPosition()));
        mDoMtx_YrotS(this->field_0x0, (cM_atan2s(MtxPosition()) & 65535));
        mDoMtx_XrotM(this->field_0x0, ((-cM_atan2s(cM_atan2s(MtxPosition()))) & 65535));
        /* field_0x2 = (MtxPosition() + -32768); */
        /* field_0x0 = (-((-cM_atan2s(cM_atan2s(MtxPosition()))) & 65535)); */
        /* field_0x0 = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* field_0x0 = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* field_0x0 = (this->field_0x18f4 * (this->field_0x0 - this->field_0x0)); */
        /* field_0x4 = (this->field_0x18f4 * (this->field_0x4 - this->field_0x4)); */
        /* field_0x8 = (this->field_0x18f4 * (this->field_0x8 - this->field_0x8)); */
        /* L_10b8:; */
        /* field_0x18 = 0; */
        /* field_0x1c = 0; */
        /* field_0x20 = 0; */
        PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
        /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x2); */
        mDoMtx_XrotM();
        mDoMtx_ZrotM();
        /* if (0 != 0) goto L_112c; */
        /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x468); */
        /* L_112c:; */
        /* if (0 != 0) goto L_1148; */
        /* ((mDoMtx_stack_c*)(mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x468)))->scaleM(); */
        /* goto L_1174; */
        /* L_1148:; */
        /* ((mDoMtx_stack_c*)(((mDoMtx_stack_c*)(mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x468)))->scaleM()))->scaleM(); */
        /* if (0 != 7) goto L_1174; */
        /* L_1174:; */
        /* ((mDoMtx_stack_c*)(((mDoMtx_stack_c*)(((mDoMtx_stack_c*)(((mDoMtx_stack_c*)(mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x468)))->scaleM()))->scaleM()))->scaleM()))->transM(); */
        PSMTXCopy();
        /* if (0 != 0) goto L_12cc; */
        PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0));
        /* ((cM3dGSph*)((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 6336)))->SetC((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608)); */
        PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0));
        /* ((cM3dGSph*)((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 3936)))->SetC(); */
        /* if (this->field_0xc04 != 1) goto L_1268; */
        /* ((cM3dGSph*)((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 6336)))->SetR(); */
        /* goto L_12bc; */
        /* L_1268:; */
        /* if (this->field_0xe60 != 2) goto L_1280; */
        /* goto L_128c; */
        /* L_1280:; */
        /* L_128c:; */
        /* ((cM3dGSph*)((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 3936)))->SetR(); */
        /* ((cM3dGSph*)((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 6336)))->SetR(); */
        /* L_12bc:; */
        /* Set((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 6056)); */
        /* goto L_1308; */
        /* L_12cc:; */
        /* ((cM3dGSph*)((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + (0 + 3936))))->SetC((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1184)); */
        /* if (this->field_0x460 == 0) goto L_12fc; */
        /* ((cM3dGSph*)((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + (0 + 3936))))->SetR(); */
        /* goto L_1308; */
        /* L_12fc:; */
        /* ((cM3dGSph*)((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + (0 + 3936))))->SetR(); */
        /* L_1308:; */
        /* Set((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + (0 + 3656))); */
        /* if (this->field_0xc01 == 0) goto L_143c; */
        /* if (0 < 1) goto L_143c; */
        /* if (this->field_0xc00 == 0) goto L_134c; */
        /* goto L_135c; */
        /* L_134c:; */
        /* L_135c:; */
        /* field_0x6f4 = 0; */
        /* field_0x6f8 = 0; */
        /* field_0x6fc = 0; */
        /* L_143c:; */
        /* if ((0 + 1) < 8) goto L_c50; */
        /* if (this->field_0xc01 == 0) goto L_14a8; */
        /* field_0xc01 = 0; */
        /* field_0x454 = 0; */
        /* field_0x455 = 0; */
        /* field_0xbf4 = 0; */
        /* field_0x458 = 100; */
        /* field_0x48e = 0; */
        /* anm_init(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 10, 2, 0, (_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + (((((this->field_0xc00 & 67108863) & 67108863) + 0) & 67108863) * 6))); */
        /* L_14a8:; */
        /* cLib_addCalc0((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 6388)); */
        /* cLib_addCalc2((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1136)); */
        /* cLib_addCalcAngleS2((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 520)); */
        /* if (/ * beq * / 1) goto L_15b0; */
        /* if (/ * beq * / 1) goto L_158c; */
        /* if (/ * beq * / 1) goto L_158c; */
        /* L_158c:; */
        /* if (/ * beq * / 1) goto L_15b0; */
        /* if (/ * beq * / 1) goto L_15b0; */
        /* L_15b0:; */
        /* if (/ * beq * / 1) goto L_15d8; */
        /* L_15d8:; */
        return _restgpr_14(__dt());
}

/* 00001B54-00001E44       .text wall_check_sub__FP8mt_classP4cXyzP4cXyz */
void wall_check_sub(mt_class*, cXyz*, cXyz*) {
        /* _savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        ct();
        /* field_0xc = 0; */
        /* field_0xc = 0; */
        /* field_0x10 = 1; */
        /* if (/ * beq * / 1) goto L_1ba8; */
        /* L_1ba8:; */
        Set();
        /* if (((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->LineCross() == 0) goto L_1c90; */
        /* if (/ * beq * / 1) goto L_1c54; */
        /* if (/ * beq * / 1) goto L_1c30; */
        /* if (/ * beq * / 1) goto L_1c30; */
        /* L_1c30:; */
        /* if (/ * beq * / 1) goto L_1c54; */
        /* if (/ * beq * / 1) goto L_1c54; */
        /* L_1c54:; */
        __dt();
        return 1;
        /* L_1c90:; */
        /* if (/ * beq * / 1) goto L_1d08; */
        /* if (/ * beq * / 1) goto L_1ce4; */
        /* if (/ * beq * / 1) goto L_1ce4; */
        /* L_1ce4:; */
        /* if (/ * beq * / 1) goto L_1d08; */
        /* if (/ * beq * / 1) goto L_1d08; */
        /* L_1d08:; */
        __dt();
        return _restgpr_22(0);
}

/* 00001E44-00001F10       .text body_wall_check__FP8mt_class */
void body_wall_check(mt_class*) {
    /* L_1d88:; */
    /* if (wall_check_sub(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)) != 0) { */
        /* field_0x4a0 = 0; */
        /* field_0x4a8 = 0; */
    /* if ((1 + 1) >= 8) goto L_1d88; */
    /* return _restgpr_28(wall_check_sub(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7))); */

/* 00001F10-000022D8       .text body_control1__FP8mt_class */
void body_control1(mt_class*) {
        /* _savegpr_15(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x0 = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* L_1eec:; */
        /* if (this->field_0xc00 == 0) goto L_1f14; */
        /* goto L_1f2c; */
        /* L_1f14:; */
        /* L_1f2c:; */
        /* field_0x18 = 0; */
        /* field_0x1c = 0; */
        /* field_0x20 = 0; */
        /* PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0), this->field_0xbf4); */
        /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x9f6); */
        /* mDoMtx_XrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x9f4); */
        /* mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x9f8); */
        mDoMtx_YrotM();
        /* if (0 != 0) goto L_1fc8; */
        ((mDoMtx_stack_c*)(mDoMtx_YrotM()))->scaleM();
        /* goto L_1fdc; */
        /* L_1fc8:; */
        /* L_1fdc:; */
        ((mDoMtx_stack_c*)(((mDoMtx_stack_c*)(((mDoMtx_stack_c*)(mDoMtx_YrotM()))->scaleM()))->scaleM()))->transM();
        PSMTXCopy();
        /* if (0 != 0) goto L_20a0; */
        PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0));
        /* ((cM3dGSph*)((_savegpr_15(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 6336)))->SetC((_savegpr_15(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608)); */
        /* ((cM3dGSph*)((_savegpr_15(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 6336)))->SetR(); */
        /* ((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set((_savegpr_15(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 6056)); */
        PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0));
        /* ((cM3dGSph*)((_savegpr_15(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 3936)))->SetC(); */
        /* ((cM3dGSph*)((_savegpr_15(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 3936)))->SetR(); */
        /* goto L_20dc; */
        /* L_20a0:; */
        /* ((cM3dGSph*)((_savegpr_15(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + (0 + 3936))))->SetC(((_savegpr_15(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + (((this->field_0xbf4 + (this->field_0xbf4 + this->field_0xc00)) & 67108863) * 12)) + 1780)); */
        /* if (this->field_0x460 == 0) goto L_20d0; */
        /* ((cM3dGSph*)((_savegpr_15(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + (0 + 3936))))->SetR(); */
        /* goto L_20dc; */
        /* L_20d0:; */
        /* ((cM3dGSph*)((_savegpr_15(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + (0 + 3936))))->SetR(); */
        /* L_20dc:; */
        /* ((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set((_savegpr_15(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + (0 + 3656))); */
        /* if (this->field_0xc01 == 0) goto L_2130; */
        /* field_0x4a0 = 0; */
        /* field_0x4a4 = 0; */
        /* field_0x4a8 = 0; */
        /* L_2130:; */
        /* if ((0 + 1) < 8) goto L_1eec; */
        /* if (this->field_0x48e != 0) goto L_2164; */
        /* field_0xbf4 = (this->field_0xbf4 + 1); */
        /* L_2164:; */
        /* field_0xbf4 = (this->field_0xbf4 & 67108863); */
        /* if (this->field_0xc01 == 0) goto L_21c0; */
        /* field_0xc01 = 0; */
        /* field_0x454 = 1; */
        /* field_0x455 = 0; */
        /* field_0x48e = 0; */
        /* anm_init(_savegpr_15(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 10, 2, 0); */
        /* L_21c0:; */
        /* return _restgpr_15(cLib_addCalc2((_savegpr_15(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1136))); */
}

/* 000022D8-000028BC       .text body_control3__FP8mt_class */
void body_control3(mt_class*) {
        /* _savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x4a0 = 0; */
        /* field_0x4a4 = 0; */
        /* field_0x4a8 = 0; */
        /* mDoMtx_YrotS(this->field_0x0, this->field_0x20e); */
        /* mDoMtx_XrotM(this->field_0x0, this->field_0x20c); */
        /* mDoMtx_XrotM(this->field_0x0, this->field_0x210); */
        MtxPosition();
        /* if (this->field_0x18fc == 0) goto L_22ec; */
        /* L_22ec:; */
        /* L_2328:; */
        /* if (0 <= 0) goto L_25ac; */
        /* mDoMtx_YrotS(this->field_0x0, this->field_0x20e); */
        mDoMtx_XrotM(this->field_0x0, ((this->field_0x20c + (((this->field_0x48a + (((this->field_0x210 * 500) & 65535) & 65535)) & 65535) - 0)) & 65535));
        /* mDoMtx_ZrotM(this->field_0x0, this->field_0x210); */
        cM_atan2s(MtxPosition());
        /* if (/ * ble * / 1) goto L_24b0; */
        /* L_24b0:; */
        cM_atan2s(cM_atan2s(MtxPosition()));
        mDoMtx_YrotS(this->field_0x0, (cM_atan2s(MtxPosition()) & 65535));
        mDoMtx_XrotM(this->field_0x0, ((-cM_atan2s(cM_atan2s(MtxPosition()))) & 65535));
        /* if ((this->field_0x20e - (cM_atan2s(MtxPosition()) & 65535)) != 0) goto L_2528; */
        /* L_2528:; */
        /* if ((((-(this->field_0x20e - (cM_atan2s(MtxPosition()) & 65535))) & 65535) & 65535) >= 16384) goto L_2550; */
        /* field_0x2 = (cM_atan2s(MtxPosition()) & 65535); */
        /* field_0x0 = (-(((-cM_atan2s(cM_atan2s(MtxPosition()))) & 65535) - (MtxPosition() + -32768))); */
        /* goto L_2564; */
        /* L_2550:; */
        /* field_0x2 = (MtxPosition() + -32768); */
        /* field_0x0 = (-((-cM_atan2s(cM_atan2s(MtxPosition()))) & 65535)); */
        /* L_2564:; */
        /* field_0x0 = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* field_0x0 = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* L_25ac:; */
        /* field_0x18 = 0; */
        /* field_0x1c = 0; */
        /* field_0x20 = 0; */
        PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
        /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x2); */
        /* mDoMtx_XrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x0); */
        /* mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x4); */
        /* if (0 != 0) goto L_263c; */
        /* ((mDoMtx_stack_c*)(mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x4)))->scaleM(); */
        /* goto L_2668; */
        /* L_263c:; */
        /* ((mDoMtx_stack_c*)(((mDoMtx_stack_c*)(mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x4)))->scaleM()))->scaleM(); */
        /* if (0 != 7) goto L_2668; */
        /* L_2668:; */
        /* ((mDoMtx_stack_c*)(((mDoMtx_stack_c*)(((mDoMtx_stack_c*)(((mDoMtx_stack_c*)(mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x4)))->scaleM()))->scaleM()))->scaleM()))->transM(); */
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x50 + 36));
        /* if (0 != 0) goto L_274c; */
        /* field_0x260 = 0; */
        /* field_0x264 = 0; */
        /* field_0x268 = 0; */
        /* ((cM3dGSph*)((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 3936)))->SetC((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504)); */
        /* ((cM3dGSph*)((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 6336)))->SetR(); */
        /* if (/ * ble * / 1) goto L_26f0; */
        /* goto L_2700; */
        /* L_26f0:; */
        /* field_0xe48 = (this->field_0xe48 & -11); */
        /* L_2700:; */
        /* if (this->field_0x466 >= 90) goto L_2728; */
        /* ((cM3dGSph*)((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 3936)))->SetR(); */
        /* goto L_2740; */
        /* L_2728:; */
        /* ((cM3dGSph*)((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 3936)))->SetR(); */
        /* L_2740:; */
        /* ((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 3656)); */
        /* L_274c:; */
        /* if ((0 + 1) < 8) goto L_2328; */
        /* cLib_addCalc0((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 6388)); */
        /* cLib_addCalc2((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1136)); */
        /* return _restgpr_14(cLib_addCalcAngleS2((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 520), 0, 2, 1024)); */
}

/* 000028BC-00002AB0       .text body_control4__FP8mt_class */
void body_control4(mt_class*) {
    /* _savegpr_17(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    PSMTXScale(((char*)&now__14mDoMtx_stack_c + 0));
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x50 + 36));
    /* L_2854:; */
    if (now__14mDoMtx_stack_c != 0) {
    } else {
        /* ((dPa_control_c*)(this->field_0x5ab8))->setSimple(((2 + 1520) + -32672), (_savegpr_17(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1196), 255, ((char*)&g_whiteColor + 0), ((char*)&g_whiteColor + 0), 0); */
        /* field_0x0 = (this->field_0x0 + this->field_0x0); */
        /* field_0x4 = (this->field_0x4 + this->field_0x4); */
        /* field_0x8 = (this->field_0x8 + this->field_0x8); */
        /* field_0x4 = (this->field_0x4 - this->field_0xa0); */
        /* field_0x0 = (this->field_0x0 + 6144); */
        /* field_0x2 = (this->field_0x2 + 4096); */
        /* if (this->field_0x4 > this->field_0x30) goto L_2914; */
        /* cLib_addCalc0((_savegpr_17(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + (4 + 1536))); */
    }
    /* L_2914:; */
    PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
    /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x2); */
    /* mDoMtx_XrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x0); */
    /* ((mDoMtx_stack_c*)(mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x4)))->scaleM(); */
    if (1 == 7) {
        /* ((mDoMtx_stack_c*)(((mDoMtx_stack_c*)(mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x4)))->scaleM()))->scaleM(); */
    }
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x50 + 36));
    /* if ((1 + 1) >= 8) goto L_2854; */
    return _restgpr_17(PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x50 + 36)));
}

/* 00002AB0-00003008       .text body_control5__FP8mt_class */
void body_control5(mt_class*) {
        /* _savegpr_16(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x4a0 = 0; */
        /* field_0x4a4 = 0; */
        /* field_0x4a8 = 0; */
        /* L_2a84:; */
        /* if (0 <= 0) goto L_2cd8; */
        /* mDoMtx_YrotS(this->field_0x0, this->field_0x20e); */
        MtxPosition();
        /* if (((this->field_0x4 - this->field_0x54) + this->field_0x10) >= (this->field_0x18 + this->field_0xcdc)) goto L_2b84; */
        /* L_2b84:; */
        cM_atan2s(MtxPosition());
        /* if ((((this->field_0xc + (this->field_0x0 - this->field_0x10)) * (this->field_0xc + (this->field_0x0 - this->field_0x10))) + ((this->field_0x14 + (this->field_0x8 - (this->field_0x0 - this->field_0x10))) * (this->field_0x14 + (this->field_0x8 - (this->field_0x0 - this->field_0x10))))) <= this->field_0x30) goto L_2c34; */
        /* L_2c34:; */
        cM_atan2s(cM_atan2s(MtxPosition()));
        mDoMtx_YrotS(this->field_0x0, (cM_atan2s(MtxPosition()) & 65535));
        mDoMtx_XrotM(this->field_0x0, ((-cM_atan2s(cM_atan2s(MtxPosition()))) & 65535));
        /* field_0x2 = (MtxPosition() + -32768); */
        /* field_0x0 = (-((-cM_atan2s(cM_atan2s(MtxPosition()))) & 65535)); */
        /* field_0x0 = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* L_2cd8:; */
        /* field_0x18 = 0; */
        /* field_0x1c = 0; */
        /* field_0x20 = 0; */
        PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
        /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x2); */
        /* mDoMtx_XrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x0); */
        /* mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x4); */
        /* if (0 != 0) goto L_2d4c; */
        /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x468); */
        /* L_2d4c:; */
        /* if (0 != 0) goto L_2d68; */
        /* ((mDoMtx_stack_c*)(mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x468)))->scaleM(); */
        /* goto L_2d94; */
        /* L_2d68:; */
        /* ((mDoMtx_stack_c*)(((mDoMtx_stack_c*)(mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x468)))->scaleM()))->scaleM(); */
        /* if (0 != 7) goto L_2d94; */
        /* L_2d94:; */
        /* ((mDoMtx_stack_c*)(((mDoMtx_stack_c*)(((mDoMtx_stack_c*)(((mDoMtx_stack_c*)(mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x468)))->scaleM()))->scaleM()))->scaleM()))->transM(); */
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x50 + 36));
        /* if (0 != 0) goto L_2e10; */
        PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0));
        /* ((cM3dGSph*)((_savegpr_16(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 6336)))->SetC((_savegpr_16(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608)); */
        /* ((cM3dGSph*)((_savegpr_16(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 6336)))->SetR(); */
        /* ((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set((_savegpr_16(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 6056)); */
        /* goto L_2e2c; */
        /* L_2e10:; */
        /* ((cM3dGSph*)(((_savegpr_16(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 0) + 3936)))->SetC((_savegpr_16(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1184)); */
        /* L_2e2c:; */
        /* ((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set(((_savegpr_16(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 0) + 3656)); */
        /* if ((0 + 1) < 8) goto L_2a84; */
        /* cLib_addCalc2((_savegpr_16(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1136)); */
        /* return _restgpr_16(jmaSinShift, ((this->field_0x46a * (this->field_0x84 + 3000)) & 65535), this->field_0x0); */
}

/* 00003008-00003210       .text br_draw__FP8mt_class */
void br_draw(mt_class*) {
    /* _savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (this->field_0x18d4 != 0) {
        MtxTrans(0);
        /* mDoMtx_YrotM(this->field_0x0, this->field_0x20e); */
        /* mDoMtx_XrotM(this->field_0x0, this->field_0x20c); */
        /* mDoMtx_ZrotM(this->field_0x0, this->field_0x210); */
        MtxPush();
        mDoMtx_YrotM(this->field_0x0, ((char*)&br_ya + 0));
        mDoMtx_XrotM(this->field_0x0, -16384);
        MtxScale(1);
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x18d8, (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        PSMTXCopy(this->field_0x0, (this->field_0x18d8 + 36));
        /* mDoExt_modelUpdateDL(this->field_0x18d8); */
        MtxPull();
        mDoMtx_ZrotM(this->field_0x0, -32768);
        /* mDoMtx_YrotM(this->field_0x0); */
        mDoMtx_XrotM(this->field_0x0, -16384);
        MtxScale(1);
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x18e4, (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        PSMTXCopy(this->field_0x0, (this->field_0x18e4 + 36));
    }
    /* return _restgpr_28(mDoExt_modelUpdateDL(this->field_0x18e4)); */
}

/* 00003210-00003360       .text daMt_shadowDraw__FP8mt_class */
static void daMt_shadowDraw(mt_class*) {
        /* _savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_3210; */
        /* field_0x1cb8 = dComIfGd_setShadow(this->field_0x1cb8, 1, this->field_0x50); */
        /* L_31e4:; */
        /* ((dDlst_shadowControl_c*)(((char*)&g_dComIfG_gameInfo + 24416)))->addReal(this->field_0x1cb8, this->field_0x50); */
        /* if ((1 + 1) < 8) goto L_31e4; */
        /* goto L_325c; */
        /* L_3210:; */
        /* if (this->field_0x3614 == 0) goto L_325c; */
        /* L_3234:; */
        /* ((dDlst_shadowControl_c*)(((char*)&g_dComIfG_gameInfo + 24416)))->addReal(this->field_0x3614, this->field_0x50); */
        /* if ((0 + 1) < 8) goto L_3234; */
        /* L_325c:; */
        /* return _restgpr_27(((dDlst_shadowControl_c*)(((char*)&g_dComIfG_gameInfo + 24416)))->addReal(this->field_0x3614, this->field_0x50)); */
}

/* 00003360-0000361C       .text daMt_Draw__FP8mt_class */
static BOOL daMt_Draw(mt_class*) {
        /* _savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x2bb == 0) goto L_32b4; */
        return 1;
        /* L_32b4:; */
        /* field_0x0 = 0; */
        /* L_32d4:; */
        /* if (this->field_0x1906 != 0) goto L_3318; */
        PSMTXMultVec((this->field_0x50 + 36));
        ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(0);
        /* goto L_3340; */
        /* L_3318:; */
        /* field_0x21c = 0; */
        /* field_0x218 = 0; */
        /* field_0x214 = 0; */
        /* field_0x18 = 0; */
        /* field_0x1c = 0; */
        /* field_0x20 = 0; */
        /* L_3340:; */
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x50, (_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        /* ((mDoExt_btkAnm*)(this->field_0x2f0))->entry(this->field_0x4, this->field_0x4); */
        /* ((mDoExt_brkAnm*)(this->field_0x310))->entry(this->field_0x4, this->field_0x4); */
        /* if (this->field_0x2e4 != 0) goto L_3438; */
        /* if (/ * bge * / 1) goto L_33b0; */
        /* L_33b0:; */
        /* field_0x10 = 0; */
        /* if (/ * bge * / 1) goto L_3408; */
        /* L_3408:; */
        /* field_0x10 = 0; */
        /* goto L_348c; */
        /* L_3438:; */
        /* field_0x10 = 0; */
        /* field_0x10 = 0; */
        /* L_348c:; */
        /* if (0 != 0) goto L_34d0; */
        /* ((J3DMaterialTable*)((this->field_0x4 + 88)))->setTexNoAnimator(this->field_0x33c, this->field_0x340); */
        /* field_0x8 = 0; */
        /* L_34d0:; */
        /* ((mDoExt_McaMorf*)(this->field_0x2c4))->updateDL(); */
        /* if ((0 + 1) < 8) goto L_32d4; */
        /* br_draw(_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* daMt_shadowDraw(_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* dSnap_RegistFig(175, _savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), C_@4086); */
        return _restgpr_25(1);
}

/* 0000361C-000037B0       .text bakuha__FP8mt_class */
void bakuha(mt_class*) {
    /* fopAcM_createDisappear(_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), (_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 10, 0, 255); */
    if (this->field_0x2b6 == 0) {
        /* if (this->field_0x2b9 != 0) goto L_35a0; */
        ((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->onSwitch(this->field_0x2b9, (this->field_0x20a & 255));
    }
    /* L_35a0:; */
    /* field_0x454 = 3; */
    /* field_0x45a = (this->field_0x84 + 57); */
    /* L_35d0:; */
    /* cM_rndF(cM_rndFX(this->field_0x84)); */
    /* field_0x594 = 0; */
    /* cM_rndF(cM_rndFX(cM_rndF(cM_rndFX(this->field_0x84)))); */
    if (this->field_0x18f8 == 3) {
    }
    /* if ((1 + 1) >= 8) goto L_35d0; */
    /* return _restgpr_25(((dPa_control_c*)(this->field_0x5ab8))->set(0)); */
}

/* 000037B0-000042C4       .text mt_move__FP8mt_class */
void mt_move(mt_class*) {
        /* _savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        ct();
        /* field_0xc = 0; */
        /* field_0xc = 0; */
        /* field_0x10 = 1; */
        /* if (/ * beq * / 1) goto L_3808; */
        /* L_3808:; */
        /* mDoMtx_YrotS(this->field_0x0, this->field_0x206); */
        /* mDoMtx_XrotM(this->field_0x0, this->field_0x204); */
        /* mDoMtx_ZrotM(this->field_0x0, this->field_0x208); */
        MtxPosition();
        __pl();
        /* if (abs(this->field_0x204) >= 4096) goto L_38ac; */
        /* L_38ac:; */
        /* goto L_3978; */
        /* L_38d8:; */
        MtxPosition();
        PSVECAdd();
        Set();
        /* if (((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->LineCross() == 0) goto L_396c; */
        /* field_0x0 = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* L_396c:; */
        /* L_3978:; */
        /* if ((0 + 1) < 6) goto L_38d8; */
        /* if (((0 | ((C_@2100 + 0) + 268)) & 1073741823) != 3) goto L_3b7c; */
        __mi();
        MtxPosition();
        /* if (this->field_0x48e != 0) goto L_3a70; */
        /* cLib_addCalc2((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504)); */
        /* cLib_addCalc2((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 508)); */
        /* cLib_addCalc2((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 512)); */
        /* L_3a70:; */
        /* if (((this->field_0x50 * this->field_0x50) + (this->field_0x58 * this->field_0x58)) <= this->field_0x30) goto L_3ae8; */
        /* L_3ae8:; */
        /* field_0x204 = (-cM_atan2s(cLib_addCalc2((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 512)))); */
        /* if (this->field_0x50 > this->field_0xc0) goto L_3b24; */
        /* if (this->field_0x58 <= this->field_0xc0) goto L_3b34; */
        /* L_3b24:; */
        /* field_0x48c = cM_atan2s(cM_atan2s(cLib_addCalc2((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 512)))); */
        /* L_3b34:; */
        /* if ((this->field_0x206 - this->field_0x48c) != 0) goto L_3b50; */
        /* L_3b50:; */
        /* if ((((-(this->field_0x206 - this->field_0x48c)) & 65535) & 65535) <= 16384) goto L_3b70; */
        /* field_0x204 = (this->field_0x204 - (this->field_0x206 + -32768)); */
        /* L_3b70:; */
        /* field_0x492 = 23; */
        /* goto L_3bbc; */
        /* L_3b7c:; */
        /* if (((0 | ((C_@2100 + 0) + 268)) & 65535) != 0) goto L_3bbc; */
        /* if (this->field_0x492 != 0) goto L_3bb4; */
        /* field_0x204 = (this->field_0x204 + ((this->field_0x88 + 2048) & 65535)); */
        /* goto L_3bbc; */
        /* L_3bb4:; */
        /* field_0x492 = (this->field_0x88 + -1); */
        /* L_3bbc:; */
        /* if ((this->field_0x88 + -1) != 12) goto L_3cb8; */
        __mi();
        /* mDoMtx_XrotS(this->field_0x0, ((-this->field_0x204) & 65535)); */
        /* mDoMtx_YrotM(this->field_0x0, ((-this->field_0x206) & 65535)); */
        MtxPosition();
        /* if (((this->field_0x68 * this->field_0x68) + (this->field_0x70 * this->field_0x70)) <= this->field_0x30) goto L_3cac; */
        /* L_3cac:; */
        /* field_0x208 = cM_atan2s(MtxPosition()); */
        /* L_3cb8:; */
        /* if (abs(this->field_0x204) >= 4096) goto L_3f8c; */
        /* if ((-this->field_0x206) != 48) goto L_3d0c; */
        /* field_0x206 = (cM_atan2s(__mi()) + 16384); */
        /* goto L_3fa0; */
        /* L_3d0c:; */
        /* if (this->field_0x2b4 < 10) goto L_3d2c; */
        /* field_0x206 = (this->field_0x206 + this->field_0x488); */
        /* goto L_3f00; */
        /* L_3d2c:; */
        /* if (this->field_0x2bc == 0) goto L_3e9c; */
        cM_atan2s(__mi());
        /* field_0x488 = 2048; */
        /* if (((this->field_0x50 * this->field_0x50) + (this->field_0x58 * this->field_0x58)) <= this->field_0x30) goto L_3de8; */
        /* L_3de8:; */
        /* if (this->field_0x8 >= this->field_0x48) goto L_3ed8; */
        /* field_0x2bd = (this->field_0x2bd + this->field_0x2be); */
        /* if ((this->field_0x2bd & 255) < (this->field_0x0 & 255)) goto L_3e54; */
        /* if (this->field_0x5 == 0) goto L_3e38; */
        /* field_0x2bd = 0; */
        /* goto L_3e68; */
        /* L_3e38:; */
        /* field_0x2be = -1; */
        /* field_0x2bd = (this->field_0x0 + -2); */
        /* goto L_3e68; */
        /* L_3e54:; */
        /* if (this->field_0x2bd != 0) goto L_3e68; */
        /* field_0x2be = 1; */
        /* field_0x2bd = 1; */
        /* L_3e68:; */
        /* field_0x47c = 0; */
        /* field_0x480 = 0; */
        /* field_0x484 = 0; */
        /* goto L_3ed8; */
        /* L_3e9c:; */
        /* fopAcM_searchActorAngleY(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38); */
        /* cLib_addCalcAngleS2((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1160), ((this->field_0x8c + 1024) & 65535), 1, 16); */
        /* L_3ed8:; */
        /* if (this->field_0x2b5 != 1) goto L_3eec; */
        /* field_0x206 = fopAcM_searchActorAngleY(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38); */
        /* goto L_3f00; */
        /* L_3eec:; */
        /* cLib_addCalcAngleS2((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518), fopAcM_searchActorAngleY(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38), 16, this->field_0x488); */
        /* L_3f00:; */
        /* if (this->field_0x2b4 >= 10) goto L_3fa0; */
        /* if (this->field_0x18f9 != 0) goto L_3fa0; */
        /* fopAcM_searchActorDistance(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38); */
        /* if (/ * bge * / 1) goto L_3fa0; */
        /* L_3f4c:; */
        /* if (abs(((char*)&l_HIO + 0)) <= 4096) goto L_3f68; */
        /* goto L_3f78; */
        /* L_3f68:; */
        /* if ((0 + 8) < 64) goto L_3f4c; */
        /* L_3f78:; */
        /* if (1 != 0) goto L_3fa0; */
        /* field_0xc01 = 1; */
        /* goto L_3fa0; */
        /* L_3f8c:; */
        /* if (this->field_0x2b4 >= 10) goto L_3fa0; */
        /* field_0x488 = 0; */
        /* L_3fa0:; */
        /* if (this->field_0x48e != 0) goto L_4058; */
        /* cLib_addCalcAngleS2((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1128)); */
        /* if (this->field_0xc00 == 0) goto L_4040; */
        /* goto L_4044; */
        /* L_4040:; */
        /* L_4044:; */
        /* cLib_addCalc2((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 596)); */
        /* goto L_4068; */
        /* L_4058:; */
        /* cLib_addCalc0((_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 596)); */
        /* L_4068:; */
        /* mDoMtx_YrotS(this->field_0x0, this->field_0x206); */
        /* mDoMtx_XrotM(this->field_0x0, this->field_0x204); */
        /* mDoMtx_YrotM(this->field_0x0, this->field_0x468); */
        MtxPosition();
        /* fopAcM_posMove(_savegpr_14(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* if ((0 | ((C_@2100 + 0) + 268)) != 0) goto L_4104; */
        /* field_0x46c = (this->field_0x46c + 1); */
        /* if (this->field_0x46c < 10) goto L_410c; */
        /* field_0x454 = 1; */
        /* field_0x455 = 17; */
        /* goto L_410c; */
        /* L_4104:; */
        /* field_0x46c = 0; */
        /* L_410c:; */
        /* if (/ * beq * / 1) goto L_4184; */
        /* if (/ * beq * / 1) goto L_4160; */
        /* if (/ * beq * / 1) goto L_4160; */
        /* L_4160:; */
        /* if (/ * beq * / 1) goto L_4184; */
        /* if (/ * beq * / 1) goto L_4184; */
        /* L_4184:; */
        /* if (/ * beq * / 1) goto L_41a8; */
        /* L_41a8:; */
        return _restgpr_14(__dt());
}

/* 000042C4-00005088       .text mt_fight__FP8mt_class */
void mt_fight(mt_class*) {
        /* _savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x455 > 23) goto L_4ef0; */
        /* mt_check(_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (this->field_0xbc > 1) goto L_4270; */
        /* goto L_4320; */
        /* L_4270:; */
        /* if (0 != 2) goto L_4298; */
        /* goto L_4320; */
        /* L_4298:; */
        /* if (0 != 3) goto L_42c4; */
        /* goto L_4320; */
        /* L_42c4:; */
        /* if (12288 != 4) goto L_42f8; */
        /* goto L_4320; */
        /* L_42f8:; */
        /* L_4320:; */
        /* if (((dAttention_c*)(((char*)&g_dComIfG_gameInfo + 22536)))->LockonTruth() != 0) goto L_4350; */
        /* if (/ * bne * / 1) goto L_4350; */
        /* L_4350:; */
        /* if (0 == 0) goto L_4378; */
        /* if (_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) != ((dAttention_c*)(((char*)&g_dComIfG_gameInfo + 22536)))->LockonTarget(0)) goto L_4378; */
        /* field_0x49 = 0; */
        /* goto L_4384; */
        /* L_4378:; */
        /* field_0x49 = (this->field_0x49 + 1); */
        /* L_4384:; */
        /* if (this->field_0x49 < 5) goto L_4398; */
        /* field_0x49 = (this->field_0x49 + -5); */
        /* L_4398:; */
        __mi();
        /* field_0x496 = cM_atan2s(((char*)&g_regHIO + 0)); */
        /* if (((this->field_0x28 * this->field_0x28) + (this->field_0x30 * this->field_0x30)) <= this->field_0x30) goto L_445c; */
        /* L_445c:; */
        /* field_0x494 = (-cM_atan2s(cM_atan2s(((char*)&g_regHIO + 0)))); */
        mDoMtx_YrotS(this->field_0x0, ((this->field_0x20e + (this->field_0x49 << 1)) & 65535));
        MtxPosition();
        /* cLib_addCalc2((_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504)); */
        /* cLib_addCalc2((_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 512)); */
        /* fopAcM_searchActorDistance(_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38); */
        /* if (/ * bgt * / 1) goto L_45ec; */
        /* if (this->field_0x18f9 == 0) goto L_4650; */
        /* L_45ec:; */
        /* if (this->field_0x466 != 0) goto L_4650; */
        /* cLib_addCalc2((_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 508)); */
        /* field_0x494 = 0; */
        /* if (this->field_0x38 >= this->field_0x98) goto L_4ef0; */
        /* field_0xc01 = 1; */
        /* goto L_4ef0; */
        /* L_4650:; */
        /* cLib_addCalc2((_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 508), ((C_@3569 + 0) + 88)); */
        /* if (this->field_0x456 != 0) goto L_4ef0; */
        cM_rndF(((C_@3569 + 0) + 88));
        /* if (/ * bge * / 1) goto L_4ef0; */
        /* if (this->field_0x466 != 0) goto L_4ef0; */
        /* field_0x455 = 1; */
        /* field_0xc02 = 0; */
        /* mDoMtx_YrotS(this->field_0x0, this->field_0x20e); */
        MtxPosition();
        /* PSVECAdd((_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1148), (_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1148)); */
        /* anm_init(_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 8, 2, 0); */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_475c; */
        /* goto L_4760; */
        /* L_475c:; */
        /* L_4760:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18434, (_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* goto L_4ef0; */
        /* if (this->field_0x290 != 16) goto L_47ec; */
        /* if (((dAttention_c*)(((char*)&g_dComIfG_gameInfo + 22536)))->LockonTruth() != 0) goto L_47a0; */
        /* if (/ * bne * / 1) goto L_47a0; */
        /* L_47a0:; */
        /* if (0 == 0) goto L_47ec; */
        /* if (_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) != ((dAttention_c*)(((char*)&g_dComIfG_gameInfo + 22536)))->LockonTarget(0)) goto L_47ec; */
        /* field_0x454 = 6; */
        /* field_0x456 = 0; */
        /* anm_init(_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 7, 0, 0); */
        /* goto L_4ef0; */
        /* L_47ec:; */
        /* field_0xc02 = (this->field_0xc02 + 1); */
        /* if (this->field_0xc02 < this->field_0x30) goto L_4848; */
        /* if (this->field_0xc02 > this->field_0x32) goto L_4848; */
        /* field_0x29c = 0; */
        /* field_0x2a0 = 0; */
        /* field_0x298 = 0; */
        /* field_0x2a8 = 3; */
        /* field_0x298 = 0; */
        /* field_0x2a4 = 0; */
        /* L_4848:; */
        /* if (this->field_0xc02 != this->field_0x3c) goto L_4878; */
        /* anm_init(_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 9, 0, 0); */
        /* L_4878:; */
        /* if (this->field_0xc02 != this->field_0x38) goto L_4900; */
        /* mDoMtx_YrotS(this->field_0x0, this->field_0x496); */
        /* mDoMtx_XrotM(this->field_0x0, this->field_0x494); */
        MtxPosition();
        /* PSVECAdd((_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1148), (_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1148)); */
        /* L_4900:; */
        /* if (this->field_0xc02 < this->field_0x38) goto L_4948; */
        /* if (this->field_0xc02 != this->field_0x3e) goto L_4960; */
        /* anm_init(_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 7, 0, 0); */
        /* goto L_4960; */
        /* L_4948:; */
        /* L_4960:; */
        /* if (this->field_0xc02 != ((this->field_0x3e + this->field_0x8a) & 65535)) goto L_49c8; */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_49bc; */
        /* goto L_49c0; */
        /* L_49bc:; */
        /* L_49c0:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(22544, (_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* L_49c8:; */
        /* if (this->field_0xc02 >= (((this->field_0x3f2 + this->field_0x3e) + 3) & 65535)) goto L_49f8; */
        /* field_0xc04 = 1; */
        /* L_49f8:; */
        /* if (this->field_0xc02 != ((this->field_0x3e + 2) & 65535)) goto L_4a18; */
        /* field_0x18d4 = 1; */
        /* L_4a18:; */
        /* if (this->field_0xc02 < ((this->field_0x3e + 2) & 65535)) goto L_4a48; */
        /* if (this->field_0xc02 > ((this->field_0x3e + 15) & 65535)) goto L_4a48; */
        /* field_0xc04 = 2; */
        /* L_4a48:; */
        /* cLib_addCalc2((_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), this->field_0xc02, this->field_0xc02); */
        /* cLib_addCalc2((_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 508)); */
        /* cLib_addCalc2((_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 512)); */
        /* field_0x220 = (this->field_0x47c - this->field_0x1f8); */
        /* field_0x224 = 0; */
        /* field_0x228 = (this->field_0x484 - this->field_0x200); */
        /* if (this->field_0x5b38 == 0) goto L_4b5c; */
        /* if (this->field_0xe4c == 0) goto L_4b5c; */
        /* field_0x455 = 15; */
        /* mDoMtx_YrotS(this->field_0x0, this->field_0x20e); */
        MtxPosition();
        /* PSVECAdd((_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1148), (_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1148)); */
        /* field_0x462 = 10; */
        /* field_0x456 = 10; */
        /* anm_init(_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 10, 2, 0); */
        /* field_0x18d4 = 0; */
        /* L_4b5c:; */
        /* if (this->field_0xc02 != this->field_0x3a) goto L_4ef0; */
        /* field_0x455 = 0; */
        /* anm_init(_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 10, 2, 0); */
        /* goto L_4ef0; */
        /* field_0x1fc = (this->field_0x1fc + this->field_0x224); */
        /* field_0x224 = (this->field_0x224 + this->field_0x258); */
        /* if (this->field_0x224 >= this->field_0xd8) goto L_4bd4; */
        /* field_0x224 = 0; */
        /* L_4bd4:; */
        /* if (/ * beq * / 1) goto L_4ef0; */
        /* field_0x455 = 0; */
        /* goto L_4ef0; */
        /* cLib_addCalc2((_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504)); */
        /* cLib_addCalc2((_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 508)); */
        /* cLib_addCalc2((_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 512)); */
        /* field_0x220 = (this->field_0x47c - this->field_0x1f8); */
        /* field_0x224 = 0; */
        /* field_0x228 = (this->field_0x484 - this->field_0x200); */
        /* if (this->field_0x456 != 0) goto L_4ef0; */
        /* field_0x455 = 0; */
        /* anm_init(_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 10, 2, 0); */
        /* goto L_4ef0; */
        /* if (/ * beq * / 1) goto L_4e94; */
        /* field_0x455 = 23; */
        /* cM_rndF(anm_init(_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 10, 2, 0)); */
        /* goto L_4e94; */
        /* field_0x204 = (this->field_0x204 + -1280); */
        /* cLib_addCalcAngleS2((_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518), ((cM_atan2s(this->field_0x204) + -32768) & 65535), 2, 1024); */
        /* cLib_addCalc2((_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 6388)); */
        /* if (this->field_0x224 != this->field_0x2c) goto L_4e94; */
        /* if (this->field_0x18f8 == 0) goto L_4d54; */
        /* if (/ * beq * / 1) goto L_4e94; */
        /* field_0x18f8 = 2; */
        /* goto L_4e94; */
        /* L_4d54:; */
        /* tex_anm_set(_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 1); */
        /* field_0x454 = 2; */
        /* field_0x478 = 0; */
        /* field_0x48a = 0; */
        /* field_0x330 = 0; */
        /* if (((this->field_0x228 * this->field_0x228) + ((this->field_0x220 * this->field_0x220) + (this->field_0x224 * this->field_0x224))) <= this->field_0x30) goto L_4e14; */
        /* L_4e14:; */
        /* field_0x254 = (-this->field_0x8); */
        /* field_0x455 = 0; */
        /* field_0x230 = 0; */
        /* field_0x234 = 0; */
        /* field_0x238 = 0; */
        /* field_0x23c = 0; */
        /* field_0x240 = 0; */
        /* field_0x244 = 0; */
        /* goto L_4e94; */
        /* field_0x224 = 0; */
        /* cLib_addCalcAngleS2((_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 516), 0, 1, 1024); */
        /* field_0x220 = (this->field_0x220 * this->field_0xe8); */
        /* field_0x228 = (this->field_0x228 * this->field_0xe8); */
        /* if (this->field_0x456 != 0) goto L_4e94; */
        /* field_0x455 = 10; */
        /* L_4e94:; */
        /* field_0x460 = 5; */
        /* field_0x1f8 = (this->field_0x1f8 + this->field_0x220); */
        /* field_0x1fc = (this->field_0x1fc + this->field_0x224); */
        /* field_0x200 = (this->field_0x200 + this->field_0x228); */
        /* field_0x224 = (this->field_0x224 + this->field_0x258); */
        /* if (this->field_0x224 >= this->field_0xd8) goto L_4ef0; */
        /* field_0x224 = 0; */
        /* L_4ef0:; */
        /* if (this->field_0x454 >= 2) goto L_4f70; */
        /* if (this->field_0x455 >= 10) goto L_4f5c; */
        /* cLib_addCalcAngleS2((_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518), this->field_0x496, 2, 1024); */
        /* if ((this->field_0x1fc - this->field_0xcdc) <= this->field_0xec) goto L_4f40; */
        /* field_0x455 = 10; */
        /* L_4f40:; */
        /* cLib_addCalcAngleS2((_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 516), ((this->field_0x494 + 0) & 65535), 4, 2048); */
        /* L_4f5c:; */
        /* L_4f70:; */
        /* return _restgpr_25(cLib_addCalcAngleS2((_savegpr_25(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1128), 0, 1, 256)); */
}

/* 00005088-00005A04       .text mt_move_maru__FP8mt_class */
void mt_move_maru(mt_class*) {
        /* _savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x464 = 3; */
        /* if (this->field_0x455 == 1) goto L_54b0; */
        /* if (/ * bge * / 1) goto L_5570; */
        /* if (this->field_0x455 >= 0) goto L_4ff8; */
        /* goto L_5570; */
        /* L_4ff8:; */
        /* if (this->field_0x456 != 0) goto L_5010; */
        /* L_5010:; */
        /* field_0x20c = 0; */
        /* mDoMtx_YrotS(this->field_0x0, this->field_0x206); */
        MtxPosition();
        /* field_0x220 = 0; */
        /* field_0x228 = 0; */
        /* field_0x1f8 = (this->field_0x1f8 + this->field_0x220); */
        /* field_0x1fc = (this->field_0x1fc + this->field_0x224); */
        /* field_0x200 = (this->field_0x200 + this->field_0x228); */
        /* field_0x224 = (this->field_0x224 + this->field_0x258); */
        /* if (this->field_0x224 >= this->field_0xd8) goto L_50cc; */
        /* field_0x224 = 0; */
        /* L_50cc:; */
        /* mt_bg_check(_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (/ * beq * / 1) goto L_53fc; */
        /* if (this->field_0x224 >= (this->field_0xf0 + this->field_0x3c)) goto L_5108; */
        /* field_0x18f8 = 2; */
        /* L_5108:; */
        __ct();
        /* field_0xc = 0; */
        /* field_0xc = 0; */
        /* field_0x10 = 1; */
        /* if (/ * beq * / 1) goto L_51c4; */
        /* L_51c4:; */
        ((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GroundCross();
        /* mDoMtx_YrotS(this->field_0x0, this->field_0x206); */
        MtxPosition();
        __pl();
        ((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GroundCross();
        /* if (/ * beq * / 1) goto L_52d4; */
        /* if (/ * bge * / 1) goto L_52c0; */
        /* goto L_52d4; */
        /* L_52c0:; */
        /* if (/ * ble * / 1) goto L_52d4; */
        /* L_52d4:; */
        /* cLib_addCalc2((_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 596), ((char*)&l_HIO + 0)); */
        /* if (this->field_0x224 >= (this->field_0xfc + this->field_0x44)) goto L_5350; */
        /* field_0x224 = (this->field_0x224 * (this->field_0x100 + this->field_0x48)); */
        /* if (__cvt_fp2unsigned(((char*)&g_regHIO + 0)) <= 100) goto L_5358; */
        /* goto L_5358; */
        /* L_5350:; */
        /* field_0x224 = 0; */
        /* L_5358:; */
        /* if (/ * beq * / 1) goto L_53d0; */
        /* if (/ * beq * / 1) goto L_53ac; */
        /* if (/ * beq * / 1) goto L_53ac; */
        /* L_53ac:; */
        /* if (/ * beq * / 1) goto L_53d0; */
        /* if (/ * beq * / 1) goto L_53d0; */
        /* L_53d0:; */
        __dt();
        /* L_53fc:; */
        /* if (/ * beq * / 1) goto L_5430; */
        /* if (/ * ble * / 1) goto L_5430; */
        /* field_0x254 = (this->field_0x254 * this->field_0x108); */
        /* L_5430:; */
        /* if (50 == 0) goto L_5478; */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(22549, (_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 50, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* L_5478:; */
        /* field_0x270 = 9; */
        /* if (/ * beq * / 1) goto L_5570; */
        /* field_0x455 = 1; */
        /* goto L_5570; */
        /* L_54b0:; */
        /* field_0x204 = 0; */
        /* if (/ * bne * / 1) goto L_5550; */
        /* if (this->field_0x254 <= this->field_0x30) goto L_5524; */
        /* field_0x455 = 0; */
        /* field_0x254 = (this->field_0x74 * this->field_0x58); */
        /* field_0x224 = (this->field_0x74 * this->field_0x58); */
        /* field_0x456 = 20; */
        /* goto L_5570; */
        /* L_5524:; */
        /* field_0x455 = 0; */
        /* field_0x254 = (this->field_0x74 * this->field_0x58); */
        /* field_0x224 = (this->field_0xfc + this->field_0x38); */
        /* field_0x456 = 20; */
        /* goto L_5570; */
        /* L_5550:; */
        /* if (this->field_0x529a == 0) goto L_5570; */
        /* field_0x466 = (this->field_0x466 + 1); */
        /* L_5570:; */
        /* cLib_addCalcAngleS2((_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1128), 0, 1, 256); */
        /* if (this->field_0x466 <= 70) goto L_5624; */
        /* cLib_addCalc2((_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1140)); */
        /* if (this->field_0x466 >= 110) goto L_55e4; */
        /* if (this->field_0x466 > 100) goto L_55cc; */
        /* if (this->field_0x466 >= 80) goto L_55d0; */
        /* L_55cc:; */
        /* L_55d0:; */
        /* cLib_addCalcAngleS2((_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 524), 30720, 4, 768); */
        /* L_55e4:; */
        /* cLib_addCalcAngleS2((_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1162), (this->field_0x52 + -1500), 4, 4096); */
        /* cLib_addCalc2((_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1144)); */
        /* cLib_addCalc2((_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 824)); */
        /* goto L_5794; */
        /* L_5624:; */
        /* if (/ * bne * / 1) goto L_5664; */
        /* field_0x330 = (this->field_0x110 + this->field_0x18); */
        /* field_0x338 = 0; */
        /* if (this->field_0x18fa != 0) goto L_5664; */
        /* field_0x224 = (this->field_0x18 + this->field_0x38); */
        /* L_5664:; */
        /* cLib_addCalc0((_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 816)); */
        /* cLib_addCalcAngleS2((_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1128)); */
        /* cLib_addCalcAngleS2((_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 524), 0, 4, 4096); */
        /* cLib_addCalc2((_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1140)); */
        /* cLib_addCalcAngleS2((_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1162)); */
        /* field_0x20e = (this->field_0x206 + this->field_0x468); */
        /* cLib_addCalc0((_savegpr_22(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 596)); */
        /* L_5794:; */
        /* if (this->field_0x466 != 100) goto L_57a8; */
        /* field_0x2e4 = 2; */
        /* L_57a8:; */
        /* if (this->field_0x348 == 0) goto L_58e4; */
        /* if (this->field_0x348 != 1) goto L_5834; */
        /* field_0x450 = ((dPa_control_c*)(this->field_0x5ab8))->set(2); */
        /* if (this->field_0x450 == 0) goto L_5824; */
        /* L_5824:; */
        /* field_0x348 = 2; */
        /* field_0x34a = 80; */
        /* L_5834:; */
        /* if (this->field_0x450 == 0) goto L_58e4; */
        MtxTrans(0);
        /* mDoMtx_YrotM(this->field_0x0, this->field_0x20e); */
        JPASetRMtxTVecfromMtx(this->field_0x0, (this->field_0x450 + 424), (this->field_0x450 + 484));
        /* if (this->field_0x34a != 0) goto L_58c8; */
        /* field_0x60 = -1; */
        /* field_0x450 = 0; */
        /* field_0x348 = 0; */
        /* goto L_58e4; */
        /* L_58c8:; */
        /* if (this->field_0x450 >= 30) goto L_58dc; */
        /* L_58dc:; */
        /* field_0x1ff = ((this->field_0x450 * 6) & 16777215); */
        /* L_58e4:; */
        /* return _restgpr_22(this->field_0x450); */
}

/* 00005B9C-00005C54       .text water_damage_se_set__FP8mt_class */
void water_damage_se_set(mt_class*) {
    /* ((JAIZelBasic*)(this->field_0x0))->seStart(22560, (arg0 + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
    dComIfGp_getReverb((this->field_0x20a & 255));
    }
    /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18498, (arg0 + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
    /* field_0x348 = 1; */
    /* return ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18498, (arg0 + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */


/* 00005C54-0000614C       .text damage_check__FP8mt_class */
void damage_check(mt_class*) {
        /* ((dCcD_GStts*)((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 3624)))->Move(); */
        /* if (this->field_0xc04 != 1) goto L_5bac; */
        /* L_5bac:; */
        /* if (2 >= 8) goto L_5dec; */
        /* if (this->field_0xe64 == 0) goto L_5de4; */
        /* if (this->field_0x460 != 0) goto L_5de4; */
        /* ((dCcD_GObjInf*)(((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + (2 * 300)) + 3656)))->GetTgHitObj(); */
        /* if (/ * beq * / 1) goto L_5c24; */
        /* field_0x1cbc = 1; */
        /* field_0x1906 = 1; */
        /* field_0x1908 = (this->field_0x118 + this->field_0xc); */
        /* field_0x285 = 0; */
        /* goto L_6038; */
        /* L_5c24:; */
        at_power_check();
        /* if (/ * beq * / 1) goto L_5c48; */
        /* if (/ * beq * / 1) goto L_5c68; */
        /* L_5c48:; */
        /* field_0x18fb = 0; */
        /* field_0x460 = 5; */
        /* water_damage_se_set(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_5dec; */
        /* L_5c68:; */
        /* if (this->field_0x454 != 2) goto L_5cac; */
        /* if (/ * beq * / 1) goto L_5c84; */
        /* if (/ * bne * / 1) goto L_5cac; */
        /* L_5c84:; */
        /* if (/ * bne * / 1) goto L_5c98; */
        /* field_0x18f8 = 3; */
        /* goto L_5ca0; */
        /* L_5c98:; */
        /* field_0x18f8 = 2; */
        /* L_5ca0:; */
        /* field_0x460 = 5; */
        /* goto L_6038; */
        /* L_5cac:; */
        /* if (/ * bne * / 1) goto L_5cc4; */
        /* field_0x460 = 5; */
        /* goto L_5dec; */
        /* L_5cc4:; */
        /* if (/ * beq * / 1) goto L_5d60; */
        /* if (5 != 1) goto L_5d60; */
        /* field_0x455 = 15; */
        /* mDoMtx_YrotS(this->field_0x0, this->field_0x20e); */
        MtxPosition();
        /* PSVECAdd((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1148), (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1148)); */
        /* field_0x462 = (this->field_0x3f2 + 6); */
        /* field_0x456 = (this->field_0x3f4 + 6); */
        /* field_0x460 = 5; */
        /* def_se_set(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_6038; */
        /* L_5d60:; */
        /* if (5 != 2) goto L_5dec; */
        /* field_0x460 = 5; */
        /* cc_at_check(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (this->field_0x285 != 0) goto L_5d90; */
        /* field_0x18f8 = 2; */
        /* L_5d90:; */
        /* field_0x18fc = 12; */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
        /* goto L_5dec; */
        /* L_5de4:; */
        /* L_5dec:; */
        /* if (this->field_0x460 != 0) goto L_5fbc; */
        /* if (this->field_0x17c4 == 0) goto L_5fbc; */
        /* field_0x460 = 5; */
        /* ((dCcD_GObjInf*)((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 6056)))->GetTgHitObj(); */
        /* if (/ * beq * / 1) goto L_5e38; */
        /* field_0x1906 = 1; */
        /* goto L_6038; */
        /* L_5e38:; */
        at_power_check();
        /* field_0x18fb = 0; */
        /* if (/ * beq * / 1) goto L_5e80; */
        /* if (/ * beq * / 1) goto L_5e80; */
        /* if (/ * beq * / 1) goto L_5e80; */
        /* if (/ * beq * / 1) goto L_5e80; */
        /* if (this->field_0xc04 != 1) goto L_6038; */
        /* L_5e80:; */
        /* cc_at_check(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (/ * bne * / 1) goto L_5eb0; */
        /* field_0x18f8 = 1; */
        /* field_0x18fb = 0; */
        /* goto L_5edc; */
        /* L_5eb0:; */
        /* if (0 == 4) goto L_5ec8; */
        /* if (/ * beq * / 1) goto L_5edc; */
        /* L_5ec8:; */
        /* field_0x18fb = 0; */
        /* water_damage_se_set(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_5edc:; */
        /* if (this->field_0x18fb != 0) goto L_5ef0; */
        /* goto L_5f58; */
        /* L_5ef0:; */
        /* field_0x455 = 15; */
        /* mDoMtx_YrotS(this->field_0x0, this->field_0x20e); */
        MtxPosition();
        /* PSVECAdd((_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1148), (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1148)); */
        /* field_0x462 = 25; */
        /* field_0x456 = 10; */
        /* field_0x204 = -16384; */
        /* L_5f58:; */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_5f8c; */
        /* goto L_5f90; */
        /* L_5f8c:; */
        /* L_5f90:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18435, (_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* anm_init(_savegpr_28(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 10, 2, 0); */
        /* field_0x18d4 = 0; */
        /* L_5fbc:; */
        /* if (1 == 0) goto L_6038; */
        /* mDoMtx_YrotS(this->field_0x0); */
        MtxPosition();
        /* if ((1 & 16777215) != 2) goto L_6024; */
        /* field_0x224 = 0; */
        /* L_6024:; */
        /* field_0x454 = 1; */
        /* field_0x455 = 20; */
        /* field_0x2e4 = 1; */
        /* L_6038:; */
        return _restgpr_28(1);
}

/* 00006188-000074D4       .text daMt_Execute__FP8mt_class */
static BOOL daMt_Execute(mt_class*) {
        /* if (enemy_ice((_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 6400)) == 0) goto L_60e0; */
        return 1;
        /* L_60e0:; */
        /* if (this->field_0x2bb == 0) goto L_6120; */
        /* if (((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->isSwitch((this->field_0x2bb + -1), (this->field_0x20a & 255)) == 0) goto L_6118; */
        /* field_0x2bb = 0; */
        /* goto L_6120; */
        /* L_6118:; */
        return 1;
        /* L_6120:; */
        __ct();
        ((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GroundCross();
        /* if (/ * beq * / 1) goto L_6200; */
        /* if (/ * bge * / 1) goto L_6200; */
        /* if (this->field_0x18fa != 0) goto L_61d8; */
        /* field_0x254 = (this->field_0x254 * this->field_0xc0); */
        /* field_0x224 = 0; */
        fopKyM_createMpillar();
        /* L_61d8:; */
        /* field_0x18fa = 1; */
        /* field_0x258 = 0; */
        /* if (this->field_0x224 >= this->field_0x68) goto L_6210; */
        /* field_0x224 = 0; */
        /* goto L_6210; */
        /* L_6200:; */
        /* field_0x18fa = 0; */
        /* field_0x258 = 0; */
        /* L_6210:; */
        /* field_0x280 = 4; */
        /* mt_eye_tex_anm(_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (this->field_0x4 != 0) goto L_6bd8; */
        /* if (this->field_0x18d4 == 0) goto L_625c; */
        /* field_0x18d4 = (this->field_0x18d4 + 1); */
        /* if (this->field_0x18d4 != 11) goto L_625c; */
        /* field_0x18d4 = 0; */
        /* L_625c:; */
        /* field_0x29c = 0; */
        /* field_0x2a0 = 0; */
        /* field_0x298 = 0; */
        /* field_0x2a8 = 0; */
        /* field_0x2a4 = 0; */
        /* if (this->field_0x18d4 == 0) goto L_62a0; */
        /* L_62a0:; */
        /* if (this->field_0x18fc == 0) goto L_62bc; */
        /* field_0x18fc = (this->field_0x18fc + -1); */
        /* L_62bc:; */
        /* if (this->field_0x460 == 0) goto L_62d0; */
        /* field_0x460 = (this->field_0x460 + -1); */
        /* L_62d0:; */
        /* if (this->field_0x462 == 0) goto L_62e4; */
        /* field_0x462 = (this->field_0x462 + -1); */
        /* L_62e4:; */
        /* if (this->field_0x34a == 0) goto L_62f8; */
        /* field_0x34a = (this->field_0x34a + -1); */
        /* L_62f8:; */
        /* if (this->field_0x48e == 0) goto L_631c; */
        /* field_0x48e = (this->field_0x48e + -1); */
        /* field_0x490 = (this->field_0x490 + 1); */
        /* goto L_6344; */
        /* L_631c:; */
        /* if (this->field_0x490 == 0) goto L_6344; */
        /* if (this->field_0x490 <= 15) goto L_6338; */
        /* field_0x490 = 15; */
        /* L_6338:; */
        /* field_0x490 = (this->field_0x490 + -1); */
        /* L_6344:; */
        /* field_0x46a = (this->field_0x46a + 1); */
        /* if (this->field_0x466 == 0) goto L_6364; */
        /* field_0x466 = (this->field_0x466 + -1); */
        /* L_6364:; */
        /* if (this->field_0x454 >= 3) goto L_6378; */
        /* damage_check(_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_6378:; */
        /* field_0xc04 = 0; */
        __ct();
        Set();
        /* if (((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->LineCross() == 0) goto L_6404; */
        /* field_0x18f9 = 1; */
        /* goto L_640c; */
        /* L_6404:; */
        /* field_0x18f9 = 0; */
        /* L_640c:; */
        /* if (this->field_0x454 == 3) goto L_67ac; */
        /* if (/ * bge * / 1) goto L_6434; */
        /* if (this->field_0x454 == 1) goto L_6570; */
        /* if (/ * bge * / 1) goto L_6694; */
        /* if (this->field_0x454 >= 0) goto L_6440; */
        /* goto L_6b98; */
        /* L_6434:; */
        /* if (this->field_0x454 == 6) goto L_67fc; */
        /* goto L_6b98; */
        /* L_6440:; */
        /* mt_move(_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* cLib_addCalcAngleS2((_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 524), this->field_0x204, 2, 2048); */
        /* cLib_addCalcAngleS2((_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 526), this->field_0x206, 2, 2048); */
        /* cLib_addCalcAngleS2((_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 528), this->field_0x208, 4, 1024); */
        /* body_control1(_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (/ * beq * / 1) goto L_64ec; */
        /* field_0x1f8 = (this->field_0x1f8 + this->field_0x0); */
        /* field_0x200 = (this->field_0x200 + this->field_0x8); */
        /* field_0x6f4 = (this->field_0x6f4 + this->field_0x0); */
        /* field_0x6fc = (this->field_0x6fc + this->field_0x8); */
        /* L_64ec:; */
        /* if (this->field_0x458 != 0) goto L_6b98; */
        cM_rndF((0 + 12));
        /* if (this->field_0x5 != 0) goto L_6b98; */
        /* if (abs(this->field_0x204) >= 4096) goto L_6b98; */
        /* cM_rndF(abs(this->field_0x204)); */
        /* goto L_6b98; */
        /* L_6570:; */
        /* mt_fight(_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        __pl();
        /* body_control2(_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* body_wall_check(_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* mt_bg_check(_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (/ * beq * / 1) goto L_6b98; */
        /* field_0x1f8 = (this->field_0x1f8 + this->field_0x0); */
        /* field_0x200 = (this->field_0x200 + this->field_0x8); */
        /* goto L_6b98; */
        /* L_6694:; */
        /* mt_move_maru(_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* body_control3(_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (this->field_0x466 > 100) goto L_66bc; */
        /* body_wall_check(_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_66d8; */
        /* L_66bc:; */
        /* if (this->field_0x18fa == 0) goto L_66d8; */
        /* if (body_wall_check(_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)) <= 50) goto L_66d8; */
        /* field_0x466 = 71; */
        /* L_66d8:; */
        /* if (/ * beq * / 1) goto L_6700; */
        /* field_0x1f8 = (this->field_0x1f8 + this->field_0x0); */
        /* field_0x200 = (this->field_0x200 + this->field_0x8); */
        /* L_6700:; */
        /* if (this->field_0x466 != 50) goto L_6b98; */
        /* field_0x2e4 = 0; */
        /* field_0x454 = 1; */
        /* field_0x455 = 0; */
        /* field_0x18fb = 2; */
        /* field_0x285 = 8; */
        /* field_0x48e = 0; */
        /* anm_init(_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 10, 2, 0); */
        /* field_0x230 = 0; */
        /* field_0x234 = 0; */
        /* field_0x238 = 0; */
        /* field_0x23c = 0; */
        /* field_0x240 = 0; */
        /* field_0x244 = 0; */
        /* field_0xe48 = (this->field_0xe48 & -11); */
        /* goto L_6b98; */
        /* L_67ac:; */
        /* field_0x460 = 5; */
        /* field_0x280 = 0; */
        /* body_control4(_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (this->field_0x45a != 1) goto L_6b98; */
        /* field_0x1cbc = 1; */
        /* fopAcM_delete(_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        ((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->onActor(this->field_0x1bc, (this->field_0x1e2 & 255));
        /* goto L_6b98; */
        /* L_67fc:; */
        /* if (this->field_0x290 != 16) goto L_6884; */
        /* mDoMtx_YrotS(this->field_0x0, this->field_0x20e); */
        MtxPosition();
        /* cLib_addCalc2((_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504)); */
        /* cLib_addCalc2((_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 512)); */
        /* L_6884:; */
        /* field_0x464 = 3; */
        /* field_0x2e4 = 1; */
        /* field_0x460 = 5; */
        /* body_control5(_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* field_0x1fc = (this->field_0x1fc + this->field_0x224); */
        /* field_0x224 = (this->field_0x224 + this->field_0x258); */
        /* mt_bg_check(_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (this->field_0x456 != 0) goto L_6b5c; */
        /* if (this->field_0x290 == 16) goto L_6954; */
        /* field_0x2e4 = 0; */
        /* field_0x454 = 1; */
        /* field_0x455 = 0; */
        /* field_0x48e = 0; */
        /* anm_init(_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 10, 2, 0); */
        /* field_0xe48 = (this->field_0xe48 & -11); */
        /* goto L_6b98; */
        /* L_6954:; */
        /* field_0x474 = (this->field_0xe8 + this->field_0x40); */
        /* if (this->field_0x17c4 == 0) goto L_6b98; */
        /* field_0x285 = 0; */
        /* field_0x456 = (this->field_0x8a + 40); */
        /* field_0x474 = (this->field_0x124 + this->field_0x40); */
        /* ((JAIZelBasic*)(this->field_0x0))->seStart(10280, (_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_6a10; */
        /* goto L_6a14; */
        /* L_6a10:; */
        /* L_6a14:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18435, (_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* ((dCcD_GObjInf*)((_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 6056)))->GetTgHitObj(); */
        at_power_check();
        /* ((JAIZelBasic*)(this->field_0x0))->onEnemyDamage(); */
        /* ((JAIZelBasic*)(this->field_0x0))->bgmHitSound(); */
        /* field_0x0 = (this->field_0x92 + 6); */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0, 16, (_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), 0, 0, 255, 0); */
        /* fopAcM_searchActorAngleY(_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), this->field_0x5b38); */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0, 13, (_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504)); */
        dKy_SordFlush_set();
        /* anm_init(_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 8, 0, 0); */
        /* goto L_6b98; */
        /* L_6b5c:; */
        /* field_0x46e = 0; */
        /* cLib_addCalc0((_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1140), ((char*)&g_regHIO + 0)); */
        /* if (this->field_0x456 != 1) goto L_6b98; */
        /* bakuha(_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_6b98:; */
        /* if (this->field_0x466 <= 60) goto L_6bb8; */
        /* cLib_addCalc0((_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 6384)); */
        /* goto L_6bcc; */
        /* L_6bb8:; */
        /* cLib_addCalc2((_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 6384)); */
        /* L_6bcc:; */
        __dt();
        /* L_6bd8:; */
        __ct();
        Set();
        /* if (((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->LineCross() == 0) goto L_6c60; */
        /* if (((this->field_0x1e0 - this->field_0x2c) - this->field_0x1e8) >= this->field_0x30) goto L_6c60; */
        /* L_6c60:; */
        __ct();
        Set();
        ((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->LineCross();
        __ct();
        Set();
        /* if (((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->LineCross() == 0) goto L_6d5c; */
        /* if (((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->LineCross() != 0) goto L_6d5c; */
        /* field_0x1f8 = 0; */
        /* field_0x1fc = 0; */
        /* field_0x200 = 0; */
        ((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetTriPla();
        /* field_0x1f8 = (this->field_0x1f8 + this->field_0x0); */
        /* field_0x1fc = (this->field_0x1fc + this->field_0x4); */
        /* field_0x200 = (this->field_0x200 + this->field_0x8); */
        /* L_6d5c:; */
        __dt();
        /* field_0x274 = 0; */
        /* field_0x278 = 0; */
        /* field_0x27c = 0; */
        /* if (this->field_0x2e4 == 1) goto L_6dd4; */
        /* if (/ * bge * / 1) goto L_6db8; */
        /* if (this->field_0x2e4 >= 0) goto L_6dc4; */
        /* goto L_6df4; */
        /* L_6db8:; */
        /* if (this->field_0x2e4 >= 3) goto L_6df4; */
        /* goto L_6de8; */
        /* L_6dc4:; */
        /* goto L_6df4; */
        /* L_6dd4:; */
        return 2;
        /* L_6de8:; */
        /* L_6df4:; */
        /* field_0x2e8 = (this->field_0x2e8 + 2); */
        /* if (this->field_0x2e8 <= 130) goto L_6e24; */
        /* if (this->field_0x2e4 != 0) goto L_6e20; */
        /* field_0x2e8 = 100; */
        /* goto L_6e24; */
        /* L_6e20:; */
        /* field_0x2e8 = 130; */
        /* L_6e24:; */
        /* field_0x2ec = (this->field_0x2ec + 2); */
        /* if (this->field_0x2ec <= 120) goto L_6e58; */
        /* if (this->field_0x2e4 != 0) goto L_6e54; */
        /* field_0x2ec = 0; */
        /* goto L_6e58; */
        /* L_6e54:; */
        /* field_0x2ec = 120; */
        /* L_6e58:; */
        /* if (this->field_0x454 < 2) goto L_6e70; */
        /* if (this->field_0x466 > 120) goto L_7098; */
        /* L_6e70:; */
        /* if (this->field_0x466 != 120) goto L_6e84; */
        /* field_0x490 = 15; */
        /* L_6e84:; */
        /* ((mDoExt_McaMorf*)(this->field_0x2c4))->play((_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), 0, 0); */
        /* field_0x46e = (this->field_0x46e + this->field_0x8); */
        /* L_6edc:; */
        /* if (0 < 15) goto L_6eec; */
        /* L_6eec:; */
        /* if (this->field_0x48e == 0) goto L_6f14; */
        /* if ((0 + -15) < this->field_0x490) goto L_6f0c; */
        /* goto L_6f30; */
        /* L_6f0c:; */
        /* goto L_6f30; */
        /* L_6f14:; */
        /* if ((14 - (0 + -15)) < this->field_0x490) goto L_6f2c; */
        /* goto L_6f30; */
        /* L_6f2c:; */
        /* L_6f30:; */
        /* cLib_addCalcAngleS2(((_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 0) + 1604)); */
        /* if ((0 + 1) < 30) goto L_6edc; */
        /* cLib_addCalcAngleS2((_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 820), 8192, 1, 256); */
        /* cLib_addCalc2((_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 824), ((char*)&jmaSinShift + 0), (((this->field_0x46a * (this->field_0x8e + 2500)) + (0 * (this->field_0x90 + 7500))) & 65535), (this->field_0x46a * (this->field_0x8e + 2500))); */
        /* goto L_70d4; */
        /* L_7098:; */
        /* field_0x334 = 0; */
        /* L_70a8:; */
        /* field_0x640 = 0; */
        /* cLib_addCalcAngleS2(((_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 0) + 1604), 10000, 10, 300); */
        /* if ((0 + 1) < 30) goto L_70a8; */
        /* L_70d4:; */
        /* if (this->field_0x2b4 != 0) goto L_7278; */
        /* L_7108:; */
        PSMTXMultVec((this->field_0x50 + 36));
        /* if (this->field_0x454 < 2) goto L_715c; */
        /* if (this->field_0x466 > 40) goto L_7170; */
        /* L_715c:; */
        /* if (this->field_0x454 == 6) goto L_7170; */
        /* if (this->field_0x7 == 0) goto L_7180; */
        /* L_7170:; */
        /* field_0x354 = (this->field_0x354 + this->field_0xd4); */
        /* L_7180:; */
        /* if (0 < 0) goto L_71b8; */
        /* if (0 > 6) goto L_71b8; */
        /* ((dPa_control_c*)(this->field_0x5ab8))->setSimple(); */
        /* L_71b8:; */
        /* if (0 < 1) goto L_71f0; */
        /* if (0 > 6) goto L_71f0; */
        /* ((dPa_control_c*)(this->field_0x5ab8))->setSimple(); */
        /* L_71f0:; */
        /* if (this->field_0x34c != 0) goto L_7258; */
        /* if (0 == 1) goto L_7214; */
        /* if (0 == 3) goto L_7214; */
        /* if (0 != 5) goto L_7258; */
        /* L_7214:; */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(4); */
        /* L_7258:; */
        /* if ((0 + 1) < 8) goto L_7108; */
        /* field_0x34c = 1; */
        /* L_7278:; */
        /* if (this->field_0x454 >= 2) goto L_7374; */
        /* if (this->field_0x18fa != 0) goto L_7374; */
        /* if (this->field_0x48e != 0) goto L_7374; */
        /* if (this->field_0x45c != 0) goto L_7308; */
        /* cM_rndF(((dPa_control_c*)(this->field_0x5ab8))->set(4)); */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_72fc; */
        /* goto L_7300; */
        /* L_72fc:; */
        /* L_7300:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(18433, (_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* L_7308:; */
        /* if (this->field_0x45e != 0) goto L_7374; */
        /* cM_rndF(((JAIZelBasic*)(this->field_0x0))->monsSeStart(18433, (_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255)))); */
        dComIfGp_getReverb((this->field_0x20a & 255));
        /* if (_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_7368; */
        /* goto L_736c; */
        /* L_7368:; */
        /* L_736c:; */
        /* ((JAIZelBasic*)(this->field_0x0))->monsSeStart(22543, (_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), -1, 0, dComIfGp_getReverb((this->field_0x20a & 255))); */
        /* L_7374:; */
        /* if ((this->field_0x18f8 & 255) < 2) goto L_7394; */
        /* bakuha(_savegpr_21(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* field_0x18f8 = -1; */
        /* L_7394:; */
        __dt();
        return _restgpr_21(1);
}

/* 00007CC4-00007CCC       .text daMt_IsDelete__FP8mt_class */
static BOOL daMt_IsDelete(mt_class*) {
    return 1;
}

/* 00007CCC-00007E18       .text daMt_Delete__FP8mt_class */
static BOOL daMt_Delete(mt_class*) {
    /* dComIfG_resDelete((_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 684), ((char*)&@stringBase0 + 0)); */
    if (this->field_0x450 != 0) {
        /* field_0x60 = -1; */
        /* field_0x450 = 0; */
    }
    /* L_7c2c:; */
    /* if ((0 + 1) >= 8) goto L_7c2c; */
    if (this->field_0x1cbc == 0) {
        /* if (this->field_0x2b6 != 0) goto L_7cf4; */
        /* if (this->field_0x2ba != 0) goto L_7cf4; */
        /* if (((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->isSwitch(this->field_0x2ba, (this->field_0x20a & 255)) == 0) goto L_7cf4; */
        fopAcM_CreateAppend();
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* field_0xc = 0; */
        fpcSCtRq_Request(fpcLy_CurrentLayer(), 217, 0, 0, fopAcM_CreateAppend());
    }
    /* L_7cf4:; */
    return _restgpr_29(1);
}

/* 00007E18-00008400       .text CallbackCreateHeap__FP10fopAc_ac_c */
static BOOL CallbackCreateHeap(fopAc_ac_c*) {
        /* _savegpr_15(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* L_7d68:; */
        __nw(180);
        /* if (/ * beq * / 1) goto L_7df0; */
        /* L_7df0:; */
        /* field_0x2c4 = __ct(((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(((C_@2100 + 0) + 396)), 1, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(((C_@2100 + 0) + 396)), 0, 0, 0, 2, 0); */
        /* if (this->field_0x2c4 == 0) goto L_7e10; */
        /* if (this->field_0x50 != 0) goto L_7e18; */
        /* L_7e10:; */
        return 0;
        /* L_7e18:; */
        /* if (__nw(20) == 0) goto L_7e50; */
        /* field_0x0 = 0; */
        /* field_0x4 = 0; */
        /* field_0x0 = 0; */
        /* field_0xc = 0; */
        /* L_7e50:; */
        /* field_0x2f0 = __nw(20); */
        /* if (this->field_0x2f0 != 0) goto L_7e98; */
        ((JUTAssertion*)(((JUTAssertion*)(__nw(20)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 3), 4544, ((char*)&@stringBase0 + 14));
        OSPanic(((char*)&@stringBase0 + 3), 4544, ((char*)&@stringBase0 + 28));
        /* L_7e98:; */
        /* if (((mDoExt_btkAnm*)(this->field_0x2f0))->init(this->field_0x4, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(), 1, 2, 0, -1, 0) != 0) goto L_7eec; */
        return 0;
        /* L_7eec:; */
        /* if (__nw(24) == 0) goto L_7f24; */
        /* field_0x0 = 0; */
        /* field_0x4 = 0; */
        /* field_0x0 = 0; */
        /* field_0xc = 0; */
        /* field_0x10 = 0; */
        /* L_7f24:; */
        /* field_0x310 = __nw(24); */
        /* if (this->field_0x310 != 0) goto L_7f6c; */
        ((JUTAssertion*)(((JUTAssertion*)(__nw(24)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 3), 4557, ((char*)&@stringBase0 + 33));
        OSPanic(((char*)&@stringBase0 + 3), 4557, ((char*)&@stringBase0 + 28));
        /* L_7f6c:; */
        /* if (((mDoExt_brkAnm*)(this->field_0x310))->init(this->field_0x4, ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(), 1, 2, 0, -1, 0) != 0) goto L_7fc0; */
        return 0;
        /* L_7fc0:; */
        /* if (0 != 0) goto L_809c; */
        /* anm_init(_savegpr_15(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 10, 2, 0); */
        /* L_8000:; */
        /* ((J3DAnmTexPattern*)(((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes()))->searchUpdateMaterialID(this->field_0x4); */
        /* if ((0 + 1) < 2) goto L_8000; */
        /* field_0x340 = __construct_new_array(__nwa(((this->field_0x1a * 12) + 16)), ((char*)&__ct__11J3DTexNoAnmFv + 0), ((char*)&__dt__11J3DTexNoAnmFv + 0), 12, this->field_0x1a); */
        /* goto L_8084; */
        /* L_806c:; */
        /* L_8084:; */
        /* if (((0 + 1) & 65535) < (this->field_0x1a & 65535)) goto L_806c; */
        /* tex_anm_set(_savegpr_15(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* L_809c:; */
        /* field_0x14 = _savegpr_15(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        return 0;
        /* L_80a8:; */
        /* if (0 != 0) goto L_80e0; */
        /* if ((0 & 65535) < 2) goto L_8144; */
        /* if ((0 & 65535) > 5) goto L_8144; */
        /* field_0x8 = 0; */
        /* goto L_8144; */
        /* L_80e0:; */
        /* if (0 != 7) goto L_8118; */
        /* if ((0 & 65535) < 2) goto L_8144; */
        /* if ((0 & 65535) > 5) goto L_8144; */
        /* field_0x8 = 0; */
        /* goto L_8144; */
        /* L_8118:; */
        /* if ((0 & 65535) < 2) goto L_8144; */
        /* if ((0 & 65535) > 5) goto L_8144; */
        /* field_0x8 = 0; */
        /* L_8144:; */
        /* if (((0 + 1) & 65535) < this->field_0x28) goto L_80a8; */
        /* if ((0 + 1) < 8) goto L_7d68; */
        /* L_818c:; */
        ((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(((0 + 1) & 65535));
        /* if (/ * bne * / 1) goto L_81e0; */
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&@stringBase0 + 0)))->getRes(((0 + 1) & 65535))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 3), 4730, ((char*)&@stringBase0 + 47));
        OSPanic(((char*)&@stringBase0 + 3), 4730, ((char*)&@stringBase0 + 28));
        /* L_81e0:; */
        /* field_0x18d8 = mDoExt_J3DModel(this->field_0x4, 0, (this->field_0x1a + 515)); */
        /* if (this->field_0x18d8 != 0) goto L_823c; */
        ((JUTAssertion*)(((JUTAssertion*)(mDoExt_J3DModel(this->field_0x4, 0, (this->field_0x1a + 515))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 3), 4733, ((char*)&@stringBase0 + 62));
        OSPanic(((char*)&@stringBase0 + 3), 4733, ((char*)&@stringBase0 + 28));
        /* L_823c:; */
        /* field_0x18e4 = mDoExt_J3DModel(this->field_0x4, 0, (this->field_0x1a + 515)); */
        /* if (this->field_0x18e4 != 0) goto L_8294; */
        ((JUTAssertion*)(((JUTAssertion*)(mDoExt_J3DModel(this->field_0x4, 0, (this->field_0x1a + 515))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 3), 4735, ((char*)&@stringBase0 + 87));
        OSPanic(((char*)&@stringBase0 + 3), 4735, ((char*)&@stringBase0 + 28));
        /* L_8294:; */
        /* field_0x18 = 0; */
        /* field_0x1c = 0; */
        /* field_0x20 = 0; */
        /* field_0x18 = 0; */
        /* field_0x1c = 0; */
        /* field_0x20 = 0; */
        /* if ((0 + 1) < 3) goto L_818c; */
        return _restgpr_15(1);

/* 000084AC-000088A8       .text daMt_Create__FP10fopAc_ac_c */
static cPhs_State daMt_Create(fopAc_ac_c*) {
    /* Nonmatching */
    static dCcD_SrcSph eye_sph_src = {
        // dCcD_SrcGObjInf
        {
            /* Flags             */ 0,
            /* SrcObjAt  Type    */ 0,
            /* SrcObjAt  Atp     */ 0,
            /* SrcObjAt  SPrm    */ cCcD_AtSPrm_Set_e | cCcD_AtSPrm_VsPlayer_e,
            /* SrcObjTg  Type    */ AT_TYPE_ALL & ~AT_TYPE_WATER & ~AT_TYPE_UNK20000 & ~AT_TYPE_WIND & ~AT_TYPE_UNK400000 & ~AT_TYPE_LIGHT,
            /* SrcObjTg  SPrm    */ cCcD_TgSPrm_Set_e | cCcD_TgSPrm_IsEnemy_e,
            /* SrcObjCo  SPrm    */ 0,
            /* SrcGObjAt Se      */ 0,
            /* SrcGObjAt HitMark */ dCcG_AtHitMark_None_e,
            /* SrcGObjAt Spl     */ dCcG_At_Spl_UNK0,
            /* SrcGObjAt Mtrl    */ 0,
            /* SrcGObjAt SPrm    */ 0,
            /* SrcGObjTg Se      */ 0,
            /* SrcGObjTg HitMark */ 0,
            /* SrcGObjTg Spl     */ dCcG_Tg_Spl_UNK0,
            /* SrcGObjTg Mtrl    */ 0,
            /* SrcGObjTg SPrm    */ dCcG_TgSPrm_NoConHit_e,
            /* SrcGObjCo SPrm    */ 0,
        },
        // cM3dGSphS
        {{
            /* Center */ {0.0f, 0.0f, 0.0f},
            /* Radius */ 30.0f,
        }},
    };

static actor_method_class l_daMt_Method = {
    (process_method_func)daMt_Create,
    (process_method_func)daMt_Delete,
    (process_method_func)daMt_Execute,
    (process_method_func)daMt_IsDelete,
    (process_method_func)daMt_Draw,
};

actor_process_profile_definition g_profile_MT = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0007,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_MT_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(mt_class),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_MT_e,
    /* Actor SubMtd */ &l_daMt_Method,
    /* Status       */ fopAcStts_CULL_e | fopAcStts_FREEZE_e | fopAcStts_UNK40000_e | fopAcStts_UNK8000000_e,
    /* Group        */ fopAc_ENEMY_e,
    /* Cull Type    */ fopAc_CULLBOX_CUSTOM_e,
};

/* 由 fix_decomp_braces.py 补齐：反编译产物末尾缺 3 个 } */
}}}

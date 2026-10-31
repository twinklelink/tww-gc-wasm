/**
 * d_a_npc_uk.cpp
 * NPC - Jin, Jan, & Jun-Roberto
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_npc_uk.h"
#include "m_Do/m_Do_ext.h"

/* 000000EC-000000F8       .text getType__10daNpc_Uk_cFv */
u8 daNpc_Uk_c::getType() {
    return (u8)(*reinterpret_cast<u32*>(reinterpret_cast<u8*>(this) + 0xB0));
}

/* 000000F8-00000104       .text getPath__10daNpc_Uk_cFv */
u8 daNpc_Uk_c::getPath() {
    return (u8)(*reinterpret_cast<u32*>(reinterpret_cast<u8*>(this) + 0xB0) >> 8);
}

/* 00000104-00000110       .text getShapeType__10daNpc_Uk_cFv */
u8 daNpc_Uk_c::getShapeType() {
    return (u8)((*reinterpret_cast<u32*>(reinterpret_cast<u8*>(this) + 0xB0) >> 16) & 0xF);
}

/* 00000110-0000015C       .text getCaughtFlag__10daNpc_Uk_cFv */
void daNpc_Uk_c::getCaughtFlag() {
    /* field_0x674 = 0; */
    /* field_0x678 = 0; */
    return this;
}

/* 0000015C-000001A8       .text getFoundFlag__10daNpc_Uk_cFv */
void daNpc_Uk_c::getFoundFlag() {
        /* if (getShapeType() == 2) goto L_a0; */
        /* if (/ * bge * / 1) goto L_a8; */
        /* if (getShapeType() >= 1) goto L_98; */
        /* goto L_a8; */
        /* L_98:; */
        return 384;
        /* L_a0:; */
        return 320;
        /* L_a8:; */
        return 1;
}

/* 000001A8-000001F4       .text getFirstTalk__10daNpc_Uk_cFv */
void daNpc_Uk_c::getFirstTalk() {
        /* if (getShapeType() == 1) goto L_ec; */
        /* if (/ * bge * / 1) goto L_f4; */
        /* if (getShapeType() >= 0) goto L_e4; */
        /* goto L_f4; */
        /* L_e4:; */
        return 4610;
        /* L_ec:; */
        return 4612;
        /* L_f4:; */
        return 4609;
}

/* 000001F4-0000026C       .text chkGameStart__10daNpc_Uk_cFv */
void daNpc_Uk_c::chkGameStart() {
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 4440)))->isEventBit(64) != 0) {
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 4440)))->isEventBit(getCaughtFlag()) == 0) goto L_164; */
        return 1;
    }
    /* L_164:; */
    return 0;
}

/* 0000026C-00000420       .text chkPositioning__10daNpc_Uk_cFfffss */
void daNpc_Uk_c::chkPositioning(float, float, float, short, short) {
    /* _savegpr_27(this, float, float, float, short, short, arg6, arg7); */
    __mi();
    PSVECSquareMag();
    if (/* ble */ 1) {
    }
    if (/* ble */ 1) {
        return 0;
    }
    if (/* blt */ 1) {
        /* if (/ * ble * / 1) goto L_2a8; */
    }
    return 0;
    /* L_2a8:; */
    /* cLib_targetAngleY((_savegpr_27(this, float, float, float, short, short, arg6, arg7) + 504), (this->field_0x5b40 + 504)); */
    if (/* ble */ 1) {
        /* if (((this->field_0x206 - cLib_targetAngleY((_savegpr_27(this, float, float, float, short, short, arg6, arg7) + 504), (this->field_0x5b40 + 504))) & 65535) < 0) goto L_300; */
        /* if (((this->field_0x206 - cLib_targetAngleY((_savegpr_27(this, float, float, float, short, short, arg6, arg7) + 504), (this->field_0x5b40 + 504))) & 65535) > 0) goto L_300; */
        return 1;
    }
    /* if (((this->field_0x206 - cLib_targetAngleY((_savegpr_27(this, float, float, float, short, short, arg6, arg7) + 504), (this->field_0x5b40 + 504))) & 65535) >= 1) { */
        /* if (((this->field_0x206 - cLib_targetAngleY((_savegpr_27(this, float, float, float, short, short, arg6, arg7) + 504), (this->field_0x5b40 + 504))) & 65535) > 0) goto L_300; */
    return 1;
    /* L_300:; */
    /* return _restgpr_27(0, ((this->field_0x206 - cLib_targetAngleY((_savegpr_27(this, float, float, float, short, short, arg6, arg7) + 504), (this->field_0x5b40 + 504))) & 65535)); */
}

/* 0000045C-000008B0       .text nextVisitMode__10daNpc_Uk_cFv */
void daNpc_Uk_c::nextVisitMode() {
        /* _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0)) != 0) goto L_3cc; */
        /* field_0x6bb = 0; */
        /* goto L_3d0; */
        /* L_3cc:; */
        /* L_3d0:; */
        /* if (this->field_0x6bb != 10) goto L_3f8; */
        /* if (this->field_0x6bc == 0) goto L_3f8; */
        /* field_0x6bc = (this->field_0x6bc + -1); */
        return 10;
        /* L_3f8:; */
        /* if ((this->field_0x6bc + -1) != 0) goto L_440; */
        fopAcM_searchFromName(((char*)&@stringBase0 + 0), 255, 1);
        /* if (/ * beq * / 1) goto L_438; */
        /* if (/ * beq * / 1) goto L_428; */
        /* goto L_42c; */
        /* L_428:; */
        /* L_42c:; */
        /* field_0x68c = -1; */
        /* goto L_440; */
        /* L_438:; */
        return 0;
        /* L_440:; */
        /* if ((this->field_0x6a0 & 16777215) == 2) goto L_45c; */
        /* if ((this->field_0x6a0 & 16777215) == 9) goto L_45c; */
        /* if ((this->field_0x6a0 & 16777215) != 8) goto L_578; */
        /* L_45c:; */
        __mi();
        /* if (this->field_0x6bb == 4) goto L_4a0; */
        /* if (/ * bge * / 1) goto L_53c; */
        /* if (this->field_0x6bb >= 3) goto L_4d4; */
        /* goto L_53c; */
        /* L_4a0:; */
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_4cc; */
        return 3;
        /* L_4cc:; */
        return 4;
        /* L_4d4:; */
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_500; */
        return 2;
        /* L_500:; */
        PSVECSquareMag();
        /* if (/ * bge * / 1) goto L_534; */
        return 4;
        /* L_534:; */
        return 3;
        /* L_53c:; */
        PSVECSquareMag();
        /* if (/ * bge * / 1) goto L_570; */
        return 3;
        /* L_570:; */
        return 2;
        /* L_578:; */
        /* if (this->field_0x6bb != 9) goto L_650; */
        /* if (this->field_0x6bc == 0) goto L_5a0; */
        /* field_0x6bc = (this->field_0x6bc + -1); */
        return 9;
        /* L_5a0:; */
        __mi();
        PSVECSquareMag();
        /* if (/ * bge * / 1) goto L_5f4; */
        return 7;
        /* L_5f4:; */
        /* if ((this->field_0x6a0 & 16777215) == 4) goto L_608; */
        /* if ((this->field_0x6a0 & 16777215) != 5) goto L_610; */
        /* L_608:; */
        return 5;
        /* L_610:; */
        /* if ((this->field_0x20e - fopAcM_searchActorAngleY(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0)))) != 0) goto L_634; */
        /* L_634:; */
        /* if ((((-(this->field_0x20e - fopAcM_searchActorAngleY(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0))))) & 65535) & 65535) >= 14336) goto L_648; */
        return 2;
        /* L_648:; */
        return 9;
        /* L_650:; */
        /* if ((((-(this->field_0x20e - fopAcM_searchActorAngleY(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0))))) & 65535) & 65535) != 6) goto L_690; */
        /* if (9 == 8) goto L_664; */
        /* goto L_688; */
        /* L_664:; */
        /* if (this->field_0x6bc == 0) goto L_680; */
        /* field_0x6bc = (this->field_0x6bc + -1); */
        return 8;
        /* L_680:; */
        return 9;
        /* L_688:; */
        return 8;
        /* L_690:; */
        /* if ((this->field_0x6bc + -1) != 7) goto L_6a0; */
        return 10;
        /* L_6a0:; */
        __mi();
        /* if (this->field_0x6bb == 5) goto L_740; */
        /* if (/ * blt * / 1) goto L_774; */
        /* if (this->field_0x6bb >= 8) goto L_774; */
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_70c; */
        return 5;
        /* L_70c:; */
        /* if (this->field_0x6bb != 7) goto L_738; */
        /* if (this->field_0x6bd == 0) goto L_730; */
        /* field_0x6bd = (this->field_0x6bd + -1); */
        /* goto L_738; */
        /* L_730:; */
        return 6;
        /* L_738:; */
        /* goto L_7ac; */
        /* L_740:; */
        PSVECSquareMag();
        /* if (/ * bge * / 1) goto L_76c; */
        return 7;
        /* L_76c:; */
        return 5;
        /* L_774:; */
        PSVECSquareMag();
        /* if (/ * bge * / 1) goto L_7a8; */
        return 7;
        /* L_7a8:; */
        /* L_7ac:; */
        return _restgpr_27(2);
}

/* 000008B0-00000930       .text approachRun__10daNpc_Uk_cFP10fopAc_ac_c */
void daNpc_Uk_c::approachRun(fopAc_ac_c*) {
    dNpc_calc_DisXZ_AngY();
    return cLib_addCalcAngleS2((this + 518));
}

/* 00000930-00000964       .text aroundWalk__10daNpc_Uk_cFP10fopAc_ac_c */
void daNpc_Uk_c::aroundWalk(fopAc_ac_c*) {
    /* return ((daNpc_Mk_Static_c*)((this + 1776)))->aroundWalk(this, arg1); */
}

/* 00000964-00000AD4       .text surrender__10daNpc_Uk_cFv */
void daNpc_Uk_c::surrender() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0));
        /* if (/ * beq * / 1) goto L_9d0; */
        /* if (speedF == this->field_0x2c) goto L_9d0; */
        __mi();
        PSVECSquareMag();
        /* if (/ * bgt * / 1) goto L_9d0; */
        /* if (((this->field_0x20e - fopAcM_searchActorAngleY(PSVECSquareMag(), _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7))) & 65535) > 10922) goto L_9d0; */
        /* if (((this->field_0x20e - fopAcM_searchActorAngleY(PSVECSquareMag(), _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7))) & 65535) >= -10922) goto L_944; */
        /* goto L_9d0; */
        /* L_944:; */
        /* if ((this->field_0x20e - fopAcM_searchActorAngleY(PSVECSquareMag(), _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7))) != 0) goto L_96c; */
        /* L_96c:; */
        speed = 0;
        /* field_0x228 = 0; */
        /* L_9d0:; */
        return _restgpr_29(base, ((char*)&jmaSinShift + 0), (((this->field_0x20e + 16384) & 65535) & 65535), base);
}

/* 00000AD4-00000D88       .text runawayInit__10daNpc_Uk_cFv */
void daNpc_Uk_c::runawayInit() {
        /* if (this->field_0x6f0 == 4) goto L_b5c; */
        /* if (/ * bge * / 1) goto L_a2c; */
        /* if (this->field_0x6f0 >= 3) goto L_b44; */
        /* if (this->field_0x6f0 >= 1) goto L_a34; */
        /* goto L_c84; */
        /* L_a2c:; */
        /* if (this->field_0x6f0 >= 6) goto L_c84; */
        /* L_a34:; */
        /* if (this->field_0x6ad != 5) goto L_b28; */
        /* if (getShapeType() == 2) goto L_aa4; */
        /* if (/ * bge * / 1) goto L_ae8; */
        /* if (getShapeType() >= 1) goto L_a60; */
        /* goto L_ae8; */
        /* L_a60:; */
        ((JAIZelBasic*)(base))->seStart(18701, (this + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
        /* goto L_b28; */
        /* L_aa4:; */
        ((JAIZelBasic*)(base))->seStart(18705, (this + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
        /* goto L_b28; */
        /* L_ae8:; */
        ((JAIZelBasic*)(base))->seStart(18697, (this + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
        /* L_b28:; */
        speedF = 0;
        setAnm(4, 0);
        /* goto L_c84; */
        /* L_b44:; */
        speedF = 0;
        ((daNpc_Uk_c*)(setAnm(4, 0)))->setAnm(5, 0);
        /* goto L_c84; */
        /* L_b5c:; */
        /* field_0x224 = 0; */
        gravity = 0;
        speedF = 0;
        ((daNpc_Uk_c*)(((daNpc_Uk_c*)(setAnm(4, 0)))->setAnm(5, 0)))->setAnm(8, 0);
        /* field_0x6b9 = 11; */
        /* if (getShapeType() == 2) goto L_c00; */
        /* if (/ * bge * / 1) goto L_c44; */
        /* if (getShapeType() >= 1) goto L_bbc; */
        /* goto L_c44; */
        /* L_bbc:; */
        ((JAIZelBasic*)(base))->seStart(18703, (this + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
        /* goto L_c84; */
        /* L_c00:; */
        ((JAIZelBasic*)(base))->seStart(18707, (this + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
        /* goto L_c84; */
        /* L_c44:; */
        /* L_c84:; */
        return ((JAIZelBasic*)(base))->seStart(18699, (this + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
}

/* 00000D88-00000F48       .text nodeCallBack_Uk__FP7J3DNodei */
static BOOL nodeCallBack_Uk(J3DNode*, int) {
        /* _savegpr_27(arg0, int, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_e40; */
        /* if (this->field_0x14 == 0) goto L_e40; */
        PSMTXCopy((this->field_0x8c + (this->field_0x18 * 48)), this->field_0x0, C_@4156);
        /* if (this->field_0x18 != (this->field_0x638 & 255)) goto L_dd8; */
        /* mDoMtx_XrotM(this->field_0x0, this->field_0x632); */
        /* mDoMtx_ZrotM(this->field_0x0, ((-this->field_0x630) & 65535)); */
        MtxPosition();
        /* ((daNpc_Uk_c*)(this->field_0x14))->setAttentionBasePos(); */
        MtxPosition();
        /* ((daNpc_Uk_c*)(this->field_0x14))->setEyePos(); */
        /* if (this->field_0x67f == 255) goto L_e10; */
        /* field_0x67f = (this->field_0x67f + 1); */
        /* goto L_e10; */
        /* L_dd8:; */
        /* if (this->field_0x18 != (this->field_0x639 & 255)) goto L_e10; */
        /* mDoMtx_XrotM(this->field_0x0, this->field_0x636); */
        /* mDoMtx_ZrotM(this->field_0x0, this->field_0x634); */
        /* L_e10:; */
        PSMTXCopy(this->field_0x0, ((char*)&mCurrentMtx__6J3DSys + 0));
        PSMTXCopy(this->field_0x0, (this->field_0x8c + (this->field_0x18 * 48)));
        /* L_e40:; */
        return _restgpr_27(1);
}

/* 00000F48-00001070       .text initTexPatternAnm__10daNpc_Uk_cFb */
void daNpc_Uk_c::initTexPatternAnm(bool) {
    /* if (((daNpc_Uk_c*)(_savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7)))->getShapeType() != 1) { */
        /* return 1; */
    /* field_0x2a4 = ((dRes_control_c*)(((char*)&@stringBase0 + 3)))->getRes(((char*)&l_btp_ix_tbl + 0), ((char*)&g_dComIfG_gameInfo + -16460), 64); */
    if (this->field_0x2a4 == 0) {
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&@stringBase0 + 3)))->getRes(((char*)&l_btp_ix_tbl + 0), ((char*)&g_dComIfG_gameInfo + -16460), 64)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 6), 679, ((char*)&@stringBase0 + 21));
        OSPanic(((char*)&@stringBase0 + 6), 679, ((char*)&@stringBase0 + 45));
    }
    /* if (((mDoExt_btpAnm*)((_savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7) + 680)))->init(this->field_0x4, this->field_0x2a4, 1, 2, 0, -1) == 0) { */
        /* return 0; */
    /* field_0x2bc = 0; */
    /* field_0x2be = 0; */
    return _restgpr_29(1);
}

/* 00001070-00001108       .text playTexPatternAnm__10daNpc_Uk_cFv */
void daNpc_Uk_c::playTexPatternAnm() {
        /* if (getShapeType() != 1) goto L_1008; */
        /* if (cLib_calcTimer<s>__FPs((this + 702)) != 0) goto L_1008; */
        /* if (this->field_0x2bc < (this->field_0x6 & 65535)) goto L_1000; */
        /* field_0x2bc = (this->field_0x6 - this->field_0x2bc); */
        cM_rndF(C_@4662);
        /* goto L_1008; */
        /* L_1000:; */
        /* field_0x2bc = (C_@4661 + 1); */
        /* L_1008:; */
        return C_@4661;
}

/* 00001108-000011C0       .text setAnm__10daNpc_Uk_cFScUc */
void daNpc_Uk_c::setAnm(signed char, unsigned char) {
    if ((char & 255) == 4) {
        /* if (/ * bne * / 1) goto L_1054; */
    }
    /* L_1054:; */
    if (char == 0) {
        /* field_0x6ad = 11; */
    }
    if ((char & 255) != 0) {
        /* if ((char & 255) != -1) goto L_10c4; */
        /* field_0x6ad = char; */
        /* field_0x680 = 0; */
    }
    /* L_10c4:; */
    return dNpc_setAnm();
}

/* 000011C0-00001274       .text chkAttentionLocal__10daNpc_Uk_cFv */
void daNpc_Uk_c::chkAttentionLocal() {
    if ((this->field_0x688 & 2147483647) == 1) {
        return 1;
    }
    if (this->field_0x68a != 0) {
        /* field_0x68a = (this->field_0x68a + -1); */
        return 1;
    }
    if (((dAttention_c*)(((char*)&g_dComIfG_gameInfo + 22536)))->LockonTruth() == 0) {
    }
    return ((this - ((dAttention_c*)(((char*)&g_dComIfG_gameInfo + 22536)))->ActionTarget(0)) >> 5);
}

/* 00001274-00001310       .text chkAttention__10daNpc_Uk_cFv */
void daNpc_Uk_c::chkAttention() {
    }
    /* if ((((arg1 + -4) >> 5) & 16777215) != (chkAttentionLocal() + -4)) { */
        /* if ((((arg1 + -4) >> 5) & 16777215) == 1) goto L_120c; */
        /* field_0x63a = 1; */
    /* L_120c:; */
    return chkAttentionLocal();


/* 00001310-00001378       .text setAnmStatus__10daNpc_Uk_cFv */
void daNpc_Uk_c::setAnmStatus() {
        /* if ((this->field_0x6b9 & 255) >= 12) goto L_1254; */
        /* if ((this->field_0x6b9 & 255) >= 9) goto L_1270; */
        /* if ((this->field_0x6b9 & 255) >= 6) goto L_1260; */
        /* goto L_1270; */
        /* L_1254:; */
        /* if ((this->field_0x6b9 & 255) >= 14) goto L_1270; */
        /* goto L_127c; */
        /* L_1260:; */
        /* setAnm(5, 0, arg3, arg4, arg5, arg6, arg7); */
        /* goto L_127c; */
        /* L_1270:; */
        /* L_127c:; */
        /* return ((daNpc_Uk_c*)(setAnm(5, 0, arg3, arg4, arg5, arg6, arg7)))->setAnm(0, 0); */
}

/* 00001378-000013BC       .text eventOrder__10daNpc_Uk_cFv */
void daNpc_Uk_c::eventOrder() {
    if (this->field_0x6b8 == 0) {
        /* if (/ * beq * / 1) goto L_12c0; */
    }
    /* L_12c0:; */
    return fopAcM_orderSpeakEvent(this);
}

/* 000013BC-00001420       .text checkOrder__10daNpc_Uk_cFv */
void daNpc_Uk_c::checkOrder() {
    if (this->field_0xf8 != 2) {
        /* if (this->field_0xf8 == 1) goto L_1314; */
        /* if (this->field_0x6b8 == 0) goto L_1314; */
    }
    /* L_1314:; */
    return talkInit();
}

/* 00001420-00001464       .text next_msgStatus__10daNpc_Uk_cFPUl */
void daNpc_Uk_c::next_msgStatus(unsigned long*) {
        /* if (/ * bgt * / 1) goto L_1370; */
        base = 0;
        return 15;
}

/* 00001464-000015E0       .text getMsg__10daNpc_Uk_cFv */
void daNpc_Uk_c::getMsg() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if ((this->field_0x6bf & 255) == 2) goto L_1484; */
        /* if (/ * bge * / 1) goto L_14d8; */
        /* if ((this->field_0x6bf & 255) >= 1) goto L_13b4; */
        /* goto L_14d8; */
        /* L_13b4:; */
        /* if ((this->field_0x6b9 & 255) == 3) goto L_13cc; */
        /* if ((this->field_0x6b9 & 255) != 4) goto L_13d4; */
        /* L_13cc:; */
        /* goto L_14d8; */
        /* L_13d4:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 4440)))->isEventBit(64) == 0) goto L_1400; */
        /* ((daNpc_Uk_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getShapeType(); */
        /* goto L_14d8; */
        /* L_1400:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(4928) == 0) goto L_1430; */
        /* ((daNpc_Uk_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getShapeType(); */
        /* goto L_14d8; */
        /* L_1430:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(((daNpc_Uk_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getFirstTalk()) == 0) goto L_145c; */
        /* ((daNpc_Uk_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getShapeType(); */
        /* goto L_14d8; */
        /* L_145c:; */
        /* ((daNpc_Uk_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getShapeType(); */
        /* ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(((daNpc_Uk_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getFirstTalk()); */
        /* goto L_14d8; */
        /* L_1484:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 4440)))->isEventBit(((daNpc_Uk_c*)(((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(((daNpc_Uk_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getFirstTalk())))->getCaughtFlag()) == 0) goto L_14b8; */
        /* ((daNpc_Uk_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getShapeType(); */
        /* goto L_14d8; */
        /* L_14b8:; */
        /* ((daNpc_Uk_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getShapeType(); */
        /* ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 4440)))->onEventBit(((daNpc_Uk_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getCaughtFlag()); */
        /* L_14d8:; */
        /* return _restgpr_29((((daNpc_Uk_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getShapeType() + 9906)); */
}

/* 000015E0-00001660       .text setCollision__10daNpc_Uk_cFv */
void daNpc_Uk_c::setCollision() {
    ((cM3dGCyl*)((this + 1560)))->SetC();
    ((cM3dGCyl*)((this + 1560)))->SetR(C_@4791);
    ((cM3dGCyl*)((this + 1560)))->SetH(C_@4792);
    return ((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set((this + 1280));
}

/* 00001660-00001730       .text msgAnm__10daNpc_Uk_cFUc */
void daNpc_Uk_c::msgAnm(unsigned char) {
    if (this->field_0x6c2 != (char & 16777215)) {
        /* field_0x6c2 = char; */
        /* if (this->field_0x6c2 <= 7) goto L_1634; */
        /* setAnm(0, 0, arg3, arg4, arg5, arg6, arg7); */
        /* goto L_1634; */
        /* ((daNpc_Uk_c*)(setAnm(0, 0, arg3, arg4, arg5, arg6, arg7)))->setAnm(1, 0); */
        /* goto L_1634; */
        /* ((daNpc_Uk_c*)(((daNpc_Uk_c*)(setAnm(0, 0, arg3, arg4, arg5, arg6, arg7)))->setAnm(1, 0)))->setAnm(2, 0); */
        /* goto L_1634; */
        /* ((daNpc_Uk_c*)(((daNpc_Uk_c*)(((daNpc_Uk_c*)(setAnm(0, 0, arg3, arg4, arg5, arg6, arg7)))->setAnm(1, 0)))->setAnm(2, 0)))->setAnm(3, 0); */
        /* goto L_1634; */
        /* ((daNpc_Uk_c*)(((daNpc_Uk_c*)(((daNpc_Uk_c*)(((daNpc_Uk_c*)(setAnm(0, 0, arg3, arg4, arg5, arg6, arg7)))->setAnm(1, 0)))->setAnm(2, 0)))->setAnm(3, 0)))->setAnm(4, 0); */
        /* goto L_1634; */
        /* ((daNpc_Uk_c*)(((daNpc_Uk_c*)(((daNpc_Uk_c*)(((daNpc_Uk_c*)(((daNpc_Uk_c*)(setAnm(0, 0, arg3, arg4, arg5, arg6, arg7)))->setAnm(1, 0)))->setAnm(2, 0)))->setAnm(3, 0)))->setAnm(4, 0)))->setAnm(6, 0); */
        /* goto L_1634; */
        /* ((daNpc_Uk_c*)(((daNpc_Uk_c*)(((daNpc_Uk_c*)(((daNpc_Uk_c*)(((daNpc_Uk_c*)(((daNpc_Uk_c*)(setAnm(0, 0, arg3, arg4, arg5, arg6, arg7)))->setAnm(1, 0)))->setAnm(2, 0)))->setAnm(3, 0)))->setAnm(4, 0)))->setAnm(6, 0)))->setAnm(5, 0); */
        /* goto L_1634; */
    }
    /* L_1634:; */
    /* return ((daNpc_Uk_c*)(((daNpc_Uk_c*)(((daNpc_Uk_c*)(((daNpc_Uk_c*)(((daNpc_Uk_c*)(((daNpc_Uk_c*)(((daNpc_Uk_c*)(setAnm(0, 0, arg3, arg4, arg5, arg6, arg7)))->setAnm(1, 0)))->setAnm(2, 0)))->setAnm(3, 0)))->setAnm(4, 0)))->setAnm(6, 0)))->setAnm(5, 0)))->setAnm(8, 0); */
}

/* 00001730-00001744       .text talkInit__10daNpc_Uk_cFv */
void daNpc_Uk_c::talkInit() {
    /* field_0x6c1 = 0; */
    /* field_0x6c2 = 255; */
    return this;
}

/* 00001744-000018F0       .text talk__10daNpc_Uk_cFv */
void daNpc_Uk_c::talk() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x6c1 != 0) goto L_16a0; */
        base = -1;
        /* field_0x684 = ((daNpc_Uk_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getMsg(); */
        /* field_0x6c1 = 1; */
        /* goto L_17e8; */
        /* L_16a0:; */
        /* if (/ * beq * / 1) goto L_17e8; */
        /* if (/ * bne * / 1) goto L_16dc; */
        /* base = fopMsgM_messageSet(this->field_0x684, _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_17e8; */
        /* L_16dc:; */
        /* if (this->field_0x688 == 1024) goto L_16fc; */
        /* ((daNpc_Uk_c*)(fopMsgM_messageSet(this->field_0x684, _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7))))->msgAnm(this->field_0x5bcf); */
        /* L_16fc:; */
        /* if ((this->field_0x6c1 & 255) == 2) goto L_1780; */
        /* if (/ * bge * / 1) goto L_17e8; */
        /* if ((this->field_0x6c1 & 255) >= 1) goto L_171c; */
        /* goto L_17e8; */
        /* L_171c:; */
        base = fopMsgM_SearchByID(base);
        /* if (fopMsgM_SearchByID(base) == 0) goto L_17e8; */
        /* field_0x6c1 = 2; */
        /* if (this->field_0x688 != 128) goto L_17e8; */
        /* field_0xcc = ((dEvt_control_c*)(((char*)&g_dComIfG_gameInfo + 20952)))->getPId(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_17e8; */
        /* L_1780:; */
        /* if (this->field_0xf8 != 14) goto L_17d0; */
        /* field_0xf8 = ((daNpc_Uk_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->next_msgStatus((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1668)); */
        /* if (this->field_0xf8 != 15) goto L_17e8; */
        /* fopMsgM_messageSet(this->field_0x684); */
        /* goto L_17e8; */
        /* L_17d0:; */
        /* if (this->field_0xf8 != 18) goto L_17e8; */
        /* field_0xf8 = 19; */
        /* field_0x6c1 = -1; */
        /* L_17e8:; */
        /* return _restgpr_29(this->field_0xf8); */
}

/* 000018F0-00001DE4       .text init__10daNpc_Uk_cFv */
void daNpc_Uk_c::init() {
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x280 = 10; */
        /* field_0x26d = 169; */
        /* field_0x26f = 169; */
        gravity = 0;
        PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
        /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x20e); */
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x50 + 36));
        /* ((mDoExt_McaMorf*)(this->field_0x298))->calc(); */
        /* ((dCcD_Stts*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1220)))->Init(100, 255, _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* ((dCcD_Cyl*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1280)))->Set(((char*)&dNpc_cyl_src + 0)); */
        /* field_0x544 = (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1220); */
        /* if ((this->field_0x6bf & 255) == 1) goto L_19a4; */
        /* if (/ * bge * / 1) goto L_1908; */
        /* if ((this->field_0x6bf & 255) >= 0) goto L_1914; */
        /* goto L_1c74; */
        /* L_1908:; */
        /* if ((this->field_0x6bf & 255) >= 3) goto L_1c74; */
        /* goto L_1aec; */
        /* L_1914:; */
        /* if (__ptmf_cmpr((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1696)) == 0) goto L_1c74; */
        /* if (__ptmf_test((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1696)) == 0) goto L_196c; */
        /* field_0x6c0 = -1; */
        /* __ptmf_scall(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* L_196c:; */
        /* field_0x6c0 = 0; */
        /* __ptmf_scall(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* goto L_1c74; */
        /* L_19a4:; */
        /* if (((daNpc_Uk_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->chkGameStart() == 0) goto L_1a5c; */
        /* if (__ptmf_cmpr((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1696)) == 0) goto L_1a40; */
        /* if (__ptmf_test((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1696)) == 0) goto L_1a0c; */
        /* field_0x6c0 = -1; */
        /* __ptmf_scall(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* L_1a0c:; */
        /* field_0x6c0 = 0; */
        /* __ptmf_scall(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* L_1a40:; */
        /* goto L_1c74; */
        /* L_1a5c:; */
        /* if (__ptmf_cmpr((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1696)) == 0) goto L_1c74; */
        /* if (__ptmf_test((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1696)) == 0) goto L_1ab4; */
        /* field_0x6c0 = -1; */
        /* __ptmf_scall(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* L_1ab4:; */
        /* field_0x6c0 = 0; */
        /* __ptmf_scall(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* goto L_1c74; */
        /* L_1aec:; */
        /* field_0x4d8 = 254; */
        /* ((dNpc_PathRun_c*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1688)))->setInf((((daNpc_Uk_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getPath() & 16777215), this->field_0x20a, 1); */
        /* if (this->field_0x698 != 0) goto L_1b24; */
        return 0;
        /* L_1b24:; */
        /* if (((daNpc_Uk_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->chkGameStart() == 0) goto L_1bc4; */
        /* if (__ptmf_cmpr((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1696)) == 0) goto L_1c68; */
        /* if (__ptmf_test((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1696)) == 0) goto L_1b8c; */
        /* field_0x6c0 = -1; */
        /* __ptmf_scall(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* L_1b8c:; */
        /* field_0x6c0 = 0; */
        /* __ptmf_scall(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* goto L_1c68; */
        /* L_1bc4:; */
        /* if (__ptmf_cmpr((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1696)) == 0) goto L_1c68; */
        /* if (__ptmf_test((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1696)) == 0) goto L_1c34; */
        /* field_0x6c0 = -1; */
        /* __ptmf_scall(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* L_1c34:; */
        /* field_0x6c0 = 0; */
        /* __ptmf_scall(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* L_1c68:; */
        /* L_1c74:; */
        /* field_0x670 = 0; */
        /* field_0x674 = 0; */
        /* field_0x678 = 0; */
        /* field_0x664 = 0; */
        /* field_0x668 = 0; */
        /* field_0x66c = 0; */
        /* if (base <= this->field_0x2c) goto L_1cc4; */
        cullSizeFar = (this->field_0x94 / base);
        /* L_1cc4:; */
        /* field_0x6c4 = 0; */
        /* field_0x6c8 = dComIfGp_getReverb((this->field_0x20a & 255)); */
        return _restgpr_28(1);
}

/* 00001DE4-00001E38       .text setAttention__10daNpc_Uk_cFb */
void daNpc_Uk_c::setAttention(bool) {
    if (bool != 0) {
    }
    eyePos = 0;
    /* field_0x264 = 0; */
    /* field_0x268 = 0; */
    /* field_0x274 = 0; */
    /* field_0x278 = (base + this->field_0x674); */
    /* field_0x27c = 0; */
    return this;
}

/* 00001E38-00001F5C       .text getLookBackMode__10daNpc_Uk_cFv */
void daNpc_Uk_c::getLookBackMode() {
        /* if (fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0)) == 0) goto L_1dd4; */
        /* if (this->field_0x6b9 != 2) goto L_1dd4; */
        /* if (this->field_0x6bb == 8) goto L_1da0; */
        /* if (this->field_0x6bb != 4) goto L_1da8; */
        /* L_1da0:; */
        return 3;
        /* L_1da8:; */
        /* if (this->field_0x6a0 == 8) goto L_1dc0; */
        /* if (this->field_0x6a0 != 9) goto L_1dc4; */
        /* L_1dc0:; */
        /* L_1dc4:; */
        /* if (1 == 0) goto L_1dd4; */
        return 2;
        /* L_1dd4:; */
        /* if (1 != 64) goto L_1e08; */
        /* if (fopAcM_getTalkEventPartner(this->field_0x5b40) == this) goto L_1e5c; */
        return 4;
        /* L_1e08:; */
        /* if (1 != 32) goto L_1e1c; */
        return 0;
        /* L_1e1c:; */
        /* if (1 != 4) goto L_1e30; */
        return 1;
        /* L_1e30:; */
        /* if (this->field_0x6b9 != 2) goto L_1e58; */
        /* if (this->field_0x6bb == 6) goto L_1e50; */
        /* if (this->field_0x6bb != 7) goto L_1e58; */
        /* L_1e50:; */
        return 1;
        /* L_1e58:; */
        /* L_1e5c:; */
        return 2;
}

/* 00001F5C-0000218C       .text lookBack__10daNpc_Uk_cFv */
void daNpc_Uk_c::lookBack() {
        /* _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0));
        /* if ((((daNpc_Uk_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getLookBackMode() & 16777215) == 2) goto L_1f88; */
        /* if (/ * bge * / 1) goto L_1f0c; */
        /* if ((((daNpc_Uk_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getLookBackMode() & 16777215) == 0) goto L_1f1c; */
        /* if (/ * bge * / 1) goto L_1f54; */
        /* goto L_2024; */
        /* L_1f0c:; */
        /* if ((((daNpc_Uk_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getLookBackMode() & 16777215) == 4) goto L_1fc4; */
        /* if (/ * bge * / 1) goto L_2024; */
        /* goto L_1f94; */
        /* L_1f1c:; */
        /* field_0x63a = 1; */
        dNpc_playerEyePos();
        /* goto L_2024; */
        /* L_1f54:; */
        dNpc_playerEyePos();
        /* goto L_2024; */
        /* L_1f88:; */
        /* goto L_2024; */
        /* L_1f94:; */
        /* field_0x63a = 1; */
        /* goto L_2024; */
        /* L_1fc4:; */
        /* if (fopAcM_getTalkEventPartner(this->field_0x5b40) != 0) goto L_1fe0; */
        /* L_1fe0:; */
        /* field_0x63a = 1; */
        /* L_2024:; */
        /* if (this->field_0x63a == 0) goto L_2048; */
        /* cLib_addCalcAngleS2((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1660), 1500, 4, 2048); */
        /* goto L_2050; */
        /* L_2048:; */
        /* field_0x67c = 0; */
        /* L_2050:; */
        /* return _restgpr_27(((dNpc_JntCtrl_c*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1584)))->lookAtTarget((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518))); */
}

/* 0000218C-00002254       .text getStaffName__10daNpc_Uk_cFv */
void daNpc_Uk_c::getStaffName() {
        /* if (this->field_0x6bf != 2) goto L_2110; */
        /* if (getShapeType() == 1) goto L_20f0; */
        /* if (/ * bge * / 1) goto L_20d4; */
        /* if (getShapeType() >= 0) goto L_20e0; */
        /* goto L_214c; */
        /* L_20d4:; */
        /* if (getShapeType() >= 3) goto L_214c; */
        /* goto L_2100; */
        /* L_20e0:; */
        /* goto L_2158; */
        /* L_20f0:; */
        /* goto L_2158; */
        /* L_2100:; */
        /* goto L_2158; */
        /* L_2110:; */
        /* if (((daNpc_Uk_c*)(((char*)&@stringBase0 + 60)))->getShapeType() == 2) goto L_213c; */
        /* if (/ * bge * / 1) goto L_214c; */
        /* if (((daNpc_Uk_c*)(((char*)&@stringBase0 + 60)))->getShapeType() >= 1) goto L_212c; */
        /* goto L_214c; */
        /* L_212c:; */
        /* goto L_2158; */
        /* L_213c:; */
        /* goto L_2158; */
        /* L_214c:; */
        /* L_2158:; */
        return ((char*)&@stringBase0 + 73);
}

/* 00002254-000022C4       .text checkDemoStart__10daNpc_Uk_cFv */
void daNpc_Uk_c::checkDemoStart() {
    /* field_0x6b0 = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(getStaffName(), 0, 0); */
    if (this->field_0x6b0 != -1) {
        /* field_0x6b4 = getNowEventAction(); */
        return 1;
    }
    return 0;
}

/* 000022C4-0000230C       .text getNowEventAction__10daNpc_Uk_cFv */
void daNpc_Uk_c::getNowEventAction() {
    return ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyActIdx();
}

/* 0000230C-00002494       .text visitInit__10daNpc_Uk_cFUc */
void daNpc_Uk_c::visitInit(unsigned char) {
        /* if ((char & 16777215) > 10) goto L_2380; */
        /* setAnm(4, 0, arg3, arg4, arg5, arg6, arg7); */
        /* goto L_238c; */
        /* ((daNpc_Uk_c*)(setAnm(4, 0, arg3, arg4, arg5, arg6, arg7)))->setAnm(4, 0); */
        /* if (this->field_0x6bb != 9) goto L_2294; */
        /* field_0x6be = 45; */
        /* goto L_238c; */
        /* L_2294:; */
        /* field_0x6be = 0; */
        /* goto L_238c; */
        setAnm(3, 0);
        /* goto L_238c; */
        /* if (this->field_0x6bb == 9) goto L_22d0; */
        /* if (this->field_0x6bb == 8) goto L_22d0; */
        /* if (this->field_0x6bb != 2) goto L_22dc; */
        /* L_22d0:; */
        /* field_0x6bd = 45; */
        /* goto L_22e4; */
        /* L_22dc:; */
        /* L_22e4:; */
        setAnm(4, 0);
        /* goto L_238c; */
        ((daNpc_Uk_c*)(setAnm(4, 0)))->setAnm(0, 0);
        /* field_0x6bc = 5; */
        speedF = 0;
        /* goto L_238c; */
        ((daNpc_Uk_c*)(C_@4156))->setAnm(0, 0);
        /* field_0x6bc = 15; */
        speedF = 0;
        /* goto L_238c; */
        ((daNpc_Uk_c*)(C_@4156))->setAnm(0, 0);
        /* field_0x6bc = 30; */
        speedF = 0;
        /* goto L_238c; */
        ((daNpc_Uk_c*)(C_@4156))->setAnm(0, 0);
        speedF = 0;
        /* goto L_238c; */
        /* L_2380:; */
        speedF = 0;
        /* L_238c:; */
        /* field_0x6bb = char; */
        return C_@4156;
}

/* 00002494-000025A4       .text visitProc__10daNpc_Uk_cFv */
void daNpc_Uk_c::visitProc() {
        fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0));
        /* if (this->field_0x6bb > 10) goto L_2480; */
        approachRun(fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0)));
        /* goto L_2480; */
        /* if (this->field_0x6be >= 45) goto L_2428; */
        /* field_0x6be = (this->field_0x6be + 1); */
        /* L_2428:; */
        approachRun();
        /* goto L_2480; */
        approachRun();
        /* goto L_2480; */
        aroundWalk();
        /* goto L_2480; */
        surrender();
        /* goto L_2480; */
        surrender();
        /* goto L_2480; */
        surrender();
        /* goto L_2480; */
        surrender();
        /* L_2480:; */
        /* if (this->field_0x6bb >= 11) goto L_24a4; */
        /* if (this->field_0x6bb >= 9) goto L_2498; */
        /* goto L_24a4; */
        /* L_2498:; */
        /* L_24a4:; */
        return surrender();
}

/* 000025A4-00002628       .text wait01__10daNpc_Uk_cFv */
void daNpc_Uk_c::wait01() {
    if ((this->field_0x688 & 2147483647) == 1) {
        /* field_0x6b9 = 1; */
    }
    return (((this->field_0x6b8 >> 31) + -1) & 16777215);
}

/* 00002628-000026CC       .text talk01__10daNpc_Uk_cFv */
void daNpc_Uk_c::talk01() {
    if ((talk() & 65535) == 18) {
        setAnmStatus();
        /* field_0x68a = 5; */
    }
    return (((this->field_0x688 >> 31) + -1) & 16777215);
}

/* 000026CC-0000280C       .text talk02__10daNpc_Uk_cFv */
void daNpc_Uk_c::talk02() {
        /* if ((talk() & 65535) != 18) goto L_26d8; */
        /* if (((daNpc_Mk_Static_c*)((this + 1776)))->chkGameSet() != 0) goto L_263c; */
        setAnmStatus();
        /* goto L_26c4; */
        /* L_263c:; */
        /* field_0x6e6 = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getEventIdx(((char*)&@stringBase0 + 159), 255); */
        fopAcM_orderChangeEventId(this, this->field_0x6e6, 0);
        ((JAIZelBasic*)(base))->seStart(2289, 0, 0, 0, 0);
        /* field_0x6b9 = 4; */
        /* field_0x6ba = 5; */
        /* L_26c4:; */
        /* field_0x68a = 5; */
        /* L_26d8:; */
        return (((this->field_0x688 >> 31) + -1) & 16777215);
}

/* 0000280C-00002968       .text visitTalkInit__10daNpc_Uk_cFv */
void daNpc_Uk_c::visitTalkInit() {
    /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(8064) != 0) {
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(7682) == 0) goto L_27cc; */
        /* field_0xcc = ((dEvt_control_c*)(((char*)&g_dComIfG_gameInfo + 20952)))->getPId(fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0))); */
        /* field_0x6b9 = 4; */
        /* ((daNpc_Uk_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->demo02(); */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(7684);
        return 4;
    }
    /* L_27cc:; */
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(4616) != 0) {
        /* if (dComIfGs_checkGetItem(35) != 0) goto L_2860; */
        /* if (dComIfGs_checkGetItem(38) != 0) goto L_2860; */
        /* field_0xcc = ((dEvt_control_c*)(((char*)&g_dComIfG_gameInfo + 20952)))->getPId(fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0))); */
        /* field_0x6b9 = 4; */
        /* ((daNpc_Uk_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->demo02(); */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(5634);
        return 4;
    }
    /* L_2860:; */
    return _restgpr_29(1);
}

/* 00002968-00002A44       .text visitSetEvent__10daNpc_Uk_cFv */
void daNpc_Uk_c::visitSetEvent() {
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(8064) == 0) goto L_28e0; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(7682) != 0) goto L_28e0; */
        ((dEvt_info_c*)((this + 244)))->setEventName(((char*)&@stringBase0 + 170));
        /* goto L_2940; */
        /* L_28e0:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(4616) == 0) goto L_292c; */
        /* if (dComIfGs_checkGetItem(35) != 0) goto L_292c; */
        /* if (dComIfGs_checkGetItem(38) != 0) goto L_292c; */
        ((dEvt_info_c*)((this + 244)))->setEventName(((char*)&@stringBase0 + 179));
        /* goto L_2940; */
        /* L_292c:; */
        /* L_2940:; */
        return ((dEvt_info_c*)((this + 244)))->setEventName(((char*)&@stringBase0 + 188));
}

/* 00002A44-00002C80       .text visit01__10daNpc_Uk_cFv */
void daNpc_Uk_c::visit01() {
        /* if ((this->field_0x688 & 2147483647) != 1) goto L_29bc; */
        /* field_0x6b9 = visitTalkInit(); */
        setAnmStatus();
        speedF = 0;
        /* field_0x6bb = 1; */
        /* goto L_2b70; */
        /* L_29bc:; */
        /* if (((daNpc_Uk_c*)(setAnmStatus()))->checkDemoStart() == 0) goto L_29fc; */
        /* field_0x6b9 = 3; */
        setAnmStatus();
        speedF = 0;
        /* field_0x6bb = 1; */
        demo01();
        /* goto L_2b70; */
        /* L_29fc:; */
        /* if ((nextVisitMode() & 16777215) == this->field_0x6bb) goto L_2a20; */
        visitInit(nextVisitMode());
        /* L_2a20:; */
        visitProc();
        /* if ((this->field_0x6ad & 255) != 3) goto L_2a54; */
        /* if (this->field_0x6bb != 6) goto L_2a4c; */
        /* goto L_2a74; */
        /* L_2a4c:; */
        /* goto L_2a74; */
        /* L_2a54:; */
        /* if (this->field_0x6bb != 4) goto L_2a74; */
        /* if (this->field_0x6bb != 7) goto L_2a74; */
        /* L_2a74:; */
        /* if (speedF <= (this->field_0x694 - this->field_0x9c)) goto L_2a94; */
        cLib_chaseF((this + 596));
        /* goto L_2aa4; */
        /* L_2a94:; */
        cLib_chaseF((this + 596));
        /* L_2aa4:; */
        /* if (this->field_0x6bb == 6) goto L_2ac4; */
        /* if (this->field_0x6bb != 7) goto L_2b0c; */
        /* L_2ac4:; */
        /* if ((this->field_0x20e - fopAcM_searchActorAngleY(this->field_0x5b40, this)) != 0) goto L_2af4; */
        /* L_2af4:; */
        /* if ((((-(this->field_0x20e - fopAcM_searchActorAngleY(this->field_0x5b40, this))) & 65535) & 65535) <= 6144) goto L_2b0c; */
        /* L_2b0c:; */
        /* if (fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0)) == 0) goto L_2b5c; */
        /* if (this->field_0x6a0 == 8) goto L_2b44; */
        /* if (this->field_0x6a0 != 9) goto L_2b48; */
        /* L_2b44:; */
        /* L_2b48:; */
        /* if (1 == 0) goto L_2b5c; */
        /* L_2b5c:; */
        /* if (this->field_0x6b8 == 0) goto L_2b70; */
        visitSetEvent();
        /* L_2b70:; */
        return 1;
}

/* 00002C80-00002D20       .text warningB__10daNpc_Uk_cFv */
void daNpc_Uk_c::warningB() {
    /* if (chkPositioning(15000, -15000, arg3, arg4, arg5) != 0) { */
        /* field_0x6b9 = 9; */
        /* field_0x6e6 = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getEventIdx(((char*)&@stringBase0 + 196), 255); */
        /* fopAcM_orderOtherEventId(this, this->field_0x6e6, 255); */
    return 0;
}

/* 00002D20-00002DC0       .text warningC__10daNpc_Uk_cFv */
void daNpc_Uk_c::warningC() {
    /* if (chkPositioning(15000, -5000, arg3, arg4, arg5) != 0) { */
        /* field_0x6b9 = 9; */
        /* field_0x6e6 = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getEventIdx(((char*)&@stringBase0 + 206), 255); */
        /* fopAcM_orderOtherEventId(this, this->field_0x6e6, 255); */
    return 0;
}

/* 00002DC0-00002ED8       .text warningD__10daNpc_Uk_cFv */
void daNpc_Uk_c::warningD() {
    /* if (chkPositioning(18000, 0, arg3, arg4, arg5) != 0) { */
        /* field_0x6b9 = 9; */
        /* field_0x6e6 = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getEventIdx(((char*)&@stringBase0 + 216), 255); */
        /* fopAcM_orderOtherEventId(this, this->field_0x6e6, 255); */
    if (chkPositioning(0, -18000) != 0) {
        /* field_0x6b9 = 9; */
        /* field_0x6e6 = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getEventIdx(((char*)&@stringBase0 + 226), 255); */
        fopAcM_orderOtherEventId(this, this->field_0x6e6, 255);
    }
    return 0;
}

/* 00002ED8-00002F74       .text found__10daNpc_Uk_cFv */
void daNpc_Uk_c::found() {
    if (this->field_0xf8 == 2) {
        /* field_0x6ba = 10; */
        /* field_0x6b9 = 4; */
        ((daNpc_Mk_Static_c*)((this + 1776)))->init(80, 300);
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 4440)))->onEventBit(getFoundFlag());
        demo02();
    } else {
        fopAcM_orderOtherEventId(demo02(), this->field_0x6e6, 255);
    }
    return 0;
}

/* 00002F74-00003148       .text runaway__10daNpc_Uk_cFv */
void daNpc_Uk_c::runaway() {
        /* if ((((daNpc_Mk_Static_c*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1776)))->runAwayProc(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1688), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1280), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1768)) & 16777215) == this->field_0x6f0) goto L_3000; */
        /* if ((((daNpc_Mk_Static_c*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1776)))->runAwayProc(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1688), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1280), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1768)) & 16777215) != 1) goto L_2ee4; */
        /* if (this->field_0x6f0 == 2) goto L_2ef8; */
        /* L_2ee4:; */
        /* if ((((daNpc_Mk_Static_c*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1776)))->runAwayProc(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1688), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1280), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1768)) & 16777215) != 2) goto L_2ff4; */
        /* if (this->field_0x6f0 != 1) goto L_2ff4; */
        /* L_2ef8:; */
        /* cM_rndF(this->field_0x6f0); */
        /* if (/ * bge * / 1) goto L_2ff4; */
        /* if (((daNpc_Uk_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getShapeType() == 2) goto L_2f70; */
        /* if (/ * bge * / 1) goto L_2fb4; */
        /* if (((daNpc_Uk_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getShapeType() >= 1) goto L_2f2c; */
        /* goto L_2fb4; */
        /* L_2f2c:; */
        /* ((JAIZelBasic*)(base))->seStart(18702, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* goto L_2ff4; */
        /* L_2f70:; */
        /* ((JAIZelBasic*)(base))->seStart(18706, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* goto L_2ff4; */
        /* L_2fb4:; */
        /* ((JAIZelBasic*)(base))->seStart(18698, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* L_2ff4:; */
        /* field_0x6f0 = ((daNpc_Mk_Static_c*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1776)))->runAwayProc(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1688), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1280), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1768)); */
        /* ((daNpc_Uk_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->runawayInit(); */
        /* L_3000:; */
        /* if ((((daNpc_Mk_Static_c*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1776)))->runAwayProc(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1688), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1280), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1768)) & 16777215) != 3) goto L_3018; */
        /* L_3018:; */
        /* if (this->field_0x6ad != 4) goto L_3040; */
        /* ((daNpc_Mk_Static_c*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1776)))->getSpeedF(); */
        /* cLib_chaseF((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 596)); */
        /* L_3040:; */
        return _restgpr_29(0);
}

/* 00003148-000031E8       .text jump__10daNpc_Uk_cFv */
void daNpc_Uk_c::jump() {
    if (this->field_0x688 != 512) {
        /* setAnm(0, 0, arg3, arg4, arg5, arg6, arg7); */
        gravity = 0;
        speedF = 0;
        /* if (this->field_0x74 > this->field_0x2c) goto L_30e0; */
        /* field_0x6b9 = 12; */
        setAnm(6, 0);
    }
    /* L_30e0:; */
    return 1;
}

/* 000031E8-00003228       .text jitanda01__10daNpc_Uk_cFv */
void daNpc_Uk_c::jitanda01() {
    if ((this->field_0x688 & 2147483647) == 1) {
        /* field_0x688 = (this->field_0x688 & 2147483647); */
        /* field_0x6ba = 13; */
    }
    return 1;
}

/* 00003228-000032AC       .text jitanda02__10daNpc_Uk_cFv */
void daNpc_Uk_c::jitanda02() {
    if ((this->field_0x688 & 2147483647) == 1) {
        /* field_0x6b9 = 1; */
    }
    if (checkDemoStart() != 0) {
        /* field_0x6b9 = 3; */
    }
    return 1;
}

/* 000032AC-00003300       .text demo01__10daNpc_Uk_cFv */
void daNpc_Uk_c::demo01() {
    if (checkDemoStart() == 0) {
        setAnmStatus();
        return 1;
    }
    return demoProc();
}

/* 00003300-000033D4       .text demo02__10daNpc_Uk_cFv */
void daNpc_Uk_c::demo02() {
    /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->endCheck(this->field_0x6e6) != 0) { */
        /* setAnmStatus(); */
        /* field_0x68a = 5; */
        /* return 1; */
    if (checkDemoStart() == 0) {
        ((JUTAssertion*)(((JUTAssertion*)(checkDemoStart()))->getSDevice()))->showAssert(((char*)&@stringBase0 + 6), 1921, ((char*)&@stringBase0 + 237));
        OSPanic(((char*)&@stringBase0 + 6), 1921, ((char*)&@stringBase0 + 45));
    }
    return demoProc();
}

/* 000033D4-00003648       .text demoInitCom__10daNpc_Uk_cFv */
void daNpc_Uk_c::demoInitCom() {
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(this->field_0x6b0, ((char*)&@stringBase0 + 239), 3, arg4) == 0) goto L_3548; */
        /* if (base == 2) goto L_3448; */
        /* if (/ * bge * / 1) goto L_3548; */
        /* if (base >= 1) goto L_3344; */
        /* goto L_3548; */
        /* L_3344:; */
        /* if (getShapeType() == 2) goto L_33b0; */
        /* if (/ * bge * / 1) goto L_33fc; */
        /* if (getShapeType() >= 1) goto L_3364; */
        /* goto L_33fc; */
        /* L_3364:; */
        ((JAIZelBasic*)(base))->seStart(18700, (this + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
        /* goto L_3548; */
        /* L_33b0:; */
        ((JAIZelBasic*)(base))->seStart(18704, (this + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
        /* goto L_3548; */
        /* L_33fc:; */
        ((JAIZelBasic*)(base))->seStart(18696, (this + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
        /* goto L_3548; */
        /* L_3448:; */
        /* if (getShapeType() == 2) goto L_34b4; */
        /* if (/ * bge * / 1) goto L_3500; */
        /* if (getShapeType() >= 1) goto L_3468; */
        /* goto L_3500; */
        /* L_3468:; */
        ((JAIZelBasic*)(base))->seStart(18701, (this + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
        /* goto L_3548; */
        /* L_34b4:; */
        ((JAIZelBasic*)(base))->seStart(18705, (this + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
        /* goto L_3548; */
        /* L_3500:; */
        /* L_3548:; */
        return ((JAIZelBasic*)(base))->seStart(18697, (this + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
}

/* 00003648-000040E0       .text demoProc__10daNpc_Uk_cFv */
void daNpc_Uk_c::demoProc() {
        /* _savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getIsAddvance(this->field_0x6b0) == 0) goto L_3c54; */
        /* ((daNpc_Uk_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->demoInitCom(); */
        /* if (this->field_0x6b4 > 14) goto L_3c54; */
        speedF = 0;
        /* ((daNpc_Uk_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm(0, 0); */
        /* goto L_3c54; */
        speedF = 0;
        /* ((daNpc_Uk_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm(0, 0); */
        /* goto L_3c54; */
        speedF = 0;
        /* ((daNpc_Uk_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm(2, 0); */
        /* goto L_3c54; */
        speedF = 0;
        old = 0;
        /* field_0x1e8 = 0; */
        /* field_0x1ec = 0; */
        current = 0;
        /* field_0x1fc = 0; */
        /* field_0x200 = 0; */
        /* goto L_3c54; */
        /* if (this->field_0x6ad != 4) goto L_3684; */
        speedF = 0;
        /* goto L_3694; */
        /* L_3684:; */
        /* ((daNpc_Uk_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm(4, 0); */
        /* L_3694:; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(this->field_0x6b0, ((char*)&@stringBase0 + 245), 1);
        /* if (/ * bne * / 1) goto L_36f0; */
        ((JUTAssertion*)(((JUTAssertion*)(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(this->field_0x6b0, ((char*)&@stringBase0 + 245), 1)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 6), 2015, ((char*)&@stringBase0 + 249));
        OSPanic(((char*)&@stringBase0 + 6), 2015, ((char*)&@stringBase0 + 45));
        /* L_36f0:; */
        /* field_0x6cc = 0; */
        /* field_0x6d0 = 0; */
        /* field_0x6d4 = 0; */
        /* field_0x6d8 = 0; */
        /* field_0x6dc = 0; */
        /* field_0x6e0 = 0; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(this->field_0x6b0, ((char*)&@stringBase0 + 255), 3) == 0) goto L_3750; */
        /* goto L_3c54; */
        /* L_3750:; */
        /* field_0x6e4 = -1; */
        /* goto L_3c54; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(this->field_0x6b0, ((char*)&@stringBase0 + 245), 1);
        /* if (/ * bne * / 1) goto L_37b8; */
        ((JUTAssertion*)(((JUTAssertion*)(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(this->field_0x6b0, ((char*)&@stringBase0 + 245), 1)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 6), 2027, ((char*)&@stringBase0 + 249));
        OSPanic(((char*)&@stringBase0 + 6), 2027, ((char*)&@stringBase0 + 45));
        /* L_37b8:; */
        /* field_0x6cc = 0; */
        /* field_0x6d0 = 0; */
        /* field_0x6d4 = 0; */
        /* field_0x6d8 = 0; */
        /* field_0x6dc = 0; */
        /* field_0x6e0 = 0; */
        /* field_0x6e8 = cLib_targetAngleY((_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1740), (_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1752)); */
        /* ((daNpc_Uk_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm(0, 0); */
        /* goto L_3c54; */
        speedF = 0;
        /* field_0x6ba = 5; */
        /* goto L_3c54; */
        /* if (__ptmf_cmpr((_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1696)) == 0) goto L_38ec; */
        /* if (__ptmf_test((_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1696)) == 0) goto L_38b8; */
        /* field_0x6c0 = -1; */
        /* __ptmf_scall(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* L_38b8:; */
        /* field_0x6c0 = 0; */
        /* __ptmf_scall(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* L_38ec:; */
        /* field_0x6b9 = 3; */
        /* goto L_3c54; */
        speedF = 0;
        /* ((daNpc_Uk_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->talkInit(); */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(this->field_0x6b0, ((char*)&@stringBase0 + 261), 3);
        /* if (/ * bne * / 1) goto L_3990; */
        ((JUTAssertion*)(((JUTAssertion*)(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(this->field_0x6b0, ((char*)&@stringBase0 + 261), 3)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 6), 2054, ((char*)&@stringBase0 + 267));
        OSPanic(((char*)&@stringBase0 + 6), 2054, ((char*)&@stringBase0 + 45));
        /* L_3990:; */
        /* if (((daNpc_Uk_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getShapeType() == 1) goto L_39cc; */
        /* if (/ * bge * / 1) goto L_39e0; */
        /* if (((daNpc_Uk_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getShapeType() >= 0) goto L_39b8; */
        /* goto L_39e0; */
        /* L_39b8:; */
        /* ((daNpc_Uk_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm(0, 0); */
        /* goto L_39f0; */
        /* L_39cc:; */
        /* ((daNpc_Uk_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm(1, 0); */
        /* goto L_39f0; */
        /* L_39e0:; */
        /* ((daNpc_Uk_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm(2, 0); */
        /* L_39f0:; */
        /* goto L_3c54; */
        speedF = 0;
        speedF = 0;
        /* ((daNpc_Uk_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm(5, 1); */
        /* goto L_3c54; */
        gravity = 0;
        /* field_0x224 = 0; */
        speedF = 0;
        /* ((daNpc_Uk_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm(9, 0); */
        /* if (((daNpc_Uk_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getShapeType() == 2) goto L_3ac8; */
        /* if (/ * bge * / 1) goto L_3b0c; */
        /* if (((daNpc_Uk_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getShapeType() >= 1) goto L_3a84; */
        /* goto L_3b0c; */
        /* L_3a84:; */
        /* ((JAIZelBasic*)(base))->seStart(18700, (_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* goto L_3c54; */
        /* L_3ac8:; */
        /* ((JAIZelBasic*)(base))->seStart(18704, (_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* goto L_3c54; */
        /* L_3b0c:; */
        /* ((JAIZelBasic*)(base))->seStart(18696, (_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* goto L_3c54; */
        speedF = 0;
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(this->field_0x6b0, ((char*)&@stringBase0 + 245), 1);
        /* if (/ * bne * / 1) goto L_3bb4; */
        ((JUTAssertion*)(((JUTAssertion*)(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(this->field_0x6b0, ((char*)&@stringBase0 + 245), 1)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 6), 2095, ((char*)&@stringBase0 + 249));
        OSPanic(((char*)&@stringBase0 + 6), 2095, ((char*)&@stringBase0 + 45));
        /* L_3bb4:; */
        current = 0;
        /* field_0x1fc = 0; */
        /* field_0x200 = 0; */
        old = 0;
        /* field_0x1e8 = 0; */
        /* field_0x1ec = 0; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(this->field_0x6b0, ((char*)&@stringBase0 + 274), 3);
        /* if (/ * bne * / 1) goto L_3c40; */
        ((JUTAssertion*)(((JUTAssertion*)(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(this->field_0x6b0, ((char*)&@stringBase0 + 274), 3)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 6), 2101, ((char*)&@stringBase0 + 267));
        OSPanic(((char*)&@stringBase0 + 6), 2101, ((char*)&@stringBase0 + 45));
        /* L_3c40:; */
        /* L_3c54:; */
        /* if (this->field_0x6b4 > 13) goto L_3fcc; */
        dNpc_calc_DisXZ_AngY();
        /* if (this->field_0x1c < this->field_0x694) goto L_3ce8; */
        /* if (((daNpc_Mk_Static_c*)((_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1776)))->chkPointPass((_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1740), (_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1752), (_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504)) == 0) goto L_3d1c; */
        /* L_3ce8:; */
        /* ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(this->field_0x6b0); */
        /* if (this->field_0x6b4 != 5) goto L_3fd8; */
        current = 0;
        /* field_0x200 = 0; */
        speedF = 0;
        /* goto L_3fd8; */
        /* L_3d1c:; */
        /* cLib_addCalcAngleS((_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518)); */
        /* cLib_chaseF((_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 596)); */
        /* if (this->field_0x6e4 <= 0) goto L_3d58; */
        /* field_0x6e4 = (this->field_0x6e4 + -1); */
        /* L_3d58:; */
        /* if (this->field_0x6e4 != 0) goto L_3fd8; */
        /* ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(this->field_0x6b0); */
        /* goto L_3fd8; */
        /* cLib_addCalcAngleS((_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518), this->field_0x6e8, 1, 2048, 2048); */
        /* if (this->field_0x206 != this->field_0x6e8) goto L_3fd8; */
        /* ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(this->field_0x6b0); */
        /* goto L_3fd8; */
        /* ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(this->field_0x6b0); */
        /* goto L_3fd8; */
        /* ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(this->field_0x6b0); */
        /* goto L_3fd8; */
        /* if ((((daNpc_Uk_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->talk() & 65535) == 18) goto L_3e00; */
        /* if ((((daNpc_Uk_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->talk() & 65535) != 254) goto L_3e0c; */
        /* L_3e00:; */
        /* ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(this->field_0x6b0); */
        /* L_3e0c:; */
        /* if (1 == 0) goto L_3e28; */
        return 1;
        /* L_3e28:; */
        /* goto L_3fdc; */
        /* if (this->field_0x688 != 2) goto L_3e88; */
        /* if (this->field_0x67e == 0) goto L_3fd8; */
        /* ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(this->field_0x6b0); */
        /* goto L_3fd8; */
        /* L_3e88:; */
        /* ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(this->field_0x6b0); */
        /* goto L_3fd8; */
        /* if (this->field_0x688 == 512) goto L_3fd8; */
        /* ((daNpc_Uk_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm(10, 0); */
        gravity = 0;
        speedF = 0;
        /* if (this->field_0x688 != 2) goto L_3fb0; */
        ((dVibration_c*)(((char*)&g_dComIfG_gameInfo + 22944)))->StartShock(4, -33);
        /* if (this->field_0x6b4 != 12) goto L_3fd8; */
        /* if (this->field_0x60 != 0) goto L_3f48; */
        /* field_0x64 = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* __register_global_object(((C_@3569 + 0) + 100), ((char*)&__dt__4cXyzFv + 0), ((C_@3569 + 0) + 84)); */
        /* field_0x60 = 1; */
        /* L_3f48:; */
        /* if (((dPa_control_c*)(this->field_0x5ab8))->set(0, 35, (_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 516), ((C_@3569 + 0) + 100), 255, 0) == 0) goto L_3fd8; */
        /* field_0x38 = 0; */
        /* field_0x5c = 0; */
        /* field_0x60 = 1; */
        /* goto L_3fd8; */
        /* L_3fb0:; */
        /* if (this->field_0x67e == 0) goto L_3fd8; */
        /* ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(this->field_0x6b0); */
        /* goto L_3fd8; */
        /* L_3fcc:; */
        /* ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(this->field_0x6b0); */
        /* L_3fd8:; */
        /* L_3fdc:; */
        return _restgpr_25(1);
}

/* 000040E0-000041B0       .text wait_action__10daNpc_Uk_cFPv */
void daNpc_Uk_c::wait_action(void*) {
        /* if (this->field_0x6c0 != 0) goto L_4034; */
        /* field_0x6b9 = 0; */
        setAnmStatus();
        /* field_0x6c0 = (this->field_0x6c0 + 1); */
        /* goto L_40a8; */
        /* L_4034:; */
        /* if (/ * beq * / 1) goto L_40a8; */
        /* ((daNpc_Uk_c*)(this->field_0x6c0))->chkAttention(); */
        /* if ((this->field_0x6b9 & 255) == 1) goto L_4080; */
        /* if (/ * bge * / 1) goto L_4090; */
        /* if ((this->field_0x6b9 & 255) >= 0) goto L_4070; */
        /* goto L_4090; */
        /* L_4070:; */
        wait01();
        /* goto L_4094; */
        /* L_4080:; */
        talk01();
        /* goto L_4094; */
        /* L_4090:; */
        /* L_4094:; */
        lookBack();
        setAttention(0);
        /* L_40a8:; */
        return 1;
}

/* 000041B0-0000440C       .text seek_action__10daNpc_Uk_cFPv */
void daNpc_Uk_c::seek_action(void*) {
        /* if (this->field_0x6c0 != 0) goto L_415c; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 4440)))->isEventBit(getFoundFlag()) == 0) goto L_4134; */
        /* field_0x6b9 = 10; */
        ((daNpc_Mk_Static_c*)((this + 1776)))->init(80, 300);
        ((daNpc_Mk_Static_c*)((this + 1776)))->setRndPathPos(this, (this + 1688));
        /* goto L_4144; */
        /* L_4134:; */
        /* field_0x6b9 = (getShapeType() + 6); */
        /* L_4144:; */
        setAnmStatus();
        /* field_0x6c0 = (this->field_0x6c0 + 1); */
        /* goto L_4304; */
        /* L_415c:; */
        /* if (/ * beq * / 1) goto L_4304; */
        /* ((daNpc_Uk_c*)(this->field_0x6c0))->chkAttention(); */
        /* if ((this->field_0x6b9 & 255) > 13) goto L_42ec; */
        warningB();
        /* goto L_42f0; */
        warningC();
        /* goto L_42f0; */
        warningD();
        /* goto L_42f0; */
        found();
        /* goto L_42f0; */
        runaway();
        /* goto L_42f0; */
        jump();
        /* goto L_42f0; */
        jitanda01();
        /* goto L_42f0; */
        jitanda02();
        /* goto L_42f0; */
        demo01();
        /* goto L_42f0; */
        demo02();
        /* goto L_42f0; */
        talk02();
        /* goto L_42f0; */
        /* if (__ptmf_cmpr((this + 1696)) == 0) goto L_42f0; */
        /* if (__ptmf_test((this + 1696)) == 0) goto L_42b4; */
        /* field_0x6c0 = -1; */
        __ptmf_scall(this, 0);
        /* L_42b4:; */
        /* field_0x6c0 = 0; */
        __ptmf_scall(this, 0);
        /* goto L_42f0; */
        /* L_42ec:; */
        /* L_42f0:; */
        lookBack();
        setAttention(0);
        /* L_4304:; */
        return 1;
}

/* 0000440C-0000457C       .text hind_action__10daNpc_Uk_cFPv */
void daNpc_Uk_c::hind_action(void*) {
        /* if (this->field_0x6c0 != 0) goto L_4350; */
        /* field_0x6c0 = (this->field_0x6c0 + 1); */
        /* goto L_4474; */
        /* L_4350:; */
        /* if ((this->field_0x6c0 & 255) == -1) goto L_4474; */
        /* if (this->field_0x6bf != 2) goto L_442c; */
        /* if (chkGameStart() == 0) goto L_442c; */
        /* if (__ptmf_cmpr((this + 1696)) == 0) goto L_4414; */
        /* if (__ptmf_test((this + 1696)) == 0) goto L_43e0; */
        /* field_0x6c0 = -1; */
        __ptmf_scall(this, 0);
        /* L_43e0:; */
        /* field_0x6c0 = 0; */
        __ptmf_scall(this, 0);
        /* L_4414:; */
        /* L_442c:; */
        /* if ((this->field_0x6bf & 255) == 1) goto L_4444; */
        /* if ((this->field_0x6bf & 255) != 2) goto L_4474; */
        /* L_4444:; */
        /* if (checkDemoStart() == 0) goto L_4474; */
        demoProc();
        lookBack();
        setAttention(demoProc());
        /* L_4474:; */
        return 1;
}

/* 0000457C-00004774       .text visit_action__10daNpc_Uk_cFPv */
void daNpc_Uk_c::visit_action(void*) {
        /* if (this->field_0x6c0 != 0) goto L_4524; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 4440)))->isEventBit(64) == 0) goto L_44f4; */
        /* field_0x6b9 = 13; */
        setAnm(6, 0);
        /* field_0x4d8 = 254; */
        /* goto L_450c; */
        /* L_44f4:; */
        /* field_0x6b9 = 2; */
        setAnmStatus();
        /* field_0x4d8 = 100; */
        /* L_450c:; */
        /* field_0x6c0 = (this->field_0x6c0 + 1); */
        /* field_0x6bb = 0; */
        /* goto L_466c; */
        /* L_4524:; */
        /* if (/ * beq * / 1) goto L_466c; */
        /* ((daNpc_Uk_c*)(this->field_0x6c0))->chkAttention(); */
        /* if ((this->field_0x6b9 & 255) > 13) goto L_4654; */
        demo01();
        /* goto L_4658; */
        demo02();
        /* goto L_4658; */
        visit01();
        /* goto L_4658; */
        talk01();
        /* goto L_4658; */
        jitanda02();
        /* goto L_4658; */
        /* if (__ptmf_cmpr((this + 1696)) == 0) goto L_4658; */
        /* if (__ptmf_test((this + 1696)) == 0) goto L_461c; */
        /* field_0x6c0 = -1; */
        __ptmf_scall(this, 0);
        /* L_461c:; */
        /* field_0x6c0 = 0; */
        __ptmf_scall(this, 0);
        /* goto L_4658; */
        /* L_4654:; */
        /* L_4658:; */
        lookBack();
        setAttention(0);
        /* L_466c:; */
        return 1;
}

/* 00004774-00004A20       .text _draw__10daNpc_Uk_cFv */
BOOL daNpc_Uk_c::_draw() {
        /* _savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x688 != 16) goto L_46d4; */
        return 1;
        /* L_46d4:; */
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(0, (_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x50, (_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x29c, (_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        /* if (((daNpc_Uk_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getShapeType() == 0) goto L_4778; */
        /* ((daNpc_Uk_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getShapeType(); */
        /* ((J3DModelData*)(this->field_0x4))->setMaterialTable(((dRes_control_c*)(((char*)&@stringBase0 + 3)))->getRes(), 2); */
        /* L_4778:; */
        /* if (((daNpc_Uk_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getShapeType() != 1) goto L_4798; */
        /* ((mDoExt_btpAnm*)((_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 680)))->entry(this->field_0x4, this->field_0x2bc); */
        /* L_4798:; */
        /* ((mDoExt_McaMorf*)(this->field_0x298))->entryDL(); */
        PSMTXCopy((this->field_0x8c + ((this->field_0x638 & 255) * 48)), (this->field_0x29c + 36));
        /* mDoExt_modelUpdateDL(this->field_0x29c); */
        /* if (((daNpc_Uk_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getShapeType() != 1) goto L_47e4; */
        /* ((J3DMaterialTable*)((this->field_0x4 + 88)))->removeTexNoAnimator(this->field_0x2b0); */
        /* L_47e4:; */
        /* if (((daNpc_Uk_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getShapeType() == 0) goto L_47fc; */
        /* L_47fc:; */
        /* field_0x2a0 = dComIfGd_setShadow(this->field_0x2a0, 1, this->field_0x50); */
        /* if (this->field_0x2a0 == 0) goto L_489c; */
        /* dComIfGd_setShadow(this->field_0x2a0, 1, this->field_0x29c); */
        /* L_489c:; */
        /* if (((daNpc_Uk_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getShapeType() == 1) goto L_48e4; */
        /* if (/ * bge * / 1) goto L_48bc; */
        /* if (((daNpc_Uk_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getShapeType() >= 0) goto L_48c8; */
        /* goto L_4918; */
        /* L_48bc:; */
        /* if (((daNpc_Uk_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getShapeType() >= 3) goto L_4918; */
        /* goto L_4900; */
        /* L_48c8:; */
        /* dSnap_RegistFig(97, _savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_4918; */
        /* L_48e4:; */
        /* dSnap_RegistFig(97, _savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_4918; */
        /* L_4900:; */
        /* dSnap_RegistFig(97, _savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_4918:; */
        return _restgpr_25(1);
}

/* 00004A20-00004CE4       .text _execute__10daNpc_Uk_cFv */
BOOL daNpc_Uk_c::_execute() {
        ((dNpc_JntCtrl_c*)((this + 1584)))->setParam(0, 7300, 0, -7300, 8000, 9000, -2000);
        playTexPatternAnm();
        /* field_0x67e = ((mDoExt_McaMorf*)(this->field_0x298))->play((this + 608), this->field_0x6c4, this->field_0x6c8); */
        /* if (this->field_0x68 >= this->field_0x680) goto L_49bc; */
        /* field_0x67e = 1; */
        /* L_49bc:; */
        /* field_0x680 = 0; */
        /* if (this->field_0x67e == 0) goto L_4a2c; */
        /* if ((this->field_0x6ad & 255) == 7) goto L_4a1c; */
        /* if (/ * bge * / 1) goto L_4a2c; */
        /* if ((this->field_0x6ad & 255) >= 6) goto L_49f4; */
        /* goto L_4a2c; */
        /* L_49f4:; */
        cM_rnd();
        /* if (/ * bge * / 1) goto L_4a2c; */
        setAnm(7, 0);
        /* goto L_4a2c; */
        /* L_4a1c:; */
        setAnm(6, 0);
        /* L_4a2c:; */
        checkOrder();
        __ptmf_scall(this, 0);
        eventOrder();
        /* if (this->field_0x688 == 256) goto L_4a68; */
        /* L_4a68:; */
        /* field_0x6c4 = 0; */
        /* if (0 == 16) goto L_4b4c; */
        /* if (0 != 8) goto L_4acc; */
        /* field_0x224 = (this->field_0x224 + gravity); */
        /* if (this->field_0x224 >= maxFallSpeed) goto L_4abc; */
        /* field_0x224 = 0; */
        /* L_4abc:; */
        fopAcM_posMove(this, (this + 1220));
        /* goto L_4ad8; */
        /* L_4acc:; */
        fopAcM_posMoveF(this, (this + 1220));
        /* L_4ad8:; */
        ((dBgS_Acch*)((this + 704)))->CrrPos(((char*)&g_dComIfG_gameInfo + 4768));
        /* if (/ * beq * / 1) goto L_4b1c; */
        /* field_0x6c4 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetMtrlSndId((this + 936)); */
        /* goto L_4b28; */
        /* L_4b1c:; */
        /* L_4b28:; */
        /* field_0x1b5 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetRoomId((this + 936)); */
        /* field_0x1b6 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetPolyColor((this + 936)); */
        /* goto L_4b54; */
        /* L_4b4c:; */
        /* L_4b54:; */
        PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
        /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x20e); */
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x50 + 36));
        /* ((mDoExt_McaMorf*)(this->field_0x298))->calc(); */
        /* if (this->field_0x688 != 16) goto L_4bc8; */
        /* goto L_4bdc; */
        /* L_4bc8:; */
        setCollision();
        /* L_4bdc:; */
        return 1;
}

/* 00004CE4-00004D34       .text _delete__10daNpc_Uk_cFv */
BOOL daNpc_Uk_c::_delete() {
    /* dComIfG_resDelete((this + 656), ((char*)&@stringBase0 + 3), arg2); */
    if (this->field_0x298 != 0) {
        /* ((mDoExt_McaMorf*)(this->field_0x298))->stopZelAnime(); */
    }
    return 1;
}

/* 00004D34-00004D54       .text CheckCreateHeap__FP10fopAc_ac_c */
static BOOL CheckCreateHeap(fopAc_ac_c* i_this) {
    ((daNpc_Uk_c*)i_this)->CreateHeap();
    return TRUE;
}

/* 00004D54-00005028       .text _create__10daNpc_Uk_cFv */
cPhs_State daNpc_Uk_c::_create() {
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_4da0; */
        /* if (/ * beq * / 1) goto L_4d94; */
        __ct();
        /* field_0x2a8 = 0; */
        /* field_0x2ac = 0; */
        /* field_0x2a8 = 0; */
        /* field_0x2b4 = 0; */
        __ct();
        /* field_0x10 = 0; */
        /* field_0x14 = 0; */
        /* field_0x20 = 0; */
        /* field_0x18 = 1; */
        __ct();
        /* field_0x4dc = 0; */
        __ct();
        /* field_0x4dc = 0; */
        /* field_0x4e0 = 0; */
        __ct();
        /* field_0x114 = 0; */
        /* field_0x110 = 0; */
        /* field_0x12c = 0; */
        /* field_0x114 = 0; */
        /* field_0x12c = 0; */
        /* field_0x3c = 0; */
        /* field_0x114 = 0; */
        /* field_0x12c = 0; */
        /* field_0x63c = 0; */
        /* field_0x63b = 0; */
        /* L_4d94:; */
        /* L_4da0:; */
        /* if (dComIfG_resLoad((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 656), ((char*)&@stringBase0 + 3)) != 4) goto L_4f20; */
        /* if (this->field_0x8 == 370) goto L_4dd0; */
        /* goto L_4e90; */
        /* L_4dd0:; */
        /* if (((daNpc_Uk_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getType() == 2) goto L_4e60; */
        /* if (/ * bge * / 1) goto L_4e84; */
        /* if (((daNpc_Uk_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getType() >= 1) goto L_4df0; */
        /* goto L_4e84; */
        /* L_4df0:; */
        /* field_0x6bf = 1; */
        /* if (((daNpc_Uk_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getShapeType() == 1) goto L_4e38; */
        /* if (/ * bge * / 1) goto L_4e18; */
        /* if (((daNpc_Uk_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getShapeType() >= 0) goto L_4e24; */
        /* goto L_4e98; */
        /* L_4e18:; */
        /* if (((daNpc_Uk_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getShapeType() >= 3) goto L_4e98; */
        /* goto L_4e4c; */
        /* L_4e24:; */
        /* field_0x690 = 0; */
        /* field_0x694 = 0; */
        /* goto L_4e98; */
        /* L_4e38:; */
        /* field_0x690 = 0; */
        /* field_0x694 = 0; */
        /* goto L_4e98; */
        /* L_4e4c:; */
        /* field_0x690 = 0; */
        /* field_0x694 = 0; */
        /* goto L_4e98; */
        /* L_4e60:; */
        /* field_0x6bf = 2; */
        /* argument = (((daNpc_Uk_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getShapeType() + 5); */
        /* field_0x694 = 0; */
        /* goto L_4e98; */
        /* L_4e84:; */
        /* field_0x6bf = 0; */
        /* goto L_4e98; */
        /* L_4e90:; */
        return 5;
        /* L_4e98:; */
        /* if (fopAcM_entrySolidHeap(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), ((char*)&CheckCreateHeap__FP10fopAc_ac_c + 0)) != 0) goto L_4ec8; */
        /* field_0x298 = 0; */
        return 5;
        /* L_4ec8:; */
        cullMtx = (this->field_0x50 + 36);
        /* fopAcM_setCullSizeBox(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (((daNpc_Uk_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->init() != 0) goto L_4f20; */
        /* field_0x298 = 0; */
        return 5;
        /* L_4f20:; */
        /* return _restgpr_28(dComIfG_resLoad((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 656), ((char*)&@stringBase0 + 3))); */
}

/* 000053D8-00005728       .text CreateHeap__10daNpc_Uk_cFv */
void daNpc_Uk_c::CreateHeap() {
    /* _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    ((dRes_control_c*)(((char*)&@stringBase0 + 3)))->getRes(24);
    __nw(180);
    if (/* beq */ 1) {
    }
    /* field_0x298 = __ct(((dRes_control_c*)(((char*)&@stringBase0 + 3)))->getRes(16), 1, ((dRes_control_c*)(((char*)&@stringBase0 + 3)))->getRes(24), 0, 0, ((dRes_control_c*)(((char*)&@stringBase0 + 3)))->getRes(16), 2, 0); */
    if (this->field_0x298 != 0) {
        /* if (this->field_0x50 == 0) goto L_53e4; */
    }
    return 0;
    /* L_53e4:; */
    /* field_0x638 = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 280)); */
    if (this->field_0x638 != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 280))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 6), 2772, ((char*)&@stringBase0 + 285)); */
        OSPanic(((char*)&@stringBase0 + 6), 2772, ((char*)&@stringBase0 + 45));
    }
    /* field_0x639 = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 312)); */
    if (this->field_0x639 != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 312))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 6), 2777, ((char*)&@stringBase0 + 321)); */
        OSPanic(((char*)&@stringBase0 + 6), 2777, ((char*)&@stringBase0 + 45));
    }
    /* ((daNpc_Uk_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getShapeType(); */
    ((dRes_control_c*)(((char*)&@stringBase0 + 3)))->getRes();
    if (/* bne */ 1) {
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&@stringBase0 + 3)))->getRes()))->getSDevice()))->showAssert(((char*)&@stringBase0 + 6), 2790, ((char*)&@stringBase0 + 352));
        OSPanic(((char*)&@stringBase0 + 6), 2790, ((char*)&@stringBase0 + 45));
    }
    /* field_0x29c = mDoExt_J3DModel(__ct(((dRes_control_c*)(((char*)&@stringBase0 + 3)))->getRes(16), 1, ((dRes_control_c*)(((char*)&@stringBase0 + 3)))->getRes(24), 0, 0, ((dRes_control_c*)(((char*)&@stringBase0 + 3)))->getRes(16), 2, 0)); */
    if (this->field_0x29c == 0) {
        return 0;
    /* field_0x6ac = 0; */
    /* if (((daNpc_Uk_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->initTexPatternAnm(0) == 0) { */
        /* return 0; */
    /* goto L_55b0; */
    /* L_556c:; */
    if ((0 & 65535) != (this->field_0x638 & 255)) {
        /* if ((0 & 65535) == (this->field_0x639 & 255)) goto L_55ac; */
    /* field_0x8 = 0; */
    /* L_55ac:; */
    /* L_55b0:; */
    /* if (((0 + 1) & 65535) >= this->field_0x28) goto L_556c; */
    /* field_0x14 = _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* ((dBgS_AcchCir*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1156)))->SetWall(((char*)&nodeCallBack_Uk__FP7J3DNodei + 0), (0 + 1)); */
    /* ((dBgS_Acch*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 704)))->Set((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 484), _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 1, (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1156), (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 544), 0); */
    /* field_0x358 = 0; */
    maxFallSpeed = 0;
    /* field_0x68c = -1; */
    return _restgpr_27(1);

/* 00005728-00005748       .text daNpc_Uk_Create__FP10fopAc_ac_c */
static cPhs_State daNpc_Uk_Create(fopAc_ac_c* i_this) {
    return ((daNpc_Uk_c*)i_this)->_create();

/* 00005748-00005768       .text daNpc_Uk_Delete__FP10daNpc_Uk_c */
static BOOL daNpc_Uk_Delete(daNpc_Uk_c* i_this) {
    return ((daNpc_Uk_c*)i_this)->_delete();

/* 00005768-00005788       .text daNpc_Uk_Execute__FP10daNpc_Uk_c */
static BOOL daNpc_Uk_Execute(daNpc_Uk_c* i_this) {
    return ((daNpc_Uk_c*)i_this)->_execute();

/* 00005788-000057A8       .text daNpc_Uk_Draw__FP10daNpc_Uk_c */
static BOOL daNpc_Uk_Draw(daNpc_Uk_c* i_this) {
    return ((daNpc_Uk_c*)i_this)->_draw();

/* 000057A8-000057B0       .text daNpc_Uk_IsDelete__FP10daNpc_Uk_c */
static BOOL daNpc_Uk_IsDelete(daNpc_Uk_c*) {
    return 1;

static actor_method_class l_daNpc_Uk_Method = {
    (process_method_func)daNpc_Uk_Create,
    (process_method_func)daNpc_Uk_Delete,
    (process_method_func)daNpc_Uk_Execute,
    (process_method_func)daNpc_Uk_IsDelete,
    (process_method_func)daNpc_Uk_Draw,
};

actor_process_profile_definition g_profile_NPC_UK = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0007,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_NPC_UK_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daNpc_Uk_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_NPC_UK_e,
    /* Actor SubMtd */ &l_daNpc_Uk_Method,
    /* Status       */ fopAcStts_CULL_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_NPC_e,
    /* Cull Type    */ fopAc_CULLBOX_CUSTOM_e,
};

/* 由 fix_decomp_braces.py 补齐：反编译产物末尾缺 8 个 } */
}}}}}}}}

/**
 * d_a_npc_gp1.cpp
 * NPC - Maggie's Father (rich)
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_npc_gp1.h"

/* 000000EC-00000150       .text __ct__15daNpc_Gp1_HIO_cFv */
daNpc_Gp1_HIO_c::daNpc_Gp1_HIO_c() {
    /* __ct__15daNpc_Gp1_HIO_cFv: 无实义指令 */
}

/* 00000198-00000210       .text searchActor_Bm__FPvPv */
void searchActor_Bm(void*, void*) {
    if (this->field_0x0 < 20) {
        /* if (fopAc_IsActor(arg0) != 0) goto L_10c; */
        /* if (this->field_0x8 == 331) goto L_10c; */
        /* field_0x0 = (this->field_0x0 + 1); */
    }
    /* L_10c:; */
    return 0;
}

/* 00000210-0000025C       .text nodeCallBack_Gp1__FP7J3DNodei */
static BOOL nodeCallBack_Gp1(J3DNode* i_node, int i_switch) {
    if (i_switch == 0) {
    if (j3dSys.getModel()->getUserArea() != NULL) {
    reinterpret_cast<daNpc_Gp1_c*>(j3dSys.getModel()->getUserArea())
    ->nodeGp1Control(i_node, j3dSys.getModel());
    }
    }
    return TRUE;
}

/* 0000025C-000003AC       .text nodeGp1Control__11daNpc_Gp1_cFP7J3DNodeP8J3DModel */
void daNpc_Gp1_c::nodeGp1Control(J3DNode*, J3DModel*) {
    /* _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (this->field_0xf8 != 0) {
        /* field_0xfc = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* __register_global_object(((C_@3569 + 0) + 252), ((char*)&__dt__4cXyzFv + 0), ((C_@3569 + 0) + 236)); */
        /* field_0xf8 = 1; */
    }
    PSMTXCopy((this->field_0x8c + (this->field_0x18 * 48)), ((char*)&now__14mDoMtx_stack_c + 0));
    if (this->field_0x18 == (this->field_0x6cc & 255)) {
        /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), ((-this->field_0x292) & 65535)); */
        /* mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), ((-this->field_0x290) & 65535)); */
        /* PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0), ((C_@3569 + 0) + 252), (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1936)); */
    }
    if (this->field_0x18 == (this->field_0x6cd & 255)) {
        /* mDoMtx_XrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x296); */
        /* mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x294); */
    }
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), ((char*)&mCurrentMtx__6J3DSys + 0));
    return _restgpr_27(PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x8c + (this->field_0x18 * 48))));
}

/* 000003E8-00000468       .text init_GP1_0__11daNpc_Gp1_cFv */
void daNpc_Gp1_c::init_GP1_0() {
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(11521) != 0) {
        set_action();
        return 1;
    }
    return 0;
}

/* 00000468-00000638       .text createInit__11daNpc_Gp1_cFv */
void daNpc_Gp1_c::createInit() {
        /* _savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* L_3b4:; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getEventIdx();
        /* if ((0 + 1) < 3) goto L_3b4; */
        /* field_0x280 = 10; */
        /* field_0x26d = 171; */
        /* field_0x26f = 171; */
        gravity = 0;
        /* field_0x79c = 0; */
        /* field_0x7a0 = 0; */
        /* field_0x7a4 = 0; */
        /* if (/ * beq * / 1) goto L_464; */
        /* ((dNpc_PathRun_c*)((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1792)))->setInf(); */
        /* if (this->field_0x700 == 0) goto L_45c; */
        /* goto L_464; */
        /* L_45c:; */
        return 0;
        /* L_464:; */
        /* ((dNpc_EventCut_c*)((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1800)))->setActorInfo2(((char*)&@stringBase0 + 34), _savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* field_0x812 = 8; */
        /* if (this->field_0x818 == 0) goto L_494; */
        /* goto L_4a0; */
        /* L_494:; */
        /* ((daNpc_Gp1_c*)(_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->init_GP1_0(); */
        /* goto L_4a4; */
        /* L_4a0:; */
        /* L_4a4:; */
        /* if (0 == 0) goto L_4e0; */
        /* goto L_4e8; */
        /* L_4e0:; */
        return 0;
        /* L_4e8:; */
        /* ((dCcD_Stts*)((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1336)))->Init(217, 255, _savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* field_0x5b8 = (_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1336); */
        /* ((dCcD_Cyl*)((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1396)))->Set(((char*)&dNpc_cyl_src + 0)); */
        /* ((mDoExt_McaMorf*)(this->field_0x330))->setMorf(C_@4213); */
        /* ((daNpc_Gp1_c*)(_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setMtx(1); */
        return _restgpr_26(1);
}

/* 00000638-00000758       .text setMtx__11daNpc_Gp1_cFb */
void daNpc_Gp1_c::setMtx(bool) {
        /* _savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x80b != 0) goto L_5d4; */
        /* ((daNpc_Gp1_c*)(_savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7)))->plyTexPttrnAnm(); */
        /* field_0x7f8 = ((mDoExt_McaMorf*)(this->field_0x330))->play((_savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, 0); */
        /* if (this->field_0x68 >= this->field_0x7c0) goto L_5ac; */
        /* field_0x7f8 = 1; */
        /* L_5ac:; */
        /* field_0x7c0 = 0; */
        /* ((daNpc_Gp1_c*)(_savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7)))->ctrl_WAITanm(); */
        /* ((dBgS_Acch*)((_savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7) + 820)))->CrrPos(((char*)&g_dComIfG_gameInfo + 4768)); */
        /* L_5d4:; */
        /* field_0x1b5 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetRoomId((_savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7) + 1052)); */
        /* field_0x1b6 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetPolyColor((_savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7) + 1052)); */
        PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
        /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x78c); */
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x50 + 36));
        /* ((mDoExt_McaMorf*)(this->field_0x330))->calc(); */
        /* return _restgpr_29(((daNpc_Gp1_c*)(_savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7)))->setAttention()); */
}

/* 00000758-0000076C       .text anmNum_toResID__11daNpc_Gp1_cFi */
int daNpc_Gp1_c::anmNum_toResID(int anmNum) {
    static const int a_bck_resID_tbl[] = {
        5, 5, 3, 4, 2, 1, 0, 8, 7,
    };
    return a_bck_resID_tbl[anmNum];
}

/* 0000076C-00000780       .text btpNum_toResID__11daNpc_Gp1_cFi */
int daNpc_Gp1_c::btpNum_toResID(int anmNum) {
    static const int a_btp_resID_tbl[] = {
        7,
    };
    return a_btp_resID_tbl[anmNum];
}

/* 00000780-00000890       .text setBtp__11daNpc_Gp1_cFbi */
void daNpc_Gp1_c::setBtp(bool, int) {
    /* field_0x6d8 = ((dRes_control_c*)(((char*)&@stringBase0 + 38)))->getIDRes((((daNpc_Gp1_c*)(_savegpr_29(this, bool, int, arg3, arg4, arg5, arg6, arg7)))->btpNum_toResID(this->field_0x50) & 65535), ((char*)&g_dComIfG_gameInfo + -16460), 64); */
    if (this->field_0x6d8 == 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&@stringBase0 + 38)))->getIDRes((((daNpc_Gp1_c*)(_savegpr_29(this, bool, int, arg3, arg4, arg5, arg6, arg7)))->btpNum_toResID(this->field_0x50) & 65535), ((char*)&g_dComIfG_gameInfo + -16460), 64)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 41), 435, ((char*)&@stringBase0 + 57)); */
        OSPanic(((char*)&@stringBase0 + 41), 435, ((char*)&@stringBase0 + 78));
    }
    /* ((mDoExt_btpAnm*)((_savegpr_29(this, bool, int, arg3, arg4, arg5, arg6, arg7) + 1756)))->init(this->field_0x4, this->field_0x6d8, 1, 2, 0, -1); */
    if (/* beq */ 1) {
        /* field_0x6f0 = 0; */
        /* field_0x6f2 = 0; */
    }
    /* return _restgpr_29(((1 - ((mDoExt_btpAnm*)((_savegpr_29(this, bool, int, arg3, arg4, arg5, arg6, arg7) + 1756)))->init(this->field_0x4, this->field_0x6d8, 1, 2, 0, -1)) >> 5)); */
}

/* 00000890-000008B8       .text iniTexPttrnAnm__11daNpc_Gp1_cFb */
void daNpc_Gp1_c::iniTexPttrnAnm(bool) {
    return setBtp(bool, (this->field_0x811 & 255));
}

/* 000008B8-00000964       .text plyTexPttrnAnm__11daNpc_Gp1_cFv */
void daNpc_Gp1_c::plyTexPttrnAnm() {
        /* if (this->field_0x811 != 0) goto L_7fc; */
        /* if (cLib_calcTimer<s>__FPs((this + 1778), arg1, arg2, arg3, arg4, arg5, arg6, arg7) != 0) goto L_864; */
        /* L_7fc:; */
        /* field_0x6f0 = (this->field_0x6f0 + 1); */
        /* if (this->field_0x6f0 < (this->field_0x6 & 65535)) goto L_864; */
        /* if (this->field_0x811 == 0) goto L_834; */
        /* goto L_864; */
        /* L_834:; */
        cM_rndF(C_@4357);
        /* field_0x6f0 = 0; */
        /* L_864:; */
        return C_@4356;
}

/* 00000964-000009A0       .text setAnm_tex__11daNpc_Gp1_cFSc */
void daNpc_Gp1_c::setAnm_tex(signed char) {
    if ((this->field_0x811 & 255) != (char & 255)) {
        /* field_0x811 = char; */
    }
    return iniTexPttrnAnm(1);
}

/* 000009A0-00000A78       .text setAnm_anm__11daNpc_Gp1_cFPQ211daNpc_Gp1_c9anm_prm_c */
void daNpc_Gp1_c::setAnm_anm(daNpc_Gp1_c::anm_prm_c*) {
    /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    if ((this->field_0x812 & 255) == (base & 255)) {
        return 1;
    }
    dNpc_setAnmIDRes(this->field_0x330, this->field_0xc, ((daNpc_Gp1_c*)(1))->anmNum_toResID((this->field_0x812 & 255)), -1, ((char*)&@stringBase0 + 38));
    if (this->field_0x812 != 0) {
        cM_rndF(dNpc_setAnmIDRes(this->field_0x330, this->field_0xc, ((daNpc_Gp1_c*)(1))->anmNum_toResID((this->field_0x812 & 255)), -1, ((char*)&@stringBase0 + 38)));
    }
    /* field_0x7c0 = 0; */
    /* field_0x7f9 = 0; */
    /* field_0x7f8 = 0; */
    return _restgpr_29(1);
}

/* 00000A78-00000AE4       .text setAnm_NUM__11daNpc_Gp1_cFii */
void daNpc_Gp1_c::setAnm_NUM(int, int) {
    if (int != 0) {
        /* setAnm_tex(this->field_0x1, int, arg3, arg4, arg5, arg6, arg7); */
    }
    return setAnm_anm((((char*)&a_anm_prm_tbl$4380 + 0) + (int << 4)), (int << 4));
}

/* 00000AE4-00000B64       .text setAnm__11daNpc_Gp1_cFv */
void daNpc_Gp1_c::setAnm() {
    if (this->field_0x1 != 0) {
        /* setAnm_tex(this->field_0x1, arg2, arg3, arg4, arg5, arg6, arg7); */
    }
    if (base != 0) {
        setAnm_anm((((char*)&a_anm_prm_tbl$4387 + 0) + ((this->field_0x814 & 255) << 4)));
    }
    return 1;
}

/* 00000B64-00000B68       .text chg_anmTag__11daNpc_Gp1_cFv */
void daNpc_Gp1_c::chg_anmTag() {
}

/* 00000B68-00000B6C       .text control_anmTag__11daNpc_Gp1_cFv */
void daNpc_Gp1_c::control_anmTag() {
}

/* 00000B6C-00000BB0       .text chg_anmAtr__11daNpc_Gp1_cFUc */
void daNpc_Gp1_c::chg_anmAtr(unsigned char) {
        /* if ((char & 16777215) >= 7) goto L_ab4; */
        /* if ((char & 16777215) != this->field_0x80f) goto L_aa8; */
        /* goto L_ab4; */
        /* L_aa8:; */
        /* field_0x80f = char; */
        /* L_ab4:; */
        return setAnm_ATR(1);
}

/* 00000BB0-00000D00       .text control_anmAtr__11daNpc_Gp1_cFv */
void daNpc_Gp1_c::control_anmAtr() {
        /* if (this->field_0x80f == 5) goto L_b34; */
        /* if (/ * bge * / 1) goto L_b04; */
        /* if (this->field_0x80f == 1) goto L_b10; */
        /* if (/ * bge * / 1) goto L_bfc; */
        /* goto L_bfc; */
        /* L_b04:; */
        /* if (this->field_0x80f >= 7) goto L_bfc; */
        /* goto L_bc4; */
        /* L_b10:; */
        /* if (this->field_0x7f8 == 0) goto L_bfc; */
        /* field_0x80f = 0; */
        setAnm_NUM(0, 1);
        /* goto L_bfc; */
        /* L_b34:; */
        /* if (this->field_0x7f8 != 0) goto L_bac; */
        /* if (((J3DFrameCtrl*)((this->field_0x330 + 88)))->checkPass() == 0) goto L_bfc; */
        create_rupee();
        ((JAIZelBasic*)(base))->seStart(27113, 0, 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
        /* field_0x7f4 = 0; */
        /* goto L_bfc; */
        /* L_bac:; */
        /* field_0x80f = 0; */
        ((daNpc_Gp1_c*)(((JAIZelBasic*)(base))->seStart(27113, 0, 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0)))->setAnm_NUM(0, 1);
        /* goto L_bfc; */
        /* L_bc4:; */
        /* if (this->field_0x7f8 == 0) goto L_bfc; */
        /* field_0x7f9 = (this->field_0x7f9 + 1); */
        /* if (((this->field_0x7f9 + 1) & 255) < 2) goto L_bfc; */
        /* field_0x80f = 0; */
        /* L_bfc:; */
        return ((daNpc_Gp1_c*)(((daNpc_Gp1_c*)(((JAIZelBasic*)(base))->seStart(27113, 0, 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0)))->setAnm_NUM(0, 1)))->setAnm_NUM(0, 1);
}

/* 00000D00-00000D68       .text setAnm_ATR__11daNpc_Gp1_cFi */
void daNpc_Gp1_c::setAnm_ATR(int) {
    if (int != 0) {
        /* setAnm_tex(this->field_0x1, arg2, arg3, arg4, arg5, arg6, arg7); */
    }
    return setAnm_anm((((char*)&a_anm_prm_tbl$4443 + 0) + (this->field_0x80f << 4)), (this->field_0x80f << 4));
}

/* 00000D68-00000E2C       .text anmAtr__11daNpc_Gp1_cFUs */
void daNpc_Gp1_c::anmAtr(unsigned short) {
        /* if ((short & 65535) == 14) goto L_d14; */
        /* if (/ * bge * / 1) goto L_d1c; */
        /* if ((short & 65535) == 6) goto L_cac; */
        /* goto L_d1c; */
        /* L_cac:; */
        /* if (this->field_0x81a != 0) goto L_cdc; */
        /* field_0x80f = 255; */
        /* chg_anmAtr(this->field_0x5bcf); */
        /* field_0x81a = (this->field_0x81a + 1); */
        /* L_cdc:; */
        /* field_0x5bd0 = 255; */
        /* if (this->field_0x5bd0 == 255) goto L_d1c; */
        /* if (this->field_0x810 == this->field_0x5bd0) goto L_d1c; */
        chg_anmTag();
        /* goto L_d1c; */
        /* L_d14:; */
        /* field_0x81a = 0; */
        /* L_d1c:; */
        control_anmTag();
        return control_anmAtr();
}

/* 00000E2C-00000EC4       .text eventOrder__11daNpc_Gp1_cFv */
void daNpc_Gp1_c::eventOrder() {
        /* if ((this->field_0x813 & 255) == 1) goto L_d64; */
        /* if ((this->field_0x813 & 255) != 2) goto L_d90; */
        /* L_d64:; */
        /* if (this->field_0x813 != 1) goto L_dc8; */
        fopAcM_orderSpeakEvent(this);
        /* goto L_dc8; */
        /* L_d90:; */
        /* if (/ * blt * / 1) goto L_dc8; */
        /* field_0x7e4 = 0; */
        /* L_dc8:; */
        return fopAcM_orderOtherEventId(fopAcM_orderSpeakEvent(this), this->field_0x7de, 255);
}

/* 00000EC4-00000F5C       .text checkOrder__11daNpc_Gp1_cFv */
void daNpc_Gp1_c::checkOrder() {
        /* if (this->field_0xf8 != 2) goto L_e2c; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->startCheck(this->field_0x7de) == 0) goto L_e5c; */
        /* field_0x813 = 0; */
        /* goto L_e5c; */
        /* L_e2c:; */
        /* if (0 != 1) goto L_e5c; */
        /* if ((this->field_0x813 & 255) == 1) goto L_e4c; */
        /* if ((this->field_0x813 & 255) != 2) goto L_e5c; */
        /* L_e4c:; */
        /* field_0x813 = 0; */
        /* field_0x809 = 1; */
        /* L_e5c:; */
        /* return ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->startCheck(this->field_0x7de); */
}

/* 00000F5C-00001008       .text chk_talk__11daNpc_Gp1_cFv */
void daNpc_Gp1_c::chk_talk() {
        /* field_0x7fb = 255; */
        /* if (this->field_0x52b8 == 1) goto L_ebc; */
        /* if (this->field_0x52b8 == 2) goto L_ebc; */
        /* if (this->field_0x52b8 != 3) goto L_ec0; */
        /* L_ebc:; */
        /* L_ec0:; */
        /* if (1 == 0) goto L_f00; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->ChkPresentEnd() == 0) goto L_eec; */
        /* goto L_ef0; */
        /* L_eec:; */
        /* L_ef0:; */
        /* L_f00:; */
        return 0;
}

/* 00001008-00001048       .text chk_partsNotMove__11daNpc_Gp1_cFv */
void daNpc_Gp1_c::chk_partsNotMove() {
    /* if (this->field_0x7d8 == this->field_0x292) { */
        /* if (this->field_0x7da == this->field_0x296) goto L_f54; */
        /* if (this->field_0x7dc == this->field_0x206) goto L_f54; */
    /* L_f54:; */
    return 1;
}

/* 00001048-00001168       .text chk_forceTlkArea__11daNpc_Gp1_cFv */
void daNpc_Gp1_c::chk_forceTlkArea() {
    /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    __mi();
    PSVECSquareMag();
    if (/* ble */ 1) {
    }
    /* if (this->field_0x4c > (this->field_0x1fc - this->field_0x1fc)) { */
        /* if ((this->field_0x1fc - this->field_0x1fc) == this->field_0x68) goto L_1064; */
        /* if (this->field_0x8 > this->field_0x28) goto L_1064; */
    /* L_1064:; */
    return _restgpr_29(1, ((char*)&l_HIO + 0));
}

/* 00001168-00001308       .text lookBack__11daNpc_Gp1_cFv */
void daNpc_Gp1_c::lookBack() {
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if ((this->field_0x816 & 255) == 2) goto L_1168; */
        /* if (/ * bge * / 1) goto L_110c; */
        /* if ((this->field_0x816 & 255) >= 1) goto L_1118; */
        /* goto L_119c; */
        /* L_110c:; */
        /* if ((this->field_0x816 & 255) >= 4) goto L_119c; */
        /* goto L_1198; */
        /* L_1118:; */
        dNpc_playerEyePos();
        /* goto L_119c; */
        /* L_1168:; */
        /* goto L_119c; */
        /* L_1198:; */
        /* L_119c:; */
        /* cLib_addCalcAngleS2((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2030), this->field_0x1e, 4, 2048); */
        /* if (this->field_0x29a != 0) goto L_11cc; */
        /* field_0x7ee = 0; */
        /* L_11cc:; */
        /* return _restgpr_28(((dNpc_JntCtrl_c*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 656)))->lookAtTarget((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518))); */
}

/* 00001308-00001504       .text next_msgStatus__11daNpc_Gp1_cFPUl */
void daNpc_Gp1_c::next_msgStatus(unsigned long*) {
        /* if (/ * beq * / 1) goto L_140c; */
        /* if (/ * bge * / 1) goto L_1294; */
        /* if (/ * beq * / 1) goto L_1310; */
        /* if (/ * bge * / 1) goto L_1270; */
        /* if (/ * beq * / 1) goto L_12f8; */
        /* if (/ * bge * / 1) goto L_1264; */
        /* if (/ * beq * / 1) goto L_12e0; */
        /* if (/ * bge * / 1) goto L_12ec; */
        /* goto L_140c; */
        /* L_1264:; */
        /* if (/ * bge * / 1) goto L_1304; */
        /* goto L_140c; */
        /* L_1270:; */
        /* if (/ * beq * / 1) goto L_1390; */
        /* if (/ * bge * / 1) goto L_1288; */
        /* if (/ * bge * / 1) goto L_140c; */
        /* goto L_131c; */
        /* L_1288:; */
        /* if (/ * bge * / 1) goto L_13a8; */
        /* goto L_13dc; */
        /* L_1294:; */
        /* if (/ * beq * / 1) goto L_1340; */
        /* if (/ * bge * / 1) goto L_12c8; */
        /* if (/ * beq * / 1) goto L_140c; */
        /* if (/ * bge * / 1) goto L_12bc; */
        /* if (/ * beq * / 1) goto L_140c; */
        /* if (/ * bge * / 1) goto L_13d0; */
        /* goto L_13c4; */
        /* L_12bc:; */
        /* if (/ * bge * / 1) goto L_1328; */
        /* goto L_13a8; */
        /* L_12c8:; */
        /* if (/ * beq * / 1) goto L_1400; */
        /* if (/ * bge * / 1) goto L_140c; */
        /* if (/ * beq * / 1) goto L_139c; */
        /* goto L_140c; */
        /* L_12e0:; */
        base = 7702;
        /* goto L_1410; */
        /* L_12ec:; */
        base = 7703;
        /* goto L_1410; */
        /* L_12f8:; */
        base = 7704;
        /* goto L_1410; */
        /* L_1304:; */
        base = 7706;
        /* goto L_1410; */
        /* L_1310:; */
        base = 7707;
        /* goto L_1410; */
        /* L_131c:; */
        base = 7708;
        /* goto L_1410; */
        /* L_1328:; */
        base = 7722;
        /* field_0x801 = 1; */
        /* goto L_1410; */
        /* L_1340:; */
        /* if (this->field_0x7f2 < 16) goto L_1360; */
        base = 7725;
        /* field_0x7f4 = 3; */
        /* goto L_1410; */
        /* L_1360:; */
        /* if (7725 < 6) goto L_137c; */
        base = 7724;
        /* field_0x7f4 = 2; */
        /* goto L_1410; */
        /* L_137c:; */
        base = 7723;
        /* field_0x7f4 = 1; */
        /* goto L_1410; */
        /* L_1390:; */
        base = 7713;
        /* goto L_1410; */
        /* L_139c:; */
        base = 7715;
        /* goto L_1410; */
        /* L_13a8:; */
        base = 7716;
        /* field_0x801 = 1; */
        /* field_0x7f2 = 20; */
        /* goto L_1410; */
        /* L_13c4:; */
        base = 7717;
        /* goto L_1410; */
        /* L_13d0:; */
        base = 7719;
        /* goto L_1410; */
        /* L_13dc:; */
        /* if ((this->field_0x9c & 65535) < 20) goto L_13f4; */
        base = 7714;
        /* goto L_1410; */
        /* L_13f4:; */
        base = 7728;
        /* goto L_1410; */
        /* L_1400:; */
        base = 7911;
        /* goto L_1410; */
        /* L_140c:; */
        /* L_1410:; */
        return 16;
}

/* 00001504-0000166C       .text getMsg_GP1_0__11daNpc_Gp1_cFv */
void daNpc_Gp1_c::getMsg_GP1_0() {
        /* if (this->field_0x7fb != 69) goto L_1498; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(5152) == 0) goto L_145c; */
        return 7721;
        /* L_145c:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(6148) == 0) goto L_1490; */
        /* if (this->field_0x9c < 20) goto L_156c; */
        return 7720;
        /* L_1490:; */
        return 7712;
        /* L_1498:; */
        /* if (this->field_0x9c == 255) goto L_14a8; */
        return 7727;
        /* L_14a8:; */
        /* if (this->field_0x7fa == 0) goto L_14c4; */
        /* field_0x7fa = 0; */
        return 7718;
        /* L_14c4:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(5377) != 0) goto L_14ec; */
        return 7701;
        /* L_14ec:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(6152) == 0) goto L_1550; */
        /* if (((dSv_player_bag_item_c*)(((char*)&g_dComIfG_gameInfo + 118)))->checkReserveItem(155) == 0) goto L_1524; */
        return 7709;
        /* L_1524:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->getEventReg();
        /* goto L_156c; */
        /* L_1550:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(6432) == 0) goto L_156c; */
        /* L_156c:; */
        return 7707;
}

/* 0000166C-000016A8       .text getMsg__11daNpc_Gp1_cFv */
void daNpc_Gp1_c::getMsg() {
    }
    return getMsg_GP1_0();


/* 000016A8-00001728       .text chkAttention__11daNpc_Gp1_cFv */
void daNpc_Gp1_c::chkAttention() {
    if (((dAttention_c*)(((char*)&g_dComIfG_gameInfo + 22536)))->LockonTruth() == 0) {
    }
    return ((this - ((dAttention_c*)(((char*)&g_dComIfG_gameInfo + 22536)))->ActionTarget(0)) >> 5);
}

/* 00001728-00001790       .text setAttention__11daNpc_Gp1_cFb */
void daNpc_Gp1_c::setAttention(bool) {
    /* field_0x274 = 0; */
    /* field_0x278 = (this->field_0x1fc + this->field_0x20); */
    /* field_0x27c = 0; */
    if (this->field_0x804 == 0) {
    }
    eyePos = 0;
    /* field_0x264 = 0; */
    /* field_0x268 = 0; */
    /* field_0x264 = (this->field_0x264 + this->field_0x7c4); */
    return this;
}

/* 00001790-000017C4       .text searchByID__11daNpc_Gp1_cFUi */
void daNpc_Gp1_c::searchByID(fpc_ProcID) {
    fopAcM_SearchByID(fpc_ProcID);
}

/* 000017C4-00001874       .text partner_srch_sub__11daNpc_Gp1_cFPFPvPv_Pv */
void daNpc_Gp1_c::partner_srch_sub(void* (*)(void*, void*)) {
        /* field_0x774 = -1; */
        base = 0;
        /* fpcEx_Search(arg1, this, ((char*)&l_check_inf + 0), 0, arg4, arg5, arg6, arg7); */
        /* if (base == 0) goto L_176c; */
        /* if (base == 0) goto L_1760; */
        /* goto L_1764; */
        /* L_1760:; */
        /* L_1764:; */
        /* field_0x774 = -1; */
        /* L_176c:; */
        return 1;
}

/* 00001874-00001918       .text partner_srch__11daNpc_Gp1_cFv */
void daNpc_Gp1_c::partner_srch() {
        /* if (this->field_0x819 != 1) goto L_1814; */
        /* if (this->field_0x814 == 3) goto L_17bc; */
        /* goto L_17fc; */
        /* L_17bc:; */
        /* if (partner_srch_sub(((char*)&searchActor_Bm__FPvPv + 0), arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_1800; */
        /* searchByID(this->field_0x774); */
        /* if (/ * beq * / 1) goto L_1800; */
        /* field_0x206 = cLib_targetAngleY((this + 504)); */
        /* goto L_1800; */
        /* L_17fc:; */
        /* L_1800:; */
        /* if (1 == 0) goto L_1814; */
        /* field_0x819 = (this->field_0x819 + 1); */
        /* L_1814:; */
        /* return this->field_0x819; */
}

/* 00001918-000019AC       .text ctrl_WAITanm__11daNpc_Gp1_cFv */
void daNpc_Gp1_c::ctrl_WAITanm() {
        /* if ((this->field_0x812 & 255) == 4) goto L_1884; */
        /* if (/ * bge * / 1) goto L_18ac; */
        /* if ((this->field_0x812 & 255) == 0) goto L_1860; */
        /* goto L_18ac; */
        /* L_1860:; */
        /* if (cLib_calcTimer<s>__FPs((this + 2038), arg1, arg2, arg3, arg4, arg5, arg6, arg7) != 0) goto L_18ac; */
        setAnm_NUM(4, 1);
        /* goto L_18ac; */
        /* L_1884:; */
        /* if (this->field_0x7f8 == 0) goto L_18ac; */
        ((daNpc_Gp1_c*)(setAnm_NUM(4, 1)))->setAnm_NUM(0, 1);
        /* L_18ac:; */
        /* return ((mDoExt_McaMorf*)(this->field_0x330))->setMorf(C_@4213); */
}

/* 000019AC-00001B1C       .text gp_movPass__11daNpc_Gp1_cFv */
void daNpc_Gp1_c::gp_movPass() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x700 == 0) goto L_194c; */
        /* if (this->field_0x5 == 0) goto L_194c; */
        /* if (((dNpc_PathRun_c*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1792)))->chkPointPass() == 0) goto L_1944; */
        /* ((dNpc_PathRun_c*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1792)))->nextIdxAuto(); */
        /* L_1944:; */
        /* goto L_1a18; */
        /* L_194c:; */
        __mi();
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_19e0; */
        /* L_19e0:; */
        /* if (this->field_0x8 != this->field_0x7d4) goto L_1a14; */
        /* if (this->field_0x700 == 0) goto L_1a14; */
        /* if (((dNpc_PathRun_c*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1792)))->nextIdxAuto() != 0) goto L_1a14; */
        /* L_1a14:; */
        /* L_1a18:; */
        return _restgpr_29(2);
}

/* 00001B1C-00001B80       .text gp_clcMovSpd__11daNpc_Gp1_cFv */
void daNpc_Gp1_c::gp_clcMovSpd() {
    cLib_addCalcAngleS((this + 518), cLib_targetAngleY((this + 504), (this + 1960)), this->field_0x2c, this->field_0x2e, 0);
    return cLib_chaseF((this + 596));
}

/* 00001B80-00001C40       .text gp_nMove__11daNpc_Gp1_cFv */
void daNpc_Gp1_c::gp_nMove() {
        /* if (this->field_0x800 == 0) goto L_1ac0; */
        /* field_0x7fe = 1; */
        /* goto L_1b40; */
        /* L_1ac0:; */
        /* if (this->field_0x80c == 1) goto L_1ad0; */
        /* goto L_1b40; */
        /* L_1ad0:; */
        gp_clcMovSpd();
        /* if ((speedF * this->field_0x30) >= base) goto L_1afc; */
        /* L_1afc:; */
        /* field_0x64 = 0; */
        /* if (gp_movPass() == 2) goto L_1b30; */
        /* if (/ * bge * / 1) goto L_1b40; */
        /* if (gp_movPass() >= 1) goto L_1b24; */
        /* goto L_1b40; */
        /* L_1b24:; */
        /* field_0x800 = 1; */
        /* goto L_1b40; */
        /* L_1b30:; */
        /* field_0x800 = 1; */
        /* field_0x80c = 0; */
        /* L_1b40:; */
        return gp_movPass();
}

/* 00001C40-00001ED8       .text create_rupee__11daNpc_Gp1_cFv */
void daNpc_Gp1_c::create_rupee() {
        /* _savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        __ct();
        PSMTXCopy((this->field_0x8c + ((this->field_0x6ce & 255) * 48)), ((char*)&now__14mDoMtx_stack_c + 0));
        /* goto L_1d7c; */
        /* L_1c60:; */
        /* cM_rndF(this->field_0x74); */
        cM_rndFX(cM_rndFX());
        /* if (fopAcM_fastCreateItem() == 0) goto L_1d88; */
        scale = 0;
        /* field_0x218 = 0; */
        /* field_0x21c = 0; */
        /* L_1d7c:; */
        /* if ((0 + 1) < this->field_0x7f4) goto L_1c60; */
        /* L_1d88:; */
        return _restgpr_25(1);
}

/* 00001ED8-00001EF4       .text charDecide__11daNpc_Gp1_cFi */
void daNpc_Gp1_c::charDecide(int) {
    /* field_0x817 = 0; */
    /* field_0x818 = -1; */
    /* field_0x818 = 0; */
    return 1;
}

/* 00001EF4-00001F40       .text eInit_INI_KAERE_KAERE___11daNpc_Gp1_cFv */
void daNpc_Gp1_c::eInit_INI_KAERE_KAERE_() {
    /* ((daNpc_Gp1_c*)(arg0))->searchByID(this->field_0x774); */
    if (/* beq */ 1) {
        /* field_0xd0 = ((dEvt_control_c*)(((char*)&g_dComIfG_gameInfo + 20952)))->getPId(); */
    }
    return ((dEvt_control_c*)(((char*)&g_dComIfG_gameInfo + 20952)))->getPId();
}

/* 00001F40-00001F4C       .text eInit_END_KAERE_KAERE___11daNpc_Gp1_cFv */
void daNpc_Gp1_c::eInit_END_KAERE_KAERE_() {
    /* *(u16*)(this+518) = *(u16*)(this+1926); */
}

/* 00001F4C-00001FE0       .text event_actionInit__11daNpc_Gp1_cFi */
void daNpc_Gp1_c::event_actionInit(int) {
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(int, ((char*)&@stringBase0 + 83), 3, arg4) == 0) goto L_1ee0; */
        /* field_0x804 = 0; */
        /* if ((this->field_0x80e & 255) == 1) goto L_1ed8; */
        /* if (/ * bge * / 1) goto L_1ee0; */
        /* if ((this->field_0x80e & 255) >= 0) goto L_1ecc; */
        /* goto L_1ee0; */
        /* L_1ecc:; */
        eInit_INI_KAERE_KAERE();
        /* goto L_1ee0; */
        /* L_1ed8:; */
        /* L_1ee0:; */
        return eInit_END_KAERE_KAERE();
}

/* 00001FE0-00001FF4       .text event_action__11daNpc_Gp1_cFv */
void daNpc_Gp1_c::event_action() {
    /* return (s8)*(u8*)(this+2062) == 2; */
}

/* 00001FF4-000020E0       .text privateCut__11daNpc_Gp1_cFi */
void daNpc_Gp1_c::privateCut(int) {
        /* _savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * beq * / 1) goto L_1fdc; */
        /* field_0x80d = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyActIdx(); */
        /* if ((this->field_0x80d & 255) != -1) goto L_1f78; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd();
        /* goto L_1fdc; */
        /* L_1f78:; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getIsAddvance() == 0) goto L_1fa8; */
        /* if (this->field_0x80d == 0) goto L_1f9c; */
        /* goto L_1fa8; */
        /* L_1f9c:; */
        /* ((daNpc_Gp1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->event_actionInit(); */
        /* L_1fa8:; */
        /* if (this->field_0x80d == 0) goto L_1fb8; */
        /* goto L_1fc4; */
        /* L_1fb8:; */
        /* ((daNpc_Gp1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->event_action(); */
        /* goto L_1fc8; */
        /* L_1fc4:; */
        /* L_1fc8:; */
        /* if (1 == 0) goto L_1fdc; */
        /* L_1fdc:; */
        return _restgpr_29(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd());
}

/* 000020E0-00002100       .text endEvent__11daNpc_Gp1_cFv */
void daNpc_Gp1_c::endEvent() {
    /* field_0x80f = 255; */
    return this;
}

/* 00002100-00002138       .text isEventEntry__11daNpc_Gp1_cFv */
void daNpc_Gp1_c::isEventEntry() {
    /* return ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x708, 0, 0, arg4); */
}

/* 00002138-00002268       .text event_proc__11daNpc_Gp1_cFi */
void daNpc_Gp1_c::event_proc(int) {
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->endCheck(this->field_0x7de) == 0) goto L_2140; */
        /* if (this->field_0x7e4 == 1) goto L_2104; */
        /* if (/ * bge * / 1) goto L_20ac; */
        /* if (this->field_0x7e4 >= 0) goto L_20b8; */
        /* goto L_2134; */
        /* L_20ac:; */
        /* if (this->field_0x7e4 >= 3) goto L_2134; */
        /* goto L_2128; */
        /* L_20b8:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(6152);
        setStt(1);
        /* field_0x7ea = 0; */
        /* field_0x7ec = ((base & 1073741823) + 2); */
        /* goto L_2134; */
        /* L_2104:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(5152);
        /* field_0x813 = 1; */
        /* field_0x7fa = 1; */
        /* goto L_2134; */
        /* L_2128:; */
        setStt(1);
        /* L_2134:; */
        endEvent();
        /* goto L_2164; */
        /* L_2140:; */
        /* if (((dNpc_EventCut_c*)((this + 1800)))->cutProc() != 0) goto L_215c; */
        privateCut(int);
        /* L_215c:; */
        /* L_2164:; */
        return lookBack();
}

/* 00002268-00002314       .text set_action__11daNpc_Gp1_cFM11daNpc_Gp1_cFPCvPvPv_iPv */
void daNpc_Gp1_c::set_action(int (daNpc_Gp1_c::*)(void*), void*) {
        /* if (__ptmf_cmpr((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1780)) == 0) goto L_220c; */
        /* if (__ptmf_test((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1780)) == 0) goto L_21d8; */
        /* field_0x819 = 9; */
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_21d8:; */
        /* field_0x819 = 0; */
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_220c:; */
        return _restgpr_29(1);
}

/* 00002314-0000240C       .text setStt__11daNpc_Gp1_cFSc */
void daNpc_Gp1_c::setStt(signed char) {
        /* field_0x7e8 = 0; */
        /* field_0x814 = char; */
        /* if ((this->field_0x814 & 255) == 3) goto L_2304; */
        /* if (/ * bge * / 1) goto L_2270; */
        /* if ((this->field_0x814 & 255) == 1) goto L_2280; */
        /* if (/ * bge * / 1) goto L_228c; */
        /* goto L_2304; */
        /* L_2270:; */
        /* if ((this->field_0x814 & 255) == 5) goto L_2300; */
        /* if (/ * bge * / 1) goto L_2304; */
        /* goto L_22a8; */
        /* L_2280:; */
        /* field_0x7ea = 90; */
        /* goto L_2304; */
        /* L_228c:; */
        /* field_0x80f = 255; */
        /* field_0x816 = 1; */
        /* field_0x29a = 1; */
        /* goto L_230c; */
        /* L_22a8:; */
        /* field_0x816 = 0; */
        /* field_0x80c = 1; */
        cM_rndF(C_@4375);
        /* field_0x7cc = 0; */
        /* field_0x7d0 = 0; */
        /* field_0x7d4 = 0; */
        /* goto L_2304; */
        /* L_2300:; */
        /* field_0x816 = 0; */
        /* L_2304:; */
        /* L_230c:; */
        return setAnm();
}

/* 0000240C-0000255C       .text wait_1__11daNpc_Gp1_cFv */
void daNpc_Gp1_c::wait_1() {
        cM_rndF(C_@4211);
        /* if (this->field_0x809 == 0) goto L_23a4; */
        /* if (this->field_0x812 == 4) goto L_23a4; */
        /* if (chk_talk() == 0) goto L_239c; */
        setStt(2);
        /* field_0x80a = 0; */
        /* L_239c:; */
        return 1;
        /* L_23a4:; */
        /* if ((this->field_0x813 & 255) == 1) goto L_23c4; */
        /* if ((this->field_0x813 & 255) >= 3) goto L_23c4; */
        /* field_0x813 = 2; */
        /* L_23c4:; */
        /* if (chk_forceTlkArea() != 0) goto L_23e0; */
        /* if (this->field_0x808 == 0) goto L_23e8; */
        /* L_23e0:; */
        /* field_0x7e8 = 60; */
        /* L_23e8:; */
        /* if (cLib_calcTimer<s>__FPs((this + 2024)) == 0) goto L_2408; */
        /* field_0x816 = 1; */
        return 1;
        /* L_2408:; */
        /* if (cLib_calcTimer<s>__FPs((this + 2026)) != 0) goto L_242c; */
        setStt(4);
        return 1;
        /* L_242c:; */
        /* field_0x816 = 2; */
        /* field_0x79c = 0; */
        /* field_0x7a0 = 0; */
        /* field_0x7a4 = 0; */
        /* field_0x29a = 1; */
        return 1;
}

/* 0000255C-00002724       .text talk_1__11daNpc_Gp1_cFv */
void daNpc_Gp1_c::talk_1() {
        /* ((daNpc_Gp1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->chk_partsNotMove(); */
        /* ((fopNpc_npc_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->talk(1); */
        /* if (this->field_0x6b0 == 0) goto L_261c; */
        /* if (this->field_0xf8 == 6) goto L_2584; */
        /* if (/ * bge * / 1) goto L_24c4; */
        /* if (this->field_0xf8 == 2) goto L_2584; */
        /* goto L_261c; */
        /* L_24c4:; */
        /* if (this->field_0xf8 == 19) goto L_24d0; */
        /* goto L_261c; */
        /* L_24d0:; */
        /* if ((this->field_0x6a4 + -7704) > 21) goto L_2554; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(5377);
        /* goto L_2554; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(6432);
        /* goto L_2554; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(6148);
        /* goto L_2554; */
        /* field_0x813 = 4; */
        /* goto L_2554; */
        /* field_0x813 = 5; */
        /* L_2554:; */
        /* field_0x7fb = 255; */
        /* field_0x809 = 0; */
        /* ((daNpc_Gp1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setStt(this->field_0x815); */
        /* field_0x7e8 = 60; */
        /* ((daNpc_Gp1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->endEvent(); */
        /* goto L_261c; */
        /* L_2584:; */
        /* if (this->field_0x801 == 0) goto L_261c; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->CancelPresent();
        /* if (this->field_0x7f2 == 0) goto L_2614; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->getEventReg();
        /* field_0x5b7c = (this->field_0x5b7c + ((-this->field_0x7f2) & 65535)); */
        /* if (((((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->getEventReg() & 16777215) + this->field_0x7f2) > 127) goto L_2600; */
        /* L_2600:; */
        /* ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->setEventReg((this->field_0x5b7c + -14849), (((((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->getEventReg() & 16777215) + this->field_0x7f2) & 16777215)); */
        /* L_2614:; */
        /* field_0x801 = 0; */
        /* L_261c:; */
        /* return _restgpr_29((((daNpc_Gp1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->chk_partsNotMove() & 16777215)); */
}

/* 00002724-0000288C       .text walk_1__11daNpc_Gp1_cFv */
void daNpc_Gp1_c::walk_1() {
        /* if (this->field_0x809 != 0) goto L_2674; */
        /* if (chk_forceTlkArea() != 0) goto L_2674; */
        /* if (cLib_calcTimer<s>__FPs((this + 2026)) != 0) goto L_2680; */
        /* L_2674:; */
        /* field_0x7cc = 0; */
        /* L_2680:; */
        /* if ((this->field_0x813 & 255) == 1) goto L_26a0; */
        /* if ((this->field_0x813 & 255) >= 3) goto L_26a0; */
        /* field_0x813 = 2; */
        /* L_26a0:; */
        /* if (this->field_0x800 == 0) goto L_26cc; */
        /* field_0x800 = 0; */
        /* if (this->field_0x80c != 0) goto L_26cc; */
        /* field_0x705 = 0; */
        /* field_0x80c = 1; */
        /* L_26cc:; */
        getPoint((this + 1792));
        /* field_0x7a8 = 0; */
        /* field_0x7ac = 0; */
        /* field_0x7b0 = 0; */
        /* if (/ * bne * / 1) goto L_2788; */
        /* if (/ * bne * / 1) goto L_2788; */
        /* if (this->field_0x809 != 0) goto L_2740; */
        /* if (cLib_calcTimer<s>__FPs((this + 2028)) == 0) goto L_2750; */
        /* L_2740:; */
        setStt(1);
        /* goto L_2770; */
        /* L_2750:; */
        setStt(5);
        /* field_0x7ec = ((base & 1073741823) + 2); */
        /* L_2770:; */
        speedF = 0;
        /* field_0x7d0 = 0; */
        /* field_0x80c = 0; */
        /* L_2788:; */
        return 1;
}

/* 0000288C-00002930       .text hair_1__11daNpc_Gp1_cFv */
void daNpc_Gp1_c::hair_1() {
        /* if (this->field_0x7f8 == 0) goto L_2800; */
        /* if (this->field_0x809 != 0) goto L_27d8; */
        /* if (chk_forceTlkArea() == 0) goto L_27ec; */
        /* L_27d8:; */
        setStt(1);
        return 1;
        /* L_27ec:; */
        setStt(4);
        return 1;
        /* L_2800:; */
        /* if (this->field_0x809 != 0) goto L_282c; */
        /* if ((this->field_0x813 & 255) == 1) goto L_282c; */
        /* if ((this->field_0x813 & 255) >= 3) goto L_282c; */
        /* field_0x813 = 2; */
        /* L_282c:; */
        return 1;
}

/* 00002930-00002988       .text wait_2__11daNpc_Gp1_cFv */
void daNpc_Gp1_c::wait_2() {
    if ((this->field_0x813 & 255) != 1) {
        /* if ((this->field_0x813 & 255) < 3) goto L_2894; */
        /* field_0x813 = 0; */
        /* if ((this->field_0x1fc - this->field_0x1fc) < base) goto L_2894; */
        /* field_0x813 = 3; */
    }
    /* L_2894:; */
    return 1;
}

/* 00002988-00002B2C       .text wait_action1__11daNpc_Gp1_cFPv */
void daNpc_Gp1_c::wait_action1(void*) {
        /* if ((this->field_0x819 & 255) >= 4) goto L_28d0; */
        /* if ((this->field_0x819 & 255) == 0) goto L_28dc; */
        /* if (/ * bge * / 1) goto L_2940; */
        /* goto L_2a28; */
        /* L_28d0:; */
        /* if ((this->field_0x819 & 255) == 9) goto L_2a28; */
        /* goto L_2a28; */
        /* L_28dc:; */
        /* if (dNpc_chkArasoi() == 0) goto L_2904; */
        setStt(3);
        /* goto L_2930; */
        /* L_2904:; */
        setStt(1);
        /* field_0x7ec = ((base & 1073741823) + 2); */
        /* L_2930:; */
        /* field_0x819 = (this->field_0x819 + 1); */
        /* goto L_2a28; */
        /* L_2940:; */
        /* field_0x808 = ((daNpc_Gp1_c*)(this->field_0x819))->chkAttention(); */
        /* if ((this->field_0x814 & 255) == 3) goto L_29bc; */
        /* if (/ * bge * / 1) goto L_296c; */
        /* if ((this->field_0x814 & 255) == 1) goto L_297c; */
        /* if (/ * bge * / 1) goto L_298c; */
        /* goto L_29c8; */
        /* L_296c:; */
        /* if ((this->field_0x814 & 255) == 5) goto L_29ac; */
        /* if (/ * bge * / 1) goto L_29c8; */
        /* goto L_299c; */
        /* L_297c:; */
        /* field_0x804 = wait_1(); */
        /* goto L_29c8; */
        /* L_298c:; */
        /* field_0x804 = talk_1(); */
        /* goto L_29c8; */
        /* L_299c:; */
        /* field_0x804 = walk_1(); */
        /* goto L_29c8; */
        /* L_29ac:; */
        /* field_0x804 = hair_1(); */
        /* goto L_29c8; */
        /* L_29bc:; */
        /* field_0x804 = wait_2(); */
        /* L_29c8:; */
        /* if ((this->field_0x813 & 255) == 1) goto L_2a20; */
        /* if ((this->field_0x813 & 255) >= 3) goto L_2a20; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(5377) != 0) goto L_2a20; */
        /* if (this->field_0x809 != 0) goto L_2a20; */
        /* if (chk_forceTlkArea() == 0) goto L_2a20; */
        /* field_0x813 = 1; */
        /* L_2a20:; */
        lookBack();
        /* L_2a28:; */
        return 1;
}

/* 00002B2C-00002C6C       .text demo__11daNpc_Gp1_cFv */
void daNpc_Gp1_c::demo() {
        /* if (demoActorID != 0) goto L_2a78; */
        /* if (this->field_0x80b == 0) goto L_2b68; */
        /* field_0x80b = 0; */
        /* goto L_2b68; */
        /* L_2a78:; */
        /* field_0x80b = 1; */
        ((dDemo_object_c*)((this->field_0x5abc + 32)))->getActor(demoActorID);
        /* if (this->field_0x6d8 == 0) goto L_2acc; */
        /* field_0x6f0 = (this->field_0x6f0 + 1); */
        /* if (this->field_0x6f0 < (this->field_0x6 & 65535)) goto L_2acc; */
        /* L_2acc:; */
        /* if (((dDemo_actor_c*)(((dDemo_object_c*)((this->field_0x5abc + 32)))->getActor(demoActorID)))->getP_BtpData(((char*)&@stringBase0 + 38), this->field_0x6) == 0) goto L_2b3c; */
        /* field_0x6d8 = ((dDemo_actor_c*)(((dDemo_object_c*)((this->field_0x5abc + 32)))->getActor(demoActorID)))->getP_BtpData(((char*)&@stringBase0 + 38), this->field_0x6); */
        /* if (((mDoExt_btpAnm*)((this + 1756)))->init(this->field_0x4, this->field_0x6d8, 1, 2, 0, -1, 1) == 0) goto L_2b3c; */
        /* field_0x811 = 1; */
        /* field_0x6f0 = 0; */
        /* L_2b3c:; */
        dDemo_setDemoData(this, 106, this->field_0x330, ((char*)&@stringBase0 + 38), 0, 0, 0, 0);
        /* L_2b68:; */
        /* return this->field_0x80b; */
}

/* 00002C6C-00002E24       .text _draw__11daNpc_Gp1_cFv */
BOOL daNpc_Gp1_c::_draw() {
    /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (this->field_0x7fc == 0) {
        /* if (this->field_0x7ff != 0) goto L_2bcc; */
    }
    return 1;
    /* L_2bcc:; */
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(0, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x50, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
    /* ((mDoExt_btpAnm*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1756)))->entry(this->field_0x4, this->field_0x6f0); */
    /* ((mDoExt_McaMorf*)(this->field_0x330))->entryDL(); */
    /* ((J3DMaterialTable*)((this->field_0x4 + 88)))->removeTexNoAnimator(this->field_0x6e4); */
    /* dNpc_setShadowModel(this->field_0x6d4, this->field_0x4, this->field_0x50); */
    /* field_0x6d0 = ((dDlst_shadowControl_c*)(((char*)&g_dComIfG_gameInfo + 24416)))->setReal(this->field_0x6d0, 1, this->field_0x6d4); */
    if (this->field_0x6d0 == 0) {
        /* ((dDlst_shadowControl_c*)(((char*)&g_dComIfG_gameInfo + 24416)))->setSimple((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), ((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetTriPla(this->field_0x41e, this->field_0x41c), 0, ((char*)&mSimpleTexObj__21dDlst_shadowControl_c + 0)); */
    }
    if (this->field_0x24 != 0) {
    }
    /* dSnap_RegistFig(91, _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
    return _restgpr_28(1);
}

/* 00002E24-00003008       .text _execute__11daNpc_Gp1_cFv */
BOOL daNpc_Gp1_c::_execute() {
        /* if (this->field_0x802 != 0) goto L_2d90; */
        /* field_0x778 = 0; */
        /* field_0x77c = 0; */
        /* field_0x780 = 0; */
        /* field_0x802 = 1; */
        /* L_2d90:; */
        /* ((dNpc_JntCtrl_c*)((this + 656)))->setParam(this->field_0x14, this->field_0x16, this->field_0x18, this->field_0x1a, this->field_0xc, this->field_0xe, this->field_0x10); */
        /* if (this->field_0x7fc == 0) goto L_2dec; */
        /* if (demoActorID != 0) goto L_2dec; */
        return 1;
        /* L_2dec:; */
        /* field_0x7fe = 0; */
        /* field_0x7fc = 0; */
        partner_srch();
        checkOrder();
        /* if (demo() != 0) goto L_2ecc; */
        /* if (this->field_0x529a == 0) goto L_2e48; */
        /* if (this->field_0xf8 == 1) goto L_2e48; */
        /* L_2e48:; */
        /* if (isEventEntry() < 0) goto L_2e5c; */
        event_proc(isEventEntry());
        /* goto L_2e70; */
        /* L_2e5c:; */
        __ptmf_scall(this, 0);
        /* L_2e70:; */
        /* if (this->field_0x7fe != 0) goto L_2e90; */
        gp_nMove();
        fopAcM_posMoveF(this, (this + 1336));
        /* L_2e90:; */
        /* if (this->field_0x7fd != 0) goto L_2ecc; */
        /* L_2ecc:; */
        eventOrder();
        setMtx(0);
        /* if (this->field_0x80b != 0) goto L_2f04; */
        setCollision(C_@5374);
        /* L_2f04:; */
        return 1;
}

/* 00003008-00003064       .text _delete__11daNpc_Gp1_cFv */
BOOL daNpc_Gp1_c::_delete() {
    /* dComIfG_resDelete((this + 1732), ((char*)&@stringBase0 + 38), arg2); */
    if (heap != 0) {
        /* if (this->field_0x330 != 0) goto L_2f60; */
        /* ((mDoExt_McaMorf*)(this->field_0x330))->stopZelAnime(); */
    }
    /* L_2f60:; */
    return 1;
}

/* 00003064-00003084       .text CheckCreateHeap__FP10fopAc_ac_c */
static BOOL CheckCreateHeap(fopAc_ac_c* i_this) {
    ((daNpc_Gp1_c*)i_this)->CreateHeap();
    return TRUE;
}

/* 00003084-000031A4       .text _create__11daNpc_Gp1_cFv */
cPhs_State daNpc_Gp1_c::_create() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_2fdc; */
        /* if (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_2fd0; */
        __ct();
        /* L_2fd0:; */
        /* L_2fdc:; */
        /* if (dComIfG_resLoad((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1732), ((char*)&@stringBase0 + 38)) == 4) goto L_3000; */
        /* goto L_30a0; */
        /* L_3000:; */
        /* if (((daNpc_Gp1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->charDecide((this->field_0xb0 & 16777215)) != 0) goto L_3020; */
        return 5;
        /* L_3020:; */
        /* if (fopAcM_entrySolidHeap(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), ((char*)&CheckCreateHeap__FP10fopAc_ac_c + 0), ((char*)&a_size_tbl$5394 + 0)) != 0) goto L_3058; */
        return 5;
        /* L_3058:; */
        cullMtx = (this->field_0x50 + 36);
        /* fopAcM_setCullSizeBox(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (((daNpc_Gp1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->createInit() == 0) goto L_30a0; */
        /* L_30a0:; */
        /* return _restgpr_29(dComIfG_resLoad((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1732), ((char*)&@stringBase0 + 38))); */
}

/* 000035D4-00003844       .text create_Anm__11daNpc_Gp1_cFv */
void daNpc_Gp1_c::create_Anm() {
    /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    ((dRes_control_c*)(((char*)&@stringBase0 + 38)))->getIDRes(6);
    if (/* bne */ 1) {
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&@stringBase0 + 38)))->getIDRes(6)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 41), 2159, ((char*)&@stringBase0 + 96));
        OSPanic(((char*)&@stringBase0 + 41), 2159, ((char*)&@stringBase0 + 78));
    }
    __nw(180);
    if (/* beq */ 1) {
    }
    /* field_0x330 = __ct(((dRes_control_c*)(((char*)&@stringBase0 + 38)))->getIDRes(5), 1); */
    if (this->field_0x330 == 0) {
        return 0;
    }
    if (this->field_0x50 == 0) {
        /* field_0x330 = 0; */
        return 0;
    }
    /* field_0x6cc = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 111)); */
    if (this->field_0x6cc != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 111))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 41), 2179, ((char*)&@stringBase0 + 116)); */
        OSPanic(((char*)&@stringBase0 + 41), 2179, ((char*)&@stringBase0 + 78));
    }
    /* field_0x6cd = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 135)); */
    if (this->field_0x6cd != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 135))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 41), 2182, ((char*)&@stringBase0 + 144)); */
        OSPanic(((char*)&@stringBase0 + 41), 2182, ((char*)&@stringBase0 + 78));
    }
    /* field_0x6ce = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 165)); */
    if (this->field_0x6ce != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 165))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 41), 2185, ((char*)&@stringBase0 + 171)); */
    }
    return _restgpr_28(OSPanic(((char*)&@stringBase0 + 41), 2185, ((char*)&@stringBase0 + 78)));
}

/* 00003844-000039A0       .text CreateHeap__11daNpc_Gp1_cFv */
void daNpc_Gp1_c::CreateHeap() {
        create_Anm();
        /* if (/ * bne * / 1) goto L_3784; */
        return 0;
        /* L_3784:; */
        /* field_0x811 = 0; */
        /* if (iniTexPttrnAnm(0) != 0) goto L_37b0; */
        /* field_0x330 = 0; */
        return 0;
        /* L_37b0:; */
        /* field_0x6d4 = mDoExt_J3DModel(0); */
        /* if (this->field_0x6d4 == 0) goto L_3890; */
        /* goto L_3828; */
        /* L_37e4:; */
        /* if ((0 & 65535) == (this->field_0x6cc & 255)) goto L_3808; */
        /* if ((0 & 65535) != (this->field_0x6cd & 255)) goto L_3824; */
        /* L_3808:; */
        /* field_0x8 = 0; */
        /* L_3824:; */
        /* L_3828:; */
        /* if (((0 + 1) & 65535) < this->field_0x28) goto L_37e4; */
        /* field_0x14 = this; */
        ((dBgS_AcchCir*)((this + 1272)))->SetWall(C_@5373, (0 + 1));
        ((dBgS_Acch*)((this + 820)))->Set((this + 504), (this + 484), this, 1, (this + 1272), (this + 544), 0);
        return 1;
        /* L_3890:; */
        /* field_0x330 = 0; */
        return 0;
}

/* 000039A0-000039C0       .text daNpc_Gp1_Create__FP10fopAc_ac_c */
static cPhs_State daNpc_Gp1_Create(fopAc_ac_c* i_this) {
    return ((daNpc_Gp1_c*)i_this)->_create();
}

/* 000039C0-000039E0       .text daNpc_Gp1_Delete__FP11daNpc_Gp1_c */
static BOOL daNpc_Gp1_Delete(daNpc_Gp1_c* i_this) {
    return ((daNpc_Gp1_c*)i_this)->_delete();
}

/* 000039E0-00003A00       .text daNpc_Gp1_Execute__FP11daNpc_Gp1_c */
static BOOL daNpc_Gp1_Execute(daNpc_Gp1_c* i_this) {
    return ((daNpc_Gp1_c*)i_this)->_execute();
}

/* 00003A00-00003A20       .text daNpc_Gp1_Draw__FP11daNpc_Gp1_c */
static BOOL daNpc_Gp1_Draw(daNpc_Gp1_c* i_this) {
    return ((daNpc_Gp1_c*)i_this)->_draw();

/* 00003A20-00003A28       .text daNpc_Gp1_IsDelete__FP11daNpc_Gp1_c */
static BOOL daNpc_Gp1_IsDelete(daNpc_Gp1_c*) {
    return 1;

static actor_method_class l_daNpc_Gp1_Method = {
    (process_method_func)daNpc_Gp1_Create,
    (process_method_func)daNpc_Gp1_Delete,
    (process_method_func)daNpc_Gp1_Execute,
    (process_method_func)daNpc_Gp1_IsDelete,
    (process_method_func)daNpc_Gp1_Draw,
};

actor_process_profile_definition g_profile_NPC_GP1 = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0007,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_NPC_GP1_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daNpc_Gp1_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_NPC_GP1_e,
    /* Actor SubMtd */ &l_daNpc_Gp1_Method,
    /* Status       */ 0x07 | fopAcStts_SHOWMAP_e | fopAcStts_NOCULLEXEC_e | fopAcStts_CULL_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_NPC_e,
    /* Cull Type    */ fopAc_CULLBOX_CUSTOM_e,
};

/* 由 fix_decomp_braces.py 补齐：反编译产物末尾缺 2 个 } */
}}

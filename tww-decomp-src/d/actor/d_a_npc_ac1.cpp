/**
 * d_a_npc_ac1.cpp
 * NPC - Prince Komali (after Dragon Roost Cavern)
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_npc_ac1.h"

/* 000000EC-00000150       .text __ct__15daNpc_Ac1_HIO_cFv */
daNpc_Ac1_HIO_c::daNpc_Ac1_HIO_c() {
    /* __ct__15daNpc_Ac1_HIO_cFv: 无实义指令 */
}

/* 00000198-000001E4       .text nodeCallBack_Wng__FP7J3DNodei */
static BOOL nodeCallBack_Wng(J3DNode* i_node, int i_switch) {
    if (i_switch == 0) {
    if (j3dSys.getModel()->getUserArea() != NULL) {
    reinterpret_cast<daNpc_Ac1_c*>(j3dSys.getModel()->getUserArea())
    ->nodeWngControl(i_node, j3dSys.getModel());
    }
    }
    return TRUE;
}

/* 000001E4-00000294       .text nodeWngControl__11daNpc_Ac1_cFP7J3DNodeP8J3DModel */
void daNpc_Ac1_c::nodeWngControl(J3DNode*, J3DModel*) {
    /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    PSMTXCopy();
    if (/* bne */ 1) {
        /* PSMTXCopy((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1820), ((char*)&mCurrentMtx__6J3DSys + 0)); */
        /* PSMTXCopy((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1820)); */
    }
    if (/* bne */ 1) {
        /* PSMTXCopy((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1868), ((char*)&mCurrentMtx__6J3DSys + 0)); */
    }
    /* return _restgpr_28(PSMTXCopy((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1868))); */
}

/* 00000294-000002E0       .text nodeCallBack_Arm__FP7J3DNodei */
static BOOL nodeCallBack_Arm(J3DNode* i_node, int i_switch) {
    if (i_switch == 0) {
    if (j3dSys.getModel()->getUserArea() != NULL) {
    reinterpret_cast<daNpc_Ac1_c*>(j3dSys.getModel()->getUserArea())
    ->nodeArmControl(i_node, j3dSys.getModel());
    }
    }
    return TRUE;
}

/* 000002E0-00000390       .text nodeArmControl__11daNpc_Ac1_cFP7J3DNodeP8J3DModel */
void daNpc_Ac1_c::nodeArmControl(J3DNode*, J3DModel*) {
    /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    PSMTXCopy();
    if (/* bne */ 1) {
        /* PSMTXCopy((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1820), ((char*)&mCurrentMtx__6J3DSys + 0)); */
        /* PSMTXCopy((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1820)); */
    }
    if (/* bne */ 1) {
        /* PSMTXCopy((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1868), ((char*)&mCurrentMtx__6J3DSys + 0)); */
    }
    /* return _restgpr_28(PSMTXCopy((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1868))); */
}

/* 00000390-000003DC       .text nodeCallBack_Ac1__FP7J3DNodei */
static BOOL nodeCallBack_Ac1(J3DNode* i_node, int i_switch) {
    if (i_switch == 0) {
    if (j3dSys.getModel()->getUserArea() != NULL) {
    reinterpret_cast<daNpc_Ac1_c*>(j3dSys.getModel()->getUserArea())
    ->nodeAc1Control(i_node, j3dSys.getModel());
    }
    }
    return TRUE;
}

/* 000003DC-0000056C       .text nodeAc1Control__11daNpc_Ac1_cFP7J3DNodeP8J3DModel */
void daNpc_Ac1_c::nodeAc1Control(J3DNode*, J3DModel*) {
    /* _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (eventInfo != 0) {
        /* field_0xf8 = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* __register_global_object(((C_@3569 + 0) + 248), ((char*)&__dt__4cXyzFv + 0), ((C_@3569 + 0) + 232)); */
        eventInfo = 1;
    }
    PSMTXCopy((this->field_0x8c + (this->field_0x18 * 48)), ((char*)&now__14mDoMtx_stack_c + 0));
    if (this->field_0x18 == (m6CC & 255)) {
        /* mDoMtx_XrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x292); */
        /* mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), ((-this->field_0x290) & 65535)); */
        /* PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0), ((C_@3569 + 0) + 248), (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2056)); */
    }
    if (this->field_0x18 == (m6CD & 255)) {
        /* mDoMtx_XrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x296); */
        /* mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), ((-this->field_0x294) & 65535)); */
    }
    if (this->field_0x18 == (m6CE & 255)) {
        /* PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1820)); */
    }
    if (this->field_0x18 == (m6CF & 255)) {
        /* PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1868)); */
    }
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), ((char*)&mCurrentMtx__6J3DSys + 0));
    return _restgpr_27(PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x8c + (this->field_0x18 * 48))));
}

/* 000005A8-00000640       .text init_AC1_0__11daNpc_Ac1_cFv */
void daNpc_Ac1_c::init_AC1_0() {
    /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(11780);
    if (/* beq */ 1) {
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(5504);
    }
    /* return _restgpr_29(((daNpc_Ac1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->set_action()); */
}

/* 00000640-000007C8       .text createInit__11daNpc_Ac1_cFv */
void daNpc_Ac1_c::createInit() {
        /* field_0x280 = 10; */
        /* field_0x26d = 169; */
        /* field_0x26f = 169; */
        gravity = 0;
        m814 = 0;
        /* field_0x818 = 0; */
        /* field_0x81c = 0; */
        /* if (arg1 == 255) goto L_5e4; */
        /* ((dNpc_PathRun_c*)((this + 1916)))->setInf(arg1, this->field_0x20a, 1, arg4, arg5, arg6, arg7); */
        /* if (mPathRun == 0) goto L_5dc; */
        /* goto L_5e4; */
        /* L_5dc:; */
        return 0;
        /* L_5e4:; */
        ((dNpc_EventCut_c*)((this + 1924)))->setActorInfo2(((char*)&@stringBase0 + 0), this);
        m871 = 4;
        /* if (m879 == 0) goto L_610; */
        /* goto L_61c; */
        /* L_610:; */
        init_AC1_0();
        /* goto L_620; */
        /* L_61c:; */
        /* L_620:; */
        /* if (0 == 0) goto L_644; */
        /* goto L_64c; */
        /* L_644:; */
        return 0;
        /* L_64c:; */
        ((dCcD_Stts*)((this + 1336)))->Init(255, 255, this);
        /* field_0x5b8 = (this + 1336); */
        ((dCcD_Cyl*)((this + 1396)))->Set(((char*)&dNpc_cyl_src + 0));
        /* ((mDoExt_McaMorf*)(this->field_0x330))->setMorf(C_@4263); */
        /* if (m85E == 0) goto L_6a8; */
        ((mDoExt_McaMorf*)(m708))->setMorf(C_@4263);
        /* goto L_6b8; */
        /* L_6a8:; */
        ((mDoExt_McaMorf*)(m6FC))->setMorf(C_@4263);
        /* L_6b8:; */
        setMtx(1);
        return 1;
}

/* 000007C8-00000988       .text setMtx__11daNpc_Ac1_cFb */
void daNpc_Ac1_c::setMtx(bool) {
        /* _savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (m86B != 0) goto L_794; */
        /* ((daNpc_Ac1_c*)(_savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7)))->plyTexPttrnAnm(); */
        /* m858 = ((mDoExt_McaMorf*)(this->field_0x330))->play((_savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, 0); */
        /* if (this->field_0x68 >= m82C) goto L_73c; */
        m858 = 1;
        /* L_73c:; */
        m82C = 0;
        /* if (m85E == 0) goto L_76c; */
        /* ((mDoExt_McaMorf*)(m708))->play((_savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, 0); */
        /* goto L_780; */
        /* L_76c:; */
        /* ((mDoExt_McaMorf*)(m6FC))->play((_savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, 0); */
        /* L_780:; */
        /* ((dBgS_Acch*)((_savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7) + 820)))->CrrPos(((char*)&g_dComIfG_gameInfo + 4768)); */
        /* L_794:; */
        /* field_0x1b5 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetRoomId((_savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7) + 1052)); */
        /* field_0x1b6 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetPolyColor((_savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7) + 1052)); */
        PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
        /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x206); */
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x50 + 36));
        /* ((mDoExt_McaMorf*)(this->field_0x330))->calc(); */
        /* if (m85E != 0) goto L_820; */
        ((mDoExt_McaMorf*)(m6FC))->calc();
        /* goto L_828; */
        /* L_820:; */
        ((mDoExt_McaMorf*)(m708))->calc();
        /* L_828:; */
        /* if (m6D4 == 0) goto L_878; */
        /* if (m85E == 0) goto L_878; */
        PSMTXCopy((this->field_0x8c + ((m6D0 & 255) * 48)), (m6D4 + 36));
        /* L_878:; */
        /* return _restgpr_29(((daNpc_Ac1_c*)(_savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7)))->setAttention()); */
}

/* 00000988-0000099C       .text anmNum_toResID__11daNpc_Ac1_cFi */
int daNpc_Ac1_c::anmNum_toResID(int anmNum) {
    static const int a_bck_resID_tbl[] = {
        1, 12, 13, 14, 0, 0,
    };
    return a_bck_resID_tbl[anmNum];
}

/* 0000099C-000009B0       .text wingAnmNum_toResID__11daNpc_Ac1_cFi */
int daNpc_Ac1_c::wingAnmNum_toResID(int anmNum) {
    static const int a_bck_resID_tbl[] = {
        0, 9, 10, 11, 7, 0,
    };
    return a_bck_resID_tbl[anmNum];
}

/* 000009B0-000009C4       .text btpNum_toResID__11daNpc_Ac1_cFi */
int daNpc_Ac1_c::btpNum_toResID(int anmNum) {
    static const int a_btp_resID_tbl[] = {
        7, 6, 8,
    };
    return a_btp_resID_tbl[anmNum];
    return a_btp_resID_tbl[anmNum];
}

/* 000009C4-00000AD4       .text setBtp__11daNpc_Ac1_cFbi */
void daNpc_Ac1_c::setBtp(bool, int) {
    /* m6DC = ((dRes_control_c*)(((char*)&@stringBase0 + 4)))->getIDRes((((daNpc_Ac1_c*)(_savegpr_29(this, bool, int, arg3, arg4, arg5, arg6, arg7)))->btpNum_toResID(this->field_0x50) & 65535), ((char*)&g_dComIfG_gameInfo + -16460), 64); */
    if (m6DC == 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&@stringBase0 + 4)))->getIDRes((((daNpc_Ac1_c*)(_savegpr_29(this, bool, int, arg3, arg4, arg5, arg6, arg7)))->btpNum_toResID(this->field_0x50) & 65535), ((char*)&g_dComIfG_gameInfo + -16460), 64)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 7), 534, ((char*)&@stringBase0 + 23)); */
        OSPanic(((char*)&@stringBase0 + 7), 534, ((char*)&@stringBase0 + 44));
    }
    /* ((mDoExt_btpAnm*)((_savegpr_29(this, bool, int, arg3, arg4, arg5, arg6, arg7) + 1760)))->init(this->field_0x4, m6DC, 1, 2, 0, -1); */
    if (/* beq */ 1) {
        m6F4 = 0;
        /* field_0x6f6 = 0; */
    }
    /* return _restgpr_29(((1 - ((mDoExt_btpAnm*)((_savegpr_29(this, bool, int, arg3, arg4, arg5, arg6, arg7) + 1760)))->init(this->field_0x4, m6DC, 1, 2, 0, -1)) >> 5)); */
}

/* 00000AD4-00000AFC       .text iniTexPttrnAnm__11daNpc_Ac1_cFb */
void daNpc_Ac1_c::iniTexPttrnAnm(bool) {
    return setBtp(bool, (m870 & 255));
}

/* 00000AFC-00000BA8       .text plyTexPttrnAnm__11daNpc_Ac1_cFv */
void daNpc_Ac1_c::plyTexPttrnAnm() {
        /* if (m870 != 0) goto L_a40; */
        /* if (cLib_calcTimer<s>__FPs((this + 1782), arg1, arg2, arg3, arg4, arg5, arg6, arg7) != 0) goto L_aa8; */
        /* L_a40:; */
        m6F4 = (m6F4 + 1);
        /* if (m6F4 < (this->field_0x6 & 65535)) goto L_aa8; */
        /* if (m870 == 0) goto L_a78; */
        /* goto L_aa8; */
        /* L_a78:; */
        cM_rndF(C_@4425);
        m6F4 = 0;
        /* L_aa8:; */
        return C_@4424;
}

/* 00000BA8-00000BE4       .text setAnm_tex__11daNpc_Ac1_cFSc */
void daNpc_Ac1_c::setAnm_tex(signed char) {
    if ((m870 & 255) != (char & 255)) {
        m870 = char;
    }
    return iniTexPttrnAnm(1);
}

/* 00000BE4-00000D0C       .text setAnm_anm__11daNpc_Ac1_cFPQ211daNpc_Ac1_c9anm_prm_c */
void daNpc_Ac1_c::setAnm_anm(daNpc_Ac1_c::anm_prm_c*) {
    if ((m871 & 255) == (base & 255)) {
        return 1;
    }
    dNpc_setAnmIDRes(this->field_0x330, this->field_0xc, ((daNpc_Ac1_c*)(1))->anmNum_toResID((m871 & 255)), -1, ((char*)&@stringBase0 + 4));
    wingAnmNum_toResID((m871 & 255));
    /* m85E = ((1 - this->field_0x10) >> 5); */
    if (m85E != 0) {
        dNpc_setAnmIDRes(m708, this->field_0xc, wingAnmNum_toResID((m871 & 255)), -1, ((char*)&@stringBase0 + 4));
    } else {
        /* dNpc_setAnmIDRes(m6FC, this->field_0xc); */
    }
    m82C = 0;
    m859 = 0;
    m858 = 0;
    return 1;
}

/* 00000D0C-00000D8C       .text setAnm__11daNpc_Ac1_cFv */
void daNpc_Ac1_c::setAnm() {
    if (this->field_0x1 != 0) {
        /* setAnm_tex(this->field_0x1, arg2, arg3, arg4, arg5, arg6, arg7); */
    }
    if (base != 0) {
        setAnm_anm((((char*)&a_anm_prm_tbl$4454 + 0) + ((m875 & 255) * 20)));
    }
    return 1;
}

/* 00000D8C-00000D90       .text chg_anmTag__11daNpc_Ac1_cFv */
void daNpc_Ac1_c::chg_anmTag() {
}

/* 00000D90-00000D94       .text control_anmTag__11daNpc_Ac1_cFv */
void daNpc_Ac1_c::control_anmTag() {
}

/* 00000D94-00000DD8       .text chg_anmAtr__11daNpc_Ac1_cFUc */
void daNpc_Ac1_c::chg_anmAtr(unsigned char) {
        /* if ((char & 16777215) >= 6) goto L_cdc; */
        /* if ((char & 16777215) != m86E) goto L_cd0; */
        /* goto L_cdc; */
        /* L_cd0:; */
        m86E = char;
        /* L_cdc:; */
        return setAnm_ATR(1);
}

/* 00000DD8-00000DE4       .text control_anmAtr__11daNpc_Ac1_cFv */
void daNpc_Ac1_c::control_anmAtr() {
    if (m86E != 6) return;
}

/* 00000DE4-00000E4C       .text setAnm_ATR__11daNpc_Ac1_cFi */
void daNpc_Ac1_c::setAnm_ATR(int) {
    if (int != 0) {
        /* setAnm_tex(this->field_0x1, arg2, arg3, arg4, arg5, arg6, arg7); */
    }
    return setAnm_anm((((char*)&a_anm_prm_tbl$4511 + 0) + (m86E * 20)), (m86E * 20));
}

/* 00000E4C-00000F10       .text anmAtr__11daNpc_Ac1_cFUs */
void daNpc_Ac1_c::anmAtr(unsigned short) {
        /* if ((short & 65535) == 14) goto L_df8; */
        /* if (/ * bge * / 1) goto L_e00; */
        /* if ((short & 65535) == 6) goto L_d90; */
        /* goto L_e00; */
        /* L_d90:; */
        /* if (this->field_0x87b != 0) goto L_dc0; */
        m86E = 255;
        /* chg_anmAtr(this->field_0x5bcf); */
        /* field_0x87b = (this->field_0x87b + 1); */
        /* L_dc0:; */
        /* field_0x5bd0 = 255; */
        /* if (this->field_0x5bd0 == 255) goto L_e00; */
        /* if (m86F == this->field_0x5bd0) goto L_e00; */
        chg_anmTag();
        /* goto L_e00; */
        /* L_df8:; */
        /* field_0x87b = 0; */
        /* L_e00:; */
        control_anmTag();
        return control_anmAtr();
}

/* 00000F10-00000F60       .text eventOrder__11daNpc_Ac1_cFv */
void daNpc_Ac1_c::eventOrder() {
    if ((m874 & 255) != 1) {
        /* if ((m874 & 255) == 2) goto L_e64; */
    }
    if (m874 == 1) {
    }
    /* L_e64:; */
    return fopAcM_orderSpeakEvent(this);
}

/* 00000F60-00000FA0       .text checkOrder__11daNpc_Ac1_cFv */
void daNpc_Ac1_c::checkOrder() {
    if ((m874 & 255) != 1) {
    }
    m874 = 0;
    m869 = 1;
    return this;
}

/* 00000FA0-0000103C       .text chk_talk__11daNpc_Ac1_cFv */
void daNpc_Ac1_c::chk_talk() {
        /* field_0x85b = 255; */
        /* if (this->field_0x52b8 == 1) goto L_f00; */
        /* if (this->field_0x52b8 == 2) goto L_f00; */
        /* if (this->field_0x52b8 != 3) goto L_f04; */
        /* L_f00:; */
        /* L_f04:; */
        /* if (1 == 0) goto L_f34; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->ChkPresentEnd() == 0) goto L_f30; */
        /* goto L_f34; */
        /* L_f30:; */
        /* L_f34:; */
        return 0;
}

/* 0000103C-0000107C       .text chk_partsNotMove__11daNpc_Ac1_cFv */
void daNpc_Ac1_c::chk_partsNotMove() {
    /* if (this->field_0x844 == this->field_0x292) { */
        /* if (this->field_0x846 == this->field_0x296) goto L_f88; */
        /* if (this->field_0x848 == this->field_0x206) goto L_f88; */
    /* L_f88:; */
    return 1;
}

/* 0000107C-0000121C       .text lookBack__11daNpc_Ac1_cFv */
void daNpc_Ac1_c::lookBack() {
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if ((m877 & 255) == 2) goto L_107c; */
        /* if (/ * bge * / 1) goto L_1020; */
        /* if ((m877 & 255) >= 1) goto L_102c; */
        /* goto L_10b0; */
        /* L_1020:; */
        /* if ((m877 & 255) >= 4) goto L_10b0; */
        /* goto L_10ac; */
        /* L_102c:; */
        dNpc_playerEyePos();
        /* goto L_10b0; */
        /* L_107c:; */
        /* goto L_10b0; */
        /* L_10ac:; */
        /* L_10b0:; */
        /* cLib_addCalcAngleS2((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2130), this->field_0x1e, 4, 2048); */
        /* if (this->field_0x29a != 0) goto L_10e0; */
        m852 = 0;
        /* L_10e0:; */
        /* return _restgpr_28(((dNpc_JntCtrl_c*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 656)))->lookAtTarget((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518))); */
}

/* 0000121C-0000128C       .text next_msgStatus__11daNpc_Ac1_cFPUl */
void daNpc_Ac1_c::next_msgStatus(unsigned long*) {
        /* if (/ * beq * / 1) goto L_1180; */
        /* if (/ * bge * / 1) goto L_115c; */
        /* if (/ * beq * / 1) goto L_1174; */
        /* if (/ * bge * / 1) goto L_1198; */
        /* if (/ * bge * / 1) goto L_1168; */
        /* goto L_1198; */
        /* L_115c:; */
        /* if (/ * bge * / 1) goto L_1198; */
        /* goto L_118c; */
        /* L_1168:; */
        base = 6221;
        return 15;
}

/* 0000128C-000012AC       .text getBitMask__11daNpc_Ac1_cFv */
void daNpc_Ac1_c::getBitMask() {
    }
    return 16;


/* 000012AC-00001380       .text getMsg_AC1_0__11daNpc_Ac1_cFv */
void daNpc_Ac1_c::getMsg_AC1_0() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->getEventReg();
        /* ((daNpc_Ac1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->getBitMask(); */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(5504) == 0) goto L_124c; */
        /* if (/ * beq * / 1) goto L_122c; */
        return 6227;
        /* L_122c:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->setEventReg();
        return 6224;
        /* L_124c:; */
        /* if (/ * beq * / 1) goto L_1260; */
        return 6223;
        /* L_1260:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->setEventReg();
        return _restgpr_29(6220);
}

/* 00001380-000013BC       .text getMsg__11daNpc_Ac1_cFv */
void daNpc_Ac1_c::getMsg() {
    }
    return getMsg_AC1_0();


/* 000013BC-0000143C       .text chkAttention__11daNpc_Ac1_cFv */
void daNpc_Ac1_c::chkAttention() {
    if (((dAttention_c*)(((char*)&g_dComIfG_gameInfo + 22536)))->LockonTruth() == 0) {
    }
    return ((this - ((dAttention_c*)(((char*)&g_dComIfG_gameInfo + 22536)))->ActionTarget(0)) >> 5);
}

/* 0000143C-00001494       .text setAttention__11daNpc_Ac1_cFb */
void daNpc_Ac1_c::setAttention(bool) {
    /* field_0x274 = 0; */
    /* field_0x278 = (this->field_0x1fc + this->field_0x20); */
    /* field_0x27c = 0; */
    if (m864 == 0) {
    }
    eyePos = 0;
    /* field_0x264 = 0; */
    /* field_0x268 = 0; */
    return this;
}

/* 00001494-000014B0       .text charDecide__11daNpc_Ac1_cFi */
void daNpc_Ac1_c::charDecide(int) {
    m878 = 0;
    m879 = -1;
    m879 = 0;
    return 1;
}

/* 000014B0-00001508       .text event_actionInit__11daNpc_Ac1_cFi */
void daNpc_Ac1_c::event_actionInit(int) {
    /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(int, ((char*)&@stringBase0 + 49), 3, arg4) != 0) { */
    /* return ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(int, ((char*)&@stringBase0 + 49), 3, arg4); */

/* 00001508-00001528       .text event_action__11daNpc_Ac1_cFv */
void daNpc_Ac1_c::event_action() {
        /* if (this->field_0x86d == 0) goto L_142c; */
        /* goto L_1434; */
        /* L_142c:; */
        return 1;
}

/* 00001528-00001614       .text privateCut__11daNpc_Ac1_cFi */
void daNpc_Ac1_c::privateCut(int) {
        /* _savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * beq * / 1) goto L_1510; */
        m86C = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyActIdx();
        /* if ((m86C & 255) != -1) goto L_14ac; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd();
        /* goto L_1510; */
        /* L_14ac:; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getIsAddvance() == 0) goto L_14dc; */
        /* if (m86C == 0) goto L_14d0; */
        /* goto L_14dc; */
        /* L_14d0:; */
        /* ((daNpc_Ac1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->event_actionInit(); */
        /* L_14dc:; */
        /* if (m86C == 0) goto L_14ec; */
        /* goto L_14f8; */
        /* L_14ec:; */
        /* ((daNpc_Ac1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->event_action(); */
        /* goto L_14fc; */
        /* L_14f8:; */
        /* L_14fc:; */
        /* if (1 == 0) goto L_1510; */
        /* L_1510:; */
        return _restgpr_29(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd());
}

/* 00001614-00001634       .text endEvent__11daNpc_Ac1_cFv */
void daNpc_Ac1_c::endEvent() {
    m86E = 255;
    return this;
}

/* 00001634-0000166C       .text isEventEntry__11daNpc_Ac1_cFv */
void daNpc_Ac1_c::isEventEntry() {
    /* return ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(mEventCut, 0, 0, arg4); */
}

/* 0000166C-000016C4       .text event_proc__11daNpc_Ac1_cFi */
void daNpc_Ac1_c::event_proc(int) {
    if (((dNpc_EventCut_c*)((this + 1924)))->cutProc() != 0) {
        privateCut(int);
    }
    return lookBack();
}

/* 000016C4-00001770       .text set_action__11daNpc_Ac1_cFM11daNpc_Ac1_cFPCvPvPv_iPv */
void daNpc_Ac1_c::set_action(int (daNpc_Ac1_c::*)(void*), void*) {
        /* if (__ptmf_cmpr((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1808)) == 0) goto L_1668; */
        /* if (__ptmf_test((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1808)) == 0) goto L_1634; */
        m87A = 9;
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_1634:; */
        m87A = 0;
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_1668:; */
        return _restgpr_29(1);
}

/* 00001770-000017D4       .text setStt__11daNpc_Ac1_cFSc */
void daNpc_Ac1_c::setStt(signed char) {
    m84C = 0;
    m875 = char;
    if ((m875 & 255) != 2) {
        /* if (/ * bge * / 1) goto L_16d4; */
    } else {
        m86E = 255;
        m877 = 1;
        /* field_0x29a = 1; */
        /* goto L_16d8; */
    }
    /* L_16d4:; */
    /* L_16d8:; */
    return setAnm();
}

/* 000017D4-0000189C       .text wait_1__11daNpc_Ac1_cFv */
void daNpc_Ac1_c::wait_1() {
        /* if ((m874 & 255) == 1) goto L_1714; */
        /* if ((m874 & 255) < 3) goto L_171c; */
        /* L_1714:; */
        return 1;
        /* L_171c:; */
        /* if (m869 == 0) goto L_1748; */
        /* if (((daNpc_Ac1_c*)(1))->chk_talk() == 0) goto L_1740; */
        setStt(2);
        /* L_1740:; */
        return 1;
        /* L_1748:; */
        m874 = 2;
        /* if (this->field_0x868 == 0) goto L_1764; */
        m84C = 60;
        /* L_1764:; */
        /* if (cLib_calcTimer<s>__FPs((this + 2124)) == 0) goto L_1780; */
        m877 = 1;
        /* goto L_1798; */
        /* L_1780:; */
        m877 = 3;
        /* field_0x29a = 1; */
        /* L_1798:; */
        return 1;
}

/* 0000189C-00001978       .text talk_1__11daNpc_Ac1_cFv */
void daNpc_Ac1_c::talk_1() {
        chk_partsNotMove();
        /* if (this->field_0x6b0 == 0) goto L_17e8; */
        /* goto L_17f0; */
        /* L_17e8:; */
        m856 = 0;
        /* L_17f0:; */
        talk(1);
        /* if (this->field_0x6b0 == 0) goto L_1870; */
        /* if (this->field_0xf8 == 6) goto L_1870; */
        /* if (/ * bge * / 1) goto L_1824; */
        /* if (this->field_0xf8 == 2) goto L_1870; */
        /* goto L_1870; */
        /* L_1824:; */
        /* if (this->field_0xf8 == 19) goto L_1830; */
        /* goto L_1870; */
        /* L_1830:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(16130);
        /* field_0x85b = 255; */
        m869 = 0;
        setStt(m876);
        m84C = 60;
        endEvent();
        /* L_1870:; */
        return (chk_partsNotMove() & 16777215);
}

/* 00001978-00001A34       .text wait_action1__11daNpc_Ac1_cFPv */
void daNpc_Ac1_c::wait_action1(void*) {
        /* if ((m87A & 255) >= 4) goto L_18c0; */
        /* if ((m87A & 255) == 0) goto L_18cc; */
        /* if (/ * bge * / 1) goto L_18e4; */
        /* goto L_1930; */
        /* L_18c0:; */
        /* if ((m87A & 255) == 9) goto L_1930; */
        /* goto L_1930; */
        /* L_18cc:; */
        /* setStt(1, arg2, arg3, arg4, arg5, arg6, arg7); */
        m87A = (m87A + 1);
        /* goto L_1930; */
        /* L_18e4:; */
        /* field_0x868 = ((daNpc_Ac1_c*)(m87A))->chkAttention(); */
        /* if ((m875 & 255) == 2) goto L_191c; */
        /* if (/ * bge * / 1) goto L_1928; */
        /* if ((m875 & 255) >= 1) goto L_190c; */
        /* goto L_1928; */
        /* L_190c:; */
        m864 = wait_1();
        /* goto L_1928; */
        /* L_191c:; */
        m864 = talk_1();
        /* L_1928:; */
        lookBack();
        /* L_1930:; */
        return 1;
}

/* 00001A34-00001B74       .text demo__11daNpc_Ac1_cFv */
void daNpc_Ac1_c::demo() {
        /* if (demoActorID != 0) goto L_1980; */
        /* if (m86B == 0) goto L_1a70; */
        m86B = 0;
        /* goto L_1a70; */
        /* L_1980:; */
        m86B = 1;
        ((dDemo_object_c*)((this->field_0x5abc + 32)))->getActor(demoActorID);
        /* if (m6DC == 0) goto L_19d4; */
        m6F4 = (m6F4 + 1);
        /* if (m6F4 < (this->field_0x6 & 65535)) goto L_19d4; */
        /* L_19d4:; */
        /* if (((dDemo_actor_c*)(((dDemo_object_c*)((this->field_0x5abc + 32)))->getActor(demoActorID)))->getP_BtpData(((char*)&@stringBase0 + 4), this->field_0x6) == 0) goto L_1a44; */
        /* m6DC = ((dDemo_actor_c*)(((dDemo_object_c*)((this->field_0x5abc + 32)))->getActor(demoActorID)))->getP_BtpData(((char*)&@stringBase0 + 4), this->field_0x6); */
        /* if (((mDoExt_btpAnm*)((this + 1760)))->init(this->field_0x4, m6DC, 1, 2, 0, -1, 1) == 0) goto L_1a44; */
        m870 = 3;
        m6F4 = 0;
        /* L_1a44:; */
        dDemo_setDemoData(this, 106, this->field_0x330, ((char*)&@stringBase0 + 4), 0, 0, 0, 0);
        /* L_1a70:; */
        return m86B;
}

/* 00001B74-00001C70       .text shadowDraw__11daNpc_Ac1_cFv */
void daNpc_Ac1_c::shadowDraw() {
        /* m6D8 = dComIfGd_setShadow(m6D8, 1, this->field_0x50); */
        /* if (m6D8 == 0) goto L_1b70; */
        /* if (m85E == 0) goto L_1b38; */
        /* ((dDlst_shadowControl_c*)(((char*)&g_dComIfG_gameInfo + 24416)))->addReal(m6D8, this->field_0x50); */
        /* goto L_1b50; */
        /* L_1b38:; */
        ((dDlst_shadowControl_c*)(((char*)&g_dComIfG_gameInfo + 24416)))->addReal();
        /* L_1b50:; */
        /* if (m6D4 == 0) goto L_1b70; */
        /* L_1b70:; */
        return ((dDlst_shadowControl_c*)(((char*)&g_dComIfG_gameInfo + 24416)))->addReal(m6D8, m6D4);
}

/* 00001C70-00001DC4       .text _draw__11daNpc_Ac1_cFv */
BOOL daNpc_Ac1_c::_draw() {
    /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (m85D == 0) {
        /* if (m861 != 0) goto L_1bc8; */
    }
    return 1;
    /* L_1bc8:; */
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(0, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x50, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
    /* ((mDoExt_btpAnm*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1760)))->entry(this->field_0x4, m6F4); */
    /* ((mDoExt_McaMorf*)(this->field_0x330))->entryDL(); */
    /* ((J3DMaterialTable*)((this->field_0x4 + 88)))->removeTexNoAnimator(this->field_0x6e8); */
    if (m85E != 0) {
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x50, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        ((mDoExt_McaMorf*)(m708))->entryDL();
    } else {
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x50, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        ((mDoExt_McaMorf*)(m6FC))->entryDL();
    }
    if (m6D4 != 0) {
        /* if (m85E != 0) goto L_1c98; */
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(m6D4, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        mDoExt_modelEntryDL(m6D4);
    }
    /* L_1c98:; */
    /* ((daNpc_Ac1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->shadowDraw(); */
    /* dSnap_RegistFig(139, _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), C_@4399); */
    return _restgpr_29(1);
}

/* 00001DC4-00001F80       .text _execute__11daNpc_Ac1_cFv */
BOOL daNpc_Ac1_c::_execute() {
        /* if (m863 != 0) goto L_1d30; */
        m7F4 = 0;
        /* field_0x7f8 = 0; */
        /* field_0x7fc = 0; */
        m863 = 1;
        /* L_1d30:; */
        /* ((dNpc_JntCtrl_c*)((this + 656)))->setParam(this->field_0x14, this->field_0x16, this->field_0x18, this->field_0x1a, this->field_0xc, this->field_0xe, this->field_0x10); */
        /* if (m85D == 0) goto L_1d8c; */
        /* if (demoActorID != 0) goto L_1d8c; */
        return 1;
        /* L_1d8c:; */
        m860 = 0;
        m85D = 0;
        checkOrder();
        /* if (demo() != 0) goto L_1e44; */
        /* if (this->field_0x529a == 0) goto L_1de0; */
        /* if (this->field_0xf8 == 1) goto L_1de0; */
        /* L_1de0:; */
        /* if (isEventEntry() < 0) goto L_1df4; */
        event_proc(isEventEntry());
        /* goto L_1e08; */
        /* L_1df4:; */
        __ptmf_scall(this, 0);
        /* L_1e08:; */
        /* if (m860 != 0) goto L_1e20; */
        fopAcM_posMoveF(this, (this + 1336));
        /* L_1e20:; */
        /* if (m85F != 0) goto L_1e44; */
        /* L_1e44:; */
        eventOrder();
        setMtx(0);
        /* if (m86B != 0) goto L_1e7c; */
        setCollision(C_@5021);
        /* L_1e7c:; */
        return 1;
}

/* 00001F80-00001FFC       .text _delete__11daNpc_Ac1_cFv */
BOOL daNpc_Ac1_c::_delete() {
        /* dComIfG_resDelete((this + 1732), ((char*)&@stringBase0 + 4), arg2); */
        /* if (heap == 0) goto L_1ef8; */
        /* if (this->field_0x330 == 0) goto L_1ed8; */
        /* ((mDoExt_McaMorf*)(this->field_0x330))->stopZelAnime(); */
        /* L_1ed8:; */
        /* if (m6FC == 0) goto L_1ee8; */
        ((mDoExt_McaMorf*)(m6FC))->stopZelAnime();
        /* L_1ee8:; */
        /* if (m708 == 0) goto L_1ef8; */
        ((mDoExt_McaMorf*)(m708))->stopZelAnime();
        /* L_1ef8:; */
        return 1;
}

/* 00001FFC-0000201C       .text CheckCreateHeap__FP10fopAc_ac_c */
static BOOL CheckCreateHeap(fopAc_ac_c* i_this) {
    ((daNpc_Ac1_c*)i_this)->CreateHeap();
    return TRUE;
}

/* 0000201C-0000213C       .text _create__11daNpc_Ac1_cFv */
cPhs_State daNpc_Ac1_c::_create() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_1f74; */
        /* if (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_1f68; */
        __ct();
        /* L_1f68:; */
        /* L_1f74:; */
        /* if (dComIfG_resLoad((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1732), ((char*)&@stringBase0 + 4)) == 4) goto L_1f98; */
        /* goto L_2038; */
        /* L_1f98:; */
        /* if (((daNpc_Ac1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->charDecide((this->field_0xb0 & 16777215)) != 0) goto L_1fb8; */
        return 5;
        /* L_1fb8:; */
        /* if (fopAcM_entrySolidHeap(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), ((char*)&CheckCreateHeap__FP10fopAc_ac_c + 0), ((char*)&a_size_tbl$5047 + 0)) != 0) goto L_1ff0; */
        return 5;
        /* L_1ff0:; */
        cullMtx = (this->field_0x50 + 36);
        /* fopAcM_setCullSizeBox(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (((daNpc_Ac1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->createInit() == 0) goto L_2038; */
        /* L_2038:; */
        /* return _restgpr_29(dComIfG_resLoad((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1732), ((char*)&@stringBase0 + 4))); */
}

/* 0000256C-00002838       .text create_Anm__11daNpc_Ac1_cFv */
void daNpc_Ac1_c::create_Anm() {
    /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    ((dRes_control_c*)(((char*)&@stringBase0 + 4)))->getIDRes(5);
    if (/* bne */ 1) {
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&@stringBase0 + 4)))->getIDRes(5)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 7), 1726, ((char*)&@stringBase0 + 62));
        OSPanic(((char*)&@stringBase0 + 7), 1726, ((char*)&@stringBase0 + 44));
    }
    __nw(180);
    if (/* beq */ 1) {
    }
    /* field_0x330 = __ct(((dRes_control_c*)(((char*)&@stringBase0 + 4)))->getIDRes(1), 1); */
    if (this->field_0x330 == 0) {
        return 0;
    }
    if (this->field_0x50 == 0) {
        /* field_0x330 = 0; */
        return 0;
    }
    /* m6CC = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 77)); */
    if (m6CC != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 77))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 7), 1746, ((char*)&@stringBase0 + 82)); */
        OSPanic(((char*)&@stringBase0 + 7), 1746, ((char*)&@stringBase0 + 44));
    }
    /* m6CD = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 101)); */
    if (m6CD != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 101))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 7), 1749, ((char*)&@stringBase0 + 110)); */
        OSPanic(((char*)&@stringBase0 + 7), 1749, ((char*)&@stringBase0 + 44));
    }
    /* m6CE = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 131)); */
    if (m6CE != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 131))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 7), 1752, ((char*)&@stringBase0 + 136)); */
        OSPanic(((char*)&@stringBase0 + 7), 1752, ((char*)&@stringBase0 + 44));
    }
    /* m6CF = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 157)); */
    if (m6CF != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 157))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 7), 1755, ((char*)&@stringBase0 + 162)); */
    }
    return _restgpr_28(OSPanic(((char*)&@stringBase0 + 7), 1755, ((char*)&@stringBase0 + 44)));
}

/* 00002838-00002A4C       .text create_wng_Anm__11daNpc_Ac1_cFv */
void daNpc_Ac1_c::create_wng_Anm() {
    /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    ((dRes_control_c*)(((char*)&@stringBase0 + 4)))->getIDRes(3);
    if (/* bne */ 1) {
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&@stringBase0 + 4)))->getIDRes(3)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 7), 1770, ((char*)&@stringBase0 + 62));
        OSPanic(((char*)&@stringBase0 + 7), 1770, ((char*)&@stringBase0 + 44));
    }
    __nw(180);
    if (/* beq */ 1) {
    }
    m6FC = __ct(((dRes_control_c*)(((char*)&@stringBase0 + 4)))->getIDRes(0), 1);
    if (m6FC == 0) {
        return 0;
    }
    if (this->field_0x50 == 0) {
        m6FC = 0;
        return 0;
    }
    /* m700 = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 183)); */
    if (m700 != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 183))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 7), 1791, ((char*)&@stringBase0 + 193)); */
        OSPanic(((char*)&@stringBase0 + 7), 1791, ((char*)&@stringBase0 + 44));
    }
    /* m701 = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 214)); */
    if (m701 != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 214))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 7), 1794, ((char*)&@stringBase0 + 224)); */
    }
    return _restgpr_28(OSPanic(((char*)&@stringBase0 + 7), 1794, ((char*)&@stringBase0 + 44)));
}

/* 00002A4C-00002CBC       .text create_arm_Anm__11daNpc_Ac1_cFv */
void daNpc_Ac1_c::create_arm_Anm() {
    /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    ((dRes_control_c*)(((char*)&@stringBase0 + 4)))->getIDRes(2);
    if (/* bne */ 1) {
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&@stringBase0 + 4)))->getIDRes(2)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 7), 1809, ((char*)&@stringBase0 + 62));
        OSPanic(((char*)&@stringBase0 + 7), 1809, ((char*)&@stringBase0 + 44));
    }
    __nw(180);
    if (/* beq */ 1) {
    }
    m708 = __ct(((dRes_control_c*)(((char*)&@stringBase0 + 4)))->getIDRes(0), 1);
    if (m708 == 0) {
        return 0;
    }
    if (this->field_0x50 == 0) {
        m708 = 0;
        return 0;
    }
    /* m6D0 = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 245)); */
    if (m6D0 != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 245))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 7), 1830, ((char*)&@stringBase0 + 251)); */
        OSPanic(((char*)&@stringBase0 + 7), 1830, ((char*)&@stringBase0 + 44));
    }
    /* m70C = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 272)); */
    if (m70C != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 272))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 7), 1833, ((char*)&@stringBase0 + 281)); */
        OSPanic(((char*)&@stringBase0 + 7), 1833, ((char*)&@stringBase0 + 44));
    }
    /* field_0x70d = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 302)); */
    if (this->field_0x70d != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 302))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 7), 1836, ((char*)&@stringBase0 + 311)); */
    }
    return _restgpr_28(OSPanic(((char*)&@stringBase0 + 7), 1836, ((char*)&@stringBase0 + 44)));
}

/* 00002CBC-00002DC8       .text create_itm_Mdl__11daNpc_Ac1_cFv */
void daNpc_Ac1_c::create_itm_Mdl() {
    m6D4 = 0;
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(5504) != 0) {
    }
    if (((dRes_control_c*)(((char*)&@stringBase0 + 4)))->getIDRes(4, ((char*)&g_dComIfG_gameInfo + -16460), 64) == 0) {
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&@stringBase0 + 4)))->getIDRes(4, ((char*)&g_dComIfG_gameInfo + -16460), 64)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 7), 1860, ((char*)&@stringBase0 + 62));
        OSPanic(((char*)&@stringBase0 + 7), 1860, ((char*)&@stringBase0 + 44));
    }
    m6D4 = mDoExt_J3DModel(((dRes_control_c*)(((char*)&@stringBase0 + 4)))->getIDRes(4, ((char*)&g_dComIfG_gameInfo + -16460), 64));
    return 1;
}

/* 00002DC8-00003044       .text CreateHeap__11daNpc_Ac1_cFv */
void daNpc_Ac1_c::CreateHeap() {
        /* ((daNpc_Ac1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->create_Anm(); */
        /* if (/ * bne * / 1) goto L_2d08; */
        return 0;
        /* L_2d08:; */
        m870 = 0;
        /* if (((daNpc_Ac1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->iniTexPttrnAnm(0) != 0) goto L_2d34; */
        /* field_0x330 = 0; */
        return 0;
        /* L_2d34:; */
        /* ((daNpc_Ac1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->create_wng_Anm(); */
        /* if (/ * bne * / 1) goto L_2d54; */
        /* field_0x330 = 0; */
        return 0;
        /* L_2d54:; */
        /* ((daNpc_Ac1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->create_arm_Anm(); */
        /* if (/ * beq * / 1) goto L_2f30; */
        /* if (((daNpc_Ac1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->create_itm_Mdl() == 0) goto L_2f30; */
        /* goto L_2dc8; */
        /* L_2d84:; */
        /* if ((0 & 65535) == (m700 & 255)) goto L_2da8; */
        /* if ((0 & 65535) != (m701 & 255)) goto L_2dc4; */
        /* L_2da8:; */
        /* field_0x8 = 0; */
        /* L_2dc4:; */
        /* L_2dc8:; */
        /* if (((0 + 1) & 65535) < this->field_0x28) goto L_2d84; */
        /* field_0x14 = _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* goto L_2e38; */
        /* L_2df4:; */
        /* if ((0 & 65535) == (m70C & 255)) goto L_2e18; */
        /* if ((0 & 65535) != (this->field_0x70d & 255)) goto L_2e34; */
        /* L_2e18:; */
        /* field_0x8 = 0; */
        /* L_2e34:; */
        /* L_2e38:; */
        /* if (((0 + 1) & 65535) < this->field_0x28) goto L_2df4; */
        /* field_0x14 = _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* goto L_2ec8; */
        /* L_2e5c:; */
        /* if ((0 & 65535) == (m6CC & 255)) goto L_2ea0; */
        /* if ((0 & 65535) == (m6CD & 255)) goto L_2ea0; */
        /* if ((0 & 65535) == (m6CE & 255)) goto L_2ea0; */
        /* if ((0 & 65535) != (m6CF & 255)) goto L_2ec4; */
        /* L_2ea0:; */
        /* field_0x8 = 0; */
        /* L_2ec4:; */
        /* L_2ec8:; */
        /* if (((0 + 1) & 65535) < this->field_0x28) goto L_2e5c; */
        /* field_0x14 = _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* ((dBgS_AcchCir*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1272)))->SetWall(C_@5020, (0 + 1)); */
        /* ((dBgS_Acch*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 820)))->Set((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 484), _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 1, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1272), (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 544), 0); */
        return 1;
        /* L_2f30:; */
        /* field_0x330 = 0; */
        m6FC = 0;
        return _restgpr_28(0);
}

/* 00003044-00003064       .text daNpc_Ac1_Create__FP10fopAc_ac_c */
static cPhs_State daNpc_Ac1_Create(fopAc_ac_c* i_this) {
    return ((daNpc_Ac1_c*)i_this)->_create();
}

/* 00003064-00003084       .text daNpc_Ac1_Delete__FP11daNpc_Ac1_c */
static BOOL daNpc_Ac1_Delete(daNpc_Ac1_c* i_this) {
    return ((daNpc_Ac1_c*)i_this)->_delete();
}

/* 00003084-000030A4       .text daNpc_Ac1_Execute__FP11daNpc_Ac1_c */
static BOOL daNpc_Ac1_Execute(daNpc_Ac1_c* i_this) {
    return ((daNpc_Ac1_c*)i_this)->_execute();
}

/* 000030A4-000030C4       .text daNpc_Ac1_Draw__FP11daNpc_Ac1_c */
static BOOL daNpc_Ac1_Draw(daNpc_Ac1_c* i_this) {
    return ((daNpc_Ac1_c*)i_this)->_draw();

/* 000030C4-000030CC       .text daNpc_Ac1_IsDelete__FP11daNpc_Ac1_c */
static BOOL daNpc_Ac1_IsDelete(daNpc_Ac1_c*) {
    return 1;

static actor_method_class l_daNpc_Ac1_Method = {
    (process_method_func)daNpc_Ac1_Create,
    (process_method_func)daNpc_Ac1_Delete,
    (process_method_func)daNpc_Ac1_Execute,
    (process_method_func)daNpc_Ac1_IsDelete,
    (process_method_func)daNpc_Ac1_Draw,
};

actor_process_profile_definition g_profile_NPC_AC1 = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0007,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_NPC_AC1_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daNpc_Ac1_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_NPC_AC1_e,
    /* Actor SubMtd */ &l_daNpc_Ac1_Method,
    /* Status       */ 0x07 | fopAcStts_SHOWMAP_e | fopAcStts_NOCULLEXEC_e | fopAcStts_CULL_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_NPC_e,
    /* Cull Type    */ fopAc_CULLBOX_CUSTOM_e,
};

/* 由 fix_decomp_braces.py 补齐：反编译产物末尾缺 3 个 } */
}}}

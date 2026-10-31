/**
 * d_a_npc_ob1.cpp
 * NPC - Rose
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_npc_ob1.h"

/* 000000EC-00000150       .text __ct__15daNpc_Ob1_HIO_cFv */
daNpc_Ob1_HIO_c::daNpc_Ob1_HIO_c() {
    /* __ct__15daNpc_Ob1_HIO_cFv: 无实义指令 */
}

/* 00000198-00000228       .text searchActor_Kb__FPvPv */
void searchActor_Kb(void*, void*) {
        /* if (this->field_0xe4 >= 20) goto L_120; */
        /* if (fopAc_IsActor(arg0) == 0) goto L_120; */
        /* if (this->field_0x8 != 221) goto L_120; */
        /* if (this->field_0x405 == 0) goto L_108; */
        /* field_0xe8 = (this->field_0xe8 | this->field_0x405); */
        /* L_108:; */
        /* field_0xe4 = (this->field_0xe4 + 1); */
        /* L_120:; */
        return 0;
}

/* 00000228-00000274       .text nodeCallBack_Ob1__FP7J3DNodei */
static BOOL nodeCallBack_Ob1(J3DNode* i_node, int i_switch) {
    if (i_switch == 0) {
    if (j3dSys.getModel()->getUserArea() != NULL) {
    reinterpret_cast<daNpc_Ob1_c*>(j3dSys.getModel()->getUserArea())
    ->nodeOb1Control(i_node, j3dSys.getModel());
    }
    }
    return TRUE;
}

/* 00000274-000003C4       .text nodeOb1Control__11daNpc_Ob1_cFP7J3DNodeP8J3DModel */
void daNpc_Ob1_c::nodeOb1Control(J3DNode*, J3DModel*) {
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

/* 00000400-00000480       .text init_OB1_0__11daNpc_Ob1_cFv */
void daNpc_Ob1_c::init_OB1_0() {
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(1312) == 0) {
        set_action();
        return 1;
    }
    return 0;
}

/* 00000480-00000518       .text init_OB1_1__11daNpc_Ob1_cFv */
void daNpc_Ob1_c::init_OB1_1() {
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(1312) != 0) {
        /* if (dKy_daynight_check() == 0) goto L_414; */
        set_action();
        return 1;
    }
    /* L_414:; */
    return 0;
}

/* 00000518-000005A4       .text init_OB1_2__11daNpc_Ob1_cFv */
void daNpc_Ob1_c::init_OB1_2() {
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(1312) != 0) {
        /* if (dKy_daynight_check() == 1) goto L_4a0; */
        set_action();
        return 1;
    }
    /* L_4a0:; */
    return 0;
}

/* 000005A4-000007AC       .text createInit__11daNpc_Ob1_cFv */
void daNpc_Ob1_c::createInit() {
        /* field_0x7d0 = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getEventIdx(base, 255, arg3); */
        /* field_0x280 = 10; */
        /* field_0x26d = 172; */
        /* field_0x26f = 172; */
        gravity = 0;
        /* field_0x778 = 0; */
        /* field_0x77c = 0; */
        /* field_0x780 = 0; */
        /* field_0x79c = 0; */
        /* field_0x7a0 = 0; */
        /* field_0x7a4 = 0; */
        /* if (/ * beq * / 1) goto L_5a4; */
        ((dNpc_PathRun_c*)((this + 1792)))->setInf();
        /* if (this->field_0x700 != 0) goto L_594; */
        return 0;
        /* L_594:; */
        /* L_5a4:; */
        ((dNpc_EventCut_c*)((this + 1800)))->setActorInfo2(((char*)&@stringBase0 + 10), this);
        /* field_0x803 = 8; */
        /* if ((this->field_0x809 & 255) == 1) goto L_5fc; */
        /* if (/ * bge * / 1) goto L_5e4; */
        /* if ((this->field_0x809 & 255) >= 0) goto L_5f0; */
        /* goto L_614; */
        /* L_5e4:; */
        /* if ((this->field_0x809 & 255) >= 3) goto L_614; */
        /* goto L_608; */
        /* L_5f0:; */
        init_OB1_0();
        /* goto L_618; */
        /* L_5fc:; */
        init_OB1_1();
        /* goto L_618; */
        /* L_608:; */
        init_OB1_2();
        /* goto L_618; */
        /* L_614:; */
        /* L_618:; */
        /* if (0 == 0) goto L_654; */
        /* goto L_65c; */
        /* L_654:; */
        return 0;
        /* L_65c:; */
        ((dCcD_Stts*)((this + 1336)))->Init(217, 255, this);
        /* field_0x5b8 = (this + 1336); */
        ((dCcD_Cyl*)((this + 1396)))->Set(((char*)&dNpc_cyl_src + 0));
        /* ((mDoExt_McaMorf*)(this->field_0x330))->setMorf(C_@4241); */
        setMtx(1);
        return 1;
}

/* 000007AC-00000900       .text setMtx__11daNpc_Ob1_cFb */
void daNpc_Ob1_c::setMtx(bool) {
        /* _savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x7fb != 0) goto L_740; */
        /* ((daNpc_Ob1_c*)(_savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7)))->plyTexPttrnAnm(); */
        /* field_0x7e4 = ((mDoExt_McaMorf*)(this->field_0x330))->play((_savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, 0); */
        /* if (this->field_0x68 >= this->field_0x7b4) goto L_720; */
        /* field_0x7e4 = 1; */
        /* L_720:; */
        /* field_0x7b4 = 0; */
        /* ((dBgS_Acch*)((_savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7) + 820)))->CrrPos(((char*)&g_dComIfG_gameInfo + 4768)); */
        /* L_740:; */
        /* field_0x1b5 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetRoomId((_savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7) + 1052)); */
        /* field_0x1b6 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetPolyColor((_savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7) + 1052)); */
        PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
        /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x78c); */
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x50 + 36));
        /* ((mDoExt_McaMorf*)(this->field_0x330))->calc(); */
        PSMTXCopy((this->field_0x8c + ((this->field_0x6cc & 255) * 48)), (this->field_0x6d4 + 36));
        /* return _restgpr_29(((daNpc_Ob1_c*)(_savegpr_29(this, bool, arg2, arg3, arg4, arg5, arg6, arg7)))->setAttention()); */
}

/* 00000900-00000914       .text anmNum_toResID__11daNpc_Ob1_cFi */
int daNpc_Ob1_c::anmNum_toResID(int anmNum) {
    static const int a_bck_resID_tbl[] = {
        3, 0, 1, 4, 2, 8, 9, 10, 7, 7,
    };
    return a_bck_resID_tbl[anmNum];
}

/* 00000914-00000928       .text btpNum_toResID__11daNpc_Ob1_cFi */
int daNpc_Ob1_c::btpNum_toResID(int anmNum) {
    static const int a_btp_resID_tbl[] = {
        7, 7,
    };
    return a_btp_resID_tbl[anmNum];
}

/* 00000928-00000A34       .text setBtp__11daNpc_Ob1_cFbi */
void daNpc_Ob1_c::setBtp(bool, int) {
    /* field_0x6d8 = ((dRes_control_c*)(((char*)&@stringBase0 + 14)))->getIDRes((((daNpc_Ob1_c*)(_savegpr_29(this, bool, int, arg3, arg4, arg5, arg6, arg7)))->btpNum_toResID(this->field_0x6d4) & 65535), ((char*)&g_dComIfG_gameInfo + -16460), 64); */
    if (this->field_0x6d8 == 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&@stringBase0 + 14)))->getIDRes((((daNpc_Ob1_c*)(_savegpr_29(this, bool, int, arg3, arg4, arg5, arg6, arg7)))->btpNum_toResID(this->field_0x6d4) & 65535), ((char*)&g_dComIfG_gameInfo + -16460), 64)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 17), 511, ((char*)&@stringBase0 + 33)); */
        OSPanic(((char*)&@stringBase0 + 17), 511, ((char*)&@stringBase0 + 54));
    }
    /* if (((mDoExt_btpAnm*)((_savegpr_29(this, bool, int, arg3, arg4, arg5, arg6, arg7) + 1756)))->init(this->field_0x4, this->field_0x6d8, 1, 2, 0, -1) != 0) { */
        /* field_0x6f0 = 0; */
        /* field_0x6f2 = 0; */
        /* return 1; */
    return _restgpr_29(0);
}

/* 00000A34-00000A5C       .text iniTexPttrnAnm__11daNpc_Ob1_cFb */
void daNpc_Ob1_c::iniTexPttrnAnm(bool) {
    return setBtp(bool, (this->field_0x802 & 255));
}

/* 00000A5C-00000B08       .text plyTexPttrnAnm__11daNpc_Ob1_cFv */
void daNpc_Ob1_c::plyTexPttrnAnm() {
        /* if (this->field_0x802 != 0) goto L_9a0; */
        /* if (cLib_calcTimer<s>__FPs((this + 1778), arg1, arg2, arg3, arg4, arg5, arg6, arg7) != 0) goto L_a08; */
        /* L_9a0:; */
        /* field_0x6f0 = (this->field_0x6f0 + 1); */
        /* if (this->field_0x6f0 < (this->field_0x6 & 65535)) goto L_a08; */
        /* if (this->field_0x802 == 0) goto L_9d8; */
        /* goto L_a08; */
        /* L_9d8:; */
        cM_rndF(C_@4428);
        /* field_0x6f0 = 0; */
        /* L_a08:; */
        return C_@4427;
}

/* 00000B08-00000B44       .text setAnm_tex__11daNpc_Ob1_cFSc */
void daNpc_Ob1_c::setAnm_tex(signed char) {
    if ((this->field_0x802 & 255) != (char & 255)) {
        /* field_0x802 = char; */
    }
    return iniTexPttrnAnm(1);
}

/* 00000B44-00000C04       .text setAnm_anm__11daNpc_Ob1_cFPQ211daNpc_Ob1_c9anm_prm_c */
void daNpc_Ob1_c::setAnm_anm(daNpc_Ob1_c::anm_prm_c*) {
    if ((this->field_0x803 & 255) == (base & 255)) {
        return 1;
    }
    dNpc_setAnmIDRes(this->field_0x330, this->field_0xc, ((daNpc_Ob1_c*)(1))->anmNum_toResID((this->field_0x803 & 255)), -1, ((char*)&@stringBase0 + 14));
    /* field_0x7e4 = 0; */
    /* field_0x7e5 = 0; */
    /* field_0x7b4 = 0; */
    return 1;
}

/* 00000C04-00000C70       .text setAnm_NUM__11daNpc_Ob1_cFii */
void daNpc_Ob1_c::setAnm_NUM(int, int) {
    if (int != 0) {
        /* setAnm_tex(this->field_0x1, int, arg3, arg4, arg5, arg6, arg7); */
    }
    return setAnm_anm((((char*)&a_anm_prm_tbl$4448 + 0) + (int * 20)), (int * 20));
}

/* 00000C70-00000CF0       .text setAnm__11daNpc_Ob1_cFv */
void daNpc_Ob1_c::setAnm() {
    if (this->field_0x1 != 0) {
        /* setAnm_tex(this->field_0x1, arg2, arg3, arg4, arg5, arg6, arg7); */
    }
    if (base != 0) {
        setAnm_anm((((char*)&a_anm_prm_tbl$4455 + 0) + ((this->field_0x805 & 255) * 20)));
    }
    return 1;
}

/* 00000CF0-00000CFC       .text chg_anmTag__11daNpc_Ob1_cFv */
void daNpc_Ob1_c::chg_anmTag() {
    /* if (*(u8*)(this+2049) != 255) return; */
}

/* 00000CFC-00000D08       .text control_anmTag__11daNpc_Ob1_cFv */
void daNpc_Ob1_c::control_anmTag() {
    /* if (*(u8*)(this+2049) != 255) return; */
}

/* 00000D08-00000E00       .text chg_anmAtr__11daNpc_Ob1_cFUc */
void daNpc_Ob1_c::chg_anmAtr(unsigned char) {
        /* if (/ * beq * / 1) goto L_cdc; */
        /* if (this->field_0x7cc == 2825) goto L_cc8; */
        /* if (/ * bge * / 1) goto L_c88; */
        /* if (this->field_0x7cc == 2818) goto L_cc8; */
        /* if (/ * bge * / 1) goto L_c74; */
        /* if (this->field_0x7cc == 2814) goto L_cdc; */
        /* if (/ * bge * / 1) goto L_c68; */
        /* if (this->field_0x7cc >= 2812) goto L_cc8; */
        /* goto L_cdc; */
        /* L_c68:; */
        /* if (this->field_0x7cc >= 2816) goto L_cdc; */
        /* goto L_cc8; */
        /* L_c74:; */
        /* if (this->field_0x7cc >= 2823) goto L_cdc; */
        /* if (this->field_0x7cc >= 2821) goto L_cc8; */
        /* goto L_cdc; */
        /* L_c88:; */
        /* if (this->field_0x7cc == 2913) goto L_cc8; */
        /* if (/ * bge * / 1) goto L_cb4; */
        /* if (this->field_0x7cc == 2909) goto L_cc8; */
        /* if (/ * bge * / 1) goto L_cdc; */
        /* if (this->field_0x7cc >= 2830) goto L_cdc; */
        /* if (this->field_0x7cc >= 2828) goto L_cc8; */
        /* goto L_cdc; */
        /* L_cb4:; */
        /* if (this->field_0x7cc >= 2918) goto L_cdc; */
        /* if (this->field_0x7cc >= 2916) goto L_cc8; */
        /* goto L_cdc; */
        /* L_cc8:; */
        /* field_0x807 = 1; */
        /* field_0x7fa = 0; */
        /* field_0x29a = 1; */
        /* L_cdc:; */
        /* if ((char & 16777215) >= 7) goto L_d04; */
        /* if ((char & 16777215) != this->field_0x800) goto L_cf8; */
        /* goto L_d04; */
        /* L_cf8:; */
        /* field_0x800 = char; */
        /* L_d04:; */
        return setAnm_ATR(1);
}

/* 00000E00-00000E8C       .text control_anmAtr__11daNpc_Ob1_cFv */
void daNpc_Ob1_c::control_anmAtr() {
        /* if (this->field_0x800 == 3) goto L_d48; */
        /* if (/ * bge * / 1) goto L_d3c; */
        /* goto L_d8c; */
        /* L_d3c:; */
        /* if (this->field_0x800 == 6) goto L_d6c; */
        /* goto L_d8c; */
        /* L_d48:; */
        /* if (this->field_0x7e4 == 0) goto L_d8c; */
        setAnm_NUM(4, 1);
        /* field_0x800 = 7; */
        /* goto L_d8c; */
        /* L_d6c:; */
        /* if (this->field_0x7e4 == 0) goto L_d8c; */
        ((daNpc_Ob1_c*)(setAnm_NUM(4, 1)))->setAnm_NUM(7, 1);
        /* field_0x800 = 7; */
        /* L_d8c:; */
        return ((daNpc_Ob1_c*)(setAnm_NUM(4, 1)))->setAnm_NUM(7, 1);
}

/* 00000E8C-00000EF4       .text setAnm_ATR__11daNpc_Ob1_cFi */
void daNpc_Ob1_c::setAnm_ATR(int) {
    if (int != 0) {
        /* setAnm_tex(this->field_0x1, arg2, arg3, arg4, arg5, arg6, arg7); */
    }
    return setAnm_anm((((char*)&a_anm_prm_tbl$4520 + 0) + (this->field_0x800 * 20)), (this->field_0x800 * 20));
}

/* 00000EF4-00000FFC       .text anmAtr__11daNpc_Ob1_cFUs */
void daNpc_Ob1_c::anmAtr(unsigned short) {
        /* if (this->field_0x6bc != 2) goto L_e5c; */
        /* if (this == this->field_0x4) goto L_e5c; */
        control_anmTag();
        control_anmAtr();
        /* goto L_efc; */
        /* L_e5c:; */
        /* if (/ * beq * / 1) goto L_ee4; */
        /* if (/ * bge * / 1) goto L_eec; */
        /* if (/ * beq * / 1) goto L_e78; */
        /* goto L_eec; */
        /* L_e78:; */
        /* if (this->field_0x80b != 0) goto L_eac; */
        /* field_0x800 = 255; */
        /* chg_anmAtr(this->field_0x5bcf); */
        /* field_0x80b = (this->field_0x80b + 1); */
        /* L_eac:; */
        /* field_0x5bd0 = 255; */
        /* if (this->field_0x5bd0 == 255) goto L_eec; */
        /* if (this->field_0x801 == this->field_0x5bd0) goto L_eec; */
        chg_anmTag();
        /* goto L_eec; */
        /* L_ee4:; */
        /* field_0x80b = 0; */
        /* L_eec:; */
        control_anmTag();
        /* L_efc:; */
        return control_anmAtr();
}

/* 00000FFC-00001088       .text eventOrder__11daNpc_Ob1_cFv */
void daNpc_Ob1_c::eventOrder() {
        /* if ((this->field_0x804 & 255) == 1) goto L_f34; */
        /* if ((this->field_0x804 & 255) != 2) goto L_f54; */
        /* L_f34:; */
        /* if (this->field_0x804 != 1) goto L_f8c; */
        fopAcM_orderSpeakEvent(this);
        /* goto L_f8c; */
        /* L_f54:; */
        /* if (/ * blt * / 1) goto L_f8c; */
        /* field_0x7d2 = 0; */
        /* L_f8c:; */
        return fopAcM_orderOtherEventId(fopAcM_orderSpeakEvent(this), this->field_0x7d0, 255);
}

/* 00001088-00001120       .text checkOrder__11daNpc_Ob1_cFv */
void daNpc_Ob1_c::checkOrder() {
        /* if (this->field_0xf8 != 2) goto L_ff0; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->startCheck(this->field_0x7d0) == 0) goto L_1020; */
        /* field_0x804 = 0; */
        /* goto L_1020; */
        /* L_ff0:; */
        /* if (0 != 1) goto L_1020; */
        /* if ((this->field_0x804 & 255) == 1) goto L_1010; */
        /* if ((this->field_0x804 & 255) != 2) goto L_1020; */
        /* L_1010:; */
        /* field_0x804 = 0; */
        /* field_0x7f9 = 1; */
        /* L_1020:; */
        /* return ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->startCheck(this->field_0x7d0); */
}

/* 00001120-000011C0       .text chk_talk__11daNpc_Ob1_cFv */
void daNpc_Ob1_c::chk_talk() {
    if (this->field_0x52b8 != 1) {
        /* if (this->field_0x52b8 != 2) goto L_1078; */
        /* if (this->field_0x52b8 == 3) goto L_107c; */
    }
    /* L_1078:; */
    /* L_107c:; */
    if (1 == 0) {
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->ChkPresentEnd() != 0) goto L_10b8; */
    } else {
        /* field_0x7eb = 255; */
    }
    /* L_10b8:; */
    return 1;
}

/* 000011C0-00001200       .text chk_partsNotMove__11daNpc_Ob1_cFv */
void daNpc_Ob1_c::chk_partsNotMove() {
    /* if (this->field_0x7c4 == this->field_0x292) { */
        /* if (this->field_0x7c6 == this->field_0x296) goto L_110c; */
        /* if (this->field_0x7c8 == this->field_0x206) goto L_110c; */
    /* L_110c:; */
    return 1;
}

/* 00001200-000013A0       .text lookBack__11daNpc_Ob1_cFv */
void daNpc_Ob1_c::lookBack() {
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if ((this->field_0x807 & 255) == 2) goto L_1200; */
        /* if (/ * bge * / 1) goto L_11a4; */
        /* if ((this->field_0x807 & 255) >= 1) goto L_11b0; */
        /* goto L_1234; */
        /* L_11a4:; */
        /* if ((this->field_0x807 & 255) >= 4) goto L_1234; */
        /* goto L_1230; */
        /* L_11b0:; */
        dNpc_playerEyePos();
        /* goto L_1234; */
        /* L_1200:; */
        /* goto L_1234; */
        /* L_1230:; */
        /* L_1234:; */
        /* cLib_addCalcAngleS2((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2014), this->field_0x1e, 4, 2048); */
        /* if (this->field_0x29a != 0) goto L_1264; */
        /* field_0x7de = 0; */
        /* L_1264:; */
        /* return _restgpr_28(((dNpc_JntCtrl_c*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 656)))->lookAtTarget((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518))); */
}

/* 000013A0-000014CC       .text next_msgStatus__11daNpc_Ob1_cFPUl */
void daNpc_Ob1_c::next_msgStatus(unsigned long*) {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bgt * / 1) goto L_13c0; */
        base = 2702;
        /* goto L_13c4; */
        base = 2705;
        /* goto L_13c4; */
        base = 2708;
        /* goto L_13c4; */
        base = 2712;
        /* goto L_13c4; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(3616) == 0) goto L_13c0; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(776) != 0) goto L_13c0; */
        base = 2727;
        /* goto L_13c4; */
        /* if (dKy_daynight_check() != 0) goto L_1380; */
        base = 2729;
        /* goto L_13c4; */
        /* L_1380:; */
        base = 2730;
        /* goto L_13c4; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(772) == 0) goto L_13b4; */
        base = 2703;
        /* goto L_13c4; */
        /* L_13b4:; */
        base = 2701;
        /* goto L_13c4; */
        /* L_13c0:; */
        /* L_13c4:; */
        return _restgpr_29(16);
}

/* 000014CC-000017F0       .text getMsg_OB1_0__11daNpc_Ob1_cFv */
void daNpc_Ob1_c::getMsg_OB1_0() {
        /* if (this->field_0x7e8 != 0) goto L_1414; */
        /* if (this->field_0x7e7 == 0) goto L_1660; */
        /* L_1414:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(770) == 0) goto L_1554; */
        /* if (this->field_0x7e9 == 0) goto L_1504; */
        /* if (this->field_0x7e7 != 2) goto L_1474; */
        /* if (this->field_0x7ea == 0) goto L_1464; */
        /* field_0x7ea = 0; */
        /* goto L_1658; */
        /* L_1464:; */
        /* field_0x7ea = 1; */
        /* goto L_1658; */
        /* L_1474:; */
        /* if ((this->field_0x7e9 & 255) == 2) goto L_14bc; */
        /* if (/ * bge * / 1) goto L_1658; */
        /* if ((this->field_0x7e9 & 255) >= 1) goto L_1490; */
        /* goto L_1658; */
        /* L_1490:; */
        /* if (this->field_0x7ea != 1) goto L_14ac; */
        /* field_0x7ea = 0; */
        /* goto L_1658; */
        /* L_14ac:; */
        /* field_0x7ea = 1; */
        /* goto L_1658; */
        /* L_14bc:; */
        /* if ((this->field_0x7ea & 255) != 2) goto L_14dc; */
        /* field_0x7ea = 1; */
        /* goto L_1658; */
        /* L_14dc:; */
        /* if (1 != 1) goto L_14f4; */
        /* field_0x7ea = 0; */
        /* goto L_1658; */
        /* L_14f4:; */
        /* field_0x7ea = 2; */
        /* goto L_1658; */
        /* L_1504:; */
        /* if ((this->field_0x7e7 & 255) <= (this->field_0x7e8 & 255)) goto L_1524; */
        /* goto L_1658; */
        /* L_1524:; */
        /* if ((this->field_0x7e8 & 255) == 2) goto L_1544; */
        /* if (/ * bge * / 1) goto L_154c; */
        /* if ((this->field_0x7e8 & 255) >= 1) goto L_153c; */
        /* goto L_154c; */
        /* L_153c:; */
        /* goto L_1658; */
        /* L_1544:; */
        /* goto L_1658; */
        /* L_154c:; */
        /* goto L_1658; */
        /* L_1554:; */
        /* if ((this->field_0x7e9 & 255) == 2) goto L_15ac; */
        /* if (/ * bge * / 1) goto L_1574; */
        /* if ((this->field_0x7e9 & 255) >= 1) goto L_1580; */
        /* goto L_1650; */
        /* L_1574:; */
        /* if ((this->field_0x7e9 & 255) >= 4) goto L_1650; */
        /* goto L_15f4; */
        /* L_1580:; */
        /* if (this->field_0x7ea != 1) goto L_159c; */
        /* field_0x7ea = 0; */
        /* goto L_1650; */
        /* L_159c:; */
        /* field_0x7ea = 1; */
        /* goto L_1650; */
        /* L_15ac:; */
        /* if ((this->field_0x7ea & 255) != 2) goto L_15cc; */
        /* field_0x7ea = 1; */
        /* goto L_1650; */
        /* L_15cc:; */
        /* if (1 != 1) goto L_15e4; */
        /* field_0x7ea = 0; */
        /* goto L_1650; */
        /* L_15e4:; */
        /* field_0x7ea = 2; */
        /* goto L_1650; */
        /* L_15f4:; */
        /* if ((this->field_0x7ea & 255) != 3) goto L_1614; */
        /* field_0x7ea = 2; */
        /* goto L_1650; */
        /* L_1614:; */
        /* if (2 != 2) goto L_162c; */
        /* field_0x7ea = 1; */
        /* goto L_1650; */
        /* L_162c:; */
        /* if (1 != 1) goto L_1644; */
        /* field_0x7ea = 0; */
        /* goto L_1650; */
        /* L_1644:; */
        /* field_0x7ea = 3; */
        /* L_1650:; */
        /* field_0x7ec = 1; */
        /* L_1658:; */
        /* goto L_16ec; */
        /* L_1660:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(10880) == 0) goto L_16a8; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(11328) != 0) goto L_16d0; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(11328);
        return 2733;
        /* L_16a8:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(11392) != 0) goto L_16d0; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(11392);
        return 2734;
        /* L_16d0:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(772) == 0) goto L_16ec; */
        /* L_16ec:; */
        return 2703;
}

/* 000017F0-0000185C       .text getMsg_OB1_1__11daNpc_Ob1_cFv */
void daNpc_Ob1_c::getMsg_OB1_1() {
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(11296) == 0) {
        return 2728;
    }
    return (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->getEventReg() + 2732);
}

/* 0000185C-0000187C       .text getMsg_OB1_2__11daNpc_Ob1_cFv */
void daNpc_Ob1_c::getMsg_OB1_2() {
    this->getMsg_OB1_1();
}

/* 0000187C-000018EC       .text getMsg__11daNpc_Ob1_cFv */
void daNpc_Ob1_c::getMsg() {
        /* if ((this->field_0x809 & 255) == 1) goto L_17d8; */
        /* if (/ * bge * / 1) goto L_17c0; */
        /* if ((this->field_0x809 & 255) >= 0) goto L_17cc; */
        /* goto L_17ec; */
        /* L_17c0:; */
        /* if ((this->field_0x809 & 255) >= 3) goto L_17ec; */
        /* goto L_17e4; */
        /* L_17cc:; */
        getMsg_OB1_0();
        /* goto L_17ec; */
        /* L_17d8:; */
        ((daNpc_Ob1_c*)(getMsg_OB1_0()))->getMsg_OB1_1();
        /* goto L_17ec; */
        /* L_17e4:; */
        /* L_17ec:; */
        return ((daNpc_Ob1_c*)(((daNpc_Ob1_c*)(getMsg_OB1_0()))->getMsg_OB1_1()))->getMsg_OB1_2();
}

/* 000018EC-0000196C       .text chkAttention__11daNpc_Ob1_cFv */
void daNpc_Ob1_c::chkAttention() {
    if (((dAttention_c*)(((char*)&g_dComIfG_gameInfo + 22536)))->LockonTruth() == 0) {
    }
    return ((this - ((dAttention_c*)(((char*)&g_dComIfG_gameInfo + 22536)))->ActionTarget(0)) >> 5);
}

/* 0000196C-000019C4       .text setAttention__11daNpc_Ob1_cFb */
void daNpc_Ob1_c::setAttention(bool) {
    /* field_0x274 = 0; */
    /* field_0x278 = (this->field_0x1fc + this->field_0x20); */
    /* field_0x27c = 0; */
    if (this->field_0x7f4 == 0) {
    }
    eyePos = 0;
    /* field_0x264 = 0; */
    /* field_0x268 = 0; */
    return this;
}

/* 000019C4-000019F8       .text searchByID__11daNpc_Ob1_cFUi */
void daNpc_Ob1_c::searchByID(fpc_ProcID) {
    fopAcM_SearchByID(fpc_ProcID);
}

/* 000019F8-00001A04       .text partner_srch__11daNpc_Ob1_cFv */
void daNpc_Ob1_c::partner_srch() {
    /* if (*(u8*)(this+2058) != 1) return; */
}

/* 00001A04-00001A34       .text bitCount__11daNpc_Ob1_cFUc */
void daNpc_Ob1_c::bitCount(unsigned char) {
    if (char == 0) {
    }
    return ((0 + 1) & 255);
}

/* 00001A34-00001B14       .text set_pigCnt__11daNpc_Ob1_cFv */
void daNpc_Ob1_c::set_pigCnt() {
    /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* field_0x7e7 = ((daNpc_Ob1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->bitCount(((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->getEventReg()); */
    /* field_0xe4 = 0; */
    /* field_0xe8 = 0; */
    /* fpcEx_Search(((char*)&searchActor_Kb__FPvPv + 0), _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
    /* field_0x7e8 = ((daNpc_Ob1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->bitCount(this->field_0xe8); */
    ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->getEventReg();
    /* field_0x7e9 = ((daNpc_Ob1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->bitCount((this->field_0xe8 & 16777215)); */
    /* field_0x7ea = 0; */
    /* return _restgpr_29(((daNpc_Ob1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->bitCount((this->field_0xe8 & 16777215))); */
}

/* 00001B14-00001BB0       .text ob_setPthPos__11daNpc_Ob1_cFv */
void daNpc_Ob1_c::ob_setPthPos() {
    if (this->field_0x700 != 0) {
        getPoint((this + 1792));
        current = 0;
        /* field_0x1fc = 0; */
        /* field_0x200 = 0; */
        ((dNpc_PathRun_c*)((this + 1792)))->nextIdxAuto();
        getPoint((this + 1792));
        /* field_0x206 = cLib_targetAngleY((this + 504)); */
    }
    return cLib_targetAngleY((this + 504));
}

/* 00001BB0-00001C50       .text get_attPos__11daNpc_Ob1_cFv */
void daNpc_Ob1_c::get_attPos() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        nextPath();
        /* if (/ * beq * / 1) goto L_1b34; */
        /* if (this->field_0x705 != 0) goto L_1b0c; */
        maxPoint();
        /* L_1b0c:; */
        /* L_1b34:; */
        base = 0;
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* return _restgpr_29((this->field_0x8 + (maxPoint() + -1)), this->field_0x8); */
}

/* 00001C50-00001DC0       .text ob_movPass__11daNpc_Ob1_cFv */
void daNpc_Ob1_c::ob_movPass() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x700 == 0) goto L_1bf0; */
        /* if (this->field_0x5 == 0) goto L_1bf0; */
        /* if (((dNpc_PathRun_c*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1792)))->chkPointPass() == 0) goto L_1be8; */
        /* ((dNpc_PathRun_c*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1792)))->nextIdxAuto(); */
        /* L_1be8:; */
        /* goto L_1cbc; */
        /* L_1bf0:; */
        __mi();
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_1c84; */
        /* L_1c84:; */
        /* if (this->field_0x8 != this->field_0x7c0) goto L_1cb8; */
        /* if (this->field_0x700 == 0) goto L_1cb8; */
        /* if (((dNpc_PathRun_c*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1792)))->nextIdxAuto() != 0) goto L_1cb8; */
        /* L_1cb8:; */
        /* L_1cbc:; */
        return _restgpr_29(2);
}

/* 00001DC0-00001E50       .text ob_clcMovSpd__11daNpc_Ob1_cFv */
void daNpc_Ob1_c::ob_clcMovSpd() {
    __mi();
    PSVECSquareMag();
    /* cLib_chaseAngleS((this + 518), cLib_targetAngleY((this + 504), (this + 1960)), this->field_0x28); */
    return cLib_chaseF((this + 596));
}

/* 00001E50-00001F28       .text ob_nMove__11daNpc_Ob1_cFv */
void daNpc_Ob1_c::ob_nMove() {
        /* if (this->field_0x7fc == 1) goto L_1d90; */
        /* goto L_1e0c; */
        /* L_1d90:; */
        ob_clcMovSpd();
        /* if (this->field_0x7fc != 1) goto L_1db4; */
        /* L_1db4:; */
        /* if ((speedF * this->field_0x2c) >= base) goto L_1dc8; */
        /* L_1dc8:; */
        /* field_0x64 = 0; */
        /* if (ob_movPass() == 2) goto L_1dfc; */
        /* if (/ * bge * / 1) goto L_1e0c; */
        /* if (ob_movPass() >= 1) goto L_1df0; */
        /* goto L_1e0c; */
        /* L_1df0:; */
        /* field_0x7f2 = 1; */
        /* goto L_1e0c; */
        /* L_1dfc:; */
        /* field_0x7f2 = 1; */
        /* field_0x7fc = 0; */
        /* L_1e0c:; */
        /* if (this->field_0x7f2 == 0) goto L_1e20; */
        /* field_0x7f0 = 1; */
        /* L_1e20:; */
        return ob_movPass();
}

/* 00001F28-00001F78       .text charDecide__11daNpc_Ob1_cFi */
void daNpc_Ob1_c::charDecide(int) {
        /* field_0x808 = 0; */
        /* field_0x809 = -1; */
        /* if (int == 2) goto L_1e70; */
        /* if (/ * bge * / 1) goto L_1e7c; */
        /* if (int >= 1) goto L_1e64; */
        /* goto L_1e7c; */
        /* L_1e64:; */
        /* field_0x809 = 1; */
        /* goto L_1e84; */
        /* L_1e70:; */
        /* field_0x809 = 2; */
        /* goto L_1e84; */
        /* L_1e7c:; */
        /* field_0x809 = 0; */
        /* L_1e84:; */
        return 1;
}

/* 00001F78-00001FD0       .text event_actionInit__11daNpc_Ob1_cFi */
void daNpc_Ob1_c::event_actionInit(int) {
    /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(int, ((char*)&@stringBase0 + 59), 3, arg4) != 0) { */
    /* return ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP(int, ((char*)&@stringBase0 + 59), 3, arg4); */

/* 00001FD0-00001FE0       .text event_action__11daNpc_Ob1_cFv */
void daNpc_Ob1_c::event_action() {
    /* return *(u8*)(this+2047) != 0; */
}

/* 00001FE0-000020CC       .text privateCut__11daNpc_Ob1_cFi */
void daNpc_Ob1_c::privateCut(int) {
        /* _savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * beq * / 1) goto L_1fc8; */
        /* field_0x7fe = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyActIdx(); */
        /* if ((this->field_0x7fe & 255) != -1) goto L_1f64; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd();
        /* goto L_1fc8; */
        /* L_1f64:; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getIsAddvance() == 0) goto L_1f94; */
        /* if (this->field_0x7fe == 0) goto L_1f88; */
        /* goto L_1f94; */
        /* L_1f88:; */
        /* ((daNpc_Ob1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->event_actionInit(); */
        /* L_1f94:; */
        /* if (this->field_0x7fe == 0) goto L_1fa4; */
        /* goto L_1fb0; */
        /* L_1fa4:; */
        /* ((daNpc_Ob1_c*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->event_action(); */
        /* goto L_1fb4; */
        /* L_1fb0:; */
        /* L_1fb4:; */
        /* if (1 == 0) goto L_1fc8; */
        /* L_1fc8:; */
        return _restgpr_29(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd());
}

/* 000020CC-000020EC       .text endEvent__11daNpc_Ob1_cFv */
void daNpc_Ob1_c::endEvent() {
    /* field_0x800 = 255; */
    return this;
}

/* 000020EC-00002124       .text isEventEntry__11daNpc_Ob1_cFv */
void daNpc_Ob1_c::isEventEntry() {
    /* return ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x708, 0, 0, arg4); */
}

/* 00002124-000021B8       .text event_proc__11daNpc_Ob1_cFi */
void daNpc_Ob1_c::event_proc(int) {
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->endCheck(this->field_0x7d0) == 0) goto L_2090; */
        /* field_0x804 = 1; */
        endEvent();
        /* goto L_20b4; */
        /* L_2090:; */
        /* if (((dNpc_EventCut_c*)((this + 1800)))->cutProc() != 0) goto L_20ac; */
        privateCut(int);
        /* L_20ac:; */
        /* L_20b4:; */
        return lookBack();
}

/* 000021B8-00002264       .text set_action__11daNpc_Ob1_cFM11daNpc_Ob1_cFPCvPvPv_iPv */
void daNpc_Ob1_c::set_action(int (daNpc_Ob1_c::*)(void*), void*) {
        /* if (__ptmf_cmpr((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1780)) == 0) goto L_215c; */
        /* if (__ptmf_test((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1780)) == 0) goto L_2128; */
        /* field_0x80a = 0; */
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_2128:; */
        /* field_0x80a = 0; */
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_215c:; */
        return _restgpr_29(1);
}

/* 00002264-00002288       .text clrSpd__11daNpc_Ob1_cFv */
void daNpc_Ob1_c::clrSpd() {
    /* field_0x7b8 = 0; */
    /* field_0x7bc = 0; */
    speedF = 0;
    gravity = 0;
    return this;
}

/* 00002288-00002488       .text setStt__11daNpc_Ob1_cFSc */
void daNpc_Ob1_c::setStt(signed char) {
        /* ((daNpc_Ob1_c*)(_savegpr_29(this, char, arg2, arg3, arg4, arg5, arg6, arg7)))->searchByID(this->field_0x774); */
        /* field_0x7d6 = 0; */
        /* if ((this->field_0x805 & 255) > 6) goto L_237c; */
        /* field_0x7da = cLib_getRndValue<i>__Fii(90, 180); */
        /* if ((this->field_0x805 & 255) == 2) goto L_229c; */
        /* if ((this->field_0x805 & 255) == 4) goto L_2254; */
        /* if (/ * bge * / 1) goto L_2234; */
        /* if ((this->field_0x805 & 255) == 1) goto L_2240; */
        /* goto L_228c; */
        /* L_2234:; */
        /* if ((this->field_0x805 & 255) >= 6) goto L_228c; */
        /* goto L_2284; */
        /* L_2240:; */
        /* field_0x807 = 3; */
        /* goto L_228c; */
        /* L_2254:; */
        /* field_0x807 = 2; */
        get_attPos();
        /* field_0x79c = 0; */
        /* field_0x7a0 = 0; */
        /* field_0x7a4 = 0; */
        /* goto L_228c; */
        /* L_2284:; */
        /* field_0x807 = 1; */
        /* L_228c:; */
        /* field_0x29a = 1; */
        /* field_0x7fa = 0; */
        /* L_229c:; */
        /* field_0x804 = 0; */
        /* field_0x7fc = 0; */
        /* ((daNpc_Ob1_c*)(_savegpr_29(this, char, arg2, arg3, arg4, arg5, arg6, arg7)))->clrSpd(); */
        /* goto L_237c; */
        /* field_0x807 = 1; */
        /* field_0x29a = 1; */
        /* ((daNpc_Ob1_c*)(_savegpr_29(this, char, arg2, arg3, arg4, arg5, arg6, arg7)))->clrSpd(); */
        /* field_0x800 = 255; */
        /* if ((this->field_0x805 & 255) == 5) goto L_22ec; */
        /* L_22ec:; */
        /* ((daNpc_Ob1_c*)(_savegpr_29(this, char, arg2, arg3, arg4, arg5, arg6, arg7)))->set_pigCnt(); */
        /* goto L_237c; */
        /* getPoint((_savegpr_29(this, char, arg2, arg3, arg4, arg5, arg6, arg7) + 1792)); */
        /* field_0x7a8 = 0; */
        /* field_0x7ac = 0; */
        /* field_0x7b0 = 0; */
        /* field_0x807 = 0; */
        /* field_0x7fa = 1; */
        /* field_0x804 = 0; */
        /* field_0x7fc = 1; */
        /* field_0x7f2 = 0; */
        gravity = 0;
        /* field_0x7b8 = 0; */
        /* field_0x7bc = 0; */
        /* field_0x7c0 = 0; */
        /* goto L_237c; */
        /* field_0x800 = 255; */
        /* goto L_2384; */
        /* L_237c:; */
        /* L_2384:; */
        /* return _restgpr_29(((daNpc_Ob1_c*)(_savegpr_29(this, char, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm()); */
}

/* 00002488-00002564       .text wait_1__11daNpc_Ob1_cFv */
void daNpc_Ob1_c::wait_1() {
        /* if (this->field_0x7f9 == 0) goto L_23dc; */
        /* if (chk_talk() == 0) goto L_23d4; */
        setStt(2);
        /* L_23d4:; */
        return 1;
        /* L_23dc:; */
        /* if (this->field_0x6bc != 1) goto L_2410; */
        /* field_0x6bc = 2; */
        ((daNpc_Ob1_c*)(1))->setStt(6);
        /* field_0x807 = 3; */
        return 1;
        /* L_2410:; */
        /* field_0x804 = 2; */
        /* if (this->field_0x7f8 == 0) goto L_242c; */
        /* field_0x7d6 = 60; */
        /* L_242c:; */
        /* if (cLib_calcTimer<s>__FPs((this + 2006)) == 0) goto L_2448; */
        /* field_0x807 = 1; */
        /* goto L_2460; */
        /* L_2448:; */
        /* field_0x807 = 3; */
        /* field_0x29a = 1; */
        /* L_2460:; */
        return 1;
}

/* 00002564-0000264C       .text wait_2__11daNpc_Ob1_cFv */
void daNpc_Ob1_c::wait_2() {
        /* if (this->field_0x7f9 == 0) goto L_24b8; */
        /* if (chk_talk() == 0) goto L_24b0; */
        setStt(2);
        /* L_24b0:; */
        return 1;
        /* L_24b8:; */
        /* field_0x804 = 2; */
        /* if (this->field_0x7f8 == 0) goto L_24d4; */
        /* field_0x7d6 = 60; */
        /* L_24d4:; */
        /* if (cLib_calcTimer<s>__FPs((this + 2006)) == 0) goto L_24f0; */
        /* field_0x807 = 1; */
        /* goto L_2548; */
        /* L_24f0:; */
        /* if (cLib_calcTimer<s>__FPs((this + 2010)) != 0) goto L_2514; */
        setStt(3);
        return 1;
        /* L_2514:; */
        /* field_0x807 = 2; */
        get_attPos();
        /* field_0x79c = 0; */
        /* field_0x7a0 = 0; */
        /* field_0x7a4 = 0; */
        /* field_0x29a = 1; */
        /* L_2548:; */
        return 1;
}

/* 0000264C-000026F0       .text wait_3__11daNpc_Ob1_cFv */
void daNpc_Ob1_c::wait_3() {
        /* if (this->field_0x7f9 == 0) goto L_25a0; */
        /* if (chk_talk() == 0) goto L_2598; */
        setStt(2);
        /* L_2598:; */
        return 1;
        /* L_25a0:; */
        /* if (this->field_0x7e4 == 0) goto L_25d8; */
        /* field_0x7e5 = (this->field_0x7e5 + 1); */
        /* if ((this->field_0x7e5 & 255) <= 3) goto L_25d8; */
        /* ((daNpc_Ob1_c*)(1))->setStt(this->field_0x806); */
        return 1;
        /* L_25d8:; */
        /* field_0x804 = 2; */
        /* field_0x807 = 1; */
        /* field_0x29a = 1; */
        return 1;
}

/* 000026F0-00002808       .text walk_1__11daNpc_Ob1_cFv */
void daNpc_Ob1_c::walk_1() {
        /* if (this->field_0x7f9 == 0) goto L_2660; */
        setAnm_NUM(0, 1);
        speedF = 0;
        /* if (chk_talk() == 0) goto L_2658; */
        setStt(2);
        /* L_2658:; */
        return 1;
        /* L_2660:; */
        /* field_0x804 = 2; */
        /* if (this->field_0x7f8 == 0) goto L_267c; */
        /* field_0x7d6 = 20; */
        /* L_267c:; */
        /* if (cLib_calcTimer<s>__FPs((this + 2006)) == 0) goto L_2698; */
        /* field_0x807 = 1; */
        /* goto L_26a0; */
        /* L_2698:; */
        /* field_0x807 = 0; */
        /* L_26a0:; */
        /* if (this->field_0x7f2 == 0) goto L_26d4; */
        /* if (this->field_0x705 != 0) goto L_26c0; */
        ((dNpc_PathRun_c*)((this + 1792)))->nextIdxAuto();
        /* L_26c0:; */
        setStt(4);
        return 1;
        /* L_26d4:; */
        /* field_0x7f2 = 0; */
        getPoint((this + 1792));
        /* field_0x7a8 = 0; */
        /* field_0x7ac = 0; */
        /* field_0x7b0 = 0; */
        return 1;
}

/* 00002808-00002A58       .text talk_1__11daNpc_Ob1_cFv */
void daNpc_Ob1_c::talk_1() {
        /* ((daNpc_Ob1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->chk_partsNotMove(); */
        /* if ((this->field_0x804 & 255) == 1) goto L_2754; */
        /* if ((this->field_0x804 & 255) < 3) goto L_275c; */
        /* L_2754:; */
        return 1;
        /* L_275c:; */
        /* if (this->field_0x6b0 == 0) goto L_2774; */
        /* goto L_277c; */
        /* L_2774:; */
        /* field_0x7e2 = 0; */
        /* L_277c:; */
        /* if (this->field_0x7ed == 0) goto L_27d4; */
        /* if (this->field_0x7ed != 65535) goto L_27d4; */
        /* field_0x6a4 = _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x6ac = fopMsgM_messageSet(this->field_0x6a4, this->field_0x5c1c); */
        /* field_0x6b0 = 0; */
        /* goto L_27e8; */
        /* L_27d4:; */
        /* field_0x7cc = -1; */
        /* ((fopNpc_npc_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->talk(1); */
        /* L_27e8:; */
        /* if (this->field_0x6b0 == 0) goto L_2950; */
        /* if (this->field_0xf8 == 6) goto L_2950; */
        /* if (/ * bge * / 1) goto L_2810; */
        /* if (this->field_0xf8 == 2) goto L_2950; */
        /* goto L_2950; */
        /* L_2810:; */
        /* if (this->field_0xf8 == 19) goto L_281c; */
        /* goto L_2950; */
        /* L_281c:; */
        /* if (this->field_0x7ea == 0) goto L_2850; */
        /* field_0x804 = 3; */
        /* ((daNpc_Ob1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm_NUM(0, 1); */
        /* ((daNpc_Ob1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->endEvent(); */
        /* goto L_2954; */
        /* L_2850:; */
        base = (3 | ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->getEventReg());
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->setEventReg(((char*)&l_check_flg + -18689), ((3 | ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->getEventReg()) & 16777215));
        /* if (this->field_0x6a4 == 2727) goto L_28d0; */
        /* if (/ * bge * / 1) goto L_28ac; */
        /* if (this->field_0x6a4 == 2702) goto L_28c0; */
        /* goto L_28ec; */
        /* L_28ac:; */
        /* if (this->field_0x6a4 >= 2733) goto L_28ec; */
        /* if (this->field_0x6a4 >= 2729) goto L_28e0; */
        /* goto L_28ec; */
        /* L_28c0:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(772);
        /* goto L_28ec; */
        /* L_28d0:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(776);
        /* goto L_28ec; */
        /* L_28e0:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(11296);
        /* L_28ec:; */
        /* if (this->field_0x7ec == 0) goto L_2904; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(770);
        /* L_2904:; */
        /* field_0x7eb = 255; */
        /* field_0x7f9 = 0; */
        /* if (this->field_0x809 == 0) goto L_2924; */
        /* goto L_2934; */
        /* L_2924:; */
        /* ((daNpc_Ob1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setStt(5); */
        /* goto L_2948; */
        /* L_2934:; */
        /* ((daNpc_Ob1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setStt(this->field_0x806); */
        /* field_0x7d6 = 60; */
        /* L_2948:; */
        /* ((daNpc_Ob1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->endEvent(); */
        /* L_2950:; */
        /* L_2954:; */
        /* return _restgpr_29((((daNpc_Ob1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->chk_partsNotMove() & 16777215)); */
}

/* 00002A58-00002B60       .text manzai__11daNpc_Ob1_cFv */
void daNpc_Ob1_c::manzai() {
        /* if (this->field_0x6bc == 3) goto L_2a3c; */
        /* if (/ * bge * / 1) goto L_2a58; */
        /* if (this->field_0x6bc >= 2) goto L_29ac; */
        /* goto L_2a58; */
        /* L_29ac:; */
        /* searchByID(this->field_0x6b4); */
        /* if (this == this->field_0x4) goto L_2a18; */
        /* if (this->field_0x800 == 255) goto L_2a58; */
        /* field_0x807 = 3; */
        /* field_0x29a = 1; */
        setAnm();
        /* field_0x805 = 6; */
        /* field_0x800 = 255; */
        /* goto L_2a58; */
        /* L_2a18:; */
        /* goto L_2a58; */
        /* L_2a3c:; */
        /* setStt(this->field_0x806); */
        /* field_0x6bc = 0; */
        /* L_2a58:; */
        return 1;
}

/* 00002B60-00002C54       .text wait_action1__11daNpc_Ob1_cFPv */
void daNpc_Ob1_c::wait_action1(void*) {
        /* if ((this->field_0x80a & 255) >= 4) goto L_2aa8; */
        /* if ((this->field_0x80a & 255) == 0) goto L_2ab4; */
        /* if (/ * bge * / 1) goto L_2ad4; */
        /* goto L_2b50; */
        /* L_2aa8:; */
        /* if ((this->field_0x80a & 255) == 9) goto L_2b50; */
        /* goto L_2b50; */
        /* L_2ab4:; */
        ob_setPthPos();
        setStt(3);
        /* field_0x80a = (this->field_0x80a + 1); */
        /* goto L_2b50; */
        /* L_2ad4:; */
        /* field_0x7f8 = ((daNpc_Ob1_c*)(this->field_0x80a))->chkAttention(); */
        /* if ((this->field_0x805 & 255) == 4) goto L_2b0c; */
        /* if (/ * bge * / 1) goto L_2b00; */
        /* if ((this->field_0x805 & 255) == 2) goto L_2b3c; */
        /* if (/ * bge * / 1) goto L_2b2c; */
        /* goto L_2b48; */
        /* L_2b00:; */
        /* if ((this->field_0x805 & 255) >= 6) goto L_2b48; */
        /* goto L_2b1c; */
        /* L_2b0c:; */
        /* field_0x7f4 = wait_2(); */
        /* goto L_2b48; */
        /* L_2b1c:; */
        /* field_0x7f4 = wait_3(); */
        /* goto L_2b48; */
        /* L_2b2c:; */
        /* field_0x7f4 = walk_1(); */
        /* goto L_2b48; */
        /* L_2b3c:; */
        /* field_0x7f4 = talk_1(); */
        /* L_2b48:; */
        lookBack();
        /* L_2b50:; */
        return 1;
}

/* 00002C54-00002D2C       .text wait_action2__11daNpc_Ob1_cFPv */
void daNpc_Ob1_c::wait_action2(void*) {
        /* if ((this->field_0x80a & 255) >= 4) goto L_2b9c; */
        /* if ((this->field_0x80a & 255) == 0) goto L_2ba8; */
        /* if (/ * bge * / 1) goto L_2bc0; */
        /* goto L_2c28; */
        /* L_2b9c:; */
        /* if ((this->field_0x80a & 255) == 9) goto L_2c28; */
        /* goto L_2c28; */
        /* L_2ba8:; */
        /* setStt(1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x80a = (this->field_0x80a + 1); */
        /* goto L_2c28; */
        /* L_2bc0:; */
        /* field_0x7f8 = ((daNpc_Ob1_c*)(this->field_0x80a))->chkAttention(); */
        /* if ((this->field_0x805 & 255) == 2) goto L_2c04; */
        /* if (/ * bge * / 1) goto L_2be8; */
        /* if ((this->field_0x805 & 255) >= 1) goto L_2bf4; */
        /* goto L_2c20; */
        /* L_2be8:; */
        /* if ((this->field_0x805 & 255) == 6) goto L_2c14; */
        /* goto L_2c20; */
        /* L_2bf4:; */
        /* field_0x7f4 = wait_1(); */
        /* goto L_2c20; */
        /* L_2c04:; */
        /* field_0x7f4 = talk_1(); */
        /* goto L_2c20; */
        /* L_2c14:; */
        /* field_0x7f4 = manzai(); */
        /* L_2c20:; */
        lookBack();
        /* L_2c28:; */
        return 1;
}

/* 00002D2C-00002E68       .text demo__11daNpc_Ob1_cFv */
void daNpc_Ob1_c::demo() {
        /* if (demoActorID != 0) goto L_2c78; */
        /* if (this->field_0x7fb == 0) goto L_2d64; */
        /* field_0x7fb = 0; */
        /* goto L_2d64; */
        /* L_2c78:; */
        /* field_0x7fb = 1; */
        ((dDemo_object_c*)((this->field_0x5abc + 32)))->getActor(demoActorID);
        /* if (this->field_0x6d8 == 0) goto L_2ccc; */
        /* field_0x6f0 = (this->field_0x6f0 + 1); */
        /* if (this->field_0x6f0 < (this->field_0x6 & 65535)) goto L_2ccc; */
        /* L_2ccc:; */
        /* if (((dDemo_actor_c*)(((dDemo_object_c*)((this->field_0x5abc + 32)))->getActor(demoActorID)))->getP_BtpData(((char*)&@stringBase0 + 14), this->field_0x6) == 0) goto L_2d38; */
        /* field_0x6d8 = ((dDemo_actor_c*)(((dDemo_object_c*)((this->field_0x5abc + 32)))->getActor(demoActorID)))->getP_BtpData(((char*)&@stringBase0 + 14), this->field_0x6); */
        /* if (((mDoExt_btpAnm*)((this + 1756)))->init(this->field_0x4, this->field_0x6d8, 1, 2, 0, -1, 1) == 0) goto L_2d38; */
        /* field_0x802 = 2; */
        /* field_0x6f0 = 0; */
        /* L_2d38:; */
        dDemo_setDemoData(this, 106, this->field_0x330, ((char*)&@stringBase0 + 14), 0, 0, 0, 0);
        /* L_2d64:; */
        /* return this->field_0x7fb; */
}

/* 00002E68-00002F18       .text shadowDraw__11daNpc_Ob1_cFv */
void daNpc_Ob1_c::shadowDraw() {
    /* field_0x6d0 = dComIfGd_setShadow(this->field_0x6d0, 1, this->field_0x50); */
    if (this->field_0x6d0 != 0) {
    }
    /* return ((dDlst_shadowControl_c*)(((char*)&g_dComIfG_gameInfo + 24416)))->addReal(this->field_0x6d0, this->field_0x6d4); */
}

/* 00002F18-0000300C       .text _draw__11daNpc_Ob1_cFv */
BOOL daNpc_Ob1_c::_draw() {
    /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (this->field_0x7ee == 0) {
        /* if (this->field_0x7f1 != 0) goto L_2e74; */
    }
    return 1;
    /* L_2e74:; */
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(0, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x50, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
    /* ((mDoExt_McaMorf*)(this->field_0x330))->entryDL(); */
    /* ((mDoExt_btpAnm*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1756)))->entry(this->field_0x4, this->field_0x6f0); */
    /* mDoExt_modelEntryDL(this->field_0x6d4); */
    /* ((J3DMaterialTable*)((this->field_0x4 + 88)))->removeTexNoAnimator(this->field_0x6e4); */
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x6d4, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
    /* ((daNpc_Ob1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->shadowDraw(); */
    /* dSnap_RegistFig(79, _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), C_@4402); */
    return _restgpr_28(1);
}

/* 0000300C-000031F0       .text _execute__11daNpc_Ob1_cFv */
BOOL daNpc_Ob1_c::_execute() {
        /* if (this->field_0x7f3 != 0) goto L_2f78; */
        /* field_0x778 = 0; */
        /* field_0x77c = 0; */
        /* field_0x780 = 0; */
        /* field_0x7f3 = 1; */
        /* L_2f78:; */
        /* ((dNpc_JntCtrl_c*)((this + 656)))->setParam(this->field_0x14, this->field_0x16, this->field_0x18, this->field_0x1a, this->field_0xc, this->field_0xe, this->field_0x10); */
        /* if (this->field_0x7ee == 0) goto L_2fd4; */
        /* if (demoActorID != 0) goto L_2fd4; */
        return 1;
        /* L_2fd4:; */
        /* field_0x7f0 = 0; */
        /* field_0x7ee = 0; */
        partner_srch();
        checkOrder();
        /* if (demo() != 0) goto L_30b4; */
        /* if (this->field_0x529a == 0) goto L_3030; */
        /* if (this->field_0xf8 == 1) goto L_3030; */
        /* L_3030:; */
        /* if (isEventEntry() < 0) goto L_3044; */
        event_proc(isEventEntry());
        /* goto L_3058; */
        /* L_3044:; */
        __ptmf_scall(this, 0);
        /* L_3058:; */
        /* if (this->field_0x7f0 != 0) goto L_3078; */
        ob_nMove();
        fopAcM_posMoveF(this, (this + 1336));
        /* L_3078:; */
        /* if (this->field_0x7ef != 0) goto L_30b4; */
        /* L_30b4:; */
        eventOrder();
        setMtx(0);
        /* if (this->field_0x7fb != 0) goto L_30ec; */
        setCollision(C_@5447);
        /* L_30ec:; */
        return 1;
}

/* 000031F0-0000324C       .text _delete__11daNpc_Ob1_cFv */
BOOL daNpc_Ob1_c::_delete() {
    /* dComIfG_resDelete((this + 1732), ((char*)&@stringBase0 + 14), arg2); */
    if (heap != 0) {
        /* if (this->field_0x330 != 0) goto L_3148; */
        /* ((mDoExt_McaMorf*)(this->field_0x330))->stopZelAnime(); */
    }
    /* L_3148:; */
    return 1;
}

/* 0000324C-0000326C       .text CheckCreateHeap__FP10fopAc_ac_c */
static BOOL CheckCreateHeap(fopAc_ac_c* i_this) {
    ((daNpc_Ob1_c*)i_this)->CreateHeap();
    return TRUE;
}

/* 0000326C-0000338C       .text _create__11daNpc_Ob1_cFv */
cPhs_State daNpc_Ob1_c::_create() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_31c4; */
        /* if (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_31b8; */
        __ct();
        /* L_31b8:; */
        /* L_31c4:; */
        /* if (dComIfG_resLoad((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1732), ((char*)&@stringBase0 + 14)) == 4) goto L_31e8; */
        /* goto L_3288; */
        /* L_31e8:; */
        /* if (((daNpc_Ob1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->charDecide((this->field_0xb0 & 16777215)) != 0) goto L_3208; */
        return 5;
        /* L_3208:; */
        /* if (fopAcM_entrySolidHeap(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), ((char*)&CheckCreateHeap__FP10fopAc_ac_c + 0), ((char*)&a_size_tbl$5467 + 0)) != 0) goto L_3240; */
        return 5;
        /* L_3240:; */
        cullMtx = (this->field_0x50 + 36);
        /* fopAcM_setCullSizeBox(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (((daNpc_Ob1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->createInit() == 0) goto L_3288; */
        /* L_3288:; */
        /* return _restgpr_29(dComIfG_resLoad((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1732), ((char*)&@stringBase0 + 14))); */
}

/* 000037BC-000039D0       .text create_Anm__11daNpc_Ob1_cFv */
void daNpc_Ob1_c::create_Anm() {
    /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    ((dRes_control_c*)(((char*)&@stringBase0 + 14)))->getIDRes(5);
    if (/* bne */ 1) {
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&@stringBase0 + 14)))->getIDRes(5)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 17), 2423, ((char*)&@stringBase0 + 72));
        OSPanic(((char*)&@stringBase0 + 17), 2423, ((char*)&@stringBase0 + 54));
    }
    __nw(180);
    if (/* beq */ 1) {
    }
    /* field_0x330 = __ct(((dRes_control_c*)(((char*)&@stringBase0 + 14)))->getIDRes(3), 1); */
    if (this->field_0x330 == 0) {
        return 0;
    }
    if (this->field_0x50 == 0) {
        /* field_0x330 = 0; */
        return 0;
    }
    /* field_0x6cc = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 87)); */
    if (this->field_0x6cc != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 87))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 17), 2443, ((char*)&@stringBase0 + 92)); */
        OSPanic(((char*)&@stringBase0 + 17), 2443, ((char*)&@stringBase0 + 54));
    }
    /* field_0x6cd = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 111)); */
    if (this->field_0x6cd != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 111))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 17), 2446, ((char*)&@stringBase0 + 120)); */
    }
    return _restgpr_28(OSPanic(((char*)&@stringBase0 + 17), 2446, ((char*)&@stringBase0 + 54)));
}

/* 000039D0-00003A9C       .text create_hed_Mdl__11daNpc_Ob1_cFv */
void daNpc_Ob1_c::create_hed_Mdl() {
    /* ((dRes_control_c*)(((char*)&@stringBase0 + 14)))->getIDRes((((this->field_0x808 & 255) << 2) & 65535), ((char*)&g_dComIfG_gameInfo + -16460), 64, arg4, arg5); */
    if (/* bne */ 1) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&@stringBase0 + 14)))->getIDRes((((this->field_0x808 & 255) << 2) & 65535), ((char*)&g_dComIfG_gameInfo + -16460), 64, arg4, arg5)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 17), 2465, ((char*)&@stringBase0 + 72)); */
    }
    /* field_0x6d4 = mDoExt_J3DModel(OSPanic(((char*)&@stringBase0 + 17), 2465, ((char*)&@stringBase0 + 54))); */
    return mDoExt_J3DModel(OSPanic(((char*)&@stringBase0 + 17), 2465, ((char*)&@stringBase0 + 54)));
}

/* 00003A9C-00003BE8       .text CreateHeap__11daNpc_Ob1_cFv */
void daNpc_Ob1_c::CreateHeap() {
    /* ((daNpc_Ob1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->create_Anm(); */
    if (/* bne */ 1) {
        return 0;
    }
    /* if (((daNpc_Ob1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->create_hed_Mdl() == 0) { */
        /* field_0x330 = 0; */
        /* return 0; */
    /* if (((daNpc_Ob1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->iniTexPttrnAnm(0) != 0) { */
        /* field_0x330 = 0; */
        /* return 0; */
    /* goto L_3a88; */
    /* L_3a44:; */
    if ((0 & 65535) != (this->field_0x6cc & 255)) {
        /* if ((0 & 65535) == (this->field_0x6cd & 255)) goto L_3a84; */
    }
    /* field_0x8 = 0; */
    /* L_3a84:; */
    /* L_3a88:; */
    /* if (((0 + 1) & 65535) >= this->field_0x28) goto L_3a44; */
    /* field_0x14 = _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* ((dBgS_AcchCir*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1272)))->SetWall(((char*)&nodeCallBack_Ob1__FP7J3DNodei + 0), (0 + 1)); */
    /* ((dBgS_Acch*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 820)))->Set((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 484), _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 1, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1272), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 544), 0); */
    return _restgpr_29(1);
}

/* 00003BE8-00003C08       .text daNpc_Ob1_Create__FP10fopAc_ac_c */
static cPhs_State daNpc_Ob1_Create(fopAc_ac_c* i_this) {
    return ((daNpc_Ob1_c*)i_this)->_create();

/* 00003C08-00003C28       .text daNpc_Ob1_Delete__FP11daNpc_Ob1_c */
static BOOL daNpc_Ob1_Delete(daNpc_Ob1_c* i_this) {
    return ((daNpc_Ob1_c*)i_this)->_delete();

/* 00003C28-00003C48       .text daNpc_Ob1_Execute__FP11daNpc_Ob1_c */
static BOOL daNpc_Ob1_Execute(daNpc_Ob1_c* i_this) {
    return ((daNpc_Ob1_c*)i_this)->_execute();

/* 00003C48-00003C68       .text daNpc_Ob1_Draw__FP11daNpc_Ob1_c */
static BOOL daNpc_Ob1_Draw(daNpc_Ob1_c* i_this) {
    return ((daNpc_Ob1_c*)i_this)->_draw();

/* 00003C68-00003C70       .text daNpc_Ob1_IsDelete__FP11daNpc_Ob1_c */
static BOOL daNpc_Ob1_IsDelete(daNpc_Ob1_c*) {
    return 1;

static actor_method_class l_daNpc_Ob1_Method = {
    (process_method_func)daNpc_Ob1_Create,
    (process_method_func)daNpc_Ob1_Delete,
    (process_method_func)daNpc_Ob1_Execute,
    (process_method_func)daNpc_Ob1_IsDelete,
    (process_method_func)daNpc_Ob1_Draw,
};

actor_process_profile_definition g_profile_NPC_OB1 = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0007,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_NPC_OB1_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daNpc_Ob1_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_NPC_OB1_e,
    /* Actor SubMtd */ &l_daNpc_Ob1_Method,
    /* Status       */ 0x08 | fopAcStts_SHOWMAP_e | fopAcStts_NOCULLEXEC_e | fopAcStts_CULL_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_NPC_e,
    /* Cull Type    */ fopAc_CULLBOX_CUSTOM_e,
};

/* 由 fix_decomp_braces.py 补齐：反编译产物末尾缺 6 个 } */
}}}}}}

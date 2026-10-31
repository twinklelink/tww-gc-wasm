/**
 * d_a_npc_de1.cpp
 * NPC - Deku Tree
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_npc_de1.h"

/* 000000EC-00000144       .text __ct__15daNpc_De1_HIO_cFv */
daNpc_De1_HIO_c::daNpc_De1_HIO_c() {
    /* __ct__15daNpc_De1_HIO_cFv: 无实义指令 */
}

/* 00000144-000001BC       .text searchActor_leafLift__FPvPv */
void searchActor_leafLift(void*, void*) {
    if (/* beq */ 1) {
        /* field_0x4 = 0; */
        __dt();
    }
    if (/* ble */ 1) {
    }
    return __dl(__dt());
}

/* 000001BC-0000033C       .text createInit__11daNpc_De1_cFv */
void daNpc_De1_c::createInit() {
    return __dl(this);
}

/* 0000033C-00000550       .text setMtx__11daNpc_De1_cFv */
void daNpc_De1_c::setMtx() {
    if (/* beq */ 1) {
        base = 0;
    }
    /* if (arg1 != 0) { */
    return __dl(__vt__34JPACallBackBase<P14JPABaseEmitter>);
}

/* 00000550-00000658       .text anmResID__11daNpc_De1_cFiPiPi */
void daNpc_De1_c::anmResID(int, int*, int*) {
    /* _savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (/* blt */ 1) {
        /* if (/ * bge * / 1) goto L_498; */
    }
    /* L_498:; */
    if (1 != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(_savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 4), 284, ((char*)&@stringBase0 + 20)); */
        OSPanic(((char*)&@stringBase0 + 4), 284, ((char*)&@stringBase0 + 50));
    }
    if (/* beq */ 1) {
        /* if (/ * beq * / 1) goto L_4f0; */
    }
    /* L_4f0:; */
    if (1 != 0) {
        ((JUTAssertion*)(((JUTAssertion*)(OSPanic(((char*)&@stringBase0 + 4), 284, ((char*)&@stringBase0 + 50))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 4), 285, ((char*)&@stringBase0 + 55));
        OSPanic(((char*)&@stringBase0 + 4), 285, ((char*)&@stringBase0 + 50));
    }
    base = 1;
    return _restgpr_29(1);
}

/* 00000658-00000744       .text setAnm_anm__11daNpc_De1_cFPQ211daNpc_De1_c9anm_prm_c */
void daNpc_De1_c::setAnm_anm(daNpc_De1_c::anm_prm_c*) {
        /* if (/ * blt * / 1) goto L_63c; */
        /* if ((this->field_0x818 & 255) == 0) goto L_63c; */
        /* if (this->field_0x330 == 0) goto L_624; */
        anmResID((this->field_0x818 & 255));
        /* if (/ * blt * / 1) goto L_600; */
        /* dNpc_setAnmIDRes(this->field_0x330, this->field_0xc); */
        /* L_600:; */
        /* if (this->field_0x818 != 3) goto L_618; */
        set_pa_happa();
        /* goto L_620; */
        /* L_618:; */
        del_pa_happa();
        /* L_620:; */
        /* L_624:; */
        /* field_0x790 = 0; */
        /* field_0x7a5 = 0; */
        /* field_0x7a4 = 0; */
        /* L_63c:; */
        return 1;
}

/* 00000744-00000774       .text setAnm_NUM__11daNpc_De1_cFi */
void daNpc_De1_c::setAnm_NUM(int) {
    return setAnm_anm((((char*)&a_anm_prm_tbl$4300 + 0) + (int << 4)), (int << 4));
}

/* 00000774-000007AC       .text setAnm__11daNpc_De1_cFv */
void daNpc_De1_c::setAnm() {
    return setAnm_anm((((char*)&a_anm_prm_tbl$4305 + 0) + ((this->field_0x81a & 255) << 4)), ((this->field_0x81a & 255) << 4));
}

/* 000007AC-000007B8       .text chngAnmTag__11daNpc_De1_cFv */
void daNpc_De1_c::chngAnmTag() {
    /* if (*(u8*)(this+2071) != 0) return; */
}

/* 000007B8-000007C4       .text ctrlAnmTag__11daNpc_De1_cFv */
void daNpc_De1_c::ctrlAnmTag() {
    /* if (*(u8*)(this+2070) != 0) return; */
}

/* 000007C4-00000800       .text chngAnmAtr__11daNpc_De1_cFUc */
void daNpc_De1_c::chngAnmAtr(unsigned char) {
    if ((char & 16777215) < 4) {
        /* if ((char & 16777215) != this->field_0x816) goto L_704; */
        /* field_0x816 = char; */
    }
    /* L_704:; */
    return setAnm_ATR();
}

/* 00000800-00000848       .text ctrlAnmAtr__11daNpc_De1_cFv */
void daNpc_De1_c::ctrlAnmAtr() {
    if (this->field_0x816 != 3) {
        /* if (/ * bge * / 1) goto L_74c; */
    } else {
        /* if (this->field_0x7a4 == 0) goto L_74c; */
        /* field_0x816 = 0; */
    }
    /* L_74c:; */
    return setAnm_ATR();
}

/* 00000848-0000087C       .text setAnm_ATR__11daNpc_De1_cFv */
void daNpc_De1_c::setAnm_ATR() {
    return setAnm_anm((((char*)&a_anm_prm_tbl$4348 + 0) + (this->field_0x816 << 4)), (this->field_0x816 << 4));
}

/* 0000087C-00000938       .text anmAtr__11daNpc_De1_cFUs */
void daNpc_De1_c::anmAtr(unsigned short) {
        /* if ((short & 65535) != 6) goto L_818; */
        /* if (this->field_0x81f != 0) goto L_7e0; */
        /* field_0x817 = 255; */
        /* chngAnmAtr(this->field_0x5bcf); */
        /* field_0x81f = (this->field_0x81f + 1); */
        /* L_7e0:; */
        /* if (this->field_0x5bd0 == 255) goto L_828; */
        /* if (this->field_0x5bd0 == this->field_0x817) goto L_828; */
        /* field_0x5bd0 = 255; */
        chngAnmTag();
        /* goto L_828; */
        /* L_818:; */
        /* if (255 != 14) goto L_828; */
        /* field_0x81f = 0; */
        /* L_828:; */
        ctrlAnmAtr();
        return ctrlAnmTag();
}

/* 00000938-000009B4       .text setStt__11daNpc_De1_cFSc */
void daNpc_De1_c::setStt(signed char) {
        /* field_0x81a = char; */
        /* if ((this->field_0x81a & 255) == 4) goto L_890; */
        /* if (/ * bge * / 1) goto L_884; */
        /* if ((this->field_0x81a & 255) == 2) goto L_890; */
        /* if (/ * bge * / 1) goto L_8b4; */
        /* goto L_8b4; */
        /* L_884:; */
        /* if ((this->field_0x81a & 255) == 7) goto L_8a0; */
        /* goto L_8b4; */
        /* L_890:; */
        /* field_0x816 = 255; */
        /* goto L_8b8; */
        /* L_8a0:; */
        /* field_0x26e = 34; */
        /* L_8b4:; */
        /* L_8b8:; */
        return setAnm();
}

/* 000009B4-00000C98       .text next_msgStatus__11daNpc_De1_cFPUl */
void daNpc_De1_c::next_msgStatus(unsigned long*) {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bgt * / 1) goto L_b8c; */
        base = 5022;
        /* goto L_b90; */
        base = 5024;
        /* goto L_b90; */
        base = 5026;
        /* goto L_b90; */
        base = 5028;
        /* goto L_b90; */
        base = 5029;
        /* goto L_b90; */
        base = 5030;
        /* goto L_b90; */
        base = 5033;
        /* goto L_b90; */
        base = 5033;
        /* goto L_b90; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(7488) == 0) goto L_994; */
        base = 5034;
        /* goto L_b90; */
        /* L_994:; */
        base = 5035;
        /* goto L_b90; */
        /* if (this->field_0xfa == 1) goto L_9cc; */
        /* if (/ * bge * / 1) goto L_b80; */
        /* if (this->field_0xfa >= 0) goto L_9c0; */
        /* goto L_b80; */
        /* L_9c0:; */
        base = 5037;
        /* goto L_b90; */
        /* L_9cc:; */
        base = 5063;
        /* goto L_b90; */
        /* if (this->field_0xfa == 1) goto L_a04; */
        /* if (/ * bge * / 1) goto L_b80; */
        /* if (this->field_0xfa >= 0) goto L_9f8; */
        /* goto L_b80; */
        /* L_9f8:; */
        base = 5037;
        /* goto L_b90; */
        /* L_a04:; */
        base = 5068;
        /* goto L_b90; */
        base = 5069;
        /* goto L_b90; */
        base = 5070;
        /* goto L_b90; */
        base = 5071;
        /* goto L_b90; */
        base = 5072;
        /* goto L_b90; */
        base = 5073;
        /* goto L_b90; */
        base = 5064;
        /* goto L_b90; */
        base = 5065;
        /* goto L_b90; */
        base = 5066;
        /* goto L_b90; */
        base = 5067;
        /* goto L_b90; */
        /* if (this->field_0xfa == 1) goto L_b00; */
        /* if (/ * bge * / 1) goto L_b80; */
        /* if (this->field_0xfa >= 0) goto L_a9c; */
        /* goto L_b80; */
        /* L_a9c:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(258) == 0) goto L_ac8; */
        base = 5040;
        /* goto L_b90; */
        /* L_ac8:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(14656) == 0) goto L_ae8; */
        base = 5039;
        /* goto L_b90; */
        /* L_ae8:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(14656);
        base = 5038;
        /* goto L_b90; */
        /* L_b00:; */
        base = 5046;
        /* goto L_b90; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(6176) == 0) goto L_b50; */
        /* if (dComIfGs_isStageBossEnemy(6) == 0) goto L_b44; */
        base = 5058;
        /* goto L_b90; */
        /* L_b44:; */
        base = 5060;
        /* goto L_b90; */
        /* L_b50:; */
        base = 5056;
        /* goto L_b90; */
        base = 5057;
        /* goto L_b90; */
        base = 5059;
        /* goto L_b90; */
        base = 5061;
        /* goto L_b90; */
        /* L_b80:; */
        base = 5062;
        /* goto L_b90; */
        /* L_b8c:; */
        /* L_b90:; */
        return _restgpr_29(16);
}

/* 00000C98-00000D6C       .text getMsg__11daNpc_De1_cFv */
void daNpc_De1_c::getMsg() {
        /* if ((this->field_0x81d & 255) == 1) goto L_c1c; */
        /* if (/ * bge * / 1) goto L_c6c; */
        /* if ((this->field_0x81d & 255) >= 0) goto L_be4; */
        /* goto L_c6c; */
        /* L_be4:; */
        /* if (dComIfGs_checkGetItem(32) == 0) goto L_c08; */
        dLib_setFirstMsg(3648, 5023, 5025);
        /* goto L_c6c; */
        /* L_c08:; */
        dLib_setFirstMsg(3712, 5020, 5021);
        /* goto L_c6c; */
        /* L_c1c:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(7232) == 0) goto L_c5c; */
        /* if (this->field_0x7a7 == 0) goto L_c4c; */
        return 5036;
        /* L_c4c:; */
        /* field_0x7a7 = 1; */
        return 5032;
        /* L_c5c:; */
        /* L_c6c:; */
        return dLib_setFirstMsg(7200, 5027, 5031);
}

/* 00000D6C-00000E14       .text eventOrder__11daNpc_De1_cFv */
void daNpc_De1_c::eventOrder() {
        /* if ((this->field_0x819 & 255) == 1) goto L_ca4; */
        /* if ((this->field_0x819 & 255) != 2) goto L_cc4; */
        /* L_ca4:; */
        /* if (this->field_0x819 != 1) goto L_d18; */
        fopAcM_orderSpeakEvent(this);
        /* goto L_d18; */
        /* L_cc4:; */
        /* if (this->field_0x819 < 3) goto L_d18; */
        /* if (/ * bne * / 1) goto L_cf4; */
        fopAcM_orderOtherEvent2(fopAcM_orderSpeakEvent(this), (((char*)&a_demo_name_tbl$4474 + 0) + (this->field_0x819 << 2)), 1, 15);
        /* goto L_d18; */
        /* L_cf4:; */
        /* L_d18:; */
        return fopAcM_orderOtherEvent2(fopAcM_orderOtherEvent2(fopAcM_orderSpeakEvent(this), (((char*)&a_demo_name_tbl$4474 + 0) + (this->field_0x819 << 2)), 1, 15), (((char*)&a_demo_name_tbl$4474 + 0) + ((this->field_0x819 << 2) << 2)), 1);
}

/* 00000E14-00000F8C       .text checkOrder__11daNpc_De1_cFv */
void daNpc_De1_c::checkOrder() {
        /* if (this->field_0xf8 != 2) goto L_e58; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->startCheckOld(((char*)&@stringBase0 + 81), arg2) == 0) goto L_d8c; */
        /* if (this->field_0x819 != 3) goto L_d8c; */
        /* field_0x819 = 0; */
        /* goto L_e88; */
        /* L_d8c:; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->startCheckOld(((char*)&@stringBase0 + 89)) == 0) goto L_de0; */
        /* if (this->field_0x819 != 4) goto L_de0; */
        ((JAIZelBasic*)(base))->bgmStart();
        /* field_0x819 = 0; */
        /* goto L_e88; */
        /* L_de0:; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->startCheckOld(((char*)&@stringBase0 + 99)) == 0) goto L_e88; */
        /* if (this->field_0x819 != 5) goto L_e88; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(6145);
        dComIfGp_setNextStage(((char*)&@stringBase0 + 107), 213, 0, 8, 0, 1, 0);
        /* field_0x819 = 0; */
        /* goto L_e88; */
        /* L_e58:; */
        /* if (0 != 1) goto L_e88; */
        /* if ((this->field_0x819 & 255) == 1) goto L_e78; */
        /* if ((this->field_0x819 & 255) != 2) goto L_e88; */
        /* L_e78:; */
        /* field_0x819 = 0; */
        /* field_0x7b5 = 1; */
        /* L_e88:; */
        return dComIfGp_setNextStage(((char*)&@stringBase0 + 107), 213, 0, 8, 0, 1, 0);
}

/* 00000F8C-000010B8       .text chkAttention__11daNpc_De1_cFv */
void daNpc_De1_c::chkAttention() {
        /* searchByID(this->field_0x810); */
        /* if (/ * beq * / 1) goto L_fac; */
        /* if (this->field_0x7b4 == 0) goto L_efc; */
        /* L_efc:; */
        __mi();
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_f9c; */
        /* L_f9c:; */
        /* L_fac:; */
        return PSVECSquareMag();
}

/* 000010B8-00001194       .text setAttention__11daNpc_De1_cFv */
void daNpc_De1_c::setAttention() {
    /* PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0), arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x206); */
    PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0));
    /* field_0x760 = 0; */
    /* field_0x764 = 0; */
    /* field_0x768 = 0; */
    /* field_0x274 = 0; */
    /* field_0x278 = (this->field_0x764 + this->field_0xc); */
    /* field_0x27c = 0; */
    eyePos = 0;
    /* field_0x264 = 0; */
    /* field_0x268 = 0; */
    return ((char*)&l_HIO + 0);
}

/* 00001194-000011C8       .text searchByID__11daNpc_De1_cFUi */
void daNpc_De1_c::searchByID(fpc_ProcID) {
    fopAcM_SearchByID(fpc_ProcID);
}

/* 000011C8-0000124C       .text setDemoStartCenter__11daNpc_De1_cFv */
void daNpc_De1_c::setDemoStartCenter() {
    /* PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0), arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x206); */
    return PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0));
}

/* 0000124C-00001300       .text partner_srch__11daNpc_De1_cFv */
void daNpc_De1_c::partner_srch() {
        /* field_0x810 = -1; */
        base = 0;
        /* fpcEx_Search(((char*)&searchActor_leafLift__FPvPv + 0), this, 0, arg3, arg4, arg5, arg6, arg7); */
        /* if (base == 0) goto L_11f8; */
        /* if (base == 0) goto L_11ec; */
        /* goto L_11f0; */
        /* L_11ec:; */
        /* L_11f0:; */
        /* field_0x810 = -1; */
        /* L_11f8:; */
        return 1;
}

/* 00001300-000013F0       .text ccCreate__11daNpc_De1_cFv */
void daNpc_De1_c::ccCreate() {
    /* L_1264:; */
    /* fopAcM_create(207, ((C_@4628 + 0) + -4), (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (this->field_0x20a & 255), 0, 0, -1, 0); */
    if ((0 + 2012) == 65535) {
        /* ((JUTAssertion*)(((JUTAssertion*)(fopAcM_create(207, ((C_@4628 + 0) + -4), (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (this->field_0x20a & 255), 0, 0, -1, 0)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 4), 883, ((char*)&@stringBase0 + 113)); */
        OSPanic(((char*)&@stringBase0 + 4), 883, ((char*)&@stringBase0 + 50));
    }
    /* if ((0 + 1) >= 10) goto L_1264; */
    return _restgpr_28(OSPanic(((char*)&@stringBase0 + 4), 883, ((char*)&@stringBase0 + 50)));
}

/* 000013F0-000014A0       .text cc_set__11daNpc_De1_cFv */
void daNpc_De1_c::cc_set() {
    /* L_1338:; */
    /* ((daNpc_De1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->searchByID(); */
    if (/* beq */ 1) {
        PSMTXCopy((this->field_0x8c + (((0 + 2052) & 255) * 48)), ((char*)&now__14mDoMtx_stack_c + 0));
        PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0));
    }
    /* if ((0 + 1) >= 10) goto L_1338; */
    return _restgpr_28(PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0)));
}

/* 000014A0-00001524       .text set_pa_happa__11daNpc_De1_cFv */
void daNpc_De1_c::set_pa_happa() {
    /* return ((dPa_control_c*)(this->field_0x5ab8))->set(0, (arg2 + -32326), (this + 2000), (this + 516), 0, 255, (this + 1980)); */
}

/* 00001524-00001550       .text del_pa_happa__11daNpc_De1_cFv */
void daNpc_De1_c::del_pa_happa() {
    /* del_pa_happa__11daNpc_De1_cFv: 无实义指令 */
}

/* 00001550-000015CC       .text followPa_happa__11daNpc_De1_cFv */
void daNpc_De1_c::followPa_happa() {
    if (this->field_0x7c0 != 0) {
        /* PSMTXCopy((this->field_0x8c + ((this->field_0x6cd & 255) * 48)), ((char*)&now__14mDoMtx_stack_c + 0), arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x7d0 = 0; */
        /* field_0x7d4 = 0; */
        /* field_0x7d8 = 0; */
    }
    return ((char*)&now__14mDoMtx_stack_c + 0);
}

/* 000015CC-0000165C       .text decideType__11daNpc_De1_cFi */
void daNpc_De1_c::decideType(int) {
        /* field_0x81c = -1; */
        /* if (this->field_0x8 == 118) goto L_1514; */
        /* goto L_1550; */
        /* L_1514:; */
        /* field_0x81c = 0; */
        /* if (((dSv_player_collect_c*)(((char*)&g_dComIfG_gameInfo + 180)))->isSymbol(2) != 0) goto L_1544; */
        /* field_0x81d = 0; */
        /* goto L_1554; */
        /* L_1544:; */
        /* field_0x81d = 1; */
        /* goto L_1554; */
        /* L_1550:; */
        /* L_1554:; */
        return 0;
}

/* 0000165C-00001858       .text event_actionInit__11daNpc_De1_cFi */
void daNpc_De1_c::event_actionInit(int) {
        /* _savegpr_26(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP() == 0) goto L_1754; */
        /* if ((this->field_0x815 & 255) == 3) goto L_16bc; */
        /* if (/ * bge * / 1) goto L_1634; */
        /* if ((this->field_0x815 & 255) == 1) goto L_1644; */
        /* if (/ * bge * / 1) goto L_1680; */
        /* goto L_1754; */
        /* L_1634:; */
        /* if ((this->field_0x815 & 255) == 5) goto L_1728; */
        /* if (/ * bge * / 1) goto L_1754; */
        /* goto L_16d4; */
        /* L_1644:; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP() == 0) goto L_1754; */
        /* ((daNpc_De1_c*)(_savegpr_26(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->searchByID(this->field_0x7dc); */
        /* if (/ * beq * / 1) goto L_1754; */
        /* field_0xd0 = ((dEvt_control_c*)(((char*)&g_dComIfG_gameInfo + 20952)))->getPId(); */
        /* goto L_1754; */
        /* L_1680:; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMySubstanceP() == 0) goto L_1694; */
        /* goto L_169c; */
        /* L_1694:; */
        /* field_0x79a = 0; */
        /* L_169c:; */
        /* if (/ * beq * / 1) goto L_16b0; */
        /* goto L_1754; */
        /* L_16b0:; */
        /* field_0x79e = 0; */
        /* goto L_1754; */
        /* L_16bc:; */
        /* if (/ * beq * / 1) goto L_1754; */
        /* ((daNpc_De1_c*)(_savegpr_26(this, int, arg2, arg3, arg4, arg5, arg6, arg7)))->setAnm_NUM(); */
        /* goto L_1754; */
        /* L_16d4:; */
        /* ((JAIZelBasic*)(base))->seStart(18616, (_savegpr_26(this, int, arg2, arg3, arg4, arg5, arg6, arg7) + 504), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* field_0x798 = 84; */
        /* goto L_1754; */
        /* L_1728:; */
        /* field_0x304 = 3; */
        /* field_0x30c = 0; */
        /* field_0x314 = 24; */
        /* L_1754:; */
        /* return _restgpr_26(((JAIZelBasic*)(base))->seStart(18616, (_savegpr_26(this, int, arg2, arg3, arg4, arg5, arg6, arg7) + 504), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0), 29); */
}

/* 00001858-00001938       .text event_action__11daNpc_De1_cFv */
void daNpc_De1_c::event_action() {
        /* if ((this->field_0x815 & 255) == 2) goto L_17dc; */
        /* if (/ * bge * / 1) goto L_17ac; */
        /* if ((this->field_0x815 & 255) == 0) goto L_17b8; */
        /* if (/ * bge * / 1) goto L_182c; */
        /* goto L_1830; */
        /* L_17ac:; */
        /* if ((this->field_0x815 & 255) >= 6) goto L_1830; */
        /* goto L_182c; */
        /* L_17b8:; */
        /* if (searchByID(this->field_0x810) == 0) goto L_1830; */
        /* if (((daLlift_c*)(searchByID(this->field_0x810)))->MoveUpLift() == 0) goto L_1830; */
        /* goto L_1830; */
        /* L_17dc:; */
        /* if (cLib_calcTimer<s>__FPs((this + 1946)) != 0) goto L_1830; */
        /* if (this->field_0x79e != 0) goto L_1824; */
        /* if (this->field_0x79e >= 10) goto L_1824; */
        /* if (searchByID(this->field_0x7dc) == 0) goto L_1824; */
        /* field_0x2fb = 1; */
        /* L_1824:; */
        /* goto L_1830; */
        /* L_182c:; */
        /* L_1830:; */
        return 1;
}

/* 00001938-00001A40       .text privateCut__11daNpc_De1_cFv */
void daNpc_De1_c::privateCut() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&@stringBase0 + 0), 0, 0) == -1) goto L_193c; */
        /* field_0x814 = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyActIdx(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&@stringBase0 + 0), 0, 0), ((char*)&cut_name_tbl$4818 + 0), 1, 1, 0); */
        /* if ((this->field_0x814 & 255) != -1) goto L_18d8; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&@stringBase0 + 0), 0, 0));
        /* goto L_193c; */
        /* L_18d8:; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getIsAddvance(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&@stringBase0 + 0), 0, 0)) == 0) goto L_1908; */
        /* if (this->field_0x814 == 0) goto L_18fc; */
        /* goto L_1908; */
        /* L_18fc:; */
        /* ((daNpc_De1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->event_actionInit(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&@stringBase0 + 0), 0, 0)); */
        /* L_1908:; */
        /* if (this->field_0x814 == 0) goto L_1918; */
        /* goto L_1924; */
        /* L_1918:; */
        /* ((daNpc_De1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->event_action(); */
        /* goto L_1928; */
        /* L_1924:; */
        /* L_1928:; */
        /* if (1 == 0) goto L_193c; */
        /* L_193c:; */
        return _restgpr_29(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(((char*)&@stringBase0 + 0), 0, 0)));
}

/* 00001A40-00001A60       .text endEvent__11daNpc_De1_cFv */
void daNpc_De1_c::endEvent() {
    /* field_0x816 = 255; */
    return this;
}

/* 00001A60-00001B90       .text event_proc__11daNpc_De1_cFv */
void daNpc_De1_c::event_proc() {
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->endCheckOld(((char*)&@stringBase0 + 81), arg2) == 0) goto L_19d4; */
        endEvent();
        /* field_0x819 = 1; */
        setStt(3);
        /* goto L_1a8c; */
        /* L_19d4:; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->endCheckOld(((char*)&@stringBase0 + 89)) == 0) goto L_1a1c; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 4440)))->onEventBit(776);
        endEvent();
        setStt(7);
        /* goto L_1a8c; */
        /* L_1a1c:; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->endCheckOld(((char*)&@stringBase0 + 99)) == 0) goto L_1a74; */
        endEvent();
        set_action();
        /* goto L_1a8c; */
        /* L_1a74:; */
        /* if (((dNpc_EventCut_c*)((this + 1760)))->cutProc() != 0) goto L_1a8c; */
        /* L_1a8c:; */
        return privateCut();
}

/* 00001B90-00001C3C       .text set_action__11daNpc_De1_cFM11daNpc_De1_cFPCvPvPv_iPv */
void daNpc_De1_c::set_action(int (daNpc_De1_c::*)(void*), void*) {
        /* if (__ptmf_cmpr((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1748)) == 0) goto L_1b34; */
        /* if (__ptmf_test((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1748)) == 0) goto L_1b00; */
        /* field_0x81e = -1; */
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_1b00:; */
        /* field_0x81e = 0; */
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_1b34:; */
        return _restgpr_29(1);
}

/* 00001C3C-00001C94       .text wait01__11daNpc_De1_cFv */
void daNpc_De1_c::wait01() {
        /* if (this->field_0x7b5 == 0) goto L_1b74; */
        /* setStt(2, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* goto L_1b94; */
        /* L_1b74:; */
        /* if (this->field_0x7b4 == 0) goto L_1b8c; */
        /* field_0x819 = 2; */
        /* goto L_1b94; */
        /* L_1b8c:; */
        /* field_0x819 = 0; */
        /* L_1b94:; */
        return 1;
}

/* 00001C94-00001D38       .text wait02__11daNpc_De1_cFv */
void daNpc_De1_c::wait02() {
        /* if (this->field_0x7b5 == 0) goto L_1bd4; */
        /* setStt(4, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* goto L_1c34; */
        /* L_1bd4:; */
        /* if (((daNpc_De1_c*)(setStt(4, arg2, arg3, arg4, arg5, arg6, arg7)))->searchByID(this->field_0x810) == 0) goto L_1c14; */
        /* if (this->field_0x1fc >= (this->field_0x1d4 + base)) goto L_1c14; */
        setStt(5);
        return 1;
        /* L_1c14:; */
        /* if (this->field_0x7b4 == 0) goto L_1c2c; */
        /* field_0x819 = 2; */
        /* goto L_1c34; */
        /* L_1c2c:; */
        /* field_0x819 = 0; */
        /* L_1c34:; */
        return 1;
}

/* 00001D38-00001D8C       .text wait03__11daNpc_De1_cFv */
void daNpc_De1_c::wait03() {
    /* if (searchByID(this->field_0x810) != 0) { */
        /* if (((daLlift_c*)(searchByID(this->field_0x810)))->checkEndDownLift() != 0) goto L_1c88; */
        /* setStt(1); */
    /* L_1c88:; */
    return 1;
}

/* 00001D8C-00001EA0       .text wait04__11daNpc_De1_cFv */
void daNpc_De1_c::wait04() {
    /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* field_0x819 = 0; */
    __mi();
    PSVECSquareMag();
    if (/* ble */ 1) {
    }
    /* if (this->field_0x8 > this->field_0x18) { */
        /* field_0x819 = 4; */
        /* field_0x306 = cLib_targetAngleY((this->field_0x5b38 + 504), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504)); */
    return _restgpr_29(1);
}

/* 00001EA0-00001F38       .text wait05__11daNpc_De1_cFv */
void daNpc_De1_c::wait05() {
    /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (this->field_0x819 == 5) {
        return 1;
    }
    /* field_0x819 = 0; */
    /* L_1dec:; */
    /* if (((daNpc_De1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->searchByID() == 0) { */
        /* if ((0 + 1) >= 10) goto L_1dec; */
    if ((0 + 1) >= 10) {
        /* field_0x280 = ((this->field_0x280 >> 0) & 0); */
        /* field_0x819 = 5; */
    }
    return _restgpr_29(1);
}

/* 00001F38-00001F90       .text talk01__11daNpc_De1_cFv */
void daNpc_De1_c::talk01() {
    if (this->field_0x819 != 3) {
        /* field_0x7a6 = 255; */
        /* field_0x7b8 = 0; */
        /* field_0x7b5 = 0; */
        endEvent();
        /* field_0x819 = 3; */
    }
    return 1;
}

/* 00001F90-00002020       .text talk02__11daNpc_De1_cFv */
void daNpc_De1_c::talk02() {
        talk(1);
        /* if (this->field_0x6b0 == 0) goto L_1f1c; */
        /* if (this->field_0xf8 == 6) goto L_1f1c; */
        /* if (/ * bge * / 1) goto L_1ee8; */
        /* if (this->field_0xf8 == 2) goto L_1f1c; */
        /* goto L_1f1c; */
        /* L_1ee8:; */
        /* if (this->field_0xf8 == 19) goto L_1ef4; */
        /* goto L_1f1c; */
        /* L_1ef4:; */
        /* field_0x7a6 = 255; */
        /* setStt(this->field_0x81b); */
        /* field_0x7b8 = 0; */
        /* field_0x7b5 = 0; */
        endEvent();
        /* L_1f1c:; */
        return 1;
}

/* 00002020-000020C0       .text wait_action1__11daNpc_De1_cFPv */
void daNpc_De1_c::wait_action1(void*) {
        /* if (this->field_0x81e != 0) goto L_1f74; */
        /* setStt(6, arg2, arg3, arg4, arg5, arg6, arg7); */
        ccCreate();
        /* field_0x81e = (this->field_0x81e + 1); */
        /* goto L_1fbc; */
        /* L_1f74:; */
        /* if (/ * beq * / 1) goto L_1fbc; */
        /* field_0x7b4 = ((daNpc_De1_c*)(this->field_0x81e))->chkAttention(); */
        /* if ((this->field_0x81a & 255) == 7) goto L_1fb4; */
        /* if (/ * bge * / 1) goto L_1fbc; */
        /* if ((this->field_0x81a & 255) >= 6) goto L_1fa8; */
        /* goto L_1fbc; */
        /* L_1fa8:; */
        wait04();
        /* goto L_1fbc; */
        /* L_1fb4:; */
        wait05();
        /* L_1fbc:; */
        return 1;
}

/* 000020C0-000021AC       .text wait_action2__11daNpc_De1_cFPv */
void daNpc_De1_c::wait_action2(void*) {
        /* if (this->field_0x81e != 0) goto L_200c; */
        /* setStt(1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x81e = (this->field_0x81e + 1); */
        /* goto L_20a8; */
        /* L_200c:; */
        /* if (/ * beq * / 1) goto L_20a8; */
        /* if (/ * bne * / 1) goto L_2030; */
        /* ((daNpc_De1_c*)(this->field_0x81e))->partner_srch(); */
        /* field_0x81e = (this->field_0x81e + 1); */
        /* L_2030:; */
        /* field_0x7b4 = chkAttention(); */
        /* if ((this->field_0x81a & 255) == 3) goto L_2088; */
        /* if (/ * bge * / 1) goto L_2060; */
        /* if ((this->field_0x81a & 255) == 1) goto L_2070; */
        /* if (/ * bge * / 1) goto L_207c; */
        /* goto L_20a8; */
        /* L_2060:; */
        /* if ((this->field_0x81a & 255) == 5) goto L_20a0; */
        /* if (/ * bge * / 1) goto L_20a8; */
        /* goto L_2094; */
        /* L_2070:; */
        wait01();
        /* goto L_20a8; */
        /* L_207c:; */
        talk01();
        /* goto L_20a8; */
        /* L_2088:; */
        wait02();
        /* goto L_20a8; */
        /* L_2094:; */
        talk02();
        /* goto L_20a8; */
        /* L_20a0:; */
        wait03();
        /* L_20a8:; */
        return 1;
}

/* 000021AC-00002248       .text demo__11daNpc_De1_cFv */
void daNpc_De1_c::demo() {
    if (demoActorID == 0) {
        /* if (this->field_0x7b7 != 0) goto L_2144; */
        /* field_0x7b7 = 0; */
    } else {
        /* field_0x7b7 = 1; */
        ((dDemo_object_c*)((this->field_0x5abc + 32)))->getActor(demoActorID);
        dDemo_setDemoData(this, 106, this->field_0x330, ((char*)&@stringBase0 + 78), 0, 0, 0, 0);
    }
    /* L_2144:; */
    /* return this->field_0x7b7; */
}

/* 00002248-00002358       .text _draw__11daNpc_De1_cFv */
BOOL daNpc_De1_c::_draw() {
    ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(1, (this + 504), (this + 268));
    ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x50, (this + 268));
    /* ((mDoExt_McaMorf*)(this->field_0x330))->entryDL(); */
    if (this->field_0x28 != 0) {
        /* if (searchByID(this->field_0x810) != 0) goto L_2234; */
    }
    /* L_2234:; */
    dSnap_RegistFig(166, this, C_@4264);
    return 1;
}

/* 00002358-00002454       .text _execute__11daNpc_De1_cFv */
BOOL daNpc_De1_c::_execute() {
        /* if (this->field_0x7a8 != 0) goto L_22c4; */
        /* field_0x754 = 0; */
        /* field_0x758 = 0; */
        /* field_0x75c = 0; */
        /* field_0x7a8 = 1; */
        /* L_22c4:; */
        checkOrder();
        /* if (demo() != 0) goto L_2340; */
        /* if (this->field_0x529a == 0) goto L_2308; */
        /* if (this->field_0xf8 == 1) goto L_2308; */
        event_proc();
        /* goto L_231c; */
        /* L_2308:; */
        __ptmf_scall(this, 0);
        /* L_231c:; */
        fopAcM_posMoveF(this, (this + 1336));
        /* L_2340:; */
        eventOrder();
        setMtx();
        return 1;
}

/* 00002454-00002500       .text _delete__11daNpc_De1_cFv */
BOOL daNpc_De1_c::_delete() {
    /* dComIfG_resDelete((this + 1732), ((char*)&@stringBase0 + 78), arg2); */
    /* ((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->Release(this->field_0x6d0); */
    if (heap != 0) {
        /* if (this->field_0x330 != 0) goto L_23c0; */
        /* ((mDoExt_McaMorf*)(this->field_0x330))->stopZelAnime(); */
    }
    /* L_23c0:; */
    del_pa_happa();
    if (this->field_0x8 >= 0) {
        /* if (/ * bge * / 1) goto L_23fc; */
        /* ((mDoHIO_subRoot_c*)(((char*)&mDoHIO_root + 4)))->deleteChild(this->field_0x4); */
    }
    /* L_23fc:; */
    return 1;
}

/* 00002500-00002520       .text CheckCreateHeap__FP10fopAc_ac_c */
static BOOL CheckCreateHeap(fopAc_ac_c* i_this) {
    ((daNpc_De1_c*)i_this)->CreateHeap();
    return TRUE;
}

/* 00002520-000027A4       .text _create__11daNpc_De1_cFv */
cPhs_State daNpc_De1_c::_create() {
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_2594; */
        /* if (/ * beq * / 1) goto L_2588; */
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
        /* field_0x6e8 = 0; */
        /* field_0x6ec = 0; */
        /* field_0x748 = 0; */
        __ct((actor_condition + 1980), 0);
        /* L_2588:; */
        /* L_2594:; */
        /* if (dComIfG_resLoad((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1732), ((char*)&@stringBase0 + 78)) == 4) goto L_25b8; */
        /* goto L_26a0; */
        /* L_25b8:; */
        /* if (((daNpc_De1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->decideType((this->field_0xb0 & 16777215)) != 0) goto L_25d8; */
        return 5;
        /* L_25d8:; */
        /* if (this->field_0x8 >= 0) goto L_2618; */
        /* field_0x4 = ((mDoHIO_subRoot_c*)(((char*)&mDoHIO_root + 4)))->createChild(((char*)&@stringBase0 + 175), ((char*)&l_HIO + 0)); */
        /* L_2618:; */
        /* field_0x8 = (this->field_0x8 + 1); */
        /* if (fopAcM_entrySolidHeap(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), ((char*)&CheckCreateHeap__FP10fopAc_ac_c + 0), ((char*)&a_heap_size_tbl$5149 + 0)) == 0) goto L_2680; */
        cullMtx = (this->field_0x50 + 36);
        /* ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->Regist(this->field_0x6d0, _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* goto L_2688; */
        /* L_2680:; */
        return 5;
        /* L_2688:; */
        /* if (((daNpc_De1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->createInit() != 0) goto L_269c; */
        /* L_269c:; */
        /* L_26a0:; */
        return _restgpr_28(5);
}

/* 00002AB0-00002E04       .text CreateHeap__11daNpc_De1_cFv */
void daNpc_De1_c::CreateHeap() {
        /* _savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        ((dRes_control_c*)(((char*)&@stringBase0 + 78)))->getIDRes(7);
        __nw(180);
        /* if (/ * beq * / 1) goto L_2a94; */
        /* L_2a94:; */
        /* field_0x330 = __ct(((dRes_control_c*)(((char*)&@stringBase0 + 78)))->getIDRes(5), 1, ((dRes_control_c*)(((char*)&@stringBase0 + 78)))->getIDRes(7), 0, 0, ((dRes_control_c*)(((char*)&@stringBase0 + 78)))->getIDRes(5), 2, 0); */
        /* if (this->field_0x330 == 0) goto L_2cfc; */
        /* if (this->field_0x50 == 0) goto L_2cf4; */
        /* field_0x6cd = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 215)); */
        /* if (this->field_0x6cd != 0) goto L_2b0c; */
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 215))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 4), 1744, ((char*)&@stringBase0 + 223)); */
        OSPanic(((char*)&@stringBase0 + 4), 1744, ((char*)&@stringBase0 + 50));
        /* L_2b0c:; */
        /* field_0x6cc = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 246)); */
        /* if (this->field_0x6cc != 0) goto L_2b68; */
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 246))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 4), 1746, ((char*)&@stringBase0 + 251)); */
        OSPanic(((char*)&@stringBase0 + 4), 1746, ((char*)&@stringBase0 + 50));
        /* L_2b68:; */
        /* L_2b78:; */
        /* ((JUTNameTab*)(this->field_0x54))->getIndex(); */
        /* if ((0 + 2052) != 0) goto L_2bd0; */
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex()))->getSDevice()))->showAssert(((char*)&@stringBase0 + 4), 1749, ((char*)&@stringBase0 + 271)); */
        OSPanic(((char*)&@stringBase0 + 4), 1749, ((char*)&@stringBase0 + 50));
        /* L_2bd0:; */
        /* if ((0 + 1) < 10) goto L_2b78; */
        /* field_0x14 = 0; */
        __nw(220);
        /* if (/ * beq * / 1) goto L_2c38; */
        __ct();
        /* field_0x4 = 0; */
        actor_type = 0;
        __ct();
        /* field_0x4 = 0; */
        actor_tag = 0;
        /* L_2c38:; */
        /* field_0x6d0 = 0; */
        /* if (this->field_0x6d0 == 0) goto L_2cf4; */
        /* if (((dBgWDeform*)(this->field_0x6d0))->Set(((dRes_control_c*)(((char*)&@stringBase0 + 78)))->getIDRes(8), this->field_0x50, 0) != 0) goto L_2cf4; */
        /* ((dBgS_AcchCir*)((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1272)))->SetWall(C_@4205); */
        /* ((dBgS_Acch*)((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 820)))->Set((_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 484), _savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 1, (_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1272), (_savegpr_26(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 544), 0); */
        return 1;
        /* L_2cf4:; */
        /* field_0x330 = 0; */
        /* L_2cfc:; */
        return _restgpr_26(0);
}

/* 00002E04-00002E24       .text daNpc_De1_Create__FP10fopAc_ac_c */
static cPhs_State daNpc_De1_Create(fopAc_ac_c* i_this) {
    return ((daNpc_De1_c*)i_this)->_create();
}

/* 00002E24-00002E44       .text daNpc_De1_Delete__FP11daNpc_De1_c */
static BOOL daNpc_De1_Delete(daNpc_De1_c* i_this) {
    return ((daNpc_De1_c*)i_this)->_delete();

/* 00002E44-00002E64       .text daNpc_De1_Execute__FP11daNpc_De1_c */
static BOOL daNpc_De1_Execute(daNpc_De1_c* i_this) {
    return ((daNpc_De1_c*)i_this)->_execute();

/* 00002E64-00002E84       .text daNpc_De1_Draw__FP11daNpc_De1_c */
static BOOL daNpc_De1_Draw(daNpc_De1_c* i_this) {
    return ((daNpc_De1_c*)i_this)->_draw();

/* 00002E84-00002E8C       .text daNpc_De1_IsDelete__FP11daNpc_De1_c */
static BOOL daNpc_De1_IsDelete(daNpc_De1_c*) {
    return 1;

static actor_method_class l_daNpc_De1_Method = {
    (process_method_func)daNpc_De1_Create,
    (process_method_func)daNpc_De1_Delete,
    (process_method_func)daNpc_De1_Execute,
    (process_method_func)daNpc_De1_IsDelete,
    (process_method_func)daNpc_De1_Draw,
};

actor_process_profile_definition g_profile_NPC_DE1 = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0003,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_NPC_DE1_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daNpc_De1_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_NPC_DE1_e,
    /* Actor SubMtd */ &l_daNpc_De1_Method,
    /* Status       */ fopAcStts_UNK40000_e,
    /* Group        */ fopAc_NPC_e,
    /* Cull Type    */ fopAc_CULLBOX_0_e,
};

/* 由 fix_decomp_braces.py 补齐：反编译产物末尾缺 4 个 } */
}}}}

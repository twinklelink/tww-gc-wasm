/**
 * d_a_npc_ym1.cpp
 * NPC - Mesa & Abe
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_npc_ym1.h"

/* 000000EC-00000108       .text __ct__20daNpc_Ym1_childHIO_cFv */
daNpc_Ym1_childHIO_c::daNpc_Ym1_childHIO_c() {
}

/* 00000150-0000020C       .text __ct__15daNpc_Ym1_HIO_cFv */
daNpc_Ym1_HIO_c::daNpc_Ym1_HIO_c() {
    /* _savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* field_0x0 = 0; */
    /* field_0x0 = 0; */
    /* __construct_array((_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 12), ((char*)&__ct__20daNpc_Ym1_childHIO_cFv + 0), ((char*)&__dt__20daNpc_Ym1_childHIO_cFv + 0), 44, 2); */
    /* L_c8:; */
    /* memcpy((_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + (0 + 16)), (((char*)&a_prm_tbl$4151 + 0) + 0), 36); */
    /* if ((0 + 1) >= 2) goto L_c8; */
    /* field_0x4 = -1; */
    /* field_0x8 = -1; */
    /* return _restgpr_27(_savegpr_27(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
}

/* 00000268-00000290       .text area_check__FP10fopAc_ac_cP4cXyzUl */
void area_check(fopAc_ac_c*, cXyz*, unsigned long) {
    if (long == 0) {
    }
    return ((daNpc_Ym1_c*)(arg0))->setKariFlg();
}

/* 00000290-0000029C       .text setKariFlg__11daNpc_Ym1_cFv */
void daNpc_Ym1_c::setKariFlg() {
    mKariFlag = 1;
}

/* 0000029C-000002E8       .text nodeCB_Head__FP7J3DNodei */
static BOOL nodeCB_Head(J3DNode* i_param_1, int i_param_2) {
    if (i_param_2 == 0) {
        if (j3dSys.getModel()->getUserArea() != NULL) {
            reinterpret_cast<daNpc_Ym1_c*>(j3dSys.getModel()->getUserArea())
                ->_nodeCB_Head(i_param_1, j3dSys.getModel());
        }
    }
    return TRUE;
}

/* 000002E8-00000400       .text _nodeCB_Head__11daNpc_Ym1_cFP7J3DNodeP8J3DModel */
void daNpc_Ym1_c::_nodeCB_Head(J3DNode*, J3DModel*) {
    /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (this->field_0x11c != 0) {
        /* field_0x120 = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* __register_global_object(((C_@3569 + 0) + 288), ((char*)&__dt__4cXyzFv + 0), ((C_@3569 + 0) + 272)); */
        /* field_0x11c = 1; */
    }
    PSMTXCopy((this->field_0x8c + (this->field_0x18 * 48)), ((char*)&now__14mDoMtx_stack_c + 0));
    /* field_0x870 = 0; */
    /* field_0x874 = 0; */
    /* field_0x878 = 0; */
    /* mDoMtx_XrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x292); */
    mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), m290);
    /* PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0), ((C_@3569 + 0) + 288), (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2124)); */
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), ((char*)&mCurrentMtx__6J3DSys + 0));
    return _restgpr_28(PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x8c + (this->field_0x18 * 48))));
}

/* 0000043C-00000488       .text nodeCB_BackBone__FP7J3DNodei */
static BOOL nodeCB_BackBone(J3DNode* i_param_1, int i_param_2) {
    if (i_param_2 == 0) {
        if (j3dSys.getModel()->getUserArea() != NULL) {
            reinterpret_cast<daNpc_Ym1_c*>(j3dSys.getModel()->getUserArea())
                ->_nodeCB_BackBone(i_param_1, j3dSys.getModel());
        }
    }
    return TRUE;
}

/* 00000488-00000520       .text _nodeCB_BackBone__11daNpc_Ym1_cFP7J3DNodeP8J3DModel */
void daNpc_Ym1_c::_nodeCB_BackBone(J3DNode*, J3DModel*) {
    /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    PSMTXCopy();
    /* mDoMtx_XrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x296); */
    /* mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x294); */
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), ((char*)&mCurrentMtx__6J3DSys + 0));
    return _restgpr_29(PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0)));
}

/* 00000520-00000540       .text CheckCreateHeap__FP10fopAc_ac_c */
static BOOL CheckCreateHeap(fopAc_ac_c* i_this) {
    ((daNpc_Ym1_c*)i_this)->CreateHeap();
    return TRUE;
}

/* 00000540-000005C0       .text init_YM1_0__11daNpc_Ym1_cFv */
void daNpc_Ym1_c::init_YM1_0() {
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(1312) == 0) {
        set_action();
        return 1;
    }
    return 0;
}

/* 000005C0-00000640       .text init_YM1_1__11daNpc_Ym1_cFv */
void daNpc_Ym1_c::init_YM1_1() {
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(1312) != 0) {
        set_action();
        return 1;
    }
    return 0;
}

/* 00000640-000006E0       .text init_YM2_0__11daNpc_Ym1_cFv */
void daNpc_Ym1_c::init_YM2_0() {
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(1312) == 0) {
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(3616) == 0) goto L_5d8; */
        set_action();
        return 1;
    }
    /* L_5d8:; */
    return 0;
}

/* 000006E0-00000780       .text init_YM2_1__11daNpc_Ym1_cFv */
void daNpc_Ym1_c::init_YM2_1() {
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(1312) == 0) {
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(3616) != 0) goto L_678; */
        set_action();
        return 1;
    }
    /* L_678:; */
    return 0;
}

/* 00000780-0000080C       .text init_YM2_2__11daNpc_Ym1_cFv */
void daNpc_Ym1_c::init_YM2_2() {
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(1312) != 0) {
        /* if (dKy_daynight_check() == 0) goto L_708; */
        set_action();
        return 1;
    }
    /* L_708:; */
    return 0;
}

/* 0000080C-00000898       .text init_YM2_3__11daNpc_Ym1_cFv */
void daNpc_Ym1_c::init_YM2_3() {
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(1312) != 0) {
        /* if (dKy_daynight_check() == 1) goto L_794; */
        set_action();
        return 1;
    }
    /* L_794:; */
    return 0;
}

/* 00000898-000008E4       .text init_YMx_error__11daNpc_Ym1_cFv */
void daNpc_Ym1_c::init_YMx_error() {
    set_action();
    return 1;
}

/* 000008E4-00000B98       .text createInit__11daNpc_Ym1_cFv */
void daNpc_Ym1_c::createInit() {
    /* ((dNpc_EventCut_c*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 708)))->setActorInfo2(((char*)&a_staff_tbl$4346 + 0), _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
    /* field_0x280 = 10; */
    /* field_0x26d = ((mSubType & 255) << 1); */
    m8AB = 13;
    if ((mStaff & 255) <= 7) {
        /* ((daNpc_Ym1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->init_YM1_0(); */
        /* goto L_900; */
        /* ((daNpc_Ym1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->init_YM1_1(); */
        /* goto L_900; */
        /* ((daNpc_Ym1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->init_YM2_0(); */
        /* goto L_900; */
        /* ((daNpc_Ym1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->init_YM2_1(); */
        /* goto L_900; */
        /* ((daNpc_Ym1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->init_YM2_2(); */
        /* goto L_900; */
        /* ((daNpc_Ym1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->init_YM2_3(); */
        /* goto L_900; */
    }
    /* L_900:; */
    if (0 != 0) {
        return 0;
    }
    gravity = 0;
    /* ((dCcD_Stts*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1336)))->Init(255, 255, _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
    /* field_0x5b8 = (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1336); */
    /* ((dCcD_Cyl*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1396)))->Set(((char*)&dNpc_cyl_src + 0)); */
    if (mStaff != 0) {
        /* field_0x748 = (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1336); */
        /* ((dCcD_Cyl*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1796)))->Set(((char*)&dNpc_cyl_src + 0)); */
        PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
        /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x206); */
        PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0));
        /* ((cM3dGCyl*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2076)))->SetC(); */
        /* ((cM3dGCyl*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2076)))->SetR(); */
        /* ((cM3dGCyl*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 2076)))->SetH(); */
        /* ((dCcMassS_Mng*)(((char*)&g_dComIfG_gameInfo + 20216)))->Set((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1796), 3); */
    }
    /* ((daNpc_Ym1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->play_animation(); */
    if (mStaff != 1) {
        /* ((dBgS_Acch*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 820)))->CrrPos(((char*)&g_dComIfG_gameInfo + 4768)); */
    }
    /* field_0x1b5 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetRoomId((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1052)); */
    /* field_0x1b6 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetPolyColor((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1052)); */
    /* ((mDoExt_McaMorf*)(this->field_0x330))->setMorf(); */
    /* ((daNpc_Ym1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->setMtx(1); */
    return _restgpr_29(1);
}

/* 00000B98-00000C04       .text play_animation__11daNpc_Ym1_cFv */
void daNpc_Ym1_c::play_animation() {
    play_texPttrnAnm();
    /* field_0x898 = ((mDoExt_McaMorf*)(this->field_0x330))->play((this + 608), 0, 0); */
    /* if (this->field_0x68 > this->field_0x87c) { */
        /* field_0x898 = 1; */
    /* field_0x87c = 0; */
    /* return this->field_0x330; */

/* 00000C04-00000D34       .text setMtx__11daNpc_Ym1_cFb */
void daNpc_Ym1_c::setMtx(bool) {
    /* field_0x18 = 0; */
    /* field_0x1c = 0; */
    /* field_0x20 = 0; */
    /* PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0), bool, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* mDoMtx_ZXYrotM(((char*)&now__14mDoMtx_stack_c + 0), m846, this->field_0x848); */
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x50 + 36));
    /* ((mDoExt_McaMorf*)(this->field_0x330))->calc(); */
    PSMTXCopy((this->field_0x8c + ((mHeadJointIdx & 255) * 48)), (mpHeadModel + 36));
    if (m6D0 != 0) {
        PSMTXCopy((this->field_0x8c + ((mHandRJointIndex & 255) * 48)), (m6D0 + 36));
    }
    return setAttention(bool);
}

/* 00000D34-00000D48       .text bckResID__11daNpc_Ym1_cFi */
int daNpc_Ym1_c::bckResID(int anmNum) {
    static const int a_res_id_tbl[] = {
        0, 1, 2, 5, 3, 8, 6, 7, 4, 19, 16, 17, 18, 14,
    };
    return a_res_id_tbl[anmNum];
}

/* 00000D48-00000D98       .text btpResID__11daNpc_Ym1_cFi */
void daNpc_Ym1_c::btpResID(int) {
        /* if (((char*)&a_res_id_tbl$4476 + 0) != 14) goto L_ca4; */
        /* if ((mSubType & 255) == 2) goto L_c9c; */
        /* if (/ * bge * / 1) goto L_ca4; */
        /* if ((mSubType & 255) >= 1) goto L_c94; */
        /* goto L_ca4; */
        /* L_c94:; */
        return 14;
}

/* 00000D98-00000E98       .text init_texPttrnAnm__11daNpc_Ym1_cFScb */
void daNpc_Ym1_c::init_texPttrnAnm(signed char, bool) {
    /* _savegpr_27(this, char, bool, arg3, arg4, arg5, arg6, arg7); */
    if (/* bge */ 1) {
        return 0;
    }
    /* ((dRes_control_c*)((_savegpr_27(this, char, bool, arg3, arg4, arg5, arg6, arg7) + 1748)))->getIDRes((((daNpc_Ym1_c*)(0))->btpResID() & 65535), ((char*)&g_dComIfG_gameInfo + -16460), 64); */
    if (/* bne */ 1) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)((_savegpr_27(this, char, bool, arg3, arg4, arg5, arg6, arg7) + 1748)))->getIDRes((((daNpc_Ym1_c*)(0))->btpResID() & 65535), ((char*)&g_dComIfG_gameInfo + -16460), 64)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 8), 624, ((char*)&@stringBase0 + 24)); */
        OSPanic(((char*)&@stringBase0 + 8), 624, ((char*)&@stringBase0 + 35));
    }
    m6F4 = 0;
    /* field_0x6f6 = 0; */
    /* return _restgpr_27(((mDoExt_btpAnm*)((_savegpr_27(this, char, bool, arg3, arg4, arg5, arg6, arg7) + 1760)))->init(this->field_0x4)); */
}

/* 00000E98-00000F28       .text play_texPttrnAnm__11daNpc_Ym1_cFv */
void daNpc_Ym1_c::play_texPttrnAnm() {
        /* if (this->field_0x8aa != 0) goto L_ddc; */
        /* if (cLib_calcTimer<s>__FPs((this + 1782), arg1, arg2, arg3, arg4, arg5, arg6, arg7) != 0) goto L_e28; */
        /* L_ddc:; */
        m6F4 = (m6F4 + 1);
        /* if (m6F4 < this->field_0x6) goto L_e28; */
        /* if (this->field_0x8aa == 0) goto L_e10; */
        /* goto L_e28; */
        /* L_e10:; */
        /* field_0x6f6 = cLib_getRndValue<i>__Fii(60, 90); */
        m6F4 = 0;
        /* L_e28:; */
        return cLib_getRndValue<i>__Fii(60, 90);
}

/* 00000F28-00000FF4       .text setAnm_anm__11daNpc_Ym1_cFPQ211daNpc_Ym1_c9anm_prm_c */
void daNpc_Ym1_c::setAnm_anm(daNpc_Ym1_c::anm_prm_c*) {
        /* if (/ * blt * / 1) goto L_ef0; */
        /* if ((m8AB & 255) != 0) goto L_e7c; */
        /* goto L_ef0; */
        /* L_e7c:; */
        dNpc_setAnmIDRes(this->field_0x330, this->field_0xc, bckResID(), -1, (this + 1748));
        /* field_0x898 = 0; */
        /* field_0x899 = 0; */
        /* field_0x87c = 0; */
        /* if (m8AB != 8) goto L_ef0; */
        /* L_ef0:; */
        /* return ((mDoExt_McaMorf*)(this->field_0x330))->setMorf((((char*)&l_HIO + 0) + ((mSubType & 255) * 44))); */
}

/* 00000FF4-00001064       .text setAnm_NUM__11daNpc_Ym1_cFii */
void daNpc_Ym1_c::setAnm_NUM(int, int) {
    if (int != 0) {
        /* init_texPttrnAnm(this->field_0x1, 1, arg3, arg4, arg5, arg6, arg7); */
    }
    return setAnm_anm((((char*)&a_anm_prm_tbl$4530 + 0) + (int << 4)), (int << 4));
}

/* 00001064-000010D0       .text setAnm__11daNpc_Ym1_cFv */
void daNpc_Ym1_c::setAnm() {
    /* init_texPttrnAnm(this->field_0x1, 1, arg3, arg4, arg5, arg6, arg7); */
    return setAnm_anm((((char*)&a_anm_prm_tbl$4537 + 0) + ((m8AD & 255) << 4)), ((m8AD & 255) << 4));
}

/* 000010D0-000010D4       .text chngAnmTag__11daNpc_Ym1_cFv */
void daNpc_Ym1_c::chngAnmTag() {
}

/* 000010D4-000010D8       .text ctrlAnmTag__11daNpc_Ym1_cFv */
void daNpc_Ym1_c::ctrlAnmTag() {
}

/* 000010D8-00001118       .text chngAnmAtr__11daNpc_Ym1_cFUc */
void daNpc_Ym1_c::chngAnmAtr(unsigned char) {
        /* if ((char & 16777215) == this->field_0x8a8) goto L_101c; */
        /* if ((char & 16777215) <= 13) goto L_1014; */
        /* goto L_101c; */
        /* L_1014:; */
        /* field_0x8a8 = char; */
        /* L_101c:; */
        return setAnm_ATR();
}

/* 00001118-0000111C       .text ctrlAnmAtr__11daNpc_Ym1_cFv */
void daNpc_Ym1_c::ctrlAnmAtr() {
}

/* 0000111C-00001180       .text setAnm_ATR__11daNpc_Ym1_cFv */
void daNpc_Ym1_c::setAnm_ATR() {
    /* init_texPttrnAnm(this->field_0x1, 1, arg3, arg4, arg5, arg6, arg7); */
    return setAnm_anm((((char*)&a_anm_prm_tbl$4575 + 0) + (this->field_0x8a8 << 4)), (this->field_0x8a8 << 4));
}

/* 00001180-0000123C       .text anmAtr__11daNpc_Ym1_cFUs */
void daNpc_Ym1_c::anmAtr(unsigned short) {
        /* if ((short & 65535) == 14) goto L_1124; */
        /* if (/ * bge * / 1) goto L_112c; */
        /* if ((short & 65535) == 6) goto L_10c4; */
        /* goto L_112c; */
        /* L_10c4:; */
        /* if (this->field_0x8b3 != 0) goto L_10ec; */
        /* chngAnmAtr(this->field_0x5bcf); */
        /* field_0x8b3 = (this->field_0x8b3 + 1); */
        /* L_10ec:; */
        /* if (this->field_0x5bd0 == 255) goto L_112c; */
        /* if (this->field_0x5bd0 == this->field_0x8a9) goto L_112c; */
        /* field_0x5bd0 = 255; */
        chngAnmTag();
        /* goto L_112c; */
        /* L_1124:; */
        /* field_0x8b3 = 0; */
        /* L_112c:; */
        ctrlAnmAtr();
        return ctrlAnmTag();
}

/* 0000123C-000014F0       .text next_msgStatus__11daNpc_Ym1_cFPUl */
void daNpc_Ym1_c::next_msgStatus(unsigned long*) {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * beq * / 1) goto L_12ac; */
        /* if (/ * bge * / 1) goto L_11d4; */
        /* if (/ * beq * / 1) goto L_1258; */
        /* if (/ * bge * / 1) goto L_11ac; */
        /* if (/ * beq * / 1) goto L_1234; */
        /* if (/ * bge * / 1) goto L_11a0; */
        /* if (/ * beq * / 1) goto L_1228; */
        /* goto L_13e4; */
        /* L_11a0:; */
        /* if (/ * beq * / 1) goto L_1240; */
        /* goto L_13e4; */
        /* L_11ac:; */
        /* if (/ * beq * / 1) goto L_127c; */
        /* if (/ * bge * / 1) goto L_11c8; */
        /* if (/ * beq * / 1) goto L_13e4; */
        /* if (/ * bge * / 1) goto L_1270; */
        /* goto L_1264; */
        /* L_11c8:; */
        /* if (/ * beq * / 1) goto L_124c; */
        /* goto L_13e4; */
        /* L_11d4:; */
        /* if (/ * beq * / 1) goto L_1364; */
        /* if (/ * bge * / 1) goto L_1204; */
        /* if (/ * beq * / 1) goto L_134c; */
        /* if (/ * bge * / 1) goto L_11f8; */
        /* if (/ * beq * / 1) goto L_1340; */
        /* goto L_13e4; */
        /* L_11f8:; */
        /* if (/ * beq * / 1) goto L_1358; */
        /* goto L_13e4; */
        /* L_1204:; */
        /* if (/ * beq * / 1) goto L_13a4; */
        /* if (/ * bge * / 1) goto L_121c; */
        /* if (/ * beq * / 1) goto L_1370; */
        /* goto L_13e4; */
        /* L_121c:; */
        /* if (/ * beq * / 1) goto L_13d8; */
        /* goto L_13e4; */
        /* L_1228:; */
        base = 2302;
        /* goto L_13e8; */
        /* L_1234:; */
        base = 2304;
        /* goto L_13e8; */
        /* L_1240:; */
        base = 2306;
        /* goto L_13e8; */
        /* L_124c:; */
        base = 2315;
        /* goto L_13e8; */
        /* L_1258:; */
        base = 2309;
        /* goto L_13e8; */
        /* L_1264:; */
        base = 2310;
        /* goto L_13e8; */
        /* L_1270:; */
        base = 2312;
        /* goto L_13e8; */
        /* L_127c:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(12292) == 0) goto L_12a0; */
        /* goto L_13e8; */
        /* L_12a0:; */
        base = 2313;
        /* goto L_13e8; */
        /* L_12ac:; */
        /* if (dKy_daynight_check() != 1) goto L_12c4; */
        base = 2608;
        /* goto L_13e8; */
        /* L_12c4:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->getEventReg() == 0) goto L_1314; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(13314) == 0) goto L_1308; */
        base = 2609;
        /* goto L_13e8; */
        /* L_1308:; */
        base = 2611;
        /* goto L_13e8; */
        /* L_1314:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(13314) == 0) goto L_1334; */
        base = 2615;
        /* goto L_13e8; */
        /* L_1334:; */
        base = 2613;
        /* goto L_13e8; */
        /* L_1340:; */
        base = 2610;
        /* goto L_13e8; */
        /* L_134c:; */
        base = 2612;
        /* goto L_13e8; */
        /* L_1358:; */
        base = 2614;
        /* goto L_13e8; */
        /* L_1364:; */
        base = 2616;
        /* goto L_13e8; */
        /* L_1370:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(13314) == 0) goto L_1398; */
        base = 2620;
        /* goto L_13e8; */
        /* L_1398:; */
        base = 2621;
        /* goto L_13e8; */
        /* L_13a4:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(13314) == 0) goto L_13cc; */
        base = 2624;
        /* goto L_13e8; */
        /* L_13cc:; */
        base = 2623;
        /* goto L_13e8; */
        /* L_13d8:; */
        base = 2626;
        /* goto L_13e8; */
        /* L_13e4:; */
        /* L_13e8:; */
        return _restgpr_29(16);
}

/* 000014F0-00001584       .text getMsg_YM1_0__11daNpc_Ym1_cFv */
void daNpc_Ym1_c::getMsg_YM1_0() {
    if (this->field_0xb4 != 0) {
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(16) != 0) goto L_1484; */
        return 2307;
    }
    if (((dSv_event_c*)((2307 + 1572)))->isEventBit(32) != 0) {
        return 2303;
    }
    if (((dSv_event_c*)((2307 + 1572)))->isEventBit(10880) != 0) {
    }
    /* L_1484:; */
    return 2301;
}

/* 00001584-000015C4       .text getMsg_YM1_1__11daNpc_Ym1_cFv */
void daNpc_Ym1_c::getMsg_YM1_1() {
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(10500) != 0) {
    }
    return 2311;
}

/* 000015C4-00001630       .text getMsg_YM2_0__11daNpc_Ym1_cFv */
void daNpc_Ym1_c::getMsg_YM2_0() {
    if (chk_BlackPig() == 0) {
    }
    return (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(128) + 2601);
}

/* 00001630-0000166C       .text getMsg_YM2_1__11daNpc_Ym1_cFv */
void daNpc_Ym1_c::getMsg_YM2_1() {
    return (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(2817) + 2605);
}

/* 0000166C-00001718       .text getMsg_YM2_2__11daNpc_Ym1_cFv */
void daNpc_Ym1_c::getMsg_YM2_2() {
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(12608) != 0) goto L_15b8; */
        return 2607;
        /* L_15b8:; */
        /* if (dKy_daynight_check() != 1) goto L_15e0; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(13314);
        /* goto L_1618; */
        /* L_15e0:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(13696) != 0) goto L_15fc; */
        return 2619;
        /* L_15fc:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(13632) != 0) goto L_1618; */
        /* L_1618:; */
        return 2622;
}

/* 00001718-00001738       .text getMsg_YM2_3__11daNpc_Ym1_cFv */
void daNpc_Ym1_c::getMsg_YM2_3() {
    this->getMsg_YM2_2();
}

/* 00001738-000017DC       .text getMsg__11daNpc_Ym1_cFv */
void daNpc_Ym1_c::getMsg() {
        /* if ((mStaff & 255) == 3) goto L_16bc; */
        /* if (/ * bge * / 1) goto L_1688; */
        /* if ((mStaff & 255) == 1) goto L_16a4; */
        /* if (/ * bge * / 1) goto L_16b0; */
        /* if ((mStaff & 255) >= 0) goto L_1698; */
        /* goto L_16dc; */
        /* L_1688:; */
        /* if ((mStaff & 255) == 5) goto L_16d4; */
        /* if (/ * bge * / 1) goto L_16dc; */
        /* goto L_16c8; */
        /* L_1698:; */
        getMsg_YM1_0();
        /* goto L_16dc; */
        /* L_16a4:; */
        ((daNpc_Ym1_c*)(getMsg_YM1_0()))->getMsg_YM1_1();
        /* goto L_16dc; */
        /* L_16b0:; */
        ((daNpc_Ym1_c*)(((daNpc_Ym1_c*)(getMsg_YM1_0()))->getMsg_YM1_1()))->getMsg_YM2_0();
        /* goto L_16dc; */
        /* L_16bc:; */
        ((daNpc_Ym1_c*)(((daNpc_Ym1_c*)(((daNpc_Ym1_c*)(getMsg_YM1_0()))->getMsg_YM1_1()))->getMsg_YM2_0()))->getMsg_YM2_1();
        /* goto L_16dc; */
        /* L_16c8:; */
        ((daNpc_Ym1_c*)(((daNpc_Ym1_c*)(((daNpc_Ym1_c*)(((daNpc_Ym1_c*)(getMsg_YM1_0()))->getMsg_YM1_1()))->getMsg_YM2_0()))->getMsg_YM2_1()))->getMsg_YM2_2();
        /* goto L_16dc; */
        /* L_16d4:; */
        /* L_16dc:; */
        return ((daNpc_Ym1_c*)(((daNpc_Ym1_c*)(((daNpc_Ym1_c*)(((daNpc_Ym1_c*)(((daNpc_Ym1_c*)(getMsg_YM1_0()))->getMsg_YM1_1()))->getMsg_YM2_0()))->getMsg_YM2_1()))->getMsg_YM2_2()))->getMsg_YM2_3();
}

/* 000017DC-0000182C       .text eventOrder__11daNpc_Ym1_cFv */
void daNpc_Ym1_c::eventOrder() {
    if ((m8AC & 255) != 1) {
        /* if ((m8AC & 255) == 2) goto L_1730; */
    }
    if (m8AC == 1) {
    }
    /* L_1730:; */
    return fopAcM_orderSpeakEvent(this);
}

/* 0000182C-0000186C       .text checkOrder__11daNpc_Ym1_cFv */
void daNpc_Ym1_c::checkOrder() {
    if ((m8AC & 255) != 1) {
    }
    m8AC = 0;
    /* field_0x8a3 = 1; */
    return this;
}

/* 0000186C-00001A08       .text set_collision_sp__11daNpc_Ym1_cFv */
void daNpc_Ym1_c::set_collision_sp() {
        /* if (this->field_0x8a3 != 0) goto L_18f4; */
        /* if ((m8AB & 255) >= 5) goto L_17d8; */
        /* if ((m8AB & 255) == 1) goto L_17e4; */
        /* goto L_189c; */
        /* L_17d8:; */
        /* if ((m8AB & 255) >= 8) goto L_189c; */
        /* goto L_1840; */
        /* L_17e4:; */
        /* PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0), arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x206); */
        PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0));
        /* goto L_18bc; */
        /* L_1840:; */
        PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
        /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x206); */
        PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0));
        /* goto L_18bc; */
        /* L_189c:; */
        /* L_18bc:; */
        ((cM3dGCyl*)((this + 1676)))->SetC();
        ((cM3dGCyl*)((this + 1676)))->SetR();
        ((cM3dGCyl*)((this + 1676)))->SetH();
        /* L_18f4:; */
        return ((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set((this + 1396));
}

/* 00001A08-00001B24       .text set_cutGrass__11daNpc_Ym1_cFv */
void daNpc_Ym1_c::set_cutGrass() {
    if (m8A6 == 0) {
        /* if (m8AB == 1) goto L_1a20; */
        /* if (((J3DFrameCtrl*)((this->field_0x330 + 88)))->checkPass(arg1, arg2, arg3, arg4, arg5, arg6, arg7) != 0) goto L_1a20; */
        PSMTXCopy((this->field_0x8c + ((mHandLJointIndex & 255) * 48)), ((char*)&now__14mDoMtx_stack_c + 0));
        /* ((dPa_control_c*)(this->field_0x5ab8))->setSimple(986); */
    }
    /* L_1a20:; */
    return ((JAIZelBasic*)(base))->seStart(22546, (this + 504), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
}

/* 00001B24-00001B5C       .text chk_BlackPig__11daNpc_Ym1_cFv */
void daNpc_Ym1_c::chk_BlackPig() {
    /* return ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->getEventReg((arg1 + -16385)); */
}

/* 00001B5C-00001B8C       .text chk_nbt_attn__11daNpc_Ym1_cFv */
void daNpc_Ym1_c::chk_nbt_attn() {
    if ((m8AB & 255) != 5) {
        /* if ((m8AB & 255) != 6) goto L_1a94; */
        /* if ((m8AB & 255) == 7) goto L_1a98; */
    }
    /* L_1a94:; */
    /* L_1a98:; */
    return 1;
}

/* 00001B8C-00001C24       .text chk_talk__11daNpc_Ym1_cFv */
void daNpc_Ym1_c::chk_talk() {
        /* if (this->field_0x52b8 == 1) goto L_1adc; */
        /* if (this->field_0x52b8 == 2) goto L_1adc; */
        /* if (this->field_0x52b8 != 3) goto L_1ae0; */
        /* L_1adc:; */
        /* L_1ae0:; */
        /* if (1 == 0) goto L_1b18; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->ChkPresentEnd() == 0) goto L_1b10; */
        return 1;
        /* L_1b10:; */
        return 0;
        /* L_1b18:; */
        /* field_0x89a = 255; */
        return 1;
}

/* 00001C24-00001C64       .text chk_parts_notMov__11daNpc_Ym1_cFv */
void daNpc_Ym1_c::chk_parts_notMov() {
    /* if (this->field_0x882 == this->field_0x292) { */
        /* if (this->field_0x884 == this->field_0x296) goto L_1b70; */
        /* if (this->field_0x880 == this->field_0x206) goto L_1b70; */
    /* L_1b70:; */
    return 1;
}

/* 00001C64-00001DD0       .text lookBack__11daNpc_Ym1_cFv */
void daNpc_Ym1_c::lookBack() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if ((m8AF & 255) == 2) goto L_1c5c; */
        /* if (/ * bge * / 1) goto L_1c08; */
        /* if ((m8AF & 255) >= 1) goto L_1c14; */
        /* goto L_1c80; */
        /* L_1c08:; */
        /* if ((m8AF & 255) >= 4) goto L_1c80; */
        /* goto L_1c7c; */
        /* L_1c14:; */
        dNpc_playerEyePos();
        /* field_0x858 = 0; */
        /* field_0x85c = 0; */
        /* field_0x860 = 0; */
        /* goto L_1c80; */
        /* L_1c5c:; */
        /* goto L_1c80; */
        /* L_1c7c:; */
        /* L_1c80:; */
        /* return _restgpr_29(((dNpc_JntCtrl_c*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 656)))->lookAtTarget_2((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518))); */
}

/* 00001DD0-00001E50       .text chkAttention__11daNpc_Ym1_cFv */
void daNpc_Ym1_c::chkAttention() {
    if (((dAttention_c*)(((char*)&g_dComIfG_gameInfo + 22536)))->LockonTruth() == 0) {
    }
    return ((this - ((dAttention_c*)(((char*)&g_dComIfG_gameInfo + 22536)))->ActionTarget(0)) >> 5);
}

/* 00001E50-00001F5C       .text setAttention__11daNpc_Ym1_cFb */
void daNpc_Ym1_c::setAttention(bool) {
        /* if (chk_nbt_attn() == 0) goto L_1e08; */
        /* if (m8AB != 6) goto L_1de8; */
        /* goto L_1df0; */
        /* L_1de8:; */
        /* L_1df0:; */
        /* L_1e08:; */
        /* field_0x274 = 0; */
        /* field_0x278 = (this->field_0xc + base); */
        /* field_0x27c = 0; */
        /* if (this->field_0x888 != 0) goto L_1e38; */
        /* if (bool == 0) goto L_1e50; */
        /* L_1e38:; */
        eyePos = 0;
        /* field_0x264 = 0; */
        /* field_0x268 = 0; */
        /* L_1e50:; */
        return C_@4940;
}

/* 00001F5C-00002088       .text decideType__11daNpc_Ym1_cFi */
void daNpc_Ym1_c::decideType(int) {
        /* if (mSubType != 0) goto L_1e98; */
        return 1;
        /* L_1e98:; */
        mSubType = -1;
        mStaff = -1;
        /* if (this->field_0x8 == 318) goto L_1ef4; */
        /* if (/ * bge * / 1) goto L_1f4c; */
        /* if (this->field_0x8 >= 317) goto L_1ec0; */
        /* goto L_1f4c; */
        /* L_1ec0:; */
        mSubType = 1;
        /* if (int == 1) goto L_1eec; */
        /* if (/ * bge * / 1) goto L_1f4c; */
        /* if (int >= 0) goto L_1ee0; */
        /* goto L_1f4c; */
        /* L_1ee0:; */
        mStaff = 0;
        /* goto L_1f4c; */
        /* L_1eec:; */
        mStaff = 0;
        /* goto L_1f4c; */
        /* L_1ef4:; */
        mSubType = 2;
        /* if (int == 2) goto L_1f38; */
        /* if (/ * bge * / 1) goto L_1f18; */
        /* if (int == 0) goto L_1f24; */
        /* if (/ * bge * / 1) goto L_1f2c; */
        /* goto L_1f4c; */
        /* L_1f18:; */
        /* if (int >= 4) goto L_1f4c; */
        /* goto L_1f44; */
        /* L_1f24:; */
        mStaff = 2;
        /* goto L_1f4c; */
        /* L_1f2c:; */
        mStaff = 3;
        /* goto L_1f4c; */
        /* L_1f38:; */
        mStaff = 4;
        /* goto L_1f4c; */
        /* L_1f44:; */
        mStaff = 5;
        /* L_1f4c:; */
        /* strcpy((this + 1748), ((char*)&@stringBase0 + 40), arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if ((mSubType & 255) == -1) goto L_1f88; */
        /* if ((mStaff & 255) == -1) goto L_1f88; */
        /* L_1f88:; */
        return 1;
}

/* 00002088-00002128       .text privateCut__11daNpc_Ym1_cFi */
void daNpc_Ym1_c::privateCut(int) {
        /* _savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * beq * / 1) goto L_2024; */
        /* field_0x8a7 = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyActIdx(); */
        /* if ((this->field_0x8a7 & 255) != -1) goto L_200c; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd();
        /* goto L_2024; */
        /* L_200c:; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getIsAddvance();
        /* L_2024:; */
        return _restgpr_29(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd());
}

/* 00002128-0000214C       .text endEvent__11daNpc_Ym1_cFv */
void daNpc_Ym1_c::endEvent() {
    /* field_0x8a8 = 255; */
    /* field_0x8a9 = 255; */
    return this;
}

/* 0000214C-00002184       .text isEventEntry__11daNpc_Ym1_cFv */
void daNpc_Ym1_c::isEventEntry() {
    /* return ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x2c4, 0, 0, arg4); */
}

/* 00002184-000021D4       .text event_proc__11daNpc_Ym1_cFi */
void daNpc_Ym1_c::event_proc(int) {
    if (((dNpc_EventCut_c*)((this + 708)))->cutProc() != 0) {
    }
    return privateCut(int);
}

/* 000021D4-00002280       .text set_action__11daNpc_Ym1_cFM11daNpc_Ym1_cFPCvPvPv_iPv */
void daNpc_Ym1_c::set_action(int (daNpc_Ym1_c::*)(void*), void*) {
        /* if (__ptmf_cmpr((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1784)) == 0) goto L_2178; */
        /* if (__ptmf_test((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1784)) == 0) goto L_2144; */
        m8B2 = 9;
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_2144:; */
        m8B2 = 0;
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_2178:; */
        return _restgpr_29(1);
}

/* 00002280-00002324       .text setStt__11daNpc_Ym1_cFSc */
void daNpc_Ym1_c::setStt(signed char) {
    m8AD = char;
    if ((m8AD & 255) <= 11) {
        m8AC = 0;
        /* goto L_221c; */
        m8AC = 0;
        /* field_0x8a8 = 255; */
        /* field_0x8a9 = 255; */
        /* field_0x8b3 = 0; */
        /* goto L_221c; */
        m8AC = 0;
        /* mKariTimer = cLib_getRndValue<i>__Fii(90, 180, m8AD, arg3, arg4, arg5, arg6, arg7); */
    }
    /* L_221c:; */
    return setAnm();
}

/* 00002324-00002448       .text chk_areaIN__11daNpc_Ym1_cFf4cXyz */
void daNpc_Ym1_c::chk_areaIN(float, cXyz) {
    /* _savegpr_29(this, float, cXyz, arg3, arg4, arg5, arg6, arg7); */
    __mi();
    PSVECSquareMag();
    if (/* ble */ 1) {
    }
    if (/* bge */ 1) {
        /* if (this->field_0x8 > this->field_0x90) goto L_2338; */
        return 1;
    }
    /* L_2338:; */
    return _restgpr_29(0);
}

/* 00002448-000025B8       .text kari_1__11daNpc_Ym1_cFv */
void daNpc_Ym1_c::kari_1() {
    __mi();
    PSVECSquareMag();
    if (/* ble */ 1) {
    }
    if (cLib_calcTimer<s>__FPs((this + 2192)) == 0) {
        return 1;
    }
    if (chk_areaIN() != 0) {
        /* if (m89C == 0) goto L_24b0; */
    }
    setStt(2);
    m8AF = 0;
    m8A4 = 1;
    setAnm_NUM(2, 1);
    /* L_24b0:; */
    return 1;
}

/* 000025B8-00002770       .text wait_1__11daNpc_Ym1_cFv */
void daNpc_Ym1_c::wait_1() {
        /* if (m8AB != 2) goto L_252c; */
        /* if (this->field_0x898 == 0) goto L_2524; */
        setAnm_NUM(3, 1);
        m8AF = 0;
        m8A4 = 1;
        /* field_0x88e = cLib_getRndValue<i>__Fii(15, 30); */
        /* L_2524:; */
        return 1;
        /* L_252c:; */
        /* if (m8A5 == 0) goto L_2568; */
        cLib_addCalcAngleS((this + 518), mRotYTarget, 4, (((char*)&l_HIO + 0) + ((mSubType & 255) * 44)), 128);
        /* L_2568:; */
        /* if (this->field_0x8a3 == 0) goto L_25b0; */
        /* if (chk_talk() == 0) goto L_25a8; */
        setStt(5);
        m8AF = 1;
        m8A4 = 0;
        m8A5 = 0;
        /* field_0x29a = 1; */
        /* L_25a8:; */
        return 1;
        /* L_25b0:; */
        m8AC = 2;
        m8AF = 1;
        m8A4 = 1;
        /* if (this->field_0x8a2 == 0) goto L_25e0; */
        /* field_0x88e = cLib_getRndValue<i>__Fii(15, 30); */
        /* L_25e0:; */
        chk_areaIN();
        /* if (/ * beq * / 1) goto L_266c; */
        /* if (cLib_calcTimer<s>__FPs((this + 2190)) != 0) goto L_2664; */
        setStt(3);
        m8AF = 0;
        m8A4 = 1;
        /* L_2664:; */
        return 1;
        /* L_266c:; */
        return 1;
}

/* 00002770-00002958       .text wait_2__11daNpc_Ym1_cFv */
void daNpc_Ym1_c::wait_2() {
        /* if (m8A5 == 0) goto L_2704; */
        cLib_addCalcAngleS((this + 518), mRotYTarget, 4, (((char*)&l_HIO + 0) + ((mSubType & 255) * 44)), 128);
        /* L_2704:; */
        /* if (this->field_0x8a3 == 0) goto L_274c; */
        /* if (chk_talk() == 0) goto L_2744; */
        setStt(5);
        m8AF = 1;
        m8A4 = 0;
        m8A5 = 0;
        /* field_0x29a = 1; */
        /* L_2744:; */
        return 1;
        /* L_274c:; */
        m8AC = 2;
        m8AF = 0;
        m8A4 = 1;
        /* if (1 != 0) goto L_2840; */
        /* if (mSubType != 1) goto L_2780; */
        /* goto L_2784; */
        /* L_2780:; */
        /* L_2784:; */
        /* if ((mSubType & 255) != 1) goto L_2798; */
        /* goto L_279c; */
        /* L_2798:; */
        /* L_279c:; */
        /* if (this->field_0x8a2 == 0) goto L_27b8; */
        /* field_0x88e = cLib_getRndValue<i>__Fii(15, 30); */
        /* L_27b8:; */
        /* if (cLib_calcTimer<s>__FPs((this + 2190)) == 0) goto L_27d0; */
        m8AF = 1;
        /* L_27d0:; */
        /* if (dNpc_chkAttn(this) == 0) goto L_2830; */
        return 1;
        /* L_2830:; */
        m8AF = 0;
        m8A5 = 1;
        /* L_2840:; */
        return 1;
}

/* 00002958-00002BA0       .text talk_1__11daNpc_Ym1_cFv */
void daNpc_Ym1_c::talk_1() {
        chk_parts_notMov();
        talk(1);
        /* if (this->field_0x6b0 != 0) goto L_28ac; */
        /* goto L_2a9c; */
        /* L_28ac:; */
        /* if (this->field_0xf8 == 6) goto L_2a98; */
        /* if (/ * bge * / 1) goto L_28c8; */
        /* if (this->field_0xf8 == 2) goto L_2a98; */
        /* goto L_2a98; */
        /* L_28c8:; */
        /* if (this->field_0xf8 == 19) goto L_28d4; */
        /* goto L_2a98; */
        /* L_28d4:; */
        /* if (this->field_0x6a4 == 2608) goto L_2a38; */
        /* if (/ * bge * / 1) goto L_2938; */
        /* if (this->field_0x6a4 == 2315) goto L_2a20; */
        /* if (/ * bge * / 1) goto L_2914; */
        /* if (this->field_0x6a4 == 2306) goto L_2990; */
        /* if (/ * bge * / 1) goto L_2908; */
        /* if (this->field_0x6a4 == 2302) goto L_2a20; */
        /* goto L_2a64; */
        /* L_2908:; */
        /* if (this->field_0x6a4 == 2310) goto L_29a8; */
        /* goto L_2a64; */
        /* L_2914:; */
        /* if (this->field_0x6a4 == 2603) goto L_29d8; */
        /* if (/ * bge * / 1) goto L_292c; */
        /* if (this->field_0x6a4 == 2601) goto L_29c0; */
        /* goto L_2a64; */
        /* L_292c:; */
        /* if (this->field_0x6a4 == 2605) goto L_29f0; */
        /* goto L_2a64; */
        /* L_2938:; */
        /* if (this->field_0x6a4 == 2615) goto L_2a64; */
        /* if (/ * bge * / 1) goto L_2968; */
        /* if (this->field_0x6a4 == 2612) goto L_2a38; */
        /* if (/ * bge * / 1) goto L_295c; */
        /* if (this->field_0x6a4 == 2610) goto L_2a38; */
        /* goto L_2a64; */
        /* L_295c:; */
        /* if (this->field_0x6a4 >= 2614) goto L_2a38; */
        /* goto L_2a64; */
        /* L_2968:; */
        /* if (this->field_0x6a4 >= 2622) goto L_2984; */
        /* if (this->field_0x6a4 >= 2620) goto L_2a50; */
        /* if (this->field_0x6a4 >= 2617) goto L_2a64; */
        /* goto L_2a38; */
        /* L_2984:; */
        /* if (this->field_0x6a4 == 2624) goto L_2a08; */
        /* goto L_2a64; */
        /* L_2990:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(16);
        /* goto L_2a64; */
        /* L_29a8:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(10500);
        /* goto L_2a64; */
        /* L_29c0:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(128);
        /* goto L_2a64; */
        /* L_29d8:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(8);
        /* goto L_2a64; */
        /* L_29f0:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(2817);
        /* goto L_2a64; */
        /* L_2a08:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(13632);
        /* goto L_2a64; */
        /* L_2a20:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(32);
        /* goto L_2a64; */
        /* L_2a38:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(12608);
        /* goto L_2a64; */
        /* L_2a50:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(13696);
        /* L_2a64:; */
        /* field_0x89a = 255; */
        /* field_0x8a3 = 0; */
        setStt(m8AE);
        /* field_0x88e = cLib_getRndValue<i>__Fii(15, 30); */
        endEvent();
        /* L_2a98:; */
        /* L_2a9c:; */
        return (chk_parts_notMov() & 16777215);
}

/* 00002BA0-00002C78       .text turn_1__11daNpc_Ym1_cFv */
void daNpc_Ym1_c::turn_1() {
        cLib_addCalcAngleS((this + 518), mRotYTarget, 4, (((char*)&l_HIO + 0) + ((mSubType & 255) * 44)), 128);
        /* if ((this->field_0x206 - mRotYTarget) != 0) goto L_2b74; */
        /* if (m89C == 0) goto L_2b58; */
        setStt(1);
        /* ((mDoExt_McaMorf*)(this->field_0x330))->setMorf(C_@5244); */
        m8AF = 0;
        m8A4 = 1;
        mKariTimer = cLib_getRndValue<i>__Fii(30, 60);
        /* goto L_2b74; */
        /* L_2b58:; */
        setStt(4);
        m8AF = 0;
        m8A4 = 1;
        /* L_2b74:; */
        return 1;
}

/* 00002C78-00002DD4       .text NBTwai__11daNpc_Ym1_cFv */
void daNpc_Ym1_c::NBTwai() {
        /* if (this->field_0x8a3 == 0) goto L_2bdc; */
        /* if (chk_talk() == 0) goto L_2bd4; */
        setStt(7);
        m8AF = 0;
        m8A4 = 1;
        /* L_2bd4:; */
        return 1;
        /* L_2bdc:; */
        m8AC = 2;
        m8AF = 0;
        m8A4 = 1;
        /* if (((daNpc_Ym1_c*)(1))->chk_BlackPig() == 0) goto L_2c28; */
        setStt(8);
        m8AF = 0;
        m8A4 = 1;
        m8A5 = 1;
        return 1;
        /* L_2c28:; */
        /* if (m8AB != 6) goto L_2c74; */
        /* if (this->field_0x898 != 0) goto L_2c4c; */
        /* if (this->field_0x8a2 == 0) goto L_2c6c; */
        /* L_2c4c:; */
        setAnm_NUM(5, 1);
        mKariTimer = cLib_getRndValue<i>__Fii(90, 180);
        /* L_2c6c:; */
        return 1;
        /* L_2c74:; */
        /* if (this->field_0x8a2 == 0) goto L_2c90; */
        /* field_0x88e = cLib_getRndValue<i>__Fii(15, 30); */
        /* L_2c90:; */
        /* if (cLib_calcTimer<s>__FPs((this + 2190)) == 0) goto L_2cb0; */
        m8AF = 1;
        return 1;
        /* L_2cb0:; */
        /* if (cLib_calcTimer<s>__FPs((this + 2192)) != 0) goto L_2cd0; */
        setAnm_NUM(6, 1);
        /* L_2cd0:; */
        return 1;
}

/* 00002DD4-00002EFC       .text SITwai__11daNpc_Ym1_cFv */
void daNpc_Ym1_c::SITwai() {
        /* if (this->field_0x8a3 == 0) goto L_2d40; */
        /* if (chk_talk() == 0) goto L_2d38; */
        setStt(5);
        m8AF = 1;
        m8A4 = 1;
        /* L_2d38:; */
        return 1;
        /* L_2d40:; */
        m8AC = 2;
        m8AF = 0;
        m8A4 = 1;
        /* if (this->field_0x8a2 == 0) goto L_2d74; */
        /* field_0x88e = cLib_getRndValue<i>__Fii(15, 30); */
        /* L_2d74:; */
        /* if (cLib_calcTimer<s>__FPs((this + 2190)) == 0) goto L_2d8c; */
        m8AF = 1;
        /* L_2d8c:; */
        /* if (dNpc_chkAttn(this) == 0) goto L_2dec; */
        return 1;
        /* L_2dec:; */
        m8AF = 0;
        return 1;
}

/* 00002EFC-00002FFC       .text wait_action1__11daNpc_Ym1_cFPv */
void daNpc_Ym1_c::wait_action1(void*) {
        /* if ((m8B2 & 255) >= 4) goto L_2e44; */
        /* if ((m8B2 & 255) == 0) goto L_2e50; */
        /* if (/ * bge * / 1) goto L_2e70; */
        /* goto L_2ef8; */
        /* L_2e44:; */
        /* if ((m8B2 & 255) == 9) goto L_2ef8; */
        /* goto L_2ef8; */
        /* L_2e50:; */
        /* setStt(1, arg2, arg3, arg4, arg5, arg6, arg7); */
        m8A5 = 1;
        m8B2 = (m8B2 + 1);
        /* goto L_2ef8; */
        /* L_2e70:; */
        /* field_0x8a2 = ((daNpc_Ym1_c*)(m8B2))->chkAttention(); */
        /* if ((m8AD & 255) == 3) goto L_2edc; */
        /* if (/ * bge * / 1) goto L_2e9c; */
        /* if ((m8AD & 255) == 1) goto L_2eac; */
        /* if (/ * bge * / 1) goto L_2ebc; */
        /* goto L_2ef8; */
        /* L_2e9c:; */
        /* if ((m8AD & 255) == 5) goto L_2eec; */
        /* if (/ * bge * / 1) goto L_2ef8; */
        /* goto L_2ecc; */
        /* L_2eac:; */
        /* field_0x888 = kari_1(); */
        /* goto L_2ef8; */
        /* L_2ebc:; */
        /* field_0x888 = wait_1(); */
        /* goto L_2ef8; */
        /* L_2ecc:; */
        /* field_0x888 = wait_2(); */
        /* goto L_2ef8; */
        /* L_2edc:; */
        /* field_0x888 = turn_1(); */
        /* goto L_2ef8; */
        /* L_2eec:; */
        /* field_0x888 = talk_1(); */
        /* L_2ef8:; */
        return 1;
}

/* 00002FFC-00003100       .text wait_action2__11daNpc_Ym1_cFPv */
void daNpc_Ym1_c::wait_action2(void*) {
        /* if ((m8B2 & 255) >= 4) goto L_2f44; */
        /* if ((m8B2 & 255) == 0) goto L_2f50; */
        /* if (/ * bge * / 1) goto L_2f9c; */
        /* goto L_2ffc; */
        /* L_2f44:; */
        /* if ((m8B2 & 255) == 9) goto L_2ffc; */
        /* goto L_2ffc; */
        /* L_2f50:; */
        /* if (mStaff != 5) goto L_2f7c; */
        /* setStt(10, arg2, arg3, arg4, arg5, arg6, arg7); */
        m8A5 = 1;
        m8B2 = (m8B2 + 1);
        /* goto L_2ffc; */
        /* L_2f7c:; */
        ((daNpc_Ym1_c*)(m8B2))->setStt(8);
        m8A5 = 1;
        m8B2 = (m8B2 + 1);
        /* goto L_2ffc; */
        /* L_2f9c:; */
        /* field_0x8a2 = ((daNpc_Ym1_c*)(m8B2))->chkAttention(); */
        /* if ((m8AD & 255) == 8) goto L_2fd0; */
        /* if (/ * bge * / 1) goto L_2fc4; */
        /* if ((m8AD & 255) == 5) goto L_2ff0; */
        /* goto L_2ffc; */
        /* L_2fc4:; */
        /* if ((m8AD & 255) == 10) goto L_2fe0; */
        /* goto L_2ffc; */
        /* L_2fd0:; */
        /* field_0x888 = wait_2(); */
        /* goto L_2ffc; */
        /* L_2fe0:; */
        /* field_0x888 = wait_2(); */
        /* goto L_2ffc; */
        /* L_2ff0:; */
        /* field_0x888 = talk_1(); */
        /* L_2ffc:; */
        return 1;
}

/* 00003100-00003270       .text wait_action3__11daNpc_Ym1_cFPv */
void daNpc_Ym1_c::wait_action3(void*) {
        /* if ((m8B2 & 255) >= 4) goto L_3064; */
        /* if ((m8B2 & 255) == 0) goto L_3070; */
        /* if (/ * bge * / 1) goto L_30f8; */
        /* goto L_316c; */
        /* L_3064:; */
        /* if ((m8B2 & 255) == 9) goto L_316c; */
        /* goto L_316c; */
        /* L_3070:; */
        /* if (chk_BlackPig() == 0) goto L_30a0; */
        setStt(8);
        m8A5 = 1;
        m8B2 = (m8B2 + 1);
        /* goto L_316c; */
        /* L_30a0:; */
        setStt(6);
        PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0));
        /* mDoMtx_YrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x848); */
        PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0));
        m8B2 = (m8B2 + 1);
        /* goto L_316c; */
        /* L_30f8:; */
        /* field_0x8a2 = ((daNpc_Ym1_c*)(m8B2))->chkAttention(); */
        /* if ((m8AD & 255) == 7) goto L_3140; */
        /* if (/ * bge * / 1) goto L_3124; */
        /* if ((m8AD & 255) == 5) goto L_3160; */
        /* if (/ * bge * / 1) goto L_3130; */
        /* goto L_316c; */
        /* L_3124:; */
        /* if ((m8AD & 255) >= 9) goto L_316c; */
        /* goto L_3150; */
        /* L_3130:; */
        /* field_0x888 = NBTwai(); */
        /* goto L_316c; */
        /* L_3140:; */
        /* field_0x888 = talk_1(); */
        /* goto L_316c; */
        /* L_3150:; */
        /* field_0x888 = wait_2(); */
        /* goto L_316c; */
        /* L_3160:; */
        /* field_0x888 = talk_1(); */
        /* L_316c:; */
        return 1;
}

/* 00003270-00003324       .text wait_action4__11daNpc_Ym1_cFPv */
void daNpc_Ym1_c::wait_action4(void*) {
        /* if ((m8B2 & 255) >= 4) goto L_31b8; */
        /* if ((m8B2 & 255) == 0) goto L_31c4; */
        /* if (/ * bge * / 1) goto L_31dc; */
        /* goto L_3220; */
        /* L_31b8:; */
        /* if ((m8B2 & 255) == 9) goto L_3220; */
        /* goto L_3220; */
        /* L_31c4:; */
        /* setStt(11, arg2, arg3, arg4, arg5, arg6, arg7); */
        m8B2 = (m8B2 + 1);
        /* goto L_3220; */
        /* L_31dc:; */
        /* field_0x8a2 = ((daNpc_Ym1_c*)(m8B2))->chkAttention(); */
        /* if ((m8AD & 255) == 11) goto L_3204; */
        /* if (/ * bge * / 1) goto L_3220; */
        /* if ((m8AD & 255) == 5) goto L_3214; */
        /* goto L_3220; */
        /* L_3204:; */
        /* field_0x888 = SITwai(); */
        /* goto L_3220; */
        /* L_3214:; */
        /* field_0x888 = talk_1(); */
        /* L_3220:; */
        return 1;
}

/* 00003324-00003390       .text demo_action1__11daNpc_Ym1_cFPv */
void daNpc_Ym1_c::demo_action1(void*) {
        /* if ((m8B2 & 255) >= 4) goto L_326c; */
        /* if ((m8B2 & 255) == 0) goto L_3278; */
        /* if (/ * bge * / 1) goto L_3284; */
        /* goto L_328c; */
        /* L_326c:; */
        /* if ((m8B2 & 255) == 9) goto L_328c; */
        /* goto L_328c; */
        /* L_3278:; */
        m8B2 = (m8B2 + 1);
        /* goto L_328c; */
        /* L_3284:; */
        /* field_0x8a2 = chkAttention(); */
        /* L_328c:; */
        return 1;
}

/* 00003390-000034CC       .text demo__11daNpc_Ym1_cFv */
void daNpc_Ym1_c::demo() {
        /* if (demoActorID != 0) goto L_32dc; */
        /* if (m8A6 == 0) goto L_33c8; */
        m8A6 = 0;
        /* goto L_33c8; */
        /* L_32dc:; */
        /* if (m8A6 != 0) goto L_3308; */
        m8A6 = 1;
        m89F = 0;
        /* field_0x292 = 0; */
        m290 = 0;
        /* field_0x296 = 0; */
        /* field_0x294 = 0; */
        /* L_3308:; */
        ((dDemo_object_c*)((this->field_0x5abc + 32)))->getActor(demoActorID);
        /* if (this->field_0x6e8 == 0) goto L_3350; */
        m6F4 = (m6F4 + 1);
        /* if (m6F4 < this->field_0x6) goto L_3350; */
        /* L_3350:; */
        ((dDemo_actor_c*)(((dDemo_object_c*)((this->field_0x5abc + 32)))->getActor(demoActorID)))->getP_BtpData((this + 1748));
        /* if (/ * beq * / 1) goto L_33a4; */
        /* ((mDoExt_btpAnm*)((this + 1760)))->init(this->field_0x4); */
        /* field_0x8aa = 1; */
        m6F4 = 0;
        /* L_33a4:; */
        dDemo_setDemoData(this, 106, this->field_0x330, (this + 1748), 0, 0, 0, 0);
        /* L_33c8:; */
        return m8A6;
}

/* 000034CC-0000359C       .text shadowDraw__11daNpc_Ym1_cFv */
void daNpc_Ym1_c::shadowDraw() {
        /* m6D8 = dComIfGd_setShadow(m6D8, 1, this->field_0x50); */
        /* if (m6D8 == 0) goto L_349c; */
        /* if (m6D0 == 0) goto L_3484; */
        ((dDlst_shadowControl_c*)(((char*)&g_dComIfG_gameInfo + 24416)))->addReal(m6D8, m6D0);
        /* L_3484:; */
        /* L_349c:; */
        return ((dDlst_shadowControl_c*)(((char*)&g_dComIfG_gameInfo + 24416)))->addReal(m6D8, mpHeadModel);
}

/* 0000359C-000037A0       .text _draw__11daNpc_Ym1_cFv */
BOOL daNpc_Ym1_c::_draw() {
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (m89E != 0) goto L_34f0; */
        /* if (m8A0 == 0) goto L_34f8; */
        /* L_34f0:; */
        return 1;
        /* L_34f8:; */
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(0, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x50, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(mpHeadModel, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        /* if ((mSubType & 255) == 2) goto L_3564; */
        /* if (/ * bge * / 1) goto L_3590; */
        /* if ((mSubType & 255) >= 1) goto L_3558; */
        /* goto L_3590; */
        /* L_3558:; */
        /* ((mDoExt_McaMorf*)(this->field_0x330))->entryDL(); */
        /* goto L_3590; */
        /* L_3564:; */
        /* ((mDoExt_McaMorf*)(this->field_0x330))->entryDL(((dRes_control_c*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1748)))->getIDRes(13, ((char*)&g_dComIfG_gameInfo + -16460), 64)); */
        /* L_3590:; */
        /* ((mDoExt_btpAnm*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1760)))->entry(this->field_0x4, m6F4); */
        mDoExt_modelEntryDL(mpHeadModel);
        /* ((J3DMaterialTable*)((this->field_0x4 + 88)))->removeTexNoAnimator(this->field_0x6e8); */
        /* if (m6D0 == 0) goto L_35d8; */
        /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(m6D0, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
        mDoExt_modelEntryDL(m6D0);
        /* L_35d8:; */
        /* ((daNpc_Ym1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->shadowDraw(); */
        /* if ((mSubType & 255) == 2) goto L_3620; */
        /* if (/ * bge * / 1) goto L_3644; */
        /* if ((mSubType & 255) >= 1) goto L_3600; */
        /* goto L_3644; */
        /* L_3600:; */
        /* dSnap_RegistFig(80, _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), C_@4494); */
        /* goto L_3644; */
        /* L_3620:; */
        /* dSnap_RegistFig(78, _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), this->field_0x20e, C_@4494); */
        /* L_3644:; */
        /* if (((mSubType & 255) * 44) == 0) goto L_3688; */
        /* L_3688:; */
        mKariFlag = 0;
        return _restgpr_28(1);
}

/* 000037A0-00003A5C       .text _execute__11daNpc_Ym1_cFv */
BOOL daNpc_Ym1_c::_execute() {
        /* if (m8A1 != 0) goto L_3710; */
        m834 = 0;
        /* field_0x838 = 0; */
        /* field_0x83c = 0; */
        m8A1 = 1;
        /* L_3710:; */
        /* if (chk_nbt_attn() == 0) goto L_3770; */
        ((dNpc_JntCtrl_c*)((this + 656)))->setParam(0, 0, 0, 0, 8192, 14560, -8192);
        /* goto L_37bc; */
        /* L_3770:; */
        ((dNpc_JntCtrl_c*)((this + 656)))->setParam(((mSubType & 255) * 44));
        /* L_37bc:; */
        /* if (m89E == 0) goto L_37dc; */
        /* if (demoActorID != 0) goto L_37dc; */
        return 1;
        /* L_37dc:; */
        checkOrder();
        /* if (demo() != 0) goto L_3888; */
        /* if (this->field_0x529a == 0) goto L_3828; */
        /* if (this->field_0xf8 == 1) goto L_3828; */
        /* L_3828:; */
        /* if (isEventEntry() < 0) goto L_383c; */
        event_proc(isEventEntry());
        /* goto L_3850; */
        /* L_383c:; */
        __ptmf_scall(this, 0);
        /* L_3850:; */
        lookBack();
        /* if (mStaff == 1) goto L_387c; */
        fopAcM_posMoveF(this, (this + 1336));
        ((dBgS_Acch*)((this + 820)))->CrrPos(((char*)&g_dComIfG_gameInfo + 4768));
        /* L_387c:; */
        play_animation();
        /* goto L_3890; */
        /* L_3888:; */
        m89E = 0;
        /* L_3890:; */
        eventOrder();
        /* if (m89F != 0) goto L_38d4; */
        /* L_38d4:; */
        /* field_0x1b5 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetRoomId((this + 1052)); */
        /* field_0x1b6 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetPolyColor((this + 1052)); */
        setMtx(0);
        set_cutGrass();
        /* if (mStaff != 0) goto L_3940; */
        ((dCcMassS_Mng*)(((char*)&g_dComIfG_gameInfo + 20216)))->SetAreaChk((this + 1796), 3, ((char*)&area_check__FP10fopAc_ac_cP4cXyzUl + 0));
        /* L_3940:; */
        /* if (m8A6 != 0) goto L_3954; */
        set_collision_sp();
        /* L_3954:; */
        return 1;
}

/* 00003A5C-00003AB0       .text _delete__11daNpc_Ym1_cFv */
BOOL daNpc_Ym1_c::_delete() {
    /* dComIfG_resDelete((this + 1732), (this + 1748), arg2); */
    if (heap != 0) {
        /* if (this->field_0x330 != 0) goto L_39ac; */
        /* ((mDoExt_McaMorf*)(this->field_0x330))->stopZelAnime(); */
    }
    /* L_39ac:; */
    return 1;
}

/* 00003AB0-00003BDC       .text _create__11daNpc_Ym1_cFv */
cPhs_State daNpc_Ym1_c::_create() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_3a08; */
        /* if (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_39fc; */
        __ct();
        /* L_39fc:; */
        /* L_3a08:; */
        /* if (((daNpc_Ym1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->decideType((this->field_0xb0 & 16777215)) != 0) goto L_3a28; */
        return 5;
        /* L_3a28:; */
        /* m89D = ((4 - dComIfG_resLoad((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1732), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1748))) >> 5); */
        /* if (m89D != 0) goto L_3a58; */
        /* goto L_3ad8; */
        /* L_3a58:; */
        /* if (fopAcM_entrySolidHeap(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), ((char*)&CheckCreateHeap__FP10fopAc_ac_c + 0), ((char*)&a_siz_tbl$5560 + 0)) != 0) goto L_3a90; */
        return 5;
        /* L_3a90:; */
        cullMtx = (this->field_0x50 + 36);
        /* fopAcM_setCullSizeBox(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (((daNpc_Ym1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->createInit() == 0) goto L_3ad8; */
        /* L_3ad8:; */
        /* return _restgpr_29(dComIfG_resLoad((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1732), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1748))); */
}

/* 0000405C-00004360       .text bodyCreateHeap__11daNpc_Ym1_cFv */
void daNpc_Ym1_c::bodyCreateHeap() {
    /* ((dRes_control_c*)((this + 1748)))->getIDRes(10, ((char*)&g_dComIfG_gameInfo + -16460), 64, arg4, arg5); */
    if (/* bne */ 1) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)((this + 1748)))->getIDRes(10, ((char*)&g_dComIfG_gameInfo + -16460), 64, arg4, arg5)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 8), 2417, ((char*)&@stringBase0 + 49)); */
        OSPanic(((char*)&@stringBase0 + 8), 2417, ((char*)&@stringBase0 + 35));
    }
    __nw(180);
    if (/* beq */ 1) {
    }
    /* field_0x330 = __ct(__nw(180), 1); */
    if (this->field_0x330 == 0) {
        return 0;
    }
    if (this->field_0x50 == 0) {
        /* field_0x330 = 0; */
        return 0;
    }
    /* mHeadJointIdx = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 64)); */
    if (mHeadJointIdx != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 64))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 8), 2431, ((char*)&@stringBase0 + 69)); */
        OSPanic(((char*)&@stringBase0 + 8), 2431, ((char*)&@stringBase0 + 35));
    }
    /* mBboneJointIdx = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 88)); */
    if (mBboneJointIdx != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 88))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 8), 2433, ((char*)&@stringBase0 + 97)); */
        OSPanic(((char*)&@stringBase0 + 8), 2433, ((char*)&@stringBase0 + 35));
    }
    /* mHandLJointIndex = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 118)); */
    if (mHandLJointIndex != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 118))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 8), 2435, ((char*)&@stringBase0 + 124)); */
        OSPanic(((char*)&@stringBase0 + 8), 2435, ((char*)&@stringBase0 + 35));
    }
    /* mHandRJointIndex = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 145)); */
    if (mHandRJointIndex != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 145))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 8), 2437, ((char*)&@stringBase0 + 151)); */
        OSPanic(((char*)&@stringBase0 + 8), 2437, ((char*)&@stringBase0 + 35));
    }
    /* field_0x8 = 0; */
    /* field_0x8 = 0; */
    /* field_0x14 = this; */
    return 1;
}

/* 00004360-00004460       .text headCreateHeap__11daNpc_Ym1_cFv */
void daNpc_Ym1_c::headCreateHeap() {
    /* ((dRes_control_c*)((this + 1748)))->getIDRes((((mSubType & 255) << 2) & 65535), ((char*)&g_dComIfG_gameInfo + -16460), 64, arg4, arg5); */
    if (/* bne */ 1) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)((this + 1748)))->getIDRes((((mSubType & 255) << 2) & 65535), ((char*)&g_dComIfG_gameInfo + -16460), 64, arg4, arg5)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 8), 2468, ((char*)&@stringBase0 + 49)); */
    }
    mpHeadModel = mDoExt_J3DModel(OSPanic(((char*)&@stringBase0 + 8), 2468, ((char*)&@stringBase0 + 35)));
    if (mpHeadModel == 0) {
        return 0;
    }
    return (init_texPttrnAnm(((char*)&a_tex_pttrn_num_tbl$5870 + 0), 0) & 16777215);
}

/* 00004460-00004534       .text itemCreateHeap__11daNpc_Ym1_cFv */
void daNpc_Ym1_c::itemCreateHeap() {
        /* if (mStaff != 0) goto L_4424; */
        /* ((dRes_control_c*)((this + 1748)))->getIDRes(9, ((char*)&g_dComIfG_gameInfo + -16460), 64, arg4, arg5); */
        /* if (/ * bne * / 1) goto L_43f8; */
        /* ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)((this + 1748)))->getIDRes(9, ((char*)&g_dComIfG_gameInfo + -16460), 64, arg4, arg5)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 8), 2502, ((char*)&@stringBase0 + 49)); */
        /* L_43f8:; */
        m6D0 = mDoExt_J3DModel(OSPanic(((char*)&@stringBase0 + 8), 2502, ((char*)&@stringBase0 + 35)));
        /* if (m6D0 != 0) goto L_442c; */
        return 0;
        /* L_4424:; */
        m6D0 = 0;
        /* L_442c:; */
        return 1;
}

/* 00004534-000045F8       .text CreateHeap__11daNpc_Ym1_cFv */
void daNpc_Ym1_c::CreateHeap() {
    if (bodyCreateHeap() == 0) {
        return 0;
    }
    if (headCreateHeap() == 0) {
        /* field_0x330 = 0; */
        return 0;
    }
    if (itemCreateHeap() == 0) {
        /* field_0x330 = 0; */
        return 0;
    }
    ((dBgS_AcchCir*)((this + 1272)))->SetWall(C_@4787);
    ((dBgS_Acch*)((this + 820)))->Set((this + 504), (this + 484), this, 1, (this + 1272), (this + 544), 0);
    return 1;
}

/* 000045F8-00004618       .text daNpc_Ym1_Create__FP10fopAc_ac_c */
static cPhs_State daNpc_Ym1_Create(fopAc_ac_c* i_this) {
    return ((daNpc_Ym1_c*)i_this)->_create();
}

/* 00004618-00004638       .text daNpc_Ym1_Delete__FP11daNpc_Ym1_c */
static BOOL daNpc_Ym1_Delete(daNpc_Ym1_c* i_this) {
    return ((daNpc_Ym1_c*)i_this)->_delete();
}

/* 00004638-00004658       .text daNpc_Ym1_Execute__FP11daNpc_Ym1_c */
static BOOL daNpc_Ym1_Execute(daNpc_Ym1_c* i_this) {
    return ((daNpc_Ym1_c*)i_this)->_execute();
}

/* 00004658-00004678       .text daNpc_Ym1_Draw__FP11daNpc_Ym1_c */
static BOOL daNpc_Ym1_Draw(daNpc_Ym1_c* i_this) {
    return ((daNpc_Ym1_c*)i_this)->_draw();

/* 00004678-00004680       .text daNpc_Ym1_IsDelete__FP11daNpc_Ym1_c */
static BOOL daNpc_Ym1_IsDelete(daNpc_Ym1_c*) {
    return 1;

static actor_method_class l_daNpc_Ym1_Method = {
    (process_method_func)daNpc_Ym1_Create,
    (process_method_func)daNpc_Ym1_Delete,
    (process_method_func)daNpc_Ym1_Execute,
    (process_method_func)daNpc_Ym1_IsDelete,
    (process_method_func)daNpc_Ym1_Draw,
};

actor_process_profile_definition g_profile_NPC_YM1 = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0007,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_NPC_YM1_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daNpc_Ym1_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_NPC_YM1_e,
    /* Actor SubMtd */ &l_daNpc_Ym1_Method,
    /* Status       */ 0x07 | fopAcStts_SHOWMAP_e | fopAcStts_NOCULLEXEC_e | fopAcStts_CULL_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_ACTOR_e,
    /* Cull Type    */ fopAc_CULLBOX_CUSTOM_e,
};

actor_process_profile_definition g_profile_NPC_YM2 = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0007,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_NPC_YM2_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daNpc_Ym1_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_NPC_YM2_e,
    /* Actor SubMtd */ &l_daNpc_Ym1_Method,
    /* Status       */ 0x07 | fopAcStts_SHOWMAP_e | fopAcStts_NOCULLEXEC_e | fopAcStts_CULL_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_ACTOR_e,
    /* Cull Type    */ fopAc_CULLBOX_CUSTOM_e,
};

/* 由 fix_decomp_braces.py 补齐：反编译产物末尾缺 3 个 } */
}}}

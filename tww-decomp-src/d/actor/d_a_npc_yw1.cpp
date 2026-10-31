/**
 * d_a_npc_yw1.cpp
 * NPC - Sue-Belle
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_npc_yw1.h"

/* 000000EC-00000108       .text __ct__20daNpc_Yw1_childHIO_cFv */
daNpc_Yw1_childHIO_c::daNpc_Yw1_childHIO_c() {
}

/* 00000150-000001DC       .text __ct__15daNpc_Yw1_HIO_cFv */
daNpc_Yw1_HIO_c::daNpc_Yw1_HIO_c() {
    /* field_0x0 = 0; */
    /* field_0x0 = 0; */
    /* __construct_array((arg0 + 12), ((char*)&__ct__20daNpc_Yw1_childHIO_cFv + 0), ((char*)&__dt__20daNpc_Yw1_childHIO_cFv + 0), 56, 1, arg5, arg6, arg7); */
    /* field_0x40 = 0; */
    memcpy((arg0 + 16), ((char*)&a_prm_tbl$4183 + 0), 48);
    /* field_0x4 = -1; */
    /* field_0x8 = -1; */
    return arg0;
}

/* 00000238-00000284       .text nodeCB_Hair__FP7J3DNodei */
static BOOL nodeCB_Hair(J3DNode* i_param_1, int i_param_2) {
    if (i_param_2 == 0) {
        if (j3dSys.getModel()->getUserArea() != NULL) {
            reinterpret_cast<daNpc_Yw1_c*>(j3dSys.getModel()->getUserArea())
                ->_nodeCB_Hair(i_param_1, j3dSys.getModel());
        }
    }
    return TRUE;
}

/* 00000284-00000414       .text _nodeCB_Hair__11daNpc_Yw1_cFP7J3DNodeP8J3DModel */
void daNpc_Yw1_c::_nodeCB_Hair(J3DNode* i_node, J3DModel* i_model) {
    s32 jointIdx = ((J3DJoint*)i_node)->getJntNo();
    PSMTXCopy(i_model->getAnmMtx(jointIdx), mDoMtx_stack_c::get());
    PSMTXCopy(mDoMtx_stack_c::get(), J3DSys::mCurrentMtx);
    PSMTXCopy(mDoMtx_stack_c::get(), i_model->getAnmMtx(jointIdx));
}

/* 00000450-0000049C       .text nodeCB_Head__FP7J3DNodei */
static BOOL nodeCB_Head(J3DNode* i_param_1, int i_param_2) {
    if (i_param_2 == 0) {
        if (j3dSys.getModel()->getUserArea() != NULL) {
            reinterpret_cast<daNpc_Yw1_c*>(j3dSys.getModel()->getUserArea())
                ->_nodeCB_Head(i_param_1, j3dSys.getModel());
        }
    }
    return TRUE;
}

/* 0000049C-000005BC       .text _nodeCB_Head__11daNpc_Yw1_cFP7J3DNodeP8J3DModel */
void daNpc_Yw1_c::_nodeCB_Head(J3DNode*, J3DModel*) {
    /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (this->field_0xfc != 0) {
        /* field_0x100 = 0; */
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        /* __register_global_object(((C_@3569 + 0) + 256), ((char*)&__dt__4cXyzFv + 0), ((C_@3569 + 0) + 240)); */
        /* field_0xfc = 1; */
    }
    PSMTXCopy((this->field_0x8c + (this->field_0x18 * 48)), ((char*)&now__14mDoMtx_stack_c + 0));
    /* field_0x740 = 0; */
    /* field_0x744 = 0; */
    /* field_0x748 = 0; */
    /* mDoMtx_XrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x292); */
    /* mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), ((-this->field_0x290) & 65535)); */
    /* PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0), ((C_@3569 + 0) + 256), (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1832)); */
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), ((char*)&mCurrentMtx__6J3DSys + 0));
    return _restgpr_28(PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x8c + (this->field_0x18 * 48))));
}

/* 000005BC-00000608       .text nodeCB_BackBone__FP7J3DNodei */
static BOOL nodeCB_BackBone(J3DNode* i_param_1, int i_param_2) {
    if (i_param_2 == 0) {
        if (j3dSys.getModel()->getUserArea() != NULL) {
            reinterpret_cast<daNpc_Yw1_c*>(j3dSys.getModel()->getUserArea())
                ->_nodeCB_BackBone(i_param_1, j3dSys.getModel());
        }
    }
    return TRUE;
}

/* 00000608-000006A8       .text _nodeCB_BackBone__11daNpc_Yw1_cFP7J3DNodeP8J3DModel */
void daNpc_Yw1_c::_nodeCB_BackBone(J3DNode*, J3DModel*) {
    /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    PSMTXCopy();
    /* mDoMtx_XrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x296); */
    /* mDoMtx_ZrotM(((char*)&now__14mDoMtx_stack_c + 0), ((-this->field_0x294) & 65535)); */
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), ((char*)&mCurrentMtx__6J3DSys + 0));
    return _restgpr_29(PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0)));
}

/* 000006A8-000006C8       .text CheckCreateHeap__FP10fopAc_ac_c */
static BOOL CheckCreateHeap(fopAc_ac_c* i_this) {
    ((daNpc_Yw1_c*)i_this)->CreateHeap();
    return TRUE;
}

/* 000006C8-00000740       .text searchActor_Bm1__FPvPv */
void searchActor_Bm1(void*, void*) {
    if (this->field_0x0 < 20) {
        /* if (fopAc_IsActor(arg0) != 0) goto L_460; */
        /* if (this->field_0x8 == 328) goto L_460; */
        /* field_0x0 = (this->field_0x0 + 1); */
    }
    /* L_460:; */
    return 0;
}

/* 00000740-00000844       .text init_YW1_0__11daNpc_Yw1_cFv */
void daNpc_Yw1_c::init_YW1_0() {
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(1312) != 0) goto L_560; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(1) != 0) goto L_560; */
        /* if (this->field_0x708 != 0) goto L_4d8; */
        return 0;
        /* L_4d8:; */
        /* field_0x76f = 1; */
        /* field_0x700 = fopAcM_create(459); */
        set_action();
        set_pthPoint(0);
        /* goto L_564; */
        /* L_560:; */
        /* L_564:; */
        return 0;
}

/* 00000844-000008F8       .text init_YW1_1__11daNpc_Yw1_cFv */
void daNpc_Yw1_c::init_YW1_1() {
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(1312) != 0) goto L_614; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(1) != 0) goto L_5d4; */
        /* L_5d4:; */
        set_action();
        /* field_0x773 = 1; */
        return 1;
        /* L_614:; */
        return 0;
}

/* 000008F8-000009A4       .text init_YW1_2__11daNpc_Yw1_cFv */
void daNpc_Yw1_c::init_YW1_2() {
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(1312) == 0) goto L_6c0; */
        /* if (dKy_daynight_check() == 1) goto L_688; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(10784) != 0) goto L_6c0; */
        /* L_688:; */
        set_action();
        return 1;
        /* L_6c0:; */
        return 0;
}

/* 000009A4-00000AB4       .text init_YW1_3__11daNpc_Yw1_cFv */
void daNpc_Yw1_c::init_YW1_3() {
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(1312) == 0) goto L_7d0; */
        /* if (dKy_daynight_check() != 0) goto L_7d0; */
        /* if (this->field_0x708 != 0) goto L_734; */
        return 0;
        /* L_734:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(10784) == 0) goto L_7d0; */
        /* field_0x76f = 1; */
        /* field_0x700 = fopAcM_create(459); */
        set_action();
        set_pthPoint(0);
        /* goto L_7d4; */
        /* L_7d0:; */
        /* L_7d4:; */
        return 0;
}

/* 00000AB4-00000C9C       .text createInit__11daNpc_Yw1_cFv */
void daNpc_Yw1_c::createInit() {
        ((dNpc_EventCut_c*)((this + 708)))->setActorInfo2(((char*)&@stringBase0 + 0), this);
        /* field_0x280 = 10; */
        /* field_0x26d = 171; */
        /* field_0x26f = 171; */
        /* if (/ * beq * / 1) goto L_878; */
        ((dNpc_PathRun_c*)((this + 1800)))->setInf();
        /* if (this->field_0x708 == 0) goto L_870; */
        /* goto L_878; */
        /* L_870:; */
        return 0;
        /* L_878:; */
        /* field_0x77f = 7; */
        /* if ((this->field_0x785 & 255) == 2) goto L_8c8; */
        /* if (/ * bge * / 1) goto L_8a4; */
        /* if ((this->field_0x785 & 255) == 0) goto L_8b0; */
        /* if (/ * bge * / 1) goto L_8bc; */
        /* goto L_8e0; */
        /* L_8a4:; */
        /* if ((this->field_0x785 & 255) >= 4) goto L_8e0; */
        /* goto L_8d4; */
        /* L_8b0:; */
        init_YW1_0();
        /* goto L_8e4; */
        /* L_8bc:; */
        init_YW1_1();
        /* goto L_8e4; */
        /* L_8c8:; */
        init_YW1_2();
        /* goto L_8e4; */
        /* L_8d4:; */
        init_YW1_3();
        /* goto L_8e4; */
        /* L_8e0:; */
        /* L_8e4:; */
        /* if (0 != 0) goto L_8f4; */
        return 0;
        /* L_8f4:; */
        gravity = 0;
        ((dCcD_Stts*)((this + 1336)))->Init(240, 255, this);
        /* field_0x5b8 = (this + 1336); */
        ((dCcD_Cyl*)((this + 1396)))->Set(((char*)&dNpc_cyl_src + 0));
        play_animation();
        ((dBgS_Acch*)((this + 820)))->CrrPos(((char*)&g_dComIfG_gameInfo + 4768));
        /* field_0x1b5 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetRoomId((this + 1052)); */
        /* field_0x1b6 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetPolyColor((this + 1052)); */
        /* ((mDoExt_McaMorf*)(this->field_0x330))->setMorf(C_@4237); */
        setMtx(1);
        return 1;
}

/* 00000C9C-00000D44       .text play_animation__11daNpc_Yw1_cFv */
void daNpc_Yw1_c::play_animation() {
    play_texPttrnAnm();
    if (/* beq */ 1) {
        ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetMtrlSndId((this + 1052));
    }
    /* field_0x76c = ((mDoExt_McaMorf*)(this->field_0x330))->play((this + 608), ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetMtrlSndId((this + 1052)), dComIfGp_getReverb((this->field_0x20a & 255))); */
    /* if (this->field_0x68 > this->field_0x74c) { */
        /* field_0x76c = 1; */
    /* field_0x74c = 0; */
    /* return this->field_0x330; */

/* 00000D44-00000E4C       .text upLift__11daNpc_Yw1_cFv */
void daNpc_Yw1_c::upLift() {
        /* ((daNpc_Yw1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->searchByID(this->field_0x700); */
        /* field_0x771 = 0; */
        /* if (/ * beq * / 1) goto L_b68; */
        /* if (/ * bne * / 1) goto L_ad8; */
        /* fopAcM_setCarryNow(((daNpc_Yw1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->searchByID(this->field_0x700), 0); */
        /* L_ad8:; */
        /* field_0x20e = cM_atan2s(PSMTXMultVecSR((this->field_0x8c + ((this->field_0x6cc & 255) * 48)), ((char*)&l_hed_front + 0))); */
        PSMTXCopy((this->field_0x8c + ((this->field_0x6cc & 255) * 48)), ((char*)&now__14mDoMtx_stack_c + 0));
        PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0));
        /* L_b68:; */
        /* return _restgpr_29(this->field_0x771); */
}

/* 00000E4C-00000F48       .text setMtx__11daNpc_Yw1_cFb */
void daNpc_Yw1_c::setMtx(bool) {
    /* field_0x18 = 0; */
    /* field_0x1c = 0; */
    /* field_0x20 = 0; */
    /* PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0), bool, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* mDoMtx_ZXYrotM(((char*)&now__14mDoMtx_stack_c + 0), this->field_0x722, this->field_0x724); */
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x50 + 36));
    /* ((mDoExt_McaMorf*)(this->field_0x330))->calc(); */
    PSMTXCopy((this->field_0x8c + ((this->field_0x6cc & 255) * 48)), (this->field_0x6d4 + 36));
    upLift();
    return setAttention(bool);
}

/* 00000F48-00000F5C       .text bckResID__11daNpc_Yw1_cFi */
int daNpc_Yw1_c::bckResID(int anmNum) {
    static const int a_res_id_tbl[] = {
        0, 3, 4, 2, 1, 5, 9, 8,
    };
    return a_res_id_tbl[anmNum];
}

/* 00000F5C-00000F70       .text btpResID__11daNpc_Yw1_cFi */
int daNpc_Yw1_c::btpResID(int anmNum) {
    static const int a_res_id_tbl[] = {
        8,
    };
    return a_res_id_tbl[anmNum];
}

/* 00000F70-00001078       .text init_texPttrnAnm__11daNpc_Yw1_cFScb */
void daNpc_Yw1_c::init_texPttrnAnm(signed char, bool) {
    /* _savegpr_27(this, char, bool, arg3, arg4, arg5, arg6, arg7); */
    if (/* bge */ 1) {
        return 0;
    }
    ((dRes_control_c*)(((char*)&@stringBase0 + 4)))->getIDRes((((daNpc_Yw1_c*)(0))->btpResID() & 65535), ((char*)&g_dComIfG_gameInfo + -16460), 64);
    if (/* bne */ 1) {
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&@stringBase0 + 4)))->getIDRes((((daNpc_Yw1_c*)(0))->btpResID() & 65535), ((char*)&g_dComIfG_gameInfo + -16460), 64)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 7), 607, ((char*)&@stringBase0 + 23));
        OSPanic(((char*)&@stringBase0 + 7), 607, ((char*)&@stringBase0 + 34));
    }
    /* field_0x6ec = 0; */
    /* field_0x6ee = 0; */
    /* return _restgpr_27(((mDoExt_btpAnm*)((_savegpr_27(this, char, bool, arg3, arg4, arg5, arg6, arg7) + 1752)))->init(this->field_0x4)); */
}

/* 00001078-00001108       .text play_texPttrnAnm__11daNpc_Yw1_cFv */
void daNpc_Yw1_c::play_texPttrnAnm() {
        /* if (this->field_0x77e != 0) goto L_dd8; */
        /* if (cLib_calcTimer<s>__FPs((this + 1774), arg1, arg2, arg3, arg4, arg5, arg6, arg7) != 0) goto L_e24; */
        /* L_dd8:; */
        /* field_0x6ec = (this->field_0x6ec + 1); */
        /* if (this->field_0x6ec < this->field_0x6) goto L_e24; */
        /* if (this->field_0x77e == 0) goto L_e0c; */
        /* goto L_e24; */
        /* L_e0c:; */
        /* field_0x6ee = cLib_getRndValue<i>__Fii(60, 90); */
        /* field_0x6ec = 0; */
        /* L_e24:; */
        return cLib_getRndValue<i>__Fii(60, 90);
}

/* 00001108-000011AC       .text setAnm_anm__11daNpc_Yw1_cFPQ211daNpc_Yw1_c9anm_prm_c */
void daNpc_Yw1_c::setAnm_anm(daNpc_Yw1_c::anm_prm_c*) {
        /* if (/ * blt * / 1) goto L_ec4; */
        /* if ((this->field_0x77f & 255) != 0) goto L_e78; */
        /* goto L_ec4; */
        /* L_e78:; */
        dNpc_setAnmIDRes(this->field_0x330, this->field_0xc, bckResID(), -1, ((char*)&@stringBase0 + 4));
        /* field_0x76c = 0; */
        /* field_0x76d = 0; */
        /* field_0x74c = 0; */
        /* L_ec4:; */
        return C_@4237;
}

/* 000011AC-0000121C       .text setAnm_NUM__11daNpc_Yw1_cFii */
void daNpc_Yw1_c::setAnm_NUM(int, int) {
    if (int != 0) {
        /* init_texPttrnAnm(this->field_0x1, 1, arg3, arg4, arg5, arg6, arg7); */
    }
    return setAnm_anm((((char*)&a_anm_prm_tbl$4546 + 0) + (int << 4)), (int << 4));
}

/* 0000121C-00001288       .text setAnm__11daNpc_Yw1_cFv */
void daNpc_Yw1_c::setAnm() {
    /* init_texPttrnAnm(this->field_0x1, 1, arg3, arg4, arg5, arg6, arg7); */
    return setAnm_anm((((char*)&a_anm_prm_tbl$4553 + 0) + ((this->field_0x781 & 255) << 4)), ((this->field_0x781 & 255) << 4));
}

/* 00001288-0000128C       .text chngAnmTag__11daNpc_Yw1_cFv */
void daNpc_Yw1_c::chngAnmTag() {
}

/* 0000128C-00001290       .text ctrlAnmTag__11daNpc_Yw1_cFv */
void daNpc_Yw1_c::ctrlAnmTag() {
}

/* 00001290-000012D0       .text chngAnmAtr__11daNpc_Yw1_cFUc */
void daNpc_Yw1_c::chngAnmAtr(unsigned char) {
        /* if ((char & 16777215) == this->field_0x77c) goto L_ff0; */
        /* if ((char & 16777215) <= 7) goto L_fe8; */
        /* goto L_ff0; */
        /* L_fe8:; */
        /* field_0x77c = char; */
        /* L_ff0:; */
        return setAnm_ATR();
}

/* 000012D0-000012D4       .text ctrlAnmAtr__11daNpc_Yw1_cFv */
void daNpc_Yw1_c::ctrlAnmAtr() {
}

/* 000012D4-00001338       .text setAnm_ATR__11daNpc_Yw1_cFv */
void daNpc_Yw1_c::setAnm_ATR() {
    /* init_texPttrnAnm(this->field_0x1, 1, arg3, arg4, arg5, arg6, arg7); */
    return setAnm_anm((((char*)&a_anm_prm_tbl$4591 + 0) + (this->field_0x77c << 4)), (this->field_0x77c << 4));
}

/* 00001338-000013F4       .text anmAtr__11daNpc_Yw1_cFUs */
void daNpc_Yw1_c::anmAtr(unsigned short) {
        /* if ((short & 65535) == 14) goto L_10f8; */
        /* if (/ * bge * / 1) goto L_1100; */
        /* if ((short & 65535) == 6) goto L_1098; */
        /* goto L_1100; */
        /* L_1098:; */
        /* if (this->field_0x787 != 0) goto L_10c0; */
        /* chngAnmAtr(this->field_0x5bcf); */
        /* field_0x787 = (this->field_0x787 + 1); */
        /* L_10c0:; */
        /* if (this->field_0x5bd0 == 255) goto L_1100; */
        /* if (this->field_0x5bd0 == this->field_0x77d) goto L_1100; */
        /* field_0x5bd0 = 255; */
        chngAnmTag();
        /* goto L_1100; */
        /* L_10f8:; */
        /* field_0x787 = 0; */
        /* L_1100:; */
        ctrlAnmAtr();
        return ctrlAnmTag();
}

/* 000013F4-0000148C       .text next_msgStatus__11daNpc_Yw1_cFPUl */
void daNpc_Yw1_c::next_msgStatus(unsigned long*) {
        /* if (/ * beq * / 1) goto L_1150; */
        /* goto L_119c; */
        /* L_1150:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(10784) != 0) goto L_1178; */
        base = 2212;
        /* goto L_11a0; */
        /* L_1178:; */
        /* if (dKy_daynight_check() != 0) goto L_1190; */
        base = 2214;
        /* goto L_11a0; */
        /* L_1190:; */
        base = 2213;
        /* goto L_11a0; */
        /* L_119c:; */
        /* L_11a0:; */
        return 16;
}

/* 0000148C-00001588       .text getMsg_YW1_0__11daNpc_Yw1_cFv */
void daNpc_Yw1_c::getMsg_YW1_0() {
        /* if (this->field_0x770 == 0) goto L_11e8; */
        return 2208;
        /* L_11e8:; */
        /* if (this->field_0x771 == 0) goto L_11fc; */
        return 2207;
        /* L_11fc:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(1) == 0) goto L_1238; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(320);
        /* goto L_12a0; */
        /* L_1238:; */
        /* if (this->field_0x708 == 0) goto L_1268; */
        /* if (this->field_0x772 != 1) goto L_1268; */
        /* goto L_12a0; */
        /* L_1268:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(384) != 0) goto L_129c; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(10880) == 0) goto L_12a0; */
        return 2218;
        /* L_129c:; */
        /* L_12a0:; */
        return 2202;
}

/* 00001588-00001600       .text getMsg_YW1_1__11daNpc_Yw1_cFv */
void daNpc_Yw1_c::getMsg_YW1_1() {
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(3616) != 0) {
    }
    return (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(320) + 2203);
}

/* 00001600-00001678       .text getMsg_YW1_2__11daNpc_Yw1_cFv */
void daNpc_Yw1_c::getMsg_YW1_2() {
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(14912) == 0) {
        return 2211;
    }
    if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(10784) == 0) {
        return 2215;
    }
    dKy_daynight_check();
}

/* 00001678-000016F0       .text getMsg_YW1_3__11daNpc_Yw1_cFv */
void daNpc_Yw1_c::getMsg_YW1_3() {
        /* if (this->field_0x770 == 0) goto L_13c8; */
        return 2208;
        /* L_13c8:; */
        /* if (this->field_0x771 == 0) goto L_13dc; */
        return 2207;
        /* L_13dc:; */
        /* if (this->field_0x708 == 0) goto L_140c; */
        /* if (this->field_0x772 != 1) goto L_140c; */
        /* goto L_1410; */
        /* L_140c:; */
        /* L_1410:; */
        /* return ((daNpc_Yw1_c*)((((1 - this->field_0x70e) >> 5) + 2209)))->getMsg_YW1_2(); */
}

/* 000016F0-00001770       .text getMsg__11daNpc_Yw1_cFv */
void daNpc_Yw1_c::getMsg() {
        /* if ((this->field_0x785 & 255) == 2) goto L_1478; */
        /* if (/ * bge * / 1) goto L_1454; */
        /* if ((this->field_0x785 & 255) == 0) goto L_1460; */
        /* if (/ * bge * / 1) goto L_146c; */
        /* goto L_148c; */
        /* L_1454:; */
        /* if ((this->field_0x785 & 255) >= 4) goto L_148c; */
        /* goto L_1484; */
        /* L_1460:; */
        getMsg_YW1_0();
        /* goto L_148c; */
        /* L_146c:; */
        ((daNpc_Yw1_c*)(getMsg_YW1_0()))->getMsg_YW1_1();
        /* goto L_148c; */
        /* L_1478:; */
        ((daNpc_Yw1_c*)(((daNpc_Yw1_c*)(getMsg_YW1_0()))->getMsg_YW1_1()))->getMsg_YW1_2();
        /* goto L_148c; */
        /* L_1484:; */
        /* L_148c:; */
        return ((daNpc_Yw1_c*)(((daNpc_Yw1_c*)(((daNpc_Yw1_c*)(getMsg_YW1_0()))->getMsg_YW1_1()))->getMsg_YW1_2()))->getMsg_YW1_3();
}

/* 00001770-000017C0       .text eventOrder__11daNpc_Yw1_cFv */
void daNpc_Yw1_c::eventOrder() {
    if ((this->field_0x780 & 255) != 1) {
        /* if ((this->field_0x780 & 255) == 2) goto L_14e0; */
    }
    if (this->field_0x780 == 1) {
    }
    /* L_14e0:; */
    return fopAcM_orderSpeakEvent(this);
}

/* 000017C0-00001800       .text checkOrder__11daNpc_Yw1_cFv */
void daNpc_Yw1_c::checkOrder() {
    if ((this->field_0x780 & 255) != 1) {
    }
    /* field_0x780 = 0; */
    /* field_0x778 = 1; */
    return this;
}

/* 00001800-00001898       .text chk_talk__11daNpc_Yw1_cFv */
void daNpc_Yw1_c::chk_talk() {
        /* if (this->field_0x52b8 == 1) goto L_156c; */
        /* if (this->field_0x52b8 == 2) goto L_156c; */
        /* if (this->field_0x52b8 != 3) goto L_1570; */
        /* L_156c:; */
        /* L_1570:; */
        /* if (1 == 0) goto L_15a8; */
        /* if (((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->ChkPresentEnd() == 0) goto L_15a0; */
        return 1;
        /* L_15a0:; */
        return 0;
        /* L_15a8:; */
        /* field_0x76e = 255; */
        return 1;
}

/* 00001898-000018D8       .text chk_parts_notMov__11daNpc_Yw1_cFv */
void daNpc_Yw1_c::chk_parts_notMov() {
    /* if (this->field_0x756 == this->field_0x292) { */
        /* if (this->field_0x758 == this->field_0x296) goto L_1600; */
        /* if (this->field_0x754 == this->field_0x206) goto L_1600; */
    /* L_1600:; */
    return 1;
}

/* 000018D8-00001938       .text searchByID__11daNpc_Yw1_cFUiPi */
void daNpc_Yw1_c::searchByID(fpc_ProcID, int*) {
    if (/* beq */ 1) {
        base = 0;
    }
    if (fopAcM_SearchByID(fpc_ProcID) == 0) {
        /* if (/ * beq * / 1) goto L_1650; */
        base = 1;
    }
}

/* 00001938-000019E8       .text partner_search_sub__11daNpc_Yw1_cFPFPvPv_Pv */
void daNpc_Yw1_c::partner_search_sub(void* (*)(void*, void*)) {
        /* field_0x6fc = -1; */
        base = 0;
        /* fpcEx_Search(arg1, this, ((char*)&l_check_inf + 0), 0, arg4, arg5, arg6, arg7); */
        /* if (base == 0) goto L_16fc; */
        /* if (base == 0) goto L_16f0; */
        /* goto L_16f4; */
        /* L_16f0:; */
        /* L_16f4:; */
        /* field_0x6fc = -1; */
        /* L_16fc:; */
        return 1;
}

/* 000019E8-00001A54       .text partner_search__11daNpc_Yw1_cFv */
void daNpc_Yw1_c::partner_search() {
        /* if (this->field_0x786 != 1) goto L_1770; */
        /* if (this->field_0x785 == 0) goto L_1748; */
        /* goto L_1758; */
        /* L_1748:; */
        /* partner_search_sub(((char*)&searchActor_Bm1__FPvPv + 0), arg2, arg3, arg4, arg5, arg6, arg7); */
        /* goto L_175c; */
        /* L_1758:; */
        /* L_175c:; */
        /* if (1 == 0) goto L_1770; */
        /* field_0x786 = (this->field_0x786 + 1); */
        /* L_1770:; */
        /* return this->field_0x786; */
}

/* 00001A54-00001C2C       .text lookBack__11daNpc_Yw1_cFv */
void daNpc_Yw1_c::lookBack() {
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if ((this->field_0x783 & 255) == 3) goto L_1874; */
        /* if (/ * bge * / 1) goto L_1818; */
        /* if ((this->field_0x783 & 255) == 1) goto L_1824; */
        /* if (/ * bge * / 1) goto L_1854; */
        /* goto L_18cc; */
        /* L_1818:; */
        /* if ((this->field_0x783 & 255) >= 5) goto L_18cc; */
        /* goto L_187c; */
        /* L_1824:; */
        dNpc_playerEyePos();
        /* goto L_18cc; */
        /* L_1854:; */
        /* goto L_18cc; */
        /* L_1874:; */
        /* goto L_18cc; */
        /* L_187c:; */
        /* if (((daNpc_Yw1_c*)(dNpc_playerEyePos()))->searchByID(this->field_0x704, 0) == 0) goto L_18cc; */
        /* field_0x734 = 0; */
        /* field_0x738 = 0; */
        /* field_0x73c = 0; */
        /* field_0x738 = 0; */
        /* L_18cc:; */
        /* cLib_addCalcAngleS2((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1896), this->field_0x22, 4, 2048); */
        /* if (this->field_0x29a != 0) goto L_190c; */
        /* field_0x768 = 0; */
        /* L_190c:; */
        /* return _restgpr_28(((dNpc_JntCtrl_c*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 656)))->lookAtTarget((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 518))); */
}

/* 00001C2C-00001CAC       .text chkAttention__11daNpc_Yw1_cFv */
void daNpc_Yw1_c::chkAttention() {
    if (((dAttention_c*)(((char*)&g_dComIfG_gameInfo + 22536)))->LockonTruth() == 0) {
    }
    return ((this - ((dAttention_c*)(((char*)&g_dComIfG_gameInfo + 22536)))->ActionTarget(0)) >> 5);
}

/* 00001CAC-00001D28       .text setAttention__11daNpc_Yw1_cFb */
void daNpc_Yw1_c::setAttention(bool) {
    /* field_0x274 = 0; */
    /* field_0x278 = (this->field_0x1fc + this->field_0x24); */
    /* field_0x27c = 0; */
    if (this->field_0x75c == 0) {
        /* if (bool == 0) goto L_1a50; */
    }
    eyePos = 0;
    /* field_0x264 = 0; */
    /* field_0x268 = 0; */
    /* L_1a50:; */
    return this;
}

/* 00001D28-00001DC4       .text decideType__11daNpc_Yw1_cFi */
void daNpc_Yw1_c::decideType(int) {
        /* field_0x784 = 0; */
        /* field_0x785 = -1; */
        /* if (int == 2) goto L_1aa4; */
        /* if (/ * bge * / 1) goto L_1a84; */
        /* if (int == 0) goto L_1a90; */
        /* if (/ * bge * / 1) goto L_1a98; */
        /* goto L_1abc; */
        /* L_1a84:; */
        /* if (int >= 4) goto L_1abc; */
        /* goto L_1ab0; */
        /* L_1a90:; */
        /* field_0x785 = 0; */
        /* goto L_1ac4; */
        /* L_1a98:; */
        /* field_0x785 = 1; */
        /* goto L_1ac4; */
        /* L_1aa4:; */
        /* field_0x785 = 2; */
        /* goto L_1ac4; */
        /* L_1ab0:; */
        /* field_0x785 = 3; */
        /* goto L_1ac4; */
        /* L_1abc:; */
        return 0;
}

/* 00001DC4-00001E64       .text privateCut__11daNpc_Yw1_cFi */
void daNpc_Yw1_c::privateCut(int) {
        /* _savegpr_29(this, int, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * beq * / 1) goto L_1b7c; */
        /* field_0x77b = ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyActIdx(); */
        /* if ((this->field_0x77b & 255) != -1) goto L_1b64; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd();
        /* goto L_1b7c; */
        /* L_1b64:; */
        ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getIsAddvance();
        /* L_1b7c:; */
        return _restgpr_29(((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->cutEnd());
}

/* 00001E64-00001E88       .text endEvent__11daNpc_Yw1_cFv */
void daNpc_Yw1_c::endEvent() {
    /* field_0x77c = 255; */
    /* field_0x77d = 255; */
    return this;
}

/* 00001E88-00001EC0       .text isEventEntry__11daNpc_Yw1_cFv */
void daNpc_Yw1_c::isEventEntry() {
    /* return ((dEvent_manager_c*)(((char*)&g_dComIfG_gameInfo + 21196)))->getMyStaffId(this->field_0x2c4, 0, 0, arg4); */
}

/* 00001EC0-00001F18       .text event_proc__11daNpc_Yw1_cFi */
void daNpc_Yw1_c::event_proc(int) {
    if (((dNpc_EventCut_c*)((this + 708)))->cutProc() != 0) {
        privateCut(int);
    }
    return lookBack();
}

/* 00001F18-00001FC4       .text set_action__11daNpc_Yw1_cFM11daNpc_Yw1_cFPCvPvPv_iPv */
void daNpc_Yw1_c::set_action(int (daNpc_Yw1_c::*)(void*), void*) {
        /* if (__ptmf_cmpr((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1776)) == 0) goto L_1cd8; */
        /* if (__ptmf_test((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1776)) == 0) goto L_1ca4; */
        /* field_0x786 = 9; */
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_1ca4:; */
        /* field_0x786 = 0; */
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* L_1cd8:; */
        return _restgpr_29(1);
}

/* 00001FC4-0000205C       .text setStt__11daNpc_Yw1_cFSc */
void daNpc_Yw1_c::setStt(signed char) {
        /* field_0x781 = char; */
        /* if ((this->field_0x781 & 255) == 4) goto L_1d68; */
        /* if (/ * bge * / 1) goto L_1d34; */
        /* if ((this->field_0x781 & 255) == 2) goto L_1d44; */
        /* if (/ * bge * / 1) goto L_1d60; */
        /* goto L_1d68; */
        /* L_1d34:; */
        /* if ((this->field_0x781 & 255) == 6) goto L_1d68; */
        /* if (/ * bge * / 1) goto L_1d68; */
        /* goto L_1d60; */
        /* L_1d44:; */
        /* field_0x77c = 255; */
        /* field_0x77d = 255; */
        /* field_0x787 = 0; */
        /* goto L_1d68; */
        /* L_1d60:; */
        /* field_0x779 = 1; */
        /* L_1d68:; */
        setAnm();
        return chngTsuboAnm();
}

/* 0000205C-0000212C       .text chngTsuboAnm__11daNpc_Yw1_cFv */
void daNpc_Yw1_c::chngTsuboAnm() {
        /* if (this->field_0x76f == 0) goto L_1e48; */
        /* if (this->field_0x771 != 0) goto L_1df8; */
        /* if ((this->field_0x77f & 255) == 5) goto L_1de8; */
        /* if (/ * bge * / 1) goto L_1e48; */
        /* if ((this->field_0x77f & 255) >= 4) goto L_1dd8; */
        /* goto L_1e48; */
        /* L_1dd8:; */
        setAnm_NUM(3, 1);
        /* goto L_1e48; */
        /* L_1de8:; */
        ((daNpc_Yw1_c*)(setAnm_NUM(3, 1)))->setAnm_NUM(1, 1);
        /* goto L_1e48; */
        /* L_1df8:; */
        /* if ((this->field_0x77f & 255) == 2) goto L_1e40; */
        /* if (/ * bge * / 1) goto L_1e18; */
        /* if ((this->field_0x77f & 255) >= 1) goto L_1e24; */
        /* goto L_1e40; */
        /* L_1e18:; */
        /* if ((this->field_0x77f & 255) >= 4) goto L_1e40; */
        /* goto L_1e34; */
        /* L_1e24:; */
        ((daNpc_Yw1_c*)(((daNpc_Yw1_c*)(setAnm_NUM(3, 1)))->setAnm_NUM(1, 1)))->setAnm_NUM(5, 1);
        /* goto L_1e40; */
        /* L_1e34:; */
        ((daNpc_Yw1_c*)(((daNpc_Yw1_c*)(((daNpc_Yw1_c*)(setAnm_NUM(3, 1)))->setAnm_NUM(1, 1)))->setAnm_NUM(5, 1)))->setAnm_NUM(4, 1);
        /* L_1e40:; */
        /* field_0x76f = 0; */
        /* L_1e48:; */
        return ((daNpc_Yw1_c*)(((daNpc_Yw1_c*)(((daNpc_Yw1_c*)(setAnm_NUM(3, 1)))->setAnm_NUM(1, 1)))->setAnm_NUM(5, 1)))->setAnm_NUM(4, 1);
}

/* 0000212C-000022B8       .text chk_areaIN__11daNpc_Yw1_cFffs4cXyz */
void daNpc_Yw1_c::chk_areaIN(float, float, short, cXyz) {
    /* _savegpr_27(this, float, float, short, cXyz, arg5, arg6, arg7); */
    __mi();
    PSVECSquareMag();
    }
    /* cLib_targetAngleY((_savegpr_27(this, float, float, short, cXyz, arg5, arg6, arg7) + 504), (this->field_0x5b40 + 504)); */
    if (/* bge */ 1) {
        /* if (/ * bge * / 1) goto L_1fac; */
        /* if (abs(((this->field_0x206 - (cLib_targetAngleY((_savegpr_27(this, float, float, short, cXyz, arg5, arg6, arg7) + 504), (this->field_0x5b40 + 504)) & 65535)) & 65535)) < 0) goto L_1fac; */
        return 1;
    }
    /* L_1fac:; */
    return _restgpr_27(0);


/* 000022B8-00002360       .text set_pthPoint__11daNpc_Yw1_cFUc */
void daNpc_Yw1_c::set_pthPoint(unsigned char) {
    if (this->field_0x708 != 0) {
        /* field_0x70d = char; */
        getPoint((this + 1800));
        current = 0;
        /* field_0x1fc = 0; */
        /* field_0x200 = 0; */
        /* if (((dNpc_PathRun_c*)((this + 1800)))->nextIdx() == 0) goto L_207c; */
        getPoint((this + 1800));
        /* field_0x206 = cLib_targetAngleY((this + 504)); */
    }
    /* L_207c:; */
    return cLib_targetAngleY((this + 504));
}

/* 00002360-00002D94       .text setHairAngle__11daNpc_Yw1_cFv */
void daNpc_Yw1_c::setHairAngle() {
    /* setHairAngle: 0xA34 字节，涉及头发骨骼角度计算，待手工还原 */
}

/* 00002D94-00002DEC       .text chk_brkTsubo__11daNpc_Yw1_cFv */
void daNpc_Yw1_c::chk_brkTsubo() {
    if (this->field_0x771 != 0) {
        /* setStt(4, arg2, arg3, arg4, arg5, arg6, arg7); */
        speedF = 0;
        /* field_0x783 = 0; */
        /* field_0x779 = 0; */
    }
    /* return this->field_0x771; */
}

/* 00002DEC-00002E28       .text chk_bm1Odoroki__11daNpc_Yw1_cFv */
void daNpc_Yw1_c::chk_bm1Odoroki() {
    }
    return 0;


/* 00002E28-00002F90       .text wait_1__11daNpc_Yw1_cFv */
void daNpc_Yw1_c::wait_1() {
        /* if (chk_brkTsubo() == 0) goto L_214c; */
        return 1;
        /* L_214c:; */
        /* if (this->field_0x778 == 0) goto L_2190; */
        /* if (chk_talk() == 0) goto L_2188; */
        setStt(2);
        /* field_0x783 = 1; */
        /* field_0x779 = 0; */
        /* field_0x29a = 1; */
        /* L_2188:; */
        return 1;
        /* L_2190:; */
        /* if (chk_bm1Odoroki() == 0) goto L_21b8; */
        /* field_0x783 = 4; */
        return 1;
        /* L_21b8:; */
        /* field_0x780 = 2; */
        chngTsuboAnm();
        chk_areaIN(17408);
        /* if (/ * beq * / 1) goto L_225c; */
        /* if (cLib_calcTimer<s>__FPs((this + 1890)) != 0) goto L_226c; */
        setStt(3);
        /* field_0x783 = 0; */
        /* field_0x779 = 1; */
        return 1;
        /* L_225c:; */
        /* field_0x762 = cLib_getRndValue<i>__Fii(10, 20); */
        /* L_226c:; */
        /* field_0x783 = 1; */
        return 1;
}

/* 00002F90-0000309C       .text wait_2__11daNpc_Yw1_cFv */
void daNpc_Yw1_c::wait_2() {
        /* if (this->field_0x778 == 0) goto L_22e0; */
        /* if (chk_talk() == 0) goto L_22d8; */
        setStt(2);
        /* field_0x783 = 1; */
        /* field_0x779 = 0; */
        /* field_0x29a = 1; */
        /* L_22d8:; */
        return 1;
        /* L_22e0:; */
        /* if (((daNpc_Yw1_c*)(1))->chk_bm1Odoroki() == 0) goto L_2314; */
        /* field_0x783 = 4; */
        /* field_0x779 = 0; */
        /* field_0x29a = 1; */
        return 1;
        /* L_2314:; */
        /* field_0x780 = 2; */
        /* field_0x779 = 1; */
        cLib_addCalcAngleS((this + 518), this->field_0x71e, 4, 2048, 128);
        /* if (this->field_0x777 == 0) goto L_2358; */
        /* field_0x762 = cLib_getRndValue<i>__Fii(10, 20); */
        /* L_2358:; */
        /* if (cLib_calcTimer<s>__FPs((this + 1890)) == 0) goto L_2378; */
        /* field_0x783 = 1; */
        return 1;
        /* L_2378:; */
        /* field_0x783 = 0; */
        return 1;
}

/* 0000309C-00003174       .text wait_3__11daNpc_Yw1_cFv */
void daNpc_Yw1_c::wait_3() {
        /* if (this->field_0x778 == 0) goto L_23ec; */
        /* if (chk_talk() == 0) goto L_23e4; */
        setStt(2);
        /* field_0x783 = 1; */
        /* field_0x779 = 0; */
        /* field_0x29a = 1; */
        /* L_23e4:; */
        return 1;
        /* L_23ec:; */
        /* field_0x780 = 2; */
        /* field_0x779 = 1; */
        cLib_addCalcAngleS((this + 518), this->field_0x71e, 4, 2048, 128);
        /* if (this->field_0x777 == 0) goto L_2430; */
        /* field_0x762 = cLib_getRndValue<i>__Fii(10, 20); */
        /* L_2430:; */
        /* if (cLib_calcTimer<s>__FPs((this + 1890)) == 0) goto L_2450; */
        /* field_0x783 = 1; */
        return 1;
        /* L_2450:; */
        /* field_0x783 = 0; */
        return 1;
}

/* 00003174-0000347C       .text walk_1__11daNpc_Yw1_cFv */
void daNpc_Yw1_c::walk_1() {
        /* if (chk_brkTsubo() == 0) goto L_24ac; */
        return 1;
        /* L_24ac:; */
        /* if (this->field_0x772 != 0) goto L_250c; */
        /* if (((dNpc_PathRun_c*)((this + 1800)))->chkPointPass() == 0) goto L_250c; */
        /* field_0x772 = ((((dNpc_PathRun_c*)((this + 1800)))->nextIdx() & 16777215) >> 5); */
        /* L_250c:; */
        /* if (this->field_0x772 != 0) goto L_2610; */
        chk_areaIN(16384);
        /* if (/ * beq * / 1) goto L_2610; */
        /* if (this->field_0x778 != 0) goto L_2610; */
        /* if (chk_bm1Odoroki() != 0) goto L_2610; */
        getPoint((this + 1800));
        cLib_addCalcAngleS((this + 518), (cLib_targetAngleY((this + 504)) & 65535), this->field_0x30, this->field_0x32, 0);
        /* goto L_2614; */
        /* L_2610:; */
        /* L_2614:; */
        cLib_chaseF((this + 596), (((char*)&l_HIO + 0) + ((this->field_0x784 & 255) * 56)));
        /* if ((speedF * this->field_0x34) >= this->field_0x5c) goto L_2670; */
        /* goto L_2674; */
        /* L_2670:; */
        /* L_2674:; */
        /* field_0x64 = (speedF * this->field_0x34); */
        /* if (/ * bne * / 1) goto L_2744; */
        /* if (/ * bne * / 1) goto L_2744; */
        speedF = 0;
        /* if (this->field_0x778 == 0) goto L_26f4; */
        /* if (chk_talk() == 0) goto L_26ec; */
        setStt(2);
        /* field_0x783 = 1; */
        /* field_0x779 = 0; */
        /* field_0x29a = 1; */
        /* L_26ec:; */
        return 1;
        /* L_26f4:; */
        /* if (this->field_0x772 == 0) goto L_271c; */
        setStt(5);
        /* field_0x783 = 0; */
        return 1;
        /* L_271c:; */
        setStt(1);
        /* field_0x783 = 1; */
        /* field_0x779 = 0; */
        /* field_0x29a = 1; */
        return 1;
        /* L_2744:; */
        /* field_0x780 = 2; */
        /* field_0x783 = 0; */
        return 1;
}

/* 0000347C-00003594       .text turn_1__11daNpc_Yw1_cFv */
void daNpc_Yw1_c::turn_1() {
        /* if (chk_brkTsubo() == 0) goto L_27a4; */
        return 1;
        /* L_27a4:; */
        /* if (this->field_0x778 == 0) goto L_27d4; */
        /* if (chk_talk() == 0) goto L_27cc; */
        setStt(2);
        /* L_27cc:; */
        return 1;
        /* L_27d4:; */
        /* field_0x780 = 2; */
        getPoint((this + 1800));
        /* cLib_chaseAngleS((this + 518), (cLib_targetAngleY((this + 504)) & 65535), this->field_0x32); */
        /* if (this->field_0x206 != (cLib_targetAngleY((this + 504)) & 65535)) goto L_2874; */
        setStt(3);
        /* field_0x783 = 0; */
        /* field_0x772 = 0; */
        return 1;
        /* L_2874:; */
        return 1;
}

/* 00003594-000036F0       .text talk_1__11daNpc_Yw1_cFv */
void daNpc_Yw1_c::talk_1() {
        chk_parts_notMov();
        talk(1);
        /* if (this->field_0x6b0 != 0) goto L_28d0; */
        /* goto L_29d4; */
        /* L_28d0:; */
        /* if (this->field_0xf8 == 6) goto L_29d0; */
        /* if (/ * bge * / 1) goto L_28ec; */
        /* if (this->field_0xf8 == 2) goto L_29d0; */
        /* goto L_29d0; */
        /* L_28ec:; */
        /* if (this->field_0xf8 == 19) goto L_28f8; */
        /* goto L_29d0; */
        /* L_28f8:; */
        /* if ((this->field_0x6a4 + -2201) > 17) goto L_299c; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(384);
        /* goto L_299c; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(320);
        /* goto L_299c; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(288);
        /* goto L_299c; */
        /* field_0x5b54 = (this->field_0x5b54 + -10); */
        /* field_0x770 = 1; */
        /* goto L_299c; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->onEventBit(14912);
        /* L_299c:; */
        /* field_0x76e = 255; */
        /* field_0x778 = 0; */
        /* setStt(this->field_0x782); */
        /* field_0x762 = cLib_getRndValue<i>__Fii(10, 20); */
        endEvent();
        /* L_29d0:; */
        /* L_29d4:; */
        return (chk_parts_notMov() & 16777215);
}

/* 000036F0-00003848       .text wait_action1__11daNpc_Yw1_cFPv */
void daNpc_Yw1_c::wait_action1(void*) {
        /* if ((this->field_0x786 & 255) >= 4) goto L_2a20; */
        /* if ((this->field_0x786 & 255) == 0) goto L_2a2c; */
        /* if (/ * bge * / 1) goto L_2a44; */
        /* goto L_2ad4; */
        /* L_2a20:; */
        /* if ((this->field_0x786 & 255) == 9) goto L_2ad4; */
        /* goto L_2ad4; */
        /* L_2a2c:; */
        /* setStt(3, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x786 = (this->field_0x786 + 1); */
        /* goto L_2ad4; */
        /* L_2a44:; */
        /* field_0x777 = ((daNpc_Yw1_c*)(this->field_0x786))->chkAttention(); */
        /* if ((this->field_0x781 & 255) == 3) goto L_2aa0; */
        /* if (/ * bge * / 1) goto L_2a70; */
        /* if ((this->field_0x781 & 255) == 1) goto L_2a80; */
        /* if (/ * bge * / 1) goto L_2ac0; */
        /* goto L_2acc; */
        /* L_2a70:; */
        /* if ((this->field_0x781 & 255) == 5) goto L_2ab0; */
        /* if (/ * bge * / 1) goto L_2acc; */
        /* goto L_2a90; */
        /* L_2a80:; */
        /* field_0x75c = wait_1(); */
        /* goto L_2acc; */
        /* L_2a90:; */
        /* field_0x75c = wait_2(); */
        /* goto L_2acc; */
        /* L_2aa0:; */
        /* field_0x75c = walk_1(); */
        /* goto L_2acc; */
        /* L_2ab0:; */
        /* field_0x75c = turn_1(); */
        /* goto L_2acc; */
        /* L_2ac0:; */
        /* field_0x75c = talk_1(); */
        /* L_2acc:; */
        lookBack();
        /* L_2ad4:; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(1) == 0) goto L_2b2c; */
        /* if (this->field_0x785 != 0) goto L_2b2c; */
        /* searchByID(this->field_0x700); */
        /* if (/ * bne * / 1) goto L_2b24; */
        /* if (searchByID(this->field_0x700) == 0) goto L_2b24; */
        /* fopAcM_delete(searchByID(this->field_0x700)); */
        /* L_2b24:; */
        fopAcM_delete(this);
        /* L_2b2c:; */
        return 1;
}

/* 00003848-00003904       .text wait_action2__11daNpc_Yw1_cFPv */
void daNpc_Yw1_c::wait_action2(void*) {
        /* if ((this->field_0x786 & 255) >= 4) goto L_2b78; */
        /* if ((this->field_0x786 & 255) == 0) goto L_2b84; */
        /* if (/ * bge * / 1) goto L_2b9c; */
        /* goto L_2be8; */
        /* L_2b78:; */
        /* if ((this->field_0x786 & 255) == 9) goto L_2be8; */
        /* goto L_2be8; */
        /* L_2b84:; */
        /* setStt(6, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x786 = (this->field_0x786 + 1); */
        /* goto L_2be8; */
        /* L_2b9c:; */
        /* field_0x777 = ((daNpc_Yw1_c*)(this->field_0x786))->chkAttention(); */
        /* if ((this->field_0x781 & 255) == 6) goto L_2bc4; */
        /* if (/ * bge * / 1) goto L_2be0; */
        /* if ((this->field_0x781 & 255) == 2) goto L_2bd4; */
        /* goto L_2be0; */
        /* L_2bc4:; */
        /* field_0x75c = wait_3(); */
        /* goto L_2be0; */
        /* L_2bd4:; */
        /* field_0x75c = talk_1(); */
        /* L_2be0:; */
        lookBack();
        /* L_2be8:; */
        return 1;
}

/* 00003904-00003A50       .text demo__11daNpc_Yw1_cFv */
void daNpc_Yw1_c::demo() {
        /* if (demoActorID != 0) goto L_2c38; */
        /* if (this->field_0x77a == 0) goto L_2d34; */
        /* field_0x77a = 0; */
        /* goto L_2d34; */
        /* L_2c38:; */
        /* if (this->field_0x77a != 0) goto L_2c64; */
        /* field_0x77a = 1; */
        /* field_0x774 = 0; */
        /* field_0x292 = 0; */
        /* field_0x290 = 0; */
        /* field_0x296 = 0; */
        /* field_0x294 = 0; */
        /* L_2c64:; */
        ((dDemo_object_c*)((this->field_0x5abc + 32)))->getActor(demoActorID);
        /* if (this->field_0x6e0 == 0) goto L_2cac; */
        /* field_0x6ec = (this->field_0x6ec + 1); */
        /* if (this->field_0x6ec < this->field_0x6) goto L_2cac; */
        /* L_2cac:; */
        ((dDemo_actor_c*)(((dDemo_object_c*)((this->field_0x5abc + 32)))->getActor(demoActorID)))->getP_BtpData(((char*)&@stringBase0 + 4));
        /* if (/ * beq * / 1) goto L_2d08; */
        /* ((mDoExt_btpAnm*)((this + 1752)))->init(this->field_0x4); */
        /* field_0x77e = 1; */
        /* field_0x6ec = 0; */
        /* L_2d08:; */
        dDemo_setDemoData(this, 106, this->field_0x330, ((char*)&@stringBase0 + 4), 0, 0, 0, 0);
        /* L_2d34:; */
        /* return this->field_0x77a; */
}

/* 00003A50-00003B4C       .text shadowDraw__11daNpc_Yw1_cFv */
void daNpc_Yw1_c::shadowDraw() {
        /* ((daNpc_Yw1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->searchByID(this->field_0x700); */
        /* field_0x6d0 = dComIfGd_setShadow(this->field_0x6d0, 1, this->field_0x50); */
        /* if (this->field_0x6d0 == 0) goto L_2e30; */
        /* if (/ * bne * / 1) goto L_2e18; */
        /* if (((daNpc_Yw1_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->searchByID(this->field_0x700) == 0) goto L_2e18; */
        /* if (model == 0) goto L_2e18; */
        ((dDlst_shadowControl_c*)(((char*)&g_dComIfG_gameInfo + 24416)))->addReal(this->field_0x6d0, model);
        /* L_2e18:; */
        /* L_2e30:; */
        /* return _restgpr_29(((dDlst_shadowControl_c*)(((char*)&g_dComIfG_gameInfo + 24416)))->addReal(this->field_0x6d0, this->field_0x6d4)); */
}

/* 00003B4C-00003C84       .text _draw__11daNpc_Yw1_cFv */
BOOL daNpc_Yw1_c::_draw() {
    /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (this->field_0x773 == 0) {
        /* if (this->field_0x775 != 0) goto L_2e90; */
    }
    return 1;
    /* L_2e90:; */
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(0, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x50, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
    /* ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x6d4, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268)); */
    /* ((mDoExt_McaMorf*)(this->field_0x330))->entryDL(); */
    /* ((mDoExt_btpAnm*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1752)))->entry(this->field_0x4, this->field_0x6ec); */
    /* mDoExt_modelEntryDL(this->field_0x6d4); */
    /* ((J3DMaterialTable*)((this->field_0x4 + 88)))->removeTexNoAnimator(this->field_0x6e0); */
    /* ((daNpc_Yw1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->shadowDraw(); */
    /* dSnap_RegistFig(75, _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), C_@4512); */
    if (this->field_0x28 != 0) {
    }
    return _restgpr_28(1);
}

/* 00003C84-00003EDC       .text _execute__11daNpc_Yw1_cFv */
BOOL daNpc_Yw1_c::_execute() {
        /* if (this->field_0x776 != 0) goto L_2fdc; */
        /* field_0x710 = 0; */
        /* field_0x714 = 0; */
        /* field_0x718 = 0; */
        /* field_0x776 = 1; */
        /* L_2fdc:; */
        /* ((dNpc_JntCtrl_c*)((this + 656)))->setParam(this->field_0x18, this->field_0x1a, this->field_0x1c, this->field_0x1e, this->field_0x10, this->field_0x12, this->field_0x14); */
        /* if (this->field_0x773 == 0) goto L_308c; */
        /* if (demoActorID != 0) goto L_308c; */
        /* if (((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 1572)))->isEventBit(1) == 0) goto L_3084; */
        /* if (this->field_0x785 != 1) goto L_3078; */
        /* L_3078:; */
        /* field_0x773 = 0; */
        /* goto L_308c; */
        /* L_3084:; */
        return 1;
        /* L_308c:; */
        partner_search();
        checkOrder();
        /* if (demo() != 0) goto L_3128; */
        /* if (this->field_0x529a == 0) goto L_30e0; */
        /* if (this->field_0xf8 == 1) goto L_30e0; */
        /* L_30e0:; */
        /* if (isEventEntry() < 0) goto L_30f4; */
        event_proc(isEventEntry());
        /* goto L_3108; */
        /* L_30f4:; */
        __ptmf_scall(this, 0);
        /* L_3108:; */
        fopAcM_posMoveF(this, (this + 1336));
        play_animation();
        ((dBgS_Acch*)((this + 820)))->CrrPos(((char*)&g_dComIfG_gameInfo + 4768));
        /* L_3128:; */
        eventOrder();
        /* if (this->field_0x774 != 0) goto L_316c; */
        /* L_316c:; */
        /* field_0x1b5 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetRoomId((this + 1052)); */
        /* field_0x1b6 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetPolyColor((this + 1052)); */
        setMtx(0);
        setCollision(C_@5378);
        return 1;
}

/* 00003EDC-00003F38       .text _delete__11daNpc_Yw1_cFv */
BOOL daNpc_Yw1_c::_delete() {
    /* dComIfG_resDelete((this + 1732), ((char*)&@stringBase0 + 4), arg2); */
    if (heap != 0) {
        /* if (this->field_0x330 != 0) goto L_321c; */
        /* ((mDoExt_McaMorf*)(this->field_0x330))->stopZelAnime(); */
    }
    /* L_321c:; */
    return 1;
}

/* 00003F38-0000417C       .text _create__11daNpc_Yw1_cFv */
cPhs_State daNpc_Yw1_c::_create() {
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_339c; */
        /* if (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_3390; */
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
        /* L_3390:; */
        /* L_339c:; */
        /* if (dComIfG_resLoad((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1732), ((char*)&@stringBase0 + 4)) == 4) goto L_33c0; */
        /* goto L_3460; */
        /* L_33c0:; */
        /* if (((daNpc_Yw1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->decideType((this->field_0xb0 & 16777215)) != 0) goto L_33e0; */
        return 5;
        /* L_33e0:; */
        /* if (fopAcM_entrySolidHeap(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), ((char*)&CheckCreateHeap__FP10fopAc_ac_c + 0), ((char*)&a_siz_tbl$5476 + 0)) != 0) goto L_3418; */
        return 5;
        /* L_3418:; */
        cullMtx = (this->field_0x50 + 36);
        /* fopAcM_setCullSizeBox(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (((daNpc_Yw1_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->createInit() == 0) goto L_3460; */
        /* L_3460:; */
        /* return _restgpr_28(dComIfG_resLoad((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1732), ((char*)&@stringBase0 + 4))); */
}

/* 00004448-0000469C       .text bodyCreateHeap__11daNpc_Yw1_cFv */
void daNpc_Yw1_c::bodyCreateHeap() {
    /* ((dRes_control_c*)(((char*)&@stringBase0 + 4)))->getIDRes(6, ((char*)&g_dComIfG_gameInfo + -16460), 64, arg4, arg5); */
    if (/* bne */ 1) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&@stringBase0 + 4)))->getIDRes(6, ((char*)&g_dComIfG_gameInfo + -16460), 64, arg4, arg5)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 7), 2170, ((char*)&@stringBase0 + 45)); */
        OSPanic(((char*)&@stringBase0 + 7), 2170, ((char*)&@stringBase0 + 34));
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
    /* field_0x6cc = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 60)); */
    if (this->field_0x6cc != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 60))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 7), 2184, ((char*)&@stringBase0 + 65)); */
        OSPanic(((char*)&@stringBase0 + 7), 2184, ((char*)&@stringBase0 + 34));
    }
    /* field_0x6cd = ((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 84)); */
    if (this->field_0x6cd != 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((JUTNameTab*)(this->field_0x54))->getIndex(((char*)&@stringBase0 + 84))))->getSDevice()))->showAssert(((char*)&@stringBase0 + 7), 2186, ((char*)&@stringBase0 + 93)); */
        OSPanic(((char*)&@stringBase0 + 7), 2186, ((char*)&@stringBase0 + 34));
    }
    /* field_0x8 = 0; */
    /* field_0x8 = 0; */
    /* field_0x14 = this; */
    return 1;
}

/* 0000469C-00004930       .text headCreateHeap__11daNpc_Yw1_cFv */
void daNpc_Yw1_c::headCreateHeap() {
    /* ((dRes_control_c*)(((char*)&@stringBase0 + 4)))->getIDRes((((this->field_0x784 & 255) << 2) & 65535), ((char*)&g_dComIfG_gameInfo + -16460), 64, arg4, arg5); */
    if (/* bne */ 1) {
        /* ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&@stringBase0 + 4)))->getIDRes((((this->field_0x784 & 255) << 2) & 65535), ((char*)&g_dComIfG_gameInfo + -16460), 64, arg4, arg5)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 7), 2215, ((char*)&@stringBase0 + 45)); */
    }
    /* field_0x6d4 = mDoExt_J3DModel(OSPanic(((char*)&@stringBase0 + 7), 2215, ((char*)&@stringBase0 + 34))); */
    if (this->field_0x6d4 == 0) {
        return 0;
    }
    return (init_texPttrnAnm(((char*)&a_tex_pttrn_num_tbl$5763 + 0), 0) & 16777215);
}

/* 00004930-000049D0       .text CreateHeap__11daNpc_Yw1_cFv */
void daNpc_Yw1_c::CreateHeap() {
    if (bodyCreateHeap() == 0) {
        return 0;
    }
    if (headCreateHeap() == 0) {
        /* field_0x330 = 0; */
        return 0;
    }
    ((dBgS_AcchCir*)((this + 1272)))->SetWall(C_@5460);
    ((dBgS_Acch*)((this + 820)))->Set((this + 504), (this + 484), this, 1, (this + 1272), (this + 544), 0);
    return 1;
}

/* 000049D0-000049F0       .text daNpc_Yw1_Create__FP10fopAc_ac_c */
static cPhs_State daNpc_Yw1_Create(fopAc_ac_c* i_this) {
    return ((daNpc_Yw1_c*)i_this)->_create();
}

/* 000049F0-00004A10       .text daNpc_Yw1_Delete__FP11daNpc_Yw1_c */
static BOOL daNpc_Yw1_Delete(daNpc_Yw1_c* i_this) {
    return ((daNpc_Yw1_c*)i_this)->_delete();
}

/* 00004A10-00004A30       .text daNpc_Yw1_Execute__FP11daNpc_Yw1_c */
static BOOL daNpc_Yw1_Execute(daNpc_Yw1_c* i_this) {
    return ((daNpc_Yw1_c*)i_this)->_execute();
}

/* 00004A30-00004A50       .text daNpc_Yw1_Draw__FP11daNpc_Yw1_c */
static BOOL daNpc_Yw1_Draw(daNpc_Yw1_c* i_this) {
    return ((daNpc_Yw1_c*)i_this)->_draw();

/* 00004A50-00004A58       .text daNpc_Yw1_IsDelete__FP11daNpc_Yw1_c */
static BOOL daNpc_Yw1_IsDelete(daNpc_Yw1_c*) {
    return 1;

static actor_method_class l_daNpc_Yw1_Method = {
    (process_method_func)daNpc_Yw1_Create,
    (process_method_func)daNpc_Yw1_Delete,
    (process_method_func)daNpc_Yw1_Execute,
    (process_method_func)daNpc_Yw1_IsDelete,
    (process_method_func)daNpc_Yw1_Draw,
};

actor_process_profile_definition g_profile_NPC_YW1 = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0007,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_NPC_YW1_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daNpc_Yw1_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_NPC_YW1_e,
    /* Actor SubMtd */ &l_daNpc_Yw1_Method,
    /* Status       */ 0x08 | fopAcStts_SHOWMAP_e | fopAcStts_NOCULLEXEC_e | fopAcStts_CULL_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_ACTOR_e,
    /* Cull Type    */ fopAc_CULLBOX_CUSTOM_e,
};

/* 由 fix_decomp_braces.py 补齐：反编译产物末尾缺 3 个 } */
}}}

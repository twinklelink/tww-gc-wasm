/**
 * d_a_obj_trap.cpp
 * Enemy - Blade Trap (normal)
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_obj_trap.h"
#include "d/d_cc_d.h"

static dCcD_SrcCyl l_daObjTrap_cyl_data = {
    // dCcD_SrcGObjInf
    {
        /* Flags             */ 0,
        /* SrcObjAt  Type    */ AT_TYPE_SPIKE,
        /* SrcObjAt  Atp     */ 1,
        /* SrcObjAt  SPrm    */ cCcD_AtSPrm_Set_e | cCcD_AtSPrm_VsPlayer_e,
        /* SrcObjTg  Type    */ 0,
        /* SrcObjTg  SPrm    */ 0,
        /* SrcObjCo  SPrm    */ cCcD_CoSPrm_Set_e | cCcD_CoSPrm_IsOther_e | cCcD_CoSPrm_VsEnemy_e | cCcD_CoSPrm_VsPlayer_e | cCcD_CoSPrm_VsOther_e,
        /* SrcGObjAt Se      */ 0,
        /* SrcGObjAt HitMark */ dCcG_AtHitMark_None_e,
        /* SrcGObjAt Spl     */ dCcG_At_Spl_UNK1,
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
        /* Center */ {0.0f, -40.0f, 0.0f},
        /* Radius */ 155.0f,
        /* Height */ 100.0f,
    }},
};


/* 000000EC-0000010C       .text solidHeapCB__11daObjTrap_cFP10fopAc_ac_c */
void daObjTrap_c::solidHeapCB(fopAc_ac_c*) {
    create_heap();
}

/* 0000010C-000002A4       .text create_heap__11daObjTrap_cFv */
void daObjTrap_c::create_heap() {
        /* _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        ((dRes_control_c*)(((char*)&M_arcname__11daObjTrap_c + 0)))->getRes(5);
        /* if (/ * bne * / 1) goto L_9c; */
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&M_arcname__11daObjTrap_c + 0)))->getRes(5)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 355, ((char*)&@stringBase0 + 17));
        OSPanic(((char*)&@stringBase0 + 0), 355, ((char*)&@stringBase0 + 31));
        /* L_9c:; */
        /* if (/ * beq * / 1) goto L_19c; */
        /* field_0x290 = mDoExt_J3DModel(OSPanic(((char*)&@stringBase0 + 0), 355, ((char*)&@stringBase0 + 31))); */
        /* if (this->field_0x290 == 0) goto L_19c; */
        ((dRes_control_c*)(((char*)&M_arcname__11daObjTrap_c + 0)))->getRes(8);
        /* if (/ * bne * / 1) goto L_118; */
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&M_arcname__11daObjTrap_c + 0)))->getRes(8)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 364, ((char*)&@stringBase0 + 36));
        OSPanic(((char*)&@stringBase0 + 0), 364, ((char*)&@stringBase0 + 31));
        /* L_118:; */
        /* if (/ * beq * / 1) goto L_19c; */
        /* if (((mDoExt_btkAnm*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 660)))->init() == 0) goto L_19c; */
        /* field_0x4ec = dBgW_NewSet(((dRes_control_c*)(((char*)&M_arcname__11daObjTrap_c + 0)))->getRes(11), 1, (this->field_0x290 + 36)); */
        /* if (this->field_0x4ec == 0) goto L_19c; */
        /* L_19c:; */
        return _restgpr_27(1);
}

/* 000002A4-00000510       .text _create__11daObjTrap_cFv */
cPhs_State daObjTrap_c::_create() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_1fc; */
        /* if (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) == 0) goto L_1f0; */
        __ct();
        /* L_1f0:; */
        /* L_1fc:; */
        /* if (dComIfG_resLoad((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 680), ((char*)&M_speed_table__11daObjTrap_c + 20)) != 4) goto L_408; */
        /* if (fopAcM_entrySolidHeap(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), ((char*)&solidHeapCB__11daObjTrap_cFP10fopAc_ac_c + 0), 0) == 0) goto L_408; */
        /* if (this->field_0x4dd == 255) goto L_408; */
        /* field_0x474 = dPath_GetRoomPath(this->field_0x4dd, (this->field_0x20a & 255)); */
        /* if (this->field_0x474 == 0) goto L_3fc; */
        /* if (this->field_0x8 == 0) goto L_3fc; */
        /* if (this->field_0x4e1 != 15) goto L_290; */
        /* field_0x4e1 = 0; */
        /* L_290:; */
        /* field_0x4e8 = (this->field_0x4e1 << 1); */
        current = 0;
        /* field_0x200 = 0; */
        /* ((daObjTrap_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->set_move_info(); */
        __mi();
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_37c; */
        /* L_37c:; */
        /* field_0x4cc = 0; */
        /* field_0x4b4 = 0; */
        /* field_0x4b8 = 0; */
        /* field_0x4bc = 0; */
        /* ((daObjTrap_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->init_mtx(); */
        /* ((dCcD_Stts*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 688)))->Init(0, 255, _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* field_0x330 = (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 688); */
        /* ((dCcD_Cyl*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 748)))->Set(((char*)&l_daObjTrap_cyl_data + 0)); */
        /* ((daObjTrap_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->set_co_pos(); */
        /* ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->Regist(this->field_0x4ec, _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* ((daObjTrap_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->get_ground(); */
        /* goto L_408; */
        /* L_3fc:; */
        /* field_0x4dd = 255; */
        /* L_408:; */
        return _restgpr_29(5);
}

/* 00000DF0-00000E84       .text _delete__11daObjTrap_cFv */
bool daObjTrap_c::_delete() {
        /* if (heap == 0) goto L_d70; */
        /* if (this->field_0x4ec == 0) goto L_d70; */
        /* if (base < 0) goto L_d4c; */
        /* if (base >= 256) goto L_d4c; */
        /* goto L_d50; */
        /* L_d4c:; */
        /* L_d50:; */
        /* if (0 == 0) goto L_d70; */
        /* ((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->Release(this->field_0x4ec); */
        /* field_0x4ec = 0; */
        /* L_d70:; */
        dComIfG_resDelete((this + 680), ((char*)&M_arcname__11daObjTrap_c + 0));
        return 1;
}

/* 00000E84-00000F20       .text init_mtx__11daObjTrap_cFv */
void daObjTrap_c::init_mtx() {
    /* field_0x18 = 0; */
    /* field_0x1c = 0; */
    /* field_0x20 = 0; */
    /* PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0), arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* mDoMtx_ZXYrotM(((char*)&now__14mDoMtx_stack_c + 0), shape_angle, this->field_0x20e); */
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x290 + 36));
    /* return this->field_0x290; */
}

/* 00000F20-00000F70       .text set_co_pos__11daObjTrap_cFv */
void daObjTrap_c::set_co_pos() {
    return ((cM3dGCyl*)((this + 1028)))->SetC();
}

/* 00000F70-00000FF4       .text get_ground__11daObjTrap_cFv */
void daObjTrap_c::get_ground() {
    /* field_0x440 = 0; */
    /* field_0x444 = (base + this->field_0x1fc); */
    /* field_0x448 = 0; */
    }
    /* field_0x424 = -1; */
    return ((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GroundCross();


/* 00000FF4-0000112C       .text circle_search__11daObjTrap_cFv */
void daObjTrap_c::circle_search() {
    __mi();
    PSVECSquareMag();
    if (/* ble */ 1) {
    }
    /* if (this->field_0x8 == this->field_0x40) { */
        /* if (this->field_0x4de == 1) goto L_1028; */
        /* if (((this->field_0x490 * this->field_0x24) + (this->field_0x498 * this->field_0x2c)) == this->field_0x20) goto L_1028; */
    /* L_1028:; */
    return 1;
}

/* 0000112C-0000122C       .text set_move_info__11daObjTrap_cFv */
void daObjTrap_c::set_move_info() {
    /* field_0x484 = 0; */
    /* field_0x488 = 0; */
    /* field_0x48c = 0; */
    /* field_0x478 = 0; */
    /* field_0x47c = 0; */
    /* field_0x480 = 0; */
    __mi();
    /* field_0x490 = 0; */
    /* field_0x494 = 0; */
    /* field_0x498 = 0; */
    /* field_0x4de = ((cXyz*)((this + 1168)))->normalizeRS(); */
    /* field_0x4a0 = 0; */
    /* field_0x4a4 = 0; */
    __ml();
    /* field_0x4a8 = 0; */
    /* field_0x4ac = 0; */
    /* field_0x4b0 = 0; */
    return __ml();
}

/* 0000122C-000013E4       .text check_arrival__11daObjTrap_cFv */
void daObjTrap_c::check_arrival() {
    __mi();
    PSVECSquareMag();
    }
    PSVECSquareMag();
    if (/* ble */ 1) {
    }
    return PSVECSquareMag();


/* 000013E4-000018E4       .text check_wall__11daObjTrap_cFv */
void daObjTrap_c::check_wall() {
        /* _savegpr_20(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x58 != 0) goto L_14a4; */
        /* field_0x10 = 0; */
        base = 0;
        /* field_0x4 = 0; */
        /* field_0xc = 1; */
        /* field_0x20 = 0; */
        /* field_0x14 = 0; */
        /* field_0x16 = 256; */
        /* field_0x18 = 0; */
        /* field_0x1c = -1; */
        /* field_0x10 = 0; */
        /* field_0x20 = 0; */
        /* field_0x3c = 0; */
        ((cBgS_LinChk*)(((C_@3569 + 0) + 92)))->ct();
        base = 0;
        base = 0;
        /* field_0x4 = 0; */
        /* field_0x5 = 0; */
        /* field_0x6 = 0; */
        /* field_0x7 = 0; */
        /* field_0x8 = 0; */
        /* field_0x9 = 0; */
        /* field_0xa = 0; */
        /* field_0xc = 0; */
        /* field_0xc = 0; */
        /* field_0x10 = 1; */
        base = 0;
        /* field_0xc = 0; */
        /* field_0x10 = 0; */
        /* field_0x20 = 0; */
        base = 0;
        /* field_0x64 = 0; */
        /* field_0x5c = ((C_@3569 + 0) + 92); */
        /* if (/ * beq * / 1) goto L_1458; */
        /* L_1458:; */
        /* field_0x4 = (((C_@3569 + 0) + 92) + 12); */
        /* field_0x10 = 0; */
        /* field_0x20 = 0; */
        /* field_0x58 = 0; */
        /* field_0x64 = 0; */
        /* field_0x5c = 1; */
        /* __register_global_object(((C_@3569 + 0) + 92), ((char*)&__dt__14dBgS_ObjLinChkFv + 0), ((C_@3569 + 0) + 76), (((C_@3569 + 0) + 92) + 12)); */
        /* field_0x58 = 1; */
        /* L_14a4:; */
        __ml();
        /* L_1540:; */
        mDoMtx_YrotS(((char*)&now__14mDoMtx_stack_c + 0));
        PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0));
        PSVECScale();
        PSVECAdd();
        __pl();
        PSVECAdd();
        ((dBgS_LinChk*)(((C_@3569 + 0) + 92)))->Set();
        /* if (/ * beq * / 1) goto L_1600; */
        /* goto L_1604; */
        /* L_1600:; */
        /* L_1604:; */
        /* field_0x8 = -1; */
        /* if (((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->LineCross(((C_@3569 + 0) + 92)) == 0) goto L_17ac; */
        PSVECSubtract();
        /* if (__eq() != 0) goto L_1774; */
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_16e4; */
        /* goto L_16e8; */
        /* L_16e4:; */
        /* L_16e8:; */
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_176c; */
        /* L_176c:; */
        /* if (/ * ble * / 1) goto L_17ac; */
        /* L_1774:; */
        __pl();
        __mi();
        /* L_17ac:; */
        /* if ((0 + 1) < 3) goto L_1540; */
        base = 0;
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        return _restgpr_20(__mi());
}

/* 00001C88-00001D7C       .text check_block_target_pos__11daObjTrap_cFP4cXyz */
void daObjTrap_c::check_block_target_pos(cXyz*) {
    /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    __mi();
    /* if (((this->field_0x490 * this->field_0x8) + (this->field_0x498 * this->field_0x10)) == this->field_0x20) { */
        /* if (((this->field_0x490 * this->field_0x8) + (this->field_0x498 * this->field_0x10)) > (this->field_0x5c + this->field_0x4cc)) goto L_1c74; */
        /* mDoMtx_YrotS(((char*)&now__14mDoMtx_stack_c + 0), 16384); */
        /* PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1168)); */
        /* if (this->field_0x1c > this->field_0x64) goto L_1c74; */
    /* L_1c74:; */
    return _restgpr_29(1);
}

/* 00001D7C-000023D4       .text check_block__11daObjTrap_cF4cXyz */
void daObjTrap_c::check_block(cXyz) {
        /* _savegpr_20(this, cXyz, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0xd4 != 0) goto L_1e40; */
        /* field_0x10 = 0; */
        base = 0;
        /* field_0x4 = 0; */
        /* field_0xc = 1; */
        /* field_0x20 = 0; */
        /* field_0x14 = 0; */
        /* field_0x16 = 256; */
        /* field_0x18 = 0; */
        /* field_0x1c = -1; */
        /* field_0x10 = 0; */
        /* field_0x20 = 0; */
        /* field_0x3c = 0; */
        ((cBgS_LinChk*)(((C_@3569 + 0) + 216)))->ct();
        base = 0;
        base = 0;
        /* field_0x4 = 0; */
        /* field_0x5 = 0; */
        /* field_0x6 = 0; */
        /* field_0x7 = 0; */
        /* field_0x8 = 0; */
        /* field_0x9 = 0; */
        /* field_0xa = 0; */
        /* field_0xc = 0; */
        /* field_0xc = 0; */
        /* field_0x10 = 1; */
        base = 0;
        /* field_0xc = 0; */
        /* field_0x10 = 0; */
        /* field_0x20 = 0; */
        base = 0;
        /* field_0x64 = 0; */
        draw_tag = ((C_@3569 + 0) + 216);
        /* if (/ * beq * / 1) goto L_1df4; */
        /* L_1df4:; */
        /* field_0x4 = (((C_@3569 + 0) + 216) + 12); */
        /* field_0x10 = 0; */
        /* field_0x20 = 0; */
        /* field_0x58 = 0; */
        /* field_0x64 = 0; */
        /* field_0x5c = 1; */
        /* __register_global_object(((C_@3569 + 0) + 216), ((char*)&__dt__14dBgS_ObjLinChkFv + 0), ((C_@3569 + 0) + 200), (((C_@3569 + 0) + 216) + 12)); */
        /* field_0xd4 = 1; */
        /* L_1e40:; */
        __ml();
        /* L_1ed8:; */
        mDoMtx_YrotS(((char*)&now__14mDoMtx_stack_c + 0));
        PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0));
        PSVECScale();
        PSVECAdd();
        __pl();
        PSVECAdd();
        ((dBgS_LinChk*)(((C_@3569 + 0) + 216)))->Set();
        /* if (/ * beq * / 1) goto L_1f98; */
        /* goto L_1f9c; */
        /* L_1f98:; */
        /* L_1f9c:; */
        /* field_0x8 = -1; */
        /* if (((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->LineCross(((C_@3569 + 0) + 216)) == 0) goto L_22a0; */
        /* ((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetActorPointer(this->field_0x16); */
        /* if (/ * beq * / 1) goto L_22a0; */
        /* if (fopAc_IsActor(((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetActorPointer(this->field_0x16)) == 0) goto L_22a0; */
        /* if (/ * bne * / 1) goto L_22a0; */
        /* if (/ * bne * / 1) goto L_20f0; */
        /* ((mDoMtx_stack_c*)(fopAc_IsActor(((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetActorPointer(this->field_0x16))))->push(); */
        ((mDoMtx_stack_c*)(mDoMtx_YrotS(((char*)&now__14mDoMtx_stack_c + 0))))->transM();
        mDoMtx_YrotS(((char*)&now__14mDoMtx_stack_c + 0));
        ((mDoMtx_stack_c*)(PSMTXMultVecSR(((char*)&now__14mDoMtx_stack_c + 0), ((char*)&BaseZ__4cXyz + 0))))->pop();
        __pl();
        __ml();
        __pl();
        /* goto L_20f4; */
        /* L_20f0:; */
        /* L_20f4:; */
        /* if (0 == 0) goto L_22a0; */
        /* if (((daObjTrap_c*)(__pl()))->check_block_target_pos() == 0) goto L_22a0; */
        PSVECSubtract();
        /* if (__eq() != 0) goto L_2268; */
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_21d8; */
        /* goto L_21dc; */
        /* L_21d8:; */
        /* L_21dc:; */
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_2260; */
        /* L_2260:; */
        /* if (/ * ble * / 1) goto L_22a0; */
        /* L_2268:; */
        __pl();
        __mi();
        /* L_22a0:; */
        /* if ((0 + 1) < 2) goto L_1ed8; */
        base = 0;
        /* field_0x4 = 0; */
        /* field_0x8 = 0; */
        return _restgpr_20(__mi());
}

/* 000023D4-0000250C       .text set_vib_mode__11daObjTrap_cFv */
void daObjTrap_c::set_vib_mode() {
    /* field_0x4d8 = 6; */
    /* field_0x4d4 = 0; */
    /* field_0x4d2 = 16; */
    /* field_0x4c0 = 0; */
    /* field_0x4c4 = 0; */
    /* field_0x4c8 = 0; */
    /* field_0x4df = 2; */
    __ml();
    PSVECAdd();
    __ml();
    HitEff_hibana();
    if (this->field_0x4d8 != 0) {
        vibrate();
        /* field_0x4d8 = (this->field_0x4d8 + -1); */
    }
    if (this->field_0x4d2 != 0) {
        bound();
        /* field_0x4d2 = (this->field_0x4d2 + -1); */
    }
    /* return this->field_0x4d2; */
}

/* 0000250C-0000255C       .text vibrate__11daObjTrap_cFv */
void daObjTrap_c::vibrate() {
    /* vibrate__11daObjTrap_cFv: 无实义指令 */
}

/* 0000255C-00002678       .text bound__11daObjTrap_cFv */
void daObjTrap_c::bound() {
    __ml();
    PSVECSubtract((this + 1204), (this + 1216), (this + 1204));
    PSVECScale();
    PSVECAdd((this + 1204));
    /* field_0x4c0 = 0; */
    /* field_0x4c4 = 0; */
    /* field_0x4c8 = 0; */
    return cLib_addCalc((this + 1236));
}

/* 00002678-0000270C       .text set_shine__11daObjTrap_cFv */
void daObjTrap_c::set_shine() {
    /* field_0x4e0 = 1; */
    /* PSVECDotProduct(((char*)&BaseX__4cXyz + 0), (this + 1168), arg2, arg3, arg4, arg5, arg6, arg7); */
    if (/* bne */ 1) {
        /* field_0x10 = 0; */
        /* field_0xc = 0; */
    } else {
        /* field_0x10 = 0; */
        /* field_0xc = 0; */
    }
    /* return this->field_0x298; */
}

/* 0000270C-00002758       .text shine_move__11daObjTrap_cFv */
void daObjTrap_c::shine_move() {
    if (this->field_0x4e0 == 1) {
        /* if (((mDoExt_baseAnm*)((this + 660)))->play() != 0) goto L_2658; */
        /* field_0x4e0 = 0; */
    }
    /* L_2658:; */
    return ((mDoExt_baseAnm*)((this + 660)))->play();
}

/* 00002758-00002CB0       .text _execute__11daObjTrap_cFv */
bool daObjTrap_c::_execute() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* field_0x4b4 = 0; */
        /* field_0x4b8 = 0; */
        /* field_0x4bc = 0; */
        /* if (this->field_0x4df == 2) goto L_2a68; */
        /* if (/ * bge * / 1) goto L_26c4; */
        /* if (this->field_0x4df == 0) goto L_26d0; */
        /* if (/ * bge * / 1) goto L_28a4; */
        /* goto L_2b18; */
        /* L_26c4:; */
        /* if (this->field_0x4df >= 4) goto L_2b18; */
        /* goto L_2ad8; */
        /* L_26d0:; */
        /* cLib_chasePosXZ((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1204), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1144)); */
        __mi();
        /* field_0x49c = 0; */
        /* field_0x4a0 = 0; */
        /* field_0x4a4 = 0; */
        check_wall();
        /* check_block(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (__ne() == 0) goto L_27e8; */
        /* field_0x4b4 = 0; */
        /* field_0x4b8 = 0; */
        /* field_0x4bc = 0; */
        /* ((daObjTrap_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->set_vib_mode(); */
        /* ((daObjTrap_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->set_shine(); */
        /* ((JAIZelBasic*)(base))->seStart(27138, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* goto L_2b18; */
        /* L_27e8:; */
        /* if (cLib_chasePosXZ((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1204), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1144)) != 1) goto L_2844; */
        /* ((daObjTrap_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->set_vib_mode(); */
        /* ((daObjTrap_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->set_shine(); */
        /* ((JAIZelBasic*)(base))->seStart(27138, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* goto L_2b18; */
        /* L_2844:; */
        /* if (((daObjTrap_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->circle_search() != 1) goto L_2860; */
        /* field_0x4df = 1; */
        /* goto L_2b18; */
        /* L_2860:; */
        /* ((JAIZelBasic*)(base))->seStart(28751, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* goto L_2b18; */
        /* L_28a4:; */
        /* cLib_addCalcPosXZ((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1180), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1192)); */
        /* PSVECAdd((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1204), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1180), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1204)); */
        check_wall();
        /* check_block(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (__ne() == 0) goto L_29a8; */
        /* field_0x4b4 = 0; */
        /* field_0x4b8 = 0; */
        /* field_0x4bc = 0; */
        /* ((daObjTrap_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->set_vib_mode(); */
        /* ((daObjTrap_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->set_shine(); */
        /* ((JAIZelBasic*)(base))->seStart(27138, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* goto L_2b18; */
        /* L_29a8:; */
        /* if (((daObjTrap_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->check_arrival() != 1) goto L_2a24; */
        /* field_0x4b4 = 0; */
        /* field_0x4b8 = 0; */
        /* field_0x4bc = 0; */
        /* ((daObjTrap_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->set_vib_mode(); */
        /* ((daObjTrap_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->set_shine(); */
        /* ((JAIZelBasic*)(base))->seStart(27138, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* goto L_2b18; */
        /* L_2a24:; */
        /* ((JAIZelBasic*)(base))->seStart(28751, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* goto L_2b18; */
        /* L_2a68:; */
        /* if (this->field_0x4d8 == 0) goto L_2a84; */
        /* ((daObjTrap_c*)(((JAIZelBasic*)(base))->seStart(28751, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0)))->vibrate(); */
        /* field_0x4d8 = (this->field_0x4d8 + -1); */
        /* L_2a84:; */
        /* if (this->field_0x4d2 == 0) goto L_2aa4; */
        /* ((daObjTrap_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->bound(); */
        /* field_0x4d2 = (this->field_0x4d2 + -1); */
        /* L_2aa4:; */
        /* if (this->field_0x4d8 != 0) goto L_2b18; */
        /* if (this->field_0x4d2 != 0) goto L_2b18; */
        /* field_0x4df = 3; */
        /* goto L_2b18; */
        /* L_2ad8:; */
        /* if (this->field_0x4d0 <= 0) goto L_2aec; */
        /* field_0x4d0 = (this->field_0x4d0 + -1); */
        /* L_2aec:; */
        /* if (this->field_0x4d0 != 0) goto L_2b18; */
        /* field_0x4dc = ((this->field_0x4dc + 1) & 2147483647); */
        /* ((daObjTrap_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->set_move_info(); */
        /* field_0x4df = 0; */
        /* L_2b18:; */
        current = 0;
        /* field_0x1fc = 0; */
        /* field_0x200 = 0; */
        /* ((daObjTrap_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->shine_move(); */
        /* ((daObjTrap_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->get_ground(); */
        /* ((daObjTrap_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->init_mtx(); */
        /* ((daObjTrap_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->set_co_pos(); */
        /* ((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 748)); */
        /* if (heap == 0) goto L_2ba8; */
        /* if (this->field_0x4ec == 0) goto L_2ba8; */
        /* if (base < 0) goto L_2b98; */
        /* if (base >= 256) goto L_2b98; */
        /* goto L_2b9c; */
        /* L_2b98:; */
        /* L_2b9c:; */
        /* if (0 == 0) goto L_2ba8; */
        /* ((dBgW*)(this->field_0x4ec))->Move(); */
        /* L_2ba8:; */
        return _restgpr_29(1);
}

/* 00002CB0-00002D54       .text _draw__11daObjTrap_cFv */
bool daObjTrap_c::_draw() {
    ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(1, (this + 504), (this + 268));
    ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x290, (this + 268));
    /* ((mDoExt_btkAnm*)((this + 660)))->entry(this->field_0x4); */
    /* mDoExt_modelUpdateDL(this->field_0x290); */
    dComIfGd_setSimpleShadow2((this + 504), (this + 1072), 0, ((char*)&mSimpleTexObj__21dDlst_shadowControl_c + 0));
    return 1;
}

namespace {
/* 00002D54-00002D74       .text Mthd_Create__26@unnamed@d_a_obj_trap_cpp@FPv */
cPhs_State Mthd_Create(void* i_this) {
    return ((daObjTrap_c*)i_this)->_create();
}

/* 00002D74-00002D98       .text Mthd_Delete__26@unnamed@d_a_obj_trap_cpp@FPv */
BOOL Mthd_Delete(void* i_this) {
    return ((daObjTrap_c*)i_this)->_delete();
}

/* 00002D98-00002DBC       .text Mthd_Execute__26@unnamed@d_a_obj_trap_cpp@FPv */
BOOL Mthd_Execute(void* i_this) {
    return ((daObjTrap_c*)i_this)->_execute();
}

/* 00002DBC-00002DE0       .text Mthd_Draw__26@unnamed@d_a_obj_trap_cpp@FPv */
BOOL Mthd_Draw(void* i_this) {
    return ((daObjTrap_c*)i_this)->_draw();

/* 00002DE0-00002DE8       .text Mthd_IsDelete__26@unnamed@d_a_obj_trap_cpp@FPv */
BOOL Mthd_IsDelete(void*) {
    return 1;

static actor_method_class Trap_Mthd_Table = {
    (process_method_func)Mthd_Create,
    (process_method_func)Mthd_Delete,
    (process_method_func)Mthd_Execute,
    (process_method_func)Mthd_IsDelete,
    (process_method_func)Mthd_Draw,
};
}; // namespace

actor_process_profile_definition g_profile_Obj_Trap = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0003,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_Obj_Trap_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daObjTrap_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_Obj_Trap_e,
    /* Actor SubMtd */ &Trap_Mthd_Table,
    /* Status       */ fopAcStts_SHOWMAP_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_ACTOR_e,
    /* Cull Type    */ fopAc_CULLBOX_CUSTOM_e,
};

/* 由 fix_decomp_braces.py 补齐：反编译产物末尾缺 2 个 } */
}}

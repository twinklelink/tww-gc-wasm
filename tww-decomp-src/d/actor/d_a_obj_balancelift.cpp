/**
 * d_a_obj_balancelift.cpp
 * Object - Tower of the Gods - Pair of scales
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_obj_balancelift.h"
#include "d/d_bg_w.h"
#include "d/d_cc_d.h"

static dCcD_SrcCyl l_cyl_src = {
    // dCcD_SrcGObjInf
    {
        /* Flags             */ 0,
        /* SrcObjAt  Type    */ 0,
        /* SrcObjAt  Atp     */ 0,
        /* SrcObjAt  SPrm    */ 0,
        /* SrcObjTg  Type    */ AT_TYPE_ALL & ~AT_TYPE_BOOMERANG,
        /* SrcObjTg  SPrm    */ cCcD_TgSPrm_Set_e | cCcD_TgSPrm_GrpAll_e,
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
        /* Height */ 200.0f,
    }},
};


/* 000000EC-00000160       .text __ct__19daBalancelift_HIO_cFv */
daBalancelift_HIO_c::daBalancelift_HIO_c() {
    /* field_0x0 = 0; */
    /* field_0x4 = -1; */
    /* field_0x8 = 0; */
    /* field_0xc = 0; */
    /* field_0x10 = 0; */
    /* field_0x14 = 0; */
    /* field_0x18 = 0; */
    /* field_0x1c = 0; */
    /* field_0x20 = 0; */
    /* field_0x24 = 0; */
    /* field_0x28 = 0; */
    /* field_0x2c = 0; */
    /* field_0x30 = 0; */
    /* field_0x34 = 0; */
    return arg0;
}

/* 0000019C-00000264       .text daObjBlift_ride_actor_check__FP10fopAc_ac_c */
void daObjBlift_ride_actor_check(fopAc_ac_c*) {
        /* if (fopAc_IsActor(arg0) == 0) goto L_15c; */
        /* if (this->field_0x8 != 464) goto L_ec; */
        /* goto L_15c; */
        /* L_ec:; */
        /* if (this->field_0x8 != 169) goto L_140; */
        /* if (this->field_0x8 == 65535) goto L_15c; */
        /* if (fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0)) == 0) goto L_15c; */
        daObjBlift_ride_actor_check(fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0)));
        /* goto L_15c; */
        /* L_140:; */
        /* if (this->field_0x8 == 204) goto L_158; */
        /* if (this->field_0x8 == 316) goto L_158; */
        /* if (this->field_0x8 != 336) goto L_15c; */
        /* L_158:; */
        /* L_15c:; */
        return 1;
}

/* 00000264-0000033C       .text ride_call_back__FP4dBgWP10fopAc_ac_cP10fopAc_ac_c */
static void ride_call_back(dBgW*, fopAc_ac_c*, fopAc_ac_c*) {
    /* daObjBlift_ride_actor_check(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
    __mi();
    PSVECScale();
    PSVECAdd();
    if (this->field_0x31c == 0) {
        /* field_0x0 = (this->field_0x0 + daObjBlift_ride_actor_check(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7))); */
    } else {
        /* field_0x0 = (daObjBlift_ride_actor_check(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)) - this->field_0x0); */
    }
    /* return _restgpr_29(this->field_0x318); */
}

/* 0000033C-00000510       .text calc_quat__15daBalancelift_cFv */
void daBalancelift_c::calc_quat() {
    __mi();
    PSVECScale();
    PSVECAdd((this + 760));
    PSVECScale((this + 760), (this + 760), ((char*)&l_HIO + 0));
    PSVECAdd((this + 748), (this + 760), (this + 748));
    PSVECSubtract();
    quat_rotBaseY2();
    PSQUATInverse();
    C_QUATSlerp((this + 716));
    /* field_0x2cc = 0; */
    /* field_0x2d0 = 0; */
    /* field_0x2d4 = 0; */
    /* field_0x2d8 = 0; */
    quat_rotBaseY2();
    PSQUATInverse();
    C_QUATSlerp((this + 732));
    /* field_0x2dc = 0; */
    /* field_0x2e0 = 0; */
    /* field_0x2e4 = 0; */
    /* field_0x2e8 = 0; */
    return C_QUATSlerp((this + 732));
}

/* 00000510-00000670       .text set_mtx__15daBalancelift_cFv */
void daBalancelift_c::set_mtx() {
    /* PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0), arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    ((mDoMtx_stack_c*)((this + 716)))->quatM();
    ((mDoMtx_stack_c*)(C_@4168))->transM();
    PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0));
    PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0), (this + 668), (this + 704));
    PSMTXMultVec(((char*)&now__14mDoMtx_stack_c + 0));
    ((mDoMtx_stack_c*)((this + 732)))->quatM();
    ((mDoMtx_stack_c*)(((char*)&l_HIO + 0)))->scaleM();
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x32c + 36));
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this + 816));
    base = 0;
    /* field_0x4 = 0; */
    /* field_0x8 = 0; */
    /* field_0xc = 0; */
    /* field_0x10 = 0; */
    /* field_0x14 = 0; */
    /* field_0x18 = 0; */
    /* field_0x1c = 0; */
    /* field_0x20 = 0; */
    /* return this->field_0x24; */
}

/* 00000670-00000984       .text calc_weight__15daBalancelift_cFv */
void daBalancelift_c::calc_weight() {
        /* if (this->field_0x31c != 0) goto L_628; */
        /* if (base != 0) goto L_5e8; */
        /* goto L_614; */
        /* L_5e8:; */
        /* if (((char*)&l_HIO + 0) != 0) goto L_600; */
        /* goto L_614; */
        /* L_600:; */
        /* L_614:; */
        /* goto L_694; */
        /* L_628:; */
        /* if (base != 0) goto L_658; */
        /* goto L_684; */
        /* L_658:; */
        /* if (((char*)&l_HIO + 0) != 0) goto L_678; */
        /* goto L_684; */
        /* L_678:; */
        /* L_684:; */
        /* L_694:; */
        /* if (base != 3) goto L_6b8; */
        base = 0;
        base = 0;
        /* L_6b8:; */
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_744; */
        /* L_744:; */
        /* field_0x368 = (this->field_0x368 + (this->field_0x8 * (this->field_0x8 - this->field_0x310))); */
        /* field_0x368 = (this->field_0x368 * this->field_0x50); */
        /* field_0x310 = (this->field_0x310 + this->field_0x368); */
        __mi();
        PSVECScale();
        PSVECAdd((this + 692));
        PSVECScale((this + 692), (this + 692), ((char*)&l_HIO + 0));
        PSVECAdd((this + 668), (this + 692), (this + 668));
        /* if (this->field_0x368 == this->field_0x54) goto L_878; */
        /* L_878:; */
        return ((JAIZelBasic*)(base))->seStart(12324, (this + 504), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0);
}

/* 00000984-000009A4       .text CheckCreateHeap__FP10fopAc_ac_c */
static BOOL CheckCreateHeap(fopAc_ac_c* i_this) {
    ((daBalancelift_c*)i_this)->CreateHeap();
    return TRUE;
}

/* 000009A4-00000BA0       .text CreateHeap__15daBalancelift_cFv */
void daBalancelift_c::CreateHeap() {
    /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    ((dRes_control_c*)(((char*)&M_arcname__15daBalancelift_c + 0)))->getRes(4);
    if (/* bne */ 1) {
        ((JUTAssertion*)(((JUTAssertion*)(((dRes_control_c*)(((char*)&M_arcname__15daBalancelift_c + 0)))->getRes(4)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 419, ((char*)&@stringBase0 + 24));
    }
    /* field_0x32c = mDoExt_J3DModel(OSPanic(((char*)&@stringBase0 + 0), 419, ((char*)&@stringBase0 + 39)), 0); */
    if (this->field_0x32c == 0) {
        ((JUTAssertion*)(((JUTAssertion*)(mDoExt_J3DModel(OSPanic(((char*)&@stringBase0 + 0), 419, ((char*)&@stringBase0 + 39)), 0)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 421, ((char*)&@stringBase0 + 44));
        OSPanic(((char*)&@stringBase0 + 0), 421, ((char*)&@stringBase0 + 39));
    }
    /* field_0x3b8 = dChain_packet_create(3, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268), C_@4035); */
    if (this->field_0x3b8 == 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(dChain_packet_create(3, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 268), C_@4035)))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 423, ((char*)&@stringBase0 + 55)); */
        OSPanic(((char*)&@stringBase0 + 0), 423, ((char*)&@stringBase0 + 39));
    }
    __nw(188);
    if (/* beq */ 1) {
    }
    /* field_0x364 = __ct(); */
    /* ((cBgW*)(this->field_0x364))->Set(((dRes_control_c*)(((char*)&M_arcname__15daBalancelift_c + 0)))->getRes(7), 1, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 816)); */
    /* field_0xa8 = 0; */
    if (this->field_0x364 == 0) {
        /* ((JUTAssertion*)(((JUTAssertion*)(this->field_0x364))->getSDevice()))->showAssert(((char*)&@stringBase0 + 0), 432, ((char*)&@stringBase0 + 68)); */
        OSPanic(((char*)&@stringBase0 + 0), 432, ((char*)&@stringBase0 + 39));
    }
    if (this->field_0x32c != 0) {
        /* if (this->field_0x3b8 != 0) goto L_a98; */
        /* if (this->field_0x364 != 0) goto L_a98; */
    }
    /* L_a98:; */
    return _restgpr_29((1 & 16777215));
}

/* 00000BA0-00000F34       .text CreateInit__15daBalancelift_cFv */
void daBalancelift_c::CreateInit() {
        /* if (C_@4027 == 255) goto L_bf4; */
        /* field_0x360 = dPath_GetRoomPath(C_@4027, (this->field_0x20a & 255)); */
        /* if (this->field_0x360 == 0) goto L_bb0; */
        /* if (base == 0) goto L_bb0; */
        current = 0;
        /* field_0x1fc = 0; */
        /* field_0x200 = 0; */
        home = 0;
        /* field_0x1d4 = 0; */
        /* field_0x1d8 = 0; */
        /* if (base <= 1) goto L_bb0; */
        /* if (this == 0) goto L_b88; */
        /* goto L_b8c; */
        /* L_b88:; */
        /* L_b8c:; */
        parentActorID = fopAcM_createChild(113, -1, -1);
        /* L_bb0:; */
        /* field_0x314 = 0; */
        /* field_0x31c = 0; */
        /* field_0x318 = (this + 788); */
        /* field_0x31e = 0; */
        /* field_0x320 = (this + 798); */
        /* field_0x310 = (this->field_0x28 - (this->field_0x3c * this->field_0x24)); */
        /* goto L_c98; */
        /* L_bf4:; */
        /* field_0x314 = 0; */
        /* field_0x31e = 0; */
        /* if ((this + 798) == 65535) goto L_c64; */
        /* if (fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0)) == 0) goto L_c48; */
        /* field_0x31c = 1; */
        /* field_0x318 = (fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0)) + 788); */
        /* field_0x320 = (fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0)) + 798); */
        /* goto L_c78; */
        /* L_c48:; */
        /* field_0x31c = 0; */
        /* field_0x318 = (this + 788); */
        /* field_0x320 = (this + 798); */
        /* goto L_c78; */
        /* L_c64:; */
        /* field_0x31c = fopAcIt_Judge(((char*)&fpcSch_JudgeByID__FPvPv + 0)); */
        /* field_0x318 = (this + 788); */
        /* field_0x320 = (this + 798); */
        /* L_c78:; */
        /* field_0x310 = (this->field_0x28 - (this->field_0x3c * this->field_0x24)); */
        /* L_c98:; */
        /* field_0x368 = 0; */
        ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->Regist(this->field_0x364, this);
        /* field_0x2ec = 0; */
        /* field_0x2f0 = 0; */
        /* field_0x2f4 = 0; */
        /* field_0x2f0 = (this->field_0x2f0 - this->field_0x310); */
        /* field_0x2f8 = (this->field_0x2f0 - this->field_0x310); */
        /* field_0x2fc = 0; */
        /* field_0x300 = 0; */
        /* field_0x2b4 = 0; */
        /* field_0x2b8 = 0; */
        /* field_0x2bc = 0; */
        /* field_0x29c = 0; */
        /* field_0x2a0 = 0; */
        /* field_0x2a4 = 0; */
        /* field_0x2a8 = 0; */
        /* field_0x2ac = 0; */
        /* field_0x2b0 = 0; */
        /* field_0x2cc = 0; */
        /* field_0x2d0 = 0; */
        /* field_0x2d4 = 0; */
        /* field_0x2d8 = 0; */
        /* field_0x2dc = 0; */
        /* field_0x2e0 = 0; */
        /* field_0x2e4 = 0; */
        /* field_0x2e8 = 0; */
        scale = 0;
        /* field_0x218 = 0; */
        /* field_0x21c = 0; */
        set_mtx();
        /* field_0xb0 = 0; */
        ((dCcD_Stts*)((this + 956)))->Init(192, 255, this);
        ((dCcD_Cyl*)((this + 1016)))->Set(((char*)&l_cyl_src + 0));
        /* field_0x43c = (this + 956); */
        /* if (this->field_0x4 != 0) goto L_e2c; */
        /* field_0x4 = ((mDoHIO_subRoot_c*)(((char*)&mDoHIO_root + 4)))->createChild(((char*)&@stringBase0 + 80), ((char*)&l_HIO + 0)); */
        /* L_e2c:; */
        return 4;
}

/* 00000F34-000010E0       .text daBalanceliftCreate__FPv */
static cPhs_State daBalanceliftCreate(void*) {
        /* _savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_f50; */
        /* if (/ * beq * / 1) goto L_f44; */
        __ct();
        /* __construct_array((this->field_0x1c8 + 876), ((char*)&__ct__4cXyzFv + 0), ((char*)&__dt__4cXyzFv + 0), 12, 4); */
        /* field_0x39c = 0; */
        /* field_0x39c = 0; */
        /* field_0x3d4 = 0; */
        __ct();
        /* field_0x3d4 = 0; */
        /* field_0x3d8 = 0; */
        __ct();
        /* field_0x114 = 0; */
        /* field_0x110 = 0; */
        /* field_0x12c = 0; */
        /* field_0x114 = 0; */
        /* field_0x12c = 0; */
        /* field_0x3c = 0; */
        /* field_0x114 = 0; */
        /* field_0x12c = 0; */
        /* L_f44:; */
        /* L_f50:; */
        /* if (dComIfG_resLoad((_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 804), ((C_@4027 + 0) + 36)) != 4) goto L_fd8; */
        /* if (fopAcM_entrySolidHeap(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7), ((char*)&CheckCreateHeap__FP10fopAc_ac_c + 0), 3648) == 0) goto L_f94; */
        /* ((daBalancelift_c*)(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->CreateInit(); */
        /* goto L_f9c; */
        /* L_f94:; */
        /* goto L_fd8; */
        /* L_f9c:; */
        /* field_0x22c = (this->field_0x32c + 36); */
        /* fopAcM_setCullSizeBox(_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* PSMTXCopy((this->field_0x32c + 36), (_savegpr_29(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 816)); */
        /* L_fd8:; */
        return _restgpr_29(5);
}

/* 0000129C-00001318       .text daBalanceliftDelete__FPv */
static BOOL daBalanceliftDelete(void*) {
    /* ((cBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->Release(this->field_0x364); */
    dComIfG_resDelete((arg0 + 804), ((char*)&M_arcname__15daBalancelift_c + 0));
    if (this->field_0x4 != 0) {
        /* ((mDoHIO_subRoot_c*)(((char*)&mDoHIO_root + 4)))->deleteChild(this->field_0x4); */
        /* field_0x4 = -1; */
    }
    return 1;
}

/* 00001318-0000133C       .text daBalanceliftExecute__FPv */
static BOOL daBalanceliftExecute(void* i_this) {
    return ((daBalancelift_c*)i_this)->_execute();
}

/* 0000133C-000016F0       .text _execute__15daBalancelift_cFv */
bool daBalancelift_c::_execute() {
        /* ((daBalancelift_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->calc_weight(); */
        /* ((daBalancelift_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->calc_quat(); */
        /* ((daBalancelift_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->set_mtx(); */
        /* ((dBgW*)(this->field_0x364))->Move(); */
        /* ((dCcD_GStts*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 984)))->Move(); */
        /* if (this->field_0x414 == 0) goto L_15bc; */
        /* ((dCcD_GAtTgCoCommonBase*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1164)))->GetAc(); */
        /* ((dCcD_GObjInf*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1016)))->GetTgHitObj(); */
        /* if (fopAc_IsActor(((dCcD_GAtTgCoCommonBase*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1164)))->GetAc()) == 0) goto L_1390; */
        /* if (this->field_0xe != 296) goto L_1390; */
        __mi();
        /* if (normalizeRS() != 0) goto L_1350; */
        /* L_1350:; */
        __ml();
        /* PSVECAdd((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 760)); */
        /* field_0x368 = (this->field_0x368 + (this->field_0x20 * (-this->field_0x80))); */
        /* goto L_15bc; */
        /* L_1390:; */
        /* if (((dCcD_GObjInf*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1016)))->GetTgHitObj() == 0) goto L_15bc; */
        /* if (normalizeRS() != 0) goto L_13d4; */
        /* L_13d4:; */
        /* if (/ * beq * / 1) goto L_1420; */
        __ml();
        /* PSVECAdd((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 760)); */
        /* field_0x368 = (this->field_0x368 + (this->field_0x20 * (-this->field_0x74))); */
        /* goto L_15bc; */
        /* L_1420:; */
        /* if (/ * beq * / 1) goto L_15bc; */
        __ml();
        /* PSVECAdd((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 760)); */
        /* field_0x368 = (this->field_0x368 + (this->field_0x20 * (-this->field_0x74))); */
        /* if (/ * beq * / 1) goto L_157c; */
        __mi();
        PSVECSquareMag();
        /* if (/ * ble * / 1) goto L_1504; */
        /* goto L_1508; */
        /* L_1504:; */
        /* L_1508:; */
        __ml();
        /* PSVECAdd((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 692)); */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0, 12, ((dCcD_GAtTgCoCommonBase*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1164)))->GetAc(), 0, 0, 255, 0); */
        /* L_157c:; */
        /* ((JAIZelBasic*)(base))->seStart(26647, (_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* L_15bc:; */
        /* ((cM3dGCyl*)((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1296)))->SetC((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 772)); */
        /* ((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1016)); */
        return _restgpr_27(0);
}

/* 000016F0-00001774       .text daBalanceliftDraw__FPv */
static BOOL daBalanceliftDraw(void*) {
    ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(0, (arg0 + 504), (arg0 + 268));
    ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x32c, (arg0 + 268));
    /* mDoExt_modelUpdateDL(this->field_0x32c); */
    /* ((J3DDrawBuffer*)(this->field_0x48))->entryImm(this->field_0x3b8, 0); */
    return 1;
}

/* 00001774-0000177C       .text daBalanceliftIsDelete__FPv */
static BOOL daBalanceliftIsDelete(void*) {
    return 1;
}

static actor_method_class daBalanceliftMethodTable = {
    (process_method_func)daBalanceliftCreate,
    (process_method_func)daBalanceliftDelete,
    (process_method_func)daBalanceliftExecute,
    (process_method_func)daBalanceliftIsDelete,
    (process_method_func)daBalanceliftDraw,
};

actor_process_profile_definition g_profile_Balancelift = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0003,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_Balancelift_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daBalancelift_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_Balancelift_e,
    /* Actor SubMtd */ &daBalanceliftMethodTable,
    /* Status       */ fopAcStts_CULL_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_ACTOR_e,
    /* Cull Type    */ fopAc_CULLBOX_CUSTOM_e,
};

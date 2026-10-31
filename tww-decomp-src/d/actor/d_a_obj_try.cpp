/**
 * d_a_obj_try.cpp
 * Object - Tower of the Gods - Glowing blue/pink statue/pillar
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_obj_try.h"
#include "d/d_cc_d.h"
#include "d/d_kankyo.h"
#include "JSystem/J3DGraphAnimator/J3DModel.h"
#include "m_Do/m_Do_mtx.h"

const dCcD_SrcCyl daObjTry::Act_c::M_cyl_src = {
    // dCcD_SrcGObjInf
    {
        /* Flags             */ 0,
        /* SrcObjAt  Type    */ AT_TYPE_UNK8,
        /* SrcObjAt  Atp     */ 1,
        /* SrcObjAt  SPrm    */ cCcD_AtSPrm_Set_e | cCcD_AtSPrm_VsEnemy_e | cCcD_AtSPrm_VsOther_e,
        /* SrcObjTg  Type    */ AT_TYPE_ALL & ~AT_TYPE_WATER & ~AT_TYPE_UNK20000 & ~AT_TYPE_UNK400000 & ~AT_TYPE_LIGHT,
        /* SrcObjTg  SPrm    */ cCcD_TgSPrm_Set_e | cCcD_TgSPrm_IsOther_e,
        /* SrcObjCo  SPrm    */ cCcD_CoSPrm_Set_e | cCcD_CoSPrm_IsOther_e | cCcD_CoSPrm_VsEnemy_e | cCcD_CoSPrm_VsPlayer_e | cCcD_CoSPrm_VsOther_e,
        /* SrcGObjAt Se      */ 0,
        /* SrcGObjAt HitMark */ dCcG_AtHitMark_None_e,
        /* SrcGObjAt Spl     */ dCcG_At_Spl_UNK0,
        /* SrcGObjAt Mtrl    */ 0,
        /* SrcGObjAt SPrm    */ 0,
        /* SrcGObjTg Se      */ 0,
        /* SrcGObjTg HitMark */ 0,
        /* SrcGObjTg Spl     */ dCcG_Tg_Spl_UNK0,
        /* SrcGObjTg Mtrl    */ 0,
        /* SrcGObjTg SPrm    */ 0,
        /* SrcGObjCo SPrm    */ 0,
    },
    // cM3dGCylS
    {{
        /* Center */ {0.0f, 0.0f, 0.0f},
        /* Radius */ 0.0f,
        /* Height */ 0.0f,
    }},
};


/* 00000078-00000090       .text prm_set_swSave__Q28daObjTry5Act_cFi */
void daObjTry::Act_c::prm_set_swSave(int) {
    /* return (*(u32*)(this+176) >> arg2) & ((1 << arg1) - 1); */
}

/* 00000090-000000B4       .text solidHeapCB__Q28daObjTry5Act_cFP10fopAc_ac_c */
void daObjTry::Act_c::solidHeapCB(fopAc_ac_c*) {
}

/* 000000B4-0000026C       .text create_heap__Q28daObjTry5Act_cFv */
void daObjTry::Act_c::create_heap() {
    /* L_40:; */
    /* goto L_40; */
}

/* 0000026C-0000038C       .text init_cc__Q28daObjTry5Act_cFv */
void daObjTry::Act_c::init_cc() {
    ((dCcD_Stts*)((this + 1208)))->Init(this->field_0xc, 255, this);
    ((dCcD_Cyl*)((this + 1268)))->Set(((char*)&M_cyl_src__Q28daObjTry5Act_c + 0));
    /* field_0x538 = (this + 1208); */
    ((cM3dGCyl*)((this + 1548)))->SetR(C_@4183);
    ((cM3dGCyl*)((this + 1548)))->SetH(C_@4183);
    /* field_0x574 = 0; */
    /* field_0x578 = 0; */
    /* field_0x5a8 = 0; */
    /* field_0x5ac = 0; */
    /* field_0x5b0 = 0; */
    return Zero__4cXyz;
}

/* 0000038C-00000428       .text search_sameType__Q28daObjTry5Act_cFPvPv */
void daObjTry::Act_c::search_sameType(void*, void*) {
        /* if (/ * beq * / 1) goto L_394; */
        /* if (fopAc_IsActor(this) == 0) goto L_394; */
        /* if (this->field_0x8 != 464) goto L_394; */
        /* if (/ * beq * / 1) goto L_394; */
        /* if (PrmAbstract<Q38daObjTry5Act_c5Prm_e>__5daObjFPC10fopAc_ac_cQ38daObjTry5Act_c5Prm_eQ38daObjTry5Act_c5Prm_e(PrmAbstract<Q38daObjTry5Act_c5Prm_e>__5daObjFPC10fopAc_ac_cQ38daObjTry5Act_c5Prm_eQ38daObjTry5Act_c5Prm_e(arg1, 4, 0), 4, 0) != PrmAbstract<Q38daObjTry5Act_c5Prm_e>__5daObjFPC10fopAc_ac_cQ38daObjTry5Act_c5Prm_eQ38daObjTry5Act_c5Prm_e(arg1, 4, 0)) goto L_394; */
        /* if (this->field_0x650 == 0) goto L_394; */
        /* goto L_398; */
        /* L_394:; */
        /* L_398:; */
        return 0;
}

/* 00000428-00000528       .text chk_appear__Q28daObjTry5Act_cCFv */
void daObjTry::Act_c::chk_appear() const {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x70 == 0) goto L_458; */
        /* PrmAbstract<Q38daObjTry5Act_c5Prm_e>__5daObjFPC10fopAc_ac_cQ38daObjTry5Act_c5Prm_eQ38daObjTry5Act_c5Prm_e(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 1, 31); */
        /* if (((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->isSwitch(PrmAbstract<Q38daObjTry5Act_c5Prm_e>__5daObjFPC10fopAc_ac_cQ38daObjTry5Act_c5Prm_eQ38daObjTry5Act_c5Prm_e(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 8, 8), (this->field_0x1e2 & 255)) != 0) goto L_444; */
        /* if (((PrmAbstract<Q38daObjTry5Act_c5Prm_e>__5daObjFPC10fopAc_ac_cQ38daObjTry5Act_c5Prm_eQ38daObjTry5Act_c5Prm_e(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 1, 31) + -1) & 16777215) != 0) goto L_454; */
        /* L_444:; */
        /* if (((dSv_info_c*)(((char*)&g_dComIfG_gameInfo + 0)))->isSwitch(PrmAbstract<Q38daObjTry5Act_c5Prm_e>__5daObjFPC10fopAc_ac_cQ38daObjTry5Act_c5Prm_eQ38daObjTry5Act_c5Prm_e(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 8, 8), (this->field_0x1e2 & 255)) == 0) goto L_458; */
        /* if (((PrmAbstract<Q38daObjTry5Act_c5Prm_e>__5daObjFPC10fopAc_ac_cQ38daObjTry5Act_c5Prm_eQ38daObjTry5Act_c5Prm_e(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 1, 31) + -1) & 16777215) != 0) goto L_458; */
        /* L_454:; */
        /* L_458:; */
        /* if (this->field_0x71 == 0) goto L_494; */
        /* if (fopAcIt_Judge(((char*)&search_sameType__Q28daObjTry5Act_cFPvPv + 0), _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)) == 0) goto L_494; */
        /* L_494:; */
        return _restgpr_29(0);
}

/* 00000528-000008D8       .text _create__Q28daObjTry5Act_cFv */
cPhs_State daObjTry::Act_c::_create() {
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_5f8; */
        /* if (/ * beq * / 1) goto L_5ec; */
        __ct();
        mBck0 = 0;
        /* field_0x2a0 = 0; */
        mBck0 = 0;
        /* field_0x2a8 = 0; */
        mBrk0 = 0;
        __ct();
        /* field_0x10 = 0; */
        /* field_0x14 = 0; */
        /* field_0x20 = 0; */
        /* field_0x18 = 1; */
        __ct();
        /* field_0x4d0 = 0; */
        __ct();
        /* field_0x4d0 = 0; */
        /* field_0x4d4 = 0; */
        __ct();
        /* field_0x114 = 0; */
        /* field_0x110 = 0; */
        /* field_0x12c = 0; */
        /* field_0x114 = 0; */
        /* field_0x12c = 0; */
        /* field_0x3c = 0; */
        /* field_0x114 = 0; */
        /* field_0x12c = 0; */
        __ct((actor_condition + 1620), 0);
        /* field_0x668 = 0; */
        /* L_5ec:; */
        /* L_5f8:; */
        /* field_0x624 = PrmAbstract<Q38daObjTry5Act_c5Prm_e>__5daObjFPC10fopAc_ac_cQ38daObjTry5Act_c5Prm_eQ38daObjTry5Act_c5Prm_e(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 4, 0); */
        /* field_0x650 = ((daObjTry::Act_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->chk_appear(); */
        /* if (this->field_0x650 == 0) goto L_844; */
        /* if (dComIfG_resLoad((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 656), ((char*)&L_attrBase__Q28daObjTry25@unnamed@d_a_obj_try_cpp@ + 12)) != 4) goto L_844; */
        /* if (fopAcM_entrySolidHeap(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), ((char*)&solidHeapCB__Q28daObjTry5Act_cFP10fopAc_ac_c + 0), ((char*)&L_attrBase__Q28daObjTry25@unnamed@d_a_obj_try_cpp@ + 88), (this->field_0x624 * 120)) == 0) goto L_840; */
        /* ((dBgS_AcchCir*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1144)))->SetWall(((char*)&L_attrBase__Q28daObjTry25@unnamed@d_a_obj_try_cpp@ + 88), (this->field_0x624 * 120)); */
        /* ((dBgS_Acch*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 692)))->Set((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 484), _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 1, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1144), (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 544), (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 516)); */
        /* field_0x374 = 0; */
        /* ((daObjTry::Act_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->init_cc(); */
        cullMtx = (mpModel + 36);
        /* ((daObjTry::Act_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->cull_set_draw(); */
        /* if (this->field_0x624 == 5) goto L_75c; */
        /* if (this->field_0x624 != 6) goto L_768; */
        /* L_75c:; */
        /* L_768:; */
        /* fopAcM_posMoveF(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 0); */
        /* ((dBgS_Acch*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 692)))->CrrPos(((char*)&g_dComIfG_gameInfo + 4768)); */
        /* field_0x634 = 1; */
        /* field_0x632 = 20; */
        /* field_0x270 = 23; */
        /* field_0x274 = 0; */
        /* field_0x278 = (this->field_0x1fc + current); */
        /* field_0x27c = 0; */
        /* field_0x635 = 1; */
        /* field_0x636 = 0; */
        /* field_0x638 = 0; */
        /* field_0x630 = 0; */
        /* field_0x64a = 0; */
        /* ((daObjTry::Act_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->init_mtx(); */
        /* field_0x651 = 0; */
        /* field_0x64c = 0; */
        /* field_0x64d = 0; */
        /* field_0x64e = 1; */
        /* field_0x64f = 0; */
        /* field_0x652 = 0; */
        /* ((daObjTry::Act_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->mode_wait_init(); */
        /* goto L_844; */
        /* L_840:; */
        /* L_844:; */
        return _restgpr_28(5);
}

/* 00000C88-00000D5C       .text _delete__Q28daObjTry5Act_cFv */
bool daObjTry::Act_c::_delete() {
        /* if (this->field_0x650 == 0) goto L_ccc; */
        /* if (this->field_0x668 == 0) goto L_c64; */
        /* field_0x60 = -1; */
        /* L_c64:; */
        /* if (this->field_0x624 != 5) goto L_c88; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 4440)))->offEventBit(264);
        /* goto L_ca4; */
        /* L_c88:; */
        /* if (this->field_0x624 != 6) goto L_ca4; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 4440)))->offEventBit(272);
        /* L_ca4:; */
        model = 0;
        ((dRes_control_c*)(((char*)&M_arcname__Q28daObjTry5Act_c + 0)))->deleteRes(((char*)&g_dComIfG_gameInfo + -16460), 64);
        /* L_ccc:; */
        return 1;
}

/* 00000D5C-00000EA8       .text mode_restart_init__Q28daObjTry5Act_cFv */
void daObjTry::Act_c::mode_restart_init() {
    speedF = 0;
    /* field_0x630 = 110; */
    current = 0;
    /* field_0x1fc = (this->field_0x1d4 + (this->field_0x690 - (this->field_0x68c - farg0))); */
    /* field_0x200 = 0; */
    /* field_0x20e = (this->field_0x1de + -32768); */
    old = 0;
    /* field_0x1e8 = 0; */
    /* field_0x1ec = 0; */
    /* field_0x628 = 0; */
    return this;
}

/* 00000EA8-00000FFC       .text mode_restart__Q28daObjTry5Act_cFv */
void daObjTry::Act_c::mode_restart() {
    /* field_0x630 = (this->field_0x630 + -1); */
    if (this->field_0x630 < 80) {
        base = 1;
    }
    /* field_0x632 = 20; */
    /* field_0x634 = 1; */
    if (this->field_0x630 != 0) {
        /* field_0x1fc = 0; */
        mode_wait_init();
    } else {
        /* if (/ * bge * / 1) goto L_f74; */
        /* field_0x1fc = 0; */
        /* field_0x20e = 0; */
    }
    /* L_f74:; */
    return mode_wait_init();
}

/* 00000FFC-00001074       .text mode_wait_init__Q28daObjTry5Act_cFv */
void daObjTry::Act_c::mode_wait_init() {
    speedF = 0;
    /* field_0x628 = 1; */
    return this;
}

/* 00001074-000012C4       .text mode_wait__Q28daObjTry5Act_cFv */
void daObjTry::Act_c::mode_wait() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x74 == 0) goto L_1054; */
        /* if (this->field_0x64c == 0) goto L_1054; */
        /* L_1054:; */
        /* if (this->field_0x73 == 0) goto L_1138; */
        /* if (this->field_0x64d == 0) goto L_1138; */
        /* cLib_chasePos((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1596)); */
        /* field_0x1fc = 0; */
        PSVECSquareDistance();
        /* if (/ * bge * / 1) goto L_10fc; */
        current = 0;
        /* field_0x200 = 0; */
        /* PSVECSquareDistance((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1596), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504)); */
        /* if (/ * bge * / 1) goto L_10fc; */
        base = 1;
        /* L_10fc:; */
        /* field_0x64a = ((((this->field_0x648 - this->field_0x20e) & 65535) + 8192) + this->field_0x648); */
        /* cLib_addCalcAngleS((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 526), this->field_0x64a, 3, 6144, 2048); */
        /* goto L_1148; */
        /* L_1138:; */
        /* if (1 != 0) goto L_1148; */
        /* ((daObjTry::Act_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->bound(); */
        /* L_1148:; */
        /* if (/ * beq * / 1) goto L_116c; */
        /* if (1 != 0) goto L_116c; */
        /* goto L_1178; */
        /* L_116c:; */
        /* L_1178:; */
        /* if (1 == 0) goto L_1188; */
        /* field_0x64e = 1; */
        /* L_1188:; */
        /* if (/ * beq * / 1) goto L_11ac; */
        /* if (1 != 0) goto L_11a8; */
        /* if (this->field_0x64d == 0) goto L_11ac; */
        /* L_11a8:; */
        /* L_11ac:; */
        /* if (1 == 0) goto L_11c0; */
        /* goto L_11c4; */
        /* L_11c0:; */
        /* L_11c4:; */
        /* if (/ * beq * / 1) goto L_11f4; */
        /* fopAcM_posMoveF(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1208)); */
        /* goto L_122c; */
        /* L_11f4:; */
        /* ((daObjTry::Act_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->calc_drop_param(); */
        gravity = 0;
        /* L_122c:; */
        /* return _restgpr_29(((daObj*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->posMoveF_stream((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1208), ((char*)&Zero__4cXyz + 0))); */
}

/* 000012C4-00001344       .text mode_carry_init__Q28daObjTry5Act_cFv */
void daObjTry::Act_c::mode_carry_init() {
    /* field_0x630 = 8; */
    /* field_0x628 = 2; */
    return this;
}

/* 00001344-000013D4       .text mode_carry__Q28daObjTry5Act_cFv */
void daObjTry::Act_c::mode_carry() {
        /* if (this->field_0x630 <= 0) goto L_12f4; */
        /* field_0x630 = (this->field_0x630 + -1); */
        /* L_12f4:; */
        /* field_0x224 = 0; */
        /* if (/ * bne * / 1) goto L_1348; */
        /* if (speedF <= base) goto L_132c; */
        mode_drop_init();
        mode_drop();
        /* goto L_1348; */
        /* L_132c:; */
        SetCurrentRoomNo((this + 904));
        /* field_0x636 = 2; */
        /* L_1348:; */
        return mode_wait_init();
}

/* 000013D4-000014A8       .text mode_drop_init__Q28daObjTry5Act_cFv */
void daObjTry::Act_c::mode_drop_init() {
    /* field_0x224 = 0; */
    /* speedF = (this->field_0x14 + (speedF * this->field_0x18)); */
    gravity = 0;
    /* field_0x628 = 3; */
    return this;
}

/* 000014A8-00001518       .text mode_drop__Q28daObjTry5Act_cFv */
void daObjTry::Act_c::mode_drop() {
    /* SetCurrentRoomNo((this + 904), arg2); */
    bound();
    calc_drop_param();
    gravity = 0;
    return posMoveF_stream((this + 1208), ((char*)&Zero__4cXyz + 0));
}

/* 00001518-000016A0       .text mode_sink_init__Q28daObjTry5Act_cFv */
void daObjTry::Act_c::mode_sink_init() {
    /* gravity = (base + this->field_0x24); */
    /* if (((this->field_0x224 * this->field_0x224) + (speedF * speedF)) < this->field_0x68c) { */
    /* if (this->field_0x8 < this->field_0x68c) { */
        /* PSVECScale((this + 544), (this + 544), arg2, arg3, arg4, arg5, arg6, arg7); */
        /* speedF = (speedF * (this->field_0x68c / this->field_0x8)); */
    /* field_0x628 = 4; */
    /* return PSVECScale((this + 544), (this + 544), arg2, arg3, arg4, arg5, arg6, arg7); */

/* 000016A0-0000177C       .text mode_sink__Q28daObjTry5Act_cFv */
void daObjTry::Act_c::mode_sink() {
    get_water_h();
    SetCurrentRoomNo((this + 904));
    if (/* beq */ 1) {
        /* if (/ * ble * / 1) goto L_16b0; */
        /* if (/ * ble * / 1) goto L_16b0; */
        /* field_0x1fc = 0; */
    }
    /* L_16b0:; */
    return posMoveF_stream((this + 1208), ((char*)&Zero__4cXyz + 0), (((char*)&M_attr__Q28daObjTry5Act_c + 0) + (this->field_0x624 * 120)));
}

/* 0000177C-00001B58       .text mode_proc_call__Q28daObjTry5Act_cFv */
void daObjTry::Act_c::mode_proc_call() {
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x4b != 0) goto L_17c4; */
        /* field_0x4b = 1; */
        /* L_17c4:; */
        /* if (/ * beq * / 1) goto L_17e4; */
        /* if (this->field_0x628 == 2) goto L_17e4; */
        /* ((daObjTry::Act_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->mode_carry_init(); */
        /* L_17e4:; */
        /* field_0x49 = 0; */
        /* field_0x4a = 0; */
        /* __ptmf_scall(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* if (((this->field_0x624 * 120) + 72) < 0) goto L_1974; */
        /* if (this->field_0x49 != 0) goto L_1840; */
        /* if (this->field_0x4a == 0) goto L_1850; */
        /* L_1840:; */
        /* ((daObjTry::Act_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->eff_set_bingo(this->field_0x49, this->field_0x4a); */
        /* goto L_1858; */
        /* L_1850:; */
        /* ((daObjTry::Act_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->eff_clr_bingo(); */
        /* L_1858:; */
        /* if (this->field_0x49 != 0) goto L_187c; */
        /* if (this->field_0x4a != 0) goto L_187c; */
        /* if (this->field_0x628 != 2) goto L_18d8; */
        /* L_187c:; */
        /* field_0xc = 0; */
        /* field_0x4 = 2; */
        /* ((JAIZelBasic*)(base))->seStart(25045, (_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* goto L_18e4; */
        /* L_18d8:; */
        /* field_0x4 = 0; */
        /* L_18e4:; */
        /* if (this->field_0x624 != 5) goto L_192c; */
        /* if (this->field_0x628 != 2) goto L_1914; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 4440)))->onEventBit(264);
        /* goto L_196c; */
        /* L_1914:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 4440)))->offEventBit(264);
        /* goto L_196c; */
        /* L_192c:; */
        /* if (this->field_0x628 != 6) goto L_196c; */
        /* if (this->field_0x628 != 2) goto L_1958; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 4440)))->onEventBit(272);
        /* goto L_196c; */
        /* L_1958:; */
        ((dSv_event_c*)(((char*)&g_dComIfG_gameInfo + 4440)))->offEventBit(272);
        /* L_196c:; */
        /* ((mDoExt_baseAnm*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 668)))->play(); */
        /* L_1974:; */
        /* field_0x638 = 0; */
        /* ((dBgS_Acch*)((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 692)))->CrrPos(((char*)&g_dComIfG_gameInfo + 4768)); */
        /* if (((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->ChkMoveBG((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 924)) == 0) goto L_19e0; */
        /* field_0x635 = 1; */
        /* L_19e0:; */
        /* if (this->field_0x628 == 0) goto L_19f4; */
        /* if (this->field_0x628 != 2) goto L_1a24; */
        /* L_19f4:; */
        current = 0;
        /* field_0x1fc = 0; */
        /* field_0x200 = 0; */
        speed = 0;
        /* field_0x224 = 0; */
        /* field_0x228 = 0; */
        /* L_1a24:; */
        /* ((daObjTry::Act_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->damage_bg_proc_directly(); */
        /* if (this->field_0x628 == 2) goto L_1a50; */
        /* field_0x1b6 = ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetPolyColor((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 924)); */
        /* L_1a50:; */
        /* if ((this->field_0x20a & 255) == (this->field_0x1e2 & 255)) goto L_1ab0; */
        /* field_0x64f = 1; */
        /* if (((this->field_0x624 * 120) + 114) == 0) goto L_1ab0; */
        /* if (PrmAbstract<Q38daObjTry5Act_c5Prm_e>__5daObjFPC10fopAc_ac_cQ38daObjTry5Act_c5Prm_eQ38daObjTry5Act_c5Prm_e(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 8, 8) == 255) goto L_1ab0; */
        /* ((daObjTry::Act_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->prm_set_swSave(255); */
        /* L_1ab0:; */
        /* if (this->field_0x3ffa == 0) goto L_1ac4; */
        /* field_0x64e = 1; */
        /* L_1ac4:; */
        return _restgpr_28(1);
}

/* 00001B58-00001B90       .text cull_set_draw__Q28daObjTry5Act_cFv */
void daObjTry::Act_c::cull_set_draw() {
    fopAcM_setCullSizeSphere(this, 0.0f, 65.0f, 0.0f, 100.0f);
}

/* 00001B90-00001BC8       .text cull_set_move__Q28daObjTry5Act_cFv */
void daObjTry::Act_c::cull_set_move() {
    fopAcM_setCullSizeSphere(this, 0.0f, 65.0f, 0.0f, 300.0f);
}

/* 00001BC8-00001BE8       .text damaged__Q28daObjTry5Act_cFv */
void daObjTry::Act_c::damaged() {
    fopAcM_cancelCarryNow(this);
}

/* 00001BE8-00001CD8       .text damage_cc_proc__Q28daObjTry5Act_cFv */
void daObjTry::Act_c::damage_cc_proc() {
    if (this->field_0x4f8 == 0) {
        speedF = (speedF * base);
    } else {
        /* if (this->field_0x510 == 0) goto L_1c40; */
        ((dCcD_GObjInf*)((this + 1268)))->GetTgHitObj();
        ((daObj*)((this + 608)))->HitSeStart((this->field_0x20a & 255), (this + 1268), this->field_0x5c, (this->field_0x624 * 120));
        /* set_senv(this->field_0x42, this->field_0x43); */
        HitEff_hibana((this + 1268));
    }
    /* L_1c40:; */
    return 0;
}

/* 00001CD8-00001E98       .text damage_bg_proc__Q28daObjTry5Act_cFv */
void daObjTry::Act_c::damage_bg_proc() {
        /* ((daObjTry::Act_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->chk_sink_water(); */
        /* if (this->field_0x628 != 1) goto L_1cf4; */
        /* if (((daObjTry::Act_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->chk_sink_water() == 0) goto L_1d80; */
        /* ((daObjTry::Act_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->se_fall_water(); */
        /* if (/ * beq * / 1) goto L_1ce0; */
        /* ((daObjTry::Act_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->eff_hit_water_splash(); */
        /* field_0x653 = 1; */
        /* goto L_1ce8; */
        /* L_1ce0:; */
        /* field_0x653 = 0; */
        /* L_1ce8:; */
        /* ((daObjTry::Act_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->mode_sink_init(); */
        /* goto L_1d80; */
        /* L_1cf4:; */
        /* if (0 != 3) goto L_1d3c; */
        /* if (/ * beq * / 1) goto L_1d10; */
        /* ((daObjTry::Act_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->mode_wait_init(); */
        /* goto L_1d80; */
        /* L_1d10:; */
        /* if (((daObjTry::Act_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->chk_sink_water() == 0) goto L_1d80; */
        /* ((daObjTry::Act_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->se_fall_water(); */
        /* ((daObjTry::Act_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->eff_hit_water_splash(); */
        /* field_0x653 = 1; */
        /* ((daObjTry::Act_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->mode_sink_init(); */
        /* goto L_1d80; */
        /* L_1d3c:; */
        /* if (1 != 4) goto L_1d80; */
        /* if (((daObjTry::Act_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->chk_sinkdown_water() == 0) goto L_1d70; */
        /* if (this->field_0x653 != 0) goto L_1d80; */
        /* ((daObjTry::Act_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->eff_hit_water_splash(); */
        /* goto L_1d80; */
        /* L_1d70:; */
        /* if (((daObjTry::Act_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->chk_sink_water() != 0) goto L_1d80; */
        /* ((daObjTry::Act_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->mode_wait_init(); */
        /* L_1d80:; */
        /* if (/ * beq * / 1) goto L_1da8; */
        /* if (((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetGroundCode((_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 924)) != 4) goto L_1da8; */
        /* L_1da8:; */
        /* if (1 == 0) goto L_1dfc; */
        /* if ((this->field_0x1e2 & 255) != (base & 255)) goto L_1df0; */
        /* if (this->field_0x71 != 0) goto L_1de4; */
        /* if (this->field_0x64f != 0) goto L_1df0; */
        /* L_1de4:; */
        /* ((daObjTry::Act_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->mode_restart_init(); */
        /* goto L_1dfc; */
        /* L_1df0:; */
        /* ((daObjTry::Act_c*)(_savegpr_25(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->damaged(); */
        /* L_1dfc:; */
        return _restgpr_25(1);
}

/* 00001E98-00001FEC       .text damage_bg_proc_directly__Q28daObjTry5Act_cFv */
void daObjTry::Act_c::damage_bg_proc_directly() {
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x628 != 3) goto L_1e70; */
        /* if (/ * bne * / 1) goto L_1e68; */
        /* if (((daObjTry::Act_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->chk_sink_water() != 0) goto L_1e68; */
        /* if (/ * beq * / 1) goto L_1e70; */
        /* L_1e68:; */
        /* ((daObjTry::Act_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->cam_lockoff(); */
        /* L_1e70:; */
        /* if (this->field_0x632 <= 0) goto L_1e88; */
        /* field_0x632 = (this->field_0x632 + -1); */
        /* goto L_1f54; */
        /* L_1e88:; */
        /* if (/ * beq * / 1) goto L_1f4c; */
        /* if (this->field_0x634 != 0) goto L_1f54; */
        /* if (this->field_0x628 == 1) goto L_1eb0; */
        /* if (this->field_0x628 != 3) goto L_1f54; */
        /* L_1eb0:; */
        /* ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetMtrlSndId((_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 924)); */
        dComIfGp_getReverb((this->field_0x20a & 255));
        ((JAIZelBasic*)(base))->seStart();
        /* if (this->field_0x62c == 4) goto L_1f30; */
        /* ((daObjTry::Act_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->eff_land_smoke(); */
        /* L_1f30:; */
        /* field_0x634 = 1; */
        /* field_0x632 = 20; */
        /* ((daObjTry::Act_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->make_vib(); */
        /* goto L_1f54; */
        /* L_1f4c:; */
        /* field_0x634 = 0; */
        /* L_1f54:; */
        /* return _restgpr_28(((daObjTry::Act_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->make_vib()); */
}

/* 00001FEC-00002034       .text chk_sink_water__Q28daObjTry5Act_cFv */
void daObjTry::Act_c::chk_sink_water() {
    if (/* beq */ 1) {
        /* if (this->field_0x470 < (this->field_0x1fc + this->field_0x4)) goto L_1fac; */
    }
    /* L_1fac:; */
    return 1;
}

/* 00002034-000020AC       .text chk_sinkdown_water__Q28daObjTry5Act_cFv */
void daObjTry::Act_c::chk_sinkdown_water() {
    if (/* beq */ 1) {
        /* if (/ * ble * / 1) goto L_2020; */
    }
    /* L_2020:; */
    return 1;
}

/* 000020AC-00002218       .text calc_drop_param__Q28daObjTry5Act_cCFPfPfPf */
void daObjTry::Act_c::calc_drop_param(float*, float*, float*) const {
        /* if (/ * beq * / 1) goto L_2154; */
        /* if ((this->field_0x1fc - this->field_0x470) != this->field_0x68c) goto L_2068; */
        /* goto L_20d4; */
        /* L_2068:; */
        /* if (this->field_0x68c != (this->field_0x68c - this->field_0x470)) goto L_20b0; */
        /* goto L_20d4; */
        /* L_20b0:; */
        /* L_20d4:; */
        /* base = ((((-mState) * (mState / ((this->field_0x68c - this->field_0x470) - this->field_0x470))) * this->field_0x28) + ((this->field_0x670 - ((-mState) * (mState / ((this->field_0x68c - this->field_0x470) - this->field_0x470)))) * this->field_0x1c)); */
        /* base = ((((-mState) * (mState / ((this->field_0x68c - this->field_0x470) - this->field_0x470))) * this->field_0x2c) + ((this->field_0x670 - ((-mState) * (mState / ((this->field_0x68c - this->field_0x470) - this->field_0x470)))) * this->field_0x20)); */
        /* base = ((((-mState) * (mState / ((this->field_0x68c - this->field_0x470) - this->field_0x470))) * this->field_0x24) + base); */
        /* goto L_2190; */
        /* L_2154:; */
        /* base = ((((-mState) * (mState / ((this->field_0x68c - this->field_0x470) - this->field_0x470))) * this->field_0x24) + base); */
        /* base = ((((-mState) * (mState / ((this->field_0x68c - this->field_0x470) - this->field_0x470))) * this->field_0x24) + base); */
        /* base = ((((-mState) * (mState / ((this->field_0x68c - this->field_0x470) - this->field_0x470))) * this->field_0x24) + base); */
        /* L_2190:; */
        return (((char*)&L_attrBase__Q28daObjTry25@unnamed@d_a_obj_try_cpp@ + 88) + (this->field_0x624 * 120));
}

/* 00002218-000022F4       .text bound__Q28daObjTry5Act_cFv */
void daObjTry::Act_c::bound() {
        /* if (/ * beq * / 1) goto L_21ec; */
        /* speedF = (speedF * this->field_0x6c8); */
        /* field_0x206 = ((this->field_0x206 + -32768) - (this->field_0x4b4 << 1)); */
        /* L_21ec:; */
        /* if (/ * beq * / 1) goto L_223c; */
        /* if (this->field_0x638 <= this->field_0x4) goto L_225c; */
        /* if (this->field_0x638 <= this->field_0x8) goto L_2230; */
        /* field_0x224 = 0; */
        /* goto L_2234; */
        /* L_2230:; */
        /* field_0x224 = 0; */
        /* L_2234:; */
        /* goto L_225c; */
        /* L_223c:; */
        /* if (/ * beq * / 1) goto L_225c; */
        /* cLib_addCalc((this + 596), ((char*)&L_attrBase__Q28daObjTry25@unnamed@d_a_obj_try_cpp@ + 0), ((char*)&L_attrBase__Q28daObjTry25@unnamed@d_a_obj_try_cpp@ + 0), arg3, arg4); */
        /* L_225c:; */
        return 0;
}

/* 000022F4-0000240C       .text se_fall_water__Q28daObjTry5Act_cFv */
void daObjTry::Act_c::se_fall_water() {
        /* _savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * blt * / 1) goto L_22f8; */
        /* if (/ * bge * / 1) goto L_22f8; */
        ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetMtrlSndId();
        /* goto L_2300; */
        /* L_22f8:; */
        /* L_2300:; */
        dComIfGp_getReverb((this->field_0x20a & 255));
        ((JAIZelBasic*)(base))->seStart();
        /* return _restgpr_28(((daObjTry::Act_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->set_senv(this->field_0x44, this->field_0x45)); */
}

/* 0000240C-00002460       .text set_senv__Q28daObjTry5Act_cCFii */
void daObjTry::Act_c::set_senv(int p1, int p2) const {
    dKy_Sound_set(current.pos, p1, fopAcM_GetID((void*)this), p2);
}

/* 00002460-00002498       .text cam_lockoff__Q28daObjTry5Act_cCFv */
void daObjTry::Act_c::cam_lockoff() const {
    return ((dCamera_c*)((this->field_0x5b04 + 580)))->ForceLockOff();
}

/* 00002498-00002504       .text set_mtx__Q28daObjTry5Act_cFv */
void daObjTry::Act_c::set_mtx() {
    mDoMtx_stack_c::transS(current.pos);
    mDoMtx_stack_c::XYZrotM(shape_angle.x, shape_angle.y, shape_angle.z);
    mpModel->setBaseTRMtx(mDoMtx_stack_c::get());
}

/* 00002504-00002540       .text init_mtx__Q28daObjTry5Act_cFv */
void daObjTry::Act_c::init_mtx() {
    mpModel->setBaseScale(scale);
    set_mtx();
}

/* 00002540-00002718       .text eff_set_bingo__Q28daObjTry5Act_cFbb */
void daObjTry::Act_c::eff_set_bingo(bool, bool) {
        /* _savegpr_26(this, bool, bool, arg3, arg4, arg5, arg6, arg7); */
        /* if (this->field_0x651 != 0) goto L_2638; */
        /* ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
        /* if (/ * beq * / 1) goto L_2570; */
        /* goto L_2574; */
        /* L_2570:; */
        /* L_2574:; */
        __ct();
        /* field_0x668 = ((dPa_control_c*)(this->field_0x5ab8))->set(0); */
        /* if (/ * beq * / 1) goto L_262c; */
        /* ((JAIZelBasic*)(base))->seStart(26975, (_savegpr_26(this, bool, bool, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* L_262c:; */
        /* field_0x651 = 1; */
        /* goto L_2680; */
        /* L_2638:; */
        /* L_2680:; */
        /* return _restgpr_26(((JAIZelBasic*)(base))->seStart(28710, (_savegpr_26(this, bool, bool, arg3, arg4, arg5, arg6, arg7) + 608), 0, dComIfGp_getReverb((this->field_0x20a & 255)), 0)); */
}

/* 00002718-00002790       .text eff_clr_bingo__Q28daObjTry5Act_cFv */
void daObjTry::Act_c::eff_clr_bingo() {
        /* if (this->field_0x651 == 0) goto L_26fc; */
        /* if (this->field_0x668 == 0) goto L_26f4; */
        /* field_0x60 = -1; */
        /* field_0x668 = 0; */
        /* L_26f4:; */
        /* field_0x651 = 0; */
        /* L_26fc:; */
        /* return this->field_0x668; */
}

/* 00002790-000027BC       .text eff_land_smoke__Q28daObjTry5Act_cFv */
void daObjTry::Act_c::eff_land_smoke() {
    /* return make_land_effect((this + 904), C_@4159, arg3); */
}

/* 000027BC-0000280C       .text eff_hit_water_splash__Q28daObjTry5Act_cFv */
void daObjTry::Act_c::eff_hit_water_splash() {
    return fopKyM_createWpillar();
}

/* 0000280C-00002868       .text make_vib__Q28daObjTry5Act_cFv */
void daObjTry::Act_c::make_vib() {
    return ((dVibration_c*)(((char*)&g_dComIfG_gameInfo + 22944)))->StartShock(((check_circle() & 2147483647) + 1), 1);
}

/* 00002868-00002960       .text check_circle__Q28daObjTry5Act_cFv */
void daObjTry::Act_c::check_circle() {
    __mi();
    PSVECSquareMag();
    if (/* ble */ 1) {
    }
    /* if (this->field_0x8 == this->field_0x6e0) { */
    return 1;
}

/* 00002960-00002A90       .text get_water_h__Q28daObjTry5Act_cFv */
void daObjTry::Act_c::get_water_h() {
        __ct();
        /* if (dBgS_SplGrpChk_In_ObjGnd((this + 504)) == 0) goto L_2928; */
        /* L_2928:; */
        /* if (/ * beq * / 1) goto L_29d8; */
        /* if (/ * beq * / 1) goto L_29b4; */
        /* if (/ * beq * / 1) goto L_29b4; */
        /* L_29b4:; */
        /* if (/ * beq * / 1) goto L_29d8; */
        /* if (/ * beq * / 1) goto L_29d8; */
        /* L_29d8:; */
        __dt();
        return __vt__13cBgS_PolyInfo;
}

/* 00002BB4-00002DA8       .text _execute__Q28daObjTry5Act_cFv */
bool daObjTry::Act_c::_execute() {
        cull_set_move();
        /* if (this->field_0x635 != 0) goto L_2bac; */
        /* if (this->field_0x628 != 1) goto L_2bac; */
        /* if (/ * beq * / 1) goto L_2bac; */
        /* if (/ * bne * / 1) goto L_2bac; */
        /* if (this->field_0x75 != 0) goto L_2bac; */
        /* if (fopAcM_cullingCheck(this) != 0) goto L_2cd4; */
        /* L_2bac:; */
        /* field_0x635 = 0; */
        /* if (damage_cc_proc() != 0) goto L_2cc4; */
        /* if (damage_bg_proc() != 0) goto L_2cc4; */
        /* if (this->field_0x636 == 0) goto L_2bec; */
        /* field_0x636 = (this->field_0x636 + -1); */
        /* L_2bec:; */
        /* field_0x64e = 0; */
        /* if (mode_proc_call() == 0) goto L_2cc4; */
        set_mtx();
        ((dCcD_Cyl*)((this + 1268)))->MoveCAtTg((this + 504));
        ((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set((this + 1268));
        /* if (this->field_0x628 == 3) goto L_2c58; */
        /* if (this->field_0x628 == 4) goto L_2c58; */
        /* if (this->field_0x636 == 0) goto L_2c70; */
        /* L_2c58:; */
        ((dCcMassS_Mng*)(((char*)&g_dComIfG_gameInfo + 20216)))->Set((this + 1268), 3);
        /* L_2c70:; */
        /* field_0x274 = 0; */
        /* field_0x278 = (this->field_0x1fc + this->field_0x8); */
        /* field_0x27c = 0; */
        eyePos = 0;
        /* field_0x264 = 0; */
        /* field_0x268 = 0; */
        /* L_2cc4:; */
        /* if (0 == 0) goto L_2cd4; */
        fopAcM_delete(this);
        /* L_2cd4:; */
        /* if (this->field_0x74 != 0) goto L_2cfc; */
        /* field_0x64c = 0; */
        /* L_2cfc:; */
        /* field_0x64d = 0; */
        cull_set_draw();
        return 1;
}

/* 00002DA8-00002EA4       .text _draw__Q28daObjTry5Act_cFv */
bool daObjTry::Act_c::_draw() {
    ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(0, (this + 504), (this + 268));
    ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(mpModel, (this + 268));
    if (this->field_0x48 >= 0) {
        /* ((mDoExt_brkAnm*)((this + 668)))->entry(this->field_0x4); */
    }
    mDoExt_modelUpdateDL(mpModel);
    if (/* bne */ 1) {
        dComIfGd_setSimpleShadow2((this + 504), (this + 924), 0, ((char*)&mSimpleTexObj__21dDlst_shadowControl_c + 0));
    }
    return 1;
}

namespace daObjTry {
namespace {
/* 00002EA4-00002EC4       .text Mthd_Create__Q28daObjTry25@unnamed@d_a_obj_try_cpp@FPv */
cPhs_State Mthd_Create(void* i_this) {
    return ((daObjTry::Act_c*)i_this)->_create();
}

/* 00002EC4-00002EE8       .text Mthd_Delete__Q28daObjTry25@unnamed@d_a_obj_try_cpp@FPv */
BOOL Mthd_Delete(void* i_this) {
    return ((daObjTry::Act_c*)i_this)->_delete();
}

/* 00002EE8-00002F0C       .text Mthd_Execute__Q28daObjTry25@unnamed@d_a_obj_try_cpp@FPv */
BOOL Mthd_Execute(void* i_this) {
    return ((daObjTry::Act_c*)i_this)->_execute();

/* 00002F0C-00002F30       .text Mthd_Draw__Q28daObjTry25@unnamed@d_a_obj_try_cpp@FPv */
BOOL Mthd_Draw(void* i_this) {
    return ((daObjTry::Act_c*)i_this)->_draw();

/* 00002F30-00002F38       .text Mthd_IsDelete__Q28daObjTry25@unnamed@d_a_obj_try_cpp@FPv */
BOOL Mthd_IsDelete(void*) {
    return 1;

static actor_method_class Mthd_Table = {
    (process_method_func)Mthd_Create,
    (process_method_func)Mthd_Delete,
    (process_method_func)Mthd_Execute,
    (process_method_func)Mthd_IsDelete,
    (process_method_func)Mthd_Draw,
};
}; // namespace
}; // namespace daObjTry

actor_process_profile_definition g_profile_Obj_Try = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0008,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_Obj_Try_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daObjTry::Act_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_Obj_Try_e,
    /* Actor SubMtd */ &daObjTry::Mthd_Table,
    /* Status       */ 0x04 | fopAcStts_SHOWMAP_e | fopAcStts_CULL_e | fopAcStts_FREEZE_e | fopAcStts_UNK4000_e | fopAcStts_UNK40000_e | fopAcStts_UNK8000000_e,
    /* Group        */ fopAc_ACTOR_e,
    /* Cull Type    */ fopAc_CULLSPHERE_CUSTOM_e,
};

/* 由 fix_decomp_braces.py 补齐：反编译产物末尾缺 4 个 } */
}}}}

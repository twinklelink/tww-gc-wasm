/**
 * d_a_obj_vtil.cpp
 * Object - Tingle statues
 */

#include "d/dolzel_rel.h" // IWYU pragma: keep
#include "d/actor/d_a_obj_vtil.h"
#include "d/actor/d_a_agbsw0.h"
#include "d/d_cc_d.h"

const dCcD_SrcCyl daObjVtil_c::M_co_cyl_data = {
    // dCcD_SrcGObjInf
    {
        /* Flags             */ 0,
        /* SrcObjAt  Type    */ AT_TYPE_UNK8,
        /* SrcObjAt  Atp     */ 1,
        /* SrcObjAt  SPrm    */ cCcD_AtSPrm_Set_e | cCcD_AtSPrm_VsEnemy_e | cCcD_AtSPrm_VsOther_e,
        /* SrcObjTg  Type    */ AT_TYPE_ALL & ~AT_TYPE_WATER & ~AT_TYPE_UNK20000 & ~AT_TYPE_WIND & ~AT_TYPE_UNK400000 & ~AT_TYPE_LIGHT,
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
        /* SrcGObjTg SPrm    */ dCcG_TgSPrm_Shield_e | dCcG_TgSPrm_NoConHit_e,
        /* SrcGObjCo SPrm    */ 0,
    },
    // cM3dGCylS
    {{
        /* Center */ {0.0f, 0.0f, 0.0f},
        /* Radius */ 52.0f,
        /* Height */ 160.0f,
    }},
};


/* 00000078-00000098       .text solidHeapCB__11daObjVtil_cFP10fopAc_ac_c */
void daObjVtil_c::solidHeapCB(fopAc_ac_c*) {
    /* return (*(u32*)(this+176) >> arg2) & ((1 << arg1) - 1); */
}

/* 00000098-0000016C       .text create_heap__11daObjVtil_cFv */
void daObjVtil_c::create_heap() {
    /* L_20:; */
    /* goto L_20; */
}

/* 0000016C-000003C0       .text _create__11daObjVtil_cFv */
cPhs_State daObjVtil_c::_create() {
        /* _savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * bne * / 1) goto L_200; */
        /* if (/ * beq * / 1) goto L_1f4; */
        __ct();
        /* field_0x10 = 0; */
        /* field_0x14 = 0; */
        /* field_0x20 = 0; */
        /* field_0x18 = 1; */
        __ct();
        /* field_0x4b8 = 0; */
        __ct();
        /* field_0x4b8 = 0; */
        /* field_0x4bc = 0; */
        __ct();
        /* field_0x114 = 0; */
        /* field_0x110 = 0; */
        /* field_0x12c = 0; */
        /* field_0x114 = 0; */
        /* field_0x12c = 0; */
        /* field_0x3c = 0; */
        /* field_0x114 = 0; */
        /* field_0x12c = 0; */
        /* L_1f4:; */
        /* L_200:; */
        /* field_0x60c = PrmAbstract<Q211daObjVtil_c5Prm_e>__5daObjFPC10fopAc_ac_cQ211daObjVtil_c5Prm_eQ211daObjVtil_c5Prm_e(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), 4, 0); */
        /* if (this->field_0x60c == 15) goto L_228; */
        /* if (this->field_0x60c != -1) goto L_230; */
        /* L_228:; */
        /* field_0x60c = 0; */
        /* L_230:; */
        /* if (((daObjVtil_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->check_ev_bit() == 0) goto L_32c; */
        /* if (dComIfG_resLoad((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 660), ((char*)&l_daObjVtil_bdl_idx_table__11daObjVtil_c + 108)) != 4) goto L_32c; */
        /* if (fopAcM_entrySolidHeap(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7), ((char*)&solidHeapCB__11daObjVtil_cFP10fopAc_ac_c + 0), 3264) == 0) goto L_32c; */
        cullMtx = (this->field_0x290 + 36);
        /* ((daObjVtil_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->init_mtx(); */
        /* fopAcM_setCullSizeBox(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* ((daObjVtil_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->init_co(); */
        /* ((daObjVtil_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->init_bgc(); */
        gravity = 0;
        /* ((daObjVtil_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->renew_attention_pos(); */
        eyePos = 0;
        /* field_0x264 = 0; */
        /* field_0x268 = 0; */
        /* field_0x264 = (this->field_0x264 + this->field_0x88); */
        /* field_0x270 = 23; */
        /* field_0x616 = 1; */
        /* ((daObjVtil_c*)(_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->to_wait_mode(); */
        /* dKy_plight_set((_savegpr_27(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1564)); */
        /* L_32c:; */
        return _restgpr_27(4);
}

/* 000006CC-00000718       .text _delete__11daObjVtil_cFv */
bool daObjVtil_c::_delete() {
    dKy_plight_cut((this + 1564));
    model = 0;
    dComIfG_resDelete((this + 660), ((char*)&M_arcname__11daObjVtil_c + 0));
    return 1;
}

/* 00000718-00000750       .text check_ev_bit__11daObjVtil_cCFv */
void daObjVtil_c::check_ev_bit() const {
    return dComIfGs_isStageTbox(((char*)&l_daObjVtil_scene_no_table__11daObjVtil_c + 0), 15);
}

/* 00000750-00000770       .text tell_agb_attack__11daObjVtil_cFv */
void daObjVtil_c::tell_agb_attack() {
    fopAc_ac_c* agb = fopAcM_SearchByName(fpcNm_AGBSW0_e);
    if (agb != NULL) {
        ((daAgbsw0_c*)agb)->incTclBeat();
    }

}

/* 00000770-00000790       .text tell_agb_sink__11daObjVtil_cFv */
void daObjVtil_c::tell_agb_sink() {
    fopAc_ac_c* agb = fopAcM_SearchByName(fpcNm_AGBSW0_e);
    if (agb != NULL) {
        ((daAgbsw0_c*)agb)->incTclDispose();
    }

/* 00000790-0000082C       .text init_mtx__11daObjVtil_cFv */
void daObjVtil_c::init_mtx() {
    /* field_0x18 = 0; */
    /* field_0x1c = 0; */
    /* field_0x20 = 0; */
    /* PSMTXTrans(((char*)&now__14mDoMtx_stack_c + 0), arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    /* mDoMtx_ZXYrotM(((char*)&now__14mDoMtx_stack_c + 0), shape_angle, this->field_0x20e); */
    PSMTXCopy(((char*)&now__14mDoMtx_stack_c + 0), (this->field_0x290 + 36));
    /* return this->field_0x290; */
}

/* 0000082C-000008CC       .text init_co__11daObjVtil_cFv */
void daObjVtil_c::init_co() {
    ((dCcD_Stts*)((this + 1184)))->Init(200, 255, this);
    ((dCcD_Cyl*)((this + 1244)))->Set(((char*)&M_co_cyl_data__11daObjVtil_c + 0));
    /* field_0x520 = (this + 1184); */
    ((cM3dGCyl*)((this + 1524)))->SetC((this + 504));
    /* field_0x55c = 0; */
    /* field_0x560 = 0; */
    /* field_0x590 = 0; */
    /* field_0x594 = 0; */
    /* field_0x598 = 0; */
    return Zero__4cXyz;
}

/* 000008CC-000009A4       .text init_bgc__11daObjVtil_cFv */
void daObjVtil_c::init_bgc() {
    /* ((dBgS_AcchCir*)((this + 1120)))->SetWall(arg1, arg2); */
    ((dBgS_Acch*)((this + 668)))->Set((this + 504), (this + 484), this, 1, (this + 1120), (this + 544), (this + 516));
    /* field_0x35c = 0; */
    fopAcM_posMoveF(this, 0);
    return ((dBgS_Acch*)((this + 668)))->CrrPos(((char*)&g_dComIfG_gameInfo + 4768));
}

/* 000009A4-000009CC       .text renew_attention_pos__11daObjVtil_cFv */
void daObjVtil_c::renew_attention_pos() {
    /* field_0x274 = 0; */
    /* field_0x278 = (base + this->field_0x1fc); */
    /* field_0x27c = 0; */
    return this;
}

/* 000009CC-000009F8       .text make_smoke__11daObjVtil_cFv */
void daObjVtil_c::make_smoke() {
    /* return make_land_effect((this + 880), C_@4389, arg3); */
}

/* 000009F8-00000A88       .text se_smoke__11daObjVtil_cFv */
void daObjVtil_c::se_smoke() {
    ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetMtrlSndId((this + 900));
    return ((JAIZelBasic*)(base))->seStart(26921, (this + 608), ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetMtrlSndId((this + 900)), dComIfGp_getReverb((this->field_0x20a & 255)), 0);
}

/* 00000A88-00000AD8       .text make_splash__11daObjVtil_cFv */
void daObjVtil_c::make_splash() {
    return fopKyM_createWpillar();
}

/* 00000AD8-00000BCC       .text se_splash__11daObjVtil_cFv */
void daObjVtil_c::se_splash() {
        /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
        /* if (/ * blt * / 1) goto L_ae4; */
        /* if (/ * bge * / 1) goto L_ae4; */
        ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetMtrlSndId();
        /* goto L_aec; */
        /* L_ae4:; */
        /* L_aec:; */
        /* ((JAIZelBasic*)(base))->seStart(26904, (_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 608), ((dBgS*)(((char*)&g_dComIfG_gameInfo + 4768)))->GetMtrlSndId(), dComIfGp_getReverb((this->field_0x20a & 255)), 0); */
        /* return _restgpr_29(((daObjVtil_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->set_sound(125, 5)); */
}

/* 00000BCC-00000C20       .text set_sound__11daObjVtil_cCFii */
void daObjVtil_c::set_sound(int, int) const {
    }
    return dKy_Sound_set();
}

/* 00000C20-00000CA0       .text to_wait_mode__11daObjVtil_cFv */
void daObjVtil_c::to_wait_mode() {
    speedF = 0;
    gravity = 0;
    ((dCcD_Stts*)((this + 1184)))->Init(200, 255, this);
    /* field_0x614 = 0; */
    return ((dCcD_Stts*)((this + 1184)))->Init(200, 255, this);
}

/* 00000CA0-00000D70       .text mode_wait__11daObjVtil_cFv */
void daObjVtil_c::mode_wait() {
        /* if (/ * beq * / 1) goto L_c50; */
        to_carry_mode();
        /* goto L_cc8; */
        /* L_c50:; */
        /* if (/ * beq * / 1) goto L_c94; */
        /* if (this->field_0x616 != 0) goto L_c80; */
        ((daObjVtil_c*)(to_carry_mode()))->make_smoke();
        se_smoke();
        make_vib();
        /* goto L_c88; */
        /* L_c80:; */
        /* field_0x616 = 0; */
        /* L_c88:; */
        /* L_c94:; */
        /* if (/ * beq * / 1) goto L_cb0; */
        /* goto L_cbc; */
        /* L_cb0:; */
        /* L_cbc:; */
        fopAcM_posMoveF(this, (this + 1184));
        /* L_cc8:; */
        /* field_0x610 = 0; */
        return ((dBgS_Acch*)((this + 668)))->CrrPos(((char*)&g_dComIfG_gameInfo + 4768));
}

/* 00000D70-00000DAC       .text to_carry_mode__11daObjVtil_cFv */
void daObjVtil_c::to_carry_mode() {
    /* field_0x614 = 1; */
    return this;
}

/* 00000DAC-00000E7C       .text mode_carry__11daObjVtil_cFv */
void daObjVtil_c::mode_carry() {
        /* if (/ * bne * / 1) goto L_da4; */
        /* if (speedF <= base) goto L_da0; */
        to_throw_mode();
        /* goto L_da4; */
        /* L_da0:; */
        ((daObjVtil_c*)(to_throw_mode()))->to_wait_mode();
        /* L_da4:; */
        /* field_0x610 = 0; */
        ((dBgS_Acch*)((this + 668)))->CrrPos(((char*)&g_dComIfG_gameInfo + 4768));
        current = 0;
        /* field_0x1fc = 0; */
        /* field_0x200 = 0; */
        speed = 0;
        /* field_0x224 = 0; */
        /* field_0x228 = 0; */
        return ((dBgS_Acch*)((this + 668)))->CrrPos(((char*)&g_dComIfG_gameInfo + 4768));
}

/* 00000E7C-00000F14       .text to_throw_mode__11daObjVtil_cFv */
void daObjVtil_c::to_throw_mode() {
    /* field_0x224 = 0; */
    speedF = 0;
    gravity = 0;
    /* field_0x614 = 2; */
    return this;
}

/* 00000F14-00000FDC       .text calc_throw__11daObjVtil_cCFPfPfPf */
void daObjVtil_c::calc_throw(float*, float*, float*) const {
        /* if (/ * beq * / 1) goto L_f48; */
        /* if ((this->field_0x1fc - this->field_0x36c) != this->field_0x78) goto L_ed4; */
        /* goto L_ef8; */
        /* L_ed4:; */
        /* if (this->field_0x78 != this->field_0xb0) goto L_eec; */
        /* goto L_ef8; */
        /* L_eec:; */
        /* L_ef8:; */
        /* base = ((this->field_0xbc * (this->field_0xb8 * (-this->field_0xb4))) + (actor_type * (this->field_0x94 - (this->field_0xb8 * (-this->field_0xb4))))); */
        /* base = ((actor_tag * (this->field_0xb8 * (-this->field_0xb4))) + (this->field_0xc8 * (this->field_0x94 - (this->field_0xb8 * (-this->field_0xb4))))); */
        /* base = (this->field_0x84 + (this->field_0xcc * (this->field_0xb8 * (-this->field_0xb4)))); */
        return this;
}

/* 00000FDC-00001054       .text mode_throw__11daObjVtil_cFv */
void daObjVtil_c::mode_throw() {
    calc_throw();
    gravity = 0;
    posMoveF_stream((this + 1184), ((char*)&Zero__4cXyz + 0));
    /* field_0x610 = 0; */
    return ((dBgS_Acch*)((this + 668)))->CrrPos(((char*)&g_dComIfG_gameInfo + 4768));
}

/* 00001054-000011C8       .text to_sink_mode__11daObjVtil_cFv */
void daObjVtil_c::to_sink_mode() {
    gravity = 0;
    /* if (((this->field_0x224 * this->field_0x224) + (speedF * speedF)) < this->field_0x78) { */
    /* if (this->field_0x8 < this->field_0x78) { */
        /* PSVECScale((this + 544), (this + 544), arg2, arg3, arg4, arg5, arg6, arg7); */
        /* speedF = (speedF * (this->field_0x8c / this->field_0x8)); */
    make_splash();
    se_splash();
    /* field_0x614 = 3; */
    return se_splash();
}

/* 000011C8-0000122C       .text mode_sink__11daObjVtil_cFv */
void daObjVtil_c::mode_sink() {
    /* posMoveF_stream((this + 1184), ((char*)&Zero__4cXyz + 0), C_@4572, arg4, arg5, arg6, arg7); */
    /* field_0x610 = 0; */
    return ((dBgS_Acch*)((this + 668)))->CrrPos(((char*)&g_dComIfG_gameInfo + 4768));
}

/* 0000122C-000012F8       .text hit_co__11daObjVtil_cFv */
void daObjVtil_c::hit_co() {
    ((dCcD_GStts*)((this + 1212)))->Move();
    if (this->field_0x4e0 == 0) {
        speedF = (speedF * base);
    } else {
        /* if (this->field_0x4f8 == 0) goto L_1264; */
        tell_agb_attack();
        ((daObj*)((this + 608)))->HitSeStart((this->field_0x20a & 255), (this + 1244), 13);
        set_sound(150, 5);
        HitEff_hibana((this + 1244));
    }
    /* L_1264:; */
    return (this + 1244);
}

/* 000012F8-00001330       .text check_sink__11daObjVtil_cFv */
void daObjVtil_c::check_sink() {
    if (/* beq */ 1) {
        /* if (this->field_0x36c < (base + this->field_0x1fc)) goto L_12a8; */
    }
    /* L_12a8:; */
    return 1;
}

/* 00001330-00001374       .text check_sink_end__11daObjVtil_cFv */
void daObjVtil_c::check_sink_end() {
    if (/* beq */ 1) {
        /* if (this->field_0x36c < (base + (base + this->field_0x1fc))) goto L_12ec; */
    }
    /* L_12ec:; */
    return 1;
}

/* 00001374-000014E0       .text hit_bg__11daObjVtil_cFv */
void daObjVtil_c::hit_bg() {
        /* ((daObjVtil_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->check_sink(); */
        /* if (this->field_0x614 != 0) goto L_1344; */
        /* if (((daObjVtil_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->check_sink() == 0) goto L_1448; */
        /* ((daObjVtil_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->to_sink_mode(); */
        /* goto L_1448; */
        /* L_1344:; */
        /* if (this->field_0x614 != 2) goto L_13f4; */
        /* if (/ * bne * / 1) goto L_1368; */
        /* if (/ * bne * / 1) goto L_1368; */
        /* if (/ * beq * / 1) goto L_13e0; */
        /* L_1368:; */
        /* if (this->field_0x610 >= (gravity - this->field_0x94)) goto L_1394; */
        /* speedF = (speedF * this->field_0xf8); */
        /* goto L_1448; */
        /* L_1394:; */
        /* if (/ * beq * / 1) goto L_13b4; */
        /* ((daObjVtil_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->make_smoke(); */
        /* ((daObjVtil_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->se_smoke(); */
        /* ((daObjVtil_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->make_vib(); */
        /* L_13b4:; */
        speedF = 0;
        /* ((daObjVtil_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->to_wait_mode(); */
        /* ((dCamera_c*)((this->field_0x5b04 + 580)))->ForceLockOff(this->field_0x4); */
        /* goto L_1448; */
        /* L_13e0:; */
        /* if (((daObjVtil_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->check_sink() == 0) goto L_1448; */
        /* ((daObjVtil_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->to_sink_mode(); */
        /* goto L_1448; */
        /* L_13f4:; */
        /* if (this->field_0x614 != 3) goto L_1448; */
        /* if (((daObjVtil_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->check_sink_end() == 0) goto L_1420; */
        /* ((daObjVtil_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->tell_agb_sink(); */
        /* field_0x615 = 1; */
        /* goto L_1448; */
        /* L_1420:; */
        /* if (((daObjVtil_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->check_sink() != 0) goto L_1448; */
        /* ((daObjVtil_c*)(_savegpr_28(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->to_wait_mode(); */
        /* L_1448:; */
        /* return _restgpr_28(((dCamera_c*)((this->field_0x5b04 + 580)))->ForceLockOff(this->field_0x4)); */
}

/* 000014E0-0000153C       .text make_vib__11daObjVtil_cFv */
void daObjVtil_c::make_vib() {
    return ((dVibration_c*)(((char*)&g_dComIfG_gameInfo + 22944)))->StartShock(((check_circle() & 2147483647) + 1), 1);
}

/* 0000153C-00001634       .text check_circle__11daObjVtil_cFv */
void daObjVtil_c::check_circle() {
    __mi();
    PSVECSquareMag();
    if (/* ble */ 1) {
    }
    /* if (this->field_0x8 == this->field_0xfc) { */
    return 1;
}

/* 00001634-000017CC       .text _execute__11daObjVtil_cFv */
bool daObjVtil_c::_execute() {
    /* _savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7); */
    if (base != 0) {
        base = 1;
    }
    /* ((daObjVtil_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->hit_co(); */
    /* ((daObjVtil_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->hit_bg(); */
    if (this->field_0x615 == 0) {
        /* __ptmf_scall(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* ((daObjVtil_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->renew_attention_pos(); */
        /* ((daObjVtil_c*)(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)))->init_mtx(); */
        /* ((dCcD_Cyl*)((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1244)))->MoveCAtTg((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 504)); */
        /* ((cCcS*)(((char*)&g_dComIfG_gameInfo + 9892)))->Set((_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7) + 1244)); */
        /* field_0x61c = 0; */
        /* field_0x620 = 0; */
        /* field_0x624 = 0; */
        /* field_0x620 = (this->field_0x620 + eventInfo); */
        /* field_0x628 = 148; */
        /* field_0x62a = 127; */
        /* field_0x62c = 52; */
        /* field_0x630 = 0; */
        /* field_0x634 = 0; */
    }
    if (this->field_0x615 == 1) {
        /* fopAcM_delete(_savegpr_29(this, arg1, arg2, arg3, arg4, arg5, arg6, arg7)); */
        /* field_0x615 = 2; */
    }
    return _restgpr_29(1);
}

/* 000017CC-00001864       .text _draw__11daObjVtil_cFv */
bool daObjVtil_c::_draw() {
    ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->settingTevStruct(0, (this + 504), (this + 268));
    ((dScnKy_env_light_c*)(((char*)&g_env_light + 0)))->setLightTevColorType(this->field_0x290, (this + 268));
    /* mDoExt_modelUpdateDL(this->field_0x290); */
    if (/* bne */ 1) {
        dComIfGd_setSimpleShadow2((this + 504), (this + 900), 0, ((char*)&mSimpleTexObj__21dDlst_shadowControl_c + 0));
    }
    return 1;
}

namespace {
/* 00001864-00001884       .text Mthd_Create__26@unnamed@d_a_obj_vtil_cpp@FPv */
cPhs_State Mthd_Create(void* i_this) {
    return ((daObjVtil_c*)i_this)->_create();
}

/* 00001884-000018A8       .text Mthd_Delete__26@unnamed@d_a_obj_vtil_cpp@FPv */
BOOL Mthd_Delete(void* i_this) {
    return ((daObjVtil_c*)i_this)->_delete();
}

/* 000018A8-000018CC       .text Mthd_Execute__26@unnamed@d_a_obj_vtil_cpp@FPv */
BOOL Mthd_Execute(void* i_this) {
    return ((daObjVtil_c*)i_this)->_execute();

/* 000018CC-000018F0       .text Mthd_Draw__26@unnamed@d_a_obj_vtil_cpp@FPv */
BOOL Mthd_Draw(void* i_this) {
    return ((daObjVtil_c*)i_this)->_draw();

/* 000018F0-000018F8       .text Mthd_IsDelete__26@unnamed@d_a_obj_vtil_cpp@FPv */
BOOL Mthd_IsDelete(void*) {
    return 1;

static actor_method_class Vtil_Mthd_Table = {
    (process_method_func)Mthd_Create,
    (process_method_func)Mthd_Delete,
    (process_method_func)Mthd_Execute,
    (process_method_func)Mthd_IsDelete,
    (process_method_func)Mthd_Draw,
};
}; // namespace

actor_process_profile_definition g_profile_Obj_Vtil = {
    /* Layer ID     */ fpcLy_CURRENT_e,
    /* List ID      */ 0x0008,
    /* List Prio    */ fpcPi_CURRENT_e,
    /* Proc Name    */ fpcNm_Obj_Vtil_e,
    /* Proc SubMtd  */ &g_fpcLf_Method.base,
    /* Size         */ sizeof(daObjVtil_c),
    /* Size Other   */ 0,
    /* Parameters   */ 0,
    /* Leaf SubMtd  */ &g_fopAc_Method.base,
    /* Draw Prio    */ fpcDwPi_Obj_Vtil_e,
    /* Actor SubMtd */ &Vtil_Mthd_Table,
    /* Status       */ fopAcStts_CULL_e | fopAcStts_UNK40000_e,
    /* Group        */ fopAc_ACTOR_e,
    /* Cull Type    */ fopAc_CULLBOX_CUSTOM_e,
};

/* 由 fix_decomp_braces.py 补齐：反编译产物末尾缺 3 个 } */
}}}

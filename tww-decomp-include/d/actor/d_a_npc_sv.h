#ifndef D_A_NPC_SV_H
#define D_A_NPC_SV_H

#include "f_op/f_op_actor.h"
#include "d/d_cc_d.h"

struct sSvAnmDat {
    
};

class daNpcSv_c : public fopAc_ac_c {
public:
    void getMsgPtn() {}
    void getNpcNo() {}
    void getPhaseP() {}
    void setResFlag(unsigned char) {}

    daNpcSv_c();
    cPhs_State _create();
    void createHeap();
    void createInit();
    bool _delete();
    bool _draw();
    bool _execute();
    void executeCommon();
    void executeSetMode(unsigned char);
    void executeWaitInit();
    void executeWait();
    void executeTalkInit();
    void executeTalk();
    void checkOrder();
    void eventOrder();
    void eventMove();
    void privateCut();
    void eventMesSetInit(int);
    void eventMesSet();
    void eventGetItemInit(int);
    int eventGetItem();
    void eventSetAngleInit();
    void eventAttentionInit(int);
    void eventAttention();
    void eventTurnOkInit();
    void talk2(int, fopAc_ac_c*);
    void next_msgStatus(unsigned long*);
    void getMsg();
    void setMessage(unsigned long);
    void setAnmFromMsgTag();
    void getPrmNpcNo();
    void setMtx();
    void chkAttention();
    void lookBack();
    void playAnm();
    void setAnm(unsigned char, int, float);
    void setAnmTbl(sSvAnmDat*);
    void setCollision(dCcD_Cyl*, cXyz, float, float);
    void getTalkNo();
    void isTalkOK();

public:
    /* 0x290 */ u8 m290[0x6A4 - 0x290];
    /* 0x6A4 */ u32 mMessage;
    /* 0x6A8 */ u8 m6A8[0x743 - 0x6A8];
    /* 0x743 */ u8 m743;
};

#endif /* D_A_NPC_SV_H */

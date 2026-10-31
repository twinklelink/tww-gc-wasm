/**
 * GXDisplayList.c
 * Description:
 */

#include "dolphin/gx/GXDisplayList.h"
#include "dolphin/gx/GX.h"

void GXCallDisplayList(void* list, u32 nbytes) {
    if (gx->dirtyState != 0) {
        __GXSetDirtyState();
    }

    if (*(u32*)gx == 0) {
        __GXSendFlushPrim();
    }

    PORT_GX_WRITE_U8(0x40);
    PORT_GX_WRITE_U32((u32)list);
    PORT_GX_WRITE_U32(nbytes);
}

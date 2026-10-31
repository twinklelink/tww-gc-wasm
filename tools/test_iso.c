/* iso.c 行为验证：构造最小 FST，确认查找正确 */
#include <stdio.h>
#include <string.h>
#include <stdint.h>
typedef uint8_t u8; typedef uint32_t u32;
void iso_load(u8*, u32); int iso_mount(void);
u32 iso_find(const char*, u32*); u32 iso_file_size(u32); u8* iso_ptr(u32); u32 iso_count(void);

static void wr32(u8* p, u32 v){ p[0]=v>>24;p[1]=v>>16;p[2]=v>>8;p[3]=v; }

int main(void){
    /* 布局: [0..0x42C) 头 | FST | 字符串表 | 文件数据 */
    static u8 img[4096];
    memset(img,0,sizeof(img));
    u32 fstOff = 0x440, fstSize = 4*12 + 32;
    u8* fst = img + fstOff;
    u8* str = fst + 4*12;

    /* 条目0: 根目录 */
    wr32(fst+0,  (1u<<24)|0);            /* type=1, nameoff=0 */
    wr32(fst+4,  0);                     /* off */
    wr32(fst+8,  4);                     /* 子树结束 = 4 */
    /* 条目1: 目录 "Object" */
    wr32(fst+12, (1u<<24)|0);
    wr32(fst+16, 0);
    wr32(fst+20, 3);                     /* 子树到 3 */
    /* 条目2: 文件 "a.bmd" */
    wr32(fst+24, 0);                     /* type=0 */
    wr32(fst+28, 0x1000);                /* off */
    wr32(fst+32, 100);                   /* size */
    /* 条目3: 文件 "b.bmd" */
    wr32(fst+36, 0);
    wr32(fst+40, 0x1100);
    wr32(fst+44, 200);

    strcpy((char*)str+0,  "Object");
    strcpy((char*)str+8,  "a.bmd");
    wr32(fst+24, (0u<<24)|8);            /* nameoff=8 */
    strcpy((char*)str+16, "b.bmd");
    wr32(fst+36, (0u<<24)|16);

    wr32(img+0x424, fstOff);
    wr32(img+0x428, fstSize);

    iso_load(img, sizeof(img));
    if(iso_mount()!=0){ printf("FAIL mount\n"); return 1; }
    printf("PASS mount, count=%u\n", iso_count());

    u32 sz=0;
    /* 注意：根目录条目0 的名字表偏移是0 -> "Object"，
       所以完整路径是 /Object/a.bmd */
    u32 off = iso_find("/Object/a.bmd", &sz);
    printf("%s find /Object/a.bmd -> off=0x%x size=%u\n",
           (off==0x1000&&sz==100)?"PASS":"FAIL", off, sz);
    if(!(off==0x1000&&sz==100)) return 1;

    sz=0; off = iso_find("b.bmd", &sz);
    printf("%s basename 回退 b.bmd -> off=0x%x size=%u\n",
           (off==0x1100&&sz==200)?"PASS":"FAIL", off, sz);
    if(!(off==0x1100&&sz==200)) return 1;

    printf("%s iso_file_size(0x1100)=%u\n",
           iso_file_size(0x1100)==200?"PASS":"FAIL", iso_file_size(0x1100));

    /* 越界必须返回 NULL，不能返回野指针 */
    printf("%s iso_ptr(越界) == NULL\n", iso_ptr(99999)==NULL?"PASS":"FAIL");
    printf("\nALL PASS\n");
    return 0;
}

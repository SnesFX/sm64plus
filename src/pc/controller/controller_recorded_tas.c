#include <stdio.h>
#include <ultra64.h>

#include "controller_api.h"

static FILE *fp;

static void tas_init(void) {
    #ifdef TARGET_VITA
    fp = fopen("ux0:data/SM64Plus/cont.m64", "rb");
    if(fp == NULL)
        fp = fopen("app0:cont.m64", "rb");
    #else    
    fp = fopen("cont.m64", "rb");
    #endif
    if (fp != NULL) {
        uint8_t buf[0x400];
        fread(buf, 1, sizeof(buf), fp);
    }
}

static void tas_read(OSContPad *pad) {
    if (fp != NULL) {
        uint8_t bytes[4] = {0};
        fread(bytes, 1, 4, fp);
        pad->button = (bytes[0] << 8) | bytes[1];
        pad->stick_x = bytes[2];
        pad->stick_y = bytes[3];
    }
}

struct ControllerAPI controller_recorded_tas = {
    tas_init,
    tas_read,
    NULL,
    NULL
};

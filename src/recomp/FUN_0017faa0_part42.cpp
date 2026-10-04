#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0017faa0
// Address: 0x17faa0 - 0x2bfb1c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017faa0_part42(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x193af0u: goto label_193af0;
        case 0x193af4u: goto label_193af4;
        case 0x193af8u: goto label_193af8;
        case 0x193afcu: goto label_193afc;
        case 0x193b00u: goto label_193b00;
        case 0x193b04u: goto label_193b04;
        case 0x193b08u: goto label_193b08;
        case 0x193b0cu: goto label_193b0c;
        case 0x193b10u: goto label_193b10;
        case 0x193b14u: goto label_193b14;
        case 0x193b18u: goto label_193b18;
        case 0x193b1cu: goto label_193b1c;
        case 0x193b20u: goto label_193b20;
        case 0x193b24u: goto label_193b24;
        case 0x193b28u: goto label_193b28;
        case 0x193b2cu: goto label_193b2c;
        case 0x193b30u: goto label_193b30;
        case 0x193b34u: goto label_193b34;
        case 0x193b38u: goto label_193b38;
        case 0x193b3cu: goto label_193b3c;
        case 0x193b40u: goto label_193b40;
        case 0x193b44u: goto label_193b44;
        case 0x193b48u: goto label_193b48;
        case 0x193b4cu: goto label_193b4c;
        case 0x193b50u: goto label_193b50;
        case 0x193b54u: goto label_193b54;
        case 0x193b58u: goto label_193b58;
        case 0x193b5cu: goto label_193b5c;
        case 0x193b60u: goto label_193b60;
        case 0x193b64u: goto label_193b64;
        case 0x193b68u: goto label_193b68;
        case 0x193b6cu: goto label_193b6c;
        case 0x193b70u: goto label_193b70;
        case 0x193b74u: goto label_193b74;
        case 0x193b78u: goto label_193b78;
        case 0x193b7cu: goto label_193b7c;
        case 0x193b80u: goto label_193b80;
        case 0x193b84u: goto label_193b84;
        case 0x193b88u: goto label_193b88;
        case 0x193b8cu: goto label_193b8c;
        case 0x193b90u: goto label_193b90;
        case 0x193b94u: goto label_193b94;
        case 0x193b98u: goto label_193b98;
        case 0x193b9cu: goto label_193b9c;
        case 0x193ba0u: goto label_193ba0;
        case 0x193ba4u: goto label_193ba4;
        case 0x193ba8u: goto label_193ba8;
        case 0x193bacu: goto label_193bac;
        case 0x193bb0u: goto label_193bb0;
        case 0x193bb4u: goto label_193bb4;
        case 0x193bb8u: goto label_193bb8;
        case 0x193bbcu: goto label_193bbc;
        case 0x193bc0u: goto label_193bc0;
        case 0x193bc4u: goto label_193bc4;
        case 0x193bc8u: goto label_193bc8;
        case 0x193bccu: goto label_193bcc;
        case 0x193bd0u: goto label_193bd0;
        case 0x193bd4u: goto label_193bd4;
        case 0x193bd8u: goto label_193bd8;
        case 0x193bdcu: goto label_193bdc;
        case 0x193be0u: goto label_193be0;
        case 0x193be4u: goto label_193be4;
        case 0x193be8u: goto label_193be8;
        case 0x193becu: goto label_193bec;
        case 0x193bf0u: goto label_193bf0;
        case 0x193bf4u: goto label_193bf4;
        case 0x193bf8u: goto label_193bf8;
        case 0x193bfcu: goto label_193bfc;
        case 0x193c00u: goto label_193c00;
        case 0x193c04u: goto label_193c04;
        case 0x193c08u: goto label_193c08;
        case 0x193c0cu: goto label_193c0c;
        case 0x193c10u: goto label_193c10;
        case 0x193c14u: goto label_193c14;
        case 0x193c18u: goto label_193c18;
        case 0x193c1cu: goto label_193c1c;
        case 0x193c20u: goto label_193c20;
        case 0x193c24u: goto label_193c24;
        case 0x193c28u: goto label_193c28;
        case 0x193c2cu: goto label_193c2c;
        case 0x193c30u: goto label_193c30;
        case 0x193c34u: goto label_193c34;
        case 0x193c38u: goto label_193c38;
        case 0x193c3cu: goto label_193c3c;
        case 0x193c40u: goto label_193c40;
        case 0x193c44u: goto label_193c44;
        case 0x193c48u: goto label_193c48;
        case 0x193c4cu: goto label_193c4c;
        case 0x193c50u: goto label_193c50;
        case 0x193c54u: goto label_193c54;
        case 0x193c58u: goto label_193c58;
        case 0x193c5cu: goto label_193c5c;
        case 0x193c60u: goto label_193c60;
        case 0x193c64u: goto label_193c64;
        case 0x193c68u: goto label_193c68;
        case 0x193c6cu: goto label_193c6c;
        case 0x193c70u: goto label_193c70;
        case 0x193c74u: goto label_193c74;
        case 0x193c78u: goto label_193c78;
        case 0x193c7cu: goto label_193c7c;
        case 0x193c80u: goto label_193c80;
        case 0x193c84u: goto label_193c84;
        case 0x193c88u: goto label_193c88;
        case 0x193c8cu: goto label_193c8c;
        case 0x193c90u: goto label_193c90;
        case 0x193c94u: goto label_193c94;
        case 0x193c98u: goto label_193c98;
        case 0x193c9cu: goto label_193c9c;
        case 0x193ca0u: goto label_193ca0;
        case 0x193ca4u: goto label_193ca4;
        case 0x193ca8u: goto label_193ca8;
        case 0x193cacu: goto label_193cac;
        case 0x193cb0u: goto label_193cb0;
        case 0x193cb4u: goto label_193cb4;
        case 0x193cb8u: goto label_193cb8;
        case 0x193cbcu: goto label_193cbc;
        case 0x193cc0u: goto label_193cc0;
        case 0x193cc4u: goto label_193cc4;
        case 0x193cc8u: goto label_193cc8;
        case 0x193cccu: goto label_193ccc;
        case 0x193cd0u: goto label_193cd0;
        case 0x193cd4u: goto label_193cd4;
        case 0x193cd8u: goto label_193cd8;
        case 0x193cdcu: goto label_193cdc;
        case 0x193ce0u: goto label_193ce0;
        case 0x193ce4u: goto label_193ce4;
        case 0x193ce8u: goto label_193ce8;
        case 0x193cecu: goto label_193cec;
        case 0x193cf0u: goto label_193cf0;
        case 0x193cf4u: goto label_193cf4;
        case 0x193cf8u: goto label_193cf8;
        case 0x193cfcu: goto label_193cfc;
        case 0x193d00u: goto label_193d00;
        case 0x193d04u: goto label_193d04;
        case 0x193d08u: goto label_193d08;
        case 0x193d0cu: goto label_193d0c;
        case 0x193d10u: goto label_193d10;
        case 0x193d14u: goto label_193d14;
        case 0x193d18u: goto label_193d18;
        case 0x193d1cu: goto label_193d1c;
        case 0x193d20u: goto label_193d20;
        case 0x193d24u: goto label_193d24;
        case 0x193d28u: goto label_193d28;
        case 0x193d2cu: goto label_193d2c;
        case 0x193d30u: goto label_193d30;
        case 0x193d34u: goto label_193d34;
        case 0x193d38u: goto label_193d38;
        case 0x193d3cu: goto label_193d3c;
        case 0x193d40u: goto label_193d40;
        case 0x193d44u: goto label_193d44;
        case 0x193d48u: goto label_193d48;
        case 0x193d4cu: goto label_193d4c;
        case 0x193d50u: goto label_193d50;
        case 0x193d54u: goto label_193d54;
        case 0x193d58u: goto label_193d58;
        case 0x193d5cu: goto label_193d5c;
        case 0x193d60u: goto label_193d60;
        case 0x193d64u: goto label_193d64;
        case 0x193d68u: goto label_193d68;
        case 0x193d6cu: goto label_193d6c;
        case 0x193d70u: goto label_193d70;
        case 0x193d74u: goto label_193d74;
        case 0x193d78u: goto label_193d78;
        case 0x193d7cu: goto label_193d7c;
        case 0x193d80u: goto label_193d80;
        case 0x193d84u: goto label_193d84;
        case 0x193d88u: goto label_193d88;
        case 0x193d8cu: goto label_193d8c;
        case 0x193d90u: goto label_193d90;
        case 0x193d94u: goto label_193d94;
        case 0x193d98u: goto label_193d98;
        case 0x193d9cu: goto label_193d9c;
        case 0x193da0u: goto label_193da0;
        case 0x193da4u: goto label_193da4;
        case 0x193da8u: goto label_193da8;
        case 0x193dacu: goto label_193dac;
        case 0x193db0u: goto label_193db0;
        case 0x193db4u: goto label_193db4;
        case 0x193db8u: goto label_193db8;
        case 0x193dbcu: goto label_193dbc;
        case 0x193dc0u: goto label_193dc0;
        case 0x193dc4u: goto label_193dc4;
        case 0x193dc8u: goto label_193dc8;
        case 0x193dccu: goto label_193dcc;
        case 0x193dd0u: goto label_193dd0;
        case 0x193dd4u: goto label_193dd4;
        case 0x193dd8u: goto label_193dd8;
        case 0x193ddcu: goto label_193ddc;
        case 0x193de0u: goto label_193de0;
        case 0x193de4u: goto label_193de4;
        case 0x193de8u: goto label_193de8;
        case 0x193decu: goto label_193dec;
        case 0x193df0u: goto label_193df0;
        case 0x193df4u: goto label_193df4;
        case 0x193df8u: goto label_193df8;
        case 0x193dfcu: goto label_193dfc;
        case 0x193e00u: goto label_193e00;
        case 0x193e04u: goto label_193e04;
        case 0x193e08u: goto label_193e08;
        case 0x193e0cu: goto label_193e0c;
        case 0x193e10u: goto label_193e10;
        case 0x193e14u: goto label_193e14;
        case 0x193e18u: goto label_193e18;
        case 0x193e1cu: goto label_193e1c;
        case 0x193e20u: goto label_193e20;
        case 0x193e24u: goto label_193e24;
        case 0x193e28u: goto label_193e28;
        case 0x193e2cu: goto label_193e2c;
        case 0x193e30u: goto label_193e30;
        case 0x193e34u: goto label_193e34;
        case 0x193e38u: goto label_193e38;
        case 0x193e3cu: goto label_193e3c;
        case 0x193e40u: goto label_193e40;
        case 0x193e44u: goto label_193e44;
        case 0x193e48u: goto label_193e48;
        case 0x193e4cu: goto label_193e4c;
        case 0x193e50u: goto label_193e50;
        case 0x193e54u: goto label_193e54;
        case 0x193e58u: goto label_193e58;
        case 0x193e5cu: goto label_193e5c;
        case 0x193e60u: goto label_193e60;
        case 0x193e64u: goto label_193e64;
        case 0x193e68u: goto label_193e68;
        case 0x193e6cu: goto label_193e6c;
        case 0x193e70u: goto label_193e70;
        case 0x193e74u: goto label_193e74;
        case 0x193e78u: goto label_193e78;
        case 0x193e7cu: goto label_193e7c;
        case 0x193e80u: goto label_193e80;
        case 0x193e84u: goto label_193e84;
        case 0x193e88u: goto label_193e88;
        case 0x193e8cu: goto label_193e8c;
        case 0x193e90u: goto label_193e90;
        case 0x193e94u: goto label_193e94;
        case 0x193e98u: goto label_193e98;
        case 0x193e9cu: goto label_193e9c;
        case 0x193ea0u: goto label_193ea0;
        case 0x193ea4u: goto label_193ea4;
        case 0x193ea8u: goto label_193ea8;
        case 0x193eacu: goto label_193eac;
        case 0x193eb0u: goto label_193eb0;
        case 0x193eb4u: goto label_193eb4;
        case 0x193eb8u: goto label_193eb8;
        case 0x193ebcu: goto label_193ebc;
        case 0x193ec0u: goto label_193ec0;
        case 0x193ec4u: goto label_193ec4;
        case 0x193ec8u: goto label_193ec8;
        case 0x193eccu: goto label_193ecc;
        case 0x193ed0u: goto label_193ed0;
        case 0x193ed4u: goto label_193ed4;
        case 0x193ed8u: goto label_193ed8;
        case 0x193edcu: goto label_193edc;
        case 0x193ee0u: goto label_193ee0;
        case 0x193ee4u: goto label_193ee4;
        case 0x193ee8u: goto label_193ee8;
        case 0x193eecu: goto label_193eec;
        case 0x193ef0u: goto label_193ef0;
        case 0x193ef4u: goto label_193ef4;
        case 0x193ef8u: goto label_193ef8;
        case 0x193efcu: goto label_193efc;
        case 0x193f00u: goto label_193f00;
        case 0x193f04u: goto label_193f04;
        case 0x193f08u: goto label_193f08;
        case 0x193f0cu: goto label_193f0c;
        case 0x193f10u: goto label_193f10;
        case 0x193f14u: goto label_193f14;
        case 0x193f18u: goto label_193f18;
        case 0x193f1cu: goto label_193f1c;
        case 0x193f20u: goto label_193f20;
        case 0x193f24u: goto label_193f24;
        case 0x193f28u: goto label_193f28;
        case 0x193f2cu: goto label_193f2c;
        case 0x193f30u: goto label_193f30;
        case 0x193f34u: goto label_193f34;
        case 0x193f38u: goto label_193f38;
        case 0x193f3cu: goto label_193f3c;
        case 0x193f40u: goto label_193f40;
        case 0x193f44u: goto label_193f44;
        case 0x193f48u: goto label_193f48;
        case 0x193f4cu: goto label_193f4c;
        case 0x193f50u: goto label_193f50;
        case 0x193f54u: goto label_193f54;
        case 0x193f58u: goto label_193f58;
        case 0x193f5cu: goto label_193f5c;
        case 0x193f60u: goto label_193f60;
        case 0x193f64u: goto label_193f64;
        case 0x193f68u: goto label_193f68;
        case 0x193f6cu: goto label_193f6c;
        case 0x193f70u: goto label_193f70;
        case 0x193f74u: goto label_193f74;
        case 0x193f78u: goto label_193f78;
        case 0x193f7cu: goto label_193f7c;
        case 0x193f80u: goto label_193f80;
        case 0x193f84u: goto label_193f84;
        case 0x193f88u: goto label_193f88;
        case 0x193f8cu: goto label_193f8c;
        case 0x193f90u: goto label_193f90;
        case 0x193f94u: goto label_193f94;
        case 0x193f98u: goto label_193f98;
        case 0x193f9cu: goto label_193f9c;
        case 0x193fa0u: goto label_193fa0;
        case 0x193fa4u: goto label_193fa4;
        case 0x193fa8u: goto label_193fa8;
        case 0x193facu: goto label_193fac;
        case 0x193fb0u: goto label_193fb0;
        case 0x193fb4u: goto label_193fb4;
        case 0x193fb8u: goto label_193fb8;
        case 0x193fbcu: goto label_193fbc;
        case 0x193fc0u: goto label_193fc0;
        case 0x193fc4u: goto label_193fc4;
        case 0x193fc8u: goto label_193fc8;
        case 0x193fccu: goto label_193fcc;
        case 0x193fd0u: goto label_193fd0;
        case 0x193fd4u: goto label_193fd4;
        case 0x193fd8u: goto label_193fd8;
        case 0x193fdcu: goto label_193fdc;
        case 0x193fe0u: goto label_193fe0;
        case 0x193fe4u: goto label_193fe4;
        case 0x193fe8u: goto label_193fe8;
        case 0x193fecu: goto label_193fec;
        case 0x193ff0u: goto label_193ff0;
        case 0x193ff4u: goto label_193ff4;
        case 0x193ff8u: goto label_193ff8;
        case 0x193ffcu: goto label_193ffc;
        case 0x194000u: goto label_194000;
        case 0x194004u: goto label_194004;
        case 0x194008u: goto label_194008;
        case 0x19400cu: goto label_19400c;
        case 0x194010u: goto label_194010;
        case 0x194014u: goto label_194014;
        case 0x194018u: goto label_194018;
        case 0x19401cu: goto label_19401c;
        case 0x194020u: goto label_194020;
        case 0x194024u: goto label_194024;
        case 0x194028u: goto label_194028;
        case 0x19402cu: goto label_19402c;
        case 0x194030u: goto label_194030;
        case 0x194034u: goto label_194034;
        case 0x194038u: goto label_194038;
        case 0x19403cu: goto label_19403c;
        case 0x194040u: goto label_194040;
        case 0x194044u: goto label_194044;
        case 0x194048u: goto label_194048;
        case 0x19404cu: goto label_19404c;
        case 0x194050u: goto label_194050;
        case 0x194054u: goto label_194054;
        case 0x194058u: goto label_194058;
        case 0x19405cu: goto label_19405c;
        case 0x194060u: goto label_194060;
        case 0x194064u: goto label_194064;
        case 0x194068u: goto label_194068;
        case 0x19406cu: goto label_19406c;
        case 0x194070u: goto label_194070;
        case 0x194074u: goto label_194074;
        case 0x194078u: goto label_194078;
        case 0x19407cu: goto label_19407c;
        case 0x194080u: goto label_194080;
        case 0x194084u: goto label_194084;
        case 0x194088u: goto label_194088;
        case 0x19408cu: goto label_19408c;
        case 0x194090u: goto label_194090;
        case 0x194094u: goto label_194094;
        case 0x194098u: goto label_194098;
        case 0x19409cu: goto label_19409c;
        case 0x1940a0u: goto label_1940a0;
        case 0x1940a4u: goto label_1940a4;
        case 0x1940a8u: goto label_1940a8;
        case 0x1940acu: goto label_1940ac;
        case 0x1940b0u: goto label_1940b0;
        case 0x1940b4u: goto label_1940b4;
        case 0x1940b8u: goto label_1940b8;
        case 0x1940bcu: goto label_1940bc;
        case 0x1940c0u: goto label_1940c0;
        case 0x1940c4u: goto label_1940c4;
        case 0x1940c8u: goto label_1940c8;
        case 0x1940ccu: goto label_1940cc;
        case 0x1940d0u: goto label_1940d0;
        case 0x1940d4u: goto label_1940d4;
        case 0x1940d8u: goto label_1940d8;
        case 0x1940dcu: goto label_1940dc;
        case 0x1940e0u: goto label_1940e0;
        case 0x1940e4u: goto label_1940e4;
        case 0x1940e8u: goto label_1940e8;
        case 0x1940ecu: goto label_1940ec;
        case 0x1940f0u: goto label_1940f0;
        case 0x1940f4u: goto label_1940f4;
        case 0x1940f8u: goto label_1940f8;
        case 0x1940fcu: goto label_1940fc;
        case 0x194100u: goto label_194100;
        case 0x194104u: goto label_194104;
        case 0x194108u: goto label_194108;
        case 0x19410cu: goto label_19410c;
        case 0x194110u: goto label_194110;
        case 0x194114u: goto label_194114;
        case 0x194118u: goto label_194118;
        case 0x19411cu: goto label_19411c;
        case 0x194120u: goto label_194120;
        case 0x194124u: goto label_194124;
        case 0x194128u: goto label_194128;
        case 0x19412cu: goto label_19412c;
        case 0x194130u: goto label_194130;
        case 0x194134u: goto label_194134;
        case 0x194138u: goto label_194138;
        case 0x19413cu: goto label_19413c;
        case 0x194140u: goto label_194140;
        case 0x194144u: goto label_194144;
        case 0x194148u: goto label_194148;
        case 0x19414cu: goto label_19414c;
        case 0x194150u: goto label_194150;
        case 0x194154u: goto label_194154;
        case 0x194158u: goto label_194158;
        case 0x19415cu: goto label_19415c;
        case 0x194160u: goto label_194160;
        case 0x194164u: goto label_194164;
        case 0x194168u: goto label_194168;
        case 0x19416cu: goto label_19416c;
        case 0x194170u: goto label_194170;
        case 0x194174u: goto label_194174;
        case 0x194178u: goto label_194178;
        case 0x19417cu: goto label_19417c;
        case 0x194180u: goto label_194180;
        case 0x194184u: goto label_194184;
        case 0x194188u: goto label_194188;
        case 0x19418cu: goto label_19418c;
        case 0x194190u: goto label_194190;
        case 0x194194u: goto label_194194;
        case 0x194198u: goto label_194198;
        case 0x19419cu: goto label_19419c;
        case 0x1941a0u: goto label_1941a0;
        case 0x1941a4u: goto label_1941a4;
        case 0x1941a8u: goto label_1941a8;
        case 0x1941acu: goto label_1941ac;
        case 0x1941b0u: goto label_1941b0;
        case 0x1941b4u: goto label_1941b4;
        case 0x1941b8u: goto label_1941b8;
        case 0x1941bcu: goto label_1941bc;
        case 0x1941c0u: goto label_1941c0;
        case 0x1941c4u: goto label_1941c4;
        case 0x1941c8u: goto label_1941c8;
        case 0x1941ccu: goto label_1941cc;
        case 0x1941d0u: goto label_1941d0;
        case 0x1941d4u: goto label_1941d4;
        case 0x1941d8u: goto label_1941d8;
        case 0x1941dcu: goto label_1941dc;
        case 0x1941e0u: goto label_1941e0;
        case 0x1941e4u: goto label_1941e4;
        case 0x1941e8u: goto label_1941e8;
        case 0x1941ecu: goto label_1941ec;
        case 0x1941f0u: goto label_1941f0;
        case 0x1941f4u: goto label_1941f4;
        case 0x1941f8u: goto label_1941f8;
        case 0x1941fcu: goto label_1941fc;
        case 0x194200u: goto label_194200;
        case 0x194204u: goto label_194204;
        case 0x194208u: goto label_194208;
        case 0x19420cu: goto label_19420c;
        case 0x194210u: goto label_194210;
        case 0x194214u: goto label_194214;
        case 0x194218u: goto label_194218;
        case 0x19421cu: goto label_19421c;
        case 0x194220u: goto label_194220;
        case 0x194224u: goto label_194224;
        case 0x194228u: goto label_194228;
        case 0x19422cu: goto label_19422c;
        case 0x194230u: goto label_194230;
        case 0x194234u: goto label_194234;
        case 0x194238u: goto label_194238;
        case 0x19423cu: goto label_19423c;
        case 0x194240u: goto label_194240;
        case 0x194244u: goto label_194244;
        case 0x194248u: goto label_194248;
        case 0x19424cu: goto label_19424c;
        case 0x194250u: goto label_194250;
        case 0x194254u: goto label_194254;
        case 0x194258u: goto label_194258;
        case 0x19425cu: goto label_19425c;
        case 0x194260u: goto label_194260;
        case 0x194264u: goto label_194264;
        case 0x194268u: goto label_194268;
        case 0x19426cu: goto label_19426c;
        case 0x194270u: goto label_194270;
        case 0x194274u: goto label_194274;
        case 0x194278u: goto label_194278;
        case 0x19427cu: goto label_19427c;
        case 0x194280u: goto label_194280;
        case 0x194284u: goto label_194284;
        case 0x194288u: goto label_194288;
        case 0x19428cu: goto label_19428c;
        case 0x194290u: goto label_194290;
        case 0x194294u: goto label_194294;
        case 0x194298u: goto label_194298;
        case 0x19429cu: goto label_19429c;
        case 0x1942a0u: goto label_1942a0;
        case 0x1942a4u: goto label_1942a4;
        case 0x1942a8u: goto label_1942a8;
        case 0x1942acu: goto label_1942ac;
        case 0x1942b0u: goto label_1942b0;
        case 0x1942b4u: goto label_1942b4;
        case 0x1942b8u: goto label_1942b8;
        case 0x1942bcu: goto label_1942bc;
        default: return;
    }

label_193af0:
    // 0x193af0: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x193af0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_193af4:
    // 0x193af4: 0x1e1080  sll         $v0, $fp, 2
    ctx->pc = 0x193af4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
label_193af8:
    // 0x193af8: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x193af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_193afc:
    // 0x193afc: 0x2b140  sll         $s6, $v0, 5
    ctx->pc = 0x193afcu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_193b00:
    // 0x193b00: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x193b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_193b04:
    // 0x193b04: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x193b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_193b08:
    // 0x193b08: 0x2b900  sll         $s7, $v0, 4
    ctx->pc = 0x193b08u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_193b0c:
    // 0x193b0c: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x193b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_193b10:
    // 0x193b10: 0x772821  addu        $a1, $v1, $s7
    ctx->pc = 0x193b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
label_193b14:
    // 0x193b14: 0xc066e26  jal         func_19B898
label_193b18:
    if (ctx->pc == 0x193B18u) {
        ctx->pc = 0x193B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B14u;
        // 0x193b18: 0xace60000  sw          $a2, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193B1Cu;
        goto label_193b1c;
    }
    ctx->pc = 0x193B14u;
    SET_GPR_U32(ctx, 31, 0x193B1Cu);
    ctx->pc = 0x193B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193B14u;
    // 0x193b18: 0xace60000  sw          $a2, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x193B1Cu;
label_193b1c:
    // 0x193b1c: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x193b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_193b20:
    // 0x193b20: 0x244261a0  addiu       $v0, $v0, 0x61A0
    ctx->pc = 0x193b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24992));
label_193b24:
    // 0x193b24: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x193b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_193b28:
    // 0x193b28: 0x572821  addu        $a1, $v0, $s7
    ctx->pc = 0x193b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_193b2c:
    // 0x193b2c: 0xc066e26  jal         func_19B898
label_193b30:
    if (ctx->pc == 0x193B30u) {
        ctx->pc = 0x193B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B2Cu;
        // 0x193b30: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193B34u;
        goto label_193b34;
    }
    ctx->pc = 0x193B2Cu;
    SET_GPR_U32(ctx, 31, 0x193B34u);
    ctx->pc = 0x193B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193B2Cu;
    // 0x193b30: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x193B34u;
label_193b34:
    // 0x193b34: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x193b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_193b38:
    // 0x193b38: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x193b38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_193b3c:
    // 0x193b3c: 0x24426150  addiu       $v0, $v0, 0x6150
    ctx->pc = 0x193b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24912));
label_193b40:
    // 0x193b40: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x193b40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_193b44:
    // 0x193b44: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x193b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_193b48:
    // 0x193b48: 0x24430000  addiu       $v1, $v0, 0x0
    ctx->pc = 0x193b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_193b4c:
    // 0x193b4c: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x193b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_193b50:
    // 0x193b50: 0x2a420009  slti        $v0, $s2, 0x9
    ctx->pc = 0x193b50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
label_193b54:
    // 0x193b54: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x193b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_193b58:
    // 0x193b58: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x193b58u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_193b5c:
    // 0x193b5c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_193b60:
    if (ctx->pc == 0x193B60u) {
        ctx->pc = 0x193B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B5Cu;
        // 0x193b60: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x193B64u;
        goto label_193b64;
    }
    ctx->pc = 0x193B5Cu;
    {
        const bool branch_taken_0x193b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B5Cu;
        // 0x193b60: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x193b5c) {
            ctx->pc = 0x193AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x193ae0; return; }
        }
    }
    ctx->pc = 0x193B64u;
label_193b64:
    // 0x193b64: 0x0  nop
    ctx->pc = 0x193b64u;
    // NOP
label_193b68:
    // 0x193b68: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x193b68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_193b6c:
    // 0x193b6c: 0x10000048  b           . + 4 + (0x48 << 2)
label_193b70:
    if (ctx->pc == 0x193B70u) {
        ctx->pc = 0x193B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B6Cu;
        // 0x193b70: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193B74u;
        goto label_193b74;
    }
    ctx->pc = 0x193B6Cu;
    {
        const bool branch_taken_0x193b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B6Cu;
        // 0x193b70: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193b6c) {
            ctx->pc = 0x193C90u;
            goto label_193c90;
        }
    }
    ctx->pc = 0x193B74u;
label_193b74:
    // 0x193b74: 0x0  nop
    ctx->pc = 0x193b74u;
    // NOP
label_193b78:
    // 0x193b78: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x193b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_193b7c:
    // 0x193b7c: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
label_193b80:
    if (ctx->pc == 0x193B80u) {
        ctx->pc = 0x193B84u;
        goto label_193b84;
    }
    ctx->pc = 0x193B7Cu;
    {
        const bool branch_taken_0x193b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193b7c) {
            ctx->pc = 0x193C90u;
            goto label_193c90;
        }
    }
    ctx->pc = 0x193B84u;
label_193b84:
    // 0x193b84: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x193b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_193b88:
    // 0x193b88: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_193b8c:
    if (ctx->pc == 0x193B8Cu) {
        ctx->pc = 0x193B90u;
        goto label_193b90;
    }
    ctx->pc = 0x193B88u;
    {
        const bool branch_taken_0x193b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x193b88) {
            ctx->pc = 0x193BCCu;
            goto label_193bcc;
        }
    }
    ctx->pc = 0x193B90u;
label_193b90:
    // 0x193b90: 0x8c430090  lw          $v1, 0x90($v0)
    ctx->pc = 0x193b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_193b94:
    // 0x193b94: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x193b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_193b98:
    // 0x193b98: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x193b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_193b9c:
    // 0x193b9c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_193ba0:
    if (ctx->pc == 0x193BA0u) {
        ctx->pc = 0x193BA4u;
        goto label_193ba4;
    }
    ctx->pc = 0x193B9Cu;
    {
        const bool branch_taken_0x193b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193b9c) {
            ctx->pc = 0x193BCCu;
            goto label_193bcc;
        }
    }
    ctx->pc = 0x193BA4u;
label_193ba4:
    // 0x193ba4: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x193ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_193ba8:
    // 0x193ba8: 0x8c4200e8  lw          $v0, 0xE8($v0)
    ctx->pc = 0x193ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 232)));
label_193bac:
    // 0x193bac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_193bb0:
    if (ctx->pc == 0x193BB0u) {
        ctx->pc = 0x193BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193BACu;
        // 0x193bb0: 0x3c020400  lui         $v0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193BB4u;
        goto label_193bb4;
    }
    ctx->pc = 0x193BACu;
    {
        const bool branch_taken_0x193bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193BACu;
        // 0x193bb0: 0x3c020400  lui         $v0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193bac) {
            ctx->pc = 0x193BC0u;
            goto label_193bc0;
        }
    }
    ctx->pc = 0x193BB4u;
label_193bb4:
    // 0x193bb4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x193bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_193bb8:
    // 0x193bb8: 0x10000004  b           . + 4 + (0x4 << 2)
label_193bbc:
    if (ctx->pc == 0x193BBCu) {
        ctx->pc = 0x193BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193BB8u;
        // 0x193bbc: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193BC0u;
        goto label_193bc0;
    }
    ctx->pc = 0x193BB8u;
    {
        const bool branch_taken_0x193bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193BB8u;
        // 0x193bbc: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193bb8) {
            ctx->pc = 0x193BCCu;
            goto label_193bcc;
        }
    }
    ctx->pc = 0x193BC0u;
label_193bc0:
    // 0x193bc0: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x193bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
label_193bc4:
    // 0x193bc4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x193bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_193bc8:
    // 0x193bc8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x193bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_193bcc:
    // 0x193bcc: 0x0  nop
    ctx->pc = 0x193bccu;
    // NOP
label_193bd0:
    // 0x193bd0: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x193bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_193bd4:
    // 0x193bd4: 0x24426150  addiu       $v0, $v0, 0x6150
    ctx->pc = 0x193bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24912));
label_193bd8:
    // 0x193bd8: 0x54a021  addu        $s4, $v0, $s4
    ctx->pc = 0x193bd8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_193bdc:
    // 0x193bdc: 0x2951821  addu        $v1, $s4, $s5
    ctx->pc = 0x193bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
label_193be0:
    // 0x193be0: 0x3c0243e8  lui         $v0, 0x43E8
    ctx->pc = 0x193be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17384 << 16));
label_193be4:
    // 0x193be4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x193be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_193be8:
    // 0x193be8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x193be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_193bec:
    // 0x193bec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193becu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_193bf0:
    // 0x193bf0: 0x0  nop
    ctx->pc = 0x193bf0u;
    // NOP
label_193bf4:
    // 0x193bf4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x193bf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_193bf8:
    // 0x193bf8: 0x0  nop
    ctx->pc = 0x193bf8u;
    // NOP
label_193bfc:
    // 0x193bfc: 0x45000024  bc1f        . + 4 + (0x24 << 2)
label_193c00:
    if (ctx->pc == 0x193C00u) {
        ctx->pc = 0x193C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193BFCu;
        // 0x193c00: 0x2a210009  slti        $at, $s1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x193C04u;
        goto label_193c04;
    }
    ctx->pc = 0x193BFCu;
    {
        const bool branch_taken_0x193bfc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x193C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193BFCu;
        // 0x193c00: 0x2a210009  slti        $at, $s1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x193bfc) {
            ctx->pc = 0x193C90u;
            goto label_193c90;
        }
    }
    ctx->pc = 0x193C04u;
label_193c04:
    // 0x193c04: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
label_193c08:
    if (ctx->pc == 0x193C08u) {
        ctx->pc = 0x193C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193C04u;
        // 0x193c08: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193C0Cu;
        goto label_193c0c;
    }
    ctx->pc = 0x193C04u;
    {
        const bool branch_taken_0x193c04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x193C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193C04u;
        // 0x193c08: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193c04) {
            ctx->pc = 0x193C84u;
            goto label_193c84;
        }
    }
    ctx->pc = 0x193C0Cu;
label_193c0c:
    // 0x193c0c: 0x119900  sll         $s3, $s1, 4
    ctx->pc = 0x193c0cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_193c10:
    // 0x193c10: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x193c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_193c14:
    // 0x193c14: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x193c14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
label_193c18:
    // 0x193c18: 0x246362e0  addiu       $v1, $v1, 0x62E0
    ctx->pc = 0x193c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25312));
label_193c1c:
    // 0x193c1c: 0x553821  addu        $a3, $v0, $s5
    ctx->pc = 0x193c1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_193c20:
    // 0x193c20: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x193c20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_193c24:
    // 0x193c24: 0x1e1080  sll         $v0, $fp, 2
    ctx->pc = 0x193c24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
label_193c28:
    // 0x193c28: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x193c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_193c2c:
    // 0x193c2c: 0x2b140  sll         $s6, $v0, 5
    ctx->pc = 0x193c2cu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_193c30:
    // 0x193c30: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x193c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_193c34:
    // 0x193c34: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x193c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_193c38:
    // 0x193c38: 0x2b900  sll         $s7, $v0, 4
    ctx->pc = 0x193c38u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_193c3c:
    // 0x193c3c: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x193c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_193c40:
    // 0x193c40: 0x772821  addu        $a1, $v1, $s7
    ctx->pc = 0x193c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
label_193c44:
    // 0x193c44: 0xc066e26  jal         func_19B898
label_193c48:
    if (ctx->pc == 0x193C48u) {
        ctx->pc = 0x193C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193C44u;
        // 0x193c48: 0xace60000  sw          $a2, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193C4Cu;
        goto label_193c4c;
    }
    ctx->pc = 0x193C44u;
    SET_GPR_U32(ctx, 31, 0x193C4Cu);
    ctx->pc = 0x193C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193C44u;
    // 0x193c48: 0xace60000  sw          $a2, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x193C4Cu;
label_193c4c:
    // 0x193c4c: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x193c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_193c50:
    // 0x193c50: 0x244261a0  addiu       $v0, $v0, 0x61A0
    ctx->pc = 0x193c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24992));
label_193c54:
    // 0x193c54: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x193c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_193c58:
    // 0x193c58: 0x572821  addu        $a1, $v0, $s7
    ctx->pc = 0x193c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_193c5c:
    // 0x193c5c: 0xc066e26  jal         func_19B898
label_193c60:
    if (ctx->pc == 0x193C60u) {
        ctx->pc = 0x193C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193C5Cu;
        // 0x193c60: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193C64u;
        goto label_193c64;
    }
    ctx->pc = 0x193C5Cu;
    SET_GPR_U32(ctx, 31, 0x193C64u);
    ctx->pc = 0x193C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193C5Cu;
    // 0x193c60: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x193C64u;
label_193c64:
    // 0x193c64: 0x2951821  addu        $v1, $s4, $s5
    ctx->pc = 0x193c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
label_193c68:
    // 0x193c68: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x193c68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_193c6c:
    // 0x193c6c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x193c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_193c70:
    // 0x193c70: 0x2a420009  slti        $v0, $s2, 0x9
    ctx->pc = 0x193c70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)9) ? 1 : 0);
label_193c74:
    // 0x193c74: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x193c74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_193c78:
    // 0x193c78: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x193c78u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_193c7c:
    // 0x193c7c: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
label_193c80:
    if (ctx->pc == 0x193C80u) {
        ctx->pc = 0x193C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193C7Cu;
        // 0x193c80: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x193C84u;
        goto label_193c84;
    }
    ctx->pc = 0x193C7Cu;
    {
        const bool branch_taken_0x193c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193C7Cu;
        // 0x193c80: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x193c7c) {
            ctx->pc = 0x193C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_193c10;
        }
    }
    ctx->pc = 0x193C84u;
label_193c84:
    // 0x193c84: 0x0  nop
    ctx->pc = 0x193c84u;
    // NOP
label_193c88:
    // 0x193c88: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x193c88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_193c8c:
    // 0x193c8c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x193c8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_193c90:
    // 0x193c90: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x193c90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_193c94:
    // 0x193c94: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x193c94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_193c98:
    // 0x193c98: 0x1440ff3c  bnez        $v0, . + 4 + (-0xC4 << 2)
label_193c9c:
    if (ctx->pc == 0x193C9Cu) {
        ctx->pc = 0x193CA0u;
        goto label_193ca0;
    }
    ctx->pc = 0x193C98u;
    {
        const bool branch_taken_0x193c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193c98) {
            ctx->pc = 0x19398Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x19398c; return; }
        }
    }
    ctx->pc = 0x193CA0u;
label_193ca0:
    // 0x193ca0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x193ca0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_193ca4:
    // 0x193ca4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x193ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_193ca8:
    // 0x193ca8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x193ca8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_193cac:
    // 0x193cac: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x193cacu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_193cb0:
    // 0x193cb0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x193cb0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_193cb4:
    // 0x193cb4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x193cb4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_193cb8:
    // 0x193cb8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x193cb8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_193cbc:
    // 0x193cbc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x193cbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_193cc0:
    // 0x193cc0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x193cc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_193cc4:
    // 0x193cc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x193cc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_193cc8:
    // 0x193cc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x193cc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_193ccc:
    // 0x193ccc: 0x3e00008  jr          $ra
label_193cd0:
    if (ctx->pc == 0x193CD0u) {
        ctx->pc = 0x193CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193CCCu;
        // 0x193cd0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193CD4u;
        goto label_193cd4;
    }
    ctx->pc = 0x193CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193CCCu;
        // 0x193cd0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193CD4u;
label_193cd4:
    // 0x193cd4: 0x0  nop
    ctx->pc = 0x193cd4u;
    // NOP
label_193cd8:
    // 0x193cd8: 0x0  nop
    ctx->pc = 0x193cd8u;
    // NOP
label_193cdc:
    // 0x193cdc: 0x0  nop
    ctx->pc = 0x193cdcu;
    // NOP
label_193ce0:
    // 0x193ce0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x193ce0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_193ce4:
    // 0x193ce4: 0x10000012  b           . + 4 + (0x12 << 2)
label_193ce8:
    if (ctx->pc == 0x193CE8u) {
        ctx->pc = 0x193CECu;
        goto label_193cec;
    }
    ctx->pc = 0x193CE4u;
    {
        const bool branch_taken_0x193ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193ce4) {
            ctx->pc = 0x193D30u;
            goto label_193d30;
        }
    }
    ctx->pc = 0x193CECu;
label_193cec:
    // 0x193cec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x193cecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_193cf0:
    // 0x193cf0: 0x1000000b  b           . + 4 + (0xB << 2)
label_193cf4:
    if (ctx->pc == 0x193CF4u) {
        ctx->pc = 0x193CF8u;
        goto label_193cf8;
    }
    ctx->pc = 0x193CF0u;
    {
        const bool branch_taken_0x193cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193cf0) {
            ctx->pc = 0x193D20u;
            goto label_193d20;
        }
    }
    ctx->pc = 0x193CF8u;
label_193cf8:
    // 0x193cf8: 0x74880  sll         $t1, $a3, 2
    ctx->pc = 0x193cf8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_193cfc:
    // 0x193cfc: 0xa93021  addu        $a2, $a1, $t1
    ctx->pc = 0x193cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_193d00:
    // 0x193d00: 0x81900  sll         $v1, $t0, 4
    ctx->pc = 0x193d00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_193d04:
    // 0x193d04: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x193d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_193d08:
    // 0x193d08: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x193d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_193d0c:
    // 0x193d0c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x193d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_193d10:
    // 0x193d10: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x193d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_193d14:
    // 0x193d14: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x193d14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_193d18:
    // 0x193d18: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x193d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_193d1c:
    // 0x193d1c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x193d1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_193d20:
    // 0x193d20: 0x29030004  slti        $v1, $t0, 0x4
    ctx->pc = 0x193d20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4) ? 1 : 0);
label_193d24:
    // 0x193d24: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_193d28:
    if (ctx->pc == 0x193D28u) {
        ctx->pc = 0x193D2Cu;
        goto label_193d2c;
    }
    ctx->pc = 0x193D24u;
    {
        const bool branch_taken_0x193d24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x193d24) {
            ctx->pc = 0x193CF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_193cf8;
        }
    }
    ctx->pc = 0x193D2Cu;
label_193d2c:
    // 0x193d2c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x193d2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_193d30:
    // 0x193d30: 0x28e30003  slti        $v1, $a3, 0x3
    ctx->pc = 0x193d30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
label_193d34:
    // 0x193d34: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
label_193d38:
    if (ctx->pc == 0x193D38u) {
        ctx->pc = 0x193D3Cu;
        goto label_193d3c;
    }
    ctx->pc = 0x193D34u;
    {
        const bool branch_taken_0x193d34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x193d34) {
            ctx->pc = 0x193CECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_193cec;
        }
    }
    ctx->pc = 0x193D3Cu;
label_193d3c:
    // 0x193d3c: 0x3e00008  jr          $ra
label_193d40:
    if (ctx->pc == 0x193D40u) {
        ctx->pc = 0x193D44u;
        goto label_193d44;
    }
    ctx->pc = 0x193D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193D3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193D44u;
label_193d44:
    // 0x193d44: 0x0  nop
    ctx->pc = 0x193d44u;
    // NOP
label_193d48:
    // 0x193d48: 0x0  nop
    ctx->pc = 0x193d48u;
    // NOP
label_193d4c:
    // 0x193d4c: 0x0  nop
    ctx->pc = 0x193d4cu;
    // NOP
label_193d50:
    // 0x193d50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x193d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_193d54:
    // 0x193d54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x193d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_193d58:
    // 0x193d58: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x193d58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_193d5c:
    // 0x193d5c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x193d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_193d60:
    // 0x193d60: 0xc066e1a  jal         func_19B868
label_193d64:
    if (ctx->pc == 0x193D64u) {
        ctx->pc = 0x193D68u;
        goto label_193d68;
    }
    ctx->pc = 0x193D60u;
    SET_GPR_U32(ctx, 31, 0x193D68u);
    ctx->pc = 0x19B868u;
    { ctx->pc = 0x19b868; return; }
    ctx->pc = 0x193D68u;
label_193d68:
    // 0x193d68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x193d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_193d6c:
    // 0x193d6c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x193d6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_193d70:
    // 0x193d70: 0x3e00008  jr          $ra
label_193d74:
    if (ctx->pc == 0x193D74u) {
        ctx->pc = 0x193D78u;
        goto label_193d78;
    }
    ctx->pc = 0x193D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193D78u;
label_193d78:
    // 0x193d78: 0x0  nop
    ctx->pc = 0x193d78u;
    // NOP
label_193d7c:
    // 0x193d7c: 0x0  nop
    ctx->pc = 0x193d7cu;
    // NOP
label_193d80:
    // 0x193d80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x193d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_193d84:
    // 0x193d84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x193d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_193d88:
    // 0x193d88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x193d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_193d8c:
    // 0x193d8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x193d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_193d90:
    // 0x193d90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x193d90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_193d94:
    // 0x193d94: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x193d94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_193d98:
    // 0x193d98: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x193d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_193d9c:
    // 0x193d9c: 0xc066e44  jal         func_19B910
label_193da0:
    if (ctx->pc == 0x193DA0u) {
        ctx->pc = 0x193DA4u;
        goto label_193da4;
    }
    ctx->pc = 0x193D9Cu;
    SET_GPR_U32(ctx, 31, 0x193DA4u);
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x193DA4u;
label_193da4:
    // 0x193da4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_193da8:
    // 0x193da8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x193da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_193dac:
    // 0x193dac: 0xc62c0008  lwc1        $f12, 0x8($s1)
    ctx->pc = 0x193dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_193db0:
    // 0x193db0: 0xc066e6c  jal         func_19B9B0
label_193db4:
    if (ctx->pc == 0x193DB4u) {
        ctx->pc = 0x193DB8u;
        goto label_193db8;
    }
    ctx->pc = 0x193DB0u;
    SET_GPR_U32(ctx, 31, 0x193DB8u);
    ctx->pc = 0x19B9B0u;
    { ctx->pc = 0x19b9b0; return; }
    ctx->pc = 0x193DB8u;
label_193db8:
    // 0x193db8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x193db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_193dbc:
    // 0x193dbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x193dbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_193dc0:
    // 0x193dc0: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x193dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_193dc4:
    // 0x193dc4: 0xc066ec0  jal         func_19BB00
label_193dc8:
    if (ctx->pc == 0x193DC8u) {
        ctx->pc = 0x193DCCu;
        goto label_193dcc;
    }
    ctx->pc = 0x193DC4u;
    SET_GPR_U32(ctx, 31, 0x193DCCu);
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x193DCCu;
label_193dcc:
    // 0x193dcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_193dd0:
    // 0x193dd0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x193dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_193dd4:
    // 0x193dd4: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x193dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_193dd8:
    // 0x193dd8: 0xc066e96  jal         func_19BA58
label_193ddc:
    if (ctx->pc == 0x193DDCu) {
        ctx->pc = 0x193DE0u;
        goto label_193de0;
    }
    ctx->pc = 0x193DD8u;
    SET_GPR_U32(ctx, 31, 0x193DE0u);
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x193DE0u;
label_193de0:
    // 0x193de0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x193de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_193de4:
    // 0x193de4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x193de4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_193de8:
    // 0x193de8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x193de8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_193dec:
    // 0x193dec: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x193decu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_193df0:
    // 0x193df0: 0x3e00008  jr          $ra
label_193df4:
    if (ctx->pc == 0x193DF4u) {
        ctx->pc = 0x193DF8u;
        goto label_193df8;
    }
    ctx->pc = 0x193DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193DF8u;
label_193df8:
    // 0x193df8: 0x0  nop
    ctx->pc = 0x193df8u;
    // NOP
label_193dfc:
    // 0x193dfc: 0x0  nop
    ctx->pc = 0x193dfcu;
    // NOP
label_193e00:
    // 0x193e00: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x193e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_193e04:
    // 0x193e04: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x193e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_193e08:
    // 0x193e08: 0x24632fb0  addiu       $v1, $v1, 0x2FB0
    ctx->pc = 0x193e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12208));
label_193e0c:
    // 0x193e0c: 0x27a40000  addiu       $a0, $sp, 0x0
    ctx->pc = 0x193e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
label_193e10:
    // 0x193e10: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x193e10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_193e14:
    // 0x193e14: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x193e14u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_193e18:
    // 0x193e18: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x193e18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_193e1c:
    // 0x193e1c: 0x24a52fc0  addiu       $a1, $a1, 0x2FC0
    ctx->pc = 0x193e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12224));
label_193e20:
    // 0x193e20: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x193e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_193e24:
    // 0x193e24: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x193e24u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_193e28:
    // 0x193e28: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x193e28u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
label_193e2c:
    // 0x193e2c: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x193e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_193e30:
    // 0x193e30: 0x24a52fd0  addiu       $a1, $a1, 0x2FD0
    ctx->pc = 0x193e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12240));
label_193e34:
    // 0x193e34: 0x27ab0020  addiu       $t3, $sp, 0x20
    ctx->pc = 0x193e34u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_193e38:
    // 0x193e38: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x193e38u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_193e3c:
    // 0x193e3c: 0x7d650000  sq          $a1, 0x0($t3)
    ctx->pc = 0x193e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 5));
label_193e40:
    // 0x193e40: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x193e40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_193e44:
    // 0x193e44: 0x24a52fe0  addiu       $a1, $a1, 0x2FE0
    ctx->pc = 0x193e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12256));
label_193e48:
    // 0x193e48: 0x27aa0030  addiu       $t2, $sp, 0x30
    ctx->pc = 0x193e48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_193e4c:
    // 0x193e4c: 0x78a70000  lq          $a3, 0x0($a1)
    ctx->pc = 0x193e4cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_193e50:
    // 0x193e50: 0x78a60010  lq          $a2, 0x10($a1)
    ctx->pc = 0x193e50u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 16)));
label_193e54:
    // 0x193e54: 0x78a50020  lq          $a1, 0x20($a1)
    ctx->pc = 0x193e54u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 32)));
label_193e58:
    // 0x193e58: 0x7d470000  sq          $a3, 0x0($t2)
    ctx->pc = 0x193e58u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 7));
label_193e5c:
    // 0x193e5c: 0x7d460010  sq          $a2, 0x10($t2)
    ctx->pc = 0x193e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 16), GPR_VEC(ctx, 6));
label_193e60:
    // 0x193e60: 0x7d450020  sq          $a1, 0x20($t2)
    ctx->pc = 0x193e60u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 32), GPR_VEC(ctx, 5));
label_193e64:
    // 0x193e64: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x193e64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_193e68:
    // 0x193e68: 0x24a53010  addiu       $a1, $a1, 0x3010
    ctx->pc = 0x193e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12304));
label_193e6c:
    // 0x193e6c: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x193e6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_193e70:
    // 0x193e70: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x193e70u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_193e74:
    // 0x193e74: 0x7d250000  sq          $a1, 0x0($t1)
    ctx->pc = 0x193e74u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 5));
label_193e78:
    // 0x193e78: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x193e78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_193e7c:
    // 0x193e7c: 0x24a53020  addiu       $a1, $a1, 0x3020
    ctx->pc = 0x193e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12320));
label_193e80:
    // 0x193e80: 0x27a80070  addiu       $t0, $sp, 0x70
    ctx->pc = 0x193e80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_193e84:
    // 0x193e84: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x193e84u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_193e88:
    // 0x193e88: 0x7d050000  sq          $a1, 0x0($t0)
    ctx->pc = 0x193e88u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 5));
label_193e8c:
    // 0x193e8c: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x193e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_193e90:
    // 0x193e90: 0x24a53030  addiu       $a1, $a1, 0x3030
    ctx->pc = 0x193e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12336));
label_193e94:
    // 0x193e94: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x193e94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_193e98:
    // 0x193e98: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x193e98u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_193e9c:
    // 0x193e9c: 0x7ce50000  sq          $a1, 0x0($a3)
    ctx->pc = 0x193e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 5));
label_193ea0:
    // 0x193ea0: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x193ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_193ea4:
    // 0x193ea4: 0x24a53040  addiu       $a1, $a1, 0x3040
    ctx->pc = 0x193ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12352));
label_193ea8:
    // 0x193ea8: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x193ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_193eac:
    // 0x193eac: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x193eacu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_193eb0:
    // 0x193eb0: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x193eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
label_193eb4:
    // 0x193eb4: 0x4be007ec  vsub.xyzw   $vf31, $vf0, $vf0
    ctx->pc = 0x193eb4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_193eb8:
    // 0x193eb8: 0xd89c0000  lqc2        $vf28, 0x0($a0)
    ctx->pc = 0x193eb8u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_193ebc:
    // 0x193ebc: 0xd87d0000  lqc2        $vf29, 0x0($v1)
    ctx->pc = 0x193ebcu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_193ec0:
    // 0x193ec0: 0xd97e0000  lqc2        $vf30, 0x0($t3)
    ctx->pc = 0x193ec0u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
label_193ec4:
    // 0x193ec4: 0xd9590000  lqc2        $vf25, 0x0($t2)
    ctx->pc = 0x193ec4u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
label_193ec8:
    // 0x193ec8: 0xd95a0010  lqc2        $vf26, 0x10($t2)
    ctx->pc = 0x193ec8u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 16)));
label_193ecc:
    // 0x193ecc: 0xd95b0020  lqc2        $vf27, 0x20($t2)
    ctx->pc = 0x193eccu;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 32)));
label_193ed0:
    // 0x193ed0: 0xd9350000  lqc2        $vf21, 0x0($t1)
    ctx->pc = 0x193ed0u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
label_193ed4:
    // 0x193ed4: 0xd9160000  lqc2        $vf22, 0x0($t0)
    ctx->pc = 0x193ed4u;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_193ed8:
    // 0x193ed8: 0xd8f70000  lqc2        $vf23, 0x0($a3)
    ctx->pc = 0x193ed8u;
    ctx->vu0_vf[23] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_193edc:
    // 0x193edc: 0xd8d80000  lqc2        $vf24, 0x0($a2)
    ctx->pc = 0x193edcu;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_193ee0:
    // 0x193ee0: 0x4be0ffc3  vaddw.xyzw  $vf31, $vf31, $vf0w
    ctx->pc = 0x193ee0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_193ee4:
    // 0x193ee4: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x193ee4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_193ee8:
    // 0x193ee8: 0x3e00008  jr          $ra
label_193eec:
    if (ctx->pc == 0x193EECu) {
        ctx->pc = 0x193EF0u;
        goto label_193ef0;
    }
    ctx->pc = 0x193EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193EF0u;
label_193ef0:
    // 0x193ef0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x193ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_193ef4:
    // 0x193ef4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x193ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_193ef8:
    // 0x193ef8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x193ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_193efc:
    // 0x193efc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x193efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_193f00:
    // 0x193f00: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x193f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_193f04:
    // 0x193f04: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x193f04u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_193f08:
    // 0x193f08: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x193f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_193f0c:
    // 0x193f0c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x193f0cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_193f10:
    // 0x193f10: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x193f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_193f14:
    // 0x193f14: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x193f14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_193f18:
    // 0x193f18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x193f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_193f1c:
    // 0x193f1c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x193f1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_193f20:
    // 0x193f20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x193f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_193f24:
    // 0x193f24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x193f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_193f28:
    // 0x193f28: 0xc08f0cc  jal         func_23C330
label_193f2c:
    if (ctx->pc == 0x193F2Cu) {
        ctx->pc = 0x193F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193F28u;
        // 0x193f2c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193F30u;
        goto label_193f30;
    }
    ctx->pc = 0x193F28u;
    SET_GPR_U32(ctx, 31, 0x193F30u);
    ctx->pc = 0x193F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193F28u;
    // 0x193f2c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x193F30u;
label_193f30:
    // 0x193f30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x193f30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_193f34:
    // 0x193f34: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x193f34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_193f38:
    // 0x193f38: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x193f38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_193f3c:
    // 0x193f3c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x193f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_193f40:
    // 0x193f40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193f40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_193f44:
    // 0x193f44: 0x0  nop
    ctx->pc = 0x193f44u;
    // NOP
label_193f48:
    // 0x193f48: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x193f48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_193f4c:
    // 0x193f4c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x193f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_193f50:
    // 0x193f50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x193f50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_193f54:
    // 0x193f54: 0x0  nop
    ctx->pc = 0x193f54u;
    // NOP
label_193f58:
    // 0x193f58: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x193f58u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_193f5c:
    // 0x193f5c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x193f5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_193f60:
    // 0x193f60: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x193f60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_193f64:
    // 0x193f64: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x193f64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_193f68:
    // 0x193f68: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x193f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_193f6c:
    // 0x193f6c: 0x24425740  addiu       $v0, $v0, 0x5740
    ctx->pc = 0x193f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22336));
label_193f70:
    // 0x193f70: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x193f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_193f74:
    // 0x193f74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x193f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_193f78:
    // 0x193f78: 0x24430000  addiu       $v1, $v0, 0x0
    ctx->pc = 0x193f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_193f7c:
    // 0x193f7c: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x193f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_193f80:
    // 0x193f80: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x193f80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_193f84:
    // 0x193f84: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x193f84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_193f88:
    // 0x193f88: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_193f8c:
    if (ctx->pc == 0x193F8Cu) {
        ctx->pc = 0x193F90u;
        goto label_193f90;
    }
    ctx->pc = 0x193F88u;
    {
        const bool branch_taken_0x193f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193f88) {
            ctx->pc = 0x193FA0u;
            goto label_193fa0;
        }
    }
    ctx->pc = 0x193F90u;
label_193f90:
    // 0x193f90: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x193f90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_193f94:
    // 0x193f94: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x193f94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
label_193f98:
    // 0x193f98: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_193f9c:
    if (ctx->pc == 0x193F9Cu) {
        ctx->pc = 0x193F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193F98u;
        // 0x193f9c: 0x721021  addu        $v0, $v1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193FA0u;
        goto label_193fa0;
    }
    ctx->pc = 0x193F98u;
    {
        const bool branch_taken_0x193f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193F98u;
        // 0x193f9c: 0x721021  addu        $v0, $v1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193f98) {
            ctx->pc = 0x193F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_193f80;
        }
    }
    ctx->pc = 0x193FA0u;
label_193fa0:
    // 0x193fa0: 0x12800044  beqz        $s4, . + 4 + (0x44 << 2)
label_193fa4:
    if (ctx->pc == 0x193FA4u) {
        ctx->pc = 0x193FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193FA0u;
        // 0x193fa4: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193FA8u;
        goto label_193fa8;
    }
    ctx->pc = 0x193FA0u;
    {
        const bool branch_taken_0x193fa0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x193FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193FA0u;
        // 0x193fa4: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193fa0) {
            ctx->pc = 0x1940B4u;
            goto label_1940b4;
        }
    }
    ctx->pc = 0x193FA8u;
label_193fa8:
    // 0x193fa8: 0x92a60242  lbu         $a2, 0x242($s5)
    ctx->pc = 0x193fa8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 578)));
label_193fac:
    // 0x193fac: 0x2cc20029  sltiu       $v0, $a2, 0x29
    ctx->pc = 0x193facu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)41) ? 1 : 0);
label_193fb0:
    // 0x193fb0: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_193fb4:
    if (ctx->pc == 0x193FB4u) {
        ctx->pc = 0x193FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193FB0u;
        // 0x193fb4: 0x92a40244  lbu         $a0, 0x244($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 580)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193FB8u;
        goto label_193fb8;
    }
    ctx->pc = 0x193FB0u;
    {
        const bool branch_taken_0x193fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193FB0u;
        // 0x193fb4: 0x92a40244  lbu         $a0, 0x244($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193fb0) {
            ctx->pc = 0x194000u;
            goto label_194000;
        }
    }
    ctx->pc = 0x193FB8u;
label_193fb8:
    // 0x193fb8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x193fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_193fbc:
    // 0x193fbc: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x193fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_193fc0:
    // 0x193fc0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x193fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_193fc4:
    // 0x193fc4: 0x2442aecc  addiu       $v0, $v0, -0x5134
    ctx->pc = 0x193fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946508));
label_193fc8:
    // 0x193fc8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x193fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_193fcc:
    // 0x193fcc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x193fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_193fd0:
    // 0x193fd0: 0x601021  addu        $v0, $v1, $zero
    ctx->pc = 0x193fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 0)));
label_193fd4:
    // 0x193fd4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x193fd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_193fd8:
    // 0x193fd8: 0xa3a200a8  sb          $v0, 0xA8($sp)
    ctx->pc = 0x193fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 168), (uint8_t)GPR_U32(ctx, 2));
label_193fdc:
    // 0x193fdc: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x193fdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_193fe0:
    // 0x193fe0: 0xa3a200a9  sb          $v0, 0xA9($sp)
    ctx->pc = 0x193fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 169), (uint8_t)GPR_U32(ctx, 2));
label_193fe4:
    // 0x193fe4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x193fe4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_193fe8:
    // 0x193fe8: 0xa3a200aa  sb          $v0, 0xAA($sp)
    ctx->pc = 0x193fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 170), (uint8_t)GPR_U32(ctx, 2));
label_193fec:
    // 0x193fec: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x193fecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_193ff0:
    // 0x193ff0: 0xa3a200ab  sb          $v0, 0xAB($sp)
    ctx->pc = 0x193ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 171), (uint8_t)GPR_U32(ctx, 2));
label_193ff4:
    // 0x193ff4: 0x90620004  lbu         $v0, 0x4($v1)
    ctx->pc = 0x193ff4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_193ff8:
    // 0x193ff8: 0x10000011  b           . + 4 + (0x11 << 2)
label_193ffc:
    if (ctx->pc == 0x193FFCu) {
        ctx->pc = 0x193FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193FF8u;
        // 0x193ffc: 0xa3a200ac  sb          $v0, 0xAC($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 172), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194000u;
        goto label_194000;
    }
    ctx->pc = 0x193FF8u;
    {
        const bool branch_taken_0x193ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193FF8u;
        // 0x193ffc: 0xa3a200ac  sb          $v0, 0xAC($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 172), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193ff8) {
            ctx->pc = 0x194040u;
            goto label_194040;
        }
    }
    ctx->pc = 0x194000u;
label_194000:
    // 0x194000: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x194000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_194004:
    // 0x194004: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x194004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_194008:
    // 0x194008: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x194008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_19400c:
    // 0x19400c: 0x2442b27c  addiu       $v0, $v0, -0x4D84
    ctx->pc = 0x19400cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947452));
label_194010:
    // 0x194010: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x194010u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_194014:
    // 0x194014: 0x24c40030  addiu       $a0, $a2, 0x30
    ctx->pc = 0x194014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
label_194018:
    // 0x194018: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x194018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_19401c:
    // 0x19401c: 0x24c30059  addiu       $v1, $a2, 0x59
    ctx->pc = 0x19401cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 89));
label_194020:
    // 0x194020: 0x84a50000  lh          $a1, 0x0($a1)
    ctx->pc = 0x194020u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_194024:
    // 0x194024: 0x24c20082  addiu       $v0, $a2, 0x82
    ctx->pc = 0x194024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 130));
label_194028:
    // 0x194028: 0xa3a400aa  sb          $a0, 0xAA($sp)
    ctx->pc = 0x194028u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 170), (uint8_t)GPR_U32(ctx, 4));
label_19402c:
    // 0x19402c: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x19402cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_194030:
    // 0x194030: 0xa3a500a8  sb          $a1, 0xA8($sp)
    ctx->pc = 0x194030u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 168), (uint8_t)GPR_U32(ctx, 5));
label_194034:
    // 0x194034: 0xa3a400a9  sb          $a0, 0xA9($sp)
    ctx->pc = 0x194034u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 169), (uint8_t)GPR_U32(ctx, 4));
label_194038:
    // 0x194038: 0xa3a300ab  sb          $v1, 0xAB($sp)
    ctx->pc = 0x194038u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 171), (uint8_t)GPR_U32(ctx, 3));
label_19403c:
    // 0x19403c: 0xa3a200ac  sb          $v0, 0xAC($sp)
    ctx->pc = 0x19403cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 172), (uint8_t)GPR_U32(ctx, 2));
label_194040:
    // 0x194040: 0x27a200a8  addiu       $v0, $sp, 0xA8
    ctx->pc = 0x194040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_194044:
    // 0x194044: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x194044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_194048:
    // 0x194048: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x194048u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_19404c:
    // 0x19404c: 0x28810059  slti        $at, $a0, 0x59
    ctx->pc = 0x19404cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)89) ? 1 : 0);
label_194050:
    // 0x194050: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_194054:
    if (ctx->pc == 0x194054u) {
        ctx->pc = 0x194054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194050u;
        // 0x194054: 0xa204000b  sb          $a0, 0xB($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194058u;
        goto label_194058;
    }
    ctx->pc = 0x194050u;
    {
        const bool branch_taken_0x194050 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x194054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194050u;
        // 0x194054: 0xa204000b  sb          $a0, 0xB($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194050) {
            ctx->pc = 0x194060u;
            goto label_194060;
        }
    }
    ctx->pc = 0x194058u;
label_194058:
    // 0x194058: 0x1000000e  b           . + 4 + (0xE << 2)
label_19405c:
    if (ctx->pc == 0x19405Cu) {
        ctx->pc = 0x19405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194058u;
        // 0x19405c: 0xa204000a  sb          $a0, 0xA($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194060u;
        goto label_194060;
    }
    ctx->pc = 0x194058u;
    {
        const bool branch_taken_0x194058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194058u;
        // 0x19405c: 0xa204000a  sb          $a0, 0xA($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194058) {
            ctx->pc = 0x194094u;
            goto label_194094;
        }
    }
    ctx->pc = 0x194060u;
label_194060:
    // 0x194060: 0x28820082  slti        $v0, $a0, 0x82
    ctx->pc = 0x194060u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)130) ? 1 : 0);
label_194064:
    // 0x194064: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_194068:
    if (ctx->pc == 0x194068u) {
        ctx->pc = 0x194068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194064u;
        // 0x194068: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19406Cu;
        goto label_19406c;
    }
    ctx->pc = 0x194064u;
    {
        const bool branch_taken_0x194064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x194068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194064u;
        // 0x194068: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194064) {
            ctx->pc = 0x194078u;
            goto label_194078;
        }
    }
    ctx->pc = 0x19406Cu;
label_19406c:
    // 0x19406c: 0x2482ffd7  addiu       $v0, $a0, -0x29
    ctx->pc = 0x19406cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967255));
label_194070:
    // 0x194070: 0x10000008  b           . + 4 + (0x8 << 2)
label_194074:
    if (ctx->pc == 0x194074u) {
        ctx->pc = 0x194074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194070u;
        // 0x194074: 0xa202000a  sb          $v0, 0xA($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194078u;
        goto label_194078;
    }
    ctx->pc = 0x194070u;
    {
        const bool branch_taken_0x194070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194070u;
        // 0x194074: 0xa202000a  sb          $v0, 0xA($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194070) {
            ctx->pc = 0x194094u;
            goto label_194094;
        }
    }
    ctx->pc = 0x194078u;
label_194078:
    // 0x194078: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x194078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_19407c:
    // 0x19407c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19407cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_194080:
    // 0x194080: 0x24429d72  addiu       $v0, $v0, -0x628E
    ctx->pc = 0x194080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942066));
label_194084:
    // 0x194084: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x194084u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_194088:
    // 0x194088: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x194088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19408c:
    // 0x19408c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x19408cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_194090:
    // 0x194090: 0xa202000a  sb          $v0, 0xA($s0)
    ctx->pc = 0x194090u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 2));
label_194094:
    // 0x194094: 0xfe000010  sd          $zero, 0x10($s0)
    ctx->pc = 0x194094u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 0));
label_194098:
    // 0x194098: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x194098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_19409c:
    // 0x19409c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x19409cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_1940a0:
    // 0x1940a0: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x1940a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_1940a4:
    // 0x1940a4: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x1940a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
label_1940a8:
    // 0x1940a8: 0xa2020006  sb          $v0, 0x6($s0)
    ctx->pc = 0x1940a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
label_1940ac:
    // 0x1940ac: 0x1000004a  b           . + 4 + (0x4A << 2)
label_1940b0:
    if (ctx->pc == 0x1940B0u) {
        ctx->pc = 0x1940B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1940ACu;
        // 0x1940b0: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1940B4u;
        goto label_1940b4;
    }
    ctx->pc = 0x1940ACu;
    {
        const bool branch_taken_0x1940ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1940B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1940ACu;
        // 0x1940b0: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1940ac) {
            ctx->pc = 0x1941D8u;
            goto label_1941d8;
        }
    }
    ctx->pc = 0x1940B4u;
label_1940b4:
    // 0x1940b4: 0x90224a0c  lbu         $v0, 0x4A0C($at)
    ctx->pc = 0x1940b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18956)));
label_1940b8:
    // 0x1940b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1940bc:
    if (ctx->pc == 0x1940BCu) {
        ctx->pc = 0x1940BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1940B8u;
        // 0x1940bc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1940C0u;
        goto label_1940c0;
    }
    ctx->pc = 0x1940B8u;
    {
        const bool branch_taken_0x1940b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1940BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1940B8u;
        // 0x1940bc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1940b8) {
            ctx->pc = 0x1940D0u;
            goto label_1940d0;
        }
    }
    ctx->pc = 0x1940C0u;
label_1940c0:
    // 0x1940c0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1940c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1940c4:
    // 0x1940c4: 0x90224a26  lbu         $v0, 0x4A26($at)
    ctx->pc = 0x1940c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18982)));
label_1940c8:
    // 0x1940c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1940cc:
    if (ctx->pc == 0x1940CCu) {
        ctx->pc = 0x1940CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1940C8u;
        // 0x1940cc: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1940D0u;
        goto label_1940d0;
    }
    ctx->pc = 0x1940C8u;
    {
        const bool branch_taken_0x1940c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1940CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1940C8u;
        // 0x1940cc: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1940c8) {
            ctx->pc = 0x1940D8u;
            goto label_1940d8;
        }
    }
    ctx->pc = 0x1940D0u;
label_1940d0:
    // 0x1940d0: 0x10000018  b           . + 4 + (0x18 << 2)
label_1940d4:
    if (ctx->pc == 0x1940D4u) {
        ctx->pc = 0x1940D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1940D0u;
        // 0x1940d4: 0x1110c0  sll         $v0, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1940D8u;
        goto label_1940d8;
    }
    ctx->pc = 0x1940D0u;
    {
        const bool branch_taken_0x1940d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1940D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1940D0u;
        // 0x1940d4: 0x1110c0  sll         $v0, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1940d0) {
            ctx->pc = 0x194134u;
            goto label_194134;
        }
    }
    ctx->pc = 0x1940D8u;
label_1940d8:
    // 0x1940d8: 0x90224996  lbu         $v0, 0x4996($at)
    ctx->pc = 0x1940d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18838)));
label_1940dc:
    // 0x1940dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1940e0:
    if (ctx->pc == 0x1940E0u) {
        ctx->pc = 0x1940E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1940DCu;
        // 0x1940e0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1940E4u;
        goto label_1940e4;
    }
    ctx->pc = 0x1940DCu;
    {
        const bool branch_taken_0x1940dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1940E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1940DCu;
        // 0x1940e0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1940dc) {
            ctx->pc = 0x1940ECu;
            goto label_1940ec;
        }
    }
    ctx->pc = 0x1940E4u;
label_1940e4:
    // 0x1940e4: 0x10000012  b           . + 4 + (0x12 << 2)
label_1940e8:
    if (ctx->pc == 0x1940E8u) {
        ctx->pc = 0x1940ECu;
        goto label_1940ec;
    }
    ctx->pc = 0x1940E4u;
    {
        const bool branch_taken_0x1940e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1940e4) {
            ctx->pc = 0x194130u;
            goto label_194130;
        }
    }
    ctx->pc = 0x1940ECu;
label_1940ec:
    // 0x1940ec: 0xc08f0cc  jal         func_23C330
label_1940f0:
    if (ctx->pc == 0x1940F0u) {
        ctx->pc = 0x1940F4u;
        goto label_1940f4;
    }
    ctx->pc = 0x1940ECu;
    SET_GPR_U32(ctx, 31, 0x1940F4u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1940F4u;
label_1940f4:
    // 0x1940f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1940f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1940f8:
    // 0x1940f8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1940f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1940fc:
    // 0x1940fc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1940fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_194100:
    // 0x194100: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x194100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_194104:
    // 0x194104: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x194104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_194108:
    // 0x194108: 0x0  nop
    ctx->pc = 0x194108u;
    // NOP
label_19410c:
    // 0x19410c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x19410cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_194110:
    // 0x194110: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x194110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_194114:
    // 0x194114: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x194114u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_194118:
    // 0x194118: 0x0  nop
    ctx->pc = 0x194118u;
    // NOP
label_19411c:
    // 0x19411c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x19411cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_194120:
    // 0x194120: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x194120u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_194124:
    // 0x194124: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x194124u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_194128:
    // 0x194128: 0x0  nop
    ctx->pc = 0x194128u;
    // NOP
label_19412c:
    // 0x19412c: 0x2880a  movz        $s1, $zero, $v0
    ctx->pc = 0x19412cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_194130:
    // 0x194130: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x194130u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_194134:
    // 0x194134: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x194134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_194138:
    // 0x194138: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x194138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_19413c:
    // 0x19413c: 0x24634989  addiu       $v1, $v1, 0x4989
    ctx->pc = 0x19413cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18825));
label_194140:
    // 0x194140: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x194140u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_194144:
    // 0x194144: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x194144u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
label_194148:
    // 0x194148: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x194148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_19414c:
    // 0x19414c: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x19414cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_194150:
    // 0x194150: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x194150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_194154:
    // 0x194154: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x194154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_194158:
    // 0x194158: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x194158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_19415c:
    // 0x19415c: 0xa3a400a8  sb          $a0, 0xA8($sp)
    ctx->pc = 0x19415cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 168), (uint8_t)GPR_U32(ctx, 4));
label_194160:
    // 0x194160: 0xa3a300a9  sb          $v1, 0xA9($sp)
    ctx->pc = 0x194160u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 169), (uint8_t)GPR_U32(ctx, 3));
label_194164:
    // 0x194164: 0x24830002  addiu       $v1, $a0, 0x2
    ctx->pc = 0x194164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_194168:
    // 0x194168: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_19416c:
    if (ctx->pc == 0x19416Cu) {
        ctx->pc = 0x19416Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194168u;
        // 0x19416c: 0xa3a300aa  sb          $v1, 0xAA($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 170), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194170u;
        goto label_194170;
    }
    ctx->pc = 0x194168u;
    {
        const bool branch_taken_0x194168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19416Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194168u;
        // 0x19416c: 0xa3a300aa  sb          $v1, 0xAA($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 170), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194168) {
            ctx->pc = 0x194174u;
            goto label_194174;
        }
    }
    ctx->pc = 0x194170u;
label_194170:
    // 0x194170: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x194170u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_194174:
    // 0x194174: 0x27a200a8  addiu       $v0, $sp, 0xA8
    ctx->pc = 0x194174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_194178:
    // 0x194178: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x194178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_19417c:
    // 0x19417c: 0x24635730  addiu       $v1, $v1, 0x5730
    ctx->pc = 0x19417cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22320));
label_194180:
    // 0x194180: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x194180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_194184:
    // 0x194184: 0x90480000  lbu         $t0, 0x0($v0)
    ctx->pc = 0x194184u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_194188:
    // 0x194188: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x194188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19418c:
    // 0x19418c: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x19418cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_194190:
    // 0x194190: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x194190u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_194194:
    // 0x194194: 0x8465000c  lh          $a1, 0xC($v1)
    ctx->pc = 0x194194u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_194198:
    // 0x194198: 0x9064000e  lbu         $a0, 0xE($v1)
    ctx->pc = 0x194198u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 14)));
label_19419c:
    // 0x19419c: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x19419cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1941a0:
    // 0x1941a0: 0xfce60000  sd          $a2, 0x0($a3)
    ctx->pc = 0x1941a0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 6));
label_1941a4:
    // 0x1941a4: 0xe81821  addu        $v1, $a3, $t0
    ctx->pc = 0x1941a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1941a8:
    // 0x1941a8: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x1941a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_1941ac:
    // 0x1941ac: 0xa4e5000c  sh          $a1, 0xC($a3)
    ctx->pc = 0x1941acu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 5));
label_1941b0:
    // 0x1941b0: 0xa0e4000e  sb          $a0, 0xE($a3)
    ctx->pc = 0x1941b0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 14), (uint8_t)GPR_U32(ctx, 4));
label_1941b4:
    // 0x1941b4: 0xa208000b  sb          $t0, 0xB($s0)
    ctx->pc = 0x1941b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 8));
label_1941b8:
    // 0x1941b8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1941b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1941bc:
    // 0x1941bc: 0xa203000a  sb          $v1, 0xA($s0)
    ctx->pc = 0x1941bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 3));
label_1941c0:
    // 0x1941c0: 0xfe000010  sd          $zero, 0x10($s0)
    ctx->pc = 0x1941c0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 0));
label_1941c4:
    // 0x1941c4: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1941c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_1941c8:
    // 0x1941c8: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x1941c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_1941cc:
    // 0x1941cc: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x1941ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
label_1941d0:
    // 0x1941d0: 0xa2020006  sb          $v0, 0x6($s0)
    ctx->pc = 0x1941d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
label_1941d4:
    // 0x1941d4: 0xa2020008  sb          $v0, 0x8($s0)
    ctx->pc = 0x1941d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
label_1941d8:
    // 0x1941d8: 0xdea20270  ld          $v0, 0x270($s5)
    ctx->pc = 0x1941d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 624)));
label_1941dc:
    // 0x1941dc: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1941dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_1941e0:
    // 0x1941e0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1941e4:
    if (ctx->pc == 0x1941E4u) {
        ctx->pc = 0x1941E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1941E0u;
        // 0x1941e4: 0x24120064  addiu       $s2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1941E8u;
        goto label_1941e8;
    }
    ctx->pc = 0x1941E0u;
    {
        const bool branch_taken_0x1941e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1941E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1941E0u;
        // 0x1941e4: 0x24120064  addiu       $s2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1941e0) {
            ctx->pc = 0x194204u;
            goto label_194204;
        }
    }
    ctx->pc = 0x1941E8u;
label_1941e8:
    // 0x1941e8: 0x86a3028e  lh          $v1, 0x28E($s5)
    ctx->pc = 0x1941e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 654)));
label_1941ec:
    // 0x1941ec: 0x24022710  addiu       $v0, $zero, 0x2710
    ctx->pc = 0x1941ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
label_1941f0:
    // 0x1941f0: 0x24630064  addiu       $v1, $v1, 0x64
    ctx->pc = 0x1941f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
label_1941f4:
    // 0x1941f4: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x1941f4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1941f8:
    // 0x1941f8: 0x0  nop
    ctx->pc = 0x1941f8u;
    // NOP
label_1941fc:
    // 0x1941fc: 0x0  nop
    ctx->pc = 0x1941fcu;
    // NOP
label_194200:
    // 0x194200: 0x9012  mflo        $s2
    ctx->pc = 0x194200u;
    SET_GPR_U64(ctx, 18, ctx->lo);
label_194204:
    // 0x194204: 0xc08f0cc  jal         func_23C330
label_194208:
    if (ctx->pc == 0x194208u) {
        ctx->pc = 0x19420Cu;
        goto label_19420c;
    }
    ctx->pc = 0x194204u;
    SET_GPR_U32(ctx, 31, 0x19420Cu);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x19420Cu;
label_19420c:
    // 0x19420c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19420cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_194210:
    // 0x194210: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x194210u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_194214:
    // 0x194214: 0x0  nop
    ctx->pc = 0x194214u;
    // NOP
label_194218:
    // 0x194218: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x194218u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_19421c:
    // 0x19421c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x19421cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_194220:
    // 0x194220: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x194220u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_194224:
    // 0x194224: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x194224u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_194228:
    // 0x194228: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x194228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19422c:
    // 0x19422c: 0x0  nop
    ctx->pc = 0x19422cu;
    // NOP
label_194230:
    // 0x194230: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x194230u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_194234:
    // 0x194234: 0x0  nop
    ctx->pc = 0x194234u;
    // NOP
label_194238:
    // 0x194238: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x194238u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_19423c:
    // 0x19423c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x19423cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_194240:
    // 0x194240: 0x12800082  beqz        $s4, . + 4 + (0x82 << 2)
label_194244:
    if (ctx->pc == 0x194244u) {
        ctx->pc = 0x194244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194240u;
        // 0x194244: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194248u;
        goto label_194248;
    }
    ctx->pc = 0x194240u;
    {
        const bool branch_taken_0x194240 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x194244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194240u;
        // 0x194244: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194240) {
            ctx->pc = 0x19444Cu;
            { ctx->pc = 0x19444c; return; }
        }
    }
    ctx->pc = 0x194248u;
label_194248:
    // 0x194248: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x194248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19424c:
    // 0x19424c: 0x278381f0  addiu       $v1, $gp, -0x7E10
    ctx->pc = 0x19424cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935024));
label_194250:
    // 0x194250: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x194250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_194254:
    // 0x194254: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x194254u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_194258:
    // 0x194258: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x194258u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_19425c:
    // 0x19425c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_194260:
    if (ctx->pc == 0x194260u) {
        ctx->pc = 0x194264u;
        goto label_194264;
    }
    ctx->pc = 0x19425Cu;
    {
        const bool branch_taken_0x19425c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19425c) {
            ctx->pc = 0x194274u;
            goto label_194274;
        }
    }
    ctx->pc = 0x194264u;
label_194264:
    // 0x194264: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x194264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_194268:
    // 0x194268: 0x28a20005  slti        $v0, $a1, 0x5
    ctx->pc = 0x194268u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
label_19426c:
    // 0x19426c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_194270:
    if (ctx->pc == 0x194270u) {
        ctx->pc = 0x194270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19426Cu;
        // 0x194270: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194274u;
        goto label_194274;
    }
    ctx->pc = 0x19426Cu;
    {
        const bool branch_taken_0x19426c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x194270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19426Cu;
        // 0x194270: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19426c) {
            ctx->pc = 0x194254u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194254;
        }
    }
    ctx->pc = 0x194274u;
label_194274:
    // 0x194274: 0x0  nop
    ctx->pc = 0x194274u;
    // NOP
label_194278:
    // 0x194278: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x194278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_19427c:
    // 0x19427c: 0x459023  subu        $s2, $v0, $a1
    ctx->pc = 0x19427cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_194280:
    // 0x194280: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x194280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_194284:
    // 0x194284: 0x16620003  bne         $s3, $v0, . + 4 + (0x3 << 2)
label_194288:
    if (ctx->pc == 0x194288u) {
        ctx->pc = 0x194288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194284u;
        // 0x194288: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19428Cu;
        goto label_19428c;
    }
    ctx->pc = 0x194284u;
    {
        const bool branch_taken_0x194284 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x194288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194284u;
        // 0x194288: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194284) {
            ctx->pc = 0x194294u;
            goto label_194294;
        }
    }
    ctx->pc = 0x19428Cu;
label_19428c:
    // 0x19428c: 0x10000004  b           . + 4 + (0x4 << 2)
label_194290:
    if (ctx->pc == 0x194290u) {
        ctx->pc = 0x194290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19428Cu;
        // 0x194290: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x194294u;
        goto label_194294;
    }
    ctx->pc = 0x19428Cu;
    {
        const bool branch_taken_0x19428c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19428Cu;
        // 0x194290: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19428c) {
            ctx->pc = 0x1942A0u;
            goto label_1942a0;
        }
    }
    ctx->pc = 0x194294u;
label_194294:
    // 0x194294: 0x16620003  bne         $s3, $v0, . + 4 + (0x3 << 2)
label_194298:
    if (ctx->pc == 0x194298u) {
        ctx->pc = 0x194298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194294u;
        // 0x194298: 0x2a410006  slti        $at, $s2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19429Cu;
        goto label_19429c;
    }
    ctx->pc = 0x194294u;
    {
        const bool branch_taken_0x194294 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x194298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194294u;
        // 0x194298: 0x2a410006  slti        $at, $s2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x194294) {
            ctx->pc = 0x1942A4u;
            goto label_1942a4;
        }
    }
    ctx->pc = 0x19429Cu;
label_19429c:
    // 0x19429c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19429cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1942a0:
    // 0x1942a0: 0x2a410006  slti        $at, $s2, 0x6
    ctx->pc = 0x1942a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
label_1942a4:
    // 0x1942a4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1942a8:
    if (ctx->pc == 0x1942A8u) {
        ctx->pc = 0x1942ACu;
        goto label_1942ac;
    }
    ctx->pc = 0x1942A4u;
    {
        const bool branch_taken_0x1942a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1942a4) {
            ctx->pc = 0x1942B0u;
            goto label_1942b0;
        }
    }
    ctx->pc = 0x1942ACu;
label_1942ac:
    // 0x1942ac: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x1942acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1942b0:
    // 0x1942b0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1942b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1942b4:
    // 0x1942b4: 0x8c224afc  lw          $v0, 0x4AFC($at)
    ctx->pc = 0x1942b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19196)));
label_1942b8:
    // 0x1942b8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1942bc:
    if (ctx->pc == 0x1942BCu) {
        ctx->pc = 0x1942BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1942B8u;
        // 0x1942bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1942C0u;
        { ctx->pc = 0x1942c0; return; }
    }
    ctx->pc = 0x1942B8u;
    {
        const bool branch_taken_0x1942b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1942BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1942B8u;
        // 0x1942bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1942b8) {
            ctx->pc = 0x1942E8u;
            { ctx->pc = 0x1942e8; return; }
        }
    }
    ctx->pc = 0x1942C0u;
    ctx->pc = 0x1942c0u;
    return;
}

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

// Function: FUN_0019b808
// Address: 0x19b808 - 0x29b810
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b808_part391(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x259ee8u: goto label_259ee8;
        case 0x259eecu: goto label_259eec;
        case 0x259ef0u: goto label_259ef0;
        case 0x259ef4u: goto label_259ef4;
        case 0x259ef8u: goto label_259ef8;
        case 0x259efcu: goto label_259efc;
        case 0x259f00u: goto label_259f00;
        case 0x259f04u: goto label_259f04;
        case 0x259f08u: goto label_259f08;
        case 0x259f0cu: goto label_259f0c;
        case 0x259f10u: goto label_259f10;
        case 0x259f14u: goto label_259f14;
        case 0x259f18u: goto label_259f18;
        case 0x259f1cu: goto label_259f1c;
        case 0x259f20u: goto label_259f20;
        case 0x259f24u: goto label_259f24;
        case 0x259f28u: goto label_259f28;
        case 0x259f2cu: goto label_259f2c;
        case 0x259f30u: goto label_259f30;
        case 0x259f34u: goto label_259f34;
        case 0x259f38u: goto label_259f38;
        case 0x259f3cu: goto label_259f3c;
        case 0x259f40u: goto label_259f40;
        case 0x259f44u: goto label_259f44;
        case 0x259f48u: goto label_259f48;
        case 0x259f4cu: goto label_259f4c;
        case 0x259f50u: goto label_259f50;
        case 0x259f54u: goto label_259f54;
        case 0x259f58u: goto label_259f58;
        case 0x259f5cu: goto label_259f5c;
        case 0x259f60u: goto label_259f60;
        case 0x259f64u: goto label_259f64;
        case 0x259f68u: goto label_259f68;
        case 0x259f6cu: goto label_259f6c;
        case 0x259f70u: goto label_259f70;
        case 0x259f74u: goto label_259f74;
        case 0x259f78u: goto label_259f78;
        case 0x259f7cu: goto label_259f7c;
        case 0x259f80u: goto label_259f80;
        case 0x259f84u: goto label_259f84;
        case 0x259f88u: goto label_259f88;
        case 0x259f8cu: goto label_259f8c;
        case 0x259f90u: goto label_259f90;
        case 0x259f94u: goto label_259f94;
        case 0x259f98u: goto label_259f98;
        case 0x259f9cu: goto label_259f9c;
        case 0x259fa0u: goto label_259fa0;
        case 0x259fa4u: goto label_259fa4;
        case 0x259fa8u: goto label_259fa8;
        case 0x259facu: goto label_259fac;
        case 0x259fb0u: goto label_259fb0;
        case 0x259fb4u: goto label_259fb4;
        case 0x259fb8u: goto label_259fb8;
        case 0x259fbcu: goto label_259fbc;
        case 0x259fc0u: goto label_259fc0;
        case 0x259fc4u: goto label_259fc4;
        case 0x259fc8u: goto label_259fc8;
        case 0x259fccu: goto label_259fcc;
        case 0x259fd0u: goto label_259fd0;
        case 0x259fd4u: goto label_259fd4;
        case 0x259fd8u: goto label_259fd8;
        case 0x259fdcu: goto label_259fdc;
        case 0x259fe0u: goto label_259fe0;
        case 0x259fe4u: goto label_259fe4;
        case 0x259fe8u: goto label_259fe8;
        case 0x259fecu: goto label_259fec;
        case 0x259ff0u: goto label_259ff0;
        case 0x259ff4u: goto label_259ff4;
        case 0x259ff8u: goto label_259ff8;
        case 0x259ffcu: goto label_259ffc;
        case 0x25a000u: goto label_25a000;
        case 0x25a004u: goto label_25a004;
        case 0x25a008u: goto label_25a008;
        case 0x25a00cu: goto label_25a00c;
        case 0x25a010u: goto label_25a010;
        case 0x25a014u: goto label_25a014;
        case 0x25a018u: goto label_25a018;
        case 0x25a01cu: goto label_25a01c;
        case 0x25a020u: goto label_25a020;
        case 0x25a024u: goto label_25a024;
        case 0x25a028u: goto label_25a028;
        case 0x25a02cu: goto label_25a02c;
        case 0x25a030u: goto label_25a030;
        case 0x25a034u: goto label_25a034;
        case 0x25a038u: goto label_25a038;
        case 0x25a03cu: goto label_25a03c;
        case 0x25a040u: goto label_25a040;
        case 0x25a044u: goto label_25a044;
        case 0x25a048u: goto label_25a048;
        case 0x25a04cu: goto label_25a04c;
        case 0x25a050u: goto label_25a050;
        case 0x25a054u: goto label_25a054;
        case 0x25a058u: goto label_25a058;
        case 0x25a05cu: goto label_25a05c;
        case 0x25a060u: goto label_25a060;
        case 0x25a064u: goto label_25a064;
        case 0x25a068u: goto label_25a068;
        case 0x25a06cu: goto label_25a06c;
        case 0x25a070u: goto label_25a070;
        case 0x25a074u: goto label_25a074;
        case 0x25a078u: goto label_25a078;
        case 0x25a07cu: goto label_25a07c;
        case 0x25a080u: goto label_25a080;
        case 0x25a084u: goto label_25a084;
        case 0x25a088u: goto label_25a088;
        case 0x25a08cu: goto label_25a08c;
        case 0x25a090u: goto label_25a090;
        case 0x25a094u: goto label_25a094;
        case 0x25a098u: goto label_25a098;
        case 0x25a09cu: goto label_25a09c;
        case 0x25a0a0u: goto label_25a0a0;
        case 0x25a0a4u: goto label_25a0a4;
        case 0x25a0a8u: goto label_25a0a8;
        case 0x25a0acu: goto label_25a0ac;
        case 0x25a0b0u: goto label_25a0b0;
        case 0x25a0b4u: goto label_25a0b4;
        case 0x25a0b8u: goto label_25a0b8;
        case 0x25a0bcu: goto label_25a0bc;
        case 0x25a0c0u: goto label_25a0c0;
        case 0x25a0c4u: goto label_25a0c4;
        case 0x25a0c8u: goto label_25a0c8;
        case 0x25a0ccu: goto label_25a0cc;
        case 0x25a0d0u: goto label_25a0d0;
        case 0x25a0d4u: goto label_25a0d4;
        case 0x25a0d8u: goto label_25a0d8;
        case 0x25a0dcu: goto label_25a0dc;
        case 0x25a0e0u: goto label_25a0e0;
        case 0x25a0e4u: goto label_25a0e4;
        case 0x25a0e8u: goto label_25a0e8;
        case 0x25a0ecu: goto label_25a0ec;
        case 0x25a0f0u: goto label_25a0f0;
        case 0x25a0f4u: goto label_25a0f4;
        case 0x25a0f8u: goto label_25a0f8;
        case 0x25a0fcu: goto label_25a0fc;
        case 0x25a100u: goto label_25a100;
        case 0x25a104u: goto label_25a104;
        case 0x25a108u: goto label_25a108;
        case 0x25a10cu: goto label_25a10c;
        case 0x25a110u: goto label_25a110;
        case 0x25a114u: goto label_25a114;
        case 0x25a118u: goto label_25a118;
        case 0x25a11cu: goto label_25a11c;
        case 0x25a120u: goto label_25a120;
        case 0x25a124u: goto label_25a124;
        case 0x25a128u: goto label_25a128;
        case 0x25a12cu: goto label_25a12c;
        case 0x25a130u: goto label_25a130;
        case 0x25a134u: goto label_25a134;
        case 0x25a138u: goto label_25a138;
        case 0x25a13cu: goto label_25a13c;
        case 0x25a140u: goto label_25a140;
        case 0x25a144u: goto label_25a144;
        case 0x25a148u: goto label_25a148;
        case 0x25a14cu: goto label_25a14c;
        case 0x25a150u: goto label_25a150;
        case 0x25a154u: goto label_25a154;
        case 0x25a158u: goto label_25a158;
        case 0x25a15cu: goto label_25a15c;
        case 0x25a160u: goto label_25a160;
        case 0x25a164u: goto label_25a164;
        case 0x25a168u: goto label_25a168;
        case 0x25a16cu: goto label_25a16c;
        case 0x25a170u: goto label_25a170;
        case 0x25a174u: goto label_25a174;
        case 0x25a178u: goto label_25a178;
        case 0x25a17cu: goto label_25a17c;
        case 0x25a180u: goto label_25a180;
        case 0x25a184u: goto label_25a184;
        case 0x25a188u: goto label_25a188;
        case 0x25a18cu: goto label_25a18c;
        case 0x25a190u: goto label_25a190;
        case 0x25a194u: goto label_25a194;
        case 0x25a198u: goto label_25a198;
        case 0x25a19cu: goto label_25a19c;
        case 0x25a1a0u: goto label_25a1a0;
        case 0x25a1a4u: goto label_25a1a4;
        case 0x25a1a8u: goto label_25a1a8;
        case 0x25a1acu: goto label_25a1ac;
        case 0x25a1b0u: goto label_25a1b0;
        case 0x25a1b4u: goto label_25a1b4;
        case 0x25a1b8u: goto label_25a1b8;
        case 0x25a1bcu: goto label_25a1bc;
        case 0x25a1c0u: goto label_25a1c0;
        case 0x25a1c4u: goto label_25a1c4;
        case 0x25a1c8u: goto label_25a1c8;
        case 0x25a1ccu: goto label_25a1cc;
        case 0x25a1d0u: goto label_25a1d0;
        case 0x25a1d4u: goto label_25a1d4;
        case 0x25a1d8u: goto label_25a1d8;
        case 0x25a1dcu: goto label_25a1dc;
        case 0x25a1e0u: goto label_25a1e0;
        case 0x25a1e4u: goto label_25a1e4;
        case 0x25a1e8u: goto label_25a1e8;
        case 0x25a1ecu: goto label_25a1ec;
        case 0x25a1f0u: goto label_25a1f0;
        case 0x25a1f4u: goto label_25a1f4;
        case 0x25a1f8u: goto label_25a1f8;
        case 0x25a1fcu: goto label_25a1fc;
        case 0x25a200u: goto label_25a200;
        case 0x25a204u: goto label_25a204;
        case 0x25a208u: goto label_25a208;
        case 0x25a20cu: goto label_25a20c;
        case 0x25a210u: goto label_25a210;
        case 0x25a214u: goto label_25a214;
        case 0x25a218u: goto label_25a218;
        case 0x25a21cu: goto label_25a21c;
        case 0x25a220u: goto label_25a220;
        case 0x25a224u: goto label_25a224;
        case 0x25a228u: goto label_25a228;
        case 0x25a22cu: goto label_25a22c;
        case 0x25a230u: goto label_25a230;
        case 0x25a234u: goto label_25a234;
        case 0x25a238u: goto label_25a238;
        case 0x25a23cu: goto label_25a23c;
        case 0x25a240u: goto label_25a240;
        case 0x25a244u: goto label_25a244;
        case 0x25a248u: goto label_25a248;
        case 0x25a24cu: goto label_25a24c;
        case 0x25a250u: goto label_25a250;
        case 0x25a254u: goto label_25a254;
        case 0x25a258u: goto label_25a258;
        case 0x25a25cu: goto label_25a25c;
        case 0x25a260u: goto label_25a260;
        case 0x25a264u: goto label_25a264;
        case 0x25a268u: goto label_25a268;
        case 0x25a26cu: goto label_25a26c;
        case 0x25a270u: goto label_25a270;
        case 0x25a274u: goto label_25a274;
        case 0x25a278u: goto label_25a278;
        case 0x25a27cu: goto label_25a27c;
        case 0x25a280u: goto label_25a280;
        case 0x25a284u: goto label_25a284;
        case 0x25a288u: goto label_25a288;
        case 0x25a28cu: goto label_25a28c;
        case 0x25a290u: goto label_25a290;
        case 0x25a294u: goto label_25a294;
        case 0x25a298u: goto label_25a298;
        case 0x25a29cu: goto label_25a29c;
        case 0x25a2a0u: goto label_25a2a0;
        case 0x25a2a4u: goto label_25a2a4;
        case 0x25a2a8u: goto label_25a2a8;
        case 0x25a2acu: goto label_25a2ac;
        case 0x25a2b0u: goto label_25a2b0;
        case 0x25a2b4u: goto label_25a2b4;
        case 0x25a2b8u: goto label_25a2b8;
        case 0x25a2bcu: goto label_25a2bc;
        case 0x25a2c0u: goto label_25a2c0;
        case 0x25a2c4u: goto label_25a2c4;
        case 0x25a2c8u: goto label_25a2c8;
        case 0x25a2ccu: goto label_25a2cc;
        case 0x25a2d0u: goto label_25a2d0;
        case 0x25a2d4u: goto label_25a2d4;
        case 0x25a2d8u: goto label_25a2d8;
        case 0x25a2dcu: goto label_25a2dc;
        case 0x25a2e0u: goto label_25a2e0;
        case 0x25a2e4u: goto label_25a2e4;
        case 0x25a2e8u: goto label_25a2e8;
        case 0x25a2ecu: goto label_25a2ec;
        case 0x25a2f0u: goto label_25a2f0;
        case 0x25a2f4u: goto label_25a2f4;
        case 0x25a2f8u: goto label_25a2f8;
        case 0x25a2fcu: goto label_25a2fc;
        case 0x25a300u: goto label_25a300;
        case 0x25a304u: goto label_25a304;
        case 0x25a308u: goto label_25a308;
        case 0x25a30cu: goto label_25a30c;
        case 0x25a310u: goto label_25a310;
        case 0x25a314u: goto label_25a314;
        case 0x25a318u: goto label_25a318;
        case 0x25a31cu: goto label_25a31c;
        case 0x25a320u: goto label_25a320;
        case 0x25a324u: goto label_25a324;
        case 0x25a328u: goto label_25a328;
        case 0x25a32cu: goto label_25a32c;
        case 0x25a330u: goto label_25a330;
        case 0x25a334u: goto label_25a334;
        case 0x25a338u: goto label_25a338;
        case 0x25a33cu: goto label_25a33c;
        case 0x25a340u: goto label_25a340;
        case 0x25a344u: goto label_25a344;
        case 0x25a348u: goto label_25a348;
        case 0x25a34cu: goto label_25a34c;
        case 0x25a350u: goto label_25a350;
        case 0x25a354u: goto label_25a354;
        case 0x25a358u: goto label_25a358;
        case 0x25a35cu: goto label_25a35c;
        case 0x25a360u: goto label_25a360;
        case 0x25a364u: goto label_25a364;
        case 0x25a368u: goto label_25a368;
        case 0x25a36cu: goto label_25a36c;
        case 0x25a370u: goto label_25a370;
        case 0x25a374u: goto label_25a374;
        case 0x25a378u: goto label_25a378;
        case 0x25a37cu: goto label_25a37c;
        case 0x25a380u: goto label_25a380;
        case 0x25a384u: goto label_25a384;
        case 0x25a388u: goto label_25a388;
        case 0x25a38cu: goto label_25a38c;
        case 0x25a390u: goto label_25a390;
        case 0x25a394u: goto label_25a394;
        case 0x25a398u: goto label_25a398;
        case 0x25a39cu: goto label_25a39c;
        case 0x25a3a0u: goto label_25a3a0;
        case 0x25a3a4u: goto label_25a3a4;
        case 0x25a3a8u: goto label_25a3a8;
        case 0x25a3acu: goto label_25a3ac;
        case 0x25a3b0u: goto label_25a3b0;
        case 0x25a3b4u: goto label_25a3b4;
        case 0x25a3b8u: goto label_25a3b8;
        case 0x25a3bcu: goto label_25a3bc;
        case 0x25a3c0u: goto label_25a3c0;
        case 0x25a3c4u: goto label_25a3c4;
        case 0x25a3c8u: goto label_25a3c8;
        case 0x25a3ccu: goto label_25a3cc;
        case 0x25a3d0u: goto label_25a3d0;
        case 0x25a3d4u: goto label_25a3d4;
        case 0x25a3d8u: goto label_25a3d8;
        case 0x25a3dcu: goto label_25a3dc;
        case 0x25a3e0u: goto label_25a3e0;
        case 0x25a3e4u: goto label_25a3e4;
        case 0x25a3e8u: goto label_25a3e8;
        case 0x25a3ecu: goto label_25a3ec;
        case 0x25a3f0u: goto label_25a3f0;
        case 0x25a3f4u: goto label_25a3f4;
        case 0x25a3f8u: goto label_25a3f8;
        case 0x25a3fcu: goto label_25a3fc;
        case 0x25a400u: goto label_25a400;
        case 0x25a404u: goto label_25a404;
        case 0x25a408u: goto label_25a408;
        case 0x25a40cu: goto label_25a40c;
        case 0x25a410u: goto label_25a410;
        case 0x25a414u: goto label_25a414;
        case 0x25a418u: goto label_25a418;
        case 0x25a41cu: goto label_25a41c;
        case 0x25a420u: goto label_25a420;
        case 0x25a424u: goto label_25a424;
        case 0x25a428u: goto label_25a428;
        case 0x25a42cu: goto label_25a42c;
        case 0x25a430u: goto label_25a430;
        case 0x25a434u: goto label_25a434;
        case 0x25a438u: goto label_25a438;
        case 0x25a43cu: goto label_25a43c;
        case 0x25a440u: goto label_25a440;
        case 0x25a444u: goto label_25a444;
        case 0x25a448u: goto label_25a448;
        case 0x25a44cu: goto label_25a44c;
        case 0x25a450u: goto label_25a450;
        case 0x25a454u: goto label_25a454;
        case 0x25a458u: goto label_25a458;
        case 0x25a45cu: goto label_25a45c;
        case 0x25a460u: goto label_25a460;
        case 0x25a464u: goto label_25a464;
        case 0x25a468u: goto label_25a468;
        case 0x25a46cu: goto label_25a46c;
        case 0x25a470u: goto label_25a470;
        case 0x25a474u: goto label_25a474;
        case 0x25a478u: goto label_25a478;
        case 0x25a47cu: goto label_25a47c;
        case 0x25a480u: goto label_25a480;
        case 0x25a484u: goto label_25a484;
        case 0x25a488u: goto label_25a488;
        case 0x25a48cu: goto label_25a48c;
        case 0x25a490u: goto label_25a490;
        case 0x25a494u: goto label_25a494;
        case 0x25a498u: goto label_25a498;
        case 0x25a49cu: goto label_25a49c;
        case 0x25a4a0u: goto label_25a4a0;
        case 0x25a4a4u: goto label_25a4a4;
        case 0x25a4a8u: goto label_25a4a8;
        case 0x25a4acu: goto label_25a4ac;
        case 0x25a4b0u: goto label_25a4b0;
        case 0x25a4b4u: goto label_25a4b4;
        case 0x25a4b8u: goto label_25a4b8;
        case 0x25a4bcu: goto label_25a4bc;
        case 0x25a4c0u: goto label_25a4c0;
        case 0x25a4c4u: goto label_25a4c4;
        case 0x25a4c8u: goto label_25a4c8;
        case 0x25a4ccu: goto label_25a4cc;
        case 0x25a4d0u: goto label_25a4d0;
        case 0x25a4d4u: goto label_25a4d4;
        case 0x25a4d8u: goto label_25a4d8;
        case 0x25a4dcu: goto label_25a4dc;
        case 0x25a4e0u: goto label_25a4e0;
        case 0x25a4e4u: goto label_25a4e4;
        case 0x25a4e8u: goto label_25a4e8;
        case 0x25a4ecu: goto label_25a4ec;
        case 0x25a4f0u: goto label_25a4f0;
        case 0x25a4f4u: goto label_25a4f4;
        case 0x25a4f8u: goto label_25a4f8;
        case 0x25a4fcu: goto label_25a4fc;
        case 0x25a500u: goto label_25a500;
        case 0x25a504u: goto label_25a504;
        case 0x25a508u: goto label_25a508;
        case 0x25a50cu: goto label_25a50c;
        case 0x25a510u: goto label_25a510;
        case 0x25a514u: goto label_25a514;
        case 0x25a518u: goto label_25a518;
        case 0x25a51cu: goto label_25a51c;
        case 0x25a520u: goto label_25a520;
        case 0x25a524u: goto label_25a524;
        case 0x25a528u: goto label_25a528;
        case 0x25a52cu: goto label_25a52c;
        case 0x25a530u: goto label_25a530;
        case 0x25a534u: goto label_25a534;
        case 0x25a538u: goto label_25a538;
        case 0x25a53cu: goto label_25a53c;
        case 0x25a540u: goto label_25a540;
        case 0x25a544u: goto label_25a544;
        case 0x25a548u: goto label_25a548;
        case 0x25a54cu: goto label_25a54c;
        case 0x25a550u: goto label_25a550;
        case 0x25a554u: goto label_25a554;
        case 0x25a558u: goto label_25a558;
        case 0x25a55cu: goto label_25a55c;
        case 0x25a560u: goto label_25a560;
        case 0x25a564u: goto label_25a564;
        case 0x25a568u: goto label_25a568;
        case 0x25a56cu: goto label_25a56c;
        case 0x25a570u: goto label_25a570;
        case 0x25a574u: goto label_25a574;
        case 0x25a578u: goto label_25a578;
        case 0x25a57cu: goto label_25a57c;
        case 0x25a580u: goto label_25a580;
        case 0x25a584u: goto label_25a584;
        case 0x25a588u: goto label_25a588;
        case 0x25a58cu: goto label_25a58c;
        case 0x25a590u: goto label_25a590;
        case 0x25a594u: goto label_25a594;
        case 0x25a598u: goto label_25a598;
        case 0x25a59cu: goto label_25a59c;
        case 0x25a5a0u: goto label_25a5a0;
        case 0x25a5a4u: goto label_25a5a4;
        case 0x25a5a8u: goto label_25a5a8;
        case 0x25a5acu: goto label_25a5ac;
        case 0x25a5b0u: goto label_25a5b0;
        case 0x25a5b4u: goto label_25a5b4;
        case 0x25a5b8u: goto label_25a5b8;
        case 0x25a5bcu: goto label_25a5bc;
        case 0x25a5c0u: goto label_25a5c0;
        case 0x25a5c4u: goto label_25a5c4;
        case 0x25a5c8u: goto label_25a5c8;
        case 0x25a5ccu: goto label_25a5cc;
        case 0x25a5d0u: goto label_25a5d0;
        case 0x25a5d4u: goto label_25a5d4;
        case 0x25a5d8u: goto label_25a5d8;
        case 0x25a5dcu: goto label_25a5dc;
        case 0x25a5e0u: goto label_25a5e0;
        case 0x25a5e4u: goto label_25a5e4;
        case 0x25a5e8u: goto label_25a5e8;
        case 0x25a5ecu: goto label_25a5ec;
        case 0x25a5f0u: goto label_25a5f0;
        case 0x25a5f4u: goto label_25a5f4;
        case 0x25a5f8u: goto label_25a5f8;
        case 0x25a5fcu: goto label_25a5fc;
        case 0x25a600u: goto label_25a600;
        case 0x25a604u: goto label_25a604;
        case 0x25a608u: goto label_25a608;
        case 0x25a60cu: goto label_25a60c;
        case 0x25a610u: goto label_25a610;
        case 0x25a614u: goto label_25a614;
        case 0x25a618u: goto label_25a618;
        case 0x25a61cu: goto label_25a61c;
        case 0x25a620u: goto label_25a620;
        case 0x25a624u: goto label_25a624;
        case 0x25a628u: goto label_25a628;
        case 0x25a62cu: goto label_25a62c;
        case 0x25a630u: goto label_25a630;
        case 0x25a634u: goto label_25a634;
        case 0x25a638u: goto label_25a638;
        case 0x25a63cu: goto label_25a63c;
        case 0x25a640u: goto label_25a640;
        case 0x25a644u: goto label_25a644;
        case 0x25a648u: goto label_25a648;
        case 0x25a64cu: goto label_25a64c;
        case 0x25a650u: goto label_25a650;
        case 0x25a654u: goto label_25a654;
        case 0x25a658u: goto label_25a658;
        case 0x25a65cu: goto label_25a65c;
        case 0x25a660u: goto label_25a660;
        case 0x25a664u: goto label_25a664;
        case 0x25a668u: goto label_25a668;
        case 0x25a66cu: goto label_25a66c;
        case 0x25a670u: goto label_25a670;
        case 0x25a674u: goto label_25a674;
        case 0x25a678u: goto label_25a678;
        case 0x25a67cu: goto label_25a67c;
        case 0x25a680u: goto label_25a680;
        case 0x25a684u: goto label_25a684;
        case 0x25a688u: goto label_25a688;
        case 0x25a68cu: goto label_25a68c;
        case 0x25a690u: goto label_25a690;
        case 0x25a694u: goto label_25a694;
        case 0x25a698u: goto label_25a698;
        case 0x25a69cu: goto label_25a69c;
        case 0x25a6a0u: goto label_25a6a0;
        case 0x25a6a4u: goto label_25a6a4;
        case 0x25a6a8u: goto label_25a6a8;
        case 0x25a6acu: goto label_25a6ac;
        case 0x25a6b0u: goto label_25a6b0;
        case 0x25a6b4u: goto label_25a6b4;
        default: return;
    }

label_259ee8:
    // 0x259ee8: 0x0  nop
    ctx->pc = 0x259ee8u;
    // NOP
label_259eec:
    // 0x259eec: 0x0  nop
    ctx->pc = 0x259eecu;
    // NOP
label_259ef0:
    // 0x259ef0: 0x3611  .word       0x00003611                   # mthi        $zero # 00003600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259ef0u;
    ctx->hi = GPR_U64(ctx, 0);
label_259ef4:
    // 0x259ef4: 0x4e70  tge         $zero, $zero, 313
    ctx->pc = 0x259ef4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259ef8:
    // 0x259ef8: 0x0  nop
    ctx->pc = 0x259ef8u;
    // NOP
label_259efc:
    // 0x259efc: 0x0  nop
    ctx->pc = 0x259efcu;
    // NOP
label_259f00:
    // 0x259f00: 0x361b  .word       0x0000361B                   # divu        $a2, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259f00u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_259f04:
    // 0x259f04: 0x9090  .word       0x00009090                   # mfhi        $s2 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259f04u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_259f08:
    // 0x259f08: 0x0  nop
    ctx->pc = 0x259f08u;
    // NOP
label_259f0c:
    // 0x259f0c: 0x0  nop
    ctx->pc = 0x259f0cu;
    // NOP
label_259f10:
    // 0x259f10: 0x362e  .word       0x0000362E                   # dsub        $a2, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259f10u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, r); }
label_259f14:
    // 0x259f14: 0x8940  sll         $s1, $zero, 5
    ctx->pc = 0x259f14u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_259f18:
    // 0x259f18: 0x0  nop
    ctx->pc = 0x259f18u;
    // NOP
label_259f1c:
    // 0x259f1c: 0x0  nop
    ctx->pc = 0x259f1cu;
    // NOP
label_259f20:
    // 0x259f20: 0x3640  sll         $a2, $zero, 25
    ctx->pc = 0x259f20u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_259f24:
    // 0x259f24: 0xaf20  .word       0x0000AF20                   # add         $s5, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259f24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_259f28:
    // 0x259f28: 0x0  nop
    ctx->pc = 0x259f28u;
    // NOP
label_259f2c:
    // 0x259f2c: 0x0  nop
    ctx->pc = 0x259f2cu;
    // NOP
label_259f30:
    // 0x259f30: 0x3656  .word       0x00003656                   # dsrlv       $a2, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259f30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_259f34:
    // 0x259f34: 0x8230  tge         $zero, $zero, 520
    ctx->pc = 0x259f34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259f38:
    // 0x259f38: 0x0  nop
    ctx->pc = 0x259f38u;
    // NOP
label_259f3c:
    // 0x259f3c: 0x0  nop
    ctx->pc = 0x259f3cu;
    // NOP
label_259f40:
    // 0x259f40: 0x3667  .word       0x00003667                   # not         $a2, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259f40u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_259f44:
    // 0x259f44: 0x9ba0  .word       0x00009BA0                   # add         $s3, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259f44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_259f48:
    // 0x259f48: 0x0  nop
    ctx->pc = 0x259f48u;
    // NOP
label_259f4c:
    // 0x259f4c: 0x0  nop
    ctx->pc = 0x259f4cu;
    // NOP
label_259f50:
    // 0x259f50: 0x367b  dsra        $a2, $zero, 25
    ctx->pc = 0x259f50u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 0) >> 25);
label_259f54:
    // 0x259f54: 0x8870  tge         $zero, $zero, 545
    ctx->pc = 0x259f54u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259f58:
    // 0x259f58: 0x0  nop
    ctx->pc = 0x259f58u;
    // NOP
label_259f5c:
    // 0x259f5c: 0x0  nop
    ctx->pc = 0x259f5cu;
    // NOP
label_259f60:
    // 0x259f60: 0x368d  break       0, 218
    ctx->pc = 0x259f60u;
    runtime->handleBreak(rdram, ctx);
label_259f64:
    // 0x259f64: 0x9d60  .word       0x00009D60                   # add         $s3, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259f64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_259f68:
    // 0x259f68: 0x0  nop
    ctx->pc = 0x259f68u;
    // NOP
label_259f6c:
    // 0x259f6c: 0x0  nop
    ctx->pc = 0x259f6cu;
    // NOP
label_259f70:
    // 0x259f70: 0x36a1  .word       0x000036A1                   # addu        $a2, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_259f74:
    // 0x259f74: 0x8870  tge         $zero, $zero, 545
    ctx->pc = 0x259f74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259f78:
    // 0x259f78: 0x0  nop
    ctx->pc = 0x259f78u;
    // NOP
label_259f7c:
    // 0x259f7c: 0x0  nop
    ctx->pc = 0x259f7cu;
    // NOP
label_259f80:
    // 0x259f80: 0x36b3  tltu        $zero, $zero, 218
    ctx->pc = 0x259f80u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259f84:
    // 0x259f84: 0x9cb0  tge         $zero, $zero, 626
    ctx->pc = 0x259f84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259f88:
    // 0x259f88: 0x0  nop
    ctx->pc = 0x259f88u;
    // NOP
label_259f8c:
    // 0x259f8c: 0x0  nop
    ctx->pc = 0x259f8cu;
    // NOP
label_259f90:
    // 0x259f90: 0x36c7  .word       0x000036C7                   # srav        $a2, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259f90u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_259f94:
    // 0x259f94: 0x9a20  .word       0x00009A20                   # add         $s3, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259f94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_259f98:
    // 0x259f98: 0x0  nop
    ctx->pc = 0x259f98u;
    // NOP
label_259f9c:
    // 0x259f9c: 0x0  nop
    ctx->pc = 0x259f9cu;
    // NOP
label_259fa0:
    // 0x259fa0: 0x36db  .word       0x000036DB                   # divu        $a2, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259fa0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_259fa4:
    // 0x259fa4: 0x9b20  .word       0x00009B20                   # add         $s3, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259fa4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_259fa8:
    // 0x259fa8: 0x0  nop
    ctx->pc = 0x259fa8u;
    // NOP
label_259fac:
    // 0x259fac: 0x0  nop
    ctx->pc = 0x259facu;
    // NOP
label_259fb0:
    // 0x259fb0: 0x36ef  .word       0x000036EF                   # dsubu       $a2, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259fb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_259fb4:
    // 0x259fb4: 0x9d00  sll         $s3, $zero, 20
    ctx->pc = 0x259fb4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_259fb8:
    // 0x259fb8: 0x0  nop
    ctx->pc = 0x259fb8u;
    // NOP
label_259fbc:
    // 0x259fbc: 0x0  nop
    ctx->pc = 0x259fbcu;
    // NOP
label_259fc0:
    // 0x259fc0: 0x3703  sra         $a2, $zero, 28
    ctx->pc = 0x259fc0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 0), 28));
label_259fc4:
    // 0x259fc4: 0x5490  .word       0x00005490                   # mfhi        $t2 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259fc4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_259fc8:
    // 0x259fc8: 0x0  nop
    ctx->pc = 0x259fc8u;
    // NOP
label_259fcc:
    // 0x259fcc: 0x0  nop
    ctx->pc = 0x259fccu;
    // NOP
label_259fd0:
    // 0x259fd0: 0x370e  .word       0x0000370E                   # INVALID     $zero, $zero, 0x370E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259fd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x259FD0 raw=0x0000370E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_259fd4:
    // 0x259fd4: 0x57c0  sll         $t2, $zero, 31
    ctx->pc = 0x259fd4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_259fd8:
    // 0x259fd8: 0x0  nop
    ctx->pc = 0x259fd8u;
    // NOP
label_259fdc:
    // 0x259fdc: 0x0  nop
    ctx->pc = 0x259fdcu;
    // NOP
label_259fe0:
    // 0x259fe0: 0x3719  .word       0x00003719                   # multu       $zero, $zero # 00003700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259fe0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_259fe4:
    // 0x259fe4: 0x5e50  .word       0x00005E50                   # mfhi        $t3 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259fe4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_259fe8:
    // 0x259fe8: 0x0  nop
    ctx->pc = 0x259fe8u;
    // NOP
label_259fec:
    // 0x259fec: 0x0  nop
    ctx->pc = 0x259fecu;
    // NOP
label_259ff0:
    // 0x259ff0: 0x3725  .word       0x00003725                   # move        $a2, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x259ff0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_259ff4:
    // 0x259ff4: 0x6e70  tge         $zero, $zero, 441
    ctx->pc = 0x259ff4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_259ff8:
    // 0x259ff8: 0x0  nop
    ctx->pc = 0x259ff8u;
    // NOP
label_259ffc:
    // 0x259ffc: 0x0  nop
    ctx->pc = 0x259ffcu;
    // NOP
label_25a000:
    // 0x25a000: 0x3733  tltu        $zero, $zero, 220
    ctx->pc = 0x25a000u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a004:
    // 0x25a004: 0x5de0  .word       0x00005DE0                   # add         $t3, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a004u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_25a008:
    // 0x25a008: 0x0  nop
    ctx->pc = 0x25a008u;
    // NOP
label_25a00c:
    // 0x25a00c: 0x0  nop
    ctx->pc = 0x25a00cu;
    // NOP
label_25a010:
    // 0x25a010: 0x373f  dsra32      $a2, $zero, 28
    ctx->pc = 0x25a010u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 0) >> (32 + 28));
label_25a014:
    // 0x25a014: 0x8a00  sll         $s1, $zero, 8
    ctx->pc = 0x25a014u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_25a018:
    // 0x25a018: 0x0  nop
    ctx->pc = 0x25a018u;
    // NOP
label_25a01c:
    // 0x25a01c: 0x0  nop
    ctx->pc = 0x25a01cu;
    // NOP
label_25a020:
    // 0x25a020: 0x3751  .word       0x00003751                   # mthi        $zero # 00003740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a020u;
    ctx->hi = GPR_U64(ctx, 0);
label_25a024:
    // 0x25a024: 0x69f0  tge         $zero, $zero, 423
    ctx->pc = 0x25a024u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a028:
    // 0x25a028: 0x0  nop
    ctx->pc = 0x25a028u;
    // NOP
label_25a02c:
    // 0x25a02c: 0x0  nop
    ctx->pc = 0x25a02cu;
    // NOP
label_25a030:
    // 0x25a030: 0x375f  .word       0x0000375F                   # ddivu       $a2, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a030u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x25A030 raw=0x0000375F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a034:
    // 0x25a034: 0x5cc0  sll         $t3, $zero, 19
    ctx->pc = 0x25a034u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_25a038:
    // 0x25a038: 0x0  nop
    ctx->pc = 0x25a038u;
    // NOP
label_25a03c:
    // 0x25a03c: 0x0  nop
    ctx->pc = 0x25a03cu;
    // NOP
label_25a040:
    // 0x25a040: 0x376b  .word       0x0000376B                   # sltu        $a2, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a040u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_25a044:
    // 0x25a044: 0x9370  tge         $zero, $zero, 589
    ctx->pc = 0x25a044u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a048:
    // 0x25a048: 0x0  nop
    ctx->pc = 0x25a048u;
    // NOP
label_25a04c:
    // 0x25a04c: 0x0  nop
    ctx->pc = 0x25a04cu;
    // NOP
label_25a050:
    // 0x25a050: 0x377e  dsrl32      $a2, $zero, 29
    ctx->pc = 0x25a050u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) >> (32 + 29));
label_25a054:
    // 0x25a054: 0x5e20  .word       0x00005E20                   # add         $t3, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a054u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_25a058:
    // 0x25a058: 0x0  nop
    ctx->pc = 0x25a058u;
    // NOP
label_25a05c:
    // 0x25a05c: 0x0  nop
    ctx->pc = 0x25a05cu;
    // NOP
label_25a060:
    // 0x25a060: 0x378a  .word       0x0000378A                   # movz        $a2, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a060u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
label_25a064:
    // 0x25a064: 0x6b50  .word       0x00006B50                   # mfhi        $t5 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a064u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_25a068:
    // 0x25a068: 0x0  nop
    ctx->pc = 0x25a068u;
    // NOP
label_25a06c:
    // 0x25a06c: 0x0  nop
    ctx->pc = 0x25a06cu;
    // NOP
label_25a070:
    // 0x25a070: 0x3798  .word       0x00003798                   # mult        $a2, $zero, $zero # 00000780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25a070u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_25a074:
    // 0x25a074: 0x8950  .word       0x00008950                   # mfhi        $s1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a074u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_25a078:
    // 0x25a078: 0x0  nop
    ctx->pc = 0x25a078u;
    // NOP
label_25a07c:
    // 0x25a07c: 0x0  nop
    ctx->pc = 0x25a07cu;
    // NOP
label_25a080:
    // 0x25a080: 0x37aa  .word       0x000037AA                   # slt         $a2, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a080u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_25a084:
    // 0x25a084: 0x8120  .word       0x00008120                   # add         $s0, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a084u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25a088:
    // 0x25a088: 0x0  nop
    ctx->pc = 0x25a088u;
    // NOP
label_25a08c:
    // 0x25a08c: 0x0  nop
    ctx->pc = 0x25a08cu;
    // NOP
label_25a090:
    // 0x25a090: 0x37bb  dsra        $a2, $zero, 30
    ctx->pc = 0x25a090u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 0) >> 30);
label_25a094:
    // 0x25a094: 0x9350  .word       0x00009350                   # mfhi        $s2 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a094u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_25a098:
    // 0x25a098: 0x0  nop
    ctx->pc = 0x25a098u;
    // NOP
label_25a09c:
    // 0x25a09c: 0x0  nop
    ctx->pc = 0x25a09cu;
    // NOP
label_25a0a0:
    // 0x25a0a0: 0x37ce  .word       0x000037CE                   # INVALID     $zero, $zero, 0x37CE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a0a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x25A0A0 raw=0x000037CE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a0a4:
    // 0x25a0a4: 0x8390  .word       0x00008390                   # mfhi        $s0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a0a4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_25a0a8:
    // 0x25a0a8: 0x0  nop
    ctx->pc = 0x25a0a8u;
    // NOP
label_25a0ac:
    // 0x25a0ac: 0x0  nop
    ctx->pc = 0x25a0acu;
    // NOP
label_25a0b0:
    // 0x25a0b0: 0x37df  .word       0x000037DF                   # ddivu       $a2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a0b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x25A0B0 raw=0x000037DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a0b4:
    // 0x25a0b4: 0x6ae0  .word       0x00006AE0                   # add         $t5, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a0b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_25a0b8:
    // 0x25a0b8: 0x0  nop
    ctx->pc = 0x25a0b8u;
    // NOP
label_25a0bc:
    // 0x25a0bc: 0x0  nop
    ctx->pc = 0x25a0bcu;
    // NOP
label_25a0c0:
    // 0x25a0c0: 0x37ed  .word       0x000037ED                   # daddu       $a2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a0c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25a0c4:
    // 0x25a0c4: 0x7ac0  sll         $t7, $zero, 11
    ctx->pc = 0x25a0c4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_25a0c8:
    // 0x25a0c8: 0x0  nop
    ctx->pc = 0x25a0c8u;
    // NOP
label_25a0cc:
    // 0x25a0cc: 0x0  nop
    ctx->pc = 0x25a0ccu;
    // NOP
label_25a0d0:
    // 0x25a0d0: 0x37fd  .word       0x000037FD                   # INVALID     $zero, $zero, 0x37FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a0d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x25A0D0 raw=0x000037FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a0d4:
    // 0x25a0d4: 0x4f20  .word       0x00004F20                   # add         $t1, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a0d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_25a0d8:
    // 0x25a0d8: 0x0  nop
    ctx->pc = 0x25a0d8u;
    // NOP
label_25a0dc:
    // 0x25a0dc: 0x0  nop
    ctx->pc = 0x25a0dcu;
    // NOP
label_25a0e0:
    // 0x25a0e0: 0x3807  srav        $a3, $zero, $zero
    ctx->pc = 0x25a0e0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25a0e4:
    // 0x25a0e4: 0x7aa0  .word       0x00007AA0                   # add         $t7, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a0e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_25a0e8:
    // 0x25a0e8: 0x0  nop
    ctx->pc = 0x25a0e8u;
    // NOP
label_25a0ec:
    // 0x25a0ec: 0x0  nop
    ctx->pc = 0x25a0ecu;
    // NOP
label_25a0f0:
    // 0x25a0f0: 0x3817  dsrav       $a3, $zero, $zero
    ctx->pc = 0x25a0f0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25a0f4:
    // 0x25a0f4: 0x4d00  sll         $t1, $zero, 20
    ctx->pc = 0x25a0f4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_25a0f8:
    // 0x25a0f8: 0x0  nop
    ctx->pc = 0x25a0f8u;
    // NOP
label_25a0fc:
    // 0x25a0fc: 0x0  nop
    ctx->pc = 0x25a0fcu;
    // NOP
label_25a100:
    // 0x25a100: 0x3821  addu        $a3, $zero, $zero
    ctx->pc = 0x25a100u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25a104:
    // 0x25a104: 0x7090  .word       0x00007090                   # mfhi        $t6 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a104u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_25a108:
    // 0x25a108: 0x0  nop
    ctx->pc = 0x25a108u;
    // NOP
label_25a10c:
    // 0x25a10c: 0x0  nop
    ctx->pc = 0x25a10cu;
    // NOP
label_25a110:
    // 0x25a110: 0x3830  tge         $zero, $zero, 224
    ctx->pc = 0x25a110u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a114:
    // 0x25a114: 0x7de0  .word       0x00007DE0                   # add         $t7, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a114u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_25a118:
    // 0x25a118: 0x0  nop
    ctx->pc = 0x25a118u;
    // NOP
label_25a11c:
    // 0x25a11c: 0x0  nop
    ctx->pc = 0x25a11cu;
    // NOP
label_25a120:
    // 0x25a120: 0x3840  sll         $a3, $zero, 1
    ctx->pc = 0x25a120u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_25a124:
    // 0x25a124: 0x8b90  .word       0x00008B90                   # mfhi        $s1 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a124u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_25a128:
    // 0x25a128: 0x0  nop
    ctx->pc = 0x25a128u;
    // NOP
label_25a12c:
    // 0x25a12c: 0x0  nop
    ctx->pc = 0x25a12cu;
    // NOP
label_25a130:
    // 0x25a130: 0x3852  .word       0x00003852                   # mflo        $a3 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a130u;
    SET_GPR_U64(ctx, 7, ctx->lo);
label_25a134:
    // 0x25a134: 0x8080  sll         $s0, $zero, 2
    ctx->pc = 0x25a134u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_25a138:
    // 0x25a138: 0x0  nop
    ctx->pc = 0x25a138u;
    // NOP
label_25a13c:
    // 0x25a13c: 0x0  nop
    ctx->pc = 0x25a13cu;
    // NOP
label_25a140:
    // 0x25a140: 0x3863  .word       0x00003863                   # negu        $a3, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a140u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25a144:
    // 0x25a144: 0x87a0  .word       0x000087A0                   # add         $s0, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a144u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25a148:
    // 0x25a148: 0x0  nop
    ctx->pc = 0x25a148u;
    // NOP
label_25a14c:
    // 0x25a14c: 0x0  nop
    ctx->pc = 0x25a14cu;
    // NOP
label_25a150:
    // 0x25a150: 0x3874  teq         $zero, $zero, 225
    ctx->pc = 0x25a150u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a154:
    // 0x25a154: 0x5520  .word       0x00005520                   # add         $t2, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a154u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_25a158:
    // 0x25a158: 0x0  nop
    ctx->pc = 0x25a158u;
    // NOP
label_25a15c:
    // 0x25a15c: 0x0  nop
    ctx->pc = 0x25a15cu;
    // NOP
label_25a160:
    // 0x25a160: 0x387f  dsra32      $a3, $zero, 1
    ctx->pc = 0x25a160u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 0) >> (32 + 1));
label_25a164:
    // 0x25a164: 0x5230  tge         $zero, $zero, 328
    ctx->pc = 0x25a164u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a168:
    // 0x25a168: 0x0  nop
    ctx->pc = 0x25a168u;
    // NOP
label_25a16c:
    // 0x25a16c: 0x0  nop
    ctx->pc = 0x25a16cu;
    // NOP
label_25a170:
    // 0x25a170: 0x388a  .word       0x0000388A                   # movz        $a3, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a170u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_25a174:
    // 0x25a174: 0x8f90  .word       0x00008F90                   # mfhi        $s1 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a174u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_25a178:
    // 0x25a178: 0x0  nop
    ctx->pc = 0x25a178u;
    // NOP
label_25a17c:
    // 0x25a17c: 0x0  nop
    ctx->pc = 0x25a17cu;
    // NOP
label_25a180:
    // 0x25a180: 0x389c  .word       0x0000389C                   # dmult       $zero, $zero # 00003880 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a180u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x25A180 raw=0x0000389C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a184:
    // 0x25a184: 0x7cd0  .word       0x00007CD0                   # mfhi        $t7 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a184u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_25a188:
    // 0x25a188: 0x0  nop
    ctx->pc = 0x25a188u;
    // NOP
label_25a18c:
    // 0x25a18c: 0x0  nop
    ctx->pc = 0x25a18cu;
    // NOP
label_25a190:
    // 0x25a190: 0x38ac  .word       0x000038AC                   # dadd        $a3, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a190u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 7, r); }
label_25a194:
    // 0x25a194: 0x9ea0  .word       0x00009EA0                   # add         $s3, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a194u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_25a198:
    // 0x25a198: 0x0  nop
    ctx->pc = 0x25a198u;
    // NOP
label_25a19c:
    // 0x25a19c: 0x0  nop
    ctx->pc = 0x25a19cu;
    // NOP
label_25a1a0:
    // 0x25a1a0: 0x38c0  sll         $a3, $zero, 3
    ctx->pc = 0x25a1a0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_25a1a4:
    // 0x25a1a4: 0x7b70  tge         $zero, $zero, 493
    ctx->pc = 0x25a1a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a1a8:
    // 0x25a1a8: 0x0  nop
    ctx->pc = 0x25a1a8u;
    // NOP
label_25a1ac:
    // 0x25a1ac: 0x0  nop
    ctx->pc = 0x25a1acu;
    // NOP
label_25a1b0:
    // 0x25a1b0: 0x38d0  .word       0x000038D0                   # mfhi        $a3 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a1b0u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_25a1b4:
    // 0x25a1b4: 0x91f0  tge         $zero, $zero, 583
    ctx->pc = 0x25a1b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a1b8:
    // 0x25a1b8: 0x0  nop
    ctx->pc = 0x25a1b8u;
    // NOP
label_25a1bc:
    // 0x25a1bc: 0x0  nop
    ctx->pc = 0x25a1bcu;
    // NOP
label_25a1c0:
    // 0x25a1c0: 0x38e3  .word       0x000038E3                   # negu        $a3, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a1c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25a1c4:
    // 0x25a1c4: 0x6f40  sll         $t5, $zero, 29
    ctx->pc = 0x25a1c4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_25a1c8:
    // 0x25a1c8: 0x0  nop
    ctx->pc = 0x25a1c8u;
    // NOP
label_25a1cc:
    // 0x25a1cc: 0x0  nop
    ctx->pc = 0x25a1ccu;
    // NOP
label_25a1d0:
    // 0x25a1d0: 0x38f1  tgeu        $zero, $zero, 227
    ctx->pc = 0x25a1d0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a1d4:
    // 0x25a1d4: 0x8790  .word       0x00008790                   # mfhi        $s0 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a1d4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_25a1d8:
    // 0x25a1d8: 0x0  nop
    ctx->pc = 0x25a1d8u;
    // NOP
label_25a1dc:
    // 0x25a1dc: 0x0  nop
    ctx->pc = 0x25a1dcu;
    // NOP
label_25a1e0:
    // 0x25a1e0: 0x3902  srl         $a3, $zero, 4
    ctx->pc = 0x25a1e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 0), 4));
label_25a1e4:
    // 0x25a1e4: 0x6280  sll         $t4, $zero, 10
    ctx->pc = 0x25a1e4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_25a1e8:
    // 0x25a1e8: 0x0  nop
    ctx->pc = 0x25a1e8u;
    // NOP
label_25a1ec:
    // 0x25a1ec: 0x0  nop
    ctx->pc = 0x25a1ecu;
    // NOP
label_25a1f0:
    // 0x25a1f0: 0x390f  .word       0x0000390F                   # sync # 00003800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a1f0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_25a1f4:
    // 0x25a1f4: 0x68a0  .word       0x000068A0                   # add         $t5, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a1f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_25a1f8:
    // 0x25a1f8: 0x0  nop
    ctx->pc = 0x25a1f8u;
    // NOP
label_25a1fc:
    // 0x25a1fc: 0x0  nop
    ctx->pc = 0x25a1fcu;
    // NOP
label_25a200:
    // 0x25a200: 0x391d  .word       0x0000391D                   # dmultu      $zero, $zero # 00003900 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a200u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x25A200 raw=0x0000391D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a204:
    // 0x25a204: 0x80c0  sll         $s0, $zero, 3
    ctx->pc = 0x25a204u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_25a208:
    // 0x25a208: 0x0  nop
    ctx->pc = 0x25a208u;
    // NOP
label_25a20c:
    // 0x25a20c: 0x0  nop
    ctx->pc = 0x25a20cu;
    // NOP
label_25a210:
    // 0x25a210: 0x392e  .word       0x0000392E                   # dsub        $a3, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a210u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 7, r); }
label_25a214:
    // 0x25a214: 0x87d0  .word       0x000087D0                   # mfhi        $s0 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a214u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_25a218:
    // 0x25a218: 0x0  nop
    ctx->pc = 0x25a218u;
    // NOP
label_25a21c:
    // 0x25a21c: 0x0  nop
    ctx->pc = 0x25a21cu;
    // NOP
label_25a220:
    // 0x25a220: 0x393f  dsra32      $a3, $zero, 4
    ctx->pc = 0x25a220u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 0) >> (32 + 4));
label_25a224:
    // 0x25a224: 0x9800  sll         $s3, $zero, 0
    ctx->pc = 0x25a224u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_25a228:
    // 0x25a228: 0x0  nop
    ctx->pc = 0x25a228u;
    // NOP
label_25a22c:
    // 0x25a22c: 0x0  nop
    ctx->pc = 0x25a22cu;
    // NOP
label_25a230:
    // 0x25a230: 0x3952  .word       0x00003952                   # mflo        $a3 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a230u;
    SET_GPR_U64(ctx, 7, ctx->lo);
label_25a234:
    // 0x25a234: 0x5470  tge         $zero, $zero, 337
    ctx->pc = 0x25a234u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a238:
    // 0x25a238: 0x0  nop
    ctx->pc = 0x25a238u;
    // NOP
label_25a23c:
    // 0x25a23c: 0x0  nop
    ctx->pc = 0x25a23cu;
    // NOP
label_25a240:
    // 0x25a240: 0x395d  .word       0x0000395D                   # dmultu      $zero, $zero # 00003940 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a240u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x25A240 raw=0x0000395D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a244:
    // 0x25a244: 0x7120  .word       0x00007120                   # add         $t6, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a244u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_25a248:
    // 0x25a248: 0x0  nop
    ctx->pc = 0x25a248u;
    // NOP
label_25a24c:
    // 0x25a24c: 0x0  nop
    ctx->pc = 0x25a24cu;
    // NOP
label_25a250:
    // 0x25a250: 0x396c  .word       0x0000396C                   # dadd        $a3, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a250u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 7, r); }
label_25a254:
    // 0x25a254: 0x6500  sll         $t4, $zero, 20
    ctx->pc = 0x25a254u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_25a258:
    // 0x25a258: 0x0  nop
    ctx->pc = 0x25a258u;
    // NOP
label_25a25c:
    // 0x25a25c: 0x0  nop
    ctx->pc = 0x25a25cu;
    // NOP
label_25a260:
    // 0x25a260: 0x3979  .word       0x00003979                   # INVALID     $zero, $zero, 0x3979 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a260u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x25A260 raw=0x00003979"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a264:
    // 0x25a264: 0x6f90  .word       0x00006F90                   # mfhi        $t5 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a264u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_25a268:
    // 0x25a268: 0x0  nop
    ctx->pc = 0x25a268u;
    // NOP
label_25a26c:
    // 0x25a26c: 0x0  nop
    ctx->pc = 0x25a26cu;
    // NOP
label_25a270:
    // 0x25a270: 0x3987  .word       0x00003987                   # srav        $a3, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a270u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25a274:
    // 0x25a274: 0x6990  .word       0x00006990                   # mfhi        $t5 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a274u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_25a278:
    // 0x25a278: 0x0  nop
    ctx->pc = 0x25a278u;
    // NOP
label_25a27c:
    // 0x25a27c: 0x0  nop
    ctx->pc = 0x25a27cu;
    // NOP
label_25a280:
    // 0x25a280: 0x3995  .word       0x00003995                   # INVALID     $zero, $zero, 0x3995 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a280u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x25A280 raw=0x00003995"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a284:
    // 0x25a284: 0x8990  .word       0x00008990                   # mfhi        $s1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a284u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_25a288:
    // 0x25a288: 0x0  nop
    ctx->pc = 0x25a288u;
    // NOP
label_25a28c:
    // 0x25a28c: 0x0  nop
    ctx->pc = 0x25a28cu;
    // NOP
label_25a290:
    // 0x25a290: 0x39a7  .word       0x000039A7                   # not         $a3, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a290u;
    SET_GPR_U64(ctx, 7, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_25a294:
    // 0x25a294: 0x8190  .word       0x00008190                   # mfhi        $s0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a294u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_25a298:
    // 0x25a298: 0x0  nop
    ctx->pc = 0x25a298u;
    // NOP
label_25a29c:
    // 0x25a29c: 0x0  nop
    ctx->pc = 0x25a29cu;
    // NOP
label_25a2a0:
    // 0x25a2a0: 0x39b8  dsll        $a3, $zero, 6
    ctx->pc = 0x25a2a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) << 6);
label_25a2a4:
    // 0x25a2a4: 0x8d10  .word       0x00008D10                   # mfhi        $s1 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a2a4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_25a2a8:
    // 0x25a2a8: 0x0  nop
    ctx->pc = 0x25a2a8u;
    // NOP
label_25a2ac:
    // 0x25a2ac: 0x0  nop
    ctx->pc = 0x25a2acu;
    // NOP
label_25a2b0:
    // 0x25a2b0: 0x39ca  .word       0x000039CA                   # movz        $a3, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a2b0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_25a2b4:
    // 0x25a2b4: 0x6300  sll         $t4, $zero, 12
    ctx->pc = 0x25a2b4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_25a2b8:
    // 0x25a2b8: 0x0  nop
    ctx->pc = 0x25a2b8u;
    // NOP
label_25a2bc:
    // 0x25a2bc: 0x0  nop
    ctx->pc = 0x25a2bcu;
    // NOP
label_25a2c0:
    // 0x25a2c0: 0x39d7  .word       0x000039D7                   # dsrav       $a3, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a2c0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25a2c4:
    // 0x25a2c4: 0x7c20  .word       0x00007C20                   # add         $t7, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a2c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_25a2c8:
    // 0x25a2c8: 0x0  nop
    ctx->pc = 0x25a2c8u;
    // NOP
label_25a2cc:
    // 0x25a2cc: 0x0  nop
    ctx->pc = 0x25a2ccu;
    // NOP
label_25a2d0:
    // 0x25a2d0: 0x39e7  .word       0x000039E7                   # not         $a3, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a2d0u;
    SET_GPR_U64(ctx, 7, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_25a2d4:
    // 0x25a2d4: 0xa3a0  .word       0x0000A3A0                   # add         $s4, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a2d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_25a2d8:
    // 0x25a2d8: 0x0  nop
    ctx->pc = 0x25a2d8u;
    // NOP
label_25a2dc:
    // 0x25a2dc: 0x0  nop
    ctx->pc = 0x25a2dcu;
    // NOP
label_25a2e0:
    // 0x25a2e0: 0x39fc  dsll32      $a3, $zero, 7
    ctx->pc = 0x25a2e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) << (32 + 7));
label_25a2e4:
    // 0x25a2e4: 0x66c0  sll         $t4, $zero, 27
    ctx->pc = 0x25a2e4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_25a2e8:
    // 0x25a2e8: 0x0  nop
    ctx->pc = 0x25a2e8u;
    // NOP
label_25a2ec:
    // 0x25a2ec: 0x0  nop
    ctx->pc = 0x25a2ecu;
    // NOP
label_25a2f0:
    // 0x25a2f0: 0x3a09  .word       0x00003A09                   # jalr        $a3, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
label_25a2f4:
    if (ctx->pc == 0x25A2F4u) {
        ctx->pc = 0x25A2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A2F0u;
        // 0x25a2f4: 0x85c0  sll         $s0, $zero, 23 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A2F8u;
        goto label_25a2f8;
    }
    ctx->pc = 0x25A2F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 7, 0x25A2F8u);
        ctx->pc = 0x25A2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A2F0u;
        // 0x25a2f4: 0x85c0  sll         $s0, $zero, 23 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A2F0u, 0x25A2F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25A2F8u;
label_25a2f8:
    // 0x25a2f8: 0x0  nop
    ctx->pc = 0x25a2f8u;
    // NOP
label_25a2fc:
    // 0x25a2fc: 0x0  nop
    ctx->pc = 0x25a2fcu;
    // NOP
label_25a300:
    // 0x25a300: 0x3a1a  .word       0x00003A1A                   # div         $a3, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a300u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_25a304:
    // 0x25a304: 0x76e0  .word       0x000076E0                   # add         $t6, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a304u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_25a308:
    // 0x25a308: 0x0  nop
    ctx->pc = 0x25a308u;
    // NOP
label_25a30c:
    // 0x25a30c: 0x0  nop
    ctx->pc = 0x25a30cu;
    // NOP
label_25a310:
    // 0x25a310: 0x3a29  .word       0x00003A29                   # mtsa        $zero # 00003A00 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25a310u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_25a314:
    // 0x25a314: 0x7fc0  sll         $t7, $zero, 31
    ctx->pc = 0x25a314u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_25a318:
    // 0x25a318: 0x0  nop
    ctx->pc = 0x25a318u;
    // NOP
label_25a31c:
    // 0x25a31c: 0x0  nop
    ctx->pc = 0x25a31cu;
    // NOP
label_25a320:
    // 0x25a320: 0x3a39  .word       0x00003A39                   # INVALID     $zero, $zero, 0x3A39 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a320u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x25A320 raw=0x00003A39"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a324:
    // 0x25a324: 0x7cc0  sll         $t7, $zero, 19
    ctx->pc = 0x25a324u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_25a328:
    // 0x25a328: 0x0  nop
    ctx->pc = 0x25a328u;
    // NOP
label_25a32c:
    // 0x25a32c: 0x0  nop
    ctx->pc = 0x25a32cu;
    // NOP
label_25a330:
    // 0x25a330: 0x3a49  .word       0x00003A49                   # jalr        $a3, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
label_25a334:
    if (ctx->pc == 0x25A334u) {
        ctx->pc = 0x25A334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A330u;
        // 0x25a334: 0x7370  tge         $zero, $zero, 461 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A338u;
        goto label_25a338;
    }
    ctx->pc = 0x25A330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 7, 0x25A338u);
        ctx->pc = 0x25A334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A330u;
        // 0x25a334: 0x7370  tge         $zero, $zero, 461 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A330u, 0x25A338u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25A338u;
label_25a338:
    // 0x25a338: 0x0  nop
    ctx->pc = 0x25a338u;
    // NOP
label_25a33c:
    // 0x25a33c: 0x0  nop
    ctx->pc = 0x25a33cu;
    // NOP
label_25a340:
    // 0x25a340: 0x3a58  .word       0x00003A58                   # mult        $a3, $zero, $zero # 00000240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25a340u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_25a344:
    // 0x25a344: 0x86e0  .word       0x000086E0                   # add         $s0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a344u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25a348:
    // 0x25a348: 0x0  nop
    ctx->pc = 0x25a348u;
    // NOP
label_25a34c:
    // 0x25a34c: 0x0  nop
    ctx->pc = 0x25a34cu;
    // NOP
label_25a350:
    // 0x25a350: 0x3a69  .word       0x00003A69                   # mtsa        $zero # 00003A40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25a350u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_25a354:
    // 0x25a354: 0x6890  .word       0x00006890                   # mfhi        $t5 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a354u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_25a358:
    // 0x25a358: 0x0  nop
    ctx->pc = 0x25a358u;
    // NOP
label_25a35c:
    // 0x25a35c: 0x0  nop
    ctx->pc = 0x25a35cu;
    // NOP
label_25a360:
    // 0x25a360: 0x3a77  .word       0x00003A77                   # INVALID     $zero, $zero, 0x3A77 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a360u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x25A360 raw=0x00003A77"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a364:
    // 0x25a364: 0x7f40  sll         $t7, $zero, 29
    ctx->pc = 0x25a364u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_25a368:
    // 0x25a368: 0x0  nop
    ctx->pc = 0x25a368u;
    // NOP
label_25a36c:
    // 0x25a36c: 0x0  nop
    ctx->pc = 0x25a36cu;
    // NOP
label_25a370:
    // 0x25a370: 0x3a87  .word       0x00003A87                   # srav        $a3, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a370u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25a374:
    // 0x25a374: 0x77d0  .word       0x000077D0                   # mfhi        $t6 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a374u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_25a378:
    // 0x25a378: 0x0  nop
    ctx->pc = 0x25a378u;
    // NOP
label_25a37c:
    // 0x25a37c: 0x0  nop
    ctx->pc = 0x25a37cu;
    // NOP
label_25a380:
    // 0x25a380: 0x3a96  .word       0x00003A96                   # dsrlv       $a3, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a380u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25a384:
    // 0x25a384: 0x6000  sll         $t4, $zero, 0
    ctx->pc = 0x25a384u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_25a388:
    // 0x25a388: 0x0  nop
    ctx->pc = 0x25a388u;
    // NOP
label_25a38c:
    // 0x25a38c: 0x0  nop
    ctx->pc = 0x25a38cu;
    // NOP
label_25a390:
    // 0x25a390: 0x3aa2  .word       0x00003AA2                   # neg         $a3, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a390u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
label_25a394:
    // 0x25a394: 0x9720  .word       0x00009720                   # add         $s2, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a394u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_25a398:
    // 0x25a398: 0x0  nop
    ctx->pc = 0x25a398u;
    // NOP
label_25a39c:
    // 0x25a39c: 0x0  nop
    ctx->pc = 0x25a39cu;
    // NOP
label_25a3a0:
    // 0x25a3a0: 0x3ab5  .word       0x00003AB5                   # INVALID     $zero, $zero, 0x3AB5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a3a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x25A3A0 raw=0x00003AB5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a3a4:
    // 0x25a3a4: 0x7e90  .word       0x00007E90                   # mfhi        $t7 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a3a4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_25a3a8:
    // 0x25a3a8: 0x0  nop
    ctx->pc = 0x25a3a8u;
    // NOP
label_25a3ac:
    // 0x25a3ac: 0x0  nop
    ctx->pc = 0x25a3acu;
    // NOP
label_25a3b0:
    // 0x25a3b0: 0x3ac5  .word       0x00003AC5                   # INVALID     $zero, $zero, 0x3AC5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a3b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x25A3B0 raw=0x00003AC5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a3b4:
    // 0x25a3b4: 0x7690  .word       0x00007690                   # mfhi        $t6 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a3b4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_25a3b8:
    // 0x25a3b8: 0x0  nop
    ctx->pc = 0x25a3b8u;
    // NOP
label_25a3bc:
    // 0x25a3bc: 0x0  nop
    ctx->pc = 0x25a3bcu;
    // NOP
label_25a3c0:
    // 0x25a3c0: 0x3ad4  .word       0x00003AD4                   # dsllv       $a3, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a3c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_25a3c4:
    // 0x25a3c4: 0x8770  tge         $zero, $zero, 541
    ctx->pc = 0x25a3c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a3c8:
    // 0x25a3c8: 0x0  nop
    ctx->pc = 0x25a3c8u;
    // NOP
label_25a3cc:
    // 0x25a3cc: 0x0  nop
    ctx->pc = 0x25a3ccu;
    // NOP
label_25a3d0:
    // 0x25a3d0: 0x3ae5  .word       0x00003AE5                   # move        $a3, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a3d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_25a3d4:
    // 0x25a3d4: 0x6e70  tge         $zero, $zero, 441
    ctx->pc = 0x25a3d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a3d8:
    // 0x25a3d8: 0x0  nop
    ctx->pc = 0x25a3d8u;
    // NOP
label_25a3dc:
    // 0x25a3dc: 0x0  nop
    ctx->pc = 0x25a3dcu;
    // NOP
label_25a3e0:
    // 0x25a3e0: 0x3af3  tltu        $zero, $zero, 235
    ctx->pc = 0x25a3e0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a3e4:
    // 0x25a3e4: 0x8ae0  .word       0x00008AE0                   # add         $s1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a3e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_25a3e8:
    // 0x25a3e8: 0x0  nop
    ctx->pc = 0x25a3e8u;
    // NOP
label_25a3ec:
    // 0x25a3ec: 0x0  nop
    ctx->pc = 0x25a3ecu;
    // NOP
label_25a3f0:
    // 0x25a3f0: 0x3b05  .word       0x00003B05                   # INVALID     $zero, $zero, 0x3B05 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a3f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x25A3F0 raw=0x00003B05"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a3f4:
    // 0x25a3f4: 0x5bb0  tge         $zero, $zero, 366
    ctx->pc = 0x25a3f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a3f8:
    // 0x25a3f8: 0x0  nop
    ctx->pc = 0x25a3f8u;
    // NOP
label_25a3fc:
    // 0x25a3fc: 0x0  nop
    ctx->pc = 0x25a3fcu;
    // NOP
label_25a400:
    // 0x25a400: 0x3b11  .word       0x00003B11                   # mthi        $zero # 00003B00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a400u;
    ctx->hi = GPR_U64(ctx, 0);
label_25a404:
    // 0x25a404: 0xd7f0  tge         $zero, $zero, 863
    ctx->pc = 0x25a404u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a408:
    // 0x25a408: 0x0  nop
    ctx->pc = 0x25a408u;
    // NOP
label_25a40c:
    // 0x25a40c: 0x0  nop
    ctx->pc = 0x25a40cu;
    // NOP
label_25a410:
    // 0x25a410: 0x3b2c  .word       0x00003B2C                   # dadd        $a3, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a410u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 7, r); }
label_25a414:
    // 0x25a414: 0xabd0  .word       0x0000ABD0                   # mfhi        $s5 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a414u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_25a418:
    // 0x25a418: 0x0  nop
    ctx->pc = 0x25a418u;
    // NOP
label_25a41c:
    // 0x25a41c: 0x0  nop
    ctx->pc = 0x25a41cu;
    // NOP
label_25a420:
    // 0x25a420: 0x3b42  srl         $a3, $zero, 13
    ctx->pc = 0x25a420u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 0), 13));
label_25a424:
    // 0x25a424: 0x108d0  .word       0x000108D0                   # mfhi        $at # 000100C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a424u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_25a428:
    // 0x25a428: 0x0  nop
    ctx->pc = 0x25a428u;
    // NOP
label_25a42c:
    // 0x25a42c: 0x0  nop
    ctx->pc = 0x25a42cu;
    // NOP
label_25a430:
    // 0x25a430: 0x3b64  .word       0x00003B64                   # and         $a3, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a430u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_25a434:
    // 0x25a434: 0xefc0  sll         $sp, $zero, 31
    ctx->pc = 0x25a434u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_25a438:
    // 0x25a438: 0x0  nop
    ctx->pc = 0x25a438u;
    // NOP
label_25a43c:
    // 0x25a43c: 0x0  nop
    ctx->pc = 0x25a43cu;
    // NOP
label_25a440:
    // 0x25a440: 0x3b82  srl         $a3, $zero, 14
    ctx->pc = 0x25a440u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 0), 14));
label_25a444:
    // 0x25a444: 0x86e0  .word       0x000086E0                   # add         $s0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a444u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25a448:
    // 0x25a448: 0x0  nop
    ctx->pc = 0x25a448u;
    // NOP
label_25a44c:
    // 0x25a44c: 0x0  nop
    ctx->pc = 0x25a44cu;
    // NOP
label_25a450:
    // 0x25a450: 0x3b93  .word       0x00003B93                   # mtlo        $zero # 00003B80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a450u;
    ctx->lo = GPR_U64(ctx, 0);
label_25a454:
    // 0x25a454: 0xa030  tge         $zero, $zero, 640
    ctx->pc = 0x25a454u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a458:
    // 0x25a458: 0x0  nop
    ctx->pc = 0x25a458u;
    // NOP
label_25a45c:
    // 0x25a45c: 0x0  nop
    ctx->pc = 0x25a45cu;
    // NOP
label_25a460:
    // 0x25a460: 0x3ba8  .word       0x00003BA8                   # mfsa        $a3 # 00000380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25a460u;
    SET_GPR_U32(ctx, 7, ctx->sa);
label_25a464:
    // 0x25a464: 0xd310  .word       0x0000D310                   # mfhi        $k0 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a464u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_25a468:
    // 0x25a468: 0x0  nop
    ctx->pc = 0x25a468u;
    // NOP
label_25a46c:
    // 0x25a46c: 0x0  nop
    ctx->pc = 0x25a46cu;
    // NOP
label_25a470:
    // 0x25a470: 0x3bc3  sra         $a3, $zero, 15
    ctx->pc = 0x25a470u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 0), 15));
label_25a474:
    // 0x25a474: 0xb640  sll         $s6, $zero, 25
    ctx->pc = 0x25a474u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_25a478:
    // 0x25a478: 0x0  nop
    ctx->pc = 0x25a478u;
    // NOP
label_25a47c:
    // 0x25a47c: 0x0  nop
    ctx->pc = 0x25a47cu;
    // NOP
label_25a480:
    // 0x25a480: 0x3bda  .word       0x00003BDA                   # div         $a3, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a480u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_25a484:
    // 0x25a484: 0xd7e0  .word       0x0000D7E0                   # add         $k0, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a484u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_25a488:
    // 0x25a488: 0x0  nop
    ctx->pc = 0x25a488u;
    // NOP
label_25a48c:
    // 0x25a48c: 0x0  nop
    ctx->pc = 0x25a48cu;
    // NOP
label_25a490:
    // 0x25a490: 0x3bf5  .word       0x00003BF5                   # INVALID     $zero, $zero, 0x3BF5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a490u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x25A490 raw=0x00003BF5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a494:
    // 0x25a494: 0xba80  sll         $s7, $zero, 10
    ctx->pc = 0x25a494u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_25a498:
    // 0x25a498: 0x0  nop
    ctx->pc = 0x25a498u;
    // NOP
label_25a49c:
    // 0x25a49c: 0x0  nop
    ctx->pc = 0x25a49cu;
    // NOP
label_25a4a0:
    // 0x25a4a0: 0x3c0d  break       0, 240
    ctx->pc = 0x25a4a0u;
    runtime->handleBreak(rdram, ctx);
label_25a4a4:
    // 0x25a4a4: 0x135b0  tge         $zero, $at, 214
    ctx->pc = 0x25a4a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_25a4a8:
    // 0x25a4a8: 0x0  nop
    ctx->pc = 0x25a4a8u;
    // NOP
label_25a4ac:
    // 0x25a4ac: 0x0  nop
    ctx->pc = 0x25a4acu;
    // NOP
label_25a4b0:
    // 0x25a4b0: 0x3c34  teq         $zero, $zero, 240
    ctx->pc = 0x25a4b0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a4b4:
    // 0x25a4b4: 0x11550  .word       0x00011550                   # mfhi        $v0 # 00010540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a4b4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_25a4b8:
    // 0x25a4b8: 0x0  nop
    ctx->pc = 0x25a4b8u;
    // NOP
label_25a4bc:
    // 0x25a4bc: 0x0  nop
    ctx->pc = 0x25a4bcu;
    // NOP
label_25a4c0:
    // 0x25a4c0: 0x3c57  .word       0x00003C57                   # dsrav       $a3, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a4c0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25a4c4:
    // 0x25a4c4: 0xe770  tge         $zero, $zero, 925
    ctx->pc = 0x25a4c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a4c8:
    // 0x25a4c8: 0x0  nop
    ctx->pc = 0x25a4c8u;
    // NOP
label_25a4cc:
    // 0x25a4cc: 0x0  nop
    ctx->pc = 0x25a4ccu;
    // NOP
label_25a4d0:
    // 0x25a4d0: 0x3c74  teq         $zero, $zero, 241
    ctx->pc = 0x25a4d0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a4d4:
    // 0x25a4d4: 0xa920  .word       0x0000A920                   # add         $s5, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a4d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_25a4d8:
    // 0x25a4d8: 0x0  nop
    ctx->pc = 0x25a4d8u;
    // NOP
label_25a4dc:
    // 0x25a4dc: 0x0  nop
    ctx->pc = 0x25a4dcu;
    // NOP
label_25a4e0:
    // 0x25a4e0: 0x3c8a  .word       0x00003C8A                   # movz        $a3, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a4e0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_25a4e4:
    // 0x25a4e4: 0x13120  .word       0x00013120                   # add         $a2, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a4e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_25a4e8:
    // 0x25a4e8: 0x0  nop
    ctx->pc = 0x25a4e8u;
    // NOP
label_25a4ec:
    // 0x25a4ec: 0x0  nop
    ctx->pc = 0x25a4ecu;
    // NOP
label_25a4f0:
    // 0x25a4f0: 0x3cb1  tgeu        $zero, $zero, 242
    ctx->pc = 0x25a4f0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a4f4:
    // 0x25a4f4: 0xafe0  .word       0x0000AFE0                   # add         $s5, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a4f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_25a4f8:
    // 0x25a4f8: 0x0  nop
    ctx->pc = 0x25a4f8u;
    // NOP
label_25a4fc:
    // 0x25a4fc: 0x0  nop
    ctx->pc = 0x25a4fcu;
    // NOP
label_25a500:
    // 0x25a500: 0x3cc7  .word       0x00003CC7                   # srav        $a3, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a500u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25a504:
    // 0x25a504: 0xcc70  tge         $zero, $zero, 817
    ctx->pc = 0x25a504u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a508:
    // 0x25a508: 0x0  nop
    ctx->pc = 0x25a508u;
    // NOP
label_25a50c:
    // 0x25a50c: 0x0  nop
    ctx->pc = 0x25a50cu;
    // NOP
label_25a510:
    // 0x25a510: 0x3ce1  .word       0x00003CE1                   # addu        $a3, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a510u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25a514:
    // 0x25a514: 0xb5b0  tge         $zero, $zero, 726
    ctx->pc = 0x25a514u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a518:
    // 0x25a518: 0x0  nop
    ctx->pc = 0x25a518u;
    // NOP
label_25a51c:
    // 0x25a51c: 0x0  nop
    ctx->pc = 0x25a51cu;
    // NOP
label_25a520:
    // 0x25a520: 0x3cf8  dsll        $a3, $zero, 19
    ctx->pc = 0x25a520u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) << 19);
label_25a524:
    // 0x25a524: 0xfb30  tge         $zero, $zero, 1004
    ctx->pc = 0x25a524u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a528:
    // 0x25a528: 0x0  nop
    ctx->pc = 0x25a528u;
    // NOP
label_25a52c:
    // 0x25a52c: 0x0  nop
    ctx->pc = 0x25a52cu;
    // NOP
label_25a530:
    // 0x25a530: 0x3d18  .word       0x00003D18                   # mult        $a3, $zero, $zero # 00000500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25a530u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_25a534:
    // 0x25a534: 0xc4c0  sll         $t8, $zero, 19
    ctx->pc = 0x25a534u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_25a538:
    // 0x25a538: 0x0  nop
    ctx->pc = 0x25a538u;
    // NOP
label_25a53c:
    // 0x25a53c: 0x0  nop
    ctx->pc = 0x25a53cu;
    // NOP
label_25a540:
    // 0x25a540: 0x3d31  tgeu        $zero, $zero, 244
    ctx->pc = 0x25a540u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a544:
    // 0x25a544: 0xb300  sll         $s6, $zero, 12
    ctx->pc = 0x25a544u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_25a548:
    // 0x25a548: 0x0  nop
    ctx->pc = 0x25a548u;
    // NOP
label_25a54c:
    // 0x25a54c: 0x0  nop
    ctx->pc = 0x25a54cu;
    // NOP
label_25a550:
    // 0x25a550: 0x3d48  .word       0x00003D48                   # jr          $zero # 00003D40 <InstrIdType: CPU_SPECIAL>
label_25a554:
    if (ctx->pc == 0x25A554u) {
        ctx->pc = 0x25A554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A550u;
        // 0x25a554: 0xb520  .word       0x0000B520                   # add         $s6, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A558u;
        goto label_25a558;
    }
    ctx->pc = 0x25A550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x25A554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A550u;
        // 0x25a554: 0xb520  .word       0x0000B520                   # add         $s6, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A550u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25A558u;
label_25a558:
    // 0x25a558: 0x0  nop
    ctx->pc = 0x25a558u;
    // NOP
label_25a55c:
    // 0x25a55c: 0x0  nop
    ctx->pc = 0x25a55cu;
    // NOP
label_25a560:
    // 0x25a560: 0x3d5f  .word       0x00003D5F                   # ddivu       $a3, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a560u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x25A560 raw=0x00003D5F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a564:
    // 0x25a564: 0xc890  .word       0x0000C890                   # mfhi        $t9 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a564u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_25a568:
    // 0x25a568: 0x0  nop
    ctx->pc = 0x25a568u;
    // NOP
label_25a56c:
    // 0x25a56c: 0x0  nop
    ctx->pc = 0x25a56cu;
    // NOP
label_25a570:
    // 0x25a570: 0x3d79  .word       0x00003D79                   # INVALID     $zero, $zero, 0x3D79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a570u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x25A570 raw=0x00003D79"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a574:
    // 0x25a574: 0x10700  sll         $zero, $at, 28
    ctx->pc = 0x25a574u;
    
label_25a578:
    // 0x25a578: 0x0  nop
    ctx->pc = 0x25a578u;
    // NOP
label_25a57c:
    // 0x25a57c: 0x0  nop
    ctx->pc = 0x25a57cu;
    // NOP
label_25a580:
    // 0x25a580: 0x3d9a  .word       0x00003D9A                   # div         $a3, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a580u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_25a584:
    // 0x25a584: 0xb1c0  sll         $s6, $zero, 7
    ctx->pc = 0x25a584u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_25a588:
    // 0x25a588: 0x0  nop
    ctx->pc = 0x25a588u;
    // NOP
label_25a58c:
    // 0x25a58c: 0x0  nop
    ctx->pc = 0x25a58cu;
    // NOP
label_25a590:
    // 0x25a590: 0x3db1  tgeu        $zero, $zero, 246
    ctx->pc = 0x25a590u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a594:
    // 0x25a594: 0xd690  .word       0x0000D690                   # mfhi        $k0 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a594u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_25a598:
    // 0x25a598: 0x0  nop
    ctx->pc = 0x25a598u;
    // NOP
label_25a59c:
    // 0x25a59c: 0x0  nop
    ctx->pc = 0x25a59cu;
    // NOP
label_25a5a0:
    // 0x25a5a0: 0x3dcc  syscall     247
    ctx->pc = 0x25a5a0u;
    ctx->pc = 0x25A5A4u;
runtime->handleSyscall(rdram, ctx, 0xF7u);
label_25a5a4:
    // 0x25a5a4: 0xc000  sll         $t8, $zero, 0
    ctx->pc = 0x25a5a4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_25a5a8:
    // 0x25a5a8: 0x0  nop
    ctx->pc = 0x25a5a8u;
    // NOP
label_25a5ac:
    // 0x25a5ac: 0x0  nop
    ctx->pc = 0x25a5acu;
    // NOP
label_25a5b0:
    // 0x25a5b0: 0x3de4  .word       0x00003DE4                   # and         $a3, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a5b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_25a5b4:
    // 0x25a5b4: 0xe3e0  .word       0x0000E3E0                   # add         $gp, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a5b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_25a5b8:
    // 0x25a5b8: 0x0  nop
    ctx->pc = 0x25a5b8u;
    // NOP
label_25a5bc:
    // 0x25a5bc: 0x0  nop
    ctx->pc = 0x25a5bcu;
    // NOP
label_25a5c0:
    // 0x25a5c0: 0x3e01  .word       0x00003E01                   # INVALID     $zero, $zero, 0x3E01 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a5c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x25A5C0 raw=0x00003E01"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a5c4:
    // 0x25a5c4: 0xc970  tge         $zero, $zero, 805
    ctx->pc = 0x25a5c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a5c8:
    // 0x25a5c8: 0x0  nop
    ctx->pc = 0x25a5c8u;
    // NOP
label_25a5cc:
    // 0x25a5cc: 0x0  nop
    ctx->pc = 0x25a5ccu;
    // NOP
label_25a5d0:
    // 0x25a5d0: 0x3e1b  .word       0x00003E1B                   # divu        $a3, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a5d0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_25a5d4:
    // 0x25a5d4: 0xce00  sll         $t9, $zero, 24
    ctx->pc = 0x25a5d4u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_25a5d8:
    // 0x25a5d8: 0x0  nop
    ctx->pc = 0x25a5d8u;
    // NOP
label_25a5dc:
    // 0x25a5dc: 0x0  nop
    ctx->pc = 0x25a5dcu;
    // NOP
label_25a5e0:
    // 0x25a5e0: 0x3e35  .word       0x00003E35                   # INVALID     $zero, $zero, 0x3E35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a5e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x25A5E0 raw=0x00003E35"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a5e4:
    // 0x25a5e4: 0xfc80  sll         $ra, $zero, 18
    ctx->pc = 0x25a5e4u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_25a5e8:
    // 0x25a5e8: 0x0  nop
    ctx->pc = 0x25a5e8u;
    // NOP
label_25a5ec:
    // 0x25a5ec: 0x0  nop
    ctx->pc = 0x25a5ecu;
    // NOP
label_25a5f0:
    // 0x25a5f0: 0x3e55  .word       0x00003E55                   # INVALID     $zero, $zero, 0x3E55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a5f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x25A5F0 raw=0x00003E55"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a5f4:
    // 0x25a5f4: 0xf9d0  .word       0x0000F9D0                   # mfhi        $ra # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a5f4u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_25a5f8:
    // 0x25a5f8: 0x0  nop
    ctx->pc = 0x25a5f8u;
    // NOP
label_25a5fc:
    // 0x25a5fc: 0x0  nop
    ctx->pc = 0x25a5fcu;
    // NOP
label_25a600:
    // 0x25a600: 0x3e75  .word       0x00003E75                   # INVALID     $zero, $zero, 0x3E75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a600u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x25A600 raw=0x00003E75"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a604:
    // 0x25a604: 0xf950  .word       0x0000F950                   # mfhi        $ra # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a604u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_25a608:
    // 0x25a608: 0x0  nop
    ctx->pc = 0x25a608u;
    // NOP
label_25a60c:
    // 0x25a60c: 0x0  nop
    ctx->pc = 0x25a60cu;
    // NOP
label_25a610:
    // 0x25a610: 0x3e95  .word       0x00003E95                   # INVALID     $zero, $zero, 0x3E95 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a610u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x25A610 raw=0x00003E95"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a614:
    // 0x25a614: 0x117a0  .word       0x000117A0                   # add         $v0, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a614u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_25a618:
    // 0x25a618: 0x0  nop
    ctx->pc = 0x25a618u;
    // NOP
label_25a61c:
    // 0x25a61c: 0x0  nop
    ctx->pc = 0x25a61cu;
    // NOP
label_25a620:
    // 0x25a620: 0x3eb8  dsll        $a3, $zero, 26
    ctx->pc = 0x25a620u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) << 26);
label_25a624:
    // 0x25a624: 0x113e0  .word       0x000113E0                   # add         $v0, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a624u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_25a628:
    // 0x25a628: 0x0  nop
    ctx->pc = 0x25a628u;
    // NOP
label_25a62c:
    // 0x25a62c: 0x0  nop
    ctx->pc = 0x25a62cu;
    // NOP
label_25a630:
    // 0x25a630: 0x3edb  .word       0x00003EDB                   # divu        $a3, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a630u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_25a634:
    // 0x25a634: 0x12a70  tge         $zero, $at, 169
    ctx->pc = 0x25a634u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_25a638:
    // 0x25a638: 0x0  nop
    ctx->pc = 0x25a638u;
    // NOP
label_25a63c:
    // 0x25a63c: 0x0  nop
    ctx->pc = 0x25a63cu;
    // NOP
label_25a640:
    // 0x25a640: 0x3f01  .word       0x00003F01                   # INVALID     $zero, $zero, 0x3F01 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a640u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x25A640 raw=0x00003F01"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a644:
    // 0x25a644: 0x125a0  .word       0x000125A0                   # add         $a0, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a644u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_25a648:
    // 0x25a648: 0x0  nop
    ctx->pc = 0x25a648u;
    // NOP
label_25a64c:
    // 0x25a64c: 0x0  nop
    ctx->pc = 0x25a64cu;
    // NOP
label_25a650:
    // 0x25a650: 0x3f26  .word       0x00003F26                   # xor         $a3, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a650u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_25a654:
    // 0x25a654: 0xfe10  .word       0x0000FE10                   # mfhi        $ra # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a654u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_25a658:
    // 0x25a658: 0x0  nop
    ctx->pc = 0x25a658u;
    // NOP
label_25a65c:
    // 0x25a65c: 0x0  nop
    ctx->pc = 0x25a65cu;
    // NOP
label_25a660:
    // 0x25a660: 0x3f46  .word       0x00003F46                   # srlv        $a3, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a660u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25a664:
    // 0x25a664: 0xdfe0  .word       0x0000DFE0                   # add         $k1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a664u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_25a668:
    // 0x25a668: 0x0  nop
    ctx->pc = 0x25a668u;
    // NOP
label_25a66c:
    // 0x25a66c: 0x0  nop
    ctx->pc = 0x25a66cu;
    // NOP
label_25a670:
    // 0x25a670: 0x3f62  .word       0x00003F62                   # neg         $a3, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a670u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
label_25a674:
    // 0x25a674: 0x10700  sll         $zero, $at, 28
    ctx->pc = 0x25a674u;
    
label_25a678:
    // 0x25a678: 0x0  nop
    ctx->pc = 0x25a678u;
    // NOP
label_25a67c:
    // 0x25a67c: 0x0  nop
    ctx->pc = 0x25a67cu;
    // NOP
label_25a680:
    // 0x25a680: 0x3f83  sra         $a3, $zero, 30
    ctx->pc = 0x25a680u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 0), 30));
label_25a684:
    // 0x25a684: 0xd310  .word       0x0000D310                   # mfhi        $k0 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a684u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_25a688:
    // 0x25a688: 0x0  nop
    ctx->pc = 0x25a688u;
    // NOP
label_25a68c:
    // 0x25a68c: 0x0  nop
    ctx->pc = 0x25a68cu;
    // NOP
label_25a690:
    // 0x25a690: 0x3f9e  .word       0x00003F9E                   # ddiv        $a3, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a690u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x25A690 raw=0x00003F9E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a694:
    // 0x25a694: 0x7950  .word       0x00007950                   # mfhi        $t7 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a694u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_25a698:
    // 0x25a698: 0x0  nop
    ctx->pc = 0x25a698u;
    // NOP
label_25a69c:
    // 0x25a69c: 0x0  nop
    ctx->pc = 0x25a69cu;
    // NOP
label_25a6a0:
    // 0x25a6a0: 0x3fae  .word       0x00003FAE                   # dsub        $a3, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a6a0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 7, r); }
label_25a6a4:
    // 0x25a6a4: 0x8fe0  .word       0x00008FE0                   # add         $s1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a6a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_25a6a8:
    // 0x25a6a8: 0x0  nop
    ctx->pc = 0x25a6a8u;
    // NOP
label_25a6ac:
    // 0x25a6ac: 0x0  nop
    ctx->pc = 0x25a6acu;
    // NOP
label_25a6b0:
    // 0x25a6b0: 0x3fc0  sll         $a3, $zero, 31
    ctx->pc = 0x25a6b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_25a6b4:
    // 0x25a6b4: 0x70d0  .word       0x000070D0                   # mfhi        $t6 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a6b4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    ctx->pc = 0x25a6b8u;
    return;
}

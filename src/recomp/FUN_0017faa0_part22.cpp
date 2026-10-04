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


void FUN_0017faa0_part22(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x189eb0u: goto label_189eb0;
        case 0x189eb4u: goto label_189eb4;
        case 0x189eb8u: goto label_189eb8;
        case 0x189ebcu: goto label_189ebc;
        case 0x189ec0u: goto label_189ec0;
        case 0x189ec4u: goto label_189ec4;
        case 0x189ec8u: goto label_189ec8;
        case 0x189eccu: goto label_189ecc;
        case 0x189ed0u: goto label_189ed0;
        case 0x189ed4u: goto label_189ed4;
        case 0x189ed8u: goto label_189ed8;
        case 0x189edcu: goto label_189edc;
        case 0x189ee0u: goto label_189ee0;
        case 0x189ee4u: goto label_189ee4;
        case 0x189ee8u: goto label_189ee8;
        case 0x189eecu: goto label_189eec;
        case 0x189ef0u: goto label_189ef0;
        case 0x189ef4u: goto label_189ef4;
        case 0x189ef8u: goto label_189ef8;
        case 0x189efcu: goto label_189efc;
        case 0x189f00u: goto label_189f00;
        case 0x189f04u: goto label_189f04;
        case 0x189f08u: goto label_189f08;
        case 0x189f0cu: goto label_189f0c;
        case 0x189f10u: goto label_189f10;
        case 0x189f14u: goto label_189f14;
        case 0x189f18u: goto label_189f18;
        case 0x189f1cu: goto label_189f1c;
        case 0x189f20u: goto label_189f20;
        case 0x189f24u: goto label_189f24;
        case 0x189f28u: goto label_189f28;
        case 0x189f2cu: goto label_189f2c;
        case 0x189f30u: goto label_189f30;
        case 0x189f34u: goto label_189f34;
        case 0x189f38u: goto label_189f38;
        case 0x189f3cu: goto label_189f3c;
        case 0x189f40u: goto label_189f40;
        case 0x189f44u: goto label_189f44;
        case 0x189f48u: goto label_189f48;
        case 0x189f4cu: goto label_189f4c;
        case 0x189f50u: goto label_189f50;
        case 0x189f54u: goto label_189f54;
        case 0x189f58u: goto label_189f58;
        case 0x189f5cu: goto label_189f5c;
        case 0x189f60u: goto label_189f60;
        case 0x189f64u: goto label_189f64;
        case 0x189f68u: goto label_189f68;
        case 0x189f6cu: goto label_189f6c;
        case 0x189f70u: goto label_189f70;
        case 0x189f74u: goto label_189f74;
        case 0x189f78u: goto label_189f78;
        case 0x189f7cu: goto label_189f7c;
        case 0x189f80u: goto label_189f80;
        case 0x189f84u: goto label_189f84;
        case 0x189f88u: goto label_189f88;
        case 0x189f8cu: goto label_189f8c;
        case 0x189f90u: goto label_189f90;
        case 0x189f94u: goto label_189f94;
        case 0x189f98u: goto label_189f98;
        case 0x189f9cu: goto label_189f9c;
        case 0x189fa0u: goto label_189fa0;
        case 0x189fa4u: goto label_189fa4;
        case 0x189fa8u: goto label_189fa8;
        case 0x189facu: goto label_189fac;
        case 0x189fb0u: goto label_189fb0;
        case 0x189fb4u: goto label_189fb4;
        case 0x189fb8u: goto label_189fb8;
        case 0x189fbcu: goto label_189fbc;
        case 0x189fc0u: goto label_189fc0;
        case 0x189fc4u: goto label_189fc4;
        case 0x189fc8u: goto label_189fc8;
        case 0x189fccu: goto label_189fcc;
        case 0x189fd0u: goto label_189fd0;
        case 0x189fd4u: goto label_189fd4;
        case 0x189fd8u: goto label_189fd8;
        case 0x189fdcu: goto label_189fdc;
        case 0x189fe0u: goto label_189fe0;
        case 0x189fe4u: goto label_189fe4;
        case 0x189fe8u: goto label_189fe8;
        case 0x189fecu: goto label_189fec;
        case 0x189ff0u: goto label_189ff0;
        case 0x189ff4u: goto label_189ff4;
        case 0x189ff8u: goto label_189ff8;
        case 0x189ffcu: goto label_189ffc;
        case 0x18a000u: goto label_18a000;
        case 0x18a004u: goto label_18a004;
        case 0x18a008u: goto label_18a008;
        case 0x18a00cu: goto label_18a00c;
        case 0x18a010u: goto label_18a010;
        case 0x18a014u: goto label_18a014;
        case 0x18a018u: goto label_18a018;
        case 0x18a01cu: goto label_18a01c;
        case 0x18a020u: goto label_18a020;
        case 0x18a024u: goto label_18a024;
        case 0x18a028u: goto label_18a028;
        case 0x18a02cu: goto label_18a02c;
        case 0x18a030u: goto label_18a030;
        case 0x18a034u: goto label_18a034;
        case 0x18a038u: goto label_18a038;
        case 0x18a03cu: goto label_18a03c;
        case 0x18a040u: goto label_18a040;
        case 0x18a044u: goto label_18a044;
        case 0x18a048u: goto label_18a048;
        case 0x18a04cu: goto label_18a04c;
        case 0x18a050u: goto label_18a050;
        case 0x18a054u: goto label_18a054;
        case 0x18a058u: goto label_18a058;
        case 0x18a05cu: goto label_18a05c;
        case 0x18a060u: goto label_18a060;
        case 0x18a064u: goto label_18a064;
        case 0x18a068u: goto label_18a068;
        case 0x18a06cu: goto label_18a06c;
        case 0x18a070u: goto label_18a070;
        case 0x18a074u: goto label_18a074;
        case 0x18a078u: goto label_18a078;
        case 0x18a07cu: goto label_18a07c;
        case 0x18a080u: goto label_18a080;
        case 0x18a084u: goto label_18a084;
        case 0x18a088u: goto label_18a088;
        case 0x18a08cu: goto label_18a08c;
        case 0x18a090u: goto label_18a090;
        case 0x18a094u: goto label_18a094;
        case 0x18a098u: goto label_18a098;
        case 0x18a09cu: goto label_18a09c;
        case 0x18a0a0u: goto label_18a0a0;
        case 0x18a0a4u: goto label_18a0a4;
        case 0x18a0a8u: goto label_18a0a8;
        case 0x18a0acu: goto label_18a0ac;
        case 0x18a0b0u: goto label_18a0b0;
        case 0x18a0b4u: goto label_18a0b4;
        case 0x18a0b8u: goto label_18a0b8;
        case 0x18a0bcu: goto label_18a0bc;
        case 0x18a0c0u: goto label_18a0c0;
        case 0x18a0c4u: goto label_18a0c4;
        case 0x18a0c8u: goto label_18a0c8;
        case 0x18a0ccu: goto label_18a0cc;
        case 0x18a0d0u: goto label_18a0d0;
        case 0x18a0d4u: goto label_18a0d4;
        case 0x18a0d8u: goto label_18a0d8;
        case 0x18a0dcu: goto label_18a0dc;
        case 0x18a0e0u: goto label_18a0e0;
        case 0x18a0e4u: goto label_18a0e4;
        case 0x18a0e8u: goto label_18a0e8;
        case 0x18a0ecu: goto label_18a0ec;
        case 0x18a0f0u: goto label_18a0f0;
        case 0x18a0f4u: goto label_18a0f4;
        case 0x18a0f8u: goto label_18a0f8;
        case 0x18a0fcu: goto label_18a0fc;
        case 0x18a100u: goto label_18a100;
        case 0x18a104u: goto label_18a104;
        case 0x18a108u: goto label_18a108;
        case 0x18a10cu: goto label_18a10c;
        case 0x18a110u: goto label_18a110;
        case 0x18a114u: goto label_18a114;
        case 0x18a118u: goto label_18a118;
        case 0x18a11cu: goto label_18a11c;
        case 0x18a120u: goto label_18a120;
        case 0x18a124u: goto label_18a124;
        case 0x18a128u: goto label_18a128;
        case 0x18a12cu: goto label_18a12c;
        case 0x18a130u: goto label_18a130;
        case 0x18a134u: goto label_18a134;
        case 0x18a138u: goto label_18a138;
        case 0x18a13cu: goto label_18a13c;
        case 0x18a140u: goto label_18a140;
        case 0x18a144u: goto label_18a144;
        case 0x18a148u: goto label_18a148;
        case 0x18a14cu: goto label_18a14c;
        case 0x18a150u: goto label_18a150;
        case 0x18a154u: goto label_18a154;
        case 0x18a158u: goto label_18a158;
        case 0x18a15cu: goto label_18a15c;
        case 0x18a160u: goto label_18a160;
        case 0x18a164u: goto label_18a164;
        case 0x18a168u: goto label_18a168;
        case 0x18a16cu: goto label_18a16c;
        case 0x18a170u: goto label_18a170;
        case 0x18a174u: goto label_18a174;
        case 0x18a178u: goto label_18a178;
        case 0x18a17cu: goto label_18a17c;
        case 0x18a180u: goto label_18a180;
        case 0x18a184u: goto label_18a184;
        case 0x18a188u: goto label_18a188;
        case 0x18a18cu: goto label_18a18c;
        case 0x18a190u: goto label_18a190;
        case 0x18a194u: goto label_18a194;
        case 0x18a198u: goto label_18a198;
        case 0x18a19cu: goto label_18a19c;
        case 0x18a1a0u: goto label_18a1a0;
        case 0x18a1a4u: goto label_18a1a4;
        case 0x18a1a8u: goto label_18a1a8;
        case 0x18a1acu: goto label_18a1ac;
        case 0x18a1b0u: goto label_18a1b0;
        case 0x18a1b4u: goto label_18a1b4;
        case 0x18a1b8u: goto label_18a1b8;
        case 0x18a1bcu: goto label_18a1bc;
        case 0x18a1c0u: goto label_18a1c0;
        case 0x18a1c4u: goto label_18a1c4;
        case 0x18a1c8u: goto label_18a1c8;
        case 0x18a1ccu: goto label_18a1cc;
        case 0x18a1d0u: goto label_18a1d0;
        case 0x18a1d4u: goto label_18a1d4;
        case 0x18a1d8u: goto label_18a1d8;
        case 0x18a1dcu: goto label_18a1dc;
        case 0x18a1e0u: goto label_18a1e0;
        case 0x18a1e4u: goto label_18a1e4;
        case 0x18a1e8u: goto label_18a1e8;
        case 0x18a1ecu: goto label_18a1ec;
        case 0x18a1f0u: goto label_18a1f0;
        case 0x18a1f4u: goto label_18a1f4;
        case 0x18a1f8u: goto label_18a1f8;
        case 0x18a1fcu: goto label_18a1fc;
        case 0x18a200u: goto label_18a200;
        case 0x18a204u: goto label_18a204;
        case 0x18a208u: goto label_18a208;
        case 0x18a20cu: goto label_18a20c;
        case 0x18a210u: goto label_18a210;
        case 0x18a214u: goto label_18a214;
        case 0x18a218u: goto label_18a218;
        case 0x18a21cu: goto label_18a21c;
        case 0x18a220u: goto label_18a220;
        case 0x18a224u: goto label_18a224;
        case 0x18a228u: goto label_18a228;
        case 0x18a22cu: goto label_18a22c;
        case 0x18a230u: goto label_18a230;
        case 0x18a234u: goto label_18a234;
        case 0x18a238u: goto label_18a238;
        case 0x18a23cu: goto label_18a23c;
        case 0x18a240u: goto label_18a240;
        case 0x18a244u: goto label_18a244;
        case 0x18a248u: goto label_18a248;
        case 0x18a24cu: goto label_18a24c;
        case 0x18a250u: goto label_18a250;
        case 0x18a254u: goto label_18a254;
        case 0x18a258u: goto label_18a258;
        case 0x18a25cu: goto label_18a25c;
        case 0x18a260u: goto label_18a260;
        case 0x18a264u: goto label_18a264;
        case 0x18a268u: goto label_18a268;
        case 0x18a26cu: goto label_18a26c;
        case 0x18a270u: goto label_18a270;
        case 0x18a274u: goto label_18a274;
        case 0x18a278u: goto label_18a278;
        case 0x18a27cu: goto label_18a27c;
        case 0x18a280u: goto label_18a280;
        case 0x18a284u: goto label_18a284;
        case 0x18a288u: goto label_18a288;
        case 0x18a28cu: goto label_18a28c;
        case 0x18a290u: goto label_18a290;
        case 0x18a294u: goto label_18a294;
        case 0x18a298u: goto label_18a298;
        case 0x18a29cu: goto label_18a29c;
        case 0x18a2a0u: goto label_18a2a0;
        case 0x18a2a4u: goto label_18a2a4;
        case 0x18a2a8u: goto label_18a2a8;
        case 0x18a2acu: goto label_18a2ac;
        case 0x18a2b0u: goto label_18a2b0;
        case 0x18a2b4u: goto label_18a2b4;
        case 0x18a2b8u: goto label_18a2b8;
        case 0x18a2bcu: goto label_18a2bc;
        case 0x18a2c0u: goto label_18a2c0;
        case 0x18a2c4u: goto label_18a2c4;
        case 0x18a2c8u: goto label_18a2c8;
        case 0x18a2ccu: goto label_18a2cc;
        case 0x18a2d0u: goto label_18a2d0;
        case 0x18a2d4u: goto label_18a2d4;
        case 0x18a2d8u: goto label_18a2d8;
        case 0x18a2dcu: goto label_18a2dc;
        case 0x18a2e0u: goto label_18a2e0;
        case 0x18a2e4u: goto label_18a2e4;
        case 0x18a2e8u: goto label_18a2e8;
        case 0x18a2ecu: goto label_18a2ec;
        case 0x18a2f0u: goto label_18a2f0;
        case 0x18a2f4u: goto label_18a2f4;
        case 0x18a2f8u: goto label_18a2f8;
        case 0x18a2fcu: goto label_18a2fc;
        case 0x18a300u: goto label_18a300;
        case 0x18a304u: goto label_18a304;
        case 0x18a308u: goto label_18a308;
        case 0x18a30cu: goto label_18a30c;
        case 0x18a310u: goto label_18a310;
        case 0x18a314u: goto label_18a314;
        case 0x18a318u: goto label_18a318;
        case 0x18a31cu: goto label_18a31c;
        case 0x18a320u: goto label_18a320;
        case 0x18a324u: goto label_18a324;
        case 0x18a328u: goto label_18a328;
        case 0x18a32cu: goto label_18a32c;
        case 0x18a330u: goto label_18a330;
        case 0x18a334u: goto label_18a334;
        case 0x18a338u: goto label_18a338;
        case 0x18a33cu: goto label_18a33c;
        case 0x18a340u: goto label_18a340;
        case 0x18a344u: goto label_18a344;
        case 0x18a348u: goto label_18a348;
        case 0x18a34cu: goto label_18a34c;
        case 0x18a350u: goto label_18a350;
        case 0x18a354u: goto label_18a354;
        case 0x18a358u: goto label_18a358;
        case 0x18a35cu: goto label_18a35c;
        case 0x18a360u: goto label_18a360;
        case 0x18a364u: goto label_18a364;
        case 0x18a368u: goto label_18a368;
        case 0x18a36cu: goto label_18a36c;
        case 0x18a370u: goto label_18a370;
        case 0x18a374u: goto label_18a374;
        case 0x18a378u: goto label_18a378;
        case 0x18a37cu: goto label_18a37c;
        case 0x18a380u: goto label_18a380;
        case 0x18a384u: goto label_18a384;
        case 0x18a388u: goto label_18a388;
        case 0x18a38cu: goto label_18a38c;
        case 0x18a390u: goto label_18a390;
        case 0x18a394u: goto label_18a394;
        case 0x18a398u: goto label_18a398;
        case 0x18a39cu: goto label_18a39c;
        case 0x18a3a0u: goto label_18a3a0;
        case 0x18a3a4u: goto label_18a3a4;
        case 0x18a3a8u: goto label_18a3a8;
        case 0x18a3acu: goto label_18a3ac;
        case 0x18a3b0u: goto label_18a3b0;
        case 0x18a3b4u: goto label_18a3b4;
        case 0x18a3b8u: goto label_18a3b8;
        case 0x18a3bcu: goto label_18a3bc;
        case 0x18a3c0u: goto label_18a3c0;
        case 0x18a3c4u: goto label_18a3c4;
        case 0x18a3c8u: goto label_18a3c8;
        case 0x18a3ccu: goto label_18a3cc;
        case 0x18a3d0u: goto label_18a3d0;
        case 0x18a3d4u: goto label_18a3d4;
        case 0x18a3d8u: goto label_18a3d8;
        case 0x18a3dcu: goto label_18a3dc;
        case 0x18a3e0u: goto label_18a3e0;
        case 0x18a3e4u: goto label_18a3e4;
        case 0x18a3e8u: goto label_18a3e8;
        case 0x18a3ecu: goto label_18a3ec;
        case 0x18a3f0u: goto label_18a3f0;
        case 0x18a3f4u: goto label_18a3f4;
        case 0x18a3f8u: goto label_18a3f8;
        case 0x18a3fcu: goto label_18a3fc;
        case 0x18a400u: goto label_18a400;
        case 0x18a404u: goto label_18a404;
        case 0x18a408u: goto label_18a408;
        case 0x18a40cu: goto label_18a40c;
        case 0x18a410u: goto label_18a410;
        case 0x18a414u: goto label_18a414;
        case 0x18a418u: goto label_18a418;
        case 0x18a41cu: goto label_18a41c;
        case 0x18a420u: goto label_18a420;
        case 0x18a424u: goto label_18a424;
        case 0x18a428u: goto label_18a428;
        case 0x18a42cu: goto label_18a42c;
        case 0x18a430u: goto label_18a430;
        case 0x18a434u: goto label_18a434;
        case 0x18a438u: goto label_18a438;
        case 0x18a43cu: goto label_18a43c;
        case 0x18a440u: goto label_18a440;
        case 0x18a444u: goto label_18a444;
        case 0x18a448u: goto label_18a448;
        case 0x18a44cu: goto label_18a44c;
        case 0x18a450u: goto label_18a450;
        case 0x18a454u: goto label_18a454;
        case 0x18a458u: goto label_18a458;
        case 0x18a45cu: goto label_18a45c;
        case 0x18a460u: goto label_18a460;
        case 0x18a464u: goto label_18a464;
        case 0x18a468u: goto label_18a468;
        case 0x18a46cu: goto label_18a46c;
        case 0x18a470u: goto label_18a470;
        case 0x18a474u: goto label_18a474;
        case 0x18a478u: goto label_18a478;
        case 0x18a47cu: goto label_18a47c;
        case 0x18a480u: goto label_18a480;
        case 0x18a484u: goto label_18a484;
        case 0x18a488u: goto label_18a488;
        case 0x18a48cu: goto label_18a48c;
        case 0x18a490u: goto label_18a490;
        case 0x18a494u: goto label_18a494;
        case 0x18a498u: goto label_18a498;
        case 0x18a49cu: goto label_18a49c;
        case 0x18a4a0u: goto label_18a4a0;
        case 0x18a4a4u: goto label_18a4a4;
        case 0x18a4a8u: goto label_18a4a8;
        case 0x18a4acu: goto label_18a4ac;
        case 0x18a4b0u: goto label_18a4b0;
        case 0x18a4b4u: goto label_18a4b4;
        case 0x18a4b8u: goto label_18a4b8;
        case 0x18a4bcu: goto label_18a4bc;
        case 0x18a4c0u: goto label_18a4c0;
        case 0x18a4c4u: goto label_18a4c4;
        case 0x18a4c8u: goto label_18a4c8;
        case 0x18a4ccu: goto label_18a4cc;
        case 0x18a4d0u: goto label_18a4d0;
        case 0x18a4d4u: goto label_18a4d4;
        case 0x18a4d8u: goto label_18a4d8;
        case 0x18a4dcu: goto label_18a4dc;
        case 0x18a4e0u: goto label_18a4e0;
        case 0x18a4e4u: goto label_18a4e4;
        case 0x18a4e8u: goto label_18a4e8;
        case 0x18a4ecu: goto label_18a4ec;
        case 0x18a4f0u: goto label_18a4f0;
        case 0x18a4f4u: goto label_18a4f4;
        case 0x18a4f8u: goto label_18a4f8;
        case 0x18a4fcu: goto label_18a4fc;
        case 0x18a500u: goto label_18a500;
        case 0x18a504u: goto label_18a504;
        case 0x18a508u: goto label_18a508;
        case 0x18a50cu: goto label_18a50c;
        case 0x18a510u: goto label_18a510;
        case 0x18a514u: goto label_18a514;
        case 0x18a518u: goto label_18a518;
        case 0x18a51cu: goto label_18a51c;
        case 0x18a520u: goto label_18a520;
        case 0x18a524u: goto label_18a524;
        case 0x18a528u: goto label_18a528;
        case 0x18a52cu: goto label_18a52c;
        case 0x18a530u: goto label_18a530;
        case 0x18a534u: goto label_18a534;
        case 0x18a538u: goto label_18a538;
        case 0x18a53cu: goto label_18a53c;
        case 0x18a540u: goto label_18a540;
        case 0x18a544u: goto label_18a544;
        case 0x18a548u: goto label_18a548;
        case 0x18a54cu: goto label_18a54c;
        case 0x18a550u: goto label_18a550;
        case 0x18a554u: goto label_18a554;
        case 0x18a558u: goto label_18a558;
        case 0x18a55cu: goto label_18a55c;
        case 0x18a560u: goto label_18a560;
        case 0x18a564u: goto label_18a564;
        case 0x18a568u: goto label_18a568;
        case 0x18a56cu: goto label_18a56c;
        case 0x18a570u: goto label_18a570;
        case 0x18a574u: goto label_18a574;
        case 0x18a578u: goto label_18a578;
        case 0x18a57cu: goto label_18a57c;
        case 0x18a580u: goto label_18a580;
        case 0x18a584u: goto label_18a584;
        case 0x18a588u: goto label_18a588;
        case 0x18a58cu: goto label_18a58c;
        case 0x18a590u: goto label_18a590;
        case 0x18a594u: goto label_18a594;
        case 0x18a598u: goto label_18a598;
        case 0x18a59cu: goto label_18a59c;
        case 0x18a5a0u: goto label_18a5a0;
        case 0x18a5a4u: goto label_18a5a4;
        case 0x18a5a8u: goto label_18a5a8;
        case 0x18a5acu: goto label_18a5ac;
        case 0x18a5b0u: goto label_18a5b0;
        case 0x18a5b4u: goto label_18a5b4;
        case 0x18a5b8u: goto label_18a5b8;
        case 0x18a5bcu: goto label_18a5bc;
        case 0x18a5c0u: goto label_18a5c0;
        case 0x18a5c4u: goto label_18a5c4;
        case 0x18a5c8u: goto label_18a5c8;
        case 0x18a5ccu: goto label_18a5cc;
        case 0x18a5d0u: goto label_18a5d0;
        case 0x18a5d4u: goto label_18a5d4;
        case 0x18a5d8u: goto label_18a5d8;
        case 0x18a5dcu: goto label_18a5dc;
        case 0x18a5e0u: goto label_18a5e0;
        case 0x18a5e4u: goto label_18a5e4;
        case 0x18a5e8u: goto label_18a5e8;
        case 0x18a5ecu: goto label_18a5ec;
        case 0x18a5f0u: goto label_18a5f0;
        case 0x18a5f4u: goto label_18a5f4;
        case 0x18a5f8u: goto label_18a5f8;
        case 0x18a5fcu: goto label_18a5fc;
        case 0x18a600u: goto label_18a600;
        case 0x18a604u: goto label_18a604;
        case 0x18a608u: goto label_18a608;
        case 0x18a60cu: goto label_18a60c;
        case 0x18a610u: goto label_18a610;
        case 0x18a614u: goto label_18a614;
        case 0x18a618u: goto label_18a618;
        case 0x18a61cu: goto label_18a61c;
        case 0x18a620u: goto label_18a620;
        case 0x18a624u: goto label_18a624;
        case 0x18a628u: goto label_18a628;
        case 0x18a62cu: goto label_18a62c;
        case 0x18a630u: goto label_18a630;
        case 0x18a634u: goto label_18a634;
        case 0x18a638u: goto label_18a638;
        case 0x18a63cu: goto label_18a63c;
        case 0x18a640u: goto label_18a640;
        case 0x18a644u: goto label_18a644;
        case 0x18a648u: goto label_18a648;
        case 0x18a64cu: goto label_18a64c;
        case 0x18a650u: goto label_18a650;
        case 0x18a654u: goto label_18a654;
        case 0x18a658u: goto label_18a658;
        case 0x18a65cu: goto label_18a65c;
        case 0x18a660u: goto label_18a660;
        case 0x18a664u: goto label_18a664;
        case 0x18a668u: goto label_18a668;
        case 0x18a66cu: goto label_18a66c;
        case 0x18a670u: goto label_18a670;
        case 0x18a674u: goto label_18a674;
        case 0x18a678u: goto label_18a678;
        case 0x18a67cu: goto label_18a67c;
        default: return;
    }

label_189eb0:
    // 0x189eb0: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x189eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
label_189eb4:
    // 0x189eb4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x189eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_189eb8:
    // 0x189eb8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x189eb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_189ebc:
    // 0x189ebc: 0x0  nop
    ctx->pc = 0x189ebcu;
    // NOP
label_189ec0:
    // 0x189ec0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x189ec0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_189ec4:
    // 0x189ec4: 0x0  nop
    ctx->pc = 0x189ec4u;
    // NOP
label_189ec8:
    // 0x189ec8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_189ecc:
    if (ctx->pc == 0x189ECCu) {
        ctx->pc = 0x189ED0u;
        goto label_189ed0;
    }
    ctx->pc = 0x189EC8u;
    {
        const bool branch_taken_0x189ec8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x189ec8) {
            ctx->pc = 0x189EDCu;
            goto label_189edc;
        }
    }
    ctx->pc = 0x189ED0u;
label_189ed0:
    // 0x189ed0: 0x10000002  b           . + 4 + (0x2 << 2)
label_189ed4:
    if (ctx->pc == 0x189ED4u) {
        ctx->pc = 0x189ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189ED0u;
        // 0x189ed4: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189ED8u;
        goto label_189ed8;
    }
    ctx->pc = 0x189ED0u;
    {
        const bool branch_taken_0x189ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189ED0u;
        // 0x189ed4: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189ed0) {
            ctx->pc = 0x189EDCu;
            goto label_189edc;
        }
    }
    ctx->pc = 0x189ED8u;
label_189ed8:
    // 0x189ed8: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x189ed8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_189edc:
    // 0x189edc: 0x0  nop
    ctx->pc = 0x189edcu;
    // NOP
label_189ee0:
    // 0x189ee0: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
label_189ee4:
    if (ctx->pc == 0x189EE4u) {
        ctx->pc = 0x189EE8u;
        goto label_189ee8;
    }
    ctx->pc = 0x189EE0u;
    {
        const bool branch_taken_0x189ee0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x189ee0) {
            ctx->pc = 0x189EFCu;
            goto label_189efc;
        }
    }
    ctx->pc = 0x189EE8u;
label_189ee8:
    // 0x189ee8: 0x4617c580  add.s       $f22, $f24, $f23
    ctx->pc = 0x189ee8u;
    ctx->f[22] = FPU_ADD_S(ctx->f[24], ctx->f[23]);
label_189eec:
    // 0x189eec: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x189eecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_189ef0:
    // 0x189ef0: 0x220f02d  daddu       $fp, $s1, $zero
    ctx->pc = 0x189ef0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_189ef4:
    // 0x189ef4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x189ef4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_189ef8:
    // 0x189ef8: 0x4600ad06  mov.s       $f20, $f21
    ctx->pc = 0x189ef8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
label_189efc:
    // 0x189efc: 0x0  nop
    ctx->pc = 0x189efcu;
    // NOP
label_189f00:
    // 0x189f00: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x189f00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_189f04:
    // 0x189f04: 0x2a220009  slti        $v0, $s1, 0x9
    ctx->pc = 0x189f04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
label_189f08:
    // 0x189f08: 0x1440ffa4  bnez        $v0, . + 4 + (-0x5C << 2)
label_189f0c:
    if (ctx->pc == 0x189F0Cu) {
        ctx->pc = 0x189F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189F08u;
        // 0x189f0c: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189F10u;
        goto label_189f10;
    }
    ctx->pc = 0x189F08u;
    {
        const bool branch_taken_0x189f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189F08u;
        // 0x189f0c: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189f08) {
            ctx->pc = 0x189D9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x189d9c; return; }
        }
    }
    ctx->pc = 0x189F10u;
label_189f10:
    // 0x189f10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x189f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_189f14:
    // 0x189f14: 0x16420017  bne         $s2, $v0, . + 4 + (0x17 << 2)
label_189f18:
    if (ctx->pc == 0x189F18u) {
        ctx->pc = 0x189F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189F14u;
        // 0x189f18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189F1Cu;
        goto label_189f1c;
    }
    ctx->pc = 0x189F14u;
    {
        const bool branch_taken_0x189f14 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x189F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189F14u;
        // 0x189f18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189f14) {
            ctx->pc = 0x189F74u;
            goto label_189f74;
        }
    }
    ctx->pc = 0x189F1Cu;
label_189f1c:
    // 0x189f1c: 0x3c024bbe  lui         $v0, 0x4BBE
    ctx->pc = 0x189f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19390 << 16));
label_189f20:
    // 0x189f20: 0x3442bc20  ori         $v0, $v0, 0xBC20
    ctx->pc = 0x189f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48160);
label_189f24:
    // 0x189f24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x189f24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_189f28:
    // 0x189f28: 0x0  nop
    ctx->pc = 0x189f28u;
    // NOP
label_189f2c:
    // 0x189f2c: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x189f2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_189f30:
    // 0x189f30: 0x0  nop
    ctx->pc = 0x189f30u;
    // NOP
label_189f34:
    // 0x189f34: 0x4501000e  bc1t        . + 4 + (0xE << 2)
label_189f38:
    if (ctx->pc == 0x189F38u) {
        ctx->pc = 0x189F3Cu;
        goto label_189f3c;
    }
    ctx->pc = 0x189F34u;
    {
        const bool branch_taken_0x189f34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x189f34) {
            ctx->pc = 0x189F70u;
            goto label_189f70;
        }
    }
    ctx->pc = 0x189F3Cu;
label_189f3c:
    // 0x189f3c: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x189f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_189f40:
    // 0x189f40: 0x26850150  addiu       $a1, $s4, 0x150
    ctx->pc = 0x189f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 336));
label_189f44:
    // 0x189f44: 0xc042484  jal         func_109210
label_189f48:
    if (ctx->pc == 0x189F48u) {
        ctx->pc = 0x189F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189F44u;
        // 0x189f48: 0x26040150  addiu       $a0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189F4Cu;
        goto label_189f4c;
    }
    ctx->pc = 0x189F44u;
    SET_GPR_U32(ctx, 31, 0x189F4Cu);
    ctx->pc = 0x189F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189F44u;
    // 0x189f48: 0x26040150  addiu       $a0, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109210u, 0x189F44u, 0x189F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189F4Cu;
label_189f4c:
    // 0x189f4c: 0x9204023f  lbu         $a0, 0x23F($s0)
    ctx->pc = 0x189f4cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 575)));
label_189f50:
    // 0x189f50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x189f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_189f54:
    // 0x189f54: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
label_189f58:
    if (ctx->pc == 0x189F58u) {
        ctx->pc = 0x189F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189F54u;
        // 0x189f58: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189F5Cu;
        goto label_189f5c;
    }
    ctx->pc = 0x189F54u;
    {
        const bool branch_taken_0x189f54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x189F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189F54u;
        // 0x189f58: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189f54) {
            ctx->pc = 0x189F60u;
            goto label_189f60;
        }
    }
    ctx->pc = 0x189F5Cu;
label_189f5c:
    // 0x189f5c: 0x24030026  addiu       $v1, $zero, 0x26
    ctx->pc = 0x189f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_189f60:
    // 0x189f60: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x189f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_189f64:
    // 0x189f64: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_189f68:
    if (ctx->pc == 0x189F68u) {
        ctx->pc = 0x189F6Cu;
        goto label_189f6c;
    }
    ctx->pc = 0x189F64u;
    {
        const bool branch_taken_0x189f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189f64) {
            ctx->pc = 0x189F70u;
            goto label_189f70;
        }
    }
    ctx->pc = 0x189F6Cu;
label_189f6c:
    // 0x189f6c: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x189f6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_189f70:
    // 0x189f70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x189f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_189f74:
    // 0x189f74: 0x16420017  bne         $s2, $v0, . + 4 + (0x17 << 2)
label_189f78:
    if (ctx->pc == 0x189F78u) {
        ctx->pc = 0x189F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189F74u;
        // 0x189f78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189F7Cu;
        goto label_189f7c;
    }
    ctx->pc = 0x189F74u;
    {
        const bool branch_taken_0x189f74 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x189F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189F74u;
        // 0x189f78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189f74) {
            ctx->pc = 0x189FD4u;
            goto label_189fd4;
        }
    }
    ctx->pc = 0x189F7Cu;
label_189f7c:
    // 0x189f7c: 0x92030231  lbu         $v1, 0x231($s0)
    ctx->pc = 0x189f7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 561)));
label_189f80:
    // 0x189f80: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x189f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_189f84:
    // 0x189f84: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_189f88:
    if (ctx->pc == 0x189F88u) {
        ctx->pc = 0x189F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189F84u;
        // 0x189f88: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189F8Cu;
        goto label_189f8c;
    }
    ctx->pc = 0x189F84u;
    {
        const bool branch_taken_0x189f84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x189F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189F84u;
        // 0x189f88: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189f84) {
            ctx->pc = 0x189F94u;
            goto label_189f94;
        }
    }
    ctx->pc = 0x189F8Cu;
label_189f8c:
    // 0x189f8c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_189f90:
    if (ctx->pc == 0x189F90u) {
        ctx->pc = 0x189F94u;
        goto label_189f94;
    }
    ctx->pc = 0x189F8Cu;
    {
        const bool branch_taken_0x189f8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x189f8c) {
            ctx->pc = 0x189FB4u;
            goto label_189fb4;
        }
    }
    ctx->pc = 0x189F94u;
label_189f94:
    // 0x189f94: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x189f94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_189f98:
    // 0x189f98: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x189f98u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_189f9c:
    // 0x189f9c: 0xc062850  jal         func_18A140
label_189fa0:
    if (ctx->pc == 0x189FA0u) {
        ctx->pc = 0x189FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189F9Cu;
        // 0x189fa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189FA4u;
        goto label_189fa4;
    }
    ctx->pc = 0x189F9Cu;
    SET_GPR_U32(ctx, 31, 0x189FA4u);
    ctx->pc = 0x189FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189F9Cu;
    // 0x189fa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A140u;
    goto label_18a140;
    ctx->pc = 0x189FA4u;
label_189fa4:
    // 0x189fa4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_189fa8:
    if (ctx->pc == 0x189FA8u) {
        ctx->pc = 0x189FACu;
        goto label_189fac;
    }
    ctx->pc = 0x189FA4u;
    {
        const bool branch_taken_0x189fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189fa4) {
            ctx->pc = 0x189FD0u;
            goto label_189fd0;
        }
    }
    ctx->pc = 0x189FACu;
label_189fac:
    // 0x189fac: 0x10000008  b           . + 4 + (0x8 << 2)
label_189fb0:
    if (ctx->pc == 0x189FB0u) {
        ctx->pc = 0x189FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189FACu;
        // 0x189fb0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189FB4u;
        goto label_189fb4;
    }
    ctx->pc = 0x189FACu;
    {
        const bool branch_taken_0x189fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189FACu;
        // 0x189fb0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189fac) {
            ctx->pc = 0x189FD0u;
            goto label_189fd0;
        }
    }
    ctx->pc = 0x189FB4u;
label_189fb4:
    // 0x189fb4: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x189fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_189fb8:
    // 0x189fb8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x189fb8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_189fbc:
    // 0x189fbc: 0xc062850  jal         func_18A140
label_189fc0:
    if (ctx->pc == 0x189FC0u) {
        ctx->pc = 0x189FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189FBCu;
        // 0x189fc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189FC4u;
        goto label_189fc4;
    }
    ctx->pc = 0x189FBCu;
    SET_GPR_U32(ctx, 31, 0x189FC4u);
    ctx->pc = 0x189FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189FBCu;
    // 0x189fc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A140u;
    goto label_18a140;
    ctx->pc = 0x189FC4u;
label_189fc4:
    // 0x189fc4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_189fc8:
    if (ctx->pc == 0x189FC8u) {
        ctx->pc = 0x189FCCu;
        goto label_189fcc;
    }
    ctx->pc = 0x189FC4u;
    {
        const bool branch_taken_0x189fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189fc4) {
            ctx->pc = 0x189FD0u;
            goto label_189fd0;
        }
    }
    ctx->pc = 0x189FCCu;
label_189fcc:
    // 0x189fcc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x189fccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_189fd0:
    // 0x189fd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x189fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_189fd4:
    // 0x189fd4: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
label_189fd8:
    if (ctx->pc == 0x189FD8u) {
        ctx->pc = 0x189FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189FD4u;
        // 0x189fd8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189FDCu;
        goto label_189fdc;
    }
    ctx->pc = 0x189FD4u;
    {
        const bool branch_taken_0x189fd4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x189FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189FD4u;
        // 0x189fd8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189fd4) {
            ctx->pc = 0x189FECu;
            goto label_189fec;
        }
    }
    ctx->pc = 0x189FDCu;
label_189fdc:
    // 0x189fdc: 0x12420003  beq         $s2, $v0, . + 4 + (0x3 << 2)
label_189fe0:
    if (ctx->pc == 0x189FE0u) {
        ctx->pc = 0x189FE4u;
        goto label_189fe4;
    }
    ctx->pc = 0x189FDCu;
    {
        const bool branch_taken_0x189fdc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x189fdc) {
            ctx->pc = 0x189FECu;
            goto label_189fec;
        }
    }
    ctx->pc = 0x189FE4u;
label_189fe4:
    // 0x189fe4: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
label_189fe8:
    if (ctx->pc == 0x189FE8u) {
        ctx->pc = 0x189FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189FE4u;
        // 0x189fe8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189FECu;
        goto label_189fec;
    }
    ctx->pc = 0x189FE4u;
    {
        const bool branch_taken_0x189fe4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x189FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189FE4u;
        // 0x189fe8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189fe4) {
            ctx->pc = 0x189FFCu;
            goto label_189ffc;
        }
    }
    ctx->pc = 0x189FECu;
label_189fec:
    // 0x189fec: 0xa21e0235  sb          $fp, 0x235($s0)
    ctx->pc = 0x189fecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 565), (uint8_t)GPR_U32(ctx, 30));
label_189ff0:
    // 0x189ff0: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x189ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_189ff4:
    // 0x189ff4: 0x1000003f  b           . + 4 + (0x3F << 2)
label_189ff8:
    if (ctx->pc == 0x189FF8u) {
        ctx->pc = 0x189FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189FF4u;
        // 0x189ff8: 0xa2020236  sb          $v0, 0x236($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 566), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x189FFCu;
        goto label_189ffc;
    }
    ctx->pc = 0x189FF4u;
    {
        const bool branch_taken_0x189ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189FF4u;
        // 0x189ff8: 0xa2020236  sb          $v0, 0x236($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 566), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189ff4) {
            ctx->pc = 0x18A0F4u;
            goto label_18a0f4;
        }
    }
    ctx->pc = 0x189FFCu;
label_189ffc:
    // 0x189ffc: 0x1642003d  bne         $s2, $v0, . + 4 + (0x3D << 2)
label_18a000:
    if (ctx->pc == 0x18A000u) {
        ctx->pc = 0x18A004u;
        goto label_18a004;
    }
    ctx->pc = 0x189FFCu;
    {
        const bool branch_taken_0x189ffc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x189ffc) {
            ctx->pc = 0x18A0F4u;
            goto label_18a0f4;
        }
    }
    ctx->pc = 0x18A004u;
label_18a004:
    // 0x18a004: 0x92030235  lbu         $v1, 0x235($s0)
    ctx->pc = 0x18a004u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 565)));
label_18a008:
    // 0x18a008: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x18a008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_18a00c:
    // 0x18a00c: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
label_18a010:
    if (ctx->pc == 0x18A010u) {
        ctx->pc = 0x18A014u;
        goto label_18a014;
    }
    ctx->pc = 0x18A00Cu;
    {
        const bool branch_taken_0x18a00c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18a00c) {
            ctx->pc = 0x18A058u;
            goto label_18a058;
        }
    }
    ctx->pc = 0x18A014u;
label_18a014:
    // 0x18a014: 0x92030233  lbu         $v1, 0x233($s0)
    ctx->pc = 0x18a014u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 563)));
label_18a018:
    // 0x18a018: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_18a01c:
    if (ctx->pc == 0x18A01Cu) {
        ctx->pc = 0x18A01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A018u;
        // 0x18a01c: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A020u;
        goto label_18a020;
    }
    ctx->pc = 0x18A018u;
    {
        const bool branch_taken_0x18a018 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A018u;
        // 0x18a01c: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a018) {
            ctx->pc = 0x18A028u;
            goto label_18a028;
        }
    }
    ctx->pc = 0x18A020u;
label_18a020:
    // 0x18a020: 0x1000000d  b           . + 4 + (0xD << 2)
label_18a024:
    if (ctx->pc == 0x18A024u) {
        ctx->pc = 0x18A024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A020u;
        // 0x18a024: 0xa2000235  sb          $zero, 0x235($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 565), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A028u;
        goto label_18a028;
    }
    ctx->pc = 0x18A020u;
    {
        const bool branch_taken_0x18a020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A020u;
        // 0x18a024: 0xa2000235  sb          $zero, 0x235($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 565), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a020) {
            ctx->pc = 0x18A058u;
            goto label_18a058;
        }
    }
    ctx->pc = 0x18A028u;
label_18a028:
    // 0x18a028: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_18a02c:
    if (ctx->pc == 0x18A02Cu) {
        ctx->pc = 0x18A030u;
        goto label_18a030;
    }
    ctx->pc = 0x18A028u;
    {
        const bool branch_taken_0x18a028 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18a028) {
            ctx->pc = 0x18A03Cu;
            goto label_18a03c;
        }
    }
    ctx->pc = 0x18A030u;
label_18a030:
    // 0x18a030: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_18a034:
    if (ctx->pc == 0x18A034u) {
        ctx->pc = 0x18A038u;
        goto label_18a038;
    }
    ctx->pc = 0x18A030u;
    {
        const bool branch_taken_0x18a030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a030) {
            ctx->pc = 0x18A03Cu;
            goto label_18a03c;
        }
    }
    ctx->pc = 0x18A038u;
label_18a038:
    // 0x18a038: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x18a038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_18a03c:
    // 0x18a03c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_18a040:
    if (ctx->pc == 0x18A040u) {
        ctx->pc = 0x18A044u;
        goto label_18a044;
    }
    ctx->pc = 0x18A03Cu;
    {
        const bool branch_taken_0x18a03c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a03c) {
            ctx->pc = 0x18A050u;
            goto label_18a050;
        }
    }
    ctx->pc = 0x18A044u;
label_18a044:
    // 0x18a044: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x18a044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_18a048:
    // 0x18a048: 0x10000003  b           . + 4 + (0x3 << 2)
label_18a04c:
    if (ctx->pc == 0x18A04Cu) {
        ctx->pc = 0x18A04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A048u;
        // 0x18a04c: 0xa2020235  sb          $v0, 0x235($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 565), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A050u;
        goto label_18a050;
    }
    ctx->pc = 0x18A048u;
    {
        const bool branch_taken_0x18a048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A048u;
        // 0x18a04c: 0xa2020235  sb          $v0, 0x235($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 565), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a048) {
            ctx->pc = 0x18A058u;
            goto label_18a058;
        }
    }
    ctx->pc = 0x18A050u;
label_18a050:
    // 0x18a050: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x18a050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_18a054:
    // 0x18a054: 0xa2020235  sb          $v0, 0x235($s0)
    ctx->pc = 0x18a054u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 565), (uint8_t)GPR_U32(ctx, 2));
label_18a058:
    // 0x18a058: 0x92030235  lbu         $v1, 0x235($s0)
    ctx->pc = 0x18a058u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 565)));
label_18a05c:
    // 0x18a05c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18a05cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18a060:
    // 0x18a060: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x18a060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_18a064:
    // 0x18a064: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x18a064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18a068:
    // 0x18a068: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_18a06c:
    if (ctx->pc == 0x18A06Cu) {
        ctx->pc = 0x18A06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A068u;
        // 0x18a06c: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A070u;
        goto label_18a070;
    }
    ctx->pc = 0x18A068u;
    {
        const bool branch_taken_0x18a068 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A068u;
        // 0x18a06c: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a068) {
            ctx->pc = 0x18A094u;
            goto label_18a094;
        }
    }
    ctx->pc = 0x18A070u;
label_18a070:
    // 0x18a070: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_18a074:
    if (ctx->pc == 0x18A074u) {
        ctx->pc = 0x18A078u;
        goto label_18a078;
    }
    ctx->pc = 0x18A070u;
    {
        const bool branch_taken_0x18a070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a070) {
            ctx->pc = 0x18A088u;
            goto label_18a088;
        }
    }
    ctx->pc = 0x18A078u;
label_18a078:
    // 0x18a078: 0x92020232  lbu         $v0, 0x232($s0)
    ctx->pc = 0x18a078u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 562)));
label_18a07c:
    // 0x18a07c: 0x28410006  slti        $at, $v0, 0x6
    ctx->pc = 0x18a07cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
label_18a080:
    // 0x18a080: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_18a084:
    if (ctx->pc == 0x18A084u) {
        ctx->pc = 0x18A088u;
        goto label_18a088;
    }
    ctx->pc = 0x18A080u;
    {
        const bool branch_taken_0x18a080 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a080) {
            ctx->pc = 0x18A094u;
            goto label_18a094;
        }
    }
    ctx->pc = 0x18A088u;
label_18a088:
    // 0x18a088: 0x9082023a  lbu         $v0, 0x23A($a0)
    ctx->pc = 0x18a088u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 570)));
label_18a08c:
    // 0x18a08c: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_18a090:
    if (ctx->pc == 0x18A090u) {
        ctx->pc = 0x18A094u;
        goto label_18a094;
    }
    ctx->pc = 0x18A08Cu;
    {
        const bool branch_taken_0x18a08c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a08c) {
            ctx->pc = 0x18A0F4u;
            goto label_18a0f4;
        }
    }
    ctx->pc = 0x18A094u;
label_18a094:
    // 0x18a094: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x18a094u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_18a098:
    // 0x18a098: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x18a098u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_18a09c:
    // 0x18a09c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18a09cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18a0a0:
    // 0x18a0a0: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x18a0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_18a0a4:
    // 0x18a0a4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x18a0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_18a0a8:
    // 0x18a0a8: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x18a0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_18a0ac:
    // 0x18a0ac: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x18a0acu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18a0b0:
    // 0x18a0b0: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
label_18a0b4:
    if (ctx->pc == 0x18A0B4u) {
        ctx->pc = 0x18A0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A0B0u;
        // 0x18a0b4: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A0B8u;
        goto label_18a0b8;
    }
    ctx->pc = 0x18A0B0u;
    {
        const bool branch_taken_0x18a0b0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A0B0u;
        // 0x18a0b4: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a0b0) {
            ctx->pc = 0x18A0D4u;
            goto label_18a0d4;
        }
    }
    ctx->pc = 0x18A0B8u;
label_18a0b8:
    // 0x18a0b8: 0x9282023a  lbu         $v0, 0x23A($s4)
    ctx->pc = 0x18a0b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 570)));
label_18a0bc:
    // 0x18a0bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_18a0c0:
    if (ctx->pc == 0x18A0C0u) {
        ctx->pc = 0x18A0C4u;
        goto label_18a0c4;
    }
    ctx->pc = 0x18A0BCu;
    {
        const bool branch_taken_0x18a0bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a0bc) {
            ctx->pc = 0x18A0D0u;
            goto label_18a0d0;
        }
    }
    ctx->pc = 0x18A0C4u;
label_18a0c4:
    // 0x18a0c4: 0xa2040235  sb          $a0, 0x235($s0)
    ctx->pc = 0x18a0c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 565), (uint8_t)GPR_U32(ctx, 4));
label_18a0c8:
    // 0x18a0c8: 0x1000000a  b           . + 4 + (0xA << 2)
label_18a0cc:
    if (ctx->pc == 0x18A0CCu) {
        ctx->pc = 0x18A0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A0C8u;
        // 0x18a0cc: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A0D0u;
        goto label_18a0d0;
    }
    ctx->pc = 0x18A0C8u;
    {
        const bool branch_taken_0x18a0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A0C8u;
        // 0x18a0cc: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a0c8) {
            ctx->pc = 0x18A0F4u;
            goto label_18a0f4;
        }
    }
    ctx->pc = 0x18A0D0u;
label_18a0d0:
    // 0x18a0d0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x18a0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_18a0d4:
    // 0x18a0d4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x18a0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_18a0d8:
    // 0x18a0d8: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x18a0d8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_18a0dc:
    // 0x18a0dc: 0x0  nop
    ctx->pc = 0x18a0dcu;
    // NOP
label_18a0e0:
    // 0x18a0e0: 0x0  nop
    ctx->pc = 0x18a0e0u;
    // NOP
label_18a0e4:
    // 0x18a0e4: 0x2010  mfhi        $a0
    ctx->pc = 0x18a0e4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_18a0e8:
    // 0x18a0e8: 0x28a20009  slti        $v0, $a1, 0x9
    ctx->pc = 0x18a0e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
label_18a0ec:
    // 0x18a0ec: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_18a0f0:
    if (ctx->pc == 0x18A0F0u) {
        ctx->pc = 0x18A0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A0ECu;
        // 0x18a0f0: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A0F4u;
        goto label_18a0f4;
    }
    ctx->pc = 0x18A0ECu;
    {
        const bool branch_taken_0x18a0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A0ECu;
        // 0x18a0f0: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a0ec) {
            ctx->pc = 0x18A0A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a0a8;
        }
    }
    ctx->pc = 0x18A0F4u;
label_18a0f4:
    // 0x18a0f4: 0x0  nop
    ctx->pc = 0x18a0f4u;
    // NOP
label_18a0f8:
    // 0x18a0f8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x18a0f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18a0fc:
    // 0x18a0fc: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x18a0fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_18a100:
    // 0x18a100: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x18a100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_18a104:
    // 0x18a104: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x18a104u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_18a108:
    // 0x18a108: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x18a108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_18a10c:
    // 0x18a10c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x18a10cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_18a110:
    // 0x18a110: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x18a110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_18a114:
    // 0x18a114: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x18a114u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_18a118:
    // 0x18a118: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x18a118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_18a11c:
    // 0x18a11c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x18a11cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_18a120:
    // 0x18a120: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x18a120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_18a124:
    // 0x18a124: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x18a124u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_18a128:
    // 0x18a128: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x18a128u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_18a12c:
    // 0x18a12c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x18a12cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_18a130:
    // 0x18a130: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x18a130u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18a134:
    // 0x18a134: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x18a134u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18a138:
    // 0x18a138: 0x3e00008  jr          $ra
label_18a13c:
    if (ctx->pc == 0x18A13Cu) {
        ctx->pc = 0x18A13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A138u;
        // 0x18a13c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A140u;
        goto label_18a140;
    }
    ctx->pc = 0x18A138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A138u;
        // 0x18a13c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A140u;
label_18a140:
    // 0x18a140: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x18a140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_18a144:
    // 0x18a144: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x18a144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_18a148:
    // 0x18a148: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x18a148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_18a14c:
    // 0x18a14c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x18a14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_18a150:
    // 0x18a150: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x18a150u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18a154:
    // 0x18a154: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x18a154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_18a158:
    // 0x18a158: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x18a158u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18a15c:
    // 0x18a15c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x18a15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_18a160:
    // 0x18a160: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18a160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_18a164:
    // 0x18a164: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18a164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_18a168:
    // 0x18a168: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18a168u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18a16c:
    // 0x18a16c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x18a16cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_18a170:
    // 0x18a170: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x18a170u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_18a174:
    // 0x18a174: 0x90820233  lbu         $v0, 0x233($a0)
    ctx->pc = 0x18a174u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 563)));
label_18a178:
    // 0x18a178: 0x10400092  beqz        $v0, . + 4 + (0x92 << 2)
label_18a17c:
    if (ctx->pc == 0x18A17Cu) {
        ctx->pc = 0x18A17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A178u;
        // 0x18a17c: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A180u;
        goto label_18a180;
    }
    ctx->pc = 0x18A178u;
    {
        const bool branch_taken_0x18a178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A178u;
        // 0x18a17c: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a178) {
            ctx->pc = 0x18A3C4u;
            goto label_18a3c4;
        }
    }
    ctx->pc = 0x18A180u;
label_18a180:
    // 0x18a180: 0x92a30232  lbu         $v1, 0x232($s5)
    ctx->pc = 0x18a180u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 562)));
label_18a184:
    // 0x18a184: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x18a184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_18a188:
    // 0x18a188: 0x1462008e  bne         $v1, $v0, . + 4 + (0x8E << 2)
label_18a18c:
    if (ctx->pc == 0x18A18Cu) {
        ctx->pc = 0x18A190u;
        goto label_18a190;
    }
    ctx->pc = 0x18A188u;
    {
        const bool branch_taken_0x18a188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18a188) {
            ctx->pc = 0x18A3C4u;
            goto label_18a3c4;
        }
    }
    ctx->pc = 0x18A190u;
label_18a190:
    // 0x18a190: 0x92a30231  lbu         $v1, 0x231($s5)
    ctx->pc = 0x18a190u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 561)));
label_18a194:
    // 0x18a194: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18a194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18a198:
    // 0x18a198: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_18a19c:
    if (ctx->pc == 0x18A19Cu) {
        ctx->pc = 0x18A19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A198u;
        // 0x18a19c: 0x3c023e32  lui         $v0, 0x3E32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A1A0u;
        goto label_18a1a0;
    }
    ctx->pc = 0x18A198u;
    {
        const bool branch_taken_0x18a198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18A19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A198u;
        // 0x18a19c: 0x3c023e32  lui         $v0, 0x3E32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a198) {
            ctx->pc = 0x18A1B0u;
            goto label_18a1b0;
        }
    }
    ctx->pc = 0x18A1A0u;
label_18a1a0:
    // 0x18a1a0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x18a1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_18a1a4:
    // 0x18a1a4: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_18a1a8:
    if (ctx->pc == 0x18A1A8u) {
        ctx->pc = 0x18A1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A1A4u;
        // 0x18a1a8: 0x3c023eb2  lui         $v0, 0x3EB2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16050 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A1ACu;
        goto label_18a1ac;
    }
    ctx->pc = 0x18A1A4u;
    {
        const bool branch_taken_0x18a1a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18A1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A1A4u;
        // 0x18a1a8: 0x3c023eb2  lui         $v0, 0x3EB2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16050 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a1a4) {
            ctx->pc = 0x18A1C0u;
            goto label_18a1c0;
        }
    }
    ctx->pc = 0x18A1ACu;
label_18a1ac:
    // 0x18a1ac: 0x3c023e32  lui         $v0, 0x3E32
    ctx->pc = 0x18a1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
label_18a1b0:
    // 0x18a1b0: 0x3442b8c3  ori         $v0, $v0, 0xB8C3
    ctx->pc = 0x18a1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47299);
label_18a1b4:
    // 0x18a1b4: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x18a1b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_18a1b8:
    // 0x18a1b8: 0x10000004  b           . + 4 + (0x4 << 2)
label_18a1bc:
    if (ctx->pc == 0x18A1BCu) {
        ctx->pc = 0x18A1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A1B8u;
        // 0x18a1bc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A1C0u;
        goto label_18a1c0;
    }
    ctx->pc = 0x18A1B8u;
    {
        const bool branch_taken_0x18a1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A1B8u;
        // 0x18a1bc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a1b8) {
            ctx->pc = 0x18A1CCu;
            goto label_18a1cc;
        }
    }
    ctx->pc = 0x18A1C0u;
label_18a1c0:
    // 0x18a1c0: 0x3442b8c3  ori         $v0, $v0, 0xB8C3
    ctx->pc = 0x18a1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47299);
label_18a1c4:
    // 0x18a1c4: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x18a1c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_18a1c8:
    // 0x18a1c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18a1c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18a1cc:
    // 0x18a1cc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x18a1ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18a1d0:
    // 0x18a1d0: 0x92a20233  lbu         $v0, 0x233($s5)
    ctx->pc = 0x18a1d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 563)));
label_18a1d4:
    // 0x18a1d4: 0x10500077  beq         $v0, $s0, . + 4 + (0x77 << 2)
label_18a1d8:
    if (ctx->pc == 0x18A1D8u) {
        ctx->pc = 0x18A1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A1D4u;
        // 0x18a1d8: 0x2931021  addu        $v0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A1DCu;
        goto label_18a1dc;
    }
    ctx->pc = 0x18A1D4u;
    {
        const bool branch_taken_0x18a1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x18A1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A1D4u;
        // 0x18a1d8: 0x2931021  addu        $v0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a1d4) {
            ctx->pc = 0x18A3B4u;
            goto label_18a3b4;
        }
    }
    ctx->pc = 0x18A1DCu;
label_18a1dc:
    // 0x18a1dc: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x18a1dcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18a1e0:
    // 0x18a1e0: 0x12400074  beqz        $s2, . + 4 + (0x74 << 2)
label_18a1e4:
    if (ctx->pc == 0x18A1E4u) {
        ctx->pc = 0x18A1E8u;
        goto label_18a1e8;
    }
    ctx->pc = 0x18A1E0u;
    {
        const bool branch_taken_0x18a1e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a1e0) {
            ctx->pc = 0x18A3B4u;
            goto label_18a3b4;
        }
    }
    ctx->pc = 0x18A1E8u;
label_18a1e8:
    // 0x18a1e8: 0x9242023a  lbu         $v0, 0x23A($s2)
    ctx->pc = 0x18a1e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 570)));
label_18a1ec:
    // 0x18a1ec: 0x14400071  bnez        $v0, . + 4 + (0x71 << 2)
label_18a1f0:
    if (ctx->pc == 0x18A1F0u) {
        ctx->pc = 0x18A1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A1ECu;
        // 0x18a1f0: 0x27a4008c  addiu       $a0, $sp, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A1F4u;
        goto label_18a1f4;
    }
    ctx->pc = 0x18A1ECu;
    {
        const bool branch_taken_0x18a1ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A1ECu;
        // 0x18a1f0: 0x27a4008c  addiu       $a0, $sp, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a1ec) {
            ctx->pc = 0x18A3B4u;
            goto label_18a3b4;
        }
    }
    ctx->pc = 0x18A1F4u;
label_18a1f4:
    // 0x18a1f4: 0x26a50150  addiu       $a1, $s5, 0x150
    ctx->pc = 0x18a1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 336));
label_18a1f8:
    // 0x18a1f8: 0xc0439e8  jal         func_10E7A0
label_18a1fc:
    if (ctx->pc == 0x18A1FCu) {
        ctx->pc = 0x18A1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A1F8u;
        // 0x18a1fc: 0x26460150  addiu       $a2, $s2, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A200u;
        goto label_18a200;
    }
    ctx->pc = 0x18A1F8u;
    SET_GPR_U32(ctx, 31, 0x18A200u);
    ctx->pc = 0x18A1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A1F8u;
    // 0x18a1fc: 0x26460150  addiu       $a2, $s2, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E7A0u, 0x18A1F8u, 0x18A200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A200u;
label_18a200:
    // 0x18a200: 0x1440006a  bnez        $v0, . + 4 + (0x6A << 2)
label_18a204:
    if (ctx->pc == 0x18A204u) {
        ctx->pc = 0x18A208u;
        goto label_18a208;
    }
    ctx->pc = 0x18A200u;
    {
        const bool branch_taken_0x18a200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a200) {
            ctx->pc = 0x18A3ACu;
            goto label_18a3ac;
        }
    }
    ctx->pc = 0x18A208u;
label_18a208:
    // 0x18a208: 0xc6a10044  lwc1        $f1, 0x44($s5)
    ctx->pc = 0x18a208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18a20c:
    // 0x18a20c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x18a20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_18a210:
    // 0x18a210: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x18a210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18a214:
    // 0x18a214: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18a214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18a218:
    // 0x18a218: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18a218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18a21c:
    // 0x18a21c: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x18a21cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_18a220:
    // 0x18a220: 0x46026036  c.le.s      $f12, $f2
    ctx->pc = 0x18a220u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18a224:
    // 0x18a224: 0x0  nop
    ctx->pc = 0x18a224u;
    // NOP
label_18a228:
    // 0x18a228: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_18a22c:
    if (ctx->pc == 0x18A22Cu) {
        ctx->pc = 0x18A22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A228u;
        // 0x18a22c: 0xe7ac008c  swc1        $f12, 0x8C($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A230u;
        goto label_18a230;
    }
    ctx->pc = 0x18A228u;
    {
        const bool branch_taken_0x18a228 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18A22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A228u;
        // 0x18a22c: 0xe7ac008c  swc1        $f12, 0x8C($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a228) {
            ctx->pc = 0x18A244u;
            goto label_18a244;
        }
    }
    ctx->pc = 0x18A230u;
label_18a230:
    // 0x18a230: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x18a230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_18a234:
    // 0x18a234: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18a234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18a238:
    // 0x18a238: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18a238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18a23c:
    // 0x18a23c: 0x1000000d  b           . + 4 + (0xD << 2)
label_18a240:
    if (ctx->pc == 0x18A240u) {
        ctx->pc = 0x18A240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A23Cu;
        // 0x18a240: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A244u;
        goto label_18a244;
    }
    ctx->pc = 0x18A23Cu;
    {
        const bool branch_taken_0x18a23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A23Cu;
        // 0x18a240: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a23c) {
            ctx->pc = 0x18A274u;
            goto label_18a274;
        }
    }
    ctx->pc = 0x18A244u;
label_18a244:
    // 0x18a244: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x18a244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_18a248:
    // 0x18a248: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18a248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18a24c:
    // 0x18a24c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18a24cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18a250:
    // 0x18a250: 0x0  nop
    ctx->pc = 0x18a250u;
    // NOP
label_18a254:
    // 0x18a254: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x18a254u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18a258:
    // 0x18a258: 0x0  nop
    ctx->pc = 0x18a258u;
    // NOP
label_18a25c:
    // 0x18a25c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_18a260:
    if (ctx->pc == 0x18A260u) {
        ctx->pc = 0x18A260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A25Cu;
        // 0x18a260: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A264u;
        goto label_18a264;
    }
    ctx->pc = 0x18A25Cu;
    {
        const bool branch_taken_0x18a25c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18A260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A25Cu;
        // 0x18a260: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a25c) {
            ctx->pc = 0x18A274u;
            goto label_18a274;
        }
    }
    ctx->pc = 0x18A264u;
label_18a264:
    // 0x18a264: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18a264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18a268:
    // 0x18a268: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18a268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18a26c:
    // 0x18a26c: 0x10000001  b           . + 4 + (0x1 << 2)
label_18a270:
    if (ctx->pc == 0x18A270u) {
        ctx->pc = 0x18A270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A26Cu;
        // 0x18a270: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A274u;
        goto label_18a274;
    }
    ctx->pc = 0x18A26Cu;
    {
        const bool branch_taken_0x18a26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A26Cu;
        // 0x18a270: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a26c) {
            ctx->pc = 0x18A274u;
            goto label_18a274;
        }
    }
    ctx->pc = 0x18A274u;
label_18a274:
    // 0x18a274: 0xc06d448  jal         func_1B5120
label_18a278:
    if (ctx->pc == 0x18A278u) {
        ctx->pc = 0x18A27Cu;
        goto label_18a27c;
    }
    ctx->pc = 0x18A274u;
    SET_GPR_U32(ctx, 31, 0x18A27Cu);
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x18A27Cu;
label_18a27c:
    // 0x18a27c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x18a27cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18a280:
    // 0x18a280: 0x0  nop
    ctx->pc = 0x18a280u;
    // NOP
label_18a284:
    // 0x18a284: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_18a288:
    if (ctx->pc == 0x18A288u) {
        ctx->pc = 0x18A28Cu;
        goto label_18a28c;
    }
    ctx->pc = 0x18A284u;
    {
        const bool branch_taken_0x18a284 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18a284) {
            ctx->pc = 0x18A294u;
            goto label_18a294;
        }
    }
    ctx->pc = 0x18A28Cu;
label_18a28c:
    // 0x18a28c: 0x1000004d  b           . + 4 + (0x4D << 2)
label_18a290:
    if (ctx->pc == 0x18A290u) {
        ctx->pc = 0x18A290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A28Cu;
        // 0x18a290: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A294u;
        goto label_18a294;
    }
    ctx->pc = 0x18A28Cu;
    {
        const bool branch_taken_0x18a28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A28Cu;
        // 0x18a290: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a28c) {
            ctx->pc = 0x18A3C4u;
            goto label_18a3c4;
        }
    }
    ctx->pc = 0x18A294u;
label_18a294:
    // 0x18a294: 0xc7ac008c  lwc1        $f12, 0x8C($sp)
    ctx->pc = 0x18a294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18a298:
    // 0x18a298: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x18a298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_18a29c:
    // 0x18a29c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18a29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18a2a0:
    // 0x18a2a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18a2a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18a2a4:
    // 0x18a2a4: 0x0  nop
    ctx->pc = 0x18a2a4u;
    // NOP
label_18a2a8:
    // 0x18a2a8: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x18a2a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18a2ac:
    // 0x18a2ac: 0x0  nop
    ctx->pc = 0x18a2acu;
    // NOP
label_18a2b0:
    // 0x18a2b0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_18a2b4:
    if (ctx->pc == 0x18A2B4u) {
        ctx->pc = 0x18A2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A2B0u;
        // 0x18a2b4: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A2B8u;
        goto label_18a2b8;
    }
    ctx->pc = 0x18A2B0u;
    {
        const bool branch_taken_0x18a2b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18A2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A2B0u;
        // 0x18a2b4: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a2b0) {
            ctx->pc = 0x18A2CCu;
            goto label_18a2cc;
        }
    }
    ctx->pc = 0x18A2B8u;
label_18a2b8:
    // 0x18a2b8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x18a2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_18a2bc:
    // 0x18a2bc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18a2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18a2c0:
    // 0x18a2c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18a2c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18a2c4:
    // 0x18a2c4: 0x1000000d  b           . + 4 + (0xD << 2)
label_18a2c8:
    if (ctx->pc == 0x18A2C8u) {
        ctx->pc = 0x18A2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A2C4u;
        // 0x18a2c8: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A2CCu;
        goto label_18a2cc;
    }
    ctx->pc = 0x18A2C4u;
    {
        const bool branch_taken_0x18a2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A2C4u;
        // 0x18a2c8: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a2c4) {
            ctx->pc = 0x18A2FCu;
            goto label_18a2fc;
        }
    }
    ctx->pc = 0x18A2CCu;
label_18a2cc:
    // 0x18a2cc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18a2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18a2d0:
    // 0x18a2d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18a2d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18a2d4:
    // 0x18a2d4: 0x0  nop
    ctx->pc = 0x18a2d4u;
    // NOP
label_18a2d8:
    // 0x18a2d8: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x18a2d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18a2dc:
    // 0x18a2dc: 0x0  nop
    ctx->pc = 0x18a2dcu;
    // NOP
label_18a2e0:
    // 0x18a2e0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_18a2e4:
    if (ctx->pc == 0x18A2E4u) {
        ctx->pc = 0x18A2E8u;
        goto label_18a2e8;
    }
    ctx->pc = 0x18A2E0u;
    {
        const bool branch_taken_0x18a2e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18a2e0) {
            ctx->pc = 0x18A2FCu;
            goto label_18a2fc;
        }
    }
    ctx->pc = 0x18A2E8u;
label_18a2e8:
    // 0x18a2e8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x18a2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_18a2ec:
    // 0x18a2ec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18a2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18a2f0:
    // 0x18a2f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18a2f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18a2f4:
    // 0x18a2f4: 0x10000001  b           . + 4 + (0x1 << 2)
label_18a2f8:
    if (ctx->pc == 0x18A2F8u) {
        ctx->pc = 0x18A2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A2F4u;
        // 0x18a2f8: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A2FCu;
        goto label_18a2fc;
    }
    ctx->pc = 0x18A2F4u;
    {
        const bool branch_taken_0x18a2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A2F4u;
        // 0x18a2f8: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a2f4) {
            ctx->pc = 0x18A2FCu;
            goto label_18a2fc;
        }
    }
    ctx->pc = 0x18A2FCu;
label_18a2fc:
    // 0x18a2fc: 0xc06d448  jal         func_1B5120
label_18a300:
    if (ctx->pc == 0x18A300u) {
        ctx->pc = 0x18A304u;
        goto label_18a304;
    }
    ctx->pc = 0x18A2FCu;
    SET_GPR_U32(ctx, 31, 0x18A304u);
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x18A304u;
label_18a304:
    // 0x18a304: 0x3c023f9c  lui         $v0, 0x3F9C
    ctx->pc = 0x18a304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16284 << 16));
label_18a308:
    // 0x18a308: 0x344261ab  ori         $v0, $v0, 0x61AB
    ctx->pc = 0x18a308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25003);
label_18a30c:
    // 0x18a30c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18a30cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18a310:
    // 0x18a310: 0x0  nop
    ctx->pc = 0x18a310u;
    // NOP
label_18a314:
    // 0x18a314: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x18a314u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18a318:
    // 0x18a318: 0x0  nop
    ctx->pc = 0x18a318u;
    // NOP
label_18a31c:
    // 0x18a31c: 0x45000025  bc1f        . + 4 + (0x25 << 2)
label_18a320:
    if (ctx->pc == 0x18A320u) {
        ctx->pc = 0x18A324u;
        goto label_18a324;
    }
    ctx->pc = 0x18A31Cu;
    {
        const bool branch_taken_0x18a31c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18a31c) {
            ctx->pc = 0x18A3B4u;
            goto label_18a3b4;
        }
    }
    ctx->pc = 0x18A324u;
label_18a324:
    // 0x18a324: 0xc6a30150  lwc1        $f3, 0x150($s5)
    ctx->pc = 0x18a324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_18a328:
    // 0x18a328: 0x92a30231  lbu         $v1, 0x231($s5)
    ctx->pc = 0x18a328u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 561)));
label_18a32c:
    // 0x18a32c: 0xc6420150  lwc1        $f2, 0x150($s2)
    ctx->pc = 0x18a32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_18a330:
    // 0x18a330: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18a330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18a334:
    // 0x18a334: 0xc6a10158  lwc1        $f1, 0x158($s5)
    ctx->pc = 0x18a334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18a338:
    // 0x18a338: 0xc6400158  lwc1        $f0, 0x158($s2)
    ctx->pc = 0x18a338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18a33c:
    // 0x18a33c: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x18a33cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_18a340:
    // 0x18a340: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18a340u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_18a344:
    // 0x18a344: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x18a344u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_18a348:
    // 0x18a348: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_18a34c:
    if (ctx->pc == 0x18A34Cu) {
        ctx->pc = 0x18A34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A348u;
        // 0x18a34c: 0x4600009c  madd.s      $f2, $f0, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A350u;
        goto label_18a350;
    }
    ctx->pc = 0x18A348u;
    {
        const bool branch_taken_0x18a348 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18A34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A348u;
        // 0x18a34c: 0x4600009c  madd.s      $f2, $f0, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a348) {
            ctx->pc = 0x18A35Cu;
            goto label_18a35c;
        }
    }
    ctx->pc = 0x18A350u;
label_18a350:
    // 0x18a350: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x18a350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_18a354:
    // 0x18a354: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_18a358:
    if (ctx->pc == 0x18A358u) {
        ctx->pc = 0x18A35Cu;
        goto label_18a35c;
    }
    ctx->pc = 0x18A354u;
    {
        const bool branch_taken_0x18a354 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18a354) {
            ctx->pc = 0x18A374u;
            goto label_18a374;
        }
    }
    ctx->pc = 0x18A35Cu;
label_18a35c:
    // 0x18a35c: 0x0  nop
    ctx->pc = 0x18a35cu;
    // NOP
label_18a360:
    // 0x18a360: 0xc6400154  lwc1        $f0, 0x154($s2)
    ctx->pc = 0x18a360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18a364:
    // 0x18a364: 0xc6a10154  lwc1        $f1, 0x154($s5)
    ctx->pc = 0x18a364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18a368:
    // 0x18a368: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18a368u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_18a36c:
    // 0x18a36c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x18a36cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_18a370:
    // 0x18a370: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x18a370u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_18a374:
    // 0x18a374: 0x0  nop
    ctx->pc = 0x18a374u;
    // NOP
label_18a378:
    // 0x18a378: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x18a378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
label_18a37c:
    // 0x18a37c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18a37cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18a380:
    // 0x18a380: 0x0  nop
    ctx->pc = 0x18a380u;
    // NOP
label_18a384:
    // 0x18a384: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x18a384u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18a388:
    // 0x18a388: 0x0  nop
    ctx->pc = 0x18a388u;
    // NOP
label_18a38c:
    // 0x18a38c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_18a390:
    if (ctx->pc == 0x18A390u) {
        ctx->pc = 0x18A394u;
        goto label_18a394;
    }
    ctx->pc = 0x18A38Cu;
    {
        const bool branch_taken_0x18a38c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18a38c) {
            ctx->pc = 0x18A3B4u;
            goto label_18a3b4;
        }
    }
    ctx->pc = 0x18A394u;
label_18a394:
    // 0x18a394: 0x46151036  c.le.s      $f2, $f21
    ctx->pc = 0x18a394u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18a398:
    // 0x18a398: 0x0  nop
    ctx->pc = 0x18a398u;
    // NOP
label_18a39c:
    // 0x18a39c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_18a3a0:
    if (ctx->pc == 0x18A3A0u) {
        ctx->pc = 0x18A3A4u;
        goto label_18a3a4;
    }
    ctx->pc = 0x18A39Cu;
    {
        const bool branch_taken_0x18a39c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18a39c) {
            ctx->pc = 0x18A3B4u;
            goto label_18a3b4;
        }
    }
    ctx->pc = 0x18A3A4u;
label_18a3a4:
    // 0x18a3a4: 0x10000007  b           . + 4 + (0x7 << 2)
label_18a3a8:
    if (ctx->pc == 0x18A3A8u) {
        ctx->pc = 0x18A3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A3A4u;
        // 0x18a3a8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A3ACu;
        goto label_18a3ac;
    }
    ctx->pc = 0x18A3A4u;
    {
        const bool branch_taken_0x18a3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A3A4u;
        // 0x18a3a8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a3a4) {
            ctx->pc = 0x18A3C4u;
            goto label_18a3c4;
        }
    }
    ctx->pc = 0x18A3ACu;
label_18a3ac:
    // 0x18a3ac: 0x10000005  b           . + 4 + (0x5 << 2)
label_18a3b0:
    if (ctx->pc == 0x18A3B0u) {
        ctx->pc = 0x18A3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A3ACu;
        // 0x18a3b0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A3B4u;
        goto label_18a3b4;
    }
    ctx->pc = 0x18A3ACu;
    {
        const bool branch_taken_0x18a3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A3ACu;
        // 0x18a3b0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a3ac) {
            ctx->pc = 0x18A3C4u;
            goto label_18a3c4;
        }
    }
    ctx->pc = 0x18A3B4u;
label_18a3b4:
    // 0x18a3b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18a3b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_18a3b8:
    // 0x18a3b8: 0x2a020009  slti        $v0, $s0, 0x9
    ctx->pc = 0x18a3b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
label_18a3bc:
    // 0x18a3bc: 0x1440ff84  bnez        $v0, . + 4 + (-0x7C << 2)
label_18a3c0:
    if (ctx->pc == 0x18A3C0u) {
        ctx->pc = 0x18A3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A3BCu;
        // 0x18a3c0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A3C4u;
        goto label_18a3c4;
    }
    ctx->pc = 0x18A3BCu;
    {
        const bool branch_taken_0x18a3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A3BCu;
        // 0x18a3c0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a3bc) {
            ctx->pc = 0x18A1D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a1d0;
        }
    }
    ctx->pc = 0x18A3C4u;
label_18a3c4:
    // 0x18a3c4: 0x0  nop
    ctx->pc = 0x18a3c4u;
    // NOP
label_18a3c8:
    // 0x18a3c8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x18a3c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18a3cc:
    // 0x18a3cc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x18a3ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_18a3d0:
    // 0x18a3d0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x18a3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_18a3d4:
    // 0x18a3d4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x18a3d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_18a3d8:
    // 0x18a3d8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x18a3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_18a3dc:
    // 0x18a3dc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x18a3dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_18a3e0:
    // 0x18a3e0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x18a3e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_18a3e4:
    // 0x18a3e4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x18a3e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18a3e8:
    // 0x18a3e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18a3e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18a3ec:
    // 0x18a3ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18a3ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18a3f0:
    // 0x18a3f0: 0x3e00008  jr          $ra
label_18a3f4:
    if (ctx->pc == 0x18A3F4u) {
        ctx->pc = 0x18A3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A3F0u;
        // 0x18a3f4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A3F8u;
        goto label_18a3f8;
    }
    ctx->pc = 0x18A3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A3F0u;
        // 0x18a3f4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A3F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A3F8u;
label_18a3f8:
    // 0x18a3f8: 0x0  nop
    ctx->pc = 0x18a3f8u;
    // NOP
label_18a3fc:
    // 0x18a3fc: 0x0  nop
    ctx->pc = 0x18a3fcu;
    // NOP
label_18a400:
    // 0x18a400: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x18a400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_18a404:
    // 0x18a404: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18a404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18a408:
    // 0x18a408: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x18a408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_18a40c:
    // 0x18a40c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x18a40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_18a410:
    // 0x18a410: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x18a410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_18a414:
    // 0x18a414: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x18a414u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18a418:
    // 0x18a418: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x18a418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_18a41c:
    // 0x18a41c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x18a41cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18a420:
    // 0x18a420: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x18a420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_18a424:
    // 0x18a424: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x18a424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_18a428:
    // 0x18a428: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18a428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_18a42c:
    // 0x18a42c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18a42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_18a430:
    // 0x18a430: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x18a430u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_18a434:
    // 0x18a434: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x18a434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_18a438:
    // 0x18a438: 0x90630013  lbu         $v1, 0x13($v1)
    ctx->pc = 0x18a438u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 19)));
label_18a43c:
    // 0x18a43c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_18a440:
    if (ctx->pc == 0x18A440u) {
        ctx->pc = 0x18A440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A43Cu;
        // 0x18a440: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A444u;
        goto label_18a444;
    }
    ctx->pc = 0x18A43Cu;
    {
        const bool branch_taken_0x18a43c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18A440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A43Cu;
        // 0x18a440: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a43c) {
            ctx->pc = 0x18A450u;
            goto label_18a450;
        }
    }
    ctx->pc = 0x18A444u;
label_18a444:
    // 0x18a444: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x18a444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_18a448:
    // 0x18a448: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_18a44c:
    if (ctx->pc == 0x18A44Cu) {
        ctx->pc = 0x18A44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A448u;
        // 0x18a44c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A450u;
        goto label_18a450;
    }
    ctx->pc = 0x18A448u;
    {
        const bool branch_taken_0x18a448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18A44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A448u;
        // 0x18a44c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a448) {
            ctx->pc = 0x18A454u;
            goto label_18a454;
        }
    }
    ctx->pc = 0x18A450u;
label_18a450:
    // 0x18a450: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x18a450u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18a454:
    // 0x18a454: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x18a454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_18a458:
    // 0x18a458: 0xc066e44  jal         func_19B910
label_18a45c:
    if (ctx->pc == 0x18A45Cu) {
        ctx->pc = 0x18A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A458u;
        // 0x18a45c: 0xe6d40028  swc1        $f20, 0x28($s6) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A460u;
        goto label_18a460;
    }
    ctx->pc = 0x18A458u;
    SET_GPR_U32(ctx, 31, 0x18A460u);
    ctx->pc = 0x18A45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A458u;
    // 0x18a45c: 0xe6d40028  swc1        $f20, 0x28($s6) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x18A460u;
label_18a460:
    // 0x18a460: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x18a460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_18a464:
    // 0x18a464: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x18a464u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_18a468:
    // 0x18a468: 0xc066ec0  jal         func_19BB00
label_18a46c:
    if (ctx->pc == 0x18A46Cu) {
        ctx->pc = 0x18A46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A468u;
        // 0x18a46c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A470u;
        goto label_18a470;
    }
    ctx->pc = 0x18A468u;
    SET_GPR_U32(ctx, 31, 0x18A470u);
    ctx->pc = 0x18A46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A468u;
    // 0x18a46c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x18A470u;
label_18a470:
    // 0x18a470: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x18a470u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18a474:
    // 0x18a474: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x18a474u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_18a478:
    // 0x18a478: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x18a478u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_18a47c:
    // 0x18a47c: 0x2d31821  addu        $v1, $s6, $s3
    ctx->pc = 0x18a47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
label_18a480:
    // 0x18a480: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x18a480u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_18a484:
    // 0x18a484: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_18a488:
    if (ctx->pc == 0x18A488u) {
        ctx->pc = 0x18A48Cu;
        goto label_18a48c;
    }
    ctx->pc = 0x18A484u;
    {
        const bool branch_taken_0x18a484 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a484) {
            ctx->pc = 0x18A4E0u;
            goto label_18a4e0;
        }
    }
    ctx->pc = 0x18A48Cu;
label_18a48c:
    // 0x18a48c: 0x9203023a  lbu         $v1, 0x23A($s0)
    ctx->pc = 0x18a48cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 570)));
label_18a490:
    // 0x18a490: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_18a494:
    if (ctx->pc == 0x18A494u) {
        ctx->pc = 0x18A494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A490u;
        // 0x18a494: 0x1218c0  sll         $v1, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A498u;
        goto label_18a498;
    }
    ctx->pc = 0x18A490u;
    {
        const bool branch_taken_0x18a490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A490u;
        // 0x18a494: 0x1218c0  sll         $v1, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a490) {
            ctx->pc = 0x18A4E0u;
            goto label_18a4e0;
        }
    }
    ctx->pc = 0x18A498u;
label_18a498:
    // 0x18a498: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x18a498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_18a49c:
    // 0x18a49c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x18a49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_18a4a0:
    // 0x18a4a0: 0x2442f8b0  addiu       $v0, $v0, -0x750
    ctx->pc = 0x18a4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965424));
label_18a4a4:
    // 0x18a4a4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x18a4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_18a4a8:
    // 0x18a4a8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x18a4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_18a4ac:
    // 0x18a4ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18a4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18a4b0:
    // 0x18a4b0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x18a4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_18a4b4:
    // 0x18a4b4: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x18a4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_18a4b8:
    // 0x18a4b8: 0xc066d7a  jal         func_19B5E8
label_18a4bc:
    if (ctx->pc == 0x18A4BCu) {
        ctx->pc = 0x18A4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A4B8u;
        // 0x18a4bc: 0x543021  addu        $a2, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A4C0u;
        goto label_18a4c0;
    }
    ctx->pc = 0x18A4B8u;
    SET_GPR_U32(ctx, 31, 0x18A4C0u);
    ctx->pc = 0x18A4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A4B8u;
    // 0x18a4bc: 0x543021  addu        $a2, $v0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x18A4C0u;
label_18a4c0:
    // 0x18a4c0: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x18a4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18a4c4:
    // 0x18a4c4: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x18a4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18a4c8:
    // 0x18a4c8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18a4c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18a4cc:
    // 0x18a4cc: 0xe6000210  swc1        $f0, 0x210($s0)
    ctx->pc = 0x18a4ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 528), bits); }
label_18a4d0:
    // 0x18a4d0: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x18a4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18a4d4:
    // 0x18a4d4: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x18a4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18a4d8:
    // 0x18a4d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18a4d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18a4dc:
    // 0x18a4dc: 0xe6000214  swc1        $f0, 0x214($s0)
    ctx->pc = 0x18a4dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 532), bits); }
label_18a4e0:
    // 0x18a4e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18a4e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_18a4e4:
    // 0x18a4e4: 0x2a230009  slti        $v1, $s1, 0x9
    ctx->pc = 0x18a4e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
label_18a4e8:
    // 0x18a4e8: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x18a4e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_18a4ec:
    // 0x18a4ec: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
label_18a4f0:
    if (ctx->pc == 0x18A4F0u) {
        ctx->pc = 0x18A4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A4ECu;
        // 0x18a4f0: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A4F4u;
        goto label_18a4f4;
    }
    ctx->pc = 0x18A4ECu;
    {
        const bool branch_taken_0x18a4ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A4ECu;
        // 0x18a4f0: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a4ec) {
            ctx->pc = 0x18A47Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a47c;
        }
    }
    ctx->pc = 0x18A4F4u;
label_18a4f4:
    // 0x18a4f4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x18a4f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_18a4f8:
    // 0x18a4f8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x18a4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_18a4fc:
    // 0x18a4fc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x18a4fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_18a500:
    // 0x18a500: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x18a500u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_18a504:
    // 0x18a504: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x18a504u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_18a508:
    // 0x18a508: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x18a508u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_18a50c:
    // 0x18a50c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x18a50cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18a510:
    // 0x18a510: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18a510u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18a514:
    // 0x18a514: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18a514u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18a518:
    // 0x18a518: 0x3e00008  jr          $ra
label_18a51c:
    if (ctx->pc == 0x18A51Cu) {
        ctx->pc = 0x18A51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A518u;
        // 0x18a51c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A520u;
        goto label_18a520;
    }
    ctx->pc = 0x18A518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A518u;
        // 0x18a51c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A520u;
label_18a520:
    // 0x18a520: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18a520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_18a524:
    // 0x18a524: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x18a524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_18a528:
    // 0x18a528: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18a528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_18a52c:
    // 0x18a52c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18a52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_18a530:
    // 0x18a530: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18a530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18a534:
    // 0x18a534: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18a534u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18a538:
    // 0x18a538: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18a538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18a53c:
    // 0x18a53c: 0x8c840024  lw          $a0, 0x24($a0)
    ctx->pc = 0x18a53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_18a540:
    // 0x18a540: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x18a540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18a544:
    // 0x18a544: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x18a544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_18a548:
    // 0x18a548: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_18a54c:
    if (ctx->pc == 0x18A54Cu) {
        ctx->pc = 0x18A550u;
        goto label_18a550;
    }
    ctx->pc = 0x18A548u;
    {
        const bool branch_taken_0x18a548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a548) {
            ctx->pc = 0x18A56Cu;
            goto label_18a56c;
        }
    }
    ctx->pc = 0x18A550u;
label_18a550:
    // 0x18a550: 0x8e440038  lw          $a0, 0x38($s2)
    ctx->pc = 0x18a550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_18a554:
    // 0x18a554: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x18a554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_18a558:
    // 0x18a558: 0x8484003c  lh          $a0, 0x3C($a0)
    ctx->pc = 0x18a558u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
label_18a55c:
    // 0x18a55c: 0x10830120  beq         $a0, $v1, . + 4 + (0x120 << 2)
label_18a560:
    if (ctx->pc == 0x18A560u) {
        ctx->pc = 0x18A560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A55Cu;
        // 0x18a560: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A564u;
        goto label_18a564;
    }
    ctx->pc = 0x18A55Cu;
    {
        const bool branch_taken_0x18a55c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x18A560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A55Cu;
        // 0x18a560: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a55c) {
            ctx->pc = 0x18A9E0u;
            { ctx->pc = 0x18a9e0; return; }
        }
    }
    ctx->pc = 0x18A564u;
label_18a564:
    // 0x18a564: 0x1083011e  beq         $a0, $v1, . + 4 + (0x11E << 2)
label_18a568:
    if (ctx->pc == 0x18A568u) {
        ctx->pc = 0x18A56Cu;
        goto label_18a56c;
    }
    ctx->pc = 0x18A564u;
    {
        const bool branch_taken_0x18a564 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18a564) {
            ctx->pc = 0x18A9E0u;
            { ctx->pc = 0x18a9e0; return; }
        }
    }
    ctx->pc = 0x18A56Cu;
label_18a56c:
    // 0x18a56c: 0x8644003c  lh          $a0, 0x3C($s2)
    ctx->pc = 0x18a56cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
label_18a570:
    // 0x18a570: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x18a570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_18a574:
    // 0x18a574: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_18a578:
    if (ctx->pc == 0x18A578u) {
        ctx->pc = 0x18A578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A574u;
        // 0x18a578: 0x24030073  addiu       $v1, $zero, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A57Cu;
        goto label_18a57c;
    }
    ctx->pc = 0x18A574u;
    {
        const bool branch_taken_0x18a574 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x18A578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A574u;
        // 0x18a578: 0x24030073  addiu       $v1, $zero, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a574) {
            ctx->pc = 0x18A590u;
            goto label_18a590;
        }
    }
    ctx->pc = 0x18A57Cu;
label_18a57c:
    // 0x18a57c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_18a580:
    if (ctx->pc == 0x18A580u) {
        ctx->pc = 0x18A584u;
        goto label_18a584;
    }
    ctx->pc = 0x18A57Cu;
    {
        const bool branch_taken_0x18a57c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18a57c) {
            ctx->pc = 0x18A590u;
            goto label_18a590;
        }
    }
    ctx->pc = 0x18A584u;
label_18a584:
    // 0x18a584: 0x24030046  addiu       $v1, $zero, 0x46
    ctx->pc = 0x18a584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_18a588:
    // 0x18a588: 0x1483002e  bne         $a0, $v1, . + 4 + (0x2E << 2)
label_18a58c:
    if (ctx->pc == 0x18A58Cu) {
        ctx->pc = 0x18A58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A588u;
        // 0x18a58c: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A590u;
        goto label_18a590;
    }
    ctx->pc = 0x18A588u;
    {
        const bool branch_taken_0x18a588 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x18A58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A588u;
        // 0x18a58c: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a588) {
            ctx->pc = 0x18A644u;
            goto label_18a644;
        }
    }
    ctx->pc = 0x18A590u;
label_18a590:
    // 0x18a590: 0xc6410260  lwc1        $f1, 0x260($s2)
    ctx->pc = 0x18a590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18a594:
    // 0x18a594: 0x3c03481c  lui         $v1, 0x481C
    ctx->pc = 0x18a594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18460 << 16));
label_18a598:
    // 0x18a598: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x18a598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_18a59c:
    // 0x18a59c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18a59cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18a5a0:
    // 0x18a5a0: 0x0  nop
    ctx->pc = 0x18a5a0u;
    // NOP
label_18a5a4:
    // 0x18a5a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18a5a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18a5a8:
    // 0x18a5a8: 0x0  nop
    ctx->pc = 0x18a5a8u;
    // NOP
label_18a5ac:
    // 0x18a5ac: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_18a5b0:
    if (ctx->pc == 0x18A5B0u) {
        ctx->pc = 0x18A5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A5ACu;
        // 0x18a5b0: 0x3c033fb2  lui         $v1, 0x3FB2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16306 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A5B4u;
        goto label_18a5b4;
    }
    ctx->pc = 0x18A5ACu;
    {
        const bool branch_taken_0x18a5ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18A5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A5ACu;
        // 0x18a5b0: 0x3c033fb2  lui         $v1, 0x3FB2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16306 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a5ac) {
            ctx->pc = 0x18A5E8u;
            goto label_18a5e8;
        }
    }
    ctx->pc = 0x18A5B4u;
label_18a5b4:
    // 0x18a5b4: 0x92440237  lbu         $a0, 0x237($s2)
    ctx->pc = 0x18a5b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 567)));
label_18a5b8:
    // 0x18a5b8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x18a5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_18a5bc:
    // 0x18a5bc: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
label_18a5c0:
    if (ctx->pc == 0x18A5C0u) {
        ctx->pc = 0x18A5C4u;
        goto label_18a5c4;
    }
    ctx->pc = 0x18A5BCu;
    {
        const bool branch_taken_0x18a5bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x18a5bc) {
            ctx->pc = 0x18A5E4u;
            goto label_18a5e4;
        }
    }
    ctx->pc = 0x18A5C4u;
label_18a5c4:
    // 0x18a5c4: 0x92430232  lbu         $v1, 0x232($s2)
    ctx->pc = 0x18a5c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 562)));
label_18a5c8:
    // 0x18a5c8: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x18a5c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
label_18a5cc:
    // 0x18a5cc: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_18a5d0:
    if (ctx->pc == 0x18A5D0u) {
        ctx->pc = 0x18A5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A5CCu;
        // 0x18a5d0: 0x3c034006  lui         $v1, 0x4006 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16390 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A5D4u;
        goto label_18a5d4;
    }
    ctx->pc = 0x18A5CCu;
    {
        const bool branch_taken_0x18a5cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A5CCu;
        // 0x18a5d0: 0x3c034006  lui         $v1, 0x4006 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16390 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a5cc) {
            ctx->pc = 0x18A5E4u;
            goto label_18a5e4;
        }
    }
    ctx->pc = 0x18A5D4u;
label_18a5d4:
    // 0x18a5d4: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x18a5d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
label_18a5d8:
    // 0x18a5d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18a5d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18a5dc:
    // 0x18a5dc: 0x10000005  b           . + 4 + (0x5 << 2)
label_18a5e0:
    if (ctx->pc == 0x18A5E0u) {
        ctx->pc = 0x18A5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A5DCu;
        // 0x18a5e0: 0xc6400044  lwc1        $f0, 0x44($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A5E4u;
        goto label_18a5e4;
    }
    ctx->pc = 0x18A5DCu;
    {
        const bool branch_taken_0x18a5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A5DCu;
        // 0x18a5e0: 0xc6400044  lwc1        $f0, 0x44($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a5dc) {
            ctx->pc = 0x18A5F4u;
            goto label_18a5f4;
        }
    }
    ctx->pc = 0x18A5E4u;
label_18a5e4:
    // 0x18a5e4: 0x3c033fb2  lui         $v1, 0x3FB2
    ctx->pc = 0x18a5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16306 << 16));
label_18a5e8:
    // 0x18a5e8: 0x3463b8c3  ori         $v1, $v1, 0xB8C3
    ctx->pc = 0x18a5e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47299);
label_18a5ec:
    // 0x18a5ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18a5ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18a5f0:
    // 0x18a5f0: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x18a5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18a5f4:
    // 0x18a5f4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x18a5f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_18a5f8:
    // 0x18a5f8: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x18a5f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_18a5fc:
    // 0x18a5fc: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x18a5fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
label_18a600:
    // 0x18a600: 0x4a000138  vcallms     0x20
    ctx->pc = 0x18a600u;
    {     ctx->vu0_tpc = 0x20;     runtime->executeVU0Microprogram(rdram, ctx, 0x20); }
label_18a604:
    // 0x18a604: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x18a604u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_18a608:
    // 0x18a608: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x18a608u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18a60c:
    // 0x18a60c: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x18a60cu;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
label_18a610:
    // 0x18a610: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x18a610u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18a614:
    // 0x18a614: 0x3c0342fe  lui         $v1, 0x42FE
    ctx->pc = 0x18a614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17150 << 16));
label_18a618:
    // 0x18a618: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18a618u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18a61c:
    // 0x18a61c: 0x0  nop
    ctx->pc = 0x18a61cu;
    // NOP
label_18a620:
    // 0x18a620: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x18a620u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_18a624:
    // 0x18a624: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x18a624u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_18a628:
    // 0x18a628: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18a628u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_18a62c:
    // 0x18a62c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x18a62cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_18a630:
    // 0x18a630: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18a630u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_18a634:
    // 0x18a634: 0xa643019c  sh          $v1, 0x19C($s2)
    ctx->pc = 0x18a634u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 412), (uint16_t)GPR_U32(ctx, 3));
label_18a638:
    // 0x18a638: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18a638u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_18a63c:
    // 0x18a63c: 0x100000e8  b           . + 4 + (0xE8 << 2)
label_18a640:
    if (ctx->pc == 0x18A640u) {
        ctx->pc = 0x18A640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A63Cu;
        // 0x18a640: 0xa643019e  sh          $v1, 0x19E($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A644u;
        goto label_18a644;
    }
    ctx->pc = 0x18A63Cu;
    {
        const bool branch_taken_0x18a63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A63Cu;
        // 0x18a640: 0xa643019e  sh          $v1, 0x19E($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a63c) {
            ctx->pc = 0x18A9E0u;
            { ctx->pc = 0x18a9e0; return; }
        }
    }
    ctx->pc = 0x18A644u;
label_18a644:
    // 0x18a644: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_18a648:
    if (ctx->pc == 0x18A648u) {
        ctx->pc = 0x18A64Cu;
        goto label_18a64c;
    }
    ctx->pc = 0x18A644u;
    {
        const bool branch_taken_0x18a644 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18a644) {
            ctx->pc = 0x18A660u;
            goto label_18a660;
        }
    }
    ctx->pc = 0x18A64Cu;
label_18a64c:
    // 0x18a64c: 0x24030072  addiu       $v1, $zero, 0x72
    ctx->pc = 0x18a64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
label_18a650:
    // 0x18a650: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_18a654:
    if (ctx->pc == 0x18A654u) {
        ctx->pc = 0x18A654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A650u;
        // 0x18a654: 0x24030045  addiu       $v1, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A658u;
        goto label_18a658;
    }
    ctx->pc = 0x18A650u;
    {
        const bool branch_taken_0x18a650 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x18A654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A650u;
        // 0x18a654: 0x24030045  addiu       $v1, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a650) {
            ctx->pc = 0x18A660u;
            goto label_18a660;
        }
    }
    ctx->pc = 0x18A658u;
label_18a658:
    // 0x18a658: 0x1483002e  bne         $a0, $v1, . + 4 + (0x2E << 2)
label_18a65c:
    if (ctx->pc == 0x18A65Cu) {
        ctx->pc = 0x18A660u;
        goto label_18a660;
    }
    ctx->pc = 0x18A658u;
    {
        const bool branch_taken_0x18a658 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x18a658) {
            ctx->pc = 0x18A714u;
            { ctx->pc = 0x18a714; return; }
        }
    }
    ctx->pc = 0x18A660u;
label_18a660:
    // 0x18a660: 0xc6410260  lwc1        $f1, 0x260($s2)
    ctx->pc = 0x18a660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18a664:
    // 0x18a664: 0x3c03481c  lui         $v1, 0x481C
    ctx->pc = 0x18a664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18460 << 16));
label_18a668:
    // 0x18a668: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x18a668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_18a66c:
    // 0x18a66c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18a66cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18a670:
    // 0x18a670: 0x0  nop
    ctx->pc = 0x18a670u;
    // NOP
label_18a674:
    // 0x18a674: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18a674u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18a678:
    // 0x18a678: 0x0  nop
    ctx->pc = 0x18a678u;
    // NOP
label_18a67c:
    // 0x18a67c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x18a680u;
    return;
}

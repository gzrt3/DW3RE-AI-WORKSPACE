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

// Function: FUN_0017d410
// Address: 0x17d410 - 0x27d534
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017d410_part289(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x209e10u: goto label_209e10;
        case 0x209e14u: goto label_209e14;
        case 0x209e18u: goto label_209e18;
        case 0x209e1cu: goto label_209e1c;
        case 0x209e20u: goto label_209e20;
        case 0x209e24u: goto label_209e24;
        case 0x209e28u: goto label_209e28;
        case 0x209e2cu: goto label_209e2c;
        case 0x209e30u: goto label_209e30;
        case 0x209e34u: goto label_209e34;
        case 0x209e38u: goto label_209e38;
        case 0x209e3cu: goto label_209e3c;
        case 0x209e40u: goto label_209e40;
        case 0x209e44u: goto label_209e44;
        case 0x209e48u: goto label_209e48;
        case 0x209e4cu: goto label_209e4c;
        case 0x209e50u: goto label_209e50;
        case 0x209e54u: goto label_209e54;
        case 0x209e58u: goto label_209e58;
        case 0x209e5cu: goto label_209e5c;
        case 0x209e60u: goto label_209e60;
        case 0x209e64u: goto label_209e64;
        case 0x209e68u: goto label_209e68;
        case 0x209e6cu: goto label_209e6c;
        case 0x209e70u: goto label_209e70;
        case 0x209e74u: goto label_209e74;
        case 0x209e78u: goto label_209e78;
        case 0x209e7cu: goto label_209e7c;
        case 0x209e80u: goto label_209e80;
        case 0x209e84u: goto label_209e84;
        case 0x209e88u: goto label_209e88;
        case 0x209e8cu: goto label_209e8c;
        case 0x209e90u: goto label_209e90;
        case 0x209e94u: goto label_209e94;
        case 0x209e98u: goto label_209e98;
        case 0x209e9cu: goto label_209e9c;
        case 0x209ea0u: goto label_209ea0;
        case 0x209ea4u: goto label_209ea4;
        case 0x209ea8u: goto label_209ea8;
        case 0x209eacu: goto label_209eac;
        case 0x209eb0u: goto label_209eb0;
        case 0x209eb4u: goto label_209eb4;
        case 0x209eb8u: goto label_209eb8;
        case 0x209ebcu: goto label_209ebc;
        case 0x209ec0u: goto label_209ec0;
        case 0x209ec4u: goto label_209ec4;
        case 0x209ec8u: goto label_209ec8;
        case 0x209eccu: goto label_209ecc;
        case 0x209ed0u: goto label_209ed0;
        case 0x209ed4u: goto label_209ed4;
        case 0x209ed8u: goto label_209ed8;
        case 0x209edcu: goto label_209edc;
        case 0x209ee0u: goto label_209ee0;
        case 0x209ee4u: goto label_209ee4;
        case 0x209ee8u: goto label_209ee8;
        case 0x209eecu: goto label_209eec;
        case 0x209ef0u: goto label_209ef0;
        case 0x209ef4u: goto label_209ef4;
        case 0x209ef8u: goto label_209ef8;
        case 0x209efcu: goto label_209efc;
        case 0x209f00u: goto label_209f00;
        case 0x209f04u: goto label_209f04;
        case 0x209f08u: goto label_209f08;
        case 0x209f0cu: goto label_209f0c;
        case 0x209f10u: goto label_209f10;
        case 0x209f14u: goto label_209f14;
        case 0x209f18u: goto label_209f18;
        case 0x209f1cu: goto label_209f1c;
        case 0x209f20u: goto label_209f20;
        case 0x209f24u: goto label_209f24;
        case 0x209f28u: goto label_209f28;
        case 0x209f2cu: goto label_209f2c;
        case 0x209f30u: goto label_209f30;
        case 0x209f34u: goto label_209f34;
        case 0x209f38u: goto label_209f38;
        case 0x209f3cu: goto label_209f3c;
        case 0x209f40u: goto label_209f40;
        case 0x209f44u: goto label_209f44;
        case 0x209f48u: goto label_209f48;
        case 0x209f4cu: goto label_209f4c;
        case 0x209f50u: goto label_209f50;
        case 0x209f54u: goto label_209f54;
        case 0x209f58u: goto label_209f58;
        case 0x209f5cu: goto label_209f5c;
        case 0x209f60u: goto label_209f60;
        case 0x209f64u: goto label_209f64;
        case 0x209f68u: goto label_209f68;
        case 0x209f6cu: goto label_209f6c;
        case 0x209f70u: goto label_209f70;
        case 0x209f74u: goto label_209f74;
        case 0x209f78u: goto label_209f78;
        case 0x209f7cu: goto label_209f7c;
        case 0x209f80u: goto label_209f80;
        case 0x209f84u: goto label_209f84;
        case 0x209f88u: goto label_209f88;
        case 0x209f8cu: goto label_209f8c;
        case 0x209f90u: goto label_209f90;
        case 0x209f94u: goto label_209f94;
        case 0x209f98u: goto label_209f98;
        case 0x209f9cu: goto label_209f9c;
        case 0x209fa0u: goto label_209fa0;
        case 0x209fa4u: goto label_209fa4;
        case 0x209fa8u: goto label_209fa8;
        case 0x209facu: goto label_209fac;
        case 0x209fb0u: goto label_209fb0;
        case 0x209fb4u: goto label_209fb4;
        case 0x209fb8u: goto label_209fb8;
        case 0x209fbcu: goto label_209fbc;
        case 0x209fc0u: goto label_209fc0;
        case 0x209fc4u: goto label_209fc4;
        case 0x209fc8u: goto label_209fc8;
        case 0x209fccu: goto label_209fcc;
        case 0x209fd0u: goto label_209fd0;
        case 0x209fd4u: goto label_209fd4;
        case 0x209fd8u: goto label_209fd8;
        case 0x209fdcu: goto label_209fdc;
        case 0x209fe0u: goto label_209fe0;
        case 0x209fe4u: goto label_209fe4;
        case 0x209fe8u: goto label_209fe8;
        case 0x209fecu: goto label_209fec;
        case 0x209ff0u: goto label_209ff0;
        case 0x209ff4u: goto label_209ff4;
        case 0x209ff8u: goto label_209ff8;
        case 0x209ffcu: goto label_209ffc;
        case 0x20a000u: goto label_20a000;
        case 0x20a004u: goto label_20a004;
        case 0x20a008u: goto label_20a008;
        case 0x20a00cu: goto label_20a00c;
        case 0x20a010u: goto label_20a010;
        case 0x20a014u: goto label_20a014;
        case 0x20a018u: goto label_20a018;
        case 0x20a01cu: goto label_20a01c;
        case 0x20a020u: goto label_20a020;
        case 0x20a024u: goto label_20a024;
        case 0x20a028u: goto label_20a028;
        case 0x20a02cu: goto label_20a02c;
        case 0x20a030u: goto label_20a030;
        case 0x20a034u: goto label_20a034;
        case 0x20a038u: goto label_20a038;
        case 0x20a03cu: goto label_20a03c;
        case 0x20a040u: goto label_20a040;
        case 0x20a044u: goto label_20a044;
        case 0x20a048u: goto label_20a048;
        case 0x20a04cu: goto label_20a04c;
        case 0x20a050u: goto label_20a050;
        case 0x20a054u: goto label_20a054;
        case 0x20a058u: goto label_20a058;
        case 0x20a05cu: goto label_20a05c;
        case 0x20a060u: goto label_20a060;
        case 0x20a064u: goto label_20a064;
        case 0x20a068u: goto label_20a068;
        case 0x20a06cu: goto label_20a06c;
        case 0x20a070u: goto label_20a070;
        case 0x20a074u: goto label_20a074;
        case 0x20a078u: goto label_20a078;
        case 0x20a07cu: goto label_20a07c;
        case 0x20a080u: goto label_20a080;
        case 0x20a084u: goto label_20a084;
        case 0x20a088u: goto label_20a088;
        case 0x20a08cu: goto label_20a08c;
        case 0x20a090u: goto label_20a090;
        case 0x20a094u: goto label_20a094;
        case 0x20a098u: goto label_20a098;
        case 0x20a09cu: goto label_20a09c;
        case 0x20a0a0u: goto label_20a0a0;
        case 0x20a0a4u: goto label_20a0a4;
        case 0x20a0a8u: goto label_20a0a8;
        case 0x20a0acu: goto label_20a0ac;
        case 0x20a0b0u: goto label_20a0b0;
        case 0x20a0b4u: goto label_20a0b4;
        case 0x20a0b8u: goto label_20a0b8;
        case 0x20a0bcu: goto label_20a0bc;
        case 0x20a0c0u: goto label_20a0c0;
        case 0x20a0c4u: goto label_20a0c4;
        case 0x20a0c8u: goto label_20a0c8;
        case 0x20a0ccu: goto label_20a0cc;
        case 0x20a0d0u: goto label_20a0d0;
        case 0x20a0d4u: goto label_20a0d4;
        case 0x20a0d8u: goto label_20a0d8;
        case 0x20a0dcu: goto label_20a0dc;
        case 0x20a0e0u: goto label_20a0e0;
        case 0x20a0e4u: goto label_20a0e4;
        case 0x20a0e8u: goto label_20a0e8;
        case 0x20a0ecu: goto label_20a0ec;
        case 0x20a0f0u: goto label_20a0f0;
        case 0x20a0f4u: goto label_20a0f4;
        case 0x20a0f8u: goto label_20a0f8;
        case 0x20a0fcu: goto label_20a0fc;
        case 0x20a100u: goto label_20a100;
        case 0x20a104u: goto label_20a104;
        case 0x20a108u: goto label_20a108;
        case 0x20a10cu: goto label_20a10c;
        case 0x20a110u: goto label_20a110;
        case 0x20a114u: goto label_20a114;
        case 0x20a118u: goto label_20a118;
        case 0x20a11cu: goto label_20a11c;
        case 0x20a120u: goto label_20a120;
        case 0x20a124u: goto label_20a124;
        case 0x20a128u: goto label_20a128;
        case 0x20a12cu: goto label_20a12c;
        case 0x20a130u: goto label_20a130;
        case 0x20a134u: goto label_20a134;
        case 0x20a138u: goto label_20a138;
        case 0x20a13cu: goto label_20a13c;
        case 0x20a140u: goto label_20a140;
        case 0x20a144u: goto label_20a144;
        case 0x20a148u: goto label_20a148;
        case 0x20a14cu: goto label_20a14c;
        case 0x20a150u: goto label_20a150;
        case 0x20a154u: goto label_20a154;
        case 0x20a158u: goto label_20a158;
        case 0x20a15cu: goto label_20a15c;
        case 0x20a160u: goto label_20a160;
        case 0x20a164u: goto label_20a164;
        case 0x20a168u: goto label_20a168;
        case 0x20a16cu: goto label_20a16c;
        case 0x20a170u: goto label_20a170;
        case 0x20a174u: goto label_20a174;
        case 0x20a178u: goto label_20a178;
        case 0x20a17cu: goto label_20a17c;
        case 0x20a180u: goto label_20a180;
        case 0x20a184u: goto label_20a184;
        case 0x20a188u: goto label_20a188;
        case 0x20a18cu: goto label_20a18c;
        case 0x20a190u: goto label_20a190;
        case 0x20a194u: goto label_20a194;
        case 0x20a198u: goto label_20a198;
        case 0x20a19cu: goto label_20a19c;
        case 0x20a1a0u: goto label_20a1a0;
        case 0x20a1a4u: goto label_20a1a4;
        case 0x20a1a8u: goto label_20a1a8;
        case 0x20a1acu: goto label_20a1ac;
        case 0x20a1b0u: goto label_20a1b0;
        case 0x20a1b4u: goto label_20a1b4;
        case 0x20a1b8u: goto label_20a1b8;
        case 0x20a1bcu: goto label_20a1bc;
        case 0x20a1c0u: goto label_20a1c0;
        case 0x20a1c4u: goto label_20a1c4;
        case 0x20a1c8u: goto label_20a1c8;
        case 0x20a1ccu: goto label_20a1cc;
        case 0x20a1d0u: goto label_20a1d0;
        case 0x20a1d4u: goto label_20a1d4;
        case 0x20a1d8u: goto label_20a1d8;
        case 0x20a1dcu: goto label_20a1dc;
        case 0x20a1e0u: goto label_20a1e0;
        case 0x20a1e4u: goto label_20a1e4;
        case 0x20a1e8u: goto label_20a1e8;
        case 0x20a1ecu: goto label_20a1ec;
        case 0x20a1f0u: goto label_20a1f0;
        case 0x20a1f4u: goto label_20a1f4;
        case 0x20a1f8u: goto label_20a1f8;
        case 0x20a1fcu: goto label_20a1fc;
        case 0x20a200u: goto label_20a200;
        case 0x20a204u: goto label_20a204;
        case 0x20a208u: goto label_20a208;
        case 0x20a20cu: goto label_20a20c;
        case 0x20a210u: goto label_20a210;
        case 0x20a214u: goto label_20a214;
        case 0x20a218u: goto label_20a218;
        case 0x20a21cu: goto label_20a21c;
        case 0x20a220u: goto label_20a220;
        case 0x20a224u: goto label_20a224;
        case 0x20a228u: goto label_20a228;
        case 0x20a22cu: goto label_20a22c;
        case 0x20a230u: goto label_20a230;
        case 0x20a234u: goto label_20a234;
        case 0x20a238u: goto label_20a238;
        case 0x20a23cu: goto label_20a23c;
        case 0x20a240u: goto label_20a240;
        case 0x20a244u: goto label_20a244;
        case 0x20a248u: goto label_20a248;
        case 0x20a24cu: goto label_20a24c;
        case 0x20a250u: goto label_20a250;
        case 0x20a254u: goto label_20a254;
        case 0x20a258u: goto label_20a258;
        case 0x20a25cu: goto label_20a25c;
        case 0x20a260u: goto label_20a260;
        case 0x20a264u: goto label_20a264;
        case 0x20a268u: goto label_20a268;
        case 0x20a26cu: goto label_20a26c;
        case 0x20a270u: goto label_20a270;
        case 0x20a274u: goto label_20a274;
        case 0x20a278u: goto label_20a278;
        case 0x20a27cu: goto label_20a27c;
        case 0x20a280u: goto label_20a280;
        case 0x20a284u: goto label_20a284;
        case 0x20a288u: goto label_20a288;
        case 0x20a28cu: goto label_20a28c;
        case 0x20a290u: goto label_20a290;
        case 0x20a294u: goto label_20a294;
        case 0x20a298u: goto label_20a298;
        case 0x20a29cu: goto label_20a29c;
        case 0x20a2a0u: goto label_20a2a0;
        case 0x20a2a4u: goto label_20a2a4;
        case 0x20a2a8u: goto label_20a2a8;
        case 0x20a2acu: goto label_20a2ac;
        case 0x20a2b0u: goto label_20a2b0;
        case 0x20a2b4u: goto label_20a2b4;
        case 0x20a2b8u: goto label_20a2b8;
        case 0x20a2bcu: goto label_20a2bc;
        case 0x20a2c0u: goto label_20a2c0;
        case 0x20a2c4u: goto label_20a2c4;
        case 0x20a2c8u: goto label_20a2c8;
        case 0x20a2ccu: goto label_20a2cc;
        case 0x20a2d0u: goto label_20a2d0;
        case 0x20a2d4u: goto label_20a2d4;
        case 0x20a2d8u: goto label_20a2d8;
        case 0x20a2dcu: goto label_20a2dc;
        case 0x20a2e0u: goto label_20a2e0;
        case 0x20a2e4u: goto label_20a2e4;
        case 0x20a2e8u: goto label_20a2e8;
        case 0x20a2ecu: goto label_20a2ec;
        case 0x20a2f0u: goto label_20a2f0;
        case 0x20a2f4u: goto label_20a2f4;
        case 0x20a2f8u: goto label_20a2f8;
        case 0x20a2fcu: goto label_20a2fc;
        case 0x20a300u: goto label_20a300;
        case 0x20a304u: goto label_20a304;
        case 0x20a308u: goto label_20a308;
        case 0x20a30cu: goto label_20a30c;
        case 0x20a310u: goto label_20a310;
        case 0x20a314u: goto label_20a314;
        case 0x20a318u: goto label_20a318;
        case 0x20a31cu: goto label_20a31c;
        case 0x20a320u: goto label_20a320;
        case 0x20a324u: goto label_20a324;
        case 0x20a328u: goto label_20a328;
        case 0x20a32cu: goto label_20a32c;
        case 0x20a330u: goto label_20a330;
        case 0x20a334u: goto label_20a334;
        case 0x20a338u: goto label_20a338;
        case 0x20a33cu: goto label_20a33c;
        case 0x20a340u: goto label_20a340;
        case 0x20a344u: goto label_20a344;
        case 0x20a348u: goto label_20a348;
        case 0x20a34cu: goto label_20a34c;
        case 0x20a350u: goto label_20a350;
        case 0x20a354u: goto label_20a354;
        case 0x20a358u: goto label_20a358;
        case 0x20a35cu: goto label_20a35c;
        case 0x20a360u: goto label_20a360;
        case 0x20a364u: goto label_20a364;
        case 0x20a368u: goto label_20a368;
        case 0x20a36cu: goto label_20a36c;
        case 0x20a370u: goto label_20a370;
        case 0x20a374u: goto label_20a374;
        case 0x20a378u: goto label_20a378;
        case 0x20a37cu: goto label_20a37c;
        case 0x20a380u: goto label_20a380;
        case 0x20a384u: goto label_20a384;
        case 0x20a388u: goto label_20a388;
        case 0x20a38cu: goto label_20a38c;
        case 0x20a390u: goto label_20a390;
        case 0x20a394u: goto label_20a394;
        case 0x20a398u: goto label_20a398;
        case 0x20a39cu: goto label_20a39c;
        case 0x20a3a0u: goto label_20a3a0;
        case 0x20a3a4u: goto label_20a3a4;
        case 0x20a3a8u: goto label_20a3a8;
        case 0x20a3acu: goto label_20a3ac;
        case 0x20a3b0u: goto label_20a3b0;
        case 0x20a3b4u: goto label_20a3b4;
        case 0x20a3b8u: goto label_20a3b8;
        case 0x20a3bcu: goto label_20a3bc;
        case 0x20a3c0u: goto label_20a3c0;
        case 0x20a3c4u: goto label_20a3c4;
        case 0x20a3c8u: goto label_20a3c8;
        case 0x20a3ccu: goto label_20a3cc;
        case 0x20a3d0u: goto label_20a3d0;
        case 0x20a3d4u: goto label_20a3d4;
        case 0x20a3d8u: goto label_20a3d8;
        case 0x20a3dcu: goto label_20a3dc;
        case 0x20a3e0u: goto label_20a3e0;
        case 0x20a3e4u: goto label_20a3e4;
        case 0x20a3e8u: goto label_20a3e8;
        case 0x20a3ecu: goto label_20a3ec;
        case 0x20a3f0u: goto label_20a3f0;
        case 0x20a3f4u: goto label_20a3f4;
        case 0x20a3f8u: goto label_20a3f8;
        case 0x20a3fcu: goto label_20a3fc;
        case 0x20a400u: goto label_20a400;
        case 0x20a404u: goto label_20a404;
        case 0x20a408u: goto label_20a408;
        case 0x20a40cu: goto label_20a40c;
        case 0x20a410u: goto label_20a410;
        case 0x20a414u: goto label_20a414;
        case 0x20a418u: goto label_20a418;
        case 0x20a41cu: goto label_20a41c;
        case 0x20a420u: goto label_20a420;
        case 0x20a424u: goto label_20a424;
        case 0x20a428u: goto label_20a428;
        case 0x20a42cu: goto label_20a42c;
        case 0x20a430u: goto label_20a430;
        case 0x20a434u: goto label_20a434;
        case 0x20a438u: goto label_20a438;
        case 0x20a43cu: goto label_20a43c;
        case 0x20a440u: goto label_20a440;
        case 0x20a444u: goto label_20a444;
        case 0x20a448u: goto label_20a448;
        case 0x20a44cu: goto label_20a44c;
        case 0x20a450u: goto label_20a450;
        case 0x20a454u: goto label_20a454;
        case 0x20a458u: goto label_20a458;
        case 0x20a45cu: goto label_20a45c;
        case 0x20a460u: goto label_20a460;
        case 0x20a464u: goto label_20a464;
        case 0x20a468u: goto label_20a468;
        case 0x20a46cu: goto label_20a46c;
        case 0x20a470u: goto label_20a470;
        case 0x20a474u: goto label_20a474;
        case 0x20a478u: goto label_20a478;
        case 0x20a47cu: goto label_20a47c;
        case 0x20a480u: goto label_20a480;
        case 0x20a484u: goto label_20a484;
        case 0x20a488u: goto label_20a488;
        case 0x20a48cu: goto label_20a48c;
        case 0x20a490u: goto label_20a490;
        case 0x20a494u: goto label_20a494;
        case 0x20a498u: goto label_20a498;
        case 0x20a49cu: goto label_20a49c;
        case 0x20a4a0u: goto label_20a4a0;
        case 0x20a4a4u: goto label_20a4a4;
        case 0x20a4a8u: goto label_20a4a8;
        case 0x20a4acu: goto label_20a4ac;
        case 0x20a4b0u: goto label_20a4b0;
        case 0x20a4b4u: goto label_20a4b4;
        case 0x20a4b8u: goto label_20a4b8;
        case 0x20a4bcu: goto label_20a4bc;
        case 0x20a4c0u: goto label_20a4c0;
        case 0x20a4c4u: goto label_20a4c4;
        case 0x20a4c8u: goto label_20a4c8;
        case 0x20a4ccu: goto label_20a4cc;
        case 0x20a4d0u: goto label_20a4d0;
        case 0x20a4d4u: goto label_20a4d4;
        case 0x20a4d8u: goto label_20a4d8;
        case 0x20a4dcu: goto label_20a4dc;
        case 0x20a4e0u: goto label_20a4e0;
        case 0x20a4e4u: goto label_20a4e4;
        case 0x20a4e8u: goto label_20a4e8;
        case 0x20a4ecu: goto label_20a4ec;
        case 0x20a4f0u: goto label_20a4f0;
        case 0x20a4f4u: goto label_20a4f4;
        case 0x20a4f8u: goto label_20a4f8;
        case 0x20a4fcu: goto label_20a4fc;
        case 0x20a500u: goto label_20a500;
        case 0x20a504u: goto label_20a504;
        case 0x20a508u: goto label_20a508;
        case 0x20a50cu: goto label_20a50c;
        case 0x20a510u: goto label_20a510;
        case 0x20a514u: goto label_20a514;
        case 0x20a518u: goto label_20a518;
        case 0x20a51cu: goto label_20a51c;
        case 0x20a520u: goto label_20a520;
        case 0x20a524u: goto label_20a524;
        case 0x20a528u: goto label_20a528;
        case 0x20a52cu: goto label_20a52c;
        case 0x20a530u: goto label_20a530;
        case 0x20a534u: goto label_20a534;
        case 0x20a538u: goto label_20a538;
        case 0x20a53cu: goto label_20a53c;
        case 0x20a540u: goto label_20a540;
        case 0x20a544u: goto label_20a544;
        case 0x20a548u: goto label_20a548;
        case 0x20a54cu: goto label_20a54c;
        case 0x20a550u: goto label_20a550;
        case 0x20a554u: goto label_20a554;
        case 0x20a558u: goto label_20a558;
        case 0x20a55cu: goto label_20a55c;
        case 0x20a560u: goto label_20a560;
        case 0x20a564u: goto label_20a564;
        case 0x20a568u: goto label_20a568;
        case 0x20a56cu: goto label_20a56c;
        case 0x20a570u: goto label_20a570;
        case 0x20a574u: goto label_20a574;
        case 0x20a578u: goto label_20a578;
        case 0x20a57cu: goto label_20a57c;
        case 0x20a580u: goto label_20a580;
        case 0x20a584u: goto label_20a584;
        case 0x20a588u: goto label_20a588;
        case 0x20a58cu: goto label_20a58c;
        case 0x20a590u: goto label_20a590;
        case 0x20a594u: goto label_20a594;
        case 0x20a598u: goto label_20a598;
        case 0x20a59cu: goto label_20a59c;
        case 0x20a5a0u: goto label_20a5a0;
        case 0x20a5a4u: goto label_20a5a4;
        case 0x20a5a8u: goto label_20a5a8;
        case 0x20a5acu: goto label_20a5ac;
        case 0x20a5b0u: goto label_20a5b0;
        case 0x20a5b4u: goto label_20a5b4;
        case 0x20a5b8u: goto label_20a5b8;
        case 0x20a5bcu: goto label_20a5bc;
        case 0x20a5c0u: goto label_20a5c0;
        case 0x20a5c4u: goto label_20a5c4;
        case 0x20a5c8u: goto label_20a5c8;
        case 0x20a5ccu: goto label_20a5cc;
        case 0x20a5d0u: goto label_20a5d0;
        case 0x20a5d4u: goto label_20a5d4;
        case 0x20a5d8u: goto label_20a5d8;
        case 0x20a5dcu: goto label_20a5dc;
        default: return;
    }

label_209e10:
    // 0x209e10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x209e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209e14:
    // 0x209e14: 0x8ca45720  lw          $a0, 0x5720($a1)
    ctx->pc = 0x209e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 22304)));
label_209e18:
    // 0x209e18: 0x14830015  bne         $a0, $v1, . + 4 + (0x15 << 2)
label_209e1c:
    if (ctx->pc == 0x209E1Cu) {
        ctx->pc = 0x209E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E18u;
        // 0x209e1c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209E20u;
        goto label_209e20;
    }
    ctx->pc = 0x209E18u;
    {
        const bool branch_taken_0x209e18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x209E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E18u;
        // 0x209e1c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209e18) {
            ctx->pc = 0x209E70u;
            goto label_209e70;
        }
    }
    ctx->pc = 0x209E20u;
label_209e20:
    // 0x209e20: 0x8ca45724  lw          $a0, 0x5724($a1)
    ctx->pc = 0x209e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 22308)));
label_209e24:
    // 0x209e24: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x209e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_209e28:
    // 0x209e28: 0x2881000c  slti        $at, $a0, 0xC
    ctx->pc = 0x209e28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
label_209e2c:
    // 0x209e2c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_209e30:
    if (ctx->pc == 0x209E30u) {
        ctx->pc = 0x209E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E2Cu;
        // 0x209e30: 0xaca35724  sw          $v1, 0x5724($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 22308), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209E34u;
        goto label_209e34;
    }
    ctx->pc = 0x209E2Cu;
    {
        const bool branch_taken_0x209e2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x209E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E2Cu;
        // 0x209e30: 0xaca35724  sw          $v1, 0x5724($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 22308), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209e2c) {
            ctx->pc = 0x209E48u;
            goto label_209e48;
        }
    }
    ctx->pc = 0x209E34u;
label_209e34:
    // 0x209e34: 0x8f849100  lw          $a0, -0x6F00($gp)
    ctx->pc = 0x209e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209e38:
    // 0x209e38: 0x8c855724  lw          $a1, 0x5724($a0)
    ctx->pc = 0x209e38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22308)));
label_209e3c:
    // 0x209e3c: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x209e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_209e40:
    // 0x209e40: 0x10000002  b           . + 4 + (0x2 << 2)
label_209e44:
    if (ctx->pc == 0x209E44u) {
        ctx->pc = 0x209E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E40u;
        // 0x209e44: 0xac835724  sw          $v1, 0x5724($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 22308), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209E48u;
        goto label_209e48;
    }
    ctx->pc = 0x209E40u;
    {
        const bool branch_taken_0x209e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E40u;
        // 0x209e44: 0xac835724  sw          $v1, 0x5724($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 22308), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209e40) {
            ctx->pc = 0x209E4Cu;
            goto label_209e4c;
        }
    }
    ctx->pc = 0x209E48u;
label_209e48:
    // 0x209e48: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x209e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_209e4c:
    // 0x209e4c: 0x8f839100  lw          $v1, -0x6F00($gp)
    ctx->pc = 0x209e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209e50:
    // 0x209e50: 0xac655724  sw          $a1, 0x5724($v1)
    ctx->pc = 0x209e50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22308), GPR_U32(ctx, 5));
label_209e54:
    // 0x209e54: 0x8f849100  lw          $a0, -0x6F00($gp)
    ctx->pc = 0x209e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209e58:
    // 0x209e58: 0x8c835724  lw          $v1, 0x5724($a0)
    ctx->pc = 0x209e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22308)));
label_209e5c:
    // 0x209e5c: 0x2863000c  slti        $v1, $v1, 0xC
    ctx->pc = 0x209e5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
label_209e60:
    // 0x209e60: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
label_209e64:
    if (ctx->pc == 0x209E64u) {
        ctx->pc = 0x209E68u;
        goto label_209e68;
    }
    ctx->pc = 0x209E60u;
    {
        const bool branch_taken_0x209e60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x209e60) {
            ctx->pc = 0x209EC0u;
            goto label_209ec0;
        }
    }
    ctx->pc = 0x209E68u;
label_209e68:
    // 0x209e68: 0x10000015  b           . + 4 + (0x15 << 2)
label_209e6c:
    if (ctx->pc == 0x209E6Cu) {
        ctx->pc = 0x209E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E68u;
        // 0x209e6c: 0xac805720  sw          $zero, 0x5720($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 22304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209E70u;
        goto label_209e70;
    }
    ctx->pc = 0x209E68u;
    {
        const bool branch_taken_0x209e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E68u;
        // 0x209e6c: 0xac805720  sw          $zero, 0x5720($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 22304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209e68) {
            ctx->pc = 0x209EC0u;
            goto label_209ec0;
        }
    }
    ctx->pc = 0x209E70u;
label_209e70:
    // 0x209e70: 0x14830013  bne         $a0, $v1, . + 4 + (0x13 << 2)
label_209e74:
    if (ctx->pc == 0x209E74u) {
        ctx->pc = 0x209E78u;
        goto label_209e78;
    }
    ctx->pc = 0x209E70u;
    {
        const bool branch_taken_0x209e70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x209e70) {
            ctx->pc = 0x209EC0u;
            goto label_209ec0;
        }
    }
    ctx->pc = 0x209E78u;
label_209e78:
    // 0x209e78: 0x8ca45724  lw          $a0, 0x5724($a1)
    ctx->pc = 0x209e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 22308)));
label_209e7c:
    // 0x209e7c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x209e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_209e80:
    // 0x209e80: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x209e80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_209e84:
    // 0x209e84: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_209e88:
    if (ctx->pc == 0x209E88u) {
        ctx->pc = 0x209E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E84u;
        // 0x209e88: 0xaca35724  sw          $v1, 0x5724($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 22308), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209E8Cu;
        goto label_209e8c;
    }
    ctx->pc = 0x209E84u;
    {
        const bool branch_taken_0x209e84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x209E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E84u;
        // 0x209e88: 0xaca35724  sw          $v1, 0x5724($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 22308), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209e84) {
            ctx->pc = 0x209EA0u;
            goto label_209ea0;
        }
    }
    ctx->pc = 0x209E8Cu;
label_209e8c:
    // 0x209e8c: 0x8f849100  lw          $a0, -0x6F00($gp)
    ctx->pc = 0x209e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209e90:
    // 0x209e90: 0x8c855724  lw          $a1, 0x5724($a0)
    ctx->pc = 0x209e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22308)));
label_209e94:
    // 0x209e94: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x209e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_209e98:
    // 0x209e98: 0x10000002  b           . + 4 + (0x2 << 2)
label_209e9c:
    if (ctx->pc == 0x209E9Cu) {
        ctx->pc = 0x209E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E98u;
        // 0x209e9c: 0xac835724  sw          $v1, 0x5724($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 22308), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209EA0u;
        goto label_209ea0;
    }
    ctx->pc = 0x209E98u;
    {
        const bool branch_taken_0x209e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209E98u;
        // 0x209e9c: 0xac835724  sw          $v1, 0x5724($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 22308), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209e98) {
            ctx->pc = 0x209EA4u;
            goto label_209ea4;
        }
    }
    ctx->pc = 0x209EA0u;
label_209ea0:
    // 0x209ea0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x209ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209ea4:
    // 0x209ea4: 0x8f839100  lw          $v1, -0x6F00($gp)
    ctx->pc = 0x209ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209ea8:
    // 0x209ea8: 0xac655724  sw          $a1, 0x5724($v1)
    ctx->pc = 0x209ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22308), GPR_U32(ctx, 5));
label_209eac:
    // 0x209eac: 0x8f849100  lw          $a0, -0x6F00($gp)
    ctx->pc = 0x209eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209eb0:
    // 0x209eb0: 0x8c835724  lw          $v1, 0x5724($a0)
    ctx->pc = 0x209eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22308)));
label_209eb4:
    // 0x209eb4: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
label_209eb8:
    if (ctx->pc == 0x209EB8u) {
        ctx->pc = 0x209EBCu;
        goto label_209ebc;
    }
    ctx->pc = 0x209EB4u;
    {
        const bool branch_taken_0x209eb4 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x209eb4) {
            ctx->pc = 0x209EC0u;
            goto label_209ec0;
        }
    }
    ctx->pc = 0x209EBCu;
label_209ebc:
    // 0x209ebc: 0xac805720  sw          $zero, 0x5720($a0)
    ctx->pc = 0x209ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 22304), GPR_U32(ctx, 0));
label_209ec0:
    // 0x209ec0: 0x3e00008  jr          $ra
label_209ec4:
    if (ctx->pc == 0x209EC4u) {
        ctx->pc = 0x209EC8u;
        goto label_209ec8;
    }
    ctx->pc = 0x209EC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209EC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209EC8u;
label_209ec8:
    // 0x209ec8: 0x0  nop
    ctx->pc = 0x209ec8u;
    // NOP
label_209ecc:
    // 0x209ecc: 0x0  nop
    ctx->pc = 0x209eccu;
    // NOP
label_209ed0:
    // 0x209ed0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x209ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_209ed4:
    // 0x209ed4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x209ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_209ed8:
    // 0x209ed8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x209ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_209edc:
    // 0x209edc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x209edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_209ee0:
    // 0x209ee0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x209ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_209ee4:
    // 0x209ee4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x209ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_209ee8:
    // 0x209ee8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x209ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_209eec:
    // 0x209eec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x209eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_209ef0:
    // 0x209ef0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x209ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_209ef4:
    // 0x209ef4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x209ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_209ef8:
    // 0x209ef8: 0x8f839100  lw          $v1, -0x6F00($gp)
    ctx->pc = 0x209ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209efc:
    // 0x209efc: 0x1060022a  beqz        $v1, . + 4 + (0x22A << 2)
label_209f00:
    if (ctx->pc == 0x209F00u) {
        ctx->pc = 0x209F04u;
        goto label_209f04;
    }
    ctx->pc = 0x209EFCu;
    {
        const bool branch_taken_0x209efc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x209efc) {
            ctx->pc = 0x20A7A8u;
            { ctx->pc = 0x20a7a8; return; }
        }
    }
    ctx->pc = 0x209F04u;
label_209f04:
    // 0x209f04: 0x8c635724  lw          $v1, 0x5724($v1)
    ctx->pc = 0x209f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22308)));
label_209f08:
    // 0x209f08: 0x10600227  beqz        $v1, . + 4 + (0x227 << 2)
label_209f0c:
    if (ctx->pc == 0x209F0Cu) {
        ctx->pc = 0x209F10u;
        goto label_209f10;
    }
    ctx->pc = 0x209F08u;
    {
        const bool branch_taken_0x209f08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x209f08) {
            ctx->pc = 0x20A7A8u;
            { ctx->pc = 0x20a7a8; return; }
        }
    }
    ctx->pc = 0x209F10u;
label_209f10:
    // 0x209f10: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x209f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_209f14:
    // 0x209f14: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x209f14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_209f18:
    // 0x209f18: 0x34463ffc  ori         $a2, $v0, 0x3FFC
    ctx->pc = 0x209f18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_209f1c:
    // 0x209f1c: 0x24a51e00  addiu       $a1, $a1, 0x1E00
    ctx->pc = 0x209f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7680));
label_209f20:
    // 0x209f20: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x209f20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_209f24:
    // 0x209f24: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x209f24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_209f28:
    // 0x209f28: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x209f28u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_209f2c:
    // 0x209f2c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x209f2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209f30:
    // 0x209f30: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x209f30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_209f34:
    // 0x209f34: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x209f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
label_209f38:
    // 0x209f38: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x209f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_209f3c:
    // 0x209f3c: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x209f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_209f40:
    // 0x209f40: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x209f40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_209f44:
    // 0x209f44: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x209f44u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209f48:
    // 0x209f48: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x209f48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_209f4c:
    // 0x209f4c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x209f4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209f50:
    // 0x209f50: 0x61140  sll         $v0, $a2, 5
    ctx->pc = 0x209f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_209f54:
    // 0x209f54: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x209f54u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_209f58:
    // 0x209f58: 0xa28021  addu        $s0, $a1, $v0
    ctx->pc = 0x209f58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_209f5c:
    // 0x209f5c: 0x1010  mfhi        $v0
    ctx->pc = 0x209f5cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_209f60:
    // 0x209f60: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x209f60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_209f64:
    // 0x209f64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x209f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_209f68:
    // 0x209f68: 0x2457ff38  addiu       $s7, $v0, -0xC8
    ctx->pc = 0x209f68u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967096));
label_209f6c:
    // 0x209f6c: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x209f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209f70:
    // 0x209f70: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x209f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_209f74:
    // 0x209f74: 0x8c243ffc  lw          $a0, 0x3FFC($at)
    ctx->pc = 0x209f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_209f78:
    // 0x209f78: 0x8c4357f0  lw          $v1, 0x57F0($v0)
    ctx->pc = 0x209f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22512)));
label_209f7c:
    // 0x209f7c: 0x562821  addu        $a1, $v0, $s6
    ctx->pc = 0x209f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_209f80:
    // 0x209f80: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x209f80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_209f84:
    // 0x209f84: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x209f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_209f88:
    // 0x209f88: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x209f88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_209f8c:
    // 0x209f8c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x209f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_209f90:
    // 0x209f90: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x209f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_209f94:
    // 0x209f94: 0x14740003  bne         $v1, $s4, . + 4 + (0x3 << 2)
label_209f98:
    if (ctx->pc == 0x209F98u) {
        ctx->pc = 0x209F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209F94u;
        // 0x209f98: 0xa2a821  addu        $s5, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209F9Cu;
        goto label_209f9c;
    }
    ctx->pc = 0x209F94u;
    {
        const bool branch_taken_0x209f94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        ctx->pc = 0x209F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209F94u;
        // 0x209f98: 0xa2a821  addu        $s5, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209f94) {
            ctx->pc = 0x209FA4u;
            goto label_209fa4;
        }
    }
    ctx->pc = 0x209F9Cu;
label_209f9c:
    // 0x209f9c: 0x10000002  b           . + 4 + (0x2 << 2)
label_209fa0:
    if (ctx->pc == 0x209FA0u) {
        ctx->pc = 0x209FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209F9Cu;
        // 0x209fa0: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209FA4u;
        goto label_209fa4;
    }
    ctx->pc = 0x209F9Cu;
    {
        const bool branch_taken_0x209f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209F9Cu;
        // 0x209fa0: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209f9c) {
            ctx->pc = 0x209FA8u;
            goto label_209fa8;
        }
    }
    ctx->pc = 0x209FA4u;
label_209fa4:
    // 0x209fa4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x209fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_209fa8:
    // 0x209fa8: 0x6810004  bgez        $s4, . + 4 + (0x4 << 2)
label_209fac:
    if (ctx->pc == 0x209FACu) {
        ctx->pc = 0x209FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FA8u;
        // 0x209fac: 0x32860007  andi        $a2, $s4, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        ctx->pc = 0x209FB0u;
        goto label_209fb0;
    }
    ctx->pc = 0x209FA8u;
    {
        const bool branch_taken_0x209fa8 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x209FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FA8u;
        // 0x209fac: 0x32860007  andi        $a2, $s4, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209fa8) {
            ctx->pc = 0x209FBCu;
            goto label_209fbc;
        }
    }
    ctx->pc = 0x209FB0u;
label_209fb0:
    // 0x209fb0: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_209fb4:
    if (ctx->pc == 0x209FB4u) {
        ctx->pc = 0x209FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FB0u;
        // 0x209fb4: 0x62080  sll         $a0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209FB8u;
        goto label_209fb8;
    }
    ctx->pc = 0x209FB0u;
    {
        const bool branch_taken_0x209fb0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x209FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FB0u;
        // 0x209fb4: 0x62080  sll         $a0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209fb0) {
            ctx->pc = 0x209FC0u;
            goto label_209fc0;
        }
    }
    ctx->pc = 0x209FB8u;
label_209fb8:
    // 0x209fb8: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x209fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
label_209fbc:
    // 0x209fbc: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x209fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_209fc0:
    // 0x209fc0: 0x1428c3  sra         $a1, $s4, 3
    ctx->pc = 0x209fc0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 20), 3));
label_209fc4:
    // 0x209fc4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x209fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_209fc8:
    // 0x209fc8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x209fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_209fcc:
    // 0x209fcc: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
label_209fd0:
    if (ctx->pc == 0x209FD0u) {
        ctx->pc = 0x209FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FCCu;
        // 0x209fd0: 0x2e49021  addu        $s2, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209FD4u;
        goto label_209fd4;
    }
    ctx->pc = 0x209FCCu;
    {
        const bool branch_taken_0x209fcc = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x209FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FCCu;
        // 0x209fd0: 0x2e49021  addu        $s2, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209fcc) {
            ctx->pc = 0x209FDCu;
            goto label_209fdc;
        }
    }
    ctx->pc = 0x209FD4u;
label_209fd4:
    // 0x209fd4: 0x26840007  addiu       $a0, $s4, 0x7
    ctx->pc = 0x209fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 7));
label_209fd8:
    // 0x209fd8: 0x428c3  sra         $a1, $a0, 3
    ctx->pc = 0x209fd8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 3));
label_209fdc:
    // 0x209fdc: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x209fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_209fe0:
    // 0x209fe0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x209fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_209fe4:
    // 0x209fe4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x209fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_209fe8:
    // 0x209fe8: 0x14740015  bne         $v1, $s4, . + 4 + (0x15 << 2)
label_209fec:
    if (ctx->pc == 0x209FECu) {
        ctx->pc = 0x209FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FE8u;
        // 0x209fec: 0x249300b5  addiu       $s3, $a0, 0xB5 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 181));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209FF0u;
        goto label_209ff0;
    }
    ctx->pc = 0x209FE8u;
    {
        const bool branch_taken_0x209fe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        ctx->pc = 0x209FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209FE8u;
        // 0x209fec: 0x249300b5  addiu       $s3, $a0, 0xB5 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 181));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209fe8) {
            ctx->pc = 0x20A040u;
            goto label_20a040;
        }
    }
    ctx->pc = 0x209FF0u;
label_209ff0:
    // 0x209ff0: 0x2644fffb  addiu       $a0, $s2, -0x5
    ctx->pc = 0x209ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967291));
label_209ff4:
    // 0x209ff4: 0x2663fffb  addiu       $v1, $s3, -0x5
    ctx->pc = 0x209ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967291));
label_209ff8:
    // 0x209ff8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x209ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_209ffc:
    // 0x209ffc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x209ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_20a000:
    // 0x20a000: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x20a000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
label_20a004:
    // 0x20a004: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x20a004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
label_20a008:
    // 0x20a008: 0xa6a40090  sh          $a0, 0x90($s5)
    ctx->pc = 0x20a008u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 144), (uint16_t)GPR_U32(ctx, 4));
label_20a00c:
    // 0x20a00c: 0x3405fe01  ori         $a1, $zero, 0xFE01
    ctx->pc = 0x20a00cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65025);
label_20a010:
    // 0x20a010: 0xa6a30092  sh          $v1, 0x92($s5)
    ctx->pc = 0x20a010u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 146), (uint16_t)GPR_U32(ctx, 3));
label_20a014:
    // 0x20a014: 0x2643002d  addiu       $v1, $s2, 0x2D
    ctx->pc = 0x20a014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 45));
label_20a018:
    // 0x20a018: 0xaea50094  sw          $a1, 0x94($s5)
    ctx->pc = 0x20a018u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 148), GPR_U32(ctx, 5));
label_20a01c:
    // 0x20a01c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20a01cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_20a020:
    // 0x20a020: 0x24646c00  addiu       $a0, $v1, 0x6C00
    ctx->pc = 0x20a020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_20a024:
    // 0x20a024: 0x2663002d  addiu       $v1, $s3, 0x2D
    ctx->pc = 0x20a024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 45));
label_20a028:
    // 0x20a028: 0xa6a400a0  sh          $a0, 0xA0($s5)
    ctx->pc = 0x20a028u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 160), (uint16_t)GPR_U32(ctx, 4));
label_20a02c:
    // 0x20a02c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x20a02cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_20a030:
    // 0x20a030: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x20a030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
label_20a034:
    // 0x20a034: 0xa6a300a2  sh          $v1, 0xA2($s5)
    ctx->pc = 0x20a034u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 162), (uint16_t)GPR_U32(ctx, 3));
label_20a038:
    // 0x20a038: 0x10000012  b           . + 4 + (0x12 << 2)
label_20a03c:
    if (ctx->pc == 0x20A03Cu) {
        ctx->pc = 0x20A03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A038u;
        // 0x20a03c: 0xaea500a4  sw          $a1, 0xA4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 164), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A040u;
        goto label_20a040;
    }
    ctx->pc = 0x20A038u;
    {
        const bool branch_taken_0x20a038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A038u;
        // 0x20a03c: 0xaea500a4  sw          $a1, 0xA4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 164), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a038) {
            ctx->pc = 0x20A084u;
            goto label_20a084;
        }
    }
    ctx->pc = 0x20A040u;
label_20a040:
    // 0x20a040: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x20a040u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_20a044:
    // 0x20a044: 0x24646c00  addiu       $a0, $v1, 0x6C00
    ctx->pc = 0x20a044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_20a048:
    // 0x20a048: 0x3405fe00  ori         $a1, $zero, 0xFE00
    ctx->pc = 0x20a048u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_20a04c:
    // 0x20a04c: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x20a04cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_20a050:
    // 0x20a050: 0xa6a40090  sh          $a0, 0x90($s5)
    ctx->pc = 0x20a050u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 144), (uint16_t)GPR_U32(ctx, 4));
label_20a054:
    // 0x20a054: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x20a054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
label_20a058:
    // 0x20a058: 0xa6a30092  sh          $v1, 0x92($s5)
    ctx->pc = 0x20a058u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 146), (uint16_t)GPR_U32(ctx, 3));
label_20a05c:
    // 0x20a05c: 0x26430028  addiu       $v1, $s2, 0x28
    ctx->pc = 0x20a05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
label_20a060:
    // 0x20a060: 0xaea50094  sw          $a1, 0x94($s5)
    ctx->pc = 0x20a060u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 148), GPR_U32(ctx, 5));
label_20a064:
    // 0x20a064: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x20a064u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_20a068:
    // 0x20a068: 0x26630028  addiu       $v1, $s3, 0x28
    ctx->pc = 0x20a068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
label_20a06c:
    // 0x20a06c: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x20a06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
label_20a070:
    // 0x20a070: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x20a070u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_20a074:
    // 0x20a074: 0xa6a400a0  sh          $a0, 0xA0($s5)
    ctx->pc = 0x20a074u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 160), (uint16_t)GPR_U32(ctx, 4));
label_20a078:
    // 0x20a078: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x20a078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
label_20a07c:
    // 0x20a07c: 0xa6a300a2  sh          $v1, 0xA2($s5)
    ctx->pc = 0x20a07cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 162), (uint16_t)GPR_U32(ctx, 3));
label_20a080:
    // 0x20a080: 0xaea500a4  sw          $a1, 0xA4($s5)
    ctx->pc = 0x20a080u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 164), GPR_U32(ctx, 5));
label_20a084:
    // 0x20a084: 0x0  nop
    ctx->pc = 0x20a084u;
    // NOP
label_20a088:
    // 0x20a088: 0xa2a20080  sb          $v0, 0x80($s5)
    ctx->pc = 0x20a088u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 128), (uint8_t)GPR_U32(ctx, 2));
label_20a08c:
    // 0x20a08c: 0xa2a20081  sb          $v0, 0x81($s5)
    ctx->pc = 0x20a08cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 129), (uint8_t)GPR_U32(ctx, 2));
label_20a090:
    // 0x20a090: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x20a090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_20a094:
    // 0x20a094: 0xa2a20082  sb          $v0, 0x82($s5)
    ctx->pc = 0x20a094u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 130), (uint8_t)GPR_U32(ctx, 2));
label_20a098:
    // 0x20a098: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x20a098u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_20a09c:
    // 0x20a09c: 0xa2a30083  sb          $v1, 0x83($s5)
    ctx->pc = 0x20a09cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 131), (uint8_t)GPR_U32(ctx, 3));
label_20a0a0:
    // 0x20a0a0: 0x24030027  addiu       $v1, $zero, 0x27
    ctx->pc = 0x20a0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_20a0a4:
    // 0x20a0a4: 0x1683006c  bne         $s4, $v1, . + 4 + (0x6C << 2)
label_20a0a8:
    if (ctx->pc == 0x20A0A8u) {
        ctx->pc = 0x20A0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A0A4u;
        // 0x20a0a8: 0xaea40084  sw          $a0, 0x84($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A0ACu;
        goto label_20a0ac;
    }
    ctx->pc = 0x20A0A4u;
    {
        const bool branch_taken_0x20a0a4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        ctx->pc = 0x20A0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A0A4u;
        // 0x20a0a8: 0xaea40084  sw          $a0, 0x84($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a0a4) {
            ctx->pc = 0x20A258u;
            goto label_20a258;
        }
    }
    ctx->pc = 0x20A0ACu;
label_20a0ac:
    // 0x20a0ac: 0x8f839100  lw          $v1, -0x6F00($gp)
    ctx->pc = 0x20a0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_20a0b0:
    // 0x20a0b0: 0x8c6457e8  lw          $a0, 0x57E8($v1)
    ctx->pc = 0x20a0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22504)));
label_20a0b4:
    // 0x20a0b4: 0x28810020  slti        $at, $a0, 0x20
    ctx->pc = 0x20a0b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
label_20a0b8:
    // 0x20a0b8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_20a0bc:
    if (ctx->pc == 0x20A0BCu) {
        ctx->pc = 0x20A0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A0B8u;
        // 0x20a0bc: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A0C0u;
        goto label_20a0c0;
    }
    ctx->pc = 0x20A0B8u;
    {
        const bool branch_taken_0x20a0b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A0B8u;
        // 0x20a0bc: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a0b8) {
            ctx->pc = 0x20A0E0u;
            goto label_20a0e0;
        }
    }
    ctx->pc = 0x20A0C0u;
label_20a0c0:
    // 0x20a0c0: 0x441818  mult        $v1, $v0, $a0
    ctx->pc = 0x20a0c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_20a0c4:
    // 0x20a0c4: 0x461000c  bgez        $v1, . + 4 + (0xC << 2)
label_20a0c8:
    if (ctx->pc == 0x20A0C8u) {
        ctx->pc = 0x20A0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A0C4u;
        // 0x20a0c8: 0x32143  sra         $a0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A0CCu;
        goto label_20a0cc;
    }
    ctx->pc = 0x20A0C4u;
    {
        const bool branch_taken_0x20a0c4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x20A0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A0C4u;
        // 0x20a0c8: 0x32143  sra         $a0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a0c4) {
            ctx->pc = 0x20A0F8u;
            goto label_20a0f8;
        }
    }
    ctx->pc = 0x20A0CCu;
label_20a0cc:
    // 0x20a0cc: 0x2463001f  addiu       $v1, $v1, 0x1F
    ctx->pc = 0x20a0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
label_20a0d0:
    // 0x20a0d0: 0x32143  sra         $a0, $v1, 5
    ctx->pc = 0x20a0d0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 5));
label_20a0d4:
    // 0x20a0d4: 0x10000008  b           . + 4 + (0x8 << 2)
label_20a0d8:
    if (ctx->pc == 0x20A0D8u) {
        ctx->pc = 0x20A0DCu;
        goto label_20a0dc;
    }
    ctx->pc = 0x20A0D4u;
    {
        const bool branch_taken_0x20a0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a0d4) {
            ctx->pc = 0x20A0F8u;
            goto label_20a0f8;
        }
    }
    ctx->pc = 0x20A0DCu;
label_20a0dc:
    // 0x20a0dc: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x20a0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_20a0e0:
    // 0x20a0e0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x20a0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20a0e4:
    // 0x20a0e4: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x20a0e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_20a0e8:
    // 0x20a0e8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_20a0ec:
    if (ctx->pc == 0x20A0ECu) {
        ctx->pc = 0x20A0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A0E8u;
        // 0x20a0ec: 0x32143  sra         $a0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A0F0u;
        goto label_20a0f0;
    }
    ctx->pc = 0x20A0E8u;
    {
        const bool branch_taken_0x20a0e8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x20A0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A0E8u;
        // 0x20a0ec: 0x32143  sra         $a0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a0e8) {
            ctx->pc = 0x20A0F8u;
            goto label_20a0f8;
        }
    }
    ctx->pc = 0x20A0F0u;
label_20a0f0:
    // 0x20a0f0: 0x2463001f  addiu       $v1, $v1, 0x1F
    ctx->pc = 0x20a0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
label_20a0f4:
    // 0x20a0f4: 0x32143  sra         $a0, $v1, 5
    ctx->pc = 0x20a0f4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 5));
label_20a0f8:
    // 0x20a0f8: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x20a0f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_20a0fc:
    // 0x20a0fc: 0x8c23ccf4  lw          $v1, -0x330C($at)
    ctx->pc = 0x20a0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954228)));
label_20a100:
    // 0x20a100: 0x286161a8  slti        $at, $v1, 0x61A8
    ctx->pc = 0x20a100u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)25000) ? 1 : 0);
label_20a104:
    // 0x20a104: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_20a108:
    if (ctx->pc == 0x20A108u) {
        ctx->pc = 0x20A10Cu;
        goto label_20a10c;
    }
    ctx->pc = 0x20A104u;
    {
        const bool branch_taken_0x20a104 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a104) {
            ctx->pc = 0x20A12Cu;
            goto label_20a12c;
        }
    }
    ctx->pc = 0x20A10Cu;
label_20a10c:
    // 0x20a10c: 0xa2a20080  sb          $v0, 0x80($s5)
    ctx->pc = 0x20a10cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 128), (uint8_t)GPR_U32(ctx, 2));
label_20a110:
    // 0x20a110: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x20a110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_20a114:
    // 0x20a114: 0xa2a20081  sb          $v0, 0x81($s5)
    ctx->pc = 0x20a114u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 129), (uint8_t)GPR_U32(ctx, 2));
label_20a118:
    // 0x20a118: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x20a118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_20a11c:
    // 0x20a11c: 0xa2a20082  sb          $v0, 0x82($s5)
    ctx->pc = 0x20a11cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 130), (uint8_t)GPR_U32(ctx, 2));
label_20a120:
    // 0x20a120: 0xa2a40083  sb          $a0, 0x83($s5)
    ctx->pc = 0x20a120u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 131), (uint8_t)GPR_U32(ctx, 4));
label_20a124:
    // 0x20a124: 0x1000004c  b           . + 4 + (0x4C << 2)
label_20a128:
    if (ctx->pc == 0x20A128u) {
        ctx->pc = 0x20A128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A124u;
        // 0x20a128: 0xaea30084  sw          $v1, 0x84($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A12Cu;
        goto label_20a12c;
    }
    ctx->pc = 0x20A124u;
    {
        const bool branch_taken_0x20a124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A124u;
        // 0x20a128: 0xaea30084  sw          $v1, 0x84($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a124) {
            ctx->pc = 0x20A258u;
            goto label_20a258;
        }
    }
    ctx->pc = 0x20A12Cu;
label_20a12c:
    // 0x20a12c: 0x0  nop
    ctx->pc = 0x20a12cu;
    // NOP
label_20a130:
    // 0x20a130: 0x3401c350  ori         $at, $zero, 0xC350
    ctx->pc = 0x20a130u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
label_20a134:
    // 0x20a134: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x20a134u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_20a138:
    // 0x20a138: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
label_20a13c:
    if (ctx->pc == 0x20A13Cu) {
        ctx->pc = 0x20A140u;
        goto label_20a140;
    }
    ctx->pc = 0x20A138u;
    {
        const bool branch_taken_0x20a138 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a138) {
            ctx->pc = 0x20A190u;
            goto label_20a190;
        }
    }
    ctx->pc = 0x20A140u;
label_20a140:
    // 0x20a140: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x20a140u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_20a144:
    // 0x20a144: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20a144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20a148:
    // 0x20a148: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_20a14c:
    if (ctx->pc == 0x20A14Cu) {
        ctx->pc = 0x20A14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A148u;
        // 0x20a14c: 0x32043  sra         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A150u;
        goto label_20a150;
    }
    ctx->pc = 0x20A148u;
    {
        const bool branch_taken_0x20a148 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x20A14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A148u;
        // 0x20a14c: 0x32043  sra         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a148) {
            ctx->pc = 0x20A158u;
            goto label_20a158;
        }
    }
    ctx->pc = 0x20A150u;
label_20a150:
    // 0x20a150: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20a150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_20a154:
    // 0x20a154: 0x32043  sra         $a0, $v1, 1
    ctx->pc = 0x20a154u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
label_20a158:
    // 0x20a158: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x20a158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_20a15c:
    // 0x20a15c: 0xa2a40080  sb          $a0, 0x80($s5)
    ctx->pc = 0x20a15cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 128), (uint8_t)GPR_U32(ctx, 4));
label_20a160:
    // 0x20a160: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20a160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20a164:
    // 0x20a164: 0xa2a40081  sb          $a0, 0x81($s5)
    ctx->pc = 0x20a164u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 129), (uint8_t)GPR_U32(ctx, 4));
label_20a168:
    // 0x20a168: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_20a16c:
    if (ctx->pc == 0x20A16Cu) {
        ctx->pc = 0x20A16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A168u;
        // 0x20a16c: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A170u;
        goto label_20a170;
    }
    ctx->pc = 0x20A168u;
    {
        const bool branch_taken_0x20a168 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x20A16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A168u;
        // 0x20a16c: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a168) {
            ctx->pc = 0x20A178u;
            goto label_20a178;
        }
    }
    ctx->pc = 0x20A170u;
label_20a170:
    // 0x20a170: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x20a170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_20a174:
    // 0x20a174: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x20a174u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_20a178:
    // 0x20a178: 0xa2a20082  sb          $v0, 0x82($s5)
    ctx->pc = 0x20a178u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 130), (uint8_t)GPR_U32(ctx, 2));
label_20a17c:
    // 0x20a17c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x20a17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_20a180:
    // 0x20a180: 0xa2a20083  sb          $v0, 0x83($s5)
    ctx->pc = 0x20a180u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 131), (uint8_t)GPR_U32(ctx, 2));
label_20a184:
    // 0x20a184: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20a184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_20a188:
    // 0x20a188: 0x10000033  b           . + 4 + (0x33 << 2)
label_20a18c:
    if (ctx->pc == 0x20A18Cu) {
        ctx->pc = 0x20A18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A188u;
        // 0x20a18c: 0xaea20084  sw          $v0, 0x84($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A190u;
        goto label_20a190;
    }
    ctx->pc = 0x20A188u;
    {
        const bool branch_taken_0x20a188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A188u;
        // 0x20a18c: 0xaea20084  sw          $v0, 0x84($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a188) {
            ctx->pc = 0x20A258u;
            goto label_20a258;
        }
    }
    ctx->pc = 0x20A190u;
label_20a190:
    // 0x20a190: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x20a190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_20a194:
    // 0x20a194: 0x342124f8  ori         $at, $at, 0x24F8
    ctx->pc = 0x20a194u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9464);
label_20a198:
    // 0x20a198: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x20a198u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_20a19c:
    // 0x20a19c: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
label_20a1a0:
    if (ctx->pc == 0x20A1A0u) {
        ctx->pc = 0x20A1A4u;
        goto label_20a1a4;
    }
    ctx->pc = 0x20A19Cu;
    {
        const bool branch_taken_0x20a19c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a19c) {
            ctx->pc = 0x20A1F4u;
            goto label_20a1f4;
        }
    }
    ctx->pc = 0x20A1A4u;
label_20a1a4:
    // 0x20a1a4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x20a1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_20a1a8:
    // 0x20a1a8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x20a1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20a1ac:
    // 0x20a1ac: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_20a1b0:
    if (ctx->pc == 0x20A1B0u) {
        ctx->pc = 0x20A1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A1ACu;
        // 0x20a1b0: 0x22843  sra         $a1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A1B4u;
        goto label_20a1b4;
    }
    ctx->pc = 0x20A1ACu;
    {
        const bool branch_taken_0x20a1ac = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20A1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A1ACu;
        // 0x20a1b0: 0x22843  sra         $a1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a1ac) {
            ctx->pc = 0x20A1BCu;
            goto label_20a1bc;
        }
    }
    ctx->pc = 0x20A1B4u;
label_20a1b4:
    // 0x20a1b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20a1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20a1b8:
    // 0x20a1b8: 0x22843  sra         $a1, $v0, 1
    ctx->pc = 0x20a1b8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
label_20a1bc:
    // 0x20a1bc: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x20a1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_20a1c0:
    // 0x20a1c0: 0xa2a50080  sb          $a1, 0x80($s5)
    ctx->pc = 0x20a1c0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 128), (uint8_t)GPR_U32(ctx, 5));
label_20a1c4:
    // 0x20a1c4: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x20a1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_20a1c8:
    // 0x20a1c8: 0xa2a50081  sb          $a1, 0x81($s5)
    ctx->pc = 0x20a1c8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 129), (uint8_t)GPR_U32(ctx, 5));
label_20a1cc:
    // 0x20a1cc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_20a1d0:
    if (ctx->pc == 0x20A1D0u) {
        ctx->pc = 0x20A1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A1CCu;
        // 0x20a1d0: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A1D4u;
        goto label_20a1d4;
    }
    ctx->pc = 0x20A1CCu;
    {
        const bool branch_taken_0x20a1cc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x20A1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A1CCu;
        // 0x20a1d0: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a1cc) {
            ctx->pc = 0x20A1DCu;
            goto label_20a1dc;
        }
    }
    ctx->pc = 0x20A1D4u;
label_20a1d4:
    // 0x20a1d4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x20a1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_20a1d8:
    // 0x20a1d8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x20a1d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_20a1dc:
    // 0x20a1dc: 0xa2a20082  sb          $v0, 0x82($s5)
    ctx->pc = 0x20a1dcu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 130), (uint8_t)GPR_U32(ctx, 2));
label_20a1e0:
    // 0x20a1e0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x20a1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_20a1e4:
    // 0x20a1e4: 0xa2a20083  sb          $v0, 0x83($s5)
    ctx->pc = 0x20a1e4u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 131), (uint8_t)GPR_U32(ctx, 2));
label_20a1e8:
    // 0x20a1e8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20a1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_20a1ec:
    // 0x20a1ec: 0x1000001a  b           . + 4 + (0x1A << 2)
label_20a1f0:
    if (ctx->pc == 0x20A1F0u) {
        ctx->pc = 0x20A1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A1ECu;
        // 0x20a1f0: 0xaea20084  sw          $v0, 0x84($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A1F4u;
        goto label_20a1f4;
    }
    ctx->pc = 0x20A1ECu;
    {
        const bool branch_taken_0x20a1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A1ECu;
        // 0x20a1f0: 0xaea20084  sw          $v0, 0x84($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a1ec) {
            ctx->pc = 0x20A258u;
            goto label_20a258;
        }
    }
    ctx->pc = 0x20A1F4u;
label_20a1f4:
    // 0x20a1f4: 0x0  nop
    ctx->pc = 0x20a1f4u;
    // NOP
label_20a1f8:
    // 0x20a1f8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x20a1f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_20a1fc:
    // 0x20a1fc: 0x3421869f  ori         $at, $at, 0x869F
    ctx->pc = 0x20a1fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34463);
label_20a200:
    // 0x20a200: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x20a200u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_20a204:
    // 0x20a204: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_20a208:
    if (ctx->pc == 0x20A208u) {
        ctx->pc = 0x20A20Cu;
        goto label_20a20c;
    }
    ctx->pc = 0x20A204u;
    {
        const bool branch_taken_0x20a204 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a204) {
            ctx->pc = 0x20A258u;
            goto label_20a258;
        }
    }
    ctx->pc = 0x20A20Cu;
label_20a20c:
    // 0x20a20c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x20a20cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_20a210:
    // 0x20a210: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20a210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20a214:
    // 0x20a214: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_20a218:
    if (ctx->pc == 0x20A218u) {
        ctx->pc = 0x20A218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A214u;
        // 0x20a218: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A21Cu;
        goto label_20a21c;
    }
    ctx->pc = 0x20A214u;
    {
        const bool branch_taken_0x20a214 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x20A218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A214u;
        // 0x20a218: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a214) {
            ctx->pc = 0x20A224u;
            goto label_20a224;
        }
    }
    ctx->pc = 0x20A21Cu;
label_20a21c:
    // 0x20a21c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x20a21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_20a220:
    // 0x20a220: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x20a220u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_20a224:
    // 0x20a224: 0xa2a20080  sb          $v0, 0x80($s5)
    ctx->pc = 0x20a224u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 128), (uint8_t)GPR_U32(ctx, 2));
label_20a228:
    // 0x20a228: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x20a228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_20a22c:
    // 0x20a22c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x20a22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_20a230:
    // 0x20a230: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_20a234:
    if (ctx->pc == 0x20A234u) {
        ctx->pc = 0x20A234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A230u;
        // 0x20a234: 0x22043  sra         $a0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A238u;
        goto label_20a238;
    }
    ctx->pc = 0x20A230u;
    {
        const bool branch_taken_0x20a230 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20A234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A230u;
        // 0x20a234: 0x22043  sra         $a0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a230) {
            ctx->pc = 0x20A240u;
            goto label_20a240;
        }
    }
    ctx->pc = 0x20A238u;
label_20a238:
    // 0x20a238: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20a238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20a23c:
    // 0x20a23c: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x20a23cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_20a240:
    // 0x20a240: 0xa2a40081  sb          $a0, 0x81($s5)
    ctx->pc = 0x20a240u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 129), (uint8_t)GPR_U32(ctx, 4));
label_20a244:
    // 0x20a244: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x20a244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_20a248:
    // 0x20a248: 0xa2a40082  sb          $a0, 0x82($s5)
    ctx->pc = 0x20a248u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 130), (uint8_t)GPR_U32(ctx, 4));
label_20a24c:
    // 0x20a24c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_20a250:
    // 0x20a250: 0xa2a30083  sb          $v1, 0x83($s5)
    ctx->pc = 0x20a250u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 131), (uint8_t)GPR_U32(ctx, 3));
label_20a254:
    // 0x20a254: 0xaea20084  sw          $v0, 0x84($s5)
    ctx->pc = 0x20a254u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 2));
label_20a258:
    // 0x20a258: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x20a258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_20a25c:
    // 0x20a25c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x20a25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_20a260:
    // 0x20a260: 0xc070d40  jal         func_1C3500
label_20a264:
    if (ctx->pc == 0x20A264u) {
        ctx->pc = 0x20A264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A260u;
        // 0x20a264: 0x8c445748  lw          $a0, 0x5748($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22344)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A268u;
        goto label_20a268;
    }
    ctx->pc = 0x20A260u;
    SET_GPR_U32(ctx, 31, 0x20A268u);
    ctx->pc = 0x20A264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A260u;
    // 0x20a264: 0x8c445748  lw          $a0, 0x5748($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22344)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3500u;
    { ctx->pc = 0x1c3500; return; }
    ctx->pc = 0x20A268u;
label_20a268:
    // 0x20a268: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x20a268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_20a26c:
    // 0x20a26c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20a26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20a270:
    // 0x20a270: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x20a270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_20a274:
    // 0x20a274: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20a274u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a278:
    // 0x20a278: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20a278u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a27c:
    // 0x20a27c: 0xc066c72  jal         func_19B1C8
label_20a280:
    if (ctx->pc == 0x20A280u) {
        ctx->pc = 0x20A280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A27Cu;
        // 0x20a280: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A284u;
        goto label_20a284;
    }
    ctx->pc = 0x20A27Cu;
    SET_GPR_U32(ctx, 31, 0x20A284u);
    ctx->pc = 0x20A280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A27Cu;
    // 0x20a280: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x20A284u;
label_20a284:
    // 0x20a284: 0x8f849100  lw          $a0, -0x6F00($gp)
    ctx->pc = 0x20a284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_20a288:
    // 0x20a288: 0x8c8257f0  lw          $v0, 0x57F0($a0)
    ctx->pc = 0x20a288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22512)));
label_20a28c:
    // 0x20a28c: 0x1454002b  bne         $v0, $s4, . + 4 + (0x2B << 2)
label_20a290:
    if (ctx->pc == 0x20A290u) {
        ctx->pc = 0x20A294u;
        goto label_20a294;
    }
    ctx->pc = 0x20A28Cu;
    {
        const bool branch_taken_0x20a28c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x20a28c) {
            ctx->pc = 0x20A33Cu;
            goto label_20a33c;
        }
    }
    ctx->pc = 0x20A294u;
label_20a294:
    // 0x20a294: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x20a294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_20a298:
    // 0x20a298: 0x8c8557e8  lw          $a1, 0x57E8($a0)
    ctx->pc = 0x20a298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22504)));
label_20a29c:
    // 0x20a29c: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x20a29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_20a2a0:
    // 0x20a2a0: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x20a2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_20a2a4:
    // 0x20a2a4: 0x28a10020  slti        $at, $a1, 0x20
    ctx->pc = 0x20a2a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_20a2a8:
    // 0x20a2a8: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x20a2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20a2ac:
    // 0x20a2ac: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x20a2acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20a2b0:
    // 0x20a2b0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x20a2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20a2b4:
    // 0x20a2b4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x20a2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_20a2b8:
    // 0x20a2b8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x20a2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_20a2bc:
    // 0x20a2bc: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_20a2c0:
    if (ctx->pc == 0x20A2C0u) {
        ctx->pc = 0x20A2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A2BCu;
        // 0x20a2c0: 0x24554be0  addiu       $s5, $v0, 0x4BE0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 19424));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A2C4u;
        goto label_20a2c4;
    }
    ctx->pc = 0x20A2BCu;
    {
        const bool branch_taken_0x20a2bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A2BCu;
        // 0x20a2c0: 0x24554be0  addiu       $s5, $v0, 0x4BE0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 19424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a2bc) {
            ctx->pc = 0x20A2E0u;
            goto label_20a2e0;
        }
    }
    ctx->pc = 0x20A2C4u;
label_20a2c4:
    // 0x20a2c4: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x20a2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_20a2c8:
    // 0x20a2c8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_20a2cc:
    if (ctx->pc == 0x20A2CCu) {
        ctx->pc = 0x20A2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A2C8u;
        // 0x20a2cc: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A2D0u;
        goto label_20a2d0;
    }
    ctx->pc = 0x20A2C8u;
    {
        const bool branch_taken_0x20a2c8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x20A2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A2C8u;
        // 0x20a2cc: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a2c8) {
            ctx->pc = 0x20A2D8u;
            goto label_20a2d8;
        }
    }
    ctx->pc = 0x20A2D0u;
label_20a2d0:
    // 0x20a2d0: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x20a2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
label_20a2d4:
    // 0x20a2d4: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x20a2d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_20a2d8:
    // 0x20a2d8: 0x10000009  b           . + 4 + (0x9 << 2)
label_20a2dc:
    if (ctx->pc == 0x20A2DCu) {
        ctx->pc = 0x20A2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A2D8u;
        // 0x20a2dc: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A2E0u;
        goto label_20a2e0;
    }
    ctx->pc = 0x20A2D8u;
    {
        const bool branch_taken_0x20a2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A2D8u;
        // 0x20a2dc: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a2d8) {
            ctx->pc = 0x20A300u;
            goto label_20a300;
        }
    }
    ctx->pc = 0x20A2E0u;
label_20a2e0:
    // 0x20a2e0: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x20a2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_20a2e4:
    // 0x20a2e4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x20a2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_20a2e8:
    // 0x20a2e8: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x20a2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_20a2ec:
    // 0x20a2ec: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_20a2f0:
    if (ctx->pc == 0x20A2F0u) {
        ctx->pc = 0x20A2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A2ECu;
        // 0x20a2f0: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A2F4u;
        goto label_20a2f4;
    }
    ctx->pc = 0x20A2ECu;
    {
        const bool branch_taken_0x20a2ec = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x20A2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A2ECu;
        // 0x20a2f0: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a2ec) {
            ctx->pc = 0x20A2FCu;
            goto label_20a2fc;
        }
    }
    ctx->pc = 0x20A2F4u;
label_20a2f4:
    // 0x20a2f4: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x20a2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
label_20a2f8:
    // 0x20a2f8: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x20a2f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_20a2fc:
    // 0x20a2fc: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x20a2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_20a300:
    // 0x20a300: 0x24070032  addiu       $a3, $zero, 0x32
    ctx->pc = 0x20a300u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_20a304:
    // 0x20a304: 0x2645fffb  addiu       $a1, $s2, -0x5
    ctx->pc = 0x20a304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967291));
label_20a308:
    // 0x20a308: 0x2666fffb  addiu       $a2, $s3, -0x5
    ctx->pc = 0x20a308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967291));
label_20a30c:
    // 0x20a30c: 0x304a00ff  andi        $t2, $v0, 0xFF
    ctx->pc = 0x20a30cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_20a310:
    // 0x20a310: 0x26a40010  addiu       $a0, $s5, 0x10
    ctx->pc = 0x20a310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_20a314:
    // 0x20a314: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x20a314u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_20a318:
    // 0x20a318: 0xc07c0d0  jal         func_1F0340
label_20a31c:
    if (ctx->pc == 0x20A31Cu) {
        ctx->pc = 0x20A31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A318u;
        // 0x20a31c: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A320u;
        goto label_20a320;
    }
    ctx->pc = 0x20A318u;
    SET_GPR_U32(ctx, 31, 0x20A320u);
    ctx->pc = 0x20A31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A318u;
    // 0x20a31c: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0340u;
    { ctx->pc = 0x1f0340; return; }
    ctx->pc = 0x20A320u;
label_20a320:
    // 0x20a320: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x20a320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_20a324:
    // 0x20a324: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20a324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20a328:
    // 0x20a328: 0x2406002d  addiu       $a2, $zero, 0x2D
    ctx->pc = 0x20a328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_20a32c:
    // 0x20a32c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20a32cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a330:
    // 0x20a330: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20a330u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a334:
    // 0x20a334: 0xc066c72  jal         func_19B1C8
label_20a338:
    if (ctx->pc == 0x20A338u) {
        ctx->pc = 0x20A338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A334u;
        // 0x20a338: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A33Cu;
        goto label_20a33c;
    }
    ctx->pc = 0x20A334u;
    SET_GPR_U32(ctx, 31, 0x20A33Cu);
    ctx->pc = 0x20A338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A334u;
    // 0x20a338: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x20A33Cu;
label_20a33c:
    // 0x20a33c: 0x0  nop
    ctx->pc = 0x20a33cu;
    // NOP
label_20a340:
    // 0x20a340: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x20a340u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_20a344:
    // 0x20a344: 0x2a820028  slti        $v0, $s4, 0x28
    ctx->pc = 0x20a344u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)40) ? 1 : 0);
label_20a348:
    // 0x20a348: 0x26d60160  addiu       $s6, $s6, 0x160
    ctx->pc = 0x20a348u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 352));
label_20a34c:
    // 0x20a34c: 0x1440ff07  bnez        $v0, . + 4 + (-0xF9 << 2)
label_20a350:
    if (ctx->pc == 0x20A350u) {
        ctx->pc = 0x20A350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A34Cu;
        // 0x20a350: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A354u;
        goto label_20a354;
    }
    ctx->pc = 0x20A34Cu;
    {
        const bool branch_taken_0x20a34c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A34Cu;
        // 0x20a350: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a34c) {
            ctx->pc = 0x209F6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_209f6c;
        }
    }
    ctx->pc = 0x20A354u;
label_20a354:
    // 0x20a354: 0x8f8a9100  lw          $t2, -0x6F00($gp)
    ctx->pc = 0x20a354u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_20a358:
    // 0x20a358: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x20a358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
label_20a35c:
    // 0x20a35c: 0x3444aaab  ori         $a0, $v0, 0xAAAB
    ctx->pc = 0x20a35cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_20a360:
    // 0x20a360: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x20a360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_20a364:
    // 0x20a364: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x20a364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_20a368:
    // 0x20a368: 0x24020650  addiu       $v0, $zero, 0x650
    ctx->pc = 0x20a368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1616));
label_20a36c:
    // 0x20a36c: 0x24060074  addiu       $a2, $zero, 0x74
    ctx->pc = 0x20a36cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
label_20a370:
    // 0x20a370: 0x2407012c  addiu       $a3, $zero, 0x12C
    ctx->pc = 0x20a370u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_20a374:
    // 0x20a374: 0x24080036  addiu       $t0, $zero, 0x36
    ctx->pc = 0x20a374u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_20a378:
    // 0x20a378: 0x8d495724  lw          $t1, 0x5724($t2)
    ctx->pc = 0x20a378u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 22308)));
label_20a37c:
    // 0x20a37c: 0x928c0  sll         $a1, $t1, 3
    ctx->pc = 0x20a37cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_20a380:
    // 0x20a380: 0x1254823  subu        $t1, $t1, $a1
    ctx->pc = 0x20a380u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
label_20a384:
    // 0x20a384: 0x92880  sll         $a1, $t1, 2
    ctx->pc = 0x20a384u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_20a388:
    // 0x20a388: 0x1252821  addu        $a1, $t1, $a1
    ctx->pc = 0x20a388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
label_20a38c:
    // 0x20a38c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x20a38cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_20a390:
    // 0x20a390: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x20a390u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_20a394:
    // 0x20a394: 0x0  nop
    ctx->pc = 0x20a394u;
    // NOP
label_20a398:
    // 0x20a398: 0x0  nop
    ctx->pc = 0x20a398u;
    // NOP
label_20a39c:
    // 0x20a39c: 0x2010  mfhi        $a0
    ctx->pc = 0x20a39cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_20a3a0:
    // 0x20a3a0: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x20a3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_20a3a4:
    // 0x20a3a4: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x20a3a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_20a3a8:
    // 0x20a3a8: 0x41843  sra         $v1, $a0, 1
    ctx->pc = 0x20a3a8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
label_20a3ac:
    // 0x20a3ac: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x20a3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_20a3b0:
    // 0x20a3b0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x20a3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_20a3b4:
    // 0x20a3b4: 0x24513f40  addiu       $s1, $v0, 0x3F40
    ctx->pc = 0x20a3b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16192));
label_20a3b8:
    // 0x20a3b8: 0x24770280  addiu       $s7, $v1, 0x280
    ctx->pc = 0x20a3b8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 640));
label_20a3bc:
    // 0x20a3bc: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x20a3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_20a3c0:
    // 0x20a3c0: 0xc07c25c  jal         func_1F0970
label_20a3c4:
    if (ctx->pc == 0x20A3C4u) {
        ctx->pc = 0x20A3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A3C0u;
        // 0x20a3c4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A3C8u;
        goto label_20a3c8;
    }
    ctx->pc = 0x20A3C0u;
    SET_GPR_U32(ctx, 31, 0x20A3C8u);
    ctx->pc = 0x20A3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A3C0u;
    // 0x20a3c4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0970u;
    { ctx->pc = 0x1f0970; return; }
    ctx->pc = 0x20A3C8u;
label_20a3c8:
    // 0x20a3c8: 0x171100  sll         $v0, $s7, 4
    ctx->pc = 0x20a3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
label_20a3cc:
    // 0x20a3cc: 0x24037c00  addiu       $v1, $zero, 0x7C00
    ctx->pc = 0x20a3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31744));
label_20a3d0:
    // 0x20a3d0: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x20a3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_20a3d4:
    // 0x20a3d4: 0x3405fe00  ori         $a1, $zero, 0xFE00
    ctx->pc = 0x20a3d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_20a3d8:
    // 0x20a3d8: 0xa6220630  sh          $v0, 0x630($s1)
    ctx->pc = 0x20a3d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1584), (uint16_t)GPR_U32(ctx, 2));
label_20a3dc:
    // 0x20a3dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20a3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20a3e0:
    // 0x20a3e0: 0x26e20070  addiu       $v0, $s7, 0x70
    ctx->pc = 0x20a3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 112));
label_20a3e4:
    // 0x20a3e4: 0xa6230632  sh          $v1, 0x632($s1)
    ctx->pc = 0x20a3e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1586), (uint16_t)GPR_U32(ctx, 3));
label_20a3e8:
    // 0x20a3e8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x20a3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_20a3ec:
    // 0x20a3ec: 0xae250634  sw          $a1, 0x634($s1)
    ctx->pc = 0x20a3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1588), GPR_U32(ctx, 5));
label_20a3f0:
    // 0x20a3f0: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x20a3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_20a3f4:
    // 0x20a3f4: 0x24060065  addiu       $a2, $zero, 0x65
    ctx->pc = 0x20a3f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_20a3f8:
    // 0x20a3f8: 0xa6220640  sh          $v0, 0x640($s1)
    ctx->pc = 0x20a3f8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1600), (uint16_t)GPR_U32(ctx, 2));
label_20a3fc:
    // 0x20a3fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20a3fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a400:
    // 0x20a400: 0x24027c80  addiu       $v0, $zero, 0x7C80
    ctx->pc = 0x20a400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31872));
label_20a404:
    // 0x20a404: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20a404u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a408:
    // 0x20a408: 0xa6220642  sh          $v0, 0x642($s1)
    ctx->pc = 0x20a408u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1602), (uint16_t)GPR_U32(ctx, 2));
label_20a40c:
    // 0x20a40c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20a40cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a410:
    // 0x20a410: 0xae250644  sw          $a1, 0x644($s1)
    ctx->pc = 0x20a410u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1604), GPR_U32(ctx, 5));
label_20a414:
    // 0x20a414: 0xc066c72  jal         func_19B1C8
label_20a418:
    if (ctx->pc == 0x20A418u) {
        ctx->pc = 0x20A418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A414u;
        // 0x20a418: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A41Cu;
        goto label_20a41c;
    }
    ctx->pc = 0x20A414u;
    SET_GPR_U32(ctx, 31, 0x20A41Cu);
    ctx->pc = 0x20A418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A414u;
    // 0x20a418: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x20A41Cu;
label_20a41c:
    // 0x20a41c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x20a41cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a420:
    // 0x20a420: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x20a420u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a424:
    // 0x20a424: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20a424u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a428:
    // 0x20a428: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x20a428u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a42c:
    // 0x20a42c: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x20a42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_20a430:
    // 0x20a430: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x20a430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_20a434:
    // 0x20a434: 0x8c243ffc  lw          $a0, 0x3FFC($at)
    ctx->pc = 0x20a434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_20a438:
    // 0x20a438: 0x562821  addu        $a1, $v0, $s6
    ctx->pc = 0x20a438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_20a43c:
    // 0x20a43c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x20a43cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_20a440:
    // 0x20a440: 0x8c4257ec  lw          $v0, 0x57EC($v0)
    ctx->pc = 0x20a440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22508)));
label_20a444:
    // 0x20a444: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20a444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20a448:
    // 0x20a448: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x20a448u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_20a44c:
    // 0x20a44c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20a44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20a450:
    // 0x20a450: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20a450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_20a454:
    // 0x20a454: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x20a454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_20a458:
    // 0x20a458: 0x14530003  bne         $v0, $s3, . + 4 + (0x3 << 2)
label_20a45c:
    if (ctx->pc == 0x20A45Cu) {
        ctx->pc = 0x20A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A458u;
        // 0x20a45c: 0x24743700  addiu       $s4, $v1, 0x3700 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 14080));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A460u;
        goto label_20a460;
    }
    ctx->pc = 0x20A458u;
    {
        const bool branch_taken_0x20a458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x20A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A458u;
        // 0x20a45c: 0x24743700  addiu       $s4, $v1, 0x3700 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 14080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a458) {
            ctx->pc = 0x20A468u;
            goto label_20a468;
        }
    }
    ctx->pc = 0x20A460u;
label_20a460:
    // 0x20a460: 0x10000002  b           . + 4 + (0x2 << 2)
label_20a464:
    if (ctx->pc == 0x20A464u) {
        ctx->pc = 0x20A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A460u;
        // 0x20a464: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A468u;
        goto label_20a468;
    }
    ctx->pc = 0x20A460u;
    {
        const bool branch_taken_0x20a460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A460u;
        // 0x20a464: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a460) {
            ctx->pc = 0x20A46Cu;
            goto label_20a46c;
        }
    }
    ctx->pc = 0x20A468u;
label_20a468:
    // 0x20a468: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x20a468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_20a46c:
    // 0x20a46c: 0x2f1a821  addu        $s5, $s7, $s1
    ctx->pc = 0x20a46cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
label_20a470:
    // 0x20a470: 0x24037ca0  addiu       $v1, $zero, 0x7CA0
    ctx->pc = 0x20a470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31904));
label_20a474:
    // 0x20a474: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x20a474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
label_20a478:
    // 0x20a478: 0x3404fe00  ori         $a0, $zero, 0xFE00
    ctx->pc = 0x20a478u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_20a47c:
    // 0x20a47c: 0x24456c00  addiu       $a1, $v0, 0x6C00
    ctx->pc = 0x20a47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_20a480:
    // 0x20a480: 0x26a2003c  addiu       $v0, $s5, 0x3C
    ctx->pc = 0x20a480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 60));
label_20a484:
    // 0x20a484: 0xa6850090  sh          $a1, 0x90($s4)
    ctx->pc = 0x20a484u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 144), (uint16_t)GPR_U32(ctx, 5));
label_20a488:
    // 0x20a488: 0xa6830092  sh          $v1, 0x92($s4)
    ctx->pc = 0x20a488u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 146), (uint16_t)GPR_U32(ctx, 3));
label_20a48c:
    // 0x20a48c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x20a48cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_20a490:
    // 0x20a490: 0x24436c00  addiu       $v1, $v0, 0x6C00
    ctx->pc = 0x20a490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_20a494:
    // 0x20a494: 0xae840094  sw          $a0, 0x94($s4)
    ctx->pc = 0x20a494u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 148), GPR_U32(ctx, 4));
label_20a498:
    // 0x20a498: 0x24027e50  addiu       $v0, $zero, 0x7E50
    ctx->pc = 0x20a498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32336));
label_20a49c:
    // 0x20a49c: 0xa68300a0  sh          $v1, 0xA0($s4)
    ctx->pc = 0x20a49cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 160), (uint16_t)GPR_U32(ctx, 3));
label_20a4a0:
    // 0x20a4a0: 0xa68200a2  sh          $v0, 0xA2($s4)
    ctx->pc = 0x20a4a0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 162), (uint16_t)GPR_U32(ctx, 2));
label_20a4a4:
    // 0x20a4a4: 0xae8400a4  sw          $a0, 0xA4($s4)
    ctx->pc = 0x20a4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 4));
label_20a4a8:
    // 0x20a4a8: 0x8f839100  lw          $v1, -0x6F00($gp)
    ctx->pc = 0x20a4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_20a4ac:
    // 0x20a4ac: 0x8c62572c  lw          $v0, 0x572C($v1)
    ctx->pc = 0x20a4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22316)));
label_20a4b0:
    // 0x20a4b0: 0x1453000a  bne         $v0, $s3, . + 4 + (0xA << 2)
label_20a4b4:
    if (ctx->pc == 0x20A4B4u) {
        ctx->pc = 0x20A4B8u;
        goto label_20a4b8;
    }
    ctx->pc = 0x20A4B0u;
    {
        const bool branch_taken_0x20a4b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x20a4b0) {
            ctx->pc = 0x20A4DCu;
            goto label_20a4dc;
        }
    }
    ctx->pc = 0x20A4B8u;
label_20a4b8:
    // 0x20a4b8: 0x80645730  lb          $a0, 0x5730($v1)
    ctx->pc = 0x20a4b8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 22320)));
label_20a4bc:
    // 0x20a4bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20a4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_20a4c0:
    // 0x20a4c0: 0xa2840080  sb          $a0, 0x80($s4)
    ctx->pc = 0x20a4c0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 128), (uint8_t)GPR_U32(ctx, 4));
label_20a4c4:
    // 0x20a4c4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x20a4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_20a4c8:
    // 0x20a4c8: 0xa2860081  sb          $a2, 0x81($s4)
    ctx->pc = 0x20a4c8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 129), (uint8_t)GPR_U32(ctx, 6));
label_20a4cc:
    // 0x20a4cc: 0xa2860082  sb          $a2, 0x82($s4)
    ctx->pc = 0x20a4ccu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 130), (uint8_t)GPR_U32(ctx, 6));
label_20a4d0:
    // 0x20a4d0: 0xa2830083  sb          $v1, 0x83($s4)
    ctx->pc = 0x20a4d0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 131), (uint8_t)GPR_U32(ctx, 3));
label_20a4d4:
    // 0x20a4d4: 0x10000009  b           . + 4 + (0x9 << 2)
label_20a4d8:
    if (ctx->pc == 0x20A4D8u) {
        ctx->pc = 0x20A4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A4D4u;
        // 0x20a4d8: 0xae820084  sw          $v0, 0x84($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A4DCu;
        goto label_20a4dc;
    }
    ctx->pc = 0x20A4D4u;
    {
        const bool branch_taken_0x20a4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A4D4u;
        // 0x20a4d8: 0xae820084  sw          $v0, 0x84($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a4d4) {
            ctx->pc = 0x20A4FCu;
            goto label_20a4fc;
        }
    }
    ctx->pc = 0x20A4DCu;
label_20a4dc:
    // 0x20a4dc: 0x0  nop
    ctx->pc = 0x20a4dcu;
    // NOP
label_20a4e0:
    // 0x20a4e0: 0xa2860080  sb          $a2, 0x80($s4)
    ctx->pc = 0x20a4e0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 128), (uint8_t)GPR_U32(ctx, 6));
label_20a4e4:
    // 0x20a4e4: 0xa2860081  sb          $a2, 0x81($s4)
    ctx->pc = 0x20a4e4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 129), (uint8_t)GPR_U32(ctx, 6));
label_20a4e8:
    // 0x20a4e8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x20a4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_20a4ec:
    // 0x20a4ec: 0xa2860082  sb          $a2, 0x82($s4)
    ctx->pc = 0x20a4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 130), (uint8_t)GPR_U32(ctx, 6));
label_20a4f0:
    // 0x20a4f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20a4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_20a4f4:
    // 0x20a4f4: 0xa2830083  sb          $v1, 0x83($s4)
    ctx->pc = 0x20a4f4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 131), (uint8_t)GPR_U32(ctx, 3));
label_20a4f8:
    // 0x20a4f8: 0xae820084  sw          $v0, 0x84($s4)
    ctx->pc = 0x20a4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 2));
label_20a4fc:
    // 0x20a4fc: 0x0  nop
    ctx->pc = 0x20a4fcu;
    // NOP
label_20a500:
    // 0x20a500: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x20a500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_20a504:
    // 0x20a504: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x20a504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_20a508:
    // 0x20a508: 0xc070d40  jal         func_1C3500
label_20a50c:
    if (ctx->pc == 0x20A50Cu) {
        ctx->pc = 0x20A50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A508u;
        // 0x20a50c: 0x8c445734  lw          $a0, 0x5734($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22324)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A510u;
        goto label_20a510;
    }
    ctx->pc = 0x20A508u;
    SET_GPR_U32(ctx, 31, 0x20A510u);
    ctx->pc = 0x20A50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A508u;
    // 0x20a50c: 0x8c445734  lw          $a0, 0x5734($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22324)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3500u;
    { ctx->pc = 0x1c3500; return; }
    ctx->pc = 0x20A510u;
label_20a510:
    // 0x20a510: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x20a510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20a514:
    // 0x20a514: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20a514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20a518:
    // 0x20a518: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x20a518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_20a51c:
    // 0x20a51c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20a51cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a520:
    // 0x20a520: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20a520u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a524:
    // 0x20a524: 0xc066c72  jal         func_19B1C8
label_20a528:
    if (ctx->pc == 0x20A528u) {
        ctx->pc = 0x20A528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A524u;
        // 0x20a528: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A52Cu;
        goto label_20a52c;
    }
    ctx->pc = 0x20A524u;
    SET_GPR_U32(ctx, 31, 0x20A52Cu);
    ctx->pc = 0x20A528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A524u;
    // 0x20a528: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x20A52Cu;
label_20a52c:
    // 0x20a52c: 0x8f849100  lw          $a0, -0x6F00($gp)
    ctx->pc = 0x20a52cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_20a530:
    // 0x20a530: 0x8c8357ec  lw          $v1, 0x57EC($a0)
    ctx->pc = 0x20a530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22508)));
label_20a534:
    // 0x20a534: 0x1473002e  bne         $v1, $s3, . + 4 + (0x2E << 2)
label_20a538:
    if (ctx->pc == 0x20A538u) {
        ctx->pc = 0x20A53Cu;
        goto label_20a53c;
    }
    ctx->pc = 0x20A534u;
    {
        const bool branch_taken_0x20a534 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x20a534) {
            ctx->pc = 0x20A5F0u;
            { ctx->pc = 0x20a5f0; return; }
        }
    }
    ctx->pc = 0x20A53Cu;
label_20a53c:
    // 0x20a53c: 0x8c8357f4  lw          $v1, 0x57F4($a0)
    ctx->pc = 0x20a53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22516)));
label_20a540:
    // 0x20a540: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
label_20a544:
    if (ctx->pc == 0x20A544u) {
        ctx->pc = 0x20A548u;
        goto label_20a548;
    }
    ctx->pc = 0x20A540u;
    {
        const bool branch_taken_0x20a540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a540) {
            ctx->pc = 0x20A5F0u;
            { ctx->pc = 0x20a5f0; return; }
        }
    }
    ctx->pc = 0x20A548u;
label_20a548:
    // 0x20a548: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x20a548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_20a54c:
    // 0x20a54c: 0x8c8557e8  lw          $a1, 0x57E8($a0)
    ctx->pc = 0x20a54cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22504)));
label_20a550:
    // 0x20a550: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x20a550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_20a554:
    // 0x20a554: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x20a554u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_20a558:
    // 0x20a558: 0x28a10020  slti        $at, $a1, 0x20
    ctx->pc = 0x20a558u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_20a55c:
    // 0x20a55c: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x20a55cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20a560:
    // 0x20a560: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x20a560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20a564:
    // 0x20a564: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x20a564u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20a568:
    // 0x20a568: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x20a568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_20a56c:
    // 0x20a56c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x20a56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_20a570:
    // 0x20a570: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_20a574:
    if (ctx->pc == 0x20A574u) {
        ctx->pc = 0x20A574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A570u;
        // 0x20a574: 0x24545180  addiu       $s4, $v0, 0x5180 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 20864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A578u;
        goto label_20a578;
    }
    ctx->pc = 0x20A570u;
    {
        const bool branch_taken_0x20a570 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A570u;
        // 0x20a574: 0x24545180  addiu       $s4, $v0, 0x5180 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 20864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a570) {
            ctx->pc = 0x20A594u;
            goto label_20a594;
        }
    }
    ctx->pc = 0x20A578u;
label_20a578:
    // 0x20a578: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x20a578u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_20a57c:
    // 0x20a57c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_20a580:
    if (ctx->pc == 0x20A580u) {
        ctx->pc = 0x20A580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A57Cu;
        // 0x20a580: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A584u;
        goto label_20a584;
    }
    ctx->pc = 0x20A57Cu;
    {
        const bool branch_taken_0x20a57c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x20A580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A57Cu;
        // 0x20a580: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a57c) {
            ctx->pc = 0x20A58Cu;
            goto label_20a58c;
        }
    }
    ctx->pc = 0x20A584u;
label_20a584:
    // 0x20a584: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x20a584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
label_20a588:
    // 0x20a588: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x20a588u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_20a58c:
    // 0x20a58c: 0x10000009  b           . + 4 + (0x9 << 2)
label_20a590:
    if (ctx->pc == 0x20A590u) {
        ctx->pc = 0x20A590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A58Cu;
        // 0x20a590: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A594u;
        goto label_20a594;
    }
    ctx->pc = 0x20A58Cu;
    {
        const bool branch_taken_0x20a58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A58Cu;
        // 0x20a590: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a58c) {
            ctx->pc = 0x20A5B4u;
            goto label_20a5b4;
        }
    }
    ctx->pc = 0x20A594u;
label_20a594:
    // 0x20a594: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x20a594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_20a598:
    // 0x20a598: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x20a598u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_20a59c:
    // 0x20a59c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x20a59cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_20a5a0:
    // 0x20a5a0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_20a5a4:
    if (ctx->pc == 0x20A5A4u) {
        ctx->pc = 0x20A5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A5A0u;
        // 0x20a5a4: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A5A8u;
        goto label_20a5a8;
    }
    ctx->pc = 0x20A5A0u;
    {
        const bool branch_taken_0x20a5a0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x20A5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A5A0u;
        // 0x20a5a4: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a5a0) {
            ctx->pc = 0x20A5B0u;
            goto label_20a5b0;
        }
    }
    ctx->pc = 0x20A5A8u;
label_20a5a8:
    // 0x20a5a8: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x20a5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
label_20a5ac:
    // 0x20a5ac: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x20a5acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_20a5b0:
    // 0x20a5b0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x20a5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_20a5b4:
    // 0x20a5b4: 0x304a00ff  andi        $t2, $v0, 0xFF
    ctx->pc = 0x20a5b4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_20a5b8:
    // 0x20a5b8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x20a5b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_20a5bc:
    // 0x20a5bc: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x20a5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_20a5c0:
    // 0x20a5c0: 0x24060074  addiu       $a2, $zero, 0x74
    ctx->pc = 0x20a5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
label_20a5c4:
    // 0x20a5c4: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x20a5c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_20a5c8:
    // 0x20a5c8: 0x24080036  addiu       $t0, $zero, 0x36
    ctx->pc = 0x20a5c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_20a5cc:
    // 0x20a5cc: 0xc07c0d0  jal         func_1F0340
label_20a5d0:
    if (ctx->pc == 0x20A5D0u) {
        ctx->pc = 0x20A5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A5CCu;
        // 0x20a5d0: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A5D4u;
        goto label_20a5d4;
    }
    ctx->pc = 0x20A5CCu;
    SET_GPR_U32(ctx, 31, 0x20A5D4u);
    ctx->pc = 0x20A5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A5CCu;
    // 0x20a5d0: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0340u;
    { ctx->pc = 0x1f0340; return; }
    ctx->pc = 0x20A5D4u;
label_20a5d4:
    // 0x20a5d4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x20a5d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20a5d8:
    // 0x20a5d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20a5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20a5dc:
    // 0x20a5dc: 0x2406002d  addiu       $a2, $zero, 0x2D
    ctx->pc = 0x20a5dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->pc = 0x20a5e0u;
    return;
}

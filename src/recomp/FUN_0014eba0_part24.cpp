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

// Function: FUN_0014eba0
// Address: 0x14eba0 - 0x2ced24
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0014eba0_part24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x159f50u: goto label_159f50;
        case 0x159f54u: goto label_159f54;
        case 0x159f58u: goto label_159f58;
        case 0x159f5cu: goto label_159f5c;
        case 0x159f60u: goto label_159f60;
        case 0x159f64u: goto label_159f64;
        case 0x159f68u: goto label_159f68;
        case 0x159f6cu: goto label_159f6c;
        case 0x159f70u: goto label_159f70;
        case 0x159f74u: goto label_159f74;
        case 0x159f78u: goto label_159f78;
        case 0x159f7cu: goto label_159f7c;
        case 0x159f80u: goto label_159f80;
        case 0x159f84u: goto label_159f84;
        case 0x159f88u: goto label_159f88;
        case 0x159f8cu: goto label_159f8c;
        case 0x159f90u: goto label_159f90;
        case 0x159f94u: goto label_159f94;
        case 0x159f98u: goto label_159f98;
        case 0x159f9cu: goto label_159f9c;
        case 0x159fa0u: goto label_159fa0;
        case 0x159fa4u: goto label_159fa4;
        case 0x159fa8u: goto label_159fa8;
        case 0x159facu: goto label_159fac;
        case 0x159fb0u: goto label_159fb0;
        case 0x159fb4u: goto label_159fb4;
        case 0x159fb8u: goto label_159fb8;
        case 0x159fbcu: goto label_159fbc;
        case 0x159fc0u: goto label_159fc0;
        case 0x159fc4u: goto label_159fc4;
        case 0x159fc8u: goto label_159fc8;
        case 0x159fccu: goto label_159fcc;
        case 0x159fd0u: goto label_159fd0;
        case 0x159fd4u: goto label_159fd4;
        case 0x159fd8u: goto label_159fd8;
        case 0x159fdcu: goto label_159fdc;
        case 0x159fe0u: goto label_159fe0;
        case 0x159fe4u: goto label_159fe4;
        case 0x159fe8u: goto label_159fe8;
        case 0x159fecu: goto label_159fec;
        case 0x159ff0u: goto label_159ff0;
        case 0x159ff4u: goto label_159ff4;
        case 0x159ff8u: goto label_159ff8;
        case 0x159ffcu: goto label_159ffc;
        case 0x15a000u: goto label_15a000;
        case 0x15a004u: goto label_15a004;
        case 0x15a008u: goto label_15a008;
        case 0x15a00cu: goto label_15a00c;
        case 0x15a010u: goto label_15a010;
        case 0x15a014u: goto label_15a014;
        case 0x15a018u: goto label_15a018;
        case 0x15a01cu: goto label_15a01c;
        case 0x15a020u: goto label_15a020;
        case 0x15a024u: goto label_15a024;
        case 0x15a028u: goto label_15a028;
        case 0x15a02cu: goto label_15a02c;
        case 0x15a030u: goto label_15a030;
        case 0x15a034u: goto label_15a034;
        case 0x15a038u: goto label_15a038;
        case 0x15a03cu: goto label_15a03c;
        case 0x15a040u: goto label_15a040;
        case 0x15a044u: goto label_15a044;
        case 0x15a048u: goto label_15a048;
        case 0x15a04cu: goto label_15a04c;
        case 0x15a050u: goto label_15a050;
        case 0x15a054u: goto label_15a054;
        case 0x15a058u: goto label_15a058;
        case 0x15a05cu: goto label_15a05c;
        case 0x15a060u: goto label_15a060;
        case 0x15a064u: goto label_15a064;
        case 0x15a068u: goto label_15a068;
        case 0x15a06cu: goto label_15a06c;
        case 0x15a070u: goto label_15a070;
        case 0x15a074u: goto label_15a074;
        case 0x15a078u: goto label_15a078;
        case 0x15a07cu: goto label_15a07c;
        case 0x15a080u: goto label_15a080;
        case 0x15a084u: goto label_15a084;
        case 0x15a088u: goto label_15a088;
        case 0x15a08cu: goto label_15a08c;
        case 0x15a090u: goto label_15a090;
        case 0x15a094u: goto label_15a094;
        case 0x15a098u: goto label_15a098;
        case 0x15a09cu: goto label_15a09c;
        case 0x15a0a0u: goto label_15a0a0;
        case 0x15a0a4u: goto label_15a0a4;
        case 0x15a0a8u: goto label_15a0a8;
        case 0x15a0acu: goto label_15a0ac;
        case 0x15a0b0u: goto label_15a0b0;
        case 0x15a0b4u: goto label_15a0b4;
        case 0x15a0b8u: goto label_15a0b8;
        case 0x15a0bcu: goto label_15a0bc;
        case 0x15a0c0u: goto label_15a0c0;
        case 0x15a0c4u: goto label_15a0c4;
        case 0x15a0c8u: goto label_15a0c8;
        case 0x15a0ccu: goto label_15a0cc;
        case 0x15a0d0u: goto label_15a0d0;
        case 0x15a0d4u: goto label_15a0d4;
        case 0x15a0d8u: goto label_15a0d8;
        case 0x15a0dcu: goto label_15a0dc;
        case 0x15a0e0u: goto label_15a0e0;
        case 0x15a0e4u: goto label_15a0e4;
        case 0x15a0e8u: goto label_15a0e8;
        case 0x15a0ecu: goto label_15a0ec;
        case 0x15a0f0u: goto label_15a0f0;
        case 0x15a0f4u: goto label_15a0f4;
        case 0x15a0f8u: goto label_15a0f8;
        case 0x15a0fcu: goto label_15a0fc;
        case 0x15a100u: goto label_15a100;
        case 0x15a104u: goto label_15a104;
        case 0x15a108u: goto label_15a108;
        case 0x15a10cu: goto label_15a10c;
        case 0x15a110u: goto label_15a110;
        case 0x15a114u: goto label_15a114;
        case 0x15a118u: goto label_15a118;
        case 0x15a11cu: goto label_15a11c;
        case 0x15a120u: goto label_15a120;
        case 0x15a124u: goto label_15a124;
        case 0x15a128u: goto label_15a128;
        case 0x15a12cu: goto label_15a12c;
        case 0x15a130u: goto label_15a130;
        case 0x15a134u: goto label_15a134;
        case 0x15a138u: goto label_15a138;
        case 0x15a13cu: goto label_15a13c;
        case 0x15a140u: goto label_15a140;
        case 0x15a144u: goto label_15a144;
        case 0x15a148u: goto label_15a148;
        case 0x15a14cu: goto label_15a14c;
        case 0x15a150u: goto label_15a150;
        case 0x15a154u: goto label_15a154;
        case 0x15a158u: goto label_15a158;
        case 0x15a15cu: goto label_15a15c;
        case 0x15a160u: goto label_15a160;
        case 0x15a164u: goto label_15a164;
        case 0x15a168u: goto label_15a168;
        case 0x15a16cu: goto label_15a16c;
        case 0x15a170u: goto label_15a170;
        case 0x15a174u: goto label_15a174;
        case 0x15a178u: goto label_15a178;
        case 0x15a17cu: goto label_15a17c;
        case 0x15a180u: goto label_15a180;
        case 0x15a184u: goto label_15a184;
        case 0x15a188u: goto label_15a188;
        case 0x15a18cu: goto label_15a18c;
        case 0x15a190u: goto label_15a190;
        case 0x15a194u: goto label_15a194;
        case 0x15a198u: goto label_15a198;
        case 0x15a19cu: goto label_15a19c;
        case 0x15a1a0u: goto label_15a1a0;
        case 0x15a1a4u: goto label_15a1a4;
        case 0x15a1a8u: goto label_15a1a8;
        case 0x15a1acu: goto label_15a1ac;
        case 0x15a1b0u: goto label_15a1b0;
        case 0x15a1b4u: goto label_15a1b4;
        case 0x15a1b8u: goto label_15a1b8;
        case 0x15a1bcu: goto label_15a1bc;
        case 0x15a1c0u: goto label_15a1c0;
        case 0x15a1c4u: goto label_15a1c4;
        case 0x15a1c8u: goto label_15a1c8;
        case 0x15a1ccu: goto label_15a1cc;
        case 0x15a1d0u: goto label_15a1d0;
        case 0x15a1d4u: goto label_15a1d4;
        case 0x15a1d8u: goto label_15a1d8;
        case 0x15a1dcu: goto label_15a1dc;
        case 0x15a1e0u: goto label_15a1e0;
        case 0x15a1e4u: goto label_15a1e4;
        case 0x15a1e8u: goto label_15a1e8;
        case 0x15a1ecu: goto label_15a1ec;
        case 0x15a1f0u: goto label_15a1f0;
        case 0x15a1f4u: goto label_15a1f4;
        case 0x15a1f8u: goto label_15a1f8;
        case 0x15a1fcu: goto label_15a1fc;
        case 0x15a200u: goto label_15a200;
        case 0x15a204u: goto label_15a204;
        case 0x15a208u: goto label_15a208;
        case 0x15a20cu: goto label_15a20c;
        case 0x15a210u: goto label_15a210;
        case 0x15a214u: goto label_15a214;
        case 0x15a218u: goto label_15a218;
        case 0x15a21cu: goto label_15a21c;
        case 0x15a220u: goto label_15a220;
        case 0x15a224u: goto label_15a224;
        case 0x15a228u: goto label_15a228;
        case 0x15a22cu: goto label_15a22c;
        case 0x15a230u: goto label_15a230;
        case 0x15a234u: goto label_15a234;
        case 0x15a238u: goto label_15a238;
        case 0x15a23cu: goto label_15a23c;
        case 0x15a240u: goto label_15a240;
        case 0x15a244u: goto label_15a244;
        case 0x15a248u: goto label_15a248;
        case 0x15a24cu: goto label_15a24c;
        case 0x15a250u: goto label_15a250;
        case 0x15a254u: goto label_15a254;
        case 0x15a258u: goto label_15a258;
        case 0x15a25cu: goto label_15a25c;
        case 0x15a260u: goto label_15a260;
        case 0x15a264u: goto label_15a264;
        case 0x15a268u: goto label_15a268;
        case 0x15a26cu: goto label_15a26c;
        case 0x15a270u: goto label_15a270;
        case 0x15a274u: goto label_15a274;
        case 0x15a278u: goto label_15a278;
        case 0x15a27cu: goto label_15a27c;
        case 0x15a280u: goto label_15a280;
        case 0x15a284u: goto label_15a284;
        case 0x15a288u: goto label_15a288;
        case 0x15a28cu: goto label_15a28c;
        case 0x15a290u: goto label_15a290;
        case 0x15a294u: goto label_15a294;
        case 0x15a298u: goto label_15a298;
        case 0x15a29cu: goto label_15a29c;
        case 0x15a2a0u: goto label_15a2a0;
        case 0x15a2a4u: goto label_15a2a4;
        case 0x15a2a8u: goto label_15a2a8;
        case 0x15a2acu: goto label_15a2ac;
        case 0x15a2b0u: goto label_15a2b0;
        case 0x15a2b4u: goto label_15a2b4;
        case 0x15a2b8u: goto label_15a2b8;
        case 0x15a2bcu: goto label_15a2bc;
        case 0x15a2c0u: goto label_15a2c0;
        case 0x15a2c4u: goto label_15a2c4;
        case 0x15a2c8u: goto label_15a2c8;
        case 0x15a2ccu: goto label_15a2cc;
        case 0x15a2d0u: goto label_15a2d0;
        case 0x15a2d4u: goto label_15a2d4;
        case 0x15a2d8u: goto label_15a2d8;
        case 0x15a2dcu: goto label_15a2dc;
        case 0x15a2e0u: goto label_15a2e0;
        case 0x15a2e4u: goto label_15a2e4;
        case 0x15a2e8u: goto label_15a2e8;
        case 0x15a2ecu: goto label_15a2ec;
        case 0x15a2f0u: goto label_15a2f0;
        case 0x15a2f4u: goto label_15a2f4;
        case 0x15a2f8u: goto label_15a2f8;
        case 0x15a2fcu: goto label_15a2fc;
        case 0x15a300u: goto label_15a300;
        case 0x15a304u: goto label_15a304;
        case 0x15a308u: goto label_15a308;
        case 0x15a30cu: goto label_15a30c;
        case 0x15a310u: goto label_15a310;
        case 0x15a314u: goto label_15a314;
        case 0x15a318u: goto label_15a318;
        case 0x15a31cu: goto label_15a31c;
        case 0x15a320u: goto label_15a320;
        case 0x15a324u: goto label_15a324;
        case 0x15a328u: goto label_15a328;
        case 0x15a32cu: goto label_15a32c;
        case 0x15a330u: goto label_15a330;
        case 0x15a334u: goto label_15a334;
        case 0x15a338u: goto label_15a338;
        case 0x15a33cu: goto label_15a33c;
        case 0x15a340u: goto label_15a340;
        case 0x15a344u: goto label_15a344;
        case 0x15a348u: goto label_15a348;
        case 0x15a34cu: goto label_15a34c;
        case 0x15a350u: goto label_15a350;
        case 0x15a354u: goto label_15a354;
        case 0x15a358u: goto label_15a358;
        case 0x15a35cu: goto label_15a35c;
        case 0x15a360u: goto label_15a360;
        case 0x15a364u: goto label_15a364;
        case 0x15a368u: goto label_15a368;
        case 0x15a36cu: goto label_15a36c;
        case 0x15a370u: goto label_15a370;
        case 0x15a374u: goto label_15a374;
        case 0x15a378u: goto label_15a378;
        case 0x15a37cu: goto label_15a37c;
        case 0x15a380u: goto label_15a380;
        case 0x15a384u: goto label_15a384;
        case 0x15a388u: goto label_15a388;
        case 0x15a38cu: goto label_15a38c;
        case 0x15a390u: goto label_15a390;
        case 0x15a394u: goto label_15a394;
        case 0x15a398u: goto label_15a398;
        case 0x15a39cu: goto label_15a39c;
        case 0x15a3a0u: goto label_15a3a0;
        case 0x15a3a4u: goto label_15a3a4;
        case 0x15a3a8u: goto label_15a3a8;
        case 0x15a3acu: goto label_15a3ac;
        case 0x15a3b0u: goto label_15a3b0;
        case 0x15a3b4u: goto label_15a3b4;
        case 0x15a3b8u: goto label_15a3b8;
        case 0x15a3bcu: goto label_15a3bc;
        case 0x15a3c0u: goto label_15a3c0;
        case 0x15a3c4u: goto label_15a3c4;
        case 0x15a3c8u: goto label_15a3c8;
        case 0x15a3ccu: goto label_15a3cc;
        case 0x15a3d0u: goto label_15a3d0;
        case 0x15a3d4u: goto label_15a3d4;
        case 0x15a3d8u: goto label_15a3d8;
        case 0x15a3dcu: goto label_15a3dc;
        case 0x15a3e0u: goto label_15a3e0;
        case 0x15a3e4u: goto label_15a3e4;
        case 0x15a3e8u: goto label_15a3e8;
        case 0x15a3ecu: goto label_15a3ec;
        case 0x15a3f0u: goto label_15a3f0;
        case 0x15a3f4u: goto label_15a3f4;
        case 0x15a3f8u: goto label_15a3f8;
        case 0x15a3fcu: goto label_15a3fc;
        case 0x15a400u: goto label_15a400;
        case 0x15a404u: goto label_15a404;
        case 0x15a408u: goto label_15a408;
        case 0x15a40cu: goto label_15a40c;
        case 0x15a410u: goto label_15a410;
        case 0x15a414u: goto label_15a414;
        case 0x15a418u: goto label_15a418;
        case 0x15a41cu: goto label_15a41c;
        case 0x15a420u: goto label_15a420;
        case 0x15a424u: goto label_15a424;
        case 0x15a428u: goto label_15a428;
        case 0x15a42cu: goto label_15a42c;
        case 0x15a430u: goto label_15a430;
        case 0x15a434u: goto label_15a434;
        case 0x15a438u: goto label_15a438;
        case 0x15a43cu: goto label_15a43c;
        case 0x15a440u: goto label_15a440;
        case 0x15a444u: goto label_15a444;
        case 0x15a448u: goto label_15a448;
        case 0x15a44cu: goto label_15a44c;
        case 0x15a450u: goto label_15a450;
        case 0x15a454u: goto label_15a454;
        case 0x15a458u: goto label_15a458;
        case 0x15a45cu: goto label_15a45c;
        case 0x15a460u: goto label_15a460;
        case 0x15a464u: goto label_15a464;
        case 0x15a468u: goto label_15a468;
        case 0x15a46cu: goto label_15a46c;
        case 0x15a470u: goto label_15a470;
        case 0x15a474u: goto label_15a474;
        case 0x15a478u: goto label_15a478;
        case 0x15a47cu: goto label_15a47c;
        case 0x15a480u: goto label_15a480;
        case 0x15a484u: goto label_15a484;
        case 0x15a488u: goto label_15a488;
        case 0x15a48cu: goto label_15a48c;
        case 0x15a490u: goto label_15a490;
        case 0x15a494u: goto label_15a494;
        case 0x15a498u: goto label_15a498;
        case 0x15a49cu: goto label_15a49c;
        case 0x15a4a0u: goto label_15a4a0;
        case 0x15a4a4u: goto label_15a4a4;
        case 0x15a4a8u: goto label_15a4a8;
        case 0x15a4acu: goto label_15a4ac;
        case 0x15a4b0u: goto label_15a4b0;
        case 0x15a4b4u: goto label_15a4b4;
        case 0x15a4b8u: goto label_15a4b8;
        case 0x15a4bcu: goto label_15a4bc;
        case 0x15a4c0u: goto label_15a4c0;
        case 0x15a4c4u: goto label_15a4c4;
        case 0x15a4c8u: goto label_15a4c8;
        case 0x15a4ccu: goto label_15a4cc;
        case 0x15a4d0u: goto label_15a4d0;
        case 0x15a4d4u: goto label_15a4d4;
        case 0x15a4d8u: goto label_15a4d8;
        case 0x15a4dcu: goto label_15a4dc;
        case 0x15a4e0u: goto label_15a4e0;
        case 0x15a4e4u: goto label_15a4e4;
        case 0x15a4e8u: goto label_15a4e8;
        case 0x15a4ecu: goto label_15a4ec;
        case 0x15a4f0u: goto label_15a4f0;
        case 0x15a4f4u: goto label_15a4f4;
        case 0x15a4f8u: goto label_15a4f8;
        case 0x15a4fcu: goto label_15a4fc;
        case 0x15a500u: goto label_15a500;
        case 0x15a504u: goto label_15a504;
        case 0x15a508u: goto label_15a508;
        case 0x15a50cu: goto label_15a50c;
        case 0x15a510u: goto label_15a510;
        case 0x15a514u: goto label_15a514;
        case 0x15a518u: goto label_15a518;
        case 0x15a51cu: goto label_15a51c;
        case 0x15a520u: goto label_15a520;
        case 0x15a524u: goto label_15a524;
        case 0x15a528u: goto label_15a528;
        case 0x15a52cu: goto label_15a52c;
        case 0x15a530u: goto label_15a530;
        case 0x15a534u: goto label_15a534;
        case 0x15a538u: goto label_15a538;
        case 0x15a53cu: goto label_15a53c;
        case 0x15a540u: goto label_15a540;
        case 0x15a544u: goto label_15a544;
        case 0x15a548u: goto label_15a548;
        case 0x15a54cu: goto label_15a54c;
        case 0x15a550u: goto label_15a550;
        case 0x15a554u: goto label_15a554;
        case 0x15a558u: goto label_15a558;
        case 0x15a55cu: goto label_15a55c;
        case 0x15a560u: goto label_15a560;
        case 0x15a564u: goto label_15a564;
        case 0x15a568u: goto label_15a568;
        case 0x15a56cu: goto label_15a56c;
        case 0x15a570u: goto label_15a570;
        case 0x15a574u: goto label_15a574;
        case 0x15a578u: goto label_15a578;
        case 0x15a57cu: goto label_15a57c;
        case 0x15a580u: goto label_15a580;
        case 0x15a584u: goto label_15a584;
        case 0x15a588u: goto label_15a588;
        case 0x15a58cu: goto label_15a58c;
        case 0x15a590u: goto label_15a590;
        case 0x15a594u: goto label_15a594;
        case 0x15a598u: goto label_15a598;
        case 0x15a59cu: goto label_15a59c;
        case 0x15a5a0u: goto label_15a5a0;
        case 0x15a5a4u: goto label_15a5a4;
        case 0x15a5a8u: goto label_15a5a8;
        case 0x15a5acu: goto label_15a5ac;
        case 0x15a5b0u: goto label_15a5b0;
        case 0x15a5b4u: goto label_15a5b4;
        case 0x15a5b8u: goto label_15a5b8;
        case 0x15a5bcu: goto label_15a5bc;
        case 0x15a5c0u: goto label_15a5c0;
        case 0x15a5c4u: goto label_15a5c4;
        case 0x15a5c8u: goto label_15a5c8;
        case 0x15a5ccu: goto label_15a5cc;
        case 0x15a5d0u: goto label_15a5d0;
        case 0x15a5d4u: goto label_15a5d4;
        case 0x15a5d8u: goto label_15a5d8;
        case 0x15a5dcu: goto label_15a5dc;
        case 0x15a5e0u: goto label_15a5e0;
        case 0x15a5e4u: goto label_15a5e4;
        case 0x15a5e8u: goto label_15a5e8;
        case 0x15a5ecu: goto label_15a5ec;
        case 0x15a5f0u: goto label_15a5f0;
        case 0x15a5f4u: goto label_15a5f4;
        case 0x15a5f8u: goto label_15a5f8;
        case 0x15a5fcu: goto label_15a5fc;
        case 0x15a600u: goto label_15a600;
        case 0x15a604u: goto label_15a604;
        case 0x15a608u: goto label_15a608;
        case 0x15a60cu: goto label_15a60c;
        case 0x15a610u: goto label_15a610;
        case 0x15a614u: goto label_15a614;
        case 0x15a618u: goto label_15a618;
        case 0x15a61cu: goto label_15a61c;
        case 0x15a620u: goto label_15a620;
        case 0x15a624u: goto label_15a624;
        case 0x15a628u: goto label_15a628;
        case 0x15a62cu: goto label_15a62c;
        case 0x15a630u: goto label_15a630;
        case 0x15a634u: goto label_15a634;
        case 0x15a638u: goto label_15a638;
        case 0x15a63cu: goto label_15a63c;
        case 0x15a640u: goto label_15a640;
        case 0x15a644u: goto label_15a644;
        case 0x15a648u: goto label_15a648;
        case 0x15a64cu: goto label_15a64c;
        case 0x15a650u: goto label_15a650;
        case 0x15a654u: goto label_15a654;
        case 0x15a658u: goto label_15a658;
        case 0x15a65cu: goto label_15a65c;
        case 0x15a660u: goto label_15a660;
        case 0x15a664u: goto label_15a664;
        case 0x15a668u: goto label_15a668;
        case 0x15a66cu: goto label_15a66c;
        case 0x15a670u: goto label_15a670;
        case 0x15a674u: goto label_15a674;
        case 0x15a678u: goto label_15a678;
        case 0x15a67cu: goto label_15a67c;
        case 0x15a680u: goto label_15a680;
        case 0x15a684u: goto label_15a684;
        case 0x15a688u: goto label_15a688;
        case 0x15a68cu: goto label_15a68c;
        case 0x15a690u: goto label_15a690;
        case 0x15a694u: goto label_15a694;
        case 0x15a698u: goto label_15a698;
        case 0x15a69cu: goto label_15a69c;
        case 0x15a6a0u: goto label_15a6a0;
        case 0x15a6a4u: goto label_15a6a4;
        case 0x15a6a8u: goto label_15a6a8;
        case 0x15a6acu: goto label_15a6ac;
        case 0x15a6b0u: goto label_15a6b0;
        case 0x15a6b4u: goto label_15a6b4;
        case 0x15a6b8u: goto label_15a6b8;
        case 0x15a6bcu: goto label_15a6bc;
        case 0x15a6c0u: goto label_15a6c0;
        case 0x15a6c4u: goto label_15a6c4;
        case 0x15a6c8u: goto label_15a6c8;
        case 0x15a6ccu: goto label_15a6cc;
        case 0x15a6d0u: goto label_15a6d0;
        case 0x15a6d4u: goto label_15a6d4;
        case 0x15a6d8u: goto label_15a6d8;
        case 0x15a6dcu: goto label_15a6dc;
        case 0x15a6e0u: goto label_15a6e0;
        case 0x15a6e4u: goto label_15a6e4;
        case 0x15a6e8u: goto label_15a6e8;
        case 0x15a6ecu: goto label_15a6ec;
        case 0x15a6f0u: goto label_15a6f0;
        case 0x15a6f4u: goto label_15a6f4;
        case 0x15a6f8u: goto label_15a6f8;
        case 0x15a6fcu: goto label_15a6fc;
        case 0x15a700u: goto label_15a700;
        case 0x15a704u: goto label_15a704;
        case 0x15a708u: goto label_15a708;
        case 0x15a70cu: goto label_15a70c;
        case 0x15a710u: goto label_15a710;
        case 0x15a714u: goto label_15a714;
        case 0x15a718u: goto label_15a718;
        case 0x15a71cu: goto label_15a71c;
        default: return;
    }

label_159f50:
    // 0x159f50: 0x10000004  b           . + 4 + (0x4 << 2)
label_159f54:
    if (ctx->pc == 0x159F54u) {
        ctx->pc = 0x159F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159F50u;
        // 0x159f54: 0x10082a  slt         $at, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x159F58u;
        goto label_159f58;
    }
    ctx->pc = 0x159F50u;
    {
        const bool branch_taken_0x159f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159F50u;
        // 0x159f54: 0x10082a  slt         $at, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x159f50) {
            ctx->pc = 0x159F64u;
            goto label_159f64;
        }
    }
    ctx->pc = 0x159F58u;
label_159f58:
    // 0x159f58: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x159f58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_159f5c:
    // 0x159f5c: 0x3470869f  ori         $s0, $v1, 0x869F
    ctx->pc = 0x159f5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34463);
label_159f60:
    // 0x159f60: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x159f60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_159f64:
    // 0x159f64: 0x1800a  movz        $s0, $zero, $at
    ctx->pc = 0x159f64u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_159f68:
    // 0x159f68: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
label_159f6c:
    if (ctx->pc == 0x159F6Cu) {
        ctx->pc = 0x159F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159F68u;
        // 0x159f6c: 0x103043  sra         $a2, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159F70u;
        goto label_159f70;
    }
    ctx->pc = 0x159F68u;
    {
        const bool branch_taken_0x159f68 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x159F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159F68u;
        // 0x159f6c: 0x103043  sra         $a2, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159f68) {
            ctx->pc = 0x159F78u;
            goto label_159f78;
        }
    }
    ctx->pc = 0x159F70u;
label_159f70:
    // 0x159f70: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x159f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_159f74:
    // 0x159f74: 0x33043  sra         $a2, $v1, 1
    ctx->pc = 0x159f74u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 1));
label_159f78:
    // 0x159f78: 0x92250076  lbu         $a1, 0x76($s1)
    ctx->pc = 0x159f78u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 118)));
label_159f7c:
    // 0x159f7c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x159f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_159f80:
    // 0x159f80: 0x92230078  lbu         $v1, 0x78($s1)
    ctx->pc = 0x159f80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 120)));
label_159f84:
    // 0x159f84: 0x3421869f  ori         $at, $at, 0x869F
    ctx->pc = 0x159f84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34463);
label_159f88:
    // 0x159f88: 0x92240077  lbu         $a0, 0x77($s1)
    ctx->pc = 0x159f88u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 119)));
label_159f8c:
    // 0x159f8c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x159f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_159f90:
    // 0x159f90: 0xc5001a  div         $zero, $a2, $a1
    ctx->pc = 0x159f90u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_159f94:
    // 0x159f94: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x159f94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_159f98:
    // 0x159f98: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x159f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_159f9c:
    // 0x159f9c: 0x3012  mflo        $a2
    ctx->pc = 0x159f9cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_159fa0:
    // 0x159fa0: 0xc33018  mult        $a2, $a2, $v1
    ctx->pc = 0x159fa0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_159fa4:
    // 0x159fa4: 0xc1082a  slt         $at, $a2, $at
    ctx->pc = 0x159fa4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_159fa8:
    // 0x159fa8: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_159fac:
    if (ctx->pc == 0x159FACu) {
        ctx->pc = 0x159FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159FA8u;
        // 0x159fac: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159FB0u;
        goto label_159fb0;
    }
    ctx->pc = 0x159FA8u;
    {
        const bool branch_taken_0x159fa8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x159FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159FA8u;
        // 0x159fac: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159fa8) {
            ctx->pc = 0x159FBCu;
            goto label_159fbc;
        }
    }
    ctx->pc = 0x159FB0u;
label_159fb0:
    // 0x159fb0: 0x10000004  b           . + 4 + (0x4 << 2)
label_159fb4:
    if (ctx->pc == 0x159FB4u) {
        ctx->pc = 0x159FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159FB0u;
        // 0x159fb4: 0x6082a  slt         $at, $zero, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x159FB8u;
        goto label_159fb8;
    }
    ctx->pc = 0x159FB0u;
    {
        const bool branch_taken_0x159fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159FB0u;
        // 0x159fb4: 0x6082a  slt         $at, $zero, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x159fb0) {
            ctx->pc = 0x159FC4u;
            goto label_159fc4;
        }
    }
    ctx->pc = 0x159FB8u;
label_159fb8:
    // 0x159fb8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x159fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_159fbc:
    // 0x159fbc: 0x3466869f  ori         $a2, $v1, 0x869F
    ctx->pc = 0x159fbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34463);
label_159fc0:
    // 0x159fc0: 0x6082a  slt         $at, $zero, $a2
    ctx->pc = 0x159fc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_159fc4:
    // 0x159fc4: 0x1300a  movz        $a2, $zero, $at
    ctx->pc = 0x159fc4u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
label_159fc8:
    // 0x159fc8: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x159fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_159fcc:
    // 0x159fcc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x159fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_159fd0:
    // 0x159fd0: 0x3421869f  ori         $at, $at, 0x869F
    ctx->pc = 0x159fd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34463);
label_159fd4:
    // 0x159fd4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x159fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_159fd8:
    // 0x159fd8: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x159fd8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_159fdc:
    // 0x159fdc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_159fe0:
    if (ctx->pc == 0x159FE0u) {
        ctx->pc = 0x159FE4u;
        goto label_159fe4;
    }
    ctx->pc = 0x159FDCu;
    {
        const bool branch_taken_0x159fdc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x159fdc) {
            ctx->pc = 0x159FECu;
            goto label_159fec;
        }
    }
    ctx->pc = 0x159FE4u;
label_159fe4:
    // 0x159fe4: 0x10000004  b           . + 4 + (0x4 << 2)
label_159fe8:
    if (ctx->pc == 0x159FE8u) {
        ctx->pc = 0x159FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159FE4u;
        // 0x159fe8: 0x3082a  slt         $at, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x159FECu;
        goto label_159fec;
    }
    ctx->pc = 0x159FE4u;
    {
        const bool branch_taken_0x159fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159FE4u;
        // 0x159fe8: 0x3082a  slt         $at, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x159fe4) {
            ctx->pc = 0x159FF8u;
            goto label_159ff8;
        }
    }
    ctx->pc = 0x159FECu;
label_159fec:
    // 0x159fec: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x159fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_159ff0:
    // 0x159ff0: 0x3463869f  ori         $v1, $v1, 0x869F
    ctx->pc = 0x159ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34463);
label_159ff4:
    // 0x159ff4: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x159ff4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_159ff8:
    // 0x159ff8: 0x1180a  movz        $v1, $zero, $at
    ctx->pc = 0x159ff8u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_159ffc:
    // 0x159ffc: 0xae230044  sw          $v1, 0x44($s1)
    ctx->pc = 0x159ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
label_15a000:
    // 0x15a000: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x15a000u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
label_15a004:
    // 0x15a004: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x15a004u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
label_15a008:
    // 0x15a008: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x15a008u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
label_15a00c:
    // 0x15a00c: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x15a00cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
label_15a010:
    // 0x15a010: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15a010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15a014:
    // 0x15a014: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15a014u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15a018:
    // 0x15a018: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15a018u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15a01c:
    // 0x15a01c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15a01cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15a020:
    // 0x15a020: 0x3e00008  jr          $ra
label_15a024:
    if (ctx->pc == 0x15A024u) {
        ctx->pc = 0x15A024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A020u;
        // 0x15a024: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A028u;
        goto label_15a028;
    }
    ctx->pc = 0x15A020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A020u;
        // 0x15a024: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A028u;
label_15a028:
    // 0x15a028: 0x0  nop
    ctx->pc = 0x15a028u;
    // NOP
label_15a02c:
    // 0x15a02c: 0x0  nop
    ctx->pc = 0x15a02cu;
    // NOP
label_15a030:
    // 0x15a030: 0x90870070  lbu         $a3, 0x70($a0)
    ctx->pc = 0x15a030u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 112)));
label_15a034:
    // 0x15a034: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x15a034u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_15a038:
    // 0x15a038: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x15a038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_15a03c:
    // 0x15a03c: 0x90830063  lbu         $v1, 0x63($a0)
    ctx->pc = 0x15a03cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 99)));
label_15a040:
    // 0x15a040: 0x24a5c990  addiu       $a1, $a1, -0x3670
    ctx->pc = 0x15a040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953360));
label_15a044:
    // 0x15a044: 0x34214b98  ori         $at, $at, 0x4B98
    ctx->pc = 0x15a044u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)19352);
label_15a048:
    // 0x15a048: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x15a048u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_15a04c:
    // 0x15a04c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x15a04cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_15a050:
    // 0x15a050: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x15a050u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_15a054:
    // 0x15a054: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x15a054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_15a058:
    // 0x15a058: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x15a058u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_15a05c:
    // 0x15a05c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15a05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_15a060:
    // 0x15a060: 0xa13821  addu        $a3, $a1, $at
    ctx->pc = 0x15a060u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
label_15a064:
    // 0x15a064: 0xa0e3009d  sb          $v1, 0x9D($a3)
    ctx->pc = 0x15a064u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 157), (uint8_t)GPR_U32(ctx, 3));
label_15a068:
    // 0x15a068: 0x90850064  lbu         $a1, 0x64($a0)
    ctx->pc = 0x15a068u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 100)));
label_15a06c:
    // 0x15a06c: 0x24e300a3  addiu       $v1, $a3, 0xA3
    ctx->pc = 0x15a06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 163));
label_15a070:
    // 0x15a070: 0xa0e5009e  sb          $a1, 0x9E($a3)
    ctx->pc = 0x15a070u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 158), (uint8_t)GPR_U32(ctx, 5));
label_15a074:
    // 0x15a074: 0x90850065  lbu         $a1, 0x65($a0)
    ctx->pc = 0x15a074u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 101)));
label_15a078:
    // 0x15a078: 0xa0e5009f  sb          $a1, 0x9F($a3)
    ctx->pc = 0x15a078u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 159), (uint8_t)GPR_U32(ctx, 5));
label_15a07c:
    // 0x15a07c: 0x90850066  lbu         $a1, 0x66($a0)
    ctx->pc = 0x15a07cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 102)));
label_15a080:
    // 0x15a080: 0xa0e500a0  sb          $a1, 0xA0($a3)
    ctx->pc = 0x15a080u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 160), (uint8_t)GPR_U32(ctx, 5));
label_15a084:
    // 0x15a084: 0x90850067  lbu         $a1, 0x67($a0)
    ctx->pc = 0x15a084u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 103)));
label_15a088:
    // 0x15a088: 0xa0e500a1  sb          $a1, 0xA1($a3)
    ctx->pc = 0x15a088u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 161), (uint8_t)GPR_U32(ctx, 5));
label_15a08c:
    // 0x15a08c: 0x90850068  lbu         $a1, 0x68($a0)
    ctx->pc = 0x15a08cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 104)));
label_15a090:
    // 0x15a090: 0xa0e500a2  sb          $a1, 0xA2($a3)
    ctx->pc = 0x15a090u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 162), (uint8_t)GPR_U32(ctx, 5));
label_15a094:
    // 0x15a094: 0x90850069  lbu         $a1, 0x69($a0)
    ctx->pc = 0x15a094u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 105)));
label_15a098:
    // 0x15a098: 0xa0e50099  sb          $a1, 0x99($a3)
    ctx->pc = 0x15a098u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 153), (uint8_t)GPR_U32(ctx, 5));
label_15a09c:
    // 0x15a09c: 0x9085006b  lbu         $a1, 0x6B($a0)
    ctx->pc = 0x15a09cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 107)));
label_15a0a0:
    // 0x15a0a0: 0xa0e500a9  sb          $a1, 0xA9($a3)
    ctx->pc = 0x15a0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 169), (uint8_t)GPR_U32(ctx, 5));
label_15a0a4:
    // 0x15a0a4: 0x90850071  lbu         $a1, 0x71($a0)
    ctx->pc = 0x15a0a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 113)));
label_15a0a8:
    // 0x15a0a8: 0xa0e5009a  sb          $a1, 0x9A($a3)
    ctx->pc = 0x15a0a8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 154), (uint8_t)GPR_U32(ctx, 5));
label_15a0ac:
    // 0x15a0ac: 0x90850073  lbu         $a1, 0x73($a0)
    ctx->pc = 0x15a0acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 115)));
label_15a0b0:
    // 0x15a0b0: 0xa0e5009c  sb          $a1, 0x9C($a3)
    ctx->pc = 0x15a0b0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 156), (uint8_t)GPR_U32(ctx, 5));
label_15a0b4:
    // 0x15a0b4: 0x90e50099  lbu         $a1, 0x99($a3)
    ctx->pc = 0x15a0b4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 153)));
label_15a0b8:
    // 0x15a0b8: 0x90860074  lbu         $a2, 0x74($a0)
    ctx->pc = 0x15a0b8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 116)));
label_15a0bc:
    // 0x15a0bc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15a0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_15a0c0:
    // 0x15a0c0: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x15a0c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
label_15a0c4:
    // 0x15a0c4: 0x90830075  lbu         $v1, 0x75($a0)
    ctx->pc = 0x15a0c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 117)));
label_15a0c8:
    // 0x15a0c8: 0x3e00008  jr          $ra
label_15a0cc:
    if (ctx->pc == 0x15A0CCu) {
        ctx->pc = 0x15A0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A0C8u;
        // 0x15a0cc: 0xa0e300a8  sb          $v1, 0xA8($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 168), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A0D0u;
        goto label_15a0d0;
    }
    ctx->pc = 0x15A0C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A0C8u;
        // 0x15a0cc: 0xa0e300a8  sb          $v1, 0xA8($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 168), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A0C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A0D0u;
label_15a0d0:
    // 0x15a0d0: 0x90860070  lbu         $a2, 0x70($a0)
    ctx->pc = 0x15a0d0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 112)));
label_15a0d4:
    // 0x15a0d4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x15a0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
label_15a0d8:
    // 0x15a0d8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x15a0d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_15a0dc:
    // 0x15a0dc: 0x2463c990  addiu       $v1, $v1, -0x3670
    ctx->pc = 0x15a0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953360));
label_15a0e0:
    // 0x15a0e0: 0x34214b98  ori         $at, $at, 0x4B98
    ctx->pc = 0x15a0e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)19352);
label_15a0e4:
    // 0x15a0e4: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x15a0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_15a0e8:
    // 0x15a0e8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15a0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_15a0ec:
    // 0x15a0ec: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x15a0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_15a0f0:
    // 0x15a0f0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15a0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_15a0f4:
    // 0x15a0f4: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x15a0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_15a0f8:
    // 0x15a0f8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15a0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_15a0fc:
    // 0x15a0fc: 0x611821  addu        $v1, $v1, $at
    ctx->pc = 0x15a0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_15a100:
    // 0x15a100: 0x9065009d  lbu         $a1, 0x9D($v1)
    ctx->pc = 0x15a100u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 157)));
label_15a104:
    // 0x15a104: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15a104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15a108:
    // 0x15a108: 0xa0850063  sb          $a1, 0x63($a0)
    ctx->pc = 0x15a108u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 99), (uint8_t)GPR_U32(ctx, 5));
label_15a10c:
    // 0x15a10c: 0x9065009e  lbu         $a1, 0x9E($v1)
    ctx->pc = 0x15a10cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 158)));
label_15a110:
    // 0x15a110: 0xa0850064  sb          $a1, 0x64($a0)
    ctx->pc = 0x15a110u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 100), (uint8_t)GPR_U32(ctx, 5));
label_15a114:
    // 0x15a114: 0x9065009f  lbu         $a1, 0x9F($v1)
    ctx->pc = 0x15a114u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 159)));
label_15a118:
    // 0x15a118: 0xa0850065  sb          $a1, 0x65($a0)
    ctx->pc = 0x15a118u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 101), (uint8_t)GPR_U32(ctx, 5));
label_15a11c:
    // 0x15a11c: 0x906500a0  lbu         $a1, 0xA0($v1)
    ctx->pc = 0x15a11cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 160)));
label_15a120:
    // 0x15a120: 0xa0850066  sb          $a1, 0x66($a0)
    ctx->pc = 0x15a120u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 102), (uint8_t)GPR_U32(ctx, 5));
label_15a124:
    // 0x15a124: 0x906500a1  lbu         $a1, 0xA1($v1)
    ctx->pc = 0x15a124u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 161)));
label_15a128:
    // 0x15a128: 0xa0850067  sb          $a1, 0x67($a0)
    ctx->pc = 0x15a128u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 103), (uint8_t)GPR_U32(ctx, 5));
label_15a12c:
    // 0x15a12c: 0x906500a2  lbu         $a1, 0xA2($v1)
    ctx->pc = 0x15a12cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 162)));
label_15a130:
    // 0x15a130: 0xa0850068  sb          $a1, 0x68($a0)
    ctx->pc = 0x15a130u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 104), (uint8_t)GPR_U32(ctx, 5));
label_15a134:
    // 0x15a134: 0x90650099  lbu         $a1, 0x99($v1)
    ctx->pc = 0x15a134u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 153)));
label_15a138:
    // 0x15a138: 0xa0850069  sb          $a1, 0x69($a0)
    ctx->pc = 0x15a138u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 105), (uint8_t)GPR_U32(ctx, 5));
label_15a13c:
    // 0x15a13c: 0x90254af6  lbu         $a1, 0x4AF6($at)
    ctx->pc = 0x15a13cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_15a140:
    // 0x15a140: 0x28a10029  slti        $at, $a1, 0x29
    ctx->pc = 0x15a140u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)41) ? 1 : 0);
label_15a144:
    // 0x15a144: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_15a148:
    if (ctx->pc == 0x15A148u) {
        ctx->pc = 0x15A148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A144u;
        // 0x15a148: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A14Cu;
        goto label_15a14c;
    }
    ctx->pc = 0x15A144u;
    {
        const bool branch_taken_0x15a144 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A144u;
        // 0x15a148: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a144) {
            ctx->pc = 0x15A154u;
            goto label_15a154;
        }
    }
    ctx->pc = 0x15A14Cu;
label_15a14c:
    // 0x15a14c: 0x10000007  b           . + 4 + (0x7 << 2)
label_15a150:
    if (ctx->pc == 0x15A150u) {
        ctx->pc = 0x15A150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A14Cu;
        // 0x15a150: 0xa085006a  sb          $a1, 0x6A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 106), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A154u;
        goto label_15a154;
    }
    ctx->pc = 0x15A14Cu;
    {
        const bool branch_taken_0x15a14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A14Cu;
        // 0x15a150: 0xa085006a  sb          $a1, 0x6A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 106), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a14c) {
            ctx->pc = 0x15A16Cu;
            goto label_15a16c;
        }
    }
    ctx->pc = 0x15A154u;
label_15a154:
    // 0x15a154: 0x90860066  lbu         $a2, 0x66($a0)
    ctx->pc = 0x15a154u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 102)));
label_15a158:
    // 0x15a158: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x15a158u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_15a15c:
    // 0x15a15c: 0x24a55370  addiu       $a1, $a1, 0x5370
    ctx->pc = 0x15a15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21360));
label_15a160:
    // 0x15a160: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15a160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_15a164:
    // 0x15a164: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x15a164u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_15a168:
    // 0x15a168: 0xa085006a  sb          $a1, 0x6A($a0)
    ctx->pc = 0x15a168u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 106), (uint8_t)GPR_U32(ctx, 5));
label_15a16c:
    // 0x15a16c: 0x906600a9  lbu         $a2, 0xA9($v1)
    ctx->pc = 0x15a16cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 169)));
label_15a170:
    // 0x15a170: 0x246500a3  addiu       $a1, $v1, 0xA3
    ctx->pc = 0x15a170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 163));
label_15a174:
    // 0x15a174: 0xa086006b  sb          $a2, 0x6B($a0)
    ctx->pc = 0x15a174u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 107), (uint8_t)GPR_U32(ctx, 6));
label_15a178:
    // 0x15a178: 0x9066009a  lbu         $a2, 0x9A($v1)
    ctx->pc = 0x15a178u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 154)));
label_15a17c:
    // 0x15a17c: 0xa0860071  sb          $a2, 0x71($a0)
    ctx->pc = 0x15a17cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 113), (uint8_t)GPR_U32(ctx, 6));
label_15a180:
    // 0x15a180: 0x9066009b  lbu         $a2, 0x9B($v1)
    ctx->pc = 0x15a180u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 155)));
label_15a184:
    // 0x15a184: 0xa0860072  sb          $a2, 0x72($a0)
    ctx->pc = 0x15a184u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 114), (uint8_t)GPR_U32(ctx, 6));
label_15a188:
    // 0x15a188: 0x9066009c  lbu         $a2, 0x9C($v1)
    ctx->pc = 0x15a188u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 156)));
label_15a18c:
    // 0x15a18c: 0xa0860073  sb          $a2, 0x73($a0)
    ctx->pc = 0x15a18cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 115), (uint8_t)GPR_U32(ctx, 6));
label_15a190:
    // 0x15a190: 0x90660099  lbu         $a2, 0x99($v1)
    ctx->pc = 0x15a190u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 153)));
label_15a194:
    // 0x15a194: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15a194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_15a198:
    // 0x15a198: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x15a198u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_15a19c:
    // 0x15a19c: 0xa0850074  sb          $a1, 0x74($a0)
    ctx->pc = 0x15a19cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 116), (uint8_t)GPR_U32(ctx, 5));
label_15a1a0:
    // 0x15a1a0: 0x906500a8  lbu         $a1, 0xA8($v1)
    ctx->pc = 0x15a1a0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 168)));
label_15a1a4:
    // 0x15a1a4: 0xa0850075  sb          $a1, 0x75($a0)
    ctx->pc = 0x15a1a4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 117), (uint8_t)GPR_U32(ctx, 5));
label_15a1a8:
    // 0x15a1a8: 0x8c6300ac  lw          $v1, 0xAC($v1)
    ctx->pc = 0x15a1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_15a1ac:
    // 0x15a1ac: 0x3e00008  jr          $ra
label_15a1b0:
    if (ctx->pc == 0x15A1B0u) {
        ctx->pc = 0x15A1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A1ACu;
        // 0x15a1b0: 0xac830044  sw          $v1, 0x44($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A1B4u;
        goto label_15a1b4;
    }
    ctx->pc = 0x15A1ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A1ACu;
        // 0x15a1b0: 0xac830044  sw          $v1, 0x44($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A1ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A1B4u;
label_15a1b4:
    // 0x15a1b4: 0x0  nop
    ctx->pc = 0x15a1b4u;
    // NOP
label_15a1b8:
    // 0x15a1b8: 0x0  nop
    ctx->pc = 0x15a1b8u;
    // NOP
label_15a1bc:
    // 0x15a1bc: 0x0  nop
    ctx->pc = 0x15a1bcu;
    // NOP
label_15a1c0:
    // 0x15a1c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15a1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_15a1c4:
    // 0x15a1c4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15a1c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15a1c8:
    // 0x15a1c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15a1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_15a1cc:
    // 0x15a1cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15a1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15a1d0:
    // 0x15a1d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15a1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15a1d4:
    // 0x15a1d4: 0x90224af6  lbu         $v0, 0x4AF6($at)
    ctx->pc = 0x15a1d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_15a1d8:
    // 0x15a1d8: 0x28410029  slti        $at, $v0, 0x29
    ctx->pc = 0x15a1d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)41) ? 1 : 0);
label_15a1dc:
    // 0x15a1dc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_15a1e0:
    if (ctx->pc == 0x15A1E0u) {
        ctx->pc = 0x15A1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A1DCu;
        // 0x15a1e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A1E4u;
        goto label_15a1e4;
    }
    ctx->pc = 0x15A1DCu;
    {
        const bool branch_taken_0x15a1dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A1DCu;
        // 0x15a1e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a1dc) {
            ctx->pc = 0x15A1ECu;
            goto label_15a1ec;
        }
    }
    ctx->pc = 0x15A1E4u;
label_15a1e4:
    // 0x15a1e4: 0x10000029  b           . + 4 + (0x29 << 2)
label_15a1e8:
    if (ctx->pc == 0x15A1E8u) {
        ctx->pc = 0x15A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A1E4u;
        // 0x15a1e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A1ECu;
        goto label_15a1ec;
    }
    ctx->pc = 0x15A1E4u;
    {
        const bool branch_taken_0x15a1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A1E4u;
        // 0x15a1e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a1e4) {
            ctx->pc = 0x15A28Cu;
            goto label_15a28c;
        }
    }
    ctx->pc = 0x15A1ECu;
label_15a1ec:
    // 0x15a1ec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x15a1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_15a1f0:
    // 0x15a1f0: 0x8e060034  lw          $a2, 0x34($s0)
    ctx->pc = 0x15a1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_15a1f4:
    // 0x15a1f4: 0x8e050038  lw          $a1, 0x38($s0)
    ctx->pc = 0x15a1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_15a1f8:
    // 0x15a1f8: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x15a1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_15a1fc:
    // 0x15a1fc: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x15a1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_15a200:
    // 0x15a200: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x15a200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_15a204:
    // 0x15a204: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15a204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_15a208:
    // 0x15a208: 0xc090e44  jal         func_243910
label_15a20c:
    if (ctx->pc == 0x15A20Cu) {
        ctx->pc = 0x15A20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A208u;
        // 0x15a20c: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A210u;
        goto label_15a210;
    }
    ctx->pc = 0x15A208u;
    SET_GPR_U32(ctx, 31, 0x15A210u);
    ctx->pc = 0x15A20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A208u;
    // 0x15a20c: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243910u;
    { ctx->pc = 0x243910; return; }
    ctx->pc = 0x15A210u;
label_15a210:
    // 0x15a210: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x15a210u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_15a214:
    // 0x15a214: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x15a214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_15a218:
    // 0x15a218: 0x3442869f  ori         $v0, $v0, 0x869F
    ctx->pc = 0x15a218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34463);
label_15a21c:
    // 0x15a21c: 0x222082a  slt         $at, $s1, $v0
    ctx->pc = 0x15a21cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_15a220:
    // 0x15a220: 0x41880a  movz        $s1, $v0, $at
    ctx->pc = 0x15a220u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_15a224:
    // 0x15a224: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x15a224u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_15a228:
    // 0x15a228: 0x1880a  movz        $s1, $zero, $at
    ctx->pc = 0x15a228u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_15a22c:
    // 0x15a22c: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
label_15a230:
    if (ctx->pc == 0x15A230u) {
        ctx->pc = 0x15A230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A22Cu;
        // 0x15a230: 0x111043  sra         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A234u;
        goto label_15a234;
    }
    ctx->pc = 0x15A22Cu;
    {
        const bool branch_taken_0x15a22c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x15A230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A22Cu;
        // 0x15a230: 0x111043  sra         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a22c) {
            ctx->pc = 0x15A23Cu;
            goto label_15a23c;
        }
    }
    ctx->pc = 0x15A234u;
label_15a234:
    // 0x15a234: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x15a234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15a238:
    // 0x15a238: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x15a238u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_15a23c:
    // 0x15a23c: 0x92050076  lbu         $a1, 0x76($s0)
    ctx->pc = 0x15a23cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 118)));
label_15a240:
    // 0x15a240: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x15a240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_15a244:
    // 0x15a244: 0x92030078  lbu         $v1, 0x78($s0)
    ctx->pc = 0x15a244u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 120)));
label_15a248:
    // 0x15a248: 0x3421869f  ori         $at, $at, 0x869F
    ctx->pc = 0x15a248u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34463);
label_15a24c:
    // 0x15a24c: 0x92040077  lbu         $a0, 0x77($s0)
    ctx->pc = 0x15a24cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 119)));
label_15a250:
    // 0x15a250: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x15a250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_15a254:
    // 0x15a254: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x15a254u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_15a258:
    // 0x15a258: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x15a258u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_15a25c:
    // 0x15a25c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15a25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_15a260:
    // 0x15a260: 0x1012  mflo        $v0
    ctx->pc = 0x15a260u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_15a264:
    // 0x15a264: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x15a264u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_15a268:
    // 0x15a268: 0x41082a  slt         $at, $v0, $at
    ctx->pc = 0x15a268u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_15a26c:
    // 0x15a26c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_15a270:
    if (ctx->pc == 0x15A270u) {
        ctx->pc = 0x15A274u;
        goto label_15a274;
    }
    ctx->pc = 0x15A26Cu;
    {
        const bool branch_taken_0x15a26c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a26c) {
            ctx->pc = 0x15A27Cu;
            goto label_15a27c;
        }
    }
    ctx->pc = 0x15A274u;
label_15a274:
    // 0x15a274: 0x10000004  b           . + 4 + (0x4 << 2)
label_15a278:
    if (ctx->pc == 0x15A278u) {
        ctx->pc = 0x15A278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A274u;
        // 0x15a278: 0x2082a  slt         $at, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A27Cu;
        goto label_15a27c;
    }
    ctx->pc = 0x15A274u;
    {
        const bool branch_taken_0x15a274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A274u;
        // 0x15a278: 0x2082a  slt         $at, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a274) {
            ctx->pc = 0x15A288u;
            goto label_15a288;
        }
    }
    ctx->pc = 0x15A27Cu;
label_15a27c:
    // 0x15a27c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x15a27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_15a280:
    // 0x15a280: 0x3442869f  ori         $v0, $v0, 0x869F
    ctx->pc = 0x15a280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34463);
label_15a284:
    // 0x15a284: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x15a284u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_15a288:
    // 0x15a288: 0x1100a  movz        $v0, $zero, $at
    ctx->pc = 0x15a288u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_15a28c:
    // 0x15a28c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15a28cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15a290:
    // 0x15a290: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15a290u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15a294:
    // 0x15a294: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15a294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15a298:
    // 0x15a298: 0x3e00008  jr          $ra
label_15a29c:
    if (ctx->pc == 0x15A29Cu) {
        ctx->pc = 0x15A29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A298u;
        // 0x15a29c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A2A0u;
        goto label_15a2a0;
    }
    ctx->pc = 0x15A298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A298u;
        // 0x15a29c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A2A0u;
label_15a2a0:
    // 0x15a2a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15a2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_15a2a4:
    // 0x15a2a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15a2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_15a2a8:
    // 0x15a2a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15a2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15a2ac:
    // 0x15a2ac: 0x8c870034  lw          $a3, 0x34($a0)
    ctx->pc = 0x15a2acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_15a2b0:
    // 0x15a2b0: 0x8c860038  lw          $a2, 0x38($a0)
    ctx->pc = 0x15a2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_15a2b4:
    // 0x15a2b4: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x15a2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_15a2b8:
    // 0x15a2b8: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x15a2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_15a2bc:
    // 0x15a2bc: 0xe62021  addu        $a0, $a3, $a2
    ctx->pc = 0x15a2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_15a2c0:
    // 0x15a2c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15a2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15a2c4:
    // 0x15a2c4: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x15a2c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15a2c8:
    // 0x15a2c8: 0xc090e44  jal         func_243910
label_15a2cc:
    if (ctx->pc == 0x15A2CCu) {
        ctx->pc = 0x15A2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A2C8u;
        // 0x15a2cc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A2D0u;
        goto label_15a2d0;
    }
    ctx->pc = 0x15A2C8u;
    SET_GPR_U32(ctx, 31, 0x15A2D0u);
    ctx->pc = 0x15A2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A2C8u;
    // 0x15a2cc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243910u;
    { ctx->pc = 0x243910; return; }
    ctx->pc = 0x15A2D0u;
label_15a2d0:
    // 0x15a2d0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x15a2d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_15a2d4:
    // 0x15a2d4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x15a2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_15a2d8:
    // 0x15a2d8: 0x3442869f  ori         $v0, $v0, 0x869F
    ctx->pc = 0x15a2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34463);
label_15a2dc:
    // 0x15a2dc: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x15a2dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_15a2e0:
    // 0x15a2e0: 0x41800a  movz        $s0, $v0, $at
    ctx->pc = 0x15a2e0u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_15a2e4:
    // 0x15a2e4: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x15a2e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_15a2e8:
    // 0x15a2e8: 0x1800a  movz        $s0, $zero, $at
    ctx->pc = 0x15a2e8u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_15a2ec:
    // 0x15a2ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x15a2ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15a2f0:
    // 0x15a2f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15a2f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15a2f4:
    // 0x15a2f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15a2f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15a2f8:
    // 0x15a2f8: 0x3e00008  jr          $ra
label_15a2fc:
    if (ctx->pc == 0x15A2FCu) {
        ctx->pc = 0x15A2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A2F8u;
        // 0x15a2fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A300u;
        goto label_15a300;
    }
    ctx->pc = 0x15A2F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A2F8u;
        // 0x15a2fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A2F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A300u;
label_15a300:
    // 0x15a300: 0x8f83863c  lw          $v1, -0x79C4($gp)
    ctx->pc = 0x15a300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
label_15a304:
    // 0x15a304: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_15a308:
    if (ctx->pc == 0x15A308u) {
        ctx->pc = 0x15A308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A304u;
        // 0x15a308: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A30Cu;
        goto label_15a30c;
    }
    ctx->pc = 0x15A304u;
    {
        const bool branch_taken_0x15a304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A304u;
        // 0x15a308: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a304) {
            ctx->pc = 0x15A370u;
            goto label_15a370;
        }
    }
    ctx->pc = 0x15A30Cu;
label_15a30c:
    // 0x15a30c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15a30cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15a310:
    // 0x15a310: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x15a310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_15a314:
    // 0x15a314: 0x84264af4  lh          $a2, 0x4AF4($at)
    ctx->pc = 0x15a314u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_15a318:
    // 0x15a318: 0x14c3000a  bne         $a2, $v1, . + 4 + (0xA << 2)
label_15a31c:
    if (ctx->pc == 0x15A31Cu) {
        ctx->pc = 0x15A31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A318u;
        // 0x15a31c: 0x3c030025  lui         $v1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A320u;
        goto label_15a320;
    }
    ctx->pc = 0x15A318u;
    {
        const bool branch_taken_0x15a318 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x15A31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A318u;
        // 0x15a31c: 0x3c030025  lui         $v1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a318) {
            ctx->pc = 0x15A344u;
            goto label_15a344;
        }
    }
    ctx->pc = 0x15A320u;
label_15a320:
    // 0x15a320: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x15a320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_15a324:
    // 0x15a324: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15a324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15a328:
    // 0x15a328: 0x24633580  addiu       $v1, $v1, 0x3580
    ctx->pc = 0x15a328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13696));
label_15a32c:
    // 0x15a32c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15a32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15a330:
    // 0x15a330: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x15a330u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_15a334:
    // 0x15a334: 0xa023490c  sb          $v1, 0x490C($at)
    ctx->pc = 0x15a334u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18700), (uint8_t)GPR_U32(ctx, 3));
label_15a338:
    // 0x15a338: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15a338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15a33c:
    // 0x15a33c: 0x10000030  b           . + 4 + (0x30 << 2)
label_15a340:
    if (ctx->pc == 0x15A340u) {
        ctx->pc = 0x15A340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A33Cu;
        // 0x15a340: 0xa020490e  sb          $zero, 0x490E($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 18702), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A344u;
        goto label_15a344;
    }
    ctx->pc = 0x15A33Cu;
    {
        const bool branch_taken_0x15a33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A33Cu;
        // 0x15a340: 0xa020490e  sb          $zero, 0x490E($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 18702), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a33c) {
            ctx->pc = 0x15A400u;
            goto label_15a400;
        }
    }
    ctx->pc = 0x15A344u;
label_15a344:
    // 0x15a344: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x15a344u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_15a348:
    // 0x15a348: 0x246334e0  addiu       $v1, $v1, 0x34E0
    ctx->pc = 0x15a348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13536));
label_15a34c:
    // 0x15a34c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15a34cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15a350:
    // 0x15a350: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x15a350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_15a354:
    // 0x15a354: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x15a354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_15a358:
    // 0x15a358: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15a358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_15a35c:
    // 0x15a35c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x15a35cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_15a360:
    // 0x15a360: 0xa023490c  sb          $v1, 0x490C($at)
    ctx->pc = 0x15a360u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18700), (uint8_t)GPR_U32(ctx, 3));
label_15a364:
    // 0x15a364: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15a364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15a368:
    // 0x15a368: 0x10000025  b           . + 4 + (0x25 << 2)
label_15a36c:
    if (ctx->pc == 0x15A36Cu) {
        ctx->pc = 0x15A36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A368u;
        // 0x15a36c: 0xa025490e  sb          $a1, 0x490E($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 18702), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A370u;
        goto label_15a370;
    }
    ctx->pc = 0x15A368u;
    {
        const bool branch_taken_0x15a368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A368u;
        // 0x15a36c: 0xa025490e  sb          $a1, 0x490E($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 18702), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a368) {
            ctx->pc = 0x15A400u;
            goto label_15a400;
        }
    }
    ctx->pc = 0x15A370u;
label_15a370:
    // 0x15a370: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x15a370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15a374:
    // 0x15a374: 0x84264af4  lh          $a2, 0x4AF4($at)
    ctx->pc = 0x15a374u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_15a378:
    // 0x15a378: 0x14c3000a  bne         $a2, $v1, . + 4 + (0xA << 2)
label_15a37c:
    if (ctx->pc == 0x15A37Cu) {
        ctx->pc = 0x15A37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A378u;
        // 0x15a37c: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A380u;
        goto label_15a380;
    }
    ctx->pc = 0x15A378u;
    {
        const bool branch_taken_0x15a378 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x15A37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A378u;
        // 0x15a37c: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a378) {
            ctx->pc = 0x15A3A4u;
            goto label_15a3a4;
        }
    }
    ctx->pc = 0x15A380u;
label_15a380:
    // 0x15a380: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x15a380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_15a384:
    // 0x15a384: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15a384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15a388:
    // 0x15a388: 0x24633540  addiu       $v1, $v1, 0x3540
    ctx->pc = 0x15a388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13632));
label_15a38c:
    // 0x15a38c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15a38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15a390:
    // 0x15a390: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x15a390u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_15a394:
    // 0x15a394: 0xa023490c  sb          $v1, 0x490C($at)
    ctx->pc = 0x15a394u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18700), (uint8_t)GPR_U32(ctx, 3));
label_15a398:
    // 0x15a398: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15a398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15a39c:
    // 0x15a39c: 0x10000018  b           . + 4 + (0x18 << 2)
label_15a3a0:
    if (ctx->pc == 0x15A3A0u) {
        ctx->pc = 0x15A3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A39Cu;
        // 0x15a3a0: 0xa020490e  sb          $zero, 0x490E($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 18702), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A3A4u;
        goto label_15a3a4;
    }
    ctx->pc = 0x15A39Cu;
    {
        const bool branch_taken_0x15a39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A39Cu;
        // 0x15a3a0: 0xa020490e  sb          $zero, 0x490E($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 18702), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a39c) {
            ctx->pc = 0x15A400u;
            goto label_15a400;
        }
    }
    ctx->pc = 0x15A3A4u;
label_15a3a4:
    // 0x15a3a4: 0x14c3000a  bne         $a2, $v1, . + 4 + (0xA << 2)
label_15a3a8:
    if (ctx->pc == 0x15A3A8u) {
        ctx->pc = 0x15A3ACu;
        goto label_15a3ac;
    }
    ctx->pc = 0x15A3A4u;
    {
        const bool branch_taken_0x15a3a4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x15a3a4) {
            ctx->pc = 0x15A3D0u;
            goto label_15a3d0;
        }
    }
    ctx->pc = 0x15A3ACu;
label_15a3ac:
    // 0x15a3ac: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x15a3acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_15a3b0:
    // 0x15a3b0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15a3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15a3b4:
    // 0x15a3b4: 0x24633560  addiu       $v1, $v1, 0x3560
    ctx->pc = 0x15a3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13664));
label_15a3b8:
    // 0x15a3b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15a3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15a3bc:
    // 0x15a3bc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x15a3bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_15a3c0:
    // 0x15a3c0: 0xa023490c  sb          $v1, 0x490C($at)
    ctx->pc = 0x15a3c0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18700), (uint8_t)GPR_U32(ctx, 3));
label_15a3c4:
    // 0x15a3c4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15a3c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15a3c8:
    // 0x15a3c8: 0x1000000d  b           . + 4 + (0xD << 2)
label_15a3cc:
    if (ctx->pc == 0x15A3CCu) {
        ctx->pc = 0x15A3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A3C8u;
        // 0x15a3cc: 0xa020490e  sb          $zero, 0x490E($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 18702), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A3D0u;
        goto label_15a3d0;
    }
    ctx->pc = 0x15A3C8u;
    {
        const bool branch_taken_0x15a3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A3C8u;
        // 0x15a3cc: 0xa020490e  sb          $zero, 0x490E($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 18702), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a3c8) {
            ctx->pc = 0x15A400u;
            goto label_15a400;
        }
    }
    ctx->pc = 0x15A3D0u;
label_15a3d0:
    // 0x15a3d0: 0x43040  sll         $a2, $a0, 1
    ctx->pc = 0x15a3d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_15a3d4:
    // 0x15a3d4: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x15a3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_15a3d8:
    // 0x15a3d8: 0x24633490  addiu       $v1, $v1, 0x3490
    ctx->pc = 0x15a3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13456));
label_15a3dc:
    // 0x15a3dc: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x15a3dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_15a3e0:
    // 0x15a3e0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x15a3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_15a3e4:
    // 0x15a3e4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15a3e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15a3e8:
    // 0x15a3e8: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x15a3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_15a3ec:
    // 0x15a3ec: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15a3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_15a3f0:
    // 0x15a3f0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x15a3f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_15a3f4:
    // 0x15a3f4: 0xa023490c  sb          $v1, 0x490C($at)
    ctx->pc = 0x15a3f4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18700), (uint8_t)GPR_U32(ctx, 3));
label_15a3f8:
    // 0x15a3f8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15a3f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15a3fc:
    // 0x15a3fc: 0xa025490e  sb          $a1, 0x490E($at)
    ctx->pc = 0x15a3fcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18702), (uint8_t)GPR_U32(ctx, 5));
label_15a400:
    // 0x15a400: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15a400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15a404:
    // 0x15a404: 0x3e00008  jr          $ra
label_15a408:
    if (ctx->pc == 0x15A408u) {
        ctx->pc = 0x15A408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A404u;
        // 0x15a408: 0xa024490d  sb          $a0, 0x490D($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 18701), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A40Cu;
        goto label_15a40c;
    }
    ctx->pc = 0x15A404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A404u;
        // 0x15a408: 0xa024490d  sb          $a0, 0x490D($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 18701), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A40Cu;
label_15a40c:
    // 0x15a40c: 0x0  nop
    ctx->pc = 0x15a40cu;
    // NOP
label_15a410:
    // 0x15a410: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x15a410u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a414:
    // 0x15a414: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x15a414u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a418:
    // 0x15a418: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15a418u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a41c:
    // 0x15a41c: 0x3c0b0025  lui         $t3, 0x25
    ctx->pc = 0x15a41cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)37 << 16));
label_15a420:
    // 0x15a420: 0x3c0a0025  lui         $t2, 0x25
    ctx->pc = 0x15a420u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)37 << 16));
label_15a424:
    // 0x15a424: 0x256b34e0  addiu       $t3, $t3, 0x34E0
    ctx->pc = 0x15a424u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 13536));
label_15a428:
    // 0x15a428: 0x254a3490  addiu       $t2, $t2, 0x3490
    ctx->pc = 0x15a428u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 13456));
label_15a42c:
    // 0x15a42c: 0x8f88863c  lw          $t0, -0x79C4($gp)
    ctx->pc = 0x15a42cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
label_15a430:
    // 0x15a430: 0x11000014  beqz        $t0, . + 4 + (0x14 << 2)
label_15a434:
    if (ctx->pc == 0x15A434u) {
        ctx->pc = 0x15A434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A430u;
        // 0x15a434: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A438u;
        goto label_15a438;
    }
    ctx->pc = 0x15A430u;
    {
        const bool branch_taken_0x15a430 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A430u;
        // 0x15a434: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a430) {
            ctx->pc = 0x15A484u;
            goto label_15a484;
        }
    }
    ctx->pc = 0x15A438u;
label_15a438:
    // 0x15a438: 0x1634021  addu        $t0, $t3, $v1
    ctx->pc = 0x15a438u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_15a43c:
    // 0x15a43c: 0x25090000  addiu       $t1, $t0, 0x0
    ctx->pc = 0x15a43cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 0));
label_15a440:
    // 0x15a440: 0x12d4021  addu        $t0, $t1, $t5
    ctx->pc = 0x15a440u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
label_15a444:
    // 0x15a444: 0x91080000  lbu         $t0, 0x0($t0)
    ctx->pc = 0x15a444u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_15a448:
    // 0x15a448: 0x14880004  bne         $a0, $t0, . + 4 + (0x4 << 2)
label_15a44c:
    if (ctx->pc == 0x15A44Cu) {
        ctx->pc = 0x15A450u;
        goto label_15a450;
    }
    ctx->pc = 0x15A448u;
    {
        const bool branch_taken_0x15a448 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 8));
        if (branch_taken_0x15a448) {
            ctx->pc = 0x15A45Cu;
            goto label_15a45c;
        }
    }
    ctx->pc = 0x15A450u;
label_15a450:
    // 0x15a450: 0xacac0000  sw          $t4, 0x0($a1)
    ctx->pc = 0x15a450u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 12));
label_15a454:
    // 0x15a454: 0x10000006  b           . + 4 + (0x6 << 2)
label_15a458:
    if (ctx->pc == 0x15A458u) {
        ctx->pc = 0x15A458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A454u;
        // 0x15a458: 0xaccd0000  sw          $t5, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A45Cu;
        goto label_15a45c;
    }
    ctx->pc = 0x15A454u;
    {
        const bool branch_taken_0x15a454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A454u;
        // 0x15a458: 0xaccd0000  sw          $t5, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a454) {
            ctx->pc = 0x15A470u;
            goto label_15a470;
        }
    }
    ctx->pc = 0x15A45Cu;
label_15a45c:
    // 0x15a45c: 0x0  nop
    ctx->pc = 0x15a45cu;
    // NOP
label_15a460:
    // 0x15a460: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x15a460u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_15a464:
    // 0x15a464: 0x29a80004  slti        $t0, $t5, 0x4
    ctx->pc = 0x15a464u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)4) ? 1 : 0);
label_15a468:
    // 0x15a468: 0x1500fff5  bnez        $t0, . + 4 + (-0xB << 2)
label_15a46c:
    if (ctx->pc == 0x15A46Cu) {
        ctx->pc = 0x15A470u;
        goto label_15a470;
    }
    ctx->pc = 0x15A468u;
    {
        const bool branch_taken_0x15a468 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x15a468) {
            ctx->pc = 0x15A440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15a440;
        }
    }
    ctx->pc = 0x15A470u;
label_15a470:
    // 0x15a470: 0x29a80004  slti        $t0, $t5, 0x4
    ctx->pc = 0x15a470u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)4) ? 1 : 0);
label_15a474:
    // 0x15a474: 0x1500001d  bnez        $t0, . + 4 + (0x1D << 2)
label_15a478:
    if (ctx->pc == 0x15A478u) {
        ctx->pc = 0x15A47Cu;
        goto label_15a47c;
    }
    ctx->pc = 0x15A474u;
    {
        const bool branch_taken_0x15a474 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x15a474) {
            ctx->pc = 0x15A4ECu;
            goto label_15a4ec;
        }
    }
    ctx->pc = 0x15A47Cu;
label_15a47c:
    // 0x15a47c: 0x10000015  b           . + 4 + (0x15 << 2)
label_15a480:
    if (ctx->pc == 0x15A480u) {
        ctx->pc = 0x15A484u;
        goto label_15a484;
    }
    ctx->pc = 0x15A47Cu;
    {
        const bool branch_taken_0x15a47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a47c) {
            ctx->pc = 0x15A4D4u;
            goto label_15a4d4;
        }
    }
    ctx->pc = 0x15A484u;
label_15a484:
    // 0x15a484: 0x0  nop
    ctx->pc = 0x15a484u;
    // NOP
label_15a488:
    // 0x15a488: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x15a488u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a48c:
    // 0x15a48c: 0x1474021  addu        $t0, $t2, $a3
    ctx->pc = 0x15a48cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
label_15a490:
    // 0x15a490: 0x25090000  addiu       $t1, $t0, 0x0
    ctx->pc = 0x15a490u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 0));
label_15a494:
    // 0x15a494: 0x0  nop
    ctx->pc = 0x15a494u;
    // NOP
label_15a498:
    // 0x15a498: 0x12d4021  addu        $t0, $t1, $t5
    ctx->pc = 0x15a498u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
label_15a49c:
    // 0x15a49c: 0x91080000  lbu         $t0, 0x0($t0)
    ctx->pc = 0x15a49cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_15a4a0:
    // 0x15a4a0: 0x14880004  bne         $a0, $t0, . + 4 + (0x4 << 2)
label_15a4a4:
    if (ctx->pc == 0x15A4A4u) {
        ctx->pc = 0x15A4A8u;
        goto label_15a4a8;
    }
    ctx->pc = 0x15A4A0u;
    {
        const bool branch_taken_0x15a4a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 8));
        if (branch_taken_0x15a4a0) {
            ctx->pc = 0x15A4B4u;
            goto label_15a4b4;
        }
    }
    ctx->pc = 0x15A4A8u;
label_15a4a8:
    // 0x15a4a8: 0xacac0000  sw          $t4, 0x0($a1)
    ctx->pc = 0x15a4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 12));
label_15a4ac:
    // 0x15a4ac: 0x10000006  b           . + 4 + (0x6 << 2)
label_15a4b0:
    if (ctx->pc == 0x15A4B0u) {
        ctx->pc = 0x15A4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A4ACu;
        // 0x15a4b0: 0xaccd0000  sw          $t5, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A4B4u;
        goto label_15a4b4;
    }
    ctx->pc = 0x15A4ACu;
    {
        const bool branch_taken_0x15a4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A4ACu;
        // 0x15a4b0: 0xaccd0000  sw          $t5, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a4ac) {
            ctx->pc = 0x15A4C8u;
            goto label_15a4c8;
        }
    }
    ctx->pc = 0x15A4B4u;
label_15a4b4:
    // 0x15a4b4: 0x0  nop
    ctx->pc = 0x15a4b4u;
    // NOP
label_15a4b8:
    // 0x15a4b8: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x15a4b8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_15a4bc:
    // 0x15a4bc: 0x29a80003  slti        $t0, $t5, 0x3
    ctx->pc = 0x15a4bcu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)3) ? 1 : 0);
label_15a4c0:
    // 0x15a4c0: 0x1500fff4  bnez        $t0, . + 4 + (-0xC << 2)
label_15a4c4:
    if (ctx->pc == 0x15A4C4u) {
        ctx->pc = 0x15A4C8u;
        goto label_15a4c8;
    }
    ctx->pc = 0x15A4C0u;
    {
        const bool branch_taken_0x15a4c0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x15a4c0) {
            ctx->pc = 0x15A494u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15a494;
        }
    }
    ctx->pc = 0x15A4C8u;
label_15a4c8:
    // 0x15a4c8: 0x29a80003  slti        $t0, $t5, 0x3
    ctx->pc = 0x15a4c8u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)3) ? 1 : 0);
label_15a4cc:
    // 0x15a4cc: 0x15000007  bnez        $t0, . + 4 + (0x7 << 2)
label_15a4d0:
    if (ctx->pc == 0x15A4D0u) {
        ctx->pc = 0x15A4D4u;
        goto label_15a4d4;
    }
    ctx->pc = 0x15A4CCu;
    {
        const bool branch_taken_0x15a4cc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x15a4cc) {
            ctx->pc = 0x15A4ECu;
            goto label_15a4ec;
        }
    }
    ctx->pc = 0x15A4D4u;
label_15a4d4:
    // 0x15a4d4: 0x0  nop
    ctx->pc = 0x15a4d4u;
    // NOP
label_15a4d8:
    // 0x15a4d8: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x15a4d8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_15a4dc:
    // 0x15a4dc: 0x29880017  slti        $t0, $t4, 0x17
    ctx->pc = 0x15a4dcu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)23) ? 1 : 0);
label_15a4e0:
    // 0x15a4e0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x15a4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_15a4e4:
    // 0x15a4e4: 0x1500ffd1  bnez        $t0, . + 4 + (-0x2F << 2)
label_15a4e8:
    if (ctx->pc == 0x15A4E8u) {
        ctx->pc = 0x15A4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A4E4u;
        // 0x15a4e8: 0x24e70003  addiu       $a3, $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A4ECu;
        goto label_15a4ec;
    }
    ctx->pc = 0x15A4E4u;
    {
        const bool branch_taken_0x15a4e4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A4E4u;
        // 0x15a4e8: 0x24e70003  addiu       $a3, $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a4e4) {
            ctx->pc = 0x15A42Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15a42c;
        }
    }
    ctx->pc = 0x15A4ECu;
label_15a4ec:
    // 0x15a4ec: 0x0  nop
    ctx->pc = 0x15a4ecu;
    // NOP
label_15a4f0:
    // 0x15a4f0: 0x3e00008  jr          $ra
label_15a4f4:
    if (ctx->pc == 0x15A4F4u) {
        ctx->pc = 0x15A4F8u;
        goto label_15a4f8;
    }
    ctx->pc = 0x15A4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A4F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A4F8u;
label_15a4f8:
    // 0x15a4f8: 0x0  nop
    ctx->pc = 0x15a4f8u;
    // NOP
label_15a4fc:
    // 0x15a4fc: 0x0  nop
    ctx->pc = 0x15a4fcu;
    // NOP
label_15a500:
    // 0x15a500: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x15a500u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_15a504:
    // 0x15a504: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x15a504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15a508:
    // 0x15a508: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x15a508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_15a50c:
    // 0x15a50c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x15a50cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_15a510:
    // 0x15a510: 0x24634995  addiu       $v1, $v1, 0x4995
    ctx->pc = 0x15a510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18837));
label_15a514:
    // 0x15a514: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15a514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15a518:
    // 0x15a518: 0x3e00008  jr          $ra
label_15a51c:
    if (ctx->pc == 0x15A51Cu) {
        ctx->pc = 0x15A51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A518u;
        // 0x15a51c: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A520u;
        goto label_15a520;
    }
    ctx->pc = 0x15A518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A518u;
        // 0x15a51c: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A520u;
label_15a520:
    // 0x15a520: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x15a520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_15a524:
    // 0x15a524: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x15a524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15a528:
    // 0x15a528: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x15a528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_15a52c:
    // 0x15a52c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x15a52cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_15a530:
    // 0x15a530: 0x24634994  addiu       $v1, $v1, 0x4994
    ctx->pc = 0x15a530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18836));
label_15a534:
    // 0x15a534: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15a534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15a538:
    // 0x15a538: 0x3e00008  jr          $ra
label_15a53c:
    if (ctx->pc == 0x15A53Cu) {
        ctx->pc = 0x15A53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A538u;
        // 0x15a53c: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A540u;
        goto label_15a540;
    }
    ctx->pc = 0x15A538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A538u;
        // 0x15a53c: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A540u;
label_15a540:
    // 0x15a540: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x15a540u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_15a544:
    // 0x15a544: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x15a544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15a548:
    // 0x15a548: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x15a548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_15a54c:
    // 0x15a54c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x15a54cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_15a550:
    // 0x15a550: 0x24634993  addiu       $v1, $v1, 0x4993
    ctx->pc = 0x15a550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18835));
label_15a554:
    // 0x15a554: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15a554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15a558:
    // 0x15a558: 0x3e00008  jr          $ra
label_15a55c:
    if (ctx->pc == 0x15A55Cu) {
        ctx->pc = 0x15A55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A558u;
        // 0x15a55c: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A560u;
        goto label_15a560;
    }
    ctx->pc = 0x15A558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A558u;
        // 0x15a55c: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A560u;
label_15a560:
    // 0x15a560: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x15a560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_15a564:
    // 0x15a564: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x15a564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15a568:
    // 0x15a568: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x15a568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_15a56c:
    // 0x15a56c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x15a56cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_15a570:
    // 0x15a570: 0x24634991  addiu       $v1, $v1, 0x4991
    ctx->pc = 0x15a570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18833));
label_15a574:
    // 0x15a574: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15a574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15a578:
    // 0x15a578: 0x3e00008  jr          $ra
label_15a57c:
    if (ctx->pc == 0x15A57Cu) {
        ctx->pc = 0x15A57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A578u;
        // 0x15a57c: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A580u;
        goto label_15a580;
    }
    ctx->pc = 0x15A578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A578u;
        // 0x15a57c: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A580u;
label_15a580:
    // 0x15a580: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x15a580u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_15a584:
    // 0x15a584: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x15a584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15a588:
    // 0x15a588: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x15a588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_15a58c:
    // 0x15a58c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x15a58cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_15a590:
    // 0x15a590: 0x2463498b  addiu       $v1, $v1, 0x498B
    ctx->pc = 0x15a590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18827));
label_15a594:
    // 0x15a594: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15a594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15a598:
    // 0x15a598: 0x3e00008  jr          $ra
label_15a59c:
    if (ctx->pc == 0x15A59Cu) {
        ctx->pc = 0x15A59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A598u;
        // 0x15a59c: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A5A0u;
        goto label_15a5a0;
    }
    ctx->pc = 0x15A598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A598u;
        // 0x15a59c: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A5A0u;
label_15a5a0:
    // 0x15a5a0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x15a5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_15a5a4:
    // 0x15a5a4: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x15a5a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
label_15a5a8:
    // 0x15a5a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15a5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15a5ac:
    // 0x15a5ac: 0x3c07002f  lui         $a3, 0x2F
    ctx->pc = 0x15a5acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)47 << 16));
label_15a5b0:
    // 0x15a5b0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x15a5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15a5b4:
    // 0x15a5b4: 0x24c61300  addiu       $a2, $a2, 0x1300
    ctx->pc = 0x15a5b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4864));
label_15a5b8:
    // 0x15a5b8: 0xc45021  addu        $t2, $a2, $a0
    ctx->pc = 0x15a5b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_15a5bc:
    // 0x15a5bc: 0x24e72570  addiu       $a3, $a3, 0x2570
    ctx->pc = 0x15a5bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9584));
label_15a5c0:
    // 0x15a5c0: 0x8d483674  lw          $t0, 0x3674($t2)
    ctx->pc = 0x15a5c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 13940)));
label_15a5c4:
    // 0x15a5c4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15a5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_15a5c8:
    // 0x15a5c8: 0x8d46366c  lw          $a2, 0x366C($t2)
    ctx->pc = 0x15a5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 13932)));
label_15a5cc:
    // 0x15a5cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15a5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15a5d0:
    // 0x15a5d0: 0x82200  sll         $a0, $t0, 8
    ctx->pc = 0x15a5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
label_15a5d4:
    // 0x15a5d4: 0x884823  subu        $t1, $a0, $t0
    ctx->pc = 0x15a5d4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_15a5d8:
    // 0x15a5d8: 0xa145368a  sb          $a1, 0x368A($t2)
    ctx->pc = 0x15a5d8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 13962), (uint8_t)GPR_U32(ctx, 5));
label_15a5dc:
    // 0x15a5dc: 0x940c0  sll         $t0, $t1, 3
    ctx->pc = 0x15a5dcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_15a5e0:
    // 0x15a5e0: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x15a5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_15a5e4:
    // 0x15a5e4: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x15a5e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_15a5e8:
    // 0x15a5e8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x15a5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_15a5ec:
    // 0x15a5ec: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x15a5ecu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_15a5f0:
    // 0x15a5f0: 0x430c0  sll         $a2, $a0, 3
    ctx->pc = 0x15a5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_15a5f4:
    // 0x15a5f4: 0xe82021  addu        $a0, $a3, $t0
    ctx->pc = 0x15a5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_15a5f8:
    // 0x15a5f8: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x15a5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_15a5fc:
    // 0x15a5fc: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x15a5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_15a600:
    // 0x15a600: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x15a600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_15a604:
    // 0x15a604: 0xa0850010  sb          $a1, 0x10($a0)
    ctx->pc = 0x15a604u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 5));
label_15a608:
    // 0x15a608: 0xa0c5002a  sb          $a1, 0x2A($a2)
    ctx->pc = 0x15a608u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 42), (uint8_t)GPR_U32(ctx, 5));
label_15a60c:
    // 0x15a60c: 0x8144368a  lb          $a0, 0x368A($t2)
    ctx->pc = 0x15a60cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 13962)));
label_15a610:
    // 0x15a610: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x15a610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_15a614:
    // 0x15a614: 0xa1443696  sb          $a0, 0x3696($t2)
    ctx->pc = 0x15a614u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 13974), (uint8_t)GPR_U32(ctx, 4));
label_15a618:
    // 0x15a618: 0x91443696  lbu         $a0, 0x3696($t2)
    ctx->pc = 0x15a618u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 13974)));
label_15a61c:
    // 0x15a61c: 0xa1443697  sb          $a0, 0x3697($t2)
    ctx->pc = 0x15a61cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 13975), (uint8_t)GPR_U32(ctx, 4));
label_15a620:
    // 0x15a620: 0x91443696  lbu         $a0, 0x3696($t2)
    ctx->pc = 0x15a620u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 13974)));
label_15a624:
    // 0x15a624: 0x4180a  movz        $v1, $zero, $a0
    ctx->pc = 0x15a624u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_15a628:
    // 0x15a628: 0x3e00008  jr          $ra
label_15a62c:
    if (ctx->pc == 0x15A62Cu) {
        ctx->pc = 0x15A62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A628u;
        // 0x15a62c: 0xa1433698  sb          $v1, 0x3698($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 13976), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A630u;
        goto label_15a630;
    }
    ctx->pc = 0x15A628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A628u;
        // 0x15a62c: 0xa1433698  sb          $v1, 0x3698($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 13976), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A630u;
label_15a630:
    // 0x15a630: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x15a630u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_15a634:
    // 0x15a634: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x15a634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15a638:
    // 0x15a638: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x15a638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_15a63c:
    // 0x15a63c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x15a63cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_15a640:
    // 0x15a640: 0x24634989  addiu       $v1, $v1, 0x4989
    ctx->pc = 0x15a640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18825));
label_15a644:
    // 0x15a644: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15a644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15a648:
    // 0x15a648: 0x3e00008  jr          $ra
label_15a64c:
    if (ctx->pc == 0x15A64Cu) {
        ctx->pc = 0x15A64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A648u;
        // 0x15a64c: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A650u;
        goto label_15a650;
    }
    ctx->pc = 0x15A648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A648u;
        // 0x15a64c: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A650u;
label_15a650:
    // 0x15a650: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x15a650u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_15a654:
    // 0x15a654: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15a654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15a658:
    // 0x15a658: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x15a658u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15a65c:
    // 0x15a65c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x15a65cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_15a660:
    // 0x15a660: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x15a660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_15a664:
    // 0x15a664: 0x24634990  addiu       $v1, $v1, 0x4990
    ctx->pc = 0x15a664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18832));
label_15a668:
    // 0x15a668: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x15a668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_15a66c:
    // 0x15a66c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x15a66cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
label_15a670:
    // 0x15a670: 0xa0c50000  sb          $a1, 0x0($a2)
    ctx->pc = 0x15a670u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
label_15a674:
    // 0x15a674: 0x2463caec  addiu       $v1, $v1, -0x3514
    ctx->pc = 0x15a674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953708));
label_15a678:
    // 0x15a678: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15a678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15a67c:
    // 0x15a67c: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x15a67cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_15a680:
    // 0x15a680: 0x3e00008  jr          $ra
label_15a684:
    if (ctx->pc == 0x15A684u) {
        ctx->pc = 0x15A684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A680u;
        // 0x15a684: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A688u;
        goto label_15a688;
    }
    ctx->pc = 0x15A680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A680u;
        // 0x15a684: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A688u;
label_15a688:
    // 0x15a688: 0x0  nop
    ctx->pc = 0x15a688u;
    // NOP
label_15a68c:
    // 0x15a68c: 0x0  nop
    ctx->pc = 0x15a68cu;
    // NOP
label_15a690:
    // 0x15a690: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x15a690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_15a694:
    // 0x15a694: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x15a694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_15a698:
    // 0x15a698: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_15a69c:
    if (ctx->pc == 0x15A69Cu) {
        ctx->pc = 0x15A69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A698u;
        // 0x15a69c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A6A0u;
        goto label_15a6a0;
    }
    ctx->pc = 0x15A698u;
    {
        const bool branch_taken_0x15a698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A698u;
        // 0x15a69c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a698) {
            ctx->pc = 0x15A6B0u;
            goto label_15a6b0;
        }
    }
    ctx->pc = 0x15A6A0u;
label_15a6a0:
    // 0x15a6a0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15a6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15a6a4:
    // 0x15a6a4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15a6a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15a6a8:
    // 0x15a6a8: 0x10000037  b           . + 4 + (0x37 << 2)
label_15a6ac:
    if (ctx->pc == 0x15A6ACu) {
        ctx->pc = 0x15A6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A6A8u;
        // 0x15a6ac: 0xa0234af2  sb          $v1, 0x4AF2($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 19186), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A6B0u;
        goto label_15a6b0;
    }
    ctx->pc = 0x15A6A8u;
    {
        const bool branch_taken_0x15a6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A6A8u;
        // 0x15a6ac: 0xa0234af2  sb          $v1, 0x4AF2($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 19186), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a6a8) {
            ctx->pc = 0x15A788u;
            { ctx->pc = 0x15a788; return; }
        }
    }
    ctx->pc = 0x15A6B0u;
label_15a6b0:
    // 0x15a6b0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x15a6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_15a6b4:
    // 0x15a6b4: 0x84244af4  lh          $a0, 0x4AF4($at)
    ctx->pc = 0x15a6b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_15a6b8:
    // 0x15a6b8: 0x1483001f  bne         $a0, $v1, . + 4 + (0x1F << 2)
label_15a6bc:
    if (ctx->pc == 0x15A6BCu) {
        ctx->pc = 0x15A6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A6B8u;
        // 0x15a6bc: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A6C0u;
        goto label_15a6c0;
    }
    ctx->pc = 0x15A6B8u;
    {
        const bool branch_taken_0x15a6b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x15A6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A6B8u;
        // 0x15a6bc: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a6b8) {
            ctx->pc = 0x15A738u;
            { ctx->pc = 0x15a738; return; }
        }
    }
    ctx->pc = 0x15A6C0u;
label_15a6c0:
    // 0x15a6c0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15a6c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15a6c4:
    // 0x15a6c4: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x15a6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_15a6c8:
    // 0x15a6c8: 0x90244af1  lbu         $a0, 0x4AF1($at)
    ctx->pc = 0x15a6c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19185)));
label_15a6cc:
    // 0x15a6cc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15a6ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15a6d0:
    // 0x15a6d0: 0x8c254970  lw          $a1, 0x4970($at)
    ctx->pc = 0x15a6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18800)));
label_15a6d4:
    // 0x15a6d4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15a6d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15a6d8:
    // 0x15a6d8: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
label_15a6dc:
    if (ctx->pc == 0x15A6DCu) {
        ctx->pc = 0x15A6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A6D8u;
        // 0x15a6dc: 0xa0244af2  sb          $a0, 0x4AF2($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 19186), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A6E0u;
        goto label_15a6e0;
    }
    ctx->pc = 0x15A6D8u;
    {
        const bool branch_taken_0x15a6d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x15A6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A6D8u;
        // 0x15a6dc: 0xa0244af2  sb          $a0, 0x4AF2($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 19186), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a6d8) {
            ctx->pc = 0x15A6F8u;
            goto label_15a6f8;
        }
    }
    ctx->pc = 0x15A6E0u;
label_15a6e0:
    // 0x15a6e0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x15a6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_15a6e4:
    // 0x15a6e4: 0x10a30004  beq         $a1, $v1, . + 4 + (0x4 << 2)
label_15a6e8:
    if (ctx->pc == 0x15A6E8u) {
        ctx->pc = 0x15A6ECu;
        goto label_15a6ec;
    }
    ctx->pc = 0x15A6E4u;
    {
        const bool branch_taken_0x15a6e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x15a6e4) {
            ctx->pc = 0x15A6F8u;
            goto label_15a6f8;
        }
    }
    ctx->pc = 0x15A6ECu;
label_15a6ec:
    // 0x15a6ec: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x15a6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_15a6f0:
    // 0x15a6f0: 0x14a3001d  bne         $a1, $v1, . + 4 + (0x1D << 2)
label_15a6f4:
    if (ctx->pc == 0x15A6F4u) {
        ctx->pc = 0x15A6F8u;
        goto label_15a6f8;
    }
    ctx->pc = 0x15A6F0u;
    {
        const bool branch_taken_0x15a6f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x15a6f0) {
            ctx->pc = 0x15A768u;
            { ctx->pc = 0x15a768; return; }
        }
    }
    ctx->pc = 0x15A6F8u;
label_15a6f8:
    // 0x15a6f8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15a6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15a6fc:
    // 0x15a6fc: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x15a6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
label_15a700:
    // 0x15a700: 0x90254af2  lbu         $a1, 0x4AF2($at)
    ctx->pc = 0x15a700u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19186)));
label_15a704:
    // 0x15a704: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x15a704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
label_15a708:
    // 0x15a708: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x15a708u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_15a70c:
    // 0x15a70c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15a70cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15a710:
    // 0x15a710: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x15a710u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_15a714:
    // 0x15a714: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x15a714u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_15a718:
    // 0x15a718: 0x0  nop
    ctx->pc = 0x15a718u;
    // NOP
label_15a71c:
    // 0x15a71c: 0x0  nop
    ctx->pc = 0x15a71cu;
    // NOP
    ctx->pc = 0x15a720u;
    return;
}

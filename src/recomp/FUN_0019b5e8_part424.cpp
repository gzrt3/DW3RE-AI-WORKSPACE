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

// Function: FUN_0019b5e8
// Address: 0x19b5e8 - 0x29b5f4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b5e8_part424(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x269e98u: goto label_269e98;
        case 0x269e9cu: goto label_269e9c;
        case 0x269ea0u: goto label_269ea0;
        case 0x269ea4u: goto label_269ea4;
        case 0x269ea8u: goto label_269ea8;
        case 0x269eacu: goto label_269eac;
        case 0x269eb0u: goto label_269eb0;
        case 0x269eb4u: goto label_269eb4;
        case 0x269eb8u: goto label_269eb8;
        case 0x269ebcu: goto label_269ebc;
        case 0x269ec0u: goto label_269ec0;
        case 0x269ec4u: goto label_269ec4;
        case 0x269ec8u: goto label_269ec8;
        case 0x269eccu: goto label_269ecc;
        case 0x269ed0u: goto label_269ed0;
        case 0x269ed4u: goto label_269ed4;
        case 0x269ed8u: goto label_269ed8;
        case 0x269edcu: goto label_269edc;
        case 0x269ee0u: goto label_269ee0;
        case 0x269ee4u: goto label_269ee4;
        case 0x269ee8u: goto label_269ee8;
        case 0x269eecu: goto label_269eec;
        case 0x269ef0u: goto label_269ef0;
        case 0x269ef4u: goto label_269ef4;
        case 0x269ef8u: goto label_269ef8;
        case 0x269efcu: goto label_269efc;
        case 0x269f00u: goto label_269f00;
        case 0x269f04u: goto label_269f04;
        case 0x269f08u: goto label_269f08;
        case 0x269f0cu: goto label_269f0c;
        case 0x269f10u: goto label_269f10;
        case 0x269f14u: goto label_269f14;
        case 0x269f18u: goto label_269f18;
        case 0x269f1cu: goto label_269f1c;
        case 0x269f20u: goto label_269f20;
        case 0x269f24u: goto label_269f24;
        case 0x269f28u: goto label_269f28;
        case 0x269f2cu: goto label_269f2c;
        case 0x269f30u: goto label_269f30;
        case 0x269f34u: goto label_269f34;
        case 0x269f38u: goto label_269f38;
        case 0x269f3cu: goto label_269f3c;
        case 0x269f40u: goto label_269f40;
        case 0x269f44u: goto label_269f44;
        case 0x269f48u: goto label_269f48;
        case 0x269f4cu: goto label_269f4c;
        case 0x269f50u: goto label_269f50;
        case 0x269f54u: goto label_269f54;
        case 0x269f58u: goto label_269f58;
        case 0x269f5cu: goto label_269f5c;
        case 0x269f60u: goto label_269f60;
        case 0x269f64u: goto label_269f64;
        case 0x269f68u: goto label_269f68;
        case 0x269f6cu: goto label_269f6c;
        case 0x269f70u: goto label_269f70;
        case 0x269f74u: goto label_269f74;
        case 0x269f78u: goto label_269f78;
        case 0x269f7cu: goto label_269f7c;
        case 0x269f80u: goto label_269f80;
        case 0x269f84u: goto label_269f84;
        case 0x269f88u: goto label_269f88;
        case 0x269f8cu: goto label_269f8c;
        case 0x269f90u: goto label_269f90;
        case 0x269f94u: goto label_269f94;
        case 0x269f98u: goto label_269f98;
        case 0x269f9cu: goto label_269f9c;
        case 0x269fa0u: goto label_269fa0;
        case 0x269fa4u: goto label_269fa4;
        case 0x269fa8u: goto label_269fa8;
        case 0x269facu: goto label_269fac;
        case 0x269fb0u: goto label_269fb0;
        case 0x269fb4u: goto label_269fb4;
        case 0x269fb8u: goto label_269fb8;
        case 0x269fbcu: goto label_269fbc;
        case 0x269fc0u: goto label_269fc0;
        case 0x269fc4u: goto label_269fc4;
        case 0x269fc8u: goto label_269fc8;
        case 0x269fccu: goto label_269fcc;
        case 0x269fd0u: goto label_269fd0;
        case 0x269fd4u: goto label_269fd4;
        case 0x269fd8u: goto label_269fd8;
        case 0x269fdcu: goto label_269fdc;
        case 0x269fe0u: goto label_269fe0;
        case 0x269fe4u: goto label_269fe4;
        case 0x269fe8u: goto label_269fe8;
        case 0x269fecu: goto label_269fec;
        case 0x269ff0u: goto label_269ff0;
        case 0x269ff4u: goto label_269ff4;
        case 0x269ff8u: goto label_269ff8;
        case 0x269ffcu: goto label_269ffc;
        case 0x26a000u: goto label_26a000;
        case 0x26a004u: goto label_26a004;
        case 0x26a008u: goto label_26a008;
        case 0x26a00cu: goto label_26a00c;
        case 0x26a010u: goto label_26a010;
        case 0x26a014u: goto label_26a014;
        case 0x26a018u: goto label_26a018;
        case 0x26a01cu: goto label_26a01c;
        case 0x26a020u: goto label_26a020;
        case 0x26a024u: goto label_26a024;
        case 0x26a028u: goto label_26a028;
        case 0x26a02cu: goto label_26a02c;
        case 0x26a030u: goto label_26a030;
        case 0x26a034u: goto label_26a034;
        case 0x26a038u: goto label_26a038;
        case 0x26a03cu: goto label_26a03c;
        case 0x26a040u: goto label_26a040;
        case 0x26a044u: goto label_26a044;
        case 0x26a048u: goto label_26a048;
        case 0x26a04cu: goto label_26a04c;
        case 0x26a050u: goto label_26a050;
        case 0x26a054u: goto label_26a054;
        case 0x26a058u: goto label_26a058;
        case 0x26a05cu: goto label_26a05c;
        case 0x26a060u: goto label_26a060;
        case 0x26a064u: goto label_26a064;
        case 0x26a068u: goto label_26a068;
        case 0x26a06cu: goto label_26a06c;
        case 0x26a070u: goto label_26a070;
        case 0x26a074u: goto label_26a074;
        case 0x26a078u: goto label_26a078;
        case 0x26a07cu: goto label_26a07c;
        case 0x26a080u: goto label_26a080;
        case 0x26a084u: goto label_26a084;
        case 0x26a088u: goto label_26a088;
        case 0x26a08cu: goto label_26a08c;
        case 0x26a090u: goto label_26a090;
        case 0x26a094u: goto label_26a094;
        case 0x26a098u: goto label_26a098;
        case 0x26a09cu: goto label_26a09c;
        case 0x26a0a0u: goto label_26a0a0;
        case 0x26a0a4u: goto label_26a0a4;
        case 0x26a0a8u: goto label_26a0a8;
        case 0x26a0acu: goto label_26a0ac;
        case 0x26a0b0u: goto label_26a0b0;
        case 0x26a0b4u: goto label_26a0b4;
        case 0x26a0b8u: goto label_26a0b8;
        case 0x26a0bcu: goto label_26a0bc;
        case 0x26a0c0u: goto label_26a0c0;
        case 0x26a0c4u: goto label_26a0c4;
        case 0x26a0c8u: goto label_26a0c8;
        case 0x26a0ccu: goto label_26a0cc;
        case 0x26a0d0u: goto label_26a0d0;
        case 0x26a0d4u: goto label_26a0d4;
        case 0x26a0d8u: goto label_26a0d8;
        case 0x26a0dcu: goto label_26a0dc;
        case 0x26a0e0u: goto label_26a0e0;
        case 0x26a0e4u: goto label_26a0e4;
        case 0x26a0e8u: goto label_26a0e8;
        case 0x26a0ecu: goto label_26a0ec;
        case 0x26a0f0u: goto label_26a0f0;
        case 0x26a0f4u: goto label_26a0f4;
        case 0x26a0f8u: goto label_26a0f8;
        case 0x26a0fcu: goto label_26a0fc;
        case 0x26a100u: goto label_26a100;
        case 0x26a104u: goto label_26a104;
        case 0x26a108u: goto label_26a108;
        case 0x26a10cu: goto label_26a10c;
        case 0x26a110u: goto label_26a110;
        case 0x26a114u: goto label_26a114;
        case 0x26a118u: goto label_26a118;
        case 0x26a11cu: goto label_26a11c;
        case 0x26a120u: goto label_26a120;
        case 0x26a124u: goto label_26a124;
        case 0x26a128u: goto label_26a128;
        case 0x26a12cu: goto label_26a12c;
        case 0x26a130u: goto label_26a130;
        case 0x26a134u: goto label_26a134;
        case 0x26a138u: goto label_26a138;
        case 0x26a13cu: goto label_26a13c;
        case 0x26a140u: goto label_26a140;
        case 0x26a144u: goto label_26a144;
        case 0x26a148u: goto label_26a148;
        case 0x26a14cu: goto label_26a14c;
        case 0x26a150u: goto label_26a150;
        case 0x26a154u: goto label_26a154;
        case 0x26a158u: goto label_26a158;
        case 0x26a15cu: goto label_26a15c;
        case 0x26a160u: goto label_26a160;
        case 0x26a164u: goto label_26a164;
        case 0x26a168u: goto label_26a168;
        case 0x26a16cu: goto label_26a16c;
        case 0x26a170u: goto label_26a170;
        case 0x26a174u: goto label_26a174;
        case 0x26a178u: goto label_26a178;
        case 0x26a17cu: goto label_26a17c;
        case 0x26a180u: goto label_26a180;
        case 0x26a184u: goto label_26a184;
        case 0x26a188u: goto label_26a188;
        case 0x26a18cu: goto label_26a18c;
        case 0x26a190u: goto label_26a190;
        case 0x26a194u: goto label_26a194;
        case 0x26a198u: goto label_26a198;
        case 0x26a19cu: goto label_26a19c;
        case 0x26a1a0u: goto label_26a1a0;
        case 0x26a1a4u: goto label_26a1a4;
        case 0x26a1a8u: goto label_26a1a8;
        case 0x26a1acu: goto label_26a1ac;
        case 0x26a1b0u: goto label_26a1b0;
        case 0x26a1b4u: goto label_26a1b4;
        case 0x26a1b8u: goto label_26a1b8;
        case 0x26a1bcu: goto label_26a1bc;
        case 0x26a1c0u: goto label_26a1c0;
        case 0x26a1c4u: goto label_26a1c4;
        case 0x26a1c8u: goto label_26a1c8;
        case 0x26a1ccu: goto label_26a1cc;
        case 0x26a1d0u: goto label_26a1d0;
        case 0x26a1d4u: goto label_26a1d4;
        case 0x26a1d8u: goto label_26a1d8;
        case 0x26a1dcu: goto label_26a1dc;
        case 0x26a1e0u: goto label_26a1e0;
        case 0x26a1e4u: goto label_26a1e4;
        case 0x26a1e8u: goto label_26a1e8;
        case 0x26a1ecu: goto label_26a1ec;
        case 0x26a1f0u: goto label_26a1f0;
        case 0x26a1f4u: goto label_26a1f4;
        case 0x26a1f8u: goto label_26a1f8;
        case 0x26a1fcu: goto label_26a1fc;
        case 0x26a200u: goto label_26a200;
        case 0x26a204u: goto label_26a204;
        case 0x26a208u: goto label_26a208;
        case 0x26a20cu: goto label_26a20c;
        case 0x26a210u: goto label_26a210;
        case 0x26a214u: goto label_26a214;
        case 0x26a218u: goto label_26a218;
        case 0x26a21cu: goto label_26a21c;
        case 0x26a220u: goto label_26a220;
        case 0x26a224u: goto label_26a224;
        case 0x26a228u: goto label_26a228;
        case 0x26a22cu: goto label_26a22c;
        case 0x26a230u: goto label_26a230;
        case 0x26a234u: goto label_26a234;
        case 0x26a238u: goto label_26a238;
        case 0x26a23cu: goto label_26a23c;
        case 0x26a240u: goto label_26a240;
        case 0x26a244u: goto label_26a244;
        case 0x26a248u: goto label_26a248;
        case 0x26a24cu: goto label_26a24c;
        case 0x26a250u: goto label_26a250;
        case 0x26a254u: goto label_26a254;
        case 0x26a258u: goto label_26a258;
        case 0x26a25cu: goto label_26a25c;
        case 0x26a260u: goto label_26a260;
        case 0x26a264u: goto label_26a264;
        case 0x26a268u: goto label_26a268;
        case 0x26a26cu: goto label_26a26c;
        case 0x26a270u: goto label_26a270;
        case 0x26a274u: goto label_26a274;
        case 0x26a278u: goto label_26a278;
        case 0x26a27cu: goto label_26a27c;
        case 0x26a280u: goto label_26a280;
        case 0x26a284u: goto label_26a284;
        case 0x26a288u: goto label_26a288;
        case 0x26a28cu: goto label_26a28c;
        case 0x26a290u: goto label_26a290;
        case 0x26a294u: goto label_26a294;
        case 0x26a298u: goto label_26a298;
        case 0x26a29cu: goto label_26a29c;
        case 0x26a2a0u: goto label_26a2a0;
        case 0x26a2a4u: goto label_26a2a4;
        case 0x26a2a8u: goto label_26a2a8;
        case 0x26a2acu: goto label_26a2ac;
        case 0x26a2b0u: goto label_26a2b0;
        case 0x26a2b4u: goto label_26a2b4;
        case 0x26a2b8u: goto label_26a2b8;
        case 0x26a2bcu: goto label_26a2bc;
        case 0x26a2c0u: goto label_26a2c0;
        case 0x26a2c4u: goto label_26a2c4;
        case 0x26a2c8u: goto label_26a2c8;
        case 0x26a2ccu: goto label_26a2cc;
        case 0x26a2d0u: goto label_26a2d0;
        case 0x26a2d4u: goto label_26a2d4;
        case 0x26a2d8u: goto label_26a2d8;
        case 0x26a2dcu: goto label_26a2dc;
        case 0x26a2e0u: goto label_26a2e0;
        case 0x26a2e4u: goto label_26a2e4;
        case 0x26a2e8u: goto label_26a2e8;
        case 0x26a2ecu: goto label_26a2ec;
        case 0x26a2f0u: goto label_26a2f0;
        case 0x26a2f4u: goto label_26a2f4;
        case 0x26a2f8u: goto label_26a2f8;
        case 0x26a2fcu: goto label_26a2fc;
        case 0x26a300u: goto label_26a300;
        case 0x26a304u: goto label_26a304;
        case 0x26a308u: goto label_26a308;
        case 0x26a30cu: goto label_26a30c;
        case 0x26a310u: goto label_26a310;
        case 0x26a314u: goto label_26a314;
        case 0x26a318u: goto label_26a318;
        case 0x26a31cu: goto label_26a31c;
        case 0x26a320u: goto label_26a320;
        case 0x26a324u: goto label_26a324;
        case 0x26a328u: goto label_26a328;
        case 0x26a32cu: goto label_26a32c;
        case 0x26a330u: goto label_26a330;
        case 0x26a334u: goto label_26a334;
        case 0x26a338u: goto label_26a338;
        case 0x26a33cu: goto label_26a33c;
        case 0x26a340u: goto label_26a340;
        case 0x26a344u: goto label_26a344;
        case 0x26a348u: goto label_26a348;
        case 0x26a34cu: goto label_26a34c;
        case 0x26a350u: goto label_26a350;
        case 0x26a354u: goto label_26a354;
        case 0x26a358u: goto label_26a358;
        case 0x26a35cu: goto label_26a35c;
        case 0x26a360u: goto label_26a360;
        case 0x26a364u: goto label_26a364;
        case 0x26a368u: goto label_26a368;
        case 0x26a36cu: goto label_26a36c;
        case 0x26a370u: goto label_26a370;
        case 0x26a374u: goto label_26a374;
        case 0x26a378u: goto label_26a378;
        case 0x26a37cu: goto label_26a37c;
        case 0x26a380u: goto label_26a380;
        case 0x26a384u: goto label_26a384;
        case 0x26a388u: goto label_26a388;
        case 0x26a38cu: goto label_26a38c;
        case 0x26a390u: goto label_26a390;
        case 0x26a394u: goto label_26a394;
        case 0x26a398u: goto label_26a398;
        case 0x26a39cu: goto label_26a39c;
        case 0x26a3a0u: goto label_26a3a0;
        case 0x26a3a4u: goto label_26a3a4;
        case 0x26a3a8u: goto label_26a3a8;
        case 0x26a3acu: goto label_26a3ac;
        case 0x26a3b0u: goto label_26a3b0;
        case 0x26a3b4u: goto label_26a3b4;
        case 0x26a3b8u: goto label_26a3b8;
        case 0x26a3bcu: goto label_26a3bc;
        case 0x26a3c0u: goto label_26a3c0;
        case 0x26a3c4u: goto label_26a3c4;
        case 0x26a3c8u: goto label_26a3c8;
        case 0x26a3ccu: goto label_26a3cc;
        case 0x26a3d0u: goto label_26a3d0;
        case 0x26a3d4u: goto label_26a3d4;
        case 0x26a3d8u: goto label_26a3d8;
        case 0x26a3dcu: goto label_26a3dc;
        case 0x26a3e0u: goto label_26a3e0;
        case 0x26a3e4u: goto label_26a3e4;
        case 0x26a3e8u: goto label_26a3e8;
        case 0x26a3ecu: goto label_26a3ec;
        case 0x26a3f0u: goto label_26a3f0;
        case 0x26a3f4u: goto label_26a3f4;
        case 0x26a3f8u: goto label_26a3f8;
        case 0x26a3fcu: goto label_26a3fc;
        case 0x26a400u: goto label_26a400;
        case 0x26a404u: goto label_26a404;
        case 0x26a408u: goto label_26a408;
        case 0x26a40cu: goto label_26a40c;
        case 0x26a410u: goto label_26a410;
        case 0x26a414u: goto label_26a414;
        case 0x26a418u: goto label_26a418;
        case 0x26a41cu: goto label_26a41c;
        case 0x26a420u: goto label_26a420;
        case 0x26a424u: goto label_26a424;
        case 0x26a428u: goto label_26a428;
        case 0x26a42cu: goto label_26a42c;
        case 0x26a430u: goto label_26a430;
        case 0x26a434u: goto label_26a434;
        case 0x26a438u: goto label_26a438;
        case 0x26a43cu: goto label_26a43c;
        case 0x26a440u: goto label_26a440;
        case 0x26a444u: goto label_26a444;
        case 0x26a448u: goto label_26a448;
        case 0x26a44cu: goto label_26a44c;
        case 0x26a450u: goto label_26a450;
        case 0x26a454u: goto label_26a454;
        case 0x26a458u: goto label_26a458;
        case 0x26a45cu: goto label_26a45c;
        case 0x26a460u: goto label_26a460;
        case 0x26a464u: goto label_26a464;
        case 0x26a468u: goto label_26a468;
        case 0x26a46cu: goto label_26a46c;
        case 0x26a470u: goto label_26a470;
        case 0x26a474u: goto label_26a474;
        case 0x26a478u: goto label_26a478;
        case 0x26a47cu: goto label_26a47c;
        case 0x26a480u: goto label_26a480;
        case 0x26a484u: goto label_26a484;
        case 0x26a488u: goto label_26a488;
        case 0x26a48cu: goto label_26a48c;
        case 0x26a490u: goto label_26a490;
        case 0x26a494u: goto label_26a494;
        case 0x26a498u: goto label_26a498;
        case 0x26a49cu: goto label_26a49c;
        case 0x26a4a0u: goto label_26a4a0;
        case 0x26a4a4u: goto label_26a4a4;
        case 0x26a4a8u: goto label_26a4a8;
        case 0x26a4acu: goto label_26a4ac;
        case 0x26a4b0u: goto label_26a4b0;
        case 0x26a4b4u: goto label_26a4b4;
        case 0x26a4b8u: goto label_26a4b8;
        case 0x26a4bcu: goto label_26a4bc;
        case 0x26a4c0u: goto label_26a4c0;
        case 0x26a4c4u: goto label_26a4c4;
        case 0x26a4c8u: goto label_26a4c8;
        case 0x26a4ccu: goto label_26a4cc;
        case 0x26a4d0u: goto label_26a4d0;
        case 0x26a4d4u: goto label_26a4d4;
        case 0x26a4d8u: goto label_26a4d8;
        case 0x26a4dcu: goto label_26a4dc;
        case 0x26a4e0u: goto label_26a4e0;
        case 0x26a4e4u: goto label_26a4e4;
        case 0x26a4e8u: goto label_26a4e8;
        case 0x26a4ecu: goto label_26a4ec;
        case 0x26a4f0u: goto label_26a4f0;
        case 0x26a4f4u: goto label_26a4f4;
        case 0x26a4f8u: goto label_26a4f8;
        case 0x26a4fcu: goto label_26a4fc;
        case 0x26a500u: goto label_26a500;
        case 0x26a504u: goto label_26a504;
        case 0x26a508u: goto label_26a508;
        case 0x26a50cu: goto label_26a50c;
        case 0x26a510u: goto label_26a510;
        case 0x26a514u: goto label_26a514;
        case 0x26a518u: goto label_26a518;
        case 0x26a51cu: goto label_26a51c;
        case 0x26a520u: goto label_26a520;
        case 0x26a524u: goto label_26a524;
        case 0x26a528u: goto label_26a528;
        case 0x26a52cu: goto label_26a52c;
        case 0x26a530u: goto label_26a530;
        case 0x26a534u: goto label_26a534;
        case 0x26a538u: goto label_26a538;
        case 0x26a53cu: goto label_26a53c;
        case 0x26a540u: goto label_26a540;
        case 0x26a544u: goto label_26a544;
        case 0x26a548u: goto label_26a548;
        case 0x26a54cu: goto label_26a54c;
        case 0x26a550u: goto label_26a550;
        case 0x26a554u: goto label_26a554;
        case 0x26a558u: goto label_26a558;
        case 0x26a55cu: goto label_26a55c;
        case 0x26a560u: goto label_26a560;
        case 0x26a564u: goto label_26a564;
        case 0x26a568u: goto label_26a568;
        case 0x26a56cu: goto label_26a56c;
        case 0x26a570u: goto label_26a570;
        case 0x26a574u: goto label_26a574;
        case 0x26a578u: goto label_26a578;
        case 0x26a57cu: goto label_26a57c;
        case 0x26a580u: goto label_26a580;
        case 0x26a584u: goto label_26a584;
        case 0x26a588u: goto label_26a588;
        case 0x26a58cu: goto label_26a58c;
        case 0x26a590u: goto label_26a590;
        case 0x26a594u: goto label_26a594;
        case 0x26a598u: goto label_26a598;
        case 0x26a59cu: goto label_26a59c;
        case 0x26a5a0u: goto label_26a5a0;
        case 0x26a5a4u: goto label_26a5a4;
        case 0x26a5a8u: goto label_26a5a8;
        case 0x26a5acu: goto label_26a5ac;
        case 0x26a5b0u: goto label_26a5b0;
        case 0x26a5b4u: goto label_26a5b4;
        case 0x26a5b8u: goto label_26a5b8;
        case 0x26a5bcu: goto label_26a5bc;
        case 0x26a5c0u: goto label_26a5c0;
        case 0x26a5c4u: goto label_26a5c4;
        case 0x26a5c8u: goto label_26a5c8;
        case 0x26a5ccu: goto label_26a5cc;
        case 0x26a5d0u: goto label_26a5d0;
        case 0x26a5d4u: goto label_26a5d4;
        case 0x26a5d8u: goto label_26a5d8;
        case 0x26a5dcu: goto label_26a5dc;
        case 0x26a5e0u: goto label_26a5e0;
        case 0x26a5e4u: goto label_26a5e4;
        case 0x26a5e8u: goto label_26a5e8;
        case 0x26a5ecu: goto label_26a5ec;
        case 0x26a5f0u: goto label_26a5f0;
        case 0x26a5f4u: goto label_26a5f4;
        case 0x26a5f8u: goto label_26a5f8;
        case 0x26a5fcu: goto label_26a5fc;
        case 0x26a600u: goto label_26a600;
        case 0x26a604u: goto label_26a604;
        case 0x26a608u: goto label_26a608;
        case 0x26a60cu: goto label_26a60c;
        case 0x26a610u: goto label_26a610;
        case 0x26a614u: goto label_26a614;
        case 0x26a618u: goto label_26a618;
        case 0x26a61cu: goto label_26a61c;
        case 0x26a620u: goto label_26a620;
        case 0x26a624u: goto label_26a624;
        case 0x26a628u: goto label_26a628;
        case 0x26a62cu: goto label_26a62c;
        case 0x26a630u: goto label_26a630;
        case 0x26a634u: goto label_26a634;
        case 0x26a638u: goto label_26a638;
        case 0x26a63cu: goto label_26a63c;
        case 0x26a640u: goto label_26a640;
        case 0x26a644u: goto label_26a644;
        case 0x26a648u: goto label_26a648;
        case 0x26a64cu: goto label_26a64c;
        case 0x26a650u: goto label_26a650;
        case 0x26a654u: goto label_26a654;
        case 0x26a658u: goto label_26a658;
        case 0x26a65cu: goto label_26a65c;
        case 0x26a660u: goto label_26a660;
        case 0x26a664u: goto label_26a664;
        default: return;
    }

label_269e98:
    // 0x269e98: 0x0  nop
    ctx->pc = 0x269e98u;
    // NOP
label_269e9c:
    // 0x269e9c: 0x0  nop
    ctx->pc = 0x269e9cu;
    // NOP
label_269ea0:
    // 0x269ea0: 0x1447a  dsrl        $t0, $at, 17
    ctx->pc = 0x269ea0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 1) >> 17);
label_269ea4:
    // 0x269ea4: 0x7c10  .word       0x00007C10                   # mfhi        $t7 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269ea4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_269ea8:
    // 0x269ea8: 0x0  nop
    ctx->pc = 0x269ea8u;
    // NOP
label_269eac:
    // 0x269eac: 0x0  nop
    ctx->pc = 0x269eacu;
    // NOP
label_269eb0:
    // 0x269eb0: 0x1448a  .word       0x0001448A                   # movz        $t0, $zero, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269eb0u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_269eb4:
    // 0x269eb4: 0x41e0  .word       0x000041E0                   # add         $t0, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269eb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_269eb8:
    // 0x269eb8: 0x0  nop
    ctx->pc = 0x269eb8u;
    // NOP
label_269ebc:
    // 0x269ebc: 0x0  nop
    ctx->pc = 0x269ebcu;
    // NOP
label_269ec0:
    // 0x269ec0: 0x14493  .word       0x00014493                   # mtlo        $zero # 00014480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269ec0u;
    ctx->lo = GPR_U64(ctx, 0);
label_269ec4:
    // 0x269ec4: 0x7610  .word       0x00007610                   # mfhi        $t6 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269ec4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_269ec8:
    // 0x269ec8: 0x0  nop
    ctx->pc = 0x269ec8u;
    // NOP
label_269ecc:
    // 0x269ecc: 0x0  nop
    ctx->pc = 0x269eccu;
    // NOP
label_269ed0:
    // 0x269ed0: 0x144a2  .word       0x000144A2                   # neg         $t0, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269ed0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
label_269ed4:
    // 0x269ed4: 0x5940  sll         $t3, $zero, 5
    ctx->pc = 0x269ed4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_269ed8:
    // 0x269ed8: 0x0  nop
    ctx->pc = 0x269ed8u;
    // NOP
label_269edc:
    // 0x269edc: 0x0  nop
    ctx->pc = 0x269edcu;
    // NOP
label_269ee0:
    // 0x269ee0: 0x144ae  .word       0x000144AE                   # dsub        $t0, $zero, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269ee0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, r); }
label_269ee4:
    // 0x269ee4: 0xc410  .word       0x0000C410                   # mfhi        $t8 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269ee4u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_269ee8:
    // 0x269ee8: 0x0  nop
    ctx->pc = 0x269ee8u;
    // NOP
label_269eec:
    // 0x269eec: 0x0  nop
    ctx->pc = 0x269eecu;
    // NOP
label_269ef0:
    // 0x269ef0: 0x144c7  .word       0x000144C7                   # srav        $t0, $at, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269ef0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_269ef4:
    // 0x269ef4: 0xca70  tge         $zero, $zero, 809
    ctx->pc = 0x269ef4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269ef8:
    // 0x269ef8: 0x0  nop
    ctx->pc = 0x269ef8u;
    // NOP
label_269efc:
    // 0x269efc: 0x0  nop
    ctx->pc = 0x269efcu;
    // NOP
label_269f00:
    // 0x269f00: 0x144e1  .word       0x000144E1                   # addu        $t0, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269f00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_269f04:
    // 0x269f04: 0x5510  .word       0x00005510                   # mfhi        $t2 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269f04u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_269f08:
    // 0x269f08: 0x0  nop
    ctx->pc = 0x269f08u;
    // NOP
label_269f0c:
    // 0x269f0c: 0x0  nop
    ctx->pc = 0x269f0cu;
    // NOP
label_269f10:
    // 0x269f10: 0x144ec  .word       0x000144EC                   # dadd        $t0, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269f10u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, r); }
label_269f14:
    // 0x269f14: 0x84e0  .word       0x000084E0                   # add         $s0, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269f14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_269f18:
    // 0x269f18: 0x0  nop
    ctx->pc = 0x269f18u;
    // NOP
label_269f1c:
    // 0x269f1c: 0x0  nop
    ctx->pc = 0x269f1cu;
    // NOP
label_269f20:
    // 0x269f20: 0x144fd  .word       0x000144FD                   # INVALID     $zero, $at, 0x44FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269f20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x269F20 raw=0x000144FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_269f24:
    // 0x269f24: 0xcd00  sll         $t9, $zero, 20
    ctx->pc = 0x269f24u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_269f28:
    // 0x269f28: 0x0  nop
    ctx->pc = 0x269f28u;
    // NOP
label_269f2c:
    // 0x269f2c: 0x0  nop
    ctx->pc = 0x269f2cu;
    // NOP
label_269f30:
    // 0x269f30: 0x14517  .word       0x00014517                   # dsrav       $t0, $at, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269f30u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_269f34:
    // 0x269f34: 0x10630  tge         $zero, $at, 24
    ctx->pc = 0x269f34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_269f38:
    // 0x269f38: 0x0  nop
    ctx->pc = 0x269f38u;
    // NOP
label_269f3c:
    // 0x269f3c: 0x0  nop
    ctx->pc = 0x269f3cu;
    // NOP
label_269f40:
    // 0x269f40: 0x14538  dsll        $t0, $at, 20
    ctx->pc = 0x269f40u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 1) << 20);
label_269f44:
    // 0x269f44: 0xc9d0  .word       0x0000C9D0                   # mfhi        $t9 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269f44u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_269f48:
    // 0x269f48: 0x0  nop
    ctx->pc = 0x269f48u;
    // NOP
label_269f4c:
    // 0x269f4c: 0x0  nop
    ctx->pc = 0x269f4cu;
    // NOP
label_269f50:
    // 0x269f50: 0x14552  .word       0x00014552                   # mflo        $t0 # 00010540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269f50u;
    SET_GPR_U64(ctx, 8, ctx->lo);
label_269f54:
    // 0x269f54: 0xfa10  .word       0x0000FA10                   # mfhi        $ra # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269f54u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_269f58:
    // 0x269f58: 0x0  nop
    ctx->pc = 0x269f58u;
    // NOP
label_269f5c:
    // 0x269f5c: 0x0  nop
    ctx->pc = 0x269f5cu;
    // NOP
label_269f60:
    // 0x269f60: 0x14572  tlt         $zero, $at, 277
    ctx->pc = 0x269f60u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_269f64:
    // 0x269f64: 0x13be0  .word       0x00013BE0                   # add         $a3, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269f64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_269f68:
    // 0x269f68: 0x0  nop
    ctx->pc = 0x269f68u;
    // NOP
label_269f6c:
    // 0x269f6c: 0x0  nop
    ctx->pc = 0x269f6cu;
    // NOP
label_269f70:
    // 0x269f70: 0x1459a  .word       0x0001459A                   # div         $t0, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269f70u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_269f74:
    // 0x269f74: 0x7680  sll         $t6, $zero, 26
    ctx->pc = 0x269f74u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_269f78:
    // 0x269f78: 0x0  nop
    ctx->pc = 0x269f78u;
    // NOP
label_269f7c:
    // 0x269f7c: 0x0  nop
    ctx->pc = 0x269f7cu;
    // NOP
label_269f80:
    // 0x269f80: 0x145a9  .word       0x000145A9                   # mtsa        $zero # 00014580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x269f80u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_269f84:
    // 0x269f84: 0x7580  sll         $t6, $zero, 22
    ctx->pc = 0x269f84u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_269f88:
    // 0x269f88: 0x0  nop
    ctx->pc = 0x269f88u;
    // NOP
label_269f8c:
    // 0x269f8c: 0x0  nop
    ctx->pc = 0x269f8cu;
    // NOP
label_269f90:
    // 0x269f90: 0x145b8  dsll        $t0, $at, 22
    ctx->pc = 0x269f90u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 1) << 22);
label_269f94:
    // 0x269f94: 0xc450  .word       0x0000C450                   # mfhi        $t8 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269f94u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_269f98:
    // 0x269f98: 0x0  nop
    ctx->pc = 0x269f98u;
    // NOP
label_269f9c:
    // 0x269f9c: 0x0  nop
    ctx->pc = 0x269f9cu;
    // NOP
label_269fa0:
    // 0x269fa0: 0x145d1  .word       0x000145D1                   # mthi        $zero # 000145C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269fa0u;
    ctx->hi = GPR_U64(ctx, 0);
label_269fa4:
    // 0x269fa4: 0x8980  sll         $s1, $zero, 6
    ctx->pc = 0x269fa4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_269fa8:
    // 0x269fa8: 0x0  nop
    ctx->pc = 0x269fa8u;
    // NOP
label_269fac:
    // 0x269fac: 0x0  nop
    ctx->pc = 0x269facu;
    // NOP
label_269fb0:
    // 0x269fb0: 0x145e3  .word       0x000145E3                   # negu        $t0, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269fb0u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_269fb4:
    // 0x269fb4: 0x6540  sll         $t4, $zero, 21
    ctx->pc = 0x269fb4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_269fb8:
    // 0x269fb8: 0x0  nop
    ctx->pc = 0x269fb8u;
    // NOP
label_269fbc:
    // 0x269fbc: 0x0  nop
    ctx->pc = 0x269fbcu;
    // NOP
label_269fc0:
    // 0x269fc0: 0x145f0  tge         $zero, $at, 279
    ctx->pc = 0x269fc0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_269fc4:
    // 0x269fc4: 0x8df0  tge         $zero, $zero, 567
    ctx->pc = 0x269fc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_269fc8:
    // 0x269fc8: 0x0  nop
    ctx->pc = 0x269fc8u;
    // NOP
label_269fcc:
    // 0x269fcc: 0x0  nop
    ctx->pc = 0x269fccu;
    // NOP
label_269fd0:
    // 0x269fd0: 0x14602  srl         $t0, $at, 24
    ctx->pc = 0x269fd0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 1), 24));
label_269fd4:
    // 0x269fd4: 0xa600  sll         $s4, $zero, 24
    ctx->pc = 0x269fd4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_269fd8:
    // 0x269fd8: 0x0  nop
    ctx->pc = 0x269fd8u;
    // NOP
label_269fdc:
    // 0x269fdc: 0x0  nop
    ctx->pc = 0x269fdcu;
    // NOP
label_269fe0:
    // 0x269fe0: 0x14617  .word       0x00014617                   # dsrav       $t0, $at, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269fe0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_269fe4:
    // 0x269fe4: 0x4300  sll         $t0, $zero, 12
    ctx->pc = 0x269fe4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_269fe8:
    // 0x269fe8: 0x0  nop
    ctx->pc = 0x269fe8u;
    // NOP
label_269fec:
    // 0x269fec: 0x0  nop
    ctx->pc = 0x269fecu;
    // NOP
label_269ff0:
    // 0x269ff0: 0x14620  .word       0x00014620                   # add         $t0, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269ff0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_269ff4:
    // 0x269ff4: 0x8f10  .word       0x00008F10                   # mfhi        $s1 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x269ff4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_269ff8:
    // 0x269ff8: 0x0  nop
    ctx->pc = 0x269ff8u;
    // NOP
label_269ffc:
    // 0x269ffc: 0x0  nop
    ctx->pc = 0x269ffcu;
    // NOP
label_26a000:
    // 0x26a000: 0x14632  tlt         $zero, $at, 280
    ctx->pc = 0x26a000u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_26a004:
    // 0x26a004: 0x9b00  sll         $s3, $zero, 12
    ctx->pc = 0x26a004u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_26a008:
    // 0x26a008: 0x0  nop
    ctx->pc = 0x26a008u;
    // NOP
label_26a00c:
    // 0x26a00c: 0x0  nop
    ctx->pc = 0x26a00cu;
    // NOP
label_26a010:
    // 0x26a010: 0x14646  .word       0x00014646                   # srlv        $t0, $at, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a010u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_26a014:
    // 0x26a014: 0xb810  mfhi        $s7
    ctx->pc = 0x26a014u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_26a018:
    // 0x26a018: 0x0  nop
    ctx->pc = 0x26a018u;
    // NOP
label_26a01c:
    // 0x26a01c: 0x0  nop
    ctx->pc = 0x26a01cu;
    // NOP
label_26a020:
    // 0x26a020: 0x1465e  .word       0x0001465E                   # ddiv        $t0, $zero, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a020u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x26A020 raw=0x0001465E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26a024:
    // 0x26a024: 0x45b0  tge         $zero, $zero, 278
    ctx->pc = 0x26a024u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a028:
    // 0x26a028: 0x0  nop
    ctx->pc = 0x26a028u;
    // NOP
label_26a02c:
    // 0x26a02c: 0x0  nop
    ctx->pc = 0x26a02cu;
    // NOP
label_26a030:
    // 0x26a030: 0x14667  .word       0x00014667                   # nor         $t0, $zero, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a030u;
    SET_GPR_U64(ctx, 8, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_26a034:
    // 0x26a034: 0x54f0  tge         $zero, $zero, 339
    ctx->pc = 0x26a034u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a038:
    // 0x26a038: 0x0  nop
    ctx->pc = 0x26a038u;
    // NOP
label_26a03c:
    // 0x26a03c: 0x0  nop
    ctx->pc = 0x26a03cu;
    // NOP
label_26a040:
    // 0x26a040: 0x14672  tlt         $zero, $at, 281
    ctx->pc = 0x26a040u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_26a044:
    // 0x26a044: 0x6090  .word       0x00006090                   # mfhi        $t4 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a044u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_26a048:
    // 0x26a048: 0x0  nop
    ctx->pc = 0x26a048u;
    // NOP
label_26a04c:
    // 0x26a04c: 0x0  nop
    ctx->pc = 0x26a04cu;
    // NOP
label_26a050:
    // 0x26a050: 0x1467f  dsra32      $t0, $at, 25
    ctx->pc = 0x26a050u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 1) >> (32 + 25));
label_26a054:
    // 0x26a054: 0x3f00  sll         $a3, $zero, 28
    ctx->pc = 0x26a054u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_26a058:
    // 0x26a058: 0x0  nop
    ctx->pc = 0x26a058u;
    // NOP
label_26a05c:
    // 0x26a05c: 0x0  nop
    ctx->pc = 0x26a05cu;
    // NOP
label_26a060:
    // 0x26a060: 0x14687  .word       0x00014687                   # srav        $t0, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a060u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_26a064:
    // 0x26a064: 0x27e0  .word       0x000027E0                   # add         $a0, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a064u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_26a068:
    // 0x26a068: 0x0  nop
    ctx->pc = 0x26a068u;
    // NOP
label_26a06c:
    // 0x26a06c: 0x0  nop
    ctx->pc = 0x26a06cu;
    // NOP
label_26a070:
    // 0x26a070: 0x1468c  .word       0x0001468C                   # syscall     282 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a070u;
    ctx->pc = 0x26A074u;
runtime->handleSyscall(rdram, ctx, 0x51Au);
label_26a074:
    // 0x26a074: 0xb740  sll         $s6, $zero, 29
    ctx->pc = 0x26a074u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_26a078:
    // 0x26a078: 0x0  nop
    ctx->pc = 0x26a078u;
    // NOP
label_26a07c:
    // 0x26a07c: 0x0  nop
    ctx->pc = 0x26a07cu;
    // NOP
label_26a080:
    // 0x26a080: 0x146a3  .word       0x000146A3                   # negu        $t0, $at # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a080u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_26a084:
    // 0x26a084: 0x3080  sll         $a2, $zero, 2
    ctx->pc = 0x26a084u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_26a088:
    // 0x26a088: 0x0  nop
    ctx->pc = 0x26a088u;
    // NOP
label_26a08c:
    // 0x26a08c: 0x0  nop
    ctx->pc = 0x26a08cu;
    // NOP
label_26a090:
    // 0x26a090: 0x146aa  .word       0x000146AA                   # slt         $t0, $zero, $at # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a090u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_26a094:
    // 0x26a094: 0xabd0  .word       0x0000ABD0                   # mfhi        $s5 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a094u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_26a098:
    // 0x26a098: 0x0  nop
    ctx->pc = 0x26a098u;
    // NOP
label_26a09c:
    // 0x26a09c: 0x0  nop
    ctx->pc = 0x26a09cu;
    // NOP
label_26a0a0:
    // 0x26a0a0: 0x146c0  sll         $t0, $at, 27
    ctx->pc = 0x26a0a0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 1), 27));
label_26a0a4:
    // 0x26a0a4: 0xa770  tge         $zero, $zero, 669
    ctx->pc = 0x26a0a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a0a8:
    // 0x26a0a8: 0x0  nop
    ctx->pc = 0x26a0a8u;
    // NOP
label_26a0ac:
    // 0x26a0ac: 0x0  nop
    ctx->pc = 0x26a0acu;
    // NOP
label_26a0b0:
    // 0x26a0b0: 0x146d5  .word       0x000146D5                   # INVALID     $zero, $at, 0x46D5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a0b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x26A0B0 raw=0x000146D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26a0b4:
    // 0x26a0b4: 0xaed0  .word       0x0000AED0                   # mfhi        $s5 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a0b4u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_26a0b8:
    // 0x26a0b8: 0x0  nop
    ctx->pc = 0x26a0b8u;
    // NOP
label_26a0bc:
    // 0x26a0bc: 0x0  nop
    ctx->pc = 0x26a0bcu;
    // NOP
label_26a0c0:
    // 0x26a0c0: 0x146eb  .word       0x000146EB                   # sltu        $t0, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a0c0u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_26a0c4:
    // 0x26a0c4: 0xc560  .word       0x0000C560                   # add         $t8, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a0c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_26a0c8:
    // 0x26a0c8: 0x0  nop
    ctx->pc = 0x26a0c8u;
    // NOP
label_26a0cc:
    // 0x26a0cc: 0x0  nop
    ctx->pc = 0x26a0ccu;
    // NOP
label_26a0d0:
    // 0x26a0d0: 0x14704  .word       0x00014704                   # sllv        $t0, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a0d0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_26a0d4:
    // 0x26a0d4: 0x96a0  .word       0x000096A0                   # add         $s2, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a0d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_26a0d8:
    // 0x26a0d8: 0x0  nop
    ctx->pc = 0x26a0d8u;
    // NOP
label_26a0dc:
    // 0x26a0dc: 0x0  nop
    ctx->pc = 0x26a0dcu;
    // NOP
label_26a0e0:
    // 0x26a0e0: 0x14717  .word       0x00014717                   # dsrav       $t0, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a0e0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_26a0e4:
    // 0x26a0e4: 0xb150  .word       0x0000B150                   # mfhi        $s6 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a0e4u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_26a0e8:
    // 0x26a0e8: 0x0  nop
    ctx->pc = 0x26a0e8u;
    // NOP
label_26a0ec:
    // 0x26a0ec: 0x0  nop
    ctx->pc = 0x26a0ecu;
    // NOP
label_26a0f0:
    // 0x26a0f0: 0x1472e  .word       0x0001472E                   # dsub        $t0, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a0f0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, r); }
label_26a0f4:
    // 0x26a0f4: 0xe220  .word       0x0000E220                   # add         $gp, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a0f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_26a0f8:
    // 0x26a0f8: 0x0  nop
    ctx->pc = 0x26a0f8u;
    // NOP
label_26a0fc:
    // 0x26a0fc: 0x0  nop
    ctx->pc = 0x26a0fcu;
    // NOP
label_26a100:
    // 0x26a100: 0x1474b  .word       0x0001474B                   # movn        $t0, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a100u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_26a104:
    // 0x26a104: 0x6b50  .word       0x00006B50                   # mfhi        $t5 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a104u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_26a108:
    // 0x26a108: 0x0  nop
    ctx->pc = 0x26a108u;
    // NOP
label_26a10c:
    // 0x26a10c: 0x0  nop
    ctx->pc = 0x26a10cu;
    // NOP
label_26a110:
    // 0x26a110: 0x14759  .word       0x00014759                   # multu       $zero, $at # 00004740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a110u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_26a114:
    // 0x26a114: 0xb0e0  .word       0x0000B0E0                   # add         $s6, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a114u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_26a118:
    // 0x26a118: 0x0  nop
    ctx->pc = 0x26a118u;
    // NOP
label_26a11c:
    // 0x26a11c: 0x0  nop
    ctx->pc = 0x26a11cu;
    // NOP
label_26a120:
    // 0x26a120: 0x14770  tge         $zero, $at, 285
    ctx->pc = 0x26a120u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_26a124:
    // 0x26a124: 0x5780  sll         $t2, $zero, 30
    ctx->pc = 0x26a124u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_26a128:
    // 0x26a128: 0x0  nop
    ctx->pc = 0x26a128u;
    // NOP
label_26a12c:
    // 0x26a12c: 0x0  nop
    ctx->pc = 0x26a12cu;
    // NOP
label_26a130:
    // 0x26a130: 0x1477b  dsra        $t0, $at, 29
    ctx->pc = 0x26a130u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 1) >> 29);
label_26a134:
    // 0x26a134: 0xabc0  sll         $s5, $zero, 15
    ctx->pc = 0x26a134u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_26a138:
    // 0x26a138: 0x0  nop
    ctx->pc = 0x26a138u;
    // NOP
label_26a13c:
    // 0x26a13c: 0x0  nop
    ctx->pc = 0x26a13cu;
    // NOP
label_26a140:
    // 0x26a140: 0x14791  .word       0x00014791                   # mthi        $zero # 00014780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a140u;
    ctx->hi = GPR_U64(ctx, 0);
label_26a144:
    // 0x26a144: 0xd9f0  tge         $zero, $zero, 871
    ctx->pc = 0x26a144u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a148:
    // 0x26a148: 0x0  nop
    ctx->pc = 0x26a148u;
    // NOP
label_26a14c:
    // 0x26a14c: 0x0  nop
    ctx->pc = 0x26a14cu;
    // NOP
label_26a150:
    // 0x26a150: 0x147ad  .word       0x000147AD                   # daddu       $t0, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a150u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_26a154:
    // 0x26a154: 0x2f20  .word       0x00002F20                   # add         $a1, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a154u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_26a158:
    // 0x26a158: 0x0  nop
    ctx->pc = 0x26a158u;
    // NOP
label_26a15c:
    // 0x26a15c: 0x0  nop
    ctx->pc = 0x26a15cu;
    // NOP
label_26a160:
    // 0x26a160: 0x147b3  tltu        $zero, $at, 286
    ctx->pc = 0x26a160u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_26a164:
    // 0x26a164: 0x5870  tge         $zero, $zero, 353
    ctx->pc = 0x26a164u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a168:
    // 0x26a168: 0x0  nop
    ctx->pc = 0x26a168u;
    // NOP
label_26a16c:
    // 0x26a16c: 0x0  nop
    ctx->pc = 0x26a16cu;
    // NOP
label_26a170:
    // 0x26a170: 0x147bf  dsra32      $t0, $at, 30
    ctx->pc = 0x26a170u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 1) >> (32 + 30));
label_26a174:
    // 0x26a174: 0x2a50  .word       0x00002A50                   # mfhi        $a1 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a174u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_26a178:
    // 0x26a178: 0x0  nop
    ctx->pc = 0x26a178u;
    // NOP
label_26a17c:
    // 0x26a17c: 0x0  nop
    ctx->pc = 0x26a17cu;
    // NOP
label_26a180:
    // 0x26a180: 0x147c5  .word       0x000147C5                   # INVALID     $zero, $at, 0x47C5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a180u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x26A180 raw=0x000147C5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26a184:
    // 0x26a184: 0xedc0  sll         $sp, $zero, 23
    ctx->pc = 0x26a184u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_26a188:
    // 0x26a188: 0x0  nop
    ctx->pc = 0x26a188u;
    // NOP
label_26a18c:
    // 0x26a18c: 0x0  nop
    ctx->pc = 0x26a18cu;
    // NOP
label_26a190:
    // 0x26a190: 0x147e3  .word       0x000147E3                   # negu        $t0, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a190u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_26a194:
    // 0x26a194: 0x9aa0  .word       0x00009AA0                   # add         $s3, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a194u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_26a198:
    // 0x26a198: 0x0  nop
    ctx->pc = 0x26a198u;
    // NOP
label_26a19c:
    // 0x26a19c: 0x0  nop
    ctx->pc = 0x26a19cu;
    // NOP
label_26a1a0:
    // 0x26a1a0: 0x147f7  .word       0x000147F7                   # INVALID     $zero, $at, 0x47F7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a1a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x26A1A0 raw=0x000147F7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26a1a4:
    // 0x26a1a4: 0x7190  .word       0x00007190                   # mfhi        $t6 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a1a4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_26a1a8:
    // 0x26a1a8: 0x0  nop
    ctx->pc = 0x26a1a8u;
    // NOP
label_26a1ac:
    // 0x26a1ac: 0x0  nop
    ctx->pc = 0x26a1acu;
    // NOP
label_26a1b0:
    // 0x26a1b0: 0x14806  srlv        $t1, $at, $zero
    ctx->pc = 0x26a1b0u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_26a1b4:
    // 0x26a1b4: 0x98c0  sll         $s3, $zero, 3
    ctx->pc = 0x26a1b4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_26a1b8:
    // 0x26a1b8: 0x0  nop
    ctx->pc = 0x26a1b8u;
    // NOP
label_26a1bc:
    // 0x26a1bc: 0x0  nop
    ctx->pc = 0x26a1bcu;
    // NOP
label_26a1c0:
    // 0x26a1c0: 0x1481a  div         $t1, $zero, $at
    ctx->pc = 0x26a1c0u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_26a1c4:
    // 0x26a1c4: 0x4860  .word       0x00004860                   # add         $t1, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a1c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_26a1c8:
    // 0x26a1c8: 0x0  nop
    ctx->pc = 0x26a1c8u;
    // NOP
label_26a1cc:
    // 0x26a1cc: 0x0  nop
    ctx->pc = 0x26a1ccu;
    // NOP
label_26a1d0:
    // 0x26a1d0: 0x14824  and         $t1, $zero, $at
    ctx->pc = 0x26a1d0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_26a1d4:
    // 0x26a1d4: 0x99f0  tge         $zero, $zero, 615
    ctx->pc = 0x26a1d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a1d8:
    // 0x26a1d8: 0x0  nop
    ctx->pc = 0x26a1d8u;
    // NOP
label_26a1dc:
    // 0x26a1dc: 0x0  nop
    ctx->pc = 0x26a1dcu;
    // NOP
label_26a1e0:
    // 0x26a1e0: 0x14838  dsll        $t1, $at, 0
    ctx->pc = 0x26a1e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 1) << 0);
label_26a1e4:
    // 0x26a1e4: 0xa180  sll         $s4, $zero, 6
    ctx->pc = 0x26a1e4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_26a1e8:
    // 0x26a1e8: 0x0  nop
    ctx->pc = 0x26a1e8u;
    // NOP
label_26a1ec:
    // 0x26a1ec: 0x0  nop
    ctx->pc = 0x26a1ecu;
    // NOP
label_26a1f0:
    // 0x26a1f0: 0x1484d  break       1, 289
    ctx->pc = 0x26a1f0u;
    runtime->handleBreak(rdram, ctx);
label_26a1f4:
    // 0x26a1f4: 0x8980  sll         $s1, $zero, 6
    ctx->pc = 0x26a1f4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_26a1f8:
    // 0x26a1f8: 0x0  nop
    ctx->pc = 0x26a1f8u;
    // NOP
label_26a1fc:
    // 0x26a1fc: 0x0  nop
    ctx->pc = 0x26a1fcu;
    // NOP
label_26a200:
    // 0x26a200: 0x1485f  .word       0x0001485F                   # ddivu       $t1, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a200u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x26A200 raw=0x0001485F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26a204:
    // 0x26a204: 0xd200  sll         $k0, $zero, 8
    ctx->pc = 0x26a204u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_26a208:
    // 0x26a208: 0x0  nop
    ctx->pc = 0x26a208u;
    // NOP
label_26a20c:
    // 0x26a20c: 0x0  nop
    ctx->pc = 0x26a20cu;
    // NOP
label_26a210:
    // 0x26a210: 0x1487a  dsrl        $t1, $at, 1
    ctx->pc = 0x26a210u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 1) >> 1);
label_26a214:
    // 0x26a214: 0xacf0  tge         $zero, $zero, 691
    ctx->pc = 0x26a214u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a218:
    // 0x26a218: 0x0  nop
    ctx->pc = 0x26a218u;
    // NOP
label_26a21c:
    // 0x26a21c: 0x0  nop
    ctx->pc = 0x26a21cu;
    // NOP
label_26a220:
    // 0x26a220: 0x14890  .word       0x00014890                   # mfhi        $t1 # 00010080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a220u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_26a224:
    // 0x26a224: 0xea50  .word       0x0000EA50                   # mfhi        $sp # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a224u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_26a228:
    // 0x26a228: 0x0  nop
    ctx->pc = 0x26a228u;
    // NOP
label_26a22c:
    // 0x26a22c: 0x0  nop
    ctx->pc = 0x26a22cu;
    // NOP
label_26a230:
    // 0x26a230: 0x148ae  .word       0x000148AE                   # dsub        $t1, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a230u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, r); }
label_26a234:
    // 0x26a234: 0xdc30  tge         $zero, $zero, 880
    ctx->pc = 0x26a234u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a238:
    // 0x26a238: 0x0  nop
    ctx->pc = 0x26a238u;
    // NOP
label_26a23c:
    // 0x26a23c: 0x0  nop
    ctx->pc = 0x26a23cu;
    // NOP
label_26a240:
    // 0x26a240: 0x148ca  .word       0x000148CA                   # movz        $t1, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a240u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_26a244:
    // 0x26a244: 0xc190  .word       0x0000C190                   # mfhi        $t8 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a244u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_26a248:
    // 0x26a248: 0x0  nop
    ctx->pc = 0x26a248u;
    // NOP
label_26a24c:
    // 0x26a24c: 0x0  nop
    ctx->pc = 0x26a24cu;
    // NOP
label_26a250:
    // 0x26a250: 0x148e3  .word       0x000148E3                   # negu        $t1, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a250u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_26a254:
    // 0x26a254: 0xfd60  .word       0x0000FD60                   # add         $ra, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a254u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_26a258:
    // 0x26a258: 0x0  nop
    ctx->pc = 0x26a258u;
    // NOP
label_26a25c:
    // 0x26a25c: 0x0  nop
    ctx->pc = 0x26a25cu;
    // NOP
label_26a260:
    // 0x26a260: 0x14903  sra         $t1, $at, 4
    ctx->pc = 0x26a260u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 1), 4));
label_26a264:
    // 0x26a264: 0xa190  .word       0x0000A190                   # mfhi        $s4 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a264u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_26a268:
    // 0x26a268: 0x0  nop
    ctx->pc = 0x26a268u;
    // NOP
label_26a26c:
    // 0x26a26c: 0x0  nop
    ctx->pc = 0x26a26cu;
    // NOP
label_26a270:
    // 0x26a270: 0x14918  .word       0x00014918                   # mult        $t1, $zero, $at # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26a270u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_26a274:
    // 0x26a274: 0x10da0  .word       0x00010DA0                   # add         $at, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a274u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_26a278:
    // 0x26a278: 0x0  nop
    ctx->pc = 0x26a278u;
    // NOP
label_26a27c:
    // 0x26a27c: 0x0  nop
    ctx->pc = 0x26a27cu;
    // NOP
label_26a280:
    // 0x26a280: 0x1493a  dsrl        $t1, $at, 4
    ctx->pc = 0x26a280u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 1) >> 4);
label_26a284:
    // 0x26a284: 0x100a0  .word       0x000100A0                   # add         $zero, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a284u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_26a288:
    // 0x26a288: 0x0  nop
    ctx->pc = 0x26a288u;
    // NOP
label_26a28c:
    // 0x26a28c: 0x0  nop
    ctx->pc = 0x26a28cu;
    // NOP
label_26a290:
    // 0x26a290: 0x1495b  .word       0x0001495B                   # divu        $t1, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a290u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_26a294:
    // 0x26a294: 0x8220  .word       0x00008220                   # add         $s0, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a294u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_26a298:
    // 0x26a298: 0x0  nop
    ctx->pc = 0x26a298u;
    // NOP
label_26a29c:
    // 0x26a29c: 0x0  nop
    ctx->pc = 0x26a29cu;
    // NOP
label_26a2a0:
    // 0x26a2a0: 0x1496c  .word       0x0001496C                   # dadd        $t1, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a2a0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, r); }
label_26a2a4:
    // 0x26a2a4: 0x9ed0  .word       0x00009ED0                   # mfhi        $s3 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a2a4u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_26a2a8:
    // 0x26a2a8: 0x0  nop
    ctx->pc = 0x26a2a8u;
    // NOP
label_26a2ac:
    // 0x26a2ac: 0x0  nop
    ctx->pc = 0x26a2acu;
    // NOP
label_26a2b0:
    // 0x26a2b0: 0x14980  sll         $t1, $at, 6
    ctx->pc = 0x26a2b0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 1), 6));
label_26a2b4:
    // 0x26a2b4: 0x54f0  tge         $zero, $zero, 339
    ctx->pc = 0x26a2b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a2b8:
    // 0x26a2b8: 0x0  nop
    ctx->pc = 0x26a2b8u;
    // NOP
label_26a2bc:
    // 0x26a2bc: 0x0  nop
    ctx->pc = 0x26a2bcu;
    // NOP
label_26a2c0:
    // 0x26a2c0: 0x1498b  .word       0x0001498B                   # movn        $t1, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a2c0u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_26a2c4:
    // 0x26a2c4: 0xae90  .word       0x0000AE90                   # mfhi        $s5 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a2c4u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_26a2c8:
    // 0x26a2c8: 0x0  nop
    ctx->pc = 0x26a2c8u;
    // NOP
label_26a2cc:
    // 0x26a2cc: 0x0  nop
    ctx->pc = 0x26a2ccu;
    // NOP
label_26a2d0:
    // 0x26a2d0: 0x149a1  .word       0x000149A1                   # addu        $t1, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a2d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_26a2d4:
    // 0x26a2d4: 0xc080  sll         $t8, $zero, 2
    ctx->pc = 0x26a2d4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_26a2d8:
    // 0x26a2d8: 0x0  nop
    ctx->pc = 0x26a2d8u;
    // NOP
label_26a2dc:
    // 0x26a2dc: 0x0  nop
    ctx->pc = 0x26a2dcu;
    // NOP
label_26a2e0:
    // 0x26a2e0: 0x149ba  dsrl        $t1, $at, 6
    ctx->pc = 0x26a2e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 1) >> 6);
label_26a2e4:
    // 0x26a2e4: 0x96b0  tge         $zero, $zero, 602
    ctx->pc = 0x26a2e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a2e8:
    // 0x26a2e8: 0x0  nop
    ctx->pc = 0x26a2e8u;
    // NOP
label_26a2ec:
    // 0x26a2ec: 0x0  nop
    ctx->pc = 0x26a2ecu;
    // NOP
label_26a2f0:
    // 0x26a2f0: 0x149cd  break       1, 295
    ctx->pc = 0x26a2f0u;
    runtime->handleBreak(rdram, ctx);
label_26a2f4:
    // 0x26a2f4: 0xa100  sll         $s4, $zero, 4
    ctx->pc = 0x26a2f4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_26a2f8:
    // 0x26a2f8: 0x0  nop
    ctx->pc = 0x26a2f8u;
    // NOP
label_26a2fc:
    // 0x26a2fc: 0x0  nop
    ctx->pc = 0x26a2fcu;
    // NOP
label_26a300:
    // 0x26a300: 0x149e2  .word       0x000149E2                   # neg         $t1, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a300u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_26a304:
    // 0x26a304: 0xa180  sll         $s4, $zero, 6
    ctx->pc = 0x26a304u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_26a308:
    // 0x26a308: 0x0  nop
    ctx->pc = 0x26a308u;
    // NOP
label_26a30c:
    // 0x26a30c: 0x0  nop
    ctx->pc = 0x26a30cu;
    // NOP
label_26a310:
    // 0x26a310: 0x149f7  .word       0x000149F7                   # INVALID     $zero, $at, 0x49F7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a310u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x26A310 raw=0x000149F7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26a314:
    // 0x26a314: 0xc450  .word       0x0000C450                   # mfhi        $t8 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a314u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_26a318:
    // 0x26a318: 0x0  nop
    ctx->pc = 0x26a318u;
    // NOP
label_26a31c:
    // 0x26a31c: 0x0  nop
    ctx->pc = 0x26a31cu;
    // NOP
label_26a320:
    // 0x26a320: 0x14a10  .word       0x00014A10                   # mfhi        $t1 # 00010200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a320u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_26a324:
    // 0x26a324: 0x79e0  .word       0x000079E0                   # add         $t7, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a324u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_26a328:
    // 0x26a328: 0x0  nop
    ctx->pc = 0x26a328u;
    // NOP
label_26a32c:
    // 0x26a32c: 0x0  nop
    ctx->pc = 0x26a32cu;
    // NOP
label_26a330:
    // 0x26a330: 0x14a20  .word       0x00014A20                   # add         $t1, $zero, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a330u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_26a334:
    // 0x26a334: 0xf300  sll         $fp, $zero, 12
    ctx->pc = 0x26a334u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_26a338:
    // 0x26a338: 0x0  nop
    ctx->pc = 0x26a338u;
    // NOP
label_26a33c:
    // 0x26a33c: 0x0  nop
    ctx->pc = 0x26a33cu;
    // NOP
label_26a340:
    // 0x26a340: 0x14a3f  dsra32      $t1, $at, 8
    ctx->pc = 0x26a340u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 1) >> (32 + 8));
label_26a344:
    // 0x26a344: 0xa890  .word       0x0000A890                   # mfhi        $s5 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a344u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_26a348:
    // 0x26a348: 0x0  nop
    ctx->pc = 0x26a348u;
    // NOP
label_26a34c:
    // 0x26a34c: 0x0  nop
    ctx->pc = 0x26a34cu;
    // NOP
label_26a350:
    // 0x26a350: 0x14a55  .word       0x00014A55                   # INVALID     $zero, $at, 0x4A55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a350u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x26A350 raw=0x00014A55"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26a354:
    // 0x26a354: 0x8890  .word       0x00008890                   # mfhi        $s1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a354u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_26a358:
    // 0x26a358: 0x0  nop
    ctx->pc = 0x26a358u;
    // NOP
label_26a35c:
    // 0x26a35c: 0x0  nop
    ctx->pc = 0x26a35cu;
    // NOP
label_26a360:
    // 0x26a360: 0x14a67  .word       0x00014A67                   # nor         $t1, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a360u;
    SET_GPR_U64(ctx, 9, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_26a364:
    // 0x26a364: 0xae90  .word       0x0000AE90                   # mfhi        $s5 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a364u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_26a368:
    // 0x26a368: 0x0  nop
    ctx->pc = 0x26a368u;
    // NOP
label_26a36c:
    // 0x26a36c: 0x0  nop
    ctx->pc = 0x26a36cu;
    // NOP
label_26a370:
    // 0x26a370: 0x14a7d  .word       0x00014A7D                   # INVALID     $zero, $at, 0x4A7D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a370u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x26A370 raw=0x00014A7D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26a374:
    // 0x26a374: 0x7720  .word       0x00007720                   # add         $t6, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a374u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_26a378:
    // 0x26a378: 0x0  nop
    ctx->pc = 0x26a378u;
    // NOP
label_26a37c:
    // 0x26a37c: 0x0  nop
    ctx->pc = 0x26a37cu;
    // NOP
label_26a380:
    // 0x26a380: 0x14a8c  .word       0x00014A8C                   # syscall     298 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a380u;
    ctx->pc = 0x26A384u;
runtime->handleSyscall(rdram, ctx, 0x52Au);
label_26a384:
    // 0x26a384: 0xc080  sll         $t8, $zero, 2
    ctx->pc = 0x26a384u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_26a388:
    // 0x26a388: 0x0  nop
    ctx->pc = 0x26a388u;
    // NOP
label_26a38c:
    // 0x26a38c: 0x0  nop
    ctx->pc = 0x26a38cu;
    // NOP
label_26a390:
    // 0x26a390: 0x14aa5  .word       0x00014AA5                   # or          $t1, $zero, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a390u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_26a394:
    // 0x26a394: 0x6530  tge         $zero, $zero, 404
    ctx->pc = 0x26a394u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a398:
    // 0x26a398: 0x0  nop
    ctx->pc = 0x26a398u;
    // NOP
label_26a39c:
    // 0x26a39c: 0x0  nop
    ctx->pc = 0x26a39cu;
    // NOP
label_26a3a0:
    // 0x26a3a0: 0x14ab2  tlt         $zero, $at, 298
    ctx->pc = 0x26a3a0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_26a3a4:
    // 0x26a3a4: 0xcc00  sll         $t9, $zero, 16
    ctx->pc = 0x26a3a4u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_26a3a8:
    // 0x26a3a8: 0x0  nop
    ctx->pc = 0x26a3a8u;
    // NOP
label_26a3ac:
    // 0x26a3ac: 0x0  nop
    ctx->pc = 0x26a3acu;
    // NOP
label_26a3b0:
    // 0x26a3b0: 0x14acc  .word       0x00014ACC                   # syscall     299 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a3b0u;
    ctx->pc = 0x26A3B4u;
runtime->handleSyscall(rdram, ctx, 0x52Bu);
label_26a3b4:
    // 0x26a3b4: 0x83e0  .word       0x000083E0                   # add         $s0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a3b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_26a3b8:
    // 0x26a3b8: 0x0  nop
    ctx->pc = 0x26a3b8u;
    // NOP
label_26a3bc:
    // 0x26a3bc: 0x0  nop
    ctx->pc = 0x26a3bcu;
    // NOP
label_26a3c0:
    // 0x26a3c0: 0x14add  .word       0x00014ADD                   # dmultu      $zero, $at # 00004AC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a3c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26A3C0 raw=0x00014ADD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26a3c4:
    // 0x26a3c4: 0x90f0  tge         $zero, $zero, 579
    ctx->pc = 0x26a3c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a3c8:
    // 0x26a3c8: 0x0  nop
    ctx->pc = 0x26a3c8u;
    // NOP
label_26a3cc:
    // 0x26a3cc: 0x0  nop
    ctx->pc = 0x26a3ccu;
    // NOP
label_26a3d0:
    // 0x26a3d0: 0x14af0  tge         $zero, $at, 299
    ctx->pc = 0x26a3d0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_26a3d4:
    // 0x26a3d4: 0xee70  tge         $zero, $zero, 953
    ctx->pc = 0x26a3d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a3d8:
    // 0x26a3d8: 0x0  nop
    ctx->pc = 0x26a3d8u;
    // NOP
label_26a3dc:
    // 0x26a3dc: 0x0  nop
    ctx->pc = 0x26a3dcu;
    // NOP
label_26a3e0:
    // 0x26a3e0: 0x14b0e  .word       0x00014B0E                   # INVALID     $zero, $at, 0x4B0E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a3e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x26A3E0 raw=0x00014B0E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26a3e4:
    // 0x26a3e4: 0xcd00  sll         $t9, $zero, 20
    ctx->pc = 0x26a3e4u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_26a3e8:
    // 0x26a3e8: 0x0  nop
    ctx->pc = 0x26a3e8u;
    // NOP
label_26a3ec:
    // 0x26a3ec: 0x0  nop
    ctx->pc = 0x26a3ecu;
    // NOP
label_26a3f0:
    // 0x26a3f0: 0x14b28  .word       0x00014B28                   # mfsa        $t1 # 00010300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26a3f0u;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_26a3f4:
    // 0x26a3f4: 0xc680  sll         $t8, $zero, 26
    ctx->pc = 0x26a3f4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_26a3f8:
    // 0x26a3f8: 0x0  nop
    ctx->pc = 0x26a3f8u;
    // NOP
label_26a3fc:
    // 0x26a3fc: 0x0  nop
    ctx->pc = 0x26a3fcu;
    // NOP
label_26a400:
    // 0x26a400: 0x14b41  .word       0x00014B41                   # INVALID     $zero, $at, 0x4B41 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a400u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26A400 raw=0x00014B41"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26a404:
    // 0x26a404: 0x8c20  .word       0x00008C20                   # add         $s1, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a404u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_26a408:
    // 0x26a408: 0x0  nop
    ctx->pc = 0x26a408u;
    // NOP
label_26a40c:
    // 0x26a40c: 0x0  nop
    ctx->pc = 0x26a40cu;
    // NOP
label_26a410:
    // 0x26a410: 0x14b53  .word       0x00014B53                   # mtlo        $zero # 00014B40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a410u;
    ctx->lo = GPR_U64(ctx, 0);
label_26a414:
    // 0x26a414: 0x7c10  .word       0x00007C10                   # mfhi        $t7 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a414u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_26a418:
    // 0x26a418: 0x0  nop
    ctx->pc = 0x26a418u;
    // NOP
label_26a41c:
    // 0x26a41c: 0x0  nop
    ctx->pc = 0x26a41cu;
    // NOP
label_26a420:
    // 0x26a420: 0x14b63  .word       0x00014B63                   # negu        $t1, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a420u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_26a424:
    // 0x26a424: 0x4f90  .word       0x00004F90                   # mfhi        $t1 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a424u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_26a428:
    // 0x26a428: 0x0  nop
    ctx->pc = 0x26a428u;
    // NOP
label_26a42c:
    // 0x26a42c: 0x0  nop
    ctx->pc = 0x26a42cu;
    // NOP
label_26a430:
    // 0x26a430: 0x14b6d  .word       0x00014B6D                   # daddu       $t1, $zero, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a430u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_26a434:
    // 0x26a434: 0x4d80  sll         $t1, $zero, 22
    ctx->pc = 0x26a434u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_26a438:
    // 0x26a438: 0x0  nop
    ctx->pc = 0x26a438u;
    // NOP
label_26a43c:
    // 0x26a43c: 0x0  nop
    ctx->pc = 0x26a43cu;
    // NOP
label_26a440:
    // 0x26a440: 0x14b77  .word       0x00014B77                   # INVALID     $zero, $at, 0x4B77 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a440u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x26A440 raw=0x00014B77"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26a444:
    // 0x26a444: 0x4ab0  tge         $zero, $zero, 298
    ctx->pc = 0x26a444u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a448:
    // 0x26a448: 0x0  nop
    ctx->pc = 0x26a448u;
    // NOP
label_26a44c:
    // 0x26a44c: 0x0  nop
    ctx->pc = 0x26a44cu;
    // NOP
label_26a450:
    // 0x26a450: 0x14b81  .word       0x00014B81                   # INVALID     $zero, $at, 0x4B81 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a450u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26A450 raw=0x00014B81"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26a454:
    // 0x26a454: 0xc2f0  tge         $zero, $zero, 779
    ctx->pc = 0x26a454u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a458:
    // 0x26a458: 0x0  nop
    ctx->pc = 0x26a458u;
    // NOP
label_26a45c:
    // 0x26a45c: 0x0  nop
    ctx->pc = 0x26a45cu;
    // NOP
label_26a460:
    // 0x26a460: 0x14b9a  .word       0x00014B9A                   # div         $t1, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a460u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_26a464:
    // 0x26a464: 0xd520  .word       0x0000D520                   # add         $k0, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a464u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_26a468:
    // 0x26a468: 0x0  nop
    ctx->pc = 0x26a468u;
    // NOP
label_26a46c:
    // 0x26a46c: 0x0  nop
    ctx->pc = 0x26a46cu;
    // NOP
label_26a470:
    // 0x26a470: 0x14bb5  .word       0x00014BB5                   # INVALID     $zero, $at, 0x4BB5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a470u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x26A470 raw=0x00014BB5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26a474:
    // 0x26a474: 0x9a70  tge         $zero, $zero, 617
    ctx->pc = 0x26a474u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a478:
    // 0x26a478: 0x0  nop
    ctx->pc = 0x26a478u;
    // NOP
label_26a47c:
    // 0x26a47c: 0x0  nop
    ctx->pc = 0x26a47cu;
    // NOP
label_26a480:
    // 0x26a480: 0x14bc9  .word       0x00014BC9                   # jalr        $t1, $zero # 000103C0 <InstrIdType: CPU_SPECIAL>
label_26a484:
    if (ctx->pc == 0x26A484u) {
        ctx->pc = 0x26A484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A480u;
        // 0x26a484: 0x9460  .word       0x00009460                   # add         $s2, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A488u;
        goto label_26a488;
    }
    ctx->pc = 0x26A480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 9, 0x26A488u);
        ctx->pc = 0x26A484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A480u;
        // 0x26a484: 0x9460  .word       0x00009460                   # add         $s2, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A480u, 0x26A488u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26A488u;
label_26a488:
    // 0x26a488: 0x0  nop
    ctx->pc = 0x26a488u;
    // NOP
label_26a48c:
    // 0x26a48c: 0x0  nop
    ctx->pc = 0x26a48cu;
    // NOP
label_26a490:
    // 0x26a490: 0x14bdc  .word       0x00014BDC                   # dmult       $zero, $at # 00004BC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a490u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x26A490 raw=0x00014BDC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26a494:
    // 0x26a494: 0xc0b0  tge         $zero, $zero, 770
    ctx->pc = 0x26a494u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a498:
    // 0x26a498: 0x0  nop
    ctx->pc = 0x26a498u;
    // NOP
label_26a49c:
    // 0x26a49c: 0x0  nop
    ctx->pc = 0x26a49cu;
    // NOP
label_26a4a0:
    // 0x26a4a0: 0x14bf5  .word       0x00014BF5                   # INVALID     $zero, $at, 0x4BF5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a4a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x26A4A0 raw=0x00014BF5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26a4a4:
    // 0x26a4a4: 0x6920  .word       0x00006920                   # add         $t5, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a4a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_26a4a8:
    // 0x26a4a8: 0x0  nop
    ctx->pc = 0x26a4a8u;
    // NOP
label_26a4ac:
    // 0x26a4ac: 0x0  nop
    ctx->pc = 0x26a4acu;
    // NOP
label_26a4b0:
    // 0x26a4b0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a4b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26A4B0 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26a4b4:
    // 0x26a4b4: 0x9b00  sll         $s3, $zero, 12
    ctx->pc = 0x26a4b4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_26a4b8:
    // 0x26a4b8: 0x0  nop
    ctx->pc = 0x26a4b8u;
    // NOP
label_26a4bc:
    // 0x26a4bc: 0x0  nop
    ctx->pc = 0x26a4bcu;
    // NOP
label_26a4c0:
    // 0x26a4c0: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a4c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x26A4C0 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26a4c4:
    // 0x26a4c4: 0x52d0  .word       0x000052D0                   # mfhi        $t2 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a4c4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_26a4c8:
    // 0x26a4c8: 0x0  nop
    ctx->pc = 0x26a4c8u;
    // NOP
label_26a4cc:
    // 0x26a4cc: 0x0  nop
    ctx->pc = 0x26a4ccu;
    // NOP
label_26a4d0:
    // 0x26a4d0: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x26a4d0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_26a4d4:
    // 0x26a4d4: 0x9050  .word       0x00009050                   # mfhi        $s2 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a4d4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_26a4d8:
    // 0x26a4d8: 0x0  nop
    ctx->pc = 0x26a4d8u;
    // NOP
label_26a4dc:
    // 0x26a4dc: 0x0  nop
    ctx->pc = 0x26a4dcu;
    // NOP
label_26a4e0:
    // 0x26a4e0: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x26a4e0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a4e4:
    // 0x26a4e4: 0x5b40  sll         $t3, $zero, 13
    ctx->pc = 0x26a4e4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_26a4e8:
    // 0x26a4e8: 0x0  nop
    ctx->pc = 0x26a4e8u;
    // NOP
label_26a4ec:
    // 0x26a4ec: 0x0  nop
    ctx->pc = 0x26a4ecu;
    // NOP
label_26a4f0:
    // 0x26a4f0: 0x3f  dsra32      $zero, $zero, 0
    ctx->pc = 0x26a4f0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 0));
label_26a4f4:
    // 0x26a4f4: 0x9e60  .word       0x00009E60                   # add         $s3, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a4f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_26a4f8:
    // 0x26a4f8: 0x0  nop
    ctx->pc = 0x26a4f8u;
    // NOP
label_26a4fc:
    // 0x26a4fc: 0x0  nop
    ctx->pc = 0x26a4fcu;
    // NOP
label_26a500:
    // 0x26a500: 0x53  .word       0x00000053                   # mtlo        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a500u;
    ctx->lo = GPR_U64(ctx, 0);
label_26a504:
    // 0x26a504: 0xae80  sll         $s5, $zero, 26
    ctx->pc = 0x26a504u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_26a508:
    // 0x26a508: 0x0  nop
    ctx->pc = 0x26a508u;
    // NOP
label_26a50c:
    // 0x26a50c: 0x0  nop
    ctx->pc = 0x26a50cu;
    // NOP
label_26a510:
    // 0x26a510: 0x69  .word       0x00000069                   # mtsa        $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26a510u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_26a514:
    // 0x26a514: 0xb100  sll         $s6, $zero, 4
    ctx->pc = 0x26a514u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_26a518:
    // 0x26a518: 0x0  nop
    ctx->pc = 0x26a518u;
    // NOP
label_26a51c:
    // 0x26a51c: 0x0  nop
    ctx->pc = 0x26a51cu;
    // NOP
label_26a520:
    // 0x26a520: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x26a520u;
    
label_26a524:
    // 0x26a524: 0xc9e0  .word       0x0000C9E0                   # add         $t9, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a524u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_26a528:
    // 0x26a528: 0x0  nop
    ctx->pc = 0x26a528u;
    // NOP
label_26a52c:
    // 0x26a52c: 0x0  nop
    ctx->pc = 0x26a52cu;
    // NOP
label_26a530:
    // 0x26a530: 0x9a  .word       0x0000009A                   # div         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a530u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_26a534:
    // 0x26a534: 0xaf40  sll         $s5, $zero, 29
    ctx->pc = 0x26a534u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_26a538:
    // 0x26a538: 0x0  nop
    ctx->pc = 0x26a538u;
    // NOP
label_26a53c:
    // 0x26a53c: 0x0  nop
    ctx->pc = 0x26a53cu;
    // NOP
label_26a540:
    // 0x26a540: 0xb0  tge         $zero, $zero, 2
    ctx->pc = 0x26a540u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a544:
    // 0x26a544: 0xe480  sll         $gp, $zero, 18
    ctx->pc = 0x26a544u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_26a548:
    // 0x26a548: 0x0  nop
    ctx->pc = 0x26a548u;
    // NOP
label_26a54c:
    // 0x26a54c: 0x0  nop
    ctx->pc = 0x26a54cu;
    // NOP
label_26a550:
    // 0x26a550: 0xcd  break       0, 3
    ctx->pc = 0x26a550u;
    runtime->handleBreak(rdram, ctx);
label_26a554:
    // 0x26a554: 0x9720  .word       0x00009720                   # add         $s2, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a554u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_26a558:
    // 0x26a558: 0x0  nop
    ctx->pc = 0x26a558u;
    // NOP
label_26a55c:
    // 0x26a55c: 0x0  nop
    ctx->pc = 0x26a55cu;
    // NOP
label_26a560:
    // 0x26a560: 0xe0  .word       0x000000E0                   # add         $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a560u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_26a564:
    // 0x26a564: 0x7be0  .word       0x00007BE0                   # add         $t7, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a564u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_26a568:
    // 0x26a568: 0x0  nop
    ctx->pc = 0x26a568u;
    // NOP
label_26a56c:
    // 0x26a56c: 0x0  nop
    ctx->pc = 0x26a56cu;
    // NOP
label_26a570:
    // 0x26a570: 0xf0  tge         $zero, $zero, 3
    ctx->pc = 0x26a570u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a574:
    // 0x26a574: 0xa190  .word       0x0000A190                   # mfhi        $s4 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a574u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_26a578:
    // 0x26a578: 0x0  nop
    ctx->pc = 0x26a578u;
    // NOP
label_26a57c:
    // 0x26a57c: 0x0  nop
    ctx->pc = 0x26a57cu;
    // NOP
label_26a580:
    // 0x26a580: 0x105  .word       0x00000105                   # INVALID     $zero, $zero, 0x105 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a580u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x26A580 raw=0x00000105"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26a584:
    // 0x26a584: 0xd1f0  tge         $zero, $zero, 839
    ctx->pc = 0x26a584u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a588:
    // 0x26a588: 0x0  nop
    ctx->pc = 0x26a588u;
    // NOP
label_26a58c:
    // 0x26a58c: 0x0  nop
    ctx->pc = 0x26a58cu;
    // NOP
label_26a590:
    // 0x26a590: 0x120  .word       0x00000120                   # add         $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a590u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_26a594:
    // 0x26a594: 0xa510  .word       0x0000A510                   # mfhi        $s4 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a594u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_26a598:
    // 0x26a598: 0x0  nop
    ctx->pc = 0x26a598u;
    // NOP
label_26a59c:
    // 0x26a59c: 0x0  nop
    ctx->pc = 0x26a59cu;
    // NOP
label_26a5a0:
    // 0x26a5a0: 0x135  .word       0x00000135                   # INVALID     $zero, $zero, 0x135 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a5a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x26A5A0 raw=0x00000135"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26a5a4:
    // 0x26a5a4: 0x4070  tge         $zero, $zero, 257
    ctx->pc = 0x26a5a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a5a8:
    // 0x26a5a8: 0x0  nop
    ctx->pc = 0x26a5a8u;
    // NOP
label_26a5ac:
    // 0x26a5ac: 0x0  nop
    ctx->pc = 0x26a5acu;
    // NOP
label_26a5b0:
    // 0x26a5b0: 0x13e  dsrl32      $zero, $zero, 4
    ctx->pc = 0x26a5b0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 4));
label_26a5b4:
    // 0x26a5b4: 0x3b70  tge         $zero, $zero, 237
    ctx->pc = 0x26a5b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a5b8:
    // 0x26a5b8: 0x0  nop
    ctx->pc = 0x26a5b8u;
    // NOP
label_26a5bc:
    // 0x26a5bc: 0x0  nop
    ctx->pc = 0x26a5bcu;
    // NOP
label_26a5c0:
    // 0x26a5c0: 0x146  .word       0x00000146                   # srlv        $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a5c0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26a5c4:
    // 0x26a5c4: 0x59e0  .word       0x000059E0                   # add         $t3, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a5c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_26a5c8:
    // 0x26a5c8: 0x0  nop
    ctx->pc = 0x26a5c8u;
    // NOP
label_26a5cc:
    // 0x26a5cc: 0x0  nop
    ctx->pc = 0x26a5ccu;
    // NOP
label_26a5d0:
    // 0x26a5d0: 0x152  .word       0x00000152                   # mflo        $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a5d0u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_26a5d4:
    // 0x26a5d4: 0x6450  .word       0x00006450                   # mfhi        $t4 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a5d4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_26a5d8:
    // 0x26a5d8: 0x0  nop
    ctx->pc = 0x26a5d8u;
    // NOP
label_26a5dc:
    // 0x26a5dc: 0x0  nop
    ctx->pc = 0x26a5dcu;
    // NOP
label_26a5e0:
    // 0x26a5e0: 0x15f  .word       0x0000015F                   # ddivu       $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a5e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x26A5E0 raw=0x0000015F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26a5e4:
    // 0x26a5e4: 0x68e0  .word       0x000068E0                   # add         $t5, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a5e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_26a5e8:
    // 0x26a5e8: 0x0  nop
    ctx->pc = 0x26a5e8u;
    // NOP
label_26a5ec:
    // 0x26a5ec: 0x0  nop
    ctx->pc = 0x26a5ecu;
    // NOP
label_26a5f0:
    // 0x26a5f0: 0x16d  .word       0x0000016D                   # daddu       $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a5f0u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26a5f4:
    // 0x26a5f4: 0xd8c0  sll         $k1, $zero, 3
    ctx->pc = 0x26a5f4u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_26a5f8:
    // 0x26a5f8: 0x0  nop
    ctx->pc = 0x26a5f8u;
    // NOP
label_26a5fc:
    // 0x26a5fc: 0x0  nop
    ctx->pc = 0x26a5fcu;
    // NOP
label_26a600:
    // 0x26a600: 0x189  .word       0x00000189                   # jalr        $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
label_26a604:
    if (ctx->pc == 0x26A604u) {
        ctx->pc = 0x26A604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A600u;
        // 0x26a604: 0xc030  tge         $zero, $zero, 768 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A608u;
        goto label_26a608;
    }
    ctx->pc = 0x26A600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x26A604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A600u;
        // 0x26a604: 0xc030  tge         $zero, $zero, 768 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A600u, 0x26A608u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26A608u;
label_26a608:
    // 0x26a608: 0x0  nop
    ctx->pc = 0x26a608u;
    // NOP
label_26a60c:
    // 0x26a60c: 0x0  nop
    ctx->pc = 0x26a60cu;
    // NOP
label_26a610:
    // 0x26a610: 0x1a2  .word       0x000001A2                   # neg         $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a610u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_26a614:
    // 0x26a614: 0x5a90  .word       0x00005A90                   # mfhi        $t3 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a614u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_26a618:
    // 0x26a618: 0x0  nop
    ctx->pc = 0x26a618u;
    // NOP
label_26a61c:
    // 0x26a61c: 0x0  nop
    ctx->pc = 0x26a61cu;
    // NOP
label_26a620:
    // 0x26a620: 0x1ae  .word       0x000001AE                   # dsub        $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a620u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_26a624:
    // 0x26a624: 0xb960  .word       0x0000B960                   # add         $s7, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a624u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_26a628:
    // 0x26a628: 0x0  nop
    ctx->pc = 0x26a628u;
    // NOP
label_26a62c:
    // 0x26a62c: 0x0  nop
    ctx->pc = 0x26a62cu;
    // NOP
label_26a630:
    // 0x26a630: 0x1c6  .word       0x000001C6                   # srlv        $zero, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a630u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26a634:
    // 0x26a634: 0x4cc0  sll         $t1, $zero, 19
    ctx->pc = 0x26a634u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_26a638:
    // 0x26a638: 0x0  nop
    ctx->pc = 0x26a638u;
    // NOP
label_26a63c:
    // 0x26a63c: 0x0  nop
    ctx->pc = 0x26a63cu;
    // NOP
label_26a640:
    // 0x26a640: 0x1d0  .word       0x000001D0                   # mfhi        $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a640u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_26a644:
    // 0x26a644: 0x5c00  sll         $t3, $zero, 16
    ctx->pc = 0x26a644u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_26a648:
    // 0x26a648: 0x0  nop
    ctx->pc = 0x26a648u;
    // NOP
label_26a64c:
    // 0x26a64c: 0x0  nop
    ctx->pc = 0x26a64cu;
    // NOP
label_26a650:
    // 0x26a650: 0x1dc  .word       0x000001DC                   # dmult       $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a650u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x26A650 raw=0x000001DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26a654:
    // 0x26a654: 0x83b0  tge         $zero, $zero, 526
    ctx->pc = 0x26a654u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a658:
    // 0x26a658: 0x0  nop
    ctx->pc = 0x26a658u;
    // NOP
label_26a65c:
    // 0x26a65c: 0x0  nop
    ctx->pc = 0x26a65cu;
    // NOP
label_26a660:
    // 0x26a660: 0x1ed  .word       0x000001ED                   # daddu       $zero, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a660u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26a664:
    // 0x26a664: 0xb9a0  .word       0x0000B9A0                   # add         $s7, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a664u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
    ctx->pc = 0x26a668u;
    return;
}

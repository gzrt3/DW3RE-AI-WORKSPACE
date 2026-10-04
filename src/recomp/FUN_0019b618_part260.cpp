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

// Function: FUN_0019b618
// Address: 0x19b618 - 0x29b620
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b618_part260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x219d88u: goto label_219d88;
        case 0x219d8cu: goto label_219d8c;
        case 0x219d90u: goto label_219d90;
        case 0x219d94u: goto label_219d94;
        case 0x219d98u: goto label_219d98;
        case 0x219d9cu: goto label_219d9c;
        case 0x219da0u: goto label_219da0;
        case 0x219da4u: goto label_219da4;
        case 0x219da8u: goto label_219da8;
        case 0x219dacu: goto label_219dac;
        case 0x219db0u: goto label_219db0;
        case 0x219db4u: goto label_219db4;
        case 0x219db8u: goto label_219db8;
        case 0x219dbcu: goto label_219dbc;
        case 0x219dc0u: goto label_219dc0;
        case 0x219dc4u: goto label_219dc4;
        case 0x219dc8u: goto label_219dc8;
        case 0x219dccu: goto label_219dcc;
        case 0x219dd0u: goto label_219dd0;
        case 0x219dd4u: goto label_219dd4;
        case 0x219dd8u: goto label_219dd8;
        case 0x219ddcu: goto label_219ddc;
        case 0x219de0u: goto label_219de0;
        case 0x219de4u: goto label_219de4;
        case 0x219de8u: goto label_219de8;
        case 0x219decu: goto label_219dec;
        case 0x219df0u: goto label_219df0;
        case 0x219df4u: goto label_219df4;
        case 0x219df8u: goto label_219df8;
        case 0x219dfcu: goto label_219dfc;
        case 0x219e00u: goto label_219e00;
        case 0x219e04u: goto label_219e04;
        case 0x219e08u: goto label_219e08;
        case 0x219e0cu: goto label_219e0c;
        case 0x219e10u: goto label_219e10;
        case 0x219e14u: goto label_219e14;
        case 0x219e18u: goto label_219e18;
        case 0x219e1cu: goto label_219e1c;
        case 0x219e20u: goto label_219e20;
        case 0x219e24u: goto label_219e24;
        case 0x219e28u: goto label_219e28;
        case 0x219e2cu: goto label_219e2c;
        case 0x219e30u: goto label_219e30;
        case 0x219e34u: goto label_219e34;
        case 0x219e38u: goto label_219e38;
        case 0x219e3cu: goto label_219e3c;
        case 0x219e40u: goto label_219e40;
        case 0x219e44u: goto label_219e44;
        case 0x219e48u: goto label_219e48;
        case 0x219e4cu: goto label_219e4c;
        case 0x219e50u: goto label_219e50;
        case 0x219e54u: goto label_219e54;
        case 0x219e58u: goto label_219e58;
        case 0x219e5cu: goto label_219e5c;
        case 0x219e60u: goto label_219e60;
        case 0x219e64u: goto label_219e64;
        case 0x219e68u: goto label_219e68;
        case 0x219e6cu: goto label_219e6c;
        case 0x219e70u: goto label_219e70;
        case 0x219e74u: goto label_219e74;
        case 0x219e78u: goto label_219e78;
        case 0x219e7cu: goto label_219e7c;
        case 0x219e80u: goto label_219e80;
        case 0x219e84u: goto label_219e84;
        case 0x219e88u: goto label_219e88;
        case 0x219e8cu: goto label_219e8c;
        case 0x219e90u: goto label_219e90;
        case 0x219e94u: goto label_219e94;
        case 0x219e98u: goto label_219e98;
        case 0x219e9cu: goto label_219e9c;
        case 0x219ea0u: goto label_219ea0;
        case 0x219ea4u: goto label_219ea4;
        case 0x219ea8u: goto label_219ea8;
        case 0x219eacu: goto label_219eac;
        case 0x219eb0u: goto label_219eb0;
        case 0x219eb4u: goto label_219eb4;
        case 0x219eb8u: goto label_219eb8;
        case 0x219ebcu: goto label_219ebc;
        case 0x219ec0u: goto label_219ec0;
        case 0x219ec4u: goto label_219ec4;
        case 0x219ec8u: goto label_219ec8;
        case 0x219eccu: goto label_219ecc;
        case 0x219ed0u: goto label_219ed0;
        case 0x219ed4u: goto label_219ed4;
        case 0x219ed8u: goto label_219ed8;
        case 0x219edcu: goto label_219edc;
        case 0x219ee0u: goto label_219ee0;
        case 0x219ee4u: goto label_219ee4;
        case 0x219ee8u: goto label_219ee8;
        case 0x219eecu: goto label_219eec;
        case 0x219ef0u: goto label_219ef0;
        case 0x219ef4u: goto label_219ef4;
        case 0x219ef8u: goto label_219ef8;
        case 0x219efcu: goto label_219efc;
        case 0x219f00u: goto label_219f00;
        case 0x219f04u: goto label_219f04;
        case 0x219f08u: goto label_219f08;
        case 0x219f0cu: goto label_219f0c;
        case 0x219f10u: goto label_219f10;
        case 0x219f14u: goto label_219f14;
        case 0x219f18u: goto label_219f18;
        case 0x219f1cu: goto label_219f1c;
        case 0x219f20u: goto label_219f20;
        case 0x219f24u: goto label_219f24;
        case 0x219f28u: goto label_219f28;
        case 0x219f2cu: goto label_219f2c;
        case 0x219f30u: goto label_219f30;
        case 0x219f34u: goto label_219f34;
        case 0x219f38u: goto label_219f38;
        case 0x219f3cu: goto label_219f3c;
        case 0x219f40u: goto label_219f40;
        case 0x219f44u: goto label_219f44;
        case 0x219f48u: goto label_219f48;
        case 0x219f4cu: goto label_219f4c;
        case 0x219f50u: goto label_219f50;
        case 0x219f54u: goto label_219f54;
        case 0x219f58u: goto label_219f58;
        case 0x219f5cu: goto label_219f5c;
        case 0x219f60u: goto label_219f60;
        case 0x219f64u: goto label_219f64;
        case 0x219f68u: goto label_219f68;
        case 0x219f6cu: goto label_219f6c;
        case 0x219f70u: goto label_219f70;
        case 0x219f74u: goto label_219f74;
        case 0x219f78u: goto label_219f78;
        case 0x219f7cu: goto label_219f7c;
        case 0x219f80u: goto label_219f80;
        case 0x219f84u: goto label_219f84;
        case 0x219f88u: goto label_219f88;
        case 0x219f8cu: goto label_219f8c;
        case 0x219f90u: goto label_219f90;
        case 0x219f94u: goto label_219f94;
        case 0x219f98u: goto label_219f98;
        case 0x219f9cu: goto label_219f9c;
        case 0x219fa0u: goto label_219fa0;
        case 0x219fa4u: goto label_219fa4;
        case 0x219fa8u: goto label_219fa8;
        case 0x219facu: goto label_219fac;
        case 0x219fb0u: goto label_219fb0;
        case 0x219fb4u: goto label_219fb4;
        case 0x219fb8u: goto label_219fb8;
        case 0x219fbcu: goto label_219fbc;
        case 0x219fc0u: goto label_219fc0;
        case 0x219fc4u: goto label_219fc4;
        case 0x219fc8u: goto label_219fc8;
        case 0x219fccu: goto label_219fcc;
        case 0x219fd0u: goto label_219fd0;
        case 0x219fd4u: goto label_219fd4;
        case 0x219fd8u: goto label_219fd8;
        case 0x219fdcu: goto label_219fdc;
        case 0x219fe0u: goto label_219fe0;
        case 0x219fe4u: goto label_219fe4;
        case 0x219fe8u: goto label_219fe8;
        case 0x219fecu: goto label_219fec;
        case 0x219ff0u: goto label_219ff0;
        case 0x219ff4u: goto label_219ff4;
        case 0x219ff8u: goto label_219ff8;
        case 0x219ffcu: goto label_219ffc;
        case 0x21a000u: goto label_21a000;
        case 0x21a004u: goto label_21a004;
        case 0x21a008u: goto label_21a008;
        case 0x21a00cu: goto label_21a00c;
        case 0x21a010u: goto label_21a010;
        case 0x21a014u: goto label_21a014;
        case 0x21a018u: goto label_21a018;
        case 0x21a01cu: goto label_21a01c;
        case 0x21a020u: goto label_21a020;
        case 0x21a024u: goto label_21a024;
        case 0x21a028u: goto label_21a028;
        case 0x21a02cu: goto label_21a02c;
        case 0x21a030u: goto label_21a030;
        case 0x21a034u: goto label_21a034;
        case 0x21a038u: goto label_21a038;
        case 0x21a03cu: goto label_21a03c;
        case 0x21a040u: goto label_21a040;
        case 0x21a044u: goto label_21a044;
        case 0x21a048u: goto label_21a048;
        case 0x21a04cu: goto label_21a04c;
        case 0x21a050u: goto label_21a050;
        case 0x21a054u: goto label_21a054;
        case 0x21a058u: goto label_21a058;
        case 0x21a05cu: goto label_21a05c;
        case 0x21a060u: goto label_21a060;
        case 0x21a064u: goto label_21a064;
        case 0x21a068u: goto label_21a068;
        case 0x21a06cu: goto label_21a06c;
        case 0x21a070u: goto label_21a070;
        case 0x21a074u: goto label_21a074;
        case 0x21a078u: goto label_21a078;
        case 0x21a07cu: goto label_21a07c;
        case 0x21a080u: goto label_21a080;
        case 0x21a084u: goto label_21a084;
        case 0x21a088u: goto label_21a088;
        case 0x21a08cu: goto label_21a08c;
        case 0x21a090u: goto label_21a090;
        case 0x21a094u: goto label_21a094;
        case 0x21a098u: goto label_21a098;
        case 0x21a09cu: goto label_21a09c;
        case 0x21a0a0u: goto label_21a0a0;
        case 0x21a0a4u: goto label_21a0a4;
        case 0x21a0a8u: goto label_21a0a8;
        case 0x21a0acu: goto label_21a0ac;
        case 0x21a0b0u: goto label_21a0b0;
        case 0x21a0b4u: goto label_21a0b4;
        case 0x21a0b8u: goto label_21a0b8;
        case 0x21a0bcu: goto label_21a0bc;
        case 0x21a0c0u: goto label_21a0c0;
        case 0x21a0c4u: goto label_21a0c4;
        case 0x21a0c8u: goto label_21a0c8;
        case 0x21a0ccu: goto label_21a0cc;
        case 0x21a0d0u: goto label_21a0d0;
        case 0x21a0d4u: goto label_21a0d4;
        case 0x21a0d8u: goto label_21a0d8;
        case 0x21a0dcu: goto label_21a0dc;
        case 0x21a0e0u: goto label_21a0e0;
        case 0x21a0e4u: goto label_21a0e4;
        case 0x21a0e8u: goto label_21a0e8;
        case 0x21a0ecu: goto label_21a0ec;
        case 0x21a0f0u: goto label_21a0f0;
        case 0x21a0f4u: goto label_21a0f4;
        case 0x21a0f8u: goto label_21a0f8;
        case 0x21a0fcu: goto label_21a0fc;
        case 0x21a100u: goto label_21a100;
        case 0x21a104u: goto label_21a104;
        case 0x21a108u: goto label_21a108;
        case 0x21a10cu: goto label_21a10c;
        case 0x21a110u: goto label_21a110;
        case 0x21a114u: goto label_21a114;
        case 0x21a118u: goto label_21a118;
        case 0x21a11cu: goto label_21a11c;
        case 0x21a120u: goto label_21a120;
        case 0x21a124u: goto label_21a124;
        case 0x21a128u: goto label_21a128;
        case 0x21a12cu: goto label_21a12c;
        case 0x21a130u: goto label_21a130;
        case 0x21a134u: goto label_21a134;
        case 0x21a138u: goto label_21a138;
        case 0x21a13cu: goto label_21a13c;
        case 0x21a140u: goto label_21a140;
        case 0x21a144u: goto label_21a144;
        case 0x21a148u: goto label_21a148;
        case 0x21a14cu: goto label_21a14c;
        case 0x21a150u: goto label_21a150;
        case 0x21a154u: goto label_21a154;
        case 0x21a158u: goto label_21a158;
        case 0x21a15cu: goto label_21a15c;
        case 0x21a160u: goto label_21a160;
        case 0x21a164u: goto label_21a164;
        case 0x21a168u: goto label_21a168;
        case 0x21a16cu: goto label_21a16c;
        case 0x21a170u: goto label_21a170;
        case 0x21a174u: goto label_21a174;
        case 0x21a178u: goto label_21a178;
        case 0x21a17cu: goto label_21a17c;
        case 0x21a180u: goto label_21a180;
        case 0x21a184u: goto label_21a184;
        case 0x21a188u: goto label_21a188;
        case 0x21a18cu: goto label_21a18c;
        case 0x21a190u: goto label_21a190;
        case 0x21a194u: goto label_21a194;
        case 0x21a198u: goto label_21a198;
        case 0x21a19cu: goto label_21a19c;
        case 0x21a1a0u: goto label_21a1a0;
        case 0x21a1a4u: goto label_21a1a4;
        case 0x21a1a8u: goto label_21a1a8;
        case 0x21a1acu: goto label_21a1ac;
        case 0x21a1b0u: goto label_21a1b0;
        case 0x21a1b4u: goto label_21a1b4;
        case 0x21a1b8u: goto label_21a1b8;
        case 0x21a1bcu: goto label_21a1bc;
        case 0x21a1c0u: goto label_21a1c0;
        case 0x21a1c4u: goto label_21a1c4;
        case 0x21a1c8u: goto label_21a1c8;
        case 0x21a1ccu: goto label_21a1cc;
        case 0x21a1d0u: goto label_21a1d0;
        case 0x21a1d4u: goto label_21a1d4;
        case 0x21a1d8u: goto label_21a1d8;
        case 0x21a1dcu: goto label_21a1dc;
        case 0x21a1e0u: goto label_21a1e0;
        case 0x21a1e4u: goto label_21a1e4;
        case 0x21a1e8u: goto label_21a1e8;
        case 0x21a1ecu: goto label_21a1ec;
        case 0x21a1f0u: goto label_21a1f0;
        case 0x21a1f4u: goto label_21a1f4;
        case 0x21a1f8u: goto label_21a1f8;
        case 0x21a1fcu: goto label_21a1fc;
        case 0x21a200u: goto label_21a200;
        case 0x21a204u: goto label_21a204;
        case 0x21a208u: goto label_21a208;
        case 0x21a20cu: goto label_21a20c;
        case 0x21a210u: goto label_21a210;
        case 0x21a214u: goto label_21a214;
        case 0x21a218u: goto label_21a218;
        case 0x21a21cu: goto label_21a21c;
        case 0x21a220u: goto label_21a220;
        case 0x21a224u: goto label_21a224;
        case 0x21a228u: goto label_21a228;
        case 0x21a22cu: goto label_21a22c;
        case 0x21a230u: goto label_21a230;
        case 0x21a234u: goto label_21a234;
        case 0x21a238u: goto label_21a238;
        case 0x21a23cu: goto label_21a23c;
        case 0x21a240u: goto label_21a240;
        case 0x21a244u: goto label_21a244;
        case 0x21a248u: goto label_21a248;
        case 0x21a24cu: goto label_21a24c;
        case 0x21a250u: goto label_21a250;
        case 0x21a254u: goto label_21a254;
        case 0x21a258u: goto label_21a258;
        case 0x21a25cu: goto label_21a25c;
        case 0x21a260u: goto label_21a260;
        case 0x21a264u: goto label_21a264;
        case 0x21a268u: goto label_21a268;
        case 0x21a26cu: goto label_21a26c;
        case 0x21a270u: goto label_21a270;
        case 0x21a274u: goto label_21a274;
        case 0x21a278u: goto label_21a278;
        case 0x21a27cu: goto label_21a27c;
        case 0x21a280u: goto label_21a280;
        case 0x21a284u: goto label_21a284;
        case 0x21a288u: goto label_21a288;
        case 0x21a28cu: goto label_21a28c;
        case 0x21a290u: goto label_21a290;
        case 0x21a294u: goto label_21a294;
        case 0x21a298u: goto label_21a298;
        case 0x21a29cu: goto label_21a29c;
        case 0x21a2a0u: goto label_21a2a0;
        case 0x21a2a4u: goto label_21a2a4;
        case 0x21a2a8u: goto label_21a2a8;
        case 0x21a2acu: goto label_21a2ac;
        case 0x21a2b0u: goto label_21a2b0;
        case 0x21a2b4u: goto label_21a2b4;
        case 0x21a2b8u: goto label_21a2b8;
        case 0x21a2bcu: goto label_21a2bc;
        case 0x21a2c0u: goto label_21a2c0;
        case 0x21a2c4u: goto label_21a2c4;
        case 0x21a2c8u: goto label_21a2c8;
        case 0x21a2ccu: goto label_21a2cc;
        case 0x21a2d0u: goto label_21a2d0;
        case 0x21a2d4u: goto label_21a2d4;
        case 0x21a2d8u: goto label_21a2d8;
        case 0x21a2dcu: goto label_21a2dc;
        case 0x21a2e0u: goto label_21a2e0;
        case 0x21a2e4u: goto label_21a2e4;
        case 0x21a2e8u: goto label_21a2e8;
        case 0x21a2ecu: goto label_21a2ec;
        case 0x21a2f0u: goto label_21a2f0;
        case 0x21a2f4u: goto label_21a2f4;
        case 0x21a2f8u: goto label_21a2f8;
        case 0x21a2fcu: goto label_21a2fc;
        case 0x21a300u: goto label_21a300;
        case 0x21a304u: goto label_21a304;
        case 0x21a308u: goto label_21a308;
        case 0x21a30cu: goto label_21a30c;
        case 0x21a310u: goto label_21a310;
        case 0x21a314u: goto label_21a314;
        case 0x21a318u: goto label_21a318;
        case 0x21a31cu: goto label_21a31c;
        case 0x21a320u: goto label_21a320;
        case 0x21a324u: goto label_21a324;
        case 0x21a328u: goto label_21a328;
        case 0x21a32cu: goto label_21a32c;
        case 0x21a330u: goto label_21a330;
        case 0x21a334u: goto label_21a334;
        case 0x21a338u: goto label_21a338;
        case 0x21a33cu: goto label_21a33c;
        case 0x21a340u: goto label_21a340;
        case 0x21a344u: goto label_21a344;
        case 0x21a348u: goto label_21a348;
        case 0x21a34cu: goto label_21a34c;
        case 0x21a350u: goto label_21a350;
        case 0x21a354u: goto label_21a354;
        case 0x21a358u: goto label_21a358;
        case 0x21a35cu: goto label_21a35c;
        case 0x21a360u: goto label_21a360;
        case 0x21a364u: goto label_21a364;
        case 0x21a368u: goto label_21a368;
        case 0x21a36cu: goto label_21a36c;
        case 0x21a370u: goto label_21a370;
        case 0x21a374u: goto label_21a374;
        case 0x21a378u: goto label_21a378;
        case 0x21a37cu: goto label_21a37c;
        case 0x21a380u: goto label_21a380;
        case 0x21a384u: goto label_21a384;
        case 0x21a388u: goto label_21a388;
        case 0x21a38cu: goto label_21a38c;
        case 0x21a390u: goto label_21a390;
        case 0x21a394u: goto label_21a394;
        case 0x21a398u: goto label_21a398;
        case 0x21a39cu: goto label_21a39c;
        case 0x21a3a0u: goto label_21a3a0;
        case 0x21a3a4u: goto label_21a3a4;
        case 0x21a3a8u: goto label_21a3a8;
        case 0x21a3acu: goto label_21a3ac;
        case 0x21a3b0u: goto label_21a3b0;
        case 0x21a3b4u: goto label_21a3b4;
        case 0x21a3b8u: goto label_21a3b8;
        case 0x21a3bcu: goto label_21a3bc;
        case 0x21a3c0u: goto label_21a3c0;
        case 0x21a3c4u: goto label_21a3c4;
        case 0x21a3c8u: goto label_21a3c8;
        case 0x21a3ccu: goto label_21a3cc;
        case 0x21a3d0u: goto label_21a3d0;
        case 0x21a3d4u: goto label_21a3d4;
        case 0x21a3d8u: goto label_21a3d8;
        case 0x21a3dcu: goto label_21a3dc;
        case 0x21a3e0u: goto label_21a3e0;
        case 0x21a3e4u: goto label_21a3e4;
        case 0x21a3e8u: goto label_21a3e8;
        case 0x21a3ecu: goto label_21a3ec;
        case 0x21a3f0u: goto label_21a3f0;
        case 0x21a3f4u: goto label_21a3f4;
        case 0x21a3f8u: goto label_21a3f8;
        case 0x21a3fcu: goto label_21a3fc;
        case 0x21a400u: goto label_21a400;
        case 0x21a404u: goto label_21a404;
        case 0x21a408u: goto label_21a408;
        case 0x21a40cu: goto label_21a40c;
        case 0x21a410u: goto label_21a410;
        case 0x21a414u: goto label_21a414;
        case 0x21a418u: goto label_21a418;
        case 0x21a41cu: goto label_21a41c;
        case 0x21a420u: goto label_21a420;
        case 0x21a424u: goto label_21a424;
        case 0x21a428u: goto label_21a428;
        case 0x21a42cu: goto label_21a42c;
        case 0x21a430u: goto label_21a430;
        case 0x21a434u: goto label_21a434;
        case 0x21a438u: goto label_21a438;
        case 0x21a43cu: goto label_21a43c;
        case 0x21a440u: goto label_21a440;
        case 0x21a444u: goto label_21a444;
        case 0x21a448u: goto label_21a448;
        case 0x21a44cu: goto label_21a44c;
        case 0x21a450u: goto label_21a450;
        case 0x21a454u: goto label_21a454;
        case 0x21a458u: goto label_21a458;
        case 0x21a45cu: goto label_21a45c;
        case 0x21a460u: goto label_21a460;
        case 0x21a464u: goto label_21a464;
        case 0x21a468u: goto label_21a468;
        case 0x21a46cu: goto label_21a46c;
        case 0x21a470u: goto label_21a470;
        case 0x21a474u: goto label_21a474;
        case 0x21a478u: goto label_21a478;
        case 0x21a47cu: goto label_21a47c;
        case 0x21a480u: goto label_21a480;
        case 0x21a484u: goto label_21a484;
        case 0x21a488u: goto label_21a488;
        case 0x21a48cu: goto label_21a48c;
        case 0x21a490u: goto label_21a490;
        case 0x21a494u: goto label_21a494;
        case 0x21a498u: goto label_21a498;
        case 0x21a49cu: goto label_21a49c;
        case 0x21a4a0u: goto label_21a4a0;
        case 0x21a4a4u: goto label_21a4a4;
        case 0x21a4a8u: goto label_21a4a8;
        case 0x21a4acu: goto label_21a4ac;
        case 0x21a4b0u: goto label_21a4b0;
        case 0x21a4b4u: goto label_21a4b4;
        case 0x21a4b8u: goto label_21a4b8;
        case 0x21a4bcu: goto label_21a4bc;
        case 0x21a4c0u: goto label_21a4c0;
        case 0x21a4c4u: goto label_21a4c4;
        case 0x21a4c8u: goto label_21a4c8;
        case 0x21a4ccu: goto label_21a4cc;
        case 0x21a4d0u: goto label_21a4d0;
        case 0x21a4d4u: goto label_21a4d4;
        case 0x21a4d8u: goto label_21a4d8;
        case 0x21a4dcu: goto label_21a4dc;
        case 0x21a4e0u: goto label_21a4e0;
        case 0x21a4e4u: goto label_21a4e4;
        case 0x21a4e8u: goto label_21a4e8;
        case 0x21a4ecu: goto label_21a4ec;
        case 0x21a4f0u: goto label_21a4f0;
        case 0x21a4f4u: goto label_21a4f4;
        case 0x21a4f8u: goto label_21a4f8;
        case 0x21a4fcu: goto label_21a4fc;
        case 0x21a500u: goto label_21a500;
        case 0x21a504u: goto label_21a504;
        case 0x21a508u: goto label_21a508;
        case 0x21a50cu: goto label_21a50c;
        case 0x21a510u: goto label_21a510;
        case 0x21a514u: goto label_21a514;
        case 0x21a518u: goto label_21a518;
        case 0x21a51cu: goto label_21a51c;
        case 0x21a520u: goto label_21a520;
        case 0x21a524u: goto label_21a524;
        case 0x21a528u: goto label_21a528;
        case 0x21a52cu: goto label_21a52c;
        case 0x21a530u: goto label_21a530;
        case 0x21a534u: goto label_21a534;
        case 0x21a538u: goto label_21a538;
        case 0x21a53cu: goto label_21a53c;
        case 0x21a540u: goto label_21a540;
        case 0x21a544u: goto label_21a544;
        case 0x21a548u: goto label_21a548;
        case 0x21a54cu: goto label_21a54c;
        case 0x21a550u: goto label_21a550;
        case 0x21a554u: goto label_21a554;
        default: return;
    }

label_219d88:
    // 0x219d88: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x219d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_219d8c:
    // 0x219d8c: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x219d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_219d90:
    // 0x219d90: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x219d90u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_219d94:
    // 0x219d94: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x219d94u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_219d98:
    // 0x219d98: 0x33980  sll         $a3, $v1, 6
    ctx->pc = 0x219d98u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_219d9c:
    // 0x219d9c: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x219d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_219da0:
    // 0x219da0: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x219da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
label_219da4:
    // 0x219da4: 0x24c60000  addiu       $a2, $a2, 0x0
    ctx->pc = 0x219da4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 0));
label_219da8:
    // 0x219da8: 0x346b8889  ori         $t3, $v1, 0x8889
    ctx->pc = 0x219da8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_219dac:
    // 0x219dac: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x219dacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_219db0:
    // 0x219db0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x219db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_219db4:
    // 0x219db4: 0x8ccc022c  lw          $t4, 0x22C($a2)
    ctx->pc = 0x219db4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 556)));
label_219db8:
    // 0x219db8: 0x8cc90228  lw          $t1, 0x228($a2)
    ctx->pc = 0x219db8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 552)));
label_219dbc:
    // 0x219dbc: 0x90c80220  lbu         $t0, 0x220($a2)
    ctx->pc = 0x219dbcu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 544)));
label_219dc0:
    // 0x219dc0: 0x16c0018  mult        $zero, $t3, $t4
    ctx->pc = 0x219dc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_219dc4:
    // 0x219dc4: 0xc57c2  srl         $t2, $t4, 31
    ctx->pc = 0x219dc4u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
label_219dc8:
    // 0x219dc8: 0x93fc2  srl         $a3, $t1, 31
    ctx->pc = 0x219dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
label_219dcc:
    // 0x219dcc: 0x3010  mfhi        $a2
    ctx->pc = 0x219dccu;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_219dd0:
    // 0x219dd0: 0x1690018  mult        $zero, $t3, $t1
    ctx->pc = 0x219dd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_219dd4:
    // 0x219dd4: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x219dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
label_219dd8:
    // 0x219dd8: 0x63103  sra         $a2, $a2, 4
    ctx->pc = 0x219dd8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
label_219ddc:
    // 0x219ddc: 0xca5021  addu        $t2, $a2, $t2
    ctx->pc = 0x219ddcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_219de0:
    // 0x219de0: 0x3010  mfhi        $a2
    ctx->pc = 0x219de0u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_219de4:
    // 0x219de4: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x219de4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_219de8:
    // 0x219de8: 0x63103  sra         $a2, $a2, 4
    ctx->pc = 0x219de8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
label_219dec:
    // 0x219dec: 0x15030003  bne         $t0, $v1, . + 4 + (0x3 << 2)
label_219df0:
    if (ctx->pc == 0x219DF0u) {
        ctx->pc = 0x219DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219DECu;
        // 0x219df0: 0xc74821  addu        $t1, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219DF4u;
        goto label_219df4;
    }
    ctx->pc = 0x219DECu;
    {
        const bool branch_taken_0x219dec = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        ctx->pc = 0x219DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219DECu;
        // 0x219df0: 0xc74821  addu        $t1, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219dec) {
            ctx->pc = 0x219DFCu;
            goto label_219dfc;
        }
    }
    ctx->pc = 0x219DF4u;
label_219df4:
    // 0x219df4: 0x10000020  b           . + 4 + (0x20 << 2)
label_219df8:
    if (ctx->pc == 0x219DF8u) {
        ctx->pc = 0x219DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219DF4u;
        // 0x219df8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219DFCu;
        goto label_219dfc;
    }
    ctx->pc = 0x219DF4u;
    {
        const bool branch_taken_0x219df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219DF4u;
        // 0x219df8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219df4) {
            ctx->pc = 0x219E78u;
            goto label_219e78;
        }
    }
    ctx->pc = 0x219DFCu;
label_219dfc:
    // 0x219dfc: 0x15800003  bnez        $t4, . + 4 + (0x3 << 2)
label_219e00:
    if (ctx->pc == 0x219E00u) {
        ctx->pc = 0x219E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219DFCu;
        // 0x219e00: 0x51a00  sll         $v1, $a1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219E04u;
        goto label_219e04;
    }
    ctx->pc = 0x219DFCu;
    {
        const bool branch_taken_0x219dfc = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x219E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219DFCu;
        // 0x219e00: 0x51a00  sll         $v1, $a1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219dfc) {
            ctx->pc = 0x219E0Cu;
            goto label_219e0c;
        }
    }
    ctx->pc = 0x219E04u;
label_219e04:
    // 0x219e04: 0x1000001c  b           . + 4 + (0x1C << 2)
label_219e08:
    if (ctx->pc == 0x219E08u) {
        ctx->pc = 0x219E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E04u;
        // 0x219e08: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219E0Cu;
        goto label_219e0c;
    }
    ctx->pc = 0x219E04u;
    {
        const bool branch_taken_0x219e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E04u;
        // 0x219e08: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219e04) {
            ctx->pc = 0x219E78u;
            goto label_219e78;
        }
    }
    ctx->pc = 0x219E0Cu;
label_219e0c:
    // 0x219e0c: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x219e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
label_219e10:
    // 0x219e10: 0x653823  subu        $a3, $v1, $a1
    ctx->pc = 0x219e10u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_219e14:
    // 0x219e14: 0x24c62570  addiu       $a2, $a2, 0x2570
    ctx->pc = 0x219e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9584));
label_219e18:
    // 0x219e18: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x219e18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_219e1c:
    // 0x219e1c: 0x728c0  sll         $a1, $a3, 3
    ctx->pc = 0x219e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_219e20:
    // 0x219e20: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x219e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_219e24:
    // 0x219e24: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x219e24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_219e28:
    // 0x219e28: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x219e28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_219e2c:
    // 0x219e2c: 0x8a082a  slt         $at, $a0, $t2
    ctx->pc = 0x219e2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_219e30:
    // 0x219e30: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x219e30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_219e34:
    // 0x219e34: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x219e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_219e38:
    // 0x219e38: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x219e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_219e3c:
    // 0x219e3c: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
label_219e40:
    if (ctx->pc == 0x219E40u) {
        ctx->pc = 0x219E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E3Cu;
        // 0x219e40: 0x651821  addu        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219E44u;
        goto label_219e44;
    }
    ctx->pc = 0x219E3Cu;
    {
        const bool branch_taken_0x219e3c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x219E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E3Cu;
        // 0x219e40: 0x651821  addu        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219e3c) {
            ctx->pc = 0x219E68u;
            goto label_219e68;
        }
    }
    ctx->pc = 0x219E44u;
label_219e44:
    // 0x219e44: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x219e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_219e48:
    // 0x219e48: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x219e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_219e4c:
    // 0x219e4c: 0x90630015  lbu         $v1, 0x15($v1)
    ctx->pc = 0x219e4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 21)));
label_219e50:
    // 0x219e50: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_219e54:
    if (ctx->pc == 0x219E54u) {
        ctx->pc = 0x219E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E50u;
        // 0x219e54: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219E58u;
        goto label_219e58;
    }
    ctx->pc = 0x219E50u;
    {
        const bool branch_taken_0x219e50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x219E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E50u;
        // 0x219e54: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219e50) {
            ctx->pc = 0x219E60u;
            goto label_219e60;
        }
    }
    ctx->pc = 0x219E58u;
label_219e58:
    // 0x219e58: 0x10000007  b           . + 4 + (0x7 << 2)
label_219e5c:
    if (ctx->pc == 0x219E5Cu) {
        ctx->pc = 0x219E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E58u;
        // 0x219e5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219E60u;
        goto label_219e60;
    }
    ctx->pc = 0x219E58u;
    {
        const bool branch_taken_0x219e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E58u;
        // 0x219e5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219e58) {
            ctx->pc = 0x219E78u;
            goto label_219e78;
        }
    }
    ctx->pc = 0x219E60u;
label_219e60:
    // 0x219e60: 0x10000005  b           . + 4 + (0x5 << 2)
label_219e64:
    if (ctx->pc == 0x219E64u) {
        ctx->pc = 0x219E68u;
        goto label_219e68;
    }
    ctx->pc = 0x219E60u;
    {
        const bool branch_taken_0x219e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x219e60) {
            ctx->pc = 0x219E78u;
            goto label_219e78;
        }
    }
    ctx->pc = 0x219E68u;
label_219e68:
    // 0x219e68: 0x89082a  slt         $at, $a0, $t1
    ctx->pc = 0x219e68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_219e6c:
    // 0x219e6c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_219e70:
    if (ctx->pc == 0x219E70u) {
        ctx->pc = 0x219E74u;
        goto label_219e74;
    }
    ctx->pc = 0x219E6Cu;
    {
        const bool branch_taken_0x219e6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x219e6c) {
            ctx->pc = 0x219E78u;
            goto label_219e78;
        }
    }
    ctx->pc = 0x219E74u;
label_219e74:
    // 0x219e74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x219e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_219e78:
    // 0x219e78: 0x3e00008  jr          $ra
label_219e7c:
    if (ctx->pc == 0x219E7Cu) {
        ctx->pc = 0x219E80u;
        goto label_219e80;
    }
    ctx->pc = 0x219E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219E80u;
label_219e80:
    // 0x219e80: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x219e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_219e84:
    // 0x219e84: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x219e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_219e88:
    // 0x219e88: 0x84244af4  lh          $a0, 0x4AF4($at)
    ctx->pc = 0x219e88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_219e8c:
    // 0x219e8c: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
label_219e90:
    if (ctx->pc == 0x219E90u) {
        ctx->pc = 0x219E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E8Cu;
        // 0x219e90: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219E94u;
        goto label_219e94;
    }
    ctx->pc = 0x219E8Cu;
    {
        const bool branch_taken_0x219e8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x219E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219E8Cu;
        // 0x219e90: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219e8c) {
            ctx->pc = 0x219EB4u;
            goto label_219eb4;
        }
    }
    ctx->pc = 0x219E94u;
label_219e94:
    // 0x219e94: 0x8f8392b8  lw          $v1, -0x6D48($gp)
    ctx->pc = 0x219e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
label_219e98:
    // 0x219e98: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x219e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_219e9c:
    // 0x219e9c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_219ea0:
    if (ctx->pc == 0x219EA0u) {
        ctx->pc = 0x219EA4u;
        goto label_219ea4;
    }
    ctx->pc = 0x219E9Cu;
    {
        const bool branch_taken_0x219e9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x219e9c) {
            ctx->pc = 0x219EACu;
            goto label_219eac;
        }
    }
    ctx->pc = 0x219EA4u;
label_219ea4:
    // 0x219ea4: 0x10000003  b           . + 4 + (0x3 << 2)
label_219ea8:
    if (ctx->pc == 0x219EA8u) {
        ctx->pc = 0x219EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219EA4u;
        // 0x219ea8: 0x8f8292bc  lw          $v0, -0x6D44($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939324)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219EACu;
        goto label_219eac;
    }
    ctx->pc = 0x219EA4u;
    {
        const bool branch_taken_0x219ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219EA4u;
        // 0x219ea8: 0x8f8292bc  lw          $v0, -0x6D44($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ea4) {
            ctx->pc = 0x219EB4u;
            goto label_219eb4;
        }
    }
    ctx->pc = 0x219EACu;
label_219eac:
    // 0x219eac: 0x8f8292bc  lw          $v0, -0x6D44($gp)
    ctx->pc = 0x219eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939324)));
label_219eb0:
    // 0x219eb0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x219eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_219eb4:
    // 0x219eb4: 0x3e00008  jr          $ra
label_219eb8:
    if (ctx->pc == 0x219EB8u) {
        ctx->pc = 0x219EBCu;
        goto label_219ebc;
    }
    ctx->pc = 0x219EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219EBCu;
label_219ebc:
    // 0x219ebc: 0x0  nop
    ctx->pc = 0x219ebcu;
    // NOP
label_219ec0:
    // 0x219ec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x219ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_219ec4:
    // 0x219ec4: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x219ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_219ec8:
    // 0x219ec8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x219ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_219ecc:
    // 0x219ecc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x219eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_219ed0:
    // 0x219ed0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x219ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_219ed4:
    // 0x219ed4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x219ed4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_219ed8:
    // 0x219ed8: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
label_219edc:
    if (ctx->pc == 0x219EDCu) {
        ctx->pc = 0x219EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219ED8u;
        // 0x219edc: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219EE0u;
        goto label_219ee0;
    }
    ctx->pc = 0x219ED8u;
    {
        const bool branch_taken_0x219ed8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x219EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219ED8u;
        // 0x219edc: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ed8) {
            ctx->pc = 0x219EECu;
            goto label_219eec;
        }
    }
    ctx->pc = 0x219EE0u;
label_219ee0:
    // 0x219ee0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x219ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_219ee4:
    // 0x219ee4: 0x10000003  b           . + 4 + (0x3 << 2)
label_219ee8:
    if (ctx->pc == 0x219EE8u) {
        ctx->pc = 0x219EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219EE4u;
        // 0x219ee8: 0xaf8292b8  sw          $v0, -0x6D48($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219EECu;
        goto label_219eec;
    }
    ctx->pc = 0x219EE4u;
    {
        const bool branch_taken_0x219ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219EE4u;
        // 0x219ee8: 0xaf8292b8  sw          $v0, -0x6D48($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ee4) {
            ctx->pc = 0x219EF4u;
            goto label_219ef4;
        }
    }
    ctx->pc = 0x219EECu;
label_219eec:
    // 0x219eec: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x219eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_219ef0:
    // 0x219ef0: 0xaf8292b8  sw          $v0, -0x6D48($gp)
    ctx->pc = 0x219ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939320), GPR_U32(ctx, 2));
label_219ef4:
    // 0x219ef4: 0xc08683c  jal         func_21A0F0
label_219ef8:
    if (ctx->pc == 0x219EF8u) {
        ctx->pc = 0x219EFCu;
        goto label_219efc;
    }
    ctx->pc = 0x219EF4u;
    SET_GPR_U32(ctx, 31, 0x219EFCu);
    ctx->pc = 0x21A0F0u;
    goto label_21a0f0;
    ctx->pc = 0x219EFCu;
label_219efc:
    // 0x219efc: 0xc086920  jal         func_21A480
label_219f00:
    if (ctx->pc == 0x219F00u) {
        ctx->pc = 0x219F04u;
        goto label_219f04;
    }
    ctx->pc = 0x219EFCu;
    SET_GPR_U32(ctx, 31, 0x219F04u);
    ctx->pc = 0x21A480u;
    goto label_21a480;
    ctx->pc = 0x219F04u;
label_219f04:
    // 0x219f04: 0x8f8492bc  lw          $a0, -0x6D44($gp)
    ctx->pc = 0x219f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939324)));
label_219f08:
    // 0x219f08: 0x8f8292b8  lw          $v0, -0x6D48($gp)
    ctx->pc = 0x219f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
label_219f0c:
    // 0x219f0c: 0x10820020  beq         $a0, $v0, . + 4 + (0x20 << 2)
label_219f10:
    if (ctx->pc == 0x219F10u) {
        ctx->pc = 0x219F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F0Cu;
        // 0x219f10: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219F14u;
        goto label_219f14;
    }
    ctx->pc = 0x219F0Cu;
    {
        const bool branch_taken_0x219f0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x219F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F0Cu;
        // 0x219f10: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f0c) {
            ctx->pc = 0x219F90u;
            goto label_219f90;
        }
    }
    ctx->pc = 0x219F14u;
label_219f14:
    // 0x219f14: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
label_219f18:
    if (ctx->pc == 0x219F18u) {
        ctx->pc = 0x219F1Cu;
        goto label_219f1c;
    }
    ctx->pc = 0x219F14u;
    {
        const bool branch_taken_0x219f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x219f14) {
            ctx->pc = 0x219F40u;
            goto label_219f40;
        }
    }
    ctx->pc = 0x219F1Cu;
label_219f1c:
    // 0x219f1c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_219f20:
    if (ctx->pc == 0x219F20u) {
        ctx->pc = 0x219F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F1Cu;
        // 0x219f20: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219F24u;
        goto label_219f24;
    }
    ctx->pc = 0x219F1Cu;
    {
        const bool branch_taken_0x219f1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x219F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F1Cu;
        // 0x219f20: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f1c) {
            ctx->pc = 0x219F34u;
            goto label_219f34;
        }
    }
    ctx->pc = 0x219F24u;
label_219f24:
    // 0x219f24: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x219f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_219f28:
    // 0x219f28: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x219f28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_219f2c:
    // 0x219f2c: 0x10000018  b           . + 4 + (0x18 << 2)
label_219f30:
    if (ctx->pc == 0x219F30u) {
        ctx->pc = 0x219F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F2Cu;
        // 0x219f30: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219F34u;
        goto label_219f34;
    }
    ctx->pc = 0x219F2Cu;
    {
        const bool branch_taken_0x219f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F2Cu;
        // 0x219f30: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f2c) {
            ctx->pc = 0x219F90u;
            goto label_219f90;
        }
    }
    ctx->pc = 0x219F34u;
label_219f34:
    // 0x219f34: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x219f34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_219f38:
    // 0x219f38: 0x10000015  b           . + 4 + (0x15 << 2)
label_219f3c:
    if (ctx->pc == 0x219F3Cu) {
        ctx->pc = 0x219F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F38u;
        // 0x219f3c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219F40u;
        goto label_219f40;
    }
    ctx->pc = 0x219F38u;
    {
        const bool branch_taken_0x219f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F38u;
        // 0x219f3c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f38) {
            ctx->pc = 0x219F90u;
            goto label_219f90;
        }
    }
    ctx->pc = 0x219F40u;
label_219f40:
    // 0x219f40: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_219f44:
    if (ctx->pc == 0x219F44u) {
        ctx->pc = 0x219F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F40u;
        // 0x219f44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219F48u;
        goto label_219f48;
    }
    ctx->pc = 0x219F40u;
    {
        const bool branch_taken_0x219f40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x219F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F40u;
        // 0x219f44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f40) {
            ctx->pc = 0x219F58u;
            goto label_219f58;
        }
    }
    ctx->pc = 0x219F48u;
label_219f48:
    // 0x219f48: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x219f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_219f4c:
    // 0x219f4c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x219f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_219f50:
    // 0x219f50: 0x1000000f  b           . + 4 + (0xF << 2)
label_219f54:
    if (ctx->pc == 0x219F54u) {
        ctx->pc = 0x219F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F50u;
        // 0x219f54: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219F58u;
        goto label_219f58;
    }
    ctx->pc = 0x219F50u;
    {
        const bool branch_taken_0x219f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F50u;
        // 0x219f54: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f50) {
            ctx->pc = 0x219F90u;
            goto label_219f90;
        }
    }
    ctx->pc = 0x219F58u;
label_219f58:
    // 0x219f58: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
label_219f5c:
    if (ctx->pc == 0x219F5Cu) {
        ctx->pc = 0x219F60u;
        goto label_219f60;
    }
    ctx->pc = 0x219F58u;
    {
        const bool branch_taken_0x219f58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x219f58) {
            ctx->pc = 0x219F70u;
            goto label_219f70;
        }
    }
    ctx->pc = 0x219F60u;
label_219f60:
    // 0x219f60: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x219f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_219f64:
    // 0x219f64: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x219f64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_219f68:
    // 0x219f68: 0x10000009  b           . + 4 + (0x9 << 2)
label_219f6c:
    if (ctx->pc == 0x219F6Cu) {
        ctx->pc = 0x219F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F68u;
        // 0x219f6c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219F70u;
        goto label_219f70;
    }
    ctx->pc = 0x219F68u;
    {
        const bool branch_taken_0x219f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F68u;
        // 0x219f6c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f68) {
            ctx->pc = 0x219F90u;
            goto label_219f90;
        }
    }
    ctx->pc = 0x219F70u;
label_219f70:
    // 0x219f70: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_219f74:
    if (ctx->pc == 0x219F74u) {
        ctx->pc = 0x219F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F70u;
        // 0x219f74: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219F78u;
        goto label_219f78;
    }
    ctx->pc = 0x219F70u;
    {
        const bool branch_taken_0x219f70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x219F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F70u;
        // 0x219f74: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f70) {
            ctx->pc = 0x219F88u;
            goto label_219f88;
        }
    }
    ctx->pc = 0x219F78u;
label_219f78:
    // 0x219f78: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x219f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_219f7c:
    // 0x219f7c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x219f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_219f80:
    // 0x219f80: 0x10000003  b           . + 4 + (0x3 << 2)
label_219f84:
    if (ctx->pc == 0x219F84u) {
        ctx->pc = 0x219F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F80u;
        // 0x219f84: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219F88u;
        goto label_219f88;
    }
    ctx->pc = 0x219F80u;
    {
        const bool branch_taken_0x219f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219F80u;
        // 0x219f84: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219f80) {
            ctx->pc = 0x219F90u;
            goto label_219f90;
        }
    }
    ctx->pc = 0x219F88u;
label_219f88:
    // 0x219f88: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x219f88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_219f8c:
    // 0x219f8c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x219f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_219f90:
    // 0x219f90: 0xc060258  jal         func_180960
label_219f94:
    if (ctx->pc == 0x219F94u) {
        ctx->pc = 0x219F98u;
        goto label_219f98;
    }
    ctx->pc = 0x219F90u;
    SET_GPR_U32(ctx, 31, 0x219F98u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x219F90u, 0x219F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219F98u;
label_219f98:
    // 0x219f98: 0xc060258  jal         func_180960
label_219f9c:
    if (ctx->pc == 0x219F9Cu) {
        ctx->pc = 0x219FA0u;
        goto label_219fa0;
    }
    ctx->pc = 0x219F98u;
    SET_GPR_U32(ctx, 31, 0x219FA0u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x219F98u, 0x219FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219FA0u;
label_219fa0:
    // 0x219fa0: 0xc0867f4  jal         func_219FD0
label_219fa4:
    if (ctx->pc == 0x219FA4u) {
        ctx->pc = 0x219FA8u;
        goto label_219fa8;
    }
    ctx->pc = 0x219FA0u;
    SET_GPR_U32(ctx, 31, 0x219FA8u);
    ctx->pc = 0x219FD0u;
    goto label_219fd0;
    ctx->pc = 0x219FA8u;
label_219fa8:
    // 0x219fa8: 0x8f8492c0  lw          $a0, -0x6D40($gp)
    ctx->pc = 0x219fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939328)));
label_219fac:
    // 0x219fac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x219facu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219fb0:
    // 0x219fb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x219fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_219fb4:
    // 0x219fb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x219fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_219fb8:
    // 0x219fb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x219fb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_219fbc:
    // 0x219fbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x219fbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_219fc0:
    // 0x219fc0: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x219fc0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_219fc4:
    // 0x219fc4: 0x3e00008  jr          $ra
label_219fc8:
    if (ctx->pc == 0x219FC8u) {
        ctx->pc = 0x219FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219FC4u;
        // 0x219fc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219FCCu;
        goto label_219fcc;
    }
    ctx->pc = 0x219FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219FC4u;
        // 0x219fc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219FCCu;
label_219fcc:
    // 0x219fcc: 0x0  nop
    ctx->pc = 0x219fccu;
    // NOP
label_219fd0:
    // 0x219fd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x219fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_219fd4:
    // 0x219fd4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x219fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_219fd8:
    // 0x219fd8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x219fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_219fdc:
    // 0x219fdc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x219fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_219fe0:
    // 0x219fe0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x219fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_219fe4:
    // 0x219fe4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x219fe4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219fe8:
    // 0x219fe8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x219fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_219fec:
    // 0x219fec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x219fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_219ff0:
    // 0x219ff0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x219ff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_219ff4:
    // 0x219ff4: 0x278292b0  addiu       $v0, $gp, -0x6D50
    ctx->pc = 0x219ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939312));
label_219ff8:
    // 0x219ff8: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x219ff8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_219ffc:
    // 0x219ffc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x219ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21a000:
    // 0x21a000: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_21a004:
    if (ctx->pc == 0x21A004u) {
        ctx->pc = 0x21A008u;
        goto label_21a008;
    }
    ctx->pc = 0x21A000u;
    {
        const bool branch_taken_0x21a000 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a000) {
            ctx->pc = 0x21A014u;
            goto label_21a014;
        }
    }
    ctx->pc = 0x21A008u;
label_21a008:
    // 0x21a008: 0xc070038  jal         func_1C00E0
label_21a00c:
    if (ctx->pc == 0x21A00Cu) {
        ctx->pc = 0x21A010u;
        goto label_21a010;
    }
    ctx->pc = 0x21A008u;
    SET_GPR_U32(ctx, 31, 0x21A010u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x21A010u;
label_21a010:
    // 0x21a010: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x21a010u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_21a014:
    // 0x21a014: 0x0  nop
    ctx->pc = 0x21a014u;
    // NOP
label_21a018:
    // 0x21a018: 0x278292a0  addiu       $v0, $gp, -0x6D60
    ctx->pc = 0x21a018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939296));
label_21a01c:
    // 0x21a01c: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x21a01cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_21a020:
    // 0x21a020: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x21a020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21a024:
    // 0x21a024: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_21a028:
    if (ctx->pc == 0x21A028u) {
        ctx->pc = 0x21A02Cu;
        goto label_21a02c;
    }
    ctx->pc = 0x21A024u;
    {
        const bool branch_taken_0x21a024 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a024) {
            ctx->pc = 0x21A038u;
            goto label_21a038;
        }
    }
    ctx->pc = 0x21A02Cu;
label_21a02c:
    // 0x21a02c: 0xc070038  jal         func_1C00E0
label_21a030:
    if (ctx->pc == 0x21A030u) {
        ctx->pc = 0x21A034u;
        goto label_21a034;
    }
    ctx->pc = 0x21A02Cu;
    SET_GPR_U32(ctx, 31, 0x21A034u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x21A034u;
label_21a034:
    // 0x21a034: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x21a034u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_21a038:
    // 0x21a038: 0x27829298  addiu       $v0, $gp, -0x6D68
    ctx->pc = 0x21a038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939288));
label_21a03c:
    // 0x21a03c: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x21a03cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_21a040:
    // 0x21a040: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x21a040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21a044:
    // 0x21a044: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_21a048:
    if (ctx->pc == 0x21A048u) {
        ctx->pc = 0x21A04Cu;
        goto label_21a04c;
    }
    ctx->pc = 0x21A044u;
    {
        const bool branch_taken_0x21a044 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a044) {
            ctx->pc = 0x21A058u;
            goto label_21a058;
        }
    }
    ctx->pc = 0x21A04Cu;
label_21a04c:
    // 0x21a04c: 0xc070038  jal         func_1C00E0
label_21a050:
    if (ctx->pc == 0x21A050u) {
        ctx->pc = 0x21A054u;
        goto label_21a054;
    }
    ctx->pc = 0x21A04Cu;
    SET_GPR_U32(ctx, 31, 0x21A054u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x21A054u;
label_21a054:
    // 0x21a054: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x21a054u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_21a058:
    // 0x21a058: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21a058u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a05c:
    // 0x21a05c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21a05cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a060:
    // 0x21a060: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x21a060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_21a064:
    // 0x21a064: 0x24428c70  addiu       $v0, $v0, -0x7390
    ctx->pc = 0x21a064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937712));
label_21a068:
    // 0x21a068: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x21a068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_21a06c:
    // 0x21a06c: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x21a06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_21a070:
    // 0x21a070: 0x52a021  addu        $s4, $v0, $s2
    ctx->pc = 0x21a070u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_21a074:
    // 0x21a074: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x21a074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_21a078:
    // 0x21a078: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_21a07c:
    if (ctx->pc == 0x21A07Cu) {
        ctx->pc = 0x21A080u;
        goto label_21a080;
    }
    ctx->pc = 0x21A078u;
    {
        const bool branch_taken_0x21a078 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a078) {
            ctx->pc = 0x21A08Cu;
            goto label_21a08c;
        }
    }
    ctx->pc = 0x21A080u;
label_21a080:
    // 0x21a080: 0xc070038  jal         func_1C00E0
label_21a084:
    if (ctx->pc == 0x21A084u) {
        ctx->pc = 0x21A088u;
        goto label_21a088;
    }
    ctx->pc = 0x21A080u;
    SET_GPR_U32(ctx, 31, 0x21A088u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x21A088u;
label_21a088:
    // 0x21a088: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x21a088u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_21a08c:
    // 0x21a08c: 0x0  nop
    ctx->pc = 0x21a08cu;
    // NOP
label_21a090:
    // 0x21a090: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21a090u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_21a094:
    // 0x21a094: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x21a094u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_21a098:
    // 0x21a098: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_21a09c:
    if (ctx->pc == 0x21A09Cu) {
        ctx->pc = 0x21A09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A098u;
        // 0x21a09c: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A0A0u;
        goto label_21a0a0;
    }
    ctx->pc = 0x21A098u;
    {
        const bool branch_taken_0x21a098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A098u;
        // 0x21a09c: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a098) {
            ctx->pc = 0x21A060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a060;
        }
    }
    ctx->pc = 0x21A0A0u;
label_21a0a0:
    // 0x21a0a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21a0a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21a0a4:
    // 0x21a0a4: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x21a0a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_21a0a8:
    // 0x21a0a8: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
label_21a0ac:
    if (ctx->pc == 0x21A0ACu) {
        ctx->pc = 0x21A0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A0A8u;
        // 0x21a0ac: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A0B0u;
        goto label_21a0b0;
    }
    ctx->pc = 0x21A0A8u;
    {
        const bool branch_taken_0x21a0a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A0A8u;
        // 0x21a0ac: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a0a8) {
            ctx->pc = 0x219FF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_219ff4;
        }
    }
    ctx->pc = 0x21A0B0u;
label_21a0b0:
    // 0x21a0b0: 0xc04e19c  jal         func_138670
label_21a0b4:
    if (ctx->pc == 0x21A0B4u) {
        ctx->pc = 0x21A0B8u;
        goto label_21a0b8;
    }
    ctx->pc = 0x21A0B0u;
    SET_GPR_U32(ctx, 31, 0x21A0B8u);
    ctx->pc = 0x138670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138670u, 0x21A0B0u, 0x21A0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A0B8u;
label_21a0b8:
    // 0x21a0b8: 0x8f8392c0  lw          $v1, -0x6D40($gp)
    ctx->pc = 0x21a0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939328)));
label_21a0bc:
    // 0x21a0bc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_21a0c0:
    if (ctx->pc == 0x21A0C0u) {
        ctx->pc = 0x21A0C4u;
        goto label_21a0c4;
    }
    ctx->pc = 0x21A0BCu;
    {
        const bool branch_taken_0x21a0bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a0bc) {
            ctx->pc = 0x21A0CCu;
            goto label_21a0cc;
        }
    }
    ctx->pc = 0x21A0C4u;
label_21a0c4:
    // 0x21a0c4: 0xc07a0dc  jal         func_1E8370
label_21a0c8:
    if (ctx->pc == 0x21A0C8u) {
        ctx->pc = 0x21A0CCu;
        goto label_21a0cc;
    }
    ctx->pc = 0x21A0C4u;
    SET_GPR_U32(ctx, 31, 0x21A0CCu);
    ctx->pc = 0x1E8370u;
    { ctx->pc = 0x1e8370; return; }
    ctx->pc = 0x21A0CCu;
label_21a0cc:
    // 0x21a0cc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x21a0ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_21a0d0:
    // 0x21a0d0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x21a0d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_21a0d4:
    // 0x21a0d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21a0d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_21a0d8:
    // 0x21a0d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21a0d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21a0dc:
    // 0x21a0dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21a0dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21a0e0:
    // 0x21a0e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21a0e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_21a0e4:
    // 0x21a0e4: 0x3e00008  jr          $ra
label_21a0e8:
    if (ctx->pc == 0x21A0E8u) {
        ctx->pc = 0x21A0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A0E4u;
        // 0x21a0e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A0ECu;
        goto label_21a0ec;
    }
    ctx->pc = 0x21A0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A0E4u;
        // 0x21a0e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A0E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A0ECu;
label_21a0ec:
    // 0x21a0ec: 0x0  nop
    ctx->pc = 0x21a0ecu;
    // NOP
label_21a0f0:
    // 0x21a0f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x21a0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_21a0f4:
    // 0x21a0f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21a0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a0f8:
    // 0x21a0f8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x21a0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_21a0fc:
    // 0x21a0fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21a0fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a100:
    // 0x21a100: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x21a100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_21a104:
    // 0x21a104: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21a104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a108:
    // 0x21a108: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x21a108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_21a10c:
    // 0x21a10c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x21a10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_21a110:
    // 0x21a110: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x21a110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_21a114:
    // 0x21a114: 0xc06dfd4  jal         func_1B7F50
label_21a118:
    if (ctx->pc == 0x21A118u) {
        ctx->pc = 0x21A118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A114u;
        // 0x21a118: 0x7fb00020  sq          $s0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A11Cu;
        goto label_21a11c;
    }
    ctx->pc = 0x21A114u;
    SET_GPR_U32(ctx, 31, 0x21A11Cu);
    ctx->pc = 0x21A118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A114u;
    // 0x21a118: 0x7fb00020  sq          $s0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F50u;
    { ctx->pc = 0x1b7f50; return; }
    ctx->pc = 0x21A11Cu;
label_21a11c:
    // 0x21a11c: 0xc041738  jal         func_105CE0
label_21a120:
    if (ctx->pc == 0x21A120u) {
        ctx->pc = 0x21A120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A11Cu;
        // 0x21a120: 0x240407eb  addiu       $a0, $zero, 0x7EB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2027));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A124u;
        goto label_21a124;
    }
    ctx->pc = 0x21A11Cu;
    SET_GPR_U32(ctx, 31, 0x21A124u);
    ctx->pc = 0x21A120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A11Cu;
    // 0x21a120: 0x240407eb  addiu       $a0, $zero, 0x7EB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2027));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x21A11Cu, 0x21A124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A124u;
label_21a124:
    // 0x21a124: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x21a124u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_21a128:
    // 0x21a128: 0xc070080  jal         func_1C0200
label_21a12c:
    if (ctx->pc == 0x21A12Cu) {
        ctx->pc = 0x21A12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A128u;
        // 0x21a12c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A130u;
        goto label_21a130;
    }
    ctx->pc = 0x21A128u;
    SET_GPR_U32(ctx, 31, 0x21A130u);
    ctx->pc = 0x21A12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A128u;
    // 0x21a12c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x21A130u;
label_21a130:
    // 0x21a130: 0x240407eb  addiu       $a0, $zero, 0x7EB
    ctx->pc = 0x21a130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2027));
label_21a134:
    // 0x21a134: 0xc0416e4  jal         func_105B90
label_21a138:
    if (ctx->pc == 0x21A138u) {
        ctx->pc = 0x21A138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A134u;
        // 0x21a138: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A13Cu;
        goto label_21a13c;
    }
    ctx->pc = 0x21A134u;
    SET_GPR_U32(ctx, 31, 0x21A13Cu);
    ctx->pc = 0x21A138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A134u;
    // 0x21a138: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x21A134u, 0x21A13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A13Cu;
label_21a13c:
    // 0x21a13c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x21a13cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21a140:
    // 0x21a140: 0xc060678  jal         func_1819E0
label_21a144:
    if (ctx->pc == 0x21A144u) {
        ctx->pc = 0x21A144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A140u;
        // 0x21a144: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A148u;
        goto label_21a148;
    }
    ctx->pc = 0x21A140u;
    SET_GPR_U32(ctx, 31, 0x21A148u);
    ctx->pc = 0x21A144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A140u;
    // 0x21a144: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1819E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1819E0u, 0x21A140u, 0x21A148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A148u;
label_21a148:
    // 0x21a148: 0x29c3c  dsll32      $s3, $v0, 16
    ctx->pc = 0x21a148u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 16));
label_21a14c:
    // 0x21a14c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21a14cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a150:
    // 0x21a150: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x21a150u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
label_21a154:
    // 0x21a154: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21a154u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a158:
    // 0x21a158: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21a158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21a15c:
    // 0x21a15c: 0xc0602c8  jal         func_180B20
label_21a160:
    if (ctx->pc == 0x21A160u) {
        ctx->pc = 0x21A160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A15Cu;
        // 0x21a160: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A164u;
        goto label_21a164;
    }
    ctx->pc = 0x21A15Cu;
    SET_GPR_U32(ctx, 31, 0x21A164u);
    ctx->pc = 0x21A160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A15Cu;
    // 0x21a160: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180B20u, 0x21A15Cu, 0x21A164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A164u;
label_21a164:
    // 0x21a164: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x21a164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21a168:
    // 0x21a168: 0x26070018  addiu       $a3, $s0, 0x18
    ctx->pc = 0x21a168u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_21a16c:
    // 0x21a16c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21a16cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21a170:
    // 0x21a170: 0x27a6008e  addiu       $a2, $sp, 0x8E
    ctx->pc = 0x21a170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 142));
label_21a174:
    // 0x21a174: 0xc060390  jal         func_180E40
label_21a178:
    if (ctx->pc == 0x21A178u) {
        ctx->pc = 0x21A178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A174u;
        // 0x21a178: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A17Cu;
        goto label_21a17c;
    }
    ctx->pc = 0x21A174u;
    SET_GPR_U32(ctx, 31, 0x21A17Cu);
    ctx->pc = 0x21A178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A174u;
    // 0x21a178: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180E40u, 0x21A174u, 0x21A17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A17Cu;
label_21a17c:
    // 0x21a17c: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x21a17cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_21a180:
    // 0x21a180: 0x24638c90  addiu       $v1, $v1, -0x7370
    ctx->pc = 0x21a180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937744));
label_21a184:
    // 0x21a184: 0x719821  addu        $s3, $v1, $s1
    ctx->pc = 0x21a184u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_21a188:
    // 0x21a188: 0xfe620000  sd          $v0, 0x0($s3)
    ctx->pc = 0x21a188u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 2));
label_21a18c:
    // 0x21a18c: 0xde640000  ld          $a0, 0x0($s3)
    ctx->pc = 0x21a18cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 0)));
label_21a190:
    // 0x21a190: 0xc06063c  jal         func_1818F0
label_21a194:
    if (ctx->pc == 0x21A194u) {
        ctx->pc = 0x21A194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A190u;
        // 0x21a194: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A198u;
        goto label_21a198;
    }
    ctx->pc = 0x21A190u;
    SET_GPR_U32(ctx, 31, 0x21A198u);
    ctx->pc = 0x21A194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A190u;
    // 0x21a194: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1818F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1818F0u, 0x21A190u, 0x21A198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A198u;
label_21a198:
    // 0x21a198: 0xfe620000  sd          $v0, 0x0($s3)
    ctx->pc = 0x21a198u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 2));
label_21a19c:
    // 0x21a19c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21a19cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21a1a0:
    // 0x21a1a0: 0x87b3008e  lh          $s3, 0x8E($sp)
    ctx->pc = 0x21a1a0u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 142)));
label_21a1a4:
    // 0x21a1a4: 0x2a02000d  slti        $v0, $s0, 0xD
    ctx->pc = 0x21a1a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)13) ? 1 : 0);
label_21a1a8:
    // 0x21a1a8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_21a1ac:
    if (ctx->pc == 0x21A1ACu) {
        ctx->pc = 0x21A1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A1A8u;
        // 0x21a1ac: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A1B0u;
        goto label_21a1b0;
    }
    ctx->pc = 0x21A1A8u;
    {
        const bool branch_taken_0x21a1a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A1A8u;
        // 0x21a1ac: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a1a8) {
            ctx->pc = 0x21A158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a158;
        }
    }
    ctx->pc = 0x21A1B0u;
label_21a1b0:
    // 0x21a1b0: 0xc070038  jal         func_1C00E0
label_21a1b4:
    if (ctx->pc == 0x21A1B4u) {
        ctx->pc = 0x21A1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A1B0u;
        // 0x21a1b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A1B8u;
        goto label_21a1b8;
    }
    ctx->pc = 0x21A1B0u;
    SET_GPR_U32(ctx, 31, 0x21A1B8u);
    ctx->pc = 0x21A1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A1B0u;
    // 0x21a1b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x21A1B8u;
label_21a1b8:
    // 0x21a1b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21a1b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a1bc:
    // 0x21a1bc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x21a1bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a1c0:
    // 0x21a1c0: 0x278292b0  addiu       $v0, $gp, -0x6D50
    ctx->pc = 0x21a1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939312));
label_21a1c4:
    // 0x21a1c4: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x21a1c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_21a1c8:
    // 0x21a1c8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x21a1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21a1cc:
    // 0x21a1cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_21a1d0:
    if (ctx->pc == 0x21A1D0u) {
        ctx->pc = 0x21A1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A1CCu;
        // 0x21a1d0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A1D4u;
        goto label_21a1d4;
    }
    ctx->pc = 0x21A1CCu;
    {
        const bool branch_taken_0x21a1cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A1CCu;
        // 0x21a1d0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a1cc) {
            ctx->pc = 0x21A1E0u;
            goto label_21a1e0;
        }
    }
    ctx->pc = 0x21A1D4u;
label_21a1d4:
    // 0x21a1d4: 0xc070080  jal         func_1C0200
label_21a1d8:
    if (ctx->pc == 0x21A1D8u) {
        ctx->pc = 0x21A1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A1D4u;
        // 0x21a1d8: 0x24050150  addiu       $a1, $zero, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A1DCu;
        goto label_21a1dc;
    }
    ctx->pc = 0x21A1D4u;
    SET_GPR_U32(ctx, 31, 0x21A1DCu);
    ctx->pc = 0x21A1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A1D4u;
    // 0x21a1d8: 0x24050150  addiu       $a1, $zero, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x21A1DCu;
label_21a1dc:
    // 0x21a1dc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x21a1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_21a1e0:
    // 0x21a1e0: 0x278292a0  addiu       $v0, $gp, -0x6D60
    ctx->pc = 0x21a1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939296));
label_21a1e4:
    // 0x21a1e4: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x21a1e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_21a1e8:
    // 0x21a1e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x21a1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21a1ec:
    // 0x21a1ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_21a1f0:
    if (ctx->pc == 0x21A1F0u) {
        ctx->pc = 0x21A1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A1ECu;
        // 0x21a1f0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A1F4u;
        goto label_21a1f4;
    }
    ctx->pc = 0x21A1ECu;
    {
        const bool branch_taken_0x21a1ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A1ECu;
        // 0x21a1f0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a1ec) {
            ctx->pc = 0x21A200u;
            goto label_21a200;
        }
    }
    ctx->pc = 0x21A1F4u;
label_21a1f4:
    // 0x21a1f4: 0xc070080  jal         func_1C0200
label_21a1f8:
    if (ctx->pc == 0x21A1F8u) {
        ctx->pc = 0x21A1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A1F4u;
        // 0x21a1f8: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A1FCu;
        goto label_21a1fc;
    }
    ctx->pc = 0x21A1F4u;
    SET_GPR_U32(ctx, 31, 0x21A1FCu);
    ctx->pc = 0x21A1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A1F4u;
    // 0x21a1f8: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x21A1FCu;
label_21a1fc:
    // 0x21a1fc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x21a1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_21a200:
    // 0x21a200: 0x27829298  addiu       $v0, $gp, -0x6D68
    ctx->pc = 0x21a200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939288));
label_21a204:
    // 0x21a204: 0x538821  addu        $s1, $v0, $s3
    ctx->pc = 0x21a204u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_21a208:
    // 0x21a208: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x21a208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21a20c:
    // 0x21a20c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_21a210:
    if (ctx->pc == 0x21A210u) {
        ctx->pc = 0x21A210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A20Cu;
        // 0x21a210: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A214u;
        goto label_21a214;
    }
    ctx->pc = 0x21A20Cu;
    {
        const bool branch_taken_0x21a20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A20Cu;
        // 0x21a210: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a20c) {
            ctx->pc = 0x21A220u;
            goto label_21a220;
        }
    }
    ctx->pc = 0x21A214u;
label_21a214:
    // 0x21a214: 0xc070080  jal         func_1C0200
label_21a218:
    if (ctx->pc == 0x21A218u) {
        ctx->pc = 0x21A218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A214u;
        // 0x21a218: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A21Cu;
        goto label_21a21c;
    }
    ctx->pc = 0x21A214u;
    SET_GPR_U32(ctx, 31, 0x21A21Cu);
    ctx->pc = 0x21A218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A214u;
    // 0x21a218: 0x240500b0  addiu       $a1, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x21A21Cu;
label_21a21c:
    // 0x21a21c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x21a21cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_21a220:
    // 0x21a220: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21a220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a224:
    // 0x21a224: 0x10000010  b           . + 4 + (0x10 << 2)
label_21a228:
    if (ctx->pc == 0x21A228u) {
        ctx->pc = 0x21A228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A224u;
        // 0x21a228: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A22Cu;
        goto label_21a22c;
    }
    ctx->pc = 0x21A224u;
    {
        const bool branch_taken_0x21a224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A224u;
        // 0x21a228: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a224) {
            ctx->pc = 0x21A268u;
            goto label_21a268;
        }
    }
    ctx->pc = 0x21A22Cu;
label_21a22c:
    // 0x21a22c: 0x0  nop
    ctx->pc = 0x21a22cu;
    // NOP
label_21a230:
    // 0x21a230: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x21a230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_21a234:
    // 0x21a234: 0x24428c70  addiu       $v0, $v0, -0x7390
    ctx->pc = 0x21a234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937712));
label_21a238:
    // 0x21a238: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x21a238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_21a23c:
    // 0x21a23c: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x21a23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_21a240:
    // 0x21a240: 0x52a021  addu        $s4, $v0, $s2
    ctx->pc = 0x21a240u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_21a244:
    // 0x21a244: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x21a244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_21a248:
    // 0x21a248: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_21a24c:
    if (ctx->pc == 0x21A24Cu) {
        ctx->pc = 0x21A24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A248u;
        // 0x21a24c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A250u;
        goto label_21a250;
    }
    ctx->pc = 0x21A248u;
    {
        const bool branch_taken_0x21a248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A248u;
        // 0x21a24c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a248) {
            ctx->pc = 0x21A25Cu;
            goto label_21a25c;
        }
    }
    ctx->pc = 0x21A250u;
label_21a250:
    // 0x21a250: 0xc070080  jal         func_1C0200
label_21a254:
    if (ctx->pc == 0x21A254u) {
        ctx->pc = 0x21A254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A250u;
        // 0x21a254: 0x240509a0  addiu       $a1, $zero, 0x9A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A258u;
        goto label_21a258;
    }
    ctx->pc = 0x21A250u;
    SET_GPR_U32(ctx, 31, 0x21A258u);
    ctx->pc = 0x21A254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A250u;
    // 0x21a254: 0x240509a0  addiu       $a1, $zero, 0x9A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x21A258u;
label_21a258:
    // 0x21a258: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x21a258u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_21a25c:
    // 0x21a25c: 0x0  nop
    ctx->pc = 0x21a25cu;
    // NOP
label_21a260:
    // 0x21a260: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x21a260u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_21a264:
    // 0x21a264: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21a264u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_21a268:
    // 0x21a268: 0x8f8392b8  lw          $v1, -0x6D48($gp)
    ctx->pc = 0x21a268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
label_21a26c:
    // 0x21a26c: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x21a26cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_21a270:
    // 0x21a270: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_21a274:
    if (ctx->pc == 0x21A274u) {
        ctx->pc = 0x21A278u;
        goto label_21a278;
    }
    ctx->pc = 0x21A270u;
    {
        const bool branch_taken_0x21a270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a270) {
            ctx->pc = 0x21A22Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a22c;
        }
    }
    ctx->pc = 0x21A278u;
label_21a278:
    // 0x21a278: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21a278u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21a27c:
    // 0x21a27c: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x21a27cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_21a280:
    // 0x21a280: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
label_21a284:
    if (ctx->pc == 0x21A284u) {
        ctx->pc = 0x21A284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A280u;
        // 0x21a284: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A288u;
        goto label_21a288;
    }
    ctx->pc = 0x21A280u;
    {
        const bool branch_taken_0x21a280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A280u;
        // 0x21a284: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a280) {
            ctx->pc = 0x21A1C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a1c0;
        }
    }
    ctx->pc = 0x21A288u;
label_21a288:
    // 0x21a288: 0xaf8092c0  sw          $zero, -0x6D40($gp)
    ctx->pc = 0x21a288u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939328), GPR_U32(ctx, 0));
label_21a28c:
    // 0x21a28c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21a28cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a290:
    // 0x21a290: 0xaf8392bc  sw          $v1, -0x6D44($gp)
    ctx->pc = 0x21a290u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939324), GPR_U32(ctx, 3));
label_21a294:
    // 0x21a294: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21a294u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a298:
    // 0x21a298: 0xaf8392ac  sw          $v1, -0x6D54($gp)
    ctx->pc = 0x21a298u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939308), GPR_U32(ctx, 3));
label_21a29c:
    // 0x21a29c: 0xaf8092a8  sw          $zero, -0x6D58($gp)
    ctx->pc = 0x21a29cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939304), GPR_U32(ctx, 0));
label_21a2a0:
    // 0x21a2a0: 0x278292b0  addiu       $v0, $gp, -0x6D50
    ctx->pc = 0x21a2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939312));
label_21a2a4:
    // 0x21a2a4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x21a2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_21a2a8:
    // 0x21a2a8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x21a2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_21a2ac:
    // 0x21a2ac: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x21a2acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21a2b0:
    // 0x21a2b0: 0xc05e234  jal         func_1788D0
label_21a2b4:
    if (ctx->pc == 0x21A2B4u) {
        ctx->pc = 0x21A2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A2B0u;
        // 0x21a2b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A2B8u;
        goto label_21a2b8;
    }
    ctx->pc = 0x21A2B0u;
    SET_GPR_U32(ctx, 31, 0x21A2B8u);
    ctx->pc = 0x21A2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A2B0u;
    // 0x21a2b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x21A2B0u, 0x21A2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A2B8u;
label_21a2b8:
    // 0x21a2b8: 0x240201c0  addiu       $v0, $zero, 0x1C0
    ctx->pc = 0x21a2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_21a2bc:
    // 0x21a2bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x21a2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21a2c0:
    // 0x21a2c0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x21a2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_21a2c4:
    // 0x21a2c4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21a2c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21a2c8:
    // 0x21a2c8: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x21a2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_21a2cc:
    // 0x21a2cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21a2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21a2d0:
    // 0x21a2d0: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x21a2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_21a2d4:
    // 0x21a2d4: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x21a2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_21a2d8:
    // 0x21a2d8: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x21a2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_21a2dc:
    // 0x21a2dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21a2dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a2e0:
    // 0x21a2e0: 0xdc258c90  ld          $a1, -0x7370($at)
    ctx->pc = 0x21a2e0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937744)));
label_21a2e4:
    // 0x21a2e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21a2e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a2e8:
    // 0x21a2e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21a2e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a2ec:
    // 0x21a2ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21a2ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a2f0:
    // 0x21a2f0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x21a2f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a2f4:
    // 0x21a2f4: 0xc05de30  jal         func_1778C0
label_21a2f8:
    if (ctx->pc == 0x21A2F8u) {
        ctx->pc = 0x21A2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A2F4u;
        // 0x21a2f8: 0x240b0280  addiu       $t3, $zero, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A2FCu;
        goto label_21a2fc;
    }
    ctx->pc = 0x21A2F4u;
    SET_GPR_U32(ctx, 31, 0x21A2FCu);
    ctx->pc = 0x21A2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A2F4u;
    // 0x21a2f8: 0x240b0280  addiu       $t3, $zero, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x21A2F4u, 0x21A2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A2FCu;
label_21a2fc:
    // 0x21a2fc: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x21a2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_21a300:
    // 0x21a300: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21a300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21a304:
    // 0x21a304: 0xffa60000  sd          $a2, 0x0($sp)
    ctx->pc = 0x21a304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 6));
label_21a308:
    // 0x21a308: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21a308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21a30c:
    // 0x21a30c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x21a30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_21a310:
    // 0x21a310: 0x260400b0  addiu       $a0, $s0, 0xB0
    ctx->pc = 0x21a310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_21a314:
    // 0x21a314: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21a314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21a318:
    // 0x21a318: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x21a318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_21a31c:
    // 0x21a31c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x21a31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_21a320:
    // 0x21a320: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21a320u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a324:
    // 0x21a324: 0xdc258ce8  ld          $a1, -0x7318($at)
    ctx->pc = 0x21a324u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937832)));
label_21a328:
    // 0x21a328: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21a328u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a32c:
    // 0x21a32c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21a32cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a330:
    // 0x21a330: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x21a330u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a334:
    // 0x21a334: 0xc05de30  jal         func_1778C0
label_21a338:
    if (ctx->pc == 0x21A338u) {
        ctx->pc = 0x21A338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A334u;
        // 0x21a338: 0x240b0180  addiu       $t3, $zero, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A33Cu;
        goto label_21a33c;
    }
    ctx->pc = 0x21A334u;
    SET_GPR_U32(ctx, 31, 0x21A33Cu);
    ctx->pc = 0x21A338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A334u;
    // 0x21a338: 0x240b0180  addiu       $t3, $zero, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x21A334u, 0x21A33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A33Cu;
label_21a33c:
    // 0x21a33c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21a33cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_21a340:
    // 0x21a340: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x21a340u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_21a344:
    // 0x21a344: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
label_21a348:
    if (ctx->pc == 0x21A348u) {
        ctx->pc = 0x21A348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A344u;
        // 0x21a348: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A34Cu;
        goto label_21a34c;
    }
    ctx->pc = 0x21A344u;
    {
        const bool branch_taken_0x21a344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A344u;
        // 0x21a348: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a344) {
            ctx->pc = 0x21A2A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a2a0;
        }
    }
    ctx->pc = 0x21A34Cu;
label_21a34c:
    // 0x21a34c: 0xc086d18  jal         func_21B460
label_21a350:
    if (ctx->pc == 0x21A350u) {
        ctx->pc = 0x21A354u;
        goto label_21a354;
    }
    ctx->pc = 0x21A34Cu;
    SET_GPR_U32(ctx, 31, 0x21A354u);
    ctx->pc = 0x21B460u;
    { ctx->pc = 0x21b460; return; }
    ctx->pc = 0x21A354u;
label_21a354:
    // 0x21a354: 0xaf809290  sw          $zero, -0x6D70($gp)
    ctx->pc = 0x21a354u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939280), GPR_U32(ctx, 0));
label_21a358:
    // 0x21a358: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21a358u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a35c:
    // 0x21a35c: 0xaf80928c  sw          $zero, -0x6D74($gp)
    ctx->pc = 0x21a35cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939276), GPR_U32(ctx, 0));
label_21a360:
    // 0x21a360: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21a360u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a364:
    // 0x21a364: 0x27829298  addiu       $v0, $gp, -0x6D68
    ctx->pc = 0x21a364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939288));
label_21a368:
    // 0x21a368: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x21a368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_21a36c:
    // 0x21a36c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x21a36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_21a370:
    // 0x21a370: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x21a370u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21a374:
    // 0x21a374: 0xc05e234  jal         func_1788D0
label_21a378:
    if (ctx->pc == 0x21A378u) {
        ctx->pc = 0x21A378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A374u;
        // 0x21a378: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A37Cu;
        goto label_21a37c;
    }
    ctx->pc = 0x21A374u;
    SET_GPR_U32(ctx, 31, 0x21A37Cu);
    ctx->pc = 0x21A378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A374u;
    // 0x21a378: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x21A374u, 0x21A37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A37Cu;
label_21a37c:
    // 0x21a37c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x21a37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_21a380:
    // 0x21a380: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21a380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21a384:
    // 0x21a384: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x21a384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_21a388:
    // 0x21a388: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x21a388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_21a38c:
    // 0x21a38c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21a38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21a390:
    // 0x21a390: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x21a390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_21a394:
    // 0x21a394: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x21a394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_21a398:
    // 0x21a398: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x21a398u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_21a39c:
    // 0x21a39c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21a39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21a3a0:
    // 0x21a3a0: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x21a3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_21a3a4:
    // 0x21a3a4: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x21a3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_21a3a8:
    // 0x21a3a8: 0x240803e8  addiu       $t0, $zero, 0x3E8
    ctx->pc = 0x21a3a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_21a3ac:
    // 0x21a3ac: 0xdc258ca0  ld          $a1, -0x7360($at)
    ctx->pc = 0x21a3acu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937760)));
label_21a3b0:
    // 0x21a3b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21a3b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a3b4:
    // 0x21a3b4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x21a3b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a3b8:
    // 0x21a3b8: 0xc05de30  jal         func_1778C0
label_21a3bc:
    if (ctx->pc == 0x21A3BCu) {
        ctx->pc = 0x21A3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A3B8u;
        // 0x21a3bc: 0x240b00f8  addiu       $t3, $zero, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A3C0u;
        goto label_21a3c0;
    }
    ctx->pc = 0x21A3B8u;
    SET_GPR_U32(ctx, 31, 0x21A3C0u);
    ctx->pc = 0x21A3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A3B8u;
    // 0x21a3bc: 0x240b00f8  addiu       $t3, $zero, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x21A3B8u, 0x21A3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A3C0u;
label_21a3c0:
    // 0x21a3c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21a3c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21a3c4:
    // 0x21a3c4: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x21a3c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_21a3c8:
    // 0x21a3c8: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_21a3cc:
    if (ctx->pc == 0x21A3CCu) {
        ctx->pc = 0x21A3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A3C8u;
        // 0x21a3cc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A3D0u;
        goto label_21a3d0;
    }
    ctx->pc = 0x21A3C8u;
    {
        const bool branch_taken_0x21a3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A3C8u;
        // 0x21a3cc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a3c8) {
            ctx->pc = 0x21A364u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a364;
        }
    }
    ctx->pc = 0x21A3D0u;
label_21a3d0:
    // 0x21a3d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21a3d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a3d4:
    // 0x21a3d4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21a3d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a3d8:
    // 0x21a3d8: 0x278292a0  addiu       $v0, $gp, -0x6D60
    ctx->pc = 0x21a3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939296));
label_21a3dc:
    // 0x21a3dc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x21a3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_21a3e0:
    // 0x21a3e0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x21a3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_21a3e4:
    // 0x21a3e4: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x21a3e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21a3e8:
    // 0x21a3e8: 0xc05e234  jal         func_1788D0
label_21a3ec:
    if (ctx->pc == 0x21A3ECu) {
        ctx->pc = 0x21A3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A3E8u;
        // 0x21a3ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A3F0u;
        goto label_21a3f0;
    }
    ctx->pc = 0x21A3E8u;
    SET_GPR_U32(ctx, 31, 0x21A3F0u);
    ctx->pc = 0x21A3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A3E8u;
    // 0x21a3ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x21A3E8u, 0x21A3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A3F0u;
label_21a3f0:
    // 0x21a3f0: 0x240201c0  addiu       $v0, $zero, 0x1C0
    ctx->pc = 0x21a3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_21a3f4:
    // 0x21a3f4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21a3f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21a3f8:
    // 0x21a3f8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x21a3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_21a3fc:
    // 0x21a3fc: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x21a3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_21a400:
    // 0x21a400: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21a400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21a404:
    // 0x21a404: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21a404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a408:
    // 0x21a408: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x21a408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_21a40c:
    // 0x21a40c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21a40cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a410:
    // 0x21a410: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21a410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21a414:
    // 0x21a414: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x21a414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_21a418:
    // 0x21a418: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x21a418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_21a41c:
    // 0x21a41c: 0x240803e8  addiu       $t0, $zero, 0x3E8
    ctx->pc = 0x21a41cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_21a420:
    // 0x21a420: 0xdc258c98  ld          $a1, -0x7368($at)
    ctx->pc = 0x21a420u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294937752)));
label_21a424:
    // 0x21a424: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21a424u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a428:
    // 0x21a428: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x21a428u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a42c:
    // 0x21a42c: 0xc05de30  jal         func_1778C0
label_21a430:
    if (ctx->pc == 0x21A430u) {
        ctx->pc = 0x21A430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A42Cu;
        // 0x21a430: 0x240b0050  addiu       $t3, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A434u;
        goto label_21a434;
    }
    ctx->pc = 0x21A42Cu;
    SET_GPR_U32(ctx, 31, 0x21A434u);
    ctx->pc = 0x21A430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A42Cu;
    // 0x21a430: 0x240b0050  addiu       $t3, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x21A42Cu, 0x21A434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A434u;
label_21a434:
    // 0x21a434: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21a434u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21a438:
    // 0x21a438: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x21a438u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_21a43c:
    // 0x21a43c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_21a440:
    if (ctx->pc == 0x21A440u) {
        ctx->pc = 0x21A440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A43Cu;
        // 0x21a440: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A444u;
        goto label_21a444;
    }
    ctx->pc = 0x21A43Cu;
    {
        const bool branch_taken_0x21a43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A43Cu;
        // 0x21a440: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a43c) {
            ctx->pc = 0x21A3D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a3d8;
        }
    }
    ctx->pc = 0x21A444u;
label_21a444:
    // 0x21a444: 0xc077fc0  jal         func_1DFF00
label_21a448:
    if (ctx->pc == 0x21A448u) {
        ctx->pc = 0x21A44Cu;
        goto label_21a44c;
    }
    ctx->pc = 0x21A444u;
    SET_GPR_U32(ctx, 31, 0x21A44Cu);
    ctx->pc = 0x1DFF00u;
    { ctx->pc = 0x1dff00; return; }
    ctx->pc = 0x21A44Cu;
label_21a44c:
    // 0x21a44c: 0xc07a0e8  jal         func_1E83A0
label_21a450:
    if (ctx->pc == 0x21A450u) {
        ctx->pc = 0x21A454u;
        goto label_21a454;
    }
    ctx->pc = 0x21A44Cu;
    SET_GPR_U32(ctx, 31, 0x21A454u);
    ctx->pc = 0x1E83A0u;
    { ctx->pc = 0x1e83a0; return; }
    ctx->pc = 0x21A454u;
label_21a454:
    // 0x21a454: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x21a454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_21a458:
    // 0x21a458: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x21a458u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_21a45c:
    // 0x21a45c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x21a45cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_21a460:
    // 0x21a460: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x21a460u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_21a464:
    // 0x21a464: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x21a464u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_21a468:
    // 0x21a468: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x21a468u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21a46c:
    // 0x21a46c: 0x3e00008  jr          $ra
label_21a470:
    if (ctx->pc == 0x21A470u) {
        ctx->pc = 0x21A470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A46Cu;
        // 0x21a470: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A474u;
        goto label_21a474;
    }
    ctx->pc = 0x21A46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A46Cu;
        // 0x21a470: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A46Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A474u;
label_21a474:
    // 0x21a474: 0x0  nop
    ctx->pc = 0x21a474u;
    // NOP
label_21a478:
    // 0x21a478: 0x0  nop
    ctx->pc = 0x21a478u;
    // NOP
label_21a47c:
    // 0x21a47c: 0x0  nop
    ctx->pc = 0x21a47cu;
    // NOP
label_21a480:
    // 0x21a480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21a480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_21a484:
    // 0x21a484: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x21a484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_21a488:
    // 0x21a488: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21a488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_21a48c:
    // 0x21a48c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21a48cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a490:
    // 0x21a490: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21a490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_21a494:
    // 0x21a494: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21a494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a498:
    // 0x21a498: 0xc04e188  jal         func_138620
label_21a49c:
    if (ctx->pc == 0x21A49Cu) {
        ctx->pc = 0x21A49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A498u;
        // 0x21a49c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A4A0u;
        goto label_21a4a0;
    }
    ctx->pc = 0x21A498u;
    SET_GPR_U32(ctx, 31, 0x21A4A0u);
    ctx->pc = 0x21A49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A498u;
    // 0x21a49c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138620u, 0x21A498u, 0x21A4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A4A0u;
label_21a4a0:
    // 0x21a4a0: 0xc04e198  jal         func_138660
label_21a4a4:
    if (ctx->pc == 0x21A4A4u) {
        ctx->pc = 0x21A4A8u;
        goto label_21a4a8;
    }
    ctx->pc = 0x21A4A0u;
    SET_GPR_U32(ctx, 31, 0x21A4A8u);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x21A4A0u, 0x21A4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A4A8u;
label_21a4a8:
    // 0x21a4a8: 0x144000b7  bnez        $v0, . + 4 + (0xB7 << 2)
label_21a4ac:
    if (ctx->pc == 0x21A4ACu) {
        ctx->pc = 0x21A4B0u;
        goto label_21a4b0;
    }
    ctx->pc = 0x21A4A8u;
    {
        const bool branch_taken_0x21a4a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a4a8) {
            ctx->pc = 0x21A788u;
            { ctx->pc = 0x21a788; return; }
        }
    }
    ctx->pc = 0x21A4B0u;
label_21a4b0:
    // 0x21a4b0: 0x8f8392ac  lw          $v1, -0x6D54($gp)
    ctx->pc = 0x21a4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939308)));
label_21a4b4:
    // 0x21a4b4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21a4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_21a4b8:
    // 0x21a4b8: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_21a4bc:
    if (ctx->pc == 0x21A4BCu) {
        ctx->pc = 0x21A4C0u;
        goto label_21a4c0;
    }
    ctx->pc = 0x21A4B8u;
    {
        const bool branch_taken_0x21a4b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x21a4b8) {
            ctx->pc = 0x21A4F0u;
            goto label_21a4f0;
        }
    }
    ctx->pc = 0x21A4C0u;
label_21a4c0:
    // 0x21a4c0: 0x8f8292a8  lw          $v0, -0x6D58($gp)
    ctx->pc = 0x21a4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939304)));
label_21a4c4:
    // 0x21a4c4: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x21a4c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_21a4c8:
    // 0x21a4c8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_21a4cc:
    if (ctx->pc == 0x21A4CCu) {
        ctx->pc = 0x21A4D0u;
        goto label_21a4d0;
    }
    ctx->pc = 0x21A4C8u;
    {
        const bool branch_taken_0x21a4c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a4c8) {
            ctx->pc = 0x21A4F0u;
            goto label_21a4f0;
        }
    }
    ctx->pc = 0x21A4D0u;
label_21a4d0:
    // 0x21a4d0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x21a4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_21a4d4:
    // 0x21a4d4: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x21a4d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_21a4d8:
    // 0x21a4d8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_21a4dc:
    if (ctx->pc == 0x21A4DCu) {
        ctx->pc = 0x21A4E0u;
        goto label_21a4e0;
    }
    ctx->pc = 0x21A4D8u;
    {
        const bool branch_taken_0x21a4d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a4d8) {
            ctx->pc = 0x21A4E8u;
            goto label_21a4e8;
        }
    }
    ctx->pc = 0x21A4E0u;
label_21a4e0:
    // 0x21a4e0: 0x10000003  b           . + 4 + (0x3 << 2)
label_21a4e4:
    if (ctx->pc == 0x21A4E4u) {
        ctx->pc = 0x21A4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A4E0u;
        // 0x21a4e4: 0xaf8292a8  sw          $v0, -0x6D58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A4E8u;
        goto label_21a4e8;
    }
    ctx->pc = 0x21A4E0u;
    {
        const bool branch_taken_0x21a4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A4E0u;
        // 0x21a4e4: 0xaf8292a8  sw          $v0, -0x6D58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a4e0) {
            ctx->pc = 0x21A4F0u;
            goto label_21a4f0;
        }
    }
    ctx->pc = 0x21A4E8u;
label_21a4e8:
    // 0x21a4e8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x21a4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_21a4ec:
    // 0x21a4ec: 0xaf8292a8  sw          $v0, -0x6D58($gp)
    ctx->pc = 0x21a4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939304), GPR_U32(ctx, 2));
label_21a4f0:
    // 0x21a4f0: 0x8f849288  lw          $a0, -0x6D78($gp)
    ctx->pc = 0x21a4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939272)));
label_21a4f4:
    // 0x21a4f4: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
label_21a4f8:
    if (ctx->pc == 0x21A4F8u) {
        ctx->pc = 0x21A4FCu;
        goto label_21a4fc;
    }
    ctx->pc = 0x21A4F4u;
    {
        const bool branch_taken_0x21a4f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a4f4) {
            ctx->pc = 0x21A564u;
            { ctx->pc = 0x21a564; return; }
        }
    }
    ctx->pc = 0x21A4FCu;
label_21a4fc:
    // 0x21a4fc: 0x8f829280  lw          $v0, -0x6D80($gp)
    ctx->pc = 0x21a4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939264)));
label_21a500:
    // 0x21a500: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x21a500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_21a504:
    // 0x21a504: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_21a508:
    if (ctx->pc == 0x21A508u) {
        ctx->pc = 0x21A508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A504u;
        // 0x21a508: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A50Cu;
        goto label_21a50c;
    }
    ctx->pc = 0x21A504u;
    {
        const bool branch_taken_0x21a504 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x21A508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A504u;
        // 0x21a508: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a504) {
            ctx->pc = 0x21A518u;
            goto label_21a518;
        }
    }
    ctx->pc = 0x21A50Cu;
label_21a50c:
    // 0x21a50c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_21a510:
    if (ctx->pc == 0x21A510u) {
        ctx->pc = 0x21A514u;
        goto label_21a514;
    }
    ctx->pc = 0x21A50Cu;
    {
        const bool branch_taken_0x21a50c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a50c) {
            ctx->pc = 0x21A518u;
            goto label_21a518;
        }
    }
    ctx->pc = 0x21A514u;
label_21a514:
    // 0x21a514: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x21a514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
label_21a518:
    // 0x21a518: 0xaf829280  sw          $v0, -0x6D80($gp)
    ctx->pc = 0x21a518u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939264), GPR_U32(ctx, 2));
label_21a51c:
    // 0x21a51c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21a51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21a520:
    // 0x21a520: 0x14820010  bne         $a0, $v0, . + 4 + (0x10 << 2)
label_21a524:
    if (ctx->pc == 0x21A524u) {
        ctx->pc = 0x21A528u;
        goto label_21a528;
    }
    ctx->pc = 0x21A520u;
    {
        const bool branch_taken_0x21a520 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x21a520) {
            ctx->pc = 0x21A564u;
            { ctx->pc = 0x21a564; return; }
        }
    }
    ctx->pc = 0x21A528u;
label_21a528:
    // 0x21a528: 0x8f839284  lw          $v1, -0x6D7C($gp)
    ctx->pc = 0x21a528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939268)));
label_21a52c:
    // 0x21a52c: 0x8f8292b8  lw          $v0, -0x6D48($gp)
    ctx->pc = 0x21a52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
label_21a530:
    // 0x21a530: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21a530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_21a534:
    // 0x21a534: 0xaf839284  sw          $v1, -0x6D7C($gp)
    ctx->pc = 0x21a534u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939268), GPR_U32(ctx, 3));
label_21a538:
    // 0x21a538: 0x8f849284  lw          $a0, -0x6D7C($gp)
    ctx->pc = 0x21a538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939268)));
label_21a53c:
    // 0x21a53c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x21a53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_21a540:
    // 0x21a540: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x21a540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_21a544:
    // 0x21a544: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21a544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21a548:
    // 0x21a548: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21a548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_21a54c:
    // 0x21a54c: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x21a54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_21a550:
    // 0x21a550: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x21a550u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21a554:
    // 0x21a554: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21a558u;
    return;
}

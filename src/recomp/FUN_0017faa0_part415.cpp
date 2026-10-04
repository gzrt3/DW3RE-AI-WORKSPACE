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


void FUN_0017faa0_part415(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x249d00u: goto label_249d00;
        case 0x249d04u: goto label_249d04;
        case 0x249d08u: goto label_249d08;
        case 0x249d0cu: goto label_249d0c;
        case 0x249d10u: goto label_249d10;
        case 0x249d14u: goto label_249d14;
        case 0x249d18u: goto label_249d18;
        case 0x249d1cu: goto label_249d1c;
        case 0x249d20u: goto label_249d20;
        case 0x249d24u: goto label_249d24;
        case 0x249d28u: goto label_249d28;
        case 0x249d2cu: goto label_249d2c;
        case 0x249d30u: goto label_249d30;
        case 0x249d34u: goto label_249d34;
        case 0x249d38u: goto label_249d38;
        case 0x249d3cu: goto label_249d3c;
        case 0x249d40u: goto label_249d40;
        case 0x249d44u: goto label_249d44;
        case 0x249d48u: goto label_249d48;
        case 0x249d4cu: goto label_249d4c;
        case 0x249d50u: goto label_249d50;
        case 0x249d54u: goto label_249d54;
        case 0x249d58u: goto label_249d58;
        case 0x249d5cu: goto label_249d5c;
        case 0x249d60u: goto label_249d60;
        case 0x249d64u: goto label_249d64;
        case 0x249d68u: goto label_249d68;
        case 0x249d6cu: goto label_249d6c;
        case 0x249d70u: goto label_249d70;
        case 0x249d74u: goto label_249d74;
        case 0x249d78u: goto label_249d78;
        case 0x249d7cu: goto label_249d7c;
        case 0x249d80u: goto label_249d80;
        case 0x249d84u: goto label_249d84;
        case 0x249d88u: goto label_249d88;
        case 0x249d8cu: goto label_249d8c;
        case 0x249d90u: goto label_249d90;
        case 0x249d94u: goto label_249d94;
        case 0x249d98u: goto label_249d98;
        case 0x249d9cu: goto label_249d9c;
        case 0x249da0u: goto label_249da0;
        case 0x249da4u: goto label_249da4;
        case 0x249da8u: goto label_249da8;
        case 0x249dacu: goto label_249dac;
        case 0x249db0u: goto label_249db0;
        case 0x249db4u: goto label_249db4;
        case 0x249db8u: goto label_249db8;
        case 0x249dbcu: goto label_249dbc;
        case 0x249dc0u: goto label_249dc0;
        case 0x249dc4u: goto label_249dc4;
        case 0x249dc8u: goto label_249dc8;
        case 0x249dccu: goto label_249dcc;
        case 0x249dd0u: goto label_249dd0;
        case 0x249dd4u: goto label_249dd4;
        case 0x249dd8u: goto label_249dd8;
        case 0x249ddcu: goto label_249ddc;
        case 0x249de0u: goto label_249de0;
        case 0x249de4u: goto label_249de4;
        case 0x249de8u: goto label_249de8;
        case 0x249decu: goto label_249dec;
        case 0x249df0u: goto label_249df0;
        case 0x249df4u: goto label_249df4;
        case 0x249df8u: goto label_249df8;
        case 0x249dfcu: goto label_249dfc;
        case 0x249e00u: goto label_249e00;
        case 0x249e04u: goto label_249e04;
        case 0x249e08u: goto label_249e08;
        case 0x249e0cu: goto label_249e0c;
        case 0x249e10u: goto label_249e10;
        case 0x249e14u: goto label_249e14;
        case 0x249e18u: goto label_249e18;
        case 0x249e1cu: goto label_249e1c;
        case 0x249e20u: goto label_249e20;
        case 0x249e24u: goto label_249e24;
        case 0x249e28u: goto label_249e28;
        case 0x249e2cu: goto label_249e2c;
        case 0x249e30u: goto label_249e30;
        case 0x249e34u: goto label_249e34;
        case 0x249e38u: goto label_249e38;
        case 0x249e3cu: goto label_249e3c;
        case 0x249e40u: goto label_249e40;
        case 0x249e44u: goto label_249e44;
        case 0x249e48u: goto label_249e48;
        case 0x249e4cu: goto label_249e4c;
        case 0x249e50u: goto label_249e50;
        case 0x249e54u: goto label_249e54;
        case 0x249e58u: goto label_249e58;
        case 0x249e5cu: goto label_249e5c;
        case 0x249e60u: goto label_249e60;
        case 0x249e64u: goto label_249e64;
        case 0x249e68u: goto label_249e68;
        case 0x249e6cu: goto label_249e6c;
        case 0x249e70u: goto label_249e70;
        case 0x249e74u: goto label_249e74;
        case 0x249e78u: goto label_249e78;
        case 0x249e7cu: goto label_249e7c;
        case 0x249e80u: goto label_249e80;
        case 0x249e84u: goto label_249e84;
        case 0x249e88u: goto label_249e88;
        case 0x249e8cu: goto label_249e8c;
        case 0x249e90u: goto label_249e90;
        case 0x249e94u: goto label_249e94;
        case 0x249e98u: goto label_249e98;
        case 0x249e9cu: goto label_249e9c;
        case 0x249ea0u: goto label_249ea0;
        case 0x249ea4u: goto label_249ea4;
        case 0x249ea8u: goto label_249ea8;
        case 0x249eacu: goto label_249eac;
        case 0x249eb0u: goto label_249eb0;
        case 0x249eb4u: goto label_249eb4;
        case 0x249eb8u: goto label_249eb8;
        case 0x249ebcu: goto label_249ebc;
        case 0x249ec0u: goto label_249ec0;
        case 0x249ec4u: goto label_249ec4;
        case 0x249ec8u: goto label_249ec8;
        case 0x249eccu: goto label_249ecc;
        case 0x249ed0u: goto label_249ed0;
        case 0x249ed4u: goto label_249ed4;
        case 0x249ed8u: goto label_249ed8;
        case 0x249edcu: goto label_249edc;
        case 0x249ee0u: goto label_249ee0;
        case 0x249ee4u: goto label_249ee4;
        case 0x249ee8u: goto label_249ee8;
        case 0x249eecu: goto label_249eec;
        case 0x249ef0u: goto label_249ef0;
        case 0x249ef4u: goto label_249ef4;
        case 0x249ef8u: goto label_249ef8;
        case 0x249efcu: goto label_249efc;
        case 0x249f00u: goto label_249f00;
        case 0x249f04u: goto label_249f04;
        case 0x249f08u: goto label_249f08;
        case 0x249f0cu: goto label_249f0c;
        case 0x249f10u: goto label_249f10;
        case 0x249f14u: goto label_249f14;
        case 0x249f18u: goto label_249f18;
        case 0x249f1cu: goto label_249f1c;
        case 0x249f20u: goto label_249f20;
        case 0x249f24u: goto label_249f24;
        case 0x249f28u: goto label_249f28;
        case 0x249f2cu: goto label_249f2c;
        case 0x249f30u: goto label_249f30;
        case 0x249f34u: goto label_249f34;
        case 0x249f38u: goto label_249f38;
        case 0x249f3cu: goto label_249f3c;
        case 0x249f40u: goto label_249f40;
        case 0x249f44u: goto label_249f44;
        case 0x249f48u: goto label_249f48;
        case 0x249f4cu: goto label_249f4c;
        case 0x249f50u: goto label_249f50;
        case 0x249f54u: goto label_249f54;
        case 0x249f58u: goto label_249f58;
        case 0x249f5cu: goto label_249f5c;
        case 0x249f60u: goto label_249f60;
        case 0x249f64u: goto label_249f64;
        case 0x249f68u: goto label_249f68;
        case 0x249f6cu: goto label_249f6c;
        case 0x249f70u: goto label_249f70;
        case 0x249f74u: goto label_249f74;
        case 0x249f78u: goto label_249f78;
        case 0x249f7cu: goto label_249f7c;
        case 0x249f80u: goto label_249f80;
        case 0x249f84u: goto label_249f84;
        case 0x249f88u: goto label_249f88;
        case 0x249f8cu: goto label_249f8c;
        case 0x249f90u: goto label_249f90;
        case 0x249f94u: goto label_249f94;
        case 0x249f98u: goto label_249f98;
        case 0x249f9cu: goto label_249f9c;
        case 0x249fa0u: goto label_249fa0;
        case 0x249fa4u: goto label_249fa4;
        case 0x249fa8u: goto label_249fa8;
        case 0x249facu: goto label_249fac;
        case 0x249fb0u: goto label_249fb0;
        case 0x249fb4u: goto label_249fb4;
        case 0x249fb8u: goto label_249fb8;
        case 0x249fbcu: goto label_249fbc;
        case 0x249fc0u: goto label_249fc0;
        case 0x249fc4u: goto label_249fc4;
        case 0x249fc8u: goto label_249fc8;
        case 0x249fccu: goto label_249fcc;
        case 0x249fd0u: goto label_249fd0;
        case 0x249fd4u: goto label_249fd4;
        case 0x249fd8u: goto label_249fd8;
        case 0x249fdcu: goto label_249fdc;
        case 0x249fe0u: goto label_249fe0;
        case 0x249fe4u: goto label_249fe4;
        case 0x249fe8u: goto label_249fe8;
        case 0x249fecu: goto label_249fec;
        case 0x249ff0u: goto label_249ff0;
        case 0x249ff4u: goto label_249ff4;
        case 0x249ff8u: goto label_249ff8;
        case 0x249ffcu: goto label_249ffc;
        case 0x24a000u: goto label_24a000;
        case 0x24a004u: goto label_24a004;
        case 0x24a008u: goto label_24a008;
        case 0x24a00cu: goto label_24a00c;
        case 0x24a010u: goto label_24a010;
        case 0x24a014u: goto label_24a014;
        case 0x24a018u: goto label_24a018;
        case 0x24a01cu: goto label_24a01c;
        case 0x24a020u: goto label_24a020;
        case 0x24a024u: goto label_24a024;
        case 0x24a028u: goto label_24a028;
        case 0x24a02cu: goto label_24a02c;
        case 0x24a030u: goto label_24a030;
        case 0x24a034u: goto label_24a034;
        case 0x24a038u: goto label_24a038;
        case 0x24a03cu: goto label_24a03c;
        case 0x24a040u: goto label_24a040;
        case 0x24a044u: goto label_24a044;
        case 0x24a048u: goto label_24a048;
        case 0x24a04cu: goto label_24a04c;
        case 0x24a050u: goto label_24a050;
        case 0x24a054u: goto label_24a054;
        case 0x24a058u: goto label_24a058;
        case 0x24a05cu: goto label_24a05c;
        case 0x24a060u: goto label_24a060;
        case 0x24a064u: goto label_24a064;
        case 0x24a068u: goto label_24a068;
        case 0x24a06cu: goto label_24a06c;
        case 0x24a070u: goto label_24a070;
        case 0x24a074u: goto label_24a074;
        case 0x24a078u: goto label_24a078;
        case 0x24a07cu: goto label_24a07c;
        case 0x24a080u: goto label_24a080;
        case 0x24a084u: goto label_24a084;
        case 0x24a088u: goto label_24a088;
        case 0x24a08cu: goto label_24a08c;
        case 0x24a090u: goto label_24a090;
        case 0x24a094u: goto label_24a094;
        case 0x24a098u: goto label_24a098;
        case 0x24a09cu: goto label_24a09c;
        case 0x24a0a0u: goto label_24a0a0;
        case 0x24a0a4u: goto label_24a0a4;
        case 0x24a0a8u: goto label_24a0a8;
        case 0x24a0acu: goto label_24a0ac;
        case 0x24a0b0u: goto label_24a0b0;
        case 0x24a0b4u: goto label_24a0b4;
        case 0x24a0b8u: goto label_24a0b8;
        case 0x24a0bcu: goto label_24a0bc;
        case 0x24a0c0u: goto label_24a0c0;
        case 0x24a0c4u: goto label_24a0c4;
        case 0x24a0c8u: goto label_24a0c8;
        case 0x24a0ccu: goto label_24a0cc;
        case 0x24a0d0u: goto label_24a0d0;
        case 0x24a0d4u: goto label_24a0d4;
        case 0x24a0d8u: goto label_24a0d8;
        case 0x24a0dcu: goto label_24a0dc;
        case 0x24a0e0u: goto label_24a0e0;
        case 0x24a0e4u: goto label_24a0e4;
        case 0x24a0e8u: goto label_24a0e8;
        case 0x24a0ecu: goto label_24a0ec;
        case 0x24a0f0u: goto label_24a0f0;
        case 0x24a0f4u: goto label_24a0f4;
        case 0x24a0f8u: goto label_24a0f8;
        case 0x24a0fcu: goto label_24a0fc;
        case 0x24a100u: goto label_24a100;
        case 0x24a104u: goto label_24a104;
        case 0x24a108u: goto label_24a108;
        case 0x24a10cu: goto label_24a10c;
        case 0x24a110u: goto label_24a110;
        case 0x24a114u: goto label_24a114;
        case 0x24a118u: goto label_24a118;
        case 0x24a11cu: goto label_24a11c;
        case 0x24a120u: goto label_24a120;
        case 0x24a124u: goto label_24a124;
        case 0x24a128u: goto label_24a128;
        case 0x24a12cu: goto label_24a12c;
        case 0x24a130u: goto label_24a130;
        case 0x24a134u: goto label_24a134;
        case 0x24a138u: goto label_24a138;
        case 0x24a13cu: goto label_24a13c;
        case 0x24a140u: goto label_24a140;
        case 0x24a144u: goto label_24a144;
        case 0x24a148u: goto label_24a148;
        case 0x24a14cu: goto label_24a14c;
        case 0x24a150u: goto label_24a150;
        case 0x24a154u: goto label_24a154;
        case 0x24a158u: goto label_24a158;
        case 0x24a15cu: goto label_24a15c;
        case 0x24a160u: goto label_24a160;
        case 0x24a164u: goto label_24a164;
        case 0x24a168u: goto label_24a168;
        case 0x24a16cu: goto label_24a16c;
        case 0x24a170u: goto label_24a170;
        case 0x24a174u: goto label_24a174;
        case 0x24a178u: goto label_24a178;
        case 0x24a17cu: goto label_24a17c;
        case 0x24a180u: goto label_24a180;
        case 0x24a184u: goto label_24a184;
        case 0x24a188u: goto label_24a188;
        case 0x24a18cu: goto label_24a18c;
        case 0x24a190u: goto label_24a190;
        case 0x24a194u: goto label_24a194;
        case 0x24a198u: goto label_24a198;
        case 0x24a19cu: goto label_24a19c;
        case 0x24a1a0u: goto label_24a1a0;
        case 0x24a1a4u: goto label_24a1a4;
        case 0x24a1a8u: goto label_24a1a8;
        case 0x24a1acu: goto label_24a1ac;
        case 0x24a1b0u: goto label_24a1b0;
        case 0x24a1b4u: goto label_24a1b4;
        case 0x24a1b8u: goto label_24a1b8;
        case 0x24a1bcu: goto label_24a1bc;
        case 0x24a1c0u: goto label_24a1c0;
        case 0x24a1c4u: goto label_24a1c4;
        case 0x24a1c8u: goto label_24a1c8;
        case 0x24a1ccu: goto label_24a1cc;
        case 0x24a1d0u: goto label_24a1d0;
        case 0x24a1d4u: goto label_24a1d4;
        case 0x24a1d8u: goto label_24a1d8;
        case 0x24a1dcu: goto label_24a1dc;
        case 0x24a1e0u: goto label_24a1e0;
        case 0x24a1e4u: goto label_24a1e4;
        case 0x24a1e8u: goto label_24a1e8;
        case 0x24a1ecu: goto label_24a1ec;
        case 0x24a1f0u: goto label_24a1f0;
        case 0x24a1f4u: goto label_24a1f4;
        case 0x24a1f8u: goto label_24a1f8;
        case 0x24a1fcu: goto label_24a1fc;
        case 0x24a200u: goto label_24a200;
        case 0x24a204u: goto label_24a204;
        case 0x24a208u: goto label_24a208;
        case 0x24a20cu: goto label_24a20c;
        case 0x24a210u: goto label_24a210;
        case 0x24a214u: goto label_24a214;
        case 0x24a218u: goto label_24a218;
        case 0x24a21cu: goto label_24a21c;
        case 0x24a220u: goto label_24a220;
        case 0x24a224u: goto label_24a224;
        case 0x24a228u: goto label_24a228;
        case 0x24a22cu: goto label_24a22c;
        case 0x24a230u: goto label_24a230;
        case 0x24a234u: goto label_24a234;
        case 0x24a238u: goto label_24a238;
        case 0x24a23cu: goto label_24a23c;
        case 0x24a240u: goto label_24a240;
        case 0x24a244u: goto label_24a244;
        case 0x24a248u: goto label_24a248;
        case 0x24a24cu: goto label_24a24c;
        case 0x24a250u: goto label_24a250;
        case 0x24a254u: goto label_24a254;
        case 0x24a258u: goto label_24a258;
        case 0x24a25cu: goto label_24a25c;
        case 0x24a260u: goto label_24a260;
        case 0x24a264u: goto label_24a264;
        case 0x24a268u: goto label_24a268;
        case 0x24a26cu: goto label_24a26c;
        case 0x24a270u: goto label_24a270;
        case 0x24a274u: goto label_24a274;
        case 0x24a278u: goto label_24a278;
        case 0x24a27cu: goto label_24a27c;
        case 0x24a280u: goto label_24a280;
        case 0x24a284u: goto label_24a284;
        case 0x24a288u: goto label_24a288;
        case 0x24a28cu: goto label_24a28c;
        case 0x24a290u: goto label_24a290;
        case 0x24a294u: goto label_24a294;
        case 0x24a298u: goto label_24a298;
        case 0x24a29cu: goto label_24a29c;
        case 0x24a2a0u: goto label_24a2a0;
        case 0x24a2a4u: goto label_24a2a4;
        case 0x24a2a8u: goto label_24a2a8;
        case 0x24a2acu: goto label_24a2ac;
        case 0x24a2b0u: goto label_24a2b0;
        case 0x24a2b4u: goto label_24a2b4;
        case 0x24a2b8u: goto label_24a2b8;
        case 0x24a2bcu: goto label_24a2bc;
        case 0x24a2c0u: goto label_24a2c0;
        case 0x24a2c4u: goto label_24a2c4;
        case 0x24a2c8u: goto label_24a2c8;
        case 0x24a2ccu: goto label_24a2cc;
        case 0x24a2d0u: goto label_24a2d0;
        case 0x24a2d4u: goto label_24a2d4;
        case 0x24a2d8u: goto label_24a2d8;
        case 0x24a2dcu: goto label_24a2dc;
        case 0x24a2e0u: goto label_24a2e0;
        case 0x24a2e4u: goto label_24a2e4;
        case 0x24a2e8u: goto label_24a2e8;
        case 0x24a2ecu: goto label_24a2ec;
        case 0x24a2f0u: goto label_24a2f0;
        case 0x24a2f4u: goto label_24a2f4;
        case 0x24a2f8u: goto label_24a2f8;
        case 0x24a2fcu: goto label_24a2fc;
        case 0x24a300u: goto label_24a300;
        case 0x24a304u: goto label_24a304;
        case 0x24a308u: goto label_24a308;
        case 0x24a30cu: goto label_24a30c;
        case 0x24a310u: goto label_24a310;
        case 0x24a314u: goto label_24a314;
        case 0x24a318u: goto label_24a318;
        case 0x24a31cu: goto label_24a31c;
        case 0x24a320u: goto label_24a320;
        case 0x24a324u: goto label_24a324;
        case 0x24a328u: goto label_24a328;
        case 0x24a32cu: goto label_24a32c;
        case 0x24a330u: goto label_24a330;
        case 0x24a334u: goto label_24a334;
        case 0x24a338u: goto label_24a338;
        case 0x24a33cu: goto label_24a33c;
        case 0x24a340u: goto label_24a340;
        case 0x24a344u: goto label_24a344;
        case 0x24a348u: goto label_24a348;
        case 0x24a34cu: goto label_24a34c;
        case 0x24a350u: goto label_24a350;
        case 0x24a354u: goto label_24a354;
        case 0x24a358u: goto label_24a358;
        case 0x24a35cu: goto label_24a35c;
        case 0x24a360u: goto label_24a360;
        case 0x24a364u: goto label_24a364;
        case 0x24a368u: goto label_24a368;
        case 0x24a36cu: goto label_24a36c;
        case 0x24a370u: goto label_24a370;
        case 0x24a374u: goto label_24a374;
        case 0x24a378u: goto label_24a378;
        case 0x24a37cu: goto label_24a37c;
        case 0x24a380u: goto label_24a380;
        case 0x24a384u: goto label_24a384;
        case 0x24a388u: goto label_24a388;
        case 0x24a38cu: goto label_24a38c;
        case 0x24a390u: goto label_24a390;
        case 0x24a394u: goto label_24a394;
        case 0x24a398u: goto label_24a398;
        case 0x24a39cu: goto label_24a39c;
        case 0x24a3a0u: goto label_24a3a0;
        case 0x24a3a4u: goto label_24a3a4;
        case 0x24a3a8u: goto label_24a3a8;
        case 0x24a3acu: goto label_24a3ac;
        case 0x24a3b0u: goto label_24a3b0;
        case 0x24a3b4u: goto label_24a3b4;
        case 0x24a3b8u: goto label_24a3b8;
        case 0x24a3bcu: goto label_24a3bc;
        case 0x24a3c0u: goto label_24a3c0;
        case 0x24a3c4u: goto label_24a3c4;
        case 0x24a3c8u: goto label_24a3c8;
        case 0x24a3ccu: goto label_24a3cc;
        case 0x24a3d0u: goto label_24a3d0;
        case 0x24a3d4u: goto label_24a3d4;
        case 0x24a3d8u: goto label_24a3d8;
        case 0x24a3dcu: goto label_24a3dc;
        case 0x24a3e0u: goto label_24a3e0;
        case 0x24a3e4u: goto label_24a3e4;
        case 0x24a3e8u: goto label_24a3e8;
        case 0x24a3ecu: goto label_24a3ec;
        case 0x24a3f0u: goto label_24a3f0;
        case 0x24a3f4u: goto label_24a3f4;
        case 0x24a3f8u: goto label_24a3f8;
        case 0x24a3fcu: goto label_24a3fc;
        case 0x24a400u: goto label_24a400;
        case 0x24a404u: goto label_24a404;
        case 0x24a408u: goto label_24a408;
        case 0x24a40cu: goto label_24a40c;
        case 0x24a410u: goto label_24a410;
        case 0x24a414u: goto label_24a414;
        case 0x24a418u: goto label_24a418;
        case 0x24a41cu: goto label_24a41c;
        case 0x24a420u: goto label_24a420;
        case 0x24a424u: goto label_24a424;
        case 0x24a428u: goto label_24a428;
        case 0x24a42cu: goto label_24a42c;
        case 0x24a430u: goto label_24a430;
        case 0x24a434u: goto label_24a434;
        case 0x24a438u: goto label_24a438;
        case 0x24a43cu: goto label_24a43c;
        case 0x24a440u: goto label_24a440;
        case 0x24a444u: goto label_24a444;
        case 0x24a448u: goto label_24a448;
        case 0x24a44cu: goto label_24a44c;
        case 0x24a450u: goto label_24a450;
        case 0x24a454u: goto label_24a454;
        case 0x24a458u: goto label_24a458;
        case 0x24a45cu: goto label_24a45c;
        case 0x24a460u: goto label_24a460;
        case 0x24a464u: goto label_24a464;
        case 0x24a468u: goto label_24a468;
        case 0x24a46cu: goto label_24a46c;
        case 0x24a470u: goto label_24a470;
        case 0x24a474u: goto label_24a474;
        case 0x24a478u: goto label_24a478;
        case 0x24a47cu: goto label_24a47c;
        case 0x24a480u: goto label_24a480;
        case 0x24a484u: goto label_24a484;
        case 0x24a488u: goto label_24a488;
        case 0x24a48cu: goto label_24a48c;
        case 0x24a490u: goto label_24a490;
        case 0x24a494u: goto label_24a494;
        case 0x24a498u: goto label_24a498;
        case 0x24a49cu: goto label_24a49c;
        case 0x24a4a0u: goto label_24a4a0;
        case 0x24a4a4u: goto label_24a4a4;
        case 0x24a4a8u: goto label_24a4a8;
        case 0x24a4acu: goto label_24a4ac;
        case 0x24a4b0u: goto label_24a4b0;
        case 0x24a4b4u: goto label_24a4b4;
        case 0x24a4b8u: goto label_24a4b8;
        case 0x24a4bcu: goto label_24a4bc;
        case 0x24a4c0u: goto label_24a4c0;
        case 0x24a4c4u: goto label_24a4c4;
        case 0x24a4c8u: goto label_24a4c8;
        case 0x24a4ccu: goto label_24a4cc;
        default: return;
    }

label_249d00:
    // 0x249d00: 0x2463ff80  addiu       $v1, $v1, -0x80
    ctx->pc = 0x249d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
label_249d04:
    // 0x249d04: 0x1000002e  b           . + 4 + (0x2E << 2)
label_249d08:
    if (ctx->pc == 0x249D08u) {
        ctx->pc = 0x249D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D04u;
        // 0x249d08: 0xa083001d  sb          $v1, 0x1D($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 29), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249D0Cu;
        goto label_249d0c;
    }
    ctx->pc = 0x249D04u;
    {
        const bool branch_taken_0x249d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D04u;
        // 0x249d08: 0xa083001d  sb          $v1, 0x1D($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 29), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d04) {
            ctx->pc = 0x249DC0u;
            goto label_249dc0;
        }
    }
    ctx->pc = 0x249D0Cu;
label_249d0c:
    // 0x249d0c: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x249d0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_249d10:
    // 0x249d10: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_249d14:
    if (ctx->pc == 0x249D14u) {
        ctx->pc = 0x249D18u;
        goto label_249d18;
    }
    ctx->pc = 0x249D10u;
    {
        const bool branch_taken_0x249d10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x249d10) {
            ctx->pc = 0x249D20u;
            goto label_249d20;
        }
    }
    ctx->pc = 0x249D18u;
label_249d18:
    // 0x249d18: 0x1000000e  b           . + 4 + (0xE << 2)
label_249d1c:
    if (ctx->pc == 0x249D1Cu) {
        ctx->pc = 0x249D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D18u;
        // 0x249d1c: 0xa0a00000  sb          $zero, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249D20u;
        goto label_249d20;
    }
    ctx->pc = 0x249D18u;
    {
        const bool branch_taken_0x249d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D18u;
        // 0x249d1c: 0xa0a00000  sb          $zero, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d18) {
            ctx->pc = 0x249D54u;
            goto label_249d54;
        }
    }
    ctx->pc = 0x249D20u;
label_249d20:
    // 0x249d20: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x249d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_249d24:
    // 0x249d24: 0x8cc40014  lw          $a0, 0x14($a2)
    ctx->pc = 0x249d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_249d28:
    // 0x249d28: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x249d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_249d2c:
    // 0x249d2c: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_249d30:
    if (ctx->pc == 0x249D30u) {
        ctx->pc = 0x249D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D2Cu;
        // 0x249d30: 0x24c50014  addiu       $a1, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249D34u;
        goto label_249d34;
    }
    ctx->pc = 0x249D2Cu;
    {
        const bool branch_taken_0x249d2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x249D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D2Cu;
        // 0x249d30: 0x24c50014  addiu       $a1, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d2c) {
            ctx->pc = 0x249D3Cu;
            goto label_249d3c;
        }
    }
    ctx->pc = 0x249D34u;
label_249d34:
    // 0x249d34: 0x10000007  b           . + 4 + (0x7 << 2)
label_249d38:
    if (ctx->pc == 0x249D38u) {
        ctx->pc = 0x249D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D34u;
        // 0x249d38: 0xacc00018  sw          $zero, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249D3Cu;
        goto label_249d3c;
    }
    ctx->pc = 0x249D34u;
    {
        const bool branch_taken_0x249d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D34u;
        // 0x249d38: 0xacc00018  sw          $zero, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d34) {
            ctx->pc = 0x249D54u;
            goto label_249d54;
        }
    }
    ctx->pc = 0x249D3Cu;
label_249d3c:
    // 0x249d3c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x249d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_249d40:
    // 0x249d40: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x249d40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_249d44:
    // 0x249d44: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x249d44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_249d48:
    // 0x249d48: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x249d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_249d4c:
    // 0x249d4c: 0x24849c10  addiu       $a0, $a0, -0x63F0
    ctx->pc = 0x249d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941712));
label_249d50:
    // 0x249d50: 0xac640018  sw          $a0, 0x18($v1)
    ctx->pc = 0x249d50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 4));
label_249d54:
    // 0x249d54: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x249d54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_249d58:
    // 0x249d58: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
label_249d5c:
    if (ctx->pc == 0x249D5Cu) {
        ctx->pc = 0x249D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D58u;
        // 0x249d5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249D60u;
        goto label_249d60;
    }
    ctx->pc = 0x249D58u;
    {
        const bool branch_taken_0x249d58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x249D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D58u;
        // 0x249d5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d58) {
            ctx->pc = 0x249DC0u;
            goto label_249dc0;
        }
    }
    ctx->pc = 0x249D60u;
label_249d60:
    // 0x249d60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x249d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249d64:
    // 0x249d64: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x249d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_249d68:
    // 0x249d68: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249d6c:
    // 0x249d6c: 0x2053021  addu        $a2, $s0, $a1
    ctx->pc = 0x249d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_249d70:
    // 0x249d70: 0x3421a010  ori         $at, $at, 0xA010
    ctx->pc = 0x249d70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40976);
label_249d74:
    // 0x249d74: 0xc11821  addu        $v1, $a2, $at
    ctx->pc = 0x249d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_249d78:
    // 0x249d78: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_249d7c:
    if (ctx->pc == 0x249D7Cu) {
        ctx->pc = 0x249D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D78u;
        // 0x249d7c: 0x9084001d  lbu         $a0, 0x1D($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 29)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249D80u;
        goto label_249d80;
    }
    ctx->pc = 0x249D78u;
    {
        const bool branch_taken_0x249d78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x249D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D78u;
        // 0x249d7c: 0x9084001d  lbu         $a0, 0x1D($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d78) {
            ctx->pc = 0x249DB0u;
            goto label_249db0;
        }
    }
    ctx->pc = 0x249D80u;
label_249d80:
    // 0x249d80: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x249d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_249d84:
    // 0x249d84: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249d84u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_249d88:
    // 0x249d88: 0xa024a083  sb          $a0, -0x5F7D($at)
    ctx->pc = 0x249d88u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942851), (uint8_t)GPR_U32(ctx, 4));
label_249d8c:
    // 0x249d8c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x249d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_249d90:
    // 0x249d90: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249d90u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_249d94:
    // 0x249d94: 0xa024a09b  sb          $a0, -0x5F65($at)
    ctx->pc = 0x249d94u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942875), (uint8_t)GPR_U32(ctx, 4));
label_249d98:
    // 0x249d98: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x249d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_249d9c:
    // 0x249d9c: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_249da0:
    // 0x249da0: 0xa024a0b3  sb          $a0, -0x5F4D($at)
    ctx->pc = 0x249da0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942899), (uint8_t)GPR_U32(ctx, 4));
label_249da4:
    // 0x249da4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x249da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_249da8:
    // 0x249da8: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249da8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_249dac:
    // 0x249dac: 0xa024a0cb  sb          $a0, -0x5F35($at)
    ctx->pc = 0x249dacu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942923), (uint8_t)GPR_U32(ctx, 4));
label_249db0:
    // 0x249db0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x249db0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_249db4:
    // 0x249db4: 0xe2182a  slt         $v1, $a3, $v0
    ctx->pc = 0x249db4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_249db8:
    // 0x249db8: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
label_249dbc:
    if (ctx->pc == 0x249DBCu) {
        ctx->pc = 0x249DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249DB8u;
        // 0x249dbc: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249DC0u;
        goto label_249dc0;
    }
    ctx->pc = 0x249DB8u;
    {
        const bool branch_taken_0x249db8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x249DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249DB8u;
        // 0x249dbc: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249db8) {
            ctx->pc = 0x249D64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249d64;
        }
    }
    ctx->pc = 0x249DC0u;
label_249dc0:
    // 0x249dc0: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x249dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_249dc4:
    // 0x249dc4: 0x9064001c  lbu         $a0, 0x1C($v1)
    ctx->pc = 0x249dc4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
label_249dc8:
    // 0x249dc8: 0x2465001c  addiu       $a1, $v1, 0x1C
    ctx->pc = 0x249dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
label_249dcc:
    // 0x249dcc: 0x2483ff80  addiu       $v1, $a0, -0x80
    ctx->pc = 0x249dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967168));
label_249dd0:
    // 0x249dd0: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x249dd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_249dd4:
    // 0x249dd4: 0x10200043  beqz        $at, . + 4 + (0x43 << 2)
label_249dd8:
    if (ctx->pc == 0x249DD8u) {
        ctx->pc = 0x249DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249DD4u;
        // 0x249dd8: 0x4082a  slt         $at, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x249DDCu;
        goto label_249ddc;
    }
    ctx->pc = 0x249DD4u;
    {
        const bool branch_taken_0x249dd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x249DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249DD4u;
        // 0x249dd8: 0x4082a  slt         $at, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x249dd4) {
            ctx->pc = 0x249EE4u;
            goto label_249ee4;
        }
    }
    ctx->pc = 0x249DDCu;
label_249ddc:
    // 0x249ddc: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x249ddcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_249de0:
    // 0x249de0: 0x1020003b  beqz        $at, . + 4 + (0x3B << 2)
label_249de4:
    if (ctx->pc == 0x249DE4u) {
        ctx->pc = 0x249DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249DE0u;
        // 0x249de4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249DE8u;
        goto label_249de8;
    }
    ctx->pc = 0x249DE0u;
    {
        const bool branch_taken_0x249de0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x249DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249DE0u;
        // 0x249de4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249de0) {
            ctx->pc = 0x249ED0u;
            goto label_249ed0;
        }
    }
    ctx->pc = 0x249DE8u;
label_249de8:
    // 0x249de8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x249de8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249dec:
    // 0x249dec: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x249decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_249df0:
    // 0x249df0: 0x2053021  addu        $a2, $s0, $a1
    ctx->pc = 0x249df0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_249df4:
    // 0x249df4: 0x24c36810  addiu       $v1, $a2, 0x6810
    ctx->pc = 0x249df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 26640));
label_249df8:
    // 0x249df8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_249dfc:
    if (ctx->pc == 0x249DFCu) {
        ctx->pc = 0x249DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249DF8u;
        // 0x249dfc: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249E00u;
        goto label_249e00;
    }
    ctx->pc = 0x249DF8u;
    {
        const bool branch_taken_0x249df8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x249DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249DF8u;
        // 0x249dfc: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249df8) {
            ctx->pc = 0x249E10u;
            goto label_249e10;
        }
    }
    ctx->pc = 0x249E00u;
label_249e00:
    // 0x249e00: 0xa0c46883  sb          $a0, 0x6883($a2)
    ctx->pc = 0x249e00u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26755), (uint8_t)GPR_U32(ctx, 4));
label_249e04:
    // 0x249e04: 0xa0c4689b  sb          $a0, 0x689B($a2)
    ctx->pc = 0x249e04u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26779), (uint8_t)GPR_U32(ctx, 4));
label_249e08:
    // 0x249e08: 0xa0c468b3  sb          $a0, 0x68B3($a2)
    ctx->pc = 0x249e08u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26803), (uint8_t)GPR_U32(ctx, 4));
label_249e0c:
    // 0x249e0c: 0xa0c468cb  sb          $a0, 0x68CB($a2)
    ctx->pc = 0x249e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26827), (uint8_t)GPR_U32(ctx, 4));
label_249e10:
    // 0x249e10: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x249e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_249e14:
    // 0x249e14: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x249e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_249e18:
    // 0x249e18: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_249e1c:
    if (ctx->pc == 0x249E1Cu) {
        ctx->pc = 0x249E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E18u;
        // 0x249e1c: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249E20u;
        goto label_249e20;
    }
    ctx->pc = 0x249E18u;
    {
        const bool branch_taken_0x249e18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x249E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E18u;
        // 0x249e1c: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249e18) {
            ctx->pc = 0x249E30u;
            goto label_249e30;
        }
    }
    ctx->pc = 0x249E20u;
label_249e20:
    // 0x249e20: 0xa0c40083  sb          $a0, 0x83($a2)
    ctx->pc = 0x249e20u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 131), (uint8_t)GPR_U32(ctx, 4));
label_249e24:
    // 0x249e24: 0xa0c4009b  sb          $a0, 0x9B($a2)
    ctx->pc = 0x249e24u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 155), (uint8_t)GPR_U32(ctx, 4));
label_249e28:
    // 0x249e28: 0xa0c400b3  sb          $a0, 0xB3($a2)
    ctx->pc = 0x249e28u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 179), (uint8_t)GPR_U32(ctx, 4));
label_249e2c:
    // 0x249e2c: 0xa0c400cb  sb          $a0, 0xCB($a2)
    ctx->pc = 0x249e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 203), (uint8_t)GPR_U32(ctx, 4));
label_249e30:
    // 0x249e30: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x249e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_249e34:
    // 0x249e34: 0x3401d010  ori         $at, $zero, 0xD010
    ctx->pc = 0x249e34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53264);
label_249e38:
    // 0x249e38: 0xc11821  addu        $v1, $a2, $at
    ctx->pc = 0x249e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_249e3c:
    // 0x249e3c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_249e40:
    if (ctx->pc == 0x249E40u) {
        ctx->pc = 0x249E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E3Cu;
        // 0x249e40: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249E44u;
        goto label_249e44;
    }
    ctx->pc = 0x249E3Cu;
    {
        const bool branch_taken_0x249e3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x249E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E3Cu;
        // 0x249e40: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249e3c) {
            ctx->pc = 0x249E74u;
            goto label_249e74;
        }
    }
    ctx->pc = 0x249E44u;
label_249e44:
    // 0x249e44: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249e48:
    // 0x249e48: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249e48u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_249e4c:
    // 0x249e4c: 0xa024d083  sb          $a0, -0x2F7D($at)
    ctx->pc = 0x249e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955139), (uint8_t)GPR_U32(ctx, 4));
label_249e50:
    // 0x249e50: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249e54:
    // 0x249e54: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249e54u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_249e58:
    // 0x249e58: 0xa024d09b  sb          $a0, -0x2F65($at)
    ctx->pc = 0x249e58u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955163), (uint8_t)GPR_U32(ctx, 4));
label_249e5c:
    // 0x249e5c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249e60:
    // 0x249e60: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249e60u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_249e64:
    // 0x249e64: 0xa024d0b3  sb          $a0, -0x2F4D($at)
    ctx->pc = 0x249e64u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955187), (uint8_t)GPR_U32(ctx, 4));
label_249e68:
    // 0x249e68: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249e6c:
    // 0x249e6c: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249e6cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_249e70:
    // 0x249e70: 0xa024d0cb  sb          $a0, -0x2F35($at)
    ctx->pc = 0x249e70u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955211), (uint8_t)GPR_U32(ctx, 4));
label_249e74:
    // 0x249e74: 0x0  nop
    ctx->pc = 0x249e74u;
    // NOP
label_249e78:
    // 0x249e78: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x249e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_249e7c:
    // 0x249e7c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249e80:
    // 0x249e80: 0x34213810  ori         $at, $at, 0x3810
    ctx->pc = 0x249e80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14352);
label_249e84:
    // 0x249e84: 0xc11821  addu        $v1, $a2, $at
    ctx->pc = 0x249e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_249e88:
    // 0x249e88: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_249e8c:
    if (ctx->pc == 0x249E8Cu) {
        ctx->pc = 0x249E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E88u;
        // 0x249e8c: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249E90u;
        goto label_249e90;
    }
    ctx->pc = 0x249E88u;
    {
        const bool branch_taken_0x249e88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x249E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E88u;
        // 0x249e8c: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249e88) {
            ctx->pc = 0x249EC0u;
            goto label_249ec0;
        }
    }
    ctx->pc = 0x249E90u;
label_249e90:
    // 0x249e90: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249e94:
    // 0x249e94: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249e94u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_249e98:
    // 0x249e98: 0xa0243883  sb          $a0, 0x3883($at)
    ctx->pc = 0x249e98u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14467), (uint8_t)GPR_U32(ctx, 4));
label_249e9c:
    // 0x249e9c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249ea0:
    // 0x249ea0: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_249ea4:
    // 0x249ea4: 0xa024389b  sb          $a0, 0x389B($at)
    ctx->pc = 0x249ea4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14491), (uint8_t)GPR_U32(ctx, 4));
label_249ea8:
    // 0x249ea8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249eac:
    // 0x249eac: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249eacu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_249eb0:
    // 0x249eb0: 0xa02438b3  sb          $a0, 0x38B3($at)
    ctx->pc = 0x249eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14515), (uint8_t)GPR_U32(ctx, 4));
label_249eb4:
    // 0x249eb4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249eb8:
    // 0x249eb8: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_249ebc:
    // 0x249ebc: 0xa02438cb  sb          $a0, 0x38CB($at)
    ctx->pc = 0x249ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14539), (uint8_t)GPR_U32(ctx, 4));
label_249ec0:
    // 0x249ec0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x249ec0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_249ec4:
    // 0x249ec4: 0xe2182a  slt         $v1, $a3, $v0
    ctx->pc = 0x249ec4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_249ec8:
    // 0x249ec8: 0x1460ffc8  bnez        $v1, . + 4 + (-0x38 << 2)
label_249ecc:
    if (ctx->pc == 0x249ECCu) {
        ctx->pc = 0x249ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249EC8u;
        // 0x249ecc: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249ED0u;
        goto label_249ed0;
    }
    ctx->pc = 0x249EC8u;
    {
        const bool branch_taken_0x249ec8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x249ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249EC8u;
        // 0x249ecc: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249ec8) {
            ctx->pc = 0x249DECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249dec;
        }
    }
    ctx->pc = 0x249ED0u;
label_249ed0:
    // 0x249ed0: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x249ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_249ed4:
    // 0x249ed4: 0x9083001c  lbu         $v1, 0x1C($a0)
    ctx->pc = 0x249ed4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
label_249ed8:
    // 0x249ed8: 0x2463ff80  addiu       $v1, $v1, -0x80
    ctx->pc = 0x249ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
label_249edc:
    // 0x249edc: 0x10000042  b           . + 4 + (0x42 << 2)
label_249ee0:
    if (ctx->pc == 0x249EE0u) {
        ctx->pc = 0x249EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249EDCu;
        // 0x249ee0: 0xa083001c  sb          $v1, 0x1C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249EE4u;
        goto label_249ee4;
    }
    ctx->pc = 0x249EDCu;
    {
        const bool branch_taken_0x249edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249EDCu;
        // 0x249ee0: 0xa083001c  sb          $v1, 0x1C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249edc) {
            ctx->pc = 0x249FE8u;
            goto label_249fe8;
        }
    }
    ctx->pc = 0x249EE4u;
label_249ee4:
    // 0x249ee4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_249ee8:
    if (ctx->pc == 0x249EE8u) {
        ctx->pc = 0x249EECu;
        goto label_249eec;
    }
    ctx->pc = 0x249EE4u;
    {
        const bool branch_taken_0x249ee4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x249ee4) {
            ctx->pc = 0x249EF0u;
            goto label_249ef0;
        }
    }
    ctx->pc = 0x249EECu;
label_249eec:
    // 0x249eec: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x249eecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
label_249ef0:
    // 0x249ef0: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x249ef0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_249ef4:
    // 0x249ef4: 0x1020003c  beqz        $at, . + 4 + (0x3C << 2)
label_249ef8:
    if (ctx->pc == 0x249EF8u) {
        ctx->pc = 0x249EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249EF4u;
        // 0x249ef8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249EFCu;
        goto label_249efc;
    }
    ctx->pc = 0x249EF4u;
    {
        const bool branch_taken_0x249ef4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x249EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249EF4u;
        // 0x249ef8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249ef4) {
            ctx->pc = 0x249FE8u;
            goto label_249fe8;
        }
    }
    ctx->pc = 0x249EFCu;
label_249efc:
    // 0x249efc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x249efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249f00:
    // 0x249f00: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x249f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_249f04:
    // 0x249f04: 0x2053021  addu        $a2, $s0, $a1
    ctx->pc = 0x249f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_249f08:
    // 0x249f08: 0x24c36810  addiu       $v1, $a2, 0x6810
    ctx->pc = 0x249f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 26640));
label_249f0c:
    // 0x249f0c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_249f10:
    if (ctx->pc == 0x249F10u) {
        ctx->pc = 0x249F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249F0Cu;
        // 0x249f10: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249F14u;
        goto label_249f14;
    }
    ctx->pc = 0x249F0Cu;
    {
        const bool branch_taken_0x249f0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x249F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249F0Cu;
        // 0x249f10: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249f0c) {
            ctx->pc = 0x249F24u;
            goto label_249f24;
        }
    }
    ctx->pc = 0x249F14u;
label_249f14:
    // 0x249f14: 0xa0c46883  sb          $a0, 0x6883($a2)
    ctx->pc = 0x249f14u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26755), (uint8_t)GPR_U32(ctx, 4));
label_249f18:
    // 0x249f18: 0xa0c4689b  sb          $a0, 0x689B($a2)
    ctx->pc = 0x249f18u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26779), (uint8_t)GPR_U32(ctx, 4));
label_249f1c:
    // 0x249f1c: 0xa0c468b3  sb          $a0, 0x68B3($a2)
    ctx->pc = 0x249f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26803), (uint8_t)GPR_U32(ctx, 4));
label_249f20:
    // 0x249f20: 0xa0c468cb  sb          $a0, 0x68CB($a2)
    ctx->pc = 0x249f20u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26827), (uint8_t)GPR_U32(ctx, 4));
label_249f24:
    // 0x249f24: 0x0  nop
    ctx->pc = 0x249f24u;
    // NOP
label_249f28:
    // 0x249f28: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x249f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_249f2c:
    // 0x249f2c: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x249f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_249f30:
    // 0x249f30: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_249f34:
    if (ctx->pc == 0x249F34u) {
        ctx->pc = 0x249F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249F30u;
        // 0x249f34: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249F38u;
        goto label_249f38;
    }
    ctx->pc = 0x249F30u;
    {
        const bool branch_taken_0x249f30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x249F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249F30u;
        // 0x249f34: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249f30) {
            ctx->pc = 0x249F48u;
            goto label_249f48;
        }
    }
    ctx->pc = 0x249F38u;
label_249f38:
    // 0x249f38: 0xa0c40083  sb          $a0, 0x83($a2)
    ctx->pc = 0x249f38u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 131), (uint8_t)GPR_U32(ctx, 4));
label_249f3c:
    // 0x249f3c: 0xa0c4009b  sb          $a0, 0x9B($a2)
    ctx->pc = 0x249f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 155), (uint8_t)GPR_U32(ctx, 4));
label_249f40:
    // 0x249f40: 0xa0c400b3  sb          $a0, 0xB3($a2)
    ctx->pc = 0x249f40u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 179), (uint8_t)GPR_U32(ctx, 4));
label_249f44:
    // 0x249f44: 0xa0c400cb  sb          $a0, 0xCB($a2)
    ctx->pc = 0x249f44u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 203), (uint8_t)GPR_U32(ctx, 4));
label_249f48:
    // 0x249f48: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x249f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_249f4c:
    // 0x249f4c: 0x3401d010  ori         $at, $zero, 0xD010
    ctx->pc = 0x249f4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53264);
label_249f50:
    // 0x249f50: 0xc11821  addu        $v1, $a2, $at
    ctx->pc = 0x249f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_249f54:
    // 0x249f54: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_249f58:
    if (ctx->pc == 0x249F58u) {
        ctx->pc = 0x249F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249F54u;
        // 0x249f58: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249F5Cu;
        goto label_249f5c;
    }
    ctx->pc = 0x249F54u;
    {
        const bool branch_taken_0x249f54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x249F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249F54u;
        // 0x249f58: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249f54) {
            ctx->pc = 0x249F8Cu;
            goto label_249f8c;
        }
    }
    ctx->pc = 0x249F5Cu;
label_249f5c:
    // 0x249f5c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249f5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249f60:
    // 0x249f60: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249f60u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_249f64:
    // 0x249f64: 0xa024d083  sb          $a0, -0x2F7D($at)
    ctx->pc = 0x249f64u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955139), (uint8_t)GPR_U32(ctx, 4));
label_249f68:
    // 0x249f68: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249f6c:
    // 0x249f6c: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_249f70:
    // 0x249f70: 0xa024d09b  sb          $a0, -0x2F65($at)
    ctx->pc = 0x249f70u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955163), (uint8_t)GPR_U32(ctx, 4));
label_249f74:
    // 0x249f74: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249f78:
    // 0x249f78: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249f78u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_249f7c:
    // 0x249f7c: 0xa024d0b3  sb          $a0, -0x2F4D($at)
    ctx->pc = 0x249f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955187), (uint8_t)GPR_U32(ctx, 4));
label_249f80:
    // 0x249f80: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249f84:
    // 0x249f84: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249f84u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_249f88:
    // 0x249f88: 0xa024d0cb  sb          $a0, -0x2F35($at)
    ctx->pc = 0x249f88u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955211), (uint8_t)GPR_U32(ctx, 4));
label_249f8c:
    // 0x249f8c: 0x0  nop
    ctx->pc = 0x249f8cu;
    // NOP
label_249f90:
    // 0x249f90: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x249f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_249f94:
    // 0x249f94: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249f98:
    // 0x249f98: 0x34213810  ori         $at, $at, 0x3810
    ctx->pc = 0x249f98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14352);
label_249f9c:
    // 0x249f9c: 0xc11821  addu        $v1, $a2, $at
    ctx->pc = 0x249f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_249fa0:
    // 0x249fa0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_249fa4:
    if (ctx->pc == 0x249FA4u) {
        ctx->pc = 0x249FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249FA0u;
        // 0x249fa4: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249FA8u;
        goto label_249fa8;
    }
    ctx->pc = 0x249FA0u;
    {
        const bool branch_taken_0x249fa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x249FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249FA0u;
        // 0x249fa4: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249fa0) {
            ctx->pc = 0x249FD8u;
            goto label_249fd8;
        }
    }
    ctx->pc = 0x249FA8u;
label_249fa8:
    // 0x249fa8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249fac:
    // 0x249fac: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249facu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_249fb0:
    // 0x249fb0: 0xa0243883  sb          $a0, 0x3883($at)
    ctx->pc = 0x249fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14467), (uint8_t)GPR_U32(ctx, 4));
label_249fb4:
    // 0x249fb4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249fb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249fb8:
    // 0x249fb8: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_249fbc:
    // 0x249fbc: 0xa024389b  sb          $a0, 0x389B($at)
    ctx->pc = 0x249fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14491), (uint8_t)GPR_U32(ctx, 4));
label_249fc0:
    // 0x249fc0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249fc4:
    // 0x249fc4: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_249fc8:
    // 0x249fc8: 0xa02438b3  sb          $a0, 0x38B3($at)
    ctx->pc = 0x249fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14515), (uint8_t)GPR_U32(ctx, 4));
label_249fcc:
    // 0x249fcc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x249fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_249fd0:
    // 0x249fd0: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x249fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_249fd4:
    // 0x249fd4: 0xa02438cb  sb          $a0, 0x38CB($at)
    ctx->pc = 0x249fd4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14539), (uint8_t)GPR_U32(ctx, 4));
label_249fd8:
    // 0x249fd8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x249fd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_249fdc:
    // 0x249fdc: 0xe2182a  slt         $v1, $a3, $v0
    ctx->pc = 0x249fdcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_249fe0:
    // 0x249fe0: 0x1460ffc7  bnez        $v1, . + 4 + (-0x39 << 2)
label_249fe4:
    if (ctx->pc == 0x249FE4u) {
        ctx->pc = 0x249FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249FE0u;
        // 0x249fe4: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249FE8u;
        goto label_249fe8;
    }
    ctx->pc = 0x249FE0u;
    {
        const bool branch_taken_0x249fe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x249FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249FE0u;
        // 0x249fe4: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249fe0) {
            ctx->pc = 0x249F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249f00;
        }
    }
    ctx->pc = 0x249FE8u;
label_249fe8:
    // 0x249fe8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x249fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_249fec:
    // 0x249fec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x249fecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_249ff0:
    // 0x249ff0: 0x3e00008  jr          $ra
label_249ff4:
    if (ctx->pc == 0x249FF4u) {
        ctx->pc = 0x249FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249FF0u;
        // 0x249ff4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249FF8u;
        goto label_249ff8;
    }
    ctx->pc = 0x249FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249FF0u;
        // 0x249ff4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249FF8u;
label_249ff8:
    // 0x249ff8: 0x0  nop
    ctx->pc = 0x249ff8u;
    // NOP
label_249ffc:
    // 0x249ffc: 0x0  nop
    ctx->pc = 0x249ffcu;
    // NOP
label_24a000:
    // 0x24a000: 0x8f8792fc  lw          $a3, -0x6D04($gp)
    ctx->pc = 0x24a000u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24a004:
    // 0x24a004: 0x8ce60014  lw          $a2, 0x14($a3)
    ctx->pc = 0x24a004u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_24a008:
    // 0x24a008: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x24a008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_24a00c:
    // 0x24a00c: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x24a00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_24a010:
    // 0x24a010: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x24a010u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_24a014:
    // 0x24a014: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x24a014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_24a018:
    // 0x24a018: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x24a018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_24a01c:
    // 0x24a01c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x24a01cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_24a020:
    // 0x24a020: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x24a020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_24a024:
    // 0x24a024: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x24a024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24a028:
    // 0x24a028: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x24a028u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_24a02c:
    // 0x24a02c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x24a02cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_24a030:
    // 0x24a030: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_24a034:
    if (ctx->pc == 0x24A034u) {
        ctx->pc = 0x24A034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A030u;
        // 0x24a034: 0x3c030025  lui         $v1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A038u;
        goto label_24a038;
    }
    ctx->pc = 0x24A030u;
    {
        const bool branch_taken_0x24a030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A030u;
        // 0x24a034: 0x3c030025  lui         $v1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a030) {
            ctx->pc = 0x24A040u;
            goto label_24a040;
        }
    }
    ctx->pc = 0x24A038u;
label_24a038:
    // 0x24a038: 0x24639c40  addiu       $v1, $v1, -0x63C0
    ctx->pc = 0x24a038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941760));
label_24a03c:
    // 0x24a03c: 0xace30018  sw          $v1, 0x18($a3)
    ctx->pc = 0x24a03cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
label_24a040:
    // 0x24a040: 0x3e00008  jr          $ra
label_24a044:
    if (ctx->pc == 0x24A044u) {
        ctx->pc = 0x24A048u;
        goto label_24a048;
    }
    ctx->pc = 0x24A040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A048u;
label_24a048:
    // 0x24a048: 0x0  nop
    ctx->pc = 0x24a048u;
    // NOP
label_24a04c:
    // 0x24a04c: 0x0  nop
    ctx->pc = 0x24a04cu;
    // NOP
label_24a050:
    // 0x24a050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24a050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_24a054:
    // 0x24a054: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24a054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_24a058:
    // 0x24a058: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24a058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_24a05c:
    // 0x24a05c: 0x8f8292fc  lw          $v0, -0x6D04($gp)
    ctx->pc = 0x24a05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24a060:
    // 0x24a060: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24a060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24a064:
    // 0x24a064: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x24a064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_24a068:
    // 0x24a068: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x24a068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_24a06c:
    // 0x24a06c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x24a06cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_24a070:
    // 0x24a070: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x24a070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_24a074:
    // 0x24a074: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24a074u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_24a078:
    // 0x24a078: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24a078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24a07c:
    // 0x24a07c: 0xc08f3d6  jal         func_23CF58
label_24a080:
    if (ctx->pc == 0x24A080u) {
        ctx->pc = 0x24A080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A07Cu;
        // 0x24a080: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A084u;
        goto label_24a084;
    }
    ctx->pc = 0x24A07Cu;
    SET_GPR_U32(ctx, 31, 0x24A084u);
    ctx->pc = 0x24A080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A07Cu;
    // 0x24a080: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF58u;
    { ctx->pc = 0x23cf58; return; }
    ctx->pc = 0x24A084u;
label_24a084:
    // 0x24a084: 0x8f8692fc  lw          $a2, -0x6D04($gp)
    ctx->pc = 0x24a084u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24a088:
    // 0x24a088: 0x90c4001d  lbu         $a0, 0x1D($a2)
    ctx->pc = 0x24a088u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 29)));
label_24a08c:
    // 0x24a08c: 0x24830080  addiu       $v1, $a0, 0x80
    ctx->pc = 0x24a08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_24a090:
    // 0x24a090: 0x28610080  slti        $at, $v1, 0x80
    ctx->pc = 0x24a090u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
label_24a094:
    // 0x24a094: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
label_24a098:
    if (ctx->pc == 0x24A098u) {
        ctx->pc = 0x24A098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A094u;
        // 0x24a098: 0x24c5001d  addiu       $a1, $a2, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A09Cu;
        goto label_24a09c;
    }
    ctx->pc = 0x24A094u;
    {
        const bool branch_taken_0x24a094 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A094u;
        // 0x24a098: 0x24c5001d  addiu       $a1, $a2, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a094) {
            ctx->pc = 0x24A11Cu;
            goto label_24a11c;
        }
    }
    ctx->pc = 0x24A09Cu;
label_24a09c:
    // 0x24a09c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x24a09cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_24a0a0:
    // 0x24a0a0: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
label_24a0a4:
    if (ctx->pc == 0x24A0A4u) {
        ctx->pc = 0x24A0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A0A0u;
        // 0x24a0a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A0A8u;
        goto label_24a0a8;
    }
    ctx->pc = 0x24A0A0u;
    {
        const bool branch_taken_0x24a0a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A0A0u;
        // 0x24a0a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a0a0) {
            ctx->pc = 0x24A108u;
            goto label_24a108;
        }
    }
    ctx->pc = 0x24A0A8u;
label_24a0a8:
    // 0x24a0a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24a0a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24a0ac:
    // 0x24a0ac: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x24a0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24a0b0:
    // 0x24a0b0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a0b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_24a0b4:
    // 0x24a0b4: 0x2063821  addu        $a3, $s0, $a2
    ctx->pc = 0x24a0b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_24a0b8:
    // 0x24a0b8: 0x3421a010  ori         $at, $at, 0xA010
    ctx->pc = 0x24a0b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40976);
label_24a0bc:
    // 0x24a0bc: 0xe11821  addu        $v1, $a3, $at
    ctx->pc = 0x24a0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
label_24a0c0:
    // 0x24a0c0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_24a0c4:
    if (ctx->pc == 0x24A0C4u) {
        ctx->pc = 0x24A0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A0C0u;
        // 0x24a0c4: 0x9084001d  lbu         $a0, 0x1D($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 29)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A0C8u;
        goto label_24a0c8;
    }
    ctx->pc = 0x24A0C0u;
    {
        const bool branch_taken_0x24a0c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A0C0u;
        // 0x24a0c4: 0x9084001d  lbu         $a0, 0x1D($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a0c0) {
            ctx->pc = 0x24A0F8u;
            goto label_24a0f8;
        }
    }
    ctx->pc = 0x24A0C8u;
label_24a0c8:
    // 0x24a0c8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x24a0c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_24a0cc:
    // 0x24a0cc: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x24a0ccu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
label_24a0d0:
    // 0x24a0d0: 0xa024a083  sb          $a0, -0x5F7D($at)
    ctx->pc = 0x24a0d0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942851), (uint8_t)GPR_U32(ctx, 4));
label_24a0d4:
    // 0x24a0d4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x24a0d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_24a0d8:
    // 0x24a0d8: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x24a0d8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
label_24a0dc:
    // 0x24a0dc: 0xa024a09b  sb          $a0, -0x5F65($at)
    ctx->pc = 0x24a0dcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942875), (uint8_t)GPR_U32(ctx, 4));
label_24a0e0:
    // 0x24a0e0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x24a0e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_24a0e4:
    // 0x24a0e4: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x24a0e4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
label_24a0e8:
    // 0x24a0e8: 0xa024a0b3  sb          $a0, -0x5F4D($at)
    ctx->pc = 0x24a0e8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942899), (uint8_t)GPR_U32(ctx, 4));
label_24a0ec:
    // 0x24a0ec: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x24a0ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_24a0f0:
    // 0x24a0f0: 0xe10821  addu        $at, $a3, $at
    ctx->pc = 0x24a0f0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 1)));
label_24a0f4:
    // 0x24a0f4: 0xa024a0cb  sb          $a0, -0x5F35($at)
    ctx->pc = 0x24a0f4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942923), (uint8_t)GPR_U32(ctx, 4));
label_24a0f8:
    // 0x24a0f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x24a0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_24a0fc:
    // 0x24a0fc: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x24a0fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_24a100:
    // 0x24a100: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
label_24a104:
    if (ctx->pc == 0x24A104u) {
        ctx->pc = 0x24A104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A100u;
        // 0x24a104: 0x24c600d0  addiu       $a2, $a2, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A108u;
        goto label_24a108;
    }
    ctx->pc = 0x24A100u;
    {
        const bool branch_taken_0x24a100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A100u;
        // 0x24a104: 0x24c600d0  addiu       $a2, $a2, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a100) {
            ctx->pc = 0x24A0ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24a0ac;
        }
    }
    ctx->pc = 0x24A108u;
label_24a108:
    // 0x24a108: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x24a108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24a10c:
    // 0x24a10c: 0x9083001d  lbu         $v1, 0x1D($a0)
    ctx->pc = 0x24a10cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 29)));
label_24a110:
    // 0x24a110: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x24a110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_24a114:
    // 0x24a114: 0x10000024  b           . + 4 + (0x24 << 2)
label_24a118:
    if (ctx->pc == 0x24A118u) {
        ctx->pc = 0x24A118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A114u;
        // 0x24a118: 0xa083001d  sb          $v1, 0x1D($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 29), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A11Cu;
        goto label_24a11c;
    }
    ctx->pc = 0x24A114u;
    {
        const bool branch_taken_0x24a114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A114u;
        // 0x24a118: 0xa083001d  sb          $v1, 0x1D($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 29), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a114) {
            ctx->pc = 0x24A1A8u;
            goto label_24a1a8;
        }
    }
    ctx->pc = 0x24A11Cu;
label_24a11c:
    // 0x24a11c: 0x28810080  slti        $at, $a0, 0x80
    ctx->pc = 0x24a11cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
label_24a120:
    // 0x24a120: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_24a124:
    if (ctx->pc == 0x24A124u) {
        ctx->pc = 0x24A124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A120u;
        // 0x24a124: 0x3c030025  lui         $v1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A128u;
        goto label_24a128;
    }
    ctx->pc = 0x24A120u;
    {
        const bool branch_taken_0x24a120 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A120u;
        // 0x24a124: 0x3c030025  lui         $v1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a120) {
            ctx->pc = 0x24A134u;
            goto label_24a134;
        }
    }
    ctx->pc = 0x24A128u;
label_24a128:
    // 0x24a128: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x24a128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_24a12c:
    // 0x24a12c: 0x10000003  b           . + 4 + (0x3 << 2)
label_24a130:
    if (ctx->pc == 0x24A130u) {
        ctx->pc = 0x24A130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A12Cu;
        // 0x24a130: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A134u;
        goto label_24a134;
    }
    ctx->pc = 0x24A12Cu;
    {
        const bool branch_taken_0x24a12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A12Cu;
        // 0x24a130: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a12c) {
            ctx->pc = 0x24A13Cu;
            goto label_24a13c;
        }
    }
    ctx->pc = 0x24A134u;
label_24a134:
    // 0x24a134: 0x2463a000  addiu       $v1, $v1, -0x6000
    ctx->pc = 0x24a134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942720));
label_24a138:
    // 0x24a138: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x24a138u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
label_24a13c:
    // 0x24a13c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x24a13cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_24a140:
    // 0x24a140: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
label_24a144:
    if (ctx->pc == 0x24A144u) {
        ctx->pc = 0x24A144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A140u;
        // 0x24a144: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A148u;
        goto label_24a148;
    }
    ctx->pc = 0x24A140u;
    {
        const bool branch_taken_0x24a140 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A140u;
        // 0x24a144: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a140) {
            ctx->pc = 0x24A1A8u;
            goto label_24a1a8;
        }
    }
    ctx->pc = 0x24A148u;
label_24a148:
    // 0x24a148: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24a148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24a14c:
    // 0x24a14c: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x24a14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24a150:
    // 0x24a150: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_24a154:
    // 0x24a154: 0x2053021  addu        $a2, $s0, $a1
    ctx->pc = 0x24a154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_24a158:
    // 0x24a158: 0x3421a010  ori         $at, $at, 0xA010
    ctx->pc = 0x24a158u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40976);
label_24a15c:
    // 0x24a15c: 0xc11821  addu        $v1, $a2, $at
    ctx->pc = 0x24a15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_24a160:
    // 0x24a160: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_24a164:
    if (ctx->pc == 0x24A164u) {
        ctx->pc = 0x24A164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A160u;
        // 0x24a164: 0x9084001d  lbu         $a0, 0x1D($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 29)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A168u;
        goto label_24a168;
    }
    ctx->pc = 0x24A160u;
    {
        const bool branch_taken_0x24a160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A160u;
        // 0x24a164: 0x9084001d  lbu         $a0, 0x1D($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a160) {
            ctx->pc = 0x24A198u;
            goto label_24a198;
        }
    }
    ctx->pc = 0x24A168u;
label_24a168:
    // 0x24a168: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x24a168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_24a16c:
    // 0x24a16c: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a16cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_24a170:
    // 0x24a170: 0xa024a083  sb          $a0, -0x5F7D($at)
    ctx->pc = 0x24a170u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942851), (uint8_t)GPR_U32(ctx, 4));
label_24a174:
    // 0x24a174: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x24a174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_24a178:
    // 0x24a178: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a178u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_24a17c:
    // 0x24a17c: 0xa024a09b  sb          $a0, -0x5F65($at)
    ctx->pc = 0x24a17cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942875), (uint8_t)GPR_U32(ctx, 4));
label_24a180:
    // 0x24a180: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x24a180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_24a184:
    // 0x24a184: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a184u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_24a188:
    // 0x24a188: 0xa024a0b3  sb          $a0, -0x5F4D($at)
    ctx->pc = 0x24a188u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942899), (uint8_t)GPR_U32(ctx, 4));
label_24a18c:
    // 0x24a18c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x24a18cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_24a190:
    // 0x24a190: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a190u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_24a194:
    // 0x24a194: 0xa024a0cb  sb          $a0, -0x5F35($at)
    ctx->pc = 0x24a194u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942923), (uint8_t)GPR_U32(ctx, 4));
label_24a198:
    // 0x24a198: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x24a198u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_24a19c:
    // 0x24a19c: 0xe2182a  slt         $v1, $a3, $v0
    ctx->pc = 0x24a19cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_24a1a0:
    // 0x24a1a0: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
label_24a1a4:
    if (ctx->pc == 0x24A1A4u) {
        ctx->pc = 0x24A1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A1A0u;
        // 0x24a1a4: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A1A8u;
        goto label_24a1a8;
    }
    ctx->pc = 0x24A1A0u;
    {
        const bool branch_taken_0x24a1a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A1A0u;
        // 0x24a1a4: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a1a0) {
            ctx->pc = 0x24A14Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24a14c;
        }
    }
    ctx->pc = 0x24A1A8u;
label_24a1a8:
    // 0x24a1a8: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x24a1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24a1ac:
    // 0x24a1ac: 0x9064001c  lbu         $a0, 0x1C($v1)
    ctx->pc = 0x24a1acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 28)));
label_24a1b0:
    // 0x24a1b0: 0x2465001c  addiu       $a1, $v1, 0x1C
    ctx->pc = 0x24a1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
label_24a1b4:
    // 0x24a1b4: 0x24830080  addiu       $v1, $a0, 0x80
    ctx->pc = 0x24a1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_24a1b8:
    // 0x24a1b8: 0x28610080  slti        $at, $v1, 0x80
    ctx->pc = 0x24a1b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
label_24a1bc:
    // 0x24a1bc: 0x10200055  beqz        $at, . + 4 + (0x55 << 2)
label_24a1c0:
    if (ctx->pc == 0x24A1C0u) {
        ctx->pc = 0x24A1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A1BCu;
        // 0x24a1c0: 0x28810080  slti        $at, $a0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A1C4u;
        goto label_24a1c4;
    }
    ctx->pc = 0x24A1BCu;
    {
        const bool branch_taken_0x24a1bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A1BCu;
        // 0x24a1c0: 0x28810080  slti        $at, $a0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a1bc) {
            ctx->pc = 0x24A314u;
            goto label_24a314;
        }
    }
    ctx->pc = 0x24A1C4u;
label_24a1c4:
    // 0x24a1c4: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x24a1c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_24a1c8:
    // 0x24a1c8: 0x1020004d  beqz        $at, . + 4 + (0x4D << 2)
label_24a1cc:
    if (ctx->pc == 0x24A1CCu) {
        ctx->pc = 0x24A1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A1C8u;
        // 0x24a1cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A1D0u;
        goto label_24a1d0;
    }
    ctx->pc = 0x24A1C8u;
    {
        const bool branch_taken_0x24a1c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A1C8u;
        // 0x24a1cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a1c8) {
            ctx->pc = 0x24A300u;
            goto label_24a300;
        }
    }
    ctx->pc = 0x24A1D0u;
label_24a1d0:
    // 0x24a1d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24a1d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24a1d4:
    // 0x24a1d4: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x24a1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24a1d8:
    // 0x24a1d8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a1d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_24a1dc:
    // 0x24a1dc: 0x2053021  addu        $a2, $s0, $a1
    ctx->pc = 0x24a1dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_24a1e0:
    // 0x24a1e0: 0x3421a010  ori         $at, $at, 0xA010
    ctx->pc = 0x24a1e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40976);
label_24a1e4:
    // 0x24a1e4: 0xc11821  addu        $v1, $a2, $at
    ctx->pc = 0x24a1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_24a1e8:
    // 0x24a1e8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_24a1ec:
    if (ctx->pc == 0x24A1ECu) {
        ctx->pc = 0x24A1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A1E8u;
        // 0x24a1ec: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A1F0u;
        goto label_24a1f0;
    }
    ctx->pc = 0x24A1E8u;
    {
        const bool branch_taken_0x24a1e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A1E8u;
        // 0x24a1ec: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a1e8) {
            ctx->pc = 0x24A220u;
            goto label_24a220;
        }
    }
    ctx->pc = 0x24A1F0u;
label_24a1f0:
    // 0x24a1f0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x24a1f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_24a1f4:
    // 0x24a1f4: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a1f4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_24a1f8:
    // 0x24a1f8: 0xa024a083  sb          $a0, -0x5F7D($at)
    ctx->pc = 0x24a1f8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942851), (uint8_t)GPR_U32(ctx, 4));
label_24a1fc:
    // 0x24a1fc: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x24a1fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_24a200:
    // 0x24a200: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a200u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_24a204:
    // 0x24a204: 0xa024a09b  sb          $a0, -0x5F65($at)
    ctx->pc = 0x24a204u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942875), (uint8_t)GPR_U32(ctx, 4));
label_24a208:
    // 0x24a208: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x24a208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_24a20c:
    // 0x24a20c: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a20cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_24a210:
    // 0x24a210: 0xa024a0b3  sb          $a0, -0x5F4D($at)
    ctx->pc = 0x24a210u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942899), (uint8_t)GPR_U32(ctx, 4));
label_24a214:
    // 0x24a214: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x24a214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
label_24a218:
    // 0x24a218: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a218u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_24a21c:
    // 0x24a21c: 0xa024a0cb  sb          $a0, -0x5F35($at)
    ctx->pc = 0x24a21cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294942923), (uint8_t)GPR_U32(ctx, 4));
label_24a220:
    // 0x24a220: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x24a220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24a224:
    // 0x24a224: 0x24c36810  addiu       $v1, $a2, 0x6810
    ctx->pc = 0x24a224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 26640));
label_24a228:
    // 0x24a228: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_24a22c:
    if (ctx->pc == 0x24A22Cu) {
        ctx->pc = 0x24A22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A228u;
        // 0x24a22c: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A230u;
        goto label_24a230;
    }
    ctx->pc = 0x24A228u;
    {
        const bool branch_taken_0x24a228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A228u;
        // 0x24a22c: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a228) {
            ctx->pc = 0x24A240u;
            goto label_24a240;
        }
    }
    ctx->pc = 0x24A230u;
label_24a230:
    // 0x24a230: 0xa0c46883  sb          $a0, 0x6883($a2)
    ctx->pc = 0x24a230u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26755), (uint8_t)GPR_U32(ctx, 4));
label_24a234:
    // 0x24a234: 0xa0c4689b  sb          $a0, 0x689B($a2)
    ctx->pc = 0x24a234u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26779), (uint8_t)GPR_U32(ctx, 4));
label_24a238:
    // 0x24a238: 0xa0c468b3  sb          $a0, 0x68B3($a2)
    ctx->pc = 0x24a238u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26803), (uint8_t)GPR_U32(ctx, 4));
label_24a23c:
    // 0x24a23c: 0xa0c468cb  sb          $a0, 0x68CB($a2)
    ctx->pc = 0x24a23cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26827), (uint8_t)GPR_U32(ctx, 4));
label_24a240:
    // 0x24a240: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x24a240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24a244:
    // 0x24a244: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x24a244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_24a248:
    // 0x24a248: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_24a24c:
    if (ctx->pc == 0x24A24Cu) {
        ctx->pc = 0x24A24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A248u;
        // 0x24a24c: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A250u;
        goto label_24a250;
    }
    ctx->pc = 0x24A248u;
    {
        const bool branch_taken_0x24a248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A248u;
        // 0x24a24c: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a248) {
            ctx->pc = 0x24A260u;
            goto label_24a260;
        }
    }
    ctx->pc = 0x24A250u;
label_24a250:
    // 0x24a250: 0xa0c40083  sb          $a0, 0x83($a2)
    ctx->pc = 0x24a250u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 131), (uint8_t)GPR_U32(ctx, 4));
label_24a254:
    // 0x24a254: 0xa0c4009b  sb          $a0, 0x9B($a2)
    ctx->pc = 0x24a254u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 155), (uint8_t)GPR_U32(ctx, 4));
label_24a258:
    // 0x24a258: 0xa0c400b3  sb          $a0, 0xB3($a2)
    ctx->pc = 0x24a258u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 179), (uint8_t)GPR_U32(ctx, 4));
label_24a25c:
    // 0x24a25c: 0xa0c400cb  sb          $a0, 0xCB($a2)
    ctx->pc = 0x24a25cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 203), (uint8_t)GPR_U32(ctx, 4));
label_24a260:
    // 0x24a260: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x24a260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24a264:
    // 0x24a264: 0x3401d010  ori         $at, $zero, 0xD010
    ctx->pc = 0x24a264u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53264);
label_24a268:
    // 0x24a268: 0xc11821  addu        $v1, $a2, $at
    ctx->pc = 0x24a268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_24a26c:
    // 0x24a26c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_24a270:
    if (ctx->pc == 0x24A270u) {
        ctx->pc = 0x24A270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A26Cu;
        // 0x24a270: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A274u;
        goto label_24a274;
    }
    ctx->pc = 0x24A26Cu;
    {
        const bool branch_taken_0x24a26c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A26Cu;
        // 0x24a270: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a26c) {
            ctx->pc = 0x24A2A4u;
            goto label_24a2a4;
        }
    }
    ctx->pc = 0x24A274u;
label_24a274:
    // 0x24a274: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_24a278:
    // 0x24a278: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a278u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_24a27c:
    // 0x24a27c: 0xa024d083  sb          $a0, -0x2F7D($at)
    ctx->pc = 0x24a27cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955139), (uint8_t)GPR_U32(ctx, 4));
label_24a280:
    // 0x24a280: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_24a284:
    // 0x24a284: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a284u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_24a288:
    // 0x24a288: 0xa024d09b  sb          $a0, -0x2F65($at)
    ctx->pc = 0x24a288u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955163), (uint8_t)GPR_U32(ctx, 4));
label_24a28c:
    // 0x24a28c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a28cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_24a290:
    // 0x24a290: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a290u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_24a294:
    // 0x24a294: 0xa024d0b3  sb          $a0, -0x2F4D($at)
    ctx->pc = 0x24a294u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955187), (uint8_t)GPR_U32(ctx, 4));
label_24a298:
    // 0x24a298: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_24a29c:
    // 0x24a29c: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a29cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_24a2a0:
    // 0x24a2a0: 0xa024d0cb  sb          $a0, -0x2F35($at)
    ctx->pc = 0x24a2a0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955211), (uint8_t)GPR_U32(ctx, 4));
label_24a2a4:
    // 0x24a2a4: 0x0  nop
    ctx->pc = 0x24a2a4u;
    // NOP
label_24a2a8:
    // 0x24a2a8: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x24a2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24a2ac:
    // 0x24a2ac: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a2acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_24a2b0:
    // 0x24a2b0: 0x34213810  ori         $at, $at, 0x3810
    ctx->pc = 0x24a2b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14352);
label_24a2b4:
    // 0x24a2b4: 0xc11821  addu        $v1, $a2, $at
    ctx->pc = 0x24a2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_24a2b8:
    // 0x24a2b8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_24a2bc:
    if (ctx->pc == 0x24A2BCu) {
        ctx->pc = 0x24A2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A2B8u;
        // 0x24a2bc: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A2C0u;
        goto label_24a2c0;
    }
    ctx->pc = 0x24A2B8u;
    {
        const bool branch_taken_0x24a2b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A2B8u;
        // 0x24a2bc: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a2b8) {
            ctx->pc = 0x24A2F0u;
            goto label_24a2f0;
        }
    }
    ctx->pc = 0x24A2C0u;
label_24a2c0:
    // 0x24a2c0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a2c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_24a2c4:
    // 0x24a2c4: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a2c4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_24a2c8:
    // 0x24a2c8: 0xa0243883  sb          $a0, 0x3883($at)
    ctx->pc = 0x24a2c8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14467), (uint8_t)GPR_U32(ctx, 4));
label_24a2cc:
    // 0x24a2cc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a2ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_24a2d0:
    // 0x24a2d0: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a2d0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_24a2d4:
    // 0x24a2d4: 0xa024389b  sb          $a0, 0x389B($at)
    ctx->pc = 0x24a2d4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14491), (uint8_t)GPR_U32(ctx, 4));
label_24a2d8:
    // 0x24a2d8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a2d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_24a2dc:
    // 0x24a2dc: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a2dcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_24a2e0:
    // 0x24a2e0: 0xa02438b3  sb          $a0, 0x38B3($at)
    ctx->pc = 0x24a2e0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14515), (uint8_t)GPR_U32(ctx, 4));
label_24a2e4:
    // 0x24a2e4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a2e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_24a2e8:
    // 0x24a2e8: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a2e8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_24a2ec:
    // 0x24a2ec: 0xa02438cb  sb          $a0, 0x38CB($at)
    ctx->pc = 0x24a2ecu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14539), (uint8_t)GPR_U32(ctx, 4));
label_24a2f0:
    // 0x24a2f0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x24a2f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_24a2f4:
    // 0x24a2f4: 0xe2182a  slt         $v1, $a3, $v0
    ctx->pc = 0x24a2f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_24a2f8:
    // 0x24a2f8: 0x1460ffb6  bnez        $v1, . + 4 + (-0x4A << 2)
label_24a2fc:
    if (ctx->pc == 0x24A2FCu) {
        ctx->pc = 0x24A2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A2F8u;
        // 0x24a2fc: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A300u;
        goto label_24a300;
    }
    ctx->pc = 0x24A2F8u;
    {
        const bool branch_taken_0x24a2f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A2F8u;
        // 0x24a2fc: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a2f8) {
            ctx->pc = 0x24A1D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24a1d4;
        }
    }
    ctx->pc = 0x24A300u;
label_24a300:
    // 0x24a300: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x24a300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24a304:
    // 0x24a304: 0x9083001c  lbu         $v1, 0x1C($a0)
    ctx->pc = 0x24a304u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
label_24a308:
    // 0x24a308: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x24a308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_24a30c:
    // 0x24a30c: 0x10000042  b           . + 4 + (0x42 << 2)
label_24a310:
    if (ctx->pc == 0x24A310u) {
        ctx->pc = 0x24A310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A30Cu;
        // 0x24a310: 0xa083001c  sb          $v1, 0x1C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A314u;
        goto label_24a314;
    }
    ctx->pc = 0x24A30Cu;
    {
        const bool branch_taken_0x24a30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A30Cu;
        // 0x24a310: 0xa083001c  sb          $v1, 0x1C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a30c) {
            ctx->pc = 0x24A418u;
            goto label_24a418;
        }
    }
    ctx->pc = 0x24A314u;
label_24a314:
    // 0x24a314: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_24a318:
    if (ctx->pc == 0x24A318u) {
        ctx->pc = 0x24A318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A314u;
        // 0x24a318: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A31Cu;
        goto label_24a31c;
    }
    ctx->pc = 0x24A314u;
    {
        const bool branch_taken_0x24a314 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A314u;
        // 0x24a318: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a314) {
            ctx->pc = 0x24A320u;
            goto label_24a320;
        }
    }
    ctx->pc = 0x24A31Cu;
label_24a31c:
    // 0x24a31c: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x24a31cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_24a320:
    // 0x24a320: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x24a320u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_24a324:
    // 0x24a324: 0x1020003c  beqz        $at, . + 4 + (0x3C << 2)
label_24a328:
    if (ctx->pc == 0x24A328u) {
        ctx->pc = 0x24A328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A324u;
        // 0x24a328: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A32Cu;
        goto label_24a32c;
    }
    ctx->pc = 0x24A324u;
    {
        const bool branch_taken_0x24a324 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A324u;
        // 0x24a328: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a324) {
            ctx->pc = 0x24A418u;
            goto label_24a418;
        }
    }
    ctx->pc = 0x24A32Cu;
label_24a32c:
    // 0x24a32c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24a32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24a330:
    // 0x24a330: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x24a330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24a334:
    // 0x24a334: 0x2053021  addu        $a2, $s0, $a1
    ctx->pc = 0x24a334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_24a338:
    // 0x24a338: 0x24c36810  addiu       $v1, $a2, 0x6810
    ctx->pc = 0x24a338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 26640));
label_24a33c:
    // 0x24a33c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_24a340:
    if (ctx->pc == 0x24A340u) {
        ctx->pc = 0x24A340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A33Cu;
        // 0x24a340: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A344u;
        goto label_24a344;
    }
    ctx->pc = 0x24A33Cu;
    {
        const bool branch_taken_0x24a33c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A33Cu;
        // 0x24a340: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a33c) {
            ctx->pc = 0x24A354u;
            goto label_24a354;
        }
    }
    ctx->pc = 0x24A344u;
label_24a344:
    // 0x24a344: 0xa0c46883  sb          $a0, 0x6883($a2)
    ctx->pc = 0x24a344u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26755), (uint8_t)GPR_U32(ctx, 4));
label_24a348:
    // 0x24a348: 0xa0c4689b  sb          $a0, 0x689B($a2)
    ctx->pc = 0x24a348u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26779), (uint8_t)GPR_U32(ctx, 4));
label_24a34c:
    // 0x24a34c: 0xa0c468b3  sb          $a0, 0x68B3($a2)
    ctx->pc = 0x24a34cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26803), (uint8_t)GPR_U32(ctx, 4));
label_24a350:
    // 0x24a350: 0xa0c468cb  sb          $a0, 0x68CB($a2)
    ctx->pc = 0x24a350u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26827), (uint8_t)GPR_U32(ctx, 4));
label_24a354:
    // 0x24a354: 0x0  nop
    ctx->pc = 0x24a354u;
    // NOP
label_24a358:
    // 0x24a358: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x24a358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24a35c:
    // 0x24a35c: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x24a35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_24a360:
    // 0x24a360: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_24a364:
    if (ctx->pc == 0x24A364u) {
        ctx->pc = 0x24A364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A360u;
        // 0x24a364: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A368u;
        goto label_24a368;
    }
    ctx->pc = 0x24A360u;
    {
        const bool branch_taken_0x24a360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A360u;
        // 0x24a364: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a360) {
            ctx->pc = 0x24A378u;
            goto label_24a378;
        }
    }
    ctx->pc = 0x24A368u;
label_24a368:
    // 0x24a368: 0xa0c40083  sb          $a0, 0x83($a2)
    ctx->pc = 0x24a368u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 131), (uint8_t)GPR_U32(ctx, 4));
label_24a36c:
    // 0x24a36c: 0xa0c4009b  sb          $a0, 0x9B($a2)
    ctx->pc = 0x24a36cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 155), (uint8_t)GPR_U32(ctx, 4));
label_24a370:
    // 0x24a370: 0xa0c400b3  sb          $a0, 0xB3($a2)
    ctx->pc = 0x24a370u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 179), (uint8_t)GPR_U32(ctx, 4));
label_24a374:
    // 0x24a374: 0xa0c400cb  sb          $a0, 0xCB($a2)
    ctx->pc = 0x24a374u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 203), (uint8_t)GPR_U32(ctx, 4));
label_24a378:
    // 0x24a378: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x24a378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24a37c:
    // 0x24a37c: 0x3401d010  ori         $at, $zero, 0xD010
    ctx->pc = 0x24a37cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53264);
label_24a380:
    // 0x24a380: 0xc11821  addu        $v1, $a2, $at
    ctx->pc = 0x24a380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_24a384:
    // 0x24a384: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_24a388:
    if (ctx->pc == 0x24A388u) {
        ctx->pc = 0x24A388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A384u;
        // 0x24a388: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A38Cu;
        goto label_24a38c;
    }
    ctx->pc = 0x24A384u;
    {
        const bool branch_taken_0x24a384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A384u;
        // 0x24a388: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a384) {
            ctx->pc = 0x24A3BCu;
            goto label_24a3bc;
        }
    }
    ctx->pc = 0x24A38Cu;
label_24a38c:
    // 0x24a38c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a38cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_24a390:
    // 0x24a390: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a390u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_24a394:
    // 0x24a394: 0xa024d083  sb          $a0, -0x2F7D($at)
    ctx->pc = 0x24a394u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955139), (uint8_t)GPR_U32(ctx, 4));
label_24a398:
    // 0x24a398: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_24a39c:
    // 0x24a39c: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a39cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_24a3a0:
    // 0x24a3a0: 0xa024d09b  sb          $a0, -0x2F65($at)
    ctx->pc = 0x24a3a0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955163), (uint8_t)GPR_U32(ctx, 4));
label_24a3a4:
    // 0x24a3a4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a3a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_24a3a8:
    // 0x24a3a8: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a3a8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_24a3ac:
    // 0x24a3ac: 0xa024d0b3  sb          $a0, -0x2F4D($at)
    ctx->pc = 0x24a3acu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955187), (uint8_t)GPR_U32(ctx, 4));
label_24a3b0:
    // 0x24a3b0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_24a3b4:
    // 0x24a3b4: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a3b4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_24a3b8:
    // 0x24a3b8: 0xa024d0cb  sb          $a0, -0x2F35($at)
    ctx->pc = 0x24a3b8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955211), (uint8_t)GPR_U32(ctx, 4));
label_24a3bc:
    // 0x24a3bc: 0x0  nop
    ctx->pc = 0x24a3bcu;
    // NOP
label_24a3c0:
    // 0x24a3c0: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x24a3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24a3c4:
    // 0x24a3c4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a3c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_24a3c8:
    // 0x24a3c8: 0x34213810  ori         $at, $at, 0x3810
    ctx->pc = 0x24a3c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14352);
label_24a3cc:
    // 0x24a3cc: 0xc11821  addu        $v1, $a2, $at
    ctx->pc = 0x24a3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_24a3d0:
    // 0x24a3d0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_24a3d4:
    if (ctx->pc == 0x24A3D4u) {
        ctx->pc = 0x24A3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A3D0u;
        // 0x24a3d4: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A3D8u;
        goto label_24a3d8;
    }
    ctx->pc = 0x24A3D0u;
    {
        const bool branch_taken_0x24a3d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A3D0u;
        // 0x24a3d4: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a3d0) {
            ctx->pc = 0x24A408u;
            goto label_24a408;
        }
    }
    ctx->pc = 0x24A3D8u;
label_24a3d8:
    // 0x24a3d8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a3d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_24a3dc:
    // 0x24a3dc: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a3dcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_24a3e0:
    // 0x24a3e0: 0xa0243883  sb          $a0, 0x3883($at)
    ctx->pc = 0x24a3e0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14467), (uint8_t)GPR_U32(ctx, 4));
label_24a3e4:
    // 0x24a3e4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a3e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_24a3e8:
    // 0x24a3e8: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a3e8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_24a3ec:
    // 0x24a3ec: 0xa024389b  sb          $a0, 0x389B($at)
    ctx->pc = 0x24a3ecu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14491), (uint8_t)GPR_U32(ctx, 4));
label_24a3f0:
    // 0x24a3f0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a3f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_24a3f4:
    // 0x24a3f4: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a3f4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_24a3f8:
    // 0x24a3f8: 0xa02438b3  sb          $a0, 0x38B3($at)
    ctx->pc = 0x24a3f8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14515), (uint8_t)GPR_U32(ctx, 4));
label_24a3fc:
    // 0x24a3fc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a3fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_24a400:
    // 0x24a400: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a400u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_24a404:
    // 0x24a404: 0xa02438cb  sb          $a0, 0x38CB($at)
    ctx->pc = 0x24a404u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14539), (uint8_t)GPR_U32(ctx, 4));
label_24a408:
    // 0x24a408: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x24a408u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_24a40c:
    // 0x24a40c: 0xe2182a  slt         $v1, $a3, $v0
    ctx->pc = 0x24a40cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_24a410:
    // 0x24a410: 0x1460ffc7  bnez        $v1, . + 4 + (-0x39 << 2)
label_24a414:
    if (ctx->pc == 0x24A414u) {
        ctx->pc = 0x24A414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A410u;
        // 0x24a414: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A418u;
        goto label_24a418;
    }
    ctx->pc = 0x24A410u;
    {
        const bool branch_taken_0x24a410 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A410u;
        // 0x24a414: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a410) {
            ctx->pc = 0x24A330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24a330;
        }
    }
    ctx->pc = 0x24A418u;
label_24a418:
    // 0x24a418: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24a418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24a41c:
    // 0x24a41c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24a41cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24a420:
    // 0x24a420: 0x3e00008  jr          $ra
label_24a424:
    if (ctx->pc == 0x24A424u) {
        ctx->pc = 0x24A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A420u;
        // 0x24a424: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A428u;
        goto label_24a428;
    }
    ctx->pc = 0x24A420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A420u;
        // 0x24a424: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A428u;
label_24a428:
    // 0x24a428: 0x0  nop
    ctx->pc = 0x24a428u;
    // NOP
label_24a42c:
    // 0x24a42c: 0x0  nop
    ctx->pc = 0x24a42cu;
    // NOP
label_24a430:
    // 0x24a430: 0x8f8792fc  lw          $a3, -0x6D04($gp)
    ctx->pc = 0x24a430u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24a434:
    // 0x24a434: 0x8ce60014  lw          $a2, 0x14($a3)
    ctx->pc = 0x24a434u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_24a438:
    // 0x24a438: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x24a438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_24a43c:
    // 0x24a43c: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x24a43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_24a440:
    // 0x24a440: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x24a440u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_24a444:
    // 0x24a444: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x24a444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_24a448:
    // 0x24a448: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x24a448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_24a44c:
    // 0x24a44c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x24a44cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_24a450:
    // 0x24a450: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x24a450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_24a454:
    // 0x24a454: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x24a454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24a458:
    // 0x24a458: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x24a458u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_24a45c:
    // 0x24a45c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x24a45cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_24a460:
    // 0x24a460: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_24a464:
    if (ctx->pc == 0x24A464u) {
        ctx->pc = 0x24A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A460u;
        // 0x24a464: 0x3c030025  lui         $v1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A468u;
        goto label_24a468;
    }
    ctx->pc = 0x24A460u;
    {
        const bool branch_taken_0x24a460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A460u;
        // 0x24a464: 0x3c030025  lui         $v1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a460) {
            ctx->pc = 0x24A470u;
            goto label_24a470;
        }
    }
    ctx->pc = 0x24A468u;
label_24a468:
    // 0x24a468: 0x2463a050  addiu       $v1, $v1, -0x5FB0
    ctx->pc = 0x24a468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942800));
label_24a46c:
    // 0x24a46c: 0xace30018  sw          $v1, 0x18($a3)
    ctx->pc = 0x24a46cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
label_24a470:
    // 0x24a470: 0x3e00008  jr          $ra
label_24a474:
    if (ctx->pc == 0x24A474u) {
        ctx->pc = 0x24A478u;
        goto label_24a478;
    }
    ctx->pc = 0x24A470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A478u;
label_24a478:
    // 0x24a478: 0x0  nop
    ctx->pc = 0x24a478u;
    // NOP
label_24a47c:
    // 0x24a47c: 0x0  nop
    ctx->pc = 0x24a47cu;
    // NOP
label_24a480:
    // 0x24a480: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x24a480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_24a484:
    // 0x24a484: 0x28810018  slti        $at, $a0, 0x18
    ctx->pc = 0x24a484u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)24) ? 1 : 0);
label_24a488:
    // 0x24a488: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x24a488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_24a48c:
    // 0x24a48c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x24a48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_24a490:
    // 0x24a490: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x24a490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_24a494:
    // 0x24a494: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x24a494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_24a498:
    // 0x24a498: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x24a498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_24a49c:
    // 0x24a49c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x24a49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_24a4a0:
    // 0x24a4a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x24a4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_24a4a4:
    // 0x24a4a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24a4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_24a4a8:
    // 0x24a4a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24a4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_24a4ac:
    // 0x24a4ac: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_24a4b0:
    if (ctx->pc == 0x24A4B0u) {
        ctx->pc = 0x24A4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A4ACu;
        // 0x24a4b0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A4B4u;
        goto label_24a4b4;
    }
    ctx->pc = 0x24A4ACu;
    {
        const bool branch_taken_0x24a4ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A4ACu;
        // 0x24a4b0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a4ac) {
            ctx->pc = 0x24A4E4u;
            { ctx->pc = 0x24a4e4; return; }
        }
    }
    ctx->pc = 0x24A4B4u;
label_24a4b4:
    // 0x24a4b4: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x24a4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
label_24a4b8:
    // 0x24a4b8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x24a4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_24a4bc:
    // 0x24a4bc: 0x24421d84  addiu       $v0, $v0, 0x1D84
    ctx->pc = 0x24a4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7556));
label_24a4c0:
    // 0x24a4c0: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x24a4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_24a4c4:
    // 0x24a4c4: 0x84770000  lh          $s7, 0x0($v1)
    ctx->pc = 0x24a4c4u;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_24a4c8:
    // 0x24a4c8: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x24a4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
label_24a4cc:
    // 0x24a4cc: 0x24421d86  addiu       $v0, $v0, 0x1D86
    ctx->pc = 0x24a4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7558));
    ctx->pc = 0x24a4d0u;
    return;
}

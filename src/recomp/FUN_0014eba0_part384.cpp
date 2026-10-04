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


void FUN_0014eba0_part384(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x209bd0u: goto label_209bd0;
        case 0x209bd4u: goto label_209bd4;
        case 0x209bd8u: goto label_209bd8;
        case 0x209bdcu: goto label_209bdc;
        case 0x209be0u: goto label_209be0;
        case 0x209be4u: goto label_209be4;
        case 0x209be8u: goto label_209be8;
        case 0x209becu: goto label_209bec;
        case 0x209bf0u: goto label_209bf0;
        case 0x209bf4u: goto label_209bf4;
        case 0x209bf8u: goto label_209bf8;
        case 0x209bfcu: goto label_209bfc;
        case 0x209c00u: goto label_209c00;
        case 0x209c04u: goto label_209c04;
        case 0x209c08u: goto label_209c08;
        case 0x209c0cu: goto label_209c0c;
        case 0x209c10u: goto label_209c10;
        case 0x209c14u: goto label_209c14;
        case 0x209c18u: goto label_209c18;
        case 0x209c1cu: goto label_209c1c;
        case 0x209c20u: goto label_209c20;
        case 0x209c24u: goto label_209c24;
        case 0x209c28u: goto label_209c28;
        case 0x209c2cu: goto label_209c2c;
        case 0x209c30u: goto label_209c30;
        case 0x209c34u: goto label_209c34;
        case 0x209c38u: goto label_209c38;
        case 0x209c3cu: goto label_209c3c;
        case 0x209c40u: goto label_209c40;
        case 0x209c44u: goto label_209c44;
        case 0x209c48u: goto label_209c48;
        case 0x209c4cu: goto label_209c4c;
        case 0x209c50u: goto label_209c50;
        case 0x209c54u: goto label_209c54;
        case 0x209c58u: goto label_209c58;
        case 0x209c5cu: goto label_209c5c;
        case 0x209c60u: goto label_209c60;
        case 0x209c64u: goto label_209c64;
        case 0x209c68u: goto label_209c68;
        case 0x209c6cu: goto label_209c6c;
        case 0x209c70u: goto label_209c70;
        case 0x209c74u: goto label_209c74;
        case 0x209c78u: goto label_209c78;
        case 0x209c7cu: goto label_209c7c;
        case 0x209c80u: goto label_209c80;
        case 0x209c84u: goto label_209c84;
        case 0x209c88u: goto label_209c88;
        case 0x209c8cu: goto label_209c8c;
        case 0x209c90u: goto label_209c90;
        case 0x209c94u: goto label_209c94;
        case 0x209c98u: goto label_209c98;
        case 0x209c9cu: goto label_209c9c;
        case 0x209ca0u: goto label_209ca0;
        case 0x209ca4u: goto label_209ca4;
        case 0x209ca8u: goto label_209ca8;
        case 0x209cacu: goto label_209cac;
        case 0x209cb0u: goto label_209cb0;
        case 0x209cb4u: goto label_209cb4;
        case 0x209cb8u: goto label_209cb8;
        case 0x209cbcu: goto label_209cbc;
        case 0x209cc0u: goto label_209cc0;
        case 0x209cc4u: goto label_209cc4;
        case 0x209cc8u: goto label_209cc8;
        case 0x209cccu: goto label_209ccc;
        case 0x209cd0u: goto label_209cd0;
        case 0x209cd4u: goto label_209cd4;
        case 0x209cd8u: goto label_209cd8;
        case 0x209cdcu: goto label_209cdc;
        case 0x209ce0u: goto label_209ce0;
        case 0x209ce4u: goto label_209ce4;
        case 0x209ce8u: goto label_209ce8;
        case 0x209cecu: goto label_209cec;
        case 0x209cf0u: goto label_209cf0;
        case 0x209cf4u: goto label_209cf4;
        case 0x209cf8u: goto label_209cf8;
        case 0x209cfcu: goto label_209cfc;
        case 0x209d00u: goto label_209d00;
        case 0x209d04u: goto label_209d04;
        case 0x209d08u: goto label_209d08;
        case 0x209d0cu: goto label_209d0c;
        case 0x209d10u: goto label_209d10;
        case 0x209d14u: goto label_209d14;
        case 0x209d18u: goto label_209d18;
        case 0x209d1cu: goto label_209d1c;
        case 0x209d20u: goto label_209d20;
        case 0x209d24u: goto label_209d24;
        case 0x209d28u: goto label_209d28;
        case 0x209d2cu: goto label_209d2c;
        case 0x209d30u: goto label_209d30;
        case 0x209d34u: goto label_209d34;
        case 0x209d38u: goto label_209d38;
        case 0x209d3cu: goto label_209d3c;
        case 0x209d40u: goto label_209d40;
        case 0x209d44u: goto label_209d44;
        case 0x209d48u: goto label_209d48;
        case 0x209d4cu: goto label_209d4c;
        case 0x209d50u: goto label_209d50;
        case 0x209d54u: goto label_209d54;
        case 0x209d58u: goto label_209d58;
        case 0x209d5cu: goto label_209d5c;
        case 0x209d60u: goto label_209d60;
        case 0x209d64u: goto label_209d64;
        case 0x209d68u: goto label_209d68;
        case 0x209d6cu: goto label_209d6c;
        case 0x209d70u: goto label_209d70;
        case 0x209d74u: goto label_209d74;
        case 0x209d78u: goto label_209d78;
        case 0x209d7cu: goto label_209d7c;
        case 0x209d80u: goto label_209d80;
        case 0x209d84u: goto label_209d84;
        case 0x209d88u: goto label_209d88;
        case 0x209d8cu: goto label_209d8c;
        case 0x209d90u: goto label_209d90;
        case 0x209d94u: goto label_209d94;
        case 0x209d98u: goto label_209d98;
        case 0x209d9cu: goto label_209d9c;
        case 0x209da0u: goto label_209da0;
        case 0x209da4u: goto label_209da4;
        case 0x209da8u: goto label_209da8;
        case 0x209dacu: goto label_209dac;
        case 0x209db0u: goto label_209db0;
        case 0x209db4u: goto label_209db4;
        case 0x209db8u: goto label_209db8;
        case 0x209dbcu: goto label_209dbc;
        case 0x209dc0u: goto label_209dc0;
        case 0x209dc4u: goto label_209dc4;
        case 0x209dc8u: goto label_209dc8;
        case 0x209dccu: goto label_209dcc;
        case 0x209dd0u: goto label_209dd0;
        case 0x209dd4u: goto label_209dd4;
        case 0x209dd8u: goto label_209dd8;
        case 0x209ddcu: goto label_209ddc;
        case 0x209de0u: goto label_209de0;
        case 0x209de4u: goto label_209de4;
        case 0x209de8u: goto label_209de8;
        case 0x209decu: goto label_209dec;
        case 0x209df0u: goto label_209df0;
        case 0x209df4u: goto label_209df4;
        case 0x209df8u: goto label_209df8;
        case 0x209dfcu: goto label_209dfc;
        case 0x209e00u: goto label_209e00;
        case 0x209e04u: goto label_209e04;
        case 0x209e08u: goto label_209e08;
        case 0x209e0cu: goto label_209e0c;
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
        default: return;
    }

label_209bd0:
    // 0x209bd0: 0xc05e234  jal         func_1788D0
label_209bd4:
    if (ctx->pc == 0x209BD4u) {
        ctx->pc = 0x209BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209BD0u;
        // 0x209bd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209BD8u;
        goto label_209bd8;
    }
    ctx->pc = 0x209BD0u;
    SET_GPR_U32(ctx, 31, 0x209BD8u);
    ctx->pc = 0x209BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209BD0u;
    // 0x209bd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    { ctx->pc = 0x1788d0; return; }
    ctx->pc = 0x209BD8u;
label_209bd8:
    // 0x209bd8: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x209bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_209bdc:
    // 0x209bdc: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x209bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_209be0:
    // 0x209be0: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x209be0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_209be4:
    // 0x209be4: 0x3407fe00  ori         $a3, $zero, 0xFE00
    ctx->pc = 0x209be4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_209be8:
    // 0x209be8: 0x2408003c  addiu       $t0, $zero, 0x3C
    ctx->pc = 0x209be8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_209bec:
    // 0x209bec: 0x24090036  addiu       $t1, $zero, 0x36
    ctx->pc = 0x209becu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_209bf0:
    // 0x209bf0: 0xc07c1f4  jal         func_1F07D0
label_209bf4:
    if (ctx->pc == 0x209BF4u) {
        ctx->pc = 0x209BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209BF0u;
        // 0x209bf4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209BF8u;
        goto label_209bf8;
    }
    ctx->pc = 0x209BF0u;
    SET_GPR_U32(ctx, 31, 0x209BF8u);
    ctx->pc = 0x209BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209BF0u;
    // 0x209bf4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F07D0u;
    { ctx->pc = 0x1f07d0; return; }
    ctx->pc = 0x209BF8u;
label_209bf8:
    // 0x209bf8: 0xc07082c  jal         func_1C20B0
label_209bfc:
    if (ctx->pc == 0x209BFCu) {
        ctx->pc = 0x209BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209BF8u;
        // 0x209bfc: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209C00u;
        goto label_209c00;
    }
    ctx->pc = 0x209BF8u;
    SET_GPR_U32(ctx, 31, 0x209C00u);
    ctx->pc = 0x209BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209BF8u;
    // 0x209bfc: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20B0u;
    { ctx->pc = 0x1c20b0; return; }
    ctx->pc = 0x209C00u;
label_209c00:
    // 0x209c00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x209c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_209c04:
    // 0x209c04: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x209c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_209c08:
    // 0x209c08: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x209c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_209c0c:
    // 0x209c0c: 0x264405b0  addiu       $a0, $s2, 0x5B0
    ctx->pc = 0x209c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1456));
label_209c10:
    // 0x209c10: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x209c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_209c14:
    // 0x209c14: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x209c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_209c18:
    // 0x209c18: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x209c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_209c1c:
    // 0x209c1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x209c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209c20:
    // 0x209c20: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x209c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_209c24:
    // 0x209c24: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x209c24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_209c28:
    // 0x209c28: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x209c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_209c2c:
    // 0x209c2c: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x209c2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_209c30:
    // 0x209c30: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x209c30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_209c34:
    // 0x209c34: 0x240a0178  addiu       $t2, $zero, 0x178
    ctx->pc = 0x209c34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 376));
label_209c38:
    // 0x209c38: 0xc05de30  jal         func_1778C0
label_209c3c:
    if (ctx->pc == 0x209C3Cu) {
        ctx->pc = 0x209C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209C38u;
        // 0x209c3c: 0x240b0070  addiu       $t3, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209C40u;
        goto label_209c40;
    }
    ctx->pc = 0x209C38u;
    SET_GPR_U32(ctx, 31, 0x209C40u);
    ctx->pc = 0x209C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209C38u;
    // 0x209c3c: 0x240b0070  addiu       $t3, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    { ctx->pc = 0x1778c0; return; }
    ctx->pc = 0x209C40u;
label_209c40:
    // 0x209c40: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x209c40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209c44:
    // 0x209c44: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x209c44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209c48:
    // 0x209c48: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x209c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209c4c:
    // 0x209c4c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x209c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_209c50:
    // 0x209c50: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x209c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_209c54:
    // 0x209c54: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x209c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_209c58:
    // 0x209c58: 0x24543700  addiu       $s4, $v0, 0x3700
    ctx->pc = 0x209c58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 14080));
label_209c5c:
    // 0x209c5c: 0xc05e234  jal         func_1788D0
label_209c60:
    if (ctx->pc == 0x209C60u) {
        ctx->pc = 0x209C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209C5Cu;
        // 0x209c60: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209C64u;
        goto label_209c64;
    }
    ctx->pc = 0x209C5Cu;
    SET_GPR_U32(ctx, 31, 0x209C64u);
    ctx->pc = 0x209C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209C5Cu;
    // 0x209c60: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    { ctx->pc = 0x1788d0; return; }
    ctx->pc = 0x209C64u;
label_209c64:
    // 0x209c64: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x209c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_209c68:
    // 0x209c68: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x209c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_209c6c:
    // 0x209c6c: 0xc07091c  jal         func_1C2470
label_209c70:
    if (ctx->pc == 0x209C70u) {
        ctx->pc = 0x209C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209C6Cu;
        // 0x209c70: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209C74u;
        goto label_209c74;
    }
    ctx->pc = 0x209C6Cu;
    SET_GPR_U32(ctx, 31, 0x209C74u);
    ctx->pc = 0x209C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209C6Cu;
    // 0x209c70: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2470u;
    { ctx->pc = 0x1c2470; return; }
    ctx->pc = 0x209C74u;
label_209c74:
    // 0x209c74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x209c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_209c78:
    // 0x209c78: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x209c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_209c7c:
    // 0x209c7c: 0x24020090  addiu       $v0, $zero, 0x90
    ctx->pc = 0x209c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_209c80:
    // 0x209c80: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x209c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_209c84:
    // 0x209c84: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x209c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_209c88:
    // 0x209c88: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x209c88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_209c8c:
    // 0x209c8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x209c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209c90:
    // 0x209c90: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x209c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_209c94:
    // 0x209c94: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x209c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_209c98:
    // 0x209c98: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x209c98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_209c9c:
    // 0x209c9c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x209c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_209ca0:
    // 0x209ca0: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x209ca0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_209ca4:
    // 0x209ca4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x209ca4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209ca8:
    // 0x209ca8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x209ca8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209cac:
    // 0x209cac: 0xc05de30  jal         func_1778C0
label_209cb0:
    if (ctx->pc == 0x209CB0u) {
        ctx->pc = 0x209CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209CACu;
        // 0x209cb0: 0x240b00a0  addiu       $t3, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209CB4u;
        goto label_209cb4;
    }
    ctx->pc = 0x209CACu;
    SET_GPR_U32(ctx, 31, 0x209CB4u);
    ctx->pc = 0x209CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209CACu;
    // 0x209cb0: 0x240b00a0  addiu       $t3, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    { ctx->pc = 0x1778c0; return; }
    ctx->pc = 0x209CB4u;
label_209cb4:
    // 0x209cb4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x209cb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_209cb8:
    // 0x209cb8: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x209cb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
label_209cbc:
    // 0x209cbc: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_209cc0:
    if (ctx->pc == 0x209CC0u) {
        ctx->pc = 0x209CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209CBCu;
        // 0x209cc0: 0x26520160  addiu       $s2, $s2, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209CC4u;
        goto label_209cc4;
    }
    ctx->pc = 0x209CBCu;
    {
        const bool branch_taken_0x209cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209CBCu;
        // 0x209cc0: 0x26520160  addiu       $s2, $s2, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209cbc) {
            ctx->pc = 0x209C48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_209c48;
        }
    }
    ctx->pc = 0x209CC4u;
label_209cc4:
    // 0x209cc4: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x209cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209cc8:
    // 0x209cc8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x209cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_209ccc:
    // 0x209ccc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x209cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_209cd0:
    // 0x209cd0: 0x24523de0  addiu       $s2, $v0, 0x3DE0
    ctx->pc = 0x209cd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 15840));
label_209cd4:
    // 0x209cd4: 0xc05e234  jal         func_1788D0
label_209cd8:
    if (ctx->pc == 0x209CD8u) {
        ctx->pc = 0x209CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209CD4u;
        // 0x209cd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209CDCu;
        goto label_209cdc;
    }
    ctx->pc = 0x209CD4u;
    SET_GPR_U32(ctx, 31, 0x209CDCu);
    ctx->pc = 0x209CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209CD4u;
    // 0x209cd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    { ctx->pc = 0x1788d0; return; }
    ctx->pc = 0x209CDCu;
label_209cdc:
    // 0x209cdc: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x209cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_209ce0:
    // 0x209ce0: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x209ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_209ce4:
    // 0x209ce4: 0xc07091c  jal         func_1C2470
label_209ce8:
    if (ctx->pc == 0x209CE8u) {
        ctx->pc = 0x209CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209CE4u;
        // 0x209ce8: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209CECu;
        goto label_209cec;
    }
    ctx->pc = 0x209CE4u;
    SET_GPR_U32(ctx, 31, 0x209CECu);
    ctx->pc = 0x209CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209CE4u;
    // 0x209ce8: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2470u;
    { ctx->pc = 0x1c2470; return; }
    ctx->pc = 0x209CECu;
label_209cec:
    // 0x209cec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x209cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_209cf0:
    // 0x209cf0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x209cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_209cf4:
    // 0x209cf4: 0x24020090  addiu       $v0, $zero, 0x90
    ctx->pc = 0x209cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_209cf8:
    // 0x209cf8: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x209cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_209cfc:
    // 0x209cfc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x209cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_209d00:
    // 0x209d00: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x209d00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_209d04:
    // 0x209d04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x209d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209d08:
    // 0x209d08: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x209d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_209d0c:
    // 0x209d0c: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x209d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_209d10:
    // 0x209d10: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x209d10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_209d14:
    // 0x209d14: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x209d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_209d18:
    // 0x209d18: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x209d18u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_209d1c:
    // 0x209d1c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x209d1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209d20:
    // 0x209d20: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x209d20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209d24:
    // 0x209d24: 0xc05de30  jal         func_1778C0
label_209d28:
    if (ctx->pc == 0x209D28u) {
        ctx->pc = 0x209D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D24u;
        // 0x209d28: 0x240b00a0  addiu       $t3, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209D2Cu;
        goto label_209d2c;
    }
    ctx->pc = 0x209D24u;
    SET_GPR_U32(ctx, 31, 0x209D2Cu);
    ctx->pc = 0x209D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209D24u;
    // 0x209d28: 0x240b00a0  addiu       $t3, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    { ctx->pc = 0x1778c0; return; }
    ctx->pc = 0x209D2Cu;
label_209d2c:
    // 0x209d2c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x209d2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209d30:
    // 0x209d30: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x209d30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209d34:
    // 0x209d34: 0x0  nop
    ctx->pc = 0x209d34u;
    // NOP
label_209d38:
    // 0x209d38: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x209d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209d3c:
    // 0x209d3c: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x209d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_209d40:
    // 0x209d40: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x209d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_209d44:
    // 0x209d44: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x209d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_209d48:
    // 0x209d48: 0x24524be0  addiu       $s2, $v0, 0x4BE0
    ctx->pc = 0x209d48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 19424));
label_209d4c:
    // 0x209d4c: 0xc05e234  jal         func_1788D0
label_209d50:
    if (ctx->pc == 0x209D50u) {
        ctx->pc = 0x209D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D4Cu;
        // 0x209d50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209D54u;
        goto label_209d54;
    }
    ctx->pc = 0x209D4Cu;
    SET_GPR_U32(ctx, 31, 0x209D54u);
    ctx->pc = 0x209D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209D4Cu;
    // 0x209d50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    { ctx->pc = 0x1788d0; return; }
    ctx->pc = 0x209D54u;
label_209d54:
    // 0x209d54: 0x24080028  addiu       $t0, $zero, 0x28
    ctx->pc = 0x209d54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_209d58:
    // 0x209d58: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x209d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_209d5c:
    // 0x209d5c: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x209d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_209d60:
    // 0x209d60: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x209d60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_209d64:
    // 0x209d64: 0x3407fe02  ori         $a3, $zero, 0xFE02
    ctx->pc = 0x209d64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65026);
label_209d68:
    // 0x209d68: 0x240a000a  addiu       $t2, $zero, 0xA
    ctx->pc = 0x209d68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_209d6c:
    // 0x209d6c: 0xc07c084  jal         func_1F0210
label_209d70:
    if (ctx->pc == 0x209D70u) {
        ctx->pc = 0x209D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D6Cu;
        // 0x209d70: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209D74u;
        goto label_209d74;
    }
    ctx->pc = 0x209D6Cu;
    SET_GPR_U32(ctx, 31, 0x209D74u);
    ctx->pc = 0x209D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209D6Cu;
    // 0x209d70: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0210u;
    { ctx->pc = 0x1f0210; return; }
    ctx->pc = 0x209D74u;
label_209d74:
    // 0x209d74: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x209d74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_209d78:
    // 0x209d78: 0x2a830002  slti        $v1, $s4, 0x2
    ctx->pc = 0x209d78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_209d7c:
    // 0x209d7c: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
label_209d80:
    if (ctx->pc == 0x209D80u) {
        ctx->pc = 0x209D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D7Cu;
        // 0x209d80: 0x267305a0  addiu       $s3, $s3, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1440));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209D84u;
        goto label_209d84;
    }
    ctx->pc = 0x209D7Cu;
    {
        const bool branch_taken_0x209d7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x209D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D7Cu;
        // 0x209d80: 0x267305a0  addiu       $s3, $s3, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209d7c) {
            ctx->pc = 0x209D34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_209d34;
        }
    }
    ctx->pc = 0x209D84u;
label_209d84:
    // 0x209d84: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x209d84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_209d88:
    // 0x209d88: 0x261000b0  addiu       $s0, $s0, 0xB0
    ctx->pc = 0x209d88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_209d8c:
    // 0x209d8c: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x209d8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_209d90:
    // 0x209d90: 0x26d60650  addiu       $s6, $s6, 0x650
    ctx->pc = 0x209d90u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1616));
label_209d94:
    // 0x209d94: 0x1460ff6a  bnez        $v1, . + 4 + (-0x96 << 2)
label_209d98:
    if (ctx->pc == 0x209D98u) {
        ctx->pc = 0x209D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D94u;
        // 0x209d98: 0x26b502d0  addiu       $s5, $s5, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209D9Cu;
        goto label_209d9c;
    }
    ctx->pc = 0x209D94u;
    {
        const bool branch_taken_0x209d94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x209D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D94u;
        // 0x209d98: 0x26b502d0  addiu       $s5, $s5, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209d94) {
            ctx->pc = 0x209B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x209b40; return; }
        }
    }
    ctx->pc = 0x209D9Cu;
label_209d9c:
    // 0x209d9c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x209d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_209da0:
    // 0x209da0: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x209da0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_209da4:
    // 0x209da4: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x209da4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_209da8:
    // 0x209da8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x209da8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_209dac:
    // 0x209dac: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x209dacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_209db0:
    // 0x209db0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x209db0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_209db4:
    // 0x209db4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x209db4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_209db8:
    // 0x209db8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x209db8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_209dbc:
    // 0x209dbc: 0x3e00008  jr          $ra
label_209dc0:
    if (ctx->pc == 0x209DC0u) {
        ctx->pc = 0x209DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209DBCu;
        // 0x209dc0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209DC4u;
        goto label_209dc4;
    }
    ctx->pc = 0x209DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209DBCu;
        // 0x209dc0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209DC4u;
label_209dc4:
    // 0x209dc4: 0x0  nop
    ctx->pc = 0x209dc4u;
    // NOP
label_209dc8:
    // 0x209dc8: 0x0  nop
    ctx->pc = 0x209dc8u;
    // NOP
label_209dcc:
    // 0x209dcc: 0x0  nop
    ctx->pc = 0x209dccu;
    // NOP
label_209dd0:
    // 0x209dd0: 0x8f849100  lw          $a0, -0x6F00($gp)
    ctx->pc = 0x209dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_209dd4:
    // 0x209dd4: 0x1080003a  beqz        $a0, . + 4 + (0x3A << 2)
label_209dd8:
    if (ctx->pc == 0x209DD8u) {
        ctx->pc = 0x209DDCu;
        goto label_209ddc;
    }
    ctx->pc = 0x209DD4u;
    {
        const bool branch_taken_0x209dd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x209dd4) {
            ctx->pc = 0x209EC0u;
            goto label_209ec0;
        }
    }
    ctx->pc = 0x209DDCu;
label_209ddc:
    // 0x209ddc: 0x8c835724  lw          $v1, 0x5724($a0)
    ctx->pc = 0x209ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22308)));
label_209de0:
    // 0x209de0: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_209de4:
    if (ctx->pc == 0x209DE4u) {
        ctx->pc = 0x209DE8u;
        goto label_209de8;
    }
    ctx->pc = 0x209DE0u;
    {
        const bool branch_taken_0x209de0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x209de0) {
            ctx->pc = 0x209E0Cu;
            goto label_209e0c;
        }
    }
    ctx->pc = 0x209DE8u;
label_209de8:
    // 0x209de8: 0x8c8357e8  lw          $v1, 0x57E8($a0)
    ctx->pc = 0x209de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22504)));
label_209dec:
    // 0x209dec: 0x248557e8  addiu       $a1, $a0, 0x57E8
    ctx->pc = 0x209decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 22504));
label_209df0:
    // 0x209df0: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x209df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_209df4:
    // 0x209df4: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
label_209df8:
    if (ctx->pc == 0x209DF8u) {
        ctx->pc = 0x209DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209DF4u;
        // 0x209df8: 0x3083003f  andi        $v1, $a0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        ctx->pc = 0x209DFCu;
        goto label_209dfc;
    }
    ctx->pc = 0x209DF4u;
    {
        const bool branch_taken_0x209df4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x209DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209DF4u;
        // 0x209df8: 0x3083003f  andi        $v1, $a0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209df4) {
            ctx->pc = 0x209E08u;
            goto label_209e08;
        }
    }
    ctx->pc = 0x209DFCu;
label_209dfc:
    // 0x209dfc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_209e00:
    if (ctx->pc == 0x209E00u) {
        ctx->pc = 0x209E04u;
        goto label_209e04;
    }
    ctx->pc = 0x209DFCu;
    {
        const bool branch_taken_0x209dfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x209dfc) {
            ctx->pc = 0x209E08u;
            goto label_209e08;
        }
    }
    ctx->pc = 0x209E04u;
label_209e04:
    // 0x209e04: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x209e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_209e08:
    // 0x209e08: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x209e08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_209e0c:
    // 0x209e0c: 0x8f859100  lw          $a1, -0x6F00($gp)
    ctx->pc = 0x209e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
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
    ctx->pc = 0x20a3a0u;
    return;
}

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


void FUN_0019b618_part522(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x299c68u: goto label_299c68;
        case 0x299c6cu: goto label_299c6c;
        case 0x299c70u: goto label_299c70;
        case 0x299c74u: goto label_299c74;
        case 0x299c78u: goto label_299c78;
        case 0x299c7cu: goto label_299c7c;
        case 0x299c80u: goto label_299c80;
        case 0x299c84u: goto label_299c84;
        case 0x299c88u: goto label_299c88;
        case 0x299c8cu: goto label_299c8c;
        case 0x299c90u: goto label_299c90;
        case 0x299c94u: goto label_299c94;
        case 0x299c98u: goto label_299c98;
        case 0x299c9cu: goto label_299c9c;
        case 0x299ca0u: goto label_299ca0;
        case 0x299ca4u: goto label_299ca4;
        case 0x299ca8u: goto label_299ca8;
        case 0x299cacu: goto label_299cac;
        case 0x299cb0u: goto label_299cb0;
        case 0x299cb4u: goto label_299cb4;
        case 0x299cb8u: goto label_299cb8;
        case 0x299cbcu: goto label_299cbc;
        case 0x299cc0u: goto label_299cc0;
        case 0x299cc4u: goto label_299cc4;
        case 0x299cc8u: goto label_299cc8;
        case 0x299cccu: goto label_299ccc;
        case 0x299cd0u: goto label_299cd0;
        case 0x299cd4u: goto label_299cd4;
        case 0x299cd8u: goto label_299cd8;
        case 0x299cdcu: goto label_299cdc;
        case 0x299ce0u: goto label_299ce0;
        case 0x299ce4u: goto label_299ce4;
        case 0x299ce8u: goto label_299ce8;
        case 0x299cecu: goto label_299cec;
        case 0x299cf0u: goto label_299cf0;
        case 0x299cf4u: goto label_299cf4;
        case 0x299cf8u: goto label_299cf8;
        case 0x299cfcu: goto label_299cfc;
        case 0x299d00u: goto label_299d00;
        case 0x299d04u: goto label_299d04;
        case 0x299d08u: goto label_299d08;
        case 0x299d0cu: goto label_299d0c;
        case 0x299d10u: goto label_299d10;
        case 0x299d14u: goto label_299d14;
        case 0x299d18u: goto label_299d18;
        case 0x299d1cu: goto label_299d1c;
        case 0x299d20u: goto label_299d20;
        case 0x299d24u: goto label_299d24;
        case 0x299d28u: goto label_299d28;
        case 0x299d2cu: goto label_299d2c;
        case 0x299d30u: goto label_299d30;
        case 0x299d34u: goto label_299d34;
        case 0x299d38u: goto label_299d38;
        case 0x299d3cu: goto label_299d3c;
        case 0x299d40u: goto label_299d40;
        case 0x299d44u: goto label_299d44;
        case 0x299d48u: goto label_299d48;
        case 0x299d4cu: goto label_299d4c;
        case 0x299d50u: goto label_299d50;
        case 0x299d54u: goto label_299d54;
        case 0x299d58u: goto label_299d58;
        case 0x299d5cu: goto label_299d5c;
        case 0x299d60u: goto label_299d60;
        case 0x299d64u: goto label_299d64;
        case 0x299d68u: goto label_299d68;
        case 0x299d6cu: goto label_299d6c;
        case 0x299d70u: goto label_299d70;
        case 0x299d74u: goto label_299d74;
        case 0x299d78u: goto label_299d78;
        case 0x299d7cu: goto label_299d7c;
        case 0x299d80u: goto label_299d80;
        case 0x299d84u: goto label_299d84;
        case 0x299d88u: goto label_299d88;
        case 0x299d8cu: goto label_299d8c;
        case 0x299d90u: goto label_299d90;
        case 0x299d94u: goto label_299d94;
        case 0x299d98u: goto label_299d98;
        case 0x299d9cu: goto label_299d9c;
        case 0x299da0u: goto label_299da0;
        case 0x299da4u: goto label_299da4;
        case 0x299da8u: goto label_299da8;
        case 0x299dacu: goto label_299dac;
        case 0x299db0u: goto label_299db0;
        case 0x299db4u: goto label_299db4;
        case 0x299db8u: goto label_299db8;
        case 0x299dbcu: goto label_299dbc;
        case 0x299dc0u: goto label_299dc0;
        case 0x299dc4u: goto label_299dc4;
        case 0x299dc8u: goto label_299dc8;
        case 0x299dccu: goto label_299dcc;
        case 0x299dd0u: goto label_299dd0;
        case 0x299dd4u: goto label_299dd4;
        case 0x299dd8u: goto label_299dd8;
        case 0x299ddcu: goto label_299ddc;
        case 0x299de0u: goto label_299de0;
        case 0x299de4u: goto label_299de4;
        case 0x299de8u: goto label_299de8;
        case 0x299decu: goto label_299dec;
        case 0x299df0u: goto label_299df0;
        case 0x299df4u: goto label_299df4;
        case 0x299df8u: goto label_299df8;
        case 0x299dfcu: goto label_299dfc;
        case 0x299e00u: goto label_299e00;
        case 0x299e04u: goto label_299e04;
        case 0x299e08u: goto label_299e08;
        case 0x299e0cu: goto label_299e0c;
        case 0x299e10u: goto label_299e10;
        case 0x299e14u: goto label_299e14;
        case 0x299e18u: goto label_299e18;
        case 0x299e1cu: goto label_299e1c;
        case 0x299e20u: goto label_299e20;
        case 0x299e24u: goto label_299e24;
        case 0x299e28u: goto label_299e28;
        case 0x299e2cu: goto label_299e2c;
        case 0x299e30u: goto label_299e30;
        case 0x299e34u: goto label_299e34;
        case 0x299e38u: goto label_299e38;
        case 0x299e3cu: goto label_299e3c;
        case 0x299e40u: goto label_299e40;
        case 0x299e44u: goto label_299e44;
        case 0x299e48u: goto label_299e48;
        case 0x299e4cu: goto label_299e4c;
        case 0x299e50u: goto label_299e50;
        case 0x299e54u: goto label_299e54;
        case 0x299e58u: goto label_299e58;
        case 0x299e5cu: goto label_299e5c;
        case 0x299e60u: goto label_299e60;
        case 0x299e64u: goto label_299e64;
        case 0x299e68u: goto label_299e68;
        case 0x299e6cu: goto label_299e6c;
        case 0x299e70u: goto label_299e70;
        case 0x299e74u: goto label_299e74;
        case 0x299e78u: goto label_299e78;
        case 0x299e7cu: goto label_299e7c;
        case 0x299e80u: goto label_299e80;
        case 0x299e84u: goto label_299e84;
        case 0x299e88u: goto label_299e88;
        case 0x299e8cu: goto label_299e8c;
        case 0x299e90u: goto label_299e90;
        case 0x299e94u: goto label_299e94;
        case 0x299e98u: goto label_299e98;
        case 0x299e9cu: goto label_299e9c;
        case 0x299ea0u: goto label_299ea0;
        case 0x299ea4u: goto label_299ea4;
        case 0x299ea8u: goto label_299ea8;
        case 0x299eacu: goto label_299eac;
        case 0x299eb0u: goto label_299eb0;
        case 0x299eb4u: goto label_299eb4;
        case 0x299eb8u: goto label_299eb8;
        case 0x299ebcu: goto label_299ebc;
        case 0x299ec0u: goto label_299ec0;
        case 0x299ec4u: goto label_299ec4;
        case 0x299ec8u: goto label_299ec8;
        case 0x299eccu: goto label_299ecc;
        case 0x299ed0u: goto label_299ed0;
        case 0x299ed4u: goto label_299ed4;
        case 0x299ed8u: goto label_299ed8;
        case 0x299edcu: goto label_299edc;
        case 0x299ee0u: goto label_299ee0;
        case 0x299ee4u: goto label_299ee4;
        case 0x299ee8u: goto label_299ee8;
        case 0x299eecu: goto label_299eec;
        case 0x299ef0u: goto label_299ef0;
        case 0x299ef4u: goto label_299ef4;
        case 0x299ef8u: goto label_299ef8;
        case 0x299efcu: goto label_299efc;
        case 0x299f00u: goto label_299f00;
        case 0x299f04u: goto label_299f04;
        case 0x299f08u: goto label_299f08;
        case 0x299f0cu: goto label_299f0c;
        case 0x299f10u: goto label_299f10;
        case 0x299f14u: goto label_299f14;
        case 0x299f18u: goto label_299f18;
        case 0x299f1cu: goto label_299f1c;
        case 0x299f20u: goto label_299f20;
        case 0x299f24u: goto label_299f24;
        case 0x299f28u: goto label_299f28;
        case 0x299f2cu: goto label_299f2c;
        case 0x299f30u: goto label_299f30;
        case 0x299f34u: goto label_299f34;
        case 0x299f38u: goto label_299f38;
        case 0x299f3cu: goto label_299f3c;
        case 0x299f40u: goto label_299f40;
        case 0x299f44u: goto label_299f44;
        case 0x299f48u: goto label_299f48;
        case 0x299f4cu: goto label_299f4c;
        case 0x299f50u: goto label_299f50;
        case 0x299f54u: goto label_299f54;
        case 0x299f58u: goto label_299f58;
        case 0x299f5cu: goto label_299f5c;
        case 0x299f60u: goto label_299f60;
        case 0x299f64u: goto label_299f64;
        case 0x299f68u: goto label_299f68;
        case 0x299f6cu: goto label_299f6c;
        case 0x299f70u: goto label_299f70;
        case 0x299f74u: goto label_299f74;
        case 0x299f78u: goto label_299f78;
        case 0x299f7cu: goto label_299f7c;
        case 0x299f80u: goto label_299f80;
        case 0x299f84u: goto label_299f84;
        case 0x299f88u: goto label_299f88;
        case 0x299f8cu: goto label_299f8c;
        case 0x299f90u: goto label_299f90;
        case 0x299f94u: goto label_299f94;
        case 0x299f98u: goto label_299f98;
        case 0x299f9cu: goto label_299f9c;
        case 0x299fa0u: goto label_299fa0;
        case 0x299fa4u: goto label_299fa4;
        case 0x299fa8u: goto label_299fa8;
        case 0x299facu: goto label_299fac;
        case 0x299fb0u: goto label_299fb0;
        case 0x299fb4u: goto label_299fb4;
        case 0x299fb8u: goto label_299fb8;
        case 0x299fbcu: goto label_299fbc;
        case 0x299fc0u: goto label_299fc0;
        case 0x299fc4u: goto label_299fc4;
        case 0x299fc8u: goto label_299fc8;
        case 0x299fccu: goto label_299fcc;
        case 0x299fd0u: goto label_299fd0;
        case 0x299fd4u: goto label_299fd4;
        case 0x299fd8u: goto label_299fd8;
        case 0x299fdcu: goto label_299fdc;
        case 0x299fe0u: goto label_299fe0;
        case 0x299fe4u: goto label_299fe4;
        case 0x299fe8u: goto label_299fe8;
        case 0x299fecu: goto label_299fec;
        case 0x299ff0u: goto label_299ff0;
        case 0x299ff4u: goto label_299ff4;
        case 0x299ff8u: goto label_299ff8;
        case 0x299ffcu: goto label_299ffc;
        case 0x29a000u: goto label_29a000;
        case 0x29a004u: goto label_29a004;
        case 0x29a008u: goto label_29a008;
        case 0x29a00cu: goto label_29a00c;
        case 0x29a010u: goto label_29a010;
        case 0x29a014u: goto label_29a014;
        case 0x29a018u: goto label_29a018;
        case 0x29a01cu: goto label_29a01c;
        case 0x29a020u: goto label_29a020;
        case 0x29a024u: goto label_29a024;
        case 0x29a028u: goto label_29a028;
        case 0x29a02cu: goto label_29a02c;
        case 0x29a030u: goto label_29a030;
        case 0x29a034u: goto label_29a034;
        case 0x29a038u: goto label_29a038;
        case 0x29a03cu: goto label_29a03c;
        case 0x29a040u: goto label_29a040;
        case 0x29a044u: goto label_29a044;
        case 0x29a048u: goto label_29a048;
        case 0x29a04cu: goto label_29a04c;
        case 0x29a050u: goto label_29a050;
        case 0x29a054u: goto label_29a054;
        case 0x29a058u: goto label_29a058;
        case 0x29a05cu: goto label_29a05c;
        case 0x29a060u: goto label_29a060;
        case 0x29a064u: goto label_29a064;
        case 0x29a068u: goto label_29a068;
        case 0x29a06cu: goto label_29a06c;
        case 0x29a070u: goto label_29a070;
        case 0x29a074u: goto label_29a074;
        case 0x29a078u: goto label_29a078;
        case 0x29a07cu: goto label_29a07c;
        case 0x29a080u: goto label_29a080;
        case 0x29a084u: goto label_29a084;
        case 0x29a088u: goto label_29a088;
        case 0x29a08cu: goto label_29a08c;
        case 0x29a090u: goto label_29a090;
        case 0x29a094u: goto label_29a094;
        case 0x29a098u: goto label_29a098;
        case 0x29a09cu: goto label_29a09c;
        case 0x29a0a0u: goto label_29a0a0;
        case 0x29a0a4u: goto label_29a0a4;
        case 0x29a0a8u: goto label_29a0a8;
        case 0x29a0acu: goto label_29a0ac;
        case 0x29a0b0u: goto label_29a0b0;
        case 0x29a0b4u: goto label_29a0b4;
        case 0x29a0b8u: goto label_29a0b8;
        case 0x29a0bcu: goto label_29a0bc;
        case 0x29a0c0u: goto label_29a0c0;
        case 0x29a0c4u: goto label_29a0c4;
        case 0x29a0c8u: goto label_29a0c8;
        case 0x29a0ccu: goto label_29a0cc;
        case 0x29a0d0u: goto label_29a0d0;
        case 0x29a0d4u: goto label_29a0d4;
        case 0x29a0d8u: goto label_29a0d8;
        case 0x29a0dcu: goto label_29a0dc;
        case 0x29a0e0u: goto label_29a0e0;
        case 0x29a0e4u: goto label_29a0e4;
        case 0x29a0e8u: goto label_29a0e8;
        case 0x29a0ecu: goto label_29a0ec;
        case 0x29a0f0u: goto label_29a0f0;
        case 0x29a0f4u: goto label_29a0f4;
        case 0x29a0f8u: goto label_29a0f8;
        case 0x29a0fcu: goto label_29a0fc;
        case 0x29a100u: goto label_29a100;
        case 0x29a104u: goto label_29a104;
        case 0x29a108u: goto label_29a108;
        case 0x29a10cu: goto label_29a10c;
        case 0x29a110u: goto label_29a110;
        case 0x29a114u: goto label_29a114;
        case 0x29a118u: goto label_29a118;
        case 0x29a11cu: goto label_29a11c;
        case 0x29a120u: goto label_29a120;
        case 0x29a124u: goto label_29a124;
        case 0x29a128u: goto label_29a128;
        case 0x29a12cu: goto label_29a12c;
        case 0x29a130u: goto label_29a130;
        case 0x29a134u: goto label_29a134;
        case 0x29a138u: goto label_29a138;
        case 0x29a13cu: goto label_29a13c;
        case 0x29a140u: goto label_29a140;
        case 0x29a144u: goto label_29a144;
        case 0x29a148u: goto label_29a148;
        case 0x29a14cu: goto label_29a14c;
        case 0x29a150u: goto label_29a150;
        case 0x29a154u: goto label_29a154;
        case 0x29a158u: goto label_29a158;
        case 0x29a15cu: goto label_29a15c;
        case 0x29a160u: goto label_29a160;
        case 0x29a164u: goto label_29a164;
        case 0x29a168u: goto label_29a168;
        case 0x29a16cu: goto label_29a16c;
        case 0x29a170u: goto label_29a170;
        case 0x29a174u: goto label_29a174;
        case 0x29a178u: goto label_29a178;
        case 0x29a17cu: goto label_29a17c;
        case 0x29a180u: goto label_29a180;
        case 0x29a184u: goto label_29a184;
        case 0x29a188u: goto label_29a188;
        case 0x29a18cu: goto label_29a18c;
        case 0x29a190u: goto label_29a190;
        case 0x29a194u: goto label_29a194;
        case 0x29a198u: goto label_29a198;
        case 0x29a19cu: goto label_29a19c;
        case 0x29a1a0u: goto label_29a1a0;
        case 0x29a1a4u: goto label_29a1a4;
        case 0x29a1a8u: goto label_29a1a8;
        case 0x29a1acu: goto label_29a1ac;
        case 0x29a1b0u: goto label_29a1b0;
        case 0x29a1b4u: goto label_29a1b4;
        case 0x29a1b8u: goto label_29a1b8;
        case 0x29a1bcu: goto label_29a1bc;
        case 0x29a1c0u: goto label_29a1c0;
        case 0x29a1c4u: goto label_29a1c4;
        case 0x29a1c8u: goto label_29a1c8;
        case 0x29a1ccu: goto label_29a1cc;
        case 0x29a1d0u: goto label_29a1d0;
        case 0x29a1d4u: goto label_29a1d4;
        case 0x29a1d8u: goto label_29a1d8;
        case 0x29a1dcu: goto label_29a1dc;
        case 0x29a1e0u: goto label_29a1e0;
        case 0x29a1e4u: goto label_29a1e4;
        case 0x29a1e8u: goto label_29a1e8;
        case 0x29a1ecu: goto label_29a1ec;
        case 0x29a1f0u: goto label_29a1f0;
        case 0x29a1f4u: goto label_29a1f4;
        case 0x29a1f8u: goto label_29a1f8;
        case 0x29a1fcu: goto label_29a1fc;
        case 0x29a200u: goto label_29a200;
        case 0x29a204u: goto label_29a204;
        case 0x29a208u: goto label_29a208;
        case 0x29a20cu: goto label_29a20c;
        case 0x29a210u: goto label_29a210;
        case 0x29a214u: goto label_29a214;
        case 0x29a218u: goto label_29a218;
        case 0x29a21cu: goto label_29a21c;
        case 0x29a220u: goto label_29a220;
        case 0x29a224u: goto label_29a224;
        case 0x29a228u: goto label_29a228;
        case 0x29a22cu: goto label_29a22c;
        case 0x29a230u: goto label_29a230;
        case 0x29a234u: goto label_29a234;
        case 0x29a238u: goto label_29a238;
        case 0x29a23cu: goto label_29a23c;
        case 0x29a240u: goto label_29a240;
        case 0x29a244u: goto label_29a244;
        case 0x29a248u: goto label_29a248;
        case 0x29a24cu: goto label_29a24c;
        case 0x29a250u: goto label_29a250;
        case 0x29a254u: goto label_29a254;
        case 0x29a258u: goto label_29a258;
        case 0x29a25cu: goto label_29a25c;
        case 0x29a260u: goto label_29a260;
        case 0x29a264u: goto label_29a264;
        case 0x29a268u: goto label_29a268;
        case 0x29a26cu: goto label_29a26c;
        case 0x29a270u: goto label_29a270;
        case 0x29a274u: goto label_29a274;
        case 0x29a278u: goto label_29a278;
        case 0x29a27cu: goto label_29a27c;
        case 0x29a280u: goto label_29a280;
        case 0x29a284u: goto label_29a284;
        case 0x29a288u: goto label_29a288;
        case 0x29a28cu: goto label_29a28c;
        case 0x29a290u: goto label_29a290;
        case 0x29a294u: goto label_29a294;
        case 0x29a298u: goto label_29a298;
        case 0x29a29cu: goto label_29a29c;
        case 0x29a2a0u: goto label_29a2a0;
        case 0x29a2a4u: goto label_29a2a4;
        case 0x29a2a8u: goto label_29a2a8;
        case 0x29a2acu: goto label_29a2ac;
        case 0x29a2b0u: goto label_29a2b0;
        case 0x29a2b4u: goto label_29a2b4;
        case 0x29a2b8u: goto label_29a2b8;
        case 0x29a2bcu: goto label_29a2bc;
        case 0x29a2c0u: goto label_29a2c0;
        case 0x29a2c4u: goto label_29a2c4;
        case 0x29a2c8u: goto label_29a2c8;
        case 0x29a2ccu: goto label_29a2cc;
        case 0x29a2d0u: goto label_29a2d0;
        case 0x29a2d4u: goto label_29a2d4;
        case 0x29a2d8u: goto label_29a2d8;
        case 0x29a2dcu: goto label_29a2dc;
        case 0x29a2e0u: goto label_29a2e0;
        case 0x29a2e4u: goto label_29a2e4;
        case 0x29a2e8u: goto label_29a2e8;
        case 0x29a2ecu: goto label_29a2ec;
        case 0x29a2f0u: goto label_29a2f0;
        case 0x29a2f4u: goto label_29a2f4;
        case 0x29a2f8u: goto label_29a2f8;
        case 0x29a2fcu: goto label_29a2fc;
        case 0x29a300u: goto label_29a300;
        case 0x29a304u: goto label_29a304;
        case 0x29a308u: goto label_29a308;
        case 0x29a30cu: goto label_29a30c;
        case 0x29a310u: goto label_29a310;
        case 0x29a314u: goto label_29a314;
        case 0x29a318u: goto label_29a318;
        case 0x29a31cu: goto label_29a31c;
        case 0x29a320u: goto label_29a320;
        case 0x29a324u: goto label_29a324;
        case 0x29a328u: goto label_29a328;
        case 0x29a32cu: goto label_29a32c;
        case 0x29a330u: goto label_29a330;
        case 0x29a334u: goto label_29a334;
        case 0x29a338u: goto label_29a338;
        case 0x29a33cu: goto label_29a33c;
        case 0x29a340u: goto label_29a340;
        case 0x29a344u: goto label_29a344;
        case 0x29a348u: goto label_29a348;
        case 0x29a34cu: goto label_29a34c;
        case 0x29a350u: goto label_29a350;
        case 0x29a354u: goto label_29a354;
        case 0x29a358u: goto label_29a358;
        case 0x29a35cu: goto label_29a35c;
        case 0x29a360u: goto label_29a360;
        case 0x29a364u: goto label_29a364;
        case 0x29a368u: goto label_29a368;
        case 0x29a36cu: goto label_29a36c;
        case 0x29a370u: goto label_29a370;
        case 0x29a374u: goto label_29a374;
        case 0x29a378u: goto label_29a378;
        case 0x29a37cu: goto label_29a37c;
        case 0x29a380u: goto label_29a380;
        case 0x29a384u: goto label_29a384;
        case 0x29a388u: goto label_29a388;
        case 0x29a38cu: goto label_29a38c;
        case 0x29a390u: goto label_29a390;
        case 0x29a394u: goto label_29a394;
        case 0x29a398u: goto label_29a398;
        case 0x29a39cu: goto label_29a39c;
        case 0x29a3a0u: goto label_29a3a0;
        case 0x29a3a4u: goto label_29a3a4;
        case 0x29a3a8u: goto label_29a3a8;
        case 0x29a3acu: goto label_29a3ac;
        case 0x29a3b0u: goto label_29a3b0;
        case 0x29a3b4u: goto label_29a3b4;
        case 0x29a3b8u: goto label_29a3b8;
        case 0x29a3bcu: goto label_29a3bc;
        case 0x29a3c0u: goto label_29a3c0;
        case 0x29a3c4u: goto label_29a3c4;
        case 0x29a3c8u: goto label_29a3c8;
        case 0x29a3ccu: goto label_29a3cc;
        case 0x29a3d0u: goto label_29a3d0;
        case 0x29a3d4u: goto label_29a3d4;
        case 0x29a3d8u: goto label_29a3d8;
        case 0x29a3dcu: goto label_29a3dc;
        case 0x29a3e0u: goto label_29a3e0;
        case 0x29a3e4u: goto label_29a3e4;
        case 0x29a3e8u: goto label_29a3e8;
        case 0x29a3ecu: goto label_29a3ec;
        case 0x29a3f0u: goto label_29a3f0;
        case 0x29a3f4u: goto label_29a3f4;
        case 0x29a3f8u: goto label_29a3f8;
        case 0x29a3fcu: goto label_29a3fc;
        case 0x29a400u: goto label_29a400;
        case 0x29a404u: goto label_29a404;
        case 0x29a408u: goto label_29a408;
        case 0x29a40cu: goto label_29a40c;
        case 0x29a410u: goto label_29a410;
        case 0x29a414u: goto label_29a414;
        case 0x29a418u: goto label_29a418;
        case 0x29a41cu: goto label_29a41c;
        case 0x29a420u: goto label_29a420;
        case 0x29a424u: goto label_29a424;
        case 0x29a428u: goto label_29a428;
        case 0x29a42cu: goto label_29a42c;
        case 0x29a430u: goto label_29a430;
        case 0x29a434u: goto label_29a434;
        default: return;
    }

label_299c68:
    // 0x299c68: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299c68u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299c6c:
    // 0x299c6c: 0x0  nop
    ctx->pc = 0x299c6cu;
    // NOP
label_299c70:
    // 0x299c70: 0x27ce9  .word       0x00027CE9                   # mtsa        $zero # 00027CC0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x299c70u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_299c74:
    // 0x299c74: 0xd  break       0
    ctx->pc = 0x299c74u;
    runtime->handleBreak(rdram, ctx);
label_299c78:
    // 0x299c78: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299c78u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299c7c:
    // 0x299c7c: 0x0  nop
    ctx->pc = 0x299c7cu;
    // NOP
label_299c80:
    // 0x299c80: 0x27cf6  tne         $zero, $v0, 499
    ctx->pc = 0x299c80u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_299c84:
    // 0x299c84: 0xd  break       0
    ctx->pc = 0x299c84u;
    runtime->handleBreak(rdram, ctx);
label_299c88:
    // 0x299c88: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299c88u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299c8c:
    // 0x299c8c: 0x0  nop
    ctx->pc = 0x299c8cu;
    // NOP
label_299c90:
    // 0x299c90: 0x27d03  sra         $t7, $v0, 20
    ctx->pc = 0x299c90u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 2), 20));
label_299c94:
    // 0x299c94: 0xd  break       0
    ctx->pc = 0x299c94u;
    runtime->handleBreak(rdram, ctx);
label_299c98:
    // 0x299c98: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299c98u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299c9c:
    // 0x299c9c: 0x0  nop
    ctx->pc = 0x299c9cu;
    // NOP
label_299ca0:
    // 0x299ca0: 0x27d10  .word       0x00027D10                   # mfhi        $t7 # 00020500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299ca0u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_299ca4:
    // 0x299ca4: 0xd  break       0
    ctx->pc = 0x299ca4u;
    runtime->handleBreak(rdram, ctx);
label_299ca8:
    // 0x299ca8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299ca8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299cac:
    // 0x299cac: 0x0  nop
    ctx->pc = 0x299cacu;
    // NOP
label_299cb0:
    // 0x299cb0: 0x27d1d  .word       0x00027D1D                   # dmultu      $zero, $v0 # 00007D00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299cb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x299CB0 raw=0x00027D1D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_299cb4:
    // 0x299cb4: 0xd  break       0
    ctx->pc = 0x299cb4u;
    runtime->handleBreak(rdram, ctx);
label_299cb8:
    // 0x299cb8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299cb8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299cbc:
    // 0x299cbc: 0x0  nop
    ctx->pc = 0x299cbcu;
    // NOP
label_299cc0:
    // 0x299cc0: 0x27d2a  .word       0x00027D2A                   # slt         $t7, $zero, $v0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299cc0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_299cc4:
    // 0x299cc4: 0xd  break       0
    ctx->pc = 0x299cc4u;
    runtime->handleBreak(rdram, ctx);
label_299cc8:
    // 0x299cc8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299cc8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299ccc:
    // 0x299ccc: 0x0  nop
    ctx->pc = 0x299cccu;
    // NOP
label_299cd0:
    // 0x299cd0: 0x27d37  .word       0x00027D37                   # INVALID     $zero, $v0, 0x7D37 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299cd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x299CD0 raw=0x00027D37"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_299cd4:
    // 0x299cd4: 0xd  break       0
    ctx->pc = 0x299cd4u;
    runtime->handleBreak(rdram, ctx);
label_299cd8:
    // 0x299cd8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299cd8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299cdc:
    // 0x299cdc: 0x0  nop
    ctx->pc = 0x299cdcu;
    // NOP
label_299ce0:
    // 0x299ce0: 0x27d44  .word       0x00027D44                   # sllv        $t7, $v0, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299ce0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_299ce4:
    // 0x299ce4: 0xd  break       0
    ctx->pc = 0x299ce4u;
    runtime->handleBreak(rdram, ctx);
label_299ce8:
    // 0x299ce8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299ce8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299cec:
    // 0x299cec: 0x0  nop
    ctx->pc = 0x299cecu;
    // NOP
label_299cf0:
    // 0x299cf0: 0x27d51  .word       0x00027D51                   # mthi        $zero # 00027D40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299cf0u;
    ctx->hi = GPR_U64(ctx, 0);
label_299cf4:
    // 0x299cf4: 0xd  break       0
    ctx->pc = 0x299cf4u;
    runtime->handleBreak(rdram, ctx);
label_299cf8:
    // 0x299cf8: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299cf8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299cfc:
    // 0x299cfc: 0x0  nop
    ctx->pc = 0x299cfcu;
    // NOP
label_299d00:
    // 0x299d00: 0x27d5e  .word       0x00027D5E                   # ddiv        $t7, $zero, $v0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299d00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x299D00 raw=0x00027D5E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_299d04:
    // 0x299d04: 0xd  break       0
    ctx->pc = 0x299d04u;
    runtime->handleBreak(rdram, ctx);
label_299d08:
    // 0x299d08: 0x6440  sll         $t4, $zero, 17
    ctx->pc = 0x299d08u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_299d0c:
    // 0x299d0c: 0x0  nop
    ctx->pc = 0x299d0cu;
    // NOP
label_299d10:
    // 0x299d10: 0x27d6b  .word       0x00027D6B                   # sltu        $t7, $zero, $v0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299d10u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_299d14:
    // 0x299d14: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299d14u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x299D14 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_299d18:
    // 0x299d18: 0x441  .word       0x00000441                   # INVALID     $zero, $zero, 0x441 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299d18u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x299D18 raw=0x00000441"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_299d1c:
    // 0x299d1c: 0x0  nop
    ctx->pc = 0x299d1cu;
    // NOP
label_299d20:
    // 0x299d20: 0x27d6c  .word       0x00027D6C                   # dadd        $t7, $zero, $v0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299d20u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 2); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, r); }
label_299d24:
    // 0x299d24: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299d24u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x299D24 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_299d28:
    // 0x299d28: 0x441  .word       0x00000441                   # INVALID     $zero, $zero, 0x441 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299d28u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x299D28 raw=0x00000441"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_299d2c:
    // 0x299d2c: 0x0  nop
    ctx->pc = 0x299d2cu;
    // NOP
label_299d30:
    // 0x299d30: 0x27d6d  .word       0x00027D6D                   # daddu       $t7, $zero, $v0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299d30u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 2));
label_299d34:
    // 0x299d34: 0x139  .word       0x00000139                   # INVALID     $zero, $zero, 0x139 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299d34u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x299D34 raw=0x00000139"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_299d38:
    // 0x299d38: 0x9c710  .word       0x0009C710                   # mfhi        $t8 # 00090700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299d38u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_299d3c:
    // 0x299d3c: 0x0  nop
    ctx->pc = 0x299d3cu;
    // NOP
label_299d40:
    // 0x299d40: 0x27ea6  .word       0x00027EA6                   # xor         $t7, $zero, $v0 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299d40u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 2));
label_299d44:
    // 0x299d44: 0x1ff  dsra32      $zero, $zero, 7
    ctx->pc = 0x299d44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 7));
label_299d48:
    // 0x299d48: 0xff044  .word       0x000FF044                   # sllv        $fp, $t7, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299d48u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 0) & 0x1F));
label_299d4c:
    // 0x299d4c: 0x0  nop
    ctx->pc = 0x299d4cu;
    // NOP
label_299d50:
    // 0x299d50: 0x280a5  .word       0x000280A5                   # or          $s0, $zero, $v0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299d50u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | GPR_U64(ctx, 2));
label_299d54:
    // 0x299d54: 0x225  .word       0x00000225                   # move        $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299d54u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_299d58:
    // 0x299d58: 0x112154  .word       0x00112154                   # dsllv       $a0, $s1, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299d58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (GPR_U32(ctx, 0) & 0x3F));
label_299d5c:
    // 0x299d5c: 0x0  nop
    ctx->pc = 0x299d5cu;
    // NOP
label_299d60:
    // 0x299d60: 0x282ca  .word       0x000282CA                   # movz        $s0, $zero, $v0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299d60u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_299d64:
    // 0x299d64: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299d64u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x299D64 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_299d68:
    // 0x299d68: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299d68u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_299d6c:
    // 0x299d6c: 0x0  nop
    ctx->pc = 0x299d6cu;
    // NOP
label_299d70:
    // 0x299d70: 0x282cb  .word       0x000282CB                   # movn        $s0, $zero, $v0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299d70u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_299d74:
    // 0x299d74: 0x161  .word       0x00000161                   # addu        $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299d74u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_299d78:
    // 0x299d78: 0xb053c  dsll32      $zero, $t3, 20
    ctx->pc = 0x299d78u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 11) << (32 + 20));
label_299d7c:
    // 0x299d7c: 0x0  nop
    ctx->pc = 0x299d7cu;
    // NOP
label_299d80:
    // 0x299d80: 0x2842c  .word       0x0002842C                   # dadd        $s0, $zero, $v0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299d80u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 2); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_299d84:
    // 0x299d84: 0x8c  syscall     2
    ctx->pc = 0x299d84u;
    ctx->pc = 0x299D88u;
runtime->handleSyscall(rdram, ctx, 0x2u);
label_299d88:
    // 0x299d88: 0x459d0  .word       0x000459D0                   # mfhi        $t3 # 000401C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299d88u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_299d8c:
    // 0x299d8c: 0x0  nop
    ctx->pc = 0x299d8cu;
    // NOP
label_299d90:
    // 0x299d90: 0x284b8  dsll        $s0, $v0, 18
    ctx->pc = 0x299d90u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << 18);
label_299d94:
    // 0x299d94: 0xdf  .word       0x000000DF                   # ddivu       $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299d94u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x299D94 raw=0x000000DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_299d98:
    // 0x299d98: 0x6f5d0  .word       0x0006F5D0                   # mfhi        $fp # 000605C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299d98u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_299d9c:
    // 0x299d9c: 0x0  nop
    ctx->pc = 0x299d9cu;
    // NOP
label_299da0:
    // 0x299da0: 0x28597  .word       0x00028597                   # dsrav       $s0, $v0, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299da0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 2) >> (GPR_U32(ctx, 0) & 0x3F));
label_299da4:
    // 0x299da4: 0x2c0  sll         $zero, $zero, 11
    ctx->pc = 0x299da4u;
    
label_299da8:
    // 0x299da8: 0x15f8a4  .word       0x0015F8A4                   # and         $ra, $zero, $s5 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299da8u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) & GPR_U64(ctx, 21));
label_299dac:
    // 0x299dac: 0x0  nop
    ctx->pc = 0x299dacu;
    // NOP
label_299db0:
    // 0x299db0: 0x28857  .word       0x00028857                   # dsrav       $s1, $v0, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299db0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 2) >> (GPR_U32(ctx, 0) & 0x3F));
label_299db4:
    // 0x299db4: 0x2ae  .word       0x000002AE                   # dsub        $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299db4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_299db8:
    // 0x299db8: 0x156918  .word       0x00156918                   # mult        $t5, $zero, $s5 # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x299db8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_299dbc:
    // 0x299dbc: 0x0  nop
    ctx->pc = 0x299dbcu;
    // NOP
label_299dc0:
    // 0x299dc0: 0x28b05  .word       0x00028B05                   # INVALID     $zero, $v0, -0x74FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299dc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x299DC0 raw=0x00028B05"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_299dc4:
    // 0x299dc4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299dc4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x299DC4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_299dc8:
    // 0x299dc8: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299dc8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_299dcc:
    // 0x299dcc: 0x0  nop
    ctx->pc = 0x299dccu;
    // NOP
label_299dd0:
    // 0x299dd0: 0x28b06  .word       0x00028B06                   # srlv        $s1, $v0, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299dd0u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_299dd4:
    // 0x299dd4: 0xe0  .word       0x000000E0                   # add         $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299dd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_299dd8:
    // 0x299dd8: 0x6f860  .word       0x0006F860                   # add         $ra, $zero, $a2 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299dd8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_299ddc:
    // 0x299ddc: 0x0  nop
    ctx->pc = 0x299ddcu;
    // NOP
label_299de0:
    // 0x299de0: 0x28be6  .word       0x00028BE6                   # xor         $s1, $zero, $v0 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299de0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 2));
label_299de4:
    // 0x299de4: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299de4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_299de8:
    // 0x299de8: 0x2ff90  .word       0x0002FF90                   # mfhi        $ra # 00020780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299de8u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_299dec:
    // 0x299dec: 0x0  nop
    ctx->pc = 0x299decu;
    // NOP
label_299df0:
    // 0x299df0: 0x28c46  .word       0x00028C46                   # srlv        $s1, $v0, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299df0u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_299df4:
    // 0x299df4: 0x114  .word       0x00000114                   # dsllv       $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299df4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_299df8:
    // 0x299df8: 0x89a30  tge         $zero, $t0, 616
    ctx->pc = 0x299df8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 8)) { runtime->handleTrap(rdram, ctx); }
label_299dfc:
    // 0x299dfc: 0x0  nop
    ctx->pc = 0x299dfcu;
    // NOP
label_299e00:
    // 0x299e00: 0x28d5a  .word       0x00028D5A                   # div         $s1, $zero, $v0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299e00u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_299e04:
    // 0x299e04: 0x11f  .word       0x0000011F                   # ddivu       $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299e04u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x299E04 raw=0x0000011F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_299e08:
    // 0x299e08: 0x8f1ac  .word       0x0008F1AC                   # dadd        $fp, $zero, $t0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299e08u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 8); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 30, r); }
label_299e0c:
    // 0x299e0c: 0x0  nop
    ctx->pc = 0x299e0cu;
    // NOP
label_299e10:
    // 0x299e10: 0x28e79  .word       0x00028E79                   # INVALID     $zero, $v0, -0x7187 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299e10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x299E10 raw=0x00028E79"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_299e14:
    // 0x299e14: 0x19c  .word       0x0000019C                   # dmult       $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299e14u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x299E14 raw=0x0000019C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_299e18:
    // 0x299e18: 0xcde40  sll         $k1, $t4, 25
    ctx->pc = 0x299e18u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 12), 25));
label_299e1c:
    // 0x299e1c: 0x0  nop
    ctx->pc = 0x299e1cu;
    // NOP
label_299e20:
    // 0x299e20: 0x29015  .word       0x00029015                   # INVALID     $zero, $v0, -0x6FEB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299e20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x299E20 raw=0x00029015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_299e24:
    // 0x299e24: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299e24u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x299E24 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_299e28:
    // 0x299e28: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299e28u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_299e2c:
    // 0x299e2c: 0x0  nop
    ctx->pc = 0x299e2cu;
    // NOP
label_299e30:
    // 0x299e30: 0x29016  dsrlv       $s2, $v0, $zero
    ctx->pc = 0x299e30u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 0) & 0x3F));
label_299e34:
    // 0x299e34: 0x70  tge         $zero, $zero, 1
    ctx->pc = 0x299e34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_299e38:
    // 0x299e38: 0x37ae0  .word       0x00037AE0                   # add         $t7, $zero, $v1 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299e38u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_299e3c:
    // 0x299e3c: 0x0  nop
    ctx->pc = 0x299e3cu;
    // NOP
label_299e40:
    // 0x299e40: 0x29086  .word       0x00029086                   # srlv        $s2, $v0, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299e40u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_299e44:
    // 0x299e44: 0x43  sra         $zero, $zero, 1
    ctx->pc = 0x299e44u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 1));
label_299e48:
    // 0x299e48: 0x21030  tge         $zero, $v0, 64
    ctx->pc = 0x299e48u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_299e4c:
    // 0x299e4c: 0x0  nop
    ctx->pc = 0x299e4cu;
    // NOP
label_299e50:
    // 0x299e50: 0x290c9  .word       0x000290C9                   # jalr        $s2, $zero # 000200C0 <InstrIdType: CPU_SPECIAL>
label_299e54:
    if (ctx->pc == 0x299E54u) {
        ctx->pc = 0x299E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299E50u;
        // 0x299e54: 0x14c  syscall     5 (Delay Slot)
        ctx->pc = 0x299E58u;
        runtime->handleSyscall(rdram, ctx, 0x5u);
        ctx->in_delay_slot = false;
        ctx->pc = 0x299E58u;
        goto label_299e58;
    }
    ctx->pc = 0x299E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 18, 0x299E58u);
        ctx->pc = 0x299E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299E50u;
        // 0x299e54: 0x14c  syscall     5 (Delay Slot)
        ctx->pc = 0x299E58u;
        runtime->handleSyscall(rdram, ctx, 0x5u);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299E50u, 0x299E58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x299E58u;
label_299e58:
    // 0x299e58: 0xa5850  .word       0x000A5850                   # mfhi        $t3 # 000A0040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299e58u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_299e5c:
    // 0x299e5c: 0x0  nop
    ctx->pc = 0x299e5cu;
    // NOP
label_299e60:
    // 0x299e60: 0x29215  .word       0x00029215                   # INVALID     $zero, $v0, -0x6DEB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299e60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x299E60 raw=0x00029215"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_299e64:
    // 0x299e64: 0xa9  .word       0x000000A9                   # mtsa        $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x299e64u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_299e68:
    // 0x299e68: 0x54374  teq         $zero, $a1, 269
    ctx->pc = 0x299e68u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 5)) { runtime->handleTrap(rdram, ctx); }
label_299e6c:
    // 0x299e6c: 0x0  nop
    ctx->pc = 0x299e6cu;
    // NOP
label_299e70:
    // 0x299e70: 0x292be  dsrl32      $s2, $v0, 10
    ctx->pc = 0x299e70u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> (32 + 10));
label_299e74:
    // 0x299e74: 0xd5  .word       0x000000D5                   # INVALID     $zero, $zero, 0xD5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299e74u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x299E74 raw=0x000000D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_299e78:
    // 0x299e78: 0x6a538  dsll        $s4, $a2, 20
    ctx->pc = 0x299e78u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 6) << 20);
label_299e7c:
    // 0x299e7c: 0x0  nop
    ctx->pc = 0x299e7cu;
    // NOP
label_299e80:
    // 0x299e80: 0x29393  .word       0x00029393                   # mtlo        $zero # 00029380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299e80u;
    ctx->lo = GPR_U64(ctx, 0);
label_299e84:
    // 0x299e84: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299e84u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x299E84 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_299e88:
    // 0x299e88: 0x280  sll         $zero, $zero, 10
    ctx->pc = 0x299e88u;
    
label_299e8c:
    // 0x299e8c: 0x0  nop
    ctx->pc = 0x299e8cu;
    // NOP
label_299e90:
    // 0x299e90: 0x29394  .word       0x00029394                   # dsllv       $s2, $v0, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299e90u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (GPR_U32(ctx, 0) & 0x3F));
label_299e94:
    // 0x299e94: 0x137  .word       0x00000137                   # INVALID     $zero, $zero, 0x137 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299e94u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x299E94 raw=0x00000137"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_299e98:
    // 0x299e98: 0x9b580  sll         $s6, $t1, 22
    ctx->pc = 0x299e98u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 9), 22));
label_299e9c:
    // 0x299e9c: 0x0  nop
    ctx->pc = 0x299e9cu;
    // NOP
label_299ea0:
    // 0x299ea0: 0x294cb  .word       0x000294CB                   # movn        $s2, $zero, $v0 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299ea0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_299ea4:
    // 0x299ea4: 0xd6  .word       0x000000D6                   # dsrlv       $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299ea4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_299ea8:
    // 0x299ea8: 0x6ae10  .word       0x0006AE10                   # mfhi        $s5 # 00060600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299ea8u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_299eac:
    // 0x299eac: 0x0  nop
    ctx->pc = 0x299eacu;
    // NOP
label_299eb0:
    // 0x299eb0: 0x295a1  .word       0x000295A1                   # addu        $s2, $zero, $v0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299eb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_299eb4:
    // 0x299eb4: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x299eb4u;
    
label_299eb8:
    // 0x299eb8: 0x3ffb0  tge         $zero, $v1, 1022
    ctx->pc = 0x299eb8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_299ebc:
    // 0x299ebc: 0x0  nop
    ctx->pc = 0x299ebcu;
    // NOP
label_299ec0:
    // 0x299ec0: 0x29621  .word       0x00029621                   # addu        $s2, $zero, $v0 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299ec0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_299ec4:
    // 0x299ec4: 0xee  .word       0x000000EE                   # dsub        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299ec4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_299ec8:
    // 0x299ec8: 0x76c74  teq         $zero, $a3, 433
    ctx->pc = 0x299ec8u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
label_299ecc:
    // 0x299ecc: 0x0  nop
    ctx->pc = 0x299eccu;
    // NOP
label_299ed0:
    // 0x299ed0: 0x2970f  .word       0x0002970F                   # sync.p # 00029000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299ed0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_299ed4:
    // 0x299ed4: 0xa2  .word       0x000000A2                   # neg         $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299ed4u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_299ed8:
    // 0x299ed8: 0x508b8  dsll        $at, $a1, 2
    ctx->pc = 0x299ed8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 5) << 2);
label_299edc:
    // 0x299edc: 0x0  nop
    ctx->pc = 0x299edcu;
    // NOP
label_299ee0:
    // 0x299ee0: 0x297b1  tgeu        $zero, $v0, 606
    ctx->pc = 0x299ee0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_299ee4:
    // 0x299ee4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299ee4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x299EE4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_299ee8:
    // 0x299ee8: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299ee8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_299eec:
    // 0x299eec: 0x0  nop
    ctx->pc = 0x299eecu;
    // NOP
label_299ef0:
    // 0x299ef0: 0x297b2  tlt         $zero, $v0, 606
    ctx->pc = 0x299ef0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_299ef4:
    // 0x299ef4: 0x7e  dsrl32      $zero, $zero, 1
    ctx->pc = 0x299ef4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 1));
label_299ef8:
    // 0x299ef8: 0x3ee48  .word       0x0003EE48                   # jr          $zero # 0003EE40 <InstrIdType: CPU_SPECIAL>
label_299efc:
    if (ctx->pc == 0x299EFCu) {
        ctx->pc = 0x299F00u;
        goto label_299f00;
    }
    ctx->pc = 0x299EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299EF8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x299F00u;
label_299f00:
    // 0x299f00: 0x29830  tge         $zero, $v0, 608
    ctx->pc = 0x299f00u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_299f04:
    // 0x299f04: 0x56  .word       0x00000056                   # dsrlv       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299f04u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_299f08:
    // 0x299f08: 0x2a950  .word       0x0002A950                   # mfhi        $s5 # 00020140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299f08u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_299f0c:
    // 0x299f0c: 0x0  nop
    ctx->pc = 0x299f0cu;
    // NOP
label_299f10:
    // 0x299f10: 0x29886  .word       0x00029886                   # srlv        $s3, $v0, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299f10u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_299f14:
    // 0x299f14: 0x1c0  sll         $zero, $zero, 7
    ctx->pc = 0x299f14u;
    
label_299f18:
    // 0x299f18: 0xdfd10  .word       0x000DFD10                   # mfhi        $ra # 000D0500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299f18u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_299f1c:
    // 0x299f1c: 0x0  nop
    ctx->pc = 0x299f1cu;
    // NOP
label_299f20:
    // 0x299f20: 0x29a46  .word       0x00029A46                   # srlv        $s3, $v0, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299f20u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_299f24:
    // 0x299f24: 0x1ac  .word       0x000001AC                   # dadd        $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299f24u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_299f28:
    // 0x299f28: 0xd5e24  .word       0x000D5E24                   # and         $t3, $zero, $t5 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299f28u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) & GPR_U64(ctx, 13));
label_299f2c:
    // 0x299f2c: 0x0  nop
    ctx->pc = 0x299f2cu;
    // NOP
label_299f30:
    // 0x299f30: 0x29bf2  tlt         $zero, $v0, 623
    ctx->pc = 0x299f30u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_299f34:
    // 0x299f34: 0x305  .word       0x00000305                   # INVALID     $zero, $zero, 0x305 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299f34u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x299F34 raw=0x00000305"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_299f38:
    // 0x299f38: 0x182590  .word       0x00182590                   # mfhi        $a0 # 00180580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299f38u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_299f3c:
    // 0x299f3c: 0x0  nop
    ctx->pc = 0x299f3cu;
    // NOP
label_299f40:
    // 0x299f40: 0x29ef7  .word       0x00029EF7                   # INVALID     $zero, $v0, -0x6109 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299f40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x299F40 raw=0x00029EF7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_299f44:
    // 0x299f44: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299f44u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x299F44 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_299f48:
    // 0x299f48: 0x440  sll         $zero, $zero, 17
    ctx->pc = 0x299f48u;
    
label_299f4c:
    // 0x299f4c: 0x0  nop
    ctx->pc = 0x299f4cu;
    // NOP
label_299f50:
    // 0x299f50: 0x29ef8  dsll        $s3, $v0, 27
    ctx->pc = 0x299f50u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << 27);
label_299f54:
    // 0x299f54: 0x123  .word       0x00000123                   # negu        $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299f54u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_299f58:
    // 0x299f58: 0x91030  tge         $zero, $t1, 64
    ctx->pc = 0x299f58u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_299f5c:
    // 0x299f5c: 0x0  nop
    ctx->pc = 0x299f5cu;
    // NOP
label_299f60:
    // 0x299f60: 0x2a01b  divu        $s4, $zero, $v0
    ctx->pc = 0x299f60u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_299f64:
    // 0x299f64: 0x8f  sync
    ctx->pc = 0x299f64u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_299f68:
    // 0x299f68: 0x47370  tge         $zero, $a0, 461
    ctx->pc = 0x299f68u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_299f6c:
    // 0x299f6c: 0x0  nop
    ctx->pc = 0x299f6cu;
    // NOP
label_299f70:
    // 0x299f70: 0x2a0aa  .word       0x0002A0AA                   # slt         $s4, $zero, $v0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299f70u;
    SET_GPR_U64(ctx, 20, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_299f74:
    // 0x299f74: 0x126  .word       0x00000126                   # xor         $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299f74u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_299f78:
    // 0x299f78: 0x92c80  sll         $a1, $t1, 18
    ctx->pc = 0x299f78u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 18));
label_299f7c:
    // 0x299f7c: 0x0  nop
    ctx->pc = 0x299f7cu;
    // NOP
label_299f80:
    // 0x299f80: 0x2a1d0  .word       0x0002A1D0                   # mfhi        $s4 # 000201C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299f80u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_299f84:
    // 0x299f84: 0x137  .word       0x00000137                   # INVALID     $zero, $zero, 0x137 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299f84u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x299F84 raw=0x00000137"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_299f88:
    // 0x299f88: 0x9b744  .word       0x0009B744                   # sllv        $s6, $t1, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299f88u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 0) & 0x1F));
label_299f8c:
    // 0x299f8c: 0x0  nop
    ctx->pc = 0x299f8cu;
    // NOP
label_299f90:
    // 0x299f90: 0x2a307  .word       0x0002A307                   # srav        $s4, $v0, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299f90u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_299f94:
    // 0x299f94: 0x3db  .word       0x000003DB                   # divu        $zero, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299f94u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_299f98:
    // 0x299f98: 0x1ed640  sll         $k0, $fp, 25
    ctx->pc = 0x299f98u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 30), 25));
label_299f9c:
    // 0x299f9c: 0x0  nop
    ctx->pc = 0x299f9cu;
    // NOP
label_299fa0:
    // 0x299fa0: 0x2a6e2  .word       0x0002A6E2                   # neg         $s4, $v0 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299fa0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 2), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_299fa4:
    // 0x299fa4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299fa4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x299FA4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_299fa8:
    // 0x299fa8: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299fa8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_299fac:
    // 0x299fac: 0x0  nop
    ctx->pc = 0x299facu;
    // NOP
label_299fb0:
    // 0x299fb0: 0x2a6e3  .word       0x0002A6E3                   # negu        $s4, $v0 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299fb0u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_299fb4:
    // 0x299fb4: 0x63  .word       0x00000063                   # negu        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299fb4u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_299fb8:
    // 0x299fb8: 0x310d0  .word       0x000310D0                   # mfhi        $v0 # 000300C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299fb8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_299fbc:
    // 0x299fbc: 0x0  nop
    ctx->pc = 0x299fbcu;
    // NOP
label_299fc0:
    // 0x299fc0: 0x2a746  .word       0x0002A746                   # srlv        $s4, $v0, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299fc0u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_299fc4:
    // 0x299fc4: 0x4f  sync
    ctx->pc = 0x299fc4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_299fc8:
    // 0x299fc8: 0x27110  .word       0x00027110                   # mfhi        $t6 # 00020100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299fc8u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_299fcc:
    // 0x299fcc: 0x0  nop
    ctx->pc = 0x299fccu;
    // NOP
label_299fd0:
    // 0x299fd0: 0x2a795  .word       0x0002A795                   # INVALID     $zero, $v0, -0x586B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299fd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x299FD0 raw=0x0002A795"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_299fd4:
    // 0x299fd4: 0xd4  .word       0x000000D4                   # dsllv       $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299fd4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_299fd8:
    // 0x299fd8: 0x69a30  tge         $zero, $a2, 616
    ctx->pc = 0x299fd8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 6)) { runtime->handleTrap(rdram, ctx); }
label_299fdc:
    // 0x299fdc: 0x0  nop
    ctx->pc = 0x299fdcu;
    // NOP
label_299fe0:
    // 0x299fe0: 0x2a869  .word       0x0002A869                   # mtsa        $zero # 0002A840 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x299fe0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_299fe4:
    // 0x299fe4: 0x1fb  dsra        $zero, $zero, 7
    ctx->pc = 0x299fe4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 7);
label_299fe8:
    // 0x299fe8: 0xfd1b4  teq         $zero, $t7, 838
    ctx->pc = 0x299fe8u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 15)) { runtime->handleTrap(rdram, ctx); }
label_299fec:
    // 0x299fec: 0x0  nop
    ctx->pc = 0x299fecu;
    // NOP
label_299ff0:
    // 0x299ff0: 0x2aa64  .word       0x0002AA64                   # and         $s5, $zero, $v0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299ff0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) & GPR_U64(ctx, 2));
label_299ff4:
    // 0x299ff4: 0x3b3  tltu        $zero, $zero, 14
    ctx->pc = 0x299ff4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_299ff8:
    // 0x299ff8: 0x1d94ec  .word       0x001D94EC                   # dadd        $s2, $zero, $sp # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x299ff8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 29); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, r); }
label_299ffc:
    // 0x299ffc: 0x0  nop
    ctx->pc = 0x299ffcu;
    // NOP
label_29a000:
    // 0x29a000: 0x2ae17  .word       0x0002AE17                   # dsrav       $s5, $v0, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a000u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 2) >> (GPR_U32(ctx, 0) & 0x3F));
label_29a004:
    // 0x29a004: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a004u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29A004 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a008:
    // 0x29a008: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a008u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29a00c:
    // 0x29a00c: 0x0  nop
    ctx->pc = 0x29a00cu;
    // NOP
label_29a010:
    // 0x29a010: 0x2ae18  .word       0x0002AE18                   # mult        $s5, $zero, $v0 # 00000600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29a010u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_29a014:
    // 0x29a014: 0x67  .word       0x00000067                   # not         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a014u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_29a018:
    // 0x29a018: 0x33020  add         $a2, $zero, $v1
    ctx->pc = 0x29a018u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_29a01c:
    // 0x29a01c: 0x0  nop
    ctx->pc = 0x29a01cu;
    // NOP
label_29a020:
    // 0x29a020: 0x2ae7f  dsra32      $s5, $v0, 25
    ctx->pc = 0x29a020u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 2) >> (32 + 25));
label_29a024:
    // 0x29a024: 0x15a  .word       0x0000015A                   # div         $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a024u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_29a028:
    // 0x29a028: 0xac810  .word       0x000AC810                   # mfhi        $t9 # 000A0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a028u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_29a02c:
    // 0x29a02c: 0x0  nop
    ctx->pc = 0x29a02cu;
    // NOP
label_29a030:
    // 0x29a030: 0x2afd9  .word       0x0002AFD9                   # multu       $zero, $v0 # 0000AFC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a030u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_29a034:
    // 0x29a034: 0x1fe  dsrl32      $zero, $zero, 7
    ctx->pc = 0x29a034u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 7));
label_29a038:
    // 0x29a038: 0xfe8e0  .word       0x000FE8E0                   # add         $sp, $zero, $t7 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a038u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 15);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_29a03c:
    // 0x29a03c: 0x0  nop
    ctx->pc = 0x29a03cu;
    // NOP
label_29a040:
    // 0x29a040: 0x2b1d7  .word       0x0002B1D7                   # dsrav       $s6, $v0, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a040u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 2) >> (GPR_U32(ctx, 0) & 0x3F));
label_29a044:
    // 0x29a044: 0x221  .word       0x00000221                   # addu        $zero, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a044u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29a048:
    // 0x29a048: 0x110254  .word       0x00110254                   # dsllv       $zero, $s1, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a048u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 17) << (GPR_U32(ctx, 0) & 0x3F));
label_29a04c:
    // 0x29a04c: 0x0  nop
    ctx->pc = 0x29a04cu;
    // NOP
label_29a050:
    // 0x29a050: 0x2b3f8  dsll        $s6, $v0, 15
    ctx->pc = 0x29a050u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << 15);
label_29a054:
    // 0x29a054: 0x40a  .word       0x0000040A                   # movz        $zero, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a054u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29a058:
    // 0x29a058: 0x204b20  .word       0x00204B20                   # add         $t1, $at, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a058u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_29a05c:
    // 0x29a05c: 0x0  nop
    ctx->pc = 0x29a05cu;
    // NOP
label_29a060:
    // 0x29a060: 0x2b802  srl         $s7, $v0, 0
    ctx->pc = 0x29a060u;
    SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 2), 0));
label_29a064:
    // 0x29a064: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a064u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29A064 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a068:
    // 0x29a068: 0x1a0  .word       0x000001A0                   # add         $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a068u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29a06c:
    // 0x29a06c: 0x0  nop
    ctx->pc = 0x29a06cu;
    // NOP
label_29a070:
    // 0x29a070: 0x2b803  sra         $s7, $v0, 0
    ctx->pc = 0x29a070u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 2), 0));
label_29a074:
    // 0x29a074: 0xa8  .word       0x000000A8                   # mfsa        $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29a074u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_29a078:
    // 0x29a078: 0x53f08  .word       0x00053F08                   # jr          $zero # 00053F00 <InstrIdType: CPU_SPECIAL>
label_29a07c:
    if (ctx->pc == 0x29A07Cu) {
        ctx->pc = 0x29A080u;
        goto label_29a080;
    }
    ctx->pc = 0x29A078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A078u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29A080u;
label_29a080:
    // 0x29a080: 0x2b8ab  .word       0x0002B8AB                   # sltu        $s7, $zero, $v0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a080u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_29a084:
    // 0x29a084: 0x61  .word       0x00000061                   # addu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a084u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29a088:
    // 0x29a088: 0x30210  .word       0x00030210                   # mfhi        $zero # 00030200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a088u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29a08c:
    // 0x29a08c: 0x0  nop
    ctx->pc = 0x29a08cu;
    // NOP
label_29a090:
    // 0x29a090: 0x2b90c  .word       0x0002B90C                   # syscall     740 # 00020000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a090u;
    ctx->pc = 0x29A094u;
runtime->handleSyscall(rdram, ctx, 0xAE4u);
label_29a094:
    // 0x29a094: 0x55  .word       0x00000055                   # INVALID     $zero, $zero, 0x55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a094u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29A094 raw=0x00000055"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a098:
    // 0x29a098: 0x2a1e0  .word       0x0002A1E0                   # add         $s4, $zero, $v0 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a098u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_29a09c:
    // 0x29a09c: 0x0  nop
    ctx->pc = 0x29a09cu;
    // NOP
label_29a0a0:
    // 0x29a0a0: 0x2b961  .word       0x0002B961                   # addu        $s7, $zero, $v0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a0a0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_29a0a4:
    // 0x29a0a4: 0x141  .word       0x00000141                   # INVALID     $zero, $zero, 0x141 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a0a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29A0A4 raw=0x00000141"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a0a8:
    // 0x29a0a8: 0xa02e4  .word       0x000A02E4                   # and         $zero, $zero, $t2 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a0a8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 10));
label_29a0ac:
    // 0x29a0ac: 0x0  nop
    ctx->pc = 0x29a0acu;
    // NOP
label_29a0b0:
    // 0x29a0b0: 0x2baa2  .word       0x0002BAA2                   # neg         $s7, $v0 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a0b0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 2), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 23, (int32_t)tmp); }
label_29a0b4:
    // 0x29a0b4: 0x15d  .word       0x0000015D                   # dmultu      $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a0b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29A0B4 raw=0x0000015D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a0b8:
    // 0x29a0b8: 0xae06c  .word       0x000AE06C                   # dadd        $gp, $zero, $t2 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a0b8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 10); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 28, r); }
label_29a0bc:
    // 0x29a0bc: 0x0  nop
    ctx->pc = 0x29a0bcu;
    // NOP
label_29a0c0:
    // 0x29a0c0: 0x2bbff  dsra32      $s7, $v0, 15
    ctx->pc = 0x29a0c0u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 2) >> (32 + 15));
label_29a0c4:
    // 0x29a0c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a0c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29A0C4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a0c8:
    // 0x29a0c8: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a0c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29a0cc:
    // 0x29a0cc: 0x0  nop
    ctx->pc = 0x29a0ccu;
    // NOP
label_29a0d0:
    // 0x29a0d0: 0x2bc00  sll         $s7, $v0, 16
    ctx->pc = 0x29a0d0u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_29a0d4:
    // 0x29a0d4: 0x59  .word       0x00000059                   # multu       $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a0d4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29a0d8:
    // 0x29a0d8: 0x2c060  .word       0x0002C060                   # add         $t8, $zero, $v0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a0d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_29a0dc:
    // 0x29a0dc: 0x0  nop
    ctx->pc = 0x29a0dcu;
    // NOP
label_29a0e0:
    // 0x29a0e0: 0x2bc59  .word       0x0002BC59                   # multu       $zero, $v0 # 0000BC40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a0e0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
label_29a0e4:
    // 0x29a0e4: 0x7f  dsra32      $zero, $zero, 1
    ctx->pc = 0x29a0e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 1));
label_29a0e8:
    // 0x29a0e8: 0x3f5d0  .word       0x0003F5D0                   # mfhi        $fp # 000305C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a0e8u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_29a0ec:
    // 0x29a0ec: 0x0  nop
    ctx->pc = 0x29a0ecu;
    // NOP
label_29a0f0:
    // 0x29a0f0: 0x2bcd8  .word       0x0002BCD8                   # mult        $s7, $zero, $v0 # 000004C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29a0f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
label_29a0f4:
    // 0x29a0f4: 0xc8  .word       0x000000C8                   # jr          $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
label_29a0f8:
    if (ctx->pc == 0x29A0F8u) {
        ctx->pc = 0x29A0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A0F4u;
        // 0x29a0f8: 0x63e20  .word       0x00063E20                   # add         $a3, $zero, $a2 # 00000600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A0FCu;
        goto label_29a0fc;
    }
    ctx->pc = 0x29A0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29A0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A0F4u;
        // 0x29a0f8: 0x63e20  .word       0x00063E20                   # add         $a3, $zero, $a2 # 00000600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A0F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29A0FCu;
label_29a0fc:
    // 0x29a0fc: 0x0  nop
    ctx->pc = 0x29a0fcu;
    // NOP
label_29a100:
    // 0x29a100: 0x2bda0  .word       0x0002BDA0                   # add         $s7, $zero, $v0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a100u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_29a104:
    // 0x29a104: 0xdd  .word       0x000000DD                   # dmultu      $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a104u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29A104 raw=0x000000DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a108:
    // 0x29a108: 0x6e694  .word       0x0006E694                   # dsllv       $gp, $a2, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a108u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 6) << (GPR_U32(ctx, 0) & 0x3F));
label_29a10c:
    // 0x29a10c: 0x0  nop
    ctx->pc = 0x29a10cu;
    // NOP
label_29a110:
    // 0x29a110: 0x2be7d  .word       0x0002BE7D                   # INVALID     $zero, $v0, -0x4183 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a110u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29A110 raw=0x0002BE7D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a114:
    // 0x29a114: 0x1f3  tltu        $zero, $zero, 7
    ctx->pc = 0x29a114u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29a118:
    // 0x29a118: 0xf92e8  .word       0x000F92E8                   # mfsa        $s2 # 000F02C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29a118u;
    SET_GPR_U32(ctx, 18, ctx->sa);
label_29a11c:
    // 0x29a11c: 0x0  nop
    ctx->pc = 0x29a11cu;
    // NOP
label_29a120:
    // 0x29a120: 0x2c070  tge         $zero, $v0, 769
    ctx->pc = 0x29a120u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_29a124:
    // 0x29a124: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a124u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29A124 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a128:
    // 0x29a128: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a128u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29a12c:
    // 0x29a12c: 0x0  nop
    ctx->pc = 0x29a12cu;
    // NOP
label_29a130:
    // 0x29a130: 0x2c071  tgeu        $zero, $v0, 769
    ctx->pc = 0x29a130u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_29a134:
    // 0x29a134: 0x47  .word       0x00000047                   # srav        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a134u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29a138:
    // 0x29a138: 0x23418  .word       0x00023418                   # mult        $a2, $zero, $v0 # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29a138u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_29a13c:
    // 0x29a13c: 0x0  nop
    ctx->pc = 0x29a13cu;
    // NOP
label_29a140:
    // 0x29a140: 0x2c0b8  dsll        $t8, $v0, 2
    ctx->pc = 0x29a140u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 2) << 2);
label_29a144:
    // 0x29a144: 0x3b  dsra        $zero, $zero, 0
    ctx->pc = 0x29a144u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 0);
label_29a148:
    // 0x29a148: 0x1d2f0  tge         $zero, $at, 843
    ctx->pc = 0x29a148u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_29a14c:
    // 0x29a14c: 0x0  nop
    ctx->pc = 0x29a14cu;
    // NOP
label_29a150:
    // 0x29a150: 0x2c0f3  tltu        $zero, $v0, 771
    ctx->pc = 0x29a150u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_29a154:
    // 0x29a154: 0xce  .word       0x000000CE                   # INVALID     $zero, $zero, 0xCE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a154u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29A154 raw=0x000000CE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a158:
    // 0x29a158: 0x668a0  .word       0x000668A0                   # add         $t5, $zero, $a2 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a158u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_29a15c:
    // 0x29a15c: 0x0  nop
    ctx->pc = 0x29a15cu;
    // NOP
label_29a160:
    // 0x29a160: 0x2c1c1  .word       0x0002C1C1                   # INVALID     $zero, $v0, -0x3E3F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a160u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29A160 raw=0x0002C1C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a164:
    // 0x29a164: 0x1eb  .word       0x000001EB                   # sltu        $zero, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a164u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_29a168:
    // 0x29a168: 0xf523c  dsll32      $t2, $t7, 8
    ctx->pc = 0x29a168u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 15) << (32 + 8));
label_29a16c:
    // 0x29a16c: 0x0  nop
    ctx->pc = 0x29a16cu;
    // NOP
label_29a170:
    // 0x29a170: 0x2c3ac  .word       0x0002C3AC                   # dadd        $t8, $zero, $v0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a170u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 2); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 24, r); }
label_29a174:
    // 0x29a174: 0x3e4  .word       0x000003E4                   # and         $zero, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a174u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29a178:
    // 0x29a178: 0x1f1d34  teq         $zero, $ra, 116
    ctx->pc = 0x29a178u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 31)) { runtime->handleTrap(rdram, ctx); }
label_29a17c:
    // 0x29a17c: 0x0  nop
    ctx->pc = 0x29a17cu;
    // NOP
label_29a180:
    // 0x29a180: 0x2c790  .word       0x0002C790                   # mfhi        $t8 # 00020780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a180u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_29a184:
    // 0x29a184: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a184u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29A184 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a188:
    // 0x29a188: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a188u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29a18c:
    // 0x29a18c: 0x0  nop
    ctx->pc = 0x29a18cu;
    // NOP
label_29a190:
    // 0x29a190: 0x2c791  .word       0x0002C791                   # mthi        $zero # 0002C780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a190u;
    ctx->hi = GPR_U64(ctx, 0);
label_29a194:
    // 0x29a194: 0x6c  .word       0x0000006C                   # dadd        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a194u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29a198:
    // 0x29a198: 0x35d08  .word       0x00035D08                   # jr          $zero # 00035D00 <InstrIdType: CPU_SPECIAL>
label_29a19c:
    if (ctx->pc == 0x29A19Cu) {
        ctx->pc = 0x29A1A0u;
        goto label_29a1a0;
    }
    ctx->pc = 0x29A198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A198u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29A1A0u;
label_29a1a0:
    // 0x29a1a0: 0x2c7fd  .word       0x0002C7FD                   # INVALID     $zero, $v0, -0x3803 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a1a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29A1A0 raw=0x0002C7FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a1a4:
    // 0x29a1a4: 0x6a  .word       0x0000006A                   # slt         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a1a4u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_29a1a8:
    // 0x29a1a8: 0x34ef0  tge         $zero, $v1, 315
    ctx->pc = 0x29a1a8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29a1ac:
    // 0x29a1ac: 0x0  nop
    ctx->pc = 0x29a1acu;
    // NOP
label_29a1b0:
    // 0x29a1b0: 0x2c867  .word       0x0002C867                   # nor         $t9, $zero, $v0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a1b0u;
    SET_GPR_U64(ctx, 25, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_29a1b4:
    // 0x29a1b4: 0x136  tne         $zero, $zero, 4
    ctx->pc = 0x29a1b4u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29a1b8:
    // 0x29a1b8: 0x9aa30  tge         $zero, $t1, 680
    ctx->pc = 0x29a1b8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_29a1bc:
    // 0x29a1bc: 0x0  nop
    ctx->pc = 0x29a1bcu;
    // NOP
label_29a1c0:
    // 0x29a1c0: 0x2c99d  .word       0x0002C99D                   # dmultu      $zero, $v0 # 0000C980 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a1c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29A1C0 raw=0x0002C99D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a1c4:
    // 0x29a1c4: 0x10c  syscall     4
    ctx->pc = 0x29a1c4u;
    ctx->pc = 0x29A1C8u;
runtime->handleSyscall(rdram, ctx, 0x4u);
label_29a1c8:
    // 0x29a1c8: 0x85e94  .word       0x00085E94                   # dsllv       $t3, $t0, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a1c8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) << (GPR_U32(ctx, 0) & 0x3F));
label_29a1cc:
    // 0x29a1cc: 0x0  nop
    ctx->pc = 0x29a1ccu;
    // NOP
label_29a1d0:
    // 0x29a1d0: 0x2caa9  .word       0x0002CAA9                   # mtsa        $zero # 0002CA80 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29a1d0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_29a1d4:
    // 0x29a1d4: 0x30d  break       0, 12
    ctx->pc = 0x29a1d4u;
    runtime->handleBreak(rdram, ctx);
label_29a1d8:
    // 0x29a1d8: 0x1866d0  .word       0x001866D0                   # mfhi        $t4 # 001806C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a1d8u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_29a1dc:
    // 0x29a1dc: 0x0  nop
    ctx->pc = 0x29a1dcu;
    // NOP
label_29a1e0:
    // 0x29a1e0: 0x2cdb6  tne         $zero, $v0, 822
    ctx->pc = 0x29a1e0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_29a1e4:
    // 0x29a1e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a1e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29A1E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a1e8:
    // 0x29a1e8: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a1e8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29a1ec:
    // 0x29a1ec: 0x0  nop
    ctx->pc = 0x29a1ecu;
    // NOP
label_29a1f0:
    // 0x29a1f0: 0x2cdb7  .word       0x0002CDB7                   # INVALID     $zero, $v0, -0x3249 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a1f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x29A1F0 raw=0x0002CDB7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a1f4:
    // 0x29a1f4: 0xb8  dsll        $zero, $zero, 2
    ctx->pc = 0x29a1f4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 2);
label_29a1f8:
    // 0x29a1f8: 0x5bb58  .word       0x0005BB58                   # mult        $s7, $zero, $a1 # 00000340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29a1f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
label_29a1fc:
    // 0x29a1fc: 0x0  nop
    ctx->pc = 0x29a1fcu;
    // NOP
label_29a200:
    // 0x29a200: 0x2ce6f  .word       0x0002CE6F                   # dsubu       $t9, $zero, $v0 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a200u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
label_29a204:
    // 0x29a204: 0x7b  dsra        $zero, $zero, 1
    ctx->pc = 0x29a204u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 1);
label_29a208:
    // 0x29a208: 0x3d550  .word       0x0003D550                   # mfhi        $k0 # 00030540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a208u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_29a20c:
    // 0x29a20c: 0x0  nop
    ctx->pc = 0x29a20cu;
    // NOP
label_29a210:
    // 0x29a210: 0x2ceea  .word       0x0002CEEA                   # slt         $t9, $zero, $v0 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a210u;
    SET_GPR_U64(ctx, 25, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_29a214:
    // 0x29a214: 0x6a  .word       0x0000006A                   # slt         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a214u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_29a218:
    // 0x29a218: 0x34ec0  sll         $t1, $v1, 27
    ctx->pc = 0x29a218u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 27));
label_29a21c:
    // 0x29a21c: 0x0  nop
    ctx->pc = 0x29a21cu;
    // NOP
label_29a220:
    // 0x29a220: 0x2cf54  .word       0x0002CF54                   # dsllv       $t9, $v0, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a220u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 2) << (GPR_U32(ctx, 0) & 0x3F));
label_29a224:
    // 0x29a224: 0xb4  teq         $zero, $zero, 2
    ctx->pc = 0x29a224u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29a228:
    // 0x29a228: 0x59c64  .word       0x00059C64                   # and         $s3, $zero, $a1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a228u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) & GPR_U64(ctx, 5));
label_29a22c:
    // 0x29a22c: 0x0  nop
    ctx->pc = 0x29a22cu;
    // NOP
label_29a230:
    // 0x29a230: 0x2d008  .word       0x0002D008                   # jr          $zero # 0002D000 <InstrIdType: CPU_SPECIAL>
label_29a234:
    if (ctx->pc == 0x29A234u) {
        ctx->pc = 0x29A234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A230u;
        // 0x29a234: 0xdb  .word       0x000000DB                   # divu        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A238u;
        goto label_29a238;
    }
    ctx->pc = 0x29A230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29A234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A230u;
        // 0x29a234: 0xdb  .word       0x000000DB                   # divu        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A230u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29A238u;
label_29a238:
    // 0x29a238: 0x6d2e4  .word       0x0006D2E4                   # and         $k0, $zero, $a2 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a238u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) & GPR_U64(ctx, 6));
label_29a23c:
    // 0x29a23c: 0x0  nop
    ctx->pc = 0x29a23cu;
    // NOP
label_29a240:
    // 0x29a240: 0x2d0e3  .word       0x0002D0E3                   # negu        $k0, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a240u;
    SET_GPR_S32(ctx, 26, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_29a244:
    // 0x29a244: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a244u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29A244 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a248:
    // 0x29a248: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a248u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29a24c:
    // 0x29a24c: 0x0  nop
    ctx->pc = 0x29a24cu;
    // NOP
label_29a250:
    // 0x29a250: 0x2d0e4  .word       0x0002D0E4                   # and         $k0, $zero, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a250u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) & GPR_U64(ctx, 2));
label_29a254:
    // 0x29a254: 0x45  .word       0x00000045                   # INVALID     $zero, $zero, 0x45 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a254u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x29A254 raw=0x00000045"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a258:
    // 0x29a258: 0x2233c  dsll32      $a0, $v0, 12
    ctx->pc = 0x29a258u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 12));
label_29a25c:
    // 0x29a25c: 0x0  nop
    ctx->pc = 0x29a25cu;
    // NOP
label_29a260:
    // 0x29a260: 0x2d129  .word       0x0002D129                   # mtsa        $zero # 0002D100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29a260u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_29a264:
    // 0x29a264: 0x40  sll         $zero, $zero, 1
    ctx->pc = 0x29a264u;
    
label_29a268:
    // 0x29a268: 0x1faf0  tge         $zero, $at, 1003
    ctx->pc = 0x29a268u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_29a26c:
    // 0x29a26c: 0x0  nop
    ctx->pc = 0x29a26cu;
    // NOP
label_29a270:
    // 0x29a270: 0x2d169  .word       0x0002D169                   # mtsa        $zero # 0002D140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29a270u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_29a274:
    // 0x29a274: 0x45  .word       0x00000045                   # INVALID     $zero, $zero, 0x45 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a274u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x29A274 raw=0x00000045"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a278:
    // 0x29a278: 0x2233c  dsll32      $a0, $v0, 12
    ctx->pc = 0x29a278u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 12));
label_29a27c:
    // 0x29a27c: 0x0  nop
    ctx->pc = 0x29a27cu;
    // NOP
label_29a280:
    // 0x29a280: 0x2d1ae  .word       0x0002D1AE                   # dsub        $k0, $zero, $v0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a280u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 2); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 26, r); }
label_29a284:
    // 0x29a284: 0x40  sll         $zero, $zero, 1
    ctx->pc = 0x29a284u;
    
label_29a288:
    // 0x29a288: 0x1faf0  tge         $zero, $at, 1003
    ctx->pc = 0x29a288u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_29a28c:
    // 0x29a28c: 0x0  nop
    ctx->pc = 0x29a28cu;
    // NOP
label_29a290:
    // 0x29a290: 0x2d1ee  .word       0x0002D1EE                   # dsub        $k0, $zero, $v0 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a290u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 2); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 26, r); }
label_29a294:
    // 0x29a294: 0xdb  .word       0x000000DB                   # divu        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a294u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_29a298:
    // 0x29a298: 0x6d2e4  .word       0x0006D2E4                   # and         $k0, $zero, $a2 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a298u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) & GPR_U64(ctx, 6));
label_29a29c:
    // 0x29a29c: 0x0  nop
    ctx->pc = 0x29a29cu;
    // NOP
label_29a2a0:
    // 0x29a2a0: 0x2d2c9  .word       0x0002D2C9                   # jalr        $k0, $zero # 000202C0 <InstrIdType: CPU_SPECIAL>
label_29a2a4:
    if (ctx->pc == 0x29A2A4u) {
        ctx->pc = 0x29A2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A2A0u;
        // 0x29a2a4: 0xfe  dsrl32      $zero, $zero, 3 (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A2A8u;
        goto label_29a2a8;
    }
    ctx->pc = 0x29A2A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 26, 0x29A2A8u);
        ctx->pc = 0x29A2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A2A0u;
        // 0x29a2a4: 0xfe  dsrl32      $zero, $zero, 3 (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A2A0u, 0x29A2A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29A2A8u;
label_29a2a8:
    // 0x29a2a8: 0x7e950  .word       0x0007E950                   # mfhi        $sp # 00070140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a2a8u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_29a2ac:
    // 0x29a2ac: 0x0  nop
    ctx->pc = 0x29a2acu;
    // NOP
label_29a2b0:
    // 0x29a2b0: 0x2d3c7  .word       0x0002D3C7                   # srav        $k0, $v0, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a2b0u;
    SET_GPR_S32(ctx, 26, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_29a2b4:
    // 0x29a2b4: 0x1c7  .word       0x000001C7                   # srav        $zero, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a2b4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29a2b8:
    // 0x29a2b8: 0xe34cc  .word       0x000E34CC                   # syscall     211 # 000E0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a2b8u;
    ctx->pc = 0x29A2BCu;
runtime->handleSyscall(rdram, ctx, 0x38D3u);
label_29a2bc:
    // 0x29a2bc: 0x0  nop
    ctx->pc = 0x29a2bcu;
    // NOP
label_29a2c0:
    // 0x29a2c0: 0x2d58e  .word       0x0002D58E                   # INVALID     $zero, $v0, -0x2A72 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a2c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29A2C0 raw=0x0002D58E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a2c4:
    // 0x29a2c4: 0x1b9  .word       0x000001B9                   # INVALID     $zero, $zero, 0x1B9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a2c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x29A2C4 raw=0x000001B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a2c8:
    // 0x29a2c8: 0xdc21c  .word       0x000DC21C                   # dmult       $zero, $t5 # 0000C200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a2c8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29A2C8 raw=0x000DC21C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a2cc:
    // 0x29a2cc: 0x0  nop
    ctx->pc = 0x29a2ccu;
    // NOP
label_29a2d0:
    // 0x29a2d0: 0x2d747  .word       0x0002D747                   # srav        $k0, $v0, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a2d0u;
    SET_GPR_S32(ctx, 26, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_29a2d4:
    // 0x29a2d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a2d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29A2D4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a2d8:
    // 0x29a2d8: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a2d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29a2dc:
    // 0x29a2dc: 0x0  nop
    ctx->pc = 0x29a2dcu;
    // NOP
label_29a2e0:
    // 0x29a2e0: 0x2d748  .word       0x0002D748                   # jr          $zero # 0002D740 <InstrIdType: CPU_SPECIAL>
label_29a2e4:
    if (ctx->pc == 0x29A2E4u) {
        ctx->pc = 0x29A2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A2E0u;
        // 0x29a2e4: 0x9e  .word       0x0000009E                   # ddiv        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x29A2E4 raw=0x0000009E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A2E8u;
        goto label_29a2e8;
    }
    ctx->pc = 0x29A2E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29A2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A2E0u;
        // 0x29a2e4: 0x9e  .word       0x0000009E                   # ddiv        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x29A2E4 raw=0x0000009E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A2E0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29A2E8u;
label_29a2e8:
    // 0x29a2e8: 0x4e840  sll         $sp, $a0, 1
    ctx->pc = 0x29a2e8u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_29a2ec:
    // 0x29a2ec: 0x0  nop
    ctx->pc = 0x29a2ecu;
    // NOP
label_29a2f0:
    // 0x29a2f0: 0x2d7e6  .word       0x0002D7E6                   # xor         $k0, $zero, $v0 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a2f0u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 2));
label_29a2f4:
    // 0x29a2f4: 0x7e  dsrl32      $zero, $zero, 1
    ctx->pc = 0x29a2f4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 1));
label_29a2f8:
    // 0x29a2f8: 0x3eb30  tge         $zero, $v1, 940
    ctx->pc = 0x29a2f8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29a2fc:
    // 0x29a2fc: 0x0  nop
    ctx->pc = 0x29a2fcu;
    // NOP
label_29a300:
    // 0x29a300: 0x2d864  .word       0x0002D864                   # and         $k1, $zero, $v0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a300u;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 0) & GPR_U64(ctx, 2));
label_29a304:
    // 0x29a304: 0xec  .word       0x000000EC                   # dadd        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a304u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29a308:
    // 0x29a308: 0x75f90  .word       0x00075F90                   # mfhi        $t3 # 00070780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a308u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_29a30c:
    // 0x29a30c: 0x0  nop
    ctx->pc = 0x29a30cu;
    // NOP
label_29a310:
    // 0x29a310: 0x2d950  .word       0x0002D950                   # mfhi        $k1 # 00020140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a310u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_29a314:
    // 0x29a314: 0x238  dsll        $zero, $zero, 8
    ctx->pc = 0x29a314u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 8);
label_29a318:
    // 0x29a318: 0x11bf8c  .word       0x0011BF8C                   # syscall     766 # 00110000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a318u;
    ctx->pc = 0x29A31Cu;
runtime->handleSyscall(rdram, ctx, 0x46FEu);
label_29a31c:
    // 0x29a31c: 0x0  nop
    ctx->pc = 0x29a31cu;
    // NOP
label_29a320:
    // 0x29a320: 0x2db88  .word       0x0002DB88                   # jr          $zero # 0002DB80 <InstrIdType: CPU_SPECIAL>
label_29a324:
    if (ctx->pc == 0x29A324u) {
        ctx->pc = 0x29A324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A320u;
        // 0x29a324: 0x2d5  .word       0x000002D5                   # INVALID     $zero, $zero, 0x2D5 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29A324 raw=0x000002D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A328u;
        goto label_29a328;
    }
    ctx->pc = 0x29A320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29A324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A320u;
        // 0x29a324: 0x2d5  .word       0x000002D5                   # INVALID     $zero, $zero, 0x2D5 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29A324 raw=0x000002D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A320u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29A328u;
label_29a328:
    // 0x29a328: 0x16a4ec  .word       0x0016A4EC                   # dadd        $s4, $zero, $s6 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a328u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 22); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, r); }
label_29a32c:
    // 0x29a32c: 0x0  nop
    ctx->pc = 0x29a32cu;
    // NOP
label_29a330:
    // 0x29a330: 0x2de5d  .word       0x0002DE5D                   # dmultu      $zero, $v0 # 0000DE40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a330u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29A330 raw=0x0002DE5D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a334:
    // 0x29a334: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a334u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29A334 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a338:
    // 0x29a338: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a338u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29a33c:
    // 0x29a33c: 0x0  nop
    ctx->pc = 0x29a33cu;
    // NOP
label_29a340:
    // 0x29a340: 0x2de5e  .word       0x0002DE5E                   # ddiv        $k1, $zero, $v0 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a340u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x29A340 raw=0x0002DE5E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a344:
    // 0x29a344: 0xa9  .word       0x000000A9                   # mtsa        $zero # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29a344u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_29a348:
    // 0x29a348: 0x543e4  .word       0x000543E4                   # and         $t0, $zero, $a1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a348u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) & GPR_U64(ctx, 5));
label_29a34c:
    // 0x29a34c: 0x0  nop
    ctx->pc = 0x29a34cu;
    // NOP
label_29a350:
    // 0x29a350: 0x2df07  .word       0x0002DF07                   # srav        $k1, $v0, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a350u;
    SET_GPR_S32(ctx, 27, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_29a354:
    // 0x29a354: 0xbd  .word       0x000000BD                   # INVALID     $zero, $zero, 0xBD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a354u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29A354 raw=0x000000BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a358:
    // 0x29a358: 0x5e250  .word       0x0005E250                   # mfhi        $gp # 00050240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a358u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_29a35c:
    // 0x29a35c: 0x0  nop
    ctx->pc = 0x29a35cu;
    // NOP
label_29a360:
    // 0x29a360: 0x2dfc4  .word       0x0002DFC4                   # sllv        $k1, $v0, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a360u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_29a364:
    // 0x29a364: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x29a364u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29a368:
    // 0x29a368: 0x39520  .word       0x00039520                   # add         $s2, $zero, $v1 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a368u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_29a36c:
    // 0x29a36c: 0x0  nop
    ctx->pc = 0x29a36cu;
    // NOP
label_29a370:
    // 0x29a370: 0x2e037  .word       0x0002E037                   # INVALID     $zero, $v0, -0x1FC9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a370u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x29A370 raw=0x0002E037"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a374:
    // 0x29a374: 0xf3  tltu        $zero, $zero, 3
    ctx->pc = 0x29a374u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29a378:
    // 0x29a378: 0x793e4  .word       0x000793E4                   # and         $s2, $zero, $a3 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a378u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) & GPR_U64(ctx, 7));
label_29a37c:
    // 0x29a37c: 0x0  nop
    ctx->pc = 0x29a37cu;
    // NOP
label_29a380:
    // 0x29a380: 0x2e12a  .word       0x0002E12A                   # slt         $gp, $zero, $v0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a380u;
    SET_GPR_U64(ctx, 28, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_29a384:
    // 0x29a384: 0xdb  .word       0x000000DB                   # divu        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a384u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_29a388:
    // 0x29a388: 0x6d528  .word       0x0006D528                   # mfsa        $k0 # 00060500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29a388u;
    SET_GPR_U32(ctx, 26, ctx->sa);
label_29a38c:
    // 0x29a38c: 0x0  nop
    ctx->pc = 0x29a38cu;
    // NOP
label_29a390:
    // 0x29a390: 0x2e205  .word       0x0002E205                   # INVALID     $zero, $v0, -0x1DFB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a390u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x29A390 raw=0x0002E205"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a394:
    // 0x29a394: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a394u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29A394 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a398:
    // 0x29a398: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a398u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29a39c:
    // 0x29a39c: 0x0  nop
    ctx->pc = 0x29a39cu;
    // NOP
label_29a3a0:
    // 0x29a3a0: 0x2e206  .word       0x0002E206                   # srlv        $gp, $v0, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a3a0u;
    SET_GPR_S32(ctx, 28, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_29a3a4:
    // 0x29a3a4: 0x26  xor         $zero, $zero, $zero
    ctx->pc = 0x29a3a4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_29a3a8:
    // 0x29a3a8: 0x12e1c  .word       0x00012E1C                   # dmult       $zero, $at # 00002E00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a3a8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29A3A8 raw=0x00012E1C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a3ac:
    // 0x29a3ac: 0x0  nop
    ctx->pc = 0x29a3acu;
    // NOP
label_29a3b0:
    // 0x29a3b0: 0x2e22c  .word       0x0002E22C                   # dadd        $gp, $zero, $v0 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a3b0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 2); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 28, r); }
label_29a3b4:
    // 0x29a3b4: 0x25  move        $zero, $zero
    ctx->pc = 0x29a3b4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_29a3b8:
    // 0x29a3b8: 0x12490  .word       0x00012490                   # mfhi        $a0 # 00010480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a3b8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_29a3bc:
    // 0x29a3bc: 0x0  nop
    ctx->pc = 0x29a3bcu;
    // NOP
label_29a3c0:
    // 0x29a3c0: 0x2e251  .word       0x0002E251                   # mthi        $zero # 0002E240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a3c0u;
    ctx->hi = GPR_U64(ctx, 0);
label_29a3c4:
    // 0x29a3c4: 0xb8  dsll        $zero, $zero, 2
    ctx->pc = 0x29a3c4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 2);
label_29a3c8:
    // 0x29a3c8: 0x5bfc0  sll         $s7, $a1, 31
    ctx->pc = 0x29a3c8u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 5), 31));
label_29a3cc:
    // 0x29a3cc: 0x0  nop
    ctx->pc = 0x29a3ccu;
    // NOP
label_29a3d0:
    // 0x29a3d0: 0x2e309  .word       0x0002E309                   # jalr        $gp, $zero # 00020300 <InstrIdType: CPU_SPECIAL>
label_29a3d4:
    if (ctx->pc == 0x29A3D4u) {
        ctx->pc = 0x29A3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A3D0u;
        // 0x29a3d4: 0x172  tlt         $zero, $zero, 5 (Delay Slot)
        if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A3D8u;
        goto label_29a3d8;
    }
    ctx->pc = 0x29A3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 28, 0x29A3D8u);
        ctx->pc = 0x29A3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A3D0u;
        // 0x29a3d4: 0x172  tlt         $zero, $zero, 5 (Delay Slot)
        if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A3D0u, 0x29A3D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29A3D8u;
label_29a3d8:
    // 0x29a3d8: 0xb8f74  teq         $zero, $t3, 573
    ctx->pc = 0x29a3d8u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
label_29a3dc:
    // 0x29a3dc: 0x0  nop
    ctx->pc = 0x29a3dcu;
    // NOP
label_29a3e0:
    // 0x29a3e0: 0x2e47b  dsra        $gp, $v0, 17
    ctx->pc = 0x29a3e0u;
    SET_GPR_S64(ctx, 28, GPR_S64(ctx, 2) >> 17);
label_29a3e4:
    // 0x29a3e4: 0x170  tge         $zero, $zero, 5
    ctx->pc = 0x29a3e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29a3e8:
    // 0x29a3e8: 0xb7fa4  .word       0x000B7FA4                   # and         $t7, $zero, $t3 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a3e8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) & GPR_U64(ctx, 11));
label_29a3ec:
    // 0x29a3ec: 0x0  nop
    ctx->pc = 0x29a3ecu;
    // NOP
label_29a3f0:
    // 0x29a3f0: 0x2e5eb  .word       0x0002E5EB                   # sltu        $gp, $zero, $v0 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a3f0u;
    SET_GPR_U64(ctx, 28, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_29a3f4:
    // 0x29a3f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a3f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29A3F4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a3f8:
    // 0x29a3f8: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a3f8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29a3fc:
    // 0x29a3fc: 0x0  nop
    ctx->pc = 0x29a3fcu;
    // NOP
label_29a400:
    // 0x29a400: 0x2e5ec  .word       0x0002E5EC                   # dadd        $gp, $zero, $v0 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a400u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 2); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 28, r); }
label_29a404:
    // 0x29a404: 0x5d  .word       0x0000005D                   # dmultu      $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a404u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29A404 raw=0x0000005D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a408:
    // 0x29a408: 0x2e2b0  tge         $zero, $v0, 906
    ctx->pc = 0x29a408u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_29a40c:
    // 0x29a40c: 0x0  nop
    ctx->pc = 0x29a40cu;
    // NOP
label_29a410:
    // 0x29a410: 0x2e649  .word       0x0002E649                   # jalr        $gp, $zero # 00020640 <InstrIdType: CPU_SPECIAL>
label_29a414:
    if (ctx->pc == 0x29A414u) {
        ctx->pc = 0x29A414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A410u;
        // 0x29a414: 0x47  .word       0x00000047                   # srav        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A418u;
        goto label_29a418;
    }
    ctx->pc = 0x29A410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 28, 0x29A418u);
        ctx->pc = 0x29A414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A410u;
        // 0x29a414: 0x47  .word       0x00000047                   # srav        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A410u, 0x29A418u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29A418u;
label_29a418:
    // 0x29a418: 0x23510  .word       0x00023510                   # mfhi        $a2 # 00020500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a418u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_29a41c:
    // 0x29a41c: 0x0  nop
    ctx->pc = 0x29a41cu;
    // NOP
label_29a420:
    // 0x29a420: 0x2e690  .word       0x0002E690                   # mfhi        $gp # 00020680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a420u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_29a424:
    // 0x29a424: 0x327  .word       0x00000327                   # not         $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a424u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_29a428:
    // 0x29a428: 0x193490  .word       0x00193490                   # mfhi        $a2 # 00190480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a428u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_29a42c:
    // 0x29a42c: 0x0  nop
    ctx->pc = 0x29a42cu;
    // NOP
label_29a430:
    // 0x29a430: 0x2e9b7  .word       0x0002E9B7                   # INVALID     $zero, $v0, -0x1649 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a430u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x29A430 raw=0x0002E9B7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a434:
    // 0x29a434: 0x244  .word       0x00000244                   # sllv        $zero, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a434u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
    ctx->pc = 0x29a438u;
    return;
}

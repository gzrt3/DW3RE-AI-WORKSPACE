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


void FUN_0019b808_part63(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1b9c68u: goto label_1b9c68;
        case 0x1b9c6cu: goto label_1b9c6c;
        case 0x1b9c70u: goto label_1b9c70;
        case 0x1b9c74u: goto label_1b9c74;
        case 0x1b9c78u: goto label_1b9c78;
        case 0x1b9c7cu: goto label_1b9c7c;
        case 0x1b9c80u: goto label_1b9c80;
        case 0x1b9c84u: goto label_1b9c84;
        case 0x1b9c88u: goto label_1b9c88;
        case 0x1b9c8cu: goto label_1b9c8c;
        case 0x1b9c90u: goto label_1b9c90;
        case 0x1b9c94u: goto label_1b9c94;
        case 0x1b9c98u: goto label_1b9c98;
        case 0x1b9c9cu: goto label_1b9c9c;
        case 0x1b9ca0u: goto label_1b9ca0;
        case 0x1b9ca4u: goto label_1b9ca4;
        case 0x1b9ca8u: goto label_1b9ca8;
        case 0x1b9cacu: goto label_1b9cac;
        case 0x1b9cb0u: goto label_1b9cb0;
        case 0x1b9cb4u: goto label_1b9cb4;
        case 0x1b9cb8u: goto label_1b9cb8;
        case 0x1b9cbcu: goto label_1b9cbc;
        case 0x1b9cc0u: goto label_1b9cc0;
        case 0x1b9cc4u: goto label_1b9cc4;
        case 0x1b9cc8u: goto label_1b9cc8;
        case 0x1b9cccu: goto label_1b9ccc;
        case 0x1b9cd0u: goto label_1b9cd0;
        case 0x1b9cd4u: goto label_1b9cd4;
        case 0x1b9cd8u: goto label_1b9cd8;
        case 0x1b9cdcu: goto label_1b9cdc;
        case 0x1b9ce0u: goto label_1b9ce0;
        case 0x1b9ce4u: goto label_1b9ce4;
        case 0x1b9ce8u: goto label_1b9ce8;
        case 0x1b9cecu: goto label_1b9cec;
        case 0x1b9cf0u: goto label_1b9cf0;
        case 0x1b9cf4u: goto label_1b9cf4;
        case 0x1b9cf8u: goto label_1b9cf8;
        case 0x1b9cfcu: goto label_1b9cfc;
        case 0x1b9d00u: goto label_1b9d00;
        case 0x1b9d04u: goto label_1b9d04;
        case 0x1b9d08u: goto label_1b9d08;
        case 0x1b9d0cu: goto label_1b9d0c;
        case 0x1b9d10u: goto label_1b9d10;
        case 0x1b9d14u: goto label_1b9d14;
        case 0x1b9d18u: goto label_1b9d18;
        case 0x1b9d1cu: goto label_1b9d1c;
        case 0x1b9d20u: goto label_1b9d20;
        case 0x1b9d24u: goto label_1b9d24;
        case 0x1b9d28u: goto label_1b9d28;
        case 0x1b9d2cu: goto label_1b9d2c;
        case 0x1b9d30u: goto label_1b9d30;
        case 0x1b9d34u: goto label_1b9d34;
        case 0x1b9d38u: goto label_1b9d38;
        case 0x1b9d3cu: goto label_1b9d3c;
        case 0x1b9d40u: goto label_1b9d40;
        case 0x1b9d44u: goto label_1b9d44;
        case 0x1b9d48u: goto label_1b9d48;
        case 0x1b9d4cu: goto label_1b9d4c;
        case 0x1b9d50u: goto label_1b9d50;
        case 0x1b9d54u: goto label_1b9d54;
        case 0x1b9d58u: goto label_1b9d58;
        case 0x1b9d5cu: goto label_1b9d5c;
        case 0x1b9d60u: goto label_1b9d60;
        case 0x1b9d64u: goto label_1b9d64;
        case 0x1b9d68u: goto label_1b9d68;
        case 0x1b9d6cu: goto label_1b9d6c;
        case 0x1b9d70u: goto label_1b9d70;
        case 0x1b9d74u: goto label_1b9d74;
        case 0x1b9d78u: goto label_1b9d78;
        case 0x1b9d7cu: goto label_1b9d7c;
        case 0x1b9d80u: goto label_1b9d80;
        case 0x1b9d84u: goto label_1b9d84;
        case 0x1b9d88u: goto label_1b9d88;
        case 0x1b9d8cu: goto label_1b9d8c;
        case 0x1b9d90u: goto label_1b9d90;
        case 0x1b9d94u: goto label_1b9d94;
        case 0x1b9d98u: goto label_1b9d98;
        case 0x1b9d9cu: goto label_1b9d9c;
        case 0x1b9da0u: goto label_1b9da0;
        case 0x1b9da4u: goto label_1b9da4;
        case 0x1b9da8u: goto label_1b9da8;
        case 0x1b9dacu: goto label_1b9dac;
        case 0x1b9db0u: goto label_1b9db0;
        case 0x1b9db4u: goto label_1b9db4;
        case 0x1b9db8u: goto label_1b9db8;
        case 0x1b9dbcu: goto label_1b9dbc;
        case 0x1b9dc0u: goto label_1b9dc0;
        case 0x1b9dc4u: goto label_1b9dc4;
        case 0x1b9dc8u: goto label_1b9dc8;
        case 0x1b9dccu: goto label_1b9dcc;
        case 0x1b9dd0u: goto label_1b9dd0;
        case 0x1b9dd4u: goto label_1b9dd4;
        case 0x1b9dd8u: goto label_1b9dd8;
        case 0x1b9ddcu: goto label_1b9ddc;
        case 0x1b9de0u: goto label_1b9de0;
        case 0x1b9de4u: goto label_1b9de4;
        case 0x1b9de8u: goto label_1b9de8;
        case 0x1b9decu: goto label_1b9dec;
        case 0x1b9df0u: goto label_1b9df0;
        case 0x1b9df4u: goto label_1b9df4;
        case 0x1b9df8u: goto label_1b9df8;
        case 0x1b9dfcu: goto label_1b9dfc;
        case 0x1b9e00u: goto label_1b9e00;
        case 0x1b9e04u: goto label_1b9e04;
        case 0x1b9e08u: goto label_1b9e08;
        case 0x1b9e0cu: goto label_1b9e0c;
        case 0x1b9e10u: goto label_1b9e10;
        case 0x1b9e14u: goto label_1b9e14;
        case 0x1b9e18u: goto label_1b9e18;
        case 0x1b9e1cu: goto label_1b9e1c;
        case 0x1b9e20u: goto label_1b9e20;
        case 0x1b9e24u: goto label_1b9e24;
        case 0x1b9e28u: goto label_1b9e28;
        case 0x1b9e2cu: goto label_1b9e2c;
        case 0x1b9e30u: goto label_1b9e30;
        case 0x1b9e34u: goto label_1b9e34;
        case 0x1b9e38u: goto label_1b9e38;
        case 0x1b9e3cu: goto label_1b9e3c;
        case 0x1b9e40u: goto label_1b9e40;
        case 0x1b9e44u: goto label_1b9e44;
        case 0x1b9e48u: goto label_1b9e48;
        case 0x1b9e4cu: goto label_1b9e4c;
        case 0x1b9e50u: goto label_1b9e50;
        case 0x1b9e54u: goto label_1b9e54;
        case 0x1b9e58u: goto label_1b9e58;
        case 0x1b9e5cu: goto label_1b9e5c;
        case 0x1b9e60u: goto label_1b9e60;
        case 0x1b9e64u: goto label_1b9e64;
        case 0x1b9e68u: goto label_1b9e68;
        case 0x1b9e6cu: goto label_1b9e6c;
        case 0x1b9e70u: goto label_1b9e70;
        case 0x1b9e74u: goto label_1b9e74;
        case 0x1b9e78u: goto label_1b9e78;
        case 0x1b9e7cu: goto label_1b9e7c;
        case 0x1b9e80u: goto label_1b9e80;
        case 0x1b9e84u: goto label_1b9e84;
        case 0x1b9e88u: goto label_1b9e88;
        case 0x1b9e8cu: goto label_1b9e8c;
        case 0x1b9e90u: goto label_1b9e90;
        case 0x1b9e94u: goto label_1b9e94;
        case 0x1b9e98u: goto label_1b9e98;
        case 0x1b9e9cu: goto label_1b9e9c;
        case 0x1b9ea0u: goto label_1b9ea0;
        case 0x1b9ea4u: goto label_1b9ea4;
        case 0x1b9ea8u: goto label_1b9ea8;
        case 0x1b9eacu: goto label_1b9eac;
        case 0x1b9eb0u: goto label_1b9eb0;
        case 0x1b9eb4u: goto label_1b9eb4;
        case 0x1b9eb8u: goto label_1b9eb8;
        case 0x1b9ebcu: goto label_1b9ebc;
        case 0x1b9ec0u: goto label_1b9ec0;
        case 0x1b9ec4u: goto label_1b9ec4;
        case 0x1b9ec8u: goto label_1b9ec8;
        case 0x1b9eccu: goto label_1b9ecc;
        case 0x1b9ed0u: goto label_1b9ed0;
        case 0x1b9ed4u: goto label_1b9ed4;
        case 0x1b9ed8u: goto label_1b9ed8;
        case 0x1b9edcu: goto label_1b9edc;
        case 0x1b9ee0u: goto label_1b9ee0;
        case 0x1b9ee4u: goto label_1b9ee4;
        case 0x1b9ee8u: goto label_1b9ee8;
        case 0x1b9eecu: goto label_1b9eec;
        case 0x1b9ef0u: goto label_1b9ef0;
        case 0x1b9ef4u: goto label_1b9ef4;
        case 0x1b9ef8u: goto label_1b9ef8;
        case 0x1b9efcu: goto label_1b9efc;
        case 0x1b9f00u: goto label_1b9f00;
        case 0x1b9f04u: goto label_1b9f04;
        case 0x1b9f08u: goto label_1b9f08;
        case 0x1b9f0cu: goto label_1b9f0c;
        case 0x1b9f10u: goto label_1b9f10;
        case 0x1b9f14u: goto label_1b9f14;
        case 0x1b9f18u: goto label_1b9f18;
        case 0x1b9f1cu: goto label_1b9f1c;
        case 0x1b9f20u: goto label_1b9f20;
        case 0x1b9f24u: goto label_1b9f24;
        case 0x1b9f28u: goto label_1b9f28;
        case 0x1b9f2cu: goto label_1b9f2c;
        case 0x1b9f30u: goto label_1b9f30;
        case 0x1b9f34u: goto label_1b9f34;
        case 0x1b9f38u: goto label_1b9f38;
        case 0x1b9f3cu: goto label_1b9f3c;
        case 0x1b9f40u: goto label_1b9f40;
        case 0x1b9f44u: goto label_1b9f44;
        case 0x1b9f48u: goto label_1b9f48;
        case 0x1b9f4cu: goto label_1b9f4c;
        case 0x1b9f50u: goto label_1b9f50;
        case 0x1b9f54u: goto label_1b9f54;
        case 0x1b9f58u: goto label_1b9f58;
        case 0x1b9f5cu: goto label_1b9f5c;
        case 0x1b9f60u: goto label_1b9f60;
        case 0x1b9f64u: goto label_1b9f64;
        case 0x1b9f68u: goto label_1b9f68;
        case 0x1b9f6cu: goto label_1b9f6c;
        case 0x1b9f70u: goto label_1b9f70;
        case 0x1b9f74u: goto label_1b9f74;
        case 0x1b9f78u: goto label_1b9f78;
        case 0x1b9f7cu: goto label_1b9f7c;
        case 0x1b9f80u: goto label_1b9f80;
        case 0x1b9f84u: goto label_1b9f84;
        case 0x1b9f88u: goto label_1b9f88;
        case 0x1b9f8cu: goto label_1b9f8c;
        case 0x1b9f90u: goto label_1b9f90;
        case 0x1b9f94u: goto label_1b9f94;
        case 0x1b9f98u: goto label_1b9f98;
        case 0x1b9f9cu: goto label_1b9f9c;
        case 0x1b9fa0u: goto label_1b9fa0;
        case 0x1b9fa4u: goto label_1b9fa4;
        case 0x1b9fa8u: goto label_1b9fa8;
        case 0x1b9facu: goto label_1b9fac;
        case 0x1b9fb0u: goto label_1b9fb0;
        case 0x1b9fb4u: goto label_1b9fb4;
        case 0x1b9fb8u: goto label_1b9fb8;
        case 0x1b9fbcu: goto label_1b9fbc;
        case 0x1b9fc0u: goto label_1b9fc0;
        case 0x1b9fc4u: goto label_1b9fc4;
        case 0x1b9fc8u: goto label_1b9fc8;
        case 0x1b9fccu: goto label_1b9fcc;
        case 0x1b9fd0u: goto label_1b9fd0;
        case 0x1b9fd4u: goto label_1b9fd4;
        case 0x1b9fd8u: goto label_1b9fd8;
        case 0x1b9fdcu: goto label_1b9fdc;
        case 0x1b9fe0u: goto label_1b9fe0;
        case 0x1b9fe4u: goto label_1b9fe4;
        case 0x1b9fe8u: goto label_1b9fe8;
        case 0x1b9fecu: goto label_1b9fec;
        case 0x1b9ff0u: goto label_1b9ff0;
        case 0x1b9ff4u: goto label_1b9ff4;
        case 0x1b9ff8u: goto label_1b9ff8;
        case 0x1b9ffcu: goto label_1b9ffc;
        case 0x1ba000u: goto label_1ba000;
        case 0x1ba004u: goto label_1ba004;
        case 0x1ba008u: goto label_1ba008;
        case 0x1ba00cu: goto label_1ba00c;
        case 0x1ba010u: goto label_1ba010;
        case 0x1ba014u: goto label_1ba014;
        case 0x1ba018u: goto label_1ba018;
        case 0x1ba01cu: goto label_1ba01c;
        case 0x1ba020u: goto label_1ba020;
        case 0x1ba024u: goto label_1ba024;
        case 0x1ba028u: goto label_1ba028;
        case 0x1ba02cu: goto label_1ba02c;
        case 0x1ba030u: goto label_1ba030;
        case 0x1ba034u: goto label_1ba034;
        case 0x1ba038u: goto label_1ba038;
        case 0x1ba03cu: goto label_1ba03c;
        case 0x1ba040u: goto label_1ba040;
        case 0x1ba044u: goto label_1ba044;
        case 0x1ba048u: goto label_1ba048;
        case 0x1ba04cu: goto label_1ba04c;
        case 0x1ba050u: goto label_1ba050;
        case 0x1ba054u: goto label_1ba054;
        case 0x1ba058u: goto label_1ba058;
        case 0x1ba05cu: goto label_1ba05c;
        case 0x1ba060u: goto label_1ba060;
        case 0x1ba064u: goto label_1ba064;
        case 0x1ba068u: goto label_1ba068;
        case 0x1ba06cu: goto label_1ba06c;
        case 0x1ba070u: goto label_1ba070;
        case 0x1ba074u: goto label_1ba074;
        case 0x1ba078u: goto label_1ba078;
        case 0x1ba07cu: goto label_1ba07c;
        case 0x1ba080u: goto label_1ba080;
        case 0x1ba084u: goto label_1ba084;
        case 0x1ba088u: goto label_1ba088;
        case 0x1ba08cu: goto label_1ba08c;
        case 0x1ba090u: goto label_1ba090;
        case 0x1ba094u: goto label_1ba094;
        case 0x1ba098u: goto label_1ba098;
        case 0x1ba09cu: goto label_1ba09c;
        case 0x1ba0a0u: goto label_1ba0a0;
        case 0x1ba0a4u: goto label_1ba0a4;
        case 0x1ba0a8u: goto label_1ba0a8;
        case 0x1ba0acu: goto label_1ba0ac;
        case 0x1ba0b0u: goto label_1ba0b0;
        case 0x1ba0b4u: goto label_1ba0b4;
        case 0x1ba0b8u: goto label_1ba0b8;
        case 0x1ba0bcu: goto label_1ba0bc;
        case 0x1ba0c0u: goto label_1ba0c0;
        case 0x1ba0c4u: goto label_1ba0c4;
        case 0x1ba0c8u: goto label_1ba0c8;
        case 0x1ba0ccu: goto label_1ba0cc;
        case 0x1ba0d0u: goto label_1ba0d0;
        case 0x1ba0d4u: goto label_1ba0d4;
        case 0x1ba0d8u: goto label_1ba0d8;
        case 0x1ba0dcu: goto label_1ba0dc;
        case 0x1ba0e0u: goto label_1ba0e0;
        case 0x1ba0e4u: goto label_1ba0e4;
        case 0x1ba0e8u: goto label_1ba0e8;
        case 0x1ba0ecu: goto label_1ba0ec;
        case 0x1ba0f0u: goto label_1ba0f0;
        case 0x1ba0f4u: goto label_1ba0f4;
        case 0x1ba0f8u: goto label_1ba0f8;
        case 0x1ba0fcu: goto label_1ba0fc;
        case 0x1ba100u: goto label_1ba100;
        case 0x1ba104u: goto label_1ba104;
        case 0x1ba108u: goto label_1ba108;
        case 0x1ba10cu: goto label_1ba10c;
        case 0x1ba110u: goto label_1ba110;
        case 0x1ba114u: goto label_1ba114;
        case 0x1ba118u: goto label_1ba118;
        case 0x1ba11cu: goto label_1ba11c;
        case 0x1ba120u: goto label_1ba120;
        case 0x1ba124u: goto label_1ba124;
        case 0x1ba128u: goto label_1ba128;
        case 0x1ba12cu: goto label_1ba12c;
        case 0x1ba130u: goto label_1ba130;
        case 0x1ba134u: goto label_1ba134;
        case 0x1ba138u: goto label_1ba138;
        case 0x1ba13cu: goto label_1ba13c;
        case 0x1ba140u: goto label_1ba140;
        case 0x1ba144u: goto label_1ba144;
        case 0x1ba148u: goto label_1ba148;
        case 0x1ba14cu: goto label_1ba14c;
        case 0x1ba150u: goto label_1ba150;
        case 0x1ba154u: goto label_1ba154;
        case 0x1ba158u: goto label_1ba158;
        case 0x1ba15cu: goto label_1ba15c;
        case 0x1ba160u: goto label_1ba160;
        case 0x1ba164u: goto label_1ba164;
        case 0x1ba168u: goto label_1ba168;
        case 0x1ba16cu: goto label_1ba16c;
        case 0x1ba170u: goto label_1ba170;
        case 0x1ba174u: goto label_1ba174;
        case 0x1ba178u: goto label_1ba178;
        case 0x1ba17cu: goto label_1ba17c;
        case 0x1ba180u: goto label_1ba180;
        case 0x1ba184u: goto label_1ba184;
        case 0x1ba188u: goto label_1ba188;
        case 0x1ba18cu: goto label_1ba18c;
        case 0x1ba190u: goto label_1ba190;
        case 0x1ba194u: goto label_1ba194;
        case 0x1ba198u: goto label_1ba198;
        case 0x1ba19cu: goto label_1ba19c;
        case 0x1ba1a0u: goto label_1ba1a0;
        case 0x1ba1a4u: goto label_1ba1a4;
        case 0x1ba1a8u: goto label_1ba1a8;
        case 0x1ba1acu: goto label_1ba1ac;
        case 0x1ba1b0u: goto label_1ba1b0;
        case 0x1ba1b4u: goto label_1ba1b4;
        case 0x1ba1b8u: goto label_1ba1b8;
        case 0x1ba1bcu: goto label_1ba1bc;
        case 0x1ba1c0u: goto label_1ba1c0;
        case 0x1ba1c4u: goto label_1ba1c4;
        case 0x1ba1c8u: goto label_1ba1c8;
        case 0x1ba1ccu: goto label_1ba1cc;
        case 0x1ba1d0u: goto label_1ba1d0;
        case 0x1ba1d4u: goto label_1ba1d4;
        case 0x1ba1d8u: goto label_1ba1d8;
        case 0x1ba1dcu: goto label_1ba1dc;
        case 0x1ba1e0u: goto label_1ba1e0;
        case 0x1ba1e4u: goto label_1ba1e4;
        case 0x1ba1e8u: goto label_1ba1e8;
        case 0x1ba1ecu: goto label_1ba1ec;
        case 0x1ba1f0u: goto label_1ba1f0;
        case 0x1ba1f4u: goto label_1ba1f4;
        case 0x1ba1f8u: goto label_1ba1f8;
        case 0x1ba1fcu: goto label_1ba1fc;
        case 0x1ba200u: goto label_1ba200;
        case 0x1ba204u: goto label_1ba204;
        case 0x1ba208u: goto label_1ba208;
        case 0x1ba20cu: goto label_1ba20c;
        case 0x1ba210u: goto label_1ba210;
        case 0x1ba214u: goto label_1ba214;
        case 0x1ba218u: goto label_1ba218;
        case 0x1ba21cu: goto label_1ba21c;
        case 0x1ba220u: goto label_1ba220;
        case 0x1ba224u: goto label_1ba224;
        case 0x1ba228u: goto label_1ba228;
        case 0x1ba22cu: goto label_1ba22c;
        case 0x1ba230u: goto label_1ba230;
        case 0x1ba234u: goto label_1ba234;
        case 0x1ba238u: goto label_1ba238;
        case 0x1ba23cu: goto label_1ba23c;
        case 0x1ba240u: goto label_1ba240;
        case 0x1ba244u: goto label_1ba244;
        case 0x1ba248u: goto label_1ba248;
        case 0x1ba24cu: goto label_1ba24c;
        case 0x1ba250u: goto label_1ba250;
        case 0x1ba254u: goto label_1ba254;
        case 0x1ba258u: goto label_1ba258;
        case 0x1ba25cu: goto label_1ba25c;
        case 0x1ba260u: goto label_1ba260;
        case 0x1ba264u: goto label_1ba264;
        case 0x1ba268u: goto label_1ba268;
        case 0x1ba26cu: goto label_1ba26c;
        case 0x1ba270u: goto label_1ba270;
        case 0x1ba274u: goto label_1ba274;
        case 0x1ba278u: goto label_1ba278;
        case 0x1ba27cu: goto label_1ba27c;
        case 0x1ba280u: goto label_1ba280;
        case 0x1ba284u: goto label_1ba284;
        case 0x1ba288u: goto label_1ba288;
        case 0x1ba28cu: goto label_1ba28c;
        case 0x1ba290u: goto label_1ba290;
        case 0x1ba294u: goto label_1ba294;
        case 0x1ba298u: goto label_1ba298;
        case 0x1ba29cu: goto label_1ba29c;
        case 0x1ba2a0u: goto label_1ba2a0;
        case 0x1ba2a4u: goto label_1ba2a4;
        case 0x1ba2a8u: goto label_1ba2a8;
        case 0x1ba2acu: goto label_1ba2ac;
        case 0x1ba2b0u: goto label_1ba2b0;
        case 0x1ba2b4u: goto label_1ba2b4;
        case 0x1ba2b8u: goto label_1ba2b8;
        case 0x1ba2bcu: goto label_1ba2bc;
        case 0x1ba2c0u: goto label_1ba2c0;
        case 0x1ba2c4u: goto label_1ba2c4;
        case 0x1ba2c8u: goto label_1ba2c8;
        case 0x1ba2ccu: goto label_1ba2cc;
        case 0x1ba2d0u: goto label_1ba2d0;
        case 0x1ba2d4u: goto label_1ba2d4;
        case 0x1ba2d8u: goto label_1ba2d8;
        case 0x1ba2dcu: goto label_1ba2dc;
        case 0x1ba2e0u: goto label_1ba2e0;
        case 0x1ba2e4u: goto label_1ba2e4;
        case 0x1ba2e8u: goto label_1ba2e8;
        case 0x1ba2ecu: goto label_1ba2ec;
        case 0x1ba2f0u: goto label_1ba2f0;
        case 0x1ba2f4u: goto label_1ba2f4;
        case 0x1ba2f8u: goto label_1ba2f8;
        case 0x1ba2fcu: goto label_1ba2fc;
        case 0x1ba300u: goto label_1ba300;
        case 0x1ba304u: goto label_1ba304;
        case 0x1ba308u: goto label_1ba308;
        case 0x1ba30cu: goto label_1ba30c;
        case 0x1ba310u: goto label_1ba310;
        case 0x1ba314u: goto label_1ba314;
        case 0x1ba318u: goto label_1ba318;
        case 0x1ba31cu: goto label_1ba31c;
        case 0x1ba320u: goto label_1ba320;
        case 0x1ba324u: goto label_1ba324;
        case 0x1ba328u: goto label_1ba328;
        case 0x1ba32cu: goto label_1ba32c;
        case 0x1ba330u: goto label_1ba330;
        case 0x1ba334u: goto label_1ba334;
        case 0x1ba338u: goto label_1ba338;
        case 0x1ba33cu: goto label_1ba33c;
        case 0x1ba340u: goto label_1ba340;
        case 0x1ba344u: goto label_1ba344;
        case 0x1ba348u: goto label_1ba348;
        case 0x1ba34cu: goto label_1ba34c;
        case 0x1ba350u: goto label_1ba350;
        case 0x1ba354u: goto label_1ba354;
        case 0x1ba358u: goto label_1ba358;
        case 0x1ba35cu: goto label_1ba35c;
        case 0x1ba360u: goto label_1ba360;
        case 0x1ba364u: goto label_1ba364;
        case 0x1ba368u: goto label_1ba368;
        case 0x1ba36cu: goto label_1ba36c;
        case 0x1ba370u: goto label_1ba370;
        case 0x1ba374u: goto label_1ba374;
        case 0x1ba378u: goto label_1ba378;
        case 0x1ba37cu: goto label_1ba37c;
        case 0x1ba380u: goto label_1ba380;
        case 0x1ba384u: goto label_1ba384;
        case 0x1ba388u: goto label_1ba388;
        case 0x1ba38cu: goto label_1ba38c;
        case 0x1ba390u: goto label_1ba390;
        case 0x1ba394u: goto label_1ba394;
        case 0x1ba398u: goto label_1ba398;
        case 0x1ba39cu: goto label_1ba39c;
        case 0x1ba3a0u: goto label_1ba3a0;
        case 0x1ba3a4u: goto label_1ba3a4;
        case 0x1ba3a8u: goto label_1ba3a8;
        case 0x1ba3acu: goto label_1ba3ac;
        case 0x1ba3b0u: goto label_1ba3b0;
        case 0x1ba3b4u: goto label_1ba3b4;
        case 0x1ba3b8u: goto label_1ba3b8;
        case 0x1ba3bcu: goto label_1ba3bc;
        case 0x1ba3c0u: goto label_1ba3c0;
        case 0x1ba3c4u: goto label_1ba3c4;
        case 0x1ba3c8u: goto label_1ba3c8;
        case 0x1ba3ccu: goto label_1ba3cc;
        case 0x1ba3d0u: goto label_1ba3d0;
        case 0x1ba3d4u: goto label_1ba3d4;
        case 0x1ba3d8u: goto label_1ba3d8;
        case 0x1ba3dcu: goto label_1ba3dc;
        case 0x1ba3e0u: goto label_1ba3e0;
        case 0x1ba3e4u: goto label_1ba3e4;
        case 0x1ba3e8u: goto label_1ba3e8;
        case 0x1ba3ecu: goto label_1ba3ec;
        case 0x1ba3f0u: goto label_1ba3f0;
        case 0x1ba3f4u: goto label_1ba3f4;
        case 0x1ba3f8u: goto label_1ba3f8;
        case 0x1ba3fcu: goto label_1ba3fc;
        case 0x1ba400u: goto label_1ba400;
        case 0x1ba404u: goto label_1ba404;
        case 0x1ba408u: goto label_1ba408;
        case 0x1ba40cu: goto label_1ba40c;
        case 0x1ba410u: goto label_1ba410;
        case 0x1ba414u: goto label_1ba414;
        case 0x1ba418u: goto label_1ba418;
        case 0x1ba41cu: goto label_1ba41c;
        case 0x1ba420u: goto label_1ba420;
        case 0x1ba424u: goto label_1ba424;
        case 0x1ba428u: goto label_1ba428;
        case 0x1ba42cu: goto label_1ba42c;
        case 0x1ba430u: goto label_1ba430;
        case 0x1ba434u: goto label_1ba434;
        default: return;
    }

label_1b9c68:
    // 0x1b9c68: 0x51822  neg         $v1, $a1
    ctx->pc = 0x1b9c68u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 5), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
label_1b9c6c:
    // 0x1b9c6c: 0xa4180a  movz        $v1, $a1, $a0
    ctx->pc = 0x1b9c6cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
label_1b9c70:
    // 0x1b9c70: 0x28610081  slti        $at, $v1, 0x81
    ctx->pc = 0x1b9c70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)129) ? 1 : 0);
label_1b9c74:
    // 0x1b9c74: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1b9c78:
    if (ctx->pc == 0x1B9C78u) {
        ctx->pc = 0x1B9C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9C74u;
        // 0x1b9c78: 0x211082a  slt         $at, $s0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9C7Cu;
        goto label_1b9c7c;
    }
    ctx->pc = 0x1B9C74u;
    {
        const bool branch_taken_0x1b9c74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9C74u;
        // 0x1b9c78: 0x211082a  slt         $at, $s0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9c74) {
            ctx->pc = 0x1B9C88u;
            goto label_1b9c88;
        }
    }
    ctx->pc = 0x1B9C7Cu;
label_1b9c7c:
    // 0x1b9c7c: 0x1000000a  b           . + 4 + (0xA << 2)
label_1b9c80:
    if (ctx->pc == 0x1B9C80u) {
        ctx->pc = 0x1B9C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9C7Cu;
        // 0x1b9c80: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9C84u;
        goto label_1b9c84;
    }
    ctx->pc = 0x1B9C7Cu;
    {
        const bool branch_taken_0x1b9c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9C7Cu;
        // 0x1b9c80: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9c7c) {
            ctx->pc = 0x1B9CA8u;
            goto label_1b9ca8;
        }
    }
    ctx->pc = 0x1B9C84u;
label_1b9c84:
    // 0x1b9c84: 0x211082a  slt         $at, $s0, $s1
    ctx->pc = 0x1b9c84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1b9c88:
    // 0x1b9c88: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1b9c8c:
    if (ctx->pc == 0x1B9C8Cu) {
        ctx->pc = 0x1B9C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9C88u;
        // 0x1b9c8c: 0x230082a  slt         $at, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9C90u;
        goto label_1b9c90;
    }
    ctx->pc = 0x1B9C88u;
    {
        const bool branch_taken_0x1b9c88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9C88u;
        // 0x1b9c8c: 0x230082a  slt         $at, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9c88) {
            ctx->pc = 0x1B9C9Cu;
            goto label_1b9c9c;
        }
    }
    ctx->pc = 0x1B9C90u;
label_1b9c90:
    // 0x1b9c90: 0x10000005  b           . + 4 + (0x5 << 2)
label_1b9c94:
    if (ctx->pc == 0x1B9C94u) {
        ctx->pc = 0x1B9C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9C90u;
        // 0x1b9c94: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9C98u;
        goto label_1b9c98;
    }
    ctx->pc = 0x1B9C90u;
    {
        const bool branch_taken_0x1b9c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9C90u;
        // 0x1b9c94: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9c90) {
            ctx->pc = 0x1B9CA8u;
            goto label_1b9ca8;
        }
    }
    ctx->pc = 0x1B9C98u;
label_1b9c98:
    // 0x1b9c98: 0x230082a  slt         $at, $s1, $s0
    ctx->pc = 0x1b9c98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1b9c9c:
    // 0x1b9c9c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1b9ca0:
    if (ctx->pc == 0x1B9CA0u) {
        ctx->pc = 0x1B9CA4u;
        goto label_1b9ca4;
    }
    ctx->pc = 0x1B9C9Cu;
    {
        const bool branch_taken_0x1b9c9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9c9c) {
            ctx->pc = 0x1B9CA8u;
            goto label_1b9ca8;
        }
    }
    ctx->pc = 0x1B9CA4u;
label_1b9ca4:
    // 0x1b9ca4: 0x2610ff80  addiu       $s0, $s0, -0x80
    ctx->pc = 0x1b9ca4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967168));
label_1b9ca8:
    // 0x1b9ca8: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1b9ca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1b9cac:
    // 0x1b9cac: 0x8c233884  lw          $v1, 0x3884($at)
    ctx->pc = 0x1b9cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 14468)));
label_1b9cb0:
    // 0x1b9cb0: 0x10700005  beq         $v1, $s0, . + 4 + (0x5 << 2)
label_1b9cb4:
    if (ctx->pc == 0x1B9CB4u) {
        ctx->pc = 0x1B9CB8u;
        goto label_1b9cb8;
    }
    ctx->pc = 0x1B9CB0u;
    {
        const bool branch_taken_0x1b9cb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x1b9cb0) {
            ctx->pc = 0x1B9CC8u;
            goto label_1b9cc8;
        }
    }
    ctx->pc = 0x1B9CB8u;
label_1b9cb8:
    // 0x1b9cb8: 0xc05af40  jal         func_16BD00
label_1b9cbc:
    if (ctx->pc == 0x1B9CBCu) {
        ctx->pc = 0x1B9CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9CB8u;
        // 0x1b9cbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9CC0u;
        goto label_1b9cc0;
    }
    ctx->pc = 0x1B9CB8u;
    SET_GPR_U32(ctx, 31, 0x1B9CC0u);
    ctx->pc = 0x1B9CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9CB8u;
    // 0x1b9cbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD00u, 0x1B9CB8u, 0x1B9CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9CC0u;
label_1b9cc0:
    // 0x1b9cc0: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1b9cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1b9cc4:
    // 0x1b9cc4: 0xac303884  sw          $s0, 0x3884($at)
    ctx->pc = 0x1b9cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14468), GPR_U32(ctx, 16));
label_1b9cc8:
    // 0x1b9cc8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b9cc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b9ccc:
    // 0x1b9ccc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b9cccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b9cd0:
    // 0x1b9cd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b9cd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b9cd4:
    // 0x1b9cd4: 0x3e00008  jr          $ra
label_1b9cd8:
    if (ctx->pc == 0x1B9CD8u) {
        ctx->pc = 0x1B9CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9CD4u;
        // 0x1b9cd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9CDCu;
        goto label_1b9cdc;
    }
    ctx->pc = 0x1B9CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9CD4u;
        // 0x1b9cd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9CDCu;
label_1b9cdc:
    // 0x1b9cdc: 0x0  nop
    ctx->pc = 0x1b9cdcu;
    // NOP
label_1b9ce0:
    // 0x1b9ce0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b9ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b9ce4:
    // 0x1b9ce4: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
label_1b9ce8:
    if (ctx->pc == 0x1B9CE8u) {
        ctx->pc = 0x1B9CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9CE4u;
        // 0x1b9ce8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9CECu;
        goto label_1b9cec;
    }
    ctx->pc = 0x1B9CE4u;
    {
        const bool branch_taken_0x1b9ce4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9CE4u;
        // 0x1b9ce8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9ce4) {
            ctx->pc = 0x1B9D2Cu;
            goto label_1b9d2c;
        }
    }
    ctx->pc = 0x1B9CECu;
label_1b9cec:
    // 0x1b9cec: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1b9cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1b9cf0:
    // 0x1b9cf0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b9cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9cf4:
    // 0x1b9cf4: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x1b9cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_1b9cf8:
    // 0x1b9cf8: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1b9cf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1b9cfc:
    // 0x1b9cfc: 0xc05b14c  jal         func_16C530
label_1b9d00:
    if (ctx->pc == 0x1B9D00u) {
        ctx->pc = 0x1B9D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9CFCu;
        // 0x1b9d00: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9D04u;
        goto label_1b9d04;
    }
    ctx->pc = 0x1B9CFCu;
    SET_GPR_U32(ctx, 31, 0x1B9D04u);
    ctx->pc = 0x1B9D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9CFCu;
    // 0x1b9d00: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C530u, 0x1B9CFCu, 0x1B9D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9D04u;
label_1b9d04:
    // 0x1b9d04: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1b9d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1b9d08:
    // 0x1b9d08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b9d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9d0c:
    // 0x1b9d0c: 0xac203880  sw          $zero, 0x3880($at)
    ctx->pc = 0x1b9d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14464), GPR_U32(ctx, 0));
label_1b9d10:
    // 0x1b9d10: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1b9d10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1b9d14:
    // 0x1b9d14: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1b9d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1b9d18:
    // 0x1b9d18: 0x8c253880  lw          $a1, 0x3880($at)
    ctx->pc = 0x1b9d18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 14464)));
label_1b9d1c:
    // 0x1b9d1c: 0xc05b0b8  jal         func_16C2E0
label_1b9d20:
    if (ctx->pc == 0x1B9D20u) {
        ctx->pc = 0x1B9D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9D1Cu;
        // 0x1b9d20: 0x24070009  addiu       $a3, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9D24u;
        goto label_1b9d24;
    }
    ctx->pc = 0x1B9D1Cu;
    SET_GPR_U32(ctx, 31, 0x1B9D24u);
    ctx->pc = 0x1B9D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9D1Cu;
    // 0x1b9d20: 0x24070009  addiu       $a3, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C2E0u, 0x1B9D1Cu, 0x1B9D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9D24u;
label_1b9d24:
    // 0x1b9d24: 0x1000000b  b           . + 4 + (0xB << 2)
label_1b9d28:
    if (ctx->pc == 0x1B9D28u) {
        ctx->pc = 0x1B9D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9D24u;
        // 0x1b9d28: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9D2Cu;
        goto label_1b9d2c;
    }
    ctx->pc = 0x1B9D24u;
    {
        const bool branch_taken_0x1b9d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9D24u;
        // 0x1b9d28: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9d24) {
            ctx->pc = 0x1B9D54u;
            goto label_1b9d54;
        }
    }
    ctx->pc = 0x1B9D2Cu;
label_1b9d2c:
    // 0x1b9d2c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b9d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9d30:
    // 0x1b9d30: 0xc05af88  jal         func_16BE20
label_1b9d34:
    if (ctx->pc == 0x1B9D34u) {
        ctx->pc = 0x1B9D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9D30u;
        // 0x1b9d34: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9D38u;
        goto label_1b9d38;
    }
    ctx->pc = 0x1B9D30u;
    SET_GPR_U32(ctx, 31, 0x1B9D38u);
    ctx->pc = 0x1B9D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9D30u;
    // 0x1b9d34: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BE20u, 0x1B9D30u, 0x1B9D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9D38u;
label_1b9d38:
    // 0x1b9d38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1b9d3c:
    if (ctx->pc == 0x1B9D3Cu) {
        ctx->pc = 0x1B9D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9D38u;
        // 0x1b9d3c: 0x3c010046  lui         $at, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9D40u;
        goto label_1b9d40;
    }
    ctx->pc = 0x1B9D38u;
    {
        const bool branch_taken_0x1b9d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9D38u;
        // 0x1b9d3c: 0x3c010046  lui         $at, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9d38) {
            ctx->pc = 0x1B9D50u;
            goto label_1b9d50;
        }
    }
    ctx->pc = 0x1B9D40u;
label_1b9d40:
    // 0x1b9d40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b9d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9d44:
    // 0x1b9d44: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1b9d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1b9d48:
    // 0x1b9d48: 0xc05b114  jal         func_16C450
label_1b9d4c:
    if (ctx->pc == 0x1B9D4Cu) {
        ctx->pc = 0x1B9D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9D48u;
        // 0x1b9d4c: 0xac203880  sw          $zero, 0x3880($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 14464), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9D50u;
        goto label_1b9d50;
    }
    ctx->pc = 0x1B9D48u;
    SET_GPR_U32(ctx, 31, 0x1B9D50u);
    ctx->pc = 0x1B9D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9D48u;
    // 0x1b9d4c: 0xac203880  sw          $zero, 0x3880($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 14464), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C450u, 0x1B9D48u, 0x1B9D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9D50u;
label_1b9d50:
    // 0x1b9d50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b9d54:
    // 0x1b9d54: 0x3e00008  jr          $ra
label_1b9d58:
    if (ctx->pc == 0x1B9D58u) {
        ctx->pc = 0x1B9D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9D54u;
        // 0x1b9d58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9D5Cu;
        goto label_1b9d5c;
    }
    ctx->pc = 0x1B9D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9D54u;
        // 0x1b9d58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9D5Cu;
label_1b9d5c:
    // 0x1b9d5c: 0x0  nop
    ctx->pc = 0x1b9d5cu;
    // NOP
label_1b9d60:
    // 0x1b9d60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b9d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1b9d64:
    // 0x1b9d64: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1b9d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1b9d68:
    // 0x1b9d68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b9d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b9d6c:
    // 0x1b9d6c: 0xc055e34  jal         func_1578D0
label_1b9d70:
    if (ctx->pc == 0x1B9D70u) {
        ctx->pc = 0x1B9D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9D6Cu;
        // 0x1b9d70: 0xac203880  sw          $zero, 0x3880($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 14464), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9D74u;
        goto label_1b9d74;
    }
    ctx->pc = 0x1B9D6Cu;
    SET_GPR_U32(ctx, 31, 0x1B9D74u);
    ctx->pc = 0x1B9D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9D6Cu;
    // 0x1b9d70: 0xac203880  sw          $zero, 0x3880($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 14464), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1578D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1578D0u, 0x1B9D6Cu, 0x1B9D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9D74u;
label_1b9d74:
    // 0x1b9d74: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1b9d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
label_1b9d78:
    // 0x1b9d78: 0xac223884  sw          $v0, 0x3884($at)
    ctx->pc = 0x1b9d78u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14468), GPR_U32(ctx, 2));
label_1b9d7c:
    // 0x1b9d7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b9d80:
    // 0x1b9d80: 0x3e00008  jr          $ra
label_1b9d84:
    if (ctx->pc == 0x1B9D84u) {
        ctx->pc = 0x1B9D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9D80u;
        // 0x1b9d84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9D88u;
        goto label_1b9d88;
    }
    ctx->pc = 0x1B9D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9D80u;
        // 0x1b9d84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9D80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9D88u;
label_1b9d88:
    // 0x1b9d88: 0x0  nop
    ctx->pc = 0x1b9d88u;
    // NOP
label_1b9d8c:
    // 0x1b9d8c: 0x0  nop
    ctx->pc = 0x1b9d8cu;
    // NOP
label_1b9d90:
    // 0x1b9d90: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1b9d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_1b9d94:
    // 0x1b9d94: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x1b9d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_1b9d98:
    // 0x1b9d98: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1b9d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1b9d9c:
    // 0x1b9d9c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1b9d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1b9da0:
    // 0x1b9da0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1b9da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1b9da4:
    // 0x1b9da4: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x1b9da4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1b9da8:
    // 0x1b9da8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1b9da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1b9dac:
    // 0x1b9dac: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1b9dacu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b9db0:
    // 0x1b9db0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1b9db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1b9db4:
    // 0x1b9db4: 0x24160026  addiu       $s6, $zero, 0x26
    ctx->pc = 0x1b9db4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_1b9db8:
    // 0x1b9db8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b9db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1b9dbc:
    // 0x1b9dbc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1b9dbcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b9dc0:
    // 0x1b9dc0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b9dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1b9dc4:
    // 0x1b9dc4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1b9dc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1b9dc8:
    // 0x1b9dc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b9dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1b9dcc:
    // 0x1b9dcc: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1b9dccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1b9dd0:
    // 0x1b9dd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b9dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b9dd4:
    // 0x1b9dd4: 0x24070016  addiu       $a3, $zero, 0x16
    ctx->pc = 0x1b9dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1b9dd8:
    // 0x1b9dd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b9dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b9ddc:
    // 0x1b9ddc: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x1b9ddcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1b9de0:
    // 0x1b9de0: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x1b9de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_1b9de4:
    // 0x1b9de4: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x1b9de4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1b9de8:
    // 0x1b9de8: 0x314300ff  andi        $v1, $t2, 0xFF
    ctx->pc = 0x1b9de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
label_1b9dec:
    // 0x1b9dec: 0xafa500d0  sw          $a1, 0xD0($sp)
    ctx->pc = 0x1b9decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 5));
label_1b9df0:
    // 0x1b9df0: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x1b9df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_1b9df4:
    // 0x1b9df4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b9df4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9df8:
    // 0x1b9df8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1b9df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1b9dfc:
    // 0x1b9dfc: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x1b9dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1b9e00:
    // 0x1b9e00: 0x30680001  andi        $t0, $v1, 0x1
    ctx->pc = 0x1b9e00u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1b9e04:
    // 0x1b9e04: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x1b9e04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_1b9e08:
    // 0x1b9e08: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_1b9e0c:
    if (ctx->pc == 0x1B9E0Cu) {
        ctx->pc = 0x1B9E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E08u;
        // 0x1b9e0c: 0xe8b00a  movz        $s6, $a3, $t0 (Delay Slot)
        if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9E10u;
        goto label_1b9e10;
    }
    ctx->pc = 0x1B9E08u;
    {
        const bool branch_taken_0x1b9e08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E08u;
        // 0x1b9e0c: 0xe8b00a  movz        $s6, $a3, $t0 (Delay Slot)
        if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9e08) {
            ctx->pc = 0x1B9E3Cu;
            goto label_1b9e3c;
        }
    }
    ctx->pc = 0x1B9E10u;
label_1b9e10:
    // 0x1b9e10: 0xc042484  jal         func_109210
label_1b9e14:
    if (ctx->pc == 0x1B9E14u) {
        ctx->pc = 0x1B9E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E10u;
        // 0x1b9e14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9E18u;
        goto label_1b9e18;
    }
    ctx->pc = 0x1B9E10u;
    SET_GPR_U32(ctx, 31, 0x1B9E18u);
    ctx->pc = 0x1B9E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9E10u;
    // 0x1b9e14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109210u, 0x1B9E10u, 0x1B9E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9E18u;
label_1b9e18:
    // 0x1b9e18: 0x2c21824  and         $v1, $s6, $v0
    ctx->pc = 0x1b9e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
label_1b9e1c:
    // 0x1b9e1c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_1b9e20:
    if (ctx->pc == 0x1B9E20u) {
        ctx->pc = 0x1B9E24u;
        goto label_1b9e24;
    }
    ctx->pc = 0x1B9E1Cu;
    {
        const bool branch_taken_0x1b9e1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9e1c) {
            ctx->pc = 0x1B9E3Cu;
            goto label_1b9e3c;
        }
    }
    ctx->pc = 0x1B9E24u;
label_1b9e24:
    // 0x1b9e24: 0x24020280  addiu       $v0, $zero, 0x280
    ctx->pc = 0x1b9e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1b9e28:
    // 0x1b9e28: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x1b9e28u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
label_1b9e2c:
    // 0x1b9e2c: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x1b9e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1b9e30:
    // 0x1b9e30: 0xc066e26  jal         func_19B898
label_1b9e34:
    if (ctx->pc == 0x1B9E34u) {
        ctx->pc = 0x1B9E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9E30u;
        // 0x1b9e34: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9E38u;
        goto label_1b9e38;
    }
    ctx->pc = 0x1B9E30u;
    SET_GPR_U32(ctx, 31, 0x1B9E38u);
    ctx->pc = 0x1B9E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9E30u;
    // 0x1b9e34: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1B9E38u;
label_1b9e38:
    // 0x1b9e38: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1b9e38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b9e3c:
    // 0x1b9e3c: 0x16000062  bnez        $s0, . + 4 + (0x62 << 2)
label_1b9e40:
    if (ctx->pc == 0x1B9E40u) {
        ctx->pc = 0x1B9E44u;
        goto label_1b9e44;
    }
    ctx->pc = 0x1B9E3Cu;
    {
        const bool branch_taken_0x1b9e3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9e3c) {
            ctx->pc = 0x1B9FC8u;
            goto label_1b9fc8;
        }
    }
    ctx->pc = 0x1B9E44u;
label_1b9e44:
    // 0x1b9e44: 0x96640000  lhu         $a0, 0x0($s3)
    ctx->pc = 0x1b9e44u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_1b9e48:
    // 0x1b9e48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b9e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b9e4c:
    // 0x1b9e4c: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x1b9e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_1b9e50:
    // 0x1b9e50: 0x24030280  addiu       $v1, $zero, 0x280
    ctx->pc = 0x1b9e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1b9e54:
    // 0x1b9e54: 0x10830026  beq         $a0, $v1, . + 4 + (0x26 << 2)
label_1b9e58:
    if (ctx->pc == 0x1B9E58u) {
        ctx->pc = 0x1B9E5Cu;
        goto label_1b9e5c;
    }
    ctx->pc = 0x1B9E54u;
    {
        const bool branch_taken_0x1b9e54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b9e54) {
            ctx->pc = 0x1B9EF0u;
            goto label_1b9ef0;
        }
    }
    ctx->pc = 0x1B9E5Cu;
label_1b9e5c:
    // 0x1b9e5c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1b9e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_1b9e60:
    // 0x1b9e60: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1b9e60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1b9e64:
    // 0x1b9e64: 0x24423890  addiu       $v0, $v0, 0x3890
    ctx->pc = 0x1b9e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14480));
label_1b9e68:
    // 0x1b9e68: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x1b9e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1b9e6c:
    // 0x1b9e6c: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1b9e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1b9e70:
    // 0x1b9e70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b9e70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b9e74:
    // 0x1b9e74: 0x94670000  lhu         $a3, 0x0($v1)
    ctx->pc = 0x1b9e74u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1b9e78:
    // 0x1b9e78: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1b9e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_1b9e7c:
    // 0x1b9e7c: 0x24423892  addiu       $v0, $v0, 0x3892
    ctx->pc = 0x1b9e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14482));
label_1b9e80:
    // 0x1b9e80: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b9e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1b9e84:
    // 0x1b9e84: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b9e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b9e88:
    // 0x1b9e88: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x1b9e88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_1b9e8c:
    // 0x1b9e8c: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x1b9e8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1b9e90:
    // 0x1b9e90: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x1b9e90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_1b9e94:
    // 0x1b9e94: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1b9e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_1b9e98:
    // 0x1b9e98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b9e98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1b9e9c:
    // 0x1b9e9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b9e9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b9ea0:
    // 0x1b9ea0: 0x0  nop
    ctx->pc = 0x1b9ea0u;
    // NOP
label_1b9ea4:
    // 0x1b9ea4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b9ea4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1b9ea8:
    // 0x1b9ea8: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x1b9ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1b9eac:
    // 0x1b9eac: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1b9eacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1b9eb0:
    // 0x1b9eb0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1b9eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1b9eb4:
    // 0x1b9eb4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1b9eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b9eb8:
    // 0x1b9eb8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1b9eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1b9ebc:
    // 0x1b9ebc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1b9ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1b9ec0:
    // 0x1b9ec0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b9ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1b9ec4:
    // 0x1b9ec4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9ec4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b9ec8:
    // 0x1b9ec8: 0x0  nop
    ctx->pc = 0x1b9ec8u;
    // NOP
label_1b9ecc:
    // 0x1b9ecc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b9eccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1b9ed0:
    // 0x1b9ed0: 0xc042484  jal         func_109210
label_1b9ed4:
    if (ctx->pc == 0x1B9ED4u) {
        ctx->pc = 0x1B9ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9ED0u;
        // 0x1b9ed4: 0xe7a000f8  swc1        $f0, 0xF8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9ED8u;
        goto label_1b9ed8;
    }
    ctx->pc = 0x1B9ED0u;
    SET_GPR_U32(ctx, 31, 0x1B9ED8u);
    ctx->pc = 0x1B9ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9ED0u;
    // 0x1b9ed4: 0xe7a000f8  swc1        $f0, 0xF8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x109210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109210u, 0x1B9ED0u, 0x1B9ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9ED8u;
label_1b9ed8:
    // 0x1b9ed8: 0x2c21824  and         $v1, $s6, $v0
    ctx->pc = 0x1b9ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
label_1b9edc:
    // 0x1b9edc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1b9ee0:
    if (ctx->pc == 0x1B9EE0u) {
        ctx->pc = 0x1B9EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9EDCu;
        // 0x1b9ee0: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9EE4u;
        goto label_1b9ee4;
    }
    ctx->pc = 0x1B9EDCu;
    {
        const bool branch_taken_0x1b9edc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9EDCu;
        // 0x1b9ee0: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9edc) {
            ctx->pc = 0x1B9EF0u;
            goto label_1b9ef0;
        }
    }
    ctx->pc = 0x1B9EE4u;
label_1b9ee4:
    // 0x1b9ee4: 0xc066e26  jal         func_19B898
label_1b9ee8:
    if (ctx->pc == 0x1B9EE8u) {
        ctx->pc = 0x1B9EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9EE4u;
        // 0x1b9ee8: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9EECu;
        goto label_1b9eec;
    }
    ctx->pc = 0x1B9EE4u;
    SET_GPR_U32(ctx, 31, 0x1B9EECu);
    ctx->pc = 0x1B9EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9EE4u;
    // 0x1b9ee8: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1B9EECu;
label_1b9eec:
    // 0x1b9eec: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x1b9eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_1b9ef0:
    // 0x1b9ef0: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1b9ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1b9ef4:
    // 0x1b9ef4: 0x14600034  bnez        $v1, . + 4 + (0x34 << 2)
label_1b9ef8:
    if (ctx->pc == 0x1B9EF8u) {
        ctx->pc = 0x1B9EFCu;
        goto label_1b9efc;
    }
    ctx->pc = 0x1B9EF4u;
    {
        const bool branch_taken_0x1b9ef4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9ef4) {
            ctx->pc = 0x1B9FC8u;
            goto label_1b9fc8;
        }
    }
    ctx->pc = 0x1B9EFCu;
label_1b9efc:
    // 0x1b9efc: 0x96660000  lhu         $a2, 0x0($s3)
    ctx->pc = 0x1b9efcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_1b9f00:
    // 0x1b9f00: 0x3c03451c  lui         $v1, 0x451C
    ctx->pc = 0x1b9f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17692 << 16));
label_1b9f04:
    // 0x1b9f04: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1b9f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_1b9f08:
    // 0x1b9f08: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1b9f08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_1b9f0c:
    // 0x1b9f0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b9f0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b9f10:
    // 0x1b9f10: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1b9f10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1b9f14:
    // 0x1b9f14: 0x24a53890  addiu       $a1, $a1, 0x3890
    ctx->pc = 0x1b9f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14480));
label_1b9f18:
    // 0x1b9f18: 0x24843892  addiu       $a0, $a0, 0x3892
    ctx->pc = 0x1b9f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14482));
label_1b9f1c:
    // 0x1b9f1c: 0xc6a30000  lwc1        $f3, 0x0($s5)
    ctx->pc = 0x1b9f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b9f20:
    // 0x1b9f20: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x1b9f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b9f24:
    // 0x1b9f24: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1b9f24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1b9f28:
    // 0x1b9f28: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1b9f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1b9f2c:
    // 0x1b9f2c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1b9f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1b9f30:
    // 0x1b9f30: 0x94a50000  lhu         $a1, 0x0($a1)
    ctx->pc = 0x1b9f30u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_1b9f34:
    // 0x1b9f34: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x1b9f34u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1b9f38:
    // 0x1b9f38: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1b9f38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1b9f3c:
    // 0x1b9f3c: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1b9f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1b9f40:
    // 0x1b9f40: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1b9f40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1b9f44:
    // 0x1b9f44: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1b9f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1b9f48:
    // 0x1b9f48: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1b9f48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1b9f4c:
    // 0x1b9f4c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1b9f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1b9f50:
    // 0x1b9f50: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1b9f50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1b9f54:
    // 0x1b9f54: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1b9f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1b9f58:
    // 0x1b9f58: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1b9f58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1b9f5c:
    // 0x1b9f5c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b9f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1b9f60:
    // 0x1b9f60: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x1b9f60u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1b9f64:
    // 0x1b9f64: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b9f64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b9f68:
    // 0x1b9f68: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x1b9f68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_1b9f6c:
    // 0x1b9f6c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b9f6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1b9f70:
    // 0x1b9f70: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x1b9f70u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_1b9f74:
    // 0x1b9f74: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1b9f74u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1b9f78:
    // 0x1b9f78: 0x4603181a  mula.s      $f3, $f3
    ctx->pc = 0x1b9f78u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[3]));
label_1b9f7c:
    // 0x1b9f7c: 0x4601085c  madd.s      $f1, $f1, $f1
    ctx->pc = 0x1b9f7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_1b9f80:
    // 0x1b9f80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b9f80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b9f84:
    // 0x1b9f84: 0x0  nop
    ctx->pc = 0x1b9f84u;
    // NOP
label_1b9f88:
    // 0x1b9f88: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1b9f8c:
    if (ctx->pc == 0x1B9F8Cu) {
        ctx->pc = 0x1B9F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9F88u;
        // 0x1b9f8c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9F90u;
        goto label_1b9f90;
    }
    ctx->pc = 0x1B9F88u;
    {
        const bool branch_taken_0x1b9f88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B9F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9F88u;
        // 0x1b9f8c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9f88) {
            ctx->pc = 0x1B9F94u;
            goto label_1b9f94;
        }
    }
    ctx->pc = 0x1B9F90u;
label_1b9f90:
    // 0x1b9f90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b9f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b9f94:
    // 0x1b9f94: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_1b9f98:
    if (ctx->pc == 0x1B9F98u) {
        ctx->pc = 0x1B9F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9F94u;
        // 0x1b9f98: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9F9Cu;
        goto label_1b9f9c;
    }
    ctx->pc = 0x1B9F94u;
    {
        const bool branch_taken_0x1b9f94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9F94u;
        // 0x1b9f98: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9f94) {
            ctx->pc = 0x1B9FB0u;
            goto label_1b9fb0;
        }
    }
    ctx->pc = 0x1B9F9Cu;
label_1b9f9c:
    // 0x1b9f9c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1b9f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1b9fa0:
    // 0x1b9fa0: 0xc066e26  jal         func_19B898
label_1b9fa4:
    if (ctx->pc == 0x1B9FA4u) {
        ctx->pc = 0x1B9FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9FA0u;
        // 0x1b9fa4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9FA8u;
        goto label_1b9fa8;
    }
    ctx->pc = 0x1B9FA0u;
    SET_GPR_U32(ctx, 31, 0x1B9FA8u);
    ctx->pc = 0x1B9FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9FA0u;
    // 0x1b9fa4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1B9FA8u;
label_1b9fa8:
    // 0x1b9fa8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1b9fac:
    if (ctx->pc == 0x1B9FACu) {
        ctx->pc = 0x1B9FB0u;
        goto label_1b9fb0;
    }
    ctx->pc = 0x1B9FA8u;
    {
        const bool branch_taken_0x1b9fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9fa8) {
            ctx->pc = 0x1B9FC8u;
            goto label_1b9fc8;
        }
    }
    ctx->pc = 0x1B9FB0u;
label_1b9fb0:
    // 0x1b9fb0: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x1b9fb0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_1b9fb4:
    // 0x1b9fb4: 0x24030280  addiu       $v1, $zero, 0x280
    ctx->pc = 0x1b9fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1b9fb8:
    // 0x1b9fb8: 0xa6440002  sh          $a0, 0x2($s2)
    ctx->pc = 0x1b9fb8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 4));
label_1b9fbc:
    // 0x1b9fbc: 0x96640000  lhu         $a0, 0x0($s3)
    ctx->pc = 0x1b9fbcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_1b9fc0:
    // 0x1b9fc0: 0xa6440000  sh          $a0, 0x0($s2)
    ctx->pc = 0x1b9fc0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 4));
label_1b9fc4:
    // 0x1b9fc4: 0xa6630000  sh          $v1, 0x0($s3)
    ctx->pc = 0x1b9fc4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
label_1b9fc8:
    // 0x1b9fc8: 0x160000f9  bnez        $s0, . + 4 + (0xF9 << 2)
label_1b9fcc:
    if (ctx->pc == 0x1B9FCCu) {
        ctx->pc = 0x1B9FD0u;
        goto label_1b9fd0;
    }
    ctx->pc = 0x1B9FC8u;
    {
        const bool branch_taken_0x1b9fc8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9fc8) {
            ctx->pc = 0x1BA3B0u;
            goto label_1ba3b0;
        }
    }
    ctx->pc = 0x1B9FD0u;
label_1b9fd0:
    // 0x1b9fd0: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x1b9fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b9fd4:
    // 0x1b9fd4: 0x3c0368db  lui         $v1, 0x68DB
    ctx->pc = 0x1b9fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26843 << 16));
label_1b9fd8:
    // 0x1b9fd8: 0x34638bad  ori         $v1, $v1, 0x8BAD
    ctx->pc = 0x1b9fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)35757);
label_1b9fdc:
    // 0x1b9fdc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b9fdcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1b9fe0:
    // 0x1b9fe0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1b9fe0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1b9fe4:
    // 0x1b9fe4: 0x0  nop
    ctx->pc = 0x1b9fe4u;
    // NOP
label_1b9fe8:
    // 0x1b9fe8: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x1b9fe8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1b9fec:
    // 0x1b9fec: 0x42fc2  srl         $a1, $a0, 31
    ctx->pc = 0x1b9fecu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1b9ff0:
    // 0x1b9ff0: 0x0  nop
    ctx->pc = 0x1b9ff0u;
    // NOP
label_1b9ff4:
    // 0x1b9ff4: 0x2010  mfhi        $a0
    ctx->pc = 0x1b9ff4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_1b9ff8:
    // 0x1b9ff8: 0x422c3  sra         $a0, $a0, 11
    ctx->pc = 0x1b9ff8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 11));
label_1b9ffc:
    // 0x1b9ffc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1b9ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1ba000:
    // 0x1ba000: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1ba000u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1ba004:
    // 0x1ba004: 0xafa40108  sw          $a0, 0x108($sp)
    ctx->pc = 0x1ba004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 4));
label_1ba008:
    // 0x1ba008: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x1ba008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ba00c:
    // 0x1ba00c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ba00cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ba010:
    // 0x1ba010: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1ba010u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1ba014:
    // 0x1ba014: 0x0  nop
    ctx->pc = 0x1ba014u;
    // NOP
label_1ba018:
    // 0x1ba018: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x1ba018u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1ba01c:
    // 0x1ba01c: 0x42fc2  srl         $a1, $a0, 31
    ctx->pc = 0x1ba01cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1ba020:
    // 0x1ba020: 0x0  nop
    ctx->pc = 0x1ba020u;
    // NOP
label_1ba024:
    // 0x1ba024: 0x2010  mfhi        $a0
    ctx->pc = 0x1ba024u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_1ba028:
    // 0x1ba028: 0x422c3  sra         $a0, $a0, 11
    ctx->pc = 0x1ba028u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 11));
label_1ba02c:
    // 0x1ba02c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1ba02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1ba030:
    // 0x1ba030: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x1ba030u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1ba034:
    // 0x1ba034: 0x27a4010c  addiu       $a0, $sp, 0x10C
    ctx->pc = 0x1ba034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
label_1ba038:
    // 0x1ba038: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1ba038u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_1ba03c:
    // 0x1ba03c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1ba03cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1ba040:
    // 0x1ba040: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1ba040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ba044:
    // 0x1ba044: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ba044u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ba048:
    // 0x1ba048: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1ba048u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1ba04c:
    // 0x1ba04c: 0x0  nop
    ctx->pc = 0x1ba04cu;
    // NOP
label_1ba050:
    // 0x1ba050: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x1ba050u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1ba054:
    // 0x1ba054: 0x42fc2  srl         $a1, $a0, 31
    ctx->pc = 0x1ba054u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1ba058:
    // 0x1ba058: 0x0  nop
    ctx->pc = 0x1ba058u;
    // NOP
label_1ba05c:
    // 0x1ba05c: 0x2010  mfhi        $a0
    ctx->pc = 0x1ba05cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_1ba060:
    // 0x1ba060: 0x422c3  sra         $a0, $a0, 11
    ctx->pc = 0x1ba060u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 11));
label_1ba064:
    // 0x1ba064: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1ba064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1ba068:
    // 0x1ba068: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1ba068u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1ba06c:
    // 0x1ba06c: 0xafa40110  sw          $a0, 0x110($sp)
    ctx->pc = 0x1ba06cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
label_1ba070:
    // 0x1ba070: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1ba070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1ba074:
    // 0x1ba074: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1ba074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ba078:
    // 0x1ba078: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ba078u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ba07c:
    // 0x1ba07c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1ba07cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1ba080:
    // 0x1ba080: 0x0  nop
    ctx->pc = 0x1ba080u;
    // NOP
label_1ba084:
    // 0x1ba084: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x1ba084u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1ba088:
    // 0x1ba088: 0x0  nop
    ctx->pc = 0x1ba088u;
    // NOP
label_1ba08c:
    // 0x1ba08c: 0x0  nop
    ctx->pc = 0x1ba08cu;
    // NOP
label_1ba090:
    // 0x1ba090: 0x1810  mfhi        $v1
    ctx->pc = 0x1ba090u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1ba094:
    // 0x1ba094: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x1ba094u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_1ba098:
    // 0x1ba098: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x1ba098u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
label_1ba09c:
    // 0x1ba09c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ba09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1ba0a0:
    // 0x1ba0a0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1ba0a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1ba0a4:
    // 0x1ba0a4: 0x27a30114  addiu       $v1, $sp, 0x114
    ctx->pc = 0x1ba0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
label_1ba0a8:
    // 0x1ba0a8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1ba0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1ba0ac:
    // 0x1ba0ac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ba0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ba0b0:
    // 0x1ba0b0: 0x8fa70110  lw          $a3, 0x110($sp)
    ctx->pc = 0x1ba0b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1ba0b4:
    // 0x1ba0b4: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x1ba0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_1ba0b8:
    // 0x1ba0b8: 0x27a3010c  addiu       $v1, $sp, 0x10C
    ctx->pc = 0x1ba0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
label_1ba0bc:
    // 0x1ba0bc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ba0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ba0c0:
    // 0x1ba0c0: 0xe53023  subu        $a2, $a3, $a1
    ctx->pc = 0x1ba0c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_1ba0c4:
    // 0x1ba0c4: 0xc0282a  slt         $a1, $a2, $zero
    ctx->pc = 0x1ba0c4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_1ba0c8:
    // 0x1ba0c8: 0x64022  neg         $t0, $a2
    ctx->pc = 0x1ba0c8u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 6), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
label_1ba0cc:
    // 0x1ba0cc: 0xc5400a  movz        $t0, $a2, $a1
    ctx->pc = 0x1ba0ccu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 6));
label_1ba0d0:
    // 0x1ba0d0: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x1ba0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ba0d4:
    // 0x1ba0d4: 0x80182a  slt         $v1, $a0, $zero
    ctx->pc = 0x1ba0d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_1ba0d8:
    // 0x1ba0d8: 0x42822  neg         $a1, $a0
    ctx->pc = 0x1ba0d8u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 4), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_1ba0dc:
    // 0x1ba0dc: 0x11000039  beqz        $t0, . + 4 + (0x39 << 2)
label_1ba0e0:
    if (ctx->pc == 0x1BA0E0u) {
        ctx->pc = 0x1BA0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA0DCu;
        // 0x1ba0e0: 0x83280a  movz        $a1, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA0E4u;
        goto label_1ba0e4;
    }
    ctx->pc = 0x1BA0DCu;
    {
        const bool branch_taken_0x1ba0dc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA0DCu;
        // 0x1ba0e0: 0x83280a  movz        $a1, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba0dc) {
            ctx->pc = 0x1BA1C4u;
            goto label_1ba1c4;
        }
    }
    ctx->pc = 0x1BA0E4u;
label_1ba0e4:
    // 0x1ba0e4: 0x10a00037  beqz        $a1, . + 4 + (0x37 << 2)
label_1ba0e8:
    if (ctx->pc == 0x1BA0E8u) {
        ctx->pc = 0x1BA0ECu;
        goto label_1ba0ec;
    }
    ctx->pc = 0x1BA0E4u;
    {
        const bool branch_taken_0x1ba0e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba0e4) {
            ctx->pc = 0x1BA1C4u;
            goto label_1ba1c4;
        }
    }
    ctx->pc = 0x1BA0ECu;
label_1ba0ec:
    // 0x1ba0ec: 0xafa70118  sw          $a3, 0x118($sp)
    ctx->pc = 0x1ba0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 7));
label_1ba0f0:
    // 0x1ba0f0: 0x27a2010c  addiu       $v0, $sp, 0x10C
    ctx->pc = 0x1ba0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
label_1ba0f4:
    // 0x1ba0f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ba0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ba0f8:
    // 0x1ba0f8: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x1ba0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_1ba0fc:
    // 0x1ba0fc: 0x27a50118  addiu       $a1, $sp, 0x118
    ctx->pc = 0x1ba0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_1ba100:
    // 0x1ba100: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x1ba100u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1ba104:
    // 0x1ba104: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1ba104u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ba108:
    // 0x1ba108: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1ba108u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ba10c:
    // 0x1ba10c: 0x27a2011c  addiu       $v0, $sp, 0x11C
    ctx->pc = 0x1ba10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
label_1ba110:
    // 0x1ba110: 0xc0446d8  jal         func_111B60
label_1ba114:
    if (ctx->pc == 0x1BA114u) {
        ctx->pc = 0x1BA114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA110u;
        // 0x1ba114: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA118u;
        goto label_1ba118;
    }
    ctx->pc = 0x1BA110u;
    SET_GPR_U32(ctx, 31, 0x1BA118u);
    ctx->pc = 0x1BA114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA110u;
    // 0x1ba114: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B60u, 0x1BA110u, 0x1BA118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA118u;
label_1ba118:
    // 0x1ba118: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_1ba11c:
    if (ctx->pc == 0x1BA11Cu) {
        ctx->pc = 0x1BA11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA118u;
        // 0x1ba11c: 0x27a40118  addiu       $a0, $sp, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA120u;
        goto label_1ba120;
    }
    ctx->pc = 0x1BA118u;
    {
        const bool branch_taken_0x1ba118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA118u;
        // 0x1ba11c: 0x27a40118  addiu       $a0, $sp, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba118) {
            ctx->pc = 0x1BA158u;
            goto label_1ba158;
        }
    }
    ctx->pc = 0x1BA120u;
label_1ba120:
    // 0x1ba120: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x1ba120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1ba124:
    // 0x1ba124: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x1ba124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1ba128:
    // 0x1ba128: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1ba128u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ba12c:
    // 0x1ba12c: 0xc0446d8  jal         func_111B60
label_1ba130:
    if (ctx->pc == 0x1BA130u) {
        ctx->pc = 0x1BA130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA12Cu;
        // 0x1ba130: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA134u;
        goto label_1ba134;
    }
    ctx->pc = 0x1BA12Cu;
    SET_GPR_U32(ctx, 31, 0x1BA134u);
    ctx->pc = 0x1BA130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA12Cu;
    // 0x1ba130: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B60u, 0x1BA12Cu, 0x1BA134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA134u;
label_1ba134:
    // 0x1ba134: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1ba138:
    if (ctx->pc == 0x1BA138u) {
        ctx->pc = 0x1BA13Cu;
        goto label_1ba13c;
    }
    ctx->pc = 0x1BA134u;
    {
        const bool branch_taken_0x1ba134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba134) {
            ctx->pc = 0x1BA158u;
            goto label_1ba158;
        }
    }
    ctx->pc = 0x1BA13Cu;
label_1ba13c:
    // 0x1ba13c: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x1ba13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_1ba140:
    // 0x1ba140: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x1ba140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
label_1ba144:
    // 0x1ba144: 0x27a3011c  addiu       $v1, $sp, 0x11C
    ctx->pc = 0x1ba144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
label_1ba148:
    // 0x1ba148: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ba148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ba14c:
    // 0x1ba14c: 0x27a30114  addiu       $v1, $sp, 0x114
    ctx->pc = 0x1ba14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
label_1ba150:
    // 0x1ba150: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1ba154:
    if (ctx->pc == 0x1BA154u) {
        ctx->pc = 0x1BA154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA150u;
        // 0x1ba154: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA158u;
        goto label_1ba158;
    }
    ctx->pc = 0x1BA150u;
    {
        const bool branch_taken_0x1ba150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA150u;
        // 0x1ba154: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba150) {
            ctx->pc = 0x1BA1C4u;
            goto label_1ba1c4;
        }
    }
    ctx->pc = 0x1BA158u;
label_1ba158:
    // 0x1ba158: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x1ba158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_1ba15c:
    // 0x1ba15c: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x1ba15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_1ba160:
    // 0x1ba160: 0x27a50118  addiu       $a1, $sp, 0x118
    ctx->pc = 0x1ba160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_1ba164:
    // 0x1ba164: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x1ba164u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1ba168:
    // 0x1ba168: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1ba168u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ba16c:
    // 0x1ba16c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1ba16cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ba170:
    // 0x1ba170: 0xafa20118  sw          $v0, 0x118($sp)
    ctx->pc = 0x1ba170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
label_1ba174:
    // 0x1ba174: 0x27a20114  addiu       $v0, $sp, 0x114
    ctx->pc = 0x1ba174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
label_1ba178:
    // 0x1ba178: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ba178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ba17c:
    // 0x1ba17c: 0x27a2011c  addiu       $v0, $sp, 0x11C
    ctx->pc = 0x1ba17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
label_1ba180:
    // 0x1ba180: 0xc0446d8  jal         func_111B60
label_1ba184:
    if (ctx->pc == 0x1BA184u) {
        ctx->pc = 0x1BA184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA180u;
        // 0x1ba184: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA188u;
        goto label_1ba188;
    }
    ctx->pc = 0x1BA180u;
    SET_GPR_U32(ctx, 31, 0x1BA188u);
    ctx->pc = 0x1BA184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA180u;
    // 0x1ba184: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B60u, 0x1BA180u, 0x1BA188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA188u;
label_1ba188:
    // 0x1ba188: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1ba18c:
    if (ctx->pc == 0x1BA18Cu) {
        ctx->pc = 0x1BA18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA188u;
        // 0x1ba18c: 0x27a40118  addiu       $a0, $sp, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA190u;
        goto label_1ba190;
    }
    ctx->pc = 0x1BA188u;
    {
        const bool branch_taken_0x1ba188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA188u;
        // 0x1ba18c: 0x27a40118  addiu       $a0, $sp, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba188) {
            ctx->pc = 0x1BA1C4u;
            goto label_1ba1c4;
        }
    }
    ctx->pc = 0x1BA190u;
label_1ba190:
    // 0x1ba190: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x1ba190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1ba194:
    // 0x1ba194: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x1ba194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1ba198:
    // 0x1ba198: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1ba198u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ba19c:
    // 0x1ba19c: 0xc0446d8  jal         func_111B60
label_1ba1a0:
    if (ctx->pc == 0x1BA1A0u) {
        ctx->pc = 0x1BA1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA19Cu;
        // 0x1ba1a0: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA1A4u;
        goto label_1ba1a4;
    }
    ctx->pc = 0x1BA19Cu;
    SET_GPR_U32(ctx, 31, 0x1BA1A4u);
    ctx->pc = 0x1BA1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA19Cu;
    // 0x1ba1a0: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111B60u, 0x1BA19Cu, 0x1BA1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA1A4u;
label_1ba1a4:
    // 0x1ba1a4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1ba1a8:
    if (ctx->pc == 0x1BA1A8u) {
        ctx->pc = 0x1BA1ACu;
        goto label_1ba1ac;
    }
    ctx->pc = 0x1BA1A4u;
    {
        const bool branch_taken_0x1ba1a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba1a4) {
            ctx->pc = 0x1BA1C4u;
            goto label_1ba1c4;
        }
    }
    ctx->pc = 0x1BA1ACu;
label_1ba1ac:
    // 0x1ba1ac: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x1ba1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_1ba1b0:
    // 0x1ba1b0: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x1ba1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
label_1ba1b4:
    // 0x1ba1b4: 0x27a3011c  addiu       $v1, $sp, 0x11C
    ctx->pc = 0x1ba1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
label_1ba1b8:
    // 0x1ba1b8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ba1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ba1bc:
    // 0x1ba1bc: 0x27a30114  addiu       $v1, $sp, 0x114
    ctx->pc = 0x1ba1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
label_1ba1c0:
    // 0x1ba1c0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1ba1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1ba1c4:
    // 0x1ba1c4: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1ba1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1ba1c8:
    // 0x1ba1c8: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1ba1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1ba1cc:
    // 0x1ba1cc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ba1ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1ba1d0:
    // 0x1ba1d0: 0x14600058  bnez        $v1, . + 4 + (0x58 << 2)
label_1ba1d4:
    if (ctx->pc == 0x1BA1D4u) {
        ctx->pc = 0x1BA1D8u;
        goto label_1ba1d8;
    }
    ctx->pc = 0x1BA1D0u;
    {
        const bool branch_taken_0x1ba1d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba1d0) {
            ctx->pc = 0x1BA334u;
            goto label_1ba334;
        }
    }
    ctx->pc = 0x1BA1D8u;
label_1ba1d8:
    // 0x1ba1d8: 0x27a20114  addiu       $v0, $sp, 0x114
    ctx->pc = 0x1ba1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
label_1ba1dc:
    // 0x1ba1dc: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x1ba1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1ba1e0:
    // 0x1ba1e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ba1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ba1e4:
    // 0x1ba1e4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1ba1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1ba1e8:
    // 0x1ba1e8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1ba1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1ba1ec:
    // 0x1ba1ec: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1ba1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1ba1f0:
    // 0x1ba1f0: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1ba1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1ba1f4:
    // 0x1ba1f4: 0xc04494c  jal         func_112530
label_1ba1f8:
    if (ctx->pc == 0x1BA1F8u) {
        ctx->pc = 0x1BA1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA1F4u;
        // 0x1ba1f8: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA1FCu;
        goto label_1ba1fc;
    }
    ctx->pc = 0x1BA1F4u;
    SET_GPR_U32(ctx, 31, 0x1BA1FCu);
    ctx->pc = 0x1BA1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA1F4u;
    // 0x1ba1f8: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112530u, 0x1BA1F4u, 0x1BA1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA1FCu;
label_1ba1fc:
    // 0x1ba1fc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1ba200:
    if (ctx->pc == 0x1BA200u) {
        ctx->pc = 0x1BA200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA1FCu;
        // 0x1ba200: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA204u;
        goto label_1ba204;
    }
    ctx->pc = 0x1BA1FCu;
    {
        const bool branch_taken_0x1ba1fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA1FCu;
        // 0x1ba200: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba1fc) {
            ctx->pc = 0x1BA228u;
            goto label_1ba228;
        }
    }
    ctx->pc = 0x1BA204u;
label_1ba204:
    // 0x1ba204: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x1ba204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1ba208:
    // 0x1ba208: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1ba208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1ba20c:
    // 0x1ba20c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1ba20cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ba210:
    // 0x1ba210: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1ba210u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ba214:
    // 0x1ba214: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x1ba214u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1ba218:
    // 0x1ba218: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x1ba218u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ba21c:
    // 0x1ba21c: 0xc06e998  jal         func_1BA660
label_1ba220:
    if (ctx->pc == 0x1BA220u) {
        ctx->pc = 0x1BA220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA21Cu;
        // 0x1ba220: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA224u;
        goto label_1ba224;
    }
    ctx->pc = 0x1BA21Cu;
    SET_GPR_U32(ctx, 31, 0x1BA224u);
    ctx->pc = 0x1BA220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA21Cu;
    // 0x1ba220: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA660u;
    { ctx->pc = 0x1ba660; return; }
    ctx->pc = 0x1BA224u;
label_1ba224:
    // 0x1ba224: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ba224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ba228:
    // 0x1ba228: 0x16000061  bnez        $s0, . + 4 + (0x61 << 2)
label_1ba22c:
    if (ctx->pc == 0x1BA22Cu) {
        ctx->pc = 0x1BA230u;
        goto label_1ba230;
    }
    ctx->pc = 0x1BA228u;
    {
        const bool branch_taken_0x1ba228 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba228) {
            ctx->pc = 0x1BA3B0u;
            goto label_1ba3b0;
        }
    }
    ctx->pc = 0x1BA230u;
label_1ba230:
    // 0x1ba230: 0x27a2010c  addiu       $v0, $sp, 0x10C
    ctx->pc = 0x1ba230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
label_1ba234:
    // 0x1ba234: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x1ba234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_1ba238:
    // 0x1ba238: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ba238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ba23c:
    // 0x1ba23c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1ba23cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1ba240:
    // 0x1ba240: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1ba240u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1ba244:
    // 0x1ba244: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1ba244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1ba248:
    // 0x1ba248: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1ba248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1ba24c:
    // 0x1ba24c: 0xc04494c  jal         func_112530
label_1ba250:
    if (ctx->pc == 0x1BA250u) {
        ctx->pc = 0x1BA250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA24Cu;
        // 0x1ba250: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA254u;
        goto label_1ba254;
    }
    ctx->pc = 0x1BA24Cu;
    SET_GPR_U32(ctx, 31, 0x1BA254u);
    ctx->pc = 0x1BA250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA24Cu;
    // 0x1ba250: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112530u, 0x1BA24Cu, 0x1BA254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA254u;
label_1ba254:
    // 0x1ba254: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1ba258:
    if (ctx->pc == 0x1BA258u) {
        ctx->pc = 0x1BA258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA254u;
        // 0x1ba258: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA25Cu;
        goto label_1ba25c;
    }
    ctx->pc = 0x1BA254u;
    {
        const bool branch_taken_0x1ba254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA254u;
        // 0x1ba258: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba254) {
            ctx->pc = 0x1BA280u;
            goto label_1ba280;
        }
    }
    ctx->pc = 0x1BA25Cu;
label_1ba25c:
    // 0x1ba25c: 0x27a50108  addiu       $a1, $sp, 0x108
    ctx->pc = 0x1ba25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_1ba260:
    // 0x1ba260: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1ba260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1ba264:
    // 0x1ba264: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1ba264u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ba268:
    // 0x1ba268: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1ba268u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ba26c:
    // 0x1ba26c: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x1ba26cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1ba270:
    // 0x1ba270: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x1ba270u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ba274:
    // 0x1ba274: 0xc06e998  jal         func_1BA660
label_1ba278:
    if (ctx->pc == 0x1BA278u) {
        ctx->pc = 0x1BA278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA274u;
        // 0x1ba278: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA27Cu;
        goto label_1ba27c;
    }
    ctx->pc = 0x1BA274u;
    SET_GPR_U32(ctx, 31, 0x1BA27Cu);
    ctx->pc = 0x1BA278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA274u;
    // 0x1ba278: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA660u;
    { ctx->pc = 0x1ba660; return; }
    ctx->pc = 0x1BA27Cu;
label_1ba27c:
    // 0x1ba27c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ba27cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ba280:
    // 0x1ba280: 0x1600004b  bnez        $s0, . + 4 + (0x4B << 2)
label_1ba284:
    if (ctx->pc == 0x1BA284u) {
        ctx->pc = 0x1BA284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA280u;
        // 0x1ba284: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA288u;
        goto label_1ba288;
    }
    ctx->pc = 0x1BA280u;
    {
        const bool branch_taken_0x1ba280 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA280u;
        // 0x1ba284: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba280) {
            ctx->pc = 0x1BA3B0u;
            goto label_1ba3b0;
        }
    }
    ctx->pc = 0x1BA288u;
label_1ba288:
    // 0x1ba288: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1ba288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1ba28c:
    // 0x1ba28c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ba28cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ba290:
    // 0x1ba290: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1ba290u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ba294:
    // 0x1ba294: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x1ba294u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1ba298:
    // 0x1ba298: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x1ba298u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1ba29c:
    // 0x1ba29c: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x1ba29cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ba2a0:
    // 0x1ba2a0: 0xc06e910  jal         func_1BA440
label_1ba2a4:
    if (ctx->pc == 0x1BA2A4u) {
        ctx->pc = 0x1BA2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA2A0u;
        // 0x1ba2a4: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA2A8u;
        goto label_1ba2a8;
    }
    ctx->pc = 0x1BA2A0u;
    SET_GPR_U32(ctx, 31, 0x1BA2A8u);
    ctx->pc = 0x1BA2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA2A0u;
    // 0x1ba2a4: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA440u;
    { ctx->pc = 0x1ba440; return; }
    ctx->pc = 0x1BA2A8u;
label_1ba2a8:
    // 0x1ba2a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ba2a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ba2ac:
    // 0x1ba2ac: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
label_1ba2b0:
    if (ctx->pc == 0x1BA2B0u) {
        ctx->pc = 0x1BA2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA2ACu;
        // 0x1ba2b0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA2B4u;
        goto label_1ba2b4;
    }
    ctx->pc = 0x1BA2ACu;
    {
        const bool branch_taken_0x1ba2ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA2ACu;
        // 0x1ba2b0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba2ac) {
            ctx->pc = 0x1BA2D8u;
            goto label_1ba2d8;
        }
    }
    ctx->pc = 0x1BA2B4u;
label_1ba2b4:
    // 0x1ba2b4: 0x27a50108  addiu       $a1, $sp, 0x108
    ctx->pc = 0x1ba2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_1ba2b8:
    // 0x1ba2b8: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1ba2b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1ba2bc:
    // 0x1ba2bc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1ba2bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ba2c0:
    // 0x1ba2c0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1ba2c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ba2c4:
    // 0x1ba2c4: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x1ba2c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1ba2c8:
    // 0x1ba2c8: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x1ba2c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ba2cc:
    // 0x1ba2cc: 0xc06e998  jal         func_1BA660
label_1ba2d0:
    if (ctx->pc == 0x1BA2D0u) {
        ctx->pc = 0x1BA2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA2CCu;
        // 0x1ba2d0: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA2D4u;
        goto label_1ba2d4;
    }
    ctx->pc = 0x1BA2CCu;
    SET_GPR_U32(ctx, 31, 0x1BA2D4u);
    ctx->pc = 0x1BA2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA2CCu;
    // 0x1ba2d0: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA660u;
    { ctx->pc = 0x1ba660; return; }
    ctx->pc = 0x1BA2D4u;
label_1ba2d4:
    // 0x1ba2d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ba2d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ba2d8:
    // 0x1ba2d8: 0x16000035  bnez        $s0, . + 4 + (0x35 << 2)
label_1ba2dc:
    if (ctx->pc == 0x1BA2DCu) {
        ctx->pc = 0x1BA2E0u;
        goto label_1ba2e0;
    }
    ctx->pc = 0x1BA2D8u;
    {
        const bool branch_taken_0x1ba2d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba2d8) {
            ctx->pc = 0x1BA3B0u;
            goto label_1ba3b0;
        }
    }
    ctx->pc = 0x1BA2E0u;
label_1ba2e0:
    // 0x1ba2e0: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x1ba2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_1ba2e4:
    // 0x1ba2e4: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x1ba2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1ba2e8:
    // 0x1ba2e8: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
label_1ba2ec:
    if (ctx->pc == 0x1BA2ECu) {
        ctx->pc = 0x1BA2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA2E8u;
        // 0x1ba2ec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA2F0u;
        goto label_1ba2f0;
    }
    ctx->pc = 0x1BA2E8u;
    {
        const bool branch_taken_0x1ba2e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BA2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA2E8u;
        // 0x1ba2ec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba2e8) {
            ctx->pc = 0x1BA30Cu;
            goto label_1ba30c;
        }
    }
    ctx->pc = 0x1BA2F0u;
label_1ba2f0:
    // 0x1ba2f0: 0x27a3010c  addiu       $v1, $sp, 0x10C
    ctx->pc = 0x1ba2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
label_1ba2f4:
    // 0x1ba2f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ba2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ba2f8:
    // 0x1ba2f8: 0x27a30114  addiu       $v1, $sp, 0x114
    ctx->pc = 0x1ba2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
label_1ba2fc:
    // 0x1ba2fc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ba2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ba300:
    // 0x1ba300: 0x1083002b  beq         $a0, $v1, . + 4 + (0x2B << 2)
label_1ba304:
    if (ctx->pc == 0x1BA304u) {
        ctx->pc = 0x1BA308u;
        goto label_1ba308;
    }
    ctx->pc = 0x1BA300u;
    {
        const bool branch_taken_0x1ba300 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ba300) {
            ctx->pc = 0x1BA3B0u;
            goto label_1ba3b0;
        }
    }
    ctx->pc = 0x1BA308u;
label_1ba308:
    // 0x1ba308: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ba308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1ba30c:
    // 0x1ba30c: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x1ba30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1ba310:
    // 0x1ba310: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1ba310u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1ba314:
    // 0x1ba314: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1ba314u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ba318:
    // 0x1ba318: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1ba318u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ba31c:
    // 0x1ba31c: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x1ba31cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1ba320:
    // 0x1ba320: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x1ba320u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ba324:
    // 0x1ba324: 0xc06e998  jal         func_1BA660
label_1ba328:
    if (ctx->pc == 0x1BA328u) {
        ctx->pc = 0x1BA328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA324u;
        // 0x1ba328: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA32Cu;
        goto label_1ba32c;
    }
    ctx->pc = 0x1BA324u;
    SET_GPR_U32(ctx, 31, 0x1BA32Cu);
    ctx->pc = 0x1BA328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA324u;
    // 0x1ba328: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA660u;
    { ctx->pc = 0x1ba660; return; }
    ctx->pc = 0x1BA32Cu;
label_1ba32c:
    // 0x1ba32c: 0x10000020  b           . + 4 + (0x20 << 2)
label_1ba330:
    if (ctx->pc == 0x1BA330u) {
        ctx->pc = 0x1BA330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA32Cu;
        // 0x1ba330: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA334u;
        goto label_1ba334;
    }
    ctx->pc = 0x1BA32Cu;
    {
        const bool branch_taken_0x1ba32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA32Cu;
        // 0x1ba330: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba32c) {
            ctx->pc = 0x1BA3B0u;
            goto label_1ba3b0;
        }
    }
    ctx->pc = 0x1BA334u;
label_1ba334:
    // 0x1ba334: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x1ba334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_1ba338:
    // 0x1ba338: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x1ba338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1ba33c:
    // 0x1ba33c: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
label_1ba340:
    if (ctx->pc == 0x1BA340u) {
        ctx->pc = 0x1BA340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA33Cu;
        // 0x1ba340: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA344u;
        goto label_1ba344;
    }
    ctx->pc = 0x1BA33Cu;
    {
        const bool branch_taken_0x1ba33c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BA340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA33Cu;
        // 0x1ba340: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba33c) {
            ctx->pc = 0x1BA360u;
            goto label_1ba360;
        }
    }
    ctx->pc = 0x1BA344u;
label_1ba344:
    // 0x1ba344: 0x27a3010c  addiu       $v1, $sp, 0x10C
    ctx->pc = 0x1ba344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
label_1ba348:
    // 0x1ba348: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ba348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ba34c:
    // 0x1ba34c: 0x27a30114  addiu       $v1, $sp, 0x114
    ctx->pc = 0x1ba34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
label_1ba350:
    // 0x1ba350: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ba350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ba354:
    // 0x1ba354: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
label_1ba358:
    if (ctx->pc == 0x1BA358u) {
        ctx->pc = 0x1BA35Cu;
        goto label_1ba35c;
    }
    ctx->pc = 0x1BA354u;
    {
        const bool branch_taken_0x1ba354 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ba354) {
            ctx->pc = 0x1BA384u;
            goto label_1ba384;
        }
    }
    ctx->pc = 0x1BA35Cu;
label_1ba35c:
    // 0x1ba35c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ba35cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1ba360:
    // 0x1ba360: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x1ba360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1ba364:
    // 0x1ba364: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1ba364u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1ba368:
    // 0x1ba368: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1ba368u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ba36c:
    // 0x1ba36c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1ba36cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ba370:
    // 0x1ba370: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x1ba370u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1ba374:
    // 0x1ba374: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x1ba374u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ba378:
    // 0x1ba378: 0xc06e998  jal         func_1BA660
label_1ba37c:
    if (ctx->pc == 0x1BA37Cu) {
        ctx->pc = 0x1BA37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA378u;
        // 0x1ba37c: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA380u;
        goto label_1ba380;
    }
    ctx->pc = 0x1BA378u;
    SET_GPR_U32(ctx, 31, 0x1BA380u);
    ctx->pc = 0x1BA37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA378u;
    // 0x1ba37c: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA660u;
    { ctx->pc = 0x1ba660; return; }
    ctx->pc = 0x1BA380u;
label_1ba380:
    // 0x1ba380: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ba380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ba384:
    // 0x1ba384: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
label_1ba388:
    if (ctx->pc == 0x1BA388u) {
        ctx->pc = 0x1BA388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA384u;
        // 0x1ba388: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA38Cu;
        goto label_1ba38c;
    }
    ctx->pc = 0x1BA384u;
    {
        const bool branch_taken_0x1ba384 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA384u;
        // 0x1ba388: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba384) {
            ctx->pc = 0x1BA3B0u;
            goto label_1ba3b0;
        }
    }
    ctx->pc = 0x1BA38Cu;
label_1ba38c:
    // 0x1ba38c: 0x27a50108  addiu       $a1, $sp, 0x108
    ctx->pc = 0x1ba38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_1ba390:
    // 0x1ba390: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1ba390u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1ba394:
    // 0x1ba394: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1ba394u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ba398:
    // 0x1ba398: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1ba398u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ba39c:
    // 0x1ba39c: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x1ba39cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1ba3a0:
    // 0x1ba3a0: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x1ba3a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ba3a4:
    // 0x1ba3a4: 0xc06e998  jal         func_1BA660
label_1ba3a8:
    if (ctx->pc == 0x1BA3A8u) {
        ctx->pc = 0x1BA3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA3A4u;
        // 0x1ba3a8: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA3ACu;
        goto label_1ba3ac;
    }
    ctx->pc = 0x1BA3A4u;
    SET_GPR_U32(ctx, 31, 0x1BA3ACu);
    ctx->pc = 0x1BA3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA3A4u;
    // 0x1ba3a8: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA660u;
    { ctx->pc = 0x1ba660; return; }
    ctx->pc = 0x1BA3ACu;
label_1ba3ac:
    // 0x1ba3ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ba3acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ba3b0:
    // 0x1ba3b0: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
label_1ba3b4:
    if (ctx->pc == 0x1BA3B4u) {
        ctx->pc = 0x1BA3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA3B0u;
        // 0x1ba3b4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA3B8u;
        goto label_1ba3b8;
    }
    ctx->pc = 0x1BA3B0u;
    {
        const bool branch_taken_0x1ba3b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA3B0u;
        // 0x1ba3b4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba3b0) {
            ctx->pc = 0x1BA3DCu;
            goto label_1ba3dc;
        }
    }
    ctx->pc = 0x1BA3B8u;
label_1ba3b8:
    // 0x1ba3b8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ba3b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ba3bc:
    // 0x1ba3bc: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x1ba3bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1ba3c0:
    // 0x1ba3c0: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x1ba3c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1ba3c4:
    // 0x1ba3c4: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x1ba3c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ba3c8:
    // 0x1ba3c8: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x1ba3c8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ba3cc:
    // 0x1ba3cc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1ba3ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1ba3d0:
    // 0x1ba3d0: 0xc06e910  jal         func_1BA440
label_1ba3d4:
    if (ctx->pc == 0x1BA3D4u) {
        ctx->pc = 0x1BA3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA3D0u;
        // 0x1ba3d4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA3D8u;
        goto label_1ba3d8;
    }
    ctx->pc = 0x1BA3D0u;
    SET_GPR_U32(ctx, 31, 0x1BA3D8u);
    ctx->pc = 0x1BA3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA3D0u;
    // 0x1ba3d4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA440u;
    { ctx->pc = 0x1ba440; return; }
    ctx->pc = 0x1BA3D8u;
label_1ba3d8:
    // 0x1ba3d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ba3d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ba3dc:
    // 0x1ba3dc: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
label_1ba3e0:
    if (ctx->pc == 0x1BA3E0u) {
        ctx->pc = 0x1BA3E4u;
        goto label_1ba3e4;
    }
    ctx->pc = 0x1BA3DCu;
    {
        const bool branch_taken_0x1ba3dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba3dc) {
            ctx->pc = 0x1BA40Cu;
            goto label_1ba40c;
        }
    }
    ctx->pc = 0x1BA3E4u;
label_1ba3e4:
    // 0x1ba3e4: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x1ba3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1ba3e8:
    // 0x1ba3e8: 0xc066e26  jal         func_19B898
label_1ba3ec:
    if (ctx->pc == 0x1BA3ECu) {
        ctx->pc = 0x1BA3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA3E8u;
        // 0x1ba3ec: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA3F0u;
        goto label_1ba3f0;
    }
    ctx->pc = 0x1BA3E8u;
    SET_GPR_U32(ctx, 31, 0x1BA3F0u);
    ctx->pc = 0x1BA3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA3E8u;
    // 0x1ba3ec: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    { ctx->pc = 0x19b898; return; }
    ctx->pc = 0x1BA3F0u;
label_1ba3f0:
    // 0x1ba3f0: 0x96440002  lhu         $a0, 0x2($s2)
    ctx->pc = 0x1ba3f0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_1ba3f4:
    // 0x1ba3f4: 0x24030280  addiu       $v1, $zero, 0x280
    ctx->pc = 0x1ba3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1ba3f8:
    // 0x1ba3f8: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_1ba3fc:
    if (ctx->pc == 0x1BA3FCu) {
        ctx->pc = 0x1BA400u;
        goto label_1ba400;
    }
    ctx->pc = 0x1BA3F8u;
    {
        const bool branch_taken_0x1ba3f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ba3f8) {
            ctx->pc = 0x1BA408u;
            goto label_1ba408;
        }
    }
    ctx->pc = 0x1BA400u;
label_1ba400:
    // 0x1ba400: 0x10000002  b           . + 4 + (0x2 << 2)
label_1ba404:
    if (ctx->pc == 0x1BA404u) {
        ctx->pc = 0x1BA404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA400u;
        // 0x1ba404: 0xa6430000  sh          $v1, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BA408u;
        goto label_1ba408;
    }
    ctx->pc = 0x1BA400u;
    {
        const bool branch_taken_0x1ba400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA400u;
        // 0x1ba404: 0xa6430000  sh          $v1, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba400) {
            ctx->pc = 0x1BA40Cu;
            goto label_1ba40c;
        }
    }
    ctx->pc = 0x1BA408u;
label_1ba408:
    // 0x1ba408: 0xa6430002  sh          $v1, 0x2($s2)
    ctx->pc = 0x1ba408u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 3));
label_1ba40c:
    // 0x1ba40c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1ba40cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1ba410:
    // 0x1ba410: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1ba410u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1ba414:
    // 0x1ba414: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1ba414u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1ba418:
    // 0x1ba418: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1ba418u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1ba41c:
    // 0x1ba41c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1ba41cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ba420:
    // 0x1ba420: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ba420u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ba424:
    // 0x1ba424: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ba424u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ba428:
    // 0x1ba428: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ba428u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ba42c:
    // 0x1ba42c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ba42cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ba430:
    // 0x1ba430: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ba430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ba434:
    // 0x1ba434: 0x3e00008  jr          $ra
    ctx->pc = 0x1ba438u;
    return;
}

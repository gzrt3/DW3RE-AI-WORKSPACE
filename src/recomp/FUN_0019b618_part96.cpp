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


void FUN_0019b618_part96(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1c9c48u: goto label_1c9c48;
        case 0x1c9c4cu: goto label_1c9c4c;
        case 0x1c9c50u: goto label_1c9c50;
        case 0x1c9c54u: goto label_1c9c54;
        case 0x1c9c58u: goto label_1c9c58;
        case 0x1c9c5cu: goto label_1c9c5c;
        case 0x1c9c60u: goto label_1c9c60;
        case 0x1c9c64u: goto label_1c9c64;
        case 0x1c9c68u: goto label_1c9c68;
        case 0x1c9c6cu: goto label_1c9c6c;
        case 0x1c9c70u: goto label_1c9c70;
        case 0x1c9c74u: goto label_1c9c74;
        case 0x1c9c78u: goto label_1c9c78;
        case 0x1c9c7cu: goto label_1c9c7c;
        case 0x1c9c80u: goto label_1c9c80;
        case 0x1c9c84u: goto label_1c9c84;
        case 0x1c9c88u: goto label_1c9c88;
        case 0x1c9c8cu: goto label_1c9c8c;
        case 0x1c9c90u: goto label_1c9c90;
        case 0x1c9c94u: goto label_1c9c94;
        case 0x1c9c98u: goto label_1c9c98;
        case 0x1c9c9cu: goto label_1c9c9c;
        case 0x1c9ca0u: goto label_1c9ca0;
        case 0x1c9ca4u: goto label_1c9ca4;
        case 0x1c9ca8u: goto label_1c9ca8;
        case 0x1c9cacu: goto label_1c9cac;
        case 0x1c9cb0u: goto label_1c9cb0;
        case 0x1c9cb4u: goto label_1c9cb4;
        case 0x1c9cb8u: goto label_1c9cb8;
        case 0x1c9cbcu: goto label_1c9cbc;
        case 0x1c9cc0u: goto label_1c9cc0;
        case 0x1c9cc4u: goto label_1c9cc4;
        case 0x1c9cc8u: goto label_1c9cc8;
        case 0x1c9cccu: goto label_1c9ccc;
        case 0x1c9cd0u: goto label_1c9cd0;
        case 0x1c9cd4u: goto label_1c9cd4;
        case 0x1c9cd8u: goto label_1c9cd8;
        case 0x1c9cdcu: goto label_1c9cdc;
        case 0x1c9ce0u: goto label_1c9ce0;
        case 0x1c9ce4u: goto label_1c9ce4;
        case 0x1c9ce8u: goto label_1c9ce8;
        case 0x1c9cecu: goto label_1c9cec;
        case 0x1c9cf0u: goto label_1c9cf0;
        case 0x1c9cf4u: goto label_1c9cf4;
        case 0x1c9cf8u: goto label_1c9cf8;
        case 0x1c9cfcu: goto label_1c9cfc;
        case 0x1c9d00u: goto label_1c9d00;
        case 0x1c9d04u: goto label_1c9d04;
        case 0x1c9d08u: goto label_1c9d08;
        case 0x1c9d0cu: goto label_1c9d0c;
        case 0x1c9d10u: goto label_1c9d10;
        case 0x1c9d14u: goto label_1c9d14;
        case 0x1c9d18u: goto label_1c9d18;
        case 0x1c9d1cu: goto label_1c9d1c;
        case 0x1c9d20u: goto label_1c9d20;
        case 0x1c9d24u: goto label_1c9d24;
        case 0x1c9d28u: goto label_1c9d28;
        case 0x1c9d2cu: goto label_1c9d2c;
        case 0x1c9d30u: goto label_1c9d30;
        case 0x1c9d34u: goto label_1c9d34;
        case 0x1c9d38u: goto label_1c9d38;
        case 0x1c9d3cu: goto label_1c9d3c;
        case 0x1c9d40u: goto label_1c9d40;
        case 0x1c9d44u: goto label_1c9d44;
        case 0x1c9d48u: goto label_1c9d48;
        case 0x1c9d4cu: goto label_1c9d4c;
        case 0x1c9d50u: goto label_1c9d50;
        case 0x1c9d54u: goto label_1c9d54;
        case 0x1c9d58u: goto label_1c9d58;
        case 0x1c9d5cu: goto label_1c9d5c;
        case 0x1c9d60u: goto label_1c9d60;
        case 0x1c9d64u: goto label_1c9d64;
        case 0x1c9d68u: goto label_1c9d68;
        case 0x1c9d6cu: goto label_1c9d6c;
        case 0x1c9d70u: goto label_1c9d70;
        case 0x1c9d74u: goto label_1c9d74;
        case 0x1c9d78u: goto label_1c9d78;
        case 0x1c9d7cu: goto label_1c9d7c;
        case 0x1c9d80u: goto label_1c9d80;
        case 0x1c9d84u: goto label_1c9d84;
        case 0x1c9d88u: goto label_1c9d88;
        case 0x1c9d8cu: goto label_1c9d8c;
        case 0x1c9d90u: goto label_1c9d90;
        case 0x1c9d94u: goto label_1c9d94;
        case 0x1c9d98u: goto label_1c9d98;
        case 0x1c9d9cu: goto label_1c9d9c;
        case 0x1c9da0u: goto label_1c9da0;
        case 0x1c9da4u: goto label_1c9da4;
        case 0x1c9da8u: goto label_1c9da8;
        case 0x1c9dacu: goto label_1c9dac;
        case 0x1c9db0u: goto label_1c9db0;
        case 0x1c9db4u: goto label_1c9db4;
        case 0x1c9db8u: goto label_1c9db8;
        case 0x1c9dbcu: goto label_1c9dbc;
        case 0x1c9dc0u: goto label_1c9dc0;
        case 0x1c9dc4u: goto label_1c9dc4;
        case 0x1c9dc8u: goto label_1c9dc8;
        case 0x1c9dccu: goto label_1c9dcc;
        case 0x1c9dd0u: goto label_1c9dd0;
        case 0x1c9dd4u: goto label_1c9dd4;
        case 0x1c9dd8u: goto label_1c9dd8;
        case 0x1c9ddcu: goto label_1c9ddc;
        case 0x1c9de0u: goto label_1c9de0;
        case 0x1c9de4u: goto label_1c9de4;
        case 0x1c9de8u: goto label_1c9de8;
        case 0x1c9decu: goto label_1c9dec;
        case 0x1c9df0u: goto label_1c9df0;
        case 0x1c9df4u: goto label_1c9df4;
        case 0x1c9df8u: goto label_1c9df8;
        case 0x1c9dfcu: goto label_1c9dfc;
        case 0x1c9e00u: goto label_1c9e00;
        case 0x1c9e04u: goto label_1c9e04;
        case 0x1c9e08u: goto label_1c9e08;
        case 0x1c9e0cu: goto label_1c9e0c;
        case 0x1c9e10u: goto label_1c9e10;
        case 0x1c9e14u: goto label_1c9e14;
        case 0x1c9e18u: goto label_1c9e18;
        case 0x1c9e1cu: goto label_1c9e1c;
        case 0x1c9e20u: goto label_1c9e20;
        case 0x1c9e24u: goto label_1c9e24;
        case 0x1c9e28u: goto label_1c9e28;
        case 0x1c9e2cu: goto label_1c9e2c;
        case 0x1c9e30u: goto label_1c9e30;
        case 0x1c9e34u: goto label_1c9e34;
        case 0x1c9e38u: goto label_1c9e38;
        case 0x1c9e3cu: goto label_1c9e3c;
        case 0x1c9e40u: goto label_1c9e40;
        case 0x1c9e44u: goto label_1c9e44;
        case 0x1c9e48u: goto label_1c9e48;
        case 0x1c9e4cu: goto label_1c9e4c;
        case 0x1c9e50u: goto label_1c9e50;
        case 0x1c9e54u: goto label_1c9e54;
        case 0x1c9e58u: goto label_1c9e58;
        case 0x1c9e5cu: goto label_1c9e5c;
        case 0x1c9e60u: goto label_1c9e60;
        case 0x1c9e64u: goto label_1c9e64;
        case 0x1c9e68u: goto label_1c9e68;
        case 0x1c9e6cu: goto label_1c9e6c;
        case 0x1c9e70u: goto label_1c9e70;
        case 0x1c9e74u: goto label_1c9e74;
        case 0x1c9e78u: goto label_1c9e78;
        case 0x1c9e7cu: goto label_1c9e7c;
        case 0x1c9e80u: goto label_1c9e80;
        case 0x1c9e84u: goto label_1c9e84;
        case 0x1c9e88u: goto label_1c9e88;
        case 0x1c9e8cu: goto label_1c9e8c;
        case 0x1c9e90u: goto label_1c9e90;
        case 0x1c9e94u: goto label_1c9e94;
        case 0x1c9e98u: goto label_1c9e98;
        case 0x1c9e9cu: goto label_1c9e9c;
        case 0x1c9ea0u: goto label_1c9ea0;
        case 0x1c9ea4u: goto label_1c9ea4;
        case 0x1c9ea8u: goto label_1c9ea8;
        case 0x1c9eacu: goto label_1c9eac;
        case 0x1c9eb0u: goto label_1c9eb0;
        case 0x1c9eb4u: goto label_1c9eb4;
        case 0x1c9eb8u: goto label_1c9eb8;
        case 0x1c9ebcu: goto label_1c9ebc;
        case 0x1c9ec0u: goto label_1c9ec0;
        case 0x1c9ec4u: goto label_1c9ec4;
        case 0x1c9ec8u: goto label_1c9ec8;
        case 0x1c9eccu: goto label_1c9ecc;
        case 0x1c9ed0u: goto label_1c9ed0;
        case 0x1c9ed4u: goto label_1c9ed4;
        case 0x1c9ed8u: goto label_1c9ed8;
        case 0x1c9edcu: goto label_1c9edc;
        case 0x1c9ee0u: goto label_1c9ee0;
        case 0x1c9ee4u: goto label_1c9ee4;
        case 0x1c9ee8u: goto label_1c9ee8;
        case 0x1c9eecu: goto label_1c9eec;
        case 0x1c9ef0u: goto label_1c9ef0;
        case 0x1c9ef4u: goto label_1c9ef4;
        case 0x1c9ef8u: goto label_1c9ef8;
        case 0x1c9efcu: goto label_1c9efc;
        case 0x1c9f00u: goto label_1c9f00;
        case 0x1c9f04u: goto label_1c9f04;
        case 0x1c9f08u: goto label_1c9f08;
        case 0x1c9f0cu: goto label_1c9f0c;
        case 0x1c9f10u: goto label_1c9f10;
        case 0x1c9f14u: goto label_1c9f14;
        case 0x1c9f18u: goto label_1c9f18;
        case 0x1c9f1cu: goto label_1c9f1c;
        case 0x1c9f20u: goto label_1c9f20;
        case 0x1c9f24u: goto label_1c9f24;
        case 0x1c9f28u: goto label_1c9f28;
        case 0x1c9f2cu: goto label_1c9f2c;
        case 0x1c9f30u: goto label_1c9f30;
        case 0x1c9f34u: goto label_1c9f34;
        case 0x1c9f38u: goto label_1c9f38;
        case 0x1c9f3cu: goto label_1c9f3c;
        case 0x1c9f40u: goto label_1c9f40;
        case 0x1c9f44u: goto label_1c9f44;
        case 0x1c9f48u: goto label_1c9f48;
        case 0x1c9f4cu: goto label_1c9f4c;
        case 0x1c9f50u: goto label_1c9f50;
        case 0x1c9f54u: goto label_1c9f54;
        case 0x1c9f58u: goto label_1c9f58;
        case 0x1c9f5cu: goto label_1c9f5c;
        case 0x1c9f60u: goto label_1c9f60;
        case 0x1c9f64u: goto label_1c9f64;
        case 0x1c9f68u: goto label_1c9f68;
        case 0x1c9f6cu: goto label_1c9f6c;
        case 0x1c9f70u: goto label_1c9f70;
        case 0x1c9f74u: goto label_1c9f74;
        case 0x1c9f78u: goto label_1c9f78;
        case 0x1c9f7cu: goto label_1c9f7c;
        case 0x1c9f80u: goto label_1c9f80;
        case 0x1c9f84u: goto label_1c9f84;
        case 0x1c9f88u: goto label_1c9f88;
        case 0x1c9f8cu: goto label_1c9f8c;
        case 0x1c9f90u: goto label_1c9f90;
        case 0x1c9f94u: goto label_1c9f94;
        case 0x1c9f98u: goto label_1c9f98;
        case 0x1c9f9cu: goto label_1c9f9c;
        case 0x1c9fa0u: goto label_1c9fa0;
        case 0x1c9fa4u: goto label_1c9fa4;
        case 0x1c9fa8u: goto label_1c9fa8;
        case 0x1c9facu: goto label_1c9fac;
        case 0x1c9fb0u: goto label_1c9fb0;
        case 0x1c9fb4u: goto label_1c9fb4;
        case 0x1c9fb8u: goto label_1c9fb8;
        case 0x1c9fbcu: goto label_1c9fbc;
        case 0x1c9fc0u: goto label_1c9fc0;
        case 0x1c9fc4u: goto label_1c9fc4;
        case 0x1c9fc8u: goto label_1c9fc8;
        case 0x1c9fccu: goto label_1c9fcc;
        case 0x1c9fd0u: goto label_1c9fd0;
        case 0x1c9fd4u: goto label_1c9fd4;
        case 0x1c9fd8u: goto label_1c9fd8;
        case 0x1c9fdcu: goto label_1c9fdc;
        case 0x1c9fe0u: goto label_1c9fe0;
        case 0x1c9fe4u: goto label_1c9fe4;
        case 0x1c9fe8u: goto label_1c9fe8;
        case 0x1c9fecu: goto label_1c9fec;
        case 0x1c9ff0u: goto label_1c9ff0;
        case 0x1c9ff4u: goto label_1c9ff4;
        case 0x1c9ff8u: goto label_1c9ff8;
        case 0x1c9ffcu: goto label_1c9ffc;
        case 0x1ca000u: goto label_1ca000;
        case 0x1ca004u: goto label_1ca004;
        case 0x1ca008u: goto label_1ca008;
        case 0x1ca00cu: goto label_1ca00c;
        case 0x1ca010u: goto label_1ca010;
        case 0x1ca014u: goto label_1ca014;
        case 0x1ca018u: goto label_1ca018;
        case 0x1ca01cu: goto label_1ca01c;
        case 0x1ca020u: goto label_1ca020;
        case 0x1ca024u: goto label_1ca024;
        case 0x1ca028u: goto label_1ca028;
        case 0x1ca02cu: goto label_1ca02c;
        case 0x1ca030u: goto label_1ca030;
        case 0x1ca034u: goto label_1ca034;
        case 0x1ca038u: goto label_1ca038;
        case 0x1ca03cu: goto label_1ca03c;
        case 0x1ca040u: goto label_1ca040;
        case 0x1ca044u: goto label_1ca044;
        case 0x1ca048u: goto label_1ca048;
        case 0x1ca04cu: goto label_1ca04c;
        case 0x1ca050u: goto label_1ca050;
        case 0x1ca054u: goto label_1ca054;
        case 0x1ca058u: goto label_1ca058;
        case 0x1ca05cu: goto label_1ca05c;
        case 0x1ca060u: goto label_1ca060;
        case 0x1ca064u: goto label_1ca064;
        case 0x1ca068u: goto label_1ca068;
        case 0x1ca06cu: goto label_1ca06c;
        case 0x1ca070u: goto label_1ca070;
        case 0x1ca074u: goto label_1ca074;
        case 0x1ca078u: goto label_1ca078;
        case 0x1ca07cu: goto label_1ca07c;
        case 0x1ca080u: goto label_1ca080;
        case 0x1ca084u: goto label_1ca084;
        case 0x1ca088u: goto label_1ca088;
        case 0x1ca08cu: goto label_1ca08c;
        case 0x1ca090u: goto label_1ca090;
        case 0x1ca094u: goto label_1ca094;
        case 0x1ca098u: goto label_1ca098;
        case 0x1ca09cu: goto label_1ca09c;
        case 0x1ca0a0u: goto label_1ca0a0;
        case 0x1ca0a4u: goto label_1ca0a4;
        case 0x1ca0a8u: goto label_1ca0a8;
        case 0x1ca0acu: goto label_1ca0ac;
        case 0x1ca0b0u: goto label_1ca0b0;
        case 0x1ca0b4u: goto label_1ca0b4;
        case 0x1ca0b8u: goto label_1ca0b8;
        case 0x1ca0bcu: goto label_1ca0bc;
        case 0x1ca0c0u: goto label_1ca0c0;
        case 0x1ca0c4u: goto label_1ca0c4;
        case 0x1ca0c8u: goto label_1ca0c8;
        case 0x1ca0ccu: goto label_1ca0cc;
        case 0x1ca0d0u: goto label_1ca0d0;
        case 0x1ca0d4u: goto label_1ca0d4;
        case 0x1ca0d8u: goto label_1ca0d8;
        case 0x1ca0dcu: goto label_1ca0dc;
        case 0x1ca0e0u: goto label_1ca0e0;
        case 0x1ca0e4u: goto label_1ca0e4;
        case 0x1ca0e8u: goto label_1ca0e8;
        case 0x1ca0ecu: goto label_1ca0ec;
        case 0x1ca0f0u: goto label_1ca0f0;
        case 0x1ca0f4u: goto label_1ca0f4;
        case 0x1ca0f8u: goto label_1ca0f8;
        case 0x1ca0fcu: goto label_1ca0fc;
        case 0x1ca100u: goto label_1ca100;
        case 0x1ca104u: goto label_1ca104;
        case 0x1ca108u: goto label_1ca108;
        case 0x1ca10cu: goto label_1ca10c;
        case 0x1ca110u: goto label_1ca110;
        case 0x1ca114u: goto label_1ca114;
        case 0x1ca118u: goto label_1ca118;
        case 0x1ca11cu: goto label_1ca11c;
        case 0x1ca120u: goto label_1ca120;
        case 0x1ca124u: goto label_1ca124;
        case 0x1ca128u: goto label_1ca128;
        case 0x1ca12cu: goto label_1ca12c;
        case 0x1ca130u: goto label_1ca130;
        case 0x1ca134u: goto label_1ca134;
        case 0x1ca138u: goto label_1ca138;
        case 0x1ca13cu: goto label_1ca13c;
        case 0x1ca140u: goto label_1ca140;
        case 0x1ca144u: goto label_1ca144;
        case 0x1ca148u: goto label_1ca148;
        case 0x1ca14cu: goto label_1ca14c;
        case 0x1ca150u: goto label_1ca150;
        case 0x1ca154u: goto label_1ca154;
        case 0x1ca158u: goto label_1ca158;
        case 0x1ca15cu: goto label_1ca15c;
        case 0x1ca160u: goto label_1ca160;
        case 0x1ca164u: goto label_1ca164;
        case 0x1ca168u: goto label_1ca168;
        case 0x1ca16cu: goto label_1ca16c;
        case 0x1ca170u: goto label_1ca170;
        case 0x1ca174u: goto label_1ca174;
        case 0x1ca178u: goto label_1ca178;
        case 0x1ca17cu: goto label_1ca17c;
        case 0x1ca180u: goto label_1ca180;
        case 0x1ca184u: goto label_1ca184;
        case 0x1ca188u: goto label_1ca188;
        case 0x1ca18cu: goto label_1ca18c;
        case 0x1ca190u: goto label_1ca190;
        case 0x1ca194u: goto label_1ca194;
        case 0x1ca198u: goto label_1ca198;
        case 0x1ca19cu: goto label_1ca19c;
        case 0x1ca1a0u: goto label_1ca1a0;
        case 0x1ca1a4u: goto label_1ca1a4;
        case 0x1ca1a8u: goto label_1ca1a8;
        case 0x1ca1acu: goto label_1ca1ac;
        case 0x1ca1b0u: goto label_1ca1b0;
        case 0x1ca1b4u: goto label_1ca1b4;
        case 0x1ca1b8u: goto label_1ca1b8;
        case 0x1ca1bcu: goto label_1ca1bc;
        case 0x1ca1c0u: goto label_1ca1c0;
        case 0x1ca1c4u: goto label_1ca1c4;
        case 0x1ca1c8u: goto label_1ca1c8;
        case 0x1ca1ccu: goto label_1ca1cc;
        case 0x1ca1d0u: goto label_1ca1d0;
        case 0x1ca1d4u: goto label_1ca1d4;
        case 0x1ca1d8u: goto label_1ca1d8;
        case 0x1ca1dcu: goto label_1ca1dc;
        case 0x1ca1e0u: goto label_1ca1e0;
        case 0x1ca1e4u: goto label_1ca1e4;
        case 0x1ca1e8u: goto label_1ca1e8;
        case 0x1ca1ecu: goto label_1ca1ec;
        case 0x1ca1f0u: goto label_1ca1f0;
        case 0x1ca1f4u: goto label_1ca1f4;
        case 0x1ca1f8u: goto label_1ca1f8;
        case 0x1ca1fcu: goto label_1ca1fc;
        case 0x1ca200u: goto label_1ca200;
        case 0x1ca204u: goto label_1ca204;
        case 0x1ca208u: goto label_1ca208;
        case 0x1ca20cu: goto label_1ca20c;
        case 0x1ca210u: goto label_1ca210;
        case 0x1ca214u: goto label_1ca214;
        case 0x1ca218u: goto label_1ca218;
        case 0x1ca21cu: goto label_1ca21c;
        case 0x1ca220u: goto label_1ca220;
        case 0x1ca224u: goto label_1ca224;
        case 0x1ca228u: goto label_1ca228;
        case 0x1ca22cu: goto label_1ca22c;
        case 0x1ca230u: goto label_1ca230;
        case 0x1ca234u: goto label_1ca234;
        case 0x1ca238u: goto label_1ca238;
        case 0x1ca23cu: goto label_1ca23c;
        case 0x1ca240u: goto label_1ca240;
        case 0x1ca244u: goto label_1ca244;
        case 0x1ca248u: goto label_1ca248;
        case 0x1ca24cu: goto label_1ca24c;
        case 0x1ca250u: goto label_1ca250;
        case 0x1ca254u: goto label_1ca254;
        case 0x1ca258u: goto label_1ca258;
        case 0x1ca25cu: goto label_1ca25c;
        case 0x1ca260u: goto label_1ca260;
        case 0x1ca264u: goto label_1ca264;
        case 0x1ca268u: goto label_1ca268;
        case 0x1ca26cu: goto label_1ca26c;
        case 0x1ca270u: goto label_1ca270;
        case 0x1ca274u: goto label_1ca274;
        case 0x1ca278u: goto label_1ca278;
        case 0x1ca27cu: goto label_1ca27c;
        case 0x1ca280u: goto label_1ca280;
        case 0x1ca284u: goto label_1ca284;
        case 0x1ca288u: goto label_1ca288;
        case 0x1ca28cu: goto label_1ca28c;
        case 0x1ca290u: goto label_1ca290;
        case 0x1ca294u: goto label_1ca294;
        case 0x1ca298u: goto label_1ca298;
        case 0x1ca29cu: goto label_1ca29c;
        case 0x1ca2a0u: goto label_1ca2a0;
        case 0x1ca2a4u: goto label_1ca2a4;
        case 0x1ca2a8u: goto label_1ca2a8;
        case 0x1ca2acu: goto label_1ca2ac;
        case 0x1ca2b0u: goto label_1ca2b0;
        case 0x1ca2b4u: goto label_1ca2b4;
        case 0x1ca2b8u: goto label_1ca2b8;
        case 0x1ca2bcu: goto label_1ca2bc;
        case 0x1ca2c0u: goto label_1ca2c0;
        case 0x1ca2c4u: goto label_1ca2c4;
        case 0x1ca2c8u: goto label_1ca2c8;
        case 0x1ca2ccu: goto label_1ca2cc;
        case 0x1ca2d0u: goto label_1ca2d0;
        case 0x1ca2d4u: goto label_1ca2d4;
        case 0x1ca2d8u: goto label_1ca2d8;
        case 0x1ca2dcu: goto label_1ca2dc;
        case 0x1ca2e0u: goto label_1ca2e0;
        case 0x1ca2e4u: goto label_1ca2e4;
        case 0x1ca2e8u: goto label_1ca2e8;
        case 0x1ca2ecu: goto label_1ca2ec;
        case 0x1ca2f0u: goto label_1ca2f0;
        case 0x1ca2f4u: goto label_1ca2f4;
        case 0x1ca2f8u: goto label_1ca2f8;
        case 0x1ca2fcu: goto label_1ca2fc;
        case 0x1ca300u: goto label_1ca300;
        case 0x1ca304u: goto label_1ca304;
        case 0x1ca308u: goto label_1ca308;
        case 0x1ca30cu: goto label_1ca30c;
        case 0x1ca310u: goto label_1ca310;
        case 0x1ca314u: goto label_1ca314;
        case 0x1ca318u: goto label_1ca318;
        case 0x1ca31cu: goto label_1ca31c;
        case 0x1ca320u: goto label_1ca320;
        case 0x1ca324u: goto label_1ca324;
        case 0x1ca328u: goto label_1ca328;
        case 0x1ca32cu: goto label_1ca32c;
        case 0x1ca330u: goto label_1ca330;
        case 0x1ca334u: goto label_1ca334;
        case 0x1ca338u: goto label_1ca338;
        case 0x1ca33cu: goto label_1ca33c;
        case 0x1ca340u: goto label_1ca340;
        case 0x1ca344u: goto label_1ca344;
        case 0x1ca348u: goto label_1ca348;
        case 0x1ca34cu: goto label_1ca34c;
        case 0x1ca350u: goto label_1ca350;
        case 0x1ca354u: goto label_1ca354;
        case 0x1ca358u: goto label_1ca358;
        case 0x1ca35cu: goto label_1ca35c;
        case 0x1ca360u: goto label_1ca360;
        case 0x1ca364u: goto label_1ca364;
        case 0x1ca368u: goto label_1ca368;
        case 0x1ca36cu: goto label_1ca36c;
        case 0x1ca370u: goto label_1ca370;
        case 0x1ca374u: goto label_1ca374;
        case 0x1ca378u: goto label_1ca378;
        case 0x1ca37cu: goto label_1ca37c;
        case 0x1ca380u: goto label_1ca380;
        case 0x1ca384u: goto label_1ca384;
        case 0x1ca388u: goto label_1ca388;
        case 0x1ca38cu: goto label_1ca38c;
        case 0x1ca390u: goto label_1ca390;
        case 0x1ca394u: goto label_1ca394;
        case 0x1ca398u: goto label_1ca398;
        case 0x1ca39cu: goto label_1ca39c;
        case 0x1ca3a0u: goto label_1ca3a0;
        case 0x1ca3a4u: goto label_1ca3a4;
        case 0x1ca3a8u: goto label_1ca3a8;
        case 0x1ca3acu: goto label_1ca3ac;
        case 0x1ca3b0u: goto label_1ca3b0;
        case 0x1ca3b4u: goto label_1ca3b4;
        case 0x1ca3b8u: goto label_1ca3b8;
        case 0x1ca3bcu: goto label_1ca3bc;
        case 0x1ca3c0u: goto label_1ca3c0;
        case 0x1ca3c4u: goto label_1ca3c4;
        case 0x1ca3c8u: goto label_1ca3c8;
        case 0x1ca3ccu: goto label_1ca3cc;
        case 0x1ca3d0u: goto label_1ca3d0;
        case 0x1ca3d4u: goto label_1ca3d4;
        case 0x1ca3d8u: goto label_1ca3d8;
        case 0x1ca3dcu: goto label_1ca3dc;
        case 0x1ca3e0u: goto label_1ca3e0;
        case 0x1ca3e4u: goto label_1ca3e4;
        case 0x1ca3e8u: goto label_1ca3e8;
        case 0x1ca3ecu: goto label_1ca3ec;
        case 0x1ca3f0u: goto label_1ca3f0;
        case 0x1ca3f4u: goto label_1ca3f4;
        case 0x1ca3f8u: goto label_1ca3f8;
        case 0x1ca3fcu: goto label_1ca3fc;
        case 0x1ca400u: goto label_1ca400;
        case 0x1ca404u: goto label_1ca404;
        case 0x1ca408u: goto label_1ca408;
        case 0x1ca40cu: goto label_1ca40c;
        case 0x1ca410u: goto label_1ca410;
        case 0x1ca414u: goto label_1ca414;
        default: return;
    }

label_1c9c48:
    // 0x1c9c48: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1c9c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1c9c4c:
    // 0x1c9c4c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9c50:
    // 0x1c9c50: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1c9c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1c9c54:
    // 0x1c9c54: 0xa0224988  sb          $v0, 0x4988($at)
    ctx->pc = 0x1c9c54u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18824), (uint8_t)GPR_U32(ctx, 2));
label_1c9c58:
    // 0x1c9c58: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1c9c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1c9c5c:
    // 0x1c9c5c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9c60:
    // 0x1c9c60: 0xa0224989  sb          $v0, 0x4989($at)
    ctx->pc = 0x1c9c60u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18825), (uint8_t)GPR_U32(ctx, 2));
label_1c9c64:
    // 0x1c9c64: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9c68:
    // 0x1c9c68: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x1c9c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1c9c6c:
    // 0x1c9c6c: 0xa0204a20  sb          $zero, 0x4A20($at)
    ctx->pc = 0x1c9c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18976), (uint8_t)GPR_U32(ctx, 0));
label_1c9c70:
    // 0x1c9c70: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9c70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9c74:
    // 0x1c9c74: 0xa0224a15  sb          $v0, 0x4A15($at)
    ctx->pc = 0x1c9c74u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18965), (uint8_t)GPR_U32(ctx, 2));
label_1c9c78:
    // 0x1c9c78: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9c7c:
    // 0x1c9c7c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1c9c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1c9c80:
    // 0x1c9c80: 0xa0204a21  sb          $zero, 0x4A21($at)
    ctx->pc = 0x1c9c80u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18977), (uint8_t)GPR_U32(ctx, 0));
label_1c9c84:
    // 0x1c9c84: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9c88:
    // 0x1c9c88: 0xa0244a22  sb          $a0, 0x4A22($at)
    ctx->pc = 0x1c9c88u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18978), (uint8_t)GPR_U32(ctx, 4));
label_1c9c8c:
    // 0x1c9c8c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9c8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9c90:
    // 0x1c9c90: 0xa02249b0  sb          $v0, 0x49B0($at)
    ctx->pc = 0x1c9c90u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18864), (uint8_t)GPR_U32(ctx, 2));
label_1c9c94:
    // 0x1c9c94: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9c98:
    // 0x1c9c98: 0xa0244a23  sb          $a0, 0x4A23($at)
    ctx->pc = 0x1c9c98u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18979), (uint8_t)GPR_U32(ctx, 4));
label_1c9c9c:
    // 0x1c9c9c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9ca0:
    // 0x1c9ca0: 0xa0204a24  sb          $zero, 0x4A24($at)
    ctx->pc = 0x1c9ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18980), (uint8_t)GPR_U32(ctx, 0));
label_1c9ca4:
    // 0x1c9ca4: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9ca8:
    // 0x1c9ca8: 0xa0204a25  sb          $zero, 0x4A25($at)
    ctx->pc = 0x1c9ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18981), (uint8_t)GPR_U32(ctx, 0));
label_1c9cac:
    // 0x1c9cac: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9cb0:
    // 0x1c9cb0: 0xa0244a26  sb          $a0, 0x4A26($at)
    ctx->pc = 0x1c9cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18982), (uint8_t)GPR_U32(ctx, 4));
label_1c9cb4:
    // 0x1c9cb4: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9cb8:
    // 0x1c9cb8: 0xa0244a27  sb          $a0, 0x4A27($at)
    ctx->pc = 0x1c9cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18983), (uint8_t)GPR_U32(ctx, 4));
label_1c9cbc:
    // 0x1c9cbc: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9cc0:
    // 0x1c9cc0: 0xa0294a28  sb          $t1, 0x4A28($at)
    ctx->pc = 0x1c9cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18984), (uint8_t)GPR_U32(ctx, 9));
label_1c9cc4:
    // 0x1c9cc4: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9cc8:
    // 0x1c9cc8: 0xa0294a29  sb          $t1, 0x4A29($at)
    ctx->pc = 0x1c9cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18985), (uint8_t)GPR_U32(ctx, 9));
label_1c9ccc:
    // 0x1c9ccc: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9cd0:
    // 0x1c9cd0: 0xa0244a2a  sb          $a0, 0x4A2A($at)
    ctx->pc = 0x1c9cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18986), (uint8_t)GPR_U32(ctx, 4));
label_1c9cd4:
    // 0x1c9cd4: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9cd8:
    // 0x1c9cd8: 0xa0244a2b  sb          $a0, 0x4A2B($at)
    ctx->pc = 0x1c9cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18987), (uint8_t)GPR_U32(ctx, 4));
label_1c9cdc:
    // 0x1c9cdc: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9ce0:
    // 0x1c9ce0: 0xa0284a2c  sb          $t0, 0x4A2C($at)
    ctx->pc = 0x1c9ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18988), (uint8_t)GPR_U32(ctx, 8));
label_1c9ce4:
    // 0x1c9ce4: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9ce8:
    // 0x1c9ce8: 0xa0284a2d  sb          $t0, 0x4A2D($at)
    ctx->pc = 0x1c9ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18989), (uint8_t)GPR_U32(ctx, 8));
label_1c9cec:
    // 0x1c9cec: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9cecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9cf0:
    // 0x1c9cf0: 0xa0244a2e  sb          $a0, 0x4A2E($at)
    ctx->pc = 0x1c9cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18990), (uint8_t)GPR_U32(ctx, 4));
label_1c9cf4:
    // 0x1c9cf4: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9cf8:
    // 0x1c9cf8: 0xa0244a2f  sb          $a0, 0x4A2F($at)
    ctx->pc = 0x1c9cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18991), (uint8_t)GPR_U32(ctx, 4));
label_1c9cfc:
    // 0x1c9cfc: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9d00:
    // 0x1c9d00: 0xa0274a30  sb          $a3, 0x4A30($at)
    ctx->pc = 0x1c9d00u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18992), (uint8_t)GPR_U32(ctx, 7));
label_1c9d04:
    // 0x1c9d04: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9d08:
    // 0x1c9d08: 0xa0274a31  sb          $a3, 0x4A31($at)
    ctx->pc = 0x1c9d08u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18993), (uint8_t)GPR_U32(ctx, 7));
label_1c9d0c:
    // 0x1c9d0c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9d10:
    // 0x1c9d10: 0xa0244a32  sb          $a0, 0x4A32($at)
    ctx->pc = 0x1c9d10u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18994), (uint8_t)GPR_U32(ctx, 4));
label_1c9d14:
    // 0x1c9d14: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9d18:
    // 0x1c9d18: 0xa0244a33  sb          $a0, 0x4A33($at)
    ctx->pc = 0x1c9d18u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18995), (uint8_t)GPR_U32(ctx, 4));
label_1c9d1c:
    // 0x1c9d1c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9d20:
    // 0x1c9d20: 0xa024498a  sb          $a0, 0x498A($at)
    ctx->pc = 0x1c9d20u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18826), (uint8_t)GPR_U32(ctx, 4));
label_1c9d24:
    // 0x1c9d24: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9d28:
    // 0x1c9d28: 0xa024498b  sb          $a0, 0x498B($at)
    ctx->pc = 0x1c9d28u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18827), (uint8_t)GPR_U32(ctx, 4));
label_1c9d2c:
    // 0x1c9d2c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9d30:
    // 0x1c9d30: 0xa0264a14  sb          $a2, 0x4A14($at)
    ctx->pc = 0x1c9d30u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18964), (uint8_t)GPR_U32(ctx, 6));
label_1c9d34:
    // 0x1c9d34: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9d38:
    // 0x1c9d38: 0xa02649b1  sb          $a2, 0x49B1($at)
    ctx->pc = 0x1c9d38u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18865), (uint8_t)GPR_U32(ctx, 6));
label_1c9d3c:
    // 0x1c9d3c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9d40:
    // 0x1c9d40: 0xa0244a16  sb          $a0, 0x4A16($at)
    ctx->pc = 0x1c9d40u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18966), (uint8_t)GPR_U32(ctx, 4));
label_1c9d44:
    // 0x1c9d44: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9d48:
    // 0x1c9d48: 0xa0254a17  sb          $a1, 0x4A17($at)
    ctx->pc = 0x1c9d48u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18967), (uint8_t)GPR_U32(ctx, 5));
label_1c9d4c:
    // 0x1c9d4c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9d50:
    // 0x1c9d50: 0xa0254a57  sb          $a1, 0x4A57($at)
    ctx->pc = 0x1c9d50u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19031), (uint8_t)GPR_U32(ctx, 5));
label_1c9d54:
    // 0x1c9d54: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9d58:
    // 0x1c9d58: 0xa0234a54  sb          $v1, 0x4A54($at)
    ctx->pc = 0x1c9d58u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19028), (uint8_t)GPR_U32(ctx, 3));
label_1c9d5c:
    // 0x1c9d5c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9d60:
    // 0x1c9d60: 0xa0234a55  sb          $v1, 0x4A55($at)
    ctx->pc = 0x1c9d60u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19029), (uint8_t)GPR_U32(ctx, 3));
label_1c9d64:
    // 0x1c9d64: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9d68:
    // 0x1c9d68: 0xa0244a56  sb          $a0, 0x4A56($at)
    ctx->pc = 0x1c9d68u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19030), (uint8_t)GPR_U32(ctx, 4));
label_1c9d6c:
    // 0x1c9d6c: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9d70:
    // 0x1c9d70: 0xa02449b2  sb          $a0, 0x49B2($at)
    ctx->pc = 0x1c9d70u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18866), (uint8_t)GPR_U32(ctx, 4));
label_1c9d74:
    // 0x1c9d74: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9d78:
    // 0x1c9d78: 0xa02449b3  sb          $a0, 0x49B3($at)
    ctx->pc = 0x1c9d78u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18867), (uint8_t)GPR_U32(ctx, 4));
label_1c9d7c:
    // 0x1c9d7c: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1c9d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1c9d80:
    // 0x1c9d80: 0x8c3069f0  lw          $s0, 0x69F0($at)
    ctx->pc = 0x1c9d80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 27120)));
label_1c9d84:
    // 0x1c9d84: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1c9d84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1c9d88:
    // 0x1c9d88: 0x8c3169f4  lw          $s1, 0x69F4($at)
    ctx->pc = 0x1c9d88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 27124)));
label_1c9d8c:
    // 0x1c9d8c: 0xc070080  jal         func_1C0200
label_1c9d90:
    if (ctx->pc == 0x1C9D90u) {
        ctx->pc = 0x1C9D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9D8Cu;
        // 0x1c9d90: 0x112ac0  sll         $a1, $s1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9D94u;
        goto label_1c9d94;
    }
    ctx->pc = 0x1C9D8Cu;
    SET_GPR_U32(ctx, 31, 0x1C9D94u);
    ctx->pc = 0x1C9D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9D8Cu;
    // 0x1c9d90: 0x112ac0  sll         $a1, $s1, 11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1C9D94u;
label_1c9d94:
    // 0x1c9d94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c9d98:
    // 0x1c9d98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c9d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c9d9c:
    // 0x1c9d9c: 0xc041744  jal         func_105D10
label_1c9da0:
    if (ctx->pc == 0x1C9DA0u) {
        ctx->pc = 0x1C9DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9D9Cu;
        // 0x1c9da0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9DA4u;
        goto label_1c9da4;
    }
    ctx->pc = 0x1C9D9Cu;
    SET_GPR_U32(ctx, 31, 0x1C9DA4u);
    ctx->pc = 0x1C9DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9D9Cu;
    // 0x1c9da0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105D10u, 0x1C9D9Cu, 0x1C9DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9DA4u;
label_1c9da4:
    // 0x1c9da4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c9da4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c9da8:
    // 0x1c9da8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c9da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9dac:
    // 0x1c9dac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c9db0:
    // 0x1c9db0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c9db0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9db4:
    // 0x1c9db4: 0x24070016  addiu       $a3, $zero, 0x16
    ctx->pc = 0x1c9db4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1c9db8:
    // 0x1c9db8: 0x240801fe  addiu       $t0, $zero, 0x1FE
    ctx->pc = 0x1c9db8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 510));
label_1c9dbc:
    // 0x1c9dbc: 0xc0603d4  jal         func_180F50
label_1c9dc0:
    if (ctx->pc == 0x1C9DC0u) {
        ctx->pc = 0x1C9DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9DBCu;
        // 0x1c9dc0: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9DC4u;
        goto label_1c9dc4;
    }
    ctx->pc = 0x1C9DBCu;
    SET_GPR_U32(ctx, 31, 0x1C9DC4u);
    ctx->pc = 0x1C9DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9DBCu;
    // 0x1c9dc0: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180F50u, 0x1C9DBCu, 0x1C9DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9DC4u;
label_1c9dc4:
    // 0x1c9dc4: 0xff828ae8  sd          $v0, -0x7518($gp)
    ctx->pc = 0x1c9dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937320), GPR_U64(ctx, 2));
label_1c9dc8:
    // 0x1c9dc8: 0xc070038  jal         func_1C00E0
label_1c9dcc:
    if (ctx->pc == 0x1C9DCCu) {
        ctx->pc = 0x1C9DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9DC8u;
        // 0x1c9dcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9DD0u;
        goto label_1c9dd0;
    }
    ctx->pc = 0x1C9DC8u;
    SET_GPR_U32(ctx, 31, 0x1C9DD0u);
    ctx->pc = 0x1C9DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9DC8u;
    // 0x1c9dcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1C9DD0u;
label_1c9dd0:
    // 0x1c9dd0: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x1c9dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1c9dd4:
    // 0x1c9dd4: 0x240501ff  addiu       $a1, $zero, 0x1FF
    ctx->pc = 0x1c9dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
label_1c9dd8:
    // 0x1c9dd8: 0xc060578  jal         func_1815E0
label_1c9ddc:
    if (ctx->pc == 0x1C9DDCu) {
        ctx->pc = 0x1C9DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9DD8u;
        // 0x1c9ddc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9DE0u;
        goto label_1c9de0;
    }
    ctx->pc = 0x1C9DD8u;
    SET_GPR_U32(ctx, 31, 0x1C9DE0u);
    ctx->pc = 0x1C9DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9DD8u;
    // 0x1c9ddc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C9DD8u, 0x1C9DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9DE0u;
label_1c9de0:
    // 0x1c9de0: 0xff828ae0  sd          $v0, -0x7520($gp)
    ctx->pc = 0x1c9de0u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937312), GPR_U64(ctx, 2));
label_1c9de4:
    // 0x1c9de4: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x1c9de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1c9de8:
    // 0x1c9de8: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x1c9de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_1c9dec:
    // 0x1c9dec: 0xc060578  jal         func_1815E0
label_1c9df0:
    if (ctx->pc == 0x1C9DF0u) {
        ctx->pc = 0x1C9DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9DECu;
        // 0x1c9df0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9DF4u;
        goto label_1c9df4;
    }
    ctx->pc = 0x1C9DECu;
    SET_GPR_U32(ctx, 31, 0x1C9DF4u);
    ctx->pc = 0x1C9DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9DECu;
    // 0x1c9df0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C9DECu, 0x1C9DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9DF4u;
label_1c9df4:
    // 0x1c9df4: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9df8:
    // 0x1c9df8: 0xff828ac0  sd          $v0, -0x7540($gp)
    ctx->pc = 0x1c9df8u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294937280), GPR_U64(ctx, 2));
label_1c9dfc:
    // 0x1c9dfc: 0xa0204a04  sb          $zero, 0x4A04($at)
    ctx->pc = 0x1c9dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18948), (uint8_t)GPR_U32(ctx, 0));
label_1c9e00:
    // 0x1c9e00: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1c9e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1c9e04:
    // 0x1c9e04: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9e08:
    // 0x1c9e08: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1c9e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1c9e0c:
    // 0x1c9e0c: 0xa0224a05  sb          $v0, 0x4A05($at)
    ctx->pc = 0x1c9e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18949), (uint8_t)GPR_U32(ctx, 2));
label_1c9e10:
    // 0x1c9e10: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9e14:
    // 0x1c9e14: 0xa0224a06  sb          $v0, 0x4A06($at)
    ctx->pc = 0x1c9e14u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18950), (uint8_t)GPR_U32(ctx, 2));
label_1c9e18:
    // 0x1c9e18: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9e1c:
    // 0x1c9e1c: 0xa0224a07  sb          $v0, 0x4A07($at)
    ctx->pc = 0x1c9e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18951), (uint8_t)GPR_U32(ctx, 2));
label_1c9e20:
    // 0x1c9e20: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9e24:
    // 0x1c9e24: 0xa0204a08  sb          $zero, 0x4A08($at)
    ctx->pc = 0x1c9e24u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18952), (uint8_t)GPR_U32(ctx, 0));
label_1c9e28:
    // 0x1c9e28: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9e2c:
    // 0x1c9e2c: 0xa0224a09  sb          $v0, 0x4A09($at)
    ctx->pc = 0x1c9e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18953), (uint8_t)GPR_U32(ctx, 2));
label_1c9e30:
    // 0x1c9e30: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9e34:
    // 0x1c9e34: 0xa0224a0a  sb          $v0, 0x4A0A($at)
    ctx->pc = 0x1c9e34u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18954), (uint8_t)GPR_U32(ctx, 2));
label_1c9e38:
    // 0x1c9e38: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9e3c:
    // 0x1c9e3c: 0xa0224a0b  sb          $v0, 0x4A0B($at)
    ctx->pc = 0x1c9e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18955), (uint8_t)GPR_U32(ctx, 2));
label_1c9e40:
    // 0x1c9e40: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9e44:
    // 0x1c9e44: 0xa0224a18  sb          $v0, 0x4A18($at)
    ctx->pc = 0x1c9e44u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18968), (uint8_t)GPR_U32(ctx, 2));
label_1c9e48:
    // 0x1c9e48: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9e4c:
    // 0x1c9e4c: 0xa0244a19  sb          $a0, 0x4A19($at)
    ctx->pc = 0x1c9e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18969), (uint8_t)GPR_U32(ctx, 4));
label_1c9e50:
    // 0x1c9e50: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9e54:
    // 0x1c9e54: 0xa0224a1a  sb          $v0, 0x4A1A($at)
    ctx->pc = 0x1c9e54u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18970), (uint8_t)GPR_U32(ctx, 2));
label_1c9e58:
    // 0x1c9e58: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c9e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c9e5c:
    // 0x1c9e5c: 0xa0224a1b  sb          $v0, 0x4A1B($at)
    ctx->pc = 0x1c9e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18971), (uint8_t)GPR_U32(ctx, 2));
label_1c9e60:
    // 0x1c9e60: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1c9e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1c9e64:
    // 0x1c9e64: 0x8c306b70  lw          $s0, 0x6B70($at)
    ctx->pc = 0x1c9e64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 27504)));
label_1c9e68:
    // 0x1c9e68: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1c9e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1c9e6c:
    // 0x1c9e6c: 0x8c316b74  lw          $s1, 0x6B74($at)
    ctx->pc = 0x1c9e6cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 27508)));
label_1c9e70:
    // 0x1c9e70: 0xc070080  jal         func_1C0200
label_1c9e74:
    if (ctx->pc == 0x1C9E74u) {
        ctx->pc = 0x1C9E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E70u;
        // 0x1c9e74: 0x112ac0  sll         $a1, $s1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9E78u;
        goto label_1c9e78;
    }
    ctx->pc = 0x1C9E70u;
    SET_GPR_U32(ctx, 31, 0x1C9E78u);
    ctx->pc = 0x1C9E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9E70u;
    // 0x1c9e74: 0x112ac0  sll         $a1, $s1, 11 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1C9E78u;
label_1c9e78:
    // 0x1c9e78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c9e7c:
    // 0x1c9e7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c9e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c9e80:
    // 0x1c9e80: 0xc041744  jal         func_105D10
label_1c9e84:
    if (ctx->pc == 0x1C9E84u) {
        ctx->pc = 0x1C9E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E80u;
        // 0x1c9e84: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9E88u;
        goto label_1c9e88;
    }
    ctx->pc = 0x1C9E80u;
    SET_GPR_U32(ctx, 31, 0x1C9E88u);
    ctx->pc = 0x1C9E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9E80u;
    // 0x1c9e84: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105D10u, 0x1C9E80u, 0x1C9E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9E88u;
label_1c9e88:
    // 0x1c9e88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c9e88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c9e8c:
    // 0x1c9e8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c9e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9e90:
    // 0x1c9e90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c9e94:
    // 0x1c9e94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c9e94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9e98:
    // 0x1c9e98: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1c9e98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c9e9c:
    // 0x1c9e9c: 0x240800a0  addiu       $t0, $zero, 0xA0
    ctx->pc = 0x1c9e9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_1c9ea0:
    // 0x1c9ea0: 0xc0603d4  jal         func_180F50
label_1c9ea4:
    if (ctx->pc == 0x1C9EA4u) {
        ctx->pc = 0x1C9EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9EA0u;
        // 0x1c9ea4: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9EA8u;
        goto label_1c9ea8;
    }
    ctx->pc = 0x1C9EA0u;
    SET_GPR_U32(ctx, 31, 0x1C9EA8u);
    ctx->pc = 0x1C9EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9EA0u;
    // 0x1c9ea4: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180F50u, 0x1C9EA0u, 0x1C9EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9EA8u;
label_1c9ea8:
    // 0x1c9ea8: 0xff8288c8  sd          $v0, -0x7738($gp)
    ctx->pc = 0x1c9ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936776), GPR_U64(ctx, 2));
label_1c9eac:
    // 0x1c9eac: 0xc070038  jal         func_1C00E0
label_1c9eb0:
    if (ctx->pc == 0x1C9EB0u) {
        ctx->pc = 0x1C9EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9EACu;
        // 0x1c9eb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9EB4u;
        goto label_1c9eb4;
    }
    ctx->pc = 0x1C9EACu;
    SET_GPR_U32(ctx, 31, 0x1C9EB4u);
    ctx->pc = 0x1C9EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9EACu;
    // 0x1c9eb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1C9EB4u;
label_1c9eb4:
    // 0x1c9eb4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1c9eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c9eb8:
    // 0x1c9eb8: 0x240500a1  addiu       $a1, $zero, 0xA1
    ctx->pc = 0x1c9eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
label_1c9ebc:
    // 0x1c9ebc: 0xc060578  jal         func_1815E0
label_1c9ec0:
    if (ctx->pc == 0x1C9EC0u) {
        ctx->pc = 0x1C9EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9EBCu;
        // 0x1c9ec0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9EC4u;
        goto label_1c9ec4;
    }
    ctx->pc = 0x1C9EBCu;
    SET_GPR_U32(ctx, 31, 0x1C9EC4u);
    ctx->pc = 0x1C9EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9EBCu;
    // 0x1c9ec0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C9EBCu, 0x1C9EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9EC4u;
label_1c9ec4:
    // 0x1c9ec4: 0xff8288c8  sd          $v0, -0x7738($gp)
    ctx->pc = 0x1c9ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936776), GPR_U64(ctx, 2));
label_1c9ec8:
    // 0x1c9ec8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1c9ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c9ecc:
    // 0x1c9ecc: 0x240500a2  addiu       $a1, $zero, 0xA2
    ctx->pc = 0x1c9eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
label_1c9ed0:
    // 0x1c9ed0: 0xc060578  jal         func_1815E0
label_1c9ed4:
    if (ctx->pc == 0x1C9ED4u) {
        ctx->pc = 0x1C9ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9ED0u;
        // 0x1c9ed4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9ED8u;
        goto label_1c9ed8;
    }
    ctx->pc = 0x1C9ED0u;
    SET_GPR_U32(ctx, 31, 0x1C9ED8u);
    ctx->pc = 0x1C9ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9ED0u;
    // 0x1c9ed4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C9ED0u, 0x1C9ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9ED8u;
label_1c9ed8:
    // 0x1c9ed8: 0xff8288c8  sd          $v0, -0x7738($gp)
    ctx->pc = 0x1c9ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936776), GPR_U64(ctx, 2));
label_1c9edc:
    // 0x1c9edc: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1c9edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c9ee0:
    // 0x1c9ee0: 0x240500a3  addiu       $a1, $zero, 0xA3
    ctx->pc = 0x1c9ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 163));
label_1c9ee4:
    // 0x1c9ee4: 0xc060578  jal         func_1815E0
label_1c9ee8:
    if (ctx->pc == 0x1C9EE8u) {
        ctx->pc = 0x1C9EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9EE4u;
        // 0x1c9ee8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9EECu;
        goto label_1c9eec;
    }
    ctx->pc = 0x1C9EE4u;
    SET_GPR_U32(ctx, 31, 0x1C9EECu);
    ctx->pc = 0x1C9EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9EE4u;
    // 0x1c9ee8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C9EE4u, 0x1C9EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9EECu;
label_1c9eec:
    // 0x1c9eec: 0xff8288c8  sd          $v0, -0x7738($gp)
    ctx->pc = 0x1c9eecu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936776), GPR_U64(ctx, 2));
label_1c9ef0:
    // 0x1c9ef0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1c9ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c9ef4:
    // 0x1c9ef4: 0x240500a4  addiu       $a1, $zero, 0xA4
    ctx->pc = 0x1c9ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
label_1c9ef8:
    // 0x1c9ef8: 0xc060578  jal         func_1815E0
label_1c9efc:
    if (ctx->pc == 0x1C9EFCu) {
        ctx->pc = 0x1C9EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9EF8u;
        // 0x1c9efc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9F00u;
        goto label_1c9f00;
    }
    ctx->pc = 0x1C9EF8u;
    SET_GPR_U32(ctx, 31, 0x1C9F00u);
    ctx->pc = 0x1C9EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9EF8u;
    // 0x1c9efc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C9EF8u, 0x1C9F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9F00u;
label_1c9f00:
    // 0x1c9f00: 0xff8288c8  sd          $v0, -0x7738($gp)
    ctx->pc = 0x1c9f00u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936776), GPR_U64(ctx, 2));
label_1c9f04:
    // 0x1c9f04: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1c9f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c9f08:
    // 0x1c9f08: 0x240500a5  addiu       $a1, $zero, 0xA5
    ctx->pc = 0x1c9f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 165));
label_1c9f0c:
    // 0x1c9f0c: 0xc060578  jal         func_1815E0
label_1c9f10:
    if (ctx->pc == 0x1C9F10u) {
        ctx->pc = 0x1C9F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9F0Cu;
        // 0x1c9f10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9F14u;
        goto label_1c9f14;
    }
    ctx->pc = 0x1C9F0Cu;
    SET_GPR_U32(ctx, 31, 0x1C9F14u);
    ctx->pc = 0x1C9F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9F0Cu;
    // 0x1c9f10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C9F0Cu, 0x1C9F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9F14u;
label_1c9f14:
    // 0x1c9f14: 0xff8288c8  sd          $v0, -0x7738($gp)
    ctx->pc = 0x1c9f14u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936776), GPR_U64(ctx, 2));
label_1c9f18:
    // 0x1c9f18: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1c9f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c9f1c:
    // 0x1c9f1c: 0x240500a6  addiu       $a1, $zero, 0xA6
    ctx->pc = 0x1c9f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
label_1c9f20:
    // 0x1c9f20: 0xc060578  jal         func_1815E0
label_1c9f24:
    if (ctx->pc == 0x1C9F24u) {
        ctx->pc = 0x1C9F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9F20u;
        // 0x1c9f24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9F28u;
        goto label_1c9f28;
    }
    ctx->pc = 0x1C9F20u;
    SET_GPR_U32(ctx, 31, 0x1C9F28u);
    ctx->pc = 0x1C9F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9F20u;
    // 0x1c9f24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C9F20u, 0x1C9F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9F28u;
label_1c9f28:
    // 0x1c9f28: 0xff8288c8  sd          $v0, -0x7738($gp)
    ctx->pc = 0x1c9f28u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936776), GPR_U64(ctx, 2));
label_1c9f2c:
    // 0x1c9f2c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1c9f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c9f30:
    // 0x1c9f30: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x1c9f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_1c9f34:
    // 0x1c9f34: 0xc060578  jal         func_1815E0
label_1c9f38:
    if (ctx->pc == 0x1C9F38u) {
        ctx->pc = 0x1C9F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9F34u;
        // 0x1c9f38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9F3Cu;
        goto label_1c9f3c;
    }
    ctx->pc = 0x1C9F34u;
    SET_GPR_U32(ctx, 31, 0x1C9F3Cu);
    ctx->pc = 0x1C9F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9F34u;
    // 0x1c9f38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1815E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1815E0u, 0x1C9F34u, 0x1C9F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9F3Cu;
label_1c9f3c:
    // 0x1c9f3c: 0xff8288c8  sd          $v0, -0x7738($gp)
    ctx->pc = 0x1c9f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936776), GPR_U64(ctx, 2));
label_1c9f40:
    // 0x1c9f40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c9f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c9f44:
    // 0x1c9f44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c9f44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c9f48:
    // 0x1c9f48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c9f48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c9f4c:
    // 0x1c9f4c: 0x3e00008  jr          $ra
label_1c9f50:
    if (ctx->pc == 0x1C9F50u) {
        ctx->pc = 0x1C9F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9F4Cu;
        // 0x1c9f50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9F54u;
        goto label_1c9f54;
    }
    ctx->pc = 0x1C9F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9F4Cu;
        // 0x1c9f50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9F54u;
label_1c9f54:
    // 0x1c9f54: 0x0  nop
    ctx->pc = 0x1c9f54u;
    // NOP
label_1c9f58:
    // 0x1c9f58: 0x0  nop
    ctx->pc = 0x1c9f58u;
    // NOP
label_1c9f5c:
    // 0x1c9f5c: 0x0  nop
    ctx->pc = 0x1c9f5cu;
    // NOP
label_1c9f60:
    // 0x1c9f60: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c9f60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1c9f64:
    // 0x1c9f64: 0x2881004f  slti        $at, $a0, 0x4F
    ctx->pc = 0x1c9f64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)79) ? 1 : 0);
label_1c9f68:
    // 0x1c9f68: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1c9f6c:
    if (ctx->pc == 0x1C9F6Cu) {
        ctx->pc = 0x1C9F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9F68u;
        // 0x1c9f6c: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9F70u;
        goto label_1c9f70;
    }
    ctx->pc = 0x1C9F68u;
    {
        const bool branch_taken_0x1c9f68 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9F68u;
        // 0x1c9f6c: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9f68) {
            ctx->pc = 0x1C9F74u;
            goto label_1c9f74;
        }
    }
    ctx->pc = 0x1C9F70u;
label_1c9f70:
    // 0x1c9f70: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x1c9f70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_1c9f74:
    // 0x1c9f74: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x1c9f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_1c9f78:
    // 0x1c9f78: 0x43880  sll         $a3, $a0, 2
    ctx->pc = 0x1c9f78u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1c9f7c:
    // 0x1c9f7c: 0x24634952  addiu       $v1, $v1, 0x4952
    ctx->pc = 0x1c9f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18770));
label_1c9f80:
    // 0x1c9f80: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x1c9f80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
label_1c9f84:
    // 0x1c9f84: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1c9f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1c9f88:
    // 0x1c9f88: 0x24844953  addiu       $a0, $a0, 0x4953
    ctx->pc = 0x1c9f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18771));
label_1c9f8c:
    // 0x1c9f8c: 0x906b0000  lbu         $t3, 0x0($v1)
    ctx->pc = 0x1c9f8cu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1c9f90:
    // 0x1c9f90: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1c9f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1c9f94:
    // 0x1c9f94: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x1c9f94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
label_1c9f98:
    // 0x1c9f98: 0x908c0000  lbu         $t4, 0x0($a0)
    ctx->pc = 0x1c9f98u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1c9f9c:
    // 0x1c9f9c: 0x24c64950  addiu       $a2, $a2, 0x4950
    ctx->pc = 0x1c9f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 18768));
label_1c9fa0:
    // 0x1c9fa0: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x1c9fa0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c9fa4:
    // 0x1c9fa4: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1c9fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1c9fa8:
    // 0x1c9fa8: 0x90c70000  lbu         $a3, 0x0($a2)
    ctx->pc = 0x1c9fa8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1c9fac:
    // 0x1c9fac: 0x10b001b  divu        $zero, $t0, $t3
    ctx->pc = 0x1c9facu;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,8); } }
label_1c9fb0:
    // 0x1c9fb0: 0x0  nop
    ctx->pc = 0x1c9fb0u;
    // NOP
label_1c9fb4:
    // 0x1c9fb4: 0x0  nop
    ctx->pc = 0x1c9fb4u;
    // NOP
label_1c9fb8:
    // 0x1c9fb8: 0x4812  mflo        $t1
    ctx->pc = 0x1c9fb8u;
    SET_GPR_U64(ctx, 9, ctx->lo);
label_1c9fbc:
    // 0x1c9fbc: 0x14c001b  divu        $zero, $t2, $t4
    ctx->pc = 0x1c9fbcu;
    { uint32_t divisor = GPR_U32(ctx, 12); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
label_1c9fc0:
    // 0x1c9fc0: 0x0  nop
    ctx->pc = 0x1c9fc0u;
    // NOP
label_1c9fc4:
    // 0x1c9fc4: 0x0  nop
    ctx->pc = 0x1c9fc4u;
    // NOP
label_1c9fc8:
    // 0x1c9fc8: 0x5012  mflo        $t2
    ctx->pc = 0x1c9fc8u;
    SET_GPR_U64(ctx, 10, ctx->lo);
label_1c9fcc:
    // 0x1c9fcc: 0xe9001b  divu        $zero, $a3, $t1
    ctx->pc = 0x1c9fccu;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
label_1c9fd0:
    // 0x1c9fd0: 0x14d3021  addu        $a2, $t2, $t5
    ctx->pc = 0x1c9fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 13)));
label_1c9fd4:
    // 0x1c9fd4: 0x0  nop
    ctx->pc = 0x1c9fd4u;
    // NOP
label_1c9fd8:
    // 0x1c9fd8: 0x4010  mfhi        $t0
    ctx->pc = 0x1c9fd8u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_1c9fdc:
    // 0x1c9fdc: 0xe9001b  divu        $zero, $a3, $t1
    ctx->pc = 0x1c9fdcu;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
label_1c9fe0:
    // 0x1c9fe0: 0x0  nop
    ctx->pc = 0x1c9fe0u;
    // NOP
label_1c9fe4:
    // 0x1c9fe4: 0x0  nop
    ctx->pc = 0x1c9fe4u;
    // NOP
label_1c9fe8:
    // 0x1c9fe8: 0x3812  mflo        $a3
    ctx->pc = 0x1c9fe8u;
    SET_GPR_U64(ctx, 7, ctx->lo);
label_1c9fec:
    // 0x1c9fec: 0x30e9ffff  andi        $t1, $a3, 0xFFFF
    ctx->pc = 0x1c9fecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_1c9ff0:
    // 0x1c9ff0: 0xc9082b  sltu        $at, $a2, $t1
    ctx->pc = 0x1c9ff0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_1c9ff4:
    // 0x1c9ff4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1c9ff8:
    if (ctx->pc == 0x1C9FF8u) {
        ctx->pc = 0x1C9FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9FF4u;
        // 0x1c9ff8: 0x3108ffff  andi        $t0, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C9FFCu;
        goto label_1c9ffc;
    }
    ctx->pc = 0x1C9FF4u;
    {
        const bool branch_taken_0x1c9ff4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9FF4u;
        // 0x1c9ff8: 0x3108ffff  andi        $t0, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9ff4) {
            ctx->pc = 0x1CA000u;
            goto label_1ca000;
        }
    }
    ctx->pc = 0x1C9FFCu;
label_1c9ffc:
    // 0x1c9ffc: 0x2549ffff  addiu       $t1, $t2, -0x1
    ctx->pc = 0x1c9ffcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_1ca000:
    // 0x1ca000: 0x316700ff  andi        $a3, $t3, 0xFF
    ctx->pc = 0x1ca000u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
label_1ca004:
    // 0x1ca004: 0x318600ff  andi        $a2, $t4, 0xFF
    ctx->pc = 0x1ca004u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)255);
label_1ca008:
    // 0x1ca008: 0x1074018  mult        $t0, $t0, $a3
    ctx->pc = 0x1ca008u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_1ca00c:
    // 0x1ca00c: 0x5000004  bltz        $t0, . + 4 + (0x4 << 2)
label_1ca010:
    if (ctx->pc == 0x1CA010u) {
        ctx->pc = 0x1CA010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA00Cu;
        // 0x1ca010: 0x71264818  mult1       $t1, $t1, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA014u;
        goto label_1ca014;
    }
    ctx->pc = 0x1CA00Cu;
    {
        const bool branch_taken_0x1ca00c = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x1CA010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA00Cu;
        // 0x1ca010: 0x71264818  mult1       $t1, $t1, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca00c) {
            ctx->pc = 0x1CA020u;
            goto label_1ca020;
        }
    }
    ctx->pc = 0x1CA014u;
label_1ca014:
    // 0x1ca014: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1ca014u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ca018:
    // 0x1ca018: 0x10000008  b           . + 4 + (0x8 << 2)
label_1ca01c:
    if (ctx->pc == 0x1CA01Cu) {
        ctx->pc = 0x1CA01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA018u;
        // 0x1ca01c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA020u;
        goto label_1ca020;
    }
    ctx->pc = 0x1CA018u;
    {
        const bool branch_taken_0x1ca018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA018u;
        // 0x1ca01c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca018) {
            ctx->pc = 0x1CA03Cu;
            goto label_1ca03c;
        }
    }
    ctx->pc = 0x1CA020u;
label_1ca020:
    // 0x1ca020: 0x83842  srl         $a3, $t0, 1
    ctx->pc = 0x1ca020u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 8), 1));
label_1ca024:
    // 0x1ca024: 0x31060001  andi        $a2, $t0, 0x1
    ctx->pc = 0x1ca024u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
label_1ca028:
    // 0x1ca028: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x1ca028u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
label_1ca02c:
    // 0x1ca02c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1ca02cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ca030:
    // 0x1ca030: 0x0  nop
    ctx->pc = 0x1ca030u;
    // NOP
label_1ca034:
    // 0x1ca034: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ca034u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ca038:
    // 0x1ca038: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1ca038u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1ca03c:
    // 0x1ca03c: 0x5200004  bltz        $t1, . + 4 + (0x4 << 2)
label_1ca040:
    if (ctx->pc == 0x1CA040u) {
        ctx->pc = 0x1CA040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA03Cu;
        // 0x1ca040: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA044u;
        goto label_1ca044;
    }
    ctx->pc = 0x1CA03Cu;
    {
        const bool branch_taken_0x1ca03c = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x1CA040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA03Cu;
        // 0x1ca040: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca03c) {
            ctx->pc = 0x1CA050u;
            goto label_1ca050;
        }
    }
    ctx->pc = 0x1CA044u;
label_1ca044:
    // 0x1ca044: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x1ca044u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ca048:
    // 0x1ca048: 0x10000008  b           . + 4 + (0x8 << 2)
label_1ca04c:
    if (ctx->pc == 0x1CA04Cu) {
        ctx->pc = 0x1CA04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA048u;
        // 0x1ca04c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA050u;
        goto label_1ca050;
    }
    ctx->pc = 0x1CA048u;
    {
        const bool branch_taken_0x1ca048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA048u;
        // 0x1ca04c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca048) {
            ctx->pc = 0x1CA06Cu;
            goto label_1ca06c;
        }
    }
    ctx->pc = 0x1CA050u;
label_1ca050:
    // 0x1ca050: 0x93842  srl         $a3, $t1, 1
    ctx->pc = 0x1ca050u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
label_1ca054:
    // 0x1ca054: 0x31260001  andi        $a2, $t1, 0x1
    ctx->pc = 0x1ca054u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
label_1ca058:
    // 0x1ca058: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x1ca058u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
label_1ca05c:
    // 0x1ca05c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1ca05cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ca060:
    // 0x1ca060: 0x0  nop
    ctx->pc = 0x1ca060u;
    // NOP
label_1ca064:
    // 0x1ca064: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ca064u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ca068:
    // 0x1ca068: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1ca068u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1ca06c:
    // 0x1ca06c: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1ca06cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_1ca070:
    // 0x1ca070: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1ca070u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1ca074:
    // 0x1ca074: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_1ca078:
    if (ctx->pc == 0x1CA078u) {
        ctx->pc = 0x1CA078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA074u;
        // 0x1ca078: 0x33042  srl         $a2, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA07Cu;
        goto label_1ca07c;
    }
    ctx->pc = 0x1CA074u;
    {
        const bool branch_taken_0x1ca074 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1CA078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA074u;
        // 0x1ca078: 0x33042  srl         $a2, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca074) {
            ctx->pc = 0x1CA088u;
            goto label_1ca088;
        }
    }
    ctx->pc = 0x1CA07Cu;
label_1ca07c:
    // 0x1ca07c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ca07cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ca080:
    // 0x1ca080: 0x10000007  b           . + 4 + (0x7 << 2)
label_1ca084:
    if (ctx->pc == 0x1CA084u) {
        ctx->pc = 0x1CA084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA080u;
        // 0x1ca084: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA088u;
        goto label_1ca088;
    }
    ctx->pc = 0x1CA080u;
    {
        const bool branch_taken_0x1ca080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA080u;
        // 0x1ca084: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca080) {
            ctx->pc = 0x1CA0A0u;
            goto label_1ca0a0;
        }
    }
    ctx->pc = 0x1CA088u;
label_1ca088:
    // 0x1ca088: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1ca088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1ca08c:
    // 0x1ca08c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1ca08cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_1ca090:
    // 0x1ca090: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1ca090u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ca094:
    // 0x1ca094: 0x0  nop
    ctx->pc = 0x1ca094u;
    // NOP
label_1ca098:
    // 0x1ca098: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ca098u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ca09c:
    // 0x1ca09c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1ca09cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1ca0a0:
    // 0x1ca0a0: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x1ca0a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_1ca0a4:
    // 0x1ca0a4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1ca0a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1ca0a8:
    // 0x1ca0a8: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_1ca0ac:
    if (ctx->pc == 0x1CA0ACu) {
        ctx->pc = 0x1CA0B0u;
        goto label_1ca0b0;
    }
    ctx->pc = 0x1CA0A8u;
    {
        const bool branch_taken_0x1ca0a8 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1ca0a8) {
            ctx->pc = 0x1CA0BCu;
            goto label_1ca0bc;
        }
    }
    ctx->pc = 0x1CA0B0u;
label_1ca0b0:
    // 0x1ca0b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ca0b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ca0b4:
    // 0x1ca0b4: 0x10000008  b           . + 4 + (0x8 << 2)
label_1ca0b8:
    if (ctx->pc == 0x1CA0B8u) {
        ctx->pc = 0x1CA0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA0B4u;
        // 0x1ca0b8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA0BCu;
        goto label_1ca0bc;
    }
    ctx->pc = 0x1CA0B4u;
    {
        const bool branch_taken_0x1ca0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA0B4u;
        // 0x1ca0b8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca0b4) {
            ctx->pc = 0x1CA0D8u;
            goto label_1ca0d8;
        }
    }
    ctx->pc = 0x1CA0BCu;
label_1ca0bc:
    // 0x1ca0bc: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1ca0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_1ca0c0:
    // 0x1ca0c0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1ca0c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1ca0c4:
    // 0x1ca0c4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1ca0c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1ca0c8:
    // 0x1ca0c8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1ca0c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ca0cc:
    // 0x1ca0cc: 0x0  nop
    ctx->pc = 0x1ca0ccu;
    // NOP
label_1ca0d0:
    // 0x1ca0d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ca0d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ca0d4:
    // 0x1ca0d4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1ca0d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1ca0d8:
    // 0x1ca0d8: 0x3e00008  jr          $ra
label_1ca0dc:
    if (ctx->pc == 0x1CA0DCu) {
        ctx->pc = 0x1CA0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA0D8u;
        // 0x1ca0dc: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA0E0u;
        goto label_1ca0e0;
    }
    ctx->pc = 0x1CA0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA0D8u;
        // 0x1ca0dc: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA0D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA0E0u;
label_1ca0e0:
    // 0x1ca0e0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1ca0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1ca0e4:
    // 0x1ca0e4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1ca0e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1ca0e8:
    // 0x1ca0e8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1ca0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1ca0ec:
    // 0x1ca0ec: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1ca0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1ca0f0:
    // 0x1ca0f0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1ca0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1ca0f4:
    // 0x1ca0f4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1ca0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1ca0f8:
    // 0x1ca0f8: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1ca0f8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ca0fc:
    // 0x1ca0fc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1ca0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1ca100:
    // 0x1ca100: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1ca100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1ca104:
    // 0x1ca104: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ca104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1ca108:
    // 0x1ca108: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1ca108u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ca10c:
    // 0x1ca10c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ca10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1ca110:
    // 0x1ca110: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1ca110u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ca114:
    // 0x1ca114: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ca114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1ca118:
    // 0x1ca118: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ca118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ca11c:
    // 0x1ca11c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ca11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ca120:
    // 0x1ca120: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x1ca120u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_1ca124:
    // 0x1ca124: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
label_1ca128:
    if (ctx->pc == 0x1CA128u) {
        ctx->pc = 0x1CA128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA124u;
        // 0x1ca128: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA12Cu;
        goto label_1ca12c;
    }
    ctx->pc = 0x1CA124u;
    {
        const bool branch_taken_0x1ca124 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1CA128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA124u;
        // 0x1ca128: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca124) {
            ctx->pc = 0x1CA14Cu;
            goto label_1ca14c;
        }
    }
    ctx->pc = 0x1CA12Cu;
label_1ca12c:
    // 0x1ca12c: 0x2483ffeb  addiu       $v1, $a0, -0x15
    ctx->pc = 0x1ca12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967275));
label_1ca130:
    // 0x1ca130: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x1ca130u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1ca134:
    // 0x1ca134: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_1ca138:
    if (ctx->pc == 0x1CA138u) {
        ctx->pc = 0x1CA138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA134u;
        // 0x1ca138: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA13Cu;
        goto label_1ca13c;
    }
    ctx->pc = 0x1CA134u;
    {
        const bool branch_taken_0x1ca134 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA134u;
        // 0x1ca138: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca134) {
            ctx->pc = 0x1CA14Cu;
            goto label_1ca14c;
        }
    }
    ctx->pc = 0x1CA13Cu;
label_1ca13c:
    // 0x1ca13c: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x1ca13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_1ca140:
    // 0x1ca140: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x1ca140u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_1ca144:
    // 0x1ca144: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_1ca148:
    if (ctx->pc == 0x1CA148u) {
        ctx->pc = 0x1CA14Cu;
        goto label_1ca14c;
    }
    ctx->pc = 0x1CA144u;
    {
        const bool branch_taken_0x1ca144 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ca144) {
            ctx->pc = 0x1CA154u;
            goto label_1ca154;
        }
    }
    ctx->pc = 0x1CA14Cu;
label_1ca14c:
    // 0x1ca14c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1ca150:
    if (ctx->pc == 0x1CA150u) {
        ctx->pc = 0x1CA150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA14Cu;
        // 0x1ca150: 0xafa000a0  sw          $zero, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA154u;
        goto label_1ca154;
    }
    ctx->pc = 0x1CA14Cu;
    {
        const bool branch_taken_0x1ca14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA14Cu;
        // 0x1ca150: 0xafa000a0  sw          $zero, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca14c) {
            ctx->pc = 0x1CA158u;
            goto label_1ca158;
        }
    }
    ctx->pc = 0x1CA154u;
label_1ca154:
    // 0x1ca154: 0xafb000a0  sw          $s0, 0xA0($sp)
    ctx->pc = 0x1ca154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 16));
label_1ca158:
    // 0x1ca158: 0x87c30220  lh          $v1, 0x220($fp)
    ctx->pc = 0x1ca158u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 544)));
label_1ca15c:
    // 0x1ca15c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1ca160:
    if (ctx->pc == 0x1CA160u) {
        ctx->pc = 0x1CA160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA15Cu;
        // 0x1ca160: 0x32043  sra         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA164u;
        goto label_1ca164;
    }
    ctx->pc = 0x1CA15Cu;
    {
        const bool branch_taken_0x1ca15c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1CA160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA15Cu;
        // 0x1ca160: 0x32043  sra         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca15c) {
            ctx->pc = 0x1CA16Cu;
            goto label_1ca16c;
        }
    }
    ctx->pc = 0x1CA164u;
label_1ca164:
    // 0x1ca164: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ca164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1ca168:
    // 0x1ca168: 0x32043  sra         $a0, $v1, 1
    ctx->pc = 0x1ca168u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
label_1ca16c:
    // 0x1ca16c: 0x87c3021c  lh          $v1, 0x21C($fp)
    ctx->pc = 0x1ca16cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 540)));
label_1ca170:
    // 0x1ca170: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1ca170u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1ca174:
    // 0x1ca174: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1ca178:
    if (ctx->pc == 0x1CA178u) {
        ctx->pc = 0x1CA17Cu;
        goto label_1ca17c;
    }
    ctx->pc = 0x1CA174u;
    {
        const bool branch_taken_0x1ca174 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca174) {
            ctx->pc = 0x1CA184u;
            goto label_1ca184;
        }
    }
    ctx->pc = 0x1CA17Cu;
label_1ca17c:
    // 0x1ca17c: 0x10000022  b           . + 4 + (0x22 << 2)
label_1ca180:
    if (ctx->pc == 0x1CA180u) {
        ctx->pc = 0x1CA180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA17Cu;
        // 0x1ca180: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA184u;
        goto label_1ca184;
    }
    ctx->pc = 0x1CA17Cu;
    {
        const bool branch_taken_0x1ca17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA17Cu;
        // 0x1ca180: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca17c) {
            ctx->pc = 0x1CA208u;
            goto label_1ca208;
        }
    }
    ctx->pc = 0x1CA184u;
label_1ca184:
    // 0x1ca184: 0x92a30022  lbu         $v1, 0x22($s5)
    ctx->pc = 0x1ca184u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 34)));
label_1ca188:
    // 0x1ca188: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ca188u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca18c:
    // 0x1ca18c: 0x92a20023  lbu         $v0, 0x23($s5)
    ctx->pc = 0x1ca18cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 35)));
label_1ca190:
    // 0x1ca190: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ca190u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca194:
    // 0x1ca194: 0x2477ffff  addiu       $s7, $v1, -0x1
    ctx->pc = 0x1ca194u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1ca198:
    // 0x1ca198: 0x2456ffff  addiu       $s6, $v0, -0x1
    ctx->pc = 0x1ca198u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1ca19c:
    // 0x1ca19c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ca19cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca1a0:
    // 0x1ca1a0: 0x2f22021  addu        $a0, $s7, $s2
    ctx->pc = 0x1ca1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
label_1ca1a4:
    // 0x1ca1a4: 0xc0449d4  jal         func_112750
label_1ca1a8:
    if (ctx->pc == 0x1CA1A8u) {
        ctx->pc = 0x1CA1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA1A4u;
        // 0x1ca1a8: 0x2d32821  addu        $a1, $s6, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA1ACu;
        goto label_1ca1ac;
    }
    ctx->pc = 0x1CA1A4u;
    SET_GPR_U32(ctx, 31, 0x1CA1ACu);
    ctx->pc = 0x1CA1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA1A4u;
    // 0x1ca1a8: 0x2d32821  addu        $a1, $s6, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112750u, 0x1CA1A4u, 0x1CA1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA1ACu;
label_1ca1ac:
    // 0x1ca1ac: 0x92a30034  lbu         $v1, 0x34($s5)
    ctx->pc = 0x1ca1acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 52)));
label_1ca1b0:
    // 0x1ca1b0: 0x38640001  xori        $a0, $v1, 0x1
    ctx->pc = 0x1ca1b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_1ca1b4:
    // 0x1ca1b4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1ca1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ca1b8:
    // 0x1ca1b8: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1ca1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1ca1bc:
    // 0x1ca1bc: 0x90840008  lbu         $a0, 0x8($a0)
    ctx->pc = 0x1ca1bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
label_1ca1c0:
    // 0x1ca1c0: 0x90630008  lbu         $v1, 0x8($v1)
    ctx->pc = 0x1ca1c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
label_1ca1c4:
    // 0x1ca1c4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1ca1c8:
    if (ctx->pc == 0x1CA1C8u) {
        ctx->pc = 0x1CA1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA1C4u;
        // 0x1ca1c8: 0x2248821  addu        $s1, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA1CCu;
        goto label_1ca1cc;
    }
    ctx->pc = 0x1CA1C4u;
    {
        const bool branch_taken_0x1ca1c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA1C4u;
        // 0x1ca1c8: 0x2248821  addu        $s1, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca1c4) {
            ctx->pc = 0x1CA1D4u;
            goto label_1ca1d4;
        }
    }
    ctx->pc = 0x1CA1CCu;
label_1ca1cc:
    // 0x1ca1cc: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ca1d0:
    if (ctx->pc == 0x1CA1D0u) {
        ctx->pc = 0x1CA1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA1CCu;
        // 0x1ca1d0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA1D4u;
        goto label_1ca1d4;
    }
    ctx->pc = 0x1CA1CCu;
    {
        const bool branch_taken_0x1ca1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA1CCu;
        // 0x1ca1d0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca1cc) {
            ctx->pc = 0x1CA1E8u;
            goto label_1ca1e8;
        }
    }
    ctx->pc = 0x1CA1D4u;
label_1ca1d4:
    // 0x1ca1d4: 0x0  nop
    ctx->pc = 0x1ca1d4u;
    // NOP
label_1ca1d8:
    // 0x1ca1d8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1ca1d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1ca1dc:
    // 0x1ca1dc: 0x2a630003  slti        $v1, $s3, 0x3
    ctx->pc = 0x1ca1dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
label_1ca1e0:
    // 0x1ca1e0: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
label_1ca1e4:
    if (ctx->pc == 0x1CA1E4u) {
        ctx->pc = 0x1CA1E8u;
        goto label_1ca1e8;
    }
    ctx->pc = 0x1CA1E0u;
    {
        const bool branch_taken_0x1ca1e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca1e0) {
            ctx->pc = 0x1CA1A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca1a0;
        }
    }
    ctx->pc = 0x1CA1E8u;
label_1ca1e8:
    // 0x1ca1e8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ca1e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1ca1ec:
    // 0x1ca1ec: 0x2a430003  slti        $v1, $s2, 0x3
    ctx->pc = 0x1ca1ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
label_1ca1f0:
    // 0x1ca1f0: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
label_1ca1f4:
    if (ctx->pc == 0x1CA1F4u) {
        ctx->pc = 0x1CA1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA1F0u;
        // 0x1ca1f4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA1F8u;
        goto label_1ca1f8;
    }
    ctx->pc = 0x1CA1F0u;
    {
        const bool branch_taken_0x1ca1f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA1F0u;
        // 0x1ca1f4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca1f0) {
            ctx->pc = 0x1CA1A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca1a0;
        }
    }
    ctx->pc = 0x1CA1F8u;
label_1ca1f8:
    // 0x1ca1f8: 0x2a210003  slti        $at, $s1, 0x3
    ctx->pc = 0x1ca1f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_1ca1fc:
    // 0x1ca1fc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1ca200:
    if (ctx->pc == 0x1CA200u) {
        ctx->pc = 0x1CA204u;
        goto label_1ca204;
    }
    ctx->pc = 0x1CA1FCu;
    {
        const bool branch_taken_0x1ca1fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca1fc) {
            ctx->pc = 0x1CA208u;
            goto label_1ca208;
        }
    }
    ctx->pc = 0x1CA204u;
label_1ca204:
    // 0x1ca204: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ca204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca208:
    // 0x1ca208: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1ca20c:
    if (ctx->pc == 0x1CA20Cu) {
        ctx->pc = 0x1CA210u;
        goto label_1ca210;
    }
    ctx->pc = 0x1CA208u;
    {
        const bool branch_taken_0x1ca208 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca208) {
            ctx->pc = 0x1CA238u;
            goto label_1ca238;
        }
    }
    ctx->pc = 0x1CA210u;
label_1ca210:
    // 0x1ca210: 0x87c30224  lh          $v1, 0x224($fp)
    ctx->pc = 0x1ca210u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 548)));
label_1ca214:
    // 0x1ca214: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1ca218:
    if (ctx->pc == 0x1CA218u) {
        ctx->pc = 0x1CA218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA214u;
        // 0x1ca218: 0x24640001  addiu       $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA21Cu;
        goto label_1ca21c;
    }
    ctx->pc = 0x1CA214u;
    {
        const bool branch_taken_0x1ca214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA214u;
        // 0x1ca218: 0x24640001  addiu       $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca214) {
            ctx->pc = 0x1CA220u;
            goto label_1ca220;
        }
    }
    ctx->pc = 0x1CA21Cu;
label_1ca21c:
    // 0x1ca21c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ca21cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca220:
    // 0x1ca220: 0x24030e10  addiu       $v1, $zero, 0xE10
    ctx->pc = 0x1ca220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3600));
label_1ca224:
    // 0x1ca224: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1ca224u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ca228:
    // 0x1ca228: 0x0  nop
    ctx->pc = 0x1ca228u;
    // NOP
label_1ca22c:
    // 0x1ca22c: 0x0  nop
    ctx->pc = 0x1ca22cu;
    // NOP
label_1ca230:
    // 0x1ca230: 0x1810  mfhi        $v1
    ctx->pc = 0x1ca230u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1ca234:
    // 0x1ca234: 0xa7c30224  sh          $v1, 0x224($fp)
    ctx->pc = 0x1ca234u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 548), (uint16_t)GPR_U32(ctx, 3));
label_1ca238:
    // 0x1ca238: 0x12000087  beqz        $s0, . + 4 + (0x87 << 2)
label_1ca23c:
    if (ctx->pc == 0x1CA23Cu) {
        ctx->pc = 0x1CA240u;
        goto label_1ca240;
    }
    ctx->pc = 0x1CA238u;
    {
        const bool branch_taken_0x1ca238 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca238) {
            ctx->pc = 0x1CA458u;
            { ctx->pc = 0x1ca458; return; }
        }
    }
    ctx->pc = 0x1CA240u;
label_1ca240:
    // 0x1ca240: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1ca240u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ca244:
    // 0x1ca244: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1ca244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ca248:
    // 0x1ca248: 0x0  nop
    ctx->pc = 0x1ca248u;
    // NOP
label_1ca24c:
    // 0x1ca24c: 0x2831021  addu        $v0, $s4, $v1
    ctx->pc = 0x1ca24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_1ca250:
    // 0x1ca250: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ca250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ca254:
    // 0x1ca254: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1ca258:
    if (ctx->pc == 0x1CA258u) {
        ctx->pc = 0x1CA25Cu;
        goto label_1ca25c;
    }
    ctx->pc = 0x1CA254u;
    {
        const bool branch_taken_0x1ca254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca254) {
            ctx->pc = 0x1CA268u;
            goto label_1ca268;
        }
    }
    ctx->pc = 0x1CA25Cu;
label_1ca25c:
    // 0x1ca25c: 0x9042023a  lbu         $v0, 0x23A($v0)
    ctx->pc = 0x1ca25cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 570)));
label_1ca260:
    // 0x1ca260: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1ca264:
    if (ctx->pc == 0x1CA264u) {
        ctx->pc = 0x1CA268u;
        goto label_1ca268;
    }
    ctx->pc = 0x1CA260u;
    {
        const bool branch_taken_0x1ca260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca260) {
            ctx->pc = 0x1CA278u;
            goto label_1ca278;
        }
    }
    ctx->pc = 0x1CA268u;
label_1ca268:
    // 0x1ca268: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ca268u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1ca26c:
    // 0x1ca26c: 0x2a020009  slti        $v0, $s0, 0x9
    ctx->pc = 0x1ca26cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
label_1ca270:
    // 0x1ca270: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_1ca274:
    if (ctx->pc == 0x1CA274u) {
        ctx->pc = 0x1CA274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA270u;
        // 0x1ca274: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA278u;
        goto label_1ca278;
    }
    ctx->pc = 0x1CA270u;
    {
        const bool branch_taken_0x1ca270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA270u;
        // 0x1ca274: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca270) {
            ctx->pc = 0x1CA248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca248;
        }
    }
    ctx->pc = 0x1CA278u;
label_1ca278:
    // 0x1ca278: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1ca278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1ca27c:
    // 0x1ca27c: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
label_1ca280:
    if (ctx->pc == 0x1CA280u) {
        ctx->pc = 0x1CA280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA27Cu;
        // 0x1ca280: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA284u;
        goto label_1ca284;
    }
    ctx->pc = 0x1CA27Cu;
    {
        const bool branch_taken_0x1ca27c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CA280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA27Cu;
        // 0x1ca280: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca27c) {
            ctx->pc = 0x1CA29Cu;
            goto label_1ca29c;
        }
    }
    ctx->pc = 0x1CA284u;
label_1ca284:
    // 0x1ca284: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1ca284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1ca288:
    // 0x1ca288: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x1ca288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_1ca28c:
    // 0x1ca28c: 0x90234af6  lbu         $v1, 0x4AF6($at)
    ctx->pc = 0x1ca28cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_1ca290:
    // 0x1ca290: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1ca294:
    if (ctx->pc == 0x1CA294u) {
        ctx->pc = 0x1CA298u;
        goto label_1ca298;
    }
    ctx->pc = 0x1CA290u;
    {
        const bool branch_taken_0x1ca290 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ca290) {
            ctx->pc = 0x1CA29Cu;
            goto label_1ca29c;
        }
    }
    ctx->pc = 0x1CA298u;
label_1ca298:
    // 0x1ca298: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x1ca298u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ca29c:
    // 0x1ca29c: 0xc08f0cc  jal         func_23C330
label_1ca2a0:
    if (ctx->pc == 0x1CA2A0u) {
        ctx->pc = 0x1CA2A4u;
        goto label_1ca2a4;
    }
    ctx->pc = 0x1CA29Cu;
    SET_GPR_U32(ctx, 31, 0x1CA2A4u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1CA2A4u;
label_1ca2a4:
    // 0x1ca2a4: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x1ca2a4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ca2a8:
    // 0x1ca2a8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1ca2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_1ca2ac:
    // 0x1ca2ac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ca2acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1ca2b0:
    // 0x1ca2b0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ca2b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1ca2b4:
    // 0x1ca2b4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1ca2b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1ca2b8:
    // 0x1ca2b8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1ca2b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1ca2bc:
    // 0x1ca2bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ca2bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ca2c0:
    // 0x1ca2c0: 0x0  nop
    ctx->pc = 0x1ca2c0u;
    // NOP
label_1ca2c4:
    // 0x1ca2c4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1ca2c4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1ca2c8:
    // 0x1ca2c8: 0x0  nop
    ctx->pc = 0x1ca2c8u;
    // NOP
label_1ca2cc:
    // 0x1ca2cc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ca2ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ca2d0:
    // 0x1ca2d0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1ca2d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1ca2d4:
    // 0x1ca2d4: 0x0  nop
    ctx->pc = 0x1ca2d4u;
    // NOP
label_1ca2d8:
    // 0x1ca2d8: 0x14600042  bnez        $v1, . + 4 + (0x42 << 2)
label_1ca2dc:
    if (ctx->pc == 0x1CA2DCu) {
        ctx->pc = 0x1CA2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA2D8u;
        // 0x1ca2dc: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA2E0u;
        goto label_1ca2e0;
    }
    ctx->pc = 0x1CA2D8u;
    {
        const bool branch_taken_0x1ca2d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA2D8u;
        // 0x1ca2dc: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca2d8) {
            ctx->pc = 0x1CA3E4u;
            goto label_1ca3e4;
        }
    }
    ctx->pc = 0x1CA2E0u;
label_1ca2e0:
    // 0x1ca2e0: 0xc072dd8  jal         func_1CB760
label_1ca2e4:
    if (ctx->pc == 0x1CA2E4u) {
        ctx->pc = 0x1CA2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA2E0u;
        // 0x1ca2e4: 0x92a40034  lbu         $a0, 0x34($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA2E8u;
        goto label_1ca2e8;
    }
    ctx->pc = 0x1CA2E0u;
    SET_GPR_U32(ctx, 31, 0x1CA2E8u);
    ctx->pc = 0x1CA2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA2E0u;
    // 0x1ca2e4: 0x92a40034  lbu         $a0, 0x34($s5) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB760u;
    { ctx->pc = 0x1cb760; return; }
    ctx->pc = 0x1CA2E8u;
label_1ca2e8:
    // 0x1ca2e8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1ca2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1ca2ec:
    // 0x1ca2ec: 0x10430016  beq         $v0, $v1, . + 4 + (0x16 << 2)
label_1ca2f0:
    if (ctx->pc == 0x1CA2F0u) {
        ctx->pc = 0x1CA2F4u;
        goto label_1ca2f4;
    }
    ctx->pc = 0x1CA2ECu;
    {
        const bool branch_taken_0x1ca2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ca2ec) {
            ctx->pc = 0x1CA348u;
            goto label_1ca348;
        }
    }
    ctx->pc = 0x1CA2F4u;
label_1ca2f4:
    // 0x1ca2f4: 0x92a50034  lbu         $a1, 0x34($s5)
    ctx->pc = 0x1ca2f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 52)));
label_1ca2f8:
    // 0x1ca2f8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1ca2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1ca2fc:
    // 0x1ca2fc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ca2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ca300:
    // 0x1ca300: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x1ca300u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_1ca304:
    // 0x1ca304: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1ca304u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1ca308:
    // 0x1ca308: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x1ca308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
label_1ca30c:
    // 0x1ca30c: 0x51200  sll         $v0, $a1, 8
    ctx->pc = 0x1ca30cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1ca310:
    // 0x1ca310: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x1ca310u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1ca314:
    // 0x1ca314: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1ca314u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1ca318:
    // 0x1ca318: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1ca318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1ca31c:
    // 0x1ca31c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ca31cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1ca320:
    // 0x1ca320: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1ca320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1ca324:
    // 0x1ca324: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1ca324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1ca328:
    // 0x1ca328: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ca328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ca32c:
    // 0x1ca32c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ca32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ca330:
    // 0x1ca330: 0x90620012  lbu         $v0, 0x12($v1)
    ctx->pc = 0x1ca330u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
label_1ca334:
    // 0x1ca334: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1ca338:
    if (ctx->pc == 0x1CA338u) {
        ctx->pc = 0x1CA33Cu;
        goto label_1ca33c;
    }
    ctx->pc = 0x1CA334u;
    {
        const bool branch_taken_0x1ca334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca334) {
            ctx->pc = 0x1CA348u;
            goto label_1ca348;
        }
    }
    ctx->pc = 0x1CA33Cu;
label_1ca33c:
    // 0x1ca33c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1ca33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1ca340:
    // 0x1ca340: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_1ca344:
    if (ctx->pc == 0x1CA344u) {
        ctx->pc = 0x1CA348u;
        goto label_1ca348;
    }
    ctx->pc = 0x1CA340u;
    {
        const bool branch_taken_0x1ca340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca340) {
            ctx->pc = 0x1CA3C0u;
            goto label_1ca3c0;
        }
    }
    ctx->pc = 0x1CA348u;
label_1ca348:
    // 0x1ca348: 0x92a50035  lbu         $a1, 0x35($s5)
    ctx->pc = 0x1ca348u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 53)));
label_1ca34c:
    // 0x1ca34c: 0xc0561b8  jal         func_1586E0
label_1ca350:
    if (ctx->pc == 0x1CA350u) {
        ctx->pc = 0x1CA350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA34Cu;
        // 0x1ca350: 0x92a40034  lbu         $a0, 0x34($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA354u;
        goto label_1ca354;
    }
    ctx->pc = 0x1CA34Cu;
    SET_GPR_U32(ctx, 31, 0x1CA354u);
    ctx->pc = 0x1CA350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA34Cu;
    // 0x1ca350: 0x92a40034  lbu         $a0, 0x34($s5) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1586E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1586E0u, 0x1CA34Cu, 0x1CA354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA354u;
label_1ca354:
    // 0x1ca354: 0x92a50034  lbu         $a1, 0x34($s5)
    ctx->pc = 0x1ca354u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 52)));
label_1ca358:
    // 0x1ca358: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1ca358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1ca35c:
    // 0x1ca35c: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1ca35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ca360:
    // 0x1ca360: 0x430c0  sll         $a2, $a0, 3
    ctx->pc = 0x1ca360u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1ca364:
    // 0x1ca364: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x1ca364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
label_1ca368:
    // 0x1ca368: 0x24632570  addiu       $v1, $v1, 0x2570
    ctx->pc = 0x1ca368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9584));
label_1ca36c:
    // 0x1ca36c: 0x52200  sll         $a0, $a1, 8
    ctx->pc = 0x1ca36cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1ca370:
    // 0x1ca370: 0x852823  subu        $a1, $a0, $a1
    ctx->pc = 0x1ca370u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1ca374:
    // 0x1ca374: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1ca374u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1ca378:
    // 0x1ca378: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1ca378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1ca37c:
    // 0x1ca37c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1ca37cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1ca380:
    // 0x1ca380: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ca380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1ca384:
    // 0x1ca384: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1ca384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1ca388:
    // 0x1ca388: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1ca388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1ca38c:
    // 0x1ca38c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ca38cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ca390:
    // 0x1ca390: 0x90830012  lbu         $v1, 0x12($a0)
    ctx->pc = 0x1ca390u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
label_1ca394:
    // 0x1ca394: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
label_1ca398:
    if (ctx->pc == 0x1CA398u) {
        ctx->pc = 0x1CA39Cu;
        goto label_1ca39c;
    }
    ctx->pc = 0x1CA394u;
    {
        const bool branch_taken_0x1ca394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca394) {
            ctx->pc = 0x1CA458u;
            { ctx->pc = 0x1ca458; return; }
        }
    }
    ctx->pc = 0x1CA39Cu;
label_1ca39c:
    // 0x1ca39c: 0x9486000a  lhu         $a2, 0xA($a0)
    ctx->pc = 0x1ca39cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
label_1ca3a0:
    // 0x1ca3a0: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x1ca3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1ca3a4:
    // 0x1ca3a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca3a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca3a8:
    // 0x1ca3a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ca3a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca3ac:
    // 0x1ca3ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ca3acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca3b0:
    // 0x1ca3b0: 0xc05d3e4  jal         func_174F90
label_1ca3b4:
    if (ctx->pc == 0x1CA3B4u) {
        ctx->pc = 0x1CA3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA3B0u;
        // 0x1ca3b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA3B8u;
        goto label_1ca3b8;
    }
    ctx->pc = 0x1CA3B0u;
    SET_GPR_U32(ctx, 31, 0x1CA3B8u);
    ctx->pc = 0x1CA3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA3B0u;
    // 0x1ca3b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x1CA3B0u, 0x1CA3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA3B8u;
label_1ca3b8:
    // 0x1ca3b8: 0x10000028  b           . + 4 + (0x28 << 2)
label_1ca3bc:
    if (ctx->pc == 0x1CA3BCu) {
        ctx->pc = 0x1CA3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA3B8u;
        // 0x1ca3bc: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA3C0u;
        goto label_1ca3c0;
    }
    ctx->pc = 0x1CA3B8u;
    {
        const bool branch_taken_0x1ca3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA3B8u;
        // 0x1ca3bc: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca3b8) {
            ctx->pc = 0x1CA45Cu;
            { ctx->pc = 0x1ca45c; return; }
        }
    }
    ctx->pc = 0x1CA3C0u;
label_1ca3c0:
    // 0x1ca3c0: 0x9466000a  lhu         $a2, 0xA($v1)
    ctx->pc = 0x1ca3c0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_1ca3c4:
    // 0x1ca3c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ca3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca3c8:
    // 0x1ca3c8: 0x24050039  addiu       $a1, $zero, 0x39
    ctx->pc = 0x1ca3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_1ca3cc:
    // 0x1ca3cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca3ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca3d0:
    // 0x1ca3d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ca3d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca3d4:
    // 0x1ca3d4: 0xc05d3e4  jal         func_174F90
label_1ca3d8:
    if (ctx->pc == 0x1CA3D8u) {
        ctx->pc = 0x1CA3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA3D4u;
        // 0x1ca3d8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA3DCu;
        goto label_1ca3dc;
    }
    ctx->pc = 0x1CA3D4u;
    SET_GPR_U32(ctx, 31, 0x1CA3DCu);
    ctx->pc = 0x1CA3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA3D4u;
    // 0x1ca3d8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x1CA3D4u, 0x1CA3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA3DCu;
label_1ca3dc:
    // 0x1ca3dc: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1ca3e0:
    if (ctx->pc == 0x1CA3E0u) {
        ctx->pc = 0x1CA3E4u;
        goto label_1ca3e4;
    }
    ctx->pc = 0x1CA3DCu;
    {
        const bool branch_taken_0x1ca3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca3dc) {
            ctx->pc = 0x1CA458u;
            { ctx->pc = 0x1ca458; return; }
        }
    }
    ctx->pc = 0x1CA3E4u;
label_1ca3e4:
    // 0x1ca3e4: 0x24650019  addiu       $a1, $v1, 0x19
    ctx->pc = 0x1ca3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 25));
label_1ca3e8:
    // 0x1ca3e8: 0x90244af6  lbu         $a0, 0x4AF6($at)
    ctx->pc = 0x1ca3e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_1ca3ec:
    // 0x1ca3ec: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x1ca3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_1ca3f0:
    // 0x1ca3f0: 0x14830019  bne         $a0, $v1, . + 4 + (0x19 << 2)
label_1ca3f4:
    if (ctx->pc == 0x1CA3F4u) {
        ctx->pc = 0x1CA3F8u;
        goto label_1ca3f8;
    }
    ctx->pc = 0x1CA3F0u;
    {
        const bool branch_taken_0x1ca3f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ca3f0) {
            ctx->pc = 0x1CA458u;
            { ctx->pc = 0x1ca458; return; }
        }
    }
    ctx->pc = 0x1CA3F8u;
label_1ca3f8:
    // 0x1ca3f8: 0x93c60238  lbu         $a2, 0x238($fp)
    ctx->pc = 0x1ca3f8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 568)));
label_1ca3fc:
    // 0x1ca3fc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1ca3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1ca400:
    // 0x1ca400: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1ca400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1ca404:
    // 0x1ca404: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1ca404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_1ca408:
    // 0x1ca408: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ca408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ca40c:
    // 0x1ca40c: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x1ca40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_1ca410:
    // 0x1ca410: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ca410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca414:
    // 0x1ca414: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ca414u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ca418u;
    return;
}

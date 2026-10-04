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


void FUN_0019b5e8_part14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1a1b78u: goto label_1a1b78;
        case 0x1a1b7cu: goto label_1a1b7c;
        case 0x1a1b80u: goto label_1a1b80;
        case 0x1a1b84u: goto label_1a1b84;
        case 0x1a1b88u: goto label_1a1b88;
        case 0x1a1b8cu: goto label_1a1b8c;
        case 0x1a1b90u: goto label_1a1b90;
        case 0x1a1b94u: goto label_1a1b94;
        case 0x1a1b98u: goto label_1a1b98;
        case 0x1a1b9cu: goto label_1a1b9c;
        case 0x1a1ba0u: goto label_1a1ba0;
        case 0x1a1ba4u: goto label_1a1ba4;
        case 0x1a1ba8u: goto label_1a1ba8;
        case 0x1a1bacu: goto label_1a1bac;
        case 0x1a1bb0u: goto label_1a1bb0;
        case 0x1a1bb4u: goto label_1a1bb4;
        case 0x1a1bb8u: goto label_1a1bb8;
        case 0x1a1bbcu: goto label_1a1bbc;
        case 0x1a1bc0u: goto label_1a1bc0;
        case 0x1a1bc4u: goto label_1a1bc4;
        case 0x1a1bc8u: goto label_1a1bc8;
        case 0x1a1bccu: goto label_1a1bcc;
        case 0x1a1bd0u: goto label_1a1bd0;
        case 0x1a1bd4u: goto label_1a1bd4;
        case 0x1a1bd8u: goto label_1a1bd8;
        case 0x1a1bdcu: goto label_1a1bdc;
        case 0x1a1be0u: goto label_1a1be0;
        case 0x1a1be4u: goto label_1a1be4;
        case 0x1a1be8u: goto label_1a1be8;
        case 0x1a1becu: goto label_1a1bec;
        case 0x1a1bf0u: goto label_1a1bf0;
        case 0x1a1bf4u: goto label_1a1bf4;
        case 0x1a1bf8u: goto label_1a1bf8;
        case 0x1a1bfcu: goto label_1a1bfc;
        case 0x1a1c00u: goto label_1a1c00;
        case 0x1a1c04u: goto label_1a1c04;
        case 0x1a1c08u: goto label_1a1c08;
        case 0x1a1c0cu: goto label_1a1c0c;
        case 0x1a1c10u: goto label_1a1c10;
        case 0x1a1c14u: goto label_1a1c14;
        case 0x1a1c18u: goto label_1a1c18;
        case 0x1a1c1cu: goto label_1a1c1c;
        case 0x1a1c20u: goto label_1a1c20;
        case 0x1a1c24u: goto label_1a1c24;
        case 0x1a1c28u: goto label_1a1c28;
        case 0x1a1c2cu: goto label_1a1c2c;
        case 0x1a1c30u: goto label_1a1c30;
        case 0x1a1c34u: goto label_1a1c34;
        case 0x1a1c38u: goto label_1a1c38;
        case 0x1a1c3cu: goto label_1a1c3c;
        case 0x1a1c40u: goto label_1a1c40;
        case 0x1a1c44u: goto label_1a1c44;
        case 0x1a1c48u: goto label_1a1c48;
        case 0x1a1c4cu: goto label_1a1c4c;
        case 0x1a1c50u: goto label_1a1c50;
        case 0x1a1c54u: goto label_1a1c54;
        case 0x1a1c58u: goto label_1a1c58;
        case 0x1a1c5cu: goto label_1a1c5c;
        case 0x1a1c60u: goto label_1a1c60;
        case 0x1a1c64u: goto label_1a1c64;
        case 0x1a1c68u: goto label_1a1c68;
        case 0x1a1c6cu: goto label_1a1c6c;
        case 0x1a1c70u: goto label_1a1c70;
        case 0x1a1c74u: goto label_1a1c74;
        case 0x1a1c78u: goto label_1a1c78;
        case 0x1a1c7cu: goto label_1a1c7c;
        case 0x1a1c80u: goto label_1a1c80;
        case 0x1a1c84u: goto label_1a1c84;
        case 0x1a1c88u: goto label_1a1c88;
        case 0x1a1c8cu: goto label_1a1c8c;
        case 0x1a1c90u: goto label_1a1c90;
        case 0x1a1c94u: goto label_1a1c94;
        case 0x1a1c98u: goto label_1a1c98;
        case 0x1a1c9cu: goto label_1a1c9c;
        case 0x1a1ca0u: goto label_1a1ca0;
        case 0x1a1ca4u: goto label_1a1ca4;
        case 0x1a1ca8u: goto label_1a1ca8;
        case 0x1a1cacu: goto label_1a1cac;
        case 0x1a1cb0u: goto label_1a1cb0;
        case 0x1a1cb4u: goto label_1a1cb4;
        case 0x1a1cb8u: goto label_1a1cb8;
        case 0x1a1cbcu: goto label_1a1cbc;
        case 0x1a1cc0u: goto label_1a1cc0;
        case 0x1a1cc4u: goto label_1a1cc4;
        case 0x1a1cc8u: goto label_1a1cc8;
        case 0x1a1cccu: goto label_1a1ccc;
        case 0x1a1cd0u: goto label_1a1cd0;
        case 0x1a1cd4u: goto label_1a1cd4;
        case 0x1a1cd8u: goto label_1a1cd8;
        case 0x1a1cdcu: goto label_1a1cdc;
        case 0x1a1ce0u: goto label_1a1ce0;
        case 0x1a1ce4u: goto label_1a1ce4;
        case 0x1a1ce8u: goto label_1a1ce8;
        case 0x1a1cecu: goto label_1a1cec;
        case 0x1a1cf0u: goto label_1a1cf0;
        case 0x1a1cf4u: goto label_1a1cf4;
        case 0x1a1cf8u: goto label_1a1cf8;
        case 0x1a1cfcu: goto label_1a1cfc;
        case 0x1a1d00u: goto label_1a1d00;
        case 0x1a1d04u: goto label_1a1d04;
        case 0x1a1d08u: goto label_1a1d08;
        case 0x1a1d0cu: goto label_1a1d0c;
        case 0x1a1d10u: goto label_1a1d10;
        case 0x1a1d14u: goto label_1a1d14;
        case 0x1a1d18u: goto label_1a1d18;
        case 0x1a1d1cu: goto label_1a1d1c;
        case 0x1a1d20u: goto label_1a1d20;
        case 0x1a1d24u: goto label_1a1d24;
        case 0x1a1d28u: goto label_1a1d28;
        case 0x1a1d2cu: goto label_1a1d2c;
        case 0x1a1d30u: goto label_1a1d30;
        case 0x1a1d34u: goto label_1a1d34;
        case 0x1a1d38u: goto label_1a1d38;
        case 0x1a1d3cu: goto label_1a1d3c;
        case 0x1a1d40u: goto label_1a1d40;
        case 0x1a1d44u: goto label_1a1d44;
        case 0x1a1d48u: goto label_1a1d48;
        case 0x1a1d4cu: goto label_1a1d4c;
        case 0x1a1d50u: goto label_1a1d50;
        case 0x1a1d54u: goto label_1a1d54;
        case 0x1a1d58u: goto label_1a1d58;
        case 0x1a1d5cu: goto label_1a1d5c;
        case 0x1a1d60u: goto label_1a1d60;
        case 0x1a1d64u: goto label_1a1d64;
        case 0x1a1d68u: goto label_1a1d68;
        case 0x1a1d6cu: goto label_1a1d6c;
        case 0x1a1d70u: goto label_1a1d70;
        case 0x1a1d74u: goto label_1a1d74;
        case 0x1a1d78u: goto label_1a1d78;
        case 0x1a1d7cu: goto label_1a1d7c;
        case 0x1a1d80u: goto label_1a1d80;
        case 0x1a1d84u: goto label_1a1d84;
        case 0x1a1d88u: goto label_1a1d88;
        case 0x1a1d8cu: goto label_1a1d8c;
        case 0x1a1d90u: goto label_1a1d90;
        case 0x1a1d94u: goto label_1a1d94;
        case 0x1a1d98u: goto label_1a1d98;
        case 0x1a1d9cu: goto label_1a1d9c;
        case 0x1a1da0u: goto label_1a1da0;
        case 0x1a1da4u: goto label_1a1da4;
        case 0x1a1da8u: goto label_1a1da8;
        case 0x1a1dacu: goto label_1a1dac;
        case 0x1a1db0u: goto label_1a1db0;
        case 0x1a1db4u: goto label_1a1db4;
        case 0x1a1db8u: goto label_1a1db8;
        case 0x1a1dbcu: goto label_1a1dbc;
        case 0x1a1dc0u: goto label_1a1dc0;
        case 0x1a1dc4u: goto label_1a1dc4;
        case 0x1a1dc8u: goto label_1a1dc8;
        case 0x1a1dccu: goto label_1a1dcc;
        case 0x1a1dd0u: goto label_1a1dd0;
        case 0x1a1dd4u: goto label_1a1dd4;
        case 0x1a1dd8u: goto label_1a1dd8;
        case 0x1a1ddcu: goto label_1a1ddc;
        case 0x1a1de0u: goto label_1a1de0;
        case 0x1a1de4u: goto label_1a1de4;
        case 0x1a1de8u: goto label_1a1de8;
        case 0x1a1decu: goto label_1a1dec;
        case 0x1a1df0u: goto label_1a1df0;
        case 0x1a1df4u: goto label_1a1df4;
        case 0x1a1df8u: goto label_1a1df8;
        case 0x1a1dfcu: goto label_1a1dfc;
        case 0x1a1e00u: goto label_1a1e00;
        case 0x1a1e04u: goto label_1a1e04;
        case 0x1a1e08u: goto label_1a1e08;
        case 0x1a1e0cu: goto label_1a1e0c;
        case 0x1a1e10u: goto label_1a1e10;
        case 0x1a1e14u: goto label_1a1e14;
        case 0x1a1e18u: goto label_1a1e18;
        case 0x1a1e1cu: goto label_1a1e1c;
        case 0x1a1e20u: goto label_1a1e20;
        case 0x1a1e24u: goto label_1a1e24;
        case 0x1a1e28u: goto label_1a1e28;
        case 0x1a1e2cu: goto label_1a1e2c;
        case 0x1a1e30u: goto label_1a1e30;
        case 0x1a1e34u: goto label_1a1e34;
        case 0x1a1e38u: goto label_1a1e38;
        case 0x1a1e3cu: goto label_1a1e3c;
        case 0x1a1e40u: goto label_1a1e40;
        case 0x1a1e44u: goto label_1a1e44;
        case 0x1a1e48u: goto label_1a1e48;
        case 0x1a1e4cu: goto label_1a1e4c;
        case 0x1a1e50u: goto label_1a1e50;
        case 0x1a1e54u: goto label_1a1e54;
        case 0x1a1e58u: goto label_1a1e58;
        case 0x1a1e5cu: goto label_1a1e5c;
        case 0x1a1e60u: goto label_1a1e60;
        case 0x1a1e64u: goto label_1a1e64;
        case 0x1a1e68u: goto label_1a1e68;
        case 0x1a1e6cu: goto label_1a1e6c;
        case 0x1a1e70u: goto label_1a1e70;
        case 0x1a1e74u: goto label_1a1e74;
        case 0x1a1e78u: goto label_1a1e78;
        case 0x1a1e7cu: goto label_1a1e7c;
        case 0x1a1e80u: goto label_1a1e80;
        case 0x1a1e84u: goto label_1a1e84;
        case 0x1a1e88u: goto label_1a1e88;
        case 0x1a1e8cu: goto label_1a1e8c;
        case 0x1a1e90u: goto label_1a1e90;
        case 0x1a1e94u: goto label_1a1e94;
        case 0x1a1e98u: goto label_1a1e98;
        case 0x1a1e9cu: goto label_1a1e9c;
        case 0x1a1ea0u: goto label_1a1ea0;
        case 0x1a1ea4u: goto label_1a1ea4;
        case 0x1a1ea8u: goto label_1a1ea8;
        case 0x1a1eacu: goto label_1a1eac;
        case 0x1a1eb0u: goto label_1a1eb0;
        case 0x1a1eb4u: goto label_1a1eb4;
        case 0x1a1eb8u: goto label_1a1eb8;
        case 0x1a1ebcu: goto label_1a1ebc;
        case 0x1a1ec0u: goto label_1a1ec0;
        case 0x1a1ec4u: goto label_1a1ec4;
        case 0x1a1ec8u: goto label_1a1ec8;
        case 0x1a1eccu: goto label_1a1ecc;
        case 0x1a1ed0u: goto label_1a1ed0;
        case 0x1a1ed4u: goto label_1a1ed4;
        case 0x1a1ed8u: goto label_1a1ed8;
        case 0x1a1edcu: goto label_1a1edc;
        case 0x1a1ee0u: goto label_1a1ee0;
        case 0x1a1ee4u: goto label_1a1ee4;
        case 0x1a1ee8u: goto label_1a1ee8;
        case 0x1a1eecu: goto label_1a1eec;
        case 0x1a1ef0u: goto label_1a1ef0;
        case 0x1a1ef4u: goto label_1a1ef4;
        case 0x1a1ef8u: goto label_1a1ef8;
        case 0x1a1efcu: goto label_1a1efc;
        case 0x1a1f00u: goto label_1a1f00;
        case 0x1a1f04u: goto label_1a1f04;
        case 0x1a1f08u: goto label_1a1f08;
        case 0x1a1f0cu: goto label_1a1f0c;
        case 0x1a1f10u: goto label_1a1f10;
        case 0x1a1f14u: goto label_1a1f14;
        case 0x1a1f18u: goto label_1a1f18;
        case 0x1a1f1cu: goto label_1a1f1c;
        case 0x1a1f20u: goto label_1a1f20;
        case 0x1a1f24u: goto label_1a1f24;
        case 0x1a1f28u: goto label_1a1f28;
        case 0x1a1f2cu: goto label_1a1f2c;
        case 0x1a1f30u: goto label_1a1f30;
        case 0x1a1f34u: goto label_1a1f34;
        case 0x1a1f38u: goto label_1a1f38;
        case 0x1a1f3cu: goto label_1a1f3c;
        case 0x1a1f40u: goto label_1a1f40;
        case 0x1a1f44u: goto label_1a1f44;
        case 0x1a1f48u: goto label_1a1f48;
        case 0x1a1f4cu: goto label_1a1f4c;
        case 0x1a1f50u: goto label_1a1f50;
        case 0x1a1f54u: goto label_1a1f54;
        case 0x1a1f58u: goto label_1a1f58;
        case 0x1a1f5cu: goto label_1a1f5c;
        case 0x1a1f60u: goto label_1a1f60;
        case 0x1a1f64u: goto label_1a1f64;
        case 0x1a1f68u: goto label_1a1f68;
        case 0x1a1f6cu: goto label_1a1f6c;
        case 0x1a1f70u: goto label_1a1f70;
        case 0x1a1f74u: goto label_1a1f74;
        case 0x1a1f78u: goto label_1a1f78;
        case 0x1a1f7cu: goto label_1a1f7c;
        case 0x1a1f80u: goto label_1a1f80;
        case 0x1a1f84u: goto label_1a1f84;
        case 0x1a1f88u: goto label_1a1f88;
        case 0x1a1f8cu: goto label_1a1f8c;
        case 0x1a1f90u: goto label_1a1f90;
        case 0x1a1f94u: goto label_1a1f94;
        case 0x1a1f98u: goto label_1a1f98;
        case 0x1a1f9cu: goto label_1a1f9c;
        case 0x1a1fa0u: goto label_1a1fa0;
        case 0x1a1fa4u: goto label_1a1fa4;
        case 0x1a1fa8u: goto label_1a1fa8;
        case 0x1a1facu: goto label_1a1fac;
        case 0x1a1fb0u: goto label_1a1fb0;
        case 0x1a1fb4u: goto label_1a1fb4;
        case 0x1a1fb8u: goto label_1a1fb8;
        case 0x1a1fbcu: goto label_1a1fbc;
        case 0x1a1fc0u: goto label_1a1fc0;
        case 0x1a1fc4u: goto label_1a1fc4;
        case 0x1a1fc8u: goto label_1a1fc8;
        case 0x1a1fccu: goto label_1a1fcc;
        case 0x1a1fd0u: goto label_1a1fd0;
        case 0x1a1fd4u: goto label_1a1fd4;
        case 0x1a1fd8u: goto label_1a1fd8;
        case 0x1a1fdcu: goto label_1a1fdc;
        case 0x1a1fe0u: goto label_1a1fe0;
        case 0x1a1fe4u: goto label_1a1fe4;
        case 0x1a1fe8u: goto label_1a1fe8;
        case 0x1a1fecu: goto label_1a1fec;
        case 0x1a1ff0u: goto label_1a1ff0;
        case 0x1a1ff4u: goto label_1a1ff4;
        case 0x1a1ff8u: goto label_1a1ff8;
        case 0x1a1ffcu: goto label_1a1ffc;
        case 0x1a2000u: goto label_1a2000;
        case 0x1a2004u: goto label_1a2004;
        case 0x1a2008u: goto label_1a2008;
        case 0x1a200cu: goto label_1a200c;
        case 0x1a2010u: goto label_1a2010;
        case 0x1a2014u: goto label_1a2014;
        case 0x1a2018u: goto label_1a2018;
        case 0x1a201cu: goto label_1a201c;
        case 0x1a2020u: goto label_1a2020;
        case 0x1a2024u: goto label_1a2024;
        case 0x1a2028u: goto label_1a2028;
        case 0x1a202cu: goto label_1a202c;
        case 0x1a2030u: goto label_1a2030;
        case 0x1a2034u: goto label_1a2034;
        case 0x1a2038u: goto label_1a2038;
        case 0x1a203cu: goto label_1a203c;
        case 0x1a2040u: goto label_1a2040;
        case 0x1a2044u: goto label_1a2044;
        case 0x1a2048u: goto label_1a2048;
        case 0x1a204cu: goto label_1a204c;
        case 0x1a2050u: goto label_1a2050;
        case 0x1a2054u: goto label_1a2054;
        case 0x1a2058u: goto label_1a2058;
        case 0x1a205cu: goto label_1a205c;
        case 0x1a2060u: goto label_1a2060;
        case 0x1a2064u: goto label_1a2064;
        case 0x1a2068u: goto label_1a2068;
        case 0x1a206cu: goto label_1a206c;
        case 0x1a2070u: goto label_1a2070;
        case 0x1a2074u: goto label_1a2074;
        case 0x1a2078u: goto label_1a2078;
        case 0x1a207cu: goto label_1a207c;
        case 0x1a2080u: goto label_1a2080;
        case 0x1a2084u: goto label_1a2084;
        case 0x1a2088u: goto label_1a2088;
        case 0x1a208cu: goto label_1a208c;
        case 0x1a2090u: goto label_1a2090;
        case 0x1a2094u: goto label_1a2094;
        case 0x1a2098u: goto label_1a2098;
        case 0x1a209cu: goto label_1a209c;
        case 0x1a20a0u: goto label_1a20a0;
        case 0x1a20a4u: goto label_1a20a4;
        case 0x1a20a8u: goto label_1a20a8;
        case 0x1a20acu: goto label_1a20ac;
        case 0x1a20b0u: goto label_1a20b0;
        case 0x1a20b4u: goto label_1a20b4;
        case 0x1a20b8u: goto label_1a20b8;
        case 0x1a20bcu: goto label_1a20bc;
        case 0x1a20c0u: goto label_1a20c0;
        case 0x1a20c4u: goto label_1a20c4;
        case 0x1a20c8u: goto label_1a20c8;
        case 0x1a20ccu: goto label_1a20cc;
        case 0x1a20d0u: goto label_1a20d0;
        case 0x1a20d4u: goto label_1a20d4;
        case 0x1a20d8u: goto label_1a20d8;
        case 0x1a20dcu: goto label_1a20dc;
        case 0x1a20e0u: goto label_1a20e0;
        case 0x1a20e4u: goto label_1a20e4;
        case 0x1a20e8u: goto label_1a20e8;
        case 0x1a20ecu: goto label_1a20ec;
        case 0x1a20f0u: goto label_1a20f0;
        case 0x1a20f4u: goto label_1a20f4;
        case 0x1a20f8u: goto label_1a20f8;
        case 0x1a20fcu: goto label_1a20fc;
        case 0x1a2100u: goto label_1a2100;
        case 0x1a2104u: goto label_1a2104;
        case 0x1a2108u: goto label_1a2108;
        case 0x1a210cu: goto label_1a210c;
        case 0x1a2110u: goto label_1a2110;
        case 0x1a2114u: goto label_1a2114;
        case 0x1a2118u: goto label_1a2118;
        case 0x1a211cu: goto label_1a211c;
        case 0x1a2120u: goto label_1a2120;
        case 0x1a2124u: goto label_1a2124;
        case 0x1a2128u: goto label_1a2128;
        case 0x1a212cu: goto label_1a212c;
        case 0x1a2130u: goto label_1a2130;
        case 0x1a2134u: goto label_1a2134;
        case 0x1a2138u: goto label_1a2138;
        case 0x1a213cu: goto label_1a213c;
        case 0x1a2140u: goto label_1a2140;
        case 0x1a2144u: goto label_1a2144;
        case 0x1a2148u: goto label_1a2148;
        case 0x1a214cu: goto label_1a214c;
        case 0x1a2150u: goto label_1a2150;
        case 0x1a2154u: goto label_1a2154;
        case 0x1a2158u: goto label_1a2158;
        case 0x1a215cu: goto label_1a215c;
        case 0x1a2160u: goto label_1a2160;
        case 0x1a2164u: goto label_1a2164;
        case 0x1a2168u: goto label_1a2168;
        case 0x1a216cu: goto label_1a216c;
        case 0x1a2170u: goto label_1a2170;
        case 0x1a2174u: goto label_1a2174;
        case 0x1a2178u: goto label_1a2178;
        case 0x1a217cu: goto label_1a217c;
        case 0x1a2180u: goto label_1a2180;
        case 0x1a2184u: goto label_1a2184;
        case 0x1a2188u: goto label_1a2188;
        case 0x1a218cu: goto label_1a218c;
        case 0x1a2190u: goto label_1a2190;
        case 0x1a2194u: goto label_1a2194;
        case 0x1a2198u: goto label_1a2198;
        case 0x1a219cu: goto label_1a219c;
        case 0x1a21a0u: goto label_1a21a0;
        case 0x1a21a4u: goto label_1a21a4;
        case 0x1a21a8u: goto label_1a21a8;
        case 0x1a21acu: goto label_1a21ac;
        case 0x1a21b0u: goto label_1a21b0;
        case 0x1a21b4u: goto label_1a21b4;
        case 0x1a21b8u: goto label_1a21b8;
        case 0x1a21bcu: goto label_1a21bc;
        case 0x1a21c0u: goto label_1a21c0;
        case 0x1a21c4u: goto label_1a21c4;
        case 0x1a21c8u: goto label_1a21c8;
        case 0x1a21ccu: goto label_1a21cc;
        case 0x1a21d0u: goto label_1a21d0;
        case 0x1a21d4u: goto label_1a21d4;
        case 0x1a21d8u: goto label_1a21d8;
        case 0x1a21dcu: goto label_1a21dc;
        case 0x1a21e0u: goto label_1a21e0;
        case 0x1a21e4u: goto label_1a21e4;
        case 0x1a21e8u: goto label_1a21e8;
        case 0x1a21ecu: goto label_1a21ec;
        case 0x1a21f0u: goto label_1a21f0;
        case 0x1a21f4u: goto label_1a21f4;
        case 0x1a21f8u: goto label_1a21f8;
        case 0x1a21fcu: goto label_1a21fc;
        case 0x1a2200u: goto label_1a2200;
        case 0x1a2204u: goto label_1a2204;
        case 0x1a2208u: goto label_1a2208;
        case 0x1a220cu: goto label_1a220c;
        case 0x1a2210u: goto label_1a2210;
        case 0x1a2214u: goto label_1a2214;
        case 0x1a2218u: goto label_1a2218;
        case 0x1a221cu: goto label_1a221c;
        case 0x1a2220u: goto label_1a2220;
        case 0x1a2224u: goto label_1a2224;
        case 0x1a2228u: goto label_1a2228;
        case 0x1a222cu: goto label_1a222c;
        case 0x1a2230u: goto label_1a2230;
        case 0x1a2234u: goto label_1a2234;
        case 0x1a2238u: goto label_1a2238;
        case 0x1a223cu: goto label_1a223c;
        case 0x1a2240u: goto label_1a2240;
        case 0x1a2244u: goto label_1a2244;
        case 0x1a2248u: goto label_1a2248;
        case 0x1a224cu: goto label_1a224c;
        case 0x1a2250u: goto label_1a2250;
        case 0x1a2254u: goto label_1a2254;
        case 0x1a2258u: goto label_1a2258;
        case 0x1a225cu: goto label_1a225c;
        case 0x1a2260u: goto label_1a2260;
        case 0x1a2264u: goto label_1a2264;
        case 0x1a2268u: goto label_1a2268;
        case 0x1a226cu: goto label_1a226c;
        case 0x1a2270u: goto label_1a2270;
        case 0x1a2274u: goto label_1a2274;
        case 0x1a2278u: goto label_1a2278;
        case 0x1a227cu: goto label_1a227c;
        case 0x1a2280u: goto label_1a2280;
        case 0x1a2284u: goto label_1a2284;
        case 0x1a2288u: goto label_1a2288;
        case 0x1a228cu: goto label_1a228c;
        case 0x1a2290u: goto label_1a2290;
        case 0x1a2294u: goto label_1a2294;
        case 0x1a2298u: goto label_1a2298;
        case 0x1a229cu: goto label_1a229c;
        case 0x1a22a0u: goto label_1a22a0;
        case 0x1a22a4u: goto label_1a22a4;
        case 0x1a22a8u: goto label_1a22a8;
        case 0x1a22acu: goto label_1a22ac;
        case 0x1a22b0u: goto label_1a22b0;
        case 0x1a22b4u: goto label_1a22b4;
        case 0x1a22b8u: goto label_1a22b8;
        case 0x1a22bcu: goto label_1a22bc;
        case 0x1a22c0u: goto label_1a22c0;
        case 0x1a22c4u: goto label_1a22c4;
        case 0x1a22c8u: goto label_1a22c8;
        case 0x1a22ccu: goto label_1a22cc;
        case 0x1a22d0u: goto label_1a22d0;
        case 0x1a22d4u: goto label_1a22d4;
        case 0x1a22d8u: goto label_1a22d8;
        case 0x1a22dcu: goto label_1a22dc;
        case 0x1a22e0u: goto label_1a22e0;
        case 0x1a22e4u: goto label_1a22e4;
        case 0x1a22e8u: goto label_1a22e8;
        case 0x1a22ecu: goto label_1a22ec;
        case 0x1a22f0u: goto label_1a22f0;
        case 0x1a22f4u: goto label_1a22f4;
        case 0x1a22f8u: goto label_1a22f8;
        case 0x1a22fcu: goto label_1a22fc;
        case 0x1a2300u: goto label_1a2300;
        case 0x1a2304u: goto label_1a2304;
        case 0x1a2308u: goto label_1a2308;
        case 0x1a230cu: goto label_1a230c;
        case 0x1a2310u: goto label_1a2310;
        case 0x1a2314u: goto label_1a2314;
        case 0x1a2318u: goto label_1a2318;
        case 0x1a231cu: goto label_1a231c;
        case 0x1a2320u: goto label_1a2320;
        case 0x1a2324u: goto label_1a2324;
        case 0x1a2328u: goto label_1a2328;
        case 0x1a232cu: goto label_1a232c;
        case 0x1a2330u: goto label_1a2330;
        case 0x1a2334u: goto label_1a2334;
        case 0x1a2338u: goto label_1a2338;
        case 0x1a233cu: goto label_1a233c;
        case 0x1a2340u: goto label_1a2340;
        case 0x1a2344u: goto label_1a2344;
        default: return;
    }

label_1a1b78:
    if (ctx->pc == 0x1A1B78u) {
        ctx->pc = 0x1A1B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B74u;
        // 0x1a1b78: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1B7Cu;
        goto label_1a1b7c;
    }
    ctx->pc = 0x1A1B74u;
    {
        const bool branch_taken_0x1a1b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B74u;
        // 0x1a1b78: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1b74) {
            ctx->pc = 0x1A1B80u;
            goto label_1a1b80;
        }
    }
    ctx->pc = 0x1A1B7Cu;
label_1a1b7c:
    // 0x1a1b7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a1b7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1b80:
    // 0x1a1b80: 0x54e80008  bnel        $a3, $t0, . + 4 + (0x8 << 2)
label_1a1b84:
    if (ctx->pc == 0x1A1B84u) {
        ctx->pc = 0x1A1B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B80u;
        // 0x1a1b84: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1B88u;
        goto label_1a1b88;
    }
    ctx->pc = 0x1A1B80u;
    {
        const bool branch_taken_0x1a1b80 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        if (branch_taken_0x1a1b80) {
            ctx->pc = 0x1A1B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1B80u;
            // 0x1a1b84: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1BA4u;
            goto label_1a1ba4;
        }
    }
    ctx->pc = 0x1A1B88u;
label_1a1b88:
    // 0x1a1b88: 0x1a21024  and         $v0, $t5, $v0
    ctx->pc = 0x1a1b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & GPR_U64(ctx, 2));
label_1a1b8c:
    // 0x1a1b8c: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x1a1b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
label_1a1b90:
    // 0x1a1b90: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a1b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1a1b94:
    // 0x1a1b94: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1a1b94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1a1b98:
    // 0x1a1b98: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1a1b98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a1b9c:
    // 0x1a1b9c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1a1b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1a1ba0:
    // 0x1a1ba0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1a1ba0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1a1ba4:
    // 0x1a1ba4: 0x2d22000a  sltiu       $v0, $t1, 0xA
    ctx->pc = 0x1a1ba4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_1a1ba8:
    // 0x1a1ba8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1a1bac:
    if (ctx->pc == 0x1A1BACu) {
        ctx->pc = 0x1A1BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1BA8u;
        // 0x1a1bac: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1BB0u;
        goto label_1a1bb0;
    }
    ctx->pc = 0x1A1BA8u;
    {
        const bool branch_taken_0x1a1ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1BA8u;
        // 0x1a1bac: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ba8) {
            ctx->pc = 0x1A1BB8u;
            goto label_1a1bb8;
        }
    }
    ctx->pc = 0x1A1BB0u;
label_1a1bb0:
    // 0x1a1bb0: 0x5140ffb9  beql        $t2, $zero, . + 4 + (-0x47 << 2)
label_1a1bb4:
    if (ctx->pc == 0x1A1BB4u) {
        ctx->pc = 0x1A1BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1BB0u;
        // 0x1a1bb4: 0xdc670008  ld          $a3, 0x8($v1) (Delay Slot)
        SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1BB8u;
        goto label_1a1bb8;
    }
    ctx->pc = 0x1A1BB0u;
    {
        const bool branch_taken_0x1a1bb0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1bb0) {
            ctx->pc = 0x1A1BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1BB0u;
            // 0x1a1bb4: 0xdc670008  ld          $a3, 0x8($v1) (Delay Slot)
            SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1a1a98; return; }
        }
    }
    ctx->pc = 0x1A1BB8u;
label_1a1bb8:
    // 0x1a1bb8: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x1a1bb8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1a1bbc:
    // 0x1a1bbc: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x1a1bbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1a1bc0:
    // 0x1a1bc0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1a1bc0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a1bc4:
    // 0x1a1bc4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1a1bc4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a1bc8:
    // 0x1a1bc8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1a1bc8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a1bcc:
    // 0x1a1bcc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a1bccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a1bd0:
    // 0x1a1bd0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a1bd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a1bd4:
    // 0x1a1bd4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a1bd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a1bd8:
    // 0x1a1bd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a1bd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a1bdc:
    // 0x1a1bdc: 0x3e00008  jr          $ra
label_1a1be0:
    if (ctx->pc == 0x1A1BE0u) {
        ctx->pc = 0x1A1BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1BDCu;
        // 0x1a1be0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1BE4u;
        goto label_1a1be4;
    }
    ctx->pc = 0x1A1BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1BDCu;
        // 0x1a1be0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1BE4u;
label_1a1be4:
    // 0x1a1be4: 0x0  nop
    ctx->pc = 0x1a1be4u;
    // NOP
label_1a1be8:
    // 0x1a1be8: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1a1be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_1a1bec:
    // 0x1a1bec: 0xffb70120  sd          $s7, 0x120($sp)
    ctx->pc = 0x1a1becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 23));
label_1a1bf0:
    // 0x1a1bf0: 0xffb50100  sd          $s5, 0x100($sp)
    ctx->pc = 0x1a1bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 21));
label_1a1bf4:
    // 0x1a1bf4: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x1a1bf4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a1bf8:
    // 0x1a1bf8: 0xffb300e0  sd          $s3, 0xE0($sp)
    ctx->pc = 0x1a1bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 19));
label_1a1bfc:
    // 0x1a1bfc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a1bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a1c00:
    // 0x1a1c00: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x1a1c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
label_1a1c04:
    // 0x1a1c04: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1a1c04u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a1c08:
    // 0x1a1c08: 0xffb100c0  sd          $s1, 0xC0($sp)
    ctx->pc = 0x1a1c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 17));
label_1a1c0c:
    // 0x1a1c0c: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1a1c0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a1c10:
    // 0x1a1c10: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x1a1c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
label_1a1c14:
    // 0x1a1c14: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a1c14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1c18:
    // 0x1a1c18: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x1a1c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
label_1a1c1c:
    // 0x1a1c1c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1a1c1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a1c20:
    // 0x1a1c20: 0xffbe0130  sd          $fp, 0x130($sp)
    ctx->pc = 0x1a1c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 30));
label_1a1c24:
    // 0x1a1c24: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1a1c24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a1c28:
    // 0x1a1c28: 0xffb60110  sd          $s6, 0x110($sp)
    ctx->pc = 0x1a1c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 22));
label_1a1c2c:
    // 0x1a1c2c: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x1a1c2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1a1c30:
    // 0x1a1c30: 0xffb400f0  sd          $s4, 0xF0($sp)
    ctx->pc = 0x1a1c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 20));
label_1a1c34:
    // 0x1a1c34: 0x8ef40040  lw          $s4, 0x40($s7)
    ctx->pc = 0x1a1c34u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 64)));
label_1a1c38:
    // 0x1a1c38: 0x8e820044  lw          $v0, 0x44($s4)
    ctx->pc = 0x1a1c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
label_1a1c3c:
    // 0x1a1c3c: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x1a1c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_1a1c40:
    // 0x1a1c40: 0xc0685d4  jal         func_1A1750
label_1a1c44:
    if (ctx->pc == 0x1A1C44u) {
        ctx->pc = 0x1A1C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1C40u;
        // 0x1a1c44: 0xafa200a8  sw          $v0, 0xA8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1C48u;
        goto label_1a1c48;
    }
    ctx->pc = 0x1A1C40u;
    SET_GPR_U32(ctx, 31, 0x1A1C48u);
    ctx->pc = 0x1A1C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1C40u;
    // 0x1a1c44: 0xafa200a8  sw          $v0, 0xA8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1750u;
    { ctx->pc = 0x1a1750; return; }
    ctx->pc = 0x1A1C48u;
label_1a1c48:
    // 0x1a1c48: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x1a1c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
label_1a1c4c:
    // 0x1a1c4c: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x1a1c4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a1c50:
    // 0x1a1c50: 0x8e840048  lw          $a0, 0x48($s4)
    ctx->pc = 0x1a1c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
label_1a1c54:
    // 0x1a1c54: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x1a1c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
label_1a1c58:
    // 0x1a1c58: 0x18800017  blez        $a0, . + 4 + (0x17 << 2)
label_1a1c5c:
    if (ctx->pc == 0x1A1C5Cu) {
        ctx->pc = 0x1A1C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1C58u;
        // 0x1a1c5c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1C60u;
        goto label_1a1c60;
    }
    ctx->pc = 0x1A1C58u;
    {
        const bool branch_taken_0x1a1c58 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1A1C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1C58u;
        // 0x1a1c5c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1c58) {
            ctx->pc = 0x1A1CB8u;
            goto label_1a1cb8;
        }
    }
    ctx->pc = 0x1A1C60u;
label_1a1c60:
    // 0x1a1c60: 0x10b0c0  sll         $s6, $s0, 3
    ctx->pc = 0x1a1c60u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_1a1c64:
    // 0x1a1c64: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1a1c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_1a1c68:
    // 0x1a1c68: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1a1c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1a1c6c:
    // 0x1a1c6c: 0x3404bdff  ori         $a0, $zero, 0xBDFF
    ctx->pc = 0x1a1c6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48639);
label_1a1c70:
    // 0x1a1c70: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x1a1c70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
label_1a1c74:
    // 0x1a1c74: 0x600013  mtlo        $v1
    ctx->pc = 0x1a1c74u;
    ctx->lo = GPR_U64(ctx, 3);
label_1a1c78:
    // 0x1a1c78: 0x72621000  madd        $v0, $s3, $v0
    ctx->pc = 0x1a1c78u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1a1c7c:
    // 0x1a1c7c: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x1a1c7cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_1a1c80:
    // 0x1a1c80: 0x54640006  bnel        $v1, $a0, . + 4 + (0x6 << 2)
label_1a1c84:
    if (ctx->pc == 0x1A1C84u) {
        ctx->pc = 0x1A1C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1C80u;
        // 0x1a1c84: 0x8fa200a0  lw          $v0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1C88u;
        goto label_1a1c88;
    }
    ctx->pc = 0x1A1C80u;
    {
        const bool branch_taken_0x1a1c80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1a1c80) {
            ctx->pc = 0x1A1C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1C80u;
            // 0x1a1c84: 0x8fa200a0  lw          $v0, 0xA0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1C9Cu;
            goto label_1a1c9c;
        }
    }
    ctx->pc = 0x1A1C88u;
label_1a1c88:
    // 0x1a1c88: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1a1c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1a1c8c:
    // 0x1a1c8c: 0xafa300a4  sw          $v1, 0xA4($sp)
    ctx->pc = 0x1a1c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
label_1a1c90:
    // 0x1a1c90: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1a1c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1a1c94:
    // 0x1a1c94: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1a1c94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_1a1c98:
    // 0x1a1c98: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1a1c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1a1c9c:
    // 0x1a1c9c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1a1ca0:
    if (ctx->pc == 0x1A1CA0u) {
        ctx->pc = 0x1A1CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1C9Cu;
        // 0x1a1ca0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1CA4u;
        goto label_1a1ca4;
    }
    ctx->pc = 0x1A1C9Cu;
    {
        const bool branch_taken_0x1a1c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1C9Cu;
        // 0x1a1ca0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1c9c) {
            ctx->pc = 0x1A1CC0u;
            goto label_1a1cc0;
        }
    }
    ctx->pc = 0x1A1CA4u;
label_1a1ca4:
    // 0x1a1ca4: 0x265102a  slt         $v0, $s3, $a1
    ctx->pc = 0x1a1ca4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1a1ca8:
    // 0x1a1ca8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_1a1cac:
    if (ctx->pc == 0x1A1CACu) {
        ctx->pc = 0x1A1CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CA8u;
        // 0x1a1cac: 0x8fa300a8  lw          $v1, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1CB0u;
        goto label_1a1cb0;
    }
    ctx->pc = 0x1A1CA8u;
    {
        const bool branch_taken_0x1a1ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CA8u;
        // 0x1a1cac: 0x8fa300a8  lw          $v1, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ca8) {
            ctx->pc = 0x1A1C68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1c68;
        }
    }
    ctx->pc = 0x1A1CB0u;
label_1a1cb0:
    // 0x1a1cb0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a1cb4:
    if (ctx->pc == 0x1A1CB4u) {
        ctx->pc = 0x1A1CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CB0u;
        // 0x1a1cb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1CB8u;
        goto label_1a1cb8;
    }
    ctx->pc = 0x1A1CB0u;
    {
        const bool branch_taken_0x1a1cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CB0u;
        // 0x1a1cb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1cb0) {
            ctx->pc = 0x1A1CC4u;
            goto label_1a1cc4;
        }
    }
    ctx->pc = 0x1A1CB8u;
label_1a1cb8:
    // 0x1a1cb8: 0x10b0c0  sll         $s6, $s0, 3
    ctx->pc = 0x1a1cb8u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_1a1cbc:
    // 0x1a1cbc: 0x0  nop
    ctx->pc = 0x1a1cbcu;
    // NOP
label_1a1cc0:
    // 0x1a1cc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a1cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a1cc4:
    // 0x1a1cc4: 0xc0685e2  jal         func_1A1788
label_1a1cc8:
    if (ctx->pc == 0x1A1CC8u) {
        ctx->pc = 0x1A1CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CC4u;
        // 0x1a1cc8: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1CCCu;
        goto label_1a1ccc;
    }
    ctx->pc = 0x1A1CC4u;
    SET_GPR_U32(ctx, 31, 0x1A1CCCu);
    ctx->pc = 0x1A1CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1CC4u;
    // 0x1a1cc8: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1788u;
    { ctx->pc = 0x1a1788; return; }
    ctx->pc = 0x1A1CCCu;
label_1a1ccc:
    // 0x1a1ccc: 0x240301ba  addiu       $v1, $zero, 0x1BA
    ctx->pc = 0x1a1cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
label_1a1cd0:
    // 0x1a1cd0: 0x14430055  bne         $v0, $v1, . + 4 + (0x55 << 2)
label_1a1cd4:
    if (ctx->pc == 0x1A1CD4u) {
        ctx->pc = 0x1A1CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CD0u;
        // 0x1a1cd4: 0x241e0006  addiu       $fp, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1CD8u;
        goto label_1a1cd8;
    }
    ctx->pc = 0x1A1CD0u;
    {
        const bool branch_taken_0x1a1cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A1CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CD0u;
        // 0x1a1cd4: 0x241e0006  addiu       $fp, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1cd0) {
            ctx->pc = 0x1A1E28u;
            goto label_1a1e28;
        }
    }
    ctx->pc = 0x1A1CD8u;
label_1a1cd8:
    // 0x1a1cd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a1cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a1cdc:
    // 0x1a1cdc: 0xc0687fe  jal         func_1A1FF8
label_1a1ce0:
    if (ctx->pc == 0x1A1CE0u) {
        ctx->pc = 0x1A1CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CDCu;
        // 0x1a1ce0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1CE4u;
        goto label_1a1ce4;
    }
    ctx->pc = 0x1A1CDCu;
    SET_GPR_U32(ctx, 31, 0x1A1CE4u);
    ctx->pc = 0x1A1CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1CDCu;
    // 0x1a1ce0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1FF8u;
    goto label_1a1ff8;
    ctx->pc = 0x1A1CE4u;
label_1a1ce4:
    // 0x1a1ce4: 0x10000050  b           . + 4 + (0x50 << 2)
label_1a1ce8:
    if (ctx->pc == 0x1A1CE8u) {
        ctx->pc = 0x1A1CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CE4u;
        // 0x1a1ce8: 0x241e0006  addiu       $fp, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1CECu;
        goto label_1a1cec;
    }
    ctx->pc = 0x1A1CE4u;
    {
        const bool branch_taken_0x1a1ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CE4u;
        // 0x1a1ce8: 0x241e0006  addiu       $fp, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ce4) {
            ctx->pc = 0x1A1E28u;
            goto label_1a1e28;
        }
    }
    ctx->pc = 0x1A1CECu;
label_1a1cec:
    // 0x1a1cec: 0x0  nop
    ctx->pc = 0x1a1cecu;
    // NOP
label_1a1cf0:
    // 0x1a1cf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a1cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a1cf4:
    // 0x1a1cf4: 0xc06864c  jal         func_1A1930
label_1a1cf8:
    if (ctx->pc == 0x1A1CF8u) {
        ctx->pc = 0x1A1CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1CF4u;
        // 0x1a1cf8: 0xafbe0080  sw          $fp, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1CFCu;
        goto label_1a1cfc;
    }
    ctx->pc = 0x1A1CF4u;
    SET_GPR_U32(ctx, 31, 0x1A1CFCu);
    ctx->pc = 0x1A1CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1CF4u;
    // 0x1a1cf8: 0xafbe0080  sw          $fp, 0x80($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1930u;
    { ctx->pc = 0x1a1930; return; }
    ctx->pc = 0x1A1CFCu;
label_1a1cfc:
    // 0x1a1cfc: 0x8e450038  lw          $a1, 0x38($s2)
    ctx->pc = 0x1a1cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_1a1d00:
    // 0x1a1d00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a1d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a1d04:
    // 0x1a1d04: 0xc06864c  jal         func_1A1930
label_1a1d08:
    if (ctx->pc == 0x1A1D08u) {
        ctx->pc = 0x1A1D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D04u;
        // 0x1a1d08: 0xafa20084  sw          $v0, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1D0Cu;
        goto label_1a1d0c;
    }
    ctx->pc = 0x1A1D04u;
    SET_GPR_U32(ctx, 31, 0x1A1D0Cu);
    ctx->pc = 0x1A1D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1D04u;
    // 0x1a1d08: 0xafa20084  sw          $v0, 0x84($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1930u;
    { ctx->pc = 0x1a1930; return; }
    ctx->pc = 0x1A1D0Cu;
label_1a1d0c:
    // 0x1a1d0c: 0xde430028  ld          $v1, 0x28($s2)
    ctx->pc = 0x1a1d0cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 40)));
label_1a1d10:
    // 0x1a1d10: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1a1d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1a1d14:
    // 0x1a1d14: 0x8e48003c  lw          $t0, 0x3C($s2)
    ctx->pc = 0x1a1d14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_1a1d18:
    // 0x1a1d18: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1a1d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1a1d1c:
    // 0x1a1d1c: 0xffa30090  sd          $v1, 0x90($sp)
    ctx->pc = 0x1a1d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 3));
label_1a1d20:
    // 0x1a1d20: 0xde430030  ld          $v1, 0x30($s2)
    ctx->pc = 0x1a1d20u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 48)));
label_1a1d24:
    // 0x1a1d24: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x1a1d24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1a1d28:
    // 0x1a1d28: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x1a1d28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a1d2c:
    // 0x1a1d2c: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x1a1d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
label_1a1d30:
    // 0x1a1d30: 0xafa8008c  sw          $t0, 0x8C($sp)
    ctx->pc = 0x1a1d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 8));
label_1a1d34:
    // 0x1a1d34: 0xe0f809  jalr        $a3
label_1a1d38:
    if (ctx->pc == 0x1A1D38u) {
        ctx->pc = 0x1A1D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D34u;
        // 0x1a1d38: 0xffa30098  sd          $v1, 0x98($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1D3Cu;
        goto label_1a1d3c;
    }
    ctx->pc = 0x1A1D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x1A1D3Cu);
        ctx->pc = 0x1A1D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D34u;
        // 0x1a1d38: 0xffa30098  sd          $v1, 0x98($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1D34u, 0x1A1D3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1D3Cu;
label_1a1d3c:
    // 0x1a1d3c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1a1d3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a1d40:
    // 0x1a1d40: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1a1d44:
    if (ctx->pc == 0x1A1D44u) {
        ctx->pc = 0x1A1D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D40u;
        // 0x1a1d44: 0x8e840048  lw          $a0, 0x48($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1D48u;
        goto label_1a1d48;
    }
    ctx->pc = 0x1A1D40u;
    {
        const bool branch_taken_0x1a1d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D40u;
        // 0x1a1d44: 0x8e840048  lw          $a0, 0x48($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1d40) {
            ctx->pc = 0x1A1DB0u;
            goto label_1a1db0;
        }
    }
    ctx->pc = 0x1A1D48u;
label_1a1d48:
    // 0x1a1d48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a1d48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a1d4c:
    // 0x1a1d4c: 0xc06886e  jal         func_1A21B8
label_1a1d50:
    if (ctx->pc == 0x1A1D50u) {
        ctx->pc = 0x1A1D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D4Cu;
        // 0x1a1d50: 0x26460018  addiu       $a2, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1D54u;
        goto label_1a1d54;
    }
    ctx->pc = 0x1A1D4Cu;
    SET_GPR_U32(ctx, 31, 0x1A1D54u);
    ctx->pc = 0x1A1D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1D4Cu;
    // 0x1a1d50: 0x26460018  addiu       $a2, $s2, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A21B8u;
    goto label_1a21b8;
    ctx->pc = 0x1A1D54u;
label_1a1d54:
    // 0x1a1d54: 0xde230018  ld          $v1, 0x18($s1)
    ctx->pc = 0x1a1d54u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 24)));
label_1a1d58:
    // 0x1a1d58: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1a1d58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1a1d5c:
    // 0x1a1d5c: 0x14600033  bnez        $v1, . + 4 + (0x33 << 2)
label_1a1d60:
    if (ctx->pc == 0x1A1D60u) {
        ctx->pc = 0x1A1D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D5Cu;
        // 0x1a1d60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1D64u;
        goto label_1a1d64;
    }
    ctx->pc = 0x1A1D5Cu;
    {
        const bool branch_taken_0x1a1d5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D5Cu;
        // 0x1a1d60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1d5c) {
            ctx->pc = 0x1A1E2Cu;
            goto label_1a1e2c;
        }
    }
    ctx->pc = 0x1A1D64u;
label_1a1d64:
    // 0x1a1d64: 0x8e840048  lw          $a0, 0x48($s4)
    ctx->pc = 0x1a1d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
label_1a1d68:
    // 0x1a1d68: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a1d68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1d6c:
    // 0x1a1d6c: 0x18800010  blez        $a0, . + 4 + (0x10 << 2)
label_1a1d70:
    if (ctx->pc == 0x1A1D70u) {
        ctx->pc = 0x1A1D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D6Cu;
        // 0x1a1d70: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1D74u;
        goto label_1a1d74;
    }
    ctx->pc = 0x1A1D6Cu;
    {
        const bool branch_taken_0x1a1d6c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1A1D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D6Cu;
        // 0x1a1d70: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1d6c) {
            ctx->pc = 0x1A1DB0u;
            goto label_1a1db0;
        }
    }
    ctx->pc = 0x1A1D74u;
label_1a1d74:
    // 0x1a1d74: 0xde450018  ld          $a1, 0x18($s2)
    ctx->pc = 0x1a1d74u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 24)));
label_1a1d78:
    // 0x1a1d78: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1a1d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_1a1d7c:
    // 0x1a1d7c: 0x0  nop
    ctx->pc = 0x1a1d7cu;
    // NOP
label_1a1d80:
    // 0x1a1d80: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1a1d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1a1d84:
    // 0x1a1d84: 0x600013  mtlo        $v1
    ctx->pc = 0x1a1d84u;
    ctx->lo = GPR_U64(ctx, 3);
label_1a1d88:
    // 0x1a1d88: 0x72628000  madd        $s0, $s3, $v0
    ctx->pc = 0x1a1d88u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_1a1d8c:
    // 0x1a1d8c: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x1a1d8cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
label_1a1d90:
    // 0x1a1d90: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x1a1d90u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_1a1d94:
    // 0x1a1d94: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1a1d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_1a1d98:
    // 0x1a1d98: 0x5043ffd5  beql        $v0, $v1, . + 4 + (-0x2B << 2)
label_1a1d9c:
    if (ctx->pc == 0x1A1D9Cu) {
        ctx->pc = 0x1A1D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1D98u;
        // 0x1a1d9c: 0x8e450040  lw          $a1, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1DA0u;
        goto label_1a1da0;
    }
    ctx->pc = 0x1A1D98u;
    {
        const bool branch_taken_0x1a1d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1a1d98) {
            ctx->pc = 0x1A1D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1D98u;
            // 0x1a1d9c: 0x8e450040  lw          $a1, 0x40($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1CF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1cf0;
        }
    }
    ctx->pc = 0x1A1DA0u;
label_1a1da0:
    // 0x1a1da0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1a1da0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1a1da4:
    // 0x1a1da4: 0x266102a  slt         $v0, $s3, $a2
    ctx->pc = 0x1a1da4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1a1da8:
    // 0x1a1da8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_1a1dac:
    if (ctx->pc == 0x1A1DACu) {
        ctx->pc = 0x1A1DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1DA8u;
        // 0x1a1dac: 0x8fa300a8  lw          $v1, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1DB0u;
        goto label_1a1db0;
    }
    ctx->pc = 0x1A1DA8u;
    {
        const bool branch_taken_0x1a1da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1DA8u;
        // 0x1a1dac: 0x8fa300a8  lw          $v1, 0xA8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1da8) {
            ctx->pc = 0x1A1D80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1d80;
        }
    }
    ctx->pc = 0x1A1DB0u;
label_1a1db0:
    // 0x1a1db0: 0x16640017  bne         $s3, $a0, . + 4 + (0x17 << 2)
label_1a1db4:
    if (ctx->pc == 0x1A1DB4u) {
        ctx->pc = 0x1A1DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1DB0u;
        // 0x1a1db4: 0x8fa200a0  lw          $v0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1DB8u;
        goto label_1a1db8;
    }
    ctx->pc = 0x1A1DB0u;
    {
        const bool branch_taken_0x1a1db0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 4));
        ctx->pc = 0x1A1DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1DB0u;
        // 0x1a1db4: 0x8fa200a0  lw          $v0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1db0) {
            ctx->pc = 0x1A1E10u;
            goto label_1a1e10;
        }
    }
    ctx->pc = 0x1A1DB8u;
label_1a1db8:
    // 0x1a1db8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1a1dbc:
    if (ctx->pc == 0x1A1DBCu) {
        ctx->pc = 0x1A1DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1DB8u;
        // 0x1a1dbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1DC0u;
        goto label_1a1dc0;
    }
    ctx->pc = 0x1A1DB8u;
    {
        const bool branch_taken_0x1a1db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1DB8u;
        // 0x1a1dbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1db8) {
            ctx->pc = 0x1A1E10u;
            goto label_1a1e10;
        }
    }
    ctx->pc = 0x1A1DC0u;
label_1a1dc0:
    // 0x1a1dc0: 0x8e450040  lw          $a1, 0x40($s2)
    ctx->pc = 0x1a1dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_1a1dc4:
    // 0x1a1dc4: 0xc06864c  jal         func_1A1930
label_1a1dc8:
    if (ctx->pc == 0x1A1DC8u) {
        ctx->pc = 0x1A1DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1DC4u;
        // 0x1a1dc8: 0xafbe0080  sw          $fp, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1DCCu;
        goto label_1a1dcc;
    }
    ctx->pc = 0x1A1DC4u;
    SET_GPR_U32(ctx, 31, 0x1A1DCCu);
    ctx->pc = 0x1A1DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1DC4u;
    // 0x1a1dc8: 0xafbe0080  sw          $fp, 0x80($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1930u;
    { ctx->pc = 0x1a1930; return; }
    ctx->pc = 0x1A1DCCu;
label_1a1dcc:
    // 0x1a1dcc: 0x8e450038  lw          $a1, 0x38($s2)
    ctx->pc = 0x1a1dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_1a1dd0:
    // 0x1a1dd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a1dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a1dd4:
    // 0x1a1dd4: 0xc06864c  jal         func_1A1930
label_1a1dd8:
    if (ctx->pc == 0x1A1DD8u) {
        ctx->pc = 0x1A1DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1DD4u;
        // 0x1a1dd8: 0xafa20084  sw          $v0, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1DDCu;
        goto label_1a1ddc;
    }
    ctx->pc = 0x1A1DD4u;
    SET_GPR_U32(ctx, 31, 0x1A1DDCu);
    ctx->pc = 0x1A1DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1DD4u;
    // 0x1a1dd8: 0xafa20084  sw          $v0, 0x84($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1930u;
    { ctx->pc = 0x1a1930; return; }
    ctx->pc = 0x1A1DDCu;
label_1a1ddc:
    // 0x1a1ddc: 0xde430028  ld          $v1, 0x28($s2)
    ctx->pc = 0x1a1ddcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 40)));
label_1a1de0:
    // 0x1a1de0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1a1de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1a1de4:
    // 0x1a1de4: 0x8e47003c  lw          $a3, 0x3C($s2)
    ctx->pc = 0x1a1de4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_1a1de8:
    // 0x1a1de8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1a1de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1a1dec:
    // 0x1a1dec: 0xffa30090  sd          $v1, 0x90($sp)
    ctx->pc = 0x1a1decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 3));
label_1a1df0:
    // 0x1a1df0: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x1a1df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
label_1a1df4:
    // 0x1a1df4: 0xde420030  ld          $v0, 0x30($s2)
    ctx->pc = 0x1a1df4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 48)));
label_1a1df8:
    // 0x1a1df8: 0x8fa600a4  lw          $a2, 0xA4($sp)
    ctx->pc = 0x1a1df8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_1a1dfc:
    // 0x1a1dfc: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1a1dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1a1e00:
    // 0x1a1e00: 0xafa7008c  sw          $a3, 0x8C($sp)
    ctx->pc = 0x1a1e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 7));
label_1a1e04:
    // 0x1a1e04: 0x60f809  jalr        $v1
label_1a1e08:
    if (ctx->pc == 0x1A1E08u) {
        ctx->pc = 0x1A1E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E04u;
        // 0x1a1e08: 0xffa20098  sd          $v0, 0x98($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1E0Cu;
        goto label_1a1e0c;
    }
    ctx->pc = 0x1A1E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A1E0Cu);
        ctx->pc = 0x1A1E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E04u;
        // 0x1a1e08: 0xffa20098  sd          $v0, 0x98($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1E04u, 0x1A1E0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1E0Cu;
label_1a1e0c:
    // 0x1a1e0c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1a1e0cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a1e10:
    // 0x1a1e10: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
label_1a1e14:
    if (ctx->pc == 0x1A1E14u) {
        ctx->pc = 0x1A1E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E10u;
        // 0x1a1e14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1E18u;
        goto label_1a1e18;
    }
    ctx->pc = 0x1A1E10u;
    {
        const bool branch_taken_0x1a1e10 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E10u;
        // 0x1a1e14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1e10) {
            ctx->pc = 0x1A1E2Cu;
            goto label_1a1e2c;
        }
    }
    ctx->pc = 0x1A1E18u;
label_1a1e18:
    // 0x1a1e18: 0xde220018  ld          $v0, 0x18($s1)
    ctx->pc = 0x1a1e18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 24)));
label_1a1e1c:
    // 0x1a1e1c: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x1a1e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
label_1a1e20:
    // 0x1a1e20: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1a1e20u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1a1e24:
    // 0x1a1e24: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x1a1e24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_1a1e28:
    // 0x1a1e28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a1e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a1e2c:
    // 0x1a1e2c: 0xc0685e2  jal         func_1A1788
label_1a1e30:
    if (ctx->pc == 0x1A1E30u) {
        ctx->pc = 0x1A1E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E2Cu;
        // 0x1a1e30: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1E34u;
        goto label_1a1e34;
    }
    ctx->pc = 0x1A1E2Cu;
    SET_GPR_U32(ctx, 31, 0x1A1E34u);
    ctx->pc = 0x1A1E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1E2Cu;
    // 0x1a1e30: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1788u;
    { ctx->pc = 0x1a1788; return; }
    ctx->pc = 0x1A1E34u;
label_1a1e34:
    // 0x1a1e34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a1e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a1e38:
    // 0x1a1e38: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
label_1a1e3c:
    if (ctx->pc == 0x1A1E3Cu) {
        ctx->pc = 0x1A1E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E38u;
        // 0x1a1e3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1E40u;
        goto label_1a1e40;
    }
    ctx->pc = 0x1A1E38u;
    {
        const bool branch_taken_0x1a1e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A1E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E38u;
        // 0x1a1e3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1e38) {
            ctx->pc = 0x1A1E88u;
            goto label_1a1e88;
        }
    }
    ctx->pc = 0x1A1E40u;
label_1a1e40:
    // 0x1a1e40: 0xc0685e2  jal         func_1A1788
label_1a1e44:
    if (ctx->pc == 0x1A1E44u) {
        ctx->pc = 0x1A1E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E40u;
        // 0x1a1e44: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1E48u;
        goto label_1a1e48;
    }
    ctx->pc = 0x1A1E40u;
    SET_GPR_U32(ctx, 31, 0x1A1E48u);
    ctx->pc = 0x1A1E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1E40u;
    // 0x1a1e44: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1788u;
    { ctx->pc = 0x1a1788; return; }
    ctx->pc = 0x1A1E48u;
label_1a1e48:
    // 0x1a1e48: 0x240301ba  addiu       $v1, $zero, 0x1BA
    ctx->pc = 0x1a1e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
label_1a1e4c:
    // 0x1a1e4c: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
label_1a1e50:
    if (ctx->pc == 0x1A1E50u) {
        ctx->pc = 0x1A1E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E4Cu;
        // 0x1a1e50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1E54u;
        goto label_1a1e54;
    }
    ctx->pc = 0x1A1E4Cu;
    {
        const bool branch_taken_0x1a1e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A1E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E4Cu;
        // 0x1a1e50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1e4c) {
            ctx->pc = 0x1A1E88u;
            goto label_1a1e88;
        }
    }
    ctx->pc = 0x1A1E54u;
label_1a1e54:
    // 0x1a1e54: 0xc0685e2  jal         func_1A1788
label_1a1e58:
    if (ctx->pc == 0x1A1E58u) {
        ctx->pc = 0x1A1E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E54u;
        // 0x1a1e58: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1E5Cu;
        goto label_1a1e5c;
    }
    ctx->pc = 0x1A1E54u;
    SET_GPR_U32(ctx, 31, 0x1A1E5Cu);
    ctx->pc = 0x1A1E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1E54u;
    // 0x1a1e58: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1788u;
    { ctx->pc = 0x1a1788; return; }
    ctx->pc = 0x1A1E5Cu;
label_1a1e5c:
    // 0x1a1e5c: 0x240301b9  addiu       $v1, $zero, 0x1B9
    ctx->pc = 0x1a1e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 441));
label_1a1e60:
    // 0x1a1e60: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
label_1a1e64:
    if (ctx->pc == 0x1A1E64u) {
        ctx->pc = 0x1A1E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E60u;
        // 0x1a1e64: 0x2c0802d  daddu       $s0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1E68u;
        goto label_1a1e68;
    }
    ctx->pc = 0x1A1E60u;
    {
        const bool branch_taken_0x1a1e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A1E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E60u;
        // 0x1a1e64: 0x2c0802d  daddu       $s0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1e60) {
            ctx->pc = 0x1A1E88u;
            goto label_1a1e88;
        }
    }
    ctx->pc = 0x1A1E68u;
label_1a1e68:
    // 0x1a1e68: 0xde230018  ld          $v1, 0x18($s1)
    ctx->pc = 0x1a1e68u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 24)));
label_1a1e6c:
    // 0x1a1e6c: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x1a1e6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_1a1e70:
    // 0x1a1e70: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a1e74:
    if (ctx->pc == 0x1A1E74u) {
        ctx->pc = 0x1A1E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E70u;
        // 0x1a1e74: 0x2c3102b  sltu        $v0, $s6, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1E78u;
        goto label_1a1e78;
    }
    ctx->pc = 0x1A1E70u;
    {
        const bool branch_taken_0x1a1e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E70u;
        // 0x1a1e74: 0x2c3102b  sltu        $v0, $s6, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1e70) {
            ctx->pc = 0x1A1E90u;
            goto label_1a1e90;
        }
    }
    ctx->pc = 0x1A1E78u;
label_1a1e78:
    // 0x1a1e78: 0x16a0ffb3  bnez        $s5, . + 4 + (-0x4D << 2)
label_1a1e7c:
    if (ctx->pc == 0x1A1E7Cu) {
        ctx->pc = 0x1A1E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E78u;
        // 0x1a1e7c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1E80u;
        goto label_1a1e80;
    }
    ctx->pc = 0x1A1E78u;
    {
        const bool branch_taken_0x1a1e78 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E78u;
        // 0x1a1e7c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1e78) {
            ctx->pc = 0x1A1D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1d48;
        }
    }
    ctx->pc = 0x1A1E80u;
label_1a1e80:
    // 0x1a1e80: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a1e84:
    if (ctx->pc == 0x1A1E84u) {
        ctx->pc = 0x1A1E88u;
        goto label_1a1e88;
    }
    ctx->pc = 0x1A1E80u;
    {
        const bool branch_taken_0x1a1e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1e80) {
            ctx->pc = 0x1A1E90u;
            goto label_1a1e90;
        }
    }
    ctx->pc = 0x1A1E88u;
label_1a1e88:
    // 0x1a1e88: 0xde230018  ld          $v1, 0x18($s1)
    ctx->pc = 0x1a1e88u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 24)));
label_1a1e8c:
    // 0x1a1e8c: 0x2c3102b  sltu        $v0, $s6, $v1
    ctx->pc = 0x1a1e8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1a1e90:
    // 0x1a1e90: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1a1e94:
    if (ctx->pc == 0x1A1E94u) {
        ctx->pc = 0x1A1E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E90u;
        // 0x1a1e94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1E98u;
        goto label_1a1e98;
    }
    ctx->pc = 0x1A1E90u;
    {
        const bool branch_taken_0x1a1e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E90u;
        // 0x1a1e94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1e90) {
            ctx->pc = 0x1A1EACu;
            goto label_1a1eac;
        }
    }
    ctx->pc = 0x1A1E98u;
label_1a1e98:
    // 0x1a1e98: 0xc0685e2  jal         func_1A1788
label_1a1e9c:
    if (ctx->pc == 0x1A1E9Cu) {
        ctx->pc = 0x1A1E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E98u;
        // 0x1a1e9c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1EA0u;
        goto label_1a1ea0;
    }
    ctx->pc = 0x1A1E98u;
    SET_GPR_U32(ctx, 31, 0x1A1EA0u);
    ctx->pc = 0x1A1E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1E98u;
    // 0x1a1e9c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1788u;
    { ctx->pc = 0x1a1788; return; }
    ctx->pc = 0x1A1EA0u;
label_1a1ea0:
    // 0x1a1ea0: 0x240301ba  addiu       $v1, $zero, 0x1BA
    ctx->pc = 0x1a1ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
label_1a1ea4:
    // 0x1a1ea4: 0x1043ff87  beq         $v0, $v1, . + 4 + (-0x79 << 2)
label_1a1ea8:
    if (ctx->pc == 0x1A1EA8u) {
        ctx->pc = 0x1A1EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1EA4u;
        // 0x1a1ea8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1EACu;
        goto label_1a1eac;
    }
    ctx->pc = 0x1A1EA4u;
    {
        const bool branch_taken_0x1a1ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A1EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1EA4u;
        // 0x1a1ea8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ea4) {
            ctx->pc = 0x1A1CC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1cc4;
        }
    }
    ctx->pc = 0x1A1EACu;
label_1a1eac:
    // 0x1a1eac: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1a1eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1a1eb0:
    // 0x1a1eb0: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x1a1eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_1a1eb4:
    // 0x1a1eb4: 0xdfbe0130  ld          $fp, 0x130($sp)
    ctx->pc = 0x1a1eb4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_1a1eb8:
    // 0x1a1eb8: 0xdfb70120  ld          $s7, 0x120($sp)
    ctx->pc = 0x1a1eb8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_1a1ebc:
    // 0x1a1ebc: 0xdfb60110  ld          $s6, 0x110($sp)
    ctx->pc = 0x1a1ebcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_1a1ec0:
    // 0x1a1ec0: 0xdfb50100  ld          $s5, 0x100($sp)
    ctx->pc = 0x1a1ec0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_1a1ec4:
    // 0x1a1ec4: 0xdfb400f0  ld          $s4, 0xF0($sp)
    ctx->pc = 0x1a1ec4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_1a1ec8:
    // 0x1a1ec8: 0xdfb300e0  ld          $s3, 0xE0($sp)
    ctx->pc = 0x1a1ec8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_1a1ecc:
    // 0x1a1ecc: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x1a1eccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_1a1ed0:
    // 0x1a1ed0: 0xdfb100c0  ld          $s1, 0xC0($sp)
    ctx->pc = 0x1a1ed0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_1a1ed4:
    // 0x1a1ed4: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x1a1ed4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1a1ed8:
    // 0x1a1ed8: 0x3e00008  jr          $ra
label_1a1edc:
    if (ctx->pc == 0x1A1EDCu) {
        ctx->pc = 0x1A1EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1ED8u;
        // 0x1a1edc: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1EE0u;
        goto label_1a1ee0;
    }
    ctx->pc = 0x1A1ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1ED8u;
        // 0x1a1edc: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1EE0u;
label_1a1ee0:
    // 0x1a1ee0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a1ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a1ee4:
    // 0x1a1ee4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a1ee4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1ee8:
    // 0x1a1ee8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a1eec:
    // 0x1a1eec: 0xc0686fa  jal         func_1A1BE8
label_1a1ef0:
    if (ctx->pc == 0x1A1EF0u) {
        ctx->pc = 0x1A1EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1EECu;
        // 0x1a1ef0: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1EF4u;
        goto label_1a1ef4;
    }
    ctx->pc = 0x1A1EECu;
    SET_GPR_U32(ctx, 31, 0x1A1EF4u);
    ctx->pc = 0x1A1EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1EECu;
    // 0x1a1ef0: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BE8u;
    goto label_1a1be8;
    ctx->pc = 0x1A1EF4u;
label_1a1ef4:
    // 0x1a1ef4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a1ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a1ef8:
    // 0x1a1ef8: 0x3e00008  jr          $ra
label_1a1efc:
    if (ctx->pc == 0x1A1EFCu) {
        ctx->pc = 0x1A1EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1EF8u;
        // 0x1a1efc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1F00u;
        goto label_1a1f00;
    }
    ctx->pc = 0x1A1EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1EF8u;
        // 0x1a1efc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1F00u;
label_1a1f00:
    // 0x1a1f00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a1f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1a1f04:
    // 0x1a1f04: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1a1f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_1a1f08:
    // 0x1a1f08: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1a1f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1a1f0c:
    // 0x1a1f0c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1a1f0cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a1f10:
    // 0x1a1f10: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1a1f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_1a1f14:
    // 0x1a1f14: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1a1f14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1a1f18:
    // 0x1a1f18: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a1f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a1f1c:
    // 0x1a1f1c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a1f1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a1f20:
    // 0x1a1f20: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1a1f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1a1f24:
    // 0x1a1f24: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1a1f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a1f28:
    // 0x1a1f28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a1f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a1f2c:
    // 0x1a1f2c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a1f2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1f30:
    // 0x1a1f30: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a1f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a1f34:
    // 0x1a1f34: 0x8c920040  lw          $s2, 0x40($a0)
    ctx->pc = 0x1a1f34u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1a1f38:
    // 0x1a1f38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a1f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a1f3c:
    // 0x1a1f3c: 0xc068658  jal         func_1A1960
label_1a1f40:
    if (ctx->pc == 0x1A1F40u) {
        ctx->pc = 0x1A1F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F3Cu;
        // 0x1a1f40: 0x8e500044  lw          $s0, 0x44($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1F44u;
        goto label_1a1f44;
    }
    ctx->pc = 0x1A1F3Cu;
    SET_GPR_U32(ctx, 31, 0x1A1F44u);
    ctx->pc = 0x1A1F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1F3Cu;
    // 0x1a1f40: 0x8e500044  lw          $s0, 0x44($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1960u;
    { ctx->pc = 0x1a1960; return; }
    ctx->pc = 0x1A1F44u;
label_1a1f44:
    // 0x1a1f44: 0x8e450048  lw          $a1, 0x48($s2)
    ctx->pc = 0x1a1f44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_1a1f48:
    // 0x1a1f48: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a1f48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a1f4c:
    // 0x1a1f4c: 0x18a0000f  blez        $a1, . + 4 + (0xF << 2)
label_1a1f50:
    if (ctx->pc == 0x1A1F50u) {
        ctx->pc = 0x1A1F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F4Cu;
        // 0x1a1f50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1F54u;
        goto label_1a1f54;
    }
    ctx->pc = 0x1A1F4Cu;
    {
        const bool branch_taken_0x1a1f4c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1A1F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F4Cu;
        // 0x1a1f50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1f4c) {
            ctx->pc = 0x1A1F8Cu;
            goto label_1a1f8c;
        }
    }
    ctx->pc = 0x1A1F54u;
label_1a1f54:
    // 0x1a1f54: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x1a1f54u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_1a1f58:
    // 0x1a1f58: 0x54c20003  bnel        $a2, $v0, . + 4 + (0x3 << 2)
label_1a1f5c:
    if (ctx->pc == 0x1A1F5Cu) {
        ctx->pc = 0x1A1F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F58u;
        // 0x1a1f5c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1F60u;
        goto label_1a1f60;
    }
    ctx->pc = 0x1A1F58u;
    {
        const bool branch_taken_0x1a1f58 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a1f58) {
            ctx->pc = 0x1A1F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1F58u;
            // 0x1a1f5c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1F68u;
            goto label_1a1f68;
        }
    }
    ctx->pc = 0x1A1F60u;
label_1a1f60:
    // 0x1a1f60: 0x1000000a  b           . + 4 + (0xA << 2)
label_1a1f64:
    if (ctx->pc == 0x1A1F64u) {
        ctx->pc = 0x1A1F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F60u;
        // 0x1a1f64: 0x8e110010  lw          $s1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1F68u;
        goto label_1a1f68;
    }
    ctx->pc = 0x1A1F60u;
    {
        const bool branch_taken_0x1a1f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F60u;
        // 0x1a1f64: 0x8e110010  lw          $s1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1f60) {
            ctx->pc = 0x1A1F8Cu;
            goto label_1a1f8c;
        }
    }
    ctx->pc = 0x1A1F68u;
label_1a1f68:
    // 0x1a1f68: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x1a1f68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1a1f6c:
    // 0x1a1f6c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a1f70:
    if (ctx->pc == 0x1A1F70u) {
        ctx->pc = 0x1A1F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F6Cu;
        // 0x1a1f70: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1F74u;
        goto label_1a1f74;
    }
    ctx->pc = 0x1A1F6Cu;
    {
        const bool branch_taken_0x1a1f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F6Cu;
        // 0x1a1f70: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1f6c) {
            ctx->pc = 0x1A1F8Cu;
            goto label_1a1f8c;
        }
    }
    ctx->pc = 0x1A1F74u;
label_1a1f74:
    // 0x1a1f74: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x1a1f74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1a1f78:
    // 0x1a1f78: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x1a1f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1a1f7c:
    // 0x1a1f7c: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x1a1f7cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_1a1f80:
    // 0x1a1f80: 0x54c3fff9  bnel        $a2, $v1, . + 4 + (-0x7 << 2)
label_1a1f84:
    if (ctx->pc == 0x1A1F84u) {
        ctx->pc = 0x1A1F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F80u;
        // 0x1a1f84: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1F88u;
        goto label_1a1f88;
    }
    ctx->pc = 0x1A1F80u;
    {
        const bool branch_taken_0x1a1f80 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a1f80) {
            ctx->pc = 0x1A1F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1F80u;
            // 0x1a1f84: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1f68;
        }
    }
    ctx->pc = 0x1A1F88u;
label_1a1f88:
    // 0x1a1f88: 0x8c510010  lw          $s1, 0x10($v0)
    ctx->pc = 0x1a1f88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1a1f8c:
    // 0x1a1f8c: 0x28820040  slti        $v0, $a0, 0x40
    ctx->pc = 0x1a1f8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)64) ? 1 : 0);
label_1a1f90:
    // 0x1a1f90: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1a1f94:
    if (ctx->pc == 0x1A1F94u) {
        ctx->pc = 0x1A1F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F90u;
        // 0x1a1f94: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1F98u;
        goto label_1a1f98;
    }
    ctx->pc = 0x1A1F90u;
    {
        const bool branch_taken_0x1a1f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F90u;
        // 0x1a1f94: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1f90) {
            ctx->pc = 0x1A1FCCu;
            goto label_1a1fcc;
        }
    }
    ctx->pc = 0x1A1F98u;
label_1a1f98:
    // 0x1a1f98: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1a1f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1a1f9c:
    // 0x1a1f9c: 0x833818  mult        $a3, $a0, $v1
    ctx->pc = 0x1a1f9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_1a1fa0:
    // 0x1a1fa0: 0x24425978  addiu       $v0, $v0, 0x5978
    ctx->pc = 0x1a1fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22904));
label_1a1fa4:
    // 0x1a1fa4: 0x132100  sll         $a0, $s3, 4
    ctx->pc = 0x1a1fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_1a1fa8:
    // 0x1a1fa8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1a1fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1a1fac:
    // 0x1a1fac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a1facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1a1fb0:
    // 0x1a1fb0: 0xae450048  sw          $a1, 0x48($s2)
    ctx->pc = 0x1a1fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 5));
label_1a1fb4:
    // 0x1a1fb4: 0xf01821  addu        $v1, $a3, $s0
    ctx->pc = 0x1a1fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
label_1a1fb8:
    // 0x1a1fb8: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x1a1fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
label_1a1fbc:
    // 0x1a1fbc: 0xac740014  sw          $s4, 0x14($v1)
    ctx->pc = 0x1a1fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 20));
label_1a1fc0:
    // 0x1a1fc0: 0xdc440008  ld          $a0, 0x8($v0)
    ctx->pc = 0x1a1fc0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 8)));
label_1a1fc4:
    // 0x1a1fc4: 0xac750010  sw          $s5, 0x10($v1)
    ctx->pc = 0x1a1fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 21));
label_1a1fc8:
    // 0x1a1fc8: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x1a1fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
label_1a1fcc:
    // 0x1a1fcc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a1fccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a1fd0:
    // 0x1a1fd0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1a1fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a1fd4:
    // 0x1a1fd4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1a1fd4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a1fd8:
    // 0x1a1fd8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1a1fd8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a1fdc:
    // 0x1a1fdc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a1fdcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a1fe0:
    // 0x1a1fe0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a1fe0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a1fe4:
    // 0x1a1fe4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a1fe4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a1fe8:
    // 0x1a1fe8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a1fe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a1fec:
    // 0x1a1fec: 0x3e00008  jr          $ra
label_1a1ff0:
    if (ctx->pc == 0x1A1FF0u) {
        ctx->pc = 0x1A1FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1FECu;
        // 0x1a1ff0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1FF4u;
        goto label_1a1ff4;
    }
    ctx->pc = 0x1A1FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1FECu;
        // 0x1a1ff0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1FF4u;
label_1a1ff4:
    // 0x1a1ff4: 0x0  nop
    ctx->pc = 0x1a1ff4u;
    // NOP
label_1a1ff8:
    // 0x1a1ff8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1a1ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1a1ffc:
    // 0x1a1ffc: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1a1ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_1a2000:
    // 0x1a2000: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1a2000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_1a2004:
    // 0x1a2004: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1a2004u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a2008:
    // 0x1a2008: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a2008u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a200c:
    // 0x1a200c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1a200cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_1a2010:
    // 0x1a2010: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1a2010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1a2014:
    // 0x1a2014: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a2014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a2018:
    // 0x1a2018: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x1a2018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_1a201c:
    // 0x1a201c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a201cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a2020:
    // 0x1a2020: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a2020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a2024:
    // 0x1a2024: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1a2024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1a2028:
    // 0x1a2028: 0xc068610  jal         func_1A1840
label_1a202c:
    if (ctx->pc == 0x1A202Cu) {
        ctx->pc = 0x1A202Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2028u;
        // 0x1a202c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2030u;
        goto label_1a2030;
    }
    ctx->pc = 0x1A2028u;
    SET_GPR_U32(ctx, 31, 0x1A2030u);
    ctx->pc = 0x1A202Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2028u;
    // 0x1a202c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    { ctx->pc = 0x1a1840; return; }
    ctx->pc = 0x1A2030u;
label_1a2030:
    // 0x1a2030: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a2030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a2034:
    // 0x1a2034: 0xc068610  jal         func_1A1840
label_1a2038:
    if (ctx->pc == 0x1A2038u) {
        ctx->pc = 0x1A2038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2034u;
        // 0x1a2038: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A203Cu;
        goto label_1a203c;
    }
    ctx->pc = 0x1A2034u;
    SET_GPR_U32(ctx, 31, 0x1A203Cu);
    ctx->pc = 0x1A2038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2034u;
    // 0x1a2038: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    { ctx->pc = 0x1a1840; return; }
    ctx->pc = 0x1A203Cu;
label_1a203c:
    // 0x1a203c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a203cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a2040:
    // 0x1a2040: 0xc068624  jal         func_1A1890
label_1a2044:
    if (ctx->pc == 0x1A2044u) {
        ctx->pc = 0x1A2044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2040u;
        // 0x1a2044: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2048u;
        goto label_1a2048;
    }
    ctx->pc = 0x1A2040u;
    SET_GPR_U32(ctx, 31, 0x1A2048u);
    ctx->pc = 0x1A2044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2040u;
    // 0x1a2044: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1890u;
    { ctx->pc = 0x1a1890; return; }
    ctx->pc = 0x1A2048u;
label_1a2048:
    // 0x1a2048: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a2048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a204c:
    // 0x1a204c: 0xc068610  jal         func_1A1840
label_1a2050:
    if (ctx->pc == 0x1A2050u) {
        ctx->pc = 0x1A2050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A204Cu;
        // 0x1a2050: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2054u;
        goto label_1a2054;
    }
    ctx->pc = 0x1A204Cu;
    SET_GPR_U32(ctx, 31, 0x1A2054u);
    ctx->pc = 0x1A2050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A204Cu;
    // 0x1a2050: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    { ctx->pc = 0x1a1840; return; }
    ctx->pc = 0x1A2054u;
label_1a2054:
    // 0x1a2054: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a2054u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a2058:
    // 0x1a2058: 0xc068624  jal         func_1A1890
label_1a205c:
    if (ctx->pc == 0x1A205Cu) {
        ctx->pc = 0x1A205Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2058u;
        // 0x1a205c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2060u;
        goto label_1a2060;
    }
    ctx->pc = 0x1A2058u;
    SET_GPR_U32(ctx, 31, 0x1A2060u);
    ctx->pc = 0x1A205Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2058u;
    // 0x1a205c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1890u;
    { ctx->pc = 0x1a1890; return; }
    ctx->pc = 0x1A2060u;
label_1a2060:
    // 0x1a2060: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a2060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a2064:
    // 0x1a2064: 0xc068610  jal         func_1A1840
label_1a2068:
    if (ctx->pc == 0x1A2068u) {
        ctx->pc = 0x1A2068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2064u;
        // 0x1a2068: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A206Cu;
        goto label_1a206c;
    }
    ctx->pc = 0x1A2064u;
    SET_GPR_U32(ctx, 31, 0x1A206Cu);
    ctx->pc = 0x1A2068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2064u;
    // 0x1a2068: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    { ctx->pc = 0x1a1840; return; }
    ctx->pc = 0x1A206Cu;
label_1a206c:
    // 0x1a206c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a206cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a2070:
    // 0x1a2070: 0xc068624  jal         func_1A1890
label_1a2074:
    if (ctx->pc == 0x1A2074u) {
        ctx->pc = 0x1A2074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2070u;
        // 0x1a2074: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2078u;
        goto label_1a2078;
    }
    ctx->pc = 0x1A2070u;
    SET_GPR_U32(ctx, 31, 0x1A2078u);
    ctx->pc = 0x1A2074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2070u;
    // 0x1a2074: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1890u;
    { ctx->pc = 0x1a1890; return; }
    ctx->pc = 0x1A2078u;
label_1a2078:
    // 0x1a2078: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a2078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a207c:
    // 0x1a207c: 0xc068610  jal         func_1A1840
label_1a2080:
    if (ctx->pc == 0x1A2080u) {
        ctx->pc = 0x1A2080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A207Cu;
        // 0x1a2080: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2084u;
        goto label_1a2084;
    }
    ctx->pc = 0x1A207Cu;
    SET_GPR_U32(ctx, 31, 0x1A2084u);
    ctx->pc = 0x1A2080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A207Cu;
    // 0x1a2080: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    { ctx->pc = 0x1a1840; return; }
    ctx->pc = 0x1A2084u;
label_1a2084:
    // 0x1a2084: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x1a2084u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_1a2088:
    // 0x1a2088: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a2088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a208c:
    // 0x1a208c: 0xc068610  jal         func_1A1840
label_1a2090:
    if (ctx->pc == 0x1A2090u) {
        ctx->pc = 0x1A2090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A208Cu;
        // 0x1a2090: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2094u;
        goto label_1a2094;
    }
    ctx->pc = 0x1A208Cu;
    SET_GPR_U32(ctx, 31, 0x1A2094u);
    ctx->pc = 0x1A2090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A208Cu;
    // 0x1a2090: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    { ctx->pc = 0x1a1840; return; }
    ctx->pc = 0x1A2094u;
label_1a2094:
    // 0x1a2094: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a2094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a2098:
    // 0x1a2098: 0xc068610  jal         func_1A1840
label_1a209c:
    if (ctx->pc == 0x1A209Cu) {
        ctx->pc = 0x1A209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2098u;
        // 0x1a209c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A20A0u;
        goto label_1a20a0;
    }
    ctx->pc = 0x1A2098u;
    SET_GPR_U32(ctx, 31, 0x1A20A0u);
    ctx->pc = 0x1A209Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2098u;
    // 0x1a209c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    { ctx->pc = 0x1a1840; return; }
    ctx->pc = 0x1A20A0u;
label_1a20a0:
    // 0x1a20a0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1a20a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a20a4:
    // 0x1a20a4: 0x118bc0  sll         $s1, $s1, 15
    ctx->pc = 0x1a20a4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 15));
label_1a20a8:
    // 0x1a20a8: 0x101780  sll         $v0, $s0, 30
    ctx->pc = 0x1a20a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 30));
label_1a20ac:
    // 0x1a20ac: 0x108082  srl         $s0, $s0, 2
    ctx->pc = 0x1a20acu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
label_1a20b0:
    // 0x1a20b0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x1a20b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_1a20b4:
    // 0x1a20b4: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x1a20b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_1a20b8:
    // 0x1a20b8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x1a20b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
label_1a20bc:
    // 0x1a20bc: 0xaed00008  sw          $s0, 0x8($s6)
    ctx->pc = 0x1a20bcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 16));
label_1a20c0:
    // 0x1a20c0: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
label_1a20c4:
    if (ctx->pc == 0x1A20C4u) {
        ctx->pc = 0x1A20C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A20C0u;
        // 0x1a20c4: 0xaec20004  sw          $v0, 0x4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A20C8u;
        goto label_1a20c8;
    }
    ctx->pc = 0x1A20C0u;
    {
        const bool branch_taken_0x1a20c0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A20C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A20C0u;
        // 0x1a20c4: 0xaec20004  sw          $v0, 0x4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a20c0) {
            ctx->pc = 0x1A20E8u;
            goto label_1a20e8;
        }
    }
    ctx->pc = 0x1A20C8u;
label_1a20c8:
    // 0x1a20c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a20c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a20cc:
    // 0x1a20cc: 0x0  nop
    ctx->pc = 0x1a20ccu;
    // NOP
label_1a20d0:
    // 0x1a20d0: 0xc068610  jal         func_1A1840
label_1a20d4:
    if (ctx->pc == 0x1A20D4u) {
        ctx->pc = 0x1A20D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A20D0u;
        // 0x1a20d4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A20D8u;
        goto label_1a20d8;
    }
    ctx->pc = 0x1A20D0u;
    SET_GPR_U32(ctx, 31, 0x1A20D8u);
    ctx->pc = 0x1A20D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A20D0u;
    // 0x1a20d4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    { ctx->pc = 0x1a1840; return; }
    ctx->pc = 0x1A20D8u;
label_1a20d8:
    // 0x1a20d8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1a20d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1a20dc:
    // 0x1a20dc: 0x2b4102b  sltu        $v0, $s5, $s4
    ctx->pc = 0x1a20dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_1a20e0:
    // 0x1a20e0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_1a20e4:
    if (ctx->pc == 0x1A20E4u) {
        ctx->pc = 0x1A20E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A20E0u;
        // 0x1a20e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A20E8u;
        goto label_1a20e8;
    }
    ctx->pc = 0x1A20E0u;
    {
        const bool branch_taken_0x1a20e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A20E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A20E0u;
        // 0x1a20e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a20e0) {
            ctx->pc = 0x1A20D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a20d0;
        }
    }
    ctx->pc = 0x1A20E8u;
label_1a20e8:
    // 0x1a20e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a20e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a20ec:
    // 0x1a20ec: 0xc0685e2  jal         func_1A1788
label_1a20f0:
    if (ctx->pc == 0x1A20F0u) {
        ctx->pc = 0x1A20F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A20ECu;
        // 0x1a20f0: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A20F4u;
        goto label_1a20f4;
    }
    ctx->pc = 0x1A20ECu;
    SET_GPR_U32(ctx, 31, 0x1A20F4u);
    ctx->pc = 0x1A20F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A20ECu;
    // 0x1a20f0: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1788u;
    { ctx->pc = 0x1a1788; return; }
    ctx->pc = 0x1A20F4u;
label_1a20f4:
    // 0x1a20f4: 0x240301bb  addiu       $v1, $zero, 0x1BB
    ctx->pc = 0x1a20f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 443));
label_1a20f8:
    // 0x1a20f8: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
label_1a20fc:
    if (ctx->pc == 0x1A20FCu) {
        ctx->pc = 0x1A20FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A20F8u;
        // 0x1a20fc: 0xaec0000c  sw          $zero, 0xC($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2100u;
        goto label_1a2100;
    }
    ctx->pc = 0x1A20F8u;
    {
        const bool branch_taken_0x1a20f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a20f8) {
            ctx->pc = 0x1A20FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A20F8u;
            // 0x1a20fc: 0xaec0000c  sw          $zero, 0xC($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A211Cu;
            goto label_1a211c;
        }
    }
    ctx->pc = 0x1A2100u;
label_1a2100:
    // 0x1a2100: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a2100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a2104:
    // 0x1a2104: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a2104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a2108:
    // 0x1a2108: 0xaec2000c  sw          $v0, 0xC($s6)
    ctx->pc = 0x1a2108u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 2));
label_1a210c:
    // 0x1a210c: 0xc068852  jal         func_1A2148
label_1a2110:
    if (ctx->pc == 0x1A2110u) {
        ctx->pc = 0x1A2110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A210Cu;
        // 0x1a2110: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2114u;
        goto label_1a2114;
    }
    ctx->pc = 0x1A210Cu;
    SET_GPR_U32(ctx, 31, 0x1A2114u);
    ctx->pc = 0x1A2110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A210Cu;
    // 0x1a2110: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2148u;
    goto label_1a2148;
    ctx->pc = 0x1A2114u;
label_1a2114:
    // 0x1a2114: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a2118:
    if (ctx->pc == 0x1A2118u) {
        ctx->pc = 0x1A2118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2114u;
        // 0x1a2118: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A211Cu;
        goto label_1a211c;
    }
    ctx->pc = 0x1A2114u;
    {
        const bool branch_taken_0x1a2114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2114u;
        // 0x1a2118: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2114) {
            ctx->pc = 0x1A2120u;
            goto label_1a2120;
        }
    }
    ctx->pc = 0x1A211Cu;
label_1a211c:
    // 0x1a211c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1a211cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1a2120:
    // 0x1a2120: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a2120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a2124:
    // 0x1a2124: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1a2124u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a2128:
    // 0x1a2128: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1a2128u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a212c:
    // 0x1a212c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1a212cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a2130:
    // 0x1a2130: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a2130u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a2134:
    // 0x1a2134: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a2134u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a2138:
    // 0x1a2138: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a2138u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a213c:
    // 0x1a213c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a213cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a2140:
    // 0x1a2140: 0x3e00008  jr          $ra
label_1a2144:
    if (ctx->pc == 0x1A2144u) {
        ctx->pc = 0x1A2144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2140u;
        // 0x1a2144: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2148u;
        goto label_1a2148;
    }
    ctx->pc = 0x1A2140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2140u;
        // 0x1a2144: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2148u;
label_1a2148:
    // 0x1a2148: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a2148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a214c:
    // 0x1a214c: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x1a214cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_1a2150:
    // 0x1a2150: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a2150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a2154:
    // 0x1a2154: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a2154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a2158:
    // 0x1a2158: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a2158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a215c:
    // 0x1a215c: 0xc068610  jal         func_1A1840
label_1a2160:
    if (ctx->pc == 0x1A2160u) {
        ctx->pc = 0x1A2160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A215Cu;
        // 0x1a2160: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2164u;
        goto label_1a2164;
    }
    ctx->pc = 0x1A215Cu;
    SET_GPR_U32(ctx, 31, 0x1A2164u);
    ctx->pc = 0x1A2160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A215Cu;
    // 0x1a2160: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    { ctx->pc = 0x1a1840; return; }
    ctx->pc = 0x1A2164u;
label_1a2164:
    // 0x1a2164: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1a2164u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a2168:
    // 0x1a2168: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a2168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a216c:
    // 0x1a216c: 0xc068610  jal         func_1A1840
label_1a2170:
    if (ctx->pc == 0x1A2170u) {
        ctx->pc = 0x1A2170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A216Cu;
        // 0x1a2170: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2174u;
        goto label_1a2174;
    }
    ctx->pc = 0x1A216Cu;
    SET_GPR_U32(ctx, 31, 0x1A2174u);
    ctx->pc = 0x1A2170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A216Cu;
    // 0x1a2170: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    { ctx->pc = 0x1a1840; return; }
    ctx->pc = 0x1A2174u;
label_1a2174:
    // 0x1a2174: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a2178:
    if (ctx->pc == 0x1A2178u) {
        ctx->pc = 0x1A2178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2174u;
        // 0x1a2178: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A217Cu;
        goto label_1a217c;
    }
    ctx->pc = 0x1A2174u;
    {
        const bool branch_taken_0x1a2174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2174u;
        // 0x1a2178: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2174) {
            ctx->pc = 0x1A2190u;
            goto label_1a2190;
        }
    }
    ctx->pc = 0x1A217Cu;
label_1a217c:
    // 0x1a217c: 0x0  nop
    ctx->pc = 0x1a217cu;
    // NOP
label_1a2180:
    // 0x1a2180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a2180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a2184:
    // 0x1a2184: 0xc068610  jal         func_1A1840
label_1a2188:
    if (ctx->pc == 0x1A2188u) {
        ctx->pc = 0x1A2188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2184u;
        // 0x1a2188: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A218Cu;
        goto label_1a218c;
    }
    ctx->pc = 0x1A2184u;
    SET_GPR_U32(ctx, 31, 0x1A218Cu);
    ctx->pc = 0x1A2188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2184u;
    // 0x1a2188: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    { ctx->pc = 0x1a1840; return; }
    ctx->pc = 0x1A218Cu;
label_1a218c:
    // 0x1a218c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a218cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a2190:
    // 0x1a2190: 0xc0685e2  jal         func_1A1788
label_1a2194:
    if (ctx->pc == 0x1A2194u) {
        ctx->pc = 0x1A2194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2190u;
        // 0x1a2194: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2198u;
        goto label_1a2198;
    }
    ctx->pc = 0x1A2190u;
    SET_GPR_U32(ctx, 31, 0x1A2198u);
    ctx->pc = 0x1A2194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2190u;
    // 0x1a2194: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1788u;
    { ctx->pc = 0x1a1788; return; }
    ctx->pc = 0x1A2198u;
label_1a2198:
    // 0x1a2198: 0x1051fff9  beq         $v0, $s1, . + 4 + (-0x7 << 2)
label_1a219c:
    if (ctx->pc == 0x1A219Cu) {
        ctx->pc = 0x1A219Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2198u;
        // 0x1a219c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A21A0u;
        goto label_1a21a0;
    }
    ctx->pc = 0x1A2198u;
    {
        const bool branch_taken_0x1a2198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1A219Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2198u;
        // 0x1a219c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2198) {
            ctx->pc = 0x1A2180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a2180;
        }
    }
    ctx->pc = 0x1A21A0u;
label_1a21a0:
    // 0x1a21a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a21a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a21a4:
    // 0x1a21a4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a21a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a21a8:
    // 0x1a21a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a21a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a21ac:
    // 0x1a21ac: 0x3e00008  jr          $ra
label_1a21b0:
    if (ctx->pc == 0x1A21B0u) {
        ctx->pc = 0x1A21B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A21ACu;
        // 0x1a21b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A21B4u;
        goto label_1a21b4;
    }
    ctx->pc = 0x1A21ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A21B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A21ACu;
        // 0x1a21b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A21ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A21B4u;
label_1a21b4:
    // 0x1a21b4: 0x0  nop
    ctx->pc = 0x1a21b4u;
    // NOP
label_1a21b8:
    // 0x1a21b8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1a21b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1a21bc:
    // 0x1a21bc: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x1a21bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
label_1a21c0:
    // 0x1a21c0: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1a21c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_1a21c4:
    // 0x1a21c4: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x1a21c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_1a21c8:
    // 0x1a21c8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1a21c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a21cc:
    // 0x1a21cc: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1a21ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_1a21d0:
    // 0x1a21d0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a21d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a21d4:
    // 0x1a21d4: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x1a21d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
label_1a21d8:
    // 0x1a21d8: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1a21d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1a21dc:
    // 0x1a21dc: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x1a21dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
label_1a21e0:
    // 0x1a21e0: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x1a21e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_1a21e4:
    // 0x1a21e4: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x1a21e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
label_1a21e8:
    // 0x1a21e8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1a21e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_1a21ec:
    // 0x1a21ec: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1a21ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_1a21f0:
    // 0x1a21f0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a21f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1a21f4:
    // 0x1a21f4: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x1a21f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_1a21f8:
    // 0x1a21f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1a21f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1a21fc:
    // 0x1a21fc: 0xae820028  sw          $v0, 0x28($s4)
    ctx->pc = 0x1a21fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
label_1a2200:
    // 0x1a2200: 0x2468a288  addiu       $t0, $v1, -0x5D78
    ctx->pc = 0x1a2200u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943368));
label_1a2204:
    // 0x1a2204: 0x69020007  ldl         $v0, 0x7($t0)
    ctx->pc = 0x1a2204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1a2208:
    // 0x1a2208: 0x6d020000  ldr         $v0, 0x0($t0)
    ctx->pc = 0x1a2208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1a220c:
    // 0x1a220c: 0x6906000f  ldl         $a2, 0xF($t0)
    ctx->pc = 0x1a220cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1a2210:
    // 0x1a2210: 0x6d060008  ldr         $a2, 0x8($t0)
    ctx->pc = 0x1a2210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1a2214:
    // 0x1a2214: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1a2214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a2218:
    // 0x1a2218: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1a2218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a221c:
    // 0x1a221c: 0xb3a6000f  sdl         $a2, 0xF($sp)
    ctx->pc = 0x1a221cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a2220:
    // 0x1a2220: 0xb7a60008  sdr         $a2, 0x8($sp)
    ctx->pc = 0x1a2220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a2224:
    // 0x1a2224: 0xc068610  jal         func_1A1840
label_1a2228:
    if (ctx->pc == 0x1A2228u) {
        ctx->pc = 0x1A2228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2224u;
        // 0x1a2228: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A222Cu;
        goto label_1a222c;
    }
    ctx->pc = 0x1A2224u;
    SET_GPR_U32(ctx, 31, 0x1A222Cu);
    ctx->pc = 0x1A2228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2224u;
    // 0x1a2228: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    { ctx->pc = 0x1a1840; return; }
    ctx->pc = 0x1A222Cu;
label_1a222c:
    // 0x1a222c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a222cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a2230:
    // 0x1a2230: 0xc068610  jal         func_1A1840
label_1a2234:
    if (ctx->pc == 0x1A2234u) {
        ctx->pc = 0x1A2234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2230u;
        // 0x1a2234: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2238u;
        goto label_1a2238;
    }
    ctx->pc = 0x1A2230u;
    SET_GPR_U32(ctx, 31, 0x1A2238u);
    ctx->pc = 0x1A2234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2230u;
    // 0x1a2234: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    { ctx->pc = 0x1a1840; return; }
    ctx->pc = 0x1A2238u;
label_1a2238:
    // 0x1a2238: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a2238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1a223c:
    // 0x1a223c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a223cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a2240:
    // 0x1a2240: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x1a2240u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
label_1a2244:
    // 0x1a2244: 0xc068610  jal         func_1A1840
label_1a2248:
    if (ctx->pc == 0x1A2248u) {
        ctx->pc = 0x1A2248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2244u;
        // 0x1a2248: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A224Cu;
        goto label_1a224c;
    }
    ctx->pc = 0x1A2244u;
    SET_GPR_U32(ctx, 31, 0x1A224Cu);
    ctx->pc = 0x1A2248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2244u;
    // 0x1a2248: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    { ctx->pc = 0x1a1840; return; }
    ctx->pc = 0x1A224Cu;
label_1a224c:
    // 0x1a224c: 0xde840000  ld          $a0, 0x0($s4)
    ctx->pc = 0x1a224cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 0)));
label_1a2250:
    // 0x1a2250: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a2250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a2254:
    // 0x1a2254: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x1a2254u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
label_1a2258:
    // 0x1a2258: 0x3402bc00  ori         $v0, $zero, 0xBC00
    ctx->pc = 0x1a2258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48128);
label_1a225c:
    // 0x1a225c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1a225cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_1a2260:
    // 0x1a2260: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a2260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a2264:
    // 0x1a2264: 0xfe830010  sd          $v1, 0x10($s4)
    ctx->pc = 0x1a2264u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 3));
label_1a2268:
    // 0x1a2268: 0x10820115  beq         $a0, $v0, . + 4 + (0x115 << 2)
label_1a226c:
    if (ctx->pc == 0x1A226Cu) {
        ctx->pc = 0x1A226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2268u;
        // 0x1a226c: 0xfe830018  sd          $v1, 0x18($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2270u;
        goto label_1a2270;
    }
    ctx->pc = 0x1A2268u;
    {
        const bool branch_taken_0x1a2268 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2268u;
        // 0x1a226c: 0xfe830018  sd          $v1, 0x18($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2268) {
            ctx->pc = 0x1A26C0u;
            { ctx->pc = 0x1a26c0; return; }
        }
    }
    ctx->pc = 0x1A2270u;
label_1a2270:
    // 0x1a2270: 0x3402be00  ori         $v0, $zero, 0xBE00
    ctx->pc = 0x1a2270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48640);
label_1a2274:
    // 0x1a2274: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1a2274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_1a2278:
    // 0x1a2278: 0x108200f5  beq         $a0, $v0, . + 4 + (0xF5 << 2)
label_1a227c:
    if (ctx->pc == 0x1A227Cu) {
        ctx->pc = 0x1A2280u;
        goto label_1a2280;
    }
    ctx->pc = 0x1A2278u;
    {
        const bool branch_taken_0x1a2278 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a2278) {
            ctx->pc = 0x1A2650u;
            { ctx->pc = 0x1a2650; return; }
        }
    }
    ctx->pc = 0x1A2280u;
label_1a2280:
    // 0x1a2280: 0x3402bf00  ori         $v0, $zero, 0xBF00
    ctx->pc = 0x1a2280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48896);
label_1a2284:
    // 0x1a2284: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1a2284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_1a2288:
    // 0x1a2288: 0x108200f1  beq         $a0, $v0, . + 4 + (0xF1 << 2)
label_1a228c:
    if (ctx->pc == 0x1A228Cu) {
        ctx->pc = 0x1A2290u;
        goto label_1a2290;
    }
    ctx->pc = 0x1A2288u;
    {
        const bool branch_taken_0x1a2288 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a2288) {
            ctx->pc = 0x1A2650u;
            { ctx->pc = 0x1a2650; return; }
        }
    }
    ctx->pc = 0x1A2290u;
label_1a2290:
    // 0x1a2290: 0x3402f000  ori         $v0, $zero, 0xF000
    ctx->pc = 0x1a2290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
label_1a2294:
    // 0x1a2294: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1a2294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_1a2298:
    // 0x1a2298: 0x108200ed  beq         $a0, $v0, . + 4 + (0xED << 2)
label_1a229c:
    if (ctx->pc == 0x1A229Cu) {
        ctx->pc = 0x1A22A0u;
        goto label_1a22a0;
    }
    ctx->pc = 0x1A2298u;
    {
        const bool branch_taken_0x1a2298 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a2298) {
            ctx->pc = 0x1A2650u;
            { ctx->pc = 0x1a2650; return; }
        }
    }
    ctx->pc = 0x1A22A0u;
label_1a22a0:
    // 0x1a22a0: 0x3402f100  ori         $v0, $zero, 0xF100
    ctx->pc = 0x1a22a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61696);
label_1a22a4:
    // 0x1a22a4: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1a22a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_1a22a8:
    // 0x1a22a8: 0x108200e9  beq         $a0, $v0, . + 4 + (0xE9 << 2)
label_1a22ac:
    if (ctx->pc == 0x1A22ACu) {
        ctx->pc = 0x1A22B0u;
        goto label_1a22b0;
    }
    ctx->pc = 0x1A22A8u;
    {
        const bool branch_taken_0x1a22a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a22a8) {
            ctx->pc = 0x1A2650u;
            { ctx->pc = 0x1a2650; return; }
        }
    }
    ctx->pc = 0x1A22B0u;
label_1a22b0:
    // 0x1a22b0: 0x3402ff00  ori         $v0, $zero, 0xFF00
    ctx->pc = 0x1a22b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
label_1a22b4:
    // 0x1a22b4: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1a22b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_1a22b8:
    // 0x1a22b8: 0x108200e5  beq         $a0, $v0, . + 4 + (0xE5 << 2)
label_1a22bc:
    if (ctx->pc == 0x1A22BCu) {
        ctx->pc = 0x1A22C0u;
        goto label_1a22c0;
    }
    ctx->pc = 0x1A22B8u;
    {
        const bool branch_taken_0x1a22b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a22b8) {
            ctx->pc = 0x1A2650u;
            { ctx->pc = 0x1a2650; return; }
        }
    }
    ctx->pc = 0x1A22C0u;
label_1a22c0:
    // 0x1a22c0: 0x3402f200  ori         $v0, $zero, 0xF200
    ctx->pc = 0x1a22c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61952);
label_1a22c4:
    // 0x1a22c4: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1a22c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_1a22c8:
    // 0x1a22c8: 0x108200e1  beq         $a0, $v0, . + 4 + (0xE1 << 2)
label_1a22cc:
    if (ctx->pc == 0x1A22CCu) {
        ctx->pc = 0x1A22D0u;
        goto label_1a22d0;
    }
    ctx->pc = 0x1A22C8u;
    {
        const bool branch_taken_0x1a22c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a22c8) {
            ctx->pc = 0x1A2650u;
            { ctx->pc = 0x1a2650; return; }
        }
    }
    ctx->pc = 0x1A22D0u;
label_1a22d0:
    // 0x1a22d0: 0x3402f800  ori         $v0, $zero, 0xF800
    ctx->pc = 0x1a22d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63488);
label_1a22d4:
    // 0x1a22d4: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1a22d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_1a22d8:
    // 0x1a22d8: 0x108200dd  beq         $a0, $v0, . + 4 + (0xDD << 2)
label_1a22dc:
    if (ctx->pc == 0x1A22DCu) {
        ctx->pc = 0x1A22E0u;
        goto label_1a22e0;
    }
    ctx->pc = 0x1A22D8u;
    {
        const bool branch_taken_0x1a22d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a22d8) {
            ctx->pc = 0x1A2650u;
            { ctx->pc = 0x1a2650; return; }
        }
    }
    ctx->pc = 0x1A22E0u;
label_1a22e0:
    // 0x1a22e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a22e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a22e4:
    // 0x1a22e4: 0xc068610  jal         func_1A1840
label_1a22e8:
    if (ctx->pc == 0x1A22E8u) {
        ctx->pc = 0x1A22E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A22E4u;
        // 0x1a22e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A22ECu;
        goto label_1a22ec;
    }
    ctx->pc = 0x1A22E4u;
    SET_GPR_U32(ctx, 31, 0x1A22ECu);
    ctx->pc = 0x1A22E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A22E4u;
    // 0x1a22e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    { ctx->pc = 0x1a1840; return; }
    ctx->pc = 0x1A22ECu;
label_1a22ec:
    // 0x1a22ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a22ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a22f0:
    // 0x1a22f0: 0xc068610  jal         func_1A1840
label_1a22f4:
    if (ctx->pc == 0x1A22F4u) {
        ctx->pc = 0x1A22F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A22F0u;
        // 0x1a22f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A22F8u;
        goto label_1a22f8;
    }
    ctx->pc = 0x1A22F0u;
    SET_GPR_U32(ctx, 31, 0x1A22F8u);
    ctx->pc = 0x1A22F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A22F0u;
    // 0x1a22f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    { ctx->pc = 0x1a1840; return; }
    ctx->pc = 0x1A22F8u;
label_1a22f8:
    // 0x1a22f8: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x1a22f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
label_1a22fc:
    // 0x1a22fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a22fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a2300:
    // 0x1a2300: 0xc068610  jal         func_1A1840
label_1a2304:
    if (ctx->pc == 0x1A2304u) {
        ctx->pc = 0x1A2304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2300u;
        // 0x1a2304: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2308u;
        goto label_1a2308;
    }
    ctx->pc = 0x1A2300u;
    SET_GPR_U32(ctx, 31, 0x1A2308u);
    ctx->pc = 0x1A2304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2300u;
    // 0x1a2304: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    { ctx->pc = 0x1a1840; return; }
    ctx->pc = 0x1A2308u;
label_1a2308:
    // 0x1a2308: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a2308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a230c:
    // 0x1a230c: 0xc068610  jal         func_1A1840
label_1a2310:
    if (ctx->pc == 0x1A2310u) {
        ctx->pc = 0x1A2310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A230Cu;
        // 0x1a2310: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2314u;
        goto label_1a2314;
    }
    ctx->pc = 0x1A230Cu;
    SET_GPR_U32(ctx, 31, 0x1A2314u);
    ctx->pc = 0x1A2310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A230Cu;
    // 0x1a2310: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    { ctx->pc = 0x1a1840; return; }
    ctx->pc = 0x1A2314u;
label_1a2314:
    // 0x1a2314: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1a2314u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a2318:
    // 0x1a2318: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a2318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a231c:
    // 0x1a231c: 0xc068610  jal         func_1A1840
label_1a2320:
    if (ctx->pc == 0x1A2320u) {
        ctx->pc = 0x1A2320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A231Cu;
        // 0x1a2320: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2324u;
        goto label_1a2324;
    }
    ctx->pc = 0x1A231Cu;
    SET_GPR_U32(ctx, 31, 0x1A2324u);
    ctx->pc = 0x1A2320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A231Cu;
    // 0x1a2320: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    { ctx->pc = 0x1a1840; return; }
    ctx->pc = 0x1A2324u;
label_1a2324:
    // 0x1a2324: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1a2324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_1a2328:
    // 0x1a2328: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a2328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a232c:
    // 0x1a232c: 0xc068610  jal         func_1A1840
label_1a2330:
    if (ctx->pc == 0x1A2330u) {
        ctx->pc = 0x1A2330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A232Cu;
        // 0x1a2330: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2334u;
        goto label_1a2334;
    }
    ctx->pc = 0x1A232Cu;
    SET_GPR_U32(ctx, 31, 0x1A2334u);
    ctx->pc = 0x1A2330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A232Cu;
    // 0x1a2330: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    { ctx->pc = 0x1a1840; return; }
    ctx->pc = 0x1A2334u;
label_1a2334:
    // 0x1a2334: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1a2334u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a2338:
    // 0x1a2338: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a2338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a233c:
    // 0x1a233c: 0xc068610  jal         func_1A1840
label_1a2340:
    if (ctx->pc == 0x1A2340u) {
        ctx->pc = 0x1A2340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A233Cu;
        // 0x1a2340: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2344u;
        goto label_1a2344;
    }
    ctx->pc = 0x1A233Cu;
    SET_GPR_U32(ctx, 31, 0x1A2344u);
    ctx->pc = 0x1A2340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A233Cu;
    // 0x1a2340: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    { ctx->pc = 0x1a1840; return; }
    ctx->pc = 0x1A2344u;
label_1a2344:
    // 0x1a2344: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1a2344u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a2348u;
    return;
}

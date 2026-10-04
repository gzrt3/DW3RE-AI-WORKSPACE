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


void FUN_0019b808_part145(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1e1d08u: goto label_1e1d08;
        case 0x1e1d0cu: goto label_1e1d0c;
        case 0x1e1d10u: goto label_1e1d10;
        case 0x1e1d14u: goto label_1e1d14;
        case 0x1e1d18u: goto label_1e1d18;
        case 0x1e1d1cu: goto label_1e1d1c;
        case 0x1e1d20u: goto label_1e1d20;
        case 0x1e1d24u: goto label_1e1d24;
        case 0x1e1d28u: goto label_1e1d28;
        case 0x1e1d2cu: goto label_1e1d2c;
        case 0x1e1d30u: goto label_1e1d30;
        case 0x1e1d34u: goto label_1e1d34;
        case 0x1e1d38u: goto label_1e1d38;
        case 0x1e1d3cu: goto label_1e1d3c;
        case 0x1e1d40u: goto label_1e1d40;
        case 0x1e1d44u: goto label_1e1d44;
        case 0x1e1d48u: goto label_1e1d48;
        case 0x1e1d4cu: goto label_1e1d4c;
        case 0x1e1d50u: goto label_1e1d50;
        case 0x1e1d54u: goto label_1e1d54;
        case 0x1e1d58u: goto label_1e1d58;
        case 0x1e1d5cu: goto label_1e1d5c;
        case 0x1e1d60u: goto label_1e1d60;
        case 0x1e1d64u: goto label_1e1d64;
        case 0x1e1d68u: goto label_1e1d68;
        case 0x1e1d6cu: goto label_1e1d6c;
        case 0x1e1d70u: goto label_1e1d70;
        case 0x1e1d74u: goto label_1e1d74;
        case 0x1e1d78u: goto label_1e1d78;
        case 0x1e1d7cu: goto label_1e1d7c;
        case 0x1e1d80u: goto label_1e1d80;
        case 0x1e1d84u: goto label_1e1d84;
        case 0x1e1d88u: goto label_1e1d88;
        case 0x1e1d8cu: goto label_1e1d8c;
        case 0x1e1d90u: goto label_1e1d90;
        case 0x1e1d94u: goto label_1e1d94;
        case 0x1e1d98u: goto label_1e1d98;
        case 0x1e1d9cu: goto label_1e1d9c;
        case 0x1e1da0u: goto label_1e1da0;
        case 0x1e1da4u: goto label_1e1da4;
        case 0x1e1da8u: goto label_1e1da8;
        case 0x1e1dacu: goto label_1e1dac;
        case 0x1e1db0u: goto label_1e1db0;
        case 0x1e1db4u: goto label_1e1db4;
        case 0x1e1db8u: goto label_1e1db8;
        case 0x1e1dbcu: goto label_1e1dbc;
        case 0x1e1dc0u: goto label_1e1dc0;
        case 0x1e1dc4u: goto label_1e1dc4;
        case 0x1e1dc8u: goto label_1e1dc8;
        case 0x1e1dccu: goto label_1e1dcc;
        case 0x1e1dd0u: goto label_1e1dd0;
        case 0x1e1dd4u: goto label_1e1dd4;
        case 0x1e1dd8u: goto label_1e1dd8;
        case 0x1e1ddcu: goto label_1e1ddc;
        case 0x1e1de0u: goto label_1e1de0;
        case 0x1e1de4u: goto label_1e1de4;
        case 0x1e1de8u: goto label_1e1de8;
        case 0x1e1decu: goto label_1e1dec;
        case 0x1e1df0u: goto label_1e1df0;
        case 0x1e1df4u: goto label_1e1df4;
        case 0x1e1df8u: goto label_1e1df8;
        case 0x1e1dfcu: goto label_1e1dfc;
        case 0x1e1e00u: goto label_1e1e00;
        case 0x1e1e04u: goto label_1e1e04;
        case 0x1e1e08u: goto label_1e1e08;
        case 0x1e1e0cu: goto label_1e1e0c;
        case 0x1e1e10u: goto label_1e1e10;
        case 0x1e1e14u: goto label_1e1e14;
        case 0x1e1e18u: goto label_1e1e18;
        case 0x1e1e1cu: goto label_1e1e1c;
        case 0x1e1e20u: goto label_1e1e20;
        case 0x1e1e24u: goto label_1e1e24;
        case 0x1e1e28u: goto label_1e1e28;
        case 0x1e1e2cu: goto label_1e1e2c;
        case 0x1e1e30u: goto label_1e1e30;
        case 0x1e1e34u: goto label_1e1e34;
        case 0x1e1e38u: goto label_1e1e38;
        case 0x1e1e3cu: goto label_1e1e3c;
        case 0x1e1e40u: goto label_1e1e40;
        case 0x1e1e44u: goto label_1e1e44;
        case 0x1e1e48u: goto label_1e1e48;
        case 0x1e1e4cu: goto label_1e1e4c;
        case 0x1e1e50u: goto label_1e1e50;
        case 0x1e1e54u: goto label_1e1e54;
        case 0x1e1e58u: goto label_1e1e58;
        case 0x1e1e5cu: goto label_1e1e5c;
        case 0x1e1e60u: goto label_1e1e60;
        case 0x1e1e64u: goto label_1e1e64;
        case 0x1e1e68u: goto label_1e1e68;
        case 0x1e1e6cu: goto label_1e1e6c;
        case 0x1e1e70u: goto label_1e1e70;
        case 0x1e1e74u: goto label_1e1e74;
        case 0x1e1e78u: goto label_1e1e78;
        case 0x1e1e7cu: goto label_1e1e7c;
        case 0x1e1e80u: goto label_1e1e80;
        case 0x1e1e84u: goto label_1e1e84;
        case 0x1e1e88u: goto label_1e1e88;
        case 0x1e1e8cu: goto label_1e1e8c;
        case 0x1e1e90u: goto label_1e1e90;
        case 0x1e1e94u: goto label_1e1e94;
        case 0x1e1e98u: goto label_1e1e98;
        case 0x1e1e9cu: goto label_1e1e9c;
        case 0x1e1ea0u: goto label_1e1ea0;
        case 0x1e1ea4u: goto label_1e1ea4;
        case 0x1e1ea8u: goto label_1e1ea8;
        case 0x1e1eacu: goto label_1e1eac;
        case 0x1e1eb0u: goto label_1e1eb0;
        case 0x1e1eb4u: goto label_1e1eb4;
        case 0x1e1eb8u: goto label_1e1eb8;
        case 0x1e1ebcu: goto label_1e1ebc;
        case 0x1e1ec0u: goto label_1e1ec0;
        case 0x1e1ec4u: goto label_1e1ec4;
        case 0x1e1ec8u: goto label_1e1ec8;
        case 0x1e1eccu: goto label_1e1ecc;
        case 0x1e1ed0u: goto label_1e1ed0;
        case 0x1e1ed4u: goto label_1e1ed4;
        case 0x1e1ed8u: goto label_1e1ed8;
        case 0x1e1edcu: goto label_1e1edc;
        case 0x1e1ee0u: goto label_1e1ee0;
        case 0x1e1ee4u: goto label_1e1ee4;
        case 0x1e1ee8u: goto label_1e1ee8;
        case 0x1e1eecu: goto label_1e1eec;
        case 0x1e1ef0u: goto label_1e1ef0;
        case 0x1e1ef4u: goto label_1e1ef4;
        case 0x1e1ef8u: goto label_1e1ef8;
        case 0x1e1efcu: goto label_1e1efc;
        case 0x1e1f00u: goto label_1e1f00;
        case 0x1e1f04u: goto label_1e1f04;
        case 0x1e1f08u: goto label_1e1f08;
        case 0x1e1f0cu: goto label_1e1f0c;
        case 0x1e1f10u: goto label_1e1f10;
        case 0x1e1f14u: goto label_1e1f14;
        case 0x1e1f18u: goto label_1e1f18;
        case 0x1e1f1cu: goto label_1e1f1c;
        case 0x1e1f20u: goto label_1e1f20;
        case 0x1e1f24u: goto label_1e1f24;
        case 0x1e1f28u: goto label_1e1f28;
        case 0x1e1f2cu: goto label_1e1f2c;
        case 0x1e1f30u: goto label_1e1f30;
        case 0x1e1f34u: goto label_1e1f34;
        case 0x1e1f38u: goto label_1e1f38;
        case 0x1e1f3cu: goto label_1e1f3c;
        case 0x1e1f40u: goto label_1e1f40;
        case 0x1e1f44u: goto label_1e1f44;
        case 0x1e1f48u: goto label_1e1f48;
        case 0x1e1f4cu: goto label_1e1f4c;
        case 0x1e1f50u: goto label_1e1f50;
        case 0x1e1f54u: goto label_1e1f54;
        case 0x1e1f58u: goto label_1e1f58;
        case 0x1e1f5cu: goto label_1e1f5c;
        case 0x1e1f60u: goto label_1e1f60;
        case 0x1e1f64u: goto label_1e1f64;
        case 0x1e1f68u: goto label_1e1f68;
        case 0x1e1f6cu: goto label_1e1f6c;
        case 0x1e1f70u: goto label_1e1f70;
        case 0x1e1f74u: goto label_1e1f74;
        case 0x1e1f78u: goto label_1e1f78;
        case 0x1e1f7cu: goto label_1e1f7c;
        case 0x1e1f80u: goto label_1e1f80;
        case 0x1e1f84u: goto label_1e1f84;
        case 0x1e1f88u: goto label_1e1f88;
        case 0x1e1f8cu: goto label_1e1f8c;
        case 0x1e1f90u: goto label_1e1f90;
        case 0x1e1f94u: goto label_1e1f94;
        case 0x1e1f98u: goto label_1e1f98;
        case 0x1e1f9cu: goto label_1e1f9c;
        case 0x1e1fa0u: goto label_1e1fa0;
        case 0x1e1fa4u: goto label_1e1fa4;
        case 0x1e1fa8u: goto label_1e1fa8;
        case 0x1e1facu: goto label_1e1fac;
        case 0x1e1fb0u: goto label_1e1fb0;
        case 0x1e1fb4u: goto label_1e1fb4;
        case 0x1e1fb8u: goto label_1e1fb8;
        case 0x1e1fbcu: goto label_1e1fbc;
        case 0x1e1fc0u: goto label_1e1fc0;
        case 0x1e1fc4u: goto label_1e1fc4;
        case 0x1e1fc8u: goto label_1e1fc8;
        case 0x1e1fccu: goto label_1e1fcc;
        case 0x1e1fd0u: goto label_1e1fd0;
        case 0x1e1fd4u: goto label_1e1fd4;
        case 0x1e1fd8u: goto label_1e1fd8;
        case 0x1e1fdcu: goto label_1e1fdc;
        case 0x1e1fe0u: goto label_1e1fe0;
        case 0x1e1fe4u: goto label_1e1fe4;
        case 0x1e1fe8u: goto label_1e1fe8;
        case 0x1e1fecu: goto label_1e1fec;
        case 0x1e1ff0u: goto label_1e1ff0;
        case 0x1e1ff4u: goto label_1e1ff4;
        case 0x1e1ff8u: goto label_1e1ff8;
        case 0x1e1ffcu: goto label_1e1ffc;
        case 0x1e2000u: goto label_1e2000;
        case 0x1e2004u: goto label_1e2004;
        case 0x1e2008u: goto label_1e2008;
        case 0x1e200cu: goto label_1e200c;
        case 0x1e2010u: goto label_1e2010;
        case 0x1e2014u: goto label_1e2014;
        case 0x1e2018u: goto label_1e2018;
        case 0x1e201cu: goto label_1e201c;
        case 0x1e2020u: goto label_1e2020;
        case 0x1e2024u: goto label_1e2024;
        case 0x1e2028u: goto label_1e2028;
        case 0x1e202cu: goto label_1e202c;
        case 0x1e2030u: goto label_1e2030;
        case 0x1e2034u: goto label_1e2034;
        case 0x1e2038u: goto label_1e2038;
        case 0x1e203cu: goto label_1e203c;
        case 0x1e2040u: goto label_1e2040;
        case 0x1e2044u: goto label_1e2044;
        case 0x1e2048u: goto label_1e2048;
        case 0x1e204cu: goto label_1e204c;
        case 0x1e2050u: goto label_1e2050;
        case 0x1e2054u: goto label_1e2054;
        case 0x1e2058u: goto label_1e2058;
        case 0x1e205cu: goto label_1e205c;
        case 0x1e2060u: goto label_1e2060;
        case 0x1e2064u: goto label_1e2064;
        case 0x1e2068u: goto label_1e2068;
        case 0x1e206cu: goto label_1e206c;
        case 0x1e2070u: goto label_1e2070;
        case 0x1e2074u: goto label_1e2074;
        case 0x1e2078u: goto label_1e2078;
        case 0x1e207cu: goto label_1e207c;
        case 0x1e2080u: goto label_1e2080;
        case 0x1e2084u: goto label_1e2084;
        case 0x1e2088u: goto label_1e2088;
        case 0x1e208cu: goto label_1e208c;
        case 0x1e2090u: goto label_1e2090;
        case 0x1e2094u: goto label_1e2094;
        case 0x1e2098u: goto label_1e2098;
        case 0x1e209cu: goto label_1e209c;
        case 0x1e20a0u: goto label_1e20a0;
        case 0x1e20a4u: goto label_1e20a4;
        case 0x1e20a8u: goto label_1e20a8;
        case 0x1e20acu: goto label_1e20ac;
        case 0x1e20b0u: goto label_1e20b0;
        case 0x1e20b4u: goto label_1e20b4;
        case 0x1e20b8u: goto label_1e20b8;
        case 0x1e20bcu: goto label_1e20bc;
        case 0x1e20c0u: goto label_1e20c0;
        case 0x1e20c4u: goto label_1e20c4;
        case 0x1e20c8u: goto label_1e20c8;
        case 0x1e20ccu: goto label_1e20cc;
        case 0x1e20d0u: goto label_1e20d0;
        case 0x1e20d4u: goto label_1e20d4;
        case 0x1e20d8u: goto label_1e20d8;
        case 0x1e20dcu: goto label_1e20dc;
        case 0x1e20e0u: goto label_1e20e0;
        case 0x1e20e4u: goto label_1e20e4;
        case 0x1e20e8u: goto label_1e20e8;
        case 0x1e20ecu: goto label_1e20ec;
        case 0x1e20f0u: goto label_1e20f0;
        case 0x1e20f4u: goto label_1e20f4;
        case 0x1e20f8u: goto label_1e20f8;
        case 0x1e20fcu: goto label_1e20fc;
        case 0x1e2100u: goto label_1e2100;
        case 0x1e2104u: goto label_1e2104;
        case 0x1e2108u: goto label_1e2108;
        case 0x1e210cu: goto label_1e210c;
        case 0x1e2110u: goto label_1e2110;
        case 0x1e2114u: goto label_1e2114;
        case 0x1e2118u: goto label_1e2118;
        case 0x1e211cu: goto label_1e211c;
        case 0x1e2120u: goto label_1e2120;
        case 0x1e2124u: goto label_1e2124;
        case 0x1e2128u: goto label_1e2128;
        case 0x1e212cu: goto label_1e212c;
        case 0x1e2130u: goto label_1e2130;
        case 0x1e2134u: goto label_1e2134;
        case 0x1e2138u: goto label_1e2138;
        case 0x1e213cu: goto label_1e213c;
        case 0x1e2140u: goto label_1e2140;
        case 0x1e2144u: goto label_1e2144;
        case 0x1e2148u: goto label_1e2148;
        case 0x1e214cu: goto label_1e214c;
        case 0x1e2150u: goto label_1e2150;
        case 0x1e2154u: goto label_1e2154;
        case 0x1e2158u: goto label_1e2158;
        case 0x1e215cu: goto label_1e215c;
        case 0x1e2160u: goto label_1e2160;
        case 0x1e2164u: goto label_1e2164;
        case 0x1e2168u: goto label_1e2168;
        case 0x1e216cu: goto label_1e216c;
        case 0x1e2170u: goto label_1e2170;
        case 0x1e2174u: goto label_1e2174;
        case 0x1e2178u: goto label_1e2178;
        case 0x1e217cu: goto label_1e217c;
        case 0x1e2180u: goto label_1e2180;
        case 0x1e2184u: goto label_1e2184;
        case 0x1e2188u: goto label_1e2188;
        case 0x1e218cu: goto label_1e218c;
        case 0x1e2190u: goto label_1e2190;
        case 0x1e2194u: goto label_1e2194;
        case 0x1e2198u: goto label_1e2198;
        case 0x1e219cu: goto label_1e219c;
        case 0x1e21a0u: goto label_1e21a0;
        case 0x1e21a4u: goto label_1e21a4;
        case 0x1e21a8u: goto label_1e21a8;
        case 0x1e21acu: goto label_1e21ac;
        case 0x1e21b0u: goto label_1e21b0;
        case 0x1e21b4u: goto label_1e21b4;
        case 0x1e21b8u: goto label_1e21b8;
        case 0x1e21bcu: goto label_1e21bc;
        case 0x1e21c0u: goto label_1e21c0;
        case 0x1e21c4u: goto label_1e21c4;
        case 0x1e21c8u: goto label_1e21c8;
        case 0x1e21ccu: goto label_1e21cc;
        case 0x1e21d0u: goto label_1e21d0;
        case 0x1e21d4u: goto label_1e21d4;
        case 0x1e21d8u: goto label_1e21d8;
        case 0x1e21dcu: goto label_1e21dc;
        case 0x1e21e0u: goto label_1e21e0;
        case 0x1e21e4u: goto label_1e21e4;
        case 0x1e21e8u: goto label_1e21e8;
        case 0x1e21ecu: goto label_1e21ec;
        case 0x1e21f0u: goto label_1e21f0;
        case 0x1e21f4u: goto label_1e21f4;
        case 0x1e21f8u: goto label_1e21f8;
        case 0x1e21fcu: goto label_1e21fc;
        case 0x1e2200u: goto label_1e2200;
        case 0x1e2204u: goto label_1e2204;
        case 0x1e2208u: goto label_1e2208;
        case 0x1e220cu: goto label_1e220c;
        case 0x1e2210u: goto label_1e2210;
        case 0x1e2214u: goto label_1e2214;
        case 0x1e2218u: goto label_1e2218;
        case 0x1e221cu: goto label_1e221c;
        case 0x1e2220u: goto label_1e2220;
        case 0x1e2224u: goto label_1e2224;
        case 0x1e2228u: goto label_1e2228;
        case 0x1e222cu: goto label_1e222c;
        case 0x1e2230u: goto label_1e2230;
        case 0x1e2234u: goto label_1e2234;
        case 0x1e2238u: goto label_1e2238;
        case 0x1e223cu: goto label_1e223c;
        case 0x1e2240u: goto label_1e2240;
        case 0x1e2244u: goto label_1e2244;
        case 0x1e2248u: goto label_1e2248;
        case 0x1e224cu: goto label_1e224c;
        case 0x1e2250u: goto label_1e2250;
        case 0x1e2254u: goto label_1e2254;
        case 0x1e2258u: goto label_1e2258;
        case 0x1e225cu: goto label_1e225c;
        case 0x1e2260u: goto label_1e2260;
        case 0x1e2264u: goto label_1e2264;
        case 0x1e2268u: goto label_1e2268;
        case 0x1e226cu: goto label_1e226c;
        case 0x1e2270u: goto label_1e2270;
        case 0x1e2274u: goto label_1e2274;
        case 0x1e2278u: goto label_1e2278;
        case 0x1e227cu: goto label_1e227c;
        case 0x1e2280u: goto label_1e2280;
        case 0x1e2284u: goto label_1e2284;
        case 0x1e2288u: goto label_1e2288;
        case 0x1e228cu: goto label_1e228c;
        case 0x1e2290u: goto label_1e2290;
        case 0x1e2294u: goto label_1e2294;
        case 0x1e2298u: goto label_1e2298;
        case 0x1e229cu: goto label_1e229c;
        case 0x1e22a0u: goto label_1e22a0;
        case 0x1e22a4u: goto label_1e22a4;
        case 0x1e22a8u: goto label_1e22a8;
        case 0x1e22acu: goto label_1e22ac;
        case 0x1e22b0u: goto label_1e22b0;
        case 0x1e22b4u: goto label_1e22b4;
        case 0x1e22b8u: goto label_1e22b8;
        case 0x1e22bcu: goto label_1e22bc;
        case 0x1e22c0u: goto label_1e22c0;
        case 0x1e22c4u: goto label_1e22c4;
        case 0x1e22c8u: goto label_1e22c8;
        case 0x1e22ccu: goto label_1e22cc;
        case 0x1e22d0u: goto label_1e22d0;
        case 0x1e22d4u: goto label_1e22d4;
        case 0x1e22d8u: goto label_1e22d8;
        case 0x1e22dcu: goto label_1e22dc;
        case 0x1e22e0u: goto label_1e22e0;
        case 0x1e22e4u: goto label_1e22e4;
        case 0x1e22e8u: goto label_1e22e8;
        case 0x1e22ecu: goto label_1e22ec;
        case 0x1e22f0u: goto label_1e22f0;
        case 0x1e22f4u: goto label_1e22f4;
        case 0x1e22f8u: goto label_1e22f8;
        case 0x1e22fcu: goto label_1e22fc;
        case 0x1e2300u: goto label_1e2300;
        case 0x1e2304u: goto label_1e2304;
        case 0x1e2308u: goto label_1e2308;
        case 0x1e230cu: goto label_1e230c;
        case 0x1e2310u: goto label_1e2310;
        case 0x1e2314u: goto label_1e2314;
        case 0x1e2318u: goto label_1e2318;
        case 0x1e231cu: goto label_1e231c;
        case 0x1e2320u: goto label_1e2320;
        case 0x1e2324u: goto label_1e2324;
        case 0x1e2328u: goto label_1e2328;
        case 0x1e232cu: goto label_1e232c;
        case 0x1e2330u: goto label_1e2330;
        case 0x1e2334u: goto label_1e2334;
        case 0x1e2338u: goto label_1e2338;
        case 0x1e233cu: goto label_1e233c;
        case 0x1e2340u: goto label_1e2340;
        case 0x1e2344u: goto label_1e2344;
        case 0x1e2348u: goto label_1e2348;
        case 0x1e234cu: goto label_1e234c;
        case 0x1e2350u: goto label_1e2350;
        case 0x1e2354u: goto label_1e2354;
        case 0x1e2358u: goto label_1e2358;
        case 0x1e235cu: goto label_1e235c;
        case 0x1e2360u: goto label_1e2360;
        case 0x1e2364u: goto label_1e2364;
        case 0x1e2368u: goto label_1e2368;
        case 0x1e236cu: goto label_1e236c;
        case 0x1e2370u: goto label_1e2370;
        case 0x1e2374u: goto label_1e2374;
        case 0x1e2378u: goto label_1e2378;
        case 0x1e237cu: goto label_1e237c;
        case 0x1e2380u: goto label_1e2380;
        case 0x1e2384u: goto label_1e2384;
        case 0x1e2388u: goto label_1e2388;
        case 0x1e238cu: goto label_1e238c;
        case 0x1e2390u: goto label_1e2390;
        case 0x1e2394u: goto label_1e2394;
        case 0x1e2398u: goto label_1e2398;
        case 0x1e239cu: goto label_1e239c;
        case 0x1e23a0u: goto label_1e23a0;
        case 0x1e23a4u: goto label_1e23a4;
        case 0x1e23a8u: goto label_1e23a8;
        case 0x1e23acu: goto label_1e23ac;
        case 0x1e23b0u: goto label_1e23b0;
        case 0x1e23b4u: goto label_1e23b4;
        case 0x1e23b8u: goto label_1e23b8;
        case 0x1e23bcu: goto label_1e23bc;
        case 0x1e23c0u: goto label_1e23c0;
        case 0x1e23c4u: goto label_1e23c4;
        case 0x1e23c8u: goto label_1e23c8;
        case 0x1e23ccu: goto label_1e23cc;
        case 0x1e23d0u: goto label_1e23d0;
        case 0x1e23d4u: goto label_1e23d4;
        case 0x1e23d8u: goto label_1e23d8;
        case 0x1e23dcu: goto label_1e23dc;
        case 0x1e23e0u: goto label_1e23e0;
        case 0x1e23e4u: goto label_1e23e4;
        case 0x1e23e8u: goto label_1e23e8;
        case 0x1e23ecu: goto label_1e23ec;
        case 0x1e23f0u: goto label_1e23f0;
        case 0x1e23f4u: goto label_1e23f4;
        case 0x1e23f8u: goto label_1e23f8;
        case 0x1e23fcu: goto label_1e23fc;
        case 0x1e2400u: goto label_1e2400;
        case 0x1e2404u: goto label_1e2404;
        case 0x1e2408u: goto label_1e2408;
        case 0x1e240cu: goto label_1e240c;
        case 0x1e2410u: goto label_1e2410;
        case 0x1e2414u: goto label_1e2414;
        case 0x1e2418u: goto label_1e2418;
        case 0x1e241cu: goto label_1e241c;
        case 0x1e2420u: goto label_1e2420;
        case 0x1e2424u: goto label_1e2424;
        case 0x1e2428u: goto label_1e2428;
        case 0x1e242cu: goto label_1e242c;
        case 0x1e2430u: goto label_1e2430;
        case 0x1e2434u: goto label_1e2434;
        case 0x1e2438u: goto label_1e2438;
        case 0x1e243cu: goto label_1e243c;
        case 0x1e2440u: goto label_1e2440;
        case 0x1e2444u: goto label_1e2444;
        case 0x1e2448u: goto label_1e2448;
        case 0x1e244cu: goto label_1e244c;
        case 0x1e2450u: goto label_1e2450;
        case 0x1e2454u: goto label_1e2454;
        case 0x1e2458u: goto label_1e2458;
        case 0x1e245cu: goto label_1e245c;
        case 0x1e2460u: goto label_1e2460;
        case 0x1e2464u: goto label_1e2464;
        case 0x1e2468u: goto label_1e2468;
        case 0x1e246cu: goto label_1e246c;
        case 0x1e2470u: goto label_1e2470;
        case 0x1e2474u: goto label_1e2474;
        case 0x1e2478u: goto label_1e2478;
        case 0x1e247cu: goto label_1e247c;
        case 0x1e2480u: goto label_1e2480;
        case 0x1e2484u: goto label_1e2484;
        case 0x1e2488u: goto label_1e2488;
        case 0x1e248cu: goto label_1e248c;
        case 0x1e2490u: goto label_1e2490;
        case 0x1e2494u: goto label_1e2494;
        case 0x1e2498u: goto label_1e2498;
        case 0x1e249cu: goto label_1e249c;
        case 0x1e24a0u: goto label_1e24a0;
        case 0x1e24a4u: goto label_1e24a4;
        case 0x1e24a8u: goto label_1e24a8;
        case 0x1e24acu: goto label_1e24ac;
        case 0x1e24b0u: goto label_1e24b0;
        case 0x1e24b4u: goto label_1e24b4;
        case 0x1e24b8u: goto label_1e24b8;
        case 0x1e24bcu: goto label_1e24bc;
        case 0x1e24c0u: goto label_1e24c0;
        case 0x1e24c4u: goto label_1e24c4;
        case 0x1e24c8u: goto label_1e24c8;
        case 0x1e24ccu: goto label_1e24cc;
        case 0x1e24d0u: goto label_1e24d0;
        case 0x1e24d4u: goto label_1e24d4;
        default: return;
    }

label_1e1d08:
    // 0x1e1d08: 0x0  nop
    ctx->pc = 0x1e1d08u;
    // NOP
label_1e1d0c:
    // 0x1e1d0c: 0x0  nop
    ctx->pc = 0x1e1d0cu;
    // NOP
label_1e1d10:
    // 0x1e1d10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e1d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1e1d14:
    // 0x1e1d14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e1d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1d18:
    // 0x1e1d18: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1e1d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1e1d1c:
    // 0x1e1d1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e1d1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1d20:
    // 0x1e1d20: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e1d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1e1d24:
    // 0x1e1d24: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e1d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e1d28:
    // 0x1e1d28: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1e1d28u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e1d2c:
    // 0x1e1d2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e1d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e1d30:
    // 0x1e1d30: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1e1d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1e1d34:
    // 0x1e1d34: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e1d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e1d38:
    // 0x1e1d38: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e1d38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1d3c:
    // 0x1e1d3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e1d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e1d40:
    // 0x1e1d40: 0xc04e188  jal         func_138620
label_1e1d44:
    if (ctx->pc == 0x1E1D44u) {
        ctx->pc = 0x1E1D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1D40u;
        // 0x1e1d44: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1D48u;
        goto label_1e1d48;
    }
    ctx->pc = 0x1E1D40u;
    SET_GPR_U32(ctx, 31, 0x1E1D48u);
    ctx->pc = 0x1E1D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1D40u;
    // 0x1e1d44: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138620u, 0x1E1D40u, 0x1E1D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1D48u;
label_1e1d48:
    // 0x1e1d48: 0x2412000a  addiu       $s2, $zero, 0xA
    ctx->pc = 0x1e1d48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1e1d4c:
    // 0x1e1d4c: 0x1660000c  bnez        $s3, . + 4 + (0xC << 2)
label_1e1d50:
    if (ctx->pc == 0x1E1D50u) {
        ctx->pc = 0x1E1D54u;
        goto label_1e1d54;
    }
    ctx->pc = 0x1E1D4Cu;
    {
        const bool branch_taken_0x1e1d4c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1d4c) {
            ctx->pc = 0x1E1D80u;
            goto label_1e1d80;
        }
    }
    ctx->pc = 0x1E1D54u;
label_1e1d54:
    // 0x1e1d54: 0xc04e198  jal         func_138660
label_1e1d58:
    if (ctx->pc == 0x1E1D58u) {
        ctx->pc = 0x1E1D5Cu;
        goto label_1e1d5c;
    }
    ctx->pc = 0x1E1D54u;
    SET_GPR_U32(ctx, 31, 0x1E1D5Cu);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x1E1D54u, 0x1E1D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1D5Cu;
label_1e1d5c:
    // 0x1e1d5c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1e1d60:
    if (ctx->pc == 0x1E1D60u) {
        ctx->pc = 0x1E1D64u;
        goto label_1e1d64;
    }
    ctx->pc = 0x1E1D5Cu;
    {
        const bool branch_taken_0x1e1d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1d5c) {
            ctx->pc = 0x1E1D80u;
            goto label_1e1d80;
        }
    }
    ctx->pc = 0x1E1D64u;
label_1e1d64:
    // 0x1e1d64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e1d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e1d68:
    // 0x1e1d68: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1e1d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1e1d6c:
    // 0x1e1d6c: 0xc078050  jal         func_1E0140
label_1e1d70:
    if (ctx->pc == 0x1E1D70u) {
        ctx->pc = 0x1E1D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1D6Cu;
        // 0x1e1d70: 0xaf828d94  sw          $v0, -0x726C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938004), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1D74u;
        goto label_1e1d74;
    }
    ctx->pc = 0x1E1D6Cu;
    SET_GPR_U32(ctx, 31, 0x1E1D74u);
    ctx->pc = 0x1E1D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1D6Cu;
    // 0x1e1d70: 0xaf828d94  sw          $v0, -0x726C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938004), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x1E1D74u;
label_1e1d74:
    // 0x1e1d74: 0xc078070  jal         func_1E01C0
label_1e1d78:
    if (ctx->pc == 0x1E1D78u) {
        ctx->pc = 0x1E1D7Cu;
        goto label_1e1d7c;
    }
    ctx->pc = 0x1E1D74u;
    SET_GPR_U32(ctx, 31, 0x1E1D7Cu);
    ctx->pc = 0x1E01C0u;
    { ctx->pc = 0x1e01c0; return; }
    ctx->pc = 0x1E1D7Cu;
label_1e1d7c:
    // 0x1e1d7c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1e1d7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e1d80:
    // 0x1e1d80: 0x8f848db8  lw          $a0, -0x7248($gp)
    ctx->pc = 0x1e1d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
label_1e1d84:
    // 0x1e1d84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e1d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e1d88:
    // 0x1e1d88: 0x2a410007  slti        $at, $s2, 0x7
    ctx->pc = 0x1e1d88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)7) ? 1 : 0);
label_1e1d8c:
    // 0x1e1d8c: 0xaf838d50  sw          $v1, -0x72B0($gp)
    ctx->pc = 0x1e1d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937936), GPR_U32(ctx, 3));
label_1e1d90:
    // 0x1e1d90: 0xaf808d48  sw          $zero, -0x72B8($gp)
    ctx->pc = 0x1e1d90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937928), GPR_U32(ctx, 0));
label_1e1d94:
    // 0x1e1d94: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1e1d94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1e1d98:
    // 0x1e1d98: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1e1d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_1e1d9c:
    // 0x1e1d9c: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x1e1d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1e1da0:
    // 0x1e1da0: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x1e1da0u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1e1da4:
    // 0x1e1da4: 0x0  nop
    ctx->pc = 0x1e1da4u;
    // NOP
label_1e1da8:
    // 0x1e1da8: 0x0  nop
    ctx->pc = 0x1e1da8u;
    // NOP
label_1e1dac:
    // 0x1e1dac: 0x1810  mfhi        $v1
    ctx->pc = 0x1e1dacu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1e1db0:
    // 0x1e1db0: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1e1db4:
    if (ctx->pc == 0x1E1DB4u) {
        ctx->pc = 0x1E1DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1DB0u;
        // 0x1e1db4: 0xaf838d4c  sw          $v1, -0x72B4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937932), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1DB8u;
        goto label_1e1db8;
    }
    ctx->pc = 0x1E1DB0u;
    {
        const bool branch_taken_0x1e1db0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1DB0u;
        // 0x1e1db4: 0xaf838d4c  sw          $v1, -0x72B4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937932), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1db0) {
            ctx->pc = 0x1E1DC4u;
            goto label_1e1dc4;
        }
    }
    ctx->pc = 0x1E1DB8u;
label_1e1db8:
    // 0x1e1db8: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x1e1db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1e1dbc:
    // 0x1e1dbc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e1dc0:
    if (ctx->pc == 0x1E1DC0u) {
        ctx->pc = 0x1E1DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1DBCu;
        // 0x1e1dc0: 0x728823  subu        $s1, $v1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1DC4u;
        goto label_1e1dc4;
    }
    ctx->pc = 0x1E1DBCu;
    {
        const bool branch_taken_0x1e1dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1DBCu;
        // 0x1e1dc0: 0x728823  subu        $s1, $v1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1dbc) {
            ctx->pc = 0x1E1DC8u;
            goto label_1e1dc8;
        }
    }
    ctx->pc = 0x1E1DC4u;
label_1e1dc4:
    // 0x1e1dc4: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x1e1dc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1e1dc8:
    // 0x1e1dc8: 0x1a20000d  blez        $s1, . + 4 + (0xD << 2)
label_1e1dcc:
    if (ctx->pc == 0x1E1DCCu) {
        ctx->pc = 0x1E1DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1DC8u;
        // 0x1e1dcc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1DD0u;
        goto label_1e1dd0;
    }
    ctx->pc = 0x1E1DC8u;
    {
        const bool branch_taken_0x1e1dc8 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1E1DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1DC8u;
        // 0x1e1dcc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1dc8) {
            ctx->pc = 0x1E1E00u;
            goto label_1e1e00;
        }
    }
    ctx->pc = 0x1E1DD0u;
label_1e1dd0:
    // 0x1e1dd0: 0x24140050  addiu       $s4, $zero, 0x50
    ctx->pc = 0x1e1dd0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1e1dd4:
    // 0x1e1dd4: 0x0  nop
    ctx->pc = 0x1e1dd4u;
    // NOP
label_1e1dd8:
    // 0x1e1dd8: 0x291001a  div         $zero, $s4, $s1
    ctx->pc = 0x1e1dd8u;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 20);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1e1ddc:
    // 0x1e1ddc: 0x0  nop
    ctx->pc = 0x1e1ddcu;
    // NOP
label_1e1de0:
    // 0x1e1de0: 0x0  nop
    ctx->pc = 0x1e1de0u;
    // NOP
label_1e1de4:
    // 0x1e1de4: 0x1012  mflo        $v0
    ctx->pc = 0x1e1de4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1e1de8:
    // 0x1e1de8: 0xc078820  jal         func_1E2080
label_1e1dec:
    if (ctx->pc == 0x1E1DECu) {
        ctx->pc = 0x1E1DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1DE8u;
        // 0x1e1dec: 0xaf828d48  sw          $v0, -0x72B8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937928), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1DF0u;
        goto label_1e1df0;
    }
    ctx->pc = 0x1E1DE8u;
    SET_GPR_U32(ctx, 31, 0x1E1DF0u);
    ctx->pc = 0x1E1DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1DE8u;
    // 0x1e1dec: 0xaf828d48  sw          $v0, -0x72B8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937928), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2080u;
    goto label_1e2080;
    ctx->pc = 0x1E1DF0u;
label_1e1df0:
    // 0x1e1df0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e1df0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e1df4:
    // 0x1e1df4: 0x230082a  slt         $at, $s1, $s0
    ctx->pc = 0x1e1df4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_1e1df8:
    // 0x1e1df8: 0x1020fff6  beqz        $at, . + 4 + (-0xA << 2)
label_1e1dfc:
    if (ctx->pc == 0x1E1DFCu) {
        ctx->pc = 0x1E1DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1DF8u;
        // 0x1e1dfc: 0x26940050  addiu       $s4, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1E00u;
        goto label_1e1e00;
    }
    ctx->pc = 0x1E1DF8u;
    {
        const bool branch_taken_0x1e1df8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1DF8u;
        // 0x1e1dfc: 0x26940050  addiu       $s4, $s4, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1df8) {
            ctx->pc = 0x1E1DD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1dd4;
        }
    }
    ctx->pc = 0x1E1E00u;
label_1e1e00:
    // 0x1e1e00: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1e1e00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1e1e04:
    // 0x1e1e04: 0x1e40ffd1  bgtz        $s2, . + 4 + (-0x2F << 2)
label_1e1e08:
    if (ctx->pc == 0x1E1E08u) {
        ctx->pc = 0x1E1E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E04u;
        // 0x1e1e08: 0x3c03004b  lui         $v1, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1E0Cu;
        goto label_1e1e0c;
    }
    ctx->pc = 0x1E1E04u;
    {
        const bool branch_taken_0x1e1e04 = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x1E1E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E04u;
        // 0x1e1e08: 0x3c03004b  lui         $v1, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1e04) {
            ctx->pc = 0x1E1D4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1d4c;
        }
    }
    ctx->pc = 0x1E1E0Cu;
label_1e1e0c:
    // 0x1e1e0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e1e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e1e10:
    // 0x1e1e10: 0x152080  sll         $a0, $s5, 2
    ctx->pc = 0x1e1e10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_1e1e14:
    // 0x1e1e14: 0x246328a0  addiu       $v1, $v1, 0x28A0
    ctx->pc = 0x1e1e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10400));
label_1e1e18:
    // 0x1e1e18: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1e1e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e1e1c:
    // 0x1e1e1c: 0xaf958d4c  sw          $s5, -0x72B4($gp)
    ctx->pc = 0x1e1e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937932), GPR_U32(ctx, 21));
label_1e1e20:
    // 0x1e1e20: 0xaf808d48  sw          $zero, -0x72B8($gp)
    ctx->pc = 0x1e1e20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937928), GPR_U32(ctx, 0));
label_1e1e24:
    // 0x1e1e24: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1e1e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e1e28:
    // 0x1e1e28: 0xaf858d50  sw          $a1, -0x72B0($gp)
    ctx->pc = 0x1e1e28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937936), GPR_U32(ctx, 5));
label_1e1e2c:
    // 0x1e1e2c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1e1e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e1e30:
    // 0x1e1e30: 0xaf858d70  sw          $a1, -0x7290($gp)
    ctx->pc = 0x1e1e30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937968), GPR_U32(ctx, 5));
label_1e1e34:
    // 0x1e1e34: 0xaf838d68  sw          $v1, -0x7298($gp)
    ctx->pc = 0x1e1e34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937960), GPR_U32(ctx, 3));
label_1e1e38:
    // 0x1e1e38: 0xaf848d84  sw          $a0, -0x727C($gp)
    ctx->pc = 0x1e1e38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937988), GPR_U32(ctx, 4));
label_1e1e3c:
    // 0x1e1e3c: 0xaf848d6c  sw          $a0, -0x7294($gp)
    ctx->pc = 0x1e1e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937964), GPR_U32(ctx, 4));
label_1e1e40:
    // 0x1e1e40: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1e1e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1e1e44:
    // 0x1e1e44: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e1e44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e1e48:
    // 0x1e1e48: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e1e48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e1e4c:
    // 0x1e1e4c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e1e4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e1e50:
    // 0x1e1e50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e1e50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e1e54:
    // 0x1e1e54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e1e54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e1e58:
    // 0x1e1e58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e1e58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e1e5c:
    // 0x1e1e5c: 0x3e00008  jr          $ra
label_1e1e60:
    if (ctx->pc == 0x1E1E60u) {
        ctx->pc = 0x1E1E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E5Cu;
        // 0x1e1e60: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1E64u;
        goto label_1e1e64;
    }
    ctx->pc = 0x1E1E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E5Cu;
        // 0x1e1e60: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1E64u;
label_1e1e64:
    // 0x1e1e64: 0x0  nop
    ctx->pc = 0x1e1e64u;
    // NOP
label_1e1e68:
    // 0x1e1e68: 0x0  nop
    ctx->pc = 0x1e1e68u;
    // NOP
label_1e1e6c:
    // 0x1e1e6c: 0x0  nop
    ctx->pc = 0x1e1e6cu;
    // NOP
label_1e1e70:
    // 0x1e1e70: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e1e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1e1e74:
    // 0x1e1e74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e1e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e1e78:
    // 0x1e1e78: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1e1e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1e1e7c:
    // 0x1e1e7c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e1e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1e1e80:
    // 0x1e1e80: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e1e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e1e84:
    // 0x1e1e84: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e1e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e1e88:
    // 0x1e1e88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e1e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e1e8c:
    // 0x1e1e8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e1e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e1e90:
    // 0x1e1e90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e1e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e1e94:
    // 0x1e1e94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e1e94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e1e98:
    // 0x1e1e98: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e1e98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e1e9c:
    // 0x1e1e9c: 0xaf828d70  sw          $v0, -0x7290($gp)
    ctx->pc = 0x1e1e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937968), GPR_U32(ctx, 2));
label_1e1ea0:
    // 0x1e1ea0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e1ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e1ea4:
    // 0x1e1ea4: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
label_1e1ea8:
    if (ctx->pc == 0x1E1EA8u) {
        ctx->pc = 0x1E1EACu;
        goto label_1e1eac;
    }
    ctx->pc = 0x1E1EA4u;
    {
        const bool branch_taken_0x1e1ea4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e1ea4) {
            ctx->pc = 0x1E1ED0u;
            goto label_1e1ed0;
        }
    }
    ctx->pc = 0x1E1EACu;
label_1e1eac:
    // 0x1e1eac: 0x8f828db8  lw          $v0, -0x7248($gp)
    ctx->pc = 0x1e1eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
label_1e1eb0:
    // 0x1e1eb0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e1eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e1eb4:
    // 0x1e1eb4: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
label_1e1eb8:
    if (ctx->pc == 0x1E1EB8u) {
        ctx->pc = 0x1E1EBCu;
        goto label_1e1ebc;
    }
    ctx->pc = 0x1E1EB4u;
    {
        const bool branch_taken_0x1e1eb4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e1eb4) {
            ctx->pc = 0x1E1EC4u;
            goto label_1e1ec4;
        }
    }
    ctx->pc = 0x1E1EBCu;
label_1e1ebc:
    // 0x1e1ebc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e1ec0:
    if (ctx->pc == 0x1E1EC0u) {
        ctx->pc = 0x1E1EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1EBCu;
        // 0x1e1ec0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1EC4u;
        goto label_1e1ec4;
    }
    ctx->pc = 0x1E1EBCu;
    {
        const bool branch_taken_0x1e1ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1EBCu;
        // 0x1e1ec0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1ebc) {
            ctx->pc = 0x1E1EC8u;
            goto label_1e1ec8;
        }
    }
    ctx->pc = 0x1E1EC4u;
label_1e1ec4:
    // 0x1e1ec4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e1ec4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1e1ec8:
    // 0x1e1ec8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1e1ecc:
    if (ctx->pc == 0x1E1ECCu) {
        ctx->pc = 0x1E1ED0u;
        goto label_1e1ed0;
    }
    ctx->pc = 0x1E1EC8u;
    {
        const bool branch_taken_0x1e1ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1ec8) {
            ctx->pc = 0x1E1EE8u;
            goto label_1e1ee8;
        }
    }
    ctx->pc = 0x1E1ED0u;
label_1e1ed0:
    // 0x1e1ed0: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
label_1e1ed4:
    if (ctx->pc == 0x1E1ED4u) {
        ctx->pc = 0x1E1ED8u;
        goto label_1e1ed8;
    }
    ctx->pc = 0x1E1ED0u;
    {
        const bool branch_taken_0x1e1ed0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1ed0) {
            ctx->pc = 0x1E1EE4u;
            goto label_1e1ee4;
        }
    }
    ctx->pc = 0x1E1ED8u;
label_1e1ed8:
    // 0x1e1ed8: 0x8f828db8  lw          $v0, -0x7248($gp)
    ctx->pc = 0x1e1ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
label_1e1edc:
    // 0x1e1edc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e1ee0:
    if (ctx->pc == 0x1E1EE0u) {
        ctx->pc = 0x1E1EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1EDCu;
        // 0x1e1ee0: 0x2451ffff  addiu       $s1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1EE4u;
        goto label_1e1ee4;
    }
    ctx->pc = 0x1E1EDCu;
    {
        const bool branch_taken_0x1e1edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1EDCu;
        // 0x1e1ee0: 0x2451ffff  addiu       $s1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1edc) {
            ctx->pc = 0x1E1EE8u;
            goto label_1e1ee8;
        }
    }
    ctx->pc = 0x1E1EE4u;
label_1e1ee4:
    // 0x1e1ee4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1e1ee4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1e1ee8:
    // 0x1e1ee8: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1e1ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1e1eec:
    // 0x1e1eec: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x1e1eecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1e1ef0:
    // 0x1e1ef0: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x1e1ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_1e1ef4:
    // 0x1e1ef4: 0x44a021  addu        $s4, $v0, $a0
    ctx->pc = 0x1e1ef4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1e1ef8:
    // 0x1e1ef8: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x1e1ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_1e1efc:
    // 0x1e1efc: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1e1efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1e1f00:
    // 0x1e1f00: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1e1f04:
    if (ctx->pc == 0x1E1F04u) {
        ctx->pc = 0x1E1F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F00u;
        // 0x1e1f04: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1F08u;
        goto label_1e1f08;
    }
    ctx->pc = 0x1E1F00u;
    {
        const bool branch_taken_0x1e1f00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E1F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F00u;
        // 0x1e1f04: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1f00) {
            ctx->pc = 0x1E1F10u;
            goto label_1e1f10;
        }
    }
    ctx->pc = 0x1E1F08u;
label_1e1f08:
    // 0x1e1f08: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e1f0c:
    if (ctx->pc == 0x1E1F0Cu) {
        ctx->pc = 0x1E1F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F08u;
        // 0x1e1f0c: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1F10u;
        goto label_1e1f10;
    }
    ctx->pc = 0x1E1F08u;
    {
        const bool branch_taken_0x1e1f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F08u;
        // 0x1e1f0c: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1f08) {
            ctx->pc = 0x1E1F14u;
            goto label_1e1f14;
        }
    }
    ctx->pc = 0x1E1F10u;
label_1e1f10:
    // 0x1e1f10: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1e1f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e1f14:
    // 0x1e1f14: 0x14820020  bne         $a0, $v0, . + 4 + (0x20 << 2)
label_1e1f18:
    if (ctx->pc == 0x1E1F18u) {
        ctx->pc = 0x1E1F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F14u;
        // 0x1e1f18: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1F1Cu;
        goto label_1e1f1c;
    }
    ctx->pc = 0x1E1F14u;
    {
        const bool branch_taken_0x1e1f14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E1F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F14u;
        // 0x1e1f18: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1f14) {
            ctx->pc = 0x1E1F98u;
            goto label_1e1f98;
        }
    }
    ctx->pc = 0x1E1F1Cu;
label_1e1f1c:
    // 0x1e1f1c: 0x24130050  addiu       $s3, $zero, 0x50
    ctx->pc = 0x1e1f1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1e1f20:
    // 0x1e1f20: 0x2414ffb0  addiu       $s4, $zero, -0x50
    ctx->pc = 0x1e1f20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967216));
label_1e1f24:
    // 0x1e1f24: 0x0  nop
    ctx->pc = 0x1e1f24u;
    // NOP
label_1e1f28:
    // 0x1e1f28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e1f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e1f2c:
    // 0x1e1f2c: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
label_1e1f30:
    if (ctx->pc == 0x1E1F30u) {
        ctx->pc = 0x1E1F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F2Cu;
        // 0x1e1f30: 0x131083  sra         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1F34u;
        goto label_1e1f34;
    }
    ctx->pc = 0x1E1F2Cu;
    {
        const bool branch_taken_0x1e1f2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E1F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F2Cu;
        // 0x1e1f30: 0x131083  sra         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1f2c) {
            ctx->pc = 0x1E1F4Cu;
            goto label_1e1f4c;
        }
    }
    ctx->pc = 0x1E1F34u;
label_1e1f34:
    // 0x1e1f34: 0x6610003  bgez        $s3, . + 4 + (0x3 << 2)
label_1e1f38:
    if (ctx->pc == 0x1E1F38u) {
        ctx->pc = 0x1E1F3Cu;
        goto label_1e1f3c;
    }
    ctx->pc = 0x1E1F34u;
    {
        const bool branch_taken_0x1e1f34 = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x1e1f34) {
            ctx->pc = 0x1E1F44u;
            goto label_1e1f44;
        }
    }
    ctx->pc = 0x1E1F3Cu;
label_1e1f3c:
    // 0x1e1f3c: 0x26620003  addiu       $v0, $s3, 0x3
    ctx->pc = 0x1e1f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
label_1e1f40:
    // 0x1e1f40: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1e1f40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1e1f44:
    // 0x1e1f44: 0x10000007  b           . + 4 + (0x7 << 2)
label_1e1f48:
    if (ctx->pc == 0x1E1F48u) {
        ctx->pc = 0x1E1F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F44u;
        // 0x1e1f48: 0xaf828d48  sw          $v0, -0x72B8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937928), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1F4Cu;
        goto label_1e1f4c;
    }
    ctx->pc = 0x1E1F44u;
    {
        const bool branch_taken_0x1e1f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F44u;
        // 0x1e1f48: 0xaf828d48  sw          $v0, -0x72B8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937928), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1f44) {
            ctx->pc = 0x1E1F64u;
            goto label_1e1f64;
        }
    }
    ctx->pc = 0x1E1F4Cu;
label_1e1f4c:
    // 0x1e1f4c: 0x0  nop
    ctx->pc = 0x1e1f4cu;
    // NOP
label_1e1f50:
    // 0x1e1f50: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
label_1e1f54:
    if (ctx->pc == 0x1E1F54u) {
        ctx->pc = 0x1E1F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F50u;
        // 0x1e1f54: 0x141083  sra         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1F58u;
        goto label_1e1f58;
    }
    ctx->pc = 0x1E1F50u;
    {
        const bool branch_taken_0x1e1f50 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x1E1F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F50u;
        // 0x1e1f54: 0x141083  sra         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1f50) {
            ctx->pc = 0x1E1F60u;
            goto label_1e1f60;
        }
    }
    ctx->pc = 0x1E1F58u;
label_1e1f58:
    // 0x1e1f58: 0x26820003  addiu       $v0, $s4, 0x3
    ctx->pc = 0x1e1f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 3));
label_1e1f5c:
    // 0x1e1f5c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1e1f5cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1e1f60:
    // 0x1e1f60: 0xaf828d48  sw          $v0, -0x72B8($gp)
    ctx->pc = 0x1e1f60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937928), GPR_U32(ctx, 2));
label_1e1f64:
    // 0x1e1f64: 0x0  nop
    ctx->pc = 0x1e1f64u;
    // NOP
label_1e1f68:
    // 0x1e1f68: 0xc078820  jal         func_1E2080
label_1e1f6c:
    if (ctx->pc == 0x1E1F6Cu) {
        ctx->pc = 0x1E1F70u;
        goto label_1e1f70;
    }
    ctx->pc = 0x1E1F68u;
    SET_GPR_U32(ctx, 31, 0x1E1F70u);
    ctx->pc = 0x1E2080u;
    goto label_1e2080;
    ctx->pc = 0x1E1F70u;
label_1e1f70:
    // 0x1e1f70: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1e1f70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1e1f74:
    // 0x1e1f74: 0x26730050  addiu       $s3, $s3, 0x50
    ctx->pc = 0x1e1f74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
label_1e1f78:
    // 0x1e1f78: 0x2a410005  slti        $at, $s2, 0x5
    ctx->pc = 0x1e1f78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
label_1e1f7c:
    // 0x1e1f7c: 0x1420ffe9  bnez        $at, . + 4 + (-0x17 << 2)
label_1e1f80:
    if (ctx->pc == 0x1E1F80u) {
        ctx->pc = 0x1E1F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F7Cu;
        // 0x1e1f80: 0x2694ffb0  addiu       $s4, $s4, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1F84u;
        goto label_1e1f84;
    }
    ctx->pc = 0x1E1F7Cu;
    {
        const bool branch_taken_0x1e1f7c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F7Cu;
        // 0x1e1f80: 0x2694ffb0  addiu       $s4, $s4, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1f7c) {
            ctx->pc = 0x1E1F24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1f24;
        }
    }
    ctx->pc = 0x1E1F84u;
label_1e1f84:
    // 0x1e1f84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e1f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e1f88:
    // 0x1e1f88: 0xaf918d4c  sw          $s1, -0x72B4($gp)
    ctx->pc = 0x1e1f88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937932), GPR_U32(ctx, 17));
label_1e1f8c:
    // 0x1e1f8c: 0xaf828d50  sw          $v0, -0x72B0($gp)
    ctx->pc = 0x1e1f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937936), GPR_U32(ctx, 2));
label_1e1f90:
    // 0x1e1f90: 0x1000ffc3  b           . + 4 + (-0x3D << 2)
label_1e1f94:
    if (ctx->pc == 0x1E1F94u) {
        ctx->pc = 0x1E1F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F90u;
        // 0x1e1f94: 0xaf808d48  sw          $zero, -0x72B8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937928), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1F98u;
        goto label_1e1f98;
    }
    ctx->pc = 0x1E1F90u;
    {
        const bool branch_taken_0x1e1f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1F90u;
        // 0x1e1f94: 0xaf808d48  sw          $zero, -0x72B8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937928), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1f90) {
            ctx->pc = 0x1E1EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1ea0;
        }
    }
    ctx->pc = 0x1E1F98u;
label_1e1f98:
    // 0x1e1f98: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1e1f98u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e1f9c:
    // 0x1e1f9c: 0x24120050  addiu       $s2, $zero, 0x50
    ctx->pc = 0x1e1f9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1e1fa0:
    // 0x1e1fa0: 0x2413ffb0  addiu       $s3, $zero, -0x50
    ctx->pc = 0x1e1fa0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967216));
label_1e1fa4:
    // 0x1e1fa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e1fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e1fa8:
    // 0x1e1fa8: 0x1602000b  bne         $s0, $v0, . + 4 + (0xB << 2)
label_1e1fac:
    if (ctx->pc == 0x1E1FACu) {
        ctx->pc = 0x1E1FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1FA8u;
        // 0x1e1fac: 0x3c026666  lui         $v0, 0x6666 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1FB0u;
        goto label_1e1fb0;
    }
    ctx->pc = 0x1E1FA8u;
    {
        const bool branch_taken_0x1e1fa8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E1FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1FA8u;
        // 0x1e1fac: 0x3c026666  lui         $v0, 0x6666 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1fa8) {
            ctx->pc = 0x1E1FD8u;
            goto label_1e1fd8;
        }
    }
    ctx->pc = 0x1E1FB0u;
label_1e1fb0:
    // 0x1e1fb0: 0x121fc2  srl         $v1, $s2, 31
    ctx->pc = 0x1e1fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
label_1e1fb4:
    // 0x1e1fb4: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x1e1fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_1e1fb8:
    // 0x1e1fb8: 0x520018  mult        $zero, $v0, $s2
    ctx->pc = 0x1e1fb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1e1fbc:
    // 0x1e1fbc: 0x0  nop
    ctx->pc = 0x1e1fbcu;
    // NOP
label_1e1fc0:
    // 0x1e1fc0: 0x0  nop
    ctx->pc = 0x1e1fc0u;
    // NOP
label_1e1fc4:
    // 0x1e1fc4: 0x1010  mfhi        $v0
    ctx->pc = 0x1e1fc4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e1fc8:
    // 0x1e1fc8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1e1fc8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1e1fcc:
    // 0x1e1fcc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e1fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e1fd0:
    // 0x1e1fd0: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e1fd4:
    if (ctx->pc == 0x1E1FD4u) {
        ctx->pc = 0x1E1FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1FD0u;
        // 0x1e1fd4: 0xaf828d48  sw          $v0, -0x72B8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937928), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1FD8u;
        goto label_1e1fd8;
    }
    ctx->pc = 0x1E1FD0u;
    {
        const bool branch_taken_0x1e1fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1FD0u;
        // 0x1e1fd4: 0xaf828d48  sw          $v0, -0x72B8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937928), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1fd0) {
            ctx->pc = 0x1E2000u;
            goto label_1e2000;
        }
    }
    ctx->pc = 0x1E1FD8u;
label_1e1fd8:
    // 0x1e1fd8: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x1e1fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_1e1fdc:
    // 0x1e1fdc: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x1e1fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_1e1fe0:
    // 0x1e1fe0: 0x131fc2  srl         $v1, $s3, 31
    ctx->pc = 0x1e1fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 31));
label_1e1fe4:
    // 0x1e1fe4: 0x530018  mult        $zero, $v0, $s3
    ctx->pc = 0x1e1fe4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1e1fe8:
    // 0x1e1fe8: 0x0  nop
    ctx->pc = 0x1e1fe8u;
    // NOP
label_1e1fec:
    // 0x1e1fec: 0x0  nop
    ctx->pc = 0x1e1fecu;
    // NOP
label_1e1ff0:
    // 0x1e1ff0: 0x1010  mfhi        $v0
    ctx->pc = 0x1e1ff0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e1ff4:
    // 0x1e1ff4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1e1ff4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1e1ff8:
    // 0x1e1ff8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e1ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e1ffc:
    // 0x1e1ffc: 0xaf828d48  sw          $v0, -0x72B8($gp)
    ctx->pc = 0x1e1ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937928), GPR_U32(ctx, 2));
label_1e2000:
    // 0x1e2000: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1e2000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1e2004:
    // 0x1e2004: 0x12a20003  beq         $s5, $v0, . + 4 + (0x3 << 2)
label_1e2008:
    if (ctx->pc == 0x1E2008u) {
        ctx->pc = 0x1E200Cu;
        goto label_1e200c;
    }
    ctx->pc = 0x1E2004u;
    {
        const bool branch_taken_0x1e2004 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e2004) {
            ctx->pc = 0x1E2014u;
            goto label_1e2014;
        }
    }
    ctx->pc = 0x1E200Cu;
label_1e200c:
    // 0x1e200c: 0xc078820  jal         func_1E2080
label_1e2010:
    if (ctx->pc == 0x1E2010u) {
        ctx->pc = 0x1E2014u;
        goto label_1e2014;
    }
    ctx->pc = 0x1E200Cu;
    SET_GPR_U32(ctx, 31, 0x1E2014u);
    ctx->pc = 0x1E2080u;
    goto label_1e2080;
    ctx->pc = 0x1E2014u;
label_1e2014:
    // 0x1e2014: 0x0  nop
    ctx->pc = 0x1e2014u;
    // NOP
label_1e2018:
    // 0x1e2018: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1e2018u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1e201c:
    // 0x1e201c: 0x2aa1000b  slti        $at, $s5, 0xB
    ctx->pc = 0x1e201cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)11) ? 1 : 0);
label_1e2020:
    // 0x1e2020: 0x26520050  addiu       $s2, $s2, 0x50
    ctx->pc = 0x1e2020u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_1e2024:
    // 0x1e2024: 0x1420ffdf  bnez        $at, . + 4 + (-0x21 << 2)
label_1e2028:
    if (ctx->pc == 0x1E2028u) {
        ctx->pc = 0x1E2028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2024u;
        // 0x1e2028: 0x2673ffb0  addiu       $s3, $s3, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E202Cu;
        goto label_1e202c;
    }
    ctx->pc = 0x1E2024u;
    {
        const bool branch_taken_0x1e2024 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2024u;
        // 0x1e2028: 0x2673ffb0  addiu       $s3, $s3, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2024) {
            ctx->pc = 0x1E1FA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e1fa4;
        }
    }
    ctx->pc = 0x1E202Cu;
label_1e202c:
    // 0x1e202c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e202cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e2030:
    // 0x1e2030: 0xaf918d4c  sw          $s1, -0x72B4($gp)
    ctx->pc = 0x1e2030u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937932), GPR_U32(ctx, 17));
label_1e2034:
    // 0x1e2034: 0xaf808d48  sw          $zero, -0x72B8($gp)
    ctx->pc = 0x1e2034u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937928), GPR_U32(ctx, 0));
label_1e2038:
    // 0x1e2038: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1e2038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e203c:
    // 0x1e203c: 0xaf848d50  sw          $a0, -0x72B0($gp)
    ctx->pc = 0x1e203cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937936), GPR_U32(ctx, 4));
label_1e2040:
    // 0x1e2040: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e2040u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e2044:
    // 0x1e2044: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x1e2044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1e2048:
    // 0x1e2048: 0xaf848d70  sw          $a0, -0x7290($gp)
    ctx->pc = 0x1e2048u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937968), GPR_U32(ctx, 4));
label_1e204c:
    // 0x1e204c: 0xaf838d68  sw          $v1, -0x7298($gp)
    ctx->pc = 0x1e204cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937960), GPR_U32(ctx, 3));
label_1e2050:
    // 0x1e2050: 0xaf858d84  sw          $a1, -0x727C($gp)
    ctx->pc = 0x1e2050u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937988), GPR_U32(ctx, 5));
label_1e2054:
    // 0x1e2054: 0xaf858d6c  sw          $a1, -0x7294($gp)
    ctx->pc = 0x1e2054u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937964), GPR_U32(ctx, 5));
label_1e2058:
    // 0x1e2058: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1e2058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1e205c:
    // 0x1e205c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e205cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e2060:
    // 0x1e2060: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e2060u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e2064:
    // 0x1e2064: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e2064u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e2068:
    // 0x1e2068: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e2068u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e206c:
    // 0x1e206c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e206cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e2070:
    // 0x1e2070: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e2070u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e2074:
    // 0x1e2074: 0x3e00008  jr          $ra
label_1e2078:
    if (ctx->pc == 0x1E2078u) {
        ctx->pc = 0x1E2078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2074u;
        // 0x1e2078: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E207Cu;
        goto label_1e207c;
    }
    ctx->pc = 0x1E2074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2074u;
        // 0x1e2078: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E207Cu;
label_1e207c:
    // 0x1e207c: 0x0  nop
    ctx->pc = 0x1e207cu;
    // NOP
label_1e2080:
    // 0x1e2080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e2080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e2084:
    // 0x1e2084: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e2084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e2088:
    // 0x1e2088: 0xc07b18c  jal         func_1EC630
label_1e208c:
    if (ctx->pc == 0x1E208Cu) {
        ctx->pc = 0x1E2090u;
        goto label_1e2090;
    }
    ctx->pc = 0x1E2088u;
    SET_GPR_U32(ctx, 31, 0x1E2090u);
    ctx->pc = 0x1EC630u;
    { ctx->pc = 0x1ec630; return; }
    ctx->pc = 0x1E2090u;
label_1e2090:
    // 0x1e2090: 0x8f828d80  lw          $v0, -0x7280($gp)
    ctx->pc = 0x1e2090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937984)));
label_1e2094:
    // 0x1e2094: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1e2094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e2098:
    // 0x1e2098: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_1e209c:
    if (ctx->pc == 0x1E209Cu) {
        ctx->pc = 0x1E209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2098u;
        // 0x1e209c: 0x3062003f  andi        $v0, $v1, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E20A0u;
        goto label_1e20a0;
    }
    ctx->pc = 0x1E2098u;
    {
        const bool branch_taken_0x1e2098 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2098u;
        // 0x1e209c: 0x3062003f  andi        $v0, $v1, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2098) {
            ctx->pc = 0x1E20ACu;
            goto label_1e20ac;
        }
    }
    ctx->pc = 0x1E20A0u;
label_1e20a0:
    // 0x1e20a0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1e20a4:
    if (ctx->pc == 0x1E20A4u) {
        ctx->pc = 0x1E20A8u;
        goto label_1e20a8;
    }
    ctx->pc = 0x1E20A0u;
    {
        const bool branch_taken_0x1e20a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e20a0) {
            ctx->pc = 0x1E20ACu;
            goto label_1e20ac;
        }
    }
    ctx->pc = 0x1E20A8u;
label_1e20a8:
    // 0x1e20a8: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x1e20a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
label_1e20ac:
    // 0x1e20ac: 0x8f838d94  lw          $v1, -0x726C($gp)
    ctx->pc = 0x1e20acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938004)));
label_1e20b0:
    // 0x1e20b0: 0xaf828d80  sw          $v0, -0x7280($gp)
    ctx->pc = 0x1e20b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937984), GPR_U32(ctx, 2));
label_1e20b4:
    // 0x1e20b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e20b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e20b8:
    // 0x1e20b8: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_1e20bc:
    if (ctx->pc == 0x1E20BCu) {
        ctx->pc = 0x1E20C0u;
        goto label_1e20c0;
    }
    ctx->pc = 0x1E20B8u;
    {
        const bool branch_taken_0x1e20b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e20b8) {
            ctx->pc = 0x1E20FCu;
            goto label_1e20fc;
        }
    }
    ctx->pc = 0x1E20C0u;
label_1e20c0:
    // 0x1e20c0: 0x8f828d90  lw          $v0, -0x7270($gp)
    ctx->pc = 0x1e20c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938000)));
label_1e20c4:
    // 0x1e20c4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e20c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1e20c8:
    // 0x1e20c8: 0x28410108  slti        $at, $v0, 0x108
    ctx->pc = 0x1e20c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)264) ? 1 : 0);
label_1e20cc:
    // 0x1e20cc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1e20d0:
    if (ctx->pc == 0x1E20D0u) {
        ctx->pc = 0x1E20D4u;
        goto label_1e20d4;
    }
    ctx->pc = 0x1E20CCu;
    {
        const bool branch_taken_0x1e20cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e20cc) {
            ctx->pc = 0x1E20DCu;
            goto label_1e20dc;
        }
    }
    ctx->pc = 0x1E20D4u;
label_1e20d4:
    // 0x1e20d4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e20d8:
    if (ctx->pc == 0x1E20D8u) {
        ctx->pc = 0x1E20D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E20D4u;
        // 0x1e20d8: 0xaf828d90  sw          $v0, -0x7270($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938000), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E20DCu;
        goto label_1e20dc;
    }
    ctx->pc = 0x1E20D4u;
    {
        const bool branch_taken_0x1e20d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E20D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E20D4u;
        // 0x1e20d8: 0xaf828d90  sw          $v0, -0x7270($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938000), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e20d4) {
            ctx->pc = 0x1E20E4u;
            goto label_1e20e4;
        }
    }
    ctx->pc = 0x1E20DCu;
label_1e20dc:
    // 0x1e20dc: 0x24020108  addiu       $v0, $zero, 0x108
    ctx->pc = 0x1e20dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
label_1e20e0:
    // 0x1e20e0: 0xaf828d90  sw          $v0, -0x7270($gp)
    ctx->pc = 0x1e20e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938000), GPR_U32(ctx, 2));
label_1e20e4:
    // 0x1e20e4: 0x28420108  slti        $v0, $v0, 0x108
    ctx->pc = 0x1e20e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)264) ? 1 : 0);
label_1e20e8:
    // 0x1e20e8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1e20ec:
    if (ctx->pc == 0x1E20ECu) {
        ctx->pc = 0x1E20F0u;
        goto label_1e20f0;
    }
    ctx->pc = 0x1E20E8u;
    {
        const bool branch_taken_0x1e20e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e20e8) {
            ctx->pc = 0x1E2124u;
            goto label_1e2124;
        }
    }
    ctx->pc = 0x1E20F0u;
label_1e20f0:
    // 0x1e20f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e20f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e20f4:
    // 0x1e20f4: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e20f8:
    if (ctx->pc == 0x1E20F8u) {
        ctx->pc = 0x1E20F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E20F4u;
        // 0x1e20f8: 0xaf828d94  sw          $v0, -0x726C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938004), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E20FCu;
        goto label_1e20fc;
    }
    ctx->pc = 0x1E20F4u;
    {
        const bool branch_taken_0x1e20f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E20F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E20F4u;
        // 0x1e20f8: 0xaf828d94  sw          $v0, -0x726C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938004), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e20f4) {
            ctx->pc = 0x1E2124u;
            goto label_1e2124;
        }
    }
    ctx->pc = 0x1E20FCu;
label_1e20fc:
    // 0x1e20fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e20fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e2100:
    // 0x1e2100: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_1e2104:
    if (ctx->pc == 0x1E2104u) {
        ctx->pc = 0x1E2108u;
        goto label_1e2108;
    }
    ctx->pc = 0x1E2100u;
    {
        const bool branch_taken_0x1e2100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e2100) {
            ctx->pc = 0x1E2124u;
            goto label_1e2124;
        }
    }
    ctx->pc = 0x1E2108u;
label_1e2108:
    // 0x1e2108: 0x8f828d90  lw          $v0, -0x7270($gp)
    ctx->pc = 0x1e2108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938000)));
label_1e210c:
    // 0x1e210c: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1e210cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_1e2110:
    // 0x1e2110: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1e2110u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e2114:
    // 0x1e2114: 0x1100a  movz        $v0, $zero, $at
    ctx->pc = 0x1e2114u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1e2118:
    // 0x1e2118: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
label_1e211c:
    if (ctx->pc == 0x1E211Cu) {
        ctx->pc = 0x1E211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2118u;
        // 0x1e211c: 0xaf828d90  sw          $v0, -0x7270($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938000), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2120u;
        goto label_1e2120;
    }
    ctx->pc = 0x1E2118u;
    {
        const bool branch_taken_0x1e2118 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1E211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2118u;
        // 0x1e211c: 0xaf828d90  sw          $v0, -0x7270($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938000), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2118) {
            ctx->pc = 0x1E2124u;
            goto label_1e2124;
        }
    }
    ctx->pc = 0x1E2120u;
label_1e2120:
    // 0x1e2120: 0xaf808d94  sw          $zero, -0x726C($gp)
    ctx->pc = 0x1e2120u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938004), GPR_U32(ctx, 0));
label_1e2124:
    // 0x1e2124: 0x8f838d70  lw          $v1, -0x7290($gp)
    ctx->pc = 0x1e2124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
label_1e2128:
    // 0x1e2128: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e2128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e212c:
    // 0x1e212c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_1e2130:
    if (ctx->pc == 0x1E2130u) {
        ctx->pc = 0x1E2134u;
        goto label_1e2134;
    }
    ctx->pc = 0x1E212Cu;
    {
        const bool branch_taken_0x1e212c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e212c) {
            ctx->pc = 0x1E2150u;
            goto label_1e2150;
        }
    }
    ctx->pc = 0x1E2134u;
label_1e2134:
    // 0x1e2134: 0x8f828d68  lw          $v0, -0x7298($gp)
    ctx->pc = 0x1e2134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937960)));
label_1e2138:
    // 0x1e2138: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1e2138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_1e213c:
    // 0x1e213c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1e213cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e2140:
    // 0x1e2140: 0x1100a  movz        $v0, $zero, $at
    ctx->pc = 0x1e2140u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1e2144:
    // 0x1e2144: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1e2148:
    if (ctx->pc == 0x1E2148u) {
        ctx->pc = 0x1E2148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2144u;
        // 0x1e2148: 0xaf828d68  sw          $v0, -0x7298($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937960), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E214Cu;
        goto label_1e214c;
    }
    ctx->pc = 0x1E2144u;
    {
        const bool branch_taken_0x1e2144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2144u;
        // 0x1e2148: 0xaf828d68  sw          $v0, -0x7298($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937960), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2144) {
            ctx->pc = 0x1E2150u;
            goto label_1e2150;
        }
    }
    ctx->pc = 0x1E214Cu;
label_1e214c:
    // 0x1e214c: 0xaf808d70  sw          $zero, -0x7290($gp)
    ctx->pc = 0x1e214cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937968), GPR_U32(ctx, 0));
label_1e2150:
    // 0x1e2150: 0x8f848d3c  lw          $a0, -0x72C4($gp)
    ctx->pc = 0x1e2150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
label_1e2154:
    // 0x1e2154: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1e2154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1e2158:
    // 0x1e2158: 0x10830021  beq         $a0, $v1, . + 4 + (0x21 << 2)
label_1e215c:
    if (ctx->pc == 0x1E215Cu) {
        ctx->pc = 0x1E2160u;
        goto label_1e2160;
    }
    ctx->pc = 0x1E2158u;
    {
        const bool branch_taken_0x1e2158 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e2158) {
            ctx->pc = 0x1E21E0u;
            goto label_1e21e0;
        }
    }
    ctx->pc = 0x1E2160u;
label_1e2160:
    // 0x1e2160: 0x8f828d38  lw          $v0, -0x72C8($gp)
    ctx->pc = 0x1e2160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
label_1e2164:
    // 0x1e2164: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e2164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e2168:
    // 0x1e2168: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_1e216c:
    if (ctx->pc == 0x1E216Cu) {
        ctx->pc = 0x1E216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2168u;
        // 0x1e216c: 0xaf828d38  sw          $v0, -0x72C8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937912), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2170u;
        goto label_1e2170;
    }
    ctx->pc = 0x1E2168u;
    {
        const bool branch_taken_0x1e2168 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2168u;
        // 0x1e216c: 0xaf828d38  sw          $v0, -0x72C8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937912), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2168) {
            ctx->pc = 0x1E2190u;
            goto label_1e2190;
        }
    }
    ctx->pc = 0x1E2170u;
label_1e2170:
    // 0x1e2170: 0x8f828d38  lw          $v0, -0x72C8($gp)
    ctx->pc = 0x1e2170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
label_1e2174:
    // 0x1e2174: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x1e2174u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_1e2178:
    // 0x1e2178: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_1e217c:
    if (ctx->pc == 0x1E217Cu) {
        ctx->pc = 0x1E2180u;
        goto label_1e2180;
    }
    ctx->pc = 0x1E2178u;
    {
        const bool branch_taken_0x1e2178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2178) {
            ctx->pc = 0x1E21E0u;
            goto label_1e21e0;
        }
    }
    ctx->pc = 0x1E2180u;
label_1e2180:
    // 0x1e2180: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e2180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e2184:
    // 0x1e2184: 0xaf808d38  sw          $zero, -0x72C8($gp)
    ctx->pc = 0x1e2184u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937912), GPR_U32(ctx, 0));
label_1e2188:
    // 0x1e2188: 0x10000015  b           . + 4 + (0x15 << 2)
label_1e218c:
    if (ctx->pc == 0x1E218Cu) {
        ctx->pc = 0x1E218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2188u;
        // 0x1e218c: 0xaf828d3c  sw          $v0, -0x72C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937916), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2190u;
        goto label_1e2190;
    }
    ctx->pc = 0x1E2188u;
    {
        const bool branch_taken_0x1e2188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2188u;
        // 0x1e218c: 0xaf828d3c  sw          $v0, -0x72C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937916), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2188) {
            ctx->pc = 0x1E21E0u;
            goto label_1e21e0;
        }
    }
    ctx->pc = 0x1E2190u;
label_1e2190:
    // 0x1e2190: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e2190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e2194:
    // 0x1e2194: 0x1482000a  bne         $a0, $v0, . + 4 + (0xA << 2)
label_1e2198:
    if (ctx->pc == 0x1E2198u) {
        ctx->pc = 0x1E2198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2194u;
        // 0x1e2198: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E219Cu;
        goto label_1e219c;
    }
    ctx->pc = 0x1E2194u;
    {
        const bool branch_taken_0x1e2194 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E2198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2194u;
        // 0x1e2198: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2194) {
            ctx->pc = 0x1E21C0u;
            goto label_1e21c0;
        }
    }
    ctx->pc = 0x1E219Cu;
label_1e219c:
    // 0x1e219c: 0x8f828d38  lw          $v0, -0x72C8($gp)
    ctx->pc = 0x1e219cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
label_1e21a0:
    // 0x1e21a0: 0x28420030  slti        $v0, $v0, 0x30
    ctx->pc = 0x1e21a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
label_1e21a4:
    // 0x1e21a4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1e21a8:
    if (ctx->pc == 0x1E21A8u) {
        ctx->pc = 0x1E21ACu;
        goto label_1e21ac;
    }
    ctx->pc = 0x1E21A4u;
    {
        const bool branch_taken_0x1e21a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e21a4) {
            ctx->pc = 0x1E21E0u;
            goto label_1e21e0;
        }
    }
    ctx->pc = 0x1E21ACu;
label_1e21ac:
    // 0x1e21ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e21acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e21b0:
    // 0x1e21b0: 0xaf808d38  sw          $zero, -0x72C8($gp)
    ctx->pc = 0x1e21b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937912), GPR_U32(ctx, 0));
label_1e21b4:
    // 0x1e21b4: 0x1000000a  b           . + 4 + (0xA << 2)
label_1e21b8:
    if (ctx->pc == 0x1E21B8u) {
        ctx->pc = 0x1E21B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E21B4u;
        // 0x1e21b8: 0xaf828d3c  sw          $v0, -0x72C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937916), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E21BCu;
        goto label_1e21bc;
    }
    ctx->pc = 0x1E21B4u;
    {
        const bool branch_taken_0x1e21b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E21B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E21B4u;
        // 0x1e21b8: 0xaf828d3c  sw          $v0, -0x72C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937916), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e21b4) {
            ctx->pc = 0x1E21E0u;
            goto label_1e21e0;
        }
    }
    ctx->pc = 0x1E21BCu;
label_1e21bc:
    // 0x1e21bc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e21bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e21c0:
    // 0x1e21c0: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
label_1e21c4:
    if (ctx->pc == 0x1E21C4u) {
        ctx->pc = 0x1E21C8u;
        goto label_1e21c8;
    }
    ctx->pc = 0x1E21C0u;
    {
        const bool branch_taken_0x1e21c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e21c0) {
            ctx->pc = 0x1E21E0u;
            goto label_1e21e0;
        }
    }
    ctx->pc = 0x1E21C8u;
label_1e21c8:
    // 0x1e21c8: 0x8f828d38  lw          $v0, -0x72C8($gp)
    ctx->pc = 0x1e21c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
label_1e21cc:
    // 0x1e21cc: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x1e21ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_1e21d0:
    // 0x1e21d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1e21d4:
    if (ctx->pc == 0x1E21D4u) {
        ctx->pc = 0x1E21D8u;
        goto label_1e21d8;
    }
    ctx->pc = 0x1E21D0u;
    {
        const bool branch_taken_0x1e21d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e21d0) {
            ctx->pc = 0x1E21E0u;
            goto label_1e21e0;
        }
    }
    ctx->pc = 0x1E21D8u;
label_1e21d8:
    // 0x1e21d8: 0xaf838d3c  sw          $v1, -0x72C4($gp)
    ctx->pc = 0x1e21d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937916), GPR_U32(ctx, 3));
label_1e21dc:
    // 0x1e21dc: 0xaf808d38  sw          $zero, -0x72C8($gp)
    ctx->pc = 0x1e21dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937912), GPR_U32(ctx, 0));
label_1e21e0:
    // 0x1e21e0: 0xc078030  jal         func_1E00C0
label_1e21e4:
    if (ctx->pc == 0x1E21E4u) {
        ctx->pc = 0x1E21E8u;
        goto label_1e21e8;
    }
    ctx->pc = 0x1E21E0u;
    SET_GPR_U32(ctx, 31, 0x1E21E8u);
    ctx->pc = 0x1E00C0u;
    { ctx->pc = 0x1e00c0; return; }
    ctx->pc = 0x1E21E8u;
label_1e21e8:
    // 0x1e21e8: 0xc07b230  jal         func_1EC8C0
label_1e21ec:
    if (ctx->pc == 0x1E21ECu) {
        ctx->pc = 0x1E21F0u;
        goto label_1e21f0;
    }
    ctx->pc = 0x1E21E8u;
    SET_GPR_U32(ctx, 31, 0x1E21F0u);
    ctx->pc = 0x1EC8C0u;
    { ctx->pc = 0x1ec8c0; return; }
    ctx->pc = 0x1E21F0u;
label_1e21f0:
    // 0x1e21f0: 0xc07ab54  jal         func_1EAD50
label_1e21f4:
    if (ctx->pc == 0x1E21F4u) {
        ctx->pc = 0x1E21F8u;
        goto label_1e21f8;
    }
    ctx->pc = 0x1E21F0u;
    SET_GPR_U32(ctx, 31, 0x1E21F8u);
    ctx->pc = 0x1EAD50u;
    { ctx->pc = 0x1ead50; return; }
    ctx->pc = 0x1E21F8u;
label_1e21f8:
    // 0x1e21f8: 0xc04e168  jal         func_1385A0
label_1e21fc:
    if (ctx->pc == 0x1E21FCu) {
        ctx->pc = 0x1E2200u;
        goto label_1e2200;
    }
    ctx->pc = 0x1E21F8u;
    SET_GPR_U32(ctx, 31, 0x1E2200u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x1E21F8u, 0x1E2200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2200u;
label_1e2200:
    // 0x1e2200: 0xc078d9c  jal         func_1E3670
label_1e2204:
    if (ctx->pc == 0x1E2204u) {
        ctx->pc = 0x1E2208u;
        goto label_1e2208;
    }
    ctx->pc = 0x1E2200u;
    SET_GPR_U32(ctx, 31, 0x1E2208u);
    ctx->pc = 0x1E3670u;
    { ctx->pc = 0x1e3670; return; }
    ctx->pc = 0x1E2208u;
label_1e2208:
    // 0x1e2208: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1e2208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_1e220c:
    // 0x1e220c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1e220cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1e2210:
    // 0x1e2210: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x1e2210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_1e2214:
    // 0x1e2214: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1e2214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1e2218:
    // 0x1e2218: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e2218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e221c:
    // 0x1e221c: 0x27828da8  addiu       $v0, $gp, -0x7258
    ctx->pc = 0x1e221cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938024));
label_1e2220:
    // 0x1e2220: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1e2220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1e2224:
    // 0x1e2224: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e2224u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e2228:
    // 0x1e2228: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e2228u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e222c:
    // 0x1e222c: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1e222cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1e2230:
    // 0x1e2230: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e2230u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e2234:
    // 0x1e2234: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1e2234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1e2238:
    // 0x1e2238: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e2238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e223c:
    // 0x1e223c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1e223cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e2240:
    // 0x1e2240: 0xc066c72  jal         func_19B1C8
label_1e2244:
    if (ctx->pc == 0x1E2244u) {
        ctx->pc = 0x1E2244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2240u;
        // 0x1e2244: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2248u;
        goto label_1e2248;
    }
    ctx->pc = 0x1E2240u;
    SET_GPR_U32(ctx, 31, 0x1E2248u);
    ctx->pc = 0x1E2244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2240u;
    // 0x1e2244: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1E2240u, 0x1E2248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2248u;
label_1e2248:
    // 0x1e2248: 0xc079158  jal         func_1E4560
label_1e224c:
    if (ctx->pc == 0x1E224Cu) {
        ctx->pc = 0x1E2250u;
        goto label_1e2250;
    }
    ctx->pc = 0x1E2248u;
    SET_GPR_U32(ctx, 31, 0x1E2250u);
    ctx->pc = 0x1E4560u;
    { ctx->pc = 0x1e4560; return; }
    ctx->pc = 0x1E2250u;
label_1e2250:
    // 0x1e2250: 0x8f828d94  lw          $v0, -0x726C($gp)
    ctx->pc = 0x1e2250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938004)));
label_1e2254:
    // 0x1e2254: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1e2258:
    if (ctx->pc == 0x1E2258u) {
        ctx->pc = 0x1E225Cu;
        goto label_1e225c;
    }
    ctx->pc = 0x1E2254u;
    {
        const bool branch_taken_0x1e2254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2254) {
            ctx->pc = 0x1E22BCu;
            goto label_1e22bc;
        }
    }
    ctx->pc = 0x1E225Cu;
label_1e225c:
    // 0x1e225c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e225cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1e2260:
    // 0x1e2260: 0x87828d90  lh          $v0, -0x7270($gp)
    ctx->pc = 0x1e2260u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938000)));
label_1e2264:
    // 0x1e2264: 0x8c253ffc  lw          $a1, 0x3FFC($at)
    ctx->pc = 0x1e2264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1e2268:
    // 0x1e2268: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1e2268u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1e226c:
    // 0x1e226c: 0x27838d98  addiu       $v1, $gp, -0x7268
    ctx->pc = 0x1e226cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938008));
label_1e2270:
    // 0x1e2270: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1e2270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1e2274:
    // 0x1e2274: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1e2274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1e2278:
    // 0x1e2278: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e2278u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e227c:
    // 0x1e227c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e227cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e2280:
    // 0x1e2280: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e2280u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e2284:
    // 0x1e2284: 0x2442ff08  addiu       $v0, $v0, -0xF8
    ctx->pc = 0x1e2284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967048));
label_1e2288:
    // 0x1e2288: 0x55140  sll         $t2, $a1, 5
    ctx->pc = 0x1e2288u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_1e228c:
    // 0x1e228c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1e228cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1e2290:
    // 0x1e2290: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1e2290u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1e2294:
    // 0x1e2294: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x1e2294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1e2298:
    // 0x1e2298: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1e2298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1e229c:
    // 0x1e229c: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x1e229cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_1e22a0:
    // 0x1e22a0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1e22a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e22a4:
    // 0x1e22a4: 0xa4a20090  sh          $v0, 0x90($a1)
    ctx->pc = 0x1e22a4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 144), (uint16_t)GPR_U32(ctx, 2));
label_1e22a8:
    // 0x1e22a8: 0x87828d90  lh          $v0, -0x7270($gp)
    ctx->pc = 0x1e22a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938000)));
label_1e22ac:
    // 0x1e22ac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1e22acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1e22b0:
    // 0x1e22b0: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x1e22b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1e22b4:
    // 0x1e22b4: 0xc066c72  jal         func_19B1C8
label_1e22b8:
    if (ctx->pc == 0x1E22B8u) {
        ctx->pc = 0x1E22B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E22B4u;
        // 0x1e22b8: 0xa4a200a0  sh          $v0, 0xA0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 160), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E22BCu;
        goto label_1e22bc;
    }
    ctx->pc = 0x1E22B4u;
    SET_GPR_U32(ctx, 31, 0x1E22BCu);
    ctx->pc = 0x1E22B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E22B4u;
    // 0x1e22b8: 0xa4a200a0  sh          $v0, 0xA0($a1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 5), 160), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1E22B4u, 0x1E22BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E22BCu;
label_1e22bc:
    // 0x1e22bc: 0xc078ef4  jal         func_1E3BD0
label_1e22c0:
    if (ctx->pc == 0x1E22C0u) {
        ctx->pc = 0x1E22C4u;
        goto label_1e22c4;
    }
    ctx->pc = 0x1E22BCu;
    SET_GPR_U32(ctx, 31, 0x1E22C4u);
    ctx->pc = 0x1E3BD0u;
    { ctx->pc = 0x1e3bd0; return; }
    ctx->pc = 0x1E22C4u;
label_1e22c4:
    // 0x1e22c4: 0xc07897c  jal         func_1E25F0
label_1e22c8:
    if (ctx->pc == 0x1E22C8u) {
        ctx->pc = 0x1E22CCu;
        goto label_1e22cc;
    }
    ctx->pc = 0x1E22C4u;
    SET_GPR_U32(ctx, 31, 0x1E22CCu);
    ctx->pc = 0x1E25F0u;
    { ctx->pc = 0x1e25f0; return; }
    ctx->pc = 0x1E22CCu;
label_1e22cc:
    // 0x1e22cc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e22ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1e22d0:
    // 0x1e22d0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1e22d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1e22d4:
    // 0x1e22d4: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1e22d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1e22d8:
    // 0x1e22d8: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1e22d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1e22dc:
    // 0x1e22dc: 0x27828da0  addiu       $v0, $gp, -0x7260
    ctx->pc = 0x1e22dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938016));
label_1e22e0:
    // 0x1e22e0: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1e22e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1e22e4:
    // 0x1e22e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e22e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e22e8:
    // 0x1e22e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e22e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e22ec:
    // 0x1e22ec: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1e22ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1e22f0:
    // 0x1e22f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e22f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e22f4:
    // 0x1e22f4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1e22f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1e22f8:
    // 0x1e22f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e22f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e22fc:
    // 0x1e22fc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1e22fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e2300:
    // 0x1e2300: 0xc066c72  jal         func_19B1C8
label_1e2304:
    if (ctx->pc == 0x1E2304u) {
        ctx->pc = 0x1E2304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2300u;
        // 0x1e2304: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2308u;
        goto label_1e2308;
    }
    ctx->pc = 0x1E2300u;
    SET_GPR_U32(ctx, 31, 0x1E2308u);
    ctx->pc = 0x1E2304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2300u;
    // 0x1e2304: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1E2300u, 0x1E2308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2308u;
label_1e2308:
    // 0x1e2308: 0xc078cac  jal         func_1E32B0
label_1e230c:
    if (ctx->pc == 0x1E230Cu) {
        ctx->pc = 0x1E2310u;
        goto label_1e2310;
    }
    ctx->pc = 0x1E2308u;
    SET_GPR_U32(ctx, 31, 0x1E2310u);
    ctx->pc = 0x1E32B0u;
    { ctx->pc = 0x1e32b0; return; }
    ctx->pc = 0x1E2310u;
label_1e2310:
    // 0x1e2310: 0xc077fc4  jal         func_1DFF10
label_1e2314:
    if (ctx->pc == 0x1E2314u) {
        ctx->pc = 0x1E2318u;
        goto label_1e2318;
    }
    ctx->pc = 0x1E2310u;
    SET_GPR_U32(ctx, 31, 0x1E2318u);
    ctx->pc = 0x1DFF10u;
    { ctx->pc = 0x1dff10; return; }
    ctx->pc = 0x1E2318u;
label_1e2318:
    // 0x1e2318: 0xc07b1bc  jal         func_1EC6F0
label_1e231c:
    if (ctx->pc == 0x1E231Cu) {
        ctx->pc = 0x1E2320u;
        goto label_1e2320;
    }
    ctx->pc = 0x1E2318u;
    SET_GPR_U32(ctx, 31, 0x1E2320u);
    ctx->pc = 0x1EC6F0u;
    { ctx->pc = 0x1ec6f0; return; }
    ctx->pc = 0x1E2320u;
label_1e2320:
    // 0x1e2320: 0xc07ab3c  jal         func_1EACF0
label_1e2324:
    if (ctx->pc == 0x1E2324u) {
        ctx->pc = 0x1E2328u;
        goto label_1e2328;
    }
    ctx->pc = 0x1E2320u;
    SET_GPR_U32(ctx, 31, 0x1E2328u);
    ctx->pc = 0x1EACF0u;
    { ctx->pc = 0x1eacf0; return; }
    ctx->pc = 0x1E2328u;
label_1e2328:
    // 0x1e2328: 0xc04e120  jal         func_138480
label_1e232c:
    if (ctx->pc == 0x1E232Cu) {
        ctx->pc = 0x1E2330u;
        goto label_1e2330;
    }
    ctx->pc = 0x1E2328u;
    SET_GPR_U32(ctx, 31, 0x1E2330u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x1E2328u, 0x1E2330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2330u;
label_1e2330:
    // 0x1e2330: 0xc05b578  jal         func_16D5E0
label_1e2334:
    if (ctx->pc == 0x1E2334u) {
        ctx->pc = 0x1E2334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2330u;
        // 0x1e2334: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2338u;
        goto label_1e2338;
    }
    ctx->pc = 0x1E2330u;
    SET_GPR_U32(ctx, 31, 0x1E2338u);
    ctx->pc = 0x1E2334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2330u;
    // 0x1e2334: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x1E2330u, 0x1E2338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2338u;
label_1e2338:
    // 0x1e2338: 0xc060258  jal         func_180960
label_1e233c:
    if (ctx->pc == 0x1E233Cu) {
        ctx->pc = 0x1E2340u;
        goto label_1e2340;
    }
    ctx->pc = 0x1E2338u;
    SET_GPR_U32(ctx, 31, 0x1E2340u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1E2338u, 0x1E2340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2340u;
label_1e2340:
    // 0x1e2340: 0x8f828730  lw          $v0, -0x78D0($gp)
    ctx->pc = 0x1e2340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936368)));
label_1e2344:
    // 0x1e2344: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1e2348:
    if (ctx->pc == 0x1E2348u) {
        ctx->pc = 0x1E234Cu;
        goto label_1e234c;
    }
    ctx->pc = 0x1E2344u;
    {
        const bool branch_taken_0x1e2344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2344) {
            ctx->pc = 0x1E2354u;
            goto label_1e2354;
        }
    }
    ctx->pc = 0x1E234Cu;
label_1e234c:
    // 0x1e234c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e234cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e2350:
    // 0x1e2350: 0xaf828db0  sw          $v0, -0x7250($gp)
    ctx->pc = 0x1e2350u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938032), GPR_U32(ctx, 2));
label_1e2354:
    // 0x1e2354: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e2354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e2358:
    // 0x1e2358: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1e2358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1e235c:
    // 0x1e235c: 0x3e00008  jr          $ra
label_1e2360:
    if (ctx->pc == 0x1E2360u) {
        ctx->pc = 0x1E2360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E235Cu;
        // 0x1e2360: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2364u;
        goto label_1e2364;
    }
    ctx->pc = 0x1E235Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E235Cu;
        // 0x1e2360: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E235Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2364u;
label_1e2364:
    // 0x1e2364: 0x0  nop
    ctx->pc = 0x1e2364u;
    // NOP
label_1e2368:
    // 0x1e2368: 0x0  nop
    ctx->pc = 0x1e2368u;
    // NOP
label_1e236c:
    // 0x1e236c: 0x0  nop
    ctx->pc = 0x1e236cu;
    // NOP
label_1e2370:
    // 0x1e2370: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1e2370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1e2374:
    // 0x1e2374: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1e2374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1e2378:
    // 0x1e2378: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1e2378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1e237c:
    // 0x1e237c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1e237cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1e2380:
    // 0x1e2380: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1e2380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1e2384:
    // 0x1e2384: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1e2384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1e2388:
    // 0x1e2388: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e2388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1e238c:
    // 0x1e238c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e238cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1e2390:
    // 0x1e2390: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e2390u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e2394:
    // 0x1e2394: 0xaf808d38  sw          $zero, -0x72C8($gp)
    ctx->pc = 0x1e2394u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937912), GPR_U32(ctx, 0));
label_1e2398:
    // 0x1e2398: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e2398u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e239c:
    // 0x1e239c: 0xaf808d30  sw          $zero, -0x72D0($gp)
    ctx->pc = 0x1e239cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937904), GPR_U32(ctx, 0));
label_1e23a0:
    // 0x1e23a0: 0xaf828d3c  sw          $v0, -0x72C4($gp)
    ctx->pc = 0x1e23a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937916), GPR_U32(ctx, 2));
label_1e23a4:
    // 0x1e23a4: 0xaf808d34  sw          $zero, -0x72CC($gp)
    ctx->pc = 0x1e23a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937908), GPR_U32(ctx, 0));
label_1e23a8:
    // 0x1e23a8: 0x8f838218  lw          $v1, -0x7DE8($gp)
    ctx->pc = 0x1e23a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_1e23ac:
    // 0x1e23ac: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1e23acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1e23b0:
    // 0x1e23b0: 0x14620042  bne         $v1, $v0, . + 4 + (0x42 << 2)
label_1e23b4:
    if (ctx->pc == 0x1E23B4u) {
        ctx->pc = 0x1E23B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E23B0u;
        // 0x1e23b4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E23B8u;
        goto label_1e23b8;
    }
    ctx->pc = 0x1E23B0u;
    {
        const bool branch_taken_0x1e23b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E23B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E23B0u;
        // 0x1e23b4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e23b0) {
            ctx->pc = 0x1E24BCu;
            goto label_1e24bc;
        }
    }
    ctx->pc = 0x1E23B8u;
label_1e23b8:
    // 0x1e23b8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1e23b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e23bc:
    // 0x1e23bc: 0x0  nop
    ctx->pc = 0x1e23bcu;
    // NOP
label_1e23c0:
    // 0x1e23c0: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1e23c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1e23c4:
    // 0x1e23c4: 0x244226b0  addiu       $v0, $v0, 0x26B0
    ctx->pc = 0x1e23c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9904));
label_1e23c8:
    // 0x1e23c8: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1e23c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1e23cc:
    // 0x1e23cc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1e23ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1e23d0:
    // 0x1e23d0: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1e23d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1e23d4:
    // 0x1e23d4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1e23d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1e23d8:
    // 0x1e23d8: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1e23d8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e23dc:
    // 0x1e23dc: 0xc05e234  jal         func_1788D0
label_1e23e0:
    if (ctx->pc == 0x1E23E0u) {
        ctx->pc = 0x1E23E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E23DCu;
        // 0x1e23e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E23E4u;
        goto label_1e23e4;
    }
    ctx->pc = 0x1E23DCu;
    SET_GPR_U32(ctx, 31, 0x1E23E4u);
    ctx->pc = 0x1E23E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E23DCu;
    // 0x1e23e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1E23DCu, 0x1E23E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E23E4u;
label_1e23e4:
    // 0x1e23e4: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x1e23e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_1e23e8:
    // 0x1e23e8: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x1e23e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1e23ec:
    // 0x1e23ec: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x1e23ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1e23f0:
    // 0x1e23f0: 0x24070384  addiu       $a3, $zero, 0x384
    ctx->pc = 0x1e23f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_1e23f4:
    // 0x1e23f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e23f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e23f8:
    // 0x1e23f8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e23f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e23fc:
    // 0x1e23fc: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1e23fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e2400:
    // 0x1e2400: 0xc05e060  jal         func_178180
label_1e2404:
    if (ctx->pc == 0x1E2404u) {
        ctx->pc = 0x1E2404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2400u;
        // 0x1e2404: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2408u;
        goto label_1e2408;
    }
    ctx->pc = 0x1E2400u;
    SET_GPR_U32(ctx, 31, 0x1E2408u);
    ctx->pc = 0x1E2404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2400u;
    // 0x1e2404: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178180u, 0x1E2400u, 0x1E2408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2408u;
label_1e2408:
    // 0x1e2408: 0xa2600078  sb          $zero, 0x78($s3)
    ctx->pc = 0x1e2408u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 120), (uint8_t)GPR_U32(ctx, 0));
label_1e240c:
    // 0x1e240c: 0x3c0d3f80  lui         $t5, 0x3F80
    ctx->pc = 0x1e240cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)16256 << 16));
label_1e2410:
    // 0x1e2410: 0xa2600079  sb          $zero, 0x79($s3)
    ctx->pc = 0x1e2410u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 121), (uint8_t)GPR_U32(ctx, 0));
label_1e2414:
    // 0x1e2414: 0x240c0060  addiu       $t4, $zero, 0x60
    ctx->pc = 0x1e2414u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1e2418:
    // 0x1e2418: 0xa260007a  sb          $zero, 0x7A($s3)
    ctx->pc = 0x1e2418u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 122), (uint8_t)GPR_U32(ctx, 0));
label_1e241c:
    // 0x1e241c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1e241cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1e2420:
    // 0x1e2420: 0xa260007b  sb          $zero, 0x7B($s3)
    ctx->pc = 0x1e2420u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 123), (uint8_t)GPR_U32(ctx, 0));
label_1e2424:
    // 0x1e2424: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e2424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e2428:
    // 0x1e2428: 0xae6d007c  sw          $t5, 0x7C($s3)
    ctx->pc = 0x1e2428u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 13));
label_1e242c:
    // 0x1e242c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e242cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e2430:
    // 0x1e2430: 0xa2600098  sb          $zero, 0x98($s3)
    ctx->pc = 0x1e2430u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 152), (uint8_t)GPR_U32(ctx, 0));
label_1e2434:
    // 0x1e2434: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e2434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e2438:
    // 0x1e2438: 0xa2600099  sb          $zero, 0x99($s3)
    ctx->pc = 0x1e2438u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 153), (uint8_t)GPR_U32(ctx, 0));
label_1e243c:
    // 0x1e243c: 0x266400c0  addiu       $a0, $s3, 0xC0
    ctx->pc = 0x1e243cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 192));
label_1e2440:
    // 0x1e2440: 0xa260009a  sb          $zero, 0x9A($s3)
    ctx->pc = 0x1e2440u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 154), (uint8_t)GPR_U32(ctx, 0));
label_1e2444:
    // 0x1e2444: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1e2444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1e2448:
    // 0x1e2448: 0xa260009b  sb          $zero, 0x9B($s3)
    ctx->pc = 0x1e2448u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 155), (uint8_t)GPR_U32(ctx, 0));
label_1e244c:
    // 0x1e244c: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1e244cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1e2450:
    // 0x1e2450: 0xae6d009c  sw          $t5, 0x9C($s3)
    ctx->pc = 0x1e2450u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 13));
label_1e2454:
    // 0x1e2454: 0x24080384  addiu       $t0, $zero, 0x384
    ctx->pc = 0x1e2454u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_1e2458:
    // 0x1e2458: 0xa2600088  sb          $zero, 0x88($s3)
    ctx->pc = 0x1e2458u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 136), (uint8_t)GPR_U32(ctx, 0));
label_1e245c:
    // 0x1e245c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e245cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e2460:
    // 0x1e2460: 0xa2600089  sb          $zero, 0x89($s3)
    ctx->pc = 0x1e2460u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 137), (uint8_t)GPR_U32(ctx, 0));
label_1e2464:
    // 0x1e2464: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e2464u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e2468:
    // 0x1e2468: 0xa260008a  sb          $zero, 0x8A($s3)
    ctx->pc = 0x1e2468u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 138), (uint8_t)GPR_U32(ctx, 0));
label_1e246c:
    // 0x1e246c: 0xa26c008b  sb          $t4, 0x8B($s3)
    ctx->pc = 0x1e246cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 139), (uint8_t)GPR_U32(ctx, 12));
label_1e2470:
    // 0x1e2470: 0xae6d008c  sw          $t5, 0x8C($s3)
    ctx->pc = 0x1e2470u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 13));
label_1e2474:
    // 0x1e2474: 0xa26000a8  sb          $zero, 0xA8($s3)
    ctx->pc = 0x1e2474u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 168), (uint8_t)GPR_U32(ctx, 0));
label_1e2478:
    // 0x1e2478: 0xa26000a9  sb          $zero, 0xA9($s3)
    ctx->pc = 0x1e2478u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 169), (uint8_t)GPR_U32(ctx, 0));
label_1e247c:
    // 0x1e247c: 0xa26000aa  sb          $zero, 0xAA($s3)
    ctx->pc = 0x1e247cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 170), (uint8_t)GPR_U32(ctx, 0));
label_1e2480:
    // 0x1e2480: 0xa26c00ab  sb          $t4, 0xAB($s3)
    ctx->pc = 0x1e2480u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 171), (uint8_t)GPR_U32(ctx, 12));
label_1e2484:
    // 0x1e2484: 0xae6d00ac  sw          $t5, 0xAC($s3)
    ctx->pc = 0x1e2484u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 172), GPR_U32(ctx, 13));
label_1e2488:
    // 0x1e2488: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x1e2488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
label_1e248c:
    // 0x1e248c: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1e248cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1e2490:
    // 0x1e2490: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1e2490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1e2494:
    // 0x1e2494: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1e2494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1e2498:
    // 0x1e2498: 0xdc252958  ld          $a1, 0x2958($at)
    ctx->pc = 0x1e2498u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 10584)));
label_1e249c:
    // 0x1e249c: 0xc05de30  jal         func_1778C0
label_1e24a0:
    if (ctx->pc == 0x1E24A0u) {
        ctx->pc = 0x1E24A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E249Cu;
        // 0x1e24a0: 0x240b00b8  addiu       $t3, $zero, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E24A4u;
        goto label_1e24a4;
    }
    ctx->pc = 0x1E249Cu;
    SET_GPR_U32(ctx, 31, 0x1E24A4u);
    ctx->pc = 0x1E24A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E249Cu;
    // 0x1e24a0: 0x240b00b8  addiu       $t3, $zero, 0xB8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1E249Cu, 0x1E24A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E24A4u;
label_1e24a4:
    // 0x1e24a4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1e24a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1e24a8:
    // 0x1e24a8: 0x2a430004  slti        $v1, $s2, 0x4
    ctx->pc = 0x1e24a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
label_1e24ac:
    // 0x1e24ac: 0x1460ffc3  bnez        $v1, . + 4 + (-0x3D << 2)
label_1e24b0:
    if (ctx->pc == 0x1E24B0u) {
        ctx->pc = 0x1E24B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E24ACu;
        // 0x1e24b0: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E24B4u;
        goto label_1e24b4;
    }
    ctx->pc = 0x1E24ACu;
    {
        const bool branch_taken_0x1e24ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E24B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E24ACu;
        // 0x1e24b0: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e24ac) {
            ctx->pc = 0x1E23BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e23bc;
        }
    }
    ctx->pc = 0x1E24B4u;
label_1e24b4:
    // 0x1e24b4: 0x10000041  b           . + 4 + (0x41 << 2)
label_1e24b8:
    if (ctx->pc == 0x1E24B8u) {
        ctx->pc = 0x1E24BCu;
        goto label_1e24bc;
    }
    ctx->pc = 0x1E24B4u;
    {
        const bool branch_taken_0x1e24b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e24b4) {
            ctx->pc = 0x1E25BCu;
            { ctx->pc = 0x1e25bc; return; }
        }
    }
    ctx->pc = 0x1E24BCu;
label_1e24bc:
    // 0x1e24bc: 0x0  nop
    ctx->pc = 0x1e24bcu;
    // NOP
label_1e24c0:
    // 0x1e24c0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e24c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e24c4:
    // 0x1e24c4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e24c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e24c8:
    // 0x1e24c8: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1e24c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1e24cc:
    // 0x1e24cc: 0x244226b0  addiu       $v0, $v0, 0x26B0
    ctx->pc = 0x1e24ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9904));
label_1e24d0:
    // 0x1e24d0: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1e24d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1e24d4:
    // 0x1e24d4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1e24d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->pc = 0x1e24d8u;
    return;
}

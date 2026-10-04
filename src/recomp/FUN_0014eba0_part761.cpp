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


void FUN_0014eba0_part761(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2c1d20u: goto label_2c1d20;
        case 0x2c1d24u: goto label_2c1d24;
        case 0x2c1d28u: goto label_2c1d28;
        case 0x2c1d2cu: goto label_2c1d2c;
        case 0x2c1d30u: goto label_2c1d30;
        case 0x2c1d34u: goto label_2c1d34;
        case 0x2c1d38u: goto label_2c1d38;
        case 0x2c1d3cu: goto label_2c1d3c;
        case 0x2c1d40u: goto label_2c1d40;
        case 0x2c1d44u: goto label_2c1d44;
        case 0x2c1d48u: goto label_2c1d48;
        case 0x2c1d4cu: goto label_2c1d4c;
        case 0x2c1d50u: goto label_2c1d50;
        case 0x2c1d54u: goto label_2c1d54;
        case 0x2c1d58u: goto label_2c1d58;
        case 0x2c1d5cu: goto label_2c1d5c;
        case 0x2c1d60u: goto label_2c1d60;
        case 0x2c1d64u: goto label_2c1d64;
        case 0x2c1d68u: goto label_2c1d68;
        case 0x2c1d6cu: goto label_2c1d6c;
        case 0x2c1d70u: goto label_2c1d70;
        case 0x2c1d74u: goto label_2c1d74;
        case 0x2c1d78u: goto label_2c1d78;
        case 0x2c1d7cu: goto label_2c1d7c;
        case 0x2c1d80u: goto label_2c1d80;
        case 0x2c1d84u: goto label_2c1d84;
        case 0x2c1d88u: goto label_2c1d88;
        case 0x2c1d8cu: goto label_2c1d8c;
        case 0x2c1d90u: goto label_2c1d90;
        case 0x2c1d94u: goto label_2c1d94;
        case 0x2c1d98u: goto label_2c1d98;
        case 0x2c1d9cu: goto label_2c1d9c;
        case 0x2c1da0u: goto label_2c1da0;
        case 0x2c1da4u: goto label_2c1da4;
        case 0x2c1da8u: goto label_2c1da8;
        case 0x2c1dacu: goto label_2c1dac;
        case 0x2c1db0u: goto label_2c1db0;
        case 0x2c1db4u: goto label_2c1db4;
        case 0x2c1db8u: goto label_2c1db8;
        case 0x2c1dbcu: goto label_2c1dbc;
        case 0x2c1dc0u: goto label_2c1dc0;
        case 0x2c1dc4u: goto label_2c1dc4;
        case 0x2c1dc8u: goto label_2c1dc8;
        case 0x2c1dccu: goto label_2c1dcc;
        case 0x2c1dd0u: goto label_2c1dd0;
        case 0x2c1dd4u: goto label_2c1dd4;
        case 0x2c1dd8u: goto label_2c1dd8;
        case 0x2c1ddcu: goto label_2c1ddc;
        case 0x2c1de0u: goto label_2c1de0;
        case 0x2c1de4u: goto label_2c1de4;
        case 0x2c1de8u: goto label_2c1de8;
        case 0x2c1decu: goto label_2c1dec;
        case 0x2c1df0u: goto label_2c1df0;
        case 0x2c1df4u: goto label_2c1df4;
        case 0x2c1df8u: goto label_2c1df8;
        case 0x2c1dfcu: goto label_2c1dfc;
        case 0x2c1e00u: goto label_2c1e00;
        case 0x2c1e04u: goto label_2c1e04;
        case 0x2c1e08u: goto label_2c1e08;
        case 0x2c1e0cu: goto label_2c1e0c;
        case 0x2c1e10u: goto label_2c1e10;
        case 0x2c1e14u: goto label_2c1e14;
        case 0x2c1e18u: goto label_2c1e18;
        case 0x2c1e1cu: goto label_2c1e1c;
        case 0x2c1e20u: goto label_2c1e20;
        case 0x2c1e24u: goto label_2c1e24;
        case 0x2c1e28u: goto label_2c1e28;
        case 0x2c1e2cu: goto label_2c1e2c;
        case 0x2c1e30u: goto label_2c1e30;
        case 0x2c1e34u: goto label_2c1e34;
        case 0x2c1e38u: goto label_2c1e38;
        case 0x2c1e3cu: goto label_2c1e3c;
        case 0x2c1e40u: goto label_2c1e40;
        case 0x2c1e44u: goto label_2c1e44;
        case 0x2c1e48u: goto label_2c1e48;
        case 0x2c1e4cu: goto label_2c1e4c;
        case 0x2c1e50u: goto label_2c1e50;
        case 0x2c1e54u: goto label_2c1e54;
        case 0x2c1e58u: goto label_2c1e58;
        case 0x2c1e5cu: goto label_2c1e5c;
        case 0x2c1e60u: goto label_2c1e60;
        case 0x2c1e64u: goto label_2c1e64;
        case 0x2c1e68u: goto label_2c1e68;
        case 0x2c1e6cu: goto label_2c1e6c;
        case 0x2c1e70u: goto label_2c1e70;
        case 0x2c1e74u: goto label_2c1e74;
        case 0x2c1e78u: goto label_2c1e78;
        case 0x2c1e7cu: goto label_2c1e7c;
        case 0x2c1e80u: goto label_2c1e80;
        case 0x2c1e84u: goto label_2c1e84;
        case 0x2c1e88u: goto label_2c1e88;
        case 0x2c1e8cu: goto label_2c1e8c;
        case 0x2c1e90u: goto label_2c1e90;
        case 0x2c1e94u: goto label_2c1e94;
        case 0x2c1e98u: goto label_2c1e98;
        case 0x2c1e9cu: goto label_2c1e9c;
        case 0x2c1ea0u: goto label_2c1ea0;
        case 0x2c1ea4u: goto label_2c1ea4;
        case 0x2c1ea8u: goto label_2c1ea8;
        case 0x2c1eacu: goto label_2c1eac;
        case 0x2c1eb0u: goto label_2c1eb0;
        case 0x2c1eb4u: goto label_2c1eb4;
        case 0x2c1eb8u: goto label_2c1eb8;
        case 0x2c1ebcu: goto label_2c1ebc;
        case 0x2c1ec0u: goto label_2c1ec0;
        case 0x2c1ec4u: goto label_2c1ec4;
        case 0x2c1ec8u: goto label_2c1ec8;
        case 0x2c1eccu: goto label_2c1ecc;
        case 0x2c1ed0u: goto label_2c1ed0;
        case 0x2c1ed4u: goto label_2c1ed4;
        case 0x2c1ed8u: goto label_2c1ed8;
        case 0x2c1edcu: goto label_2c1edc;
        case 0x2c1ee0u: goto label_2c1ee0;
        case 0x2c1ee4u: goto label_2c1ee4;
        case 0x2c1ee8u: goto label_2c1ee8;
        case 0x2c1eecu: goto label_2c1eec;
        case 0x2c1ef0u: goto label_2c1ef0;
        case 0x2c1ef4u: goto label_2c1ef4;
        case 0x2c1ef8u: goto label_2c1ef8;
        case 0x2c1efcu: goto label_2c1efc;
        case 0x2c1f00u: goto label_2c1f00;
        case 0x2c1f04u: goto label_2c1f04;
        case 0x2c1f08u: goto label_2c1f08;
        case 0x2c1f0cu: goto label_2c1f0c;
        case 0x2c1f10u: goto label_2c1f10;
        case 0x2c1f14u: goto label_2c1f14;
        case 0x2c1f18u: goto label_2c1f18;
        case 0x2c1f1cu: goto label_2c1f1c;
        case 0x2c1f20u: goto label_2c1f20;
        case 0x2c1f24u: goto label_2c1f24;
        case 0x2c1f28u: goto label_2c1f28;
        case 0x2c1f2cu: goto label_2c1f2c;
        case 0x2c1f30u: goto label_2c1f30;
        case 0x2c1f34u: goto label_2c1f34;
        case 0x2c1f38u: goto label_2c1f38;
        case 0x2c1f3cu: goto label_2c1f3c;
        case 0x2c1f40u: goto label_2c1f40;
        case 0x2c1f44u: goto label_2c1f44;
        case 0x2c1f48u: goto label_2c1f48;
        case 0x2c1f4cu: goto label_2c1f4c;
        case 0x2c1f50u: goto label_2c1f50;
        case 0x2c1f54u: goto label_2c1f54;
        case 0x2c1f58u: goto label_2c1f58;
        case 0x2c1f5cu: goto label_2c1f5c;
        case 0x2c1f60u: goto label_2c1f60;
        case 0x2c1f64u: goto label_2c1f64;
        case 0x2c1f68u: goto label_2c1f68;
        case 0x2c1f6cu: goto label_2c1f6c;
        case 0x2c1f70u: goto label_2c1f70;
        case 0x2c1f74u: goto label_2c1f74;
        case 0x2c1f78u: goto label_2c1f78;
        case 0x2c1f7cu: goto label_2c1f7c;
        case 0x2c1f80u: goto label_2c1f80;
        case 0x2c1f84u: goto label_2c1f84;
        case 0x2c1f88u: goto label_2c1f88;
        case 0x2c1f8cu: goto label_2c1f8c;
        case 0x2c1f90u: goto label_2c1f90;
        case 0x2c1f94u: goto label_2c1f94;
        case 0x2c1f98u: goto label_2c1f98;
        case 0x2c1f9cu: goto label_2c1f9c;
        case 0x2c1fa0u: goto label_2c1fa0;
        case 0x2c1fa4u: goto label_2c1fa4;
        case 0x2c1fa8u: goto label_2c1fa8;
        case 0x2c1facu: goto label_2c1fac;
        case 0x2c1fb0u: goto label_2c1fb0;
        case 0x2c1fb4u: goto label_2c1fb4;
        case 0x2c1fb8u: goto label_2c1fb8;
        case 0x2c1fbcu: goto label_2c1fbc;
        case 0x2c1fc0u: goto label_2c1fc0;
        case 0x2c1fc4u: goto label_2c1fc4;
        case 0x2c1fc8u: goto label_2c1fc8;
        case 0x2c1fccu: goto label_2c1fcc;
        case 0x2c1fd0u: goto label_2c1fd0;
        case 0x2c1fd4u: goto label_2c1fd4;
        case 0x2c1fd8u: goto label_2c1fd8;
        case 0x2c1fdcu: goto label_2c1fdc;
        case 0x2c1fe0u: goto label_2c1fe0;
        case 0x2c1fe4u: goto label_2c1fe4;
        case 0x2c1fe8u: goto label_2c1fe8;
        case 0x2c1fecu: goto label_2c1fec;
        case 0x2c1ff0u: goto label_2c1ff0;
        case 0x2c1ff4u: goto label_2c1ff4;
        case 0x2c1ff8u: goto label_2c1ff8;
        case 0x2c1ffcu: goto label_2c1ffc;
        case 0x2c2000u: goto label_2c2000;
        case 0x2c2004u: goto label_2c2004;
        case 0x2c2008u: goto label_2c2008;
        case 0x2c200cu: goto label_2c200c;
        case 0x2c2010u: goto label_2c2010;
        case 0x2c2014u: goto label_2c2014;
        case 0x2c2018u: goto label_2c2018;
        case 0x2c201cu: goto label_2c201c;
        case 0x2c2020u: goto label_2c2020;
        case 0x2c2024u: goto label_2c2024;
        case 0x2c2028u: goto label_2c2028;
        case 0x2c202cu: goto label_2c202c;
        case 0x2c2030u: goto label_2c2030;
        case 0x2c2034u: goto label_2c2034;
        case 0x2c2038u: goto label_2c2038;
        case 0x2c203cu: goto label_2c203c;
        case 0x2c2040u: goto label_2c2040;
        case 0x2c2044u: goto label_2c2044;
        case 0x2c2048u: goto label_2c2048;
        case 0x2c204cu: goto label_2c204c;
        case 0x2c2050u: goto label_2c2050;
        case 0x2c2054u: goto label_2c2054;
        case 0x2c2058u: goto label_2c2058;
        case 0x2c205cu: goto label_2c205c;
        case 0x2c2060u: goto label_2c2060;
        case 0x2c2064u: goto label_2c2064;
        case 0x2c2068u: goto label_2c2068;
        case 0x2c206cu: goto label_2c206c;
        case 0x2c2070u: goto label_2c2070;
        case 0x2c2074u: goto label_2c2074;
        case 0x2c2078u: goto label_2c2078;
        case 0x2c207cu: goto label_2c207c;
        case 0x2c2080u: goto label_2c2080;
        case 0x2c2084u: goto label_2c2084;
        case 0x2c2088u: goto label_2c2088;
        case 0x2c208cu: goto label_2c208c;
        case 0x2c2090u: goto label_2c2090;
        case 0x2c2094u: goto label_2c2094;
        case 0x2c2098u: goto label_2c2098;
        case 0x2c209cu: goto label_2c209c;
        case 0x2c20a0u: goto label_2c20a0;
        case 0x2c20a4u: goto label_2c20a4;
        case 0x2c20a8u: goto label_2c20a8;
        case 0x2c20acu: goto label_2c20ac;
        case 0x2c20b0u: goto label_2c20b0;
        case 0x2c20b4u: goto label_2c20b4;
        case 0x2c20b8u: goto label_2c20b8;
        case 0x2c20bcu: goto label_2c20bc;
        case 0x2c20c0u: goto label_2c20c0;
        case 0x2c20c4u: goto label_2c20c4;
        case 0x2c20c8u: goto label_2c20c8;
        case 0x2c20ccu: goto label_2c20cc;
        case 0x2c20d0u: goto label_2c20d0;
        case 0x2c20d4u: goto label_2c20d4;
        case 0x2c20d8u: goto label_2c20d8;
        case 0x2c20dcu: goto label_2c20dc;
        case 0x2c20e0u: goto label_2c20e0;
        case 0x2c20e4u: goto label_2c20e4;
        case 0x2c20e8u: goto label_2c20e8;
        case 0x2c20ecu: goto label_2c20ec;
        case 0x2c20f0u: goto label_2c20f0;
        case 0x2c20f4u: goto label_2c20f4;
        case 0x2c20f8u: goto label_2c20f8;
        case 0x2c20fcu: goto label_2c20fc;
        case 0x2c2100u: goto label_2c2100;
        case 0x2c2104u: goto label_2c2104;
        case 0x2c2108u: goto label_2c2108;
        case 0x2c210cu: goto label_2c210c;
        case 0x2c2110u: goto label_2c2110;
        case 0x2c2114u: goto label_2c2114;
        case 0x2c2118u: goto label_2c2118;
        case 0x2c211cu: goto label_2c211c;
        case 0x2c2120u: goto label_2c2120;
        case 0x2c2124u: goto label_2c2124;
        case 0x2c2128u: goto label_2c2128;
        case 0x2c212cu: goto label_2c212c;
        case 0x2c2130u: goto label_2c2130;
        case 0x2c2134u: goto label_2c2134;
        case 0x2c2138u: goto label_2c2138;
        case 0x2c213cu: goto label_2c213c;
        case 0x2c2140u: goto label_2c2140;
        case 0x2c2144u: goto label_2c2144;
        case 0x2c2148u: goto label_2c2148;
        case 0x2c214cu: goto label_2c214c;
        case 0x2c2150u: goto label_2c2150;
        case 0x2c2154u: goto label_2c2154;
        case 0x2c2158u: goto label_2c2158;
        case 0x2c215cu: goto label_2c215c;
        case 0x2c2160u: goto label_2c2160;
        case 0x2c2164u: goto label_2c2164;
        case 0x2c2168u: goto label_2c2168;
        case 0x2c216cu: goto label_2c216c;
        case 0x2c2170u: goto label_2c2170;
        case 0x2c2174u: goto label_2c2174;
        case 0x2c2178u: goto label_2c2178;
        case 0x2c217cu: goto label_2c217c;
        case 0x2c2180u: goto label_2c2180;
        case 0x2c2184u: goto label_2c2184;
        case 0x2c2188u: goto label_2c2188;
        case 0x2c218cu: goto label_2c218c;
        case 0x2c2190u: goto label_2c2190;
        case 0x2c2194u: goto label_2c2194;
        case 0x2c2198u: goto label_2c2198;
        case 0x2c219cu: goto label_2c219c;
        case 0x2c21a0u: goto label_2c21a0;
        case 0x2c21a4u: goto label_2c21a4;
        case 0x2c21a8u: goto label_2c21a8;
        case 0x2c21acu: goto label_2c21ac;
        case 0x2c21b0u: goto label_2c21b0;
        case 0x2c21b4u: goto label_2c21b4;
        case 0x2c21b8u: goto label_2c21b8;
        case 0x2c21bcu: goto label_2c21bc;
        case 0x2c21c0u: goto label_2c21c0;
        case 0x2c21c4u: goto label_2c21c4;
        case 0x2c21c8u: goto label_2c21c8;
        case 0x2c21ccu: goto label_2c21cc;
        case 0x2c21d0u: goto label_2c21d0;
        case 0x2c21d4u: goto label_2c21d4;
        case 0x2c21d8u: goto label_2c21d8;
        case 0x2c21dcu: goto label_2c21dc;
        case 0x2c21e0u: goto label_2c21e0;
        case 0x2c21e4u: goto label_2c21e4;
        case 0x2c21e8u: goto label_2c21e8;
        case 0x2c21ecu: goto label_2c21ec;
        case 0x2c21f0u: goto label_2c21f0;
        case 0x2c21f4u: goto label_2c21f4;
        case 0x2c21f8u: goto label_2c21f8;
        case 0x2c21fcu: goto label_2c21fc;
        case 0x2c2200u: goto label_2c2200;
        case 0x2c2204u: goto label_2c2204;
        case 0x2c2208u: goto label_2c2208;
        case 0x2c220cu: goto label_2c220c;
        case 0x2c2210u: goto label_2c2210;
        case 0x2c2214u: goto label_2c2214;
        case 0x2c2218u: goto label_2c2218;
        case 0x2c221cu: goto label_2c221c;
        case 0x2c2220u: goto label_2c2220;
        case 0x2c2224u: goto label_2c2224;
        case 0x2c2228u: goto label_2c2228;
        case 0x2c222cu: goto label_2c222c;
        case 0x2c2230u: goto label_2c2230;
        case 0x2c2234u: goto label_2c2234;
        case 0x2c2238u: goto label_2c2238;
        case 0x2c223cu: goto label_2c223c;
        case 0x2c2240u: goto label_2c2240;
        case 0x2c2244u: goto label_2c2244;
        case 0x2c2248u: goto label_2c2248;
        case 0x2c224cu: goto label_2c224c;
        case 0x2c2250u: goto label_2c2250;
        case 0x2c2254u: goto label_2c2254;
        case 0x2c2258u: goto label_2c2258;
        case 0x2c225cu: goto label_2c225c;
        case 0x2c2260u: goto label_2c2260;
        case 0x2c2264u: goto label_2c2264;
        case 0x2c2268u: goto label_2c2268;
        case 0x2c226cu: goto label_2c226c;
        case 0x2c2270u: goto label_2c2270;
        case 0x2c2274u: goto label_2c2274;
        case 0x2c2278u: goto label_2c2278;
        case 0x2c227cu: goto label_2c227c;
        case 0x2c2280u: goto label_2c2280;
        case 0x2c2284u: goto label_2c2284;
        case 0x2c2288u: goto label_2c2288;
        case 0x2c228cu: goto label_2c228c;
        case 0x2c2290u: goto label_2c2290;
        case 0x2c2294u: goto label_2c2294;
        case 0x2c2298u: goto label_2c2298;
        case 0x2c229cu: goto label_2c229c;
        case 0x2c22a0u: goto label_2c22a0;
        case 0x2c22a4u: goto label_2c22a4;
        case 0x2c22a8u: goto label_2c22a8;
        case 0x2c22acu: goto label_2c22ac;
        case 0x2c22b0u: goto label_2c22b0;
        case 0x2c22b4u: goto label_2c22b4;
        case 0x2c22b8u: goto label_2c22b8;
        case 0x2c22bcu: goto label_2c22bc;
        case 0x2c22c0u: goto label_2c22c0;
        case 0x2c22c4u: goto label_2c22c4;
        case 0x2c22c8u: goto label_2c22c8;
        case 0x2c22ccu: goto label_2c22cc;
        case 0x2c22d0u: goto label_2c22d0;
        case 0x2c22d4u: goto label_2c22d4;
        case 0x2c22d8u: goto label_2c22d8;
        case 0x2c22dcu: goto label_2c22dc;
        case 0x2c22e0u: goto label_2c22e0;
        case 0x2c22e4u: goto label_2c22e4;
        case 0x2c22e8u: goto label_2c22e8;
        case 0x2c22ecu: goto label_2c22ec;
        case 0x2c22f0u: goto label_2c22f0;
        case 0x2c22f4u: goto label_2c22f4;
        case 0x2c22f8u: goto label_2c22f8;
        case 0x2c22fcu: goto label_2c22fc;
        case 0x2c2300u: goto label_2c2300;
        case 0x2c2304u: goto label_2c2304;
        case 0x2c2308u: goto label_2c2308;
        case 0x2c230cu: goto label_2c230c;
        case 0x2c2310u: goto label_2c2310;
        case 0x2c2314u: goto label_2c2314;
        case 0x2c2318u: goto label_2c2318;
        case 0x2c231cu: goto label_2c231c;
        case 0x2c2320u: goto label_2c2320;
        case 0x2c2324u: goto label_2c2324;
        case 0x2c2328u: goto label_2c2328;
        case 0x2c232cu: goto label_2c232c;
        case 0x2c2330u: goto label_2c2330;
        case 0x2c2334u: goto label_2c2334;
        case 0x2c2338u: goto label_2c2338;
        case 0x2c233cu: goto label_2c233c;
        case 0x2c2340u: goto label_2c2340;
        case 0x2c2344u: goto label_2c2344;
        case 0x2c2348u: goto label_2c2348;
        case 0x2c234cu: goto label_2c234c;
        case 0x2c2350u: goto label_2c2350;
        case 0x2c2354u: goto label_2c2354;
        case 0x2c2358u: goto label_2c2358;
        case 0x2c235cu: goto label_2c235c;
        case 0x2c2360u: goto label_2c2360;
        case 0x2c2364u: goto label_2c2364;
        case 0x2c2368u: goto label_2c2368;
        case 0x2c236cu: goto label_2c236c;
        case 0x2c2370u: goto label_2c2370;
        case 0x2c2374u: goto label_2c2374;
        case 0x2c2378u: goto label_2c2378;
        case 0x2c237cu: goto label_2c237c;
        case 0x2c2380u: goto label_2c2380;
        case 0x2c2384u: goto label_2c2384;
        case 0x2c2388u: goto label_2c2388;
        case 0x2c238cu: goto label_2c238c;
        case 0x2c2390u: goto label_2c2390;
        case 0x2c2394u: goto label_2c2394;
        case 0x2c2398u: goto label_2c2398;
        case 0x2c239cu: goto label_2c239c;
        case 0x2c23a0u: goto label_2c23a0;
        case 0x2c23a4u: goto label_2c23a4;
        case 0x2c23a8u: goto label_2c23a8;
        case 0x2c23acu: goto label_2c23ac;
        case 0x2c23b0u: goto label_2c23b0;
        case 0x2c23b4u: goto label_2c23b4;
        case 0x2c23b8u: goto label_2c23b8;
        case 0x2c23bcu: goto label_2c23bc;
        case 0x2c23c0u: goto label_2c23c0;
        case 0x2c23c4u: goto label_2c23c4;
        case 0x2c23c8u: goto label_2c23c8;
        case 0x2c23ccu: goto label_2c23cc;
        case 0x2c23d0u: goto label_2c23d0;
        case 0x2c23d4u: goto label_2c23d4;
        case 0x2c23d8u: goto label_2c23d8;
        case 0x2c23dcu: goto label_2c23dc;
        case 0x2c23e0u: goto label_2c23e0;
        case 0x2c23e4u: goto label_2c23e4;
        case 0x2c23e8u: goto label_2c23e8;
        case 0x2c23ecu: goto label_2c23ec;
        case 0x2c23f0u: goto label_2c23f0;
        case 0x2c23f4u: goto label_2c23f4;
        case 0x2c23f8u: goto label_2c23f8;
        case 0x2c23fcu: goto label_2c23fc;
        case 0x2c2400u: goto label_2c2400;
        case 0x2c2404u: goto label_2c2404;
        case 0x2c2408u: goto label_2c2408;
        case 0x2c240cu: goto label_2c240c;
        case 0x2c2410u: goto label_2c2410;
        case 0x2c2414u: goto label_2c2414;
        case 0x2c2418u: goto label_2c2418;
        case 0x2c241cu: goto label_2c241c;
        case 0x2c2420u: goto label_2c2420;
        case 0x2c2424u: goto label_2c2424;
        case 0x2c2428u: goto label_2c2428;
        case 0x2c242cu: goto label_2c242c;
        case 0x2c2430u: goto label_2c2430;
        case 0x2c2434u: goto label_2c2434;
        case 0x2c2438u: goto label_2c2438;
        case 0x2c243cu: goto label_2c243c;
        case 0x2c2440u: goto label_2c2440;
        case 0x2c2444u: goto label_2c2444;
        case 0x2c2448u: goto label_2c2448;
        case 0x2c244cu: goto label_2c244c;
        case 0x2c2450u: goto label_2c2450;
        case 0x2c2454u: goto label_2c2454;
        case 0x2c2458u: goto label_2c2458;
        case 0x2c245cu: goto label_2c245c;
        case 0x2c2460u: goto label_2c2460;
        case 0x2c2464u: goto label_2c2464;
        case 0x2c2468u: goto label_2c2468;
        case 0x2c246cu: goto label_2c246c;
        case 0x2c2470u: goto label_2c2470;
        case 0x2c2474u: goto label_2c2474;
        case 0x2c2478u: goto label_2c2478;
        case 0x2c247cu: goto label_2c247c;
        case 0x2c2480u: goto label_2c2480;
        case 0x2c2484u: goto label_2c2484;
        case 0x2c2488u: goto label_2c2488;
        case 0x2c248cu: goto label_2c248c;
        case 0x2c2490u: goto label_2c2490;
        case 0x2c2494u: goto label_2c2494;
        case 0x2c2498u: goto label_2c2498;
        case 0x2c249cu: goto label_2c249c;
        case 0x2c24a0u: goto label_2c24a0;
        case 0x2c24a4u: goto label_2c24a4;
        case 0x2c24a8u: goto label_2c24a8;
        case 0x2c24acu: goto label_2c24ac;
        case 0x2c24b0u: goto label_2c24b0;
        case 0x2c24b4u: goto label_2c24b4;
        case 0x2c24b8u: goto label_2c24b8;
        case 0x2c24bcu: goto label_2c24bc;
        case 0x2c24c0u: goto label_2c24c0;
        case 0x2c24c4u: goto label_2c24c4;
        case 0x2c24c8u: goto label_2c24c8;
        case 0x2c24ccu: goto label_2c24cc;
        case 0x2c24d0u: goto label_2c24d0;
        case 0x2c24d4u: goto label_2c24d4;
        case 0x2c24d8u: goto label_2c24d8;
        case 0x2c24dcu: goto label_2c24dc;
        case 0x2c24e0u: goto label_2c24e0;
        case 0x2c24e4u: goto label_2c24e4;
        case 0x2c24e8u: goto label_2c24e8;
        case 0x2c24ecu: goto label_2c24ec;
        default: return;
    }

label_2c1d20:
    // 0x2c1d20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1d20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1d24:
    // 0x2c1d24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1d24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1d28:
    // 0x2c1d28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1d28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1d2c:
    // 0x2c1d2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1d2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1d30:
    // 0x2c1d30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1d30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1d34:
    // 0x2c1d34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1d34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1d38:
    // 0x2c1d38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1d38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1d3c:
    // 0x2c1d3c: 0x20ffd0  .word       0x0020FFD0                   # mfhi        $ra # 002007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1d3cu;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_2c1d40:
    // 0x2c1d40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1d40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1d44:
    // 0x2c1d44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1d44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1d48:
    // 0x2c1d48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1d48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1d4c:
    // 0x2c1d4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1d4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1d50:
    // 0x2c1d50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1d50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1d54:
    // 0x2c1d54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1d54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1d58:
    // 0x2c1d58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1d58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1d5c:
    // 0x2c1d5c: 0x1faf97d  .word       0x01FAF97D                   # INVALID     $t7, $k0, -0x683 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1d5cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C1D5C raw=0x01FAF97D");
 /* MITIGATED */
label_2c1d60:
    // 0x2c1d60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1d60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1d64:
    // 0x2c1d64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1d64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1d68:
    // 0x2c1d68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1d68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1d6c:
    // 0x2c1d6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1d6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1d70:
    // 0x2c1d70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1d70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1d74:
    // 0x2c1d74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1d74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1d78:
    // 0x2c1d78: 0x3e6d002  .word       0x03E6D002                   # srl         $k0, $a2, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1d78u;
    SET_GPR_S32(ctx, 26, (int32_t)SRL32(GPR_U32(ctx, 6), 0));
label_2c1d7c:
    // 0x2c1d7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1d7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1d80:
    // 0x2c1d80: 0x3e7d002  .word       0x03E7D002                   # srl         $k0, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1d80u;
    SET_GPR_S32(ctx, 26, (int32_t)SRL32(GPR_U32(ctx, 7), 0));
label_2c1d84:
    // 0x2c1d84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1d84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1d88:
    // 0x2c1d88: 0x81f5237c  lb          $s5, 0x237C($t7)
    ctx->pc = 0x2c1d88u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 9084)));
label_2c1d8c:
    // 0x2c1d8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1d8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1d90:
    // 0x2c1d90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1d90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1d94:
    // 0x2c1d94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1d94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1d98:
    // 0x2c1d98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1d98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1d9c:
    // 0x2c1d9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1d9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1da0:
    // 0x2c1da0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1da0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1da4:
    // 0x2c1da4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1da4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1da8:
    // 0x2c1da8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1da8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1dac:
    // 0x2c1dac: 0x1e7adaa  .word       0x01E7ADAA                   # slt         $s5, $t7, $a3 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1dacu;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_2c1db0:
    // 0x2c1db0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1db0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1db4:
    // 0x2c1db4: 0x1e8ad6a  .word       0x01E8AD6A                   # slt         $s5, $t7, $t0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1db4u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_2c1db8:
    // 0x2c1db8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1db8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1dbc:
    // 0x2c1dbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1dbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1dc0:
    // 0x2c1dc0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1dc0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1dc4:
    // 0x2c1dc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1dc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1dc8:
    // 0x2c1dc8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1dc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1dcc:
    // 0x2c1dcc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1dccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1dd0:
    // 0x2c1dd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1dd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1dd4:
    // 0x2c1dd4: 0x1e0b59f  .word       0x01E0B59F                   # ddivu       $s6, $t7, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1dd4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2C1DD4 raw=0x01E0B59F");
 /* MITIGATED */
label_2c1dd8:
    // 0x2c1dd8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1dd8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1ddc:
    // 0x2c1ddc: 0x1e0ad5f  .word       0x01E0AD5F                   # ddivu       $s5, $t7, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1ddcu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2C1DDC raw=0x01E0AD5F");
 /* MITIGATED */
label_2c1de0:
    // 0x2c1de0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1de0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1de4:
    // 0x2c1de4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1de4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1de8:
    // 0x2c1de8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1de8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1dec:
    // 0x2c1dec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1decu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1df0:
    // 0x2c1df0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1df0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1df4:
    // 0x2c1df4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1df4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1df8:
    // 0x2c1df8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1df8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1dfc:
    // 0x2c1dfc: 0x1f6b17c  .word       0x01F6B17C                   # dsll32      $s6, $s6, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1dfcu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << (32 + 5));
label_2c1e00:
    // 0x2c1e00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1e00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1e04:
    // 0x2c1e04: 0x1f5a97c  .word       0x01F5A97C                   # dsll32      $s5, $s5, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1e04u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 5));
label_2c1e08:
    // 0x2c1e08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1e08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1e0c:
    // 0x2c1e0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1e0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1e10:
    // 0x2c1e10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1e10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1e14:
    // 0x2c1e14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1e14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1e18:
    // 0x2c1e18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1e18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1e1c:
    // 0x2c1e1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1e1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1e20:
    // 0x2c1e20: 0x3e6b001  .word       0x03E6B001                   # INVALID     $ra, $a2, -0x4FFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1e20u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2C1E20 raw=0x03E6B001");
 /* MITIGATED */
label_2c1e24:
    // 0x2c1e24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1e24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1e28:
    // 0x2c1e28: 0x3e7a801  .word       0x03E7A801                   # INVALID     $ra, $a3, -0x57FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1e28u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2C1E28 raw=0x03E7A801");
 /* MITIGATED */
label_2c1e2c:
    // 0x2c1e2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1e2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1e30:
    // 0x2c1e30: 0x81942b7c  lb          $s4, 0x2B7C($t4)
    ctx->pc = 0x2c1e30u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 11132)));
label_2c1e34:
    // 0x2c1e34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1e34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1e38:
    // 0x2c1e38: 0x8054033d  lb          $s4, 0x33D($v0)
    ctx->pc = 0x2c1e38u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 829)));
label_2c1e3c:
    // 0x2c1e3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1e3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1e40:
    // 0x2c1e40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1e40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1e44:
    // 0x2c1e44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1e44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1e48:
    // 0x2c1e48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1e48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1e4c:
    // 0x2c1e4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1e4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1e50:
    // 0x2c1e50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1e50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1e54:
    // 0x2c1e54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1e54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1e58:
    // 0x2c1e58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1e58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1e5c:
    // 0x2c1e5c: 0x1c5a268  .word       0x01C5A268                   # mfsa        $s4 # 01C50240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c1e5cu;
    SET_GPR_U32(ctx, 20, ctx->sa);
label_2c1e60:
    // 0x2c1e60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1e60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1e64:
    // 0x2c1e64: 0x1c6a2a8  .word       0x01C6A2A8                   # mfsa        $s4 # 01C60280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c1e64u;
    SET_GPR_U32(ctx, 20, ctx->sa);
label_2c1e68:
    // 0x2c1e68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1e68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1e6c:
    // 0x2c1e6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1e6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1e70:
    // 0x2c1e70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1e70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1e74:
    // 0x2c1e74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1e74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1e78:
    // 0x2c1e78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1e78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1e7c:
    // 0x2c1e7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1e7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1e80:
    // 0x2c1e80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1e80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1e84:
    // 0x2c1e84: 0x1c04a5c  .word       0x01C04A5C                   # dmult       $t6, $zero # 00004A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1e84u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C1E84 raw=0x01C04A5C");
 /* MITIGATED */
label_2c1e88:
    // 0x2c1e88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1e88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1e8c:
    // 0x2c1e8c: 0x1c0529c  .word       0x01C0529C                   # dmult       $t6, $zero # 00005280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1e8cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C1E8C raw=0x01C0529C");
 /* MITIGATED */
label_2c1e90:
    // 0x2c1e90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1e90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1e94:
    // 0x2c1e94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1e94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1e98:
    // 0x2c1e98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1e98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1e9c:
    // 0x2c1e9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1e9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1ea0:
    // 0x2c1ea0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1ea0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1ea4:
    // 0x2c1ea4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1ea4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1ea8:
    // 0x2c1ea8: 0x3e64800  .word       0x03E64800                   # sll         $t1, $a2, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1ea8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 0));
label_2c1eac:
    // 0x2c1eac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1eacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1eb0:
    // 0x2c1eb0: 0x3e75000  .word       0x03E75000                   # sll         $t2, $a3, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1eb0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_2c1eb4:
    // 0x2c1eb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1eb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1eb8:
    // 0x2c1eb8: 0x81f08b3c  lb          $s0, -0x74C4($t7)
    ctx->pc = 0x2c1eb8u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937404)));
label_2c1ebc:
    // 0x2c1ebc: 0x1f361bc  .word       0x01F361BC                   # dsll32      $t4, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1ebcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 19) << (32 + 6));
label_2c1ec0:
    // 0x2c1ec0: 0x81f1933c  lb          $s1, -0x6CC4($t7)
    ctx->pc = 0x2c1ec0u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939452)));
label_2c1ec4:
    // 0x2c1ec4: 0x1f368bd  .word       0x01F368BD                   # INVALID     $t7, $s3, 0x68BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1ec4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C1EC4 raw=0x01F368BD");
 /* MITIGATED */
label_2c1ec8:
    // 0x2c1ec8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1ec8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1ecc:
    // 0x2c1ecc: 0x1f370be  .word       0x01F370BE                   # dsrl32      $t6, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1eccu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 19) >> (32 + 2));
label_2c1ed0:
    // 0x2c1ed0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1ed0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1ed4:
    // 0x2c1ed4: 0x1e07c8b  .word       0x01E07C8B                   # movn        $t7, $t7, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1ed4u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 15));
label_2c1ed8:
    // 0x2c1ed8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1ed8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1edc:
    // 0x2c1edc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1edcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1ee0:
    // 0x2c1ee0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1ee0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1ee4:
    // 0x2c1ee4: 0x1d081ff  .word       0x01D081FF                   # dsra32      $s0, $s0, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1ee4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 7));
label_2c1ee8:
    // 0x2c1ee8: 0x800a0270  lb          $t2, 0x270($zero)
    ctx->pc = 0x2c1ee8u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x270u));
label_2c1eec:
    // 0x2c1eec: 0x1d189ff  .word       0x01D189FF                   # dsra32      $s1, $s1, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1eecu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 7));
label_2c1ef0:
    // 0x2c1ef0: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2c1ef0u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2c1ef4:
    // 0x2c1ef4: 0x1d291ff  .word       0x01D291FF                   # dsra32      $s2, $s2, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1ef4u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 7));
label_2c1ef8:
    // 0x2c1ef8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1ef8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1efc:
    // 0x2c1efc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1efcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1f00:
    // 0x2c1f00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1f00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1f04:
    // 0x2c1f04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1f04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1f08:
    // 0x2c1f08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1f08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1f0c:
    // 0x2c1f0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1f0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1f10:
    // 0x2c1f10: 0x2400003f  addiu       $zero, $zero, 0x3F
    ctx->pc = 0x2c1f10u;
    // NOP (addiu $zero, ...)
label_2c1f14:
    // 0x2c1f14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1f14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1f18:
    // 0x2c1f18: 0x800102f0  lb          $at, 0x2F0($zero)
    ctx->pc = 0x2c1f18u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x2F0u));
label_2c1f1c:
    // 0x2c1f1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1f1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1f20:
    // 0x2c1f20: 0x800d6ff2  lb          $t5, 0x6FF2($zero)
    ctx->pc = 0x2c1f20u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x6FF2u));
label_2c1f24:
    // 0x2c1f24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1f24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1f28:
    // 0x2c1f28: 0x10063003  beq         $zero, $a2, . + 4 + (0x3003 << 2)
label_2c1f2c:
    if (ctx->pc == 0x2C1F2Cu) {
        ctx->pc = 0x2C1F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1F28u;
        // 0x2c1f2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1F30u;
        goto label_2c1f30;
    }
    ctx->pc = 0x2C1F28u;
    {
        const bool branch_taken_0x2c1f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2C1F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1F28u;
        // 0x2c1f2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1f28) {
            ctx->pc = 0x2CDF38u;
            { ctx->pc = 0x2cdf38; return; }
        }
    }
    ctx->pc = 0x2C1F30u;
label_2c1f30:
    // 0x2c1f30: 0x5a006806  blezl       $s0, . + 4 + (0x6806 << 2)
label_2c1f34:
    if (ctx->pc == 0x2C1F34u) {
        ctx->pc = 0x2C1F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1F30u;
        // 0x2c1f34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1F38u;
        goto label_2c1f38;
    }
    ctx->pc = 0x2C1F30u;
    {
        const bool branch_taken_0x2c1f30 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2c1f30) {
            ctx->pc = 0x2C1F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1F30u;
            // 0x2c1f34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBF4Cu;
            return;
        }
    }
    ctx->pc = 0x2C1F38u;
label_2c1f38:
    // 0x2c1f38: 0x10073803  beq         $zero, $a3, . + 4 + (0x3803 << 2)
label_2c1f3c:
    if (ctx->pc == 0x2C1F3Cu) {
        ctx->pc = 0x2C1F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1F38u;
        // 0x2c1f3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1F40u;
        goto label_2c1f40;
    }
    ctx->pc = 0x2C1F38u;
    {
        const bool branch_taken_0x2c1f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2C1F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1F38u;
        // 0x2c1f3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1f38) {
            ctx->pc = 0x2CFF48u;
            return;
        }
    }
    ctx->pc = 0x2C1F40u;
label_2c1f40:
    // 0x2c1f40: 0x800a4a70  lb          $t2, 0x4A70($zero)
    ctx->pc = 0x2c1f40u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x4A70u));
label_2c1f44:
    // 0x2c1f44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1f44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1f48:
    // 0x2c1f48: 0x800b4a70  lb          $t3, 0x4A70($zero)
    ctx->pc = 0x2c1f48u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x4A70u));
label_2c1f4c:
    // 0x2c1f4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1f4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1f50:
    // 0x2c1f50: 0x802df3fc  lb          $t5, -0xC04($at)
    ctx->pc = 0x2c1f50u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294964220)));
label_2c1f54:
    // 0x2c1f54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1f54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1f58:
    // 0x2c1f58: 0x5a00481d  blezl       $s0, . + 4 + (0x481D << 2)
label_2c1f5c:
    if (ctx->pc == 0x2C1F5Cu) {
        ctx->pc = 0x2C1F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1F58u;
        // 0x2c1f5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1F60u;
        goto label_2c1f60;
    }
    ctx->pc = 0x2C1F58u;
    {
        const bool branch_taken_0x2c1f58 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2c1f58) {
            ctx->pc = 0x2C1F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1F58u;
            // 0x2c1f5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3FD0u;
            return;
        }
    }
    ctx->pc = 0x2C1F60u;
label_2c1f60:
    // 0x2c1f60: 0x8062d3fc  lb          $v0, -0x2C04($v1)
    ctx->pc = 0x2c1f60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294956028)));
label_2c1f64:
    // 0x2c1f64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1f64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1f68:
    // 0x2c1f68: 0x800c67f2  lb          $t4, 0x67F2($zero)
    ctx->pc = 0x2c1f68u;
    SET_GPR_S32(ctx, 12, (int8_t)FAST_READ8(0x67F2u));
label_2c1f6c:
    // 0x2c1f6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1f6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1f70:
    // 0x2c1f70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1f70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1f74:
    // 0x2c1f74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1f74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1f78:
    // 0x2c1f78: 0x520c079c  beql        $s0, $t4, . + 4 + (0x79C << 2)
label_2c1f7c:
    if (ctx->pc == 0x2C1F7Cu) {
        ctx->pc = 0x2C1F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1F78u;
        // 0x2c1f7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1F80u;
        goto label_2c1f80;
    }
    ctx->pc = 0x2C1F78u;
    {
        const bool branch_taken_0x2c1f78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 12));
        if (branch_taken_0x2c1f78) {
            ctx->pc = 0x2C1F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1F78u;
            // 0x2c1f7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3DECu;
            { ctx->pc = 0x2c3dec; return; }
        }
    }
    ctx->pc = 0x2C1F80u;
label_2c1f80:
    // 0x2c1f80: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2c1f80u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2c1f84:
    // 0x2c1f84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1f84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1f88:
    // 0x2c1f88: 0x810413fe  lb          $a0, 0x13FE($t0)
    ctx->pc = 0x2c1f88u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 5118)));
label_2c1f8c:
    // 0x2c1f8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1f8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1f90:
    // 0x2c1f90: 0x800701b0  lb          $a3, 0x1B0($zero)
    ctx->pc = 0x2c1f90u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x1B0u));
label_2c1f94:
    // 0x2c1f94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1f94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1f98:
    // 0x2c1f98: 0x802113fe  lb          $at, 0x13FE($at)
    ctx->pc = 0x2c1f98u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 5118)));
label_2c1f9c:
    // 0x2c1f9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1f9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1fa0:
    // 0x2c1fa0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1fa0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1fa4:
    // 0x2c1fa4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1fa4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1fa8:
    // 0x2c1fa8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1fa8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1fac:
    // 0x2c1fac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1facu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1fb0:
    // 0x2c1fb0: 0x12042001  beq         $s0, $a0, . + 4 + (0x2001 << 2)
label_2c1fb4:
    if (ctx->pc == 0x2C1FB4u) {
        ctx->pc = 0x2C1FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1FB0u;
        // 0x2c1fb4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1FB8u;
        goto label_2c1fb8;
    }
    ctx->pc = 0x2C1FB0u;
    {
        const bool branch_taken_0x2c1fb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x2C1FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1FB0u;
        // 0x2c1fb4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1fb0) {
            ctx->pc = 0x2C9FB8u;
            { ctx->pc = 0x2c9fb8; return; }
        }
    }
    ctx->pc = 0x2C1FB8u;
label_2c1fb8:
    // 0x2c1fb8: 0x810413ff  lb          $a0, 0x13FF($t0)
    ctx->pc = 0x2c1fb8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 5119)));
label_2c1fbc:
    // 0x2c1fbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1fbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1fc0:
    // 0x2c1fc0: 0x5a002776  blezl       $s0, . + 4 + (0x2776 << 2)
label_2c1fc4:
    if (ctx->pc == 0x2C1FC4u) {
        ctx->pc = 0x2C1FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1FC0u;
        // 0x2c1fc4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1FC8u;
        goto label_2c1fc8;
    }
    ctx->pc = 0x2C1FC0u;
    {
        const bool branch_taken_0x2c1fc0 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x2c1fc0) {
            ctx->pc = 0x2C1FC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C1FC0u;
            // 0x2c1fc4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CBD9Cu;
            { ctx->pc = 0x2cbd9c; return; }
        }
    }
    ctx->pc = 0x2C1FC8u;
label_2c1fc8:
    // 0x2c1fc8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1fc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1fcc:
    // 0x2c1fcc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1fccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1fd0:
    // 0x2c1fd0: 0x81080bfe  lb          $t0, 0xBFE($t0)
    ctx->pc = 0x2c1fd0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 3070)));
label_2c1fd4:
    // 0x2c1fd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1fd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1fd8:
    // 0x2c1fd8: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c1fd8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2C1FD8 raw=0x01FA0005");
 /* MITIGATED */
label_2c1fdc:
    // 0x2c1fdc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1fdcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1fe0:
    // 0x2c1fe0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1fe0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1fe4:
    // 0x2c1fe4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1fe4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1fe8:
    // 0x2c1fe8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c1fe8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c1fec:
    // 0x2c1fec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c1fecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c1ff0:
    // 0x2c1ff0: 0x11eb47ff  beq         $t7, $t3, . + 4 + (0x47FF << 2)
label_2c1ff4:
    if (ctx->pc == 0x2C1FF4u) {
        ctx->pc = 0x2C1FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1FF0u;
        // 0x2c1ff4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C1FF8u;
        goto label_2c1ff8;
    }
    ctx->pc = 0x2C1FF0u;
    {
        const bool branch_taken_0x2c1ff0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C1FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1FF0u;
        // 0x2c1ff4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1ff0) {
            ctx->pc = 0x2D3FF0u;
            return;
        }
    }
    ctx->pc = 0x2C1FF8u;
label_2c1ff8:
    // 0x2c1ff8: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2c1ffc:
    if (ctx->pc == 0x2C1FFCu) {
        ctx->pc = 0x2C1FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1FF8u;
        // 0x2c1ffc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2000u;
        goto label_2c2000;
    }
    ctx->pc = 0x2C1FF8u;
    {
        const bool branch_taken_0x2c1ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C1FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1FF8u;
        // 0x2c1ffc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1ff8) {
            ctx->pc = 0x2D8000u;
            return;
        }
    }
    ctx->pc = 0x2C2000u;
label_2c2000:
    // 0x2c2000: 0x810b0bff  lb          $t3, 0xBFF($t0)
    ctx->pc = 0x2c2000u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 3071)));
label_2c2004:
    // 0x2c2004: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2004u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2008:
    // 0x2c2008: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2008u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c200c:
    // 0x2c200c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c200cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2010:
    // 0x2c2010: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2010u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2014:
    // 0x2c2014: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2014u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2018:
    // 0x2c2018: 0x1002102c  beq         $zero, $v0, . + 4 + (0x102C << 2)
label_2c201c:
    if (ctx->pc == 0x2C201Cu) {
        ctx->pc = 0x2C201Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2018u;
        // 0x2c201c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2020u;
        goto label_2c2020;
    }
    ctx->pc = 0x2C2018u;
    {
        const bool branch_taken_0x2c2018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C201Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2018u;
        // 0x2c201c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2018) {
            ctx->pc = 0x2C60CCu;
            { ctx->pc = 0x2c60cc; return; }
        }
    }
    ctx->pc = 0x2C2020u;
label_2c2020:
    // 0x2c2020: 0x800016fc  lb          $zero, 0x16FC($zero)
    ctx->pc = 0x2c2020u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x16FCu));
label_2c2024:
    // 0x2c2024: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2024u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2028:
    // 0x2c2028: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2028u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c202c:
    // 0x2c202c: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c202cu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c2030:
    // 0x2c2030: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2030u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2034:
    // 0x2c2034: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2034u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2038:
    // 0x2c2038: 0x4000075f  .word       0x4000075F                   # mfc0        $zero, Index # 0000075F <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c2038u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c203c:
    // 0x2c203c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c203cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2040:
    // 0x2c2040: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2040u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2044:
    // 0x2c2044: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2044u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2048:
    // 0x2c2048: 0x24010410  addiu       $at, $zero, 0x410
    ctx->pc = 0x2c2048u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), 1040));
label_2c204c:
    // 0x2c204c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c204cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2050:
    // 0x2c2050: 0x52010016  beql        $s0, $at, . + 4 + (0x16 << 2)
label_2c2054:
    if (ctx->pc == 0x2C2054u) {
        ctx->pc = 0x2C2054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2050u;
        // 0x2c2054: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2058u;
        goto label_2c2058;
    }
    ctx->pc = 0x2C2050u;
    {
        const bool branch_taken_0x2c2050 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2c2050) {
            ctx->pc = 0x2C2054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2050u;
            // 0x2c2054: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C20ACu;
            goto label_2c20ac;
        }
    }
    ctx->pc = 0x2C2058u;
label_2c2058:
    // 0x2c2058: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2058u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c205c:
    // 0x2c205c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c205cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2060:
    // 0x2c2060: 0x26fdf7df  addiu       $sp, $s7, -0x821
    ctx->pc = 0x2c2060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 23), 4294965215));
label_2c2064:
    // 0x2c2064: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2064u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2068:
    // 0x2c2068: 0x52010013  beql        $s0, $at, . + 4 + (0x13 << 2)
label_2c206c:
    if (ctx->pc == 0x2C206Cu) {
        ctx->pc = 0x2C206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2068u;
        // 0x2c206c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2070u;
        goto label_2c2070;
    }
    ctx->pc = 0x2C2068u;
    {
        const bool branch_taken_0x2c2068 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2c2068) {
            ctx->pc = 0x2C206Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2068u;
            // 0x2c206c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C20B8u;
            goto label_2c20b8;
        }
    }
    ctx->pc = 0x2C2070u;
label_2c2070:
    // 0x2c2070: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2070u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2074:
    // 0x2c2074: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2074u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2078:
    // 0x2c2078: 0x26ff7df7  addiu       $ra, $s7, 0x7DF7
    ctx->pc = 0x2c2078u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 32247));
label_2c207c:
    // 0x2c207c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c207cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2080:
    // 0x2c2080: 0x52010010  beql        $s0, $at, . + 4 + (0x10 << 2)
label_2c2084:
    if (ctx->pc == 0x2C2084u) {
        ctx->pc = 0x2C2084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2080u;
        // 0x2c2084: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2088u;
        goto label_2c2088;
    }
    ctx->pc = 0x2C2080u;
    {
        const bool branch_taken_0x2c2080 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2c2080) {
            ctx->pc = 0x2C2084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2080u;
            // 0x2c2084: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C20C4u;
            goto label_2c20c4;
        }
    }
    ctx->pc = 0x2C2088u;
label_2c2088:
    // 0x2c2088: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2088u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c208c:
    // 0x2c208c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c208cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2090:
    // 0x2c2090: 0x26ffbefb  addiu       $ra, $s7, -0x4105
    ctx->pc = 0x2c2090u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294950651));
label_2c2094:
    // 0x2c2094: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2094u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2098:
    // 0x2c2098: 0x5201000d  beql        $s0, $at, . + 4 + (0xD << 2)
label_2c209c:
    if (ctx->pc == 0x2C209Cu) {
        ctx->pc = 0x2C209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2098u;
        // 0x2c209c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C20A0u;
        goto label_2c20a0;
    }
    ctx->pc = 0x2C2098u;
    {
        const bool branch_taken_0x2c2098 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2c2098) {
            ctx->pc = 0x2C209Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2098u;
            // 0x2c209c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C20D0u;
            goto label_2c20d0;
        }
    }
    ctx->pc = 0x2C20A0u;
label_2c20a0:
    // 0x2c20a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c20a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c20a4:
    // 0x2c20a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c20a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c20a8:
    // 0x2c20a8: 0x26ffdf7d  addiu       $ra, $s7, -0x2083
    ctx->pc = 0x2c20a8u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294958973));
label_2c20ac:
    // 0x2c20ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c20acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c20b0:
    // 0x2c20b0: 0x5201000a  beql        $s0, $at, . + 4 + (0xA << 2)
label_2c20b4:
    if (ctx->pc == 0x2C20B4u) {
        ctx->pc = 0x2C20B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C20B0u;
        // 0x2c20b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C20B8u;
        goto label_2c20b8;
    }
    ctx->pc = 0x2C20B0u;
    {
        const bool branch_taken_0x2c20b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2c20b0) {
            ctx->pc = 0x2C20B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C20B0u;
            // 0x2c20b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C20DCu;
            goto label_2c20dc;
        }
    }
    ctx->pc = 0x2C20B8u;
label_2c20b8:
    // 0x2c20b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c20b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c20bc:
    // 0x2c20bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c20bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c20c0:
    // 0x2c20c0: 0x26ffefbe  addiu       $ra, $s7, -0x1042
    ctx->pc = 0x2c20c0u;
    SET_GPR_S32(ctx, 31, (int32_t)ADD32(GPR_U32(ctx, 23), 4294963134));
label_2c20c4:
    // 0x2c20c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c20c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c20c8:
    // 0x2c20c8: 0x52010007  beql        $s0, $at, . + 4 + (0x7 << 2)
label_2c20cc:
    if (ctx->pc == 0x2C20CCu) {
        ctx->pc = 0x2C20CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C20C8u;
        // 0x2c20cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C20D0u;
        goto label_2c20d0;
    }
    ctx->pc = 0x2C20C8u;
    {
        const bool branch_taken_0x2c20c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2c20c8) {
            ctx->pc = 0x2C20CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C20C8u;
            // 0x2c20cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C20E8u;
            goto label_2c20e8;
        }
    }
    ctx->pc = 0x2C20D0u;
label_2c20d0:
    // 0x2c20d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c20d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c20d4:
    // 0x2c20d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c20d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c20d8:
    // 0x2c20d8: 0x420f000b  .word       0x420F000B                   # INVALID     $s0, $t7, 0xB # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c20d8u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0xB at 0x2C20D8 raw=0x420F000B");
 /* MITIGATED */
label_2c20dc:
    // 0x2c20dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c20dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c20e0:
    // 0x2c20e0: 0x100e0066  beq         $zero, $t6, . + 4 + (0x66 << 2)
label_2c20e4:
    if (ctx->pc == 0x2C20E4u) {
        ctx->pc = 0x2C20E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C20E0u;
        // 0x2c20e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C20E8u;
        goto label_2c20e8;
    }
    ctx->pc = 0x2C20E0u;
    {
        const bool branch_taken_0x2c20e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2C20E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C20E0u;
        // 0x2c20e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c20e0) {
            ctx->pc = 0x2C227Cu;
            goto label_2c227c;
        }
    }
    ctx->pc = 0x2C20E8u;
label_2c20e8:
    // 0x2c20e8: 0x420f0036  .word       0x420F0036                   # INVALID     $s0, $t7, 0x36 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c20e8u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x36 at 0x2C20E8 raw=0x420F0036");
 /* MITIGATED */
label_2c20ec:
    // 0x2c20ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c20ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c20f0:
    // 0x2c20f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c20f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c20f4:
    // 0x2c20f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c20f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c20f8:
    // 0x2c20f8: 0x420f001d  .word       0x420F001D                   # INVALID     $s0, $t7, 0x1D # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c20f8u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x1D at 0x2C20F8 raw=0x420F001D");
 /* MITIGATED */
label_2c20fc:
    // 0x2c20fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c20fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2100:
    // 0x2c2100: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2100u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2104:
    // 0x2c2104: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2104u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2108:
    // 0x2c2108: 0x11e117ff  beq         $t7, $at, . + 4 + (0x17FF << 2)
label_2c210c:
    if (ctx->pc == 0x2C210Cu) {
        ctx->pc = 0x2C210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2108u;
        // 0x2c210c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2110u;
        goto label_2c2110;
    }
    ctx->pc = 0x2C2108u;
    {
        const bool branch_taken_0x2c2108 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 1));
        ctx->pc = 0x2C210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2108u;
        // 0x2c210c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2108) {
            ctx->pc = 0x2C8108u;
            { ctx->pc = 0x2c8108; return; }
        }
    }
    ctx->pc = 0x2C2110u;
label_2c2110:
    // 0x2c2110: 0x80010872  lb          $at, 0x872($zero)
    ctx->pc = 0x2c2110u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x872u));
label_2c2114:
    // 0x2c2114: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2114u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2118:
    // 0x2c2118: 0xa2137ff  j           func_884DFFC
label_2c211c:
    if (ctx->pc == 0x2C211Cu) {
        ctx->pc = 0x2C211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2118u;
        // 0x2c211c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2120u;
        goto label_2c2120;
    }
    ctx->pc = 0x2C2118u;
    ctx->pc = 0x2C211Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2118u;
    // 0x2c211c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x884DFFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x884DFFCu, 0x2C2118u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2C2120u;
label_2c2120:
    // 0x2c2120: 0xa213fff  j           func_884FFFC
label_2c2124:
    if (ctx->pc == 0x2C2124u) {
        ctx->pc = 0x2C2124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2120u;
        // 0x2c2124: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2128u;
        goto label_2c2128;
    }
    ctx->pc = 0x2C2120u;
    ctx->pc = 0x2C2124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2120u;
    // 0x2c2124: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x884FFFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x884FFFCu, 0x2C2120u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2C2128u;
label_2c2128:
    // 0x2c2128: 0x400007c7  .word       0x400007C7                   # mfc0        $zero, Index # 000007C7 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c2128u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c212c:
    // 0x2c212c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c212cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2130:
    // 0x2c2130: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2130u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2134:
    // 0x2c2134: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2134u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2138:
    // 0x2c2138: 0x81ee837f  lb          $t6, -0x7C81($t7)
    ctx->pc = 0x2c2138u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294935423)));
label_2c213c:
    // 0x2c213c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c213cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2140:
    // 0x2c2140: 0x81ee8b7f  lb          $t6, -0x7481($t7)
    ctx->pc = 0x2c2140u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937471)));
label_2c2144:
    // 0x2c2144: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2144u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2148:
    // 0x2c2148: 0x81ee937f  lb          $t6, -0x6C81($t7)
    ctx->pc = 0x2c2148u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939519)));
label_2c214c:
    // 0x2c214c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c214cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2150:
    // 0x2c2150: 0x81ee9b7f  lb          $t6, -0x6481($t7)
    ctx->pc = 0x2c2150u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294941567)));
label_2c2154:
    // 0x2c2154: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2154u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2158:
    // 0x2c2158: 0x81eee37f  lb          $t6, -0x1C81($t7)
    ctx->pc = 0x2c2158u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294959999)));
label_2c215c:
    // 0x2c215c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c215cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2160:
    // 0x2c2160: 0x120e7001  beq         $s0, $t6, . + 4 + (0x7001 << 2)
label_2c2164:
    if (ctx->pc == 0x2C2164u) {
        ctx->pc = 0x2C2164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2160u;
        // 0x2c2164: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2168u;
        goto label_2c2168;
    }
    ctx->pc = 0x2C2160u;
    {
        const bool branch_taken_0x2c2160 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x2C2164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2160u;
        // 0x2c2164: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2160) {
            ctx->pc = 0x2DE168u;
            return;
        }
    }
    ctx->pc = 0x2C2168u;
label_2c2168:
    // 0x2c2168: 0x810273ff  lb          $v0, 0x73FF($t0)
    ctx->pc = 0x2c2168u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29695)));
label_2c216c:
    // 0x2c216c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c216cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2170:
    // 0x2c2170: 0x808373ff  lb          $v1, 0x73FF($a0)
    ctx->pc = 0x2c2170u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29695)));
label_2c2174:
    // 0x2c2174: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2174u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2178:
    // 0x2c2178: 0x804473ff  lb          $a0, 0x73FF($v0)
    ctx->pc = 0x2c2178u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29695)));
label_2c217c:
    // 0x2c217c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c217cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2180:
    // 0x2c2180: 0x802573ff  lb          $a1, 0x73FF($at)
    ctx->pc = 0x2c2180u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29695)));
label_2c2184:
    // 0x2c2184: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2184u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2188:
    // 0x2c2188: 0x120e7001  beq         $s0, $t6, . + 4 + (0x7001 << 2)
label_2c218c:
    if (ctx->pc == 0x2C218Cu) {
        ctx->pc = 0x2C218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2188u;
        // 0x2c218c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2190u;
        goto label_2c2190;
    }
    ctx->pc = 0x2C2188u;
    {
        const bool branch_taken_0x2c2188 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x2C218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2188u;
        // 0x2c218c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2188) {
            ctx->pc = 0x2DE190u;
            return;
        }
    }
    ctx->pc = 0x2C2190u;
label_2c2190:
    // 0x2c2190: 0x810673ff  lb          $a2, 0x73FF($t0)
    ctx->pc = 0x2c2190u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29695)));
label_2c2194:
    // 0x2c2194: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2194u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2198:
    // 0x2c2198: 0x808773ff  lb          $a3, 0x73FF($a0)
    ctx->pc = 0x2c2198u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29695)));
label_2c219c:
    // 0x2c219c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c219cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c21a0:
    // 0x2c21a0: 0x804873ff  lb          $t0, 0x73FF($v0)
    ctx->pc = 0x2c21a0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29695)));
label_2c21a4:
    // 0x2c21a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c21a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c21a8:
    // 0x2c21a8: 0x802973ff  lb          $t1, 0x73FF($at)
    ctx->pc = 0x2c21a8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29695)));
label_2c21ac:
    // 0x2c21ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c21acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c21b0:
    // 0x2c21b0: 0x120e7001  beq         $s0, $t6, . + 4 + (0x7001 << 2)
label_2c21b4:
    if (ctx->pc == 0x2C21B4u) {
        ctx->pc = 0x2C21B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C21B0u;
        // 0x2c21b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C21B8u;
        goto label_2c21b8;
    }
    ctx->pc = 0x2C21B0u;
    {
        const bool branch_taken_0x2c21b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 14));
        ctx->pc = 0x2C21B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C21B0u;
        // 0x2c21b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c21b0) {
            ctx->pc = 0x2DE1B8u;
            return;
        }
    }
    ctx->pc = 0x2C21B8u;
label_2c21b8:
    // 0x2c21b8: 0x810a73ff  lb          $t2, 0x73FF($t0)
    ctx->pc = 0x2c21b8u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29695)));
label_2c21bc:
    // 0x2c21bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c21bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c21c0:
    // 0x2c21c0: 0x808b73ff  lb          $t3, 0x73FF($a0)
    ctx->pc = 0x2c21c0u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29695)));
label_2c21c4:
    // 0x2c21c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c21c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c21c8:
    // 0x2c21c8: 0x804c73ff  lb          $t4, 0x73FF($v0)
    ctx->pc = 0x2c21c8u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29695)));
label_2c21cc:
    // 0x2c21cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c21ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c21d0:
    // 0x2c21d0: 0x802d73ff  lb          $t5, 0x73FF($at)
    ctx->pc = 0x2c21d0u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29695)));
label_2c21d4:
    // 0x2c21d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c21d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c21d8:
    // 0x2c21d8: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2c21d8u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2C21D8 raw=0x48007800");
 /* MITIGATED */
label_2c21dc:
    // 0x2c21dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c21dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c21e0:
    // 0x2c21e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c21e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c21e4:
    // 0x2c21e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c21e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c21e8:
    // 0x2c21e8: 0x800f0070  lb          $t7, 0x70($zero)
    ctx->pc = 0x2c21e8u;
    SET_GPR_S32(ctx, 15, (int8_t)FAST_READ8(0x70u));
label_2c21ec:
    // 0x2c21ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c21ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c21f0:
    // 0x2c21f0: 0x810a73fe  lb          $t2, 0x73FE($t0)
    ctx->pc = 0x2c21f0u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29694)));
label_2c21f4:
    // 0x2c21f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c21f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c21f8:
    // 0x2c21f8: 0x808b73fe  lb          $t3, 0x73FE($a0)
    ctx->pc = 0x2c21f8u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29694)));
label_2c21fc:
    // 0x2c21fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c21fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2200:
    // 0x2c2200: 0x804c73fe  lb          $t4, 0x73FE($v0)
    ctx->pc = 0x2c2200u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29694)));
label_2c2204:
    // 0x2c2204: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2204u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2208:
    // 0x2c2208: 0x802d73fe  lb          $t5, 0x73FE($at)
    ctx->pc = 0x2c2208u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29694)));
label_2c220c:
    // 0x2c220c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c220cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2210:
    // 0x2c2210: 0x100e7001  beq         $zero, $t6, . + 4 + (0x7001 << 2)
label_2c2214:
    if (ctx->pc == 0x2C2214u) {
        ctx->pc = 0x2C2214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2210u;
        // 0x2c2214: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2218u;
        goto label_2c2218;
    }
    ctx->pc = 0x2C2210u;
    {
        const bool branch_taken_0x2c2210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2C2214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2210u;
        // 0x2c2214: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2210) {
            ctx->pc = 0x2DE218u;
            return;
        }
    }
    ctx->pc = 0x2C2218u;
label_2c2218:
    // 0x2c2218: 0x810673fe  lb          $a2, 0x73FE($t0)
    ctx->pc = 0x2c2218u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29694)));
label_2c221c:
    // 0x2c221c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c221cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2220:
    // 0x2c2220: 0x808773fe  lb          $a3, 0x73FE($a0)
    ctx->pc = 0x2c2220u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29694)));
label_2c2224:
    // 0x2c2224: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2224u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2228:
    // 0x2c2228: 0x804873fe  lb          $t0, 0x73FE($v0)
    ctx->pc = 0x2c2228u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29694)));
label_2c222c:
    // 0x2c222c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c222cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2230:
    // 0x2c2230: 0x802973fe  lb          $t1, 0x73FE($at)
    ctx->pc = 0x2c2230u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29694)));
label_2c2234:
    // 0x2c2234: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2234u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2238:
    // 0x2c2238: 0x100e7001  beq         $zero, $t6, . + 4 + (0x7001 << 2)
label_2c223c:
    if (ctx->pc == 0x2C223Cu) {
        ctx->pc = 0x2C223Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2238u;
        // 0x2c223c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2240u;
        goto label_2c2240;
    }
    ctx->pc = 0x2C2238u;
    {
        const bool branch_taken_0x2c2238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2C223Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2238u;
        // 0x2c223c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2238) {
            ctx->pc = 0x2DE240u;
            return;
        }
    }
    ctx->pc = 0x2C2240u;
label_2c2240:
    // 0x2c2240: 0x810273fe  lb          $v0, 0x73FE($t0)
    ctx->pc = 0x2c2240u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 29694)));
label_2c2244:
    // 0x2c2244: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2244u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2248:
    // 0x2c2248: 0x808373fe  lb          $v1, 0x73FE($a0)
    ctx->pc = 0x2c2248u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 29694)));
label_2c224c:
    // 0x2c224c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c224cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2250:
    // 0x2c2250: 0x804473fe  lb          $a0, 0x73FE($v0)
    ctx->pc = 0x2c2250u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29694)));
label_2c2254:
    // 0x2c2254: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2254u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2258:
    // 0x2c2258: 0x802573fe  lb          $a1, 0x73FE($at)
    ctx->pc = 0x2c2258u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29694)));
label_2c225c:
    // 0x2c225c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c225cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2260:
    // 0x2c2260: 0x100e7001  beq         $zero, $t6, . + 4 + (0x7001 << 2)
label_2c2264:
    if (ctx->pc == 0x2C2264u) {
        ctx->pc = 0x2C2264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2260u;
        // 0x2c2264: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2268u;
        goto label_2c2268;
    }
    ctx->pc = 0x2C2260u;
    {
        const bool branch_taken_0x2c2260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2C2264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2260u;
        // 0x2c2264: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2260) {
            ctx->pc = 0x2DE268u;
            return;
        }
    }
    ctx->pc = 0x2C2268u;
label_2c2268:
    // 0x2c2268: 0x81fc737c  lb          $gp, 0x737C($t7)
    ctx->pc = 0x2c2268u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2c226c:
    // 0x2c226c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c226cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2270:
    // 0x2c2270: 0x81f3737c  lb          $s3, 0x737C($t7)
    ctx->pc = 0x2c2270u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2c2274:
    // 0x2c2274: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2274u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2278:
    // 0x2c2278: 0x81f2737c  lb          $s2, 0x737C($t7)
    ctx->pc = 0x2c2278u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2c227c:
    // 0x2c227c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c227cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2280:
    // 0x2c2280: 0x81f1737c  lb          $s1, 0x737C($t7)
    ctx->pc = 0x2c2280u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2c2284:
    // 0x2c2284: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2284u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2288:
    // 0x2c2288: 0x81f0737c  lb          $s0, 0x737C($t7)
    ctx->pc = 0x2c2288u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 29564)));
label_2c228c:
    // 0x2c228c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c228cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2290:
    // 0x2c2290: 0x48000800  .word       0x48000800                   # INVALID     $zero, $zero, 0x800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2c2290u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2C2290 raw=0x48000800");
 /* MITIGATED */
label_2c2294:
    // 0x2c2294: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2294u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2298:
    // 0x2c2298: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2298u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c229c:
    // 0x2c229c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c229cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c22a0:
    // 0x2c22a0: 0x1f537f8  .word       0x01F537F8                   # dsll        $a2, $s5, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c22a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) << 31);
label_2c22a4:
    // 0x2c22a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c22a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c22a8:
    // 0x2c22a8: 0x1f337fb  .word       0x01F337FB                   # dsra        $a2, $s3, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c22a8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 19) >> 31);
label_2c22ac:
    // 0x2c22ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c22acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c22b0:
    // 0x2c22b0: 0x1f437fe  .word       0x01F437FE                   # dsrl32      $a2, $s4, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c22b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) >> (32 + 31));
label_2c22b4:
    // 0x2c22b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c22b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c22b8:
    // 0x2c22b8: 0x1f63ff8  .word       0x01F63FF8                   # dsll        $a3, $s6, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c22b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 22) << 31);
label_2c22bc:
    // 0x2c22bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c22bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c22c0:
    // 0x2c22c0: 0x1f73ffb  .word       0x01F73FFB                   # dsra        $a3, $s7, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c22c0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 23) >> 31);
label_2c22c4:
    // 0x2c22c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c22c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c22c8:
    // 0x2c22c8: 0x1f83ffe  .word       0x01F83FFE                   # dsrl32      $a3, $t8, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c22c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 24) >> (32 + 31));
label_2c22cc:
    // 0x2c22cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c22ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c22d0:
    // 0x2c22d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c22d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c22d4:
    // 0x2c22d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c22d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c22d8:
    // 0x2c22d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c22d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c22dc:
    // 0x2c22dc: 0x1f5a93c  .word       0x01F5A93C                   # dsll32      $s5, $s5, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c22dcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 4));
label_2c22e0:
    // 0x2c22e0: 0x10080012  beq         $zero, $t0, . + 4 + (0x12 << 2)
label_2c22e4:
    if (ctx->pc == 0x2C22E4u) {
        ctx->pc = 0x2C22E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C22E0u;
        // 0x2c22e4: 0x1f3993c  .word       0x01F3993C                   # dsll32      $s3, $s3, 4 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C22E8u;
        goto label_2c22e8;
    }
    ctx->pc = 0x2C22E0u;
    {
        const bool branch_taken_0x2c22e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2C22E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C22E0u;
        // 0x2c22e4: 0x1f3993c  .word       0x01F3993C                   # dsll32      $s3, $s3, 4 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c22e0) {
            ctx->pc = 0x2C232Cu;
            goto label_2c232c;
        }
    }
    ctx->pc = 0x2C22E8u;
label_2c22e8:
    // 0x2c22e8: 0x10090038  beq         $zero, $t1, . + 4 + (0x38 << 2)
label_2c22ec:
    if (ctx->pc == 0x2C22ECu) {
        ctx->pc = 0x2C22ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C22E8u;
        // 0x2c22ec: 0x1f4a13c  .word       0x01F4A13C                   # dsll32      $s4, $s4, 4 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C22F0u;
        goto label_2c22f0;
    }
    ctx->pc = 0x2C22E8u;
    {
        const bool branch_taken_0x2c22e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2C22ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C22E8u;
        // 0x2c22ec: 0x1f4a13c  .word       0x01F4A13C                   # dsll32      $s4, $s4, 4 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c22e8) {
            ctx->pc = 0x2C23CCu;
            goto label_2c23cc;
        }
    }
    ctx->pc = 0x2C22F0u;
label_2c22f0:
    // 0x2c22f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c22f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c22f4:
    // 0x2c22f4: 0x1f6b13c  .word       0x01F6B13C                   # dsll32      $s6, $s6, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c22f4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << (32 + 4));
label_2c22f8:
    // 0x2c22f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c22f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c22fc:
    // 0x2c22fc: 0x1f7b93c  .word       0x01F7B93C                   # dsll32      $s7, $s7, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c22fcu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << (32 + 4));
label_2c2300:
    // 0x2c2300: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2300u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2304:
    // 0x2c2304: 0x1f8c13c  .word       0x01F8C13C                   # dsll32      $t8, $t8, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2304u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << (32 + 4));
label_2c2308:
    // 0x2c2308: 0x3e8a801  .word       0x03E8A801                   # INVALID     $ra, $t0, -0x57FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2308u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2C2308 raw=0x03E8A801");
 /* MITIGATED */
label_2c230c:
    // 0x2c230c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c230cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2310:
    // 0x2c2310: 0x3e89806  srlv        $s3, $t0, $ra
    ctx->pc = 0x2c2310u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2c2314:
    // 0x2c2314: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2314u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2318:
    // 0x2c2318: 0x3e8a00b  movn        $s4, $ra, $t0
    ctx->pc = 0x2c2318u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 31));
label_2c231c:
    // 0x2c231c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c231cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2320:
    // 0x2c2320: 0x3e8a810  .word       0x03E8A810                   # mfhi        $s5 # 03E80000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2320u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_2c2324:
    // 0x2c2324: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2324u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2328:
    // 0x2c2328: 0x3e8b002  .word       0x03E8B002                   # srl         $s6, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2328u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 8), 0));
label_2c232c:
    // 0x2c232c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c232cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2330:
    // 0x2c2330: 0x3e8b807  srav        $s7, $t0, $ra
    ctx->pc = 0x2c2330u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2c2334:
    // 0x2c2334: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2334u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2338:
    // 0x2c2338: 0x0  nop
    ctx->pc = 0x2c2338u;
    // NOP
label_2c233c:
    // 0x2c233c: 0x4a000550  vmaxx       $vf21, $vf0, $vf0x
    ctx->pc = 0x2c233cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
label_2c2340:
    // 0x2c2340: 0x3e8c00c  .word       0x03E8C00C                   # syscall     768 # 03E80000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2340u;
    ctx->pc = 0x2C2344u;
runtime->handleSyscall(rdram, ctx, 0xFA300u);
label_2c2344:
    // 0x2c2344: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2344u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2348:
    // 0x2c2348: 0x3e8b011  .word       0x03E8B011                   # mthi        $ra # 0008B000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2348u;
    ctx->hi = GPR_U64(ctx, 31);
label_2c234c:
    // 0x2c234c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c234cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2350:
    // 0x2c2350: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2350u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2354:
    // 0x2c2354: 0x1e0ffd8  .word       0x01E0FFD8                   # mult        $ra, $t7, $zero # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c2354u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_2c2358:
    // 0x2c2358: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2358u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c235c:
    // 0x2c235c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c235cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2360:
    // 0x2c2360: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2360u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2364:
    // 0x2c2364: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2364u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2368:
    // 0x2c2368: 0x3e88000  .word       0x03E88000                   # sll         $s0, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2368u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 8), 0));
label_2c236c:
    // 0x2c236c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c236cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2370:
    // 0x2c2370: 0x3e88805  .word       0x03E88805                   # INVALID     $ra, $t0, -0x77FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2370u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2C2370 raw=0x03E88805");
 /* MITIGATED */
label_2c2374:
    // 0x2c2374: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2374u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2378:
    // 0x2c2378: 0x3e8900a  movz        $s2, $ra, $t0
    ctx->pc = 0x2c2378u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 31));
label_2c237c:
    // 0x2c237c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c237cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2380:
    // 0x2c2380: 0x3e8800f  .word       0x03E8800F                   # sync # 03E88000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2380u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2c2384:
    // 0x2c2384: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2384u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2388:
    // 0x2c2388: 0x1f02ffd  .word       0x01F02FFD                   # INVALID     $t7, $s0, 0x2FFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2388u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C2388 raw=0x01F02FFD");
 /* MITIGATED */
label_2c238c:
    // 0x2c238c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c238cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2390:
    // 0x2c2390: 0x1f12ffe  .word       0x01F12FFE                   # dsrl32      $a1, $s1, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2390u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) >> (32 + 31));
label_2c2394:
    // 0x2c2394: 0x400403  .word       0x00400403                   # sra         $zero, $zero, 16 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2394u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 16));
label_2c2398:
    // 0x2c2398: 0x1f22fff  .word       0x01F22FFF                   # dsra32      $a1, $s2, 31 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2398u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 18) >> (32 + 31));
label_2c239c:
    // 0x2c239c: 0x400443  .word       0x00400443                   # sra         $zero, $zero, 17 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c239cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 17));
label_2c23a0:
    // 0x2c23a0: 0x437f0000  .word       0x437F0000                   # INVALID     $k1, $ra, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c23a0u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x2C23A0 raw=0x437F0000");
 /* MITIGATED */
label_2c23a4:
    // 0x2c23a4: 0x80400483  lb          $zero, 0x483($v0)
    ctx->pc = 0x2c23a4u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1155)));
label_2c23a8:
    // 0x2c23a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c23a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c23ac:
    // 0x2c23ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c23acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c23b0:
    // 0x2c23b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c23b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c23b4:
    // 0x2c23b4: 0x1c584e8  .word       0x01C584E8                   # mfsa        $s0 # 01C504C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c23b4u;
    SET_GPR_U32(ctx, 16, ctx->sa);
label_2c23b8:
    // 0x2c23b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c23b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c23bc:
    // 0x2c23bc: 0x1c58d28  .word       0x01C58D28                   # mfsa        $s1 # 01C50500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c23bcu;
    SET_GPR_U32(ctx, 17, ctx->sa);
label_2c23c0:
    // 0x2c23c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c23c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c23c4:
    // 0x2c23c4: 0x1c59568  .word       0x01C59568                   # mfsa        $s2 # 01C50540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c23c4u;
    SET_GPR_U32(ctx, 18, ctx->sa);
label_2c23c8:
    // 0x2c23c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c23c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c23cc:
    // 0x2c23cc: 0x1c68428  .word       0x01C68428                   # mfsa        $s0 # 01C60400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c23ccu;
    SET_GPR_U32(ctx, 16, ctx->sa);
label_2c23d0:
    // 0x2c23d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c23d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c23d4:
    // 0x2c23d4: 0x1c68c68  .word       0x01C68C68                   # mfsa        $s1 # 01C60440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c23d4u;
    SET_GPR_U32(ctx, 17, ctx->sa);
label_2c23d8:
    // 0x2c23d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c23d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c23dc:
    // 0x2c23dc: 0x1c694a8  .word       0x01C694A8                   # mfsa        $s2 # 01C60480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c23dcu;
    SET_GPR_U32(ctx, 18, ctx->sa);
label_2c23e0:
    // 0x2c23e0: 0x3e89803  .word       0x03E89803                   # sra         $s3, $t0, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c23e0u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 8), 0));
label_2c23e4:
    // 0x2c23e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c23e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c23e8:
    // 0x2c23e8: 0x3e8a008  .word       0x03E8A008                   # jr          $ra # 0008A000 <InstrIdType: CPU_SPECIAL>
label_2c23ec:
    if (ctx->pc == 0x2C23ECu) {
        ctx->pc = 0x2C23ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C23E8u;
        // 0x2c23ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C23F0u;
        goto label_2c23f0;
    }
    ctx->pc = 0x2C23E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C23ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C23E8u;
        // 0x2c23ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C23E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C23F0u;
label_2c23f0:
    // 0x2c23f0: 0x3e8a80d  break       1000, 672
    ctx->pc = 0x2c23f0u;
    runtime->handleBreak(rdram, ctx);
label_2c23f4:
    // 0x2c23f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c23f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c23f8:
    // 0x2c23f8: 0x3e89812  .word       0x03E89812                   # mflo        $s3 # 03E80000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c23f8u;
    SET_GPR_U64(ctx, 19, ctx->lo);
label_2c23fc:
    // 0x2c23fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c23fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2400:
    // 0x2c2400: 0x3e88004  sllv        $s0, $t0, $ra
    ctx->pc = 0x2c2400u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 31) & 0x1F));
label_2c2404:
    // 0x2c2404: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2404u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2408:
    // 0x2c2408: 0x3e88809  .word       0x03E88809                   # jalr        $s1, $ra # 00080000 <InstrIdType: CPU_SPECIAL>
label_2c240c:
    if (ctx->pc == 0x2C240Cu) {
        ctx->pc = 0x2C240Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2408u;
        // 0x2c240c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2410u;
        goto label_2c2410;
    }
    ctx->pc = 0x2C2408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        SET_GPR_U32(ctx, 17, 0x2C2410u);
        ctx->pc = 0x2C240Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2408u;
        // 0x2c240c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2408u, 0x2C2410u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C2410u;
label_2c2410:
    // 0x2c2410: 0x3e8900e  .word       0x03E8900E                   # INVALID     $ra, $t0, -0x6FF2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2410u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2C2410 raw=0x03E8900E");
 /* MITIGATED */
label_2c2414:
    // 0x2c2414: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2414u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2418:
    // 0x2c2418: 0x3e88013  .word       0x03E88013                   # mtlo        $ra # 00088000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2418u;
    ctx->lo = GPR_U64(ctx, 31);
label_2c241c:
    // 0x2c241c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c241cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2420:
    // 0x2c2420: 0x102d0000  beq         $at, $t5, . + 4 + (0x0 << 2)
label_2c2424:
    if (ctx->pc == 0x2C2424u) {
        ctx->pc = 0x2C2424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2420u;
        // 0x2c2424: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2428u;
        goto label_2c2428;
    }
    ctx->pc = 0x2C2420u;
    {
        const bool branch_taken_0x2c2420 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 13));
        ctx->pc = 0x2C2424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2420u;
        // 0x2c2424: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2420) {
            ctx->pc = 0x2C2424u;
            goto label_2c2424;
        }
    }
    ctx->pc = 0x2C2428u;
label_2c2428:
    // 0x2c2428: 0x10060020  beq         $zero, $a2, . + 4 + (0x20 << 2)
label_2c242c:
    if (ctx->pc == 0x2C242Cu) {
        ctx->pc = 0x2C242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2428u;
        // 0x2c242c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2430u;
        goto label_2c2430;
    }
    ctx->pc = 0x2C2428u;
    {
        const bool branch_taken_0x2c2428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2C242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2428u;
        // 0x2c242c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2428) {
            ctx->pc = 0x2C24ACu;
            goto label_2c24ac;
        }
    }
    ctx->pc = 0x2C2430u;
label_2c2430:
    // 0x2c2430: 0x10070002  beq         $zero, $a3, . + 4 + (0x2 << 2)
label_2c2434:
    if (ctx->pc == 0x2C2434u) {
        ctx->pc = 0x2C2434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2430u;
        // 0x2c2434: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2438u;
        goto label_2c2438;
    }
    ctx->pc = 0x2C2430u;
    {
        const bool branch_taken_0x2c2430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2C2434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2430u;
        // 0x2c2434: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2430) {
            ctx->pc = 0x2C243Cu;
            goto label_2c243c;
        }
    }
    ctx->pc = 0x2C2438u;
label_2c2438:
    // 0x2c2438: 0x10080012  beq         $zero, $t0, . + 4 + (0x12 << 2)
label_2c243c:
    if (ctx->pc == 0x2C243Cu) {
        ctx->pc = 0x2C243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2438u;
        // 0x2c243c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2440u;
        goto label_2c2440;
    }
    ctx->pc = 0x2C2438u;
    {
        const bool branch_taken_0x2c2438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2C243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2438u;
        // 0x2c243c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2438) {
            ctx->pc = 0x2C2484u;
            goto label_2c2484;
        }
    }
    ctx->pc = 0x2C2440u;
label_2c2440:
    // 0x2c2440: 0x10090038  beq         $zero, $t1, . + 4 + (0x38 << 2)
label_2c2444:
    if (ctx->pc == 0x2C2444u) {
        ctx->pc = 0x2C2444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2440u;
        // 0x2c2444: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2448u;
        goto label_2c2448;
    }
    ctx->pc = 0x2C2440u;
    {
        const bool branch_taken_0x2c2440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2C2444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2440u;
        // 0x2c2444: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2440) {
            ctx->pc = 0x2C2524u;
            { ctx->pc = 0x2c2524; return; }
        }
    }
    ctx->pc = 0x2C2448u;
label_2c2448:
    // 0x2c2448: 0x100a0003  beq         $zero, $t2, . + 4 + (0x3 << 2)
label_2c244c:
    if (ctx->pc == 0x2C244Cu) {
        ctx->pc = 0x2C244Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2448u;
        // 0x2c244c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2450u;
        goto label_2c2450;
    }
    ctx->pc = 0x2C2448u;
    {
        const bool branch_taken_0x2c2448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 10));
        ctx->pc = 0x2C244Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2448u;
        // 0x2c244c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2448) {
            ctx->pc = 0x2C2458u;
            goto label_2c2458;
        }
    }
    ctx->pc = 0x2C2450u;
label_2c2450:
    // 0x2c2450: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2c2454:
    if (ctx->pc == 0x2C2454u) {
        ctx->pc = 0x2C2454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2450u;
        // 0x2c2454: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2458u;
        goto label_2c2458;
    }
    ctx->pc = 0x2C2450u;
    {
        const bool branch_taken_0x2c2450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C2454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2450u;
        // 0x2c2454: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2450) {
            ctx->pc = 0x2C2454u;
            goto label_2c2454;
        }
    }
    ctx->pc = 0x2C2458u;
label_2c2458:
    // 0x2c2458: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2458u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c245c:
    // 0x2c245c: 0x1000747  .word       0x01000747                   # srav        $zero, $zero, $t0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c245cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
label_2c2460:
    // 0x2c2460: 0x81e9437c  lb          $t1, 0x437C($t7)
    ctx->pc = 0x2c2460u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c2464:
    // 0x2c2464: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2464u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2468:
    // 0x2c2468: 0x81ea437c  lb          $t2, 0x437C($t7)
    ctx->pc = 0x2c2468u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c246c:
    // 0x2c246c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c246cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2470:
    // 0x2c2470: 0x81f0437c  lb          $s0, 0x437C($t7)
    ctx->pc = 0x2c2470u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c2474:
    // 0x2c2474: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2474u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2478:
    // 0x2c2478: 0x81f1437c  lb          $s1, 0x437C($t7)
    ctx->pc = 0x2c2478u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c247c:
    // 0x2c247c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c247cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2480:
    // 0x2c2480: 0x81f2437c  lb          $s2, 0x437C($t7)
    ctx->pc = 0x2c2480u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c2484:
    // 0x2c2484: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2484u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2488:
    // 0x2c2488: 0x4202007d  .word       0x4202007D                   # INVALID     $s0, $v0, 0x7D # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c2488u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x3D at 0x2C2488 raw=0x4202007D");
 /* MITIGATED */
label_2c248c:
    // 0x2c248c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c248cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2490:
    // 0x2c2490: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2490u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2494:
    // 0x2c2494: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2494u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2498:
    // 0x2c2498: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2c249c:
    if (ctx->pc == 0x2C249Cu) {
        ctx->pc = 0x2C249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2498u;
        // 0x2c249c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C24A0u;
        goto label_2c24a0;
    }
    ctx->pc = 0x2C2498u;
    {
        const bool branch_taken_0x2c2498 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2C249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2498u;
        // 0x2c249c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2498) {
            ctx->pc = 0x2D64A0u;
            return;
        }
    }
    ctx->pc = 0x2C24A0u;
label_2c24a0:
    // 0x2c24a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c24a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c24a4:
    // 0x2c24a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c24a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c24a8:
    // 0x2c24a8: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2c24ac:
    if (ctx->pc == 0x2C24ACu) {
        ctx->pc = 0x2C24ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C24A8u;
        // 0x2c24ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C24B0u;
        goto label_2c24b0;
    }
    ctx->pc = 0x2C24A8u;
    {
        const bool branch_taken_0x2c24a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2c24a8) {
            ctx->pc = 0x2C24ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C24A8u;
            // 0x2c24ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4498u;
            { ctx->pc = 0x2c4498; return; }
        }
    }
    ctx->pc = 0x2C24B0u;
label_2c24b0:
    // 0x2c24b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c24b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c24b4:
    // 0x2c24b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c24b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c24b8:
    // 0x2c24b8: 0x10080038  beq         $zero, $t0, . + 4 + (0x38 << 2)
label_2c24bc:
    if (ctx->pc == 0x2C24BCu) {
        ctx->pc = 0x2C24BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C24B8u;
        // 0x2c24bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C24C0u;
        goto label_2c24c0;
    }
    ctx->pc = 0x2C24B8u;
    {
        const bool branch_taken_0x2c24b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2C24BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C24B8u;
        // 0x2c24bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c24b8) {
            ctx->pc = 0x2C259Cu;
            { ctx->pc = 0x2c259c; return; }
        }
    }
    ctx->pc = 0x2C24C0u;
label_2c24c0:
    // 0x2c24c0: 0x4202006a  .word       0x4202006A                   # INVALID     $s0, $v0, 0x6A # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c24c0u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x2A at 0x2C24C0 raw=0x4202006A");
 /* MITIGATED */
label_2c24c4:
    // 0x2c24c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c24c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c24c8:
    // 0x2c24c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c24c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c24cc:
    // 0x2c24cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c24ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c24d0:
    // 0x2c24d0: 0x500b0066  beql        $zero, $t3, . + 4 + (0x66 << 2)
label_2c24d4:
    if (ctx->pc == 0x2C24D4u) {
        ctx->pc = 0x2C24D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C24D0u;
        // 0x2c24d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C24D8u;
        goto label_2c24d8;
    }
    ctx->pc = 0x2C24D0u;
    {
        const bool branch_taken_0x2c24d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2c24d0) {
            ctx->pc = 0x2C24D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C24D0u;
            // 0x2c24d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C266Cu;
            { ctx->pc = 0x2c266c; return; }
        }
    }
    ctx->pc = 0x2C24D8u;
label_2c24d8:
    // 0x2c24d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c24d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c24dc:
    // 0x2c24dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c24dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c24e0:
    // 0x2c24e0: 0x100d0080  beq         $zero, $t5, . + 4 + (0x80 << 2)
label_2c24e4:
    if (ctx->pc == 0x2C24E4u) {
        ctx->pc = 0x2C24E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C24E0u;
        // 0x2c24e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C24E8u;
        goto label_2c24e8;
    }
    ctx->pc = 0x2C24E0u;
    {
        const bool branch_taken_0x2c24e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2C24E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C24E0u;
        // 0x2c24e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c24e0) {
            ctx->pc = 0x2C26E4u;
            { ctx->pc = 0x2c26e4; return; }
        }
    }
    ctx->pc = 0x2C24E8u;
label_2c24e8:
    // 0x2c24e8: 0x10060002  beq         $zero, $a2, . + 4 + (0x2 << 2)
label_2c24ec:
    if (ctx->pc == 0x2C24ECu) {
        ctx->pc = 0x2C24ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C24E8u;
        // 0x2c24ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C24F0u;
        { ctx->pc = 0x2c24f0; return; }
    }
    ctx->pc = 0x2C24E8u;
    {
        const bool branch_taken_0x2c24e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2C24ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C24E8u;
        // 0x2c24ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c24e8) {
            ctx->pc = 0x2C24F4u;
            { ctx->pc = 0x2c24f4; return; }
        }
    }
    ctx->pc = 0x2C24F0u;
    ctx->pc = 0x2c24f0u;
    return;
}

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


void FUN_0019b808_part47(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1b1f68u: goto label_1b1f68;
        case 0x1b1f6cu: goto label_1b1f6c;
        case 0x1b1f70u: goto label_1b1f70;
        case 0x1b1f74u: goto label_1b1f74;
        case 0x1b1f78u: goto label_1b1f78;
        case 0x1b1f7cu: goto label_1b1f7c;
        case 0x1b1f80u: goto label_1b1f80;
        case 0x1b1f84u: goto label_1b1f84;
        case 0x1b1f88u: goto label_1b1f88;
        case 0x1b1f8cu: goto label_1b1f8c;
        case 0x1b1f90u: goto label_1b1f90;
        case 0x1b1f94u: goto label_1b1f94;
        case 0x1b1f98u: goto label_1b1f98;
        case 0x1b1f9cu: goto label_1b1f9c;
        case 0x1b1fa0u: goto label_1b1fa0;
        case 0x1b1fa4u: goto label_1b1fa4;
        case 0x1b1fa8u: goto label_1b1fa8;
        case 0x1b1facu: goto label_1b1fac;
        case 0x1b1fb0u: goto label_1b1fb0;
        case 0x1b1fb4u: goto label_1b1fb4;
        case 0x1b1fb8u: goto label_1b1fb8;
        case 0x1b1fbcu: goto label_1b1fbc;
        case 0x1b1fc0u: goto label_1b1fc0;
        case 0x1b1fc4u: goto label_1b1fc4;
        case 0x1b1fc8u: goto label_1b1fc8;
        case 0x1b1fccu: goto label_1b1fcc;
        case 0x1b1fd0u: goto label_1b1fd0;
        case 0x1b1fd4u: goto label_1b1fd4;
        case 0x1b1fd8u: goto label_1b1fd8;
        case 0x1b1fdcu: goto label_1b1fdc;
        case 0x1b1fe0u: goto label_1b1fe0;
        case 0x1b1fe4u: goto label_1b1fe4;
        case 0x1b1fe8u: goto label_1b1fe8;
        case 0x1b1fecu: goto label_1b1fec;
        case 0x1b1ff0u: goto label_1b1ff0;
        case 0x1b1ff4u: goto label_1b1ff4;
        case 0x1b1ff8u: goto label_1b1ff8;
        case 0x1b1ffcu: goto label_1b1ffc;
        case 0x1b2000u: goto label_1b2000;
        case 0x1b2004u: goto label_1b2004;
        case 0x1b2008u: goto label_1b2008;
        case 0x1b200cu: goto label_1b200c;
        case 0x1b2010u: goto label_1b2010;
        case 0x1b2014u: goto label_1b2014;
        case 0x1b2018u: goto label_1b2018;
        case 0x1b201cu: goto label_1b201c;
        case 0x1b2020u: goto label_1b2020;
        case 0x1b2024u: goto label_1b2024;
        case 0x1b2028u: goto label_1b2028;
        case 0x1b202cu: goto label_1b202c;
        case 0x1b2030u: goto label_1b2030;
        case 0x1b2034u: goto label_1b2034;
        case 0x1b2038u: goto label_1b2038;
        case 0x1b203cu: goto label_1b203c;
        case 0x1b2040u: goto label_1b2040;
        case 0x1b2044u: goto label_1b2044;
        case 0x1b2048u: goto label_1b2048;
        case 0x1b204cu: goto label_1b204c;
        case 0x1b2050u: goto label_1b2050;
        case 0x1b2054u: goto label_1b2054;
        case 0x1b2058u: goto label_1b2058;
        case 0x1b205cu: goto label_1b205c;
        case 0x1b2060u: goto label_1b2060;
        case 0x1b2064u: goto label_1b2064;
        case 0x1b2068u: goto label_1b2068;
        case 0x1b206cu: goto label_1b206c;
        case 0x1b2070u: goto label_1b2070;
        case 0x1b2074u: goto label_1b2074;
        case 0x1b2078u: goto label_1b2078;
        case 0x1b207cu: goto label_1b207c;
        case 0x1b2080u: goto label_1b2080;
        case 0x1b2084u: goto label_1b2084;
        case 0x1b2088u: goto label_1b2088;
        case 0x1b208cu: goto label_1b208c;
        case 0x1b2090u: goto label_1b2090;
        case 0x1b2094u: goto label_1b2094;
        case 0x1b2098u: goto label_1b2098;
        case 0x1b209cu: goto label_1b209c;
        case 0x1b20a0u: goto label_1b20a0;
        case 0x1b20a4u: goto label_1b20a4;
        case 0x1b20a8u: goto label_1b20a8;
        case 0x1b20acu: goto label_1b20ac;
        case 0x1b20b0u: goto label_1b20b0;
        case 0x1b20b4u: goto label_1b20b4;
        case 0x1b20b8u: goto label_1b20b8;
        case 0x1b20bcu: goto label_1b20bc;
        case 0x1b20c0u: goto label_1b20c0;
        case 0x1b20c4u: goto label_1b20c4;
        case 0x1b20c8u: goto label_1b20c8;
        case 0x1b20ccu: goto label_1b20cc;
        case 0x1b20d0u: goto label_1b20d0;
        case 0x1b20d4u: goto label_1b20d4;
        case 0x1b20d8u: goto label_1b20d8;
        case 0x1b20dcu: goto label_1b20dc;
        case 0x1b20e0u: goto label_1b20e0;
        case 0x1b20e4u: goto label_1b20e4;
        case 0x1b20e8u: goto label_1b20e8;
        case 0x1b20ecu: goto label_1b20ec;
        case 0x1b20f0u: goto label_1b20f0;
        case 0x1b20f4u: goto label_1b20f4;
        case 0x1b20f8u: goto label_1b20f8;
        case 0x1b20fcu: goto label_1b20fc;
        case 0x1b2100u: goto label_1b2100;
        case 0x1b2104u: goto label_1b2104;
        case 0x1b2108u: goto label_1b2108;
        case 0x1b210cu: goto label_1b210c;
        case 0x1b2110u: goto label_1b2110;
        case 0x1b2114u: goto label_1b2114;
        case 0x1b2118u: goto label_1b2118;
        case 0x1b211cu: goto label_1b211c;
        case 0x1b2120u: goto label_1b2120;
        case 0x1b2124u: goto label_1b2124;
        case 0x1b2128u: goto label_1b2128;
        case 0x1b212cu: goto label_1b212c;
        case 0x1b2130u: goto label_1b2130;
        case 0x1b2134u: goto label_1b2134;
        case 0x1b2138u: goto label_1b2138;
        case 0x1b213cu: goto label_1b213c;
        case 0x1b2140u: goto label_1b2140;
        case 0x1b2144u: goto label_1b2144;
        case 0x1b2148u: goto label_1b2148;
        case 0x1b214cu: goto label_1b214c;
        case 0x1b2150u: goto label_1b2150;
        case 0x1b2154u: goto label_1b2154;
        case 0x1b2158u: goto label_1b2158;
        case 0x1b215cu: goto label_1b215c;
        case 0x1b2160u: goto label_1b2160;
        case 0x1b2164u: goto label_1b2164;
        case 0x1b2168u: goto label_1b2168;
        case 0x1b216cu: goto label_1b216c;
        case 0x1b2170u: goto label_1b2170;
        case 0x1b2174u: goto label_1b2174;
        case 0x1b2178u: goto label_1b2178;
        case 0x1b217cu: goto label_1b217c;
        case 0x1b2180u: goto label_1b2180;
        case 0x1b2184u: goto label_1b2184;
        case 0x1b2188u: goto label_1b2188;
        case 0x1b218cu: goto label_1b218c;
        case 0x1b2190u: goto label_1b2190;
        case 0x1b2194u: goto label_1b2194;
        case 0x1b2198u: goto label_1b2198;
        case 0x1b219cu: goto label_1b219c;
        case 0x1b21a0u: goto label_1b21a0;
        case 0x1b21a4u: goto label_1b21a4;
        case 0x1b21a8u: goto label_1b21a8;
        case 0x1b21acu: goto label_1b21ac;
        case 0x1b21b0u: goto label_1b21b0;
        case 0x1b21b4u: goto label_1b21b4;
        case 0x1b21b8u: goto label_1b21b8;
        case 0x1b21bcu: goto label_1b21bc;
        case 0x1b21c0u: goto label_1b21c0;
        case 0x1b21c4u: goto label_1b21c4;
        case 0x1b21c8u: goto label_1b21c8;
        case 0x1b21ccu: goto label_1b21cc;
        case 0x1b21d0u: goto label_1b21d0;
        case 0x1b21d4u: goto label_1b21d4;
        case 0x1b21d8u: goto label_1b21d8;
        case 0x1b21dcu: goto label_1b21dc;
        case 0x1b21e0u: goto label_1b21e0;
        case 0x1b21e4u: goto label_1b21e4;
        case 0x1b21e8u: goto label_1b21e8;
        case 0x1b21ecu: goto label_1b21ec;
        case 0x1b21f0u: goto label_1b21f0;
        case 0x1b21f4u: goto label_1b21f4;
        case 0x1b21f8u: goto label_1b21f8;
        case 0x1b21fcu: goto label_1b21fc;
        case 0x1b2200u: goto label_1b2200;
        case 0x1b2204u: goto label_1b2204;
        case 0x1b2208u: goto label_1b2208;
        case 0x1b220cu: goto label_1b220c;
        case 0x1b2210u: goto label_1b2210;
        case 0x1b2214u: goto label_1b2214;
        case 0x1b2218u: goto label_1b2218;
        case 0x1b221cu: goto label_1b221c;
        case 0x1b2220u: goto label_1b2220;
        case 0x1b2224u: goto label_1b2224;
        case 0x1b2228u: goto label_1b2228;
        case 0x1b222cu: goto label_1b222c;
        case 0x1b2230u: goto label_1b2230;
        case 0x1b2234u: goto label_1b2234;
        case 0x1b2238u: goto label_1b2238;
        case 0x1b223cu: goto label_1b223c;
        case 0x1b2240u: goto label_1b2240;
        case 0x1b2244u: goto label_1b2244;
        case 0x1b2248u: goto label_1b2248;
        case 0x1b224cu: goto label_1b224c;
        case 0x1b2250u: goto label_1b2250;
        case 0x1b2254u: goto label_1b2254;
        case 0x1b2258u: goto label_1b2258;
        case 0x1b225cu: goto label_1b225c;
        case 0x1b2260u: goto label_1b2260;
        case 0x1b2264u: goto label_1b2264;
        case 0x1b2268u: goto label_1b2268;
        case 0x1b226cu: goto label_1b226c;
        case 0x1b2270u: goto label_1b2270;
        case 0x1b2274u: goto label_1b2274;
        case 0x1b2278u: goto label_1b2278;
        case 0x1b227cu: goto label_1b227c;
        case 0x1b2280u: goto label_1b2280;
        case 0x1b2284u: goto label_1b2284;
        case 0x1b2288u: goto label_1b2288;
        case 0x1b228cu: goto label_1b228c;
        case 0x1b2290u: goto label_1b2290;
        case 0x1b2294u: goto label_1b2294;
        case 0x1b2298u: goto label_1b2298;
        case 0x1b229cu: goto label_1b229c;
        case 0x1b22a0u: goto label_1b22a0;
        case 0x1b22a4u: goto label_1b22a4;
        case 0x1b22a8u: goto label_1b22a8;
        case 0x1b22acu: goto label_1b22ac;
        case 0x1b22b0u: goto label_1b22b0;
        case 0x1b22b4u: goto label_1b22b4;
        case 0x1b22b8u: goto label_1b22b8;
        case 0x1b22bcu: goto label_1b22bc;
        case 0x1b22c0u: goto label_1b22c0;
        case 0x1b22c4u: goto label_1b22c4;
        case 0x1b22c8u: goto label_1b22c8;
        case 0x1b22ccu: goto label_1b22cc;
        case 0x1b22d0u: goto label_1b22d0;
        case 0x1b22d4u: goto label_1b22d4;
        case 0x1b22d8u: goto label_1b22d8;
        case 0x1b22dcu: goto label_1b22dc;
        case 0x1b22e0u: goto label_1b22e0;
        case 0x1b22e4u: goto label_1b22e4;
        case 0x1b22e8u: goto label_1b22e8;
        case 0x1b22ecu: goto label_1b22ec;
        case 0x1b22f0u: goto label_1b22f0;
        case 0x1b22f4u: goto label_1b22f4;
        case 0x1b22f8u: goto label_1b22f8;
        case 0x1b22fcu: goto label_1b22fc;
        case 0x1b2300u: goto label_1b2300;
        case 0x1b2304u: goto label_1b2304;
        case 0x1b2308u: goto label_1b2308;
        case 0x1b230cu: goto label_1b230c;
        case 0x1b2310u: goto label_1b2310;
        case 0x1b2314u: goto label_1b2314;
        case 0x1b2318u: goto label_1b2318;
        case 0x1b231cu: goto label_1b231c;
        case 0x1b2320u: goto label_1b2320;
        case 0x1b2324u: goto label_1b2324;
        case 0x1b2328u: goto label_1b2328;
        case 0x1b232cu: goto label_1b232c;
        case 0x1b2330u: goto label_1b2330;
        case 0x1b2334u: goto label_1b2334;
        case 0x1b2338u: goto label_1b2338;
        case 0x1b233cu: goto label_1b233c;
        case 0x1b2340u: goto label_1b2340;
        case 0x1b2344u: goto label_1b2344;
        case 0x1b2348u: goto label_1b2348;
        case 0x1b234cu: goto label_1b234c;
        case 0x1b2350u: goto label_1b2350;
        case 0x1b2354u: goto label_1b2354;
        case 0x1b2358u: goto label_1b2358;
        case 0x1b235cu: goto label_1b235c;
        case 0x1b2360u: goto label_1b2360;
        case 0x1b2364u: goto label_1b2364;
        case 0x1b2368u: goto label_1b2368;
        case 0x1b236cu: goto label_1b236c;
        case 0x1b2370u: goto label_1b2370;
        case 0x1b2374u: goto label_1b2374;
        case 0x1b2378u: goto label_1b2378;
        case 0x1b237cu: goto label_1b237c;
        case 0x1b2380u: goto label_1b2380;
        case 0x1b2384u: goto label_1b2384;
        case 0x1b2388u: goto label_1b2388;
        case 0x1b238cu: goto label_1b238c;
        case 0x1b2390u: goto label_1b2390;
        case 0x1b2394u: goto label_1b2394;
        case 0x1b2398u: goto label_1b2398;
        case 0x1b239cu: goto label_1b239c;
        case 0x1b23a0u: goto label_1b23a0;
        case 0x1b23a4u: goto label_1b23a4;
        case 0x1b23a8u: goto label_1b23a8;
        case 0x1b23acu: goto label_1b23ac;
        case 0x1b23b0u: goto label_1b23b0;
        case 0x1b23b4u: goto label_1b23b4;
        case 0x1b23b8u: goto label_1b23b8;
        case 0x1b23bcu: goto label_1b23bc;
        case 0x1b23c0u: goto label_1b23c0;
        case 0x1b23c4u: goto label_1b23c4;
        case 0x1b23c8u: goto label_1b23c8;
        case 0x1b23ccu: goto label_1b23cc;
        case 0x1b23d0u: goto label_1b23d0;
        case 0x1b23d4u: goto label_1b23d4;
        case 0x1b23d8u: goto label_1b23d8;
        case 0x1b23dcu: goto label_1b23dc;
        case 0x1b23e0u: goto label_1b23e0;
        case 0x1b23e4u: goto label_1b23e4;
        case 0x1b23e8u: goto label_1b23e8;
        case 0x1b23ecu: goto label_1b23ec;
        case 0x1b23f0u: goto label_1b23f0;
        case 0x1b23f4u: goto label_1b23f4;
        case 0x1b23f8u: goto label_1b23f8;
        case 0x1b23fcu: goto label_1b23fc;
        case 0x1b2400u: goto label_1b2400;
        case 0x1b2404u: goto label_1b2404;
        case 0x1b2408u: goto label_1b2408;
        case 0x1b240cu: goto label_1b240c;
        case 0x1b2410u: goto label_1b2410;
        case 0x1b2414u: goto label_1b2414;
        case 0x1b2418u: goto label_1b2418;
        case 0x1b241cu: goto label_1b241c;
        case 0x1b2420u: goto label_1b2420;
        case 0x1b2424u: goto label_1b2424;
        case 0x1b2428u: goto label_1b2428;
        case 0x1b242cu: goto label_1b242c;
        case 0x1b2430u: goto label_1b2430;
        case 0x1b2434u: goto label_1b2434;
        case 0x1b2438u: goto label_1b2438;
        case 0x1b243cu: goto label_1b243c;
        case 0x1b2440u: goto label_1b2440;
        case 0x1b2444u: goto label_1b2444;
        case 0x1b2448u: goto label_1b2448;
        case 0x1b244cu: goto label_1b244c;
        case 0x1b2450u: goto label_1b2450;
        case 0x1b2454u: goto label_1b2454;
        case 0x1b2458u: goto label_1b2458;
        case 0x1b245cu: goto label_1b245c;
        case 0x1b2460u: goto label_1b2460;
        case 0x1b2464u: goto label_1b2464;
        case 0x1b2468u: goto label_1b2468;
        case 0x1b246cu: goto label_1b246c;
        case 0x1b2470u: goto label_1b2470;
        case 0x1b2474u: goto label_1b2474;
        case 0x1b2478u: goto label_1b2478;
        case 0x1b247cu: goto label_1b247c;
        case 0x1b2480u: goto label_1b2480;
        case 0x1b2484u: goto label_1b2484;
        case 0x1b2488u: goto label_1b2488;
        case 0x1b248cu: goto label_1b248c;
        case 0x1b2490u: goto label_1b2490;
        case 0x1b2494u: goto label_1b2494;
        case 0x1b2498u: goto label_1b2498;
        case 0x1b249cu: goto label_1b249c;
        case 0x1b24a0u: goto label_1b24a0;
        case 0x1b24a4u: goto label_1b24a4;
        case 0x1b24a8u: goto label_1b24a8;
        case 0x1b24acu: goto label_1b24ac;
        case 0x1b24b0u: goto label_1b24b0;
        case 0x1b24b4u: goto label_1b24b4;
        case 0x1b24b8u: goto label_1b24b8;
        case 0x1b24bcu: goto label_1b24bc;
        case 0x1b24c0u: goto label_1b24c0;
        case 0x1b24c4u: goto label_1b24c4;
        case 0x1b24c8u: goto label_1b24c8;
        case 0x1b24ccu: goto label_1b24cc;
        case 0x1b24d0u: goto label_1b24d0;
        case 0x1b24d4u: goto label_1b24d4;
        case 0x1b24d8u: goto label_1b24d8;
        case 0x1b24dcu: goto label_1b24dc;
        case 0x1b24e0u: goto label_1b24e0;
        case 0x1b24e4u: goto label_1b24e4;
        case 0x1b24e8u: goto label_1b24e8;
        case 0x1b24ecu: goto label_1b24ec;
        case 0x1b24f0u: goto label_1b24f0;
        case 0x1b24f4u: goto label_1b24f4;
        case 0x1b24f8u: goto label_1b24f8;
        case 0x1b24fcu: goto label_1b24fc;
        case 0x1b2500u: goto label_1b2500;
        case 0x1b2504u: goto label_1b2504;
        case 0x1b2508u: goto label_1b2508;
        case 0x1b250cu: goto label_1b250c;
        case 0x1b2510u: goto label_1b2510;
        case 0x1b2514u: goto label_1b2514;
        case 0x1b2518u: goto label_1b2518;
        case 0x1b251cu: goto label_1b251c;
        case 0x1b2520u: goto label_1b2520;
        case 0x1b2524u: goto label_1b2524;
        case 0x1b2528u: goto label_1b2528;
        case 0x1b252cu: goto label_1b252c;
        case 0x1b2530u: goto label_1b2530;
        case 0x1b2534u: goto label_1b2534;
        case 0x1b2538u: goto label_1b2538;
        case 0x1b253cu: goto label_1b253c;
        case 0x1b2540u: goto label_1b2540;
        case 0x1b2544u: goto label_1b2544;
        case 0x1b2548u: goto label_1b2548;
        case 0x1b254cu: goto label_1b254c;
        case 0x1b2550u: goto label_1b2550;
        case 0x1b2554u: goto label_1b2554;
        case 0x1b2558u: goto label_1b2558;
        case 0x1b255cu: goto label_1b255c;
        case 0x1b2560u: goto label_1b2560;
        case 0x1b2564u: goto label_1b2564;
        case 0x1b2568u: goto label_1b2568;
        case 0x1b256cu: goto label_1b256c;
        case 0x1b2570u: goto label_1b2570;
        case 0x1b2574u: goto label_1b2574;
        case 0x1b2578u: goto label_1b2578;
        case 0x1b257cu: goto label_1b257c;
        case 0x1b2580u: goto label_1b2580;
        case 0x1b2584u: goto label_1b2584;
        case 0x1b2588u: goto label_1b2588;
        case 0x1b258cu: goto label_1b258c;
        case 0x1b2590u: goto label_1b2590;
        case 0x1b2594u: goto label_1b2594;
        case 0x1b2598u: goto label_1b2598;
        case 0x1b259cu: goto label_1b259c;
        case 0x1b25a0u: goto label_1b25a0;
        case 0x1b25a4u: goto label_1b25a4;
        case 0x1b25a8u: goto label_1b25a8;
        case 0x1b25acu: goto label_1b25ac;
        case 0x1b25b0u: goto label_1b25b0;
        case 0x1b25b4u: goto label_1b25b4;
        case 0x1b25b8u: goto label_1b25b8;
        case 0x1b25bcu: goto label_1b25bc;
        case 0x1b25c0u: goto label_1b25c0;
        case 0x1b25c4u: goto label_1b25c4;
        case 0x1b25c8u: goto label_1b25c8;
        case 0x1b25ccu: goto label_1b25cc;
        case 0x1b25d0u: goto label_1b25d0;
        case 0x1b25d4u: goto label_1b25d4;
        case 0x1b25d8u: goto label_1b25d8;
        case 0x1b25dcu: goto label_1b25dc;
        case 0x1b25e0u: goto label_1b25e0;
        case 0x1b25e4u: goto label_1b25e4;
        case 0x1b25e8u: goto label_1b25e8;
        case 0x1b25ecu: goto label_1b25ec;
        case 0x1b25f0u: goto label_1b25f0;
        case 0x1b25f4u: goto label_1b25f4;
        case 0x1b25f8u: goto label_1b25f8;
        case 0x1b25fcu: goto label_1b25fc;
        case 0x1b2600u: goto label_1b2600;
        case 0x1b2604u: goto label_1b2604;
        case 0x1b2608u: goto label_1b2608;
        case 0x1b260cu: goto label_1b260c;
        case 0x1b2610u: goto label_1b2610;
        case 0x1b2614u: goto label_1b2614;
        case 0x1b2618u: goto label_1b2618;
        case 0x1b261cu: goto label_1b261c;
        case 0x1b2620u: goto label_1b2620;
        case 0x1b2624u: goto label_1b2624;
        case 0x1b2628u: goto label_1b2628;
        case 0x1b262cu: goto label_1b262c;
        case 0x1b2630u: goto label_1b2630;
        case 0x1b2634u: goto label_1b2634;
        case 0x1b2638u: goto label_1b2638;
        case 0x1b263cu: goto label_1b263c;
        case 0x1b2640u: goto label_1b2640;
        case 0x1b2644u: goto label_1b2644;
        case 0x1b2648u: goto label_1b2648;
        case 0x1b264cu: goto label_1b264c;
        case 0x1b2650u: goto label_1b2650;
        case 0x1b2654u: goto label_1b2654;
        case 0x1b2658u: goto label_1b2658;
        case 0x1b265cu: goto label_1b265c;
        case 0x1b2660u: goto label_1b2660;
        case 0x1b2664u: goto label_1b2664;
        case 0x1b2668u: goto label_1b2668;
        case 0x1b266cu: goto label_1b266c;
        case 0x1b2670u: goto label_1b2670;
        case 0x1b2674u: goto label_1b2674;
        case 0x1b2678u: goto label_1b2678;
        case 0x1b267cu: goto label_1b267c;
        case 0x1b2680u: goto label_1b2680;
        case 0x1b2684u: goto label_1b2684;
        case 0x1b2688u: goto label_1b2688;
        case 0x1b268cu: goto label_1b268c;
        case 0x1b2690u: goto label_1b2690;
        case 0x1b2694u: goto label_1b2694;
        case 0x1b2698u: goto label_1b2698;
        case 0x1b269cu: goto label_1b269c;
        case 0x1b26a0u: goto label_1b26a0;
        case 0x1b26a4u: goto label_1b26a4;
        case 0x1b26a8u: goto label_1b26a8;
        case 0x1b26acu: goto label_1b26ac;
        case 0x1b26b0u: goto label_1b26b0;
        case 0x1b26b4u: goto label_1b26b4;
        case 0x1b26b8u: goto label_1b26b8;
        case 0x1b26bcu: goto label_1b26bc;
        case 0x1b26c0u: goto label_1b26c0;
        case 0x1b26c4u: goto label_1b26c4;
        case 0x1b26c8u: goto label_1b26c8;
        case 0x1b26ccu: goto label_1b26cc;
        case 0x1b26d0u: goto label_1b26d0;
        case 0x1b26d4u: goto label_1b26d4;
        case 0x1b26d8u: goto label_1b26d8;
        case 0x1b26dcu: goto label_1b26dc;
        case 0x1b26e0u: goto label_1b26e0;
        case 0x1b26e4u: goto label_1b26e4;
        case 0x1b26e8u: goto label_1b26e8;
        case 0x1b26ecu: goto label_1b26ec;
        case 0x1b26f0u: goto label_1b26f0;
        case 0x1b26f4u: goto label_1b26f4;
        case 0x1b26f8u: goto label_1b26f8;
        case 0x1b26fcu: goto label_1b26fc;
        case 0x1b2700u: goto label_1b2700;
        case 0x1b2704u: goto label_1b2704;
        case 0x1b2708u: goto label_1b2708;
        case 0x1b270cu: goto label_1b270c;
        case 0x1b2710u: goto label_1b2710;
        case 0x1b2714u: goto label_1b2714;
        case 0x1b2718u: goto label_1b2718;
        case 0x1b271cu: goto label_1b271c;
        case 0x1b2720u: goto label_1b2720;
        case 0x1b2724u: goto label_1b2724;
        case 0x1b2728u: goto label_1b2728;
        case 0x1b272cu: goto label_1b272c;
        case 0x1b2730u: goto label_1b2730;
        case 0x1b2734u: goto label_1b2734;
        default: return;
    }

label_1b1f68:
    // 0x1b1f68: 0xc08f4fe  jal         func_23D3F8
label_1b1f6c:
    if (ctx->pc == 0x1B1F6Cu) {
        ctx->pc = 0x1B1F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1F68u;
        // 0x1b1f6c: 0x240603ff  addiu       $a2, $zero, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1F70u;
        goto label_1b1f70;
    }
    ctx->pc = 0x1B1F68u;
    SET_GPR_U32(ctx, 31, 0x1B1F70u);
    ctx->pc = 0x1B1F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1F68u;
    // 0x1b1f6c: 0x240603ff  addiu       $a2, $zero, 0x3FF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D3F8u;
    { ctx->pc = 0x23d3f8; return; }
    ctx->pc = 0x1B1F70u;
label_1b1f70:
    // 0x1b1f70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b1f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b1f74:
    // 0x1b1f74: 0xa2200413  sb          $zero, 0x413($s1)
    ctx->pc = 0x1b1f74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1043), (uint8_t)GPR_U32(ctx, 0));
label_1b1f78:
    // 0x1b1f78: 0xc069bee  jal         func_1A6FB8
label_1b1f7c:
    if (ctx->pc == 0x1B1F7Cu) {
        ctx->pc = 0x1B1F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1F78u;
        // 0x1b1f7c: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1F80u;
        goto label_1b1f80;
    }
    ctx->pc = 0x1B1F78u;
    SET_GPR_U32(ctx, 31, 0x1B1F80u);
    ctx->pc = 0x1B1F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1F78u;
    // 0x1b1f7c: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    { ctx->pc = 0x1a6fb8; return; }
    ctx->pc = 0x1B1F80u;
label_1b1f80:
    // 0x1b1f80: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1b1f80u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
label_1b1f84:
    // 0x1b1f84: 0x3c0b001b  lui         $t3, 0x1B
    ctx->pc = 0x1b1f84u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)27 << 16));
label_1b1f88:
    // 0x1b1f88: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x1b1f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
label_1b1f8c:
    // 0x1b1f8c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1b1f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1b1f90:
    // 0x1b1f90: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1b1f90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b1f94:
    // 0x1b1f94: 0x252977c0  addiu       $t1, $t1, 0x77C0
    ctx->pc = 0x1b1f94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30656));
label_1b1f98:
    // 0x1b1f98: 0x256b1e38  addiu       $t3, $t3, 0x1E38
    ctx->pc = 0x1b1f98u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 7736));
label_1b1f9c:
    // 0x1b1f9c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1b1f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1b1fa0:
    // 0x1b1fa0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b1fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b1fa4:
    // 0x1b1fa4: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x1b1fa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
label_1b1fa8:
    // 0x1b1fa8: 0xc069e2a  jal         func_1A78A8
label_1b1fac:
    if (ctx->pc == 0x1B1FACu) {
        ctx->pc = 0x1B1FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1FA8u;
        // 0x1b1fac: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1FB0u;
        goto label_1b1fb0;
    }
    ctx->pc = 0x1B1FA8u;
    SET_GPR_U32(ctx, 31, 0x1B1FB0u);
    ctx->pc = 0x1B1FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1FA8u;
    // 0x1b1fac: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1B1FB0u;
label_1b1fb0:
    // 0x1b1fb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b1fb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b1fb4:
    // 0x1b1fb4: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_1b1fb8:
    if (ctx->pc == 0x1B1FB8u) {
        ctx->pc = 0x1B1FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1FB4u;
        // 0x1b1fb8: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1FBCu;
        goto label_1b1fbc;
    }
    ctx->pc = 0x1B1FB4u;
    {
        const bool branch_taken_0x1b1fb4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1FB4u;
        // 0x1b1fb8: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1fb4) {
            ctx->pc = 0x1B1FC8u;
            goto label_1b1fc8;
        }
    }
    ctx->pc = 0x1B1FBCu;
label_1b1fbc:
    // 0x1b1fbc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1b1fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1b1fc0:
    // 0x1b1fc0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b1fc4:
    if (ctx->pc == 0x1B1FC4u) {
        ctx->pc = 0x1B1FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1FC0u;
        // 0x1b1fc4: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1FC8u;
        goto label_1b1fc8;
    }
    ctx->pc = 0x1B1FC0u;
    {
        const bool branch_taken_0x1b1fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1FC0u;
        // 0x1b1fc4: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1fc0) {
            ctx->pc = 0x1B1FD0u;
            goto label_1b1fd0;
        }
    }
    ctx->pc = 0x1B1FC8u;
label_1b1fc8:
    // 0x1b1fc8: 0xc069210  jal         func_1A4840
label_1b1fcc:
    if (ctx->pc == 0x1B1FCCu) {
        ctx->pc = 0x1B1FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1FC8u;
        // 0x1b1fcc: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1FD0u;
        goto label_1b1fd0;
    }
    ctx->pc = 0x1B1FC8u;
    SET_GPR_U32(ctx, 31, 0x1B1FD0u);
    ctx->pc = 0x1B1FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1FC8u;
    // 0x1b1fcc: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B1FD0u;
label_1b1fd0:
    // 0x1b1fd0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b1fd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b1fd4:
    // 0x1b1fd4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1b1fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1b1fd8:
    // 0x1b1fd8: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1b1fd8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1b1fdc:
    // 0x1b1fdc: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1b1fdcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1b1fe0:
    // 0x1b1fe0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1b1fe0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1b1fe4:
    // 0x1b1fe4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1b1fe4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1b1fe8:
    // 0x1b1fe8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1b1fe8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1b1fec:
    // 0x1b1fec: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b1fecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b1ff0:
    // 0x1b1ff0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b1ff0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b1ff4:
    // 0x1b1ff4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b1ff4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b1ff8:
    // 0x1b1ff8: 0x3e00008  jr          $ra
label_1b1ffc:
    if (ctx->pc == 0x1B1FFCu) {
        ctx->pc = 0x1B1FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1FF8u;
        // 0x1b1ffc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2000u;
        goto label_1b2000;
    }
    ctx->pc = 0x1B1FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1FF8u;
        // 0x1b1ffc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2000u;
label_1b2000:
    // 0x1b2000: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b2000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1b2004:
    // 0x1b2004: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b2004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1b2008:
    // 0x1b2008: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b2008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1b200c:
    // 0x1b200c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b200cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1b2010:
    // 0x1b2010: 0x24526200  addiu       $s2, $v0, 0x6200
    ctx->pc = 0x1b2010u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 25088));
label_1b2014:
    // 0x1b2014: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b2014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1b2018:
    // 0x1b2018: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b2018u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b201c:
    // 0x1b201c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1b201cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1b2020:
    // 0x1b2020: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1b2020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_1b2024:
    // 0x1b2024: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1b2024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1b2028:
    // 0x1b2028: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1b202c:
    if (ctx->pc == 0x1B202Cu) {
        ctx->pc = 0x1B202Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2028u;
        // 0x1b202c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2030u;
        goto label_1b2030;
    }
    ctx->pc = 0x1B2028u;
    {
        const bool branch_taken_0x1b2028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B202Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2028u;
        // 0x1b202c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2028) {
            ctx->pc = 0x1B2038u;
            goto label_1b2038;
        }
    }
    ctx->pc = 0x1B2030u;
label_1b2030:
    // 0x1b2030: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1b2034:
    if (ctx->pc == 0x1B2034u) {
        ctx->pc = 0x1B2034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2030u;
        // 0x1b2034: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2038u;
        goto label_1b2038;
    }
    ctx->pc = 0x1B2030u;
    {
        const bool branch_taken_0x1b2030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2030u;
        // 0x1b2034: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2030) {
            ctx->pc = 0x1B20B0u;
            goto label_1b20b0;
        }
    }
    ctx->pc = 0x1B2038u;
label_1b2038:
    // 0x1b2038: 0x3c130029  lui         $s3, 0x29
    ctx->pc = 0x1b2038u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)41 << 16));
label_1b203c:
    // 0x1b203c: 0xc06921c  jal         func_1A4870
label_1b2040:
    if (ctx->pc == 0x1B2040u) {
        ctx->pc = 0x1B2040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B203Cu;
        // 0x1b2040: 0x8e648d0c  lw          $a0, -0x72F4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2044u;
        goto label_1b2044;
    }
    ctx->pc = 0x1B203Cu;
    SET_GPR_U32(ctx, 31, 0x1B2044u);
    ctx->pc = 0x1B2040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B203Cu;
    // 0x1b2040: 0x8e648d0c  lw          $a0, -0x72F4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4870u;
    { ctx->pc = 0x1a4870; return; }
    ctx->pc = 0x1B2044u;
label_1b2044:
    // 0x1b2044: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1b2048:
    if (ctx->pc == 0x1B2048u) {
        ctx->pc = 0x1B2048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2044u;
        // 0x1b2048: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B204Cu;
        goto label_1b204c;
    }
    ctx->pc = 0x1B2044u;
    {
        const bool branch_taken_0x1b2044 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B2048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2044u;
        // 0x1b2048: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2044) {
            ctx->pc = 0x1B2054u;
            goto label_1b2054;
        }
    }
    ctx->pc = 0x1B204Cu;
label_1b204c:
    // 0x1b204c: 0x10000018  b           . + 4 + (0x18 << 2)
label_1b2050:
    if (ctx->pc == 0x1B2050u) {
        ctx->pc = 0x1B2050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B204Cu;
        // 0x1b2050: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2054u;
        goto label_1b2054;
    }
    ctx->pc = 0x1B204Cu;
    {
        const bool branch_taken_0x1b204c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B204Cu;
        // 0x1b2050: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b204c) {
            ctx->pc = 0x1B20B0u;
            goto label_1b20b0;
        }
    }
    ctx->pc = 0x1B2054u;
label_1b2054:
    // 0x1b2054: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1b2054u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
label_1b2058:
    // 0x1b2058: 0x24426280  addiu       $v0, $v0, 0x6280
    ctx->pc = 0x1b2058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25216));
label_1b205c:
    // 0x1b205c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b205cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b2060:
    // 0x1b2060: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1b2060u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
label_1b2064:
    // 0x1b2064: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b2064u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b2068:
    // 0x1b2068: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x1b2068u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
label_1b206c:
    // 0x1b206c: 0x252977c0  addiu       $t1, $t1, 0x77C0
    ctx->pc = 0x1b206cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30656));
label_1b2070:
    // 0x1b2070: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b2070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1b2074:
    // 0x1b2074: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1b2074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1b2078:
    // 0x1b2078: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b2078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b207c:
    // 0x1b207c: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1b207cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1b2080:
    // 0x1b2080: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b2080u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b2084:
    // 0x1b2084: 0xc069e2a  jal         func_1A78A8
label_1b2088:
    if (ctx->pc == 0x1B2088u) {
        ctx->pc = 0x1B2088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2084u;
        // 0x1b2088: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B208Cu;
        goto label_1b208c;
    }
    ctx->pc = 0x1B2084u;
    SET_GPR_U32(ctx, 31, 0x1B208Cu);
    ctx->pc = 0x1B2088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2084u;
    // 0x1b2088: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1B208Cu;
label_1b208c:
    // 0x1b208c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b208cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b2090:
    // 0x1b2090: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_1b2094:
    if (ctx->pc == 0x1B2094u) {
        ctx->pc = 0x1B2094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2090u;
        // 0x1b2094: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2098u;
        goto label_1b2098;
    }
    ctx->pc = 0x1B2090u;
    {
        const bool branch_taken_0x1b2090 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2090u;
        // 0x1b2094: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2090) {
            ctx->pc = 0x1B20A4u;
            goto label_1b20a4;
        }
    }
    ctx->pc = 0x1B2098u;
label_1b2098:
    // 0x1b2098: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1b2098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1b209c:
    // 0x1b209c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b20a0:
    if (ctx->pc == 0x1B20A0u) {
        ctx->pc = 0x1B20A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B209Cu;
        // 0x1b20a0: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B20A4u;
        goto label_1b20a4;
    }
    ctx->pc = 0x1B209Cu;
    {
        const bool branch_taken_0x1b209c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B20A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B209Cu;
        // 0x1b20a0: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b209c) {
            ctx->pc = 0x1B20ACu;
            goto label_1b20ac;
        }
    }
    ctx->pc = 0x1B20A4u;
label_1b20a4:
    // 0x1b20a4: 0xc069210  jal         func_1A4840
label_1b20a8:
    if (ctx->pc == 0x1B20A8u) {
        ctx->pc = 0x1B20A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B20A4u;
        // 0x1b20a8: 0x8e648d0c  lw          $a0, -0x72F4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B20ACu;
        goto label_1b20ac;
    }
    ctx->pc = 0x1B20A4u;
    SET_GPR_U32(ctx, 31, 0x1B20ACu);
    ctx->pc = 0x1B20A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B20A4u;
    // 0x1b20a8: 0x8e648d0c  lw          $a0, -0x72F4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B20ACu;
label_1b20ac:
    // 0x1b20ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b20acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b20b0:
    // 0x1b20b0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1b20b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1b20b4:
    // 0x1b20b4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1b20b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1b20b8:
    // 0x1b20b8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b20b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b20bc:
    // 0x1b20bc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b20bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b20c0:
    // 0x1b20c0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b20c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b20c4:
    // 0x1b20c4: 0x3e00008  jr          $ra
label_1b20c8:
    if (ctx->pc == 0x1B20C8u) {
        ctx->pc = 0x1B20C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B20C4u;
        // 0x1b20c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B20CCu;
        goto label_1b20cc;
    }
    ctx->pc = 0x1B20C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B20C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B20C4u;
        // 0x1b20c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B20C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B20CCu;
label_1b20cc:
    // 0x1b20cc: 0x0  nop
    ctx->pc = 0x1b20ccu;
    // NOP
label_1b20d0:
    // 0x1b20d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1b20d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1b20d4:
    // 0x1b20d4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b20d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1b20d8:
    // 0x1b20d8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1b20d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_1b20dc:
    // 0x1b20dc: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1b20dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_1b20e0:
    // 0x1b20e0: 0x24556200  addiu       $s5, $v0, 0x6200
    ctx->pc = 0x1b20e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 25088));
label_1b20e4:
    // 0x1b20e4: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1b20e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_1b20e8:
    // 0x1b20e8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1b20e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b20ec:
    // 0x1b20ec: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b20ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1b20f0:
    // 0x1b20f0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1b20f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b20f4:
    // 0x1b20f4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1b20f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1b20f8:
    // 0x1b20f8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b20f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1b20fc:
    // 0x1b20fc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b20fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1b2100:
    // 0x1b2100: 0x8ea20024  lw          $v0, 0x24($s5)
    ctx->pc = 0x1b2100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
label_1b2104:
    // 0x1b2104: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1b2108:
    if (ctx->pc == 0x1B2108u) {
        ctx->pc = 0x1B2108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2104u;
        // 0x1b2108: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B210Cu;
        goto label_1b210c;
    }
    ctx->pc = 0x1B2104u;
    {
        const bool branch_taken_0x1b2104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2104u;
        // 0x1b2108: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2104) {
            ctx->pc = 0x1B2114u;
            goto label_1b2114;
        }
    }
    ctx->pc = 0x1B210Cu;
label_1b210c:
    // 0x1b210c: 0x1000002d  b           . + 4 + (0x2D << 2)
label_1b2110:
    if (ctx->pc == 0x1B2110u) {
        ctx->pc = 0x1B2110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B210Cu;
        // 0x1b2110: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2114u;
        goto label_1b2114;
    }
    ctx->pc = 0x1B210Cu;
    {
        const bool branch_taken_0x1b210c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B210Cu;
        // 0x1b2110: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b210c) {
            ctx->pc = 0x1B21C4u;
            goto label_1b21c4;
        }
    }
    ctx->pc = 0x1B2114u;
label_1b2114:
    // 0x1b2114: 0x3c120029  lui         $s2, 0x29
    ctx->pc = 0x1b2114u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)41 << 16));
label_1b2118:
    // 0x1b2118: 0xc06921c  jal         func_1A4870
label_1b211c:
    if (ctx->pc == 0x1B211Cu) {
        ctx->pc = 0x1B211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2118u;
        // 0x1b211c: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2120u;
        goto label_1b2120;
    }
    ctx->pc = 0x1B2118u;
    SET_GPR_U32(ctx, 31, 0x1B2120u);
    ctx->pc = 0x1B211Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2118u;
    // 0x1b211c: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4870u;
    { ctx->pc = 0x1a4870; return; }
    ctx->pc = 0x1B2120u;
label_1b2120:
    // 0x1b2120: 0x4400028  bltz        $v0, . + 4 + (0x28 << 2)
label_1b2124:
    if (ctx->pc == 0x1B2124u) {
        ctx->pc = 0x1B2124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2120u;
        // 0x1b2124: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2128u;
        goto label_1b2128;
    }
    ctx->pc = 0x1B2120u;
    {
        const bool branch_taken_0x1b2120 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B2124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2120u;
        // 0x1b2124: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2120) {
            ctx->pc = 0x1B21C4u;
            goto label_1b21c4;
        }
    }
    ctx->pc = 0x1B2128u;
label_1b2128:
    // 0x1b2128: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_1b212c:
    if (ctx->pc == 0x1B212Cu) {
        ctx->pc = 0x1B2130u;
        goto label_1b2130;
    }
    ctx->pc = 0x1B2128u;
    {
        const bool branch_taken_0x1b2128 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2128) {
            ctx->pc = 0x1B213Cu;
            goto label_1b213c;
        }
    }
    ctx->pc = 0x1B2130u;
label_1b2130:
    // 0x1b2130: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1b2130u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1b2134:
    // 0x1b2134: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1b2138:
    if (ctx->pc == 0x1B2138u) {
        ctx->pc = 0x1B2138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2134u;
        // 0x1b2138: 0x3c100037  lui         $s0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B213Cu;
        goto label_1b213c;
    }
    ctx->pc = 0x1B2134u;
    {
        const bool branch_taken_0x1b2134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2134u;
        // 0x1b2138: 0x3c100037  lui         $s0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2134) {
            ctx->pc = 0x1B214Cu;
            goto label_1b214c;
        }
    }
    ctx->pc = 0x1B213Cu;
label_1b213c:
    // 0x1b213c: 0xc069210  jal         func_1A4840
label_1b2140:
    if (ctx->pc == 0x1B2140u) {
        ctx->pc = 0x1B2140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B213Cu;
        // 0x1b2140: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2144u;
        goto label_1b2144;
    }
    ctx->pc = 0x1B213Cu;
    SET_GPR_U32(ctx, 31, 0x1B2144u);
    ctx->pc = 0x1B2140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B213Cu;
    // 0x1b2140: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B2144u;
label_1b2144:
    // 0x1b2144: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1b2148:
    if (ctx->pc == 0x1B2148u) {
        ctx->pc = 0x1B2148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2144u;
        // 0x1b2148: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B214Cu;
        goto label_1b214c;
    }
    ctx->pc = 0x1B2144u;
    {
        const bool branch_taken_0x1b2144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2144u;
        // 0x1b2148: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2144) {
            ctx->pc = 0x1B21C4u;
            goto label_1b21c4;
        }
    }
    ctx->pc = 0x1B214Cu;
label_1b214c:
    // 0x1b214c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b214cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b2150:
    // 0x1b2150: 0x261062c4  addiu       $s0, $s0, 0x62C4
    ctx->pc = 0x1b2150u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25284));
label_1b2154:
    // 0x1b2154: 0x240603ff  addiu       $a2, $zero, 0x3FF
    ctx->pc = 0x1b2154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
label_1b2158:
    // 0x1b2158: 0xc08f4fe  jal         func_23D3F8
label_1b215c:
    if (ctx->pc == 0x1B215Cu) {
        ctx->pc = 0x1B215Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2158u;
        // 0x1b215c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2160u;
        goto label_1b2160;
    }
    ctx->pc = 0x1B2158u;
    SET_GPR_U32(ctx, 31, 0x1B2160u);
    ctx->pc = 0x1B215Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2158u;
    // 0x1b215c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D3F8u;
    { ctx->pc = 0x23d3f8; return; }
    ctx->pc = 0x1B2160u;
label_1b2160:
    // 0x1b2160: 0x2603ffec  addiu       $v1, $s0, -0x14
    ctx->pc = 0x1b2160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
label_1b2164:
    // 0x1b2164: 0xae13ffec  sw          $s3, -0x14($s0)
    ctx->pc = 0x1b2164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967276), GPR_U32(ctx, 19));
label_1b2168:
    // 0x1b2168: 0xac740004  sw          $s4, 0x4($v1)
    ctx->pc = 0x1b2168u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 20));
label_1b216c:
    // 0x1b216c: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1b216cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
label_1b2170:
    // 0x1b2170: 0xa0600413  sb          $zero, 0x413($v1)
    ctx->pc = 0x1b2170u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1043), (uint8_t)GPR_U32(ctx, 0));
label_1b2174:
    // 0x1b2174: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b2174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1b2178:
    // 0x1b2178: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1b2178u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_1b217c:
    // 0x1b217c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1b217cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1b2180:
    // 0x1b2180: 0x252977c0  addiu       $t1, $t1, 0x77C0
    ctx->pc = 0x1b2180u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30656));
label_1b2184:
    // 0x1b2184: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1b2184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1b2188:
    // 0x1b2188: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b2188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1b218c:
    // 0x1b218c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b218cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b2190:
    // 0x1b2190: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x1b2190u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
label_1b2194:
    // 0x1b2194: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b2194u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b2198:
    // 0x1b2198: 0xc069e2a  jal         func_1A78A8
label_1b219c:
    if (ctx->pc == 0x1B219Cu) {
        ctx->pc = 0x1B219Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2198u;
        // 0x1b219c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B21A0u;
        goto label_1b21a0;
    }
    ctx->pc = 0x1B2198u;
    SET_GPR_U32(ctx, 31, 0x1B21A0u);
    ctx->pc = 0x1B219Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2198u;
    // 0x1b219c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1B21A0u;
label_1b21a0:
    // 0x1b21a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b21a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b21a4:
    // 0x1b21a4: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_1b21a8:
    if (ctx->pc == 0x1B21A8u) {
        ctx->pc = 0x1B21A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B21A4u;
        // 0x1b21a8: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B21ACu;
        goto label_1b21ac;
    }
    ctx->pc = 0x1B21A4u;
    {
        const bool branch_taken_0x1b21a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B21A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B21A4u;
        // 0x1b21a8: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b21a4) {
            ctx->pc = 0x1B21B8u;
            goto label_1b21b8;
        }
    }
    ctx->pc = 0x1B21ACu;
label_1b21ac:
    // 0x1b21ac: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1b21acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1b21b0:
    // 0x1b21b0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b21b4:
    if (ctx->pc == 0x1B21B4u) {
        ctx->pc = 0x1B21B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B21B0u;
        // 0x1b21b4: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B21B8u;
        goto label_1b21b8;
    }
    ctx->pc = 0x1B21B0u;
    {
        const bool branch_taken_0x1b21b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B21B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B21B0u;
        // 0x1b21b4: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b21b0) {
            ctx->pc = 0x1B21C0u;
            goto label_1b21c0;
        }
    }
    ctx->pc = 0x1B21B8u;
label_1b21b8:
    // 0x1b21b8: 0xc069210  jal         func_1A4840
label_1b21bc:
    if (ctx->pc == 0x1B21BCu) {
        ctx->pc = 0x1B21BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B21B8u;
        // 0x1b21bc: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B21C0u;
        goto label_1b21c0;
    }
    ctx->pc = 0x1B21B8u;
    SET_GPR_U32(ctx, 31, 0x1B21C0u);
    ctx->pc = 0x1B21BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B21B8u;
    // 0x1b21bc: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B21C0u;
label_1b21c0:
    // 0x1b21c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b21c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b21c4:
    // 0x1b21c4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1b21c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1b21c8:
    // 0x1b21c8: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1b21c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1b21cc:
    // 0x1b21cc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1b21ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1b21d0:
    // 0x1b21d0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1b21d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1b21d4:
    // 0x1b21d4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b21d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b21d8:
    // 0x1b21d8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b21d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b21dc:
    // 0x1b21dc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b21dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b21e0:
    // 0x1b21e0: 0x3e00008  jr          $ra
label_1b21e4:
    if (ctx->pc == 0x1B21E4u) {
        ctx->pc = 0x1B21E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B21E0u;
        // 0x1b21e4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B21E8u;
        goto label_1b21e8;
    }
    ctx->pc = 0x1B21E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B21E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B21E0u;
        // 0x1b21e4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B21E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B21E8u;
label_1b21e8:
    // 0x1b21e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b21e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1b21ec:
    // 0x1b21ec: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b21ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1b21f0:
    // 0x1b21f0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b21f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1b21f4:
    // 0x1b21f4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b21f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1b21f8:
    // 0x1b21f8: 0x24716200  addiu       $s1, $v1, 0x6200
    ctx->pc = 0x1b21f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 25088));
label_1b21fc:
    // 0x1b21fc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1b21fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1b2200:
    // 0x1b2200: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b2200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1b2204:
    // 0x1b2204: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1b2204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1b2208:
    // 0x1b2208: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1b220c:
    if (ctx->pc == 0x1B220Cu) {
        ctx->pc = 0x1B220Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2208u;
        // 0x1b220c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2210u;
        goto label_1b2210;
    }
    ctx->pc = 0x1B2208u;
    {
        const bool branch_taken_0x1b2208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B220Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2208u;
        // 0x1b220c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2208) {
            ctx->pc = 0x1B2218u;
            goto label_1b2218;
        }
    }
    ctx->pc = 0x1B2210u;
label_1b2210:
    // 0x1b2210: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1b2214:
    if (ctx->pc == 0x1B2214u) {
        ctx->pc = 0x1B2214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2210u;
        // 0x1b2214: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2218u;
        goto label_1b2218;
    }
    ctx->pc = 0x1B2210u;
    {
        const bool branch_taken_0x1b2210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2210u;
        // 0x1b2214: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2210) {
            ctx->pc = 0x1B2288u;
            goto label_1b2288;
        }
    }
    ctx->pc = 0x1B2218u;
label_1b2218:
    // 0x1b2218: 0x3c120029  lui         $s2, 0x29
    ctx->pc = 0x1b2218u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)41 << 16));
label_1b221c:
    // 0x1b221c: 0xc06921c  jal         func_1A4870
label_1b2220:
    if (ctx->pc == 0x1B2220u) {
        ctx->pc = 0x1B2220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B221Cu;
        // 0x1b2220: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2224u;
        goto label_1b2224;
    }
    ctx->pc = 0x1B221Cu;
    SET_GPR_U32(ctx, 31, 0x1B2224u);
    ctx->pc = 0x1B2220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B221Cu;
    // 0x1b2220: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4870u;
    { ctx->pc = 0x1a4870; return; }
    ctx->pc = 0x1B2224u;
label_1b2224:
    // 0x1b2224: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1b2228:
    if (ctx->pc == 0x1B2228u) {
        ctx->pc = 0x1B2228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2224u;
        // 0x1b2228: 0x3c070037  lui         $a3, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B222Cu;
        goto label_1b222c;
    }
    ctx->pc = 0x1B2224u;
    {
        const bool branch_taken_0x1b2224 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B2228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2224u;
        // 0x1b2228: 0x3c070037  lui         $a3, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2224) {
            ctx->pc = 0x1B2234u;
            goto label_1b2234;
        }
    }
    ctx->pc = 0x1B222Cu;
label_1b222c:
    // 0x1b222c: 0x10000016  b           . + 4 + (0x16 << 2)
label_1b2230:
    if (ctx->pc == 0x1B2230u) {
        ctx->pc = 0x1B2230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B222Cu;
        // 0x1b2230: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2234u;
        goto label_1b2234;
    }
    ctx->pc = 0x1B222Cu;
    {
        const bool branch_taken_0x1b222c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B222Cu;
        // 0x1b2230: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b222c) {
            ctx->pc = 0x1B2288u;
            goto label_1b2288;
        }
    }
    ctx->pc = 0x1B2234u;
label_1b2234:
    // 0x1b2234: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1b2234u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
label_1b2238:
    // 0x1b2238: 0xacf06280  sw          $s0, 0x6280($a3)
    ctx->pc = 0x1b2238u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 25216), GPR_U32(ctx, 16));
label_1b223c:
    // 0x1b223c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b223cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b2240:
    // 0x1b2240: 0x24e76280  addiu       $a3, $a3, 0x6280
    ctx->pc = 0x1b2240u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 25216));
label_1b2244:
    // 0x1b2244: 0x252977c0  addiu       $t1, $t1, 0x77C0
    ctx->pc = 0x1b2244u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30656));
label_1b2248:
    // 0x1b2248: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b2248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1b224c:
    // 0x1b224c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1b224cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1b2250:
    // 0x1b2250: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b2250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b2254:
    // 0x1b2254: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1b2254u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1b2258:
    // 0x1b2258: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b2258u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b225c:
    // 0x1b225c: 0xc069e2a  jal         func_1A78A8
label_1b2260:
    if (ctx->pc == 0x1B2260u) {
        ctx->pc = 0x1B2260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B225Cu;
        // 0x1b2260: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2264u;
        goto label_1b2264;
    }
    ctx->pc = 0x1B225Cu;
    SET_GPR_U32(ctx, 31, 0x1B2264u);
    ctx->pc = 0x1B2260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B225Cu;
    // 0x1b2260: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1B2264u;
label_1b2264:
    // 0x1b2264: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b2264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b2268:
    // 0x1b2268: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_1b226c:
    if (ctx->pc == 0x1B226Cu) {
        ctx->pc = 0x1B226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2268u;
        // 0x1b226c: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2270u;
        goto label_1b2270;
    }
    ctx->pc = 0x1B2268u;
    {
        const bool branch_taken_0x1b2268 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2268u;
        // 0x1b226c: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2268) {
            ctx->pc = 0x1B227Cu;
            goto label_1b227c;
        }
    }
    ctx->pc = 0x1B2270u;
label_1b2270:
    // 0x1b2270: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1b2270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1b2274:
    // 0x1b2274: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b2278:
    if (ctx->pc == 0x1B2278u) {
        ctx->pc = 0x1B2278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2274u;
        // 0x1b2278: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B227Cu;
        goto label_1b227c;
    }
    ctx->pc = 0x1B2274u;
    {
        const bool branch_taken_0x1b2274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2274u;
        // 0x1b2278: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2274) {
            ctx->pc = 0x1B2284u;
            goto label_1b2284;
        }
    }
    ctx->pc = 0x1B227Cu;
label_1b227c:
    // 0x1b227c: 0xc069210  jal         func_1A4840
label_1b2280:
    if (ctx->pc == 0x1B2280u) {
        ctx->pc = 0x1B2280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B227Cu;
        // 0x1b2280: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2284u;
        goto label_1b2284;
    }
    ctx->pc = 0x1B227Cu;
    SET_GPR_U32(ctx, 31, 0x1B2284u);
    ctx->pc = 0x1B2280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B227Cu;
    // 0x1b2280: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B2284u;
label_1b2284:
    // 0x1b2284: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b2284u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b2288:
    // 0x1b2288: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1b2288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1b228c:
    // 0x1b228c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b228cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b2290:
    // 0x1b2290: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b2290u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b2294:
    // 0x1b2294: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b2294u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b2298:
    // 0x1b2298: 0x3e00008  jr          $ra
label_1b229c:
    if (ctx->pc == 0x1B229Cu) {
        ctx->pc = 0x1B229Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2298u;
        // 0x1b229c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B22A0u;
        goto label_1b22a0;
    }
    ctx->pc = 0x1B2298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B229Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2298u;
        // 0x1b229c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B22A0u;
label_1b22a0:
    // 0x1b22a0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1b22a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1b22a4:
    // 0x1b22a4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b22a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1b22a8:
    // 0x1b22a8: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x1b22a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_1b22ac:
    // 0x1b22ac: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1b22acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_1b22b0:
    // 0x1b22b0: 0x24576200  addiu       $s7, $v0, 0x6200
    ctx->pc = 0x1b22b0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 25088));
label_1b22b4:
    // 0x1b22b4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1b22b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_1b22b8:
    // 0x1b22b8: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1b22b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1b22bc:
    // 0x1b22bc: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1b22bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_1b22c0:
    // 0x1b22c0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1b22c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b22c4:
    // 0x1b22c4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b22c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1b22c8:
    // 0x1b22c8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1b22c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b22cc:
    // 0x1b22cc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b22ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1b22d0:
    // 0x1b22d0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1b22d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b22d4:
    // 0x1b22d4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1b22d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1b22d8:
    // 0x1b22d8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1b22d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_1b22dc:
    // 0x1b22dc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b22dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1b22e0:
    // 0x1b22e0: 0x8ee20024  lw          $v0, 0x24($s7)
    ctx->pc = 0x1b22e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 36)));
label_1b22e4:
    // 0x1b22e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1b22e8:
    if (ctx->pc == 0x1B22E8u) {
        ctx->pc = 0x1B22E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B22E4u;
        // 0x1b22e8: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B22ECu;
        goto label_1b22ec;
    }
    ctx->pc = 0x1B22E4u;
    {
        const bool branch_taken_0x1b22e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B22E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B22E4u;
        // 0x1b22e8: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b22e4) {
            ctx->pc = 0x1B22F4u;
            goto label_1b22f4;
        }
    }
    ctx->pc = 0x1B22ECu;
label_1b22ec:
    // 0x1b22ec: 0x10000053  b           . + 4 + (0x53 << 2)
label_1b22f0:
    if (ctx->pc == 0x1B22F0u) {
        ctx->pc = 0x1B22F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B22ECu;
        // 0x1b22f0: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B22F4u;
        goto label_1b22f4;
    }
    ctx->pc = 0x1B22ECu;
    {
        const bool branch_taken_0x1b22ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B22F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B22ECu;
        // 0x1b22f0: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b22ec) {
            ctx->pc = 0x1B243Cu;
            goto label_1b243c;
        }
    }
    ctx->pc = 0x1B22F4u;
label_1b22f4:
    // 0x1b22f4: 0x3c150029  lui         $s5, 0x29
    ctx->pc = 0x1b22f4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)41 << 16));
label_1b22f8:
    // 0x1b22f8: 0xc06921c  jal         func_1A4870
label_1b22fc:
    if (ctx->pc == 0x1B22FCu) {
        ctx->pc = 0x1B22FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B22F8u;
        // 0x1b22fc: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2300u;
        goto label_1b2300;
    }
    ctx->pc = 0x1B22F8u;
    SET_GPR_U32(ctx, 31, 0x1B2300u);
    ctx->pc = 0x1B22FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B22F8u;
    // 0x1b22fc: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4870u;
    { ctx->pc = 0x1a4870; return; }
    ctx->pc = 0x1B2300u;
label_1b2300:
    // 0x1b2300: 0x440004e  bltz        $v0, . + 4 + (0x4E << 2)
label_1b2304:
    if (ctx->pc == 0x1B2304u) {
        ctx->pc = 0x1B2304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2300u;
        // 0x1b2304: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2308u;
        goto label_1b2308;
    }
    ctx->pc = 0x1B2300u;
    {
        const bool branch_taken_0x1b2300 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B2304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2300u;
        // 0x1b2304: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2300) {
            ctx->pc = 0x1B243Cu;
            goto label_1b243c;
        }
    }
    ctx->pc = 0x1B2308u;
label_1b2308:
    // 0x1b2308: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_1b230c:
    if (ctx->pc == 0x1B230Cu) {
        ctx->pc = 0x1B2310u;
        goto label_1b2310;
    }
    ctx->pc = 0x1B2308u;
    {
        const bool branch_taken_0x1b2308 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2308) {
            ctx->pc = 0x1B231Cu;
            goto label_1b231c;
        }
    }
    ctx->pc = 0x1B2310u;
label_1b2310:
    // 0x1b2310: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x1b2310u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_1b2314:
    // 0x1b2314: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1b2318:
    if (ctx->pc == 0x1B2318u) {
        ctx->pc = 0x1B2318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2314u;
        // 0x1b2318: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B231Cu;
        goto label_1b231c;
    }
    ctx->pc = 0x1B2314u;
    {
        const bool branch_taken_0x1b2314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2314u;
        // 0x1b2318: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2314) {
            ctx->pc = 0x1B232Cu;
            goto label_1b232c;
        }
    }
    ctx->pc = 0x1B231Cu;
label_1b231c:
    // 0x1b231c: 0xc069210  jal         func_1A4840
label_1b2320:
    if (ctx->pc == 0x1B2320u) {
        ctx->pc = 0x1B2320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B231Cu;
        // 0x1b2320: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2324u;
        goto label_1b2324;
    }
    ctx->pc = 0x1B231Cu;
    SET_GPR_U32(ctx, 31, 0x1B2324u);
    ctx->pc = 0x1B2320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B231Cu;
    // 0x1b2320: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B2324u;
label_1b2324:
    // 0x1b2324: 0x10000045  b           . + 4 + (0x45 << 2)
label_1b2328:
    if (ctx->pc == 0x1B2328u) {
        ctx->pc = 0x1B2328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2324u;
        // 0x1b2328: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B232Cu;
        goto label_1b232c;
    }
    ctx->pc = 0x1B2324u;
    {
        const bool branch_taken_0x1b2324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2324u;
        // 0x1b2328: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2324) {
            ctx->pc = 0x1B243Cu;
            goto label_1b243c;
        }
    }
    ctx->pc = 0x1B232Cu;
label_1b232c:
    // 0x1b232c: 0x32310007  andi        $s1, $s1, 0x7
    ctx->pc = 0x1b232cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)7);
label_1b2330:
    // 0x1b2330: 0x245062b0  addiu       $s0, $v0, 0x62B0
    ctx->pc = 0x1b2330u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 25264));
label_1b2334:
    // 0x1b2334: 0xac5462b0  sw          $s4, 0x62B0($v0)
    ctx->pc = 0x1b2334u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 25264), GPR_U32(ctx, 20));
label_1b2338:
    // 0x1b2338: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x1b2338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
label_1b233c:
    // 0x1b233c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b233cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1b2340:
    // 0x1b2340: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x1b2340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
label_1b2344:
    // 0x1b2344: 0x24436240  addiu       $v1, $v0, 0x6240
    ctx->pc = 0x1b2344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 25152));
label_1b2348:
    // 0x1b2348: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x1b2348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_1b234c:
    // 0x1b234c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b234cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b2350:
    // 0x1b2350: 0x24496240  addiu       $t1, $v0, 0x6240
    ctx->pc = 0x1b2350u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 25152));
label_1b2354:
    // 0x1b2354: 0x6ac60007  ldl         $a2, 0x7($s6)
    ctx->pc = 0x1b2354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1b2358:
    // 0x1b2358: 0x6ec60000  ldr         $a2, 0x0($s6)
    ctx->pc = 0x1b2358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1b235c:
    // 0x1b235c: 0x6ac7000f  ldl         $a3, 0xF($s6)
    ctx->pc = 0x1b235cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1b2360:
    // 0x1b2360: 0x6ec70008  ldr         $a3, 0x8($s6)
    ctx->pc = 0x1b2360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1b2364:
    // 0x1b2364: 0x6ac80017  ldl         $t0, 0x17($s6)
    ctx->pc = 0x1b2364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_1b2368:
    // 0x1b2368: 0x6ec80010  ldr         $t0, 0x10($s6)
    ctx->pc = 0x1b2368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1b236c:
    // 0x1b236c: 0xb1260007  sdl         $a2, 0x7($t1)
    ctx->pc = 0x1b236cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b2370:
    // 0x1b2370: 0xb5260000  sdr         $a2, 0x0($t1)
    ctx->pc = 0x1b2370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b2374:
    // 0x1b2374: 0xb127000f  sdl         $a3, 0xF($t1)
    ctx->pc = 0x1b2374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b2378:
    // 0x1b2378: 0xb5270008  sdr         $a3, 0x8($t1)
    ctx->pc = 0x1b2378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b237c:
    // 0x1b237c: 0xb1280017  sdl         $t0, 0x17($t1)
    ctx->pc = 0x1b237cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b2380:
    // 0x1b2380: 0xb5280010  sdr         $t0, 0x10($t1)
    ctx->pc = 0x1b2380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b2384:
    // 0x1b2384: 0x6ac6001f  ldl         $a2, 0x1F($s6)
    ctx->pc = 0x1b2384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1b2388:
    // 0x1b2388: 0x6ec60018  ldr         $a2, 0x18($s6)
    ctx->pc = 0x1b2388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1b238c:
    // 0x1b238c: 0x6ac70027  ldl         $a3, 0x27($s6)
    ctx->pc = 0x1b238cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1b2390:
    // 0x1b2390: 0x6ec70020  ldr         $a3, 0x20($s6)
    ctx->pc = 0x1b2390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1b2394:
    // 0x1b2394: 0x6ac8002f  ldl         $t0, 0x2F($s6)
    ctx->pc = 0x1b2394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_1b2398:
    // 0x1b2398: 0x6ec80028  ldr         $t0, 0x28($s6)
    ctx->pc = 0x1b2398u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1b239c:
    // 0x1b239c: 0xb126001f  sdl         $a2, 0x1F($t1)
    ctx->pc = 0x1b239cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b23a0:
    // 0x1b23a0: 0xb5260018  sdr         $a2, 0x18($t1)
    ctx->pc = 0x1b23a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b23a4:
    // 0x1b23a4: 0xb1270027  sdl         $a3, 0x27($t1)
    ctx->pc = 0x1b23a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b23a8:
    // 0x1b23a8: 0xb5270020  sdr         $a3, 0x20($t1)
    ctx->pc = 0x1b23a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b23ac:
    // 0x1b23ac: 0xb128002f  sdl         $t0, 0x2F($t1)
    ctx->pc = 0x1b23acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b23b0:
    // 0x1b23b0: 0xb5280028  sdr         $t0, 0x28($t1)
    ctx->pc = 0x1b23b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b23b4:
    // 0x1b23b4: 0x6ac60037  ldl         $a2, 0x37($s6)
    ctx->pc = 0x1b23b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1b23b8:
    // 0x1b23b8: 0x6ec60030  ldr         $a2, 0x30($s6)
    ctx->pc = 0x1b23b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1b23bc:
    // 0x1b23bc: 0x6ac7003f  ldl         $a3, 0x3F($s6)
    ctx->pc = 0x1b23bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1b23c0:
    // 0x1b23c0: 0x6ec70038  ldr         $a3, 0x38($s6)
    ctx->pc = 0x1b23c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1b23c4:
    // 0x1b23c4: 0xb1260037  sdl         $a2, 0x37($t1)
    ctx->pc = 0x1b23c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b23c8:
    // 0x1b23c8: 0xb5260030  sdr         $a2, 0x30($t1)
    ctx->pc = 0x1b23c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b23cc:
    // 0x1b23cc: 0xb127003f  sdl         $a3, 0x3F($t1)
    ctx->pc = 0x1b23ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b23d0:
    // 0x1b23d0: 0xb5270038  sdr         $a3, 0x38($t1)
    ctx->pc = 0x1b23d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1b23d4:
    // 0x1b23d4: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1b23d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_1b23d8:
    // 0x1b23d8: 0xc08f4fe  jal         func_23D3F8
label_1b23dc:
    if (ctx->pc == 0x1B23DCu) {
        ctx->pc = 0x1B23DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B23D8u;
        // 0x1b23dc: 0x240603ff  addiu       $a2, $zero, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B23E0u;
        goto label_1b23e0;
    }
    ctx->pc = 0x1B23D8u;
    SET_GPR_U32(ctx, 31, 0x1B23E0u);
    ctx->pc = 0x1B23DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B23D8u;
    // 0x1b23dc: 0x240603ff  addiu       $a2, $zero, 0x3FF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D3F8u;
    { ctx->pc = 0x23d3f8; return; }
    ctx->pc = 0x1B23E0u;
label_1b23e0:
    // 0x1b23e0: 0xa2000413  sb          $zero, 0x413($s0)
    ctx->pc = 0x1b23e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1043), (uint8_t)GPR_U32(ctx, 0));
label_1b23e4:
    // 0x1b23e4: 0xc0692a8  jal         func_1A4AA0
label_1b23e8:
    if (ctx->pc == 0x1B23E8u) {
        ctx->pc = 0x1B23E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B23E4u;
        // 0x1b23e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B23ECu;
        goto label_1b23ec;
    }
    ctx->pc = 0x1B23E4u;
    SET_GPR_U32(ctx, 31, 0x1B23ECu);
    ctx->pc = 0x1B23E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B23E4u;
    // 0x1b23e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    { ctx->pc = 0x1a4aa0; return; }
    ctx->pc = 0x1B23ECu;
label_1b23ec:
    // 0x1b23ec: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1b23ecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
label_1b23f0:
    // 0x1b23f0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b23f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b23f4:
    // 0x1b23f4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1b23f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1b23f8:
    // 0x1b23f8: 0x252977c0  addiu       $t1, $t1, 0x77C0
    ctx->pc = 0x1b23f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30656));
label_1b23fc:
    // 0x1b23fc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b23fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1b2400:
    // 0x1b2400: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1b2400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1b2404:
    // 0x1b2404: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b2404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b2408:
    // 0x1b2408: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x1b2408u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
label_1b240c:
    // 0x1b240c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b240cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b2410:
    // 0x1b2410: 0xc069e2a  jal         func_1A78A8
label_1b2414:
    if (ctx->pc == 0x1B2414u) {
        ctx->pc = 0x1B2414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2410u;
        // 0x1b2414: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2418u;
        goto label_1b2418;
    }
    ctx->pc = 0x1B2410u;
    SET_GPR_U32(ctx, 31, 0x1B2418u);
    ctx->pc = 0x1B2414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2410u;
    // 0x1b2414: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1B2418u;
label_1b2418:
    // 0x1b2418: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b2418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b241c:
    // 0x1b241c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_1b2420:
    if (ctx->pc == 0x1B2420u) {
        ctx->pc = 0x1B2420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B241Cu;
        // 0x1b2420: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2424u;
        goto label_1b2424;
    }
    ctx->pc = 0x1B241Cu;
    {
        const bool branch_taken_0x1b241c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B241Cu;
        // 0x1b2420: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b241c) {
            ctx->pc = 0x1B2430u;
            goto label_1b2430;
        }
    }
    ctx->pc = 0x1B2424u;
label_1b2424:
    // 0x1b2424: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1b2424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1b2428:
    // 0x1b2428: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b242c:
    if (ctx->pc == 0x1B242Cu) {
        ctx->pc = 0x1B242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2428u;
        // 0x1b242c: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2430u;
        goto label_1b2430;
    }
    ctx->pc = 0x1B2428u;
    {
        const bool branch_taken_0x1b2428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2428u;
        // 0x1b242c: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2428) {
            ctx->pc = 0x1B2438u;
            goto label_1b2438;
        }
    }
    ctx->pc = 0x1B2430u;
label_1b2430:
    // 0x1b2430: 0xc069210  jal         func_1A4840
label_1b2434:
    if (ctx->pc == 0x1B2434u) {
        ctx->pc = 0x1B2434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2430u;
        // 0x1b2434: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2438u;
        goto label_1b2438;
    }
    ctx->pc = 0x1B2430u;
    SET_GPR_U32(ctx, 31, 0x1B2438u);
    ctx->pc = 0x1B2434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2430u;
    // 0x1b2434: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B2438u;
label_1b2438:
    // 0x1b2438: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b2438u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b243c:
    // 0x1b243c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1b243cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1b2440:
    // 0x1b2440: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1b2440u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1b2444:
    // 0x1b2444: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1b2444u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1b2448:
    // 0x1b2448: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1b2448u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1b244c:
    // 0x1b244c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1b244cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1b2450:
    // 0x1b2450: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1b2450u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1b2454:
    // 0x1b2454: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b2454u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b2458:
    // 0x1b2458: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b2458u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b245c:
    // 0x1b245c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b245cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b2460:
    // 0x1b2460: 0x3e00008  jr          $ra
label_1b2464:
    if (ctx->pc == 0x1B2464u) {
        ctx->pc = 0x1B2464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2460u;
        // 0x1b2464: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2468u;
        goto label_1b2468;
    }
    ctx->pc = 0x1B2460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2460u;
        // 0x1b2464: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2468u;
label_1b2468:
    // 0x1b2468: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1b2468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1b246c:
    // 0x1b246c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b246cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1b2470:
    // 0x1b2470: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1b2470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_1b2474:
    // 0x1b2474: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1b2474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_1b2478:
    // 0x1b2478: 0x24566200  addiu       $s6, $v0, 0x6200
    ctx->pc = 0x1b2478u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 25088));
label_1b247c:
    // 0x1b247c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1b247cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_1b2480:
    // 0x1b2480: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1b2480u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b2484:
    // 0x1b2484: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b2484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1b2488:
    // 0x1b2488: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1b2488u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b248c:
    // 0x1b248c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b248cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1b2490:
    // 0x1b2490: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1b2490u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1b2494:
    // 0x1b2494: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1b2494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1b2498:
    // 0x1b2498: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1b2498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_1b249c:
    // 0x1b249c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b249cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1b24a0:
    // 0x1b24a0: 0x8ec20024  lw          $v0, 0x24($s6)
    ctx->pc = 0x1b24a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
label_1b24a4:
    // 0x1b24a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1b24a8:
    if (ctx->pc == 0x1B24A8u) {
        ctx->pc = 0x1B24A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B24A4u;
        // 0x1b24a8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B24ACu;
        goto label_1b24ac;
    }
    ctx->pc = 0x1B24A4u;
    {
        const bool branch_taken_0x1b24a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B24A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B24A4u;
        // 0x1b24a8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b24a4) {
            ctx->pc = 0x1B24B4u;
            goto label_1b24b4;
        }
    }
    ctx->pc = 0x1B24ACu;
label_1b24ac:
    // 0x1b24ac: 0x1000003a  b           . + 4 + (0x3A << 2)
label_1b24b0:
    if (ctx->pc == 0x1B24B0u) {
        ctx->pc = 0x1B24B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B24ACu;
        // 0x1b24b0: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B24B4u;
        goto label_1b24b4;
    }
    ctx->pc = 0x1B24ACu;
    {
        const bool branch_taken_0x1b24ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B24B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B24ACu;
        // 0x1b24b0: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b24ac) {
            ctx->pc = 0x1B2598u;
            goto label_1b2598;
        }
    }
    ctx->pc = 0x1B24B4u;
label_1b24b4:
    // 0x1b24b4: 0x3c150029  lui         $s5, 0x29
    ctx->pc = 0x1b24b4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)41 << 16));
label_1b24b8:
    // 0x1b24b8: 0xc06921c  jal         func_1A4870
label_1b24bc:
    if (ctx->pc == 0x1B24BCu) {
        ctx->pc = 0x1B24BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B24B8u;
        // 0x1b24bc: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B24C0u;
        goto label_1b24c0;
    }
    ctx->pc = 0x1B24B8u;
    SET_GPR_U32(ctx, 31, 0x1B24C0u);
    ctx->pc = 0x1B24BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B24B8u;
    // 0x1b24bc: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4870u;
    { ctx->pc = 0x1a4870; return; }
    ctx->pc = 0x1B24C0u;
label_1b24c0:
    // 0x1b24c0: 0x4400035  bltz        $v0, . + 4 + (0x35 << 2)
label_1b24c4:
    if (ctx->pc == 0x1B24C4u) {
        ctx->pc = 0x1B24C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B24C0u;
        // 0x1b24c4: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B24C8u;
        goto label_1b24c8;
    }
    ctx->pc = 0x1B24C0u;
    {
        const bool branch_taken_0x1b24c0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B24C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B24C0u;
        // 0x1b24c4: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b24c0) {
            ctx->pc = 0x1B2598u;
            goto label_1b2598;
        }
    }
    ctx->pc = 0x1B24C8u;
label_1b24c8:
    // 0x1b24c8: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1b24cc:
    if (ctx->pc == 0x1B24CCu) {
        ctx->pc = 0x1B24D0u;
        goto label_1b24d0;
    }
    ctx->pc = 0x1B24C8u;
    {
        const bool branch_taken_0x1b24c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b24c8) {
            ctx->pc = 0x1B24E4u;
            goto label_1b24e4;
        }
    }
    ctx->pc = 0x1B24D0u;
label_1b24d0:
    // 0x1b24d0: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1b24d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1b24d4:
    // 0x1b24d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b24d8:
    if (ctx->pc == 0x1B24D8u) {
        ctx->pc = 0x1B24DCu;
        goto label_1b24dc;
    }
    ctx->pc = 0x1B24D4u;
    {
        const bool branch_taken_0x1b24d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b24d4) {
            ctx->pc = 0x1B24E4u;
            goto label_1b24e4;
        }
    }
    ctx->pc = 0x1B24DCu;
label_1b24dc:
    // 0x1b24dc: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
label_1b24e0:
    if (ctx->pc == 0x1B24E0u) {
        ctx->pc = 0x1B24E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B24DCu;
        // 0x1b24e0: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B24E4u;
        goto label_1b24e4;
    }
    ctx->pc = 0x1B24DCu;
    {
        const bool branch_taken_0x1b24dc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B24E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B24DCu;
        // 0x1b24e0: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b24dc) {
            ctx->pc = 0x1B24F4u;
            goto label_1b24f4;
        }
    }
    ctx->pc = 0x1B24E4u;
label_1b24e4:
    // 0x1b24e4: 0xc069210  jal         func_1A4840
label_1b24e8:
    if (ctx->pc == 0x1B24E8u) {
        ctx->pc = 0x1B24E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B24E4u;
        // 0x1b24e8: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B24ECu;
        goto label_1b24ec;
    }
    ctx->pc = 0x1B24E4u;
    SET_GPR_U32(ctx, 31, 0x1B24ECu);
    ctx->pc = 0x1B24E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B24E4u;
    // 0x1b24e8: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B24ECu;
label_1b24ec:
    // 0x1b24ec: 0x1000002a  b           . + 4 + (0x2A << 2)
label_1b24f0:
    if (ctx->pc == 0x1B24F0u) {
        ctx->pc = 0x1B24F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B24ECu;
        // 0x1b24f0: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B24F4u;
        goto label_1b24f4;
    }
    ctx->pc = 0x1B24ECu;
    {
        const bool branch_taken_0x1b24ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B24F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B24ECu;
        // 0x1b24f0: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b24ec) {
            ctx->pc = 0x1B2598u;
            goto label_1b2598;
        }
    }
    ctx->pc = 0x1B24F4u;
label_1b24f4:
    // 0x1b24f4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1b24f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1b24f8:
    // 0x1b24f8: 0x245162b0  addiu       $s1, $v0, 0x62B0
    ctx->pc = 0x1b24f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 25264));
label_1b24fc:
    // 0x1b24fc: 0xac5462b0  sw          $s4, 0x62B0($v0)
    ctx->pc = 0x1b24fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 25264), GPR_U32(ctx, 20));
label_1b2500:
    // 0x1b2500: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b2500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b2504:
    // 0x1b2504: 0xae330004  sw          $s3, 0x4($s1)
    ctx->pc = 0x1b2504u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
label_1b2508:
    // 0x1b2508: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1b2508u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_1b250c:
    // 0x1b250c: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x1b250cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_1b2510:
    // 0x1b2510: 0xc08f4fe  jal         func_23D3F8
label_1b2514:
    if (ctx->pc == 0x1B2514u) {
        ctx->pc = 0x1B2514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2510u;
        // 0x1b2514: 0x240603ff  addiu       $a2, $zero, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2518u;
        goto label_1b2518;
    }
    ctx->pc = 0x1B2510u;
    SET_GPR_U32(ctx, 31, 0x1B2518u);
    ctx->pc = 0x1B2514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2510u;
    // 0x1b2514: 0x240603ff  addiu       $a2, $zero, 0x3FF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D3F8u;
    { ctx->pc = 0x23d3f8; return; }
    ctx->pc = 0x1B2518u;
label_1b2518:
    // 0x1b2518: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1b2518u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
label_1b251c:
    // 0x1b251c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b251cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b2520:
    // 0x1b2520: 0x26106260  addiu       $s0, $s0, 0x6260
    ctx->pc = 0x1b2520u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25184));
label_1b2524:
    // 0x1b2524: 0xa2200413  sb          $zero, 0x413($s1)
    ctx->pc = 0x1b2524u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1043), (uint8_t)GPR_U32(ctx, 0));
label_1b2528:
    // 0x1b2528: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b252c:
    // 0x1b252c: 0xc08f4fe  jal         func_23D3F8
label_1b2530:
    if (ctx->pc == 0x1B2530u) {
        ctx->pc = 0x1B2530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B252Cu;
        // 0x1b2530: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2534u;
        goto label_1b2534;
    }
    ctx->pc = 0x1B252Cu;
    SET_GPR_U32(ctx, 31, 0x1B2534u);
    ctx->pc = 0x1B2530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B252Cu;
    // 0x1b2530: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D3F8u;
    { ctx->pc = 0x23d3f8; return; }
    ctx->pc = 0x1B2534u;
label_1b2534:
    // 0x1b2534: 0x2610ffe0  addiu       $s0, $s0, -0x20
    ctx->pc = 0x1b2534u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967264));
label_1b2538:
    // 0x1b2538: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b2538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b253c:
    // 0x1b253c: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x1b253cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
label_1b2540:
    // 0x1b2540: 0xc0692a8  jal         func_1A4AA0
label_1b2544:
    if (ctx->pc == 0x1B2544u) {
        ctx->pc = 0x1B2544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2540u;
        // 0x1b2544: 0xa200003f  sb          $zero, 0x3F($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 63), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2548u;
        goto label_1b2548;
    }
    ctx->pc = 0x1B2540u;
    SET_GPR_U32(ctx, 31, 0x1B2548u);
    ctx->pc = 0x1B2544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2540u;
    // 0x1b2544: 0xa200003f  sb          $zero, 0x3F($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 63), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    { ctx->pc = 0x1a4aa0; return; }
    ctx->pc = 0x1B2548u;
label_1b2548:
    // 0x1b2548: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1b2548u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
label_1b254c:
    // 0x1b254c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b254cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1b2550:
    // 0x1b2550: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1b2550u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b2554:
    // 0x1b2554: 0x252977c0  addiu       $t1, $t1, 0x77C0
    ctx->pc = 0x1b2554u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30656));
label_1b2558:
    // 0x1b2558: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b2558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1b255c:
    // 0x1b255c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1b255cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1b2560:
    // 0x1b2560: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b2560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b2564:
    // 0x1b2564: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x1b2564u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
label_1b2568:
    // 0x1b2568: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b2568u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b256c:
    // 0x1b256c: 0xc069e2a  jal         func_1A78A8
label_1b2570:
    if (ctx->pc == 0x1B2570u) {
        ctx->pc = 0x1B2570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B256Cu;
        // 0x1b2570: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2574u;
        goto label_1b2574;
    }
    ctx->pc = 0x1B256Cu;
    SET_GPR_U32(ctx, 31, 0x1B2574u);
    ctx->pc = 0x1B2570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B256Cu;
    // 0x1b2570: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1B2574u;
label_1b2574:
    // 0x1b2574: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b2574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b2578:
    // 0x1b2578: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_1b257c:
    if (ctx->pc == 0x1B257Cu) {
        ctx->pc = 0x1B257Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2578u;
        // 0x1b257c: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2580u;
        goto label_1b2580;
    }
    ctx->pc = 0x1B2578u;
    {
        const bool branch_taken_0x1b2578 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B257Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2578u;
        // 0x1b257c: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2578) {
            ctx->pc = 0x1B258Cu;
            goto label_1b258c;
        }
    }
    ctx->pc = 0x1B2580u;
label_1b2580:
    // 0x1b2580: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x1b2580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1b2584:
    // 0x1b2584: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b2588:
    if (ctx->pc == 0x1B2588u) {
        ctx->pc = 0x1B2588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2584u;
        // 0x1b2588: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B258Cu;
        goto label_1b258c;
    }
    ctx->pc = 0x1B2584u;
    {
        const bool branch_taken_0x1b2584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2584u;
        // 0x1b2588: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2584) {
            ctx->pc = 0x1B2594u;
            goto label_1b2594;
        }
    }
    ctx->pc = 0x1B258Cu;
label_1b258c:
    // 0x1b258c: 0xc069210  jal         func_1A4840
label_1b2590:
    if (ctx->pc == 0x1B2590u) {
        ctx->pc = 0x1B2590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B258Cu;
        // 0x1b2590: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2594u;
        goto label_1b2594;
    }
    ctx->pc = 0x1B258Cu;
    SET_GPR_U32(ctx, 31, 0x1B2594u);
    ctx->pc = 0x1B2590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B258Cu;
    // 0x1b2590: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B2594u;
label_1b2594:
    // 0x1b2594: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b2594u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b2598:
    // 0x1b2598: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1b2598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1b259c:
    // 0x1b259c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1b259cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1b25a0:
    // 0x1b25a0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1b25a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1b25a4:
    // 0x1b25a4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1b25a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1b25a8:
    // 0x1b25a8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1b25a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1b25ac:
    // 0x1b25ac: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b25acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b25b0:
    // 0x1b25b0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b25b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b25b4:
    // 0x1b25b4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b25b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b25b8:
    // 0x1b25b8: 0x3e00008  jr          $ra
label_1b25bc:
    if (ctx->pc == 0x1B25BCu) {
        ctx->pc = 0x1B25BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B25B8u;
        // 0x1b25bc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B25C0u;
        goto label_1b25c0;
    }
    ctx->pc = 0x1B25B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B25BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B25B8u;
        // 0x1b25bc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B25B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B25C0u;
label_1b25c0:
    // 0x1b25c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b25c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1b25c4:
    // 0x1b25c4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b25c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1b25c8:
    // 0x1b25c8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b25c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1b25cc:
    // 0x1b25cc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b25ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1b25d0:
    // 0x1b25d0: 0x24526200  addiu       $s2, $v0, 0x6200
    ctx->pc = 0x1b25d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 25088));
label_1b25d4:
    // 0x1b25d4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b25d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1b25d8:
    // 0x1b25d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b25d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b25dc:
    // 0x1b25dc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1b25dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1b25e0:
    // 0x1b25e0: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1b25e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_1b25e4:
    // 0x1b25e4: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1b25e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1b25e8:
    // 0x1b25e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1b25ec:
    if (ctx->pc == 0x1B25ECu) {
        ctx->pc = 0x1B25ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B25E8u;
        // 0x1b25ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B25F0u;
        goto label_1b25f0;
    }
    ctx->pc = 0x1B25E8u;
    {
        const bool branch_taken_0x1b25e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B25ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B25E8u;
        // 0x1b25ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b25e8) {
            ctx->pc = 0x1B25F8u;
            goto label_1b25f8;
        }
    }
    ctx->pc = 0x1B25F0u;
label_1b25f0:
    // 0x1b25f0: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1b25f4:
    if (ctx->pc == 0x1B25F4u) {
        ctx->pc = 0x1B25F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B25F0u;
        // 0x1b25f4: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B25F8u;
        goto label_1b25f8;
    }
    ctx->pc = 0x1B25F0u;
    {
        const bool branch_taken_0x1b25f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B25F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B25F0u;
        // 0x1b25f4: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b25f0) {
            ctx->pc = 0x1B2670u;
            goto label_1b2670;
        }
    }
    ctx->pc = 0x1B25F8u;
label_1b25f8:
    // 0x1b25f8: 0x3c130029  lui         $s3, 0x29
    ctx->pc = 0x1b25f8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)41 << 16));
label_1b25fc:
    // 0x1b25fc: 0xc06921c  jal         func_1A4870
label_1b2600:
    if (ctx->pc == 0x1B2600u) {
        ctx->pc = 0x1B2600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B25FCu;
        // 0x1b2600: 0x8e648d0c  lw          $a0, -0x72F4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2604u;
        goto label_1b2604;
    }
    ctx->pc = 0x1B25FCu;
    SET_GPR_U32(ctx, 31, 0x1B2604u);
    ctx->pc = 0x1B2600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B25FCu;
    // 0x1b2600: 0x8e648d0c  lw          $a0, -0x72F4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4870u;
    { ctx->pc = 0x1a4870; return; }
    ctx->pc = 0x1B2604u;
label_1b2604:
    // 0x1b2604: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1b2608:
    if (ctx->pc == 0x1B2608u) {
        ctx->pc = 0x1B2608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2604u;
        // 0x1b2608: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B260Cu;
        goto label_1b260c;
    }
    ctx->pc = 0x1B2604u;
    {
        const bool branch_taken_0x1b2604 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B2608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2604u;
        // 0x1b2608: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2604) {
            ctx->pc = 0x1B2614u;
            goto label_1b2614;
        }
    }
    ctx->pc = 0x1B260Cu;
label_1b260c:
    // 0x1b260c: 0x10000018  b           . + 4 + (0x18 << 2)
label_1b2610:
    if (ctx->pc == 0x1B2610u) {
        ctx->pc = 0x1B2610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B260Cu;
        // 0x1b2610: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2614u;
        goto label_1b2614;
    }
    ctx->pc = 0x1B260Cu;
    {
        const bool branch_taken_0x1b260c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B260Cu;
        // 0x1b2610: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b260c) {
            ctx->pc = 0x1B2670u;
            goto label_1b2670;
        }
    }
    ctx->pc = 0x1B2614u;
label_1b2614:
    // 0x1b2614: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1b2614u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
label_1b2618:
    // 0x1b2618: 0x24426280  addiu       $v0, $v0, 0x6280
    ctx->pc = 0x1b2618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25216));
label_1b261c:
    // 0x1b261c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b261cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b2620:
    // 0x1b2620: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1b2620u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
label_1b2624:
    // 0x1b2624: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b2624u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b2628:
    // 0x1b2628: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x1b2628u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
label_1b262c:
    // 0x1b262c: 0x252977c0  addiu       $t1, $t1, 0x77C0
    ctx->pc = 0x1b262cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30656));
label_1b2630:
    // 0x1b2630: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b2630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1b2634:
    // 0x1b2634: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1b2634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1b2638:
    // 0x1b2638: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b2638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b263c:
    // 0x1b263c: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1b263cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1b2640:
    // 0x1b2640: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b2640u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b2644:
    // 0x1b2644: 0xc069e2a  jal         func_1A78A8
label_1b2648:
    if (ctx->pc == 0x1B2648u) {
        ctx->pc = 0x1B2648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2644u;
        // 0x1b2648: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B264Cu;
        goto label_1b264c;
    }
    ctx->pc = 0x1B2644u;
    SET_GPR_U32(ctx, 31, 0x1B264Cu);
    ctx->pc = 0x1B2648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2644u;
    // 0x1b2648: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1B264Cu;
label_1b264c:
    // 0x1b264c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b264cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b2650:
    // 0x1b2650: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_1b2654:
    if (ctx->pc == 0x1B2654u) {
        ctx->pc = 0x1B2654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2650u;
        // 0x1b2654: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2658u;
        goto label_1b2658;
    }
    ctx->pc = 0x1B2650u;
    {
        const bool branch_taken_0x1b2650 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2650u;
        // 0x1b2654: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2650) {
            ctx->pc = 0x1B2664u;
            goto label_1b2664;
        }
    }
    ctx->pc = 0x1B2658u;
label_1b2658:
    // 0x1b2658: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1b2658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1b265c:
    // 0x1b265c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b2660:
    if (ctx->pc == 0x1B2660u) {
        ctx->pc = 0x1B2660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B265Cu;
        // 0x1b2660: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2664u;
        goto label_1b2664;
    }
    ctx->pc = 0x1B265Cu;
    {
        const bool branch_taken_0x1b265c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B265Cu;
        // 0x1b2660: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b265c) {
            ctx->pc = 0x1B266Cu;
            goto label_1b266c;
        }
    }
    ctx->pc = 0x1B2664u;
label_1b2664:
    // 0x1b2664: 0xc069210  jal         func_1A4840
label_1b2668:
    if (ctx->pc == 0x1B2668u) {
        ctx->pc = 0x1B2668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2664u;
        // 0x1b2668: 0x8e648d0c  lw          $a0, -0x72F4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B266Cu;
        goto label_1b266c;
    }
    ctx->pc = 0x1B2664u;
    SET_GPR_U32(ctx, 31, 0x1B266Cu);
    ctx->pc = 0x1B2668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2664u;
    // 0x1b2668: 0x8e648d0c  lw          $a0, -0x72F4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B266Cu;
label_1b266c:
    // 0x1b266c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b266cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b2670:
    // 0x1b2670: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1b2670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1b2674:
    // 0x1b2674: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1b2674u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1b2678:
    // 0x1b2678: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b2678u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b267c:
    // 0x1b267c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b267cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b2680:
    // 0x1b2680: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b2680u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b2684:
    // 0x1b2684: 0x3e00008  jr          $ra
label_1b2688:
    if (ctx->pc == 0x1B2688u) {
        ctx->pc = 0x1B2688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2684u;
        // 0x1b2688: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B268Cu;
        goto label_1b268c;
    }
    ctx->pc = 0x1B2684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2684u;
        // 0x1b2688: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B268Cu;
label_1b268c:
    // 0x1b268c: 0x0  nop
    ctx->pc = 0x1b268cu;
    // NOP
label_1b2690:
    // 0x1b2690: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1b2690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1b2694:
    // 0x1b2694: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b2694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1b2698:
    // 0x1b2698: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1b2698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_1b269c:
    // 0x1b269c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1b269cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_1b26a0:
    // 0x1b26a0: 0x24546200  addiu       $s4, $v0, 0x6200
    ctx->pc = 0x1b26a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 25088));
label_1b26a4:
    // 0x1b26a4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b26a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1b26a8:
    // 0x1b26a8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1b26a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b26ac:
    // 0x1b26ac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b26acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1b26b0:
    // 0x1b26b0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b26b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b26b4:
    // 0x1b26b4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1b26b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1b26b8:
    // 0x1b26b8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b26b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1b26bc:
    // 0x1b26bc: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x1b26bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_1b26c0:
    // 0x1b26c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1b26c4:
    if (ctx->pc == 0x1B26C4u) {
        ctx->pc = 0x1B26C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B26C0u;
        // 0x1b26c4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B26C8u;
        goto label_1b26c8;
    }
    ctx->pc = 0x1B26C0u;
    {
        const bool branch_taken_0x1b26c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B26C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B26C0u;
        // 0x1b26c4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b26c0) {
            ctx->pc = 0x1B26D0u;
            goto label_1b26d0;
        }
    }
    ctx->pc = 0x1B26C8u;
label_1b26c8:
    // 0x1b26c8: 0x1000002b  b           . + 4 + (0x2B << 2)
label_1b26cc:
    if (ctx->pc == 0x1B26CCu) {
        ctx->pc = 0x1B26CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B26C8u;
        // 0x1b26cc: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B26D0u;
        goto label_1b26d0;
    }
    ctx->pc = 0x1B26C8u;
    {
        const bool branch_taken_0x1b26c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B26CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B26C8u;
        // 0x1b26cc: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b26c8) {
            ctx->pc = 0x1B2778u;
            { ctx->pc = 0x1b2778; return; }
        }
    }
    ctx->pc = 0x1B26D0u;
label_1b26d0:
    // 0x1b26d0: 0x3c110029  lui         $s1, 0x29
    ctx->pc = 0x1b26d0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)41 << 16));
label_1b26d4:
    // 0x1b26d4: 0xc06921c  jal         func_1A4870
label_1b26d8:
    if (ctx->pc == 0x1B26D8u) {
        ctx->pc = 0x1B26D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B26D4u;
        // 0x1b26d8: 0x8e248d0c  lw          $a0, -0x72F4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B26DCu;
        goto label_1b26dc;
    }
    ctx->pc = 0x1B26D4u;
    SET_GPR_U32(ctx, 31, 0x1B26DCu);
    ctx->pc = 0x1B26D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B26D4u;
    // 0x1b26d8: 0x8e248d0c  lw          $a0, -0x72F4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4870u;
    { ctx->pc = 0x1a4870; return; }
    ctx->pc = 0x1B26DCu;
label_1b26dc:
    // 0x1b26dc: 0x4400026  bltz        $v0, . + 4 + (0x26 << 2)
label_1b26e0:
    if (ctx->pc == 0x1B26E0u) {
        ctx->pc = 0x1B26E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B26DCu;
        // 0x1b26e0: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B26E4u;
        goto label_1b26e4;
    }
    ctx->pc = 0x1B26DCu;
    {
        const bool branch_taken_0x1b26dc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B26E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B26DCu;
        // 0x1b26e0: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b26dc) {
            ctx->pc = 0x1B2778u;
            { ctx->pc = 0x1b2778; return; }
        }
    }
    ctx->pc = 0x1B26E4u;
label_1b26e4:
    // 0x1b26e4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1b26e8:
    if (ctx->pc == 0x1B26E8u) {
        ctx->pc = 0x1B26ECu;
        goto label_1b26ec;
    }
    ctx->pc = 0x1B26E4u;
    {
        const bool branch_taken_0x1b26e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b26e4) {
            ctx->pc = 0x1B26F8u;
            goto label_1b26f8;
        }
    }
    ctx->pc = 0x1B26ECu;
label_1b26ec:
    // 0x1b26ec: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1b26ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1b26f0:
    // 0x1b26f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1b26f4:
    if (ctx->pc == 0x1B26F4u) {
        ctx->pc = 0x1B26F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B26F0u;
        // 0x1b26f4: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B26F8u;
        goto label_1b26f8;
    }
    ctx->pc = 0x1B26F0u;
    {
        const bool branch_taken_0x1b26f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B26F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B26F0u;
        // 0x1b26f4: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b26f0) {
            ctx->pc = 0x1B2708u;
            goto label_1b2708;
        }
    }
    ctx->pc = 0x1B26F8u;
label_1b26f8:
    // 0x1b26f8: 0xc069210  jal         func_1A4840
label_1b26fc:
    if (ctx->pc == 0x1B26FCu) {
        ctx->pc = 0x1B26FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B26F8u;
        // 0x1b26fc: 0x8e248d0c  lw          $a0, -0x72F4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2700u;
        goto label_1b2700;
    }
    ctx->pc = 0x1B26F8u;
    SET_GPR_U32(ctx, 31, 0x1B2700u);
    ctx->pc = 0x1B26FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B26F8u;
    // 0x1b26fc: 0x8e248d0c  lw          $a0, -0x72F4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B2700u;
label_1b2700:
    // 0x1b2700: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1b2704:
    if (ctx->pc == 0x1B2704u) {
        ctx->pc = 0x1B2704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2700u;
        // 0x1b2704: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2708u;
        goto label_1b2708;
    }
    ctx->pc = 0x1B2700u;
    {
        const bool branch_taken_0x1b2700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2700u;
        // 0x1b2704: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2700) {
            ctx->pc = 0x1B2778u;
            { ctx->pc = 0x1b2778; return; }
        }
    }
    ctx->pc = 0x1B2708u;
label_1b2708:
    // 0x1b2708: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b2708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b270c:
    // 0x1b270c: 0x245062b0  addiu       $s0, $v0, 0x62B0
    ctx->pc = 0x1b270cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 25264));
label_1b2710:
    // 0x1b2710: 0xac5362b0  sw          $s3, 0x62B0($v0)
    ctx->pc = 0x1b2710u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 25264), GPR_U32(ctx, 19));
label_1b2714:
    // 0x1b2714: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x1b2714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
label_1b2718:
    // 0x1b2718: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x1b2718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_1b271c:
    // 0x1b271c: 0xc08f4fe  jal         func_23D3F8
label_1b2720:
    if (ctx->pc == 0x1B2720u) {
        ctx->pc = 0x1B2720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B271Cu;
        // 0x1b2720: 0x240603ff  addiu       $a2, $zero, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2724u;
        goto label_1b2724;
    }
    ctx->pc = 0x1B271Cu;
    SET_GPR_U32(ctx, 31, 0x1B2724u);
    ctx->pc = 0x1B2720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B271Cu;
    // 0x1b2720: 0x240603ff  addiu       $a2, $zero, 0x3FF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D3F8u;
    { ctx->pc = 0x23d3f8; return; }
    ctx->pc = 0x1B2724u;
label_1b2724:
    // 0x1b2724: 0xa2000413  sb          $zero, 0x413($s0)
    ctx->pc = 0x1b2724u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1043), (uint8_t)GPR_U32(ctx, 0));
label_1b2728:
    // 0x1b2728: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1b2728u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
label_1b272c:
    // 0x1b272c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b272cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b2730:
    // 0x1b2730: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b2730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b2734:
    // 0x1b2734: 0x252977c0  addiu       $t1, $t1, 0x77C0
    ctx->pc = 0x1b2734u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30656));
    ctx->pc = 0x1b2738u;
    return;
}

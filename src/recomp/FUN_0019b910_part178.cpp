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

// Function: FUN_0019b910
// Address: 0x19b910 - 0x29b9f0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b910_part178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1f1fe0u: goto label_1f1fe0;
        case 0x1f1fe4u: goto label_1f1fe4;
        case 0x1f1fe8u: goto label_1f1fe8;
        case 0x1f1fecu: goto label_1f1fec;
        case 0x1f1ff0u: goto label_1f1ff0;
        case 0x1f1ff4u: goto label_1f1ff4;
        case 0x1f1ff8u: goto label_1f1ff8;
        case 0x1f1ffcu: goto label_1f1ffc;
        case 0x1f2000u: goto label_1f2000;
        case 0x1f2004u: goto label_1f2004;
        case 0x1f2008u: goto label_1f2008;
        case 0x1f200cu: goto label_1f200c;
        case 0x1f2010u: goto label_1f2010;
        case 0x1f2014u: goto label_1f2014;
        case 0x1f2018u: goto label_1f2018;
        case 0x1f201cu: goto label_1f201c;
        case 0x1f2020u: goto label_1f2020;
        case 0x1f2024u: goto label_1f2024;
        case 0x1f2028u: goto label_1f2028;
        case 0x1f202cu: goto label_1f202c;
        case 0x1f2030u: goto label_1f2030;
        case 0x1f2034u: goto label_1f2034;
        case 0x1f2038u: goto label_1f2038;
        case 0x1f203cu: goto label_1f203c;
        case 0x1f2040u: goto label_1f2040;
        case 0x1f2044u: goto label_1f2044;
        case 0x1f2048u: goto label_1f2048;
        case 0x1f204cu: goto label_1f204c;
        case 0x1f2050u: goto label_1f2050;
        case 0x1f2054u: goto label_1f2054;
        case 0x1f2058u: goto label_1f2058;
        case 0x1f205cu: goto label_1f205c;
        case 0x1f2060u: goto label_1f2060;
        case 0x1f2064u: goto label_1f2064;
        case 0x1f2068u: goto label_1f2068;
        case 0x1f206cu: goto label_1f206c;
        case 0x1f2070u: goto label_1f2070;
        case 0x1f2074u: goto label_1f2074;
        case 0x1f2078u: goto label_1f2078;
        case 0x1f207cu: goto label_1f207c;
        case 0x1f2080u: goto label_1f2080;
        case 0x1f2084u: goto label_1f2084;
        case 0x1f2088u: goto label_1f2088;
        case 0x1f208cu: goto label_1f208c;
        case 0x1f2090u: goto label_1f2090;
        case 0x1f2094u: goto label_1f2094;
        case 0x1f2098u: goto label_1f2098;
        case 0x1f209cu: goto label_1f209c;
        case 0x1f20a0u: goto label_1f20a0;
        case 0x1f20a4u: goto label_1f20a4;
        case 0x1f20a8u: goto label_1f20a8;
        case 0x1f20acu: goto label_1f20ac;
        case 0x1f20b0u: goto label_1f20b0;
        case 0x1f20b4u: goto label_1f20b4;
        case 0x1f20b8u: goto label_1f20b8;
        case 0x1f20bcu: goto label_1f20bc;
        case 0x1f20c0u: goto label_1f20c0;
        case 0x1f20c4u: goto label_1f20c4;
        case 0x1f20c8u: goto label_1f20c8;
        case 0x1f20ccu: goto label_1f20cc;
        case 0x1f20d0u: goto label_1f20d0;
        case 0x1f20d4u: goto label_1f20d4;
        case 0x1f20d8u: goto label_1f20d8;
        case 0x1f20dcu: goto label_1f20dc;
        case 0x1f20e0u: goto label_1f20e0;
        case 0x1f20e4u: goto label_1f20e4;
        case 0x1f20e8u: goto label_1f20e8;
        case 0x1f20ecu: goto label_1f20ec;
        case 0x1f20f0u: goto label_1f20f0;
        case 0x1f20f4u: goto label_1f20f4;
        case 0x1f20f8u: goto label_1f20f8;
        case 0x1f20fcu: goto label_1f20fc;
        case 0x1f2100u: goto label_1f2100;
        case 0x1f2104u: goto label_1f2104;
        case 0x1f2108u: goto label_1f2108;
        case 0x1f210cu: goto label_1f210c;
        case 0x1f2110u: goto label_1f2110;
        case 0x1f2114u: goto label_1f2114;
        case 0x1f2118u: goto label_1f2118;
        case 0x1f211cu: goto label_1f211c;
        case 0x1f2120u: goto label_1f2120;
        case 0x1f2124u: goto label_1f2124;
        case 0x1f2128u: goto label_1f2128;
        case 0x1f212cu: goto label_1f212c;
        case 0x1f2130u: goto label_1f2130;
        case 0x1f2134u: goto label_1f2134;
        case 0x1f2138u: goto label_1f2138;
        case 0x1f213cu: goto label_1f213c;
        case 0x1f2140u: goto label_1f2140;
        case 0x1f2144u: goto label_1f2144;
        case 0x1f2148u: goto label_1f2148;
        case 0x1f214cu: goto label_1f214c;
        case 0x1f2150u: goto label_1f2150;
        case 0x1f2154u: goto label_1f2154;
        case 0x1f2158u: goto label_1f2158;
        case 0x1f215cu: goto label_1f215c;
        case 0x1f2160u: goto label_1f2160;
        case 0x1f2164u: goto label_1f2164;
        case 0x1f2168u: goto label_1f2168;
        case 0x1f216cu: goto label_1f216c;
        case 0x1f2170u: goto label_1f2170;
        case 0x1f2174u: goto label_1f2174;
        case 0x1f2178u: goto label_1f2178;
        case 0x1f217cu: goto label_1f217c;
        case 0x1f2180u: goto label_1f2180;
        case 0x1f2184u: goto label_1f2184;
        case 0x1f2188u: goto label_1f2188;
        case 0x1f218cu: goto label_1f218c;
        case 0x1f2190u: goto label_1f2190;
        case 0x1f2194u: goto label_1f2194;
        case 0x1f2198u: goto label_1f2198;
        case 0x1f219cu: goto label_1f219c;
        case 0x1f21a0u: goto label_1f21a0;
        case 0x1f21a4u: goto label_1f21a4;
        case 0x1f21a8u: goto label_1f21a8;
        case 0x1f21acu: goto label_1f21ac;
        case 0x1f21b0u: goto label_1f21b0;
        case 0x1f21b4u: goto label_1f21b4;
        case 0x1f21b8u: goto label_1f21b8;
        case 0x1f21bcu: goto label_1f21bc;
        case 0x1f21c0u: goto label_1f21c0;
        case 0x1f21c4u: goto label_1f21c4;
        case 0x1f21c8u: goto label_1f21c8;
        case 0x1f21ccu: goto label_1f21cc;
        case 0x1f21d0u: goto label_1f21d0;
        case 0x1f21d4u: goto label_1f21d4;
        case 0x1f21d8u: goto label_1f21d8;
        case 0x1f21dcu: goto label_1f21dc;
        case 0x1f21e0u: goto label_1f21e0;
        case 0x1f21e4u: goto label_1f21e4;
        case 0x1f21e8u: goto label_1f21e8;
        case 0x1f21ecu: goto label_1f21ec;
        case 0x1f21f0u: goto label_1f21f0;
        case 0x1f21f4u: goto label_1f21f4;
        case 0x1f21f8u: goto label_1f21f8;
        case 0x1f21fcu: goto label_1f21fc;
        case 0x1f2200u: goto label_1f2200;
        case 0x1f2204u: goto label_1f2204;
        case 0x1f2208u: goto label_1f2208;
        case 0x1f220cu: goto label_1f220c;
        case 0x1f2210u: goto label_1f2210;
        case 0x1f2214u: goto label_1f2214;
        case 0x1f2218u: goto label_1f2218;
        case 0x1f221cu: goto label_1f221c;
        case 0x1f2220u: goto label_1f2220;
        case 0x1f2224u: goto label_1f2224;
        case 0x1f2228u: goto label_1f2228;
        case 0x1f222cu: goto label_1f222c;
        case 0x1f2230u: goto label_1f2230;
        case 0x1f2234u: goto label_1f2234;
        case 0x1f2238u: goto label_1f2238;
        case 0x1f223cu: goto label_1f223c;
        case 0x1f2240u: goto label_1f2240;
        case 0x1f2244u: goto label_1f2244;
        case 0x1f2248u: goto label_1f2248;
        case 0x1f224cu: goto label_1f224c;
        case 0x1f2250u: goto label_1f2250;
        case 0x1f2254u: goto label_1f2254;
        case 0x1f2258u: goto label_1f2258;
        case 0x1f225cu: goto label_1f225c;
        case 0x1f2260u: goto label_1f2260;
        case 0x1f2264u: goto label_1f2264;
        case 0x1f2268u: goto label_1f2268;
        case 0x1f226cu: goto label_1f226c;
        case 0x1f2270u: goto label_1f2270;
        case 0x1f2274u: goto label_1f2274;
        case 0x1f2278u: goto label_1f2278;
        case 0x1f227cu: goto label_1f227c;
        case 0x1f2280u: goto label_1f2280;
        case 0x1f2284u: goto label_1f2284;
        case 0x1f2288u: goto label_1f2288;
        case 0x1f228cu: goto label_1f228c;
        case 0x1f2290u: goto label_1f2290;
        case 0x1f2294u: goto label_1f2294;
        case 0x1f2298u: goto label_1f2298;
        case 0x1f229cu: goto label_1f229c;
        case 0x1f22a0u: goto label_1f22a0;
        case 0x1f22a4u: goto label_1f22a4;
        case 0x1f22a8u: goto label_1f22a8;
        case 0x1f22acu: goto label_1f22ac;
        case 0x1f22b0u: goto label_1f22b0;
        case 0x1f22b4u: goto label_1f22b4;
        case 0x1f22b8u: goto label_1f22b8;
        case 0x1f22bcu: goto label_1f22bc;
        case 0x1f22c0u: goto label_1f22c0;
        case 0x1f22c4u: goto label_1f22c4;
        case 0x1f22c8u: goto label_1f22c8;
        case 0x1f22ccu: goto label_1f22cc;
        case 0x1f22d0u: goto label_1f22d0;
        case 0x1f22d4u: goto label_1f22d4;
        case 0x1f22d8u: goto label_1f22d8;
        case 0x1f22dcu: goto label_1f22dc;
        case 0x1f22e0u: goto label_1f22e0;
        case 0x1f22e4u: goto label_1f22e4;
        case 0x1f22e8u: goto label_1f22e8;
        case 0x1f22ecu: goto label_1f22ec;
        case 0x1f22f0u: goto label_1f22f0;
        case 0x1f22f4u: goto label_1f22f4;
        case 0x1f22f8u: goto label_1f22f8;
        case 0x1f22fcu: goto label_1f22fc;
        case 0x1f2300u: goto label_1f2300;
        case 0x1f2304u: goto label_1f2304;
        case 0x1f2308u: goto label_1f2308;
        case 0x1f230cu: goto label_1f230c;
        case 0x1f2310u: goto label_1f2310;
        case 0x1f2314u: goto label_1f2314;
        case 0x1f2318u: goto label_1f2318;
        case 0x1f231cu: goto label_1f231c;
        case 0x1f2320u: goto label_1f2320;
        case 0x1f2324u: goto label_1f2324;
        case 0x1f2328u: goto label_1f2328;
        case 0x1f232cu: goto label_1f232c;
        case 0x1f2330u: goto label_1f2330;
        case 0x1f2334u: goto label_1f2334;
        case 0x1f2338u: goto label_1f2338;
        case 0x1f233cu: goto label_1f233c;
        case 0x1f2340u: goto label_1f2340;
        case 0x1f2344u: goto label_1f2344;
        case 0x1f2348u: goto label_1f2348;
        case 0x1f234cu: goto label_1f234c;
        case 0x1f2350u: goto label_1f2350;
        case 0x1f2354u: goto label_1f2354;
        case 0x1f2358u: goto label_1f2358;
        case 0x1f235cu: goto label_1f235c;
        case 0x1f2360u: goto label_1f2360;
        case 0x1f2364u: goto label_1f2364;
        case 0x1f2368u: goto label_1f2368;
        case 0x1f236cu: goto label_1f236c;
        case 0x1f2370u: goto label_1f2370;
        case 0x1f2374u: goto label_1f2374;
        case 0x1f2378u: goto label_1f2378;
        case 0x1f237cu: goto label_1f237c;
        case 0x1f2380u: goto label_1f2380;
        case 0x1f2384u: goto label_1f2384;
        case 0x1f2388u: goto label_1f2388;
        case 0x1f238cu: goto label_1f238c;
        case 0x1f2390u: goto label_1f2390;
        case 0x1f2394u: goto label_1f2394;
        case 0x1f2398u: goto label_1f2398;
        case 0x1f239cu: goto label_1f239c;
        case 0x1f23a0u: goto label_1f23a0;
        case 0x1f23a4u: goto label_1f23a4;
        case 0x1f23a8u: goto label_1f23a8;
        case 0x1f23acu: goto label_1f23ac;
        case 0x1f23b0u: goto label_1f23b0;
        case 0x1f23b4u: goto label_1f23b4;
        case 0x1f23b8u: goto label_1f23b8;
        case 0x1f23bcu: goto label_1f23bc;
        case 0x1f23c0u: goto label_1f23c0;
        case 0x1f23c4u: goto label_1f23c4;
        case 0x1f23c8u: goto label_1f23c8;
        case 0x1f23ccu: goto label_1f23cc;
        case 0x1f23d0u: goto label_1f23d0;
        case 0x1f23d4u: goto label_1f23d4;
        case 0x1f23d8u: goto label_1f23d8;
        case 0x1f23dcu: goto label_1f23dc;
        case 0x1f23e0u: goto label_1f23e0;
        case 0x1f23e4u: goto label_1f23e4;
        case 0x1f23e8u: goto label_1f23e8;
        case 0x1f23ecu: goto label_1f23ec;
        case 0x1f23f0u: goto label_1f23f0;
        case 0x1f23f4u: goto label_1f23f4;
        case 0x1f23f8u: goto label_1f23f8;
        case 0x1f23fcu: goto label_1f23fc;
        case 0x1f2400u: goto label_1f2400;
        case 0x1f2404u: goto label_1f2404;
        case 0x1f2408u: goto label_1f2408;
        case 0x1f240cu: goto label_1f240c;
        case 0x1f2410u: goto label_1f2410;
        case 0x1f2414u: goto label_1f2414;
        case 0x1f2418u: goto label_1f2418;
        case 0x1f241cu: goto label_1f241c;
        case 0x1f2420u: goto label_1f2420;
        case 0x1f2424u: goto label_1f2424;
        case 0x1f2428u: goto label_1f2428;
        case 0x1f242cu: goto label_1f242c;
        case 0x1f2430u: goto label_1f2430;
        case 0x1f2434u: goto label_1f2434;
        case 0x1f2438u: goto label_1f2438;
        case 0x1f243cu: goto label_1f243c;
        case 0x1f2440u: goto label_1f2440;
        case 0x1f2444u: goto label_1f2444;
        case 0x1f2448u: goto label_1f2448;
        case 0x1f244cu: goto label_1f244c;
        case 0x1f2450u: goto label_1f2450;
        case 0x1f2454u: goto label_1f2454;
        case 0x1f2458u: goto label_1f2458;
        case 0x1f245cu: goto label_1f245c;
        case 0x1f2460u: goto label_1f2460;
        case 0x1f2464u: goto label_1f2464;
        case 0x1f2468u: goto label_1f2468;
        case 0x1f246cu: goto label_1f246c;
        case 0x1f2470u: goto label_1f2470;
        case 0x1f2474u: goto label_1f2474;
        case 0x1f2478u: goto label_1f2478;
        case 0x1f247cu: goto label_1f247c;
        case 0x1f2480u: goto label_1f2480;
        case 0x1f2484u: goto label_1f2484;
        case 0x1f2488u: goto label_1f2488;
        case 0x1f248cu: goto label_1f248c;
        case 0x1f2490u: goto label_1f2490;
        case 0x1f2494u: goto label_1f2494;
        case 0x1f2498u: goto label_1f2498;
        case 0x1f249cu: goto label_1f249c;
        case 0x1f24a0u: goto label_1f24a0;
        case 0x1f24a4u: goto label_1f24a4;
        case 0x1f24a8u: goto label_1f24a8;
        case 0x1f24acu: goto label_1f24ac;
        case 0x1f24b0u: goto label_1f24b0;
        case 0x1f24b4u: goto label_1f24b4;
        case 0x1f24b8u: goto label_1f24b8;
        case 0x1f24bcu: goto label_1f24bc;
        case 0x1f24c0u: goto label_1f24c0;
        case 0x1f24c4u: goto label_1f24c4;
        case 0x1f24c8u: goto label_1f24c8;
        case 0x1f24ccu: goto label_1f24cc;
        case 0x1f24d0u: goto label_1f24d0;
        case 0x1f24d4u: goto label_1f24d4;
        case 0x1f24d8u: goto label_1f24d8;
        case 0x1f24dcu: goto label_1f24dc;
        case 0x1f24e0u: goto label_1f24e0;
        case 0x1f24e4u: goto label_1f24e4;
        case 0x1f24e8u: goto label_1f24e8;
        case 0x1f24ecu: goto label_1f24ec;
        case 0x1f24f0u: goto label_1f24f0;
        case 0x1f24f4u: goto label_1f24f4;
        case 0x1f24f8u: goto label_1f24f8;
        case 0x1f24fcu: goto label_1f24fc;
        case 0x1f2500u: goto label_1f2500;
        case 0x1f2504u: goto label_1f2504;
        case 0x1f2508u: goto label_1f2508;
        case 0x1f250cu: goto label_1f250c;
        case 0x1f2510u: goto label_1f2510;
        case 0x1f2514u: goto label_1f2514;
        case 0x1f2518u: goto label_1f2518;
        case 0x1f251cu: goto label_1f251c;
        case 0x1f2520u: goto label_1f2520;
        case 0x1f2524u: goto label_1f2524;
        case 0x1f2528u: goto label_1f2528;
        case 0x1f252cu: goto label_1f252c;
        case 0x1f2530u: goto label_1f2530;
        case 0x1f2534u: goto label_1f2534;
        case 0x1f2538u: goto label_1f2538;
        case 0x1f253cu: goto label_1f253c;
        case 0x1f2540u: goto label_1f2540;
        case 0x1f2544u: goto label_1f2544;
        case 0x1f2548u: goto label_1f2548;
        case 0x1f254cu: goto label_1f254c;
        case 0x1f2550u: goto label_1f2550;
        case 0x1f2554u: goto label_1f2554;
        case 0x1f2558u: goto label_1f2558;
        case 0x1f255cu: goto label_1f255c;
        case 0x1f2560u: goto label_1f2560;
        case 0x1f2564u: goto label_1f2564;
        case 0x1f2568u: goto label_1f2568;
        case 0x1f256cu: goto label_1f256c;
        case 0x1f2570u: goto label_1f2570;
        case 0x1f2574u: goto label_1f2574;
        case 0x1f2578u: goto label_1f2578;
        case 0x1f257cu: goto label_1f257c;
        case 0x1f2580u: goto label_1f2580;
        case 0x1f2584u: goto label_1f2584;
        case 0x1f2588u: goto label_1f2588;
        case 0x1f258cu: goto label_1f258c;
        case 0x1f2590u: goto label_1f2590;
        case 0x1f2594u: goto label_1f2594;
        case 0x1f2598u: goto label_1f2598;
        case 0x1f259cu: goto label_1f259c;
        case 0x1f25a0u: goto label_1f25a0;
        case 0x1f25a4u: goto label_1f25a4;
        case 0x1f25a8u: goto label_1f25a8;
        case 0x1f25acu: goto label_1f25ac;
        case 0x1f25b0u: goto label_1f25b0;
        case 0x1f25b4u: goto label_1f25b4;
        case 0x1f25b8u: goto label_1f25b8;
        case 0x1f25bcu: goto label_1f25bc;
        case 0x1f25c0u: goto label_1f25c0;
        case 0x1f25c4u: goto label_1f25c4;
        case 0x1f25c8u: goto label_1f25c8;
        case 0x1f25ccu: goto label_1f25cc;
        case 0x1f25d0u: goto label_1f25d0;
        case 0x1f25d4u: goto label_1f25d4;
        case 0x1f25d8u: goto label_1f25d8;
        case 0x1f25dcu: goto label_1f25dc;
        case 0x1f25e0u: goto label_1f25e0;
        case 0x1f25e4u: goto label_1f25e4;
        case 0x1f25e8u: goto label_1f25e8;
        case 0x1f25ecu: goto label_1f25ec;
        case 0x1f25f0u: goto label_1f25f0;
        case 0x1f25f4u: goto label_1f25f4;
        case 0x1f25f8u: goto label_1f25f8;
        case 0x1f25fcu: goto label_1f25fc;
        case 0x1f2600u: goto label_1f2600;
        case 0x1f2604u: goto label_1f2604;
        case 0x1f2608u: goto label_1f2608;
        case 0x1f260cu: goto label_1f260c;
        case 0x1f2610u: goto label_1f2610;
        case 0x1f2614u: goto label_1f2614;
        case 0x1f2618u: goto label_1f2618;
        case 0x1f261cu: goto label_1f261c;
        case 0x1f2620u: goto label_1f2620;
        case 0x1f2624u: goto label_1f2624;
        case 0x1f2628u: goto label_1f2628;
        case 0x1f262cu: goto label_1f262c;
        case 0x1f2630u: goto label_1f2630;
        case 0x1f2634u: goto label_1f2634;
        case 0x1f2638u: goto label_1f2638;
        case 0x1f263cu: goto label_1f263c;
        case 0x1f2640u: goto label_1f2640;
        case 0x1f2644u: goto label_1f2644;
        case 0x1f2648u: goto label_1f2648;
        case 0x1f264cu: goto label_1f264c;
        case 0x1f2650u: goto label_1f2650;
        case 0x1f2654u: goto label_1f2654;
        case 0x1f2658u: goto label_1f2658;
        case 0x1f265cu: goto label_1f265c;
        case 0x1f2660u: goto label_1f2660;
        case 0x1f2664u: goto label_1f2664;
        case 0x1f2668u: goto label_1f2668;
        case 0x1f266cu: goto label_1f266c;
        case 0x1f2670u: goto label_1f2670;
        case 0x1f2674u: goto label_1f2674;
        case 0x1f2678u: goto label_1f2678;
        case 0x1f267cu: goto label_1f267c;
        case 0x1f2680u: goto label_1f2680;
        case 0x1f2684u: goto label_1f2684;
        case 0x1f2688u: goto label_1f2688;
        case 0x1f268cu: goto label_1f268c;
        case 0x1f2690u: goto label_1f2690;
        case 0x1f2694u: goto label_1f2694;
        case 0x1f2698u: goto label_1f2698;
        case 0x1f269cu: goto label_1f269c;
        case 0x1f26a0u: goto label_1f26a0;
        case 0x1f26a4u: goto label_1f26a4;
        case 0x1f26a8u: goto label_1f26a8;
        case 0x1f26acu: goto label_1f26ac;
        case 0x1f26b0u: goto label_1f26b0;
        case 0x1f26b4u: goto label_1f26b4;
        case 0x1f26b8u: goto label_1f26b8;
        case 0x1f26bcu: goto label_1f26bc;
        case 0x1f26c0u: goto label_1f26c0;
        case 0x1f26c4u: goto label_1f26c4;
        case 0x1f26c8u: goto label_1f26c8;
        case 0x1f26ccu: goto label_1f26cc;
        case 0x1f26d0u: goto label_1f26d0;
        case 0x1f26d4u: goto label_1f26d4;
        case 0x1f26d8u: goto label_1f26d8;
        case 0x1f26dcu: goto label_1f26dc;
        case 0x1f26e0u: goto label_1f26e0;
        case 0x1f26e4u: goto label_1f26e4;
        case 0x1f26e8u: goto label_1f26e8;
        case 0x1f26ecu: goto label_1f26ec;
        case 0x1f26f0u: goto label_1f26f0;
        case 0x1f26f4u: goto label_1f26f4;
        case 0x1f26f8u: goto label_1f26f8;
        case 0x1f26fcu: goto label_1f26fc;
        case 0x1f2700u: goto label_1f2700;
        case 0x1f2704u: goto label_1f2704;
        case 0x1f2708u: goto label_1f2708;
        case 0x1f270cu: goto label_1f270c;
        case 0x1f2710u: goto label_1f2710;
        case 0x1f2714u: goto label_1f2714;
        case 0x1f2718u: goto label_1f2718;
        case 0x1f271cu: goto label_1f271c;
        case 0x1f2720u: goto label_1f2720;
        case 0x1f2724u: goto label_1f2724;
        case 0x1f2728u: goto label_1f2728;
        case 0x1f272cu: goto label_1f272c;
        case 0x1f2730u: goto label_1f2730;
        case 0x1f2734u: goto label_1f2734;
        case 0x1f2738u: goto label_1f2738;
        case 0x1f273cu: goto label_1f273c;
        case 0x1f2740u: goto label_1f2740;
        case 0x1f2744u: goto label_1f2744;
        case 0x1f2748u: goto label_1f2748;
        case 0x1f274cu: goto label_1f274c;
        case 0x1f2750u: goto label_1f2750;
        case 0x1f2754u: goto label_1f2754;
        case 0x1f2758u: goto label_1f2758;
        case 0x1f275cu: goto label_1f275c;
        case 0x1f2760u: goto label_1f2760;
        case 0x1f2764u: goto label_1f2764;
        case 0x1f2768u: goto label_1f2768;
        case 0x1f276cu: goto label_1f276c;
        case 0x1f2770u: goto label_1f2770;
        case 0x1f2774u: goto label_1f2774;
        case 0x1f2778u: goto label_1f2778;
        case 0x1f277cu: goto label_1f277c;
        case 0x1f2780u: goto label_1f2780;
        case 0x1f2784u: goto label_1f2784;
        case 0x1f2788u: goto label_1f2788;
        case 0x1f278cu: goto label_1f278c;
        case 0x1f2790u: goto label_1f2790;
        case 0x1f2794u: goto label_1f2794;
        case 0x1f2798u: goto label_1f2798;
        case 0x1f279cu: goto label_1f279c;
        case 0x1f27a0u: goto label_1f27a0;
        case 0x1f27a4u: goto label_1f27a4;
        case 0x1f27a8u: goto label_1f27a8;
        case 0x1f27acu: goto label_1f27ac;
        default: return;
    }

label_1f1fe0:
    // 0x1f1fe0: 0xeb3021  addu        $a2, $a3, $t3
    ctx->pc = 0x1f1fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
label_1f1fe4:
    // 0x1f1fe4: 0x24640000  addiu       $a0, $v1, 0x0
    ctx->pc = 0x1f1fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1f1fe8:
    // 0x1f1fe8: 0x8f838fb0  lw          $v1, -0x7050($gp)
    ctx->pc = 0x1f1fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938544)));
label_1f1fec:
    // 0x1f1fec: 0x15030004  bne         $t0, $v1, . + 4 + (0x4 << 2)
label_1f1ff0:
    if (ctx->pc == 0x1F1FF0u) {
        ctx->pc = 0x1F1FF4u;
        goto label_1f1ff4;
    }
    ctx->pc = 0x1F1FECu;
    {
        const bool branch_taken_0x1f1fec = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f1fec) {
            ctx->pc = 0x1F2000u;
            goto label_1f2000;
        }
    }
    ctx->pc = 0x1F1FF4u;
label_1f1ff4:
    // 0x1f1ff4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1f1ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f1ff8:
    // 0x1f1ff8: 0x11230009  beq         $t1, $v1, . + 4 + (0x9 << 2)
label_1f1ffc:
    if (ctx->pc == 0x1F1FFCu) {
        ctx->pc = 0x1F2000u;
        goto label_1f2000;
    }
    ctx->pc = 0x1F1FF8u;
    {
        const bool branch_taken_0x1f1ff8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f1ff8) {
            ctx->pc = 0x1F2020u;
            goto label_1f2020;
        }
    }
    ctx->pc = 0x1F2000u;
label_1f2000:
    // 0x1f2000: 0x8a6821  addu        $t5, $a0, $t2
    ctx->pc = 0x1f2000u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_1f2004:
    // 0x1f2004: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x1f2004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
label_1f2008:
    // 0x1f2008: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
label_1f200c:
    if (ctx->pc == 0x1F200Cu) {
        ctx->pc = 0x1F2010u;
        goto label_1f2010;
    }
    ctx->pc = 0x1F2008u;
    {
        const bool branch_taken_0x1f2008 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1f2008) {
            ctx->pc = 0x1F2020u;
            goto label_1f2020;
        }
    }
    ctx->pc = 0x1F2010u;
label_1f2010:
    // 0x1f2010: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x1f2010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_1f2014:
    // 0x1f2014: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1f2014u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1f2018:
    // 0x1f2018: 0x1180a  movz        $v1, $zero, $at
    ctx->pc = 0x1f2018u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_1f201c:
    // 0x1f201c: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x1f201cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
label_1f2020:
    // 0x1f2020: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1f2020u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1f2024:
    // 0x1f2024: 0x2923000a  slti        $v1, $t1, 0xA
    ctx->pc = 0x1f2024u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)10) ? 1 : 0);
label_1f2028:
    // 0x1f2028: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
label_1f202c:
    if (ctx->pc == 0x1F202Cu) {
        ctx->pc = 0x1F202Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2028u;
        // 0x1f202c: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2030u;
        goto label_1f2030;
    }
    ctx->pc = 0x1F2028u;
    {
        const bool branch_taken_0x1f2028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F202Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2028u;
        // 0x1f202c: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2028) {
            ctx->pc = 0x1F1FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1fe8;
        }
    }
    ctx->pc = 0x1F2030u;
label_1f2030:
    // 0x1f2030: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f2030u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1f2034:
    // 0x1f2034: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x1f2034u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
label_1f2038:
    // 0x1f2038: 0x29030002  slti        $v1, $t0, 0x2
    ctx->pc = 0x1f2038u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f203c:
    // 0x1f203c: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
label_1f2040:
    if (ctx->pc == 0x1F2040u) {
        ctx->pc = 0x1F2040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F203Cu;
        // 0x1f2040: 0x258c0028  addiu       $t4, $t4, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2044u;
        goto label_1f2044;
    }
    ctx->pc = 0x1F203Cu;
    {
        const bool branch_taken_0x1f203c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F203Cu;
        // 0x1f2040: 0x258c0028  addiu       $t4, $t4, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f203c) {
            ctx->pc = 0x1F1FD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1f1fd4; return; }
        }
    }
    ctx->pc = 0x1F2044u;
label_1f2044:
    // 0x1f2044: 0x0  nop
    ctx->pc = 0x1f2044u;
    // NOP
label_1f2048:
    // 0x1f2048: 0x3e00008  jr          $ra
label_1f204c:
    if (ctx->pc == 0x1F204Cu) {
        ctx->pc = 0x1F2050u;
        goto label_1f2050;
    }
    ctx->pc = 0x1F2048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2050u;
label_1f2050:
    // 0x1f2050: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1f2050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_1f2054:
    // 0x1f2054: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1f2054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_1f2058:
    // 0x1f2058: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1f2058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_1f205c:
    // 0x1f205c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1f205cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_1f2060:
    // 0x1f2060: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1f2060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1f2064:
    // 0x1f2064: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1f2064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1f2068:
    // 0x1f2068: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1f2068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1f206c:
    // 0x1f206c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1f206cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1f2070:
    // 0x1f2070: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1f2070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1f2074:
    // 0x1f2074: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f2074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1f2078:
    // 0x1f2078: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f2078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1f207c:
    // 0x1f207c: 0x8f838fc0  lw          $v1, -0x7040($gp)
    ctx->pc = 0x1f207cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938560)));
label_1f2080:
    // 0x1f2080: 0x1060009c  beqz        $v1, . + 4 + (0x9C << 2)
label_1f2084:
    if (ctx->pc == 0x1F2084u) {
        ctx->pc = 0x1F2084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2080u;
        // 0x1f2084: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2088u;
        goto label_1f2088;
    }
    ctx->pc = 0x1F2080u;
    {
        const bool branch_taken_0x1f2080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2080u;
        // 0x1f2084: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2080) {
            ctx->pc = 0x1F22F4u;
            goto label_1f22f4;
        }
    }
    ctx->pc = 0x1F2088u;
label_1f2088:
    // 0x1f2088: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f2088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_1f208c:
    // 0x1f208c: 0x34633ffc  ori         $v1, $v1, 0x3FFC
    ctx->pc = 0x1f208cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16380);
label_1f2090:
    // 0x1f2090: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x1f2090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_1f2094:
    // 0x1f2094: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1f2094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f2098:
    // 0x1f2098: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1f2098u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f209c:
    // 0x1f209c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1f209cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f20a0:
    // 0x1f20a0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1f20a0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f20a4:
    // 0x1f20a4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1f20a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1f20a8:
    // 0x1f20a8: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x1f20a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_1f20ac:
    // 0x1f20ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f20acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f20b0:
    // 0x1f20b0: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1f20b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_1f20b4:
    // 0x1f20b4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1f20b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1f20b8:
    // 0x1f20b8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1f20b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1f20bc:
    // 0x1f20bc: 0x8c273ffc  lw          $a3, 0x3FFC($at)
    ctx->pc = 0x1f20bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1f20c0:
    // 0x1f20c0: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x1f20c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
label_1f20c4:
    // 0x1f20c4: 0x2463c040  addiu       $v1, $v1, -0x3FC0
    ctx->pc = 0x1f20c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950976));
label_1f20c8:
    // 0x1f20c8: 0x8f848fc0  lw          $a0, -0x7040($gp)
    ctx->pc = 0x1f20c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938560)));
label_1f20cc:
    // 0x1f20cc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f20ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f20d0:
    // 0x1f20d0: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x1f20d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_1f20d4:
    // 0x1f20d4: 0x24450000  addiu       $a1, $v0, 0x0
    ctx->pc = 0x1f20d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1f20d8:
    // 0x1f20d8: 0x673021  addu        $a2, $v1, $a3
    ctx->pc = 0x1f20d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1f20dc:
    // 0x1f20dc: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x1f20dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
label_1f20e0:
    // 0x1f20e0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1f20e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1f20e4:
    // 0x1f20e4: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x1f20e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_1f20e8:
    // 0x1f20e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f20e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f20ec:
    // 0x1f20ec: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1f20ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1f20f0:
    // 0x1f20f0: 0x62180  sll         $a0, $a2, 6
    ctx->pc = 0x1f20f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_1f20f4:
    // 0x1f20f4: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x1f20f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1f20f8:
    // 0x1f20f8: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x1f20f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1f20fc:
    // 0x1f20fc: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x1f20fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_1f2100:
    // 0x1f2100: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1f2100u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1f2104:
    // 0x1f2104: 0xa2b021  addu        $s6, $a1, $v0
    ctx->pc = 0x1f2104u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1f2108:
    // 0x1f2108: 0x1010  mfhi        $v0
    ctx->pc = 0x1f2108u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1f210c:
    // 0x1f210c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1f210cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1f2110:
    // 0x1f2110: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f2110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f2114:
    // 0x1f2114: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
label_1f2118:
    if (ctx->pc == 0x1F2118u) {
        ctx->pc = 0x1F2118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2114u;
        // 0x1f2118: 0x2450ff70  addiu       $s0, $v0, -0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F211Cu;
        goto label_1f211c;
    }
    ctx->pc = 0x1F2114u;
    {
        const bool branch_taken_0x1f2114 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2114u;
        // 0x1f2118: 0x2450ff70  addiu       $s0, $v0, -0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2114) {
            ctx->pc = 0x1F2128u;
            goto label_1f2128;
        }
    }
    ctx->pc = 0x1F211Cu;
label_1f211c:
    // 0x1f211c: 0x240201f0  addiu       $v0, $zero, 0x1F0
    ctx->pc = 0x1f211cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
label_1f2120:
    // 0x1f2120: 0x10000002  b           . + 4 + (0x2 << 2)
label_1f2124:
    if (ctx->pc == 0x1F2124u) {
        ctx->pc = 0x1F2124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2120u;
        // 0x1f2124: 0x502823  subu        $a1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2128u;
        goto label_1f2128;
    }
    ctx->pc = 0x1F2120u;
    {
        const bool branch_taken_0x1f2120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2120u;
        // 0x1f2124: 0x502823  subu        $a1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2120) {
            ctx->pc = 0x1F212Cu;
            goto label_1f212c;
        }
    }
    ctx->pc = 0x1F2128u;
label_1f2128:
    // 0x1f2128: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f2128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f212c:
    // 0x1f212c: 0x26c40010  addiu       $a0, $s6, 0x10
    ctx->pc = 0x1f212cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
label_1f2130:
    // 0x1f2130: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x1f2130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_1f2134:
    // 0x1f2134: 0x24070090  addiu       $a3, $zero, 0x90
    ctx->pc = 0x1f2134u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_1f2138:
    // 0x1f2138: 0xc07c25c  jal         func_1F0970
label_1f213c:
    if (ctx->pc == 0x1F213Cu) {
        ctx->pc = 0x1F213Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2138u;
        // 0x1f213c: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2140u;
        goto label_1f2140;
    }
    ctx->pc = 0x1F2138u;
    SET_GPR_U32(ctx, 31, 0x1F2140u);
    ctx->pc = 0x1F213Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2138u;
    // 0x1f213c: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0970u;
    { ctx->pc = 0x1f0970; return; }
    ctx->pc = 0x1F2140u;
label_1f2140:
    // 0x1f2140: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
label_1f2144:
    if (ctx->pc == 0x1F2144u) {
        ctx->pc = 0x1F2144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2140u;
        // 0x1f2144: 0x26070038  addiu       $a3, $s0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2148u;
        goto label_1f2148;
    }
    ctx->pc = 0x1F2140u;
    {
        const bool branch_taken_0x1f2140 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2140u;
        // 0x1f2144: 0x26070038  addiu       $a3, $s0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2140) {
            ctx->pc = 0x1F2150u;
            goto label_1f2150;
        }
    }
    ctx->pc = 0x1F2148u;
label_1f2148:
    // 0x1f2148: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x1f2148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_1f214c:
    // 0x1f214c: 0x503823  subu        $a3, $v0, $s0
    ctx->pc = 0x1f214cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1f2150:
    // 0x1f2150: 0x26c205b0  addiu       $v0, $s6, 0x5B0
    ctx->pc = 0x1f2150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1456));
label_1f2154:
    // 0x1f2154: 0x24080048  addiu       $t0, $zero, 0x48
    ctx->pc = 0x1f2154u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_1f2158:
    // 0x1f2158: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1f2158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1f215c:
    // 0x1f215c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f215cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f2160:
    // 0x1f2160: 0x27828fb8  addiu       $v0, $gp, -0x7048
    ctx->pc = 0x1f2160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938552));
label_1f2164:
    // 0x1f2164: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1f2164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f2168:
    // 0x1f2168: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x1f2168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_1f216c:
    // 0x1f216c: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x1f216cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
label_1f2170:
    // 0x1f2170: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1f2170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f2174:
    // 0x1f2174: 0x95300b  movn        $a2, $a0, $s5
    ctx->pc = 0x1f2174u;
    if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
label_1f2178:
    // 0x1f2178: 0x3409fe00  ori         $t1, $zero, 0xFE00
    ctx->pc = 0x1f2178u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1f217c:
    // 0x1f217c: 0x240b0018  addiu       $t3, $zero, 0x18
    ctx->pc = 0x1f217cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1f2180:
    // 0x1f2180: 0xc054c60  jal         func_153180
label_1f2184:
    if (ctx->pc == 0x1F2184u) {
        ctx->pc = 0x1F2184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2180u;
        // 0x1f2184: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2188u;
        goto label_1f2188;
    }
    ctx->pc = 0x1F2180u;
    SET_GPR_U32(ctx, 31, 0x1F2188u);
    ctx->pc = 0x1F2184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2180u;
    // 0x1f2184: 0x100502d  daddu       $t2, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153180u, 0x1F2180u, 0x1F2188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2188u;
label_1f2188:
    // 0x1f2188: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
label_1f218c:
    if (ctx->pc == 0x1F218Cu) {
        ctx->pc = 0x1F218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2188u;
        // 0x1f218c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2190u;
        goto label_1f2190;
    }
    ctx->pc = 0x1F2188u;
    {
        const bool branch_taken_0x1f2188 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2188u;
        // 0x1f218c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2188) {
            ctx->pc = 0x1F2198u;
            goto label_1f2198;
        }
    }
    ctx->pc = 0x1F2190u;
label_1f2190:
    // 0x1f2190: 0x240201f0  addiu       $v0, $zero, 0x1F0
    ctx->pc = 0x1f2190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
label_1f2194:
    // 0x1f2194: 0x502823  subu        $a1, $v0, $s0
    ctx->pc = 0x1f2194u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1f2198:
    // 0x1f2198: 0x26c40680  addiu       $a0, $s6, 0x680
    ctx->pc = 0x1f2198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 1664));
label_1f219c:
    // 0x1f219c: 0x24060068  addiu       $a2, $zero, 0x68
    ctx->pc = 0x1f219cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_1f21a0:
    // 0x1f21a0: 0x24070090  addiu       $a3, $zero, 0x90
    ctx->pc = 0x1f21a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_1f21a4:
    // 0x1f21a4: 0xc07c25c  jal         func_1F0970
label_1f21a8:
    if (ctx->pc == 0x1F21A8u) {
        ctx->pc = 0x1F21A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F21A4u;
        // 0x1f21a8: 0x240800f0  addiu       $t0, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F21ACu;
        goto label_1f21ac;
    }
    ctx->pc = 0x1F21A4u;
    SET_GPR_U32(ctx, 31, 0x1F21ACu);
    ctx->pc = 0x1F21A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F21A4u;
    // 0x1f21a8: 0x240800f0  addiu       $t0, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0970u;
    { ctx->pc = 0x1f0970; return; }
    ctx->pc = 0x1F21ACu;
label_1f21ac:
    // 0x1f21ac: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
label_1f21b0:
    if (ctx->pc == 0x1F21B0u) {
        ctx->pc = 0x1F21B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F21ACu;
        // 0x1f21b0: 0x240201f0  addiu       $v0, $zero, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F21B4u;
        goto label_1f21b4;
    }
    ctx->pc = 0x1F21ACu;
    {
        const bool branch_taken_0x1f21ac = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F21B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F21ACu;
        // 0x1f21b0: 0x240201f0  addiu       $v0, $zero, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f21ac) {
            ctx->pc = 0x1F21C0u;
            goto label_1f21c0;
        }
    }
    ctx->pc = 0x1F21B4u;
label_1f21b4:
    // 0x1f21b4: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1f21b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1f21b8:
    // 0x1f21b8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1f21bc:
    if (ctx->pc == 0x1F21BCu) {
        ctx->pc = 0x1F21BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F21B8u;
        // 0x1f21bc: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F21C0u;
        goto label_1f21c0;
    }
    ctx->pc = 0x1F21B8u;
    {
        const bool branch_taken_0x1f21b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F21BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F21B8u;
        // 0x1f21bc: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f21b8) {
            ctx->pc = 0x1F21C4u;
            goto label_1f21c4;
        }
    }
    ctx->pc = 0x1F21C0u;
label_1f21c0:
    // 0x1f21c0: 0xafb000c0  sw          $s0, 0xC0($sp)
    ctx->pc = 0x1f21c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 16));
label_1f21c4:
    // 0x1f21c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f21c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f21c8:
    // 0x1f21c8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1f21c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f21cc:
    // 0x1f21cc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f21ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f21d0:
    // 0x1f21d0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1f21d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f21d4:
    // 0x1f21d4: 0x0  nop
    ctx->pc = 0x1f21d4u;
    // NOP
label_1f21d8:
    // 0x1f21d8: 0x2d31021  addu        $v0, $s6, $s3
    ctx->pc = 0x1f21d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
label_1f21dc:
    // 0x1f21dc: 0x24440c20  addiu       $a0, $v0, 0xC20
    ctx->pc = 0x1f21dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3104));
label_1f21e0:
    // 0x1f21e0: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x1f21e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1f21e4:
    // 0x1f21e4: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1f21e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_1f21e8:
    // 0x1f21e8: 0x26860068  addiu       $a2, $s4, 0x68
    ctx->pc = 0x1f21e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 104));
label_1f21ec:
    // 0x1f21ec: 0x2442bfa0  addiu       $v0, $v0, -0x4060
    ctx->pc = 0x1f21ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950816));
label_1f21f0:
    // 0x1f21f0: 0x24070090  addiu       $a3, $zero, 0x90
    ctx->pc = 0x1f21f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_1f21f4:
    // 0x1f21f4: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x1f21f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_1f21f8:
    // 0x1f21f8: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x1f21f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1f21fc:
    // 0x1f21fc: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1f21fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1f2200:
    // 0x1f2200: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1f2200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1f2204:
    // 0x1f2204: 0x904a0000  lbu         $t2, 0x0($v0)
    ctx->pc = 0x1f2204u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1f2208:
    // 0x1f2208: 0xc07c0d0  jal         func_1F0340
label_1f220c:
    if (ctx->pc == 0x1F220Cu) {
        ctx->pc = 0x1F220Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2208u;
        // 0x1f220c: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2210u;
        goto label_1f2210;
    }
    ctx->pc = 0x1F2208u;
    SET_GPR_U32(ctx, 31, 0x1F2210u);
    ctx->pc = 0x1F220Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2208u;
    // 0x1f220c: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0340u;
    { ctx->pc = 0x1f0340; return; }
    ctx->pc = 0x1F2210u;
label_1f2210:
    // 0x1f2210: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f2210u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1f2214:
    // 0x1f2214: 0x26940018  addiu       $s4, $s4, 0x18
    ctx->pc = 0x1f2214u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
label_1f2218:
    // 0x1f2218: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x1f2218u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
label_1f221c:
    // 0x1f221c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1f221cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1f2220:
    // 0x1f2220: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_1f2224:
    if (ctx->pc == 0x1F2224u) {
        ctx->pc = 0x1F2224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2220u;
        // 0x1f2224: 0x267302c0  addiu       $s3, $s3, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2228u;
        goto label_1f2228;
    }
    ctx->pc = 0x1F2220u;
    {
        const bool branch_taken_0x1f2220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2220u;
        // 0x1f2224: 0x267302c0  addiu       $s3, $s3, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2220) {
            ctx->pc = 0x1F21D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f21d4;
        }
    }
    ctx->pc = 0x1F2228u;
label_1f2228:
    // 0x1f2228: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1f2228u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f222c:
    // 0x1f222c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f222cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2230:
    // 0x1f2230: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f2230u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2234:
    // 0x1f2234: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1f2234u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2238:
    // 0x1f2238: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
label_1f223c:
    if (ctx->pc == 0x1F223Cu) {
        ctx->pc = 0x1F223Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2238u;
        // 0x1f223c: 0x26070028  addiu       $a3, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2240u;
        goto label_1f2240;
    }
    ctx->pc = 0x1F2238u;
    {
        const bool branch_taken_0x1f2238 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F223Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2238u;
        // 0x1f223c: 0x26070028  addiu       $a3, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2238) {
            ctx->pc = 0x1F2248u;
            goto label_1f2248;
        }
    }
    ctx->pc = 0x1F2240u;
label_1f2240:
    // 0x1f2240: 0x240201f8  addiu       $v0, $zero, 0x1F8
    ctx->pc = 0x1f2240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 504));
label_1f2244:
    // 0x1f2244: 0x503823  subu        $a3, $v0, $s0
    ctx->pc = 0x1f2244u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1f2248:
    // 0x1f2248: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1f2248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_1f224c:
    // 0x1f224c: 0x2442bff0  addiu       $v0, $v0, -0x4010
    ctx->pc = 0x1f224cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950896));
label_1f2250:
    // 0x1f2250: 0x571821  addu        $v1, $v0, $s7
    ctx->pc = 0x1f2250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_1f2254:
    // 0x1f2254: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1f2254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1f2258:
    // 0x1f2258: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1f2258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1f225c:
    // 0x1f225c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1f225cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1f2260:
    // 0x1f2260: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1f2260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f2264:
    // 0x1f2264: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
label_1f2268:
    if (ctx->pc == 0x1F2268u) {
        ctx->pc = 0x1F2268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2264u;
        // 0x1f2268: 0x26280068  addiu       $t0, $s1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F226Cu;
        goto label_1f226c;
    }
    ctx->pc = 0x1F2264u;
    {
        const bool branch_taken_0x1f2264 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F2268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2264u;
        // 0x1f2268: 0x26280068  addiu       $t0, $s1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2264) {
            ctx->pc = 0x1F229Cu;
            goto label_1f229c;
        }
    }
    ctx->pc = 0x1F226Cu;
label_1f226c:
    // 0x1f226c: 0x2d31821  addu        $v1, $s6, $s3
    ctx->pc = 0x1f226cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
label_1f2270:
    // 0x1f2270: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f2270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f2274:
    // 0x1f2274: 0x246327a0  addiu       $v1, $v1, 0x27A0
    ctx->pc = 0x1f2274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10144));
label_1f2278:
    // 0x1f2278: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1f2278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f227c:
    // 0x1f227c: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x1f227cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_1f2280:
    // 0x1f2280: 0x55300b  movn        $a2, $v0, $s5
    ctx->pc = 0x1f2280u;
    if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_1f2284:
    // 0x1f2284: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1f2284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1f2288:
    // 0x1f2288: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f2288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f228c:
    // 0x1f228c: 0x3409fe00  ori         $t1, $zero, 0xFE00
    ctx->pc = 0x1f228cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1f2290:
    // 0x1f2290: 0x240a0060  addiu       $t2, $zero, 0x60
    ctx->pc = 0x1f2290u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1f2294:
    // 0x1f2294: 0xc054c60  jal         func_153180
label_1f2298:
    if (ctx->pc == 0x1F2298u) {
        ctx->pc = 0x1F2298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2294u;
        // 0x1f2298: 0x240b0018  addiu       $t3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F229Cu;
        goto label_1f229c;
    }
    ctx->pc = 0x1F2294u;
    SET_GPR_U32(ctx, 31, 0x1F229Cu);
    ctx->pc = 0x1F2298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2294u;
    // 0x1f2298: 0x240b0018  addiu       $t3, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153180u, 0x1F2294u, 0x1F229Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F229Cu;
label_1f229c:
    // 0x1f229c: 0x0  nop
    ctx->pc = 0x1f229cu;
    // NOP
label_1f22a0:
    // 0x1f22a0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1f22a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1f22a4:
    // 0x1f22a4: 0x2a82000a  slti        $v0, $s4, 0xA
    ctx->pc = 0x1f22a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)10) ? 1 : 0);
label_1f22a8:
    // 0x1f22a8: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x1f22a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_1f22ac:
    // 0x1f22ac: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1f22acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1f22b0:
    // 0x1f22b0: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
label_1f22b4:
    if (ctx->pc == 0x1F22B4u) {
        ctx->pc = 0x1F22B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F22B0u;
        // 0x1f22b4: 0x267300d0  addiu       $s3, $s3, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F22B8u;
        goto label_1f22b8;
    }
    ctx->pc = 0x1F22B0u;
    {
        const bool branch_taken_0x1f22b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F22B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F22B0u;
        // 0x1f22b4: 0x267300d0  addiu       $s3, $s3, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f22b0) {
            ctx->pc = 0x1F2238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2238;
        }
    }
    ctx->pc = 0x1F22B8u;
label_1f22b8:
    // 0x1f22b8: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1f22b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1f22bc:
    // 0x1f22bc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1f22bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f22c0:
    // 0x1f22c0: 0x240602fc  addiu       $a2, $zero, 0x2FC
    ctx->pc = 0x1f22c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 764));
label_1f22c4:
    // 0x1f22c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f22c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f22c8:
    // 0x1f22c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f22c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f22cc:
    // 0x1f22cc: 0xc066c72  jal         func_19B1C8
label_1f22d0:
    if (ctx->pc == 0x1F22D0u) {
        ctx->pc = 0x1F22D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F22CCu;
        // 0x1f22d0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F22D4u;
        goto label_1f22d4;
    }
    ctx->pc = 0x1F22CCu;
    SET_GPR_U32(ctx, 31, 0x1F22D4u);
    ctx->pc = 0x1F22D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F22CCu;
    // 0x1f22d0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1F22CCu, 0x1F22D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F22D4u;
label_1f22d4:
    // 0x1f22d4: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1f22d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1f22d8:
    // 0x1f22d8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1f22d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1f22dc:
    // 0x1f22dc: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x1f22dcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_1f22e0:
    // 0x1f22e0: 0x24635f80  addiu       $v1, $v1, 0x5F80
    ctx->pc = 0x1f22e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24448));
label_1f22e4:
    // 0x1f22e4: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x1f22e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
label_1f22e8:
    // 0x1f22e8: 0x2aa30002  slti        $v1, $s5, 0x2
    ctx->pc = 0x1f22e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f22ec:
    // 0x1f22ec: 0x1460ff71  bnez        $v1, . + 4 + (-0x8F << 2)
label_1f22f0:
    if (ctx->pc == 0x1F22F0u) {
        ctx->pc = 0x1F22F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F22ECu;
        // 0x1f22f0: 0x26f70028  addiu       $s7, $s7, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F22F4u;
        goto label_1f22f4;
    }
    ctx->pc = 0x1F22ECu;
    {
        const bool branch_taken_0x1f22ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F22F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F22ECu;
        // 0x1f22f0: 0x26f70028  addiu       $s7, $s7, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f22ec) {
            ctx->pc = 0x1F20B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f20b4;
        }
    }
    ctx->pc = 0x1F22F4u;
label_1f22f4:
    // 0x1f22f4: 0x0  nop
    ctx->pc = 0x1f22f4u;
    // NOP
label_1f22f8:
    // 0x1f22f8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1f22f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1f22fc:
    // 0x1f22fc: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1f22fcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1f2300:
    // 0x1f2300: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1f2300u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1f2304:
    // 0x1f2304: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1f2304u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1f2308:
    // 0x1f2308: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1f2308u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f230c:
    // 0x1f230c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1f230cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f2310:
    // 0x1f2310: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1f2310u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f2314:
    // 0x1f2314: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1f2314u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f2318:
    // 0x1f2318: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f2318u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f231c:
    // 0x1f231c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f231cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f2320:
    // 0x1f2320: 0x3e00008  jr          $ra
label_1f2324:
    if (ctx->pc == 0x1F2324u) {
        ctx->pc = 0x1F2324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2320u;
        // 0x1f2324: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2328u;
        goto label_1f2328;
    }
    ctx->pc = 0x1F2320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2320u;
        // 0x1f2324: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2328u;
label_1f2328:
    // 0x1f2328: 0x0  nop
    ctx->pc = 0x1f2328u;
    // NOP
label_1f232c:
    // 0x1f232c: 0x0  nop
    ctx->pc = 0x1f232cu;
    // NOP
label_1f2330:
    // 0x1f2330: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1f2330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1f2334:
    // 0x1f2334: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f2334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f2338:
    // 0x1f2338: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1f2338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_1f233c:
    // 0x1f233c: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x1f233cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_1f2340:
    // 0x1f2340: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1f2340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_1f2344:
    // 0x1f2344: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1f2344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_1f2348:
    // 0x1f2348: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1f2348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_1f234c:
    // 0x1f234c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1f234cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_1f2350:
    // 0x1f2350: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1f2350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1f2354:
    // 0x1f2354: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f2354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1f2358:
    // 0x1f2358: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f2358u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f235c:
    // 0x1f235c: 0xac209ce0  sw          $zero, -0x6320($at)
    ctx->pc = 0x1f235cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941920), GPR_U32(ctx, 0));
label_1f2360:
    // 0x1f2360: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f2360u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2364:
    // 0x1f2364: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f2364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f2368:
    // 0x1f2368: 0xaf808fa0  sw          $zero, -0x7060($gp)
    ctx->pc = 0x1f2368u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938528), GPR_U32(ctx, 0));
label_1f236c:
    // 0x1f236c: 0xac209ce4  sw          $zero, -0x631C($at)
    ctx->pc = 0x1f236cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941924), GPR_U32(ctx, 0));
label_1f2370:
    // 0x1f2370: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f2370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f2374:
    // 0x1f2374: 0xaf808f9c  sw          $zero, -0x7064($gp)
    ctx->pc = 0x1f2374u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938524), GPR_U32(ctx, 0));
label_1f2378:
    // 0x1f2378: 0xac209ce8  sw          $zero, -0x6318($at)
    ctx->pc = 0x1f2378u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941928), GPR_U32(ctx, 0));
label_1f237c:
    // 0x1f237c: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f237cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f2380:
    // 0x1f2380: 0xaf808f94  sw          $zero, -0x706C($gp)
    ctx->pc = 0x1f2380u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938516), GPR_U32(ctx, 0));
label_1f2384:
    // 0x1f2384: 0xac209cec  sw          $zero, -0x6314($at)
    ctx->pc = 0x1f2384u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941932), GPR_U32(ctx, 0));
label_1f2388:
    // 0x1f2388: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f2388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f238c:
    // 0x1f238c: 0xaf808f98  sw          $zero, -0x7068($gp)
    ctx->pc = 0x1f238cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938520), GPR_U32(ctx, 0));
label_1f2390:
    // 0x1f2390: 0xac209cf0  sw          $zero, -0x6310($at)
    ctx->pc = 0x1f2390u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941936), GPR_U32(ctx, 0));
label_1f2394:
    // 0x1f2394: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f2394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f2398:
    // 0x1f2398: 0xaf808f90  sw          $zero, -0x7070($gp)
    ctx->pc = 0x1f2398u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938512), GPR_U32(ctx, 0));
label_1f239c:
    // 0x1f239c: 0xac209cf4  sw          $zero, -0x630C($at)
    ctx->pc = 0x1f239cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941940), GPR_U32(ctx, 0));
label_1f23a0:
    // 0x1f23a0: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f23a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f23a4:
    // 0x1f23a4: 0xaf808f8c  sw          $zero, -0x7074($gp)
    ctx->pc = 0x1f23a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938508), GPR_U32(ctx, 0));
label_1f23a8:
    // 0x1f23a8: 0xac209cf8  sw          $zero, -0x6308($at)
    ctx->pc = 0x1f23a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941944), GPR_U32(ctx, 0));
label_1f23ac:
    // 0x1f23ac: 0x3c01004e  lui         $at, 0x4E
    ctx->pc = 0x1f23acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)78 << 16));
label_1f23b0:
    // 0x1f23b0: 0xaf808f88  sw          $zero, -0x7078($gp)
    ctx->pc = 0x1f23b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938504), GPR_U32(ctx, 0));
label_1f23b4:
    // 0x1f23b4: 0xac209cfc  sw          $zero, -0x6304($at)
    ctx->pc = 0x1f23b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941948), GPR_U32(ctx, 0));
label_1f23b8:
    // 0x1f23b8: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1f23b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_1f23bc:
    // 0x1f23bc: 0x24050114  addiu       $a1, $zero, 0x114
    ctx->pc = 0x1f23bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
label_1f23c0:
    // 0x1f23c0: 0x24429d00  addiu       $v0, $v0, -0x6300
    ctx->pc = 0x1f23c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941952));
label_1f23c4:
    // 0x1f23c4: 0x509821  addu        $s3, $v0, $s0
    ctx->pc = 0x1f23c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1f23c8:
    // 0x1f23c8: 0xc05e234  jal         func_1788D0
label_1f23cc:
    if (ctx->pc == 0x1F23CCu) {
        ctx->pc = 0x1F23CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F23C8u;
        // 0x1f23cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F23D0u;
        goto label_1f23d0;
    }
    ctx->pc = 0x1F23C8u;
    SET_GPR_U32(ctx, 31, 0x1F23D0u);
    ctx->pc = 0x1F23CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F23C8u;
    // 0x1f23cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1F23C8u, 0x1F23D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F23D0u;
label_1f23d0:
    // 0x1f23d0: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x1f23d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1f23d4:
    // 0x1f23d4: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x1f23d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1f23d8:
    // 0x1f23d8: 0xffaa0000  sd          $t2, 0x0($sp)
    ctx->pc = 0x1f23d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 10));
label_1f23dc:
    // 0x1f23dc: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1f23dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1f23e0:
    // 0x1f23e0: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1f23e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1f23e4:
    // 0x1f23e4: 0x3407fdff  ori         $a3, $zero, 0xFDFF
    ctx->pc = 0x1f23e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65023);
label_1f23e8:
    // 0x1f23e8: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1f23e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_1f23ec:
    // 0x1f23ec: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x1f23ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_1f23f0:
    // 0x1f23f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f23f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f23f4:
    // 0x1f23f4: 0x24060148  addiu       $a2, $zero, 0x148
    ctx->pc = 0x1f23f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 328));
label_1f23f8:
    // 0x1f23f8: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x1f23f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1f23fc:
    // 0x1f23fc: 0x24090078  addiu       $t1, $zero, 0x78
    ctx->pc = 0x1f23fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1f2400:
    // 0x1f2400: 0xc07c110  jal         func_1F0440
label_1f2404:
    if (ctx->pc == 0x1F2404u) {
        ctx->pc = 0x1F2404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2400u;
        // 0x1f2404: 0x240b0010  addiu       $t3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2408u;
        goto label_1f2408;
    }
    ctx->pc = 0x1F2400u;
    SET_GPR_U32(ctx, 31, 0x1F2408u);
    ctx->pc = 0x1F2404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2400u;
    // 0x1f2404: 0x240b0010  addiu       $t3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0440u;
    { ctx->pc = 0x1f0440; return; }
    ctx->pc = 0x1F2408u;
label_1f2408:
    // 0x1f2408: 0x26630380  addiu       $v1, $s3, 0x380
    ctx->pc = 0x1f2408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 896));
label_1f240c:
    // 0x1f240c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f240cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f2410:
    // 0x1f2410: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f2410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f2414:
    // 0x1f2414: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x1f2414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_1f2418:
    // 0x1f2418: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1f2418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f241c:
    // 0x1f241c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1f241cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1f2420:
    // 0x1f2420: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f2420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2424:
    // 0x1f2424: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1f2424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1f2428:
    // 0x1f2428: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x1f2428u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1f242c:
    // 0x1f242c: 0x240801c0  addiu       $t0, $zero, 0x1C0
    ctx->pc = 0x1f242cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1f2430:
    // 0x1f2430: 0x3409fdff  ori         $t1, $zero, 0xFDFF
    ctx->pc = 0x1f2430u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65023);
label_1f2434:
    // 0x1f2434: 0xc054c60  jal         func_153180
label_1f2438:
    if (ctx->pc == 0x1F2438u) {
        ctx->pc = 0x1F2438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2434u;
        // 0x1f2438: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F243Cu;
        goto label_1f243c;
    }
    ctx->pc = 0x1F2434u;
    SET_GPR_U32(ctx, 31, 0x1F243Cu);
    ctx->pc = 0x1F2438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2434u;
    // 0x1f2438: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153180u, 0x1F2434u, 0x1F243Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F243Cu;
label_1f243c:
    // 0x1f243c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1f243cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1f2440:
    // 0x1f2440: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x1f2440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1f2444:
    // 0x1f2444: 0xc07091c  jal         func_1C2470
label_1f2448:
    if (ctx->pc == 0x1F2448u) {
        ctx->pc = 0x1F2448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2444u;
        // 0x1f2448: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F244Cu;
        goto label_1f244c;
    }
    ctx->pc = 0x1F2444u;
    SET_GPR_U32(ctx, 31, 0x1F244Cu);
    ctx->pc = 0x1F2448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2444u;
    // 0x1f2448: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2470u;
    { ctx->pc = 0x1c2470; return; }
    ctx->pc = 0x1F244Cu;
label_1f244c:
    // 0x1f244c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f244cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f2450:
    // 0x1f2450: 0x26640450  addiu       $a0, $s3, 0x450
    ctx->pc = 0x1f2450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1104));
label_1f2454:
    // 0x1f2454: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1f2454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1f2458:
    // 0x1f2458: 0x24060094  addiu       $a2, $zero, 0x94
    ctx->pc = 0x1f2458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
label_1f245c:
    // 0x1f245c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1f245cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1f2460:
    // 0x1f2460: 0x24070148  addiu       $a3, $zero, 0x148
    ctx->pc = 0x1f2460u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 328));
label_1f2464:
    // 0x1f2464: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f2464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f2468:
    // 0x1f2468: 0x3408fdff  ori         $t0, $zero, 0xFDFF
    ctx->pc = 0x1f2468u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65023);
label_1f246c:
    // 0x1f246c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1f246cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1f2470:
    // 0x1f2470: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f2470u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2474:
    // 0x1f2474: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f2474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f2478:
    // 0x1f2478: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1f2478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1f247c:
    // 0x1f247c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1f247cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1f2480:
    // 0x1f2480: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f2480u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2484:
    // 0x1f2484: 0xc05de30  jal         func_1778C0
label_1f2488:
    if (ctx->pc == 0x1F2488u) {
        ctx->pc = 0x1F2488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2484u;
        // 0x1f2488: 0x240b0040  addiu       $t3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F248Cu;
        goto label_1f248c;
    }
    ctx->pc = 0x1F2484u;
    SET_GPR_U32(ctx, 31, 0x1F248Cu);
    ctx->pc = 0x1F2488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2484u;
    // 0x1f2488: 0x240b0040  addiu       $t3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1F2484u, 0x1F248Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F248Cu;
label_1f248c:
    // 0x1f248c: 0xc070834  jal         func_1C20D0
label_1f2490:
    if (ctx->pc == 0x1F2490u) {
        ctx->pc = 0x1F2490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F248Cu;
        // 0x1f2490: 0x24040023  addiu       $a0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2494u;
        goto label_1f2494;
    }
    ctx->pc = 0x1F248Cu;
    SET_GPR_U32(ctx, 31, 0x1F2494u);
    ctx->pc = 0x1F2490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F248Cu;
    // 0x1f2490: 0x24040023  addiu       $a0, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1F2494u;
label_1f2494:
    // 0x1f2494: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f2494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f2498:
    // 0x1f2498: 0x266404f0  addiu       $a0, $s3, 0x4F0
    ctx->pc = 0x1f2498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1264));
label_1f249c:
    // 0x1f249c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1f249cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f24a0:
    // 0x1f24a0: 0x240600d4  addiu       $a2, $zero, 0xD4
    ctx->pc = 0x1f24a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
label_1f24a4:
    // 0x1f24a4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1f24a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1f24a8:
    // 0x1f24a8: 0x24070178  addiu       $a3, $zero, 0x178
    ctx->pc = 0x1f24a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 376));
label_1f24ac:
    // 0x1f24ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f24acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f24b0:
    // 0x1f24b0: 0x3408fdff  ori         $t0, $zero, 0xFDFF
    ctx->pc = 0x1f24b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65023);
label_1f24b4:
    // 0x1f24b4: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1f24b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1f24b8:
    // 0x1f24b8: 0x240901d8  addiu       $t1, $zero, 0x1D8
    ctx->pc = 0x1f24b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 472));
label_1f24bc:
    // 0x1f24bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f24bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f24c0:
    // 0x1f24c0: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1f24c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1f24c4:
    // 0x1f24c4: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1f24c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1f24c8:
    // 0x1f24c8: 0x240a00b0  addiu       $t2, $zero, 0xB0
    ctx->pc = 0x1f24c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_1f24cc:
    // 0x1f24cc: 0xc05de30  jal         func_1778C0
label_1f24d0:
    if (ctx->pc == 0x1F24D0u) {
        ctx->pc = 0x1F24D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F24CCu;
        // 0x1f24d0: 0x240b0036  addiu       $t3, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F24D4u;
        goto label_1f24d4;
    }
    ctx->pc = 0x1F24CCu;
    SET_GPR_U32(ctx, 31, 0x1F24D4u);
    ctx->pc = 0x1F24D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F24CCu;
    // 0x1f24d0: 0x240b0036  addiu       $t3, $zero, 0x36 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1F24CCu, 0x1F24D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F24D4u;
label_1f24d4:
    // 0x1f24d4: 0xc070834  jal         func_1C20D0
label_1f24d8:
    if (ctx->pc == 0x1F24D8u) {
        ctx->pc = 0x1F24D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F24D4u;
        // 0x1f24d8: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F24DCu;
        goto label_1f24dc;
    }
    ctx->pc = 0x1F24D4u;
    SET_GPR_U32(ctx, 31, 0x1F24DCu);
    ctx->pc = 0x1F24D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F24D4u;
    // 0x1f24d8: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1F24DCu;
label_1f24dc:
    // 0x1f24dc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1f24dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f24e0:
    // 0x1f24e0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f24e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f24e4:
    // 0x1f24e4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1f24e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f24e8:
    // 0x1f24e8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1f24e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f24ec:
    // 0x1f24ec: 0x0  nop
    ctx->pc = 0x1f24ecu;
    // NOP
label_1f24f0:
    // 0x1f24f0: 0x240b0008  addiu       $t3, $zero, 0x8
    ctx->pc = 0x1f24f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1f24f4:
    // 0x1f24f4: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x1f24f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
label_1f24f8:
    // 0x1f24f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f24f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f24fc:
    // 0x1f24fc: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1f24fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1f2500:
    // 0x1f2500: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f2500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f2504:
    // 0x1f2504: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1f2504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1f2508:
    // 0x1f2508: 0x2751021  addu        $v0, $s3, $s5
    ctx->pc = 0x1f2508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
label_1f250c:
    // 0x1f250c: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x1f250cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_1f2510:
    // 0x1f2510: 0x24440590  addiu       $a0, $v0, 0x590
    ctx->pc = 0x1f2510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1424));
label_1f2514:
    // 0x1f2514: 0x2686010a  addiu       $a2, $s4, 0x10A
    ctx->pc = 0x1f2514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 266));
label_1f2518:
    // 0x1f2518: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1f2518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f251c:
    // 0x1f251c: 0x2407017c  addiu       $a3, $zero, 0x17C
    ctx->pc = 0x1f251cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 380));
label_1f2520:
    // 0x1f2520: 0x3408fdff  ori         $t0, $zero, 0xFDFF
    ctx->pc = 0x1f2520u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65023);
label_1f2524:
    // 0x1f2524: 0x24090160  addiu       $t1, $zero, 0x160
    ctx->pc = 0x1f2524u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
label_1f2528:
    // 0x1f2528: 0xc05de30  jal         func_1778C0
label_1f252c:
    if (ctx->pc == 0x1F252Cu) {
        ctx->pc = 0x1F252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2528u;
        // 0x1f252c: 0x240a00a8  addiu       $t2, $zero, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2530u;
        goto label_1f2530;
    }
    ctx->pc = 0x1F2528u;
    SET_GPR_U32(ctx, 31, 0x1F2530u);
    ctx->pc = 0x1F252Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2528u;
    // 0x1f252c: 0x240a00a8  addiu       $t2, $zero, 0xA8 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1F2528u, 0x1F2530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2530u;
label_1f2530:
    // 0x1f2530: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1f2530u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1f2534:
    // 0x1f2534: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x1f2534u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_1f2538:
    // 0x1f2538: 0x2a420008  slti        $v0, $s2, 0x8
    ctx->pc = 0x1f2538u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
label_1f253c:
    // 0x1f253c: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_1f2540:
    if (ctx->pc == 0x1F2540u) {
        ctx->pc = 0x1F2540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F253Cu;
        // 0x1f2540: 0x26b500a0  addiu       $s5, $s5, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2544u;
        goto label_1f2544;
    }
    ctx->pc = 0x1F253Cu;
    {
        const bool branch_taken_0x1f253c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F253Cu;
        // 0x1f2540: 0x26b500a0  addiu       $s5, $s5, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f253c) {
            ctx->pc = 0x1F24ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f24ec;
        }
    }
    ctx->pc = 0x1F2544u;
label_1f2544:
    // 0x1f2544: 0xc070834  jal         func_1C20D0
label_1f2548:
    if (ctx->pc == 0x1F2548u) {
        ctx->pc = 0x1F2548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2544u;
        // 0x1f2548: 0x24040023  addiu       $a0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F254Cu;
        goto label_1f254c;
    }
    ctx->pc = 0x1F2544u;
    SET_GPR_U32(ctx, 31, 0x1F254Cu);
    ctx->pc = 0x1F2548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2544u;
    // 0x1f2548: 0x24040023  addiu       $a0, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1F254Cu;
label_1f254c:
    // 0x1f254c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f254cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f2550:
    // 0x1f2550: 0x26640a90  addiu       $a0, $s3, 0xA90
    ctx->pc = 0x1f2550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2704));
label_1f2554:
    // 0x1f2554: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1f2554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f2558:
    // 0x1f2558: 0x240600d4  addiu       $a2, $zero, 0xD4
    ctx->pc = 0x1f2558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
label_1f255c:
    // 0x1f255c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1f255cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1f2560:
    // 0x1f2560: 0x24070188  addiu       $a3, $zero, 0x188
    ctx->pc = 0x1f2560u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 392));
label_1f2564:
    // 0x1f2564: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f2564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f2568:
    // 0x1f2568: 0x3408fdff  ori         $t0, $zero, 0xFDFF
    ctx->pc = 0x1f2568u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65023);
label_1f256c:
    // 0x1f256c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1f256cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1f2570:
    // 0x1f2570: 0x240901d8  addiu       $t1, $zero, 0x1D8
    ctx->pc = 0x1f2570u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 472));
label_1f2574:
    // 0x1f2574: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f2574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f2578:
    // 0x1f2578: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1f2578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1f257c:
    // 0x1f257c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1f257cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1f2580:
    // 0x1f2580: 0x240a00c0  addiu       $t2, $zero, 0xC0
    ctx->pc = 0x1f2580u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_1f2584:
    // 0x1f2584: 0xc05de30  jal         func_1778C0
label_1f2588:
    if (ctx->pc == 0x1F2588u) {
        ctx->pc = 0x1F2588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2584u;
        // 0x1f2588: 0x240b0036  addiu       $t3, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F258Cu;
        goto label_1f258c;
    }
    ctx->pc = 0x1F2584u;
    SET_GPR_U32(ctx, 31, 0x1F258Cu);
    ctx->pc = 0x1F2588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2584u;
    // 0x1f2588: 0x240b0036  addiu       $t3, $zero, 0x36 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1F2584u, 0x1F258Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F258Cu;
label_1f258c:
    // 0x1f258c: 0xc070834  jal         func_1C20D0
label_1f2590:
    if (ctx->pc == 0x1F2590u) {
        ctx->pc = 0x1F2590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F258Cu;
        // 0x1f2590: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2594u;
        goto label_1f2594;
    }
    ctx->pc = 0x1F258Cu;
    SET_GPR_U32(ctx, 31, 0x1F2594u);
    ctx->pc = 0x1F2590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F258Cu;
    // 0x1f2590: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1F2594u;
label_1f2594:
    // 0x1f2594: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f2594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f2598:
    // 0x1f2598: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x1f2598u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1f259c:
    // 0x1f259c: 0x240200b0  addiu       $v0, $zero, 0xB0
    ctx->pc = 0x1f259cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_1f25a0:
    // 0x1f25a0: 0x26640b30  addiu       $a0, $s3, 0xB30
    ctx->pc = 0x1f25a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2864));
label_1f25a4:
    // 0x1f25a4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1f25a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1f25a8:
    // 0x1f25a8: 0x2406010a  addiu       $a2, $zero, 0x10A
    ctx->pc = 0x1f25a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 266));
label_1f25ac:
    // 0x1f25ac: 0xffaa0008  sd          $t2, 0x8($sp)
    ctx->pc = 0x1f25acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 10));
label_1f25b0:
    // 0x1f25b0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1f25b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f25b4:
    // 0x1f25b4: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1f25b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_1f25b8:
    // 0x1f25b8: 0x2407018c  addiu       $a3, $zero, 0x18C
    ctx->pc = 0x1f25b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 396));
label_1f25bc:
    // 0x1f25bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f25bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f25c0:
    // 0x1f25c0: 0x3408fdff  ori         $t0, $zero, 0xFDFF
    ctx->pc = 0x1f25c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65023);
label_1f25c4:
    // 0x1f25c4: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1f25c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1f25c8:
    // 0x1f25c8: 0x24090040  addiu       $t1, $zero, 0x40
    ctx->pc = 0x1f25c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1f25cc:
    // 0x1f25cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f25ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f25d0:
    // 0x1f25d0: 0xffa00020  sd          $zero, 0x20($sp)
    ctx->pc = 0x1f25d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 0));
label_1f25d4:
    // 0x1f25d4: 0xffa20028  sd          $v0, 0x28($sp)
    ctx->pc = 0x1f25d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
label_1f25d8:
    // 0x1f25d8: 0xc05dd88  jal         func_177620
label_1f25dc:
    if (ctx->pc == 0x1F25DCu) {
        ctx->pc = 0x1F25DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F25D8u;
        // 0x1f25dc: 0x240b01a8  addiu       $t3, $zero, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F25E0u;
        goto label_1f25e0;
    }
    ctx->pc = 0x1F25D8u;
    SET_GPR_U32(ctx, 31, 0x1F25E0u);
    ctx->pc = 0x1F25DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F25D8u;
    // 0x1f25dc: 0x240b01a8  addiu       $t3, $zero, 0x1A8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177620u, 0x1F25D8u, 0x1F25E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F25E0u;
label_1f25e0:
    // 0x1f25e0: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1f25e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1f25e4:
    // 0x1f25e4: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x1f25e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1f25e8:
    // 0x1f25e8: 0xa2620ba0  sb          $v0, 0xBA0($s3)
    ctx->pc = 0x1f25e8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2976), (uint8_t)GPR_U32(ctx, 2));
label_1f25ec:
    // 0x1f25ec: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x1f25ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_1f25f0:
    // 0x1f25f0: 0xa2630ba1  sb          $v1, 0xBA1($s3)
    ctx->pc = 0x1f25f0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2977), (uint8_t)GPR_U32(ctx, 3));
label_1f25f4:
    // 0x1f25f4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1f25f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1f25f8:
    // 0x1f25f8: 0xa2620ba2  sb          $v0, 0xBA2($s3)
    ctx->pc = 0x1f25f8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2978), (uint8_t)GPR_U32(ctx, 2));
label_1f25fc:
    // 0x1f25fc: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x1f25fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1f2600:
    // 0x1f2600: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f2600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1f2604:
    // 0x1f2604: 0xa2630ba3  sb          $v1, 0xBA3($s3)
    ctx->pc = 0x1f2604u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2979), (uint8_t)GPR_U32(ctx, 3));
label_1f2608:
    // 0x1f2608: 0xc070834  jal         func_1C20D0
label_1f260c:
    if (ctx->pc == 0x1F260Cu) {
        ctx->pc = 0x1F260Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2608u;
        // 0x1f260c: 0xae620ba4  sw          $v0, 0xBA4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 2980), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2610u;
        goto label_1f2610;
    }
    ctx->pc = 0x1F2608u;
    SET_GPR_U32(ctx, 31, 0x1F2610u);
    ctx->pc = 0x1F260Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2608u;
    // 0x1f260c: 0xae620ba4  sw          $v0, 0xBA4($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 2980), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1F2610u;
label_1f2610:
    // 0x1f2610: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f2610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f2614:
    // 0x1f2614: 0x26640bd0  addiu       $a0, $s3, 0xBD0
    ctx->pc = 0x1f2614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 3024));
label_1f2618:
    // 0x1f2618: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1f2618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f261c:
    // 0x1f261c: 0x24060152  addiu       $a2, $zero, 0x152
    ctx->pc = 0x1f261cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 338));
label_1f2620:
    // 0x1f2620: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1f2620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1f2624:
    // 0x1f2624: 0x2407014c  addiu       $a3, $zero, 0x14C
    ctx->pc = 0x1f2624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 332));
label_1f2628:
    // 0x1f2628: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f2628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f262c:
    // 0x1f262c: 0x3408fdff  ori         $t0, $zero, 0xFDFF
    ctx->pc = 0x1f262cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65023);
label_1f2630:
    // 0x1f2630: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1f2630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1f2634:
    // 0x1f2634: 0x24090238  addiu       $t1, $zero, 0x238
    ctx->pc = 0x1f2634u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 568));
label_1f2638:
    // 0x1f2638: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f2638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f263c:
    // 0x1f263c: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1f263cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1f2640:
    // 0x1f2640: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1f2640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1f2644:
    // 0x1f2644: 0x240a00b0  addiu       $t2, $zero, 0xB0
    ctx->pc = 0x1f2644u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_1f2648:
    // 0x1f2648: 0xc05de30  jal         func_1778C0
label_1f264c:
    if (ctx->pc == 0x1F264Cu) {
        ctx->pc = 0x1F264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2648u;
        // 0x1f264c: 0x240b0040  addiu       $t3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2650u;
        goto label_1f2650;
    }
    ctx->pc = 0x1F2648u;
    SET_GPR_U32(ctx, 31, 0x1F2650u);
    ctx->pc = 0x1F264Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2648u;
    // 0x1f264c: 0x240b0040  addiu       $t3, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1F2648u, 0x1F2650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2650u;
label_1f2650:
    // 0x1f2650: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1f2650u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2654:
    // 0x1f2654: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f2654u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2658:
    // 0x1f2658: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x1f2658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_1f265c:
    // 0x1f265c: 0x24430c70  addiu       $v1, $v0, 0xC70
    ctx->pc = 0x1f265cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 3184));
label_1f2660:
    // 0x1f2660: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f2660u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f2664:
    // 0x1f2664: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f2664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f2668:
    // 0x1f2668: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x1f2668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_1f266c:
    // 0x1f266c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1f266cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f2670:
    // 0x1f2670: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1f2670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1f2674:
    // 0x1f2674: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f2674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2678:
    // 0x1f2678: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1f2678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1f267c:
    // 0x1f267c: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x1f267cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1f2680:
    // 0x1f2680: 0x240801c0  addiu       $t0, $zero, 0x1C0
    ctx->pc = 0x1f2680u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1f2684:
    // 0x1f2684: 0x3409fdff  ori         $t1, $zero, 0xFDFF
    ctx->pc = 0x1f2684u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65023);
label_1f2688:
    // 0x1f2688: 0xc054c60  jal         func_153180
label_1f268c:
    if (ctx->pc == 0x1F268Cu) {
        ctx->pc = 0x1F268Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2688u;
        // 0x1f268c: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2690u;
        goto label_1f2690;
    }
    ctx->pc = 0x1F2688u;
    SET_GPR_U32(ctx, 31, 0x1F2690u);
    ctx->pc = 0x1F268Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2688u;
    // 0x1f268c: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153180u, 0x1F2688u, 0x1F2690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2690u;
label_1f2690:
    // 0x1f2690: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1f2690u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1f2694:
    // 0x1f2694: 0x2a830006  slti        $v1, $s4, 0x6
    ctx->pc = 0x1f2694u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)6) ? 1 : 0);
label_1f2698:
    // 0x1f2698: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
label_1f269c:
    if (ctx->pc == 0x1F269Cu) {
        ctx->pc = 0x1F269Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2698u;
        // 0x1f269c: 0x265200d0  addiu       $s2, $s2, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F26A0u;
        goto label_1f26a0;
    }
    ctx->pc = 0x1F2698u;
    {
        const bool branch_taken_0x1f2698 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F269Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2698u;
        // 0x1f269c: 0x265200d0  addiu       $s2, $s2, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2698) {
            ctx->pc = 0x1F2658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2658;
        }
    }
    ctx->pc = 0x1F26A0u;
label_1f26a0:
    // 0x1f26a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f26a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1f26a4:
    // 0x1f26a4: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x1f26a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_1f26a8:
    // 0x1f26a8: 0x1460ff43  bnez        $v1, . + 4 + (-0xBD << 2)
label_1f26ac:
    if (ctx->pc == 0x1F26ACu) {
        ctx->pc = 0x1F26ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F26A8u;
        // 0x1f26ac: 0x26101150  addiu       $s0, $s0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F26B0u;
        goto label_1f26b0;
    }
    ctx->pc = 0x1F26A8u;
    {
        const bool branch_taken_0x1f26a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F26ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F26A8u;
        // 0x1f26ac: 0x26101150  addiu       $s0, $s0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f26a8) {
            ctx->pc = 0x1F23B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f23b8;
        }
    }
    ctx->pc = 0x1F26B0u;
label_1f26b0:
    // 0x1f26b0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1f26b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1f26b4:
    // 0x1f26b4: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x1f26b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1f26b8:
    // 0x1f26b8: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1f26b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1f26bc:
    // 0x1f26bc: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1f26bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1f26c0:
    // 0x1f26c0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1f26c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f26c4:
    // 0x1f26c4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1f26c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f26c8:
    // 0x1f26c8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1f26c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f26cc:
    // 0x1f26cc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f26ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f26d0:
    // 0x1f26d0: 0x3e00008  jr          $ra
label_1f26d4:
    if (ctx->pc == 0x1F26D4u) {
        ctx->pc = 0x1F26D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F26D0u;
        // 0x1f26d4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F26D8u;
        goto label_1f26d8;
    }
    ctx->pc = 0x1F26D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F26D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F26D0u;
        // 0x1f26d4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F26D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F26D8u;
label_1f26d8:
    // 0x1f26d8: 0x0  nop
    ctx->pc = 0x1f26d8u;
    // NOP
label_1f26dc:
    // 0x1f26dc: 0x0  nop
    ctx->pc = 0x1f26dcu;
    // NOP
label_1f26e0:
    // 0x1f26e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1f26e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1f26e4:
    // 0x1f26e4: 0x53880  sll         $a3, $a1, 2
    ctx->pc = 0x1f26e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1f26e8:
    // 0x1f26e8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1f26e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1f26ec:
    // 0x1f26ec: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1f26ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1f26f0:
    // 0x1f26f0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f26f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1f26f4:
    // 0x1f26f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f26f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f26f8:
    // 0x1f26f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f26f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1f26fc:
    // 0x1f26fc: 0x24a57f40  addiu       $a1, $a1, 0x7F40
    ctx->pc = 0x1f26fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32576));
label_1f2700:
    // 0x1f2700: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f2700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f2704:
    // 0x1f2704: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f2704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f2708:
    // 0x1f2708: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f2708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f270c:
    // 0x1f270c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f270cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f2710:
    // 0x1f2710: 0xaf838fa0  sw          $v1, -0x7060($gp)
    ctx->pc = 0x1f2710u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938528), GPR_U32(ctx, 3));
label_1f2714:
    // 0x1f2714: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1f2714u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1f2718:
    // 0x1f2718: 0xaf848f9c  sw          $a0, -0x7064($gp)
    ctx->pc = 0x1f2718u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938524), GPR_U32(ctx, 4));
label_1f271c:
    // 0x1f271c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f271cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f2720:
    // 0x1f2720: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x1f2720u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1f2724:
    // 0x1f2724: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x1f2724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1f2728:
    // 0x1f2728: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1f2728u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1f272c:
    // 0x1f272c: 0x24c60000  addiu       $a2, $a2, 0x0
    ctx->pc = 0x1f272cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 0));
label_1f2730:
    // 0x1f2730: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1f2730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f2734:
    // 0x1f2734: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1f2734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1f2738:
    // 0x1f2738: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1f2738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1f273c:
    // 0x1f273c: 0x8cd00000  lw          $s0, 0x0($a2)
    ctx->pc = 0x1f273cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f2740:
    // 0x1f2740: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1f2740u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1f2744:
    // 0x1f2744: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1f2744u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_1f2748:
    // 0x1f2748: 0x24a51300  addiu       $a1, $a1, 0x1300
    ctx->pc = 0x1f2748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4864));
label_1f274c:
    // 0x1f274c: 0x33200  sll         $a2, $v1, 8
    ctx->pc = 0x1f274cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_1f2750:
    // 0x1f2750: 0x41a00  sll         $v1, $a0, 8
    ctx->pc = 0x1f2750u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_1f2754:
    // 0x1f2754: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1f2754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1f2758:
    // 0x1f2758: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x1f2758u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f275c:
    // 0x1f275c: 0x24a70000  addiu       $a3, $a1, 0x0
    ctx->pc = 0x1f275cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
label_1f2760:
    // 0x1f2760: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1f2760u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1f2764:
    // 0x1f2764: 0x3c060025  lui         $a2, 0x25
    ctx->pc = 0x1f2764u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37 << 16));
label_1f2768:
    // 0x1f2768: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1f2768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1f276c:
    // 0x1f276c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1f276cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_1f2770:
    // 0x1f2770: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x1f2770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
label_1f2774:
    // 0x1f2774: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1f2774u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1f2778:
    // 0x1f2778: 0x24632570  addiu       $v1, $v1, 0x2570
    ctx->pc = 0x1f2778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9584));
label_1f277c:
    // 0x1f277c: 0x24c63b80  addiu       $a2, $a2, 0x3B80
    ctx->pc = 0x1f277cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15232));
label_1f2780:
    // 0x1f2780: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x1f2780u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f2784:
    // 0x1f2784: 0x24a53b82  addiu       $a1, $a1, 0x3B82
    ctx->pc = 0x1f2784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15234));
label_1f2788:
    // 0x1f2788: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1f2788u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_1f278c:
    // 0x1f278c: 0x3c0451eb  lui         $a0, 0x51EB
    ctx->pc = 0x1f278cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20971 << 16));
label_1f2790:
    // 0x1f2790: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1f2790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1f2794:
    // 0x1f2794: 0x3484851f  ori         $a0, $a0, 0x851F
    ctx->pc = 0x1f2794u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34079);
label_1f2798:
    // 0x1f2798: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1f2798u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_1f279c:
    // 0x1f279c: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1f279cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_1f27a0:
    // 0x1f27a0: 0x90710221  lbu         $s1, 0x221($v1)
    ctx->pc = 0x1f27a0u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 545)));
label_1f27a4:
    // 0x1f27a4: 0x1138c0  sll         $a3, $s1, 3
    ctx->pc = 0x1f27a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_1f27a8:
    // 0x1f27a8: 0xf13821  addu        $a3, $a3, $s1
    ctx->pc = 0x1f27a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
label_1f27ac:
    // 0x1f27ac: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x1f27acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    ctx->pc = 0x1f27b0u;
    return;
}

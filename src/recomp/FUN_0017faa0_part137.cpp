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


void FUN_0017faa0_part137(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1c2120u: goto label_1c2120;
        case 0x1c2124u: goto label_1c2124;
        case 0x1c2128u: goto label_1c2128;
        case 0x1c212cu: goto label_1c212c;
        case 0x1c2130u: goto label_1c2130;
        case 0x1c2134u: goto label_1c2134;
        case 0x1c2138u: goto label_1c2138;
        case 0x1c213cu: goto label_1c213c;
        case 0x1c2140u: goto label_1c2140;
        case 0x1c2144u: goto label_1c2144;
        case 0x1c2148u: goto label_1c2148;
        case 0x1c214cu: goto label_1c214c;
        case 0x1c2150u: goto label_1c2150;
        case 0x1c2154u: goto label_1c2154;
        case 0x1c2158u: goto label_1c2158;
        case 0x1c215cu: goto label_1c215c;
        case 0x1c2160u: goto label_1c2160;
        case 0x1c2164u: goto label_1c2164;
        case 0x1c2168u: goto label_1c2168;
        case 0x1c216cu: goto label_1c216c;
        case 0x1c2170u: goto label_1c2170;
        case 0x1c2174u: goto label_1c2174;
        case 0x1c2178u: goto label_1c2178;
        case 0x1c217cu: goto label_1c217c;
        case 0x1c2180u: goto label_1c2180;
        case 0x1c2184u: goto label_1c2184;
        case 0x1c2188u: goto label_1c2188;
        case 0x1c218cu: goto label_1c218c;
        case 0x1c2190u: goto label_1c2190;
        case 0x1c2194u: goto label_1c2194;
        case 0x1c2198u: goto label_1c2198;
        case 0x1c219cu: goto label_1c219c;
        case 0x1c21a0u: goto label_1c21a0;
        case 0x1c21a4u: goto label_1c21a4;
        case 0x1c21a8u: goto label_1c21a8;
        case 0x1c21acu: goto label_1c21ac;
        case 0x1c21b0u: goto label_1c21b0;
        case 0x1c21b4u: goto label_1c21b4;
        case 0x1c21b8u: goto label_1c21b8;
        case 0x1c21bcu: goto label_1c21bc;
        case 0x1c21c0u: goto label_1c21c0;
        case 0x1c21c4u: goto label_1c21c4;
        case 0x1c21c8u: goto label_1c21c8;
        case 0x1c21ccu: goto label_1c21cc;
        case 0x1c21d0u: goto label_1c21d0;
        case 0x1c21d4u: goto label_1c21d4;
        case 0x1c21d8u: goto label_1c21d8;
        case 0x1c21dcu: goto label_1c21dc;
        case 0x1c21e0u: goto label_1c21e0;
        case 0x1c21e4u: goto label_1c21e4;
        case 0x1c21e8u: goto label_1c21e8;
        case 0x1c21ecu: goto label_1c21ec;
        case 0x1c21f0u: goto label_1c21f0;
        case 0x1c21f4u: goto label_1c21f4;
        case 0x1c21f8u: goto label_1c21f8;
        case 0x1c21fcu: goto label_1c21fc;
        case 0x1c2200u: goto label_1c2200;
        case 0x1c2204u: goto label_1c2204;
        case 0x1c2208u: goto label_1c2208;
        case 0x1c220cu: goto label_1c220c;
        case 0x1c2210u: goto label_1c2210;
        case 0x1c2214u: goto label_1c2214;
        case 0x1c2218u: goto label_1c2218;
        case 0x1c221cu: goto label_1c221c;
        case 0x1c2220u: goto label_1c2220;
        case 0x1c2224u: goto label_1c2224;
        case 0x1c2228u: goto label_1c2228;
        case 0x1c222cu: goto label_1c222c;
        case 0x1c2230u: goto label_1c2230;
        case 0x1c2234u: goto label_1c2234;
        case 0x1c2238u: goto label_1c2238;
        case 0x1c223cu: goto label_1c223c;
        case 0x1c2240u: goto label_1c2240;
        case 0x1c2244u: goto label_1c2244;
        case 0x1c2248u: goto label_1c2248;
        case 0x1c224cu: goto label_1c224c;
        case 0x1c2250u: goto label_1c2250;
        case 0x1c2254u: goto label_1c2254;
        case 0x1c2258u: goto label_1c2258;
        case 0x1c225cu: goto label_1c225c;
        case 0x1c2260u: goto label_1c2260;
        case 0x1c2264u: goto label_1c2264;
        case 0x1c2268u: goto label_1c2268;
        case 0x1c226cu: goto label_1c226c;
        case 0x1c2270u: goto label_1c2270;
        case 0x1c2274u: goto label_1c2274;
        case 0x1c2278u: goto label_1c2278;
        case 0x1c227cu: goto label_1c227c;
        case 0x1c2280u: goto label_1c2280;
        case 0x1c2284u: goto label_1c2284;
        case 0x1c2288u: goto label_1c2288;
        case 0x1c228cu: goto label_1c228c;
        case 0x1c2290u: goto label_1c2290;
        case 0x1c2294u: goto label_1c2294;
        case 0x1c2298u: goto label_1c2298;
        case 0x1c229cu: goto label_1c229c;
        case 0x1c22a0u: goto label_1c22a0;
        case 0x1c22a4u: goto label_1c22a4;
        case 0x1c22a8u: goto label_1c22a8;
        case 0x1c22acu: goto label_1c22ac;
        case 0x1c22b0u: goto label_1c22b0;
        case 0x1c22b4u: goto label_1c22b4;
        case 0x1c22b8u: goto label_1c22b8;
        case 0x1c22bcu: goto label_1c22bc;
        case 0x1c22c0u: goto label_1c22c0;
        case 0x1c22c4u: goto label_1c22c4;
        case 0x1c22c8u: goto label_1c22c8;
        case 0x1c22ccu: goto label_1c22cc;
        case 0x1c22d0u: goto label_1c22d0;
        case 0x1c22d4u: goto label_1c22d4;
        case 0x1c22d8u: goto label_1c22d8;
        case 0x1c22dcu: goto label_1c22dc;
        case 0x1c22e0u: goto label_1c22e0;
        case 0x1c22e4u: goto label_1c22e4;
        case 0x1c22e8u: goto label_1c22e8;
        case 0x1c22ecu: goto label_1c22ec;
        case 0x1c22f0u: goto label_1c22f0;
        case 0x1c22f4u: goto label_1c22f4;
        case 0x1c22f8u: goto label_1c22f8;
        case 0x1c22fcu: goto label_1c22fc;
        case 0x1c2300u: goto label_1c2300;
        case 0x1c2304u: goto label_1c2304;
        case 0x1c2308u: goto label_1c2308;
        case 0x1c230cu: goto label_1c230c;
        case 0x1c2310u: goto label_1c2310;
        case 0x1c2314u: goto label_1c2314;
        case 0x1c2318u: goto label_1c2318;
        case 0x1c231cu: goto label_1c231c;
        case 0x1c2320u: goto label_1c2320;
        case 0x1c2324u: goto label_1c2324;
        case 0x1c2328u: goto label_1c2328;
        case 0x1c232cu: goto label_1c232c;
        case 0x1c2330u: goto label_1c2330;
        case 0x1c2334u: goto label_1c2334;
        case 0x1c2338u: goto label_1c2338;
        case 0x1c233cu: goto label_1c233c;
        case 0x1c2340u: goto label_1c2340;
        case 0x1c2344u: goto label_1c2344;
        case 0x1c2348u: goto label_1c2348;
        case 0x1c234cu: goto label_1c234c;
        case 0x1c2350u: goto label_1c2350;
        case 0x1c2354u: goto label_1c2354;
        case 0x1c2358u: goto label_1c2358;
        case 0x1c235cu: goto label_1c235c;
        case 0x1c2360u: goto label_1c2360;
        case 0x1c2364u: goto label_1c2364;
        case 0x1c2368u: goto label_1c2368;
        case 0x1c236cu: goto label_1c236c;
        case 0x1c2370u: goto label_1c2370;
        case 0x1c2374u: goto label_1c2374;
        case 0x1c2378u: goto label_1c2378;
        case 0x1c237cu: goto label_1c237c;
        case 0x1c2380u: goto label_1c2380;
        case 0x1c2384u: goto label_1c2384;
        case 0x1c2388u: goto label_1c2388;
        case 0x1c238cu: goto label_1c238c;
        case 0x1c2390u: goto label_1c2390;
        case 0x1c2394u: goto label_1c2394;
        case 0x1c2398u: goto label_1c2398;
        case 0x1c239cu: goto label_1c239c;
        case 0x1c23a0u: goto label_1c23a0;
        case 0x1c23a4u: goto label_1c23a4;
        case 0x1c23a8u: goto label_1c23a8;
        case 0x1c23acu: goto label_1c23ac;
        case 0x1c23b0u: goto label_1c23b0;
        case 0x1c23b4u: goto label_1c23b4;
        case 0x1c23b8u: goto label_1c23b8;
        case 0x1c23bcu: goto label_1c23bc;
        case 0x1c23c0u: goto label_1c23c0;
        case 0x1c23c4u: goto label_1c23c4;
        case 0x1c23c8u: goto label_1c23c8;
        case 0x1c23ccu: goto label_1c23cc;
        case 0x1c23d0u: goto label_1c23d0;
        case 0x1c23d4u: goto label_1c23d4;
        case 0x1c23d8u: goto label_1c23d8;
        case 0x1c23dcu: goto label_1c23dc;
        case 0x1c23e0u: goto label_1c23e0;
        case 0x1c23e4u: goto label_1c23e4;
        case 0x1c23e8u: goto label_1c23e8;
        case 0x1c23ecu: goto label_1c23ec;
        case 0x1c23f0u: goto label_1c23f0;
        case 0x1c23f4u: goto label_1c23f4;
        case 0x1c23f8u: goto label_1c23f8;
        case 0x1c23fcu: goto label_1c23fc;
        case 0x1c2400u: goto label_1c2400;
        case 0x1c2404u: goto label_1c2404;
        case 0x1c2408u: goto label_1c2408;
        case 0x1c240cu: goto label_1c240c;
        case 0x1c2410u: goto label_1c2410;
        case 0x1c2414u: goto label_1c2414;
        case 0x1c2418u: goto label_1c2418;
        case 0x1c241cu: goto label_1c241c;
        case 0x1c2420u: goto label_1c2420;
        case 0x1c2424u: goto label_1c2424;
        case 0x1c2428u: goto label_1c2428;
        case 0x1c242cu: goto label_1c242c;
        case 0x1c2430u: goto label_1c2430;
        case 0x1c2434u: goto label_1c2434;
        case 0x1c2438u: goto label_1c2438;
        case 0x1c243cu: goto label_1c243c;
        case 0x1c2440u: goto label_1c2440;
        case 0x1c2444u: goto label_1c2444;
        case 0x1c2448u: goto label_1c2448;
        case 0x1c244cu: goto label_1c244c;
        case 0x1c2450u: goto label_1c2450;
        case 0x1c2454u: goto label_1c2454;
        case 0x1c2458u: goto label_1c2458;
        case 0x1c245cu: goto label_1c245c;
        case 0x1c2460u: goto label_1c2460;
        case 0x1c2464u: goto label_1c2464;
        case 0x1c2468u: goto label_1c2468;
        case 0x1c246cu: goto label_1c246c;
        case 0x1c2470u: goto label_1c2470;
        case 0x1c2474u: goto label_1c2474;
        case 0x1c2478u: goto label_1c2478;
        case 0x1c247cu: goto label_1c247c;
        case 0x1c2480u: goto label_1c2480;
        case 0x1c2484u: goto label_1c2484;
        case 0x1c2488u: goto label_1c2488;
        case 0x1c248cu: goto label_1c248c;
        case 0x1c2490u: goto label_1c2490;
        case 0x1c2494u: goto label_1c2494;
        case 0x1c2498u: goto label_1c2498;
        case 0x1c249cu: goto label_1c249c;
        case 0x1c24a0u: goto label_1c24a0;
        case 0x1c24a4u: goto label_1c24a4;
        case 0x1c24a8u: goto label_1c24a8;
        case 0x1c24acu: goto label_1c24ac;
        case 0x1c24b0u: goto label_1c24b0;
        case 0x1c24b4u: goto label_1c24b4;
        case 0x1c24b8u: goto label_1c24b8;
        case 0x1c24bcu: goto label_1c24bc;
        case 0x1c24c0u: goto label_1c24c0;
        case 0x1c24c4u: goto label_1c24c4;
        case 0x1c24c8u: goto label_1c24c8;
        case 0x1c24ccu: goto label_1c24cc;
        case 0x1c24d0u: goto label_1c24d0;
        case 0x1c24d4u: goto label_1c24d4;
        case 0x1c24d8u: goto label_1c24d8;
        case 0x1c24dcu: goto label_1c24dc;
        case 0x1c24e0u: goto label_1c24e0;
        case 0x1c24e4u: goto label_1c24e4;
        case 0x1c24e8u: goto label_1c24e8;
        case 0x1c24ecu: goto label_1c24ec;
        case 0x1c24f0u: goto label_1c24f0;
        case 0x1c24f4u: goto label_1c24f4;
        case 0x1c24f8u: goto label_1c24f8;
        case 0x1c24fcu: goto label_1c24fc;
        case 0x1c2500u: goto label_1c2500;
        case 0x1c2504u: goto label_1c2504;
        case 0x1c2508u: goto label_1c2508;
        case 0x1c250cu: goto label_1c250c;
        case 0x1c2510u: goto label_1c2510;
        case 0x1c2514u: goto label_1c2514;
        case 0x1c2518u: goto label_1c2518;
        case 0x1c251cu: goto label_1c251c;
        case 0x1c2520u: goto label_1c2520;
        case 0x1c2524u: goto label_1c2524;
        case 0x1c2528u: goto label_1c2528;
        case 0x1c252cu: goto label_1c252c;
        case 0x1c2530u: goto label_1c2530;
        case 0x1c2534u: goto label_1c2534;
        case 0x1c2538u: goto label_1c2538;
        case 0x1c253cu: goto label_1c253c;
        case 0x1c2540u: goto label_1c2540;
        case 0x1c2544u: goto label_1c2544;
        case 0x1c2548u: goto label_1c2548;
        case 0x1c254cu: goto label_1c254c;
        case 0x1c2550u: goto label_1c2550;
        case 0x1c2554u: goto label_1c2554;
        case 0x1c2558u: goto label_1c2558;
        case 0x1c255cu: goto label_1c255c;
        case 0x1c2560u: goto label_1c2560;
        case 0x1c2564u: goto label_1c2564;
        case 0x1c2568u: goto label_1c2568;
        case 0x1c256cu: goto label_1c256c;
        case 0x1c2570u: goto label_1c2570;
        case 0x1c2574u: goto label_1c2574;
        case 0x1c2578u: goto label_1c2578;
        case 0x1c257cu: goto label_1c257c;
        case 0x1c2580u: goto label_1c2580;
        case 0x1c2584u: goto label_1c2584;
        case 0x1c2588u: goto label_1c2588;
        case 0x1c258cu: goto label_1c258c;
        case 0x1c2590u: goto label_1c2590;
        case 0x1c2594u: goto label_1c2594;
        case 0x1c2598u: goto label_1c2598;
        case 0x1c259cu: goto label_1c259c;
        case 0x1c25a0u: goto label_1c25a0;
        case 0x1c25a4u: goto label_1c25a4;
        case 0x1c25a8u: goto label_1c25a8;
        case 0x1c25acu: goto label_1c25ac;
        case 0x1c25b0u: goto label_1c25b0;
        case 0x1c25b4u: goto label_1c25b4;
        case 0x1c25b8u: goto label_1c25b8;
        case 0x1c25bcu: goto label_1c25bc;
        case 0x1c25c0u: goto label_1c25c0;
        case 0x1c25c4u: goto label_1c25c4;
        case 0x1c25c8u: goto label_1c25c8;
        case 0x1c25ccu: goto label_1c25cc;
        case 0x1c25d0u: goto label_1c25d0;
        case 0x1c25d4u: goto label_1c25d4;
        case 0x1c25d8u: goto label_1c25d8;
        case 0x1c25dcu: goto label_1c25dc;
        case 0x1c25e0u: goto label_1c25e0;
        case 0x1c25e4u: goto label_1c25e4;
        case 0x1c25e8u: goto label_1c25e8;
        case 0x1c25ecu: goto label_1c25ec;
        case 0x1c25f0u: goto label_1c25f0;
        case 0x1c25f4u: goto label_1c25f4;
        case 0x1c25f8u: goto label_1c25f8;
        case 0x1c25fcu: goto label_1c25fc;
        case 0x1c2600u: goto label_1c2600;
        case 0x1c2604u: goto label_1c2604;
        case 0x1c2608u: goto label_1c2608;
        case 0x1c260cu: goto label_1c260c;
        case 0x1c2610u: goto label_1c2610;
        case 0x1c2614u: goto label_1c2614;
        case 0x1c2618u: goto label_1c2618;
        case 0x1c261cu: goto label_1c261c;
        case 0x1c2620u: goto label_1c2620;
        case 0x1c2624u: goto label_1c2624;
        case 0x1c2628u: goto label_1c2628;
        case 0x1c262cu: goto label_1c262c;
        case 0x1c2630u: goto label_1c2630;
        case 0x1c2634u: goto label_1c2634;
        case 0x1c2638u: goto label_1c2638;
        case 0x1c263cu: goto label_1c263c;
        case 0x1c2640u: goto label_1c2640;
        case 0x1c2644u: goto label_1c2644;
        case 0x1c2648u: goto label_1c2648;
        case 0x1c264cu: goto label_1c264c;
        case 0x1c2650u: goto label_1c2650;
        case 0x1c2654u: goto label_1c2654;
        case 0x1c2658u: goto label_1c2658;
        case 0x1c265cu: goto label_1c265c;
        case 0x1c2660u: goto label_1c2660;
        case 0x1c2664u: goto label_1c2664;
        case 0x1c2668u: goto label_1c2668;
        case 0x1c266cu: goto label_1c266c;
        case 0x1c2670u: goto label_1c2670;
        case 0x1c2674u: goto label_1c2674;
        case 0x1c2678u: goto label_1c2678;
        case 0x1c267cu: goto label_1c267c;
        case 0x1c2680u: goto label_1c2680;
        case 0x1c2684u: goto label_1c2684;
        case 0x1c2688u: goto label_1c2688;
        case 0x1c268cu: goto label_1c268c;
        case 0x1c2690u: goto label_1c2690;
        case 0x1c2694u: goto label_1c2694;
        case 0x1c2698u: goto label_1c2698;
        case 0x1c269cu: goto label_1c269c;
        case 0x1c26a0u: goto label_1c26a0;
        case 0x1c26a4u: goto label_1c26a4;
        case 0x1c26a8u: goto label_1c26a8;
        case 0x1c26acu: goto label_1c26ac;
        case 0x1c26b0u: goto label_1c26b0;
        case 0x1c26b4u: goto label_1c26b4;
        case 0x1c26b8u: goto label_1c26b8;
        case 0x1c26bcu: goto label_1c26bc;
        case 0x1c26c0u: goto label_1c26c0;
        case 0x1c26c4u: goto label_1c26c4;
        case 0x1c26c8u: goto label_1c26c8;
        case 0x1c26ccu: goto label_1c26cc;
        case 0x1c26d0u: goto label_1c26d0;
        case 0x1c26d4u: goto label_1c26d4;
        case 0x1c26d8u: goto label_1c26d8;
        case 0x1c26dcu: goto label_1c26dc;
        case 0x1c26e0u: goto label_1c26e0;
        case 0x1c26e4u: goto label_1c26e4;
        case 0x1c26e8u: goto label_1c26e8;
        case 0x1c26ecu: goto label_1c26ec;
        case 0x1c26f0u: goto label_1c26f0;
        case 0x1c26f4u: goto label_1c26f4;
        case 0x1c26f8u: goto label_1c26f8;
        case 0x1c26fcu: goto label_1c26fc;
        case 0x1c2700u: goto label_1c2700;
        case 0x1c2704u: goto label_1c2704;
        case 0x1c2708u: goto label_1c2708;
        case 0x1c270cu: goto label_1c270c;
        case 0x1c2710u: goto label_1c2710;
        case 0x1c2714u: goto label_1c2714;
        case 0x1c2718u: goto label_1c2718;
        case 0x1c271cu: goto label_1c271c;
        case 0x1c2720u: goto label_1c2720;
        case 0x1c2724u: goto label_1c2724;
        case 0x1c2728u: goto label_1c2728;
        case 0x1c272cu: goto label_1c272c;
        case 0x1c2730u: goto label_1c2730;
        case 0x1c2734u: goto label_1c2734;
        case 0x1c2738u: goto label_1c2738;
        case 0x1c273cu: goto label_1c273c;
        case 0x1c2740u: goto label_1c2740;
        case 0x1c2744u: goto label_1c2744;
        case 0x1c2748u: goto label_1c2748;
        case 0x1c274cu: goto label_1c274c;
        case 0x1c2750u: goto label_1c2750;
        case 0x1c2754u: goto label_1c2754;
        case 0x1c2758u: goto label_1c2758;
        case 0x1c275cu: goto label_1c275c;
        case 0x1c2760u: goto label_1c2760;
        case 0x1c2764u: goto label_1c2764;
        case 0x1c2768u: goto label_1c2768;
        case 0x1c276cu: goto label_1c276c;
        case 0x1c2770u: goto label_1c2770;
        case 0x1c2774u: goto label_1c2774;
        case 0x1c2778u: goto label_1c2778;
        case 0x1c277cu: goto label_1c277c;
        case 0x1c2780u: goto label_1c2780;
        case 0x1c2784u: goto label_1c2784;
        case 0x1c2788u: goto label_1c2788;
        case 0x1c278cu: goto label_1c278c;
        case 0x1c2790u: goto label_1c2790;
        case 0x1c2794u: goto label_1c2794;
        case 0x1c2798u: goto label_1c2798;
        case 0x1c279cu: goto label_1c279c;
        case 0x1c27a0u: goto label_1c27a0;
        case 0x1c27a4u: goto label_1c27a4;
        case 0x1c27a8u: goto label_1c27a8;
        case 0x1c27acu: goto label_1c27ac;
        case 0x1c27b0u: goto label_1c27b0;
        case 0x1c27b4u: goto label_1c27b4;
        case 0x1c27b8u: goto label_1c27b8;
        case 0x1c27bcu: goto label_1c27bc;
        case 0x1c27c0u: goto label_1c27c0;
        case 0x1c27c4u: goto label_1c27c4;
        case 0x1c27c8u: goto label_1c27c8;
        case 0x1c27ccu: goto label_1c27cc;
        case 0x1c27d0u: goto label_1c27d0;
        case 0x1c27d4u: goto label_1c27d4;
        case 0x1c27d8u: goto label_1c27d8;
        case 0x1c27dcu: goto label_1c27dc;
        case 0x1c27e0u: goto label_1c27e0;
        case 0x1c27e4u: goto label_1c27e4;
        case 0x1c27e8u: goto label_1c27e8;
        case 0x1c27ecu: goto label_1c27ec;
        case 0x1c27f0u: goto label_1c27f0;
        case 0x1c27f4u: goto label_1c27f4;
        case 0x1c27f8u: goto label_1c27f8;
        case 0x1c27fcu: goto label_1c27fc;
        case 0x1c2800u: goto label_1c2800;
        case 0x1c2804u: goto label_1c2804;
        case 0x1c2808u: goto label_1c2808;
        case 0x1c280cu: goto label_1c280c;
        case 0x1c2810u: goto label_1c2810;
        case 0x1c2814u: goto label_1c2814;
        case 0x1c2818u: goto label_1c2818;
        case 0x1c281cu: goto label_1c281c;
        case 0x1c2820u: goto label_1c2820;
        case 0x1c2824u: goto label_1c2824;
        case 0x1c2828u: goto label_1c2828;
        case 0x1c282cu: goto label_1c282c;
        case 0x1c2830u: goto label_1c2830;
        case 0x1c2834u: goto label_1c2834;
        case 0x1c2838u: goto label_1c2838;
        case 0x1c283cu: goto label_1c283c;
        case 0x1c2840u: goto label_1c2840;
        case 0x1c2844u: goto label_1c2844;
        case 0x1c2848u: goto label_1c2848;
        case 0x1c284cu: goto label_1c284c;
        case 0x1c2850u: goto label_1c2850;
        case 0x1c2854u: goto label_1c2854;
        case 0x1c2858u: goto label_1c2858;
        case 0x1c285cu: goto label_1c285c;
        case 0x1c2860u: goto label_1c2860;
        case 0x1c2864u: goto label_1c2864;
        case 0x1c2868u: goto label_1c2868;
        case 0x1c286cu: goto label_1c286c;
        case 0x1c2870u: goto label_1c2870;
        case 0x1c2874u: goto label_1c2874;
        case 0x1c2878u: goto label_1c2878;
        case 0x1c287cu: goto label_1c287c;
        case 0x1c2880u: goto label_1c2880;
        case 0x1c2884u: goto label_1c2884;
        case 0x1c2888u: goto label_1c2888;
        case 0x1c288cu: goto label_1c288c;
        case 0x1c2890u: goto label_1c2890;
        case 0x1c2894u: goto label_1c2894;
        case 0x1c2898u: goto label_1c2898;
        case 0x1c289cu: goto label_1c289c;
        case 0x1c28a0u: goto label_1c28a0;
        case 0x1c28a4u: goto label_1c28a4;
        case 0x1c28a8u: goto label_1c28a8;
        case 0x1c28acu: goto label_1c28ac;
        case 0x1c28b0u: goto label_1c28b0;
        case 0x1c28b4u: goto label_1c28b4;
        case 0x1c28b8u: goto label_1c28b8;
        case 0x1c28bcu: goto label_1c28bc;
        case 0x1c28c0u: goto label_1c28c0;
        case 0x1c28c4u: goto label_1c28c4;
        case 0x1c28c8u: goto label_1c28c8;
        case 0x1c28ccu: goto label_1c28cc;
        case 0x1c28d0u: goto label_1c28d0;
        case 0x1c28d4u: goto label_1c28d4;
        case 0x1c28d8u: goto label_1c28d8;
        case 0x1c28dcu: goto label_1c28dc;
        case 0x1c28e0u: goto label_1c28e0;
        case 0x1c28e4u: goto label_1c28e4;
        case 0x1c28e8u: goto label_1c28e8;
        case 0x1c28ecu: goto label_1c28ec;
        default: return;
    }

label_1c2120:
    // 0x1c2120: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1c2120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_1c2124:
    // 0x1c2124: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x1c2124u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1c2128:
    // 0x1c2128: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1c2128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1c212c:
    // 0x1c212c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c212cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c2130:
    // 0x1c2130: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1c2130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1c2134:
    // 0x1c2134: 0x240500d0  addiu       $a1, $zero, 0xD0
    ctx->pc = 0x1c2134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1c2138:
    // 0x1c2138: 0xdf848970  ld          $a0, -0x7690($gp)
    ctx->pc = 0x1c2138u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294936944)));
label_1c213c:
    // 0x1c213c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1c213cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1c2140:
    // 0x1c2140: 0xafaa00dc  sw          $t2, 0xDC($sp)
    ctx->pc = 0x1c2140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 10));
label_1c2144:
    // 0x1c2144: 0xc06064c  jal         func_181930
label_1c2148:
    if (ctx->pc == 0x1C2148u) {
        ctx->pc = 0x1C2148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2144u;
        // 0x1c2148: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C214Cu;
        goto label_1c214c;
    }
    ctx->pc = 0x1C2144u;
    SET_GPR_U32(ctx, 31, 0x1C214Cu);
    ctx->pc = 0x1C2148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2144u;
    // 0x1c2148: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181930u;
    { ctx->pc = 0x181930; return; }
    ctx->pc = 0x1C214Cu;
label_1c214c:
    // 0x1c214c: 0x1000002d  b           . + 4 + (0x2D << 2)
label_1c2150:
    if (ctx->pc == 0x1C2150u) {
        ctx->pc = 0x1C2150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C214Cu;
        // 0x1c2150: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2154u;
        goto label_1c2154;
    }
    ctx->pc = 0x1C214Cu;
    {
        const bool branch_taken_0x1c214c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C214Cu;
        // 0x1c2150: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c214c) {
            ctx->pc = 0x1C2204u;
            goto label_1c2204;
        }
    }
    ctx->pc = 0x1C2154u;
label_1c2154:
    // 0x1c2154: 0xc08f608  jal         func_23D820
label_1c2158:
    if (ctx->pc == 0x1C2158u) {
        ctx->pc = 0x1C2158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2154u;
        // 0x1c2158: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C215Cu;
        goto label_1c215c;
    }
    ctx->pc = 0x1C2154u;
    SET_GPR_U32(ctx, 31, 0x1C215Cu);
    ctx->pc = 0x1C2158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2154u;
    // 0x1c2158: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D820u;
    { ctx->pc = 0x23d820; return; }
    ctx->pc = 0x1C215Cu;
label_1c215c:
    // 0x1c215c: 0x28430020  slti        $v1, $v0, 0x20
    ctx->pc = 0x1c215cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
label_1c2160:
    // 0x1c2160: 0x14600024  bnez        $v1, . + 4 + (0x24 << 2)
label_1c2164:
    if (ctx->pc == 0x1C2164u) {
        ctx->pc = 0x1C2164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2160u;
        // 0x1c2164: 0x28410060  slti        $at, $v0, 0x60 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)96) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2168u;
        goto label_1c2168;
    }
    ctx->pc = 0x1C2160u;
    {
        const bool branch_taken_0x1c2160 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2160u;
        // 0x1c2164: 0x28410060  slti        $at, $v0, 0x60 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)96) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2160) {
            ctx->pc = 0x1C21F4u;
            goto label_1c21f4;
        }
    }
    ctx->pc = 0x1C2168u;
label_1c2168:
    // 0x1c2168: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
label_1c216c:
    if (ctx->pc == 0x1C216Cu) {
        ctx->pc = 0x1C216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2168u;
        // 0x1c216c: 0x2446ffe0  addiu       $a2, $v0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2170u;
        goto label_1c2170;
    }
    ctx->pc = 0x1C2168u;
    {
        const bool branch_taken_0x1c2168 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2168u;
        // 0x1c216c: 0x2446ffe0  addiu       $a2, $v0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2168) {
            ctx->pc = 0x1C21F4u;
            goto label_1c21f4;
        }
    }
    ctx->pc = 0x1C2170u;
label_1c2170:
    // 0x1c2170: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_1c2174:
    if (ctx->pc == 0x1C2174u) {
        ctx->pc = 0x1C2174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2170u;
        // 0x1c2174: 0x610c3  sra         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2178u;
        goto label_1c2178;
    }
    ctx->pc = 0x1C2170u;
    {
        const bool branch_taken_0x1c2170 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1C2174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2170u;
        // 0x1c2174: 0x610c3  sra         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2170) {
            ctx->pc = 0x1C2180u;
            goto label_1c2180;
        }
    }
    ctx->pc = 0x1C2178u;
label_1c2178:
    // 0x1c2178: 0x24c20007  addiu       $v0, $a2, 0x7
    ctx->pc = 0x1c2178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
label_1c217c:
    // 0x1c217c: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1c217cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_1c2180:
    // 0x1c2180: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1c2180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1c2184:
    // 0x1c2184: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1c2184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1c2188:
    // 0x1c2188: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1c2188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1c218c:
    // 0x1c218c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c218cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c2190:
    // 0x1c2190: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1c2190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1c2194:
    // 0x1c2194: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c2194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c2198:
    // 0x1c2198: 0xffa50008  sd          $a1, 0x8($sp)
    ctx->pc = 0x1c2198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 5));
label_1c219c:
    // 0x1c219c: 0x30c20007  andi        $v0, $a2, 0x7
    ctx->pc = 0x1c219cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
label_1c21a0:
    // 0x1c21a0: 0xffa50010  sd          $a1, 0x10($sp)
    ctx->pc = 0x1c21a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 5));
label_1c21a4:
    // 0x1c21a4: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x1c21a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
label_1c21a8:
    // 0x1c21a8: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x1c21a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
label_1c21ac:
    // 0x1c21ac: 0x4c10004  bgez        $a2, . + 4 + (0x4 << 2)
label_1c21b0:
    if (ctx->pc == 0x1C21B0u) {
        ctx->pc = 0x1C21B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21ACu;
        // 0x1c21b0: 0xffa30028  sd          $v1, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C21B4u;
        goto label_1c21b4;
    }
    ctx->pc = 0x1C21ACu;
    {
        const bool branch_taken_0x1c21ac = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1C21B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21ACu;
        // 0x1c21b0: 0xffa30028  sd          $v1, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c21ac) {
            ctx->pc = 0x1C21C0u;
            goto label_1c21c0;
        }
    }
    ctx->pc = 0x1C21B4u;
label_1c21b4:
    // 0x1c21b4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1c21b8:
    if (ctx->pc == 0x1C21B8u) {
        ctx->pc = 0x1C21BCu;
        goto label_1c21bc;
    }
    ctx->pc = 0x1C21B4u;
    {
        const bool branch_taken_0x1c21b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c21b4) {
            ctx->pc = 0x1C21C0u;
            goto label_1c21c0;
        }
    }
    ctx->pc = 0x1C21BCu;
label_1c21bc:
    // 0x1c21bc: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x1c21bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_1c21c0:
    // 0x1c21c0: 0x8faa00dc  lw          $t2, 0xDC($sp)
    ctx->pc = 0x1c21c0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_1c21c4:
    // 0x1c21c4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1c21c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1c21c8:
    // 0x1c21c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c21c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c21cc:
    // 0x1c21cc: 0x304bffff  andi        $t3, $v0, 0xFFFF
    ctx->pc = 0x1c21ccu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1c21d0:
    // 0x1c21d0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1c21d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1c21d4:
    // 0x1c21d4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c21d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c21d8:
    // 0x1c21d8: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x1c21d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1c21dc:
    // 0x1c21dc: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x1c21dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1c21e0:
    // 0x1c21e0: 0xc05ded8  jal         func_177B60
label_1c21e4:
    if (ctx->pc == 0x1C21E4u) {
        ctx->pc = 0x1C21E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21E0u;
        // 0x1c21e4: 0x260482d  daddu       $t1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C21E8u;
        goto label_1c21e8;
    }
    ctx->pc = 0x1C21E0u;
    SET_GPR_U32(ctx, 31, 0x1C21E8u);
    ctx->pc = 0x1C21E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21E0u;
    // 0x1c21e4: 0x260482d  daddu       $t1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B60u, 0x1C21E0u, 0x1C21E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21E8u;
label_1c21e8:
    // 0x1c21e8: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x1c21e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_1c21ec:
    // 0x1c21ec: 0x265200d0  addiu       $s2, $s2, 0xD0
    ctx->pc = 0x1c21ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
label_1c21f0:
    // 0x1c21f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c21f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c21f4:
    // 0x1c21f4: 0x0  nop
    ctx->pc = 0x1c21f4u;
    // NOP
label_1c21f8:
    // 0x1c21f8: 0x234082a  slt         $at, $s1, $s4
    ctx->pc = 0x1c21f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_1c21fc:
    // 0x1c21fc: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_1c2200:
    if (ctx->pc == 0x1C2200u) {
        ctx->pc = 0x1C2204u;
        goto label_1c2204;
    }
    ctx->pc = 0x1C21FCu;
    {
        const bool branch_taken_0x1c21fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c21fc) {
            ctx->pc = 0x1C2214u;
            goto label_1c2214;
        }
    }
    ctx->pc = 0x1C2204u;
label_1c2204:
    // 0x1c2204: 0x0  nop
    ctx->pc = 0x1c2204u;
    // NOP
label_1c2208:
    // 0x1c2208: 0x92a30000  lbu         $v1, 0x0($s5)
    ctx->pc = 0x1c2208u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_1c220c:
    // 0x1c220c: 0x1460ffd1  bnez        $v1, . + 4 + (-0x2F << 2)
label_1c2210:
    if (ctx->pc == 0x1C2210u) {
        ctx->pc = 0x1C2210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C220Cu;
        // 0x1c2210: 0x306400ff  andi        $a0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2214u;
        goto label_1c2214;
    }
    ctx->pc = 0x1C220Cu;
    {
        const bool branch_taken_0x1c220c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C220Cu;
        // 0x1c2210: 0x306400ff  andi        $a0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c220c) {
            ctx->pc = 0x1C2154u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2154;
        }
    }
    ctx->pc = 0x1C2214u;
label_1c2214:
    // 0x1c2214: 0x0  nop
    ctx->pc = 0x1c2214u;
    // NOP
label_1c2218:
    // 0x1c2218: 0x234082a  slt         $at, $s1, $s4
    ctx->pc = 0x1c2218u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_1c221c:
    // 0x1c221c: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
label_1c2220:
    if (ctx->pc == 0x1C2220u) {
        ctx->pc = 0x1C2224u;
        goto label_1c2224;
    }
    ctx->pc = 0x1C221Cu;
    {
        const bool branch_taken_0x1c221c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c221c) {
            ctx->pc = 0x1C2280u;
            goto label_1c2280;
        }
    }
    ctx->pc = 0x1C2224u;
label_1c2224:
    // 0x1c2224: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1c2224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_1c2228:
    // 0x1c2228: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1c2228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1c222c:
    // 0x1c222c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1c222cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1c2230:
    // 0x1c2230: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c2230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c2234:
    // 0x1c2234: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1c2234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_1c2238:
    // 0x1c2238: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c2238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c223c:
    // 0x1c223c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c223cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c2240:
    // 0x1c2240: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x1c2240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_1c2244:
    // 0x1c2244: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x1c2244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
label_1c2248:
    // 0x1c2248: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1c2248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1c224c:
    // 0x1c224c: 0xffa20028  sd          $v0, 0x28($sp)
    ctx->pc = 0x1c224cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
label_1c2250:
    // 0x1c2250: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c2250u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c2254:
    // 0x1c2254: 0x8faa00dc  lw          $t2, 0xDC($sp)
    ctx->pc = 0x1c2254u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_1c2258:
    // 0x1c2258: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x1c2258u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1c225c:
    // 0x1c225c: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x1c225cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1c2260:
    // 0x1c2260: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1c2260u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c2264:
    // 0x1c2264: 0xc05ded8  jal         func_177B60
label_1c2268:
    if (ctx->pc == 0x1C2268u) {
        ctx->pc = 0x1C2268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2264u;
        // 0x1c2268: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C226Cu;
        goto label_1c226c;
    }
    ctx->pc = 0x1C2264u;
    SET_GPR_U32(ctx, 31, 0x1C226Cu);
    ctx->pc = 0x1C2268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2264u;
    // 0x1c2268: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B60u, 0x1C2264u, 0x1C226Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C226Cu;
label_1c226c:
    // 0x1c226c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c226cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c2270:
    // 0x1c2270: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x1c2270u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_1c2274:
    // 0x1c2274: 0x234182a  slt         $v1, $s1, $s4
    ctx->pc = 0x1c2274u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_1c2278:
    // 0x1c2278: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
label_1c227c:
    if (ctx->pc == 0x1C227Cu) {
        ctx->pc = 0x1C227Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2278u;
        // 0x1c227c: 0x265200d0  addiu       $s2, $s2, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2280u;
        goto label_1c2280;
    }
    ctx->pc = 0x1C2278u;
    {
        const bool branch_taken_0x1c2278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C227Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2278u;
        // 0x1c227c: 0x265200d0  addiu       $s2, $s2, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2278) {
            ctx->pc = 0x1C2224u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2224;
        }
    }
    ctx->pc = 0x1C2280u;
label_1c2280:
    // 0x1c2280: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1c2280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_1c2284:
    // 0x1c2284: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x1c2284u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1c2288:
    // 0x1c2288: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x1c2288u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1c228c:
    // 0x1c228c: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x1c228cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1c2290:
    // 0x1c2290: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1c2290u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1c2294:
    // 0x1c2294: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1c2294u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1c2298:
    // 0x1c2298: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1c2298u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1c229c:
    // 0x1c229c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1c229cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c22a0:
    // 0x1c22a0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1c22a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c22a4:
    // 0x1c22a4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1c22a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c22a8:
    // 0x1c22a8: 0x3e00008  jr          $ra
label_1c22ac:
    if (ctx->pc == 0x1C22ACu) {
        ctx->pc = 0x1C22ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C22A8u;
        // 0x1c22ac: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C22B0u;
        goto label_1c22b0;
    }
    ctx->pc = 0x1C22A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C22ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C22A8u;
        // 0x1c22ac: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C22A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C22B0u;
label_1c22b0:
    // 0x1c22b0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1c22b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_1c22b4:
    // 0x1c22b4: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1c22b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_1c22b8:
    // 0x1c22b8: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x1c22b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
label_1c22bc:
    // 0x1c22bc: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x1c22bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_1c22c0:
    // 0x1c22c0: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x1c22c0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1c22c4:
    // 0x1c22c4: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x1c22c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_1c22c8:
    // 0x1c22c8: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x1c22c8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1c22cc:
    // 0x1c22cc: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1c22ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_1c22d0:
    // 0x1c22d0: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1c22d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_1c22d4:
    // 0x1c22d4: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x1c22d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1c22d8:
    // 0x1c22d8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1c22d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_1c22dc:
    // 0x1c22dc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1c22dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c22e0:
    // 0x1c22e0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1c22e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_1c22e4:
    // 0x1c22e4: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x1c22e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1c22e8:
    // 0x1c22e8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1c22e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1c22ec:
    // 0x1c22ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c22ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c22f0:
    // 0x1c22f0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1c22f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1c22f4:
    // 0x1c22f4: 0x240500d0  addiu       $a1, $zero, 0xD0
    ctx->pc = 0x1c22f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_1c22f8:
    // 0x1c22f8: 0xdf848970  ld          $a0, -0x7690($gp)
    ctx->pc = 0x1c22f8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294936944)));
label_1c22fc:
    // 0x1c22fc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1c22fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1c2300:
    // 0x1c2300: 0xafaa00dc  sw          $t2, 0xDC($sp)
    ctx->pc = 0x1c2300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 10));
label_1c2304:
    // 0x1c2304: 0xc06064c  jal         func_181930
label_1c2308:
    if (ctx->pc == 0x1C2308u) {
        ctx->pc = 0x1C2308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2304u;
        // 0x1c2308: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C230Cu;
        goto label_1c230c;
    }
    ctx->pc = 0x1C2304u;
    SET_GPR_U32(ctx, 31, 0x1C230Cu);
    ctx->pc = 0x1C2308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2304u;
    // 0x1c2308: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181930u;
    { ctx->pc = 0x181930; return; }
    ctx->pc = 0x1C230Cu;
label_1c230c:
    // 0x1c230c: 0x1000002d  b           . + 4 + (0x2D << 2)
label_1c2310:
    if (ctx->pc == 0x1C2310u) {
        ctx->pc = 0x1C2310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C230Cu;
        // 0x1c2310: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2314u;
        goto label_1c2314;
    }
    ctx->pc = 0x1C230Cu;
    {
        const bool branch_taken_0x1c230c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C230Cu;
        // 0x1c2310: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c230c) {
            ctx->pc = 0x1C23C4u;
            goto label_1c23c4;
        }
    }
    ctx->pc = 0x1C2314u;
label_1c2314:
    // 0x1c2314: 0xc08f608  jal         func_23D820
label_1c2318:
    if (ctx->pc == 0x1C2318u) {
        ctx->pc = 0x1C2318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2314u;
        // 0x1c2318: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C231Cu;
        goto label_1c231c;
    }
    ctx->pc = 0x1C2314u;
    SET_GPR_U32(ctx, 31, 0x1C231Cu);
    ctx->pc = 0x1C2318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2314u;
    // 0x1c2318: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D820u;
    { ctx->pc = 0x23d820; return; }
    ctx->pc = 0x1C231Cu;
label_1c231c:
    // 0x1c231c: 0x28430020  slti        $v1, $v0, 0x20
    ctx->pc = 0x1c231cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
label_1c2320:
    // 0x1c2320: 0x14600024  bnez        $v1, . + 4 + (0x24 << 2)
label_1c2324:
    if (ctx->pc == 0x1C2324u) {
        ctx->pc = 0x1C2324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2320u;
        // 0x1c2324: 0x28410060  slti        $at, $v0, 0x60 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)96) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2328u;
        goto label_1c2328;
    }
    ctx->pc = 0x1C2320u;
    {
        const bool branch_taken_0x1c2320 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2320u;
        // 0x1c2324: 0x28410060  slti        $at, $v0, 0x60 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)96) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2320) {
            ctx->pc = 0x1C23B4u;
            goto label_1c23b4;
        }
    }
    ctx->pc = 0x1C2328u;
label_1c2328:
    // 0x1c2328: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
label_1c232c:
    if (ctx->pc == 0x1C232Cu) {
        ctx->pc = 0x1C232Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2328u;
        // 0x1c232c: 0x2446ffe0  addiu       $a2, $v0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2330u;
        goto label_1c2330;
    }
    ctx->pc = 0x1C2328u;
    {
        const bool branch_taken_0x1c2328 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C232Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2328u;
        // 0x1c232c: 0x2446ffe0  addiu       $a2, $v0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2328) {
            ctx->pc = 0x1C23B4u;
            goto label_1c23b4;
        }
    }
    ctx->pc = 0x1C2330u;
label_1c2330:
    // 0x1c2330: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_1c2334:
    if (ctx->pc == 0x1C2334u) {
        ctx->pc = 0x1C2334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2330u;
        // 0x1c2334: 0x610c3  sra         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2338u;
        goto label_1c2338;
    }
    ctx->pc = 0x1C2330u;
    {
        const bool branch_taken_0x1c2330 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1C2334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2330u;
        // 0x1c2334: 0x610c3  sra         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2330) {
            ctx->pc = 0x1C2340u;
            goto label_1c2340;
        }
    }
    ctx->pc = 0x1C2338u;
label_1c2338:
    // 0x1c2338: 0x24c20007  addiu       $v0, $a2, 0x7
    ctx->pc = 0x1c2338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
label_1c233c:
    // 0x1c233c: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1c233cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_1c2340:
    // 0x1c2340: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1c2340u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1c2344:
    // 0x1c2344: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1c2344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1c2348:
    // 0x1c2348: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1c2348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1c234c:
    // 0x1c234c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c234cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c2350:
    // 0x1c2350: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1c2350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1c2354:
    // 0x1c2354: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c2354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c2358:
    // 0x1c2358: 0xffa50008  sd          $a1, 0x8($sp)
    ctx->pc = 0x1c2358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 5));
label_1c235c:
    // 0x1c235c: 0x30c20007  andi        $v0, $a2, 0x7
    ctx->pc = 0x1c235cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
label_1c2360:
    // 0x1c2360: 0xffa50010  sd          $a1, 0x10($sp)
    ctx->pc = 0x1c2360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 5));
label_1c2364:
    // 0x1c2364: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x1c2364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
label_1c2368:
    // 0x1c2368: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x1c2368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
label_1c236c:
    // 0x1c236c: 0x4c10004  bgez        $a2, . + 4 + (0x4 << 2)
label_1c2370:
    if (ctx->pc == 0x1C2370u) {
        ctx->pc = 0x1C2370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C236Cu;
        // 0x1c2370: 0xffa30028  sd          $v1, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2374u;
        goto label_1c2374;
    }
    ctx->pc = 0x1C236Cu;
    {
        const bool branch_taken_0x1c236c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1C2370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C236Cu;
        // 0x1c2370: 0xffa30028  sd          $v1, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c236c) {
            ctx->pc = 0x1C2380u;
            goto label_1c2380;
        }
    }
    ctx->pc = 0x1C2374u;
label_1c2374:
    // 0x1c2374: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1c2378:
    if (ctx->pc == 0x1C2378u) {
        ctx->pc = 0x1C237Cu;
        goto label_1c237c;
    }
    ctx->pc = 0x1C2374u;
    {
        const bool branch_taken_0x1c2374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2374) {
            ctx->pc = 0x1C2380u;
            goto label_1c2380;
        }
    }
    ctx->pc = 0x1C237Cu;
label_1c237c:
    // 0x1c237c: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x1c237cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_1c2380:
    // 0x1c2380: 0x8faa00dc  lw          $t2, 0xDC($sp)
    ctx->pc = 0x1c2380u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_1c2384:
    // 0x1c2384: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1c2384u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1c2388:
    // 0x1c2388: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c2388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c238c:
    // 0x1c238c: 0x304bffff  andi        $t3, $v0, 0xFFFF
    ctx->pc = 0x1c238cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1c2390:
    // 0x1c2390: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1c2390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1c2394:
    // 0x1c2394: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c2394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c2398:
    // 0x1c2398: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x1c2398u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1c239c:
    // 0x1c239c: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x1c239cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1c23a0:
    // 0x1c23a0: 0xc05dd88  jal         func_177620
label_1c23a4:
    if (ctx->pc == 0x1C23A4u) {
        ctx->pc = 0x1C23A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C23A0u;
        // 0x1c23a4: 0x260482d  daddu       $t1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C23A8u;
        goto label_1c23a8;
    }
    ctx->pc = 0x1C23A0u;
    SET_GPR_U32(ctx, 31, 0x1C23A8u);
    ctx->pc = 0x1C23A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C23A0u;
    // 0x1c23a4: 0x260482d  daddu       $t1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177620u, 0x1C23A0u, 0x1C23A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C23A8u;
label_1c23a8:
    // 0x1c23a8: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x1c23a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_1c23ac:
    // 0x1c23ac: 0x265200a0  addiu       $s2, $s2, 0xA0
    ctx->pc = 0x1c23acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_1c23b0:
    // 0x1c23b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c23b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c23b4:
    // 0x1c23b4: 0x0  nop
    ctx->pc = 0x1c23b4u;
    // NOP
label_1c23b8:
    // 0x1c23b8: 0x234082a  slt         $at, $s1, $s4
    ctx->pc = 0x1c23b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_1c23bc:
    // 0x1c23bc: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_1c23c0:
    if (ctx->pc == 0x1C23C0u) {
        ctx->pc = 0x1C23C4u;
        goto label_1c23c4;
    }
    ctx->pc = 0x1C23BCu;
    {
        const bool branch_taken_0x1c23bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c23bc) {
            ctx->pc = 0x1C23D4u;
            goto label_1c23d4;
        }
    }
    ctx->pc = 0x1C23C4u;
label_1c23c4:
    // 0x1c23c4: 0x0  nop
    ctx->pc = 0x1c23c4u;
    // NOP
label_1c23c8:
    // 0x1c23c8: 0x92a30000  lbu         $v1, 0x0($s5)
    ctx->pc = 0x1c23c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_1c23cc:
    // 0x1c23cc: 0x1460ffd1  bnez        $v1, . + 4 + (-0x2F << 2)
label_1c23d0:
    if (ctx->pc == 0x1C23D0u) {
        ctx->pc = 0x1C23D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C23CCu;
        // 0x1c23d0: 0x306400ff  andi        $a0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C23D4u;
        goto label_1c23d4;
    }
    ctx->pc = 0x1C23CCu;
    {
        const bool branch_taken_0x1c23cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C23D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C23CCu;
        // 0x1c23d0: 0x306400ff  andi        $a0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c23cc) {
            ctx->pc = 0x1C2314u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2314;
        }
    }
    ctx->pc = 0x1C23D4u;
label_1c23d4:
    // 0x1c23d4: 0x0  nop
    ctx->pc = 0x1c23d4u;
    // NOP
label_1c23d8:
    // 0x1c23d8: 0x234082a  slt         $at, $s1, $s4
    ctx->pc = 0x1c23d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_1c23dc:
    // 0x1c23dc: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
label_1c23e0:
    if (ctx->pc == 0x1C23E0u) {
        ctx->pc = 0x1C23E4u;
        goto label_1c23e4;
    }
    ctx->pc = 0x1C23DCu;
    {
        const bool branch_taken_0x1c23dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c23dc) {
            ctx->pc = 0x1C2440u;
            goto label_1c2440;
        }
    }
    ctx->pc = 0x1C23E4u;
label_1c23e4:
    // 0x1c23e4: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1c23e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_1c23e8:
    // 0x1c23e8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1c23e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1c23ec:
    // 0x1c23ec: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1c23ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1c23f0:
    // 0x1c23f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c23f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c23f4:
    // 0x1c23f4: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1c23f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_1c23f8:
    // 0x1c23f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c23f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c23fc:
    // 0x1c23fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c23fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c2400:
    // 0x1c2400: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x1c2400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_1c2404:
    // 0x1c2404: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x1c2404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
label_1c2408:
    // 0x1c2408: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1c2408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1c240c:
    // 0x1c240c: 0xffa20028  sd          $v0, 0x28($sp)
    ctx->pc = 0x1c240cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
label_1c2410:
    // 0x1c2410: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c2410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c2414:
    // 0x1c2414: 0x8faa00dc  lw          $t2, 0xDC($sp)
    ctx->pc = 0x1c2414u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_1c2418:
    // 0x1c2418: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x1c2418u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1c241c:
    // 0x1c241c: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x1c241cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1c2420:
    // 0x1c2420: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1c2420u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c2424:
    // 0x1c2424: 0xc05dd88  jal         func_177620
label_1c2428:
    if (ctx->pc == 0x1C2428u) {
        ctx->pc = 0x1C2428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2424u;
        // 0x1c2428: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C242Cu;
        goto label_1c242c;
    }
    ctx->pc = 0x1C2424u;
    SET_GPR_U32(ctx, 31, 0x1C242Cu);
    ctx->pc = 0x1C2428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2424u;
    // 0x1c2428: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177620u, 0x1C2424u, 0x1C242Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C242Cu;
label_1c242c:
    // 0x1c242c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c242cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c2430:
    // 0x1c2430: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x1c2430u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_1c2434:
    // 0x1c2434: 0x234182a  slt         $v1, $s1, $s4
    ctx->pc = 0x1c2434u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_1c2438:
    // 0x1c2438: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
label_1c243c:
    if (ctx->pc == 0x1C243Cu) {
        ctx->pc = 0x1C243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2438u;
        // 0x1c243c: 0x265200a0  addiu       $s2, $s2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2440u;
        goto label_1c2440;
    }
    ctx->pc = 0x1C2438u;
    {
        const bool branch_taken_0x1c2438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2438u;
        // 0x1c243c: 0x265200a0  addiu       $s2, $s2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2438) {
            ctx->pc = 0x1C23E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c23e4;
        }
    }
    ctx->pc = 0x1C2440u;
label_1c2440:
    // 0x1c2440: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1c2440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_1c2444:
    // 0x1c2444: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x1c2444u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1c2448:
    // 0x1c2448: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x1c2448u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1c244c:
    // 0x1c244c: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x1c244cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1c2450:
    // 0x1c2450: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1c2450u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1c2454:
    // 0x1c2454: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1c2454u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1c2458:
    // 0x1c2458: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1c2458u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1c245c:
    // 0x1c245c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1c245cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c2460:
    // 0x1c2460: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1c2460u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c2464:
    // 0x1c2464: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1c2464u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c2468:
    // 0x1c2468: 0x3e00008  jr          $ra
label_1c246c:
    if (ctx->pc == 0x1C246Cu) {
        ctx->pc = 0x1C246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2468u;
        // 0x1c246c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2470u;
        goto label_1c2470;
    }
    ctx->pc = 0x1C2468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2468u;
        // 0x1c246c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2470u;
label_1c2470:
    // 0x1c2470: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c2470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c2474:
    // 0x1c2474: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c2474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c2478:
    // 0x1c2478: 0xc070924  jal         func_1C2490
label_1c247c:
    if (ctx->pc == 0x1C247Cu) {
        ctx->pc = 0x1C247Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2478u;
        // 0x1c247c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2480u;
        goto label_1c2480;
    }
    ctx->pc = 0x1C2478u;
    SET_GPR_U32(ctx, 31, 0x1C2480u);
    ctx->pc = 0x1C247Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2478u;
    // 0x1c247c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2490u;
    goto label_1c2490;
    ctx->pc = 0x1C2480u;
label_1c2480:
    // 0x1c2480: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c2480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c2484:
    // 0x1c2484: 0x3e00008  jr          $ra
label_1c2488:
    if (ctx->pc == 0x1C2488u) {
        ctx->pc = 0x1C2488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2484u;
        // 0x1c2488: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C248Cu;
        goto label_1c248c;
    }
    ctx->pc = 0x1C2484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2484u;
        // 0x1c2488: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C248Cu;
label_1c248c:
    // 0x1c248c: 0x0  nop
    ctx->pc = 0x1c248cu;
    // NOP
label_1c2490:
    // 0x1c2490: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1c2490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1c2494:
    // 0x1c2494: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1c2494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1c2498:
    // 0x1c2498: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1c2498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1c249c:
    // 0x1c249c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c249cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1c24a0:
    // 0x1c24a0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1c24a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c24a4:
    // 0x1c24a4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c24a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1c24a8:
    // 0x1c24a8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1c24a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c24ac:
    // 0x1c24ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c24acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1c24b0:
    // 0x1c24b0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1c24b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1c24b4:
    // 0x1c24b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c24b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c24b8:
    // 0x1c24b8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1c24b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1c24bc:
    // 0x1c24bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c24bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c24c0:
    // 0x1c24c0: 0xc060678  jal         func_1819E0
label_1c24c4:
    if (ctx->pc == 0x1C24C4u) {
        ctx->pc = 0x1C24C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C24C0u;
        // 0x1c24c4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C24C8u;
        goto label_1c24c8;
    }
    ctx->pc = 0x1C24C0u;
    SET_GPR_U32(ctx, 31, 0x1C24C8u);
    ctx->pc = 0x1C24C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C24C0u;
    // 0x1c24c4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1819E0u;
    { ctx->pc = 0x1819e0; return; }
    ctx->pc = 0x1C24C8u;
label_1c24c8:
    // 0x1c24c8: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x1c24c8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
label_1c24cc:
    // 0x1c24cc: 0x131c3c  dsll32      $v1, $s3, 16
    ctx->pc = 0x1c24ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 16));
label_1c24d0:
    // 0x1c24d0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1c24d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1c24d4:
    // 0x1c24d4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1c24d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1c24d8:
    // 0x1c24d8: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_1c24dc:
    if (ctx->pc == 0x1C24DCu) {
        ctx->pc = 0x1C24DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C24D8u;
        // 0x1c24dc: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C24E0u;
        goto label_1c24e0;
    }
    ctx->pc = 0x1C24D8u;
    {
        const bool branch_taken_0x1c24d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C24DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C24D8u;
        // 0x1c24dc: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c24d8) {
            ctx->pc = 0x1C251Cu;
            goto label_1c251c;
        }
    }
    ctx->pc = 0x1C24E0u;
label_1c24e0:
    // 0x1c24e0: 0x15143c  dsll32      $v0, $s5, 16
    ctx->pc = 0x1c24e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << (32 + 16));
label_1c24e4:
    // 0x1c24e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1c24e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1c24e8:
    // 0x1c24e8: 0x2443007f  addiu       $v1, $v0, 0x7F
    ctx->pc = 0x1c24e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
label_1c24ec:
    // 0x1c24ec: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1c24f0:
    if (ctx->pc == 0x1C24F0u) {
        ctx->pc = 0x1C24F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C24ECu;
        // 0x1c24f0: 0x311c3  sra         $v0, $v1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C24F4u;
        goto label_1c24f4;
    }
    ctx->pc = 0x1C24ECu;
    {
        const bool branch_taken_0x1c24ec = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C24F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C24ECu;
        // 0x1c24f0: 0x311c3  sra         $v0, $v1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c24ec) {
            ctx->pc = 0x1C24FCu;
            goto label_1c24fc;
        }
    }
    ctx->pc = 0x1C24F4u;
label_1c24f4:
    // 0x1c24f4: 0x2462007f  addiu       $v0, $v1, 0x7F
    ctx->pc = 0x1c24f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
label_1c24f8:
    // 0x1c24f8: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x1c24f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
label_1c24fc:
    // 0x1c24fc: 0x219c0  sll         $v1, $v0, 7
    ctx->pc = 0x1c24fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1c2500:
    // 0x1c2500: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1c2504:
    if (ctx->pc == 0x1C2504u) {
        ctx->pc = 0x1C2504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2500u;
        // 0x1c2504: 0x31183  sra         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2508u;
        goto label_1c2508;
    }
    ctx->pc = 0x1C2500u;
    {
        const bool branch_taken_0x1c2500 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C2504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2500u;
        // 0x1c2504: 0x31183  sra         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2500) {
            ctx->pc = 0x1C2510u;
            goto label_1c2510;
        }
    }
    ctx->pc = 0x1C2508u;
label_1c2508:
    // 0x1c2508: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x1c2508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
label_1c250c:
    // 0x1c250c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x1c250cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_1c2510:
    // 0x1c2510: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x1c2510u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
label_1c2514:
    // 0x1c2514: 0x10000036  b           . + 4 + (0x36 << 2)
label_1c2518:
    if (ctx->pc == 0x1C2518u) {
        ctx->pc = 0x1C2518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2514u;
        // 0x1c2518: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C251Cu;
        goto label_1c251c;
    }
    ctx->pc = 0x1C2514u;
    {
        const bool branch_taken_0x1c2514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2514u;
        // 0x1c2518: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2514) {
            ctx->pc = 0x1C25F0u;
            goto label_1c25f0;
        }
    }
    ctx->pc = 0x1C251Cu;
label_1c251c:
    // 0x1c251c: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x1c251cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1c2520:
    // 0x1c2520: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_1c2524:
    if (ctx->pc == 0x1C2524u) {
        ctx->pc = 0x1C2524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2520u;
        // 0x1c2524: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2528u;
        goto label_1c2528;
    }
    ctx->pc = 0x1C2520u;
    {
        const bool branch_taken_0x1c2520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C2524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2520u;
        // 0x1c2524: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2520) {
            ctx->pc = 0x1C2564u;
            goto label_1c2564;
        }
    }
    ctx->pc = 0x1C2528u;
label_1c2528:
    // 0x1c2528: 0x15143c  dsll32      $v0, $s5, 16
    ctx->pc = 0x1c2528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << (32 + 16));
label_1c252c:
    // 0x1c252c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1c252cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1c2530:
    // 0x1c2530: 0x2443007f  addiu       $v1, $v0, 0x7F
    ctx->pc = 0x1c2530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
label_1c2534:
    // 0x1c2534: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1c2538:
    if (ctx->pc == 0x1C2538u) {
        ctx->pc = 0x1C2538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2534u;
        // 0x1c2538: 0x311c3  sra         $v0, $v1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C253Cu;
        goto label_1c253c;
    }
    ctx->pc = 0x1C2534u;
    {
        const bool branch_taken_0x1c2534 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C2538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2534u;
        // 0x1c2538: 0x311c3  sra         $v0, $v1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2534) {
            ctx->pc = 0x1C2544u;
            goto label_1c2544;
        }
    }
    ctx->pc = 0x1C253Cu;
label_1c253c:
    // 0x1c253c: 0x2462007f  addiu       $v0, $v1, 0x7F
    ctx->pc = 0x1c253cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
label_1c2540:
    // 0x1c2540: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x1c2540u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
label_1c2544:
    // 0x1c2544: 0x219c0  sll         $v1, $v0, 7
    ctx->pc = 0x1c2544u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1c2548:
    // 0x1c2548: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1c254c:
    if (ctx->pc == 0x1C254Cu) {
        ctx->pc = 0x1C254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2548u;
        // 0x1c254c: 0x31183  sra         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2550u;
        goto label_1c2550;
    }
    ctx->pc = 0x1C2548u;
    {
        const bool branch_taken_0x1c2548 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2548u;
        // 0x1c254c: 0x31183  sra         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2548) {
            ctx->pc = 0x1C2558u;
            goto label_1c2558;
        }
    }
    ctx->pc = 0x1C2550u;
label_1c2550:
    // 0x1c2550: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x1c2550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
label_1c2554:
    // 0x1c2554: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x1c2554u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_1c2558:
    // 0x1c2558: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x1c2558u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
label_1c255c:
    // 0x1c255c: 0x10000024  b           . + 4 + (0x24 << 2)
label_1c2560:
    if (ctx->pc == 0x1C2560u) {
        ctx->pc = 0x1C2560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C255Cu;
        // 0x1c2560: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2564u;
        goto label_1c2564;
    }
    ctx->pc = 0x1C255Cu;
    {
        const bool branch_taken_0x1c255c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C255Cu;
        // 0x1c2560: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c255c) {
            ctx->pc = 0x1C25F0u;
            goto label_1c25f0;
        }
    }
    ctx->pc = 0x1C2564u;
label_1c2564:
    // 0x1c2564: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
label_1c2568:
    if (ctx->pc == 0x1C2568u) {
        ctx->pc = 0x1C256Cu;
        goto label_1c256c;
    }
    ctx->pc = 0x1C2564u;
    {
        const bool branch_taken_0x1c2564 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c2564) {
            ctx->pc = 0x1C25ACu;
            goto label_1c25ac;
        }
    }
    ctx->pc = 0x1C256Cu;
label_1c256c:
    // 0x1c256c: 0x15143c  dsll32      $v0, $s5, 16
    ctx->pc = 0x1c256cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << (32 + 16));
label_1c2570:
    // 0x1c2570: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1c2570u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1c2574:
    // 0x1c2574: 0x2443003f  addiu       $v1, $v0, 0x3F
    ctx->pc = 0x1c2574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
label_1c2578:
    // 0x1c2578: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1c257c:
    if (ctx->pc == 0x1C257Cu) {
        ctx->pc = 0x1C257Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2578u;
        // 0x1c257c: 0x31183  sra         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2580u;
        goto label_1c2580;
    }
    ctx->pc = 0x1C2578u;
    {
        const bool branch_taken_0x1c2578 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C257Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2578u;
        // 0x1c257c: 0x31183  sra         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2578) {
            ctx->pc = 0x1C2588u;
            goto label_1c2588;
        }
    }
    ctx->pc = 0x1C2580u;
label_1c2580:
    // 0x1c2580: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x1c2580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
label_1c2584:
    // 0x1c2584: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x1c2584u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_1c2588:
    // 0x1c2588: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1c2588u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1c258c:
    // 0x1c258c: 0x211bc  dsll32      $v0, $v0, 6
    ctx->pc = 0x1c258cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 6));
label_1c2590:
    // 0x1c2590: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1c2594:
    if (ctx->pc == 0x1C2594u) {
        ctx->pc = 0x1C2594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2590u;
        // 0x1c2594: 0x211bf  dsra32      $v0, $v0, 6 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2598u;
        goto label_1c2598;
    }
    ctx->pc = 0x1C2590u;
    {
        const bool branch_taken_0x1c2590 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C2594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2590u;
        // 0x1c2594: 0x211bf  dsra32      $v0, $v0, 6 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2590) {
            ctx->pc = 0x1C25A0u;
            goto label_1c25a0;
        }
    }
    ctx->pc = 0x1C2598u;
label_1c2598:
    // 0x1c2598: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x1c2598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
label_1c259c:
    // 0x1c259c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x1c259cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_1c25a0:
    // 0x1c25a0: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x1c25a0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
label_1c25a4:
    // 0x1c25a4: 0x10000012  b           . + 4 + (0x12 << 2)
label_1c25a8:
    if (ctx->pc == 0x1C25A8u) {
        ctx->pc = 0x1C25A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C25A4u;
        // 0x1c25a8: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C25ACu;
        goto label_1c25ac;
    }
    ctx->pc = 0x1C25A4u;
    {
        const bool branch_taken_0x1c25a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C25A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C25A4u;
        // 0x1c25a8: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c25a4) {
            ctx->pc = 0x1C25F0u;
            goto label_1c25f0;
        }
    }
    ctx->pc = 0x1C25ACu;
label_1c25ac:
    // 0x1c25ac: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
label_1c25b0:
    if (ctx->pc == 0x1C25B0u) {
        ctx->pc = 0x1C25B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C25ACu;
        // 0x1c25b0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C25B4u;
        goto label_1c25b4;
    }
    ctx->pc = 0x1C25ACu;
    {
        const bool branch_taken_0x1c25ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C25B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C25ACu;
        // 0x1c25b0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c25ac) {
            ctx->pc = 0x1C25F0u;
            goto label_1c25f0;
        }
    }
    ctx->pc = 0x1C25B4u;
label_1c25b4:
    // 0x1c25b4: 0x15143c  dsll32      $v0, $s5, 16
    ctx->pc = 0x1c25b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << (32 + 16));
label_1c25b8:
    // 0x1c25b8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1c25b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1c25bc:
    // 0x1c25bc: 0x2443003f  addiu       $v1, $v0, 0x3F
    ctx->pc = 0x1c25bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
label_1c25c0:
    // 0x1c25c0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1c25c4:
    if (ctx->pc == 0x1C25C4u) {
        ctx->pc = 0x1C25C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C25C0u;
        // 0x1c25c4: 0x31183  sra         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C25C8u;
        goto label_1c25c8;
    }
    ctx->pc = 0x1C25C0u;
    {
        const bool branch_taken_0x1c25c0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C25C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C25C0u;
        // 0x1c25c4: 0x31183  sra         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c25c0) {
            ctx->pc = 0x1C25D0u;
            goto label_1c25d0;
        }
    }
    ctx->pc = 0x1C25C8u;
label_1c25c8:
    // 0x1c25c8: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x1c25c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
label_1c25cc:
    // 0x1c25cc: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x1c25ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_1c25d0:
    // 0x1c25d0: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1c25d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1c25d4:
    // 0x1c25d4: 0x211bc  dsll32      $v0, $v0, 6
    ctx->pc = 0x1c25d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 6));
label_1c25d8:
    // 0x1c25d8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1c25dc:
    if (ctx->pc == 0x1C25DCu) {
        ctx->pc = 0x1C25DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C25D8u;
        // 0x1c25dc: 0x211bf  dsra32      $v0, $v0, 6 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C25E0u;
        goto label_1c25e0;
    }
    ctx->pc = 0x1C25D8u;
    {
        const bool branch_taken_0x1c25d8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C25DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C25D8u;
        // 0x1c25dc: 0x211bf  dsra32      $v0, $v0, 6 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c25d8) {
            ctx->pc = 0x1C25E8u;
            goto label_1c25e8;
        }
    }
    ctx->pc = 0x1C25E0u;
label_1c25e0:
    // 0x1c25e0: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x1c25e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
label_1c25e4:
    // 0x1c25e4: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x1c25e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_1c25e8:
    // 0x1c25e8: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x1c25e8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
label_1c25ec:
    // 0x1c25ec: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x1c25ecu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
label_1c25f0:
    // 0x1c25f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c25f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1c25f4:
    // 0x1c25f4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c25f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1c25f8:
    // 0x1c25f8: 0x27a6007c  addiu       $a2, $sp, 0x7C
    ctx->pc = 0x1c25f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_1c25fc:
    // 0x1c25fc: 0xc060704  jal         func_181C10
label_1c2600:
    if (ctx->pc == 0x1C2600u) {
        ctx->pc = 0x1C2600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C25FCu;
        // 0x1c2600: 0x27a7007e  addiu       $a3, $sp, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 126));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2604u;
        goto label_1c2604;
    }
    ctx->pc = 0x1C25FCu;
    SET_GPR_U32(ctx, 31, 0x1C2604u);
    ctx->pc = 0x1C2600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C25FCu;
    // 0x1c2600: 0x27a7007e  addiu       $a3, $sp, 0x7E (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 126));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181C10u;
    { ctx->pc = 0x181c10; return; }
    ctx->pc = 0x1C2604u;
label_1c2604:
    // 0x1c2604: 0x12243c  dsll32      $a0, $s2, 16
    ctx->pc = 0x1c2604u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 16));
label_1c2608:
    // 0x1c2608: 0xc060668  jal         func_1819A0
label_1c260c:
    if (ctx->pc == 0x1C260Cu) {
        ctx->pc = 0x1C260Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2608u;
        // 0x1c260c: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2610u;
        goto label_1c2610;
    }
    ctx->pc = 0x1C2608u;
    SET_GPR_U32(ctx, 31, 0x1C2610u);
    ctx->pc = 0x1C260Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2608u;
    // 0x1c260c: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1819A0u;
    { ctx->pc = 0x1819a0; return; }
    ctx->pc = 0x1C2610u;
label_1c2610:
    // 0x1c2610: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x1c2610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
label_1c2614:
    // 0x1c2614: 0x102c3c  dsll32      $a1, $s0, 16
    ctx->pc = 0x1c2614u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 16));
label_1c2618:
    // 0x1c2618: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1c2618u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1c261c:
    // 0x1c261c: 0x87a6007c  lh          $a2, 0x7C($sp)
    ctx->pc = 0x1c261cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 124)));
label_1c2620:
    // 0x1c2620: 0x323b8  dsll        $a0, $v1, 14
    ctx->pc = 0x1c2620u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 14);
label_1c2624:
    // 0x1c2624: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1c2624u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_1c2628:
    // 0x1c2628: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x1c2628u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_1c262c:
    // 0x1c262c: 0x131c3c  dsll32      $v1, $s3, 16
    ctx->pc = 0x1c262cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 16));
label_1c2630:
    // 0x1c2630: 0x87a5007e  lh          $a1, 0x7E($sp)
    ctx->pc = 0x1c2630u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 126)));
label_1c2634:
    // 0x1c2634: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1c2634u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1c2638:
    // 0x1c2638: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x1c2638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
label_1c263c:
    // 0x1c263c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1c263cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_1c2640:
    // 0x1c2640: 0x643825  or          $a3, $v1, $a0
    ctx->pc = 0x1c2640u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1c2644:
    // 0x1c2644: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1c2644u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1c2648:
    // 0x1c2648: 0x2197c  dsll32      $v1, $v0, 5
    ctx->pc = 0x1c2648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 5));
label_1c264c:
    // 0x1c264c: 0x636b8  dsll        $a2, $a2, 26
    ctx->pc = 0x1c264cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 26);
label_1c2650:
    // 0x1c2650: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1c2650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1c2654:
    // 0x1c2654: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c2654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1c2658:
    // 0x1c2658: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1c2658u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c265c:
    // 0x1c265c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1c265cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_1c2660:
    // 0x1c2660: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c2660u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c2664:
    // 0x1c2664: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1c2664u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_1c2668:
    // 0x1c2668: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x1c2668u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
label_1c266c:
    // 0x1c266c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c266cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c2670:
    // 0x1c2670: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1c2670u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_1c2674:
    // 0x1c2674: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c2674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1c2678:
    // 0x1c2678: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x1c2678u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_1c267c:
    // 0x1c267c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c267cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c2680:
    // 0x1c2680: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c2680u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c2684:
    // 0x1c2684: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c2684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1c2688:
    // 0x1c2688: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1c2688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1c268c:
    // 0x1c268c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c268cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c2690:
    // 0x1c2690: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1c2690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1c2694:
    // 0x1c2694: 0x3e00008  jr          $ra
label_1c2698:
    if (ctx->pc == 0x1C2698u) {
        ctx->pc = 0x1C2698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2694u;
        // 0x1c2698: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C269Cu;
        goto label_1c269c;
    }
    ctx->pc = 0x1C2694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2694u;
        // 0x1c2698: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C269Cu;
label_1c269c:
    // 0x1c269c: 0x0  nop
    ctx->pc = 0x1c269cu;
    // NOP
label_1c26a0:
    // 0x1c26a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c26a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1c26a4:
    // 0x1c26a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c26a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1c26a8:
    // 0x1c26a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c26a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1c26ac:
    // 0x1c26ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c26acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c26b0:
    // 0x1c26b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c26b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c26b4:
    // 0x1c26b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c26b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c26b8:
    // 0x1c26b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c26b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c26bc:
    // 0x1c26bc: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x1c26bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_1c26c0:
    // 0x1c26c0: 0x2463f280  addiu       $v1, $v1, -0xD80
    ctx->pc = 0x1c26c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963840));
label_1c26c4:
    // 0x1c26c4: 0x719021  addu        $s2, $v1, $s1
    ctx->pc = 0x1c26c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1c26c8:
    // 0x1c26c8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1c26c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c26cc:
    // 0x1c26cc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1c26d0:
    if (ctx->pc == 0x1C26D0u) {
        ctx->pc = 0x1C26D4u;
        goto label_1c26d4;
    }
    ctx->pc = 0x1C26CCu;
    {
        const bool branch_taken_0x1c26cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c26cc) {
            ctx->pc = 0x1C26E0u;
            goto label_1c26e0;
        }
    }
    ctx->pc = 0x1C26D4u;
label_1c26d4:
    // 0x1c26d4: 0xc070038  jal         func_1C00E0
label_1c26d8:
    if (ctx->pc == 0x1C26D8u) {
        ctx->pc = 0x1C26DCu;
        goto label_1c26dc;
    }
    ctx->pc = 0x1C26D4u;
    SET_GPR_U32(ctx, 31, 0x1C26DCu);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1C26DCu;
label_1c26dc:
    // 0x1c26dc: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1c26dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1c26e0:
    // 0x1c26e0: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x1c26e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_1c26e4:
    // 0x1c26e4: 0x2463f240  addiu       $v1, $v1, -0xDC0
    ctx->pc = 0x1c26e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963776));
label_1c26e8:
    // 0x1c26e8: 0x719021  addu        $s2, $v1, $s1
    ctx->pc = 0x1c26e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1c26ec:
    // 0x1c26ec: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1c26ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c26f0:
    // 0x1c26f0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1c26f4:
    if (ctx->pc == 0x1C26F4u) {
        ctx->pc = 0x1C26F8u;
        goto label_1c26f8;
    }
    ctx->pc = 0x1C26F0u;
    {
        const bool branch_taken_0x1c26f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c26f0) {
            ctx->pc = 0x1C2704u;
            goto label_1c2704;
        }
    }
    ctx->pc = 0x1C26F8u;
label_1c26f8:
    // 0x1c26f8: 0xc070038  jal         func_1C00E0
label_1c26fc:
    if (ctx->pc == 0x1C26FCu) {
        ctx->pc = 0x1C2700u;
        goto label_1c2700;
    }
    ctx->pc = 0x1C26F8u;
    SET_GPR_U32(ctx, 31, 0x1C2700u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1C2700u;
label_1c2700:
    // 0x1c2700: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1c2700u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1c2704:
    // 0x1c2704: 0x0  nop
    ctx->pc = 0x1c2704u;
    // NOP
label_1c2708:
    // 0x1c2708: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c2708u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c270c:
    // 0x1c270c: 0x2a030010  slti        $v1, $s0, 0x10
    ctx->pc = 0x1c270cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
label_1c2710:
    // 0x1c2710: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
label_1c2714:
    if (ctx->pc == 0x1C2714u) {
        ctx->pc = 0x1C2714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2710u;
        // 0x1c2714: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2718u;
        goto label_1c2718;
    }
    ctx->pc = 0x1C2710u;
    {
        const bool branch_taken_0x1c2710 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2710u;
        // 0x1c2714: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2710) {
            ctx->pc = 0x1C26BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c26bc;
        }
    }
    ctx->pc = 0x1C2718u;
label_1c2718:
    // 0x1c2718: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c2718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1c271c:
    // 0x1c271c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c271cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c2720:
    // 0x1c2720: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c2720u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c2724:
    // 0x1c2724: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c2724u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c2728:
    // 0x1c2728: 0x3e00008  jr          $ra
label_1c272c:
    if (ctx->pc == 0x1C272Cu) {
        ctx->pc = 0x1C272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2728u;
        // 0x1c272c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2730u;
        goto label_1c2730;
    }
    ctx->pc = 0x1C2728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2728u;
        // 0x1c272c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2730u;
label_1c2730:
    // 0x1c2730: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c2730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1c2734:
    // 0x1c2734: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1c2734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1c2738:
    // 0x1c2738: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1c2738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1c273c:
    // 0x1c273c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c273cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1c2740:
    // 0x1c2740: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c2740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1c2744:
    // 0x1c2744: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c2744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1c2748:
    // 0x1c2748: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c2748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c274c:
    // 0x1c274c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c274cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c2750:
    // 0x1c2750: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c2750u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2754:
    // 0x1c2754: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c2754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2758:
    // 0x1c2758: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c2758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1c275c:
    // 0x1c275c: 0x2442f280  addiu       $v0, $v0, -0xD80
    ctx->pc = 0x1c275cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963840));
label_1c2760:
    // 0x1c2760: 0x519021  addu        $s2, $v0, $s1
    ctx->pc = 0x1c2760u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1c2764:
    // 0x1c2764: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1c2764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c2768:
    // 0x1c2768: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1c276c:
    if (ctx->pc == 0x1C276Cu) {
        ctx->pc = 0x1C276Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2768u;
        // 0x1c276c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2770u;
        goto label_1c2770;
    }
    ctx->pc = 0x1C2768u;
    {
        const bool branch_taken_0x1c2768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C276Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2768u;
        // 0x1c276c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2768) {
            ctx->pc = 0x1C277Cu;
            goto label_1c277c;
        }
    }
    ctx->pc = 0x1C2770u;
label_1c2770:
    // 0x1c2770: 0xc070080  jal         func_1C0200
label_1c2774:
    if (ctx->pc == 0x1C2774u) {
        ctx->pc = 0x1C2774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2770u;
        // 0x1c2774: 0x24056080  addiu       $a1, $zero, 0x6080 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2778u;
        goto label_1c2778;
    }
    ctx->pc = 0x1C2770u;
    SET_GPR_U32(ctx, 31, 0x1C2778u);
    ctx->pc = 0x1C2774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2770u;
    // 0x1c2774: 0x24056080  addiu       $a1, $zero, 0x6080 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1C2778u;
label_1c2778:
    // 0x1c2778: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1c2778u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1c277c:
    // 0x1c277c: 0x0  nop
    ctx->pc = 0x1c277cu;
    // NOP
label_1c2780:
    // 0x1c2780: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c2780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1c2784:
    // 0x1c2784: 0x2442f240  addiu       $v0, $v0, -0xDC0
    ctx->pc = 0x1c2784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963776));
label_1c2788:
    // 0x1c2788: 0x519021  addu        $s2, $v0, $s1
    ctx->pc = 0x1c2788u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1c278c:
    // 0x1c278c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1c278cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c2790:
    // 0x1c2790: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1c2794:
    if (ctx->pc == 0x1C2794u) {
        ctx->pc = 0x1C2794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2790u;
        // 0x1c2794: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2798u;
        goto label_1c2798;
    }
    ctx->pc = 0x1C2790u;
    {
        const bool branch_taken_0x1c2790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2790u;
        // 0x1c2794: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2790) {
            ctx->pc = 0x1C27A4u;
            goto label_1c27a4;
        }
    }
    ctx->pc = 0x1C2798u;
label_1c2798:
    // 0x1c2798: 0xc070080  jal         func_1C0200
label_1c279c:
    if (ctx->pc == 0x1C279Cu) {
        ctx->pc = 0x1C279Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2798u;
        // 0x1c279c: 0x24050480  addiu       $a1, $zero, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C27A0u;
        goto label_1c27a0;
    }
    ctx->pc = 0x1C2798u;
    SET_GPR_U32(ctx, 31, 0x1C27A0u);
    ctx->pc = 0x1C279Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2798u;
    // 0x1c279c: 0x24050480  addiu       $a1, $zero, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1C27A0u;
label_1c27a0:
    // 0x1c27a0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1c27a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1c27a4:
    // 0x1c27a4: 0x0  nop
    ctx->pc = 0x1c27a4u;
    // NOP
label_1c27a8:
    // 0x1c27a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c27a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c27ac:
    // 0x1c27ac: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x1c27acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
label_1c27b0:
    // 0x1c27b0: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_1c27b4:
    if (ctx->pc == 0x1C27B4u) {
        ctx->pc = 0x1C27B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C27B0u;
        // 0x1c27b4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C27B8u;
        goto label_1c27b8;
    }
    ctx->pc = 0x1C27B0u;
    {
        const bool branch_taken_0x1c27b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C27B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C27B0u;
        // 0x1c27b4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c27b0) {
            ctx->pc = 0x1C2758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2758;
        }
    }
    ctx->pc = 0x1C27B8u;
label_1c27b8:
    // 0x1c27b8: 0xc041738  jal         func_105CE0
label_1c27bc:
    if (ctx->pc == 0x1C27BCu) {
        ctx->pc = 0x1C27BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C27B8u;
        // 0x1c27bc: 0x240407fa  addiu       $a0, $zero, 0x7FA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2042));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C27C0u;
        goto label_1c27c0;
    }
    ctx->pc = 0x1C27B8u;
    SET_GPR_U32(ctx, 31, 0x1C27C0u);
    ctx->pc = 0x1C27BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C27B8u;
    // 0x1c27bc: 0x240407fa  addiu       $a0, $zero, 0x7FA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2042));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x1C27B8u, 0x1C27C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C27C0u;
label_1c27c0:
    // 0x1c27c0: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x1c27c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_1c27c4:
    // 0x1c27c4: 0xc070080  jal         func_1C0200
label_1c27c8:
    if (ctx->pc == 0x1C27C8u) {
        ctx->pc = 0x1C27C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C27C4u;
        // 0x1c27c8: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C27CCu;
        goto label_1c27cc;
    }
    ctx->pc = 0x1C27C4u;
    SET_GPR_U32(ctx, 31, 0x1C27CCu);
    ctx->pc = 0x1C27C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C27C4u;
    // 0x1c27c8: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1C27CCu;
label_1c27cc:
    // 0x1c27cc: 0x240407fa  addiu       $a0, $zero, 0x7FA
    ctx->pc = 0x1c27ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2042));
label_1c27d0:
    // 0x1c27d0: 0xc0416e4  jal         func_105B90
label_1c27d4:
    if (ctx->pc == 0x1C27D4u) {
        ctx->pc = 0x1C27D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C27D0u;
        // 0x1c27d4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C27D8u;
        goto label_1c27d8;
    }
    ctx->pc = 0x1C27D0u;
    SET_GPR_U32(ctx, 31, 0x1C27D8u);
    ctx->pc = 0x1C27D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C27D0u;
    // 0x1c27d4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x1C27D0u, 0x1C27D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C27D8u;
label_1c27d8:
    // 0x1c27d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c27d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c27dc:
    // 0x1c27dc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c27dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c27e0:
    // 0x1c27e0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c27e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c27e4:
    // 0x1c27e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c27e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c27e8:
    // 0x1c27e8: 0xc0602c8  jal         func_180B20
label_1c27ec:
    if (ctx->pc == 0x1C27ECu) {
        ctx->pc = 0x1C27ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C27E8u;
        // 0x1c27ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C27F0u;
        goto label_1c27f0;
    }
    ctx->pc = 0x1C27E8u;
    SET_GPR_U32(ctx, 31, 0x1C27F0u);
    ctx->pc = 0x1C27ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C27E8u;
    // 0x1c27ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180B20u;
    { ctx->pc = 0x180b20; return; }
    ctx->pc = 0x1C27F0u;
label_1c27f0:
    // 0x1c27f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c27f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c27f4:
    // 0x1c27f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c27f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c27f8:
    // 0x1c27f8: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c27f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1c27fc:
    // 0x1c27fc: 0x2442f280  addiu       $v0, $v0, -0xD80
    ctx->pc = 0x1c27fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963840));
label_1c2800:
    // 0x1c2800: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1c2800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1c2804:
    // 0x1c2804: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x1c2804u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c2808:
    // 0x1c2808: 0xc060678  jal         func_1819E0
label_1c280c:
    if (ctx->pc == 0x1C280Cu) {
        ctx->pc = 0x1C280Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2808u;
        // 0x1c280c: 0x26b40080  addiu       $s4, $s5, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2810u;
        goto label_1c2810;
    }
    ctx->pc = 0x1C2808u;
    SET_GPR_U32(ctx, 31, 0x1C2810u);
    ctx->pc = 0x1C280Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2808u;
    // 0x1c280c: 0x26b40080  addiu       $s4, $s5, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1819E0u;
    { ctx->pc = 0x1819e0; return; }
    ctx->pc = 0x1C2810u;
label_1c2810:
    // 0x1c2810: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c2810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1c2814:
    // 0x1c2814: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c2814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c2818:
    // 0x1c2818: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1c2818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1c281c:
    // 0x1c281c: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x1c281cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1c2820:
    // 0x1c2820: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c2820u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2824:
    // 0x1c2824: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c2824u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2828:
    // 0x1c2828: 0x240a00c0  addiu       $t2, $zero, 0xC0
    ctx->pc = 0x1c2828u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_1c282c:
    // 0x1c282c: 0xc060300  jal         func_180C00
label_1c2830:
    if (ctx->pc == 0x1C2830u) {
        ctx->pc = 0x1C2830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C282Cu;
        // 0x1c2830: 0x240b0080  addiu       $t3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2834u;
        goto label_1c2834;
    }
    ctx->pc = 0x1C282Cu;
    SET_GPR_U32(ctx, 31, 0x1C2834u);
    ctx->pc = 0x1C2830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C282Cu;
    // 0x1c2830: 0x240b0080  addiu       $t3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180C00u;
    { ctx->pc = 0x180c00; return; }
    ctx->pc = 0x1C2834u;
label_1c2834:
    // 0x1c2834: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c2834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1c2838:
    // 0x1c2838: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x1c2838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_1c283c:
    // 0x1c283c: 0xc08e93e  jal         func_23A4F8
label_1c2840:
    if (ctx->pc == 0x1C2840u) {
        ctx->pc = 0x1C2840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C283Cu;
        // 0x1c2840: 0x24066000  addiu       $a2, $zero, 0x6000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2844u;
        goto label_1c2844;
    }
    ctx->pc = 0x1C283Cu;
    SET_GPR_U32(ctx, 31, 0x1C2844u);
    ctx->pc = 0x1C2840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C283Cu;
    // 0x1c2840: 0x24066000  addiu       $a2, $zero, 0x6000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x1C2844u;
label_1c2844:
    // 0x1c2844: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c2844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1c2848:
    // 0x1c2848: 0x2442f240  addiu       $v0, $v0, -0xDC0
    ctx->pc = 0x1c2848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963776));
label_1c284c:
    // 0x1c284c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1c284cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1c2850:
    // 0x1c2850: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x1c2850u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c2854:
    // 0x1c2854: 0xc060668  jal         func_1819A0
label_1c2858:
    if (ctx->pc == 0x1C2858u) {
        ctx->pc = 0x1C2858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2854u;
        // 0x1c2858: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C285Cu;
        goto label_1c285c;
    }
    ctx->pc = 0x1C2854u;
    SET_GPR_U32(ctx, 31, 0x1C285Cu);
    ctx->pc = 0x1C2858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2854u;
    // 0x1c2858: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1819A0u;
    { ctx->pc = 0x1819a0; return; }
    ctx->pc = 0x1C285Cu;
label_1c285c:
    // 0x1c285c: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x1c285cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c2860:
    // 0x1c2860: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c2860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c2864:
    // 0x1c2864: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c2864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1c2868:
    // 0x1c2868: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c2868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c286c:
    // 0x1c286c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c286cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2870:
    // 0x1c2870: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c2870u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2874:
    // 0x1c2874: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c2874u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2878:
    // 0x1c2878: 0xc060300  jal         func_180C00
label_1c287c:
    if (ctx->pc == 0x1C287Cu) {
        ctx->pc = 0x1C287Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2878u;
        // 0x1c287c: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2880u;
        goto label_1c2880;
    }
    ctx->pc = 0x1C2878u;
    SET_GPR_U32(ctx, 31, 0x1C2880u);
    ctx->pc = 0x1C287Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2878u;
    // 0x1c287c: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180C00u;
    { ctx->pc = 0x180c00; return; }
    ctx->pc = 0x1C2880u;
label_1c2880:
    // 0x1c2880: 0x26840080  addiu       $a0, $s4, 0x80
    ctx->pc = 0x1c2880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
label_1c2884:
    // 0x1c2884: 0x26256040  addiu       $a1, $s1, 0x6040
    ctx->pc = 0x1c2884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24640));
label_1c2888:
    // 0x1c2888: 0xc08e93e  jal         func_23A4F8
label_1c288c:
    if (ctx->pc == 0x1C288Cu) {
        ctx->pc = 0x1C288Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2888u;
        // 0x1c288c: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2890u;
        goto label_1c2890;
    }
    ctx->pc = 0x1C2888u;
    SET_GPR_U32(ctx, 31, 0x1C2890u);
    ctx->pc = 0x1C288Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2888u;
    // 0x1c288c: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x1C2890u;
label_1c2890:
    // 0x1c2890: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1c2890u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1c2894:
    // 0x1c2894: 0x2a620010  slti        $v0, $s3, 0x10
    ctx->pc = 0x1c2894u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)16) ? 1 : 0);
label_1c2898:
    // 0x1c2898: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
label_1c289c:
    if (ctx->pc == 0x1C289Cu) {
        ctx->pc = 0x1C289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2898u;
        // 0x1c289c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C28A0u;
        goto label_1c28a0;
    }
    ctx->pc = 0x1C2898u;
    {
        const bool branch_taken_0x1c2898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2898u;
        // 0x1c289c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2898) {
            ctx->pc = 0x1C27E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c27e4;
        }
    }
    ctx->pc = 0x1C28A0u;
label_1c28a0:
    // 0x1c28a0: 0xc070038  jal         func_1C00E0
label_1c28a4:
    if (ctx->pc == 0x1C28A4u) {
        ctx->pc = 0x1C28A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C28A0u;
        // 0x1c28a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C28A8u;
        goto label_1c28a8;
    }
    ctx->pc = 0x1C28A0u;
    SET_GPR_U32(ctx, 31, 0x1C28A8u);
    ctx->pc = 0x1C28A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C28A0u;
    // 0x1c28a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1C28A8u;
label_1c28a8:
    // 0x1c28a8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1c28a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1c28ac:
    // 0x1c28ac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1c28acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c28b0:
    // 0x1c28b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c28b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c28b4:
    // 0x1c28b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c28b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c28b8:
    // 0x1c28b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c28b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c28bc:
    // 0x1c28bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c28bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c28c0:
    // 0x1c28c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c28c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c28c4:
    // 0x1c28c4: 0x3e00008  jr          $ra
label_1c28c8:
    if (ctx->pc == 0x1C28C8u) {
        ctx->pc = 0x1C28C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C28C4u;
        // 0x1c28c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C28CCu;
        goto label_1c28cc;
    }
    ctx->pc = 0x1C28C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C28C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C28C4u;
        // 0x1c28c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C28C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C28CCu;
label_1c28cc:
    // 0x1c28cc: 0x0  nop
    ctx->pc = 0x1c28ccu;
    // NOP
label_1c28d0:
    // 0x1c28d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c28d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1c28d4:
    // 0x1c28d4: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c28d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1c28d8:
    // 0x1c28d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c28d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1c28dc:
    // 0x1c28dc: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1c28dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_1c28e0:
    // 0x1c28e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c28e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c28e4:
    // 0x1c28e4: 0x2442f240  addiu       $v0, $v0, -0xDC0
    ctx->pc = 0x1c28e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963776));
label_1c28e8:
    // 0x1c28e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c28e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c28ec:
    // 0x1c28ec: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1c28ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    ctx->pc = 0x1c28f0u;
    return;
}

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

// Function: entry_0029b9e8
// Address: 0x29b9e8 - 0x2bfab4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void entry_0029b9e8_part47(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2b2148u: goto label_2b2148;
        case 0x2b214cu: goto label_2b214c;
        case 0x2b2150u: goto label_2b2150;
        case 0x2b2154u: goto label_2b2154;
        case 0x2b2158u: goto label_2b2158;
        case 0x2b215cu: goto label_2b215c;
        case 0x2b2160u: goto label_2b2160;
        case 0x2b2164u: goto label_2b2164;
        case 0x2b2168u: goto label_2b2168;
        case 0x2b216cu: goto label_2b216c;
        case 0x2b2170u: goto label_2b2170;
        case 0x2b2174u: goto label_2b2174;
        case 0x2b2178u: goto label_2b2178;
        case 0x2b217cu: goto label_2b217c;
        case 0x2b2180u: goto label_2b2180;
        case 0x2b2184u: goto label_2b2184;
        case 0x2b2188u: goto label_2b2188;
        case 0x2b218cu: goto label_2b218c;
        case 0x2b2190u: goto label_2b2190;
        case 0x2b2194u: goto label_2b2194;
        case 0x2b2198u: goto label_2b2198;
        case 0x2b219cu: goto label_2b219c;
        case 0x2b21a0u: goto label_2b21a0;
        case 0x2b21a4u: goto label_2b21a4;
        case 0x2b21a8u: goto label_2b21a8;
        case 0x2b21acu: goto label_2b21ac;
        case 0x2b21b0u: goto label_2b21b0;
        case 0x2b21b4u: goto label_2b21b4;
        case 0x2b21b8u: goto label_2b21b8;
        case 0x2b21bcu: goto label_2b21bc;
        case 0x2b21c0u: goto label_2b21c0;
        case 0x2b21c4u: goto label_2b21c4;
        case 0x2b21c8u: goto label_2b21c8;
        case 0x2b21ccu: goto label_2b21cc;
        case 0x2b21d0u: goto label_2b21d0;
        case 0x2b21d4u: goto label_2b21d4;
        case 0x2b21d8u: goto label_2b21d8;
        case 0x2b21dcu: goto label_2b21dc;
        case 0x2b21e0u: goto label_2b21e0;
        case 0x2b21e4u: goto label_2b21e4;
        case 0x2b21e8u: goto label_2b21e8;
        case 0x2b21ecu: goto label_2b21ec;
        case 0x2b21f0u: goto label_2b21f0;
        case 0x2b21f4u: goto label_2b21f4;
        case 0x2b21f8u: goto label_2b21f8;
        case 0x2b21fcu: goto label_2b21fc;
        case 0x2b2200u: goto label_2b2200;
        case 0x2b2204u: goto label_2b2204;
        case 0x2b2208u: goto label_2b2208;
        case 0x2b220cu: goto label_2b220c;
        case 0x2b2210u: goto label_2b2210;
        case 0x2b2214u: goto label_2b2214;
        case 0x2b2218u: goto label_2b2218;
        case 0x2b221cu: goto label_2b221c;
        case 0x2b2220u: goto label_2b2220;
        case 0x2b2224u: goto label_2b2224;
        case 0x2b2228u: goto label_2b2228;
        case 0x2b222cu: goto label_2b222c;
        case 0x2b2230u: goto label_2b2230;
        case 0x2b2234u: goto label_2b2234;
        case 0x2b2238u: goto label_2b2238;
        case 0x2b223cu: goto label_2b223c;
        case 0x2b2240u: goto label_2b2240;
        case 0x2b2244u: goto label_2b2244;
        case 0x2b2248u: goto label_2b2248;
        case 0x2b224cu: goto label_2b224c;
        case 0x2b2250u: goto label_2b2250;
        case 0x2b2254u: goto label_2b2254;
        case 0x2b2258u: goto label_2b2258;
        case 0x2b225cu: goto label_2b225c;
        case 0x2b2260u: goto label_2b2260;
        case 0x2b2264u: goto label_2b2264;
        case 0x2b2268u: goto label_2b2268;
        case 0x2b226cu: goto label_2b226c;
        case 0x2b2270u: goto label_2b2270;
        case 0x2b2274u: goto label_2b2274;
        case 0x2b2278u: goto label_2b2278;
        case 0x2b227cu: goto label_2b227c;
        case 0x2b2280u: goto label_2b2280;
        case 0x2b2284u: goto label_2b2284;
        case 0x2b2288u: goto label_2b2288;
        case 0x2b228cu: goto label_2b228c;
        case 0x2b2290u: goto label_2b2290;
        case 0x2b2294u: goto label_2b2294;
        case 0x2b2298u: goto label_2b2298;
        case 0x2b229cu: goto label_2b229c;
        case 0x2b22a0u: goto label_2b22a0;
        case 0x2b22a4u: goto label_2b22a4;
        case 0x2b22a8u: goto label_2b22a8;
        case 0x2b22acu: goto label_2b22ac;
        case 0x2b22b0u: goto label_2b22b0;
        case 0x2b22b4u: goto label_2b22b4;
        case 0x2b22b8u: goto label_2b22b8;
        case 0x2b22bcu: goto label_2b22bc;
        case 0x2b22c0u: goto label_2b22c0;
        case 0x2b22c4u: goto label_2b22c4;
        case 0x2b22c8u: goto label_2b22c8;
        case 0x2b22ccu: goto label_2b22cc;
        case 0x2b22d0u: goto label_2b22d0;
        case 0x2b22d4u: goto label_2b22d4;
        case 0x2b22d8u: goto label_2b22d8;
        case 0x2b22dcu: goto label_2b22dc;
        case 0x2b22e0u: goto label_2b22e0;
        case 0x2b22e4u: goto label_2b22e4;
        case 0x2b22e8u: goto label_2b22e8;
        case 0x2b22ecu: goto label_2b22ec;
        case 0x2b22f0u: goto label_2b22f0;
        case 0x2b22f4u: goto label_2b22f4;
        case 0x2b22f8u: goto label_2b22f8;
        case 0x2b22fcu: goto label_2b22fc;
        case 0x2b2300u: goto label_2b2300;
        case 0x2b2304u: goto label_2b2304;
        case 0x2b2308u: goto label_2b2308;
        case 0x2b230cu: goto label_2b230c;
        case 0x2b2310u: goto label_2b2310;
        case 0x2b2314u: goto label_2b2314;
        case 0x2b2318u: goto label_2b2318;
        case 0x2b231cu: goto label_2b231c;
        case 0x2b2320u: goto label_2b2320;
        case 0x2b2324u: goto label_2b2324;
        case 0x2b2328u: goto label_2b2328;
        case 0x2b232cu: goto label_2b232c;
        case 0x2b2330u: goto label_2b2330;
        case 0x2b2334u: goto label_2b2334;
        case 0x2b2338u: goto label_2b2338;
        case 0x2b233cu: goto label_2b233c;
        case 0x2b2340u: goto label_2b2340;
        case 0x2b2344u: goto label_2b2344;
        case 0x2b2348u: goto label_2b2348;
        case 0x2b234cu: goto label_2b234c;
        case 0x2b2350u: goto label_2b2350;
        case 0x2b2354u: goto label_2b2354;
        case 0x2b2358u: goto label_2b2358;
        case 0x2b235cu: goto label_2b235c;
        case 0x2b2360u: goto label_2b2360;
        case 0x2b2364u: goto label_2b2364;
        case 0x2b2368u: goto label_2b2368;
        case 0x2b236cu: goto label_2b236c;
        case 0x2b2370u: goto label_2b2370;
        case 0x2b2374u: goto label_2b2374;
        case 0x2b2378u: goto label_2b2378;
        case 0x2b237cu: goto label_2b237c;
        case 0x2b2380u: goto label_2b2380;
        case 0x2b2384u: goto label_2b2384;
        case 0x2b2388u: goto label_2b2388;
        case 0x2b238cu: goto label_2b238c;
        case 0x2b2390u: goto label_2b2390;
        case 0x2b2394u: goto label_2b2394;
        case 0x2b2398u: goto label_2b2398;
        case 0x2b239cu: goto label_2b239c;
        case 0x2b23a0u: goto label_2b23a0;
        case 0x2b23a4u: goto label_2b23a4;
        case 0x2b23a8u: goto label_2b23a8;
        case 0x2b23acu: goto label_2b23ac;
        case 0x2b23b0u: goto label_2b23b0;
        case 0x2b23b4u: goto label_2b23b4;
        case 0x2b23b8u: goto label_2b23b8;
        case 0x2b23bcu: goto label_2b23bc;
        case 0x2b23c0u: goto label_2b23c0;
        case 0x2b23c4u: goto label_2b23c4;
        case 0x2b23c8u: goto label_2b23c8;
        case 0x2b23ccu: goto label_2b23cc;
        case 0x2b23d0u: goto label_2b23d0;
        case 0x2b23d4u: goto label_2b23d4;
        case 0x2b23d8u: goto label_2b23d8;
        case 0x2b23dcu: goto label_2b23dc;
        case 0x2b23e0u: goto label_2b23e0;
        case 0x2b23e4u: goto label_2b23e4;
        case 0x2b23e8u: goto label_2b23e8;
        case 0x2b23ecu: goto label_2b23ec;
        case 0x2b23f0u: goto label_2b23f0;
        case 0x2b23f4u: goto label_2b23f4;
        case 0x2b23f8u: goto label_2b23f8;
        case 0x2b23fcu: goto label_2b23fc;
        case 0x2b2400u: goto label_2b2400;
        case 0x2b2404u: goto label_2b2404;
        case 0x2b2408u: goto label_2b2408;
        case 0x2b240cu: goto label_2b240c;
        case 0x2b2410u: goto label_2b2410;
        case 0x2b2414u: goto label_2b2414;
        case 0x2b2418u: goto label_2b2418;
        case 0x2b241cu: goto label_2b241c;
        case 0x2b2420u: goto label_2b2420;
        case 0x2b2424u: goto label_2b2424;
        case 0x2b2428u: goto label_2b2428;
        case 0x2b242cu: goto label_2b242c;
        case 0x2b2430u: goto label_2b2430;
        case 0x2b2434u: goto label_2b2434;
        case 0x2b2438u: goto label_2b2438;
        case 0x2b243cu: goto label_2b243c;
        case 0x2b2440u: goto label_2b2440;
        case 0x2b2444u: goto label_2b2444;
        case 0x2b2448u: goto label_2b2448;
        case 0x2b244cu: goto label_2b244c;
        case 0x2b2450u: goto label_2b2450;
        case 0x2b2454u: goto label_2b2454;
        case 0x2b2458u: goto label_2b2458;
        case 0x2b245cu: goto label_2b245c;
        case 0x2b2460u: goto label_2b2460;
        case 0x2b2464u: goto label_2b2464;
        case 0x2b2468u: goto label_2b2468;
        case 0x2b246cu: goto label_2b246c;
        case 0x2b2470u: goto label_2b2470;
        case 0x2b2474u: goto label_2b2474;
        case 0x2b2478u: goto label_2b2478;
        case 0x2b247cu: goto label_2b247c;
        case 0x2b2480u: goto label_2b2480;
        case 0x2b2484u: goto label_2b2484;
        case 0x2b2488u: goto label_2b2488;
        case 0x2b248cu: goto label_2b248c;
        case 0x2b2490u: goto label_2b2490;
        case 0x2b2494u: goto label_2b2494;
        case 0x2b2498u: goto label_2b2498;
        case 0x2b249cu: goto label_2b249c;
        case 0x2b24a0u: goto label_2b24a0;
        case 0x2b24a4u: goto label_2b24a4;
        case 0x2b24a8u: goto label_2b24a8;
        case 0x2b24acu: goto label_2b24ac;
        case 0x2b24b0u: goto label_2b24b0;
        case 0x2b24b4u: goto label_2b24b4;
        case 0x2b24b8u: goto label_2b24b8;
        case 0x2b24bcu: goto label_2b24bc;
        case 0x2b24c0u: goto label_2b24c0;
        case 0x2b24c4u: goto label_2b24c4;
        case 0x2b24c8u: goto label_2b24c8;
        case 0x2b24ccu: goto label_2b24cc;
        case 0x2b24d0u: goto label_2b24d0;
        case 0x2b24d4u: goto label_2b24d4;
        case 0x2b24d8u: goto label_2b24d8;
        case 0x2b24dcu: goto label_2b24dc;
        case 0x2b24e0u: goto label_2b24e0;
        case 0x2b24e4u: goto label_2b24e4;
        case 0x2b24e8u: goto label_2b24e8;
        case 0x2b24ecu: goto label_2b24ec;
        case 0x2b24f0u: goto label_2b24f0;
        case 0x2b24f4u: goto label_2b24f4;
        case 0x2b24f8u: goto label_2b24f8;
        case 0x2b24fcu: goto label_2b24fc;
        case 0x2b2500u: goto label_2b2500;
        case 0x2b2504u: goto label_2b2504;
        case 0x2b2508u: goto label_2b2508;
        case 0x2b250cu: goto label_2b250c;
        case 0x2b2510u: goto label_2b2510;
        case 0x2b2514u: goto label_2b2514;
        case 0x2b2518u: goto label_2b2518;
        case 0x2b251cu: goto label_2b251c;
        case 0x2b2520u: goto label_2b2520;
        case 0x2b2524u: goto label_2b2524;
        case 0x2b2528u: goto label_2b2528;
        case 0x2b252cu: goto label_2b252c;
        case 0x2b2530u: goto label_2b2530;
        case 0x2b2534u: goto label_2b2534;
        case 0x2b2538u: goto label_2b2538;
        case 0x2b253cu: goto label_2b253c;
        case 0x2b2540u: goto label_2b2540;
        case 0x2b2544u: goto label_2b2544;
        case 0x2b2548u: goto label_2b2548;
        case 0x2b254cu: goto label_2b254c;
        case 0x2b2550u: goto label_2b2550;
        case 0x2b2554u: goto label_2b2554;
        case 0x2b2558u: goto label_2b2558;
        case 0x2b255cu: goto label_2b255c;
        case 0x2b2560u: goto label_2b2560;
        case 0x2b2564u: goto label_2b2564;
        case 0x2b2568u: goto label_2b2568;
        case 0x2b256cu: goto label_2b256c;
        case 0x2b2570u: goto label_2b2570;
        case 0x2b2574u: goto label_2b2574;
        case 0x2b2578u: goto label_2b2578;
        case 0x2b257cu: goto label_2b257c;
        case 0x2b2580u: goto label_2b2580;
        case 0x2b2584u: goto label_2b2584;
        case 0x2b2588u: goto label_2b2588;
        case 0x2b258cu: goto label_2b258c;
        case 0x2b2590u: goto label_2b2590;
        case 0x2b2594u: goto label_2b2594;
        case 0x2b2598u: goto label_2b2598;
        case 0x2b259cu: goto label_2b259c;
        case 0x2b25a0u: goto label_2b25a0;
        case 0x2b25a4u: goto label_2b25a4;
        case 0x2b25a8u: goto label_2b25a8;
        case 0x2b25acu: goto label_2b25ac;
        case 0x2b25b0u: goto label_2b25b0;
        case 0x2b25b4u: goto label_2b25b4;
        case 0x2b25b8u: goto label_2b25b8;
        case 0x2b25bcu: goto label_2b25bc;
        case 0x2b25c0u: goto label_2b25c0;
        case 0x2b25c4u: goto label_2b25c4;
        case 0x2b25c8u: goto label_2b25c8;
        case 0x2b25ccu: goto label_2b25cc;
        case 0x2b25d0u: goto label_2b25d0;
        case 0x2b25d4u: goto label_2b25d4;
        case 0x2b25d8u: goto label_2b25d8;
        case 0x2b25dcu: goto label_2b25dc;
        case 0x2b25e0u: goto label_2b25e0;
        case 0x2b25e4u: goto label_2b25e4;
        case 0x2b25e8u: goto label_2b25e8;
        case 0x2b25ecu: goto label_2b25ec;
        case 0x2b25f0u: goto label_2b25f0;
        case 0x2b25f4u: goto label_2b25f4;
        case 0x2b25f8u: goto label_2b25f8;
        case 0x2b25fcu: goto label_2b25fc;
        case 0x2b2600u: goto label_2b2600;
        case 0x2b2604u: goto label_2b2604;
        case 0x2b2608u: goto label_2b2608;
        case 0x2b260cu: goto label_2b260c;
        case 0x2b2610u: goto label_2b2610;
        case 0x2b2614u: goto label_2b2614;
        case 0x2b2618u: goto label_2b2618;
        case 0x2b261cu: goto label_2b261c;
        case 0x2b2620u: goto label_2b2620;
        case 0x2b2624u: goto label_2b2624;
        case 0x2b2628u: goto label_2b2628;
        case 0x2b262cu: goto label_2b262c;
        case 0x2b2630u: goto label_2b2630;
        case 0x2b2634u: goto label_2b2634;
        case 0x2b2638u: goto label_2b2638;
        case 0x2b263cu: goto label_2b263c;
        case 0x2b2640u: goto label_2b2640;
        case 0x2b2644u: goto label_2b2644;
        case 0x2b2648u: goto label_2b2648;
        case 0x2b264cu: goto label_2b264c;
        case 0x2b2650u: goto label_2b2650;
        case 0x2b2654u: goto label_2b2654;
        case 0x2b2658u: goto label_2b2658;
        case 0x2b265cu: goto label_2b265c;
        case 0x2b2660u: goto label_2b2660;
        case 0x2b2664u: goto label_2b2664;
        case 0x2b2668u: goto label_2b2668;
        case 0x2b266cu: goto label_2b266c;
        case 0x2b2670u: goto label_2b2670;
        case 0x2b2674u: goto label_2b2674;
        case 0x2b2678u: goto label_2b2678;
        case 0x2b267cu: goto label_2b267c;
        case 0x2b2680u: goto label_2b2680;
        case 0x2b2684u: goto label_2b2684;
        case 0x2b2688u: goto label_2b2688;
        case 0x2b268cu: goto label_2b268c;
        case 0x2b2690u: goto label_2b2690;
        case 0x2b2694u: goto label_2b2694;
        case 0x2b2698u: goto label_2b2698;
        case 0x2b269cu: goto label_2b269c;
        case 0x2b26a0u: goto label_2b26a0;
        case 0x2b26a4u: goto label_2b26a4;
        case 0x2b26a8u: goto label_2b26a8;
        case 0x2b26acu: goto label_2b26ac;
        case 0x2b26b0u: goto label_2b26b0;
        case 0x2b26b4u: goto label_2b26b4;
        case 0x2b26b8u: goto label_2b26b8;
        case 0x2b26bcu: goto label_2b26bc;
        case 0x2b26c0u: goto label_2b26c0;
        case 0x2b26c4u: goto label_2b26c4;
        case 0x2b26c8u: goto label_2b26c8;
        case 0x2b26ccu: goto label_2b26cc;
        case 0x2b26d0u: goto label_2b26d0;
        case 0x2b26d4u: goto label_2b26d4;
        case 0x2b26d8u: goto label_2b26d8;
        case 0x2b26dcu: goto label_2b26dc;
        case 0x2b26e0u: goto label_2b26e0;
        case 0x2b26e4u: goto label_2b26e4;
        case 0x2b26e8u: goto label_2b26e8;
        case 0x2b26ecu: goto label_2b26ec;
        case 0x2b26f0u: goto label_2b26f0;
        case 0x2b26f4u: goto label_2b26f4;
        case 0x2b26f8u: goto label_2b26f8;
        case 0x2b26fcu: goto label_2b26fc;
        case 0x2b2700u: goto label_2b2700;
        case 0x2b2704u: goto label_2b2704;
        case 0x2b2708u: goto label_2b2708;
        case 0x2b270cu: goto label_2b270c;
        case 0x2b2710u: goto label_2b2710;
        case 0x2b2714u: goto label_2b2714;
        case 0x2b2718u: goto label_2b2718;
        case 0x2b271cu: goto label_2b271c;
        case 0x2b2720u: goto label_2b2720;
        case 0x2b2724u: goto label_2b2724;
        case 0x2b2728u: goto label_2b2728;
        case 0x2b272cu: goto label_2b272c;
        case 0x2b2730u: goto label_2b2730;
        case 0x2b2734u: goto label_2b2734;
        case 0x2b2738u: goto label_2b2738;
        case 0x2b273cu: goto label_2b273c;
        case 0x2b2740u: goto label_2b2740;
        case 0x2b2744u: goto label_2b2744;
        case 0x2b2748u: goto label_2b2748;
        case 0x2b274cu: goto label_2b274c;
        case 0x2b2750u: goto label_2b2750;
        case 0x2b2754u: goto label_2b2754;
        case 0x2b2758u: goto label_2b2758;
        case 0x2b275cu: goto label_2b275c;
        case 0x2b2760u: goto label_2b2760;
        case 0x2b2764u: goto label_2b2764;
        case 0x2b2768u: goto label_2b2768;
        case 0x2b276cu: goto label_2b276c;
        case 0x2b2770u: goto label_2b2770;
        case 0x2b2774u: goto label_2b2774;
        case 0x2b2778u: goto label_2b2778;
        case 0x2b277cu: goto label_2b277c;
        case 0x2b2780u: goto label_2b2780;
        case 0x2b2784u: goto label_2b2784;
        case 0x2b2788u: goto label_2b2788;
        case 0x2b278cu: goto label_2b278c;
        case 0x2b2790u: goto label_2b2790;
        case 0x2b2794u: goto label_2b2794;
        case 0x2b2798u: goto label_2b2798;
        case 0x2b279cu: goto label_2b279c;
        case 0x2b27a0u: goto label_2b27a0;
        case 0x2b27a4u: goto label_2b27a4;
        case 0x2b27a8u: goto label_2b27a8;
        case 0x2b27acu: goto label_2b27ac;
        case 0x2b27b0u: goto label_2b27b0;
        case 0x2b27b4u: goto label_2b27b4;
        case 0x2b27b8u: goto label_2b27b8;
        case 0x2b27bcu: goto label_2b27bc;
        case 0x2b27c0u: goto label_2b27c0;
        case 0x2b27c4u: goto label_2b27c4;
        case 0x2b27c8u: goto label_2b27c8;
        case 0x2b27ccu: goto label_2b27cc;
        case 0x2b27d0u: goto label_2b27d0;
        case 0x2b27d4u: goto label_2b27d4;
        case 0x2b27d8u: goto label_2b27d8;
        case 0x2b27dcu: goto label_2b27dc;
        case 0x2b27e0u: goto label_2b27e0;
        case 0x2b27e4u: goto label_2b27e4;
        case 0x2b27e8u: goto label_2b27e8;
        case 0x2b27ecu: goto label_2b27ec;
        case 0x2b27f0u: goto label_2b27f0;
        case 0x2b27f4u: goto label_2b27f4;
        case 0x2b27f8u: goto label_2b27f8;
        case 0x2b27fcu: goto label_2b27fc;
        case 0x2b2800u: goto label_2b2800;
        case 0x2b2804u: goto label_2b2804;
        case 0x2b2808u: goto label_2b2808;
        case 0x2b280cu: goto label_2b280c;
        case 0x2b2810u: goto label_2b2810;
        case 0x2b2814u: goto label_2b2814;
        case 0x2b2818u: goto label_2b2818;
        case 0x2b281cu: goto label_2b281c;
        case 0x2b2820u: goto label_2b2820;
        case 0x2b2824u: goto label_2b2824;
        case 0x2b2828u: goto label_2b2828;
        case 0x2b282cu: goto label_2b282c;
        case 0x2b2830u: goto label_2b2830;
        case 0x2b2834u: goto label_2b2834;
        case 0x2b2838u: goto label_2b2838;
        case 0x2b283cu: goto label_2b283c;
        case 0x2b2840u: goto label_2b2840;
        case 0x2b2844u: goto label_2b2844;
        case 0x2b2848u: goto label_2b2848;
        case 0x2b284cu: goto label_2b284c;
        case 0x2b2850u: goto label_2b2850;
        case 0x2b2854u: goto label_2b2854;
        case 0x2b2858u: goto label_2b2858;
        case 0x2b285cu: goto label_2b285c;
        case 0x2b2860u: goto label_2b2860;
        case 0x2b2864u: goto label_2b2864;
        case 0x2b2868u: goto label_2b2868;
        case 0x2b286cu: goto label_2b286c;
        case 0x2b2870u: goto label_2b2870;
        case 0x2b2874u: goto label_2b2874;
        case 0x2b2878u: goto label_2b2878;
        case 0x2b287cu: goto label_2b287c;
        case 0x2b2880u: goto label_2b2880;
        case 0x2b2884u: goto label_2b2884;
        case 0x2b2888u: goto label_2b2888;
        case 0x2b288cu: goto label_2b288c;
        case 0x2b2890u: goto label_2b2890;
        case 0x2b2894u: goto label_2b2894;
        case 0x2b2898u: goto label_2b2898;
        case 0x2b289cu: goto label_2b289c;
        case 0x2b28a0u: goto label_2b28a0;
        case 0x2b28a4u: goto label_2b28a4;
        case 0x2b28a8u: goto label_2b28a8;
        case 0x2b28acu: goto label_2b28ac;
        case 0x2b28b0u: goto label_2b28b0;
        case 0x2b28b4u: goto label_2b28b4;
        case 0x2b28b8u: goto label_2b28b8;
        case 0x2b28bcu: goto label_2b28bc;
        case 0x2b28c0u: goto label_2b28c0;
        case 0x2b28c4u: goto label_2b28c4;
        case 0x2b28c8u: goto label_2b28c8;
        case 0x2b28ccu: goto label_2b28cc;
        case 0x2b28d0u: goto label_2b28d0;
        case 0x2b28d4u: goto label_2b28d4;
        case 0x2b28d8u: goto label_2b28d8;
        case 0x2b28dcu: goto label_2b28dc;
        case 0x2b28e0u: goto label_2b28e0;
        case 0x2b28e4u: goto label_2b28e4;
        case 0x2b28e8u: goto label_2b28e8;
        case 0x2b28ecu: goto label_2b28ec;
        case 0x2b28f0u: goto label_2b28f0;
        case 0x2b28f4u: goto label_2b28f4;
        case 0x2b28f8u: goto label_2b28f8;
        case 0x2b28fcu: goto label_2b28fc;
        case 0x2b2900u: goto label_2b2900;
        case 0x2b2904u: goto label_2b2904;
        case 0x2b2908u: goto label_2b2908;
        case 0x2b290cu: goto label_2b290c;
        case 0x2b2910u: goto label_2b2910;
        case 0x2b2914u: goto label_2b2914;
        default: return;
    }

label_2b2148:
    // 0x2b2148: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2148u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b214c:
    // 0x2b214c: 0x1f121bc  .word       0x01F121BC                   # dsll32      $a0, $s1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b214cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 6));
label_2b2150:
    // 0x2b2150: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2150u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2154:
    // 0x2b2154: 0x1f128bd  .word       0x01F128BD                   # INVALID     $t7, $s1, 0x28BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2154u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2154 raw=0x01F128BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2158:
    // 0x2b2158: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2158u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b215c:
    // 0x2b215c: 0x1f130be  .word       0x01F130BE                   # dsrl32      $a2, $s1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b215cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) >> (32 + 2));
label_2b2160:
    // 0x2b2160: 0x81e4ab7d  lb          $a0, -0x5483($t7)
    ctx->pc = 0x2b2160u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2b2164:
    // 0x2b2164: 0x1f13e4b  .word       0x01F13E4B                   # movn        $a3, $t7, $s1 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2164u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 15));
label_2b2168:
    // 0x2b2168: 0x81f1137c  lb          $s1, 0x137C($t7)
    ctx->pc = 0x2b2168u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
label_2b216c:
    // 0x2b216c: 0x1f241bc  .word       0x01F241BC                   # dsll32      $t0, $s2, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b216cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 18) << (32 + 6));
label_2b2170:
    // 0x2b2170: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2170u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2174:
    // 0x2b2174: 0x1f248bd  .word       0x01F248BD                   # INVALID     $t7, $s2, 0x48BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2174u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2174 raw=0x01F248BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2178:
    // 0x2b2178: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2178u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b217c:
    // 0x2b217c: 0x1f250be  .word       0x01F250BE                   # dsrl32      $t2, $s2, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b217cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 18) >> (32 + 2));
label_2b2180:
    // 0x2b2180: 0x81e3cb7d  lb          $v1, -0x3483($t7)
    ctx->pc = 0x2b2180u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
label_2b2184:
    // 0x2b2184: 0x1f25d8b  .word       0x01F25D8B                   # movn        $t3, $t7, $s2 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2184u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 15));
label_2b2188:
    // 0x2b2188: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2188u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b218c:
    // 0x2b218c: 0x1f221bc  .word       0x01F221BC                   # dsll32      $a0, $s2, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b218cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 6));
label_2b2190:
    // 0x2b2190: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2190u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2194:
    // 0x2b2194: 0x1f228bd  .word       0x01F228BD                   # INVALID     $t7, $s2, 0x28BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2194u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2194 raw=0x01F228BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2198:
    // 0x2b2198: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2198u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b219c:
    // 0x2b219c: 0x1f230be  .word       0x01F230BE                   # dsrl32      $a2, $s2, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b219cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) >> (32 + 2));
label_2b21a0:
    // 0x2b21a0: 0x81e4b37d  lb          $a0, -0x4C83($t7)
    ctx->pc = 0x2b21a0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
label_2b21a4:
    // 0x2b21a4: 0x1f23e8b  .word       0x01F23E8B                   # movn        $a3, $t7, $s2 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b21a4u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 15));
label_2b21a8:
    // 0x2b21a8: 0x81f2137c  lb          $s2, 0x137C($t7)
    ctx->pc = 0x2b21a8u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
label_2b21ac:
    // 0x2b21ac: 0x1f341bc  .word       0x01F341BC                   # dsll32      $t0, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b21acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 19) << (32 + 6));
label_2b21b0:
    // 0x2b21b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b21b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b21b4:
    // 0x2b21b4: 0x1f348bd  .word       0x01F348BD                   # INVALID     $t7, $s3, 0x48BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b21b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B21B4 raw=0x01F348BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b21b8:
    // 0x2b21b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b21b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b21bc:
    // 0x2b21bc: 0x1f350be  .word       0x01F350BE                   # dsrl32      $t2, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b21bcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 19) >> (32 + 2));
label_2b21c0:
    // 0x2b21c0: 0x81e3d37d  lb          $v1, -0x2C83($t7)
    ctx->pc = 0x2b21c0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294955901)));
label_2b21c4:
    // 0x2b21c4: 0x1f35dcb  .word       0x01F35DCB                   # movn        $t3, $t7, $s3 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b21c4u;
    if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 15));
label_2b21c8:
    // 0x2b21c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b21c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b21cc:
    // 0x2b21cc: 0x1f321bc  .word       0x01F321BC                   # dsll32      $a0, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b21ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 6));
label_2b21d0:
    // 0x2b21d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b21d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b21d4:
    // 0x2b21d4: 0x1f328bd  .word       0x01F328BD                   # INVALID     $t7, $s3, 0x28BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b21d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B21D4 raw=0x01F328BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b21d8:
    // 0x2b21d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b21d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b21dc:
    // 0x2b21dc: 0x1f330be  .word       0x01F330BE                   # dsrl32      $a2, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b21dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) >> (32 + 2));
label_2b21e0:
    // 0x2b21e0: 0x81e4bb7d  lb          $a0, -0x4483($t7)
    ctx->pc = 0x2b21e0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294949757)));
label_2b21e4:
    // 0x2b21e4: 0x1f33ecb  .word       0x01F33ECB                   # movn        $a3, $t7, $s3 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b21e4u;
    if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 15));
label_2b21e8:
    // 0x2b21e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b21e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b21ec:
    // 0x2b21ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b21ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b21f0:
    // 0x2b21f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b21f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b21f4:
    // 0x2b21f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b21f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b21f8:
    // 0x2b21f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b21f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b21fc:
    // 0x2b21fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b21fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2200:
    // 0x2b2200: 0x81fb03bc  lb          $k1, 0x3BC($t7)
    ctx->pc = 0x2b2200u;
    SET_GPR_S32(ctx, 27, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2b2204:
    // 0x2b2204: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2204u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2208:
    // 0x2b2208: 0x81f3137c  lb          $s3, 0x137C($t7)
    ctx->pc = 0x2b2208u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
label_2b220c:
    // 0x2b220c: 0x1f041bc  .word       0x01F041BC                   # dsll32      $t0, $s0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b220cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 16) << (32 + 6));
label_2b2210:
    // 0x2b2210: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2210u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2214:
    // 0x2b2214: 0x1f048bd  .word       0x01F048BD                   # INVALID     $t7, $s0, 0x48BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2214u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2214 raw=0x01F048BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2218:
    // 0x2b2218: 0x80010ff2  lb          $at, 0xFF2($zero)
    ctx->pc = 0x2b2218u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0xFF2u));
label_2b221c:
    // 0x2b221c: 0x1f050be  .word       0x01F050BE                   # dsrl32      $t2, $s0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b221cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 16) >> (32 + 2));
label_2b2220:
    // 0x2b2220: 0x81e3db7d  lb          $v1, -0x2483($t7)
    ctx->pc = 0x2b2220u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294957949)));
label_2b2224:
    // 0x2b2224: 0x1f05d0b  .word       0x01F05D0B                   # movn        $t3, $t7, $s0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2224u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 15));
label_2b2228:
    // 0x2b2228: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2228u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b222c:
    // 0x2b222c: 0x1f021bc  .word       0x01F021BC                   # dsll32      $a0, $s0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b222cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 6));
label_2b2230:
    // 0x2b2230: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2230u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2234:
    // 0x2b2234: 0x1f028bd  .word       0x01F028BD                   # INVALID     $t7, $s0, 0x28BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2234u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2234 raw=0x01F028BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2238:
    // 0x2b2238: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2238u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b223c:
    // 0x2b223c: 0x1f030be  .word       0x01F030BE                   # dsrl32      $a2, $s0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b223cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) >> (32 + 2));
label_2b2240:
    // 0x2b2240: 0x81e4a37d  lb          $a0, -0x5C83($t7)
    ctx->pc = 0x2b2240u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2b2244:
    // 0x2b2244: 0x1f03e0b  .word       0x01F03E0B                   # movn        $a3, $t7, $s0 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2244u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 15));
label_2b2248:
    // 0x2b2248: 0x81f0137c  lb          $s0, 0x137C($t7)
    ctx->pc = 0x2b2248u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
label_2b224c:
    // 0x2b224c: 0x1f141bc  .word       0x01F141BC                   # dsll32      $t0, $s1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b224cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) << (32 + 6));
label_2b2250:
    // 0x2b2250: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2250u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2254:
    // 0x2b2254: 0x1f148bd  .word       0x01F148BD                   # INVALID     $t7, $s1, 0x48BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2254u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2254 raw=0x01F148BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2258:
    // 0x2b2258: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2258u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b225c:
    // 0x2b225c: 0x1f150be  .word       0x01F150BE                   # dsrl32      $t2, $s1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b225cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 17) >> (32 + 2));
label_2b2260:
    // 0x2b2260: 0x81e3c37d  lb          $v1, -0x3C83($t7)
    ctx->pc = 0x2b2260u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294951805)));
label_2b2264:
    // 0x2b2264: 0x1f15d4b  .word       0x01F15D4B                   # movn        $t3, $t7, $s1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2264u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 15));
label_2b2268:
    // 0x2b2268: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2268u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b226c:
    // 0x2b226c: 0x1f121bc  .word       0x01F121BC                   # dsll32      $a0, $s1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b226cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 6));
label_2b2270:
    // 0x2b2270: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2270u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2274:
    // 0x2b2274: 0x1f128bd  .word       0x01F128BD                   # INVALID     $t7, $s1, 0x28BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2274u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2274 raw=0x01F128BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2278:
    // 0x2b2278: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2278u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b227c:
    // 0x2b227c: 0x1f130be  .word       0x01F130BE                   # dsrl32      $a2, $s1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b227cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) >> (32 + 2));
label_2b2280:
    // 0x2b2280: 0x81e4ab7d  lb          $a0, -0x5483($t7)
    ctx->pc = 0x2b2280u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2b2284:
    // 0x2b2284: 0x1f13e4b  .word       0x01F13E4B                   # movn        $a3, $t7, $s1 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2284u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 15));
label_2b2288:
    // 0x2b2288: 0x81f1137c  lb          $s1, 0x137C($t7)
    ctx->pc = 0x2b2288u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
label_2b228c:
    // 0x2b228c: 0x1f241bc  .word       0x01F241BC                   # dsll32      $t0, $s2, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b228cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 18) << (32 + 6));
label_2b2290:
    // 0x2b2290: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2290u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2294:
    // 0x2b2294: 0x1f248bd  .word       0x01F248BD                   # INVALID     $t7, $s2, 0x48BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2294u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2294 raw=0x01F248BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2298:
    // 0x2b2298: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2298u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b229c:
    // 0x2b229c: 0x1f250be  .word       0x01F250BE                   # dsrl32      $t2, $s2, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b229cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 18) >> (32 + 2));
label_2b22a0:
    // 0x2b22a0: 0x81e3cb7d  lb          $v1, -0x3483($t7)
    ctx->pc = 0x2b22a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
label_2b22a4:
    // 0x2b22a4: 0x1f25d8b  .word       0x01F25D8B                   # movn        $t3, $t7, $s2 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b22a4u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 15));
label_2b22a8:
    // 0x2b22a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b22a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b22ac:
    // 0x2b22ac: 0x1f221bc  .word       0x01F221BC                   # dsll32      $a0, $s2, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b22acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 6));
label_2b22b0:
    // 0x2b22b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b22b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b22b4:
    // 0x2b22b4: 0x1f228bd  .word       0x01F228BD                   # INVALID     $t7, $s2, 0x28BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b22b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B22B4 raw=0x01F228BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b22b8:
    // 0x2b22b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b22b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b22bc:
    // 0x2b22bc: 0x1f230be  .word       0x01F230BE                   # dsrl32      $a2, $s2, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b22bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) >> (32 + 2));
label_2b22c0:
    // 0x2b22c0: 0x81e4b37d  lb          $a0, -0x4C83($t7)
    ctx->pc = 0x2b22c0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
label_2b22c4:
    // 0x2b22c4: 0x1f23e8b  .word       0x01F23E8B                   # movn        $a3, $t7, $s2 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b22c4u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 15));
label_2b22c8:
    // 0x2b22c8: 0x81f2137c  lb          $s2, 0x137C($t7)
    ctx->pc = 0x2b22c8u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
label_2b22cc:
    // 0x2b22cc: 0x1f341bc  .word       0x01F341BC                   # dsll32      $t0, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b22ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 19) << (32 + 6));
label_2b22d0:
    // 0x2b22d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b22d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b22d4:
    // 0x2b22d4: 0x1f348bd  .word       0x01F348BD                   # INVALID     $t7, $s3, 0x48BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b22d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B22D4 raw=0x01F348BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b22d8:
    // 0x2b22d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b22d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b22dc:
    // 0x2b22dc: 0x1f350be  .word       0x01F350BE                   # dsrl32      $t2, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b22dcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 19) >> (32 + 2));
label_2b22e0:
    // 0x2b22e0: 0x81e3d37d  lb          $v1, -0x2C83($t7)
    ctx->pc = 0x2b22e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294955901)));
label_2b22e4:
    // 0x2b22e4: 0x1f35dcb  .word       0x01F35DCB                   # movn        $t3, $t7, $s3 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b22e4u;
    if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 15));
label_2b22e8:
    // 0x2b22e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b22e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b22ec:
    // 0x2b22ec: 0x1f321bc  .word       0x01F321BC                   # dsll32      $a0, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b22ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 6));
label_2b22f0:
    // 0x2b22f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b22f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b22f4:
    // 0x2b22f4: 0x1f328bd  .word       0x01F328BD                   # INVALID     $t7, $s3, 0x28BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b22f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B22F4 raw=0x01F328BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b22f8:
    // 0x2b22f8: 0x520107e1  beql        $s0, $at, . + 4 + (0x7E1 << 2)
label_2b22fc:
    if (ctx->pc == 0x2B22FCu) {
        ctx->pc = 0x2B22FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B22F8u;
        // 0x2b22fc: 0x1f330be  .word       0x01F330BE                   # dsrl32      $a2, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) >> (32 + 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2300u;
        goto label_2b2300;
    }
    ctx->pc = 0x2B22F8u;
    {
        const bool branch_taken_0x2b22f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b22f8) {
            ctx->pc = 0x2B22FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B22F8u;
            // 0x2b22fc: 0x1f330be  .word       0x01F330BE                   # dsrl32      $a2, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) >> (32 + 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4280u;
            { ctx->pc = 0x2b4280; return; }
        }
    }
    ctx->pc = 0x2B2300u;
label_2b2300:
    // 0x2b2300: 0x81e4bb7d  lb          $a0, -0x4483($t7)
    ctx->pc = 0x2b2300u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294949757)));
label_2b2304:
    // 0x2b2304: 0x1f33ecb  .word       0x01F33ECB                   # movn        $a3, $t7, $s3 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2304u;
    if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 15));
label_2b2308:
    // 0x2b2308: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2308u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b230c:
    // 0x2b230c: 0x20f41c  .word       0x0020F41C                   # dmult       $at, $zero # 0000F400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b230cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B230C raw=0x0020F41C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2310:
    // 0x2b2310: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2310u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2314:
    // 0x2b2314: 0x4000ac  .word       0x004000AC                   # dadd        $zero, $v0, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2314u;
    { int64_t a = (int64_t)GPR_S64(ctx, 2); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b2318:
    // 0x2b2318: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2318u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b231c:
    // 0x2b231c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b231cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2320:
    // 0x2b2320: 0x81e3db7d  lb          $v1, -0x2483($t7)
    ctx->pc = 0x2b2320u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294957949)));
label_2b2324:
    // 0x2b2324: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2324u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2328:
    // 0x2b2328: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2328u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b232c:
    // 0x2b232c: 0x3e8402  .word       0x003E8402                   # srl         $s0, $fp, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b232cu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 30), 16));
label_2b2330:
    // 0x2b2330: 0x45000000  bc1f        . + 4 + (0x0 << 2)
label_2b2334:
    if (ctx->pc == 0x2B2334u) {
        ctx->pc = 0x2B2334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2330u;
        // 0x2b2334: 0x80401083  lb          $zero, 0x1083($v0) (Delay Slot)
        SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4227)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2338u;
        goto label_2b2338;
    }
    ctx->pc = 0x2B2330u;
    {
        const bool branch_taken_0x2b2330 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B2334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2330u;
        // 0x2b2334: 0x80401083  lb          $zero, 0x1083($v0) (Delay Slot)
        SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4227)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2330) {
            ctx->pc = 0x2B2334u;
            goto label_2b2334;
        }
    }
    ctx->pc = 0x2B2338u;
label_2b2338:
    // 0x2b2338: 0x43c80000  .word       0x43C80000                   # INVALID     $fp, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b2338u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1E at 0x2B2338 raw=0x43C80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b233c:
    // 0x2b233c: 0x80400662  lb          $zero, 0x662($v0)
    ctx->pc = 0x2b233cu;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1634)));
label_2b2340:
    // 0x2b2340: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2340u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2344:
    // 0x2b2344: 0x20065e  .word       0x0020065E                   # ddiv        $zero, $at, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2344u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2B2344 raw=0x0020065E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2348:
    // 0x2b2348: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2348u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b234c:
    // 0x2b234c: 0x3d842f  .word       0x003D842F                   # dsubu       $s0, $at, $sp # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b234cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) - GPR_U64(ctx, 29));
label_2b2350:
    // 0x2b2350: 0x11e807ff  beq         $t7, $t0, . + 4 + (0x7FF << 2)
label_2b2354:
    if (ctx->pc == 0x2B2354u) {
        ctx->pc = 0x2B2354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2350u;
        // 0x2b2354: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2358u;
        goto label_2b2358;
    }
    ctx->pc = 0x2B2350u;
    {
        const bool branch_taken_0x2b2350 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B2354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2350u;
        // 0x2b2354: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2350) {
            ctx->pc = 0x2B4350u;
            { ctx->pc = 0x2b4350; return; }
        }
    }
    ctx->pc = 0x2B2358u;
label_2b2358:
    // 0x2b2358: 0x220000  .word       0x00220000                   # sll         $zero, $v0, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2358u;
    
label_2b235c:
    // 0x2b235c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b235cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2360:
    // 0x2b2360: 0x33000f  .word       0x0033000F                   # sync # 00330000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2360u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2b2364:
    // 0x2b2364: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2364u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2368:
    // 0x2b2368: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2368u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b236c:
    // 0x2b236c: 0x208410  .word       0x00208410                   # mfhi        $s0 # 00200400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b236cu;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_2b2370:
    // 0x2b2370: 0x11ef07ff  beq         $t7, $t7, . + 4 + (0x7FF << 2)
label_2b2374:
    if (ctx->pc == 0x2B2374u) {
        ctx->pc = 0x2B2374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2370u;
        // 0x2b2374: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2378u;
        goto label_2b2378;
    }
    ctx->pc = 0x2B2370u;
    {
        const bool branch_taken_0x2b2370 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 15));
        ctx->pc = 0x2B2374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2370u;
        // 0x2b2374: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2370) {
            ctx->pc = 0x2B4370u;
            { ctx->pc = 0x2b4370; return; }
        }
    }
    ctx->pc = 0x2B2378u;
label_2b2378:
    // 0x2b2378: 0x100f7801  beq         $zero, $t7, . + 4 + (0x7801 << 2)
label_2b237c:
    if (ctx->pc == 0x2B237Cu) {
        ctx->pc = 0x2B237Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2378u;
        // 0x2b237c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2380u;
        goto label_2b2380;
    }
    ctx->pc = 0x2B2378u;
    {
        const bool branch_taken_0x2b2378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 15));
        ctx->pc = 0x2B237Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2378u;
        // 0x2b237c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2378) {
            ctx->pc = 0x2D0380u;
            return;
        }
    }
    ctx->pc = 0x2B2380u;
label_2b2380:
    // 0x2b2380: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2380u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2384:
    // 0x2b2384: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2384u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2388:
    // 0x2b2388: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2388u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b238c:
    // 0x2b238c: 0x30817d  .word       0x0030817D                   # INVALID     $at, $s0, -0x7E83 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b238cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B238C raw=0x0030817D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2390:
    // 0x2b2390: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2390u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2394:
    // 0x2b2394: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2394u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2398:
    // 0x2b2398: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2398u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b239c:
    // 0x2b239c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b239cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b23a0:
    // 0x2b23a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b23a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b23a4:
    // 0x2b23a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b23a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b23a8:
    // 0x2b23a8: 0x806a83fc  lb          $t2, -0x7C04($v1)
    ctx->pc = 0x2b23a8u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294935548)));
label_2b23ac:
    // 0x2b23ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b23acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b23b0:
    // 0x2b23b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b23b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b23b4:
    // 0x2b23b4: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b23b4u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b23b8:
    // 0x2b23b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b23b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b23bc:
    // 0x2b23bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b23bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b23c0:
    // 0x2b23c0: 0x800506bc  lb          $a1, 0x6BC($zero)
    ctx->pc = 0x2b23c0u;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0x6BCu));
label_2b23c4:
    // 0x2b23c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b23c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b23c8:
    // 0x2b23c8: 0x1ff2802  .word       0x01FF2802                   # srl         $a1, $ra, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b23c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 31), 0));
label_2b23cc:
    // 0x2b23cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b23ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b23d0:
    // 0x2b23d0: 0x500e0002  beql        $zero, $t6, . + 4 + (0x2 << 2)
label_2b23d4:
    if (ctx->pc == 0x2B23D4u) {
        ctx->pc = 0x2B23D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B23D0u;
        // 0x2b23d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B23D8u;
        goto label_2b23d8;
    }
    ctx->pc = 0x2B23D0u;
    {
        const bool branch_taken_0x2b23d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        if (branch_taken_0x2b23d0) {
            ctx->pc = 0x2B23D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B23D0u;
            // 0x2b23d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B23DCu;
            goto label_2b23dc;
        }
    }
    ctx->pc = 0x2B23D8u;
label_2b23d8:
    // 0x2b23d8: 0x100d031e  beq         $zero, $t5, . + 4 + (0x31E << 2)
label_2b23dc:
    if (ctx->pc == 0x2B23DCu) {
        ctx->pc = 0x2B23DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B23D8u;
        // 0x2b23dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B23E0u;
        goto label_2b23e0;
    }
    ctx->pc = 0x2B23D8u;
    {
        const bool branch_taken_0x2b23d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2B23DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B23D8u;
        // 0x2b23dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b23d8) {
            ctx->pc = 0x2B3054u;
            { ctx->pc = 0x2b3054; return; }
        }
    }
    ctx->pc = 0x2B23E0u;
label_2b23e0:
    // 0x2b23e0: 0x100d038f  beq         $zero, $t5, . + 4 + (0x38F << 2)
label_2b23e4:
    if (ctx->pc == 0x2B23E4u) {
        ctx->pc = 0x2B23E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B23E0u;
        // 0x2b23e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B23E8u;
        goto label_2b23e8;
    }
    ctx->pc = 0x2B23E0u;
    {
        const bool branch_taken_0x2b23e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2B23E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B23E0u;
        // 0x2b23e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b23e0) {
            ctx->pc = 0x2B3220u;
            { ctx->pc = 0x2b3220; return; }
        }
    }
    ctx->pc = 0x2B23E8u;
label_2b23e8:
    // 0x2b23e8: 0x9022803  j           func_408A00C
label_2b23ec:
    if (ctx->pc == 0x2B23ECu) {
        ctx->pc = 0x2B23ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B23E8u;
        // 0x2b23ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B23F0u;
        goto label_2b23f0;
    }
    ctx->pc = 0x2B23E8u;
    ctx->pc = 0x2B23ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B23E8u;
    // 0x2b23ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x408A00Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x408A00Cu, 0x2B23E8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B23F0u;
label_2b23f0:
    // 0x2b23f0: 0x1fc2800  .word       0x01FC2800                   # sll         $a1, $gp, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b23f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 28), 0));
label_2b23f4:
    // 0x2b23f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b23f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b23f8:
    // 0x2b23f8: 0x1e12801  .word       0x01E12801                   # INVALID     $t7, $at, 0x2801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b23f8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B23F8 raw=0x01E12801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b23fc:
    // 0x2b23fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b23fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2400:
    // 0x2b2400: 0x10072804  beq         $zero, $a3, . + 4 + (0x2804 << 2)
label_2b2404:
    if (ctx->pc == 0x2B2404u) {
        ctx->pc = 0x2B2404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2400u;
        // 0x2b2404: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2408u;
        goto label_2b2408;
    }
    ctx->pc = 0x2B2400u;
    {
        const bool branch_taken_0x2b2400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B2404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2400u;
        // 0x2b2404: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2400) {
            ctx->pc = 0x2BC414u;
            { ctx->pc = 0x2bc414; return; }
        }
    }
    ctx->pc = 0x2B2408u;
label_2b2408:
    // 0x2b2408: 0x800812f4  lb          $t0, 0x12F4($zero)
    ctx->pc = 0x2b2408u;
    SET_GPR_S32(ctx, 8, (int8_t)FAST_READ8(0x12F4u));
label_2b240c:
    // 0x2b240c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b240cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2410:
    // 0x2b2410: 0x1e32803  .word       0x01E32803                   # sra         $a1, $v1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2410u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 0));
label_2b2414:
    // 0x2b2414: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2414u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2418:
    // 0x2b2418: 0x100c6800  beq         $zero, $t4, . + 4 + (0x6800 << 2)
label_2b241c:
    if (ctx->pc == 0x2B241Cu) {
        ctx->pc = 0x2B241Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2418u;
        // 0x2b241c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2420u;
        goto label_2b2420;
    }
    ctx->pc = 0x2B2418u;
    {
        const bool branch_taken_0x2b2418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 12));
        ctx->pc = 0x2B241Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2418u;
        // 0x2b241c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2418) {
            ctx->pc = 0x2CC41Cu;
            return;
        }
    }
    ctx->pc = 0x2B2420u;
label_2b2420:
    // 0x2b2420: 0x81ede37d  lb          $t5, -0x1C83($t7)
    ctx->pc = 0x2b2420u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294959997)));
label_2b2424:
    // 0x2b2424: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2424u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2428:
    // 0x2b2428: 0x81ed0b7d  lb          $t5, 0xB7D($t7)
    ctx->pc = 0x2b2428u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2941)));
label_2b242c:
    // 0x2b242c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b242cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2430:
    // 0x2b2430: 0x81edfb7d  lb          $t5, -0x483($t7)
    ctx->pc = 0x2b2430u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294966141)));
label_2b2434:
    // 0x2b2434: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2434u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2438:
    // 0x2b2438: 0x81ed1b7d  lb          $t5, 0x1B7D($t7)
    ctx->pc = 0x2b2438u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7037)));
label_2b243c:
    // 0x2b243c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b243cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2440:
    // 0x2b2440: 0x11e907ff  beq         $t7, $t1, . + 4 + (0x7FF << 2)
label_2b2444:
    if (ctx->pc == 0x2B2444u) {
        ctx->pc = 0x2B2444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2440u;
        // 0x2b2444: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2448u;
        goto label_2b2448;
    }
    ctx->pc = 0x2B2440u;
    {
        const bool branch_taken_0x2b2440 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 9));
        ctx->pc = 0x2B2444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2440u;
        // 0x2b2444: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2440) {
            ctx->pc = 0x2B4440u;
            { ctx->pc = 0x2b4440; return; }
        }
    }
    ctx->pc = 0x2B2448u;
label_2b2448:
    // 0x2b2448: 0x22000000  addi        $zero, $s0, 0x0
    ctx->pc = 0x2b2448u;
    // NOP (addi to $zero)
label_2b244c:
    // 0x2b244c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b244cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2450:
    // 0x2b2450: 0x10050001  beq         $zero, $a1, . + 4 + (0x1 << 2)
label_2b2454:
    if (ctx->pc == 0x2B2454u) {
        ctx->pc = 0x2B2454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2450u;
        // 0x2b2454: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2458u;
        goto label_2b2458;
    }
    ctx->pc = 0x2B2450u;
    {
        const bool branch_taken_0x2b2450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        ctx->pc = 0x2B2454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2450u;
        // 0x2b2454: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2450) {
            ctx->pc = 0x2B2458u;
            goto label_2b2458;
        }
    }
    ctx->pc = 0x2B2458u;
label_2b2458:
    // 0x2b2458: 0x8463800  j           func_118E000
label_2b245c:
    if (ctx->pc == 0x2B245Cu) {
        ctx->pc = 0x2B245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2458u;
        // 0x2b245c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2460u;
        goto label_2b2460;
    }
    ctx->pc = 0x2B2458u;
    ctx->pc = 0x2B245Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2458u;
    // 0x2b245c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118E000u, 0x2B2458u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B2460u;
label_2b2460:
    // 0x2b2460: 0x8233800  j           func_8CE000
label_2b2464:
    if (ctx->pc == 0x2B2464u) {
        ctx->pc = 0x2B2464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2460u;
        // 0x2b2464: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2468u;
        goto label_2b2468;
    }
    ctx->pc = 0x2B2460u;
    ctx->pc = 0x2B2464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2460u;
    // 0x2b2464: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x8CE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8CE000u, 0x2B2460u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B2468u;
label_2b2468:
    // 0x2b2468: 0x81823b7c  lb          $v0, 0x3B7C($t4)
    ctx->pc = 0x2b2468u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 15228)));
label_2b246c:
    // 0x2b246c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b246cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2470:
    // 0x2b2470: 0x8243800  j           func_90E000
label_2b2474:
    if (ctx->pc == 0x2B2474u) {
        ctx->pc = 0x2B2474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2470u;
        // 0x2b2474: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2478u;
        goto label_2b2478;
    }
    ctx->pc = 0x2B2470u;
    ctx->pc = 0x2B2474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2470u;
    // 0x2b2474: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x90E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x90E000u, 0x2B2470u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B2478u;
label_2b2478:
    // 0x2b2478: 0x81c33b7c  lb          $v1, 0x3B7C($t6)
    ctx->pc = 0x2b2478u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 15228)));
label_2b247c:
    // 0x2b247c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b247cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2480:
    // 0x2b2480: 0x81e13b7c  lb          $at, 0x3B7C($t7)
    ctx->pc = 0x2b2480u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 15228)));
label_2b2484:
    // 0x2b2484: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2484u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2488:
    // 0x2b2488: 0x80031ff2  lb          $v1, 0x1FF2($zero)
    ctx->pc = 0x2b2488u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x1FF2u));
label_2b248c:
    // 0x2b248c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b248cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2490:
    // 0x2b2490: 0x1fa2010  .word       0x01FA2010                   # mfhi        $a0 # 01FA0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2490u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2b2494:
    // 0x2b2494: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2494u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2498:
    // 0x2b2498: 0x1fb2011  .word       0x01FB2011                   # mthi        $t7 # 001B2000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2498u;
    ctx->hi = GPR_U64(ctx, 15);
label_2b249c:
    // 0x2b249c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b249cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b24a0:
    // 0x2b24a0: 0x1fc2012  .word       0x01FC2012                   # mflo        $a0 # 01FC0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b24a0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_2b24a4:
    // 0x2b24a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b24a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b24a8:
    // 0x2b24a8: 0x1f420e4  .word       0x01F420E4                   # and         $a0, $t7, $s4 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b24a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 15) & GPR_U64(ctx, 20));
label_2b24ac:
    // 0x2b24ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b24acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b24b0:
    // 0x2b24b0: 0x1f520e5  .word       0x01F520E5                   # or          $a0, $t7, $s5 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b24b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 15) | GPR_U64(ctx, 21));
label_2b24b4:
    // 0x2b24b4: 0x1c3d1bc  .word       0x01C3D1BC                   # dsll32      $k0, $v1, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b24b4u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 3) << (32 + 6));
label_2b24b8:
    // 0x2b24b8: 0x1f620e6  .word       0x01F620E6                   # xor         $a0, $t7, $s6 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b24b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 22));
label_2b24bc:
    // 0x2b24bc: 0x1c3d8bd  .word       0x01C3D8BD                   # INVALID     $t6, $v1, -0x2743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b24bcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B24BC raw=0x01C3D8BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b24c0:
    // 0x2b24c0: 0x1f720e7  .word       0x01F720E7                   # nor         $a0, $t7, $s7 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b24c0u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 15) | GPR_U64(ctx, 23)));
label_2b24c4:
    // 0x2b24c4: 0x1c3e4ca  .word       0x01C3E4CA                   # movz        $gp, $t6, $v1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b24c4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 28, GPR_VEC(ctx, 14));
label_2b24c8:
    // 0x2b24c8: 0x5000185b  beql        $zero, $zero, . + 4 + (0x185B << 2)
label_2b24cc:
    if (ctx->pc == 0x2B24CCu) {
        ctx->pc = 0x2B24CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B24C8u;
        // 0x2b24cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B24D0u;
        goto label_2b24d0;
    }
    ctx->pc = 0x2B24C8u;
    {
        const bool branch_taken_0x2b24c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b24c8) {
            ctx->pc = 0x2B24CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B24C8u;
            // 0x2b24cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8638u;
            { ctx->pc = 0x2b8638; return; }
        }
    }
    ctx->pc = 0x2B24D0u;
label_2b24d0:
    // 0x2b24d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b24d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b24d4:
    // 0x2b24d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b24d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b24d8:
    // 0x2b24d8: 0x50051831  beql        $zero, $a1, . + 4 + (0x1831 << 2)
label_2b24dc:
    if (ctx->pc == 0x2B24DCu) {
        ctx->pc = 0x2B24DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B24D8u;
        // 0x2b24dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B24E0u;
        goto label_2b24e0;
    }
    ctx->pc = 0x2B24D8u;
    {
        const bool branch_taken_0x2b24d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        if (branch_taken_0x2b24d8) {
            ctx->pc = 0x2B24DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B24D8u;
            // 0x2b24dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B85A0u;
            { ctx->pc = 0x2b85a0; return; }
        }
    }
    ctx->pc = 0x2B24E0u;
label_2b24e0:
    // 0x2b24e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b24e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b24e4:
    // 0x2b24e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b24e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b24e8:
    // 0x2b24e8: 0x8293800  j           func_A4E000
label_2b24ec:
    if (ctx->pc == 0x2B24ECu) {
        ctx->pc = 0x2B24ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B24E8u;
        // 0x2b24ec: 0x1e1a1bc  .word       0x01E1A1BC                   # dsll32      $s4, $at, 6 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 1) << (32 + 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B24F0u;
        goto label_2b24f0;
    }
    ctx->pc = 0x2B24E8u;
    ctx->pc = 0x2B24ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B24E8u;
    // 0x2b24ec: 0x1e1a1bc  .word       0x01E1A1BC                   # dsll32      $s4, $at, 6 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 1) << (32 + 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0xA4E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA4E000u, 0x2B24E8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B24F0u;
label_2b24f0:
    // 0x2b24f0: 0x81d03b7c  lb          $s0, 0x3B7C($t6)
    ctx->pc = 0x2b24f0u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 15228)));
label_2b24f4:
    // 0x2b24f4: 0x1e1a8bd  .word       0x01E1A8BD                   # INVALID     $t7, $at, -0x5743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b24f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B24F4 raw=0x01E1A8BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b24f8:
    // 0x2b24f8: 0x81f13b7c  lb          $s1, 0x3B7C($t7)
    ctx->pc = 0x2b24f8u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 15228)));
label_2b24fc:
    // 0x2b24fc: 0x1e1b0be  .word       0x01E1B0BE                   # dsrl32      $s6, $at, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b24fcu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 1) >> (32 + 2));
label_2b2500:
    // 0x2b2500: 0x8223800  j           func_88E000
label_2b2504:
    if (ctx->pc == 0x2B2504u) {
        ctx->pc = 0x2B2504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2500u;
        // 0x2b2504: 0x1e1b84b  .word       0x01E1B84B                   # movn        $s7, $t7, $at # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2508u;
        goto label_2b2508;
    }
    ctx->pc = 0x2B2500u;
    ctx->pc = 0x2B2504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2500u;
    // 0x2b2504: 0x1e1b84b  .word       0x01E1B84B                   # movn        $s7, $t7, $at # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x88E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x88E000u, 0x2B2500u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B2508u;
label_2b2508:
    // 0x2b2508: 0x1fa4810  .word       0x01FA4810                   # mfhi        $t1 # 01FA0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2508u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_2b250c:
    // 0x2b250c: 0x2102be  .word       0x002102BE                   # dsrl32      $zero, $at, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b250cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) >> (32 + 10));
label_2b2510:
    // 0x2b2510: 0x1fb4811  .word       0x01FB4811                   # mthi        $t7 # 001B4800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2510u;
    ctx->hi = GPR_U64(ctx, 15);
label_2b2514:
    // 0x2b2514: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2514u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2518:
    // 0x2b2518: 0x1fc4812  .word       0x01FC4812                   # mflo        $t1 # 01FC0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2518u;
    SET_GPR_U64(ctx, 9, ctx->lo);
label_2b251c:
    // 0x2b251c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b251cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2520:
    // 0x2b2520: 0x81c33b7c  lb          $v1, 0x3B7C($t6)
    ctx->pc = 0x2b2520u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 15228)));
label_2b2524:
    // 0x2b2524: 0x1d302bc  .word       0x01D302BC                   # dsll32      $zero, $s3, 10 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2524u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 19) << (32 + 10));
label_2b2528:
    // 0x2b2528: 0x1fa1010  .word       0x01FA1010                   # mfhi        $v0 # 01FA0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2528u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2b252c:
    // 0x2b252c: 0x1d0d0bc  .word       0x01D0D0BC                   # dsll32      $k0, $s0, 2 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b252cu;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 16) << (32 + 2));
label_2b2530:
    // 0x2b2530: 0x1fb1011  .word       0x01FB1011                   # mthi        $t7 # 001B1000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2530u;
    ctx->hi = GPR_U64(ctx, 15);
label_2b2534:
    // 0x2b2534: 0x1d0d8bd  .word       0x01D0D8BD                   # INVALID     $t6, $s0, -0x2743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2534u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2534 raw=0x01D0D8BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2538:
    // 0x2b2538: 0x1fc1012  .word       0x01FC1012                   # mflo        $v0 # 01FC0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2538u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_2b253c:
    // 0x2b253c: 0x1d0e0be  .word       0x01D0E0BE                   # dsrl32      $gp, $s0, 2 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b253cu;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 16) >> (32 + 2));
label_2b2540:
    // 0x2b2540: 0x1f448e4  .word       0x01F448E4                   # and         $t1, $t7, $s4 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2540u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 15) & GPR_U64(ctx, 20));
label_2b2544:
    // 0x2b2544: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2544u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2548:
    // 0x2b2548: 0x1f548e5  .word       0x01F548E5                   # or          $t1, $t7, $s5 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2548u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 15) | GPR_U64(ctx, 21));
label_2b254c:
    // 0x2b254c: 0x1c3d0bc  .word       0x01C3D0BC                   # dsll32      $k0, $v1, 2 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b254cu;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 3) << (32 + 2));
label_2b2550:
    // 0x2b2550: 0x1f648e6  .word       0x01F648E6                   # xor         $t1, $t7, $s6 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2550u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 22));
label_2b2554:
    // 0x2b2554: 0x1c3d8bd  .word       0x01C3D8BD                   # INVALID     $t6, $v1, -0x2743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2554u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2554 raw=0x01C3D8BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2558:
    // 0x2b2558: 0x1f748e7  .word       0x01F748E7                   # nor         $t1, $t7, $s7 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2558u;
    SET_GPR_U64(ctx, 9, ~(GPR_U64(ctx, 15) | GPR_U64(ctx, 23)));
label_2b255c:
    // 0x2b255c: 0x1c3e4ca  .word       0x01C3E4CA                   # movz        $gp, $t6, $v1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b255cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 28, GPR_VEC(ctx, 14));
label_2b2560:
    // 0x2b2560: 0x81e13b7c  lb          $at, 0x3B7C($t7)
    ctx->pc = 0x2b2560u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 15228)));
label_2b2564:
    // 0x2b2564: 0x1c102bc  .word       0x01C102BC                   # dsll32      $zero, $at, 10 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2564u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) << (32 + 10));
label_2b2568:
    // 0x2b2568: 0x1f410e4  .word       0x01F410E4                   # and         $v0, $t7, $s4 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) & GPR_U64(ctx, 20));
label_2b256c:
    // 0x2b256c: 0x1f1a0bc  .word       0x01F1A0BC                   # dsll32      $s4, $s1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b256cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 17) << (32 + 2));
label_2b2570:
    // 0x2b2570: 0x1f510e5  .word       0x01F510E5                   # or          $v0, $t7, $s5 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) | GPR_U64(ctx, 21));
label_2b2574:
    // 0x2b2574: 0x1f1a8bd  .word       0x01F1A8BD                   # INVALID     $t7, $s1, -0x5743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2574u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2574 raw=0x01F1A8BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2578:
    // 0x2b2578: 0x1f610e6  .word       0x01F610E6                   # xor         $v0, $t7, $s6 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 22));
label_2b257c:
    // 0x2b257c: 0x1f1b0be  .word       0x01F1B0BE                   # dsrl32      $s6, $s1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b257cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 17) >> (32 + 2));
label_2b2580:
    // 0x2b2580: 0x1f710e7  .word       0x01F710E7                   # nor         $v0, $t7, $s7 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2580u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 15) | GPR_U64(ctx, 23)));
label_2b2584:
    // 0x2b2584: 0x1f1b8bf  .word       0x01F1B8BF                   # dsra32      $s7, $s1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2584u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 17) >> (32 + 2));
label_2b2588:
    // 0x2b2588: 0x81cd137d  lb          $t5, 0x137D($t6)
    ctx->pc = 0x2b2588u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 4989)));
label_2b258c:
    // 0x2b258c: 0x1e1a0bc  .word       0x01E1A0BC                   # dsll32      $s4, $at, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b258cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 1) << (32 + 2));
label_2b2590:
    // 0x2b2590: 0x800a3270  lb          $t2, 0x3270($zero)
    ctx->pc = 0x2b2590u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x3270u));
label_2b2594:
    // 0x2b2594: 0x1e1a8bd  .word       0x01E1A8BD                   # INVALID     $t7, $at, -0x5743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2594u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2594 raw=0x01E1A8BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2598:
    // 0x2b2598: 0xa296801  j           func_8A5A004
label_2b259c:
    if (ctx->pc == 0x2B259Cu) {
        ctx->pc = 0x2B259Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2598u;
        // 0x2b259c: 0x1c09cd0  .word       0x01C09CD0                   # mfhi        $s3 # 01C004C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 19, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B25A0u;
        goto label_2b25a0;
    }
    ctx->pc = 0x2B2598u;
    ctx->pc = 0x2B259Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2598u;
    // 0x2b259c: 0x1c09cd0  .word       0x01C09CD0                   # mfhi        $s3 # 01C004C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_U64(ctx, 19, ctx->hi);
    ctx->in_delay_slot = false;
    ctx->pc = 0x8A5A004u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8A5A004u, 0x2B2598u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B25A0u;
label_2b25a0:
    // 0x2b25a0: 0x800a7a70  lb          $t2, 0x7A70($zero)
    ctx->pc = 0x2b25a0u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x7A70u));
label_2b25a4:
    // 0x2b25a4: 0x1e1b0be  .word       0x01E1B0BE                   # dsrl32      $s6, $at, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b25a4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 1) >> (32 + 2));
label_2b25a8:
    // 0x2b25a8: 0x8233800  j           func_8CE000
label_2b25ac:
    if (ctx->pc == 0x2B25ACu) {
        ctx->pc = 0x2B25ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B25A8u;
        // 0x2b25ac: 0x1e1bc8b  .word       0x01E1BC8B                   # movn        $s7, $t7, $at # 00000480 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B25B0u;
        goto label_2b25b0;
    }
    ctx->pc = 0x2B25A8u;
    ctx->pc = 0x2B25ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B25A8u;
    // 0x2b25ac: 0x1e1bc8b  .word       0x01E1BC8B                   # movn        $s7, $t7, $at # 00000480 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x8CE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8CE000u, 0x2B25A8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B25B0u;
label_2b25b0:
    // 0x2b25b0: 0x8463800  j           func_118E000
label_2b25b4:
    if (ctx->pc == 0x2B25B4u) {
        ctx->pc = 0x2B25B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B25B0u;
        // 0x2b25b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B25B8u;
        goto label_2b25b8;
    }
    ctx->pc = 0x2B25B0u;
    ctx->pc = 0x2B25B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B25B0u;
    // 0x2b25b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118E000u, 0x2B25B0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B25B8u;
label_2b25b8:
    // 0x2b25b8: 0x81823b7c  lb          $v0, 0x3B7C($t4)
    ctx->pc = 0x2b25b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 15228)));
label_2b25bc:
    // 0x2b25bc: 0x1d361bc  .word       0x01D361BC                   # dsll32      $t4, $s3, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b25bcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 19) << (32 + 6));
label_2b25c0:
    // 0x2b25c0: 0x8243800  j           func_90E000
label_2b25c4:
    if (ctx->pc == 0x2B25C4u) {
        ctx->pc = 0x2B25C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B25C0u;
        // 0x2b25c4: 0x1d368bd  .word       0x01D368BD                   # INVALID     $t6, $s3, 0x68BD # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B25C4 raw=0x01D368BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B25C8u;
        goto label_2b25c8;
    }
    ctx->pc = 0x2B25C0u;
    ctx->pc = 0x2B25C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B25C0u;
    // 0x2b25c4: 0x1d368bd  .word       0x01D368BD                   # INVALID     $t6, $s3, 0x68BD # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B25C4 raw=0x01D368BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
    ctx->in_delay_slot = false;
    ctx->pc = 0x90E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x90E000u, 0x2B25C0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B25C8u;
label_2b25c8:
    // 0x2b25c8: 0x81f203bc  lb          $s2, 0x3BC($t7)
    ctx->pc = 0x2b25c8u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2b25cc:
    // 0x2b25cc: 0x72cfdb  .word       0x0072CFDB                   # divu        $t9, $v1, $s2 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b25ccu;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_2b25d0:
    // 0x2b25d0: 0x80031ff2  lb          $v1, 0x1FF2($zero)
    ctx->pc = 0x2b25d0u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x1FF2u));
label_2b25d4:
    // 0x2b25d4: 0x1d370be  .word       0x01D370BE                   # dsrl32      $t6, $s3, 2 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b25d4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 19) >> (32 + 2));
label_2b25d8:
    // 0x2b25d8: 0x81c33b7c  lb          $v1, 0x3B7C($t6)
    ctx->pc = 0x2b25d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 15228)));
label_2b25dc:
    // 0x2b25dc: 0x1c07ccb  .word       0x01C07CCB                   # movn        $t7, $t6, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b25dcu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 14));
label_2b25e0:
    // 0x2b25e0: 0x1fa2010  .word       0x01FA2010                   # mfhi        $a0 # 01FA0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b25e0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2b25e4:
    // 0x2b25e4: 0x1c291ff  .word       0x01C291FF                   # dsra32      $s2, $v0, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b25e4u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 2) >> (32 + 7));
label_2b25e8:
    // 0x2b25e8: 0x1fb2011  .word       0x01FB2011                   # mthi        $t7 # 001B2000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b25e8u;
    ctx->hi = GPR_U64(ctx, 15);
label_2b25ec:
    // 0x2b25ec: 0x19f9646  .word       0x019F9646                   # srlv        $s2, $ra, $t4 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b25ecu;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 31), GPR_U32(ctx, 12) & 0x1F));
label_2b25f0:
    // 0x2b25f0: 0x1fc2012  .word       0x01FC2012                   # mflo        $a0 # 01FC0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b25f0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_2b25f4:
    // 0x2b25f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b25f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b25f8:
    // 0x2b25f8: 0x81e13b7c  lb          $at, 0x3B7C($t7)
    ctx->pc = 0x2b25f8u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 15228)));
label_2b25fc:
    // 0x2b25fc: 0x1dd9cef  .word       0x01DD9CEF                   # dsubu       $s3, $t6, $sp # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b25fcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 14) - GPR_U64(ctx, 29));
label_2b2600:
    // 0x2b2600: 0x1f420e4  .word       0x01F420E4                   # and         $a0, $t7, $s4 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2600u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 15) & GPR_U64(ctx, 20));
label_2b2604:
    // 0x2b2604: 0x1c0949c  .word       0x01C0949C                   # dmult       $t6, $zero # 00009480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2604u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B2604 raw=0x01C0949C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2608:
    // 0x2b2608: 0x1f520e5  .word       0x01F520E5                   # or          $a0, $t7, $s5 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2608u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 15) | GPR_U64(ctx, 21));
label_2b260c:
    // 0x2b260c: 0x1dfc9ff  .word       0x01DFC9FF                   # dsra32      $t9, $ra, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b260cu;
    SET_GPR_S64(ctx, 25, GPR_S64(ctx, 31) >> (32 + 7));
label_2b2610:
    // 0x2b2610: 0x1f620e6  .word       0x01F620E6                   # xor         $a0, $t7, $s6 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2610u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 22));
label_2b2614:
    // 0x2b2614: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2614u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2618:
    // 0x2b2618: 0x1f720e7  .word       0x01F720E7                   # nor         $a0, $t7, $s7 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2618u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 15) | GPR_U64(ctx, 23)));
label_2b261c:
    // 0x2b261c: 0x1d3997c  .word       0x01D3997C                   # dsll32      $s3, $s3, 5 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b261cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 5));
label_2b2620:
    // 0x2b2620: 0x800b5ff2  lb          $t3, 0x5FF2($zero)
    ctx->pc = 0x2b2620u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x5FF2u));
label_2b2624:
    // 0x2b2624: 0x1d2917d  .word       0x01D2917D                   # INVALID     $t6, $s2, -0x6E83 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2624u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2624 raw=0x01D2917D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2628:
    // 0x2b2628: 0x2440f40f  addiu       $zero, $v0, -0xBF1
    ctx->pc = 0x2b2628u;
    // NOP (addiu $zero, ...)
label_2b262c:
    // 0x2b262c: 0x1c3d1bc  .word       0x01C3D1BC                   # dsll32      $k0, $v1, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b262cu;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 3) << (32 + 6));
label_2b2630:
    // 0x2b2630: 0x50010002  beql        $zero, $at, . + 4 + (0x2 << 2)
label_2b2634:
    if (ctx->pc == 0x2B2634u) {
        ctx->pc = 0x2B2634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2630u;
        // 0x2b2634: 0x1c3d8bd  .word       0x01C3D8BD                   # INVALID     $t6, $v1, -0x2743 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2634 raw=0x01C3D8BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2638u;
        goto label_2b2638;
    }
    ctx->pc = 0x2B2630u;
    {
        const bool branch_taken_0x2b2630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b2630) {
            ctx->pc = 0x2B2634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2630u;
            // 0x2b2634: 0x1c3d8bd  .word       0x01C3D8BD                   # INVALID     $t6, $v1, -0x2743 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //             throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2634 raw=0x01C3D8BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B263Cu;
            goto label_2b263c;
        }
    }
    ctx->pc = 0x2B2638u;
label_2b2638:
    // 0x2b2638: 0x81ed9b7d  lb          $t5, -0x6483($t7)
    ctx->pc = 0x2b2638u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294941565)));
label_2b263c:
    // 0x2b263c: 0x1c3e4ca  .word       0x01C3E4CA                   # movz        $gp, $t6, $v1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b263cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 28, GPR_VEC(ctx, 14));
label_2b2640:
    // 0x2b2640: 0xa296800  j           func_8A5A000
label_2b2644:
    if (ctx->pc == 0x2B2644u) {
        ctx->pc = 0x2B2644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2640u;
        // 0x2b2644: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2648u;
        goto label_2b2648;
    }
    ctx->pc = 0x2B2640u;
    ctx->pc = 0x2B2644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2640u;
    // 0x2b2644: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x8A5A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8A5A000u, 0x2B2640u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B2648u;
label_2b2648:
    // 0x2b2648: 0x520b07cf  beql        $s0, $t3, . + 4 + (0x7CF << 2)
label_2b264c:
    if (ctx->pc == 0x2B264Cu) {
        ctx->pc = 0x2B264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2648u;
        // 0x2b264c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2650u;
        goto label_2b2650;
    }
    ctx->pc = 0x2B2648u;
    {
        const bool branch_taken_0x2b2648 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 11));
        if (branch_taken_0x2b2648) {
            ctx->pc = 0x2B264Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2648u;
            // 0x2b264c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4588u;
            { ctx->pc = 0x2b4588; return; }
        }
    }
    ctx->pc = 0x2B2650u;
label_2b2650:
    // 0x2b2650: 0x81cd937d  lb          $t5, -0x6C83($t6)
    ctx->pc = 0x2b2650u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 4294939517)));
label_2b2654:
    // 0x2b2654: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2654u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2658:
    // 0x2b2658: 0x40000043  .word       0x40000043                   # mfc0        $zero, Index # 00000043 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b2658u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b265c:
    // 0x2b265c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b265cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2660:
    // 0x2b2660: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2660u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2664:
    // 0x2b2664: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2664u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2668:
    // 0x2b2668: 0x8293800  j           func_A4E000
label_2b266c:
    if (ctx->pc == 0x2B266Cu) {
        ctx->pc = 0x2B266Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2668u;
        // 0x2b266c: 0x1e1a1bc  .word       0x01E1A1BC                   # dsll32      $s4, $at, 6 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 1) << (32 + 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2670u;
        goto label_2b2670;
    }
    ctx->pc = 0x2B2668u;
    ctx->pc = 0x2B266Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2668u;
    // 0x2b266c: 0x1e1a1bc  .word       0x01E1A1BC                   # dsll32      $s4, $at, 6 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 1) << (32 + 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0xA4E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA4E000u, 0x2B2668u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B2670u;
label_2b2670:
    // 0x2b2670: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2670u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2674:
    // 0x2b2674: 0x1e1a8bd  .word       0x01E1A8BD                   # INVALID     $t7, $at, -0x5743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2674u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2674 raw=0x01E1A8BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2678:
    // 0x2b2678: 0x81d03b7c  lb          $s0, 0x3B7C($t6)
    ctx->pc = 0x2b2678u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 15228)));
label_2b267c:
    // 0x2b267c: 0x1e1b0be  .word       0x01E1B0BE                   # dsrl32      $s6, $at, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b267cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 1) >> (32 + 2));
label_2b2680:
    // 0x2b2680: 0x81f13b7c  lb          $s1, 0x3B7C($t7)
    ctx->pc = 0x2b2680u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 15228)));
label_2b2684:
    // 0x2b2684: 0x1e1b84b  .word       0x01E1B84B                   # movn        $s7, $t7, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2684u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 15));
label_2b2688:
    // 0x2b2688: 0x1fa4810  .word       0x01FA4810                   # mfhi        $t1 # 01FA0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2688u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_2b268c:
    // 0x2b268c: 0x2102be  .word       0x002102BE                   # dsrl32      $zero, $at, 10 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b268cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) >> (32 + 10));
label_2b2690:
    // 0x2b2690: 0x1fb4811  .word       0x01FB4811                   # mthi        $t7 # 001B4800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2690u;
    ctx->hi = GPR_U64(ctx, 15);
label_2b2694:
    // 0x2b2694: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2694u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2698:
    // 0x2b2698: 0x1fc4812  .word       0x01FC4812                   # mflo        $t1 # 01FC0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2698u;
    SET_GPR_U64(ctx, 9, ctx->lo);
label_2b269c:
    // 0x2b269c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b269cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b26a0:
    // 0x2b26a0: 0x1f448e4  .word       0x01F448E4                   # and         $t1, $t7, $s4 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b26a0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 15) & GPR_U64(ctx, 20));
label_2b26a4:
    // 0x2b26a4: 0x1d302bc  .word       0x01D302BC                   # dsll32      $zero, $s3, 10 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b26a4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 19) << (32 + 10));
label_2b26a8:
    // 0x2b26a8: 0x1f548e5  .word       0x01F548E5                   # or          $t1, $t7, $s5 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b26a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 15) | GPR_U64(ctx, 21));
label_2b26ac:
    // 0x2b26ac: 0x1d0d0bc  .word       0x01D0D0BC                   # dsll32      $k0, $s0, 2 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b26acu;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 16) << (32 + 2));
label_2b26b0:
    // 0x2b26b0: 0x1f648e6  .word       0x01F648E6                   # xor         $t1, $t7, $s6 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b26b0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 22));
label_2b26b4:
    // 0x2b26b4: 0x1d0d8bd  .word       0x01D0D8BD                   # INVALID     $t6, $s0, -0x2743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b26b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B26B4 raw=0x01D0D8BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b26b8:
    // 0x2b26b8: 0x1f748e7  .word       0x01F748E7                   # nor         $t1, $t7, $s7 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b26b8u;
    SET_GPR_U64(ctx, 9, ~(GPR_U64(ctx, 15) | GPR_U64(ctx, 23)));
label_2b26bc:
    // 0x2b26bc: 0x1d0e4ca  .word       0x01D0E4CA                   # movz        $gp, $t6, $s0 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b26bcu;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 28, GPR_VEC(ctx, 14));
label_2b26c0:
    // 0x2b26c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b26c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b26c4:
    // 0x2b26c4: 0x1c102bc  .word       0x01C102BC                   # dsll32      $zero, $at, 10 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b26c4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) << (32 + 10));
label_2b26c8:
    // 0x2b26c8: 0x81cd137d  lb          $t5, 0x137D($t6)
    ctx->pc = 0x2b26c8u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 4989)));
label_2b26cc:
    // 0x2b26cc: 0x1f1a0bc  .word       0x01F1A0BC                   # dsll32      $s4, $s1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b26ccu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 17) << (32 + 2));
label_2b26d0:
    // 0x2b26d0: 0x800a3270  lb          $t2, 0x3270($zero)
    ctx->pc = 0x2b26d0u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x3270u));
label_2b26d4:
    // 0x2b26d4: 0x1f1a8bd  .word       0x01F1A8BD                   # INVALID     $t7, $s1, -0x5743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b26d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B26D4 raw=0x01F1A8BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b26d8:
    // 0x2b26d8: 0xa296801  j           func_8A5A004
label_2b26dc:
    if (ctx->pc == 0x2B26DCu) {
        ctx->pc = 0x2B26DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B26D8u;
        // 0x2b26dc: 0x1c09cd0  .word       0x01C09CD0                   # mfhi        $s3 # 01C004C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 19, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B26E0u;
        goto label_2b26e0;
    }
    ctx->pc = 0x2B26D8u;
    ctx->pc = 0x2B26DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B26D8u;
    // 0x2b26dc: 0x1c09cd0  .word       0x01C09CD0                   # mfhi        $s3 # 01C004C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_U64(ctx, 19, ctx->hi);
    ctx->in_delay_slot = false;
    ctx->pc = 0x8A5A004u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8A5A004u, 0x2B26D8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B26E0u;
label_2b26e0:
    // 0x2b26e0: 0x800a7a70  lb          $t2, 0x7A70($zero)
    ctx->pc = 0x2b26e0u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x7A70u));
label_2b26e4:
    // 0x2b26e4: 0x1f1b0be  .word       0x01F1B0BE                   # dsrl32      $s6, $s1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b26e4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 17) >> (32 + 2));
label_2b26e8:
    // 0x2b26e8: 0x8233800  j           func_8CE000
label_2b26ec:
    if (ctx->pc == 0x2B26ECu) {
        ctx->pc = 0x2B26ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B26E8u;
        // 0x2b26ec: 0x1f1bc8b  .word       0x01F1BC8B                   # movn        $s7, $t7, $s1 # 00000480 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B26F0u;
        goto label_2b26f0;
    }
    ctx->pc = 0x2B26E8u;
    ctx->pc = 0x2B26ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B26E8u;
    // 0x2b26ec: 0x1f1bc8b  .word       0x01F1BC8B                   # movn        $s7, $t7, $s1 # 00000480 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x8CE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8CE000u, 0x2B26E8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B26F0u;
label_2b26f0:
    // 0x2b26f0: 0x8463800  j           func_118E000
label_2b26f4:
    if (ctx->pc == 0x2B26F4u) {
        ctx->pc = 0x2B26F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B26F0u;
        // 0x2b26f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B26F8u;
        goto label_2b26f8;
    }
    ctx->pc = 0x2B26F0u;
    ctx->pc = 0x2B26F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B26F0u;
    // 0x2b26f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118E000u, 0x2B26F0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B26F8u;
label_2b26f8:
    // 0x2b26f8: 0x81823b7c  lb          $v0, 0x3B7C($t4)
    ctx->pc = 0x2b26f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 15228)));
label_2b26fc:
    // 0x2b26fc: 0x1d361bc  .word       0x01D361BC                   # dsll32      $t4, $s3, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b26fcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 19) << (32 + 6));
label_2b2700:
    // 0x2b2700: 0x8243800  j           func_90E000
label_2b2704:
    if (ctx->pc == 0x2B2704u) {
        ctx->pc = 0x2B2704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2700u;
        // 0x2b2704: 0x1d368bd  .word       0x01D368BD                   # INVALID     $t6, $s3, 0x68BD # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2704 raw=0x01D368BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2708u;
        goto label_2b2708;
    }
    ctx->pc = 0x2B2700u;
    ctx->pc = 0x2B2704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2700u;
    // 0x2b2704: 0x1d368bd  .word       0x01D368BD                   # INVALID     $t6, $s3, 0x68BD # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2704 raw=0x01D368BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
    ctx->in_delay_slot = false;
    ctx->pc = 0x90E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x90E000u, 0x2B2700u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B2708u;
label_2b2708:
    // 0x2b2708: 0x81f203bc  lb          $s2, 0x3BC($t7)
    ctx->pc = 0x2b2708u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2b270c:
    // 0x2b270c: 0x72cfdb  .word       0x0072CFDB                   # divu        $t9, $v1, $s2 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b270cu;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_2b2710:
    // 0x2b2710: 0x80031ff2  lb          $v1, 0x1FF2($zero)
    ctx->pc = 0x2b2710u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x1FF2u));
label_2b2714:
    // 0x2b2714: 0x1d370be  .word       0x01D370BE                   # dsrl32      $t6, $s3, 2 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2714u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 19) >> (32 + 2));
label_2b2718:
    // 0x2b2718: 0x81c33b7c  lb          $v1, 0x3B7C($t6)
    ctx->pc = 0x2b2718u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 15228)));
label_2b271c:
    // 0x2b271c: 0x1c07ccb  .word       0x01C07CCB                   # movn        $t7, $t6, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b271cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 14));
label_2b2720:
    // 0x2b2720: 0x1fa2010  .word       0x01FA2010                   # mfhi        $a0 # 01FA0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2720u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2b2724:
    // 0x2b2724: 0x1c291ff  .word       0x01C291FF                   # dsra32      $s2, $v0, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2724u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 2) >> (32 + 7));
label_2b2728:
    // 0x2b2728: 0x1fb2011  .word       0x01FB2011                   # mthi        $t7 # 001B2000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2728u;
    ctx->hi = GPR_U64(ctx, 15);
label_2b272c:
    // 0x2b272c: 0x19f9646  .word       0x019F9646                   # srlv        $s2, $ra, $t4 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b272cu;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 31), GPR_U32(ctx, 12) & 0x1F));
label_2b2730:
    // 0x2b2730: 0x1fc2012  .word       0x01FC2012                   # mflo        $a0 # 01FC0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2730u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_2b2734:
    // 0x2b2734: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2734u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2738:
    // 0x2b2738: 0x0  nop
    ctx->pc = 0x2b2738u;
    // NOP
label_2b273c:
    // 0x2b273c: 0x4a000100  vaddx       $vf4, $vf0, $vf0x
    ctx->pc = 0x2b273cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2b2740:
    // 0x2b2740: 0x81e13b7c  lb          $at, 0x3B7C($t7)
    ctx->pc = 0x2b2740u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 15228)));
label_2b2744:
    // 0x2b2744: 0x1dd9cef  .word       0x01DD9CEF                   # dsubu       $s3, $t6, $sp # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2744u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 14) - GPR_U64(ctx, 29));
label_2b2748:
    // 0x2b2748: 0x1f420e4  .word       0x01F420E4                   # and         $a0, $t7, $s4 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2748u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 15) & GPR_U64(ctx, 20));
label_2b274c:
    // 0x2b274c: 0x1c0949c  .word       0x01C0949C                   # dmult       $t6, $zero # 00009480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b274cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B274C raw=0x01C0949C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2750:
    // 0x2b2750: 0x1f520e5  .word       0x01F520E5                   # or          $a0, $t7, $s5 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2750u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 15) | GPR_U64(ctx, 21));
label_2b2754:
    // 0x2b2754: 0x1dfc9ff  .word       0x01DFC9FF                   # dsra32      $t9, $ra, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2754u;
    SET_GPR_S64(ctx, 25, GPR_S64(ctx, 31) >> (32 + 7));
label_2b2758:
    // 0x2b2758: 0x1f620e6  .word       0x01F620E6                   # xor         $a0, $t7, $s6 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2758u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 22));
label_2b275c:
    // 0x2b275c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b275cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2760:
    // 0x2b2760: 0x1f720e7  .word       0x01F720E7                   # nor         $a0, $t7, $s7 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2760u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 15) | GPR_U64(ctx, 23)));
label_2b2764:
    // 0x2b2764: 0x1d3997c  .word       0x01D3997C                   # dsll32      $s3, $s3, 5 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2764u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 5));
label_2b2768:
    // 0x2b2768: 0x800b5ff2  lb          $t3, 0x5FF2($zero)
    ctx->pc = 0x2b2768u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x5FF2u));
label_2b276c:
    // 0x2b276c: 0x1d2917d  .word       0x01D2917D                   # INVALID     $t6, $s2, -0x6E83 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b276cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B276C raw=0x01D2917D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2770:
    // 0x2b2770: 0x2440f40f  addiu       $zero, $v0, -0xBF1
    ctx->pc = 0x2b2770u;
    // NOP (addiu $zero, ...)
label_2b2774:
    // 0x2b2774: 0x1c3d1bc  .word       0x01C3D1BC                   # dsll32      $k0, $v1, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2774u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 3) << (32 + 6));
label_2b2778:
    // 0x2b2778: 0x50010002  beql        $zero, $at, . + 4 + (0x2 << 2)
label_2b277c:
    if (ctx->pc == 0x2B277Cu) {
        ctx->pc = 0x2B277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2778u;
        // 0x2b277c: 0x1c3d8bd  .word       0x01C3D8BD                   # INVALID     $t6, $v1, -0x2743 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B277C raw=0x01C3D8BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2780u;
        goto label_2b2780;
    }
    ctx->pc = 0x2B2778u;
    {
        const bool branch_taken_0x2b2778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b2778) {
            ctx->pc = 0x2B277Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2778u;
            // 0x2b277c: 0x1c3d8bd  .word       0x01C3D8BD                   # INVALID     $t6, $v1, -0x2743 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //             throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B277C raw=0x01C3D8BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2784u;
            goto label_2b2784;
        }
    }
    ctx->pc = 0x2B2780u;
label_2b2780:
    // 0x2b2780: 0x81ed9b7d  lb          $t5, -0x6483($t7)
    ctx->pc = 0x2b2780u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294941565)));
label_2b2784:
    // 0x2b2784: 0x1c3e4ca  .word       0x01C3E4CA                   # movz        $gp, $t6, $v1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2784u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 28, GPR_VEC(ctx, 14));
label_2b2788:
    // 0x2b2788: 0xa296800  j           func_8A5A000
label_2b278c:
    if (ctx->pc == 0x2B278Cu) {
        ctx->pc = 0x2B278Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2788u;
        // 0x2b278c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2790u;
        goto label_2b2790;
    }
    ctx->pc = 0x2B2788u;
    ctx->pc = 0x2B278Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2788u;
    // 0x2b278c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x8A5A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8A5A000u, 0x2B2788u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B2790u;
label_2b2790:
    // 0x2b2790: 0x520b07a7  beql        $s0, $t3, . + 4 + (0x7A7 << 2)
label_2b2794:
    if (ctx->pc == 0x2B2794u) {
        ctx->pc = 0x2B2794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2790u;
        // 0x2b2794: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2798u;
        goto label_2b2798;
    }
    ctx->pc = 0x2B2790u;
    {
        const bool branch_taken_0x2b2790 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 11));
        if (branch_taken_0x2b2790) {
            ctx->pc = 0x2B2794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2790u;
            // 0x2b2794: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4630u;
            { ctx->pc = 0x2b4630; return; }
        }
    }
    ctx->pc = 0x2B2798u;
label_2b2798:
    // 0x2b2798: 0x81cd937d  lb          $t5, -0x6C83($t6)
    ctx->pc = 0x2b2798u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 4294939517)));
label_2b279c:
    // 0x2b279c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b279cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b27a0:
    // 0x2b27a0: 0x4000001b  .word       0x4000001B                   # mfc0        $zero, Index # 0000001B <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b27a0u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b27a4:
    // 0x2b27a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b27a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b27a8:
    // 0x2b27a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b27a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b27ac:
    // 0x2b27ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b27acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b27b0:
    // 0x2b27b0: 0x81cd137d  lb          $t5, 0x137D($t6)
    ctx->pc = 0x2b27b0u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 4989)));
label_2b27b4:
    // 0x2b27b4: 0x1e1a1bc  .word       0x01E1A1BC                   # dsll32      $s4, $at, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b27b4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 1) << (32 + 6));
label_2b27b8:
    // 0x2b27b8: 0x800a3270  lb          $t2, 0x3270($zero)
    ctx->pc = 0x2b27b8u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x3270u));
label_2b27bc:
    // 0x2b27bc: 0x1e1a8bd  .word       0x01E1A8BD                   # INVALID     $t7, $at, -0x5743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b27bcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B27BC raw=0x01E1A8BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b27c0:
    // 0x2b27c0: 0xa296801  j           func_8A5A004
label_2b27c4:
    if (ctx->pc == 0x2B27C4u) {
        ctx->pc = 0x2B27C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B27C0u;
        // 0x2b27c4: 0x1c09cd0  .word       0x01C09CD0                   # mfhi        $s3 # 01C004C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 19, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B27C8u;
        goto label_2b27c8;
    }
    ctx->pc = 0x2B27C0u;
    ctx->pc = 0x2B27C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B27C0u;
    // 0x2b27c4: 0x1c09cd0  .word       0x01C09CD0                   # mfhi        $s3 # 01C004C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_U64(ctx, 19, ctx->hi);
    ctx->in_delay_slot = false;
    ctx->pc = 0x8A5A004u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8A5A004u, 0x2B27C0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B27C8u;
label_2b27c8:
    // 0x2b27c8: 0x800a7a70  lb          $t2, 0x7A70($zero)
    ctx->pc = 0x2b27c8u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x7A70u));
label_2b27cc:
    // 0x2b27cc: 0x1e1b0be  .word       0x01E1B0BE                   # dsrl32      $s6, $at, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b27ccu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 1) >> (32 + 2));
label_2b27d0:
    // 0x2b27d0: 0x8233800  j           func_8CE000
label_2b27d4:
    if (ctx->pc == 0x2B27D4u) {
        ctx->pc = 0x2B27D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B27D0u;
        // 0x2b27d4: 0x1e1bc8b  .word       0x01E1BC8B                   # movn        $s7, $t7, $at # 00000480 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B27D8u;
        goto label_2b27d8;
    }
    ctx->pc = 0x2B27D0u;
    ctx->pc = 0x2B27D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B27D0u;
    // 0x2b27d4: 0x1e1bc8b  .word       0x01E1BC8B                   # movn        $s7, $t7, $at # 00000480 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x8CE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8CE000u, 0x2B27D0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B27D8u;
label_2b27d8:
    // 0x2b27d8: 0x8463800  j           func_118E000
label_2b27dc:
    if (ctx->pc == 0x2B27DCu) {
        ctx->pc = 0x2B27DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B27D8u;
        // 0x2b27dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B27E0u;
        goto label_2b27e0;
    }
    ctx->pc = 0x2B27D8u;
    ctx->pc = 0x2B27DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B27D8u;
    // 0x2b27dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118E000u, 0x2B27D8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B27E0u;
label_2b27e0:
    // 0x2b27e0: 0x81823b7c  lb          $v0, 0x3B7C($t4)
    ctx->pc = 0x2b27e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 15228)));
label_2b27e4:
    // 0x2b27e4: 0x1d361bc  .word       0x01D361BC                   # dsll32      $t4, $s3, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b27e4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 19) << (32 + 6));
label_2b27e8:
    // 0x2b27e8: 0x8243800  j           func_90E000
label_2b27ec:
    if (ctx->pc == 0x2B27ECu) {
        ctx->pc = 0x2B27ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B27E8u;
        // 0x2b27ec: 0x1d368bd  .word       0x01D368BD                   # INVALID     $t6, $s3, 0x68BD # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B27EC raw=0x01D368BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B27F0u;
        goto label_2b27f0;
    }
    ctx->pc = 0x2B27E8u;
    ctx->pc = 0x2B27ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B27E8u;
    // 0x2b27ec: 0x1d368bd  .word       0x01D368BD                   # INVALID     $t6, $s3, 0x68BD # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B27EC raw=0x01D368BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
    ctx->in_delay_slot = false;
    ctx->pc = 0x90E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x90E000u, 0x2B27E8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B27F0u;
label_2b27f0:
    // 0x2b27f0: 0x81f203bc  lb          $s2, 0x3BC($t7)
    ctx->pc = 0x2b27f0u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2b27f4:
    // 0x2b27f4: 0x72cfdb  .word       0x0072CFDB                   # divu        $t9, $v1, $s2 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b27f4u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_2b27f8:
    // 0x2b27f8: 0x80031ff2  lb          $v1, 0x1FF2($zero)
    ctx->pc = 0x2b27f8u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x1FF2u));
label_2b27fc:
    // 0x2b27fc: 0x1d370be  .word       0x01D370BE                   # dsrl32      $t6, $s3, 2 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b27fcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 19) >> (32 + 2));
label_2b2800:
    // 0x2b2800: 0x81c33b7c  lb          $v1, 0x3B7C($t6)
    ctx->pc = 0x2b2800u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 15228)));
label_2b2804:
    // 0x2b2804: 0x1c07ccb  .word       0x01C07CCB                   # movn        $t7, $t6, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2804u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 14));
label_2b2808:
    // 0x2b2808: 0x1fa2010  .word       0x01FA2010                   # mfhi        $a0 # 01FA0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2808u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2b280c:
    // 0x2b280c: 0x1c291ff  .word       0x01C291FF                   # dsra32      $s2, $v0, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b280cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 2) >> (32 + 7));
label_2b2810:
    // 0x2b2810: 0x1fb2011  .word       0x01FB2011                   # mthi        $t7 # 001B2000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2810u;
    ctx->hi = GPR_U64(ctx, 15);
label_2b2814:
    // 0x2b2814: 0x19f9646  .word       0x019F9646                   # srlv        $s2, $ra, $t4 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2814u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 31), GPR_U32(ctx, 12) & 0x1F));
label_2b2818:
    // 0x2b2818: 0x1fc2012  .word       0x01FC2012                   # mflo        $a0 # 01FC0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2818u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_2b281c:
    // 0x2b281c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b281cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2820:
    // 0x2b2820: 0x81e13b7c  lb          $at, 0x3B7C($t7)
    ctx->pc = 0x2b2820u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 15228)));
label_2b2824:
    // 0x2b2824: 0x1dd9cef  .word       0x01DD9CEF                   # dsubu       $s3, $t6, $sp # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2824u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 14) - GPR_U64(ctx, 29));
label_2b2828:
    // 0x2b2828: 0x1f420e4  .word       0x01F420E4                   # and         $a0, $t7, $s4 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2828u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 15) & GPR_U64(ctx, 20));
label_2b282c:
    // 0x2b282c: 0x1c0949c  .word       0x01C0949C                   # dmult       $t6, $zero # 00009480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b282cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B282C raw=0x01C0949C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2830:
    // 0x2b2830: 0x1f520e5  .word       0x01F520E5                   # or          $a0, $t7, $s5 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2830u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 15) | GPR_U64(ctx, 21));
label_2b2834:
    // 0x2b2834: 0x1dfc9ff  .word       0x01DFC9FF                   # dsra32      $t9, $ra, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2834u;
    SET_GPR_S64(ctx, 25, GPR_S64(ctx, 31) >> (32 + 7));
label_2b2838:
    // 0x2b2838: 0x1f620e6  .word       0x01F620E6                   # xor         $a0, $t7, $s6 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2838u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 22));
label_2b283c:
    // 0x2b283c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b283cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2840:
    // 0x2b2840: 0x1f720e7  .word       0x01F720E7                   # nor         $a0, $t7, $s7 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2840u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 15) | GPR_U64(ctx, 23)));
label_2b2844:
    // 0x2b2844: 0x1d3997c  .word       0x01D3997C                   # dsll32      $s3, $s3, 5 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2844u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 5));
label_2b2848:
    // 0x2b2848: 0x800b5ff2  lb          $t3, 0x5FF2($zero)
    ctx->pc = 0x2b2848u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x5FF2u));
label_2b284c:
    // 0x2b284c: 0x1d2917d  .word       0x01D2917D                   # INVALID     $t6, $s2, -0x6E83 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b284cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B284C raw=0x01D2917D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2850:
    // 0x2b2850: 0x2440f40f  addiu       $zero, $v0, -0xBF1
    ctx->pc = 0x2b2850u;
    // NOP (addiu $zero, ...)
label_2b2854:
    // 0x2b2854: 0x1c3d1bc  .word       0x01C3D1BC                   # dsll32      $k0, $v1, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2854u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 3) << (32 + 6));
label_2b2858:
    // 0x2b2858: 0x50010002  beql        $zero, $at, . + 4 + (0x2 << 2)
label_2b285c:
    if (ctx->pc == 0x2B285Cu) {
        ctx->pc = 0x2B285Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2858u;
        // 0x2b285c: 0x1c3d8bd  .word       0x01C3D8BD                   # INVALID     $t6, $v1, -0x2743 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B285C raw=0x01C3D8BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2860u;
        goto label_2b2860;
    }
    ctx->pc = 0x2B2858u;
    {
        const bool branch_taken_0x2b2858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b2858) {
            ctx->pc = 0x2B285Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2858u;
            // 0x2b285c: 0x1c3d8bd  .word       0x01C3D8BD                   # INVALID     $t6, $v1, -0x2743 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //             throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B285C raw=0x01C3D8BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2864u;
            goto label_2b2864;
        }
    }
    ctx->pc = 0x2B2860u;
label_2b2860:
    // 0x2b2860: 0x81ed9b7d  lb          $t5, -0x6483($t7)
    ctx->pc = 0x2b2860u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294941565)));
label_2b2864:
    // 0x2b2864: 0x1c3e4ca  .word       0x01C3E4CA                   # movz        $gp, $t6, $v1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2864u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 28, GPR_VEC(ctx, 14));
label_2b2868:
    // 0x2b2868: 0xa296800  j           func_8A5A000
label_2b286c:
    if (ctx->pc == 0x2B286Cu) {
        ctx->pc = 0x2B286Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2868u;
        // 0x2b286c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2870u;
        goto label_2b2870;
    }
    ctx->pc = 0x2B2868u;
    ctx->pc = 0x2B286Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2868u;
    // 0x2b286c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x8A5A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8A5A000u, 0x2B2868u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B2870u;
label_2b2870:
    // 0x2b2870: 0x520b078b  beql        $s0, $t3, . + 4 + (0x78B << 2)
label_2b2874:
    if (ctx->pc == 0x2B2874u) {
        ctx->pc = 0x2B2874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2870u;
        // 0x2b2874: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2878u;
        goto label_2b2878;
    }
    ctx->pc = 0x2B2870u;
    {
        const bool branch_taken_0x2b2870 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 11));
        if (branch_taken_0x2b2870) {
            ctx->pc = 0x2B2874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2870u;
            // 0x2b2874: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B46A0u;
            { ctx->pc = 0x2b46a0; return; }
        }
    }
    ctx->pc = 0x2B2878u;
label_2b2878:
    // 0x2b2878: 0x81cd937d  lb          $t5, -0x6C83($t6)
    ctx->pc = 0x2b2878u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 4294939517)));
label_2b287c:
    // 0x2b287c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b287cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2880:
    // 0x2b2880: 0x800066fc  lb          $zero, 0x66FC($zero)
    ctx->pc = 0x2b2880u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x66FCu));
label_2b2884:
    // 0x2b2884: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2884u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2888:
    // 0x2b2888: 0x10010001  beq         $zero, $at, . + 4 + (0x1 << 2)
label_2b288c:
    if (ctx->pc == 0x2B288Cu) {
        ctx->pc = 0x2B288Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2888u;
        // 0x2b288c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2890u;
        goto label_2b2890;
    }
    ctx->pc = 0x2B2888u;
    {
        const bool branch_taken_0x2b2888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x2B288Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2888u;
        // 0x2b288c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2888) {
            ctx->pc = 0x2B2890u;
            goto label_2b2890;
        }
    }
    ctx->pc = 0x2B2890u;
label_2b2890:
    // 0x2b2890: 0x800e0bb1  lb          $t6, 0xBB1($zero)
    ctx->pc = 0x2b2890u;
    SET_GPR_S32(ctx, 14, (int8_t)FAST_READ8(0xBB1u));
label_2b2894:
    // 0x2b2894: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2894u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2898:
    // 0x2b2898: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2898u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b289c:
    // 0x2b289c: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b289cu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b28a0:
    // 0x2b28a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b28a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b28a4:
    // 0x2b28a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b28a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b28a8:
    // 0x2b28a8: 0x100a0001  beq         $zero, $t2, . + 4 + (0x1 << 2)
label_2b28ac:
    if (ctx->pc == 0x2B28ACu) {
        ctx->pc = 0x2B28ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B28A8u;
        // 0x2b28ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B28B0u;
        goto label_2b28b0;
    }
    ctx->pc = 0x2B28A8u;
    {
        const bool branch_taken_0x2b28a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 10));
        ctx->pc = 0x2B28ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B28A8u;
        // 0x2b28ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b28a8) {
            ctx->pc = 0x2B28B0u;
            goto label_2b28b0;
        }
    }
    ctx->pc = 0x2B28B0u;
label_2b28b0:
    // 0x2b28b0: 0x437f0000  .word       0x437F0000                   # INVALID     $k1, $ra, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b28b0u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1B at 0x2B28B0 raw=0x437F0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b28b4:
    // 0x2b28b4: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x2b28b4u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
label_2b28b8:
    // 0x2b28b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b28b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b28bc:
    // 0x2b28bc: 0x20079e  .word       0x0020079E                   # ddiv        $zero, $at, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b28bcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2B28BC raw=0x0020079E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b28c0:
    // 0x2b28c0: 0x45000000  bc1f        . + 4 + (0x0 << 2)
label_2b28c4:
    if (ctx->pc == 0x2B28C4u) {
        ctx->pc = 0x2B28C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B28C0u;
        // 0x2b28c4: 0x800002ff  lb          $zero, 0x2FF($zero) (Delay Slot)
        SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 767)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B28C8u;
        goto label_2b28c8;
    }
    ctx->pc = 0x2B28C0u;
    {
        const bool branch_taken_0x2b28c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B28C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B28C0u;
        // 0x2b28c4: 0x800002ff  lb          $zero, 0x2FF($zero) (Delay Slot)
        SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 767)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b28c0) {
            ctx->pc = 0x2B28C4u;
            goto label_2b28c4;
        }
    }
    ctx->pc = 0x2B28C8u;
label_2b28c8:
    // 0x2b28c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b28c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b28cc:
    // 0x2b28cc: 0x10006e2  .word       0x010006E2                   # sub         $zero, $t0, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b28ccu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 8), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_2b28d0:
    // 0x2b28d0: 0x477fdc00  .word       0x477FDC00                   # INVALID     $k1, $ra, -0x2400 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2b28d0u;
// //     throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x0 at 0x2B28D0 raw=0x477FDC00"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b28d4:
    // 0x2b28d4: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x2b28d4u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
label_2b28d8:
    // 0x2b28d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b28d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b28dc:
    // 0x2b28dc: 0x20069e  .word       0x0020069E                   # ddiv        $zero, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b28dcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2B28DC raw=0x0020069E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b28e0:
    // 0x2b28e0: 0x45140000  .word       0x45140000                   # INVALID     $t0, $s4, 0x0 # 00000000 <InstrIdType: CPU_COP1_BC1>
    ctx->pc = 0x2b28e0u;
    // FPU branch instruction - handled elsewhere
label_2b28e4:
    // 0x2b28e4: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x2b28e4u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
label_2b28e8:
    // 0x2b28e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b28e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b28ec:
    // 0x2b28ec: 0x20065e  .word       0x0020065E                   # ddiv        $zero, $at, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b28ecu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2B28EC raw=0x0020065E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b28f0:
    // 0x2b28f0: 0x44d80000  ctc1        $t8, $0
    ctx->pc = 0x2b28f0u;
    // CTC1 to FCR0 ignored
label_2b28f4:
    // 0x2b28f4: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x2b28f4u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
label_2b28f8:
    // 0x2b28f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b28f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b28fc:
    // 0x2b28fc: 0x2006de  .word       0x002006DE                   # ddiv        $zero, $at, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b28fcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2B28FC raw=0x002006DE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2900:
    // 0x2b2900: 0x11e807ff  beq         $t7, $t0, . + 4 + (0x7FF << 2)
label_2b2904:
    if (ctx->pc == 0x2B2904u) {
        ctx->pc = 0x2B2904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2900u;
        // 0x2b2904: 0x1f8c62c  .word       0x01F8C62C                   # dadd        $t8, $t7, $t8 # 00000600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 24); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 24, r); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2908u;
        goto label_2b2908;
    }
    ctx->pc = 0x2B2900u;
    {
        const bool branch_taken_0x2b2900 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B2904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2900u;
        // 0x2b2904: 0x1f8c62c  .word       0x01F8C62C                   # dadd        $t8, $t7, $t8 # 00000600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 24); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 24, r); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2900) {
            ctx->pc = 0x2B4900u;
            { ctx->pc = 0x2b4900; return; }
        }
    }
    ctx->pc = 0x2B2908u;
label_2b2908:
    // 0x2b2908: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2b2908u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_2b290c:
    // 0x2b290c: 0x81f9ce6c  lb          $t9, -0x3194($t7)
    ctx->pc = 0x2b290cu;
    SET_GPR_S32(ctx, 25, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294954604)));
label_2b2910:
    // 0x2b2910: 0x100e0000  beq         $zero, $t6, . + 4 + (0x0 << 2)
label_2b2914:
    if (ctx->pc == 0x2B2914u) {
        ctx->pc = 0x2B2914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2910u;
        // 0x2b2914: 0x20059e  .word       0x0020059E                   # ddiv        $zero, $at, $zero # 00000580 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2B2914 raw=0x0020059E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2918u;
        { ctx->pc = 0x2b2918; return; }
    }
    ctx->pc = 0x2B2910u;
    {
        const bool branch_taken_0x2b2910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x2B2914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2910u;
        // 0x2b2914: 0x20059e  .word       0x0020059E                   # ddiv        $zero, $at, $zero # 00000580 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2B2914 raw=0x0020059E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2910) {
            ctx->pc = 0x2B2914u;
            goto label_2b2914;
        }
    }
    ctx->pc = 0x2B2918u;
    ctx->pc = 0x2b2918u;
    return;
}

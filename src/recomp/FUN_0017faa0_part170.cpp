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


void FUN_0017faa0_part170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1d22f0u: goto label_1d22f0;
        case 0x1d22f4u: goto label_1d22f4;
        case 0x1d22f8u: goto label_1d22f8;
        case 0x1d22fcu: goto label_1d22fc;
        case 0x1d2300u: goto label_1d2300;
        case 0x1d2304u: goto label_1d2304;
        case 0x1d2308u: goto label_1d2308;
        case 0x1d230cu: goto label_1d230c;
        case 0x1d2310u: goto label_1d2310;
        case 0x1d2314u: goto label_1d2314;
        case 0x1d2318u: goto label_1d2318;
        case 0x1d231cu: goto label_1d231c;
        case 0x1d2320u: goto label_1d2320;
        case 0x1d2324u: goto label_1d2324;
        case 0x1d2328u: goto label_1d2328;
        case 0x1d232cu: goto label_1d232c;
        case 0x1d2330u: goto label_1d2330;
        case 0x1d2334u: goto label_1d2334;
        case 0x1d2338u: goto label_1d2338;
        case 0x1d233cu: goto label_1d233c;
        case 0x1d2340u: goto label_1d2340;
        case 0x1d2344u: goto label_1d2344;
        case 0x1d2348u: goto label_1d2348;
        case 0x1d234cu: goto label_1d234c;
        case 0x1d2350u: goto label_1d2350;
        case 0x1d2354u: goto label_1d2354;
        case 0x1d2358u: goto label_1d2358;
        case 0x1d235cu: goto label_1d235c;
        case 0x1d2360u: goto label_1d2360;
        case 0x1d2364u: goto label_1d2364;
        case 0x1d2368u: goto label_1d2368;
        case 0x1d236cu: goto label_1d236c;
        case 0x1d2370u: goto label_1d2370;
        case 0x1d2374u: goto label_1d2374;
        case 0x1d2378u: goto label_1d2378;
        case 0x1d237cu: goto label_1d237c;
        case 0x1d2380u: goto label_1d2380;
        case 0x1d2384u: goto label_1d2384;
        case 0x1d2388u: goto label_1d2388;
        case 0x1d238cu: goto label_1d238c;
        case 0x1d2390u: goto label_1d2390;
        case 0x1d2394u: goto label_1d2394;
        case 0x1d2398u: goto label_1d2398;
        case 0x1d239cu: goto label_1d239c;
        case 0x1d23a0u: goto label_1d23a0;
        case 0x1d23a4u: goto label_1d23a4;
        case 0x1d23a8u: goto label_1d23a8;
        case 0x1d23acu: goto label_1d23ac;
        case 0x1d23b0u: goto label_1d23b0;
        case 0x1d23b4u: goto label_1d23b4;
        case 0x1d23b8u: goto label_1d23b8;
        case 0x1d23bcu: goto label_1d23bc;
        case 0x1d23c0u: goto label_1d23c0;
        case 0x1d23c4u: goto label_1d23c4;
        case 0x1d23c8u: goto label_1d23c8;
        case 0x1d23ccu: goto label_1d23cc;
        case 0x1d23d0u: goto label_1d23d0;
        case 0x1d23d4u: goto label_1d23d4;
        case 0x1d23d8u: goto label_1d23d8;
        case 0x1d23dcu: goto label_1d23dc;
        case 0x1d23e0u: goto label_1d23e0;
        case 0x1d23e4u: goto label_1d23e4;
        case 0x1d23e8u: goto label_1d23e8;
        case 0x1d23ecu: goto label_1d23ec;
        case 0x1d23f0u: goto label_1d23f0;
        case 0x1d23f4u: goto label_1d23f4;
        case 0x1d23f8u: goto label_1d23f8;
        case 0x1d23fcu: goto label_1d23fc;
        case 0x1d2400u: goto label_1d2400;
        case 0x1d2404u: goto label_1d2404;
        case 0x1d2408u: goto label_1d2408;
        case 0x1d240cu: goto label_1d240c;
        case 0x1d2410u: goto label_1d2410;
        case 0x1d2414u: goto label_1d2414;
        case 0x1d2418u: goto label_1d2418;
        case 0x1d241cu: goto label_1d241c;
        case 0x1d2420u: goto label_1d2420;
        case 0x1d2424u: goto label_1d2424;
        case 0x1d2428u: goto label_1d2428;
        case 0x1d242cu: goto label_1d242c;
        case 0x1d2430u: goto label_1d2430;
        case 0x1d2434u: goto label_1d2434;
        case 0x1d2438u: goto label_1d2438;
        case 0x1d243cu: goto label_1d243c;
        case 0x1d2440u: goto label_1d2440;
        case 0x1d2444u: goto label_1d2444;
        case 0x1d2448u: goto label_1d2448;
        case 0x1d244cu: goto label_1d244c;
        case 0x1d2450u: goto label_1d2450;
        case 0x1d2454u: goto label_1d2454;
        case 0x1d2458u: goto label_1d2458;
        case 0x1d245cu: goto label_1d245c;
        case 0x1d2460u: goto label_1d2460;
        case 0x1d2464u: goto label_1d2464;
        case 0x1d2468u: goto label_1d2468;
        case 0x1d246cu: goto label_1d246c;
        case 0x1d2470u: goto label_1d2470;
        case 0x1d2474u: goto label_1d2474;
        case 0x1d2478u: goto label_1d2478;
        case 0x1d247cu: goto label_1d247c;
        case 0x1d2480u: goto label_1d2480;
        case 0x1d2484u: goto label_1d2484;
        case 0x1d2488u: goto label_1d2488;
        case 0x1d248cu: goto label_1d248c;
        case 0x1d2490u: goto label_1d2490;
        case 0x1d2494u: goto label_1d2494;
        case 0x1d2498u: goto label_1d2498;
        case 0x1d249cu: goto label_1d249c;
        case 0x1d24a0u: goto label_1d24a0;
        case 0x1d24a4u: goto label_1d24a4;
        case 0x1d24a8u: goto label_1d24a8;
        case 0x1d24acu: goto label_1d24ac;
        case 0x1d24b0u: goto label_1d24b0;
        case 0x1d24b4u: goto label_1d24b4;
        case 0x1d24b8u: goto label_1d24b8;
        case 0x1d24bcu: goto label_1d24bc;
        case 0x1d24c0u: goto label_1d24c0;
        case 0x1d24c4u: goto label_1d24c4;
        case 0x1d24c8u: goto label_1d24c8;
        case 0x1d24ccu: goto label_1d24cc;
        case 0x1d24d0u: goto label_1d24d0;
        case 0x1d24d4u: goto label_1d24d4;
        case 0x1d24d8u: goto label_1d24d8;
        case 0x1d24dcu: goto label_1d24dc;
        case 0x1d24e0u: goto label_1d24e0;
        case 0x1d24e4u: goto label_1d24e4;
        case 0x1d24e8u: goto label_1d24e8;
        case 0x1d24ecu: goto label_1d24ec;
        case 0x1d24f0u: goto label_1d24f0;
        case 0x1d24f4u: goto label_1d24f4;
        case 0x1d24f8u: goto label_1d24f8;
        case 0x1d24fcu: goto label_1d24fc;
        case 0x1d2500u: goto label_1d2500;
        case 0x1d2504u: goto label_1d2504;
        case 0x1d2508u: goto label_1d2508;
        case 0x1d250cu: goto label_1d250c;
        case 0x1d2510u: goto label_1d2510;
        case 0x1d2514u: goto label_1d2514;
        case 0x1d2518u: goto label_1d2518;
        case 0x1d251cu: goto label_1d251c;
        case 0x1d2520u: goto label_1d2520;
        case 0x1d2524u: goto label_1d2524;
        case 0x1d2528u: goto label_1d2528;
        case 0x1d252cu: goto label_1d252c;
        case 0x1d2530u: goto label_1d2530;
        case 0x1d2534u: goto label_1d2534;
        case 0x1d2538u: goto label_1d2538;
        case 0x1d253cu: goto label_1d253c;
        case 0x1d2540u: goto label_1d2540;
        case 0x1d2544u: goto label_1d2544;
        case 0x1d2548u: goto label_1d2548;
        case 0x1d254cu: goto label_1d254c;
        case 0x1d2550u: goto label_1d2550;
        case 0x1d2554u: goto label_1d2554;
        case 0x1d2558u: goto label_1d2558;
        case 0x1d255cu: goto label_1d255c;
        case 0x1d2560u: goto label_1d2560;
        case 0x1d2564u: goto label_1d2564;
        case 0x1d2568u: goto label_1d2568;
        case 0x1d256cu: goto label_1d256c;
        case 0x1d2570u: goto label_1d2570;
        case 0x1d2574u: goto label_1d2574;
        case 0x1d2578u: goto label_1d2578;
        case 0x1d257cu: goto label_1d257c;
        case 0x1d2580u: goto label_1d2580;
        case 0x1d2584u: goto label_1d2584;
        case 0x1d2588u: goto label_1d2588;
        case 0x1d258cu: goto label_1d258c;
        case 0x1d2590u: goto label_1d2590;
        case 0x1d2594u: goto label_1d2594;
        case 0x1d2598u: goto label_1d2598;
        case 0x1d259cu: goto label_1d259c;
        case 0x1d25a0u: goto label_1d25a0;
        case 0x1d25a4u: goto label_1d25a4;
        case 0x1d25a8u: goto label_1d25a8;
        case 0x1d25acu: goto label_1d25ac;
        case 0x1d25b0u: goto label_1d25b0;
        case 0x1d25b4u: goto label_1d25b4;
        case 0x1d25b8u: goto label_1d25b8;
        case 0x1d25bcu: goto label_1d25bc;
        case 0x1d25c0u: goto label_1d25c0;
        case 0x1d25c4u: goto label_1d25c4;
        case 0x1d25c8u: goto label_1d25c8;
        case 0x1d25ccu: goto label_1d25cc;
        case 0x1d25d0u: goto label_1d25d0;
        case 0x1d25d4u: goto label_1d25d4;
        case 0x1d25d8u: goto label_1d25d8;
        case 0x1d25dcu: goto label_1d25dc;
        case 0x1d25e0u: goto label_1d25e0;
        case 0x1d25e4u: goto label_1d25e4;
        case 0x1d25e8u: goto label_1d25e8;
        case 0x1d25ecu: goto label_1d25ec;
        case 0x1d25f0u: goto label_1d25f0;
        case 0x1d25f4u: goto label_1d25f4;
        case 0x1d25f8u: goto label_1d25f8;
        case 0x1d25fcu: goto label_1d25fc;
        case 0x1d2600u: goto label_1d2600;
        case 0x1d2604u: goto label_1d2604;
        case 0x1d2608u: goto label_1d2608;
        case 0x1d260cu: goto label_1d260c;
        case 0x1d2610u: goto label_1d2610;
        case 0x1d2614u: goto label_1d2614;
        case 0x1d2618u: goto label_1d2618;
        case 0x1d261cu: goto label_1d261c;
        case 0x1d2620u: goto label_1d2620;
        case 0x1d2624u: goto label_1d2624;
        case 0x1d2628u: goto label_1d2628;
        case 0x1d262cu: goto label_1d262c;
        case 0x1d2630u: goto label_1d2630;
        case 0x1d2634u: goto label_1d2634;
        case 0x1d2638u: goto label_1d2638;
        case 0x1d263cu: goto label_1d263c;
        case 0x1d2640u: goto label_1d2640;
        case 0x1d2644u: goto label_1d2644;
        case 0x1d2648u: goto label_1d2648;
        case 0x1d264cu: goto label_1d264c;
        case 0x1d2650u: goto label_1d2650;
        case 0x1d2654u: goto label_1d2654;
        case 0x1d2658u: goto label_1d2658;
        case 0x1d265cu: goto label_1d265c;
        case 0x1d2660u: goto label_1d2660;
        case 0x1d2664u: goto label_1d2664;
        case 0x1d2668u: goto label_1d2668;
        case 0x1d266cu: goto label_1d266c;
        case 0x1d2670u: goto label_1d2670;
        case 0x1d2674u: goto label_1d2674;
        case 0x1d2678u: goto label_1d2678;
        case 0x1d267cu: goto label_1d267c;
        case 0x1d2680u: goto label_1d2680;
        case 0x1d2684u: goto label_1d2684;
        case 0x1d2688u: goto label_1d2688;
        case 0x1d268cu: goto label_1d268c;
        case 0x1d2690u: goto label_1d2690;
        case 0x1d2694u: goto label_1d2694;
        case 0x1d2698u: goto label_1d2698;
        case 0x1d269cu: goto label_1d269c;
        case 0x1d26a0u: goto label_1d26a0;
        case 0x1d26a4u: goto label_1d26a4;
        case 0x1d26a8u: goto label_1d26a8;
        case 0x1d26acu: goto label_1d26ac;
        case 0x1d26b0u: goto label_1d26b0;
        case 0x1d26b4u: goto label_1d26b4;
        case 0x1d26b8u: goto label_1d26b8;
        case 0x1d26bcu: goto label_1d26bc;
        case 0x1d26c0u: goto label_1d26c0;
        case 0x1d26c4u: goto label_1d26c4;
        case 0x1d26c8u: goto label_1d26c8;
        case 0x1d26ccu: goto label_1d26cc;
        case 0x1d26d0u: goto label_1d26d0;
        case 0x1d26d4u: goto label_1d26d4;
        case 0x1d26d8u: goto label_1d26d8;
        case 0x1d26dcu: goto label_1d26dc;
        case 0x1d26e0u: goto label_1d26e0;
        case 0x1d26e4u: goto label_1d26e4;
        case 0x1d26e8u: goto label_1d26e8;
        case 0x1d26ecu: goto label_1d26ec;
        case 0x1d26f0u: goto label_1d26f0;
        case 0x1d26f4u: goto label_1d26f4;
        case 0x1d26f8u: goto label_1d26f8;
        case 0x1d26fcu: goto label_1d26fc;
        case 0x1d2700u: goto label_1d2700;
        case 0x1d2704u: goto label_1d2704;
        case 0x1d2708u: goto label_1d2708;
        case 0x1d270cu: goto label_1d270c;
        case 0x1d2710u: goto label_1d2710;
        case 0x1d2714u: goto label_1d2714;
        case 0x1d2718u: goto label_1d2718;
        case 0x1d271cu: goto label_1d271c;
        case 0x1d2720u: goto label_1d2720;
        case 0x1d2724u: goto label_1d2724;
        case 0x1d2728u: goto label_1d2728;
        case 0x1d272cu: goto label_1d272c;
        case 0x1d2730u: goto label_1d2730;
        case 0x1d2734u: goto label_1d2734;
        case 0x1d2738u: goto label_1d2738;
        case 0x1d273cu: goto label_1d273c;
        case 0x1d2740u: goto label_1d2740;
        case 0x1d2744u: goto label_1d2744;
        case 0x1d2748u: goto label_1d2748;
        case 0x1d274cu: goto label_1d274c;
        case 0x1d2750u: goto label_1d2750;
        case 0x1d2754u: goto label_1d2754;
        case 0x1d2758u: goto label_1d2758;
        case 0x1d275cu: goto label_1d275c;
        case 0x1d2760u: goto label_1d2760;
        case 0x1d2764u: goto label_1d2764;
        case 0x1d2768u: goto label_1d2768;
        case 0x1d276cu: goto label_1d276c;
        case 0x1d2770u: goto label_1d2770;
        case 0x1d2774u: goto label_1d2774;
        case 0x1d2778u: goto label_1d2778;
        case 0x1d277cu: goto label_1d277c;
        case 0x1d2780u: goto label_1d2780;
        case 0x1d2784u: goto label_1d2784;
        case 0x1d2788u: goto label_1d2788;
        case 0x1d278cu: goto label_1d278c;
        case 0x1d2790u: goto label_1d2790;
        case 0x1d2794u: goto label_1d2794;
        case 0x1d2798u: goto label_1d2798;
        case 0x1d279cu: goto label_1d279c;
        case 0x1d27a0u: goto label_1d27a0;
        case 0x1d27a4u: goto label_1d27a4;
        case 0x1d27a8u: goto label_1d27a8;
        case 0x1d27acu: goto label_1d27ac;
        case 0x1d27b0u: goto label_1d27b0;
        case 0x1d27b4u: goto label_1d27b4;
        case 0x1d27b8u: goto label_1d27b8;
        case 0x1d27bcu: goto label_1d27bc;
        case 0x1d27c0u: goto label_1d27c0;
        case 0x1d27c4u: goto label_1d27c4;
        case 0x1d27c8u: goto label_1d27c8;
        case 0x1d27ccu: goto label_1d27cc;
        case 0x1d27d0u: goto label_1d27d0;
        case 0x1d27d4u: goto label_1d27d4;
        case 0x1d27d8u: goto label_1d27d8;
        case 0x1d27dcu: goto label_1d27dc;
        case 0x1d27e0u: goto label_1d27e0;
        case 0x1d27e4u: goto label_1d27e4;
        case 0x1d27e8u: goto label_1d27e8;
        case 0x1d27ecu: goto label_1d27ec;
        case 0x1d27f0u: goto label_1d27f0;
        case 0x1d27f4u: goto label_1d27f4;
        case 0x1d27f8u: goto label_1d27f8;
        case 0x1d27fcu: goto label_1d27fc;
        case 0x1d2800u: goto label_1d2800;
        case 0x1d2804u: goto label_1d2804;
        case 0x1d2808u: goto label_1d2808;
        case 0x1d280cu: goto label_1d280c;
        case 0x1d2810u: goto label_1d2810;
        case 0x1d2814u: goto label_1d2814;
        case 0x1d2818u: goto label_1d2818;
        case 0x1d281cu: goto label_1d281c;
        case 0x1d2820u: goto label_1d2820;
        case 0x1d2824u: goto label_1d2824;
        case 0x1d2828u: goto label_1d2828;
        case 0x1d282cu: goto label_1d282c;
        case 0x1d2830u: goto label_1d2830;
        case 0x1d2834u: goto label_1d2834;
        case 0x1d2838u: goto label_1d2838;
        case 0x1d283cu: goto label_1d283c;
        case 0x1d2840u: goto label_1d2840;
        case 0x1d2844u: goto label_1d2844;
        case 0x1d2848u: goto label_1d2848;
        case 0x1d284cu: goto label_1d284c;
        case 0x1d2850u: goto label_1d2850;
        case 0x1d2854u: goto label_1d2854;
        case 0x1d2858u: goto label_1d2858;
        case 0x1d285cu: goto label_1d285c;
        case 0x1d2860u: goto label_1d2860;
        case 0x1d2864u: goto label_1d2864;
        case 0x1d2868u: goto label_1d2868;
        case 0x1d286cu: goto label_1d286c;
        case 0x1d2870u: goto label_1d2870;
        case 0x1d2874u: goto label_1d2874;
        case 0x1d2878u: goto label_1d2878;
        case 0x1d287cu: goto label_1d287c;
        case 0x1d2880u: goto label_1d2880;
        case 0x1d2884u: goto label_1d2884;
        case 0x1d2888u: goto label_1d2888;
        case 0x1d288cu: goto label_1d288c;
        case 0x1d2890u: goto label_1d2890;
        case 0x1d2894u: goto label_1d2894;
        case 0x1d2898u: goto label_1d2898;
        case 0x1d289cu: goto label_1d289c;
        case 0x1d28a0u: goto label_1d28a0;
        case 0x1d28a4u: goto label_1d28a4;
        case 0x1d28a8u: goto label_1d28a8;
        case 0x1d28acu: goto label_1d28ac;
        case 0x1d28b0u: goto label_1d28b0;
        case 0x1d28b4u: goto label_1d28b4;
        case 0x1d28b8u: goto label_1d28b8;
        case 0x1d28bcu: goto label_1d28bc;
        case 0x1d28c0u: goto label_1d28c0;
        case 0x1d28c4u: goto label_1d28c4;
        case 0x1d28c8u: goto label_1d28c8;
        case 0x1d28ccu: goto label_1d28cc;
        case 0x1d28d0u: goto label_1d28d0;
        case 0x1d28d4u: goto label_1d28d4;
        case 0x1d28d8u: goto label_1d28d8;
        case 0x1d28dcu: goto label_1d28dc;
        case 0x1d28e0u: goto label_1d28e0;
        case 0x1d28e4u: goto label_1d28e4;
        case 0x1d28e8u: goto label_1d28e8;
        case 0x1d28ecu: goto label_1d28ec;
        case 0x1d28f0u: goto label_1d28f0;
        case 0x1d28f4u: goto label_1d28f4;
        case 0x1d28f8u: goto label_1d28f8;
        case 0x1d28fcu: goto label_1d28fc;
        case 0x1d2900u: goto label_1d2900;
        case 0x1d2904u: goto label_1d2904;
        case 0x1d2908u: goto label_1d2908;
        case 0x1d290cu: goto label_1d290c;
        case 0x1d2910u: goto label_1d2910;
        case 0x1d2914u: goto label_1d2914;
        case 0x1d2918u: goto label_1d2918;
        case 0x1d291cu: goto label_1d291c;
        case 0x1d2920u: goto label_1d2920;
        case 0x1d2924u: goto label_1d2924;
        case 0x1d2928u: goto label_1d2928;
        case 0x1d292cu: goto label_1d292c;
        case 0x1d2930u: goto label_1d2930;
        case 0x1d2934u: goto label_1d2934;
        case 0x1d2938u: goto label_1d2938;
        case 0x1d293cu: goto label_1d293c;
        case 0x1d2940u: goto label_1d2940;
        case 0x1d2944u: goto label_1d2944;
        case 0x1d2948u: goto label_1d2948;
        case 0x1d294cu: goto label_1d294c;
        case 0x1d2950u: goto label_1d2950;
        case 0x1d2954u: goto label_1d2954;
        case 0x1d2958u: goto label_1d2958;
        case 0x1d295cu: goto label_1d295c;
        case 0x1d2960u: goto label_1d2960;
        case 0x1d2964u: goto label_1d2964;
        case 0x1d2968u: goto label_1d2968;
        case 0x1d296cu: goto label_1d296c;
        case 0x1d2970u: goto label_1d2970;
        case 0x1d2974u: goto label_1d2974;
        case 0x1d2978u: goto label_1d2978;
        case 0x1d297cu: goto label_1d297c;
        case 0x1d2980u: goto label_1d2980;
        case 0x1d2984u: goto label_1d2984;
        case 0x1d2988u: goto label_1d2988;
        case 0x1d298cu: goto label_1d298c;
        case 0x1d2990u: goto label_1d2990;
        case 0x1d2994u: goto label_1d2994;
        case 0x1d2998u: goto label_1d2998;
        case 0x1d299cu: goto label_1d299c;
        case 0x1d29a0u: goto label_1d29a0;
        case 0x1d29a4u: goto label_1d29a4;
        case 0x1d29a8u: goto label_1d29a8;
        case 0x1d29acu: goto label_1d29ac;
        case 0x1d29b0u: goto label_1d29b0;
        case 0x1d29b4u: goto label_1d29b4;
        case 0x1d29b8u: goto label_1d29b8;
        case 0x1d29bcu: goto label_1d29bc;
        case 0x1d29c0u: goto label_1d29c0;
        case 0x1d29c4u: goto label_1d29c4;
        case 0x1d29c8u: goto label_1d29c8;
        case 0x1d29ccu: goto label_1d29cc;
        case 0x1d29d0u: goto label_1d29d0;
        case 0x1d29d4u: goto label_1d29d4;
        case 0x1d29d8u: goto label_1d29d8;
        case 0x1d29dcu: goto label_1d29dc;
        case 0x1d29e0u: goto label_1d29e0;
        case 0x1d29e4u: goto label_1d29e4;
        case 0x1d29e8u: goto label_1d29e8;
        case 0x1d29ecu: goto label_1d29ec;
        case 0x1d29f0u: goto label_1d29f0;
        case 0x1d29f4u: goto label_1d29f4;
        case 0x1d29f8u: goto label_1d29f8;
        case 0x1d29fcu: goto label_1d29fc;
        case 0x1d2a00u: goto label_1d2a00;
        case 0x1d2a04u: goto label_1d2a04;
        case 0x1d2a08u: goto label_1d2a08;
        case 0x1d2a0cu: goto label_1d2a0c;
        case 0x1d2a10u: goto label_1d2a10;
        case 0x1d2a14u: goto label_1d2a14;
        case 0x1d2a18u: goto label_1d2a18;
        case 0x1d2a1cu: goto label_1d2a1c;
        case 0x1d2a20u: goto label_1d2a20;
        case 0x1d2a24u: goto label_1d2a24;
        case 0x1d2a28u: goto label_1d2a28;
        case 0x1d2a2cu: goto label_1d2a2c;
        case 0x1d2a30u: goto label_1d2a30;
        case 0x1d2a34u: goto label_1d2a34;
        case 0x1d2a38u: goto label_1d2a38;
        case 0x1d2a3cu: goto label_1d2a3c;
        case 0x1d2a40u: goto label_1d2a40;
        case 0x1d2a44u: goto label_1d2a44;
        case 0x1d2a48u: goto label_1d2a48;
        case 0x1d2a4cu: goto label_1d2a4c;
        case 0x1d2a50u: goto label_1d2a50;
        case 0x1d2a54u: goto label_1d2a54;
        case 0x1d2a58u: goto label_1d2a58;
        case 0x1d2a5cu: goto label_1d2a5c;
        case 0x1d2a60u: goto label_1d2a60;
        case 0x1d2a64u: goto label_1d2a64;
        case 0x1d2a68u: goto label_1d2a68;
        case 0x1d2a6cu: goto label_1d2a6c;
        case 0x1d2a70u: goto label_1d2a70;
        case 0x1d2a74u: goto label_1d2a74;
        case 0x1d2a78u: goto label_1d2a78;
        case 0x1d2a7cu: goto label_1d2a7c;
        case 0x1d2a80u: goto label_1d2a80;
        case 0x1d2a84u: goto label_1d2a84;
        case 0x1d2a88u: goto label_1d2a88;
        case 0x1d2a8cu: goto label_1d2a8c;
        case 0x1d2a90u: goto label_1d2a90;
        case 0x1d2a94u: goto label_1d2a94;
        case 0x1d2a98u: goto label_1d2a98;
        case 0x1d2a9cu: goto label_1d2a9c;
        case 0x1d2aa0u: goto label_1d2aa0;
        case 0x1d2aa4u: goto label_1d2aa4;
        case 0x1d2aa8u: goto label_1d2aa8;
        case 0x1d2aacu: goto label_1d2aac;
        case 0x1d2ab0u: goto label_1d2ab0;
        case 0x1d2ab4u: goto label_1d2ab4;
        case 0x1d2ab8u: goto label_1d2ab8;
        case 0x1d2abcu: goto label_1d2abc;
        default: return;
    }

label_1d22f0:
    // 0x1d22f0: 0xae64008c  sw          $a0, 0x8C($s3)
    ctx->pc = 0x1d22f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 4));
label_1d22f4:
    // 0x1d22f4: 0xa26000b8  sb          $zero, 0xB8($s3)
    ctx->pc = 0x1d22f4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 184), (uint8_t)GPR_U32(ctx, 0));
label_1d22f8:
    // 0x1d22f8: 0xa26300b9  sb          $v1, 0xB9($s3)
    ctx->pc = 0x1d22f8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 185), (uint8_t)GPR_U32(ctx, 3));
label_1d22fc:
    // 0x1d22fc: 0xa26700ba  sb          $a3, 0xBA($s3)
    ctx->pc = 0x1d22fcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 186), (uint8_t)GPR_U32(ctx, 7));
label_1d2300:
    // 0x1d2300: 0xa26500bb  sb          $a1, 0xBB($s3)
    ctx->pc = 0x1d2300u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 187), (uint8_t)GPR_U32(ctx, 5));
label_1d2304:
    // 0x1d2304: 0xae6400bc  sw          $a0, 0xBC($s3)
    ctx->pc = 0x1d2304u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 188), GPR_U32(ctx, 4));
label_1d2308:
    // 0x1d2308: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d2308u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d230c:
    // 0x1d230c: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1d230cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d2310:
    // 0x1d2310: 0x1460ff75  bnez        $v1, . + 4 + (-0x8B << 2)
label_1d2314:
    if (ctx->pc == 0x1D2314u) {
        ctx->pc = 0x1D2314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2310u;
        // 0x1d2314: 0x269400d0  addiu       $s4, $s4, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2318u;
        goto label_1d2318;
    }
    ctx->pc = 0x1D2310u;
    {
        const bool branch_taken_0x1d2310 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2310u;
        // 0x1d2314: 0x269400d0  addiu       $s4, $s4, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2310) {
            ctx->pc = 0x1D20E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1d20e8; return; }
        }
    }
    ctx->pc = 0x1D2318u;
label_1d2318:
    // 0x1d2318: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1d2318u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_1d231c:
    // 0x1d231c: 0x2ae30002  slti        $v1, $s7, 0x2
    ctx->pc = 0x1d231cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d2320:
    // 0x1d2320: 0x1460ff23  bnez        $v1, . + 4 + (-0xDD << 2)
label_1d2324:
    if (ctx->pc == 0x1D2324u) {
        ctx->pc = 0x1D2324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2320u;
        // 0x1d2324: 0x26d60250  addiu       $s6, $s6, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2328u;
        goto label_1d2328;
    }
    ctx->pc = 0x1D2320u;
    {
        const bool branch_taken_0x1d2320 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2320u;
        // 0x1d2324: 0x26d60250  addiu       $s6, $s6, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2320) {
            ctx->pc = 0x1D1FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1d1fb0; return; }
        }
    }
    ctx->pc = 0x1D2328u;
label_1d2328:
    // 0x1d2328: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1d2328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_1d232c:
    // 0x1d232c: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x1d232cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1d2330:
    // 0x1d2330: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x1d2330u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1d2334:
    // 0x1d2334: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x1d2334u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1d2338:
    // 0x1d2338: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x1d2338u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1d233c:
    // 0x1d233c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1d233cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1d2340:
    // 0x1d2340: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1d2340u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1d2344:
    // 0x1d2344: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1d2344u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d2348:
    // 0x1d2348: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1d2348u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d234c:
    // 0x1d234c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d234cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d2350:
    // 0x1d2350: 0x3e00008  jr          $ra
label_1d2354:
    if (ctx->pc == 0x1D2354u) {
        ctx->pc = 0x1D2354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2350u;
        // 0x1d2354: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2358u;
        goto label_1d2358;
    }
    ctx->pc = 0x1D2350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2350u;
        // 0x1d2354: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2358u;
label_1d2358:
    // 0x1d2358: 0x0  nop
    ctx->pc = 0x1d2358u;
    // NOP
label_1d235c:
    // 0x1d235c: 0x0  nop
    ctx->pc = 0x1d235cu;
    // NOP
label_1d2360:
    // 0x1d2360: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x1d2360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_1d2364:
    // 0x1d2364: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1d2364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_1d2368:
    // 0x1d2368: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1d2368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_1d236c:
    // 0x1d236c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1d236cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_1d2370:
    // 0x1d2370: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1d2370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1d2374:
    // 0x1d2374: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1d2374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1d2378:
    // 0x1d2378: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1d2378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1d237c:
    // 0x1d237c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1d237cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1d2380:
    // 0x1d2380: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1d2380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1d2384:
    // 0x1d2384: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d2384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1d2388:
    // 0x1d2388: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d2388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1d238c:
    // 0x1d238c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1d238cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1d2390:
    // 0x1d2390: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1d2390u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1d2394:
    // 0x1d2394: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x1d2394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
label_1d2398:
    // 0x1d2398: 0x8f848590  lw          $a0, -0x7A70($gp)
    ctx->pc = 0x1d2398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1d239c:
    // 0x1d239c: 0x30830200  andi        $v1, $a0, 0x200
    ctx->pc = 0x1d239cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
label_1d23a0:
    // 0x1d23a0: 0x1460010d  bnez        $v1, . + 4 + (0x10D << 2)
label_1d23a4:
    if (ctx->pc == 0x1D23A4u) {
        ctx->pc = 0x1D23A8u;
        goto label_1d23a8;
    }
    ctx->pc = 0x1D23A0u;
    {
        const bool branch_taken_0x1d23a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d23a0) {
            ctx->pc = 0x1D27D8u;
            goto label_1d27d8;
        }
    }
    ctx->pc = 0x1D23A8u;
label_1d23a8:
    // 0x1d23a8: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x1d23a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_1d23ac:
    // 0x1d23ac: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1d23b0:
    if (ctx->pc == 0x1D23B0u) {
        ctx->pc = 0x1D23B4u;
        goto label_1d23b4;
    }
    ctx->pc = 0x1D23ACu;
    {
        const bool branch_taken_0x1d23ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d23ac) {
            ctx->pc = 0x1D23BCu;
            goto label_1d23bc;
        }
    }
    ctx->pc = 0x1D23B4u;
label_1d23b4:
    // 0x1d23b4: 0x10000109  b           . + 4 + (0x109 << 2)
label_1d23b8:
    if (ctx->pc == 0x1D23B8u) {
        ctx->pc = 0x1D23B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D23B4u;
        // 0x1d23b8: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D23BCu;
        goto label_1d23bc;
    }
    ctx->pc = 0x1D23B4u;
    {
        const bool branch_taken_0x1d23b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D23B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D23B4u;
        // 0x1d23b8: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d23b4) {
            ctx->pc = 0x1D27DCu;
            goto label_1d27dc;
        }
    }
    ctx->pc = 0x1D23BCu;
label_1d23bc:
    // 0x1d23bc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1d23bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1d23c0:
    // 0x1d23c0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x1d23c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_1d23c4:
    // 0x1d23c4: 0x24a51740  addiu       $a1, $a1, 0x1740
    ctx->pc = 0x1d23c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5952));
label_1d23c8:
    // 0x1d23c8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1d23c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d23cc:
    // 0x1d23cc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d23ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d23d0:
    // 0x1d23d0: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1d23d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d23d4:
    // 0x1d23d4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1d23d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1d23d8:
    // 0x1d23d8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1d23d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1d23dc:
    // 0x1d23dc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1d23dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d23e0:
    // 0x1d23e0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1d23e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1d23e4:
    // 0x1d23e4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d23e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1d23e8:
    // 0x1d23e8: 0x221c0  sll         $a0, $v0, 7
    ctx->pc = 0x1d23e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1d23ec:
    // 0x1d23ec: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1d23ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1d23f0:
    // 0x1d23f0: 0x244203c0  addiu       $v0, $v0, 0x3C0
    ctx->pc = 0x1d23f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 960));
label_1d23f4:
    // 0x1d23f4: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x1d23f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d23f8:
    // 0x1d23f8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1d23f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1d23fc:
    // 0x1d23fc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1d23fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1d2400:
    // 0x1d2400: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d2400u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1d2404:
    // 0x1d2404: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x1d2404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1d2408:
    // 0x1d2408: 0xa2a021  addu        $s4, $a1, $v0
    ctx->pc = 0x1d2408u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1d240c:
    // 0x1d240c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1d240cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1d2410:
    // 0x1d2410: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1d2410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1d2414:
    // 0x1d2414: 0x34434804  ori         $v1, $v0, 0x4804
    ctx->pc = 0x1d2414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18436);
label_1d2418:
    // 0x1d2418: 0x34424808  ori         $v0, $v0, 0x4808
    ctx->pc = 0x1d2418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18440);
label_1d241c:
    // 0x1d241c: 0x2833821  addu        $a3, $s4, $v1
    ctx->pc = 0x1d241cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_1d2420:
    // 0x1d2420: 0x2823021  addu        $a2, $s4, $v0
    ctx->pc = 0x1d2420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1d2424:
    // 0x1d2424: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d2424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d2428:
    // 0x1d2428: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1d2428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1d242c:
    // 0x1d242c: 0x62a80b  movn        $s5, $v1, $v0
    ctx->pc = 0x1d242cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 3));
label_1d2430:
    // 0x1d2430: 0x90820241  lbu         $v0, 0x241($a0)
    ctx->pc = 0x1d2430u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 577)));
label_1d2434:
    // 0x1d2434: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x1d2434u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_1d2438:
    // 0x1d2438: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1d2438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1d243c:
    // 0x1d243c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1d243cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1d2440:
    // 0x1d2440: 0x90420234  lbu         $v0, 0x234($v0)
    ctx->pc = 0x1d2440u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 564)));
label_1d2444:
    // 0x1d2444: 0xc06465c  jal         func_191970
label_1d2448:
    if (ctx->pc == 0x1D2448u) {
        ctx->pc = 0x1D2448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2444u;
        // 0x1d2448: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D244Cu;
        goto label_1d244c;
    }
    ctx->pc = 0x1D2444u;
    SET_GPR_U32(ctx, 31, 0x1D244Cu);
    ctx->pc = 0x1D2448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2444u;
    // 0x1d2448: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191970u;
    { ctx->pc = 0x191970; return; }
    ctx->pc = 0x1D244Cu;
label_1d244c:
    // 0x1d244c: 0x27a200c4  addiu       $v0, $sp, 0xC4
    ctx->pc = 0x1d244cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
label_1d2450:
    // 0x1d2450: 0xc4550000  lwc1        $f21, 0x0($v0)
    ctx->pc = 0x1d2450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1d2454:
    // 0x1d2454: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x1d2454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1d2458:
    // 0x1d2458: 0xc066e44  jal         func_19B910
label_1d245c:
    if (ctx->pc == 0x1D245Cu) {
        ctx->pc = 0x1D245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2458u;
        // 0x1d245c: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2460u;
        goto label_1d2460;
    }
    ctx->pc = 0x1D2458u;
    SET_GPR_U32(ctx, 31, 0x1D2460u);
    ctx->pc = 0x1D245Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2458u;
    // 0x1d245c: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x1D2460u;
label_1d2460:
    // 0x1d2460: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1d2460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1d2464:
    // 0x1d2464: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d2464u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d2468:
    // 0x1d2468: 0xc066e6c  jal         func_19B9B0
label_1d246c:
    if (ctx->pc == 0x1D246Cu) {
        ctx->pc = 0x1D246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2468u;
        // 0x1d246c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2470u;
        goto label_1d2470;
    }
    ctx->pc = 0x1D2468u;
    SET_GPR_U32(ctx, 31, 0x1D2470u);
    ctx->pc = 0x1D246Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2468u;
    // 0x1d246c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    { ctx->pc = 0x19b9b0; return; }
    ctx->pc = 0x1D2470u;
label_1d2470:
    // 0x1d2470: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1d2470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1d2474:
    // 0x1d2474: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d2474u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1d2478:
    // 0x1d2478: 0xc066e96  jal         func_19BA58
label_1d247c:
    if (ctx->pc == 0x1D247Cu) {
        ctx->pc = 0x1D247Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2478u;
        // 0x1d247c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2480u;
        goto label_1d2480;
    }
    ctx->pc = 0x1D2478u;
    SET_GPR_U32(ctx, 31, 0x1D2480u);
    ctx->pc = 0x1D247Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2478u;
    // 0x1d247c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x1D2480u;
label_1d2480:
    // 0x1d2480: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1d2480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1d2484:
    // 0x1d2484: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1d2484u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1d2488:
    // 0x1d2488: 0xc066ec0  jal         func_19BB00
label_1d248c:
    if (ctx->pc == 0x1D248Cu) {
        ctx->pc = 0x1D248Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2488u;
        // 0x1d248c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2490u;
        goto label_1d2490;
    }
    ctx->pc = 0x1D2488u;
    SET_GPR_U32(ctx, 31, 0x1D2490u);
    ctx->pc = 0x1D248Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2488u;
    // 0x1d248c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x1D2490u;
label_1d2490:
    // 0x1d2490: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d2490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d2494:
    // 0x1d2494: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1d2494u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d2498:
    // 0x1d2498: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1d2498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1d249c:
    // 0x1d249c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1d249cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d24a0:
    // 0x1d24a0: 0x278380d0  addiu       $v1, $gp, -0x7F30
    ctx->pc = 0x1d24a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934736));
label_1d24a4:
    // 0x1d24a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d24a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d24a8:
    // 0x1d24a8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d24a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d24ac:
    // 0x1d24ac: 0x7e8821  addu        $s1, $v1, $fp
    ctx->pc = 0x1d24acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_1d24b0:
    // 0x1d24b0: 0x82230028  lb          $v1, 0x28($s1)
    ctx->pc = 0x1d24b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
label_1d24b4:
    // 0x1d24b4: 0x106000c4  beqz        $v1, . + 4 + (0xC4 << 2)
label_1d24b8:
    if (ctx->pc == 0x1D24B8u) {
        ctx->pc = 0x1D24BCu;
        goto label_1d24bc;
    }
    ctx->pc = 0x1D24B4u;
    {
        const bool branch_taken_0x1d24b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d24b4) {
            ctx->pc = 0x1D27C8u;
            goto label_1d27c8;
        }
    }
    ctx->pc = 0x1D24BCu;
label_1d24bc:
    // 0x1d24bc: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x1d24bcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1d24c0:
    // 0x1d24c0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d24c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d24c4:
    // 0x1d24c4: 0x2810821  addu        $at, $s4, $at
    ctx->pc = 0x1d24c4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
label_1d24c8:
    // 0x1d24c8: 0x8c234804  lw          $v1, 0x4804($at)
    ctx->pc = 0x1d24c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18436)));
label_1d24cc:
    // 0x1d24cc: 0x92450241  lbu         $a1, 0x241($s2)
    ctx->pc = 0x1d24ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 577)));
label_1d24d0:
    // 0x1d24d0: 0x14a30007  bne         $a1, $v1, . + 4 + (0x7 << 2)
label_1d24d4:
    if (ctx->pc == 0x1D24D4u) {
        ctx->pc = 0x1D24D8u;
        goto label_1d24d8;
    }
    ctx->pc = 0x1D24D0u;
    {
        const bool branch_taken_0x1d24d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d24d0) {
            ctx->pc = 0x1D24F0u;
            goto label_1d24f0;
        }
    }
    ctx->pc = 0x1D24D8u;
label_1d24d8:
    // 0x1d24d8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d24d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d24dc:
    // 0x1d24dc: 0x92440234  lbu         $a0, 0x234($s2)
    ctx->pc = 0x1d24dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 564)));
label_1d24e0:
    // 0x1d24e0: 0x2810821  addu        $at, $s4, $at
    ctx->pc = 0x1d24e0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
label_1d24e4:
    // 0x1d24e4: 0x8c234808  lw          $v1, 0x4808($at)
    ctx->pc = 0x1d24e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18440)));
label_1d24e8:
    // 0x1d24e8: 0x108300b7  beq         $a0, $v1, . + 4 + (0xB7 << 2)
label_1d24ec:
    if (ctx->pc == 0x1D24ECu) {
        ctx->pc = 0x1D24F0u;
        goto label_1d24f0;
    }
    ctx->pc = 0x1D24E8u;
    {
        const bool branch_taken_0x1d24e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d24e8) {
            ctx->pc = 0x1D27C8u;
            goto label_1d27c8;
        }
    }
    ctx->pc = 0x1D24F0u;
label_1d24f0:
    // 0x1d24f0: 0x28a100e0  slti        $at, $a1, 0xE0
    ctx->pc = 0x1d24f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)224) ? 1 : 0);
label_1d24f4:
    // 0x1d24f4: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_1d24f8:
    if (ctx->pc == 0x1D24F8u) {
        ctx->pc = 0x1D24FCu;
        goto label_1d24fc;
    }
    ctx->pc = 0x1D24F4u;
    {
        const bool branch_taken_0x1d24f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d24f4) {
            ctx->pc = 0x1D2538u;
            goto label_1d2538;
        }
    }
    ctx->pc = 0x1D24FCu;
label_1d24fc:
    // 0x1d24fc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d24fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d2500:
    // 0x1d2500: 0x2810821  addu        $at, $s4, $at
    ctx->pc = 0x1d2500u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
label_1d2504:
    // 0x1d2504: 0x8c244800  lw          $a0, 0x4800($at)
    ctx->pc = 0x1d2504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18432)));
label_1d2508:
    // 0x1d2508: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
label_1d250c:
    if (ctx->pc == 0x1D250Cu) {
        ctx->pc = 0x1D2510u;
        goto label_1d2510;
    }
    ctx->pc = 0x1D2508u;
    {
        const bool branch_taken_0x1d2508 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2508) {
            ctx->pc = 0x1D251Cu;
            goto label_1d251c;
        }
    }
    ctx->pc = 0x1D2510u;
label_1d2510:
    // 0x1d2510: 0x240300dc  addiu       $v1, $zero, 0xDC
    ctx->pc = 0x1d2510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
label_1d2514:
    // 0x1d2514: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
label_1d2518:
    if (ctx->pc == 0x1D2518u) {
        ctx->pc = 0x1D251Cu;
        goto label_1d251c;
    }
    ctx->pc = 0x1D2514u;
    {
        const bool branch_taken_0x1d2514 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d2514) {
            ctx->pc = 0x1D2538u;
            goto label_1d2538;
        }
    }
    ctx->pc = 0x1D251Cu;
label_1d251c:
    // 0x1d251c: 0x0  nop
    ctx->pc = 0x1d251cu;
    // NOP
label_1d2520:
    // 0x1d2520: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_1d2524:
    if (ctx->pc == 0x1D2524u) {
        ctx->pc = 0x1D2528u;
        goto label_1d2528;
    }
    ctx->pc = 0x1D2520u;
    {
        const bool branch_taken_0x1d2520 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2520) {
            ctx->pc = 0x1D2540u;
            goto label_1d2540;
        }
    }
    ctx->pc = 0x1D2528u;
label_1d2528:
    // 0x1d2528: 0x8623002c  lh          $v1, 0x2C($s1)
    ctx->pc = 0x1d2528u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
label_1d252c:
    // 0x1d252c: 0x286100b5  slti        $at, $v1, 0xB5
    ctx->pc = 0x1d252cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)181) ? 1 : 0);
label_1d2530:
    // 0x1d2530: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1d2534:
    if (ctx->pc == 0x1D2534u) {
        ctx->pc = 0x1D2538u;
        goto label_1d2538;
    }
    ctx->pc = 0x1D2530u;
    {
        const bool branch_taken_0x1d2530 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2530) {
            ctx->pc = 0x1D2540u;
            goto label_1d2540;
        }
    }
    ctx->pc = 0x1D2538u;
label_1d2538:
    // 0x1d2538: 0x10000002  b           . + 4 + (0x2 << 2)
label_1d253c:
    if (ctx->pc == 0x1D253Cu) {
        ctx->pc = 0x1D253Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2538u;
        // 0x1d253c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2540u;
        goto label_1d2540;
    }
    ctx->pc = 0x1D2538u;
    {
        const bool branch_taken_0x1d2538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D253Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2538u;
        // 0x1d253c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2538) {
            ctx->pc = 0x1D2544u;
            goto label_1d2544;
        }
    }
    ctx->pc = 0x1D2540u;
label_1d2540:
    // 0x1d2540: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1d2540u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d2544:
    // 0x1d2544: 0x0  nop
    ctx->pc = 0x1d2544u;
    // NOP
label_1d2548:
    // 0x1d2548: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1d2548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_1d254c:
    // 0x1d254c: 0x34634800  ori         $v1, $v1, 0x4800
    ctx->pc = 0x1d254cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)18432);
label_1d2550:
    // 0x1d2550: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1d2550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_1d2554:
    // 0x1d2554: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d2554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d2558:
    // 0x1d2558: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_1d255c:
    if (ctx->pc == 0x1D255Cu) {
        ctx->pc = 0x1D2560u;
        goto label_1d2560;
    }
    ctx->pc = 0x1D2558u;
    {
        const bool branch_taken_0x1d2558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2558) {
            ctx->pc = 0x1D2584u;
            goto label_1d2584;
        }
    }
    ctx->pc = 0x1D2560u;
label_1d2560:
    // 0x1d2560: 0x28a300e0  slti        $v1, $a1, 0xE0
    ctx->pc = 0x1d2560u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)224) ? 1 : 0);
label_1d2564:
    // 0x1d2564: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_1d2568:
    if (ctx->pc == 0x1D2568u) {
        ctx->pc = 0x1D256Cu;
        goto label_1d256c;
    }
    ctx->pc = 0x1D2564u;
    {
        const bool branch_taken_0x1d2564 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2564) {
            ctx->pc = 0x1D2590u;
            goto label_1d2590;
        }
    }
    ctx->pc = 0x1D256Cu;
label_1d256c:
    // 0x1d256c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d256cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d2570:
    // 0x1d2570: 0x92440234  lbu         $a0, 0x234($s2)
    ctx->pc = 0x1d2570u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 564)));
label_1d2574:
    // 0x1d2574: 0x2810821  addu        $at, $s4, $at
    ctx->pc = 0x1d2574u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
label_1d2578:
    // 0x1d2578: 0x8c234808  lw          $v1, 0x4808($at)
    ctx->pc = 0x1d2578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18440)));
label_1d257c:
    // 0x1d257c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_1d2580:
    if (ctx->pc == 0x1D2580u) {
        ctx->pc = 0x1D2584u;
        goto label_1d2584;
    }
    ctx->pc = 0x1D257Cu;
    {
        const bool branch_taken_0x1d257c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d257c) {
            ctx->pc = 0x1D2590u;
            goto label_1d2590;
        }
    }
    ctx->pc = 0x1D2584u;
label_1d2584:
    // 0x1d2584: 0x0  nop
    ctx->pc = 0x1d2584u;
    // NOP
label_1d2588:
    // 0x1d2588: 0x10000002  b           . + 4 + (0x2 << 2)
label_1d258c:
    if (ctx->pc == 0x1D258Cu) {
        ctx->pc = 0x1D258Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2588u;
        // 0x1d258c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2590u;
        goto label_1d2590;
    }
    ctx->pc = 0x1D2588u;
    {
        const bool branch_taken_0x1d2588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D258Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2588u;
        // 0x1d258c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2588) {
            ctx->pc = 0x1D2594u;
            goto label_1d2594;
        }
    }
    ctx->pc = 0x1D2590u;
label_1d2590:
    // 0x1d2590: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1d2590u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d2594:
    // 0x1d2594: 0x0  nop
    ctx->pc = 0x1d2594u;
    // NOP
label_1d2598:
    // 0x1d2598: 0x16e00003  bnez        $s7, . + 4 + (0x3 << 2)
label_1d259c:
    if (ctx->pc == 0x1D259Cu) {
        ctx->pc = 0x1D25A0u;
        goto label_1d25a0;
    }
    ctx->pc = 0x1D2598u;
    {
        const bool branch_taken_0x1d2598 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2598) {
            ctx->pc = 0x1D25A8u;
            goto label_1d25a8;
        }
    }
    ctx->pc = 0x1D25A0u;
label_1d25a0:
    // 0x1d25a0: 0x12c00089  beqz        $s6, . + 4 + (0x89 << 2)
label_1d25a4:
    if (ctx->pc == 0x1D25A4u) {
        ctx->pc = 0x1D25A8u;
        goto label_1d25a8;
    }
    ctx->pc = 0x1D25A0u;
    {
        const bool branch_taken_0x1d25a0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d25a0) {
            ctx->pc = 0x1D27C8u;
            goto label_1d27c8;
        }
    }
    ctx->pc = 0x1D25A8u;
label_1d25a8:
    // 0x1d25a8: 0x8e280014  lw          $t0, 0x14($s1)
    ctx->pc = 0x1d25a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1d25ac:
    // 0x1d25ac: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1d25acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_1d25b0:
    // 0x1d25b0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d25b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d25b4:
    // 0x1d25b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d25b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d25b8:
    // 0x1d25b8: 0x8c273ffc  lw          $a3, 0x3FFC($at)
    ctx->pc = 0x1d25b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d25bc:
    // 0x1d25bc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d25bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1d25c0:
    // 0x1d25c0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1d25c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1d25c4:
    // 0x1d25c4: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1d25c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1d25c8:
    // 0x1d25c8: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1d25c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1d25cc:
    // 0x1d25cc: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x1d25ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_1d25d0:
    // 0x1d25d0: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1d25d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_1d25d4:
    // 0x1d25d4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1d25d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1d25d8:
    // 0x1d25d8: 0x8c4706b0  lw          $a3, 0x6B0($v0)
    ctx->pc = 0x1d25d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1712)));
label_1d25dc:
    // 0x1d25dc: 0xc4e10030  lwc1        $f1, 0x30($a3)
    ctx->pc = 0x1d25dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d25e0:
    // 0x1d25e0: 0x27a200c4  addiu       $v0, $sp, 0xC4
    ctx->pc = 0x1d25e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
label_1d25e4:
    // 0x1d25e4: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x1d25e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1d25e8:
    // 0x1d25e8: 0xc4e10034  lwc1        $f1, 0x34($a3)
    ctx->pc = 0x1d25e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d25ec:
    // 0x1d25ec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d25ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d25f0:
    // 0x1d25f0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1d25f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1d25f4:
    // 0x1d25f4: 0xc4e00038  lwc1        $f0, 0x38($a3)
    ctx->pc = 0x1d25f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d25f8:
    // 0x1d25f8: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1d25f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_1d25fc:
    // 0x1d25fc: 0xc066e1a  jal         func_19B868
label_1d2600:
    if (ctx->pc == 0x1D2600u) {
        ctx->pc = 0x1D2600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D25FCu;
        // 0x1d2600: 0xafa300cc  sw          $v1, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2604u;
        goto label_1d2604;
    }
    ctx->pc = 0x1D25FCu;
    SET_GPR_U32(ctx, 31, 0x1D2604u);
    ctx->pc = 0x1D2600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D25FCu;
    // 0x1d2600: 0xafa300cc  sw          $v1, 0xCC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B868u;
    { ctx->pc = 0x19b868; return; }
    ctx->pc = 0x1D2604u;
label_1d2604:
    // 0x1d2604: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d2604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1d2608:
    // 0x1d2608: 0x151980  sll         $v1, $s5, 6
    ctx->pc = 0x1d2608u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
label_1d260c:
    // 0x1d260c: 0x24429bc0  addiu       $v0, $v0, -0x6440
    ctx->pc = 0x1d260cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941632));
label_1d2610:
    // 0x1d2610: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1d2610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_1d2614:
    // 0x1d2614: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x1d2614u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d2618:
    // 0x1d2618: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x1d2618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1d261c:
    // 0x1d261c: 0xc066d86  jal         func_19B618
label_1d2620:
    if (ctx->pc == 0x1D2620u) {
        ctx->pc = 0x1D2620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D261Cu;
        // 0x1d2620: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2624u;
        goto label_1d2624;
    }
    ctx->pc = 0x1D261Cu;
    SET_GPR_U32(ctx, 31, 0x1D2624u);
    ctx->pc = 0x1D2620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D261Cu;
    // 0x1d2620: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B618u;
    { ctx->pc = 0x19b618; return; }
    ctx->pc = 0x1D2624u;
label_1d2624:
    // 0x1d2624: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x1d2624u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
label_1d2628:
    // 0x1d2628: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x1d2628u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_1d262c:
    // 0x1d262c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1d262cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d2630:
    // 0x1d2630: 0x24842190  addiu       $a0, $a0, 0x2190
    ctx->pc = 0x1d2630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8592));
label_1d2634:
    // 0x1d2634: 0x24a521a0  addiu       $a1, $a1, 0x21A0
    ctx->pc = 0x1d2634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8608));
label_1d2638:
    // 0x1d2638: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x1d2638u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1d263c:
    // 0x1d263c: 0xc067090  jal         func_19C240
label_1d2640:
    if (ctx->pc == 0x1D2640u) {
        ctx->pc = 0x1D2640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D263Cu;
        // 0x1d2640: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2644u;
        goto label_1d2644;
    }
    ctx->pc = 0x1D263Cu;
    SET_GPR_U32(ctx, 31, 0x1D2644u);
    ctx->pc = 0x1D2640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D263Cu;
    // 0x1d2640: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C240u;
    { ctx->pc = 0x19c240; return; }
    ctx->pc = 0x1D2644u;
label_1d2644:
    // 0x1d2644: 0x14400060  bnez        $v0, . + 4 + (0x60 << 2)
label_1d2648:
    if (ctx->pc == 0x1D2648u) {
        ctx->pc = 0x1D264Cu;
        goto label_1d264c;
    }
    ctx->pc = 0x1D2644u;
    {
        const bool branch_taken_0x1d2644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2644) {
            ctx->pc = 0x1D27C8u;
            goto label_1d27c8;
        }
    }
    ctx->pc = 0x1D264Cu;
label_1d264c:
    // 0x1d264c: 0x3c060029  lui         $a2, 0x29
    ctx->pc = 0x1d264cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
label_1d2650:
    // 0x1d2650: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x1d2650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_1d2654:
    // 0x1d2654: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x1d2654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_1d2658:
    // 0x1d2658: 0xc066d7a  jal         func_19B5E8
label_1d265c:
    if (ctx->pc == 0x1D265Cu) {
        ctx->pc = 0x1D265Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2658u;
        // 0x1d265c: 0x24c6b190  addiu       $a2, $a2, -0x4E70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2660u;
        goto label_1d2660;
    }
    ctx->pc = 0x1D2658u;
    SET_GPR_U32(ctx, 31, 0x1D2660u);
    ctx->pc = 0x1D265Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2658u;
    // 0x1d265c: 0x24c6b190  addiu       $a2, $a2, -0x4E70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x1D2660u;
label_1d2660:
    // 0x1d2660: 0x27b301ac  addiu       $s3, $sp, 0x1AC
    ctx->pc = 0x1d2660u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 428));
label_1d2664:
    // 0x1d2664: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d2664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d2668:
    // 0x1d2668: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x1d2668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d266c:
    // 0x1d266c: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x1d266cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_1d2670:
    // 0x1d2670: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d2670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d2674:
    // 0x1d2674: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d2674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d2678:
    // 0x1d2678: 0x46000d43  div.s       $f21, $f1, $f0
    ctx->pc = 0x1d2678u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[21] = ctx->f[1] / ctx->f[0];
label_1d267c:
    // 0x1d267c: 0x0  nop
    ctx->pc = 0x1d267cu;
    // NOP
label_1d2680:
    // 0x1d2680: 0x0  nop
    ctx->pc = 0x1d2680u;
    // NOP
label_1d2684:
    // 0x1d2684: 0xc066e14  jal         func_19B850
label_1d2688:
    if (ctx->pc == 0x1D2688u) {
        ctx->pc = 0x1D2688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2684u;
        // 0x1d2688: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D268Cu;
        goto label_1d268c;
    }
    ctx->pc = 0x1D2684u;
    SET_GPR_U32(ctx, 31, 0x1D268Cu);
    ctx->pc = 0x1D2688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2684u;
    // 0x1d2688: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x1D268Cu;
label_1d268c:
    // 0x1d268c: 0xc07f198  jal         func_1FC660
label_1d2690:
    if (ctx->pc == 0x1D2690u) {
        ctx->pc = 0x1D2690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D268Cu;
        // 0x1d2690: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2694u;
        goto label_1d2694;
    }
    ctx->pc = 0x1D268Cu;
    SET_GPR_U32(ctx, 31, 0x1D2694u);
    ctx->pc = 0x1D2690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D268Cu;
    // 0x1d2690: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC660u;
    { ctx->pc = 0x1fc660; return; }
    ctx->pc = 0x1D2694u;
label_1d2694:
    // 0x1d2694: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1d2694u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1d2698:
    // 0x1d2698: 0xc07f190  jal         func_1FC640
label_1d269c:
    if (ctx->pc == 0x1D269Cu) {
        ctx->pc = 0x1D269Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2698u;
        // 0x1d269c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D26A0u;
        goto label_1d26a0;
    }
    ctx->pc = 0x1D2698u;
    SET_GPR_U32(ctx, 31, 0x1D26A0u);
    ctx->pc = 0x1D269Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2698u;
    // 0x1d269c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC640u;
    { ctx->pc = 0x1fc640; return; }
    ctx->pc = 0x1D26A0u;
label_1d26a0:
    // 0x1d26a0: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1d26a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1d26a4:
    // 0x1d26a4: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1d26a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_1d26a8:
    // 0x1d26a8: 0x4600a040  add.s       $f1, $f20, $f0
    ctx->pc = 0x1d26a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1d26ac:
    // 0x1d26ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d26acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d26b0:
    // 0x1d26b0: 0x0  nop
    ctx->pc = 0x1d26b0u;
    // NOP
label_1d26b4:
    // 0x1d26b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d26b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d26b8:
    // 0x1d26b8: 0x0  nop
    ctx->pc = 0x1d26b8u;
    // NOP
label_1d26bc:
    // 0x1d26bc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1d26c0:
    if (ctx->pc == 0x1D26C0u) {
        ctx->pc = 0x1D26C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D26BCu;
        // 0x1d26c0: 0xe6610000  swc1        $f1, 0x0($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D26C4u;
        goto label_1d26c4;
    }
    ctx->pc = 0x1D26BCu;
    {
        const bool branch_taken_0x1d26bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D26C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D26BCu;
        // 0x1d26c0: 0xe6610000  swc1        $f1, 0x0($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d26bc) {
            ctx->pc = 0x1D26CCu;
            goto label_1d26cc;
        }
    }
    ctx->pc = 0x1D26C4u;
label_1d26c4:
    // 0x1d26c4: 0x10000009  b           . + 4 + (0x9 << 2)
label_1d26c8:
    if (ctx->pc == 0x1D26C8u) {
        ctx->pc = 0x1D26C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D26C4u;
        // 0x1d26c8: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D26CCu;
        goto label_1d26cc;
    }
    ctx->pc = 0x1D26C4u;
    {
        const bool branch_taken_0x1d26c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D26C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D26C4u;
        // 0x1d26c8: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d26c4) {
            ctx->pc = 0x1D26ECu;
            goto label_1d26ec;
        }
    }
    ctx->pc = 0x1D26CCu;
label_1d26cc:
    // 0x1d26cc: 0x0  nop
    ctx->pc = 0x1d26ccu;
    // NOP
label_1d26d0:
    // 0x1d26d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d26d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d26d4:
    // 0x1d26d4: 0x0  nop
    ctx->pc = 0x1d26d4u;
    // NOP
label_1d26d8:
    // 0x1d26d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d26d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d26dc:
    // 0x1d26dc: 0x0  nop
    ctx->pc = 0x1d26dcu;
    // NOP
label_1d26e0:
    // 0x1d26e0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1d26e4:
    if (ctx->pc == 0x1D26E4u) {
        ctx->pc = 0x1D26E8u;
        goto label_1d26e8;
    }
    ctx->pc = 0x1D26E0u;
    {
        const bool branch_taken_0x1d26e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d26e0) {
            ctx->pc = 0x1D26ECu;
            goto label_1d26ec;
        }
    }
    ctx->pc = 0x1D26E8u;
label_1d26e8:
    // 0x1d26e8: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x1d26e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_1d26ec:
    // 0x1d26ec: 0x0  nop
    ctx->pc = 0x1d26ecu;
    // NOP
label_1d26f0:
    // 0x1d26f0: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x1d26f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
label_1d26f4:
    // 0x1d26f4: 0xc7a001a8  lwc1        $f0, 0x1A8($sp)
    ctx->pc = 0x1d26f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d26f8:
    // 0x1d26f8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1d26f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1d26fc:
    // 0x1d26fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d26fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d2700:
    // 0x1d2700: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x1d2700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_1d2704:
    // 0x1d2704: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d2704u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d2708:
    // 0x1d2708: 0xe7a001a8  swc1        $f0, 0x1A8($sp)
    ctx->pc = 0x1d2708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
label_1d270c:
    // 0x1d270c: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x1d270cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d2710:
    // 0x1d2710: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d2710u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d2714:
    // 0x1d2714: 0xc066e34  jal         func_19B8D0
label_1d2718:
    if (ctx->pc == 0x1D2718u) {
        ctx->pc = 0x1D2718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2714u;
        // 0x1d2718: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D271Cu;
        goto label_1d271c;
    }
    ctx->pc = 0x1D2714u;
    SET_GPR_U32(ctx, 31, 0x1D271Cu);
    ctx->pc = 0x1D2718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2714u;
    // 0x1d2718: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    { ctx->pc = 0x19b8d0; return; }
    ctx->pc = 0x1D271Cu;
label_1d271c:
    // 0x1d271c: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x1d271cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_1d2720:
    // 0x1d2720: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d2720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d2724:
    // 0x1d2724: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1d2728:
    if (ctx->pc == 0x1D2728u) {
        ctx->pc = 0x1D2728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2724u;
        // 0x1d2728: 0x39843  sra         $s3, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D272Cu;
        goto label_1d272c;
    }
    ctx->pc = 0x1D2724u;
    {
        const bool branch_taken_0x1d2724 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1D2728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2724u;
        // 0x1d2728: 0x39843  sra         $s3, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2724) {
            ctx->pc = 0x1D2734u;
            goto label_1d2734;
        }
    }
    ctx->pc = 0x1D272Cu;
label_1d272c:
    // 0x1d272c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d272cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d2730:
    // 0x1d2730: 0x39843  sra         $s3, $v1, 1
    ctx->pc = 0x1d2730u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 3), 1));
label_1d2734:
    // 0x1d2734: 0x12e0001b  beqz        $s7, . + 4 + (0x1B << 2)
label_1d2738:
    if (ctx->pc == 0x1D2738u) {
        ctx->pc = 0x1D273Cu;
        goto label_1d273c;
    }
    ctx->pc = 0x1D2734u;
    {
        const bool branch_taken_0x1d2734 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2734) {
            ctx->pc = 0x1D27A4u;
            goto label_1d27a4;
        }
    }
    ctx->pc = 0x1D273Cu;
label_1d273c:
    // 0x1d273c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d273cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d2740:
    // 0x1d2740: 0x2810821  addu        $at, $s4, $at
    ctx->pc = 0x1d2740u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 1)));
label_1d2744:
    // 0x1d2744: 0x8c224800  lw          $v0, 0x4800($at)
    ctx->pc = 0x1d2744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18432)));
label_1d2748:
    // 0x1d2748: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1d274c:
    if (ctx->pc == 0x1D274Cu) {
        ctx->pc = 0x1D2750u;
        goto label_1d2750;
    }
    ctx->pc = 0x1D2748u;
    {
        const bool branch_taken_0x1d2748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2748) {
            ctx->pc = 0x1D2784u;
            goto label_1d2784;
        }
    }
    ctx->pc = 0x1D2750u;
label_1d2750:
    // 0x1d2750: 0x8623002c  lh          $v1, 0x2C($s1)
    ctx->pc = 0x1d2750u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
label_1d2754:
    // 0x1d2754: 0x28610095  slti        $at, $v1, 0x95
    ctx->pc = 0x1d2754u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)149) ? 1 : 0);
label_1d2758:
    // 0x1d2758: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
label_1d275c:
    if (ctx->pc == 0x1D275Cu) {
        ctx->pc = 0x1D2760u;
        goto label_1d2760;
    }
    ctx->pc = 0x1D2758u;
    {
        const bool branch_taken_0x1d2758 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2758) {
            ctx->pc = 0x1D2784u;
            goto label_1d2784;
        }
    }
    ctx->pc = 0x1D2760u;
label_1d2760:
    // 0x1d2760: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x1d2760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_1d2764:
    // 0x1d2764: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d2764u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d2768:
    // 0x1d2768: 0x531018  mult        $v0, $v0, $s3
    ctx->pc = 0x1d2768u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1d276c:
    // 0x1d276c: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
label_1d2770:
    if (ctx->pc == 0x1D2770u) {
        ctx->pc = 0x1D2770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D276Cu;
        // 0x1d2770: 0x22943  sra         $a1, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2774u;
        goto label_1d2774;
    }
    ctx->pc = 0x1D276Cu;
    {
        const bool branch_taken_0x1d276c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D2770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D276Cu;
        // 0x1d2770: 0x22943  sra         $a1, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d276c) {
            ctx->pc = 0x1D278Cu;
            goto label_1d278c;
        }
    }
    ctx->pc = 0x1D2774u;
label_1d2774:
    // 0x1d2774: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x1d2774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
label_1d2778:
    // 0x1d2778: 0x22943  sra         $a1, $v0, 5
    ctx->pc = 0x1d2778u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 5));
label_1d277c:
    // 0x1d277c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d2780:
    if (ctx->pc == 0x1D2780u) {
        ctx->pc = 0x1D2784u;
        goto label_1d2784;
    }
    ctx->pc = 0x1D277Cu;
    {
        const bool branch_taken_0x1d277c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d277c) {
            ctx->pc = 0x1D278Cu;
            goto label_1d278c;
        }
    }
    ctx->pc = 0x1D2784u;
label_1d2784:
    // 0x1d2784: 0x0  nop
    ctx->pc = 0x1d2784u;
    // NOP
label_1d2788:
    // 0x1d2788: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1d2788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d278c:
    // 0x1d278c: 0x0  nop
    ctx->pc = 0x1d278cu;
    // NOP
label_1d2790:
    // 0x1d2790: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d2794:
    // 0x1d2794: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1d2794u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d2798:
    // 0x1d2798: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1d2798u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d279c:
    // 0x1d279c: 0xc074a94  jal         func_1D2A50
label_1d27a0:
    if (ctx->pc == 0x1D27A0u) {
        ctx->pc = 0x1D27A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D279Cu;
        // 0x1d27a0: 0x27a800d0  addiu       $t0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D27A4u;
        goto label_1d27a4;
    }
    ctx->pc = 0x1D279Cu;
    SET_GPR_U32(ctx, 31, 0x1D27A4u);
    ctx->pc = 0x1D27A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D279Cu;
    // 0x1d27a0: 0x27a800d0  addiu       $t0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2A50u;
    goto label_1d2a50;
    ctx->pc = 0x1D27A4u;
label_1d27a4:
    // 0x1d27a4: 0x0  nop
    ctx->pc = 0x1d27a4u;
    // NOP
label_1d27a8:
    // 0x1d27a8: 0x12c00007  beqz        $s6, . + 4 + (0x7 << 2)
label_1d27ac:
    if (ctx->pc == 0x1D27ACu) {
        ctx->pc = 0x1D27B0u;
        goto label_1d27b0;
    }
    ctx->pc = 0x1D27A8u;
    {
        const bool branch_taken_0x1d27a8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d27a8) {
            ctx->pc = 0x1D27C8u;
            goto label_1d27c8;
        }
    }
    ctx->pc = 0x1D27B0u;
label_1d27b0:
    // 0x1d27b0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1d27b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d27b4:
    // 0x1d27b4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1d27b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d27b8:
    // 0x1d27b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d27b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d27bc:
    // 0x1d27bc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1d27bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d27c0:
    // 0x1d27c0: 0xc074a04  jal         func_1D2810
label_1d27c4:
    if (ctx->pc == 0x1D27C4u) {
        ctx->pc = 0x1D27C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D27C0u;
        // 0x1d27c4: 0x27a800d0  addiu       $t0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D27C8u;
        goto label_1d27c8;
    }
    ctx->pc = 0x1D27C0u;
    SET_GPR_U32(ctx, 31, 0x1D27C8u);
    ctx->pc = 0x1D27C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D27C0u;
    // 0x1d27c4: 0x27a800d0  addiu       $t0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2810u;
    goto label_1d2810;
    ctx->pc = 0x1D27C8u;
label_1d27c8:
    // 0x1d27c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d27c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d27cc:
    // 0x1d27cc: 0x2a03001c  slti        $v1, $s0, 0x1C
    ctx->pc = 0x1d27ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)28) ? 1 : 0);
label_1d27d0:
    // 0x1d27d0: 0x1460ff31  bnez        $v1, . + 4 + (-0xCF << 2)
label_1d27d4:
    if (ctx->pc == 0x1D27D4u) {
        ctx->pc = 0x1D27D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D27D0u;
        // 0x1d27d4: 0x27de2150  addiu       $fp, $fp, 0x2150 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D27D8u;
        goto label_1d27d8;
    }
    ctx->pc = 0x1D27D0u;
    {
        const bool branch_taken_0x1d27d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D27D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D27D0u;
        // 0x1d27d4: 0x27de2150  addiu       $fp, $fp, 0x2150 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d27d0) {
            ctx->pc = 0x1D2498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d2498;
        }
    }
    ctx->pc = 0x1D27D8u;
label_1d27d8:
    // 0x1d27d8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1d27d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1d27dc:
    // 0x1d27dc: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1d27dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1d27e0:
    // 0x1d27e0: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1d27e0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1d27e4:
    // 0x1d27e4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d27e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1d27e8:
    // 0x1d27e8: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1d27e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1d27ec:
    // 0x1d27ec: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1d27ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1d27f0:
    // 0x1d27f0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1d27f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1d27f4:
    // 0x1d27f4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1d27f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d27f8:
    // 0x1d27f8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1d27f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d27fc:
    // 0x1d27fc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1d27fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d2800:
    // 0x1d2800: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d2800u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d2804:
    // 0x1d2804: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d2804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d2808:
    // 0x1d2808: 0x3e00008  jr          $ra
label_1d280c:
    if (ctx->pc == 0x1D280Cu) {
        ctx->pc = 0x1D280Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2808u;
        // 0x1d280c: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2810u;
        goto label_1d2810;
    }
    ctx->pc = 0x1D2808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D280Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2808u;
        // 0x1d280c: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2810u;
label_1d2810:
    // 0x1d2810: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d2810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1d2814:
    // 0x1d2814: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1d2814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_1d2818:
    // 0x1d2818: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x1d2818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_1d281c:
    // 0x1d281c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d281cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d2820:
    // 0x1d2820: 0x8c6a0000  lw          $t2, 0x0($v1)
    ctx->pc = 0x1d2820u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d2824:
    // 0x1d2824: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1d2824u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1d2828:
    // 0x1d2828: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d2828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1d282c:
    // 0x1d282c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d282cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1d2830:
    // 0x1d2830: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x1d2830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1d2834:
    // 0x1d2834: 0x34210200  ori         $at, $at, 0x200
    ctx->pc = 0x1d2834u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)512);
label_1d2838:
    // 0x1d2838: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1d2838u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1d283c:
    // 0x1d283c: 0xa48c0  sll         $t1, $t2, 3
    ctx->pc = 0x1d283cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_1d2840:
    // 0x1d2840: 0x84e20220  lh          $v0, 0x220($a3)
    ctx->pc = 0x1d2840u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 544)));
label_1d2844:
    // 0x1d2844: 0x12a5023  subu        $t2, $t1, $t2
    ctx->pc = 0x1d2844u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_1d2848:
    // 0x1d2848: 0x24900  sll         $t1, $v0, 4
    ctx->pc = 0x1d2848u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1d284c:
    // 0x1d284c: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x1d284cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_1d2850:
    // 0x1d2850: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x1d2850u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_1d2854:
    // 0x1d2854: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x1d2854u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
label_1d2858:
    // 0x1d2858: 0x91083  sra         $v0, $t1, 2
    ctx->pc = 0x1d2858u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), 2));
label_1d285c:
    // 0x1d285c: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x1d285cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_1d2860:
    // 0x1d2860: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1d2860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1d2864:
    // 0x1d2864: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
label_1d2868:
    if (ctx->pc == 0x1D2868u) {
        ctx->pc = 0x1D2868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2864u;
        // 0x1d2868: 0x611821  addu        $v1, $v1, $at (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D286Cu;
        goto label_1d286c;
    }
    ctx->pc = 0x1D2864u;
    {
        const bool branch_taken_0x1d2864 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x1D2868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2864u;
        // 0x1d2868: 0x611821  addu        $v1, $v1, $at (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2864) {
            ctx->pc = 0x1D2874u;
            goto label_1d2874;
        }
    }
    ctx->pc = 0x1D286Cu;
label_1d286c:
    // 0x1d286c: 0x25220003  addiu       $v0, $t1, 0x3
    ctx->pc = 0x1d286cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 3));
label_1d2870:
    // 0x1d2870: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1d2870u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1d2874:
    // 0x1d2874: 0x825821  addu        $t3, $a0, $v0
    ctx->pc = 0x1d2874u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1d2878:
    // 0x1d2878: 0x84e2021c  lh          $v0, 0x21C($a3)
    ctx->pc = 0x1d2878u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 540)));
label_1d287c:
    // 0x1d287c: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x1d287cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1d2880:
    // 0x1d2880: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_1d2884:
    if (ctx->pc == 0x1D2884u) {
        ctx->pc = 0x1D2884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2880u;
        // 0x1d2884: 0x61083  sra         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2888u;
        goto label_1d2888;
    }
    ctx->pc = 0x1D2880u;
    {
        const bool branch_taken_0x1d2880 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1D2884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2880u;
        // 0x1d2884: 0x61083  sra         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2880) {
            ctx->pc = 0x1D2890u;
            goto label_1d2890;
        }
    }
    ctx->pc = 0x1D2888u;
label_1d2888:
    // 0x1d2888: 0x24c20003  addiu       $v0, $a2, 0x3
    ctx->pc = 0x1d2888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
label_1d288c:
    // 0x1d288c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1d288cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1d2890:
    // 0x1d2890: 0x8d090004  lw          $t1, 0x4($t0)
    ctx->pc = 0x1d2890u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_1d2894:
    // 0x1d2894: 0x826021  addu        $t4, $a0, $v0
    ctx->pc = 0x1d2894u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1d2898:
    // 0x1d2898: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1d2898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1d289c:
    // 0x1d289c: 0x246a0010  addiu       $t2, $v1, 0x10
    ctx->pc = 0x1d289cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1d28a0:
    // 0x1d28a0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1d28a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1d28a4:
    // 0x1d28a4: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x1d28a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1d28a8:
    // 0x1d28a8: 0x611c3  sra         $v0, $a2, 7
    ctx->pc = 0x1d28a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 7));
label_1d28ac:
    // 0x1d28ac: 0xa4640080  sh          $a0, 0x80($v1)
    ctx->pc = 0x1d28acu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 128), (uint16_t)GPR_U32(ctx, 4));
label_1d28b0:
    // 0x1d28b0: 0x252d0010  addiu       $t5, $t1, 0x10
    ctx->pc = 0x1d28b0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_1d28b4:
    // 0x1d28b4: 0x252e0028  addiu       $t6, $t1, 0x28
    ctx->pc = 0x1d28b4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 9), 40));
label_1d28b8:
    // 0x1d28b8: 0xa46d0082  sh          $t5, 0x82($v1)
    ctx->pc = 0x1d28b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 130), (uint16_t)GPR_U32(ctx, 13));
label_1d28bc:
    // 0x1d28bc: 0x8d090008  lw          $t1, 0x8($t0)
    ctx->pc = 0x1d28bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_1d28c0:
    // 0x1d28c0: 0xac690084  sw          $t1, 0x84($v1)
    ctx->pc = 0x1d28c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 9));
label_1d28c4:
    // 0x1d28c4: 0xa46b0088  sh          $t3, 0x88($v1)
    ctx->pc = 0x1d28c4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 136), (uint16_t)GPR_U32(ctx, 11));
label_1d28c8:
    // 0x1d28c8: 0xa46e008a  sh          $t6, 0x8A($v1)
    ctx->pc = 0x1d28c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 138), (uint16_t)GPR_U32(ctx, 14));
label_1d28cc:
    // 0x1d28cc: 0x8d090008  lw          $t1, 0x8($t0)
    ctx->pc = 0x1d28ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_1d28d0:
    // 0x1d28d0: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_1d28d4:
    if (ctx->pc == 0x1D28D4u) {
        ctx->pc = 0x1D28D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28D0u;
        // 0x1d28d4: 0xac69008c  sw          $t1, 0x8C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 140), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D28D8u;
        goto label_1d28d8;
    }
    ctx->pc = 0x1D28D0u;
    {
        const bool branch_taken_0x1d28d0 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1D28D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28D0u;
        // 0x1d28d4: 0xac69008c  sw          $t1, 0x8C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 140), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28d0) {
            ctx->pc = 0x1D28E0u;
            goto label_1d28e0;
        }
    }
    ctx->pc = 0x1D28D8u;
label_1d28d8:
    // 0x1d28d8: 0x24c2007f  addiu       $v0, $a2, 0x7F
    ctx->pc = 0x1d28d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 127));
label_1d28dc:
    // 0x1d28dc: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x1d28dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
label_1d28e0:
    // 0x1d28e0: 0xa142006b  sb          $v0, 0x6B($t2)
    ctx->pc = 0x1d28e0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 107), (uint8_t)GPR_U32(ctx, 2));
label_1d28e4:
    // 0x1d28e4: 0xa4640100  sh          $a0, 0x100($v1)
    ctx->pc = 0x1d28e4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 256), (uint16_t)GPR_U32(ctx, 4));
label_1d28e8:
    // 0x1d28e8: 0xa46d0102  sh          $t5, 0x102($v1)
    ctx->pc = 0x1d28e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 258), (uint16_t)GPR_U32(ctx, 13));
label_1d28ec:
    // 0x1d28ec: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x1d28ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_1d28f0:
    // 0x1d28f0: 0xac660104  sw          $a2, 0x104($v1)
    ctx->pc = 0x1d28f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 6));
label_1d28f4:
    // 0x1d28f4: 0xa46c0110  sh          $t4, 0x110($v1)
    ctx->pc = 0x1d28f4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 272), (uint16_t)GPR_U32(ctx, 12));
label_1d28f8:
    // 0x1d28f8: 0xa46d0112  sh          $t5, 0x112($v1)
    ctx->pc = 0x1d28f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 274), (uint16_t)GPR_U32(ctx, 13));
label_1d28fc:
    // 0x1d28fc: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x1d28fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_1d2900:
    // 0x1d2900: 0xac660114  sw          $a2, 0x114($v1)
    ctx->pc = 0x1d2900u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 276), GPR_U32(ctx, 6));
label_1d2904:
    // 0x1d2904: 0xa4640120  sh          $a0, 0x120($v1)
    ctx->pc = 0x1d2904u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 288), (uint16_t)GPR_U32(ctx, 4));
label_1d2908:
    // 0x1d2908: 0xa46e0122  sh          $t6, 0x122($v1)
    ctx->pc = 0x1d2908u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 290), (uint16_t)GPR_U32(ctx, 14));
label_1d290c:
    // 0x1d290c: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x1d290cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_1d2910:
    // 0x1d2910: 0xac640124  sw          $a0, 0x124($v1)
    ctx->pc = 0x1d2910u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 292), GPR_U32(ctx, 4));
label_1d2914:
    // 0x1d2914: 0xa46c0130  sh          $t4, 0x130($v1)
    ctx->pc = 0x1d2914u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 304), (uint16_t)GPR_U32(ctx, 12));
label_1d2918:
    // 0x1d2918: 0xa46e0132  sh          $t6, 0x132($v1)
    ctx->pc = 0x1d2918u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 306), (uint16_t)GPR_U32(ctx, 14));
label_1d291c:
    // 0x1d291c: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x1d291cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_1d2920:
    // 0x1d2920: 0xac640134  sw          $a0, 0x134($v1)
    ctx->pc = 0x1d2920u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 308), GPR_U32(ctx, 4));
label_1d2924:
    // 0x1d2924: 0x90e40234  lbu         $a0, 0x234($a3)
    ctx->pc = 0x1d2924u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 564)));
label_1d2928:
    // 0x1d2928: 0x1480001d  bnez        $a0, . + 4 + (0x1D << 2)
label_1d292c:
    if (ctx->pc == 0x1D292Cu) {
        ctx->pc = 0x1D292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2928u;
        // 0x1d292c: 0x24620090  addiu       $v0, $v1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2930u;
        goto label_1d2930;
    }
    ctx->pc = 0x1D2928u;
    {
        const bool branch_taken_0x1d2928 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2928u;
        // 0x1d292c: 0x24620090  addiu       $v0, $v1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2928) {
            ctx->pc = 0x1D29A0u;
            goto label_1d29a0;
        }
    }
    ctx->pc = 0x1D2930u;
label_1d2930:
    // 0x1d2930: 0x240b0024  addiu       $t3, $zero, 0x24
    ctx->pc = 0x1d2930u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_1d2934:
    // 0x1d2934: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1d2934u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d2938:
    // 0x1d2938: 0xa04b0068  sb          $t3, 0x68($v0)
    ctx->pc = 0x1d2938u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 104), (uint8_t)GPR_U32(ctx, 11));
label_1d293c:
    // 0x1d293c: 0x24090076  addiu       $t1, $zero, 0x76
    ctx->pc = 0x1d293cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_1d2940:
    // 0x1d2940: 0xa04a0069  sb          $t2, 0x69($v0)
    ctx->pc = 0x1d2940u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 105), (uint8_t)GPR_U32(ctx, 10));
label_1d2944:
    // 0x1d2944: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x1d2944u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
label_1d2948:
    // 0x1d2948: 0xa049006a  sb          $t1, 0x6A($v0)
    ctx->pc = 0x1d2948u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 106), (uint8_t)GPR_U32(ctx, 9));
label_1d294c:
    // 0x1d294c: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x1d294cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1d2950:
    // 0x1d2950: 0xa045006b  sb          $a1, 0x6B($v0)
    ctx->pc = 0x1d2950u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 107), (uint8_t)GPR_U32(ctx, 5));
label_1d2954:
    // 0x1d2954: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x1d2954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1d2958:
    // 0x1d2958: 0xac48006c  sw          $t0, 0x6C($v0)
    ctx->pc = 0x1d2958u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 8));
label_1d295c:
    // 0x1d295c: 0x240400e0  addiu       $a0, $zero, 0xE0
    ctx->pc = 0x1d295cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_1d2960:
    // 0x1d2960: 0xa04b0088  sb          $t3, 0x88($v0)
    ctx->pc = 0x1d2960u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 136), (uint8_t)GPR_U32(ctx, 11));
label_1d2964:
    // 0x1d2964: 0xa04a0089  sb          $t2, 0x89($v0)
    ctx->pc = 0x1d2964u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 137), (uint8_t)GPR_U32(ctx, 10));
label_1d2968:
    // 0x1d2968: 0xa049008a  sb          $t1, 0x8A($v0)
    ctx->pc = 0x1d2968u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 138), (uint8_t)GPR_U32(ctx, 9));
label_1d296c:
    // 0x1d296c: 0xa045008b  sb          $a1, 0x8B($v0)
    ctx->pc = 0x1d296cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 139), (uint8_t)GPR_U32(ctx, 5));
label_1d2970:
    // 0x1d2970: 0xac48008c  sw          $t0, 0x8C($v0)
    ctx->pc = 0x1d2970u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 8));
label_1d2974:
    // 0x1d2974: 0xa0470078  sb          $a3, 0x78($v0)
    ctx->pc = 0x1d2974u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 120), (uint8_t)GPR_U32(ctx, 7));
label_1d2978:
    // 0x1d2978: 0xa0460079  sb          $a2, 0x79($v0)
    ctx->pc = 0x1d2978u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 121), (uint8_t)GPR_U32(ctx, 6));
label_1d297c:
    // 0x1d297c: 0xa044007a  sb          $a0, 0x7A($v0)
    ctx->pc = 0x1d297cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 122), (uint8_t)GPR_U32(ctx, 4));
label_1d2980:
    // 0x1d2980: 0xa045007b  sb          $a1, 0x7B($v0)
    ctx->pc = 0x1d2980u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 123), (uint8_t)GPR_U32(ctx, 5));
label_1d2984:
    // 0x1d2984: 0xac48007c  sw          $t0, 0x7C($v0)
    ctx->pc = 0x1d2984u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 8));
label_1d2988:
    // 0x1d2988: 0xa0470098  sb          $a3, 0x98($v0)
    ctx->pc = 0x1d2988u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 152), (uint8_t)GPR_U32(ctx, 7));
label_1d298c:
    // 0x1d298c: 0xa0460099  sb          $a2, 0x99($v0)
    ctx->pc = 0x1d298cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 153), (uint8_t)GPR_U32(ctx, 6));
label_1d2990:
    // 0x1d2990: 0xa044009a  sb          $a0, 0x9A($v0)
    ctx->pc = 0x1d2990u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 154), (uint8_t)GPR_U32(ctx, 4));
label_1d2994:
    // 0x1d2994: 0xa045009b  sb          $a1, 0x9B($v0)
    ctx->pc = 0x1d2994u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 155), (uint8_t)GPR_U32(ctx, 5));
label_1d2998:
    // 0x1d2998: 0x1000001c  b           . + 4 + (0x1C << 2)
label_1d299c:
    if (ctx->pc == 0x1D299Cu) {
        ctx->pc = 0x1D299Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2998u;
        // 0x1d299c: 0xac48009c  sw          $t0, 0x9C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 156), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D29A0u;
        goto label_1d29a0;
    }
    ctx->pc = 0x1D2998u;
    {
        const bool branch_taken_0x1d2998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D299Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2998u;
        // 0x1d299c: 0xac48009c  sw          $t0, 0x9C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 156), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2998) {
            ctx->pc = 0x1D2A0Cu;
            goto label_1d2a0c;
        }
    }
    ctx->pc = 0x1D29A0u;
label_1d29a0:
    // 0x1d29a0: 0x240b00ff  addiu       $t3, $zero, 0xFF
    ctx->pc = 0x1d29a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1d29a4:
    // 0x1d29a4: 0x240a005a  addiu       $t2, $zero, 0x5A
    ctx->pc = 0x1d29a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_1d29a8:
    // 0x1d29a8: 0xa04b0068  sb          $t3, 0x68($v0)
    ctx->pc = 0x1d29a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 104), (uint8_t)GPR_U32(ctx, 11));
label_1d29ac:
    // 0x1d29ac: 0x2409006c  addiu       $t1, $zero, 0x6C
    ctx->pc = 0x1d29acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_1d29b0:
    // 0x1d29b0: 0xa04a0069  sb          $t2, 0x69($v0)
    ctx->pc = 0x1d29b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 105), (uint8_t)GPR_U32(ctx, 10));
label_1d29b4:
    // 0x1d29b4: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x1d29b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
label_1d29b8:
    // 0x1d29b8: 0xa049006a  sb          $t1, 0x6A($v0)
    ctx->pc = 0x1d29b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 106), (uint8_t)GPR_U32(ctx, 9));
label_1d29bc:
    // 0x1d29bc: 0x240700ac  addiu       $a3, $zero, 0xAC
    ctx->pc = 0x1d29bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
label_1d29c0:
    // 0x1d29c0: 0xa045006b  sb          $a1, 0x6B($v0)
    ctx->pc = 0x1d29c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 107), (uint8_t)GPR_U32(ctx, 5));
label_1d29c4:
    // 0x1d29c4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1d29c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1d29c8:
    // 0x1d29c8: 0xac48006c  sw          $t0, 0x6C($v0)
    ctx->pc = 0x1d29c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 8));
label_1d29cc:
    // 0x1d29cc: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1d29ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1d29d0:
    // 0x1d29d0: 0xa04b0088  sb          $t3, 0x88($v0)
    ctx->pc = 0x1d29d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 136), (uint8_t)GPR_U32(ctx, 11));
label_1d29d4:
    // 0x1d29d4: 0xa04a0089  sb          $t2, 0x89($v0)
    ctx->pc = 0x1d29d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 137), (uint8_t)GPR_U32(ctx, 10));
label_1d29d8:
    // 0x1d29d8: 0xa049008a  sb          $t1, 0x8A($v0)
    ctx->pc = 0x1d29d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 138), (uint8_t)GPR_U32(ctx, 9));
label_1d29dc:
    // 0x1d29dc: 0xa045008b  sb          $a1, 0x8B($v0)
    ctx->pc = 0x1d29dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 139), (uint8_t)GPR_U32(ctx, 5));
label_1d29e0:
    // 0x1d29e0: 0xac48008c  sw          $t0, 0x8C($v0)
    ctx->pc = 0x1d29e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 8));
label_1d29e4:
    // 0x1d29e4: 0xa0470078  sb          $a3, 0x78($v0)
    ctx->pc = 0x1d29e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 120), (uint8_t)GPR_U32(ctx, 7));
label_1d29e8:
    // 0x1d29e8: 0xa0460079  sb          $a2, 0x79($v0)
    ctx->pc = 0x1d29e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 121), (uint8_t)GPR_U32(ctx, 6));
label_1d29ec:
    // 0x1d29ec: 0xa044007a  sb          $a0, 0x7A($v0)
    ctx->pc = 0x1d29ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 122), (uint8_t)GPR_U32(ctx, 4));
label_1d29f0:
    // 0x1d29f0: 0xa045007b  sb          $a1, 0x7B($v0)
    ctx->pc = 0x1d29f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 123), (uint8_t)GPR_U32(ctx, 5));
label_1d29f4:
    // 0x1d29f4: 0xac48007c  sw          $t0, 0x7C($v0)
    ctx->pc = 0x1d29f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 8));
label_1d29f8:
    // 0x1d29f8: 0xa0470098  sb          $a3, 0x98($v0)
    ctx->pc = 0x1d29f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 152), (uint8_t)GPR_U32(ctx, 7));
label_1d29fc:
    // 0x1d29fc: 0xa0460099  sb          $a2, 0x99($v0)
    ctx->pc = 0x1d29fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 153), (uint8_t)GPR_U32(ctx, 6));
label_1d2a00:
    // 0x1d2a00: 0xa044009a  sb          $a0, 0x9A($v0)
    ctx->pc = 0x1d2a00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 154), (uint8_t)GPR_U32(ctx, 4));
label_1d2a04:
    // 0x1d2a04: 0xa045009b  sb          $a1, 0x9B($v0)
    ctx->pc = 0x1d2a04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 155), (uint8_t)GPR_U32(ctx, 5));
label_1d2a08:
    // 0x1d2a08: 0xac48009c  sw          $t0, 0x9C($v0)
    ctx->pc = 0x1d2a08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 156), GPR_U32(ctx, 8));
label_1d2a0c:
    // 0x1d2a0c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1d2a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1d2a10:
    // 0x1d2a10: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d2a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d2a14:
    // 0x1d2a14: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1d2a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d2a18:
    // 0x1d2a18: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1d2a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_1d2a1c:
    // 0x1d2a1c: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x1d2a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_1d2a20:
    // 0x1d2a20: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1d2a20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d2a24:
    // 0x1d2a24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d2a24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d2a28:
    // 0x1d2a28: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d2a28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d2a2c:
    // 0x1d2a2c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d2a2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d2a30:
    // 0x1d2a30: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1d2a30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1d2a34:
    // 0x1d2a34: 0xc066c72  jal         func_19B1C8
label_1d2a38:
    if (ctx->pc == 0x1D2A38u) {
        ctx->pc = 0x1D2A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A34u;
        // 0x1d2a38: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2A3Cu;
        goto label_1d2a3c;
    }
    ctx->pc = 0x1D2A34u;
    SET_GPR_U32(ctx, 31, 0x1D2A3Cu);
    ctx->pc = 0x1D2A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2A34u;
    // 0x1d2a38: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1D2A3Cu;
label_1d2a3c:
    // 0x1d2a3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d2a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d2a40:
    // 0x1d2a40: 0x3e00008  jr          $ra
label_1d2a44:
    if (ctx->pc == 0x1D2A44u) {
        ctx->pc = 0x1D2A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A40u;
        // 0x1d2a44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2A48u;
        goto label_1d2a48;
    }
    ctx->pc = 0x1D2A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A40u;
        // 0x1d2a44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2A48u;
label_1d2a48:
    // 0x1d2a48: 0x0  nop
    ctx->pc = 0x1d2a48u;
    // NOP
label_1d2a4c:
    // 0x1d2a4c: 0x0  nop
    ctx->pc = 0x1d2a4cu;
    // NOP
label_1d2a50:
    // 0x1d2a50: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1d2a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_1d2a54:
    // 0x1d2a54: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x1d2a54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_1d2a58:
    // 0x1d2a58: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1d2a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1d2a5c:
    // 0x1d2a5c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1d2a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1d2a60:
    // 0x1d2a60: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1d2a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1d2a64:
    // 0x1d2a64: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1d2a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1d2a68:
    // 0x1d2a68: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1d2a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1d2a6c:
    // 0x1d2a6c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d2a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1d2a70:
    // 0x1d2a70: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d2a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1d2a74:
    // 0x1d2a74: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1d2a74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d2a78:
    // 0x1d2a78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d2a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1d2a7c:
    // 0x1d2a7c: 0x34653ffc  ori         $a1, $v1, 0x3FFC
    ctx->pc = 0x1d2a7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16380);
label_1d2a80:
    // 0x1d2a80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d2a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d2a84:
    // 0x1d2a84: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1d2a84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1d2a88:
    // 0x1d2a88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d2a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d2a8c:
    // 0x1d2a8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d2a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d2a90:
    // 0x1d2a90: 0x8ca90000  lw          $t1, 0x0($a1)
    ctx->pc = 0x1d2a90u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d2a94:
    // 0x1d2a94: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x1d2a94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_1d2a98:
    // 0x1d2a98: 0x90e20241  lbu         $v0, 0x241($a3)
    ctx->pc = 0x1d2a98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 577)));
label_1d2a9c:
    // 0x1d2a9c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1d2a9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1d2aa0:
    // 0x1d2aa0: 0x240300dc  addiu       $v1, $zero, 0xDC
    ctx->pc = 0x1d2aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
label_1d2aa4:
    // 0x1d2aa4: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1d2aa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1d2aa8:
    // 0x1d2aa8: 0x928c0  sll         $a1, $t1, 3
    ctx->pc = 0x1d2aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_1d2aac:
    // 0x1d2aac: 0xa93823  subu        $a3, $a1, $t1
    ctx->pc = 0x1d2aacu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_1d2ab0:
    // 0x1d2ab0: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x1d2ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_1d2ab4:
    // 0x1d2ab4: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x1d2ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_1d2ab8:
    // 0x1d2ab8: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x1d2ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_1d2abc:
    // 0x1d2abc: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1d2abcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    ctx->pc = 0x1d2ac0u;
    return;
}

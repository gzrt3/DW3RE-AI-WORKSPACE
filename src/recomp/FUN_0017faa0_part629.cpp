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


void FUN_0017faa0_part629(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x2b2918u: goto label_2b2918;
        case 0x2b291cu: goto label_2b291c;
        case 0x2b2920u: goto label_2b2920;
        case 0x2b2924u: goto label_2b2924;
        case 0x2b2928u: goto label_2b2928;
        case 0x2b292cu: goto label_2b292c;
        case 0x2b2930u: goto label_2b2930;
        case 0x2b2934u: goto label_2b2934;
        case 0x2b2938u: goto label_2b2938;
        case 0x2b293cu: goto label_2b293c;
        case 0x2b2940u: goto label_2b2940;
        case 0x2b2944u: goto label_2b2944;
        case 0x2b2948u: goto label_2b2948;
        case 0x2b294cu: goto label_2b294c;
        case 0x2b2950u: goto label_2b2950;
        case 0x2b2954u: goto label_2b2954;
        case 0x2b2958u: goto label_2b2958;
        case 0x2b295cu: goto label_2b295c;
        case 0x2b2960u: goto label_2b2960;
        case 0x2b2964u: goto label_2b2964;
        case 0x2b2968u: goto label_2b2968;
        case 0x2b296cu: goto label_2b296c;
        case 0x2b2970u: goto label_2b2970;
        case 0x2b2974u: goto label_2b2974;
        case 0x2b2978u: goto label_2b2978;
        case 0x2b297cu: goto label_2b297c;
        case 0x2b2980u: goto label_2b2980;
        case 0x2b2984u: goto label_2b2984;
        case 0x2b2988u: goto label_2b2988;
        case 0x2b298cu: goto label_2b298c;
        case 0x2b2990u: goto label_2b2990;
        case 0x2b2994u: goto label_2b2994;
        case 0x2b2998u: goto label_2b2998;
        case 0x2b299cu: goto label_2b299c;
        case 0x2b29a0u: goto label_2b29a0;
        case 0x2b29a4u: goto label_2b29a4;
        case 0x2b29a8u: goto label_2b29a8;
        case 0x2b29acu: goto label_2b29ac;
        case 0x2b29b0u: goto label_2b29b0;
        case 0x2b29b4u: goto label_2b29b4;
        case 0x2b29b8u: goto label_2b29b8;
        case 0x2b29bcu: goto label_2b29bc;
        case 0x2b29c0u: goto label_2b29c0;
        case 0x2b29c4u: goto label_2b29c4;
        case 0x2b29c8u: goto label_2b29c8;
        case 0x2b29ccu: goto label_2b29cc;
        case 0x2b29d0u: goto label_2b29d0;
        case 0x2b29d4u: goto label_2b29d4;
        case 0x2b29d8u: goto label_2b29d8;
        case 0x2b29dcu: goto label_2b29dc;
        case 0x2b29e0u: goto label_2b29e0;
        case 0x2b29e4u: goto label_2b29e4;
        case 0x2b29e8u: goto label_2b29e8;
        case 0x2b29ecu: goto label_2b29ec;
        case 0x2b29f0u: goto label_2b29f0;
        case 0x2b29f4u: goto label_2b29f4;
        case 0x2b29f8u: goto label_2b29f8;
        case 0x2b29fcu: goto label_2b29fc;
        case 0x2b2a00u: goto label_2b2a00;
        case 0x2b2a04u: goto label_2b2a04;
        case 0x2b2a08u: goto label_2b2a08;
        case 0x2b2a0cu: goto label_2b2a0c;
        case 0x2b2a10u: goto label_2b2a10;
        case 0x2b2a14u: goto label_2b2a14;
        case 0x2b2a18u: goto label_2b2a18;
        case 0x2b2a1cu: goto label_2b2a1c;
        case 0x2b2a20u: goto label_2b2a20;
        case 0x2b2a24u: goto label_2b2a24;
        case 0x2b2a28u: goto label_2b2a28;
        case 0x2b2a2cu: goto label_2b2a2c;
        case 0x2b2a30u: goto label_2b2a30;
        case 0x2b2a34u: goto label_2b2a34;
        case 0x2b2a38u: goto label_2b2a38;
        case 0x2b2a3cu: goto label_2b2a3c;
        case 0x2b2a40u: goto label_2b2a40;
        case 0x2b2a44u: goto label_2b2a44;
        case 0x2b2a48u: goto label_2b2a48;
        case 0x2b2a4cu: goto label_2b2a4c;
        case 0x2b2a50u: goto label_2b2a50;
        case 0x2b2a54u: goto label_2b2a54;
        case 0x2b2a58u: goto label_2b2a58;
        case 0x2b2a5cu: goto label_2b2a5c;
        case 0x2b2a60u: goto label_2b2a60;
        case 0x2b2a64u: goto label_2b2a64;
        case 0x2b2a68u: goto label_2b2a68;
        case 0x2b2a6cu: goto label_2b2a6c;
        case 0x2b2a70u: goto label_2b2a70;
        case 0x2b2a74u: goto label_2b2a74;
        case 0x2b2a78u: goto label_2b2a78;
        case 0x2b2a7cu: goto label_2b2a7c;
        case 0x2b2a80u: goto label_2b2a80;
        case 0x2b2a84u: goto label_2b2a84;
        case 0x2b2a88u: goto label_2b2a88;
        case 0x2b2a8cu: goto label_2b2a8c;
        case 0x2b2a90u: goto label_2b2a90;
        case 0x2b2a94u: goto label_2b2a94;
        case 0x2b2a98u: goto label_2b2a98;
        case 0x2b2a9cu: goto label_2b2a9c;
        case 0x2b2aa0u: goto label_2b2aa0;
        case 0x2b2aa4u: goto label_2b2aa4;
        case 0x2b2aa8u: goto label_2b2aa8;
        case 0x2b2aacu: goto label_2b2aac;
        case 0x2b2ab0u: goto label_2b2ab0;
        case 0x2b2ab4u: goto label_2b2ab4;
        case 0x2b2ab8u: goto label_2b2ab8;
        case 0x2b2abcu: goto label_2b2abc;
        case 0x2b2ac0u: goto label_2b2ac0;
        case 0x2b2ac4u: goto label_2b2ac4;
        case 0x2b2ac8u: goto label_2b2ac8;
        case 0x2b2accu: goto label_2b2acc;
        case 0x2b2ad0u: goto label_2b2ad0;
        case 0x2b2ad4u: goto label_2b2ad4;
        case 0x2b2ad8u: goto label_2b2ad8;
        case 0x2b2adcu: goto label_2b2adc;
        case 0x2b2ae0u: goto label_2b2ae0;
        case 0x2b2ae4u: goto label_2b2ae4;
        case 0x2b2ae8u: goto label_2b2ae8;
        case 0x2b2aecu: goto label_2b2aec;
        case 0x2b2af0u: goto label_2b2af0;
        case 0x2b2af4u: goto label_2b2af4;
        case 0x2b2af8u: goto label_2b2af8;
        case 0x2b2afcu: goto label_2b2afc;
        case 0x2b2b00u: goto label_2b2b00;
        case 0x2b2b04u: goto label_2b2b04;
        case 0x2b2b08u: goto label_2b2b08;
        case 0x2b2b0cu: goto label_2b2b0c;
        case 0x2b2b10u: goto label_2b2b10;
        case 0x2b2b14u: goto label_2b2b14;
        case 0x2b2b18u: goto label_2b2b18;
        case 0x2b2b1cu: goto label_2b2b1c;
        case 0x2b2b20u: goto label_2b2b20;
        case 0x2b2b24u: goto label_2b2b24;
        case 0x2b2b28u: goto label_2b2b28;
        case 0x2b2b2cu: goto label_2b2b2c;
        case 0x2b2b30u: goto label_2b2b30;
        case 0x2b2b34u: goto label_2b2b34;
        case 0x2b2b38u: goto label_2b2b38;
        case 0x2b2b3cu: goto label_2b2b3c;
        case 0x2b2b40u: goto label_2b2b40;
        case 0x2b2b44u: goto label_2b2b44;
        case 0x2b2b48u: goto label_2b2b48;
        case 0x2b2b4cu: goto label_2b2b4c;
        case 0x2b2b50u: goto label_2b2b50;
        case 0x2b2b54u: goto label_2b2b54;
        case 0x2b2b58u: goto label_2b2b58;
        case 0x2b2b5cu: goto label_2b2b5c;
        case 0x2b2b60u: goto label_2b2b60;
        case 0x2b2b64u: goto label_2b2b64;
        case 0x2b2b68u: goto label_2b2b68;
        case 0x2b2b6cu: goto label_2b2b6c;
        case 0x2b2b70u: goto label_2b2b70;
        case 0x2b2b74u: goto label_2b2b74;
        case 0x2b2b78u: goto label_2b2b78;
        case 0x2b2b7cu: goto label_2b2b7c;
        case 0x2b2b80u: goto label_2b2b80;
        case 0x2b2b84u: goto label_2b2b84;
        case 0x2b2b88u: goto label_2b2b88;
        case 0x2b2b8cu: goto label_2b2b8c;
        case 0x2b2b90u: goto label_2b2b90;
        case 0x2b2b94u: goto label_2b2b94;
        case 0x2b2b98u: goto label_2b2b98;
        case 0x2b2b9cu: goto label_2b2b9c;
        case 0x2b2ba0u: goto label_2b2ba0;
        case 0x2b2ba4u: goto label_2b2ba4;
        case 0x2b2ba8u: goto label_2b2ba8;
        case 0x2b2bacu: goto label_2b2bac;
        case 0x2b2bb0u: goto label_2b2bb0;
        case 0x2b2bb4u: goto label_2b2bb4;
        case 0x2b2bb8u: goto label_2b2bb8;
        case 0x2b2bbcu: goto label_2b2bbc;
        case 0x2b2bc0u: goto label_2b2bc0;
        case 0x2b2bc4u: goto label_2b2bc4;
        case 0x2b2bc8u: goto label_2b2bc8;
        case 0x2b2bccu: goto label_2b2bcc;
        case 0x2b2bd0u: goto label_2b2bd0;
        case 0x2b2bd4u: goto label_2b2bd4;
        case 0x2b2bd8u: goto label_2b2bd8;
        case 0x2b2bdcu: goto label_2b2bdc;
        case 0x2b2be0u: goto label_2b2be0;
        case 0x2b2be4u: goto label_2b2be4;
        case 0x2b2be8u: goto label_2b2be8;
        case 0x2b2becu: goto label_2b2bec;
        case 0x2b2bf0u: goto label_2b2bf0;
        case 0x2b2bf4u: goto label_2b2bf4;
        case 0x2b2bf8u: goto label_2b2bf8;
        case 0x2b2bfcu: goto label_2b2bfc;
        case 0x2b2c00u: goto label_2b2c00;
        case 0x2b2c04u: goto label_2b2c04;
        case 0x2b2c08u: goto label_2b2c08;
        case 0x2b2c0cu: goto label_2b2c0c;
        case 0x2b2c10u: goto label_2b2c10;
        case 0x2b2c14u: goto label_2b2c14;
        case 0x2b2c18u: goto label_2b2c18;
        case 0x2b2c1cu: goto label_2b2c1c;
        case 0x2b2c20u: goto label_2b2c20;
        case 0x2b2c24u: goto label_2b2c24;
        case 0x2b2c28u: goto label_2b2c28;
        case 0x2b2c2cu: goto label_2b2c2c;
        case 0x2b2c30u: goto label_2b2c30;
        case 0x2b2c34u: goto label_2b2c34;
        case 0x2b2c38u: goto label_2b2c38;
        case 0x2b2c3cu: goto label_2b2c3c;
        case 0x2b2c40u: goto label_2b2c40;
        case 0x2b2c44u: goto label_2b2c44;
        case 0x2b2c48u: goto label_2b2c48;
        case 0x2b2c4cu: goto label_2b2c4c;
        case 0x2b2c50u: goto label_2b2c50;
        case 0x2b2c54u: goto label_2b2c54;
        case 0x2b2c58u: goto label_2b2c58;
        case 0x2b2c5cu: goto label_2b2c5c;
        case 0x2b2c60u: goto label_2b2c60;
        case 0x2b2c64u: goto label_2b2c64;
        case 0x2b2c68u: goto label_2b2c68;
        case 0x2b2c6cu: goto label_2b2c6c;
        case 0x2b2c70u: goto label_2b2c70;
        case 0x2b2c74u: goto label_2b2c74;
        case 0x2b2c78u: goto label_2b2c78;
        case 0x2b2c7cu: goto label_2b2c7c;
        case 0x2b2c80u: goto label_2b2c80;
        case 0x2b2c84u: goto label_2b2c84;
        case 0x2b2c88u: goto label_2b2c88;
        case 0x2b2c8cu: goto label_2b2c8c;
        case 0x2b2c90u: goto label_2b2c90;
        case 0x2b2c94u: goto label_2b2c94;
        case 0x2b2c98u: goto label_2b2c98;
        case 0x2b2c9cu: goto label_2b2c9c;
        case 0x2b2ca0u: goto label_2b2ca0;
        case 0x2b2ca4u: goto label_2b2ca4;
        case 0x2b2ca8u: goto label_2b2ca8;
        case 0x2b2cacu: goto label_2b2cac;
        default: return;
    }

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
        goto label_2b2918;
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
label_2b2918:
    // 0x2b2918: 0x43000000  .word       0x43000000                   # INVALID     $t8, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b2918u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x2B2918 raw=0x43000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b291c:
    // 0x2b291c: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x2b291cu;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
label_2b2920:
    // 0x2b2920: 0x10090010  beq         $zero, $t1, . + 4 + (0x10 << 2)
label_2b2924:
    if (ctx->pc == 0x2B2924u) {
        ctx->pc = 0x2B2924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2920u;
        // 0x2b2924: 0x1e0c622  .word       0x01E0C622                   # sub         $t8, $t7, $zero # 00000600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 15), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 24, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2928u;
        goto label_2b2928;
    }
    ctx->pc = 0x2B2920u;
    {
        const bool branch_taken_0x2b2920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2B2924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2920u;
        // 0x2b2924: 0x1e0c622  .word       0x01E0C622                   # sub         $t8, $t7, $zero # 00000600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 15), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 24, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2920) {
            ctx->pc = 0x2B2964u;
            goto label_2b2964;
        }
    }
    ctx->pc = 0x2B2928u;
label_2b2928:
    // 0x2b2928: 0x81044bfe  lb          $a0, 0x4BFE($t0)
    ctx->pc = 0x2b2928u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 19454)));
label_2b292c:
    // 0x2b292c: 0x1e0ce62  .word       0x01E0CE62                   # sub         $t9, $t7, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b292cu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 15), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 25, (int32_t)tmp); }
label_2b2930:
    // 0x2b2930: 0x10094801  beq         $zero, $t1, . + 4 + (0x4801 << 2)
label_2b2934:
    if (ctx->pc == 0x2B2934u) {
        ctx->pc = 0x2B2934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2930u;
        // 0x2b2934: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2938u;
        goto label_2b2938;
    }
    ctx->pc = 0x2B2930u;
    {
        const bool branch_taken_0x2b2930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2B2934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2930u;
        // 0x2b2934: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2930) {
            ctx->pc = 0x2C4938u;
            return;
        }
    }
    ctx->pc = 0x2B2938u;
label_2b2938:
    // 0x2b2938: 0x100f48c8  beq         $zero, $t7, . + 4 + (0x48C8 << 2)
label_2b293c:
    if (ctx->pc == 0x2B293Cu) {
        ctx->pc = 0x2B293Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2938u;
        // 0x2b293c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2940u;
        goto label_2b2940;
    }
    ctx->pc = 0x2B2938u;
    {
        const bool branch_taken_0x2b2938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 15));
        ctx->pc = 0x2B293Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2938u;
        // 0x2b293c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2938) {
            ctx->pc = 0x2C4C5Cu;
            return;
        }
    }
    ctx->pc = 0x2B2940u;
label_2b2940:
    // 0x2b2940: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2940u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2944:
    // 0x2b2944: 0x1f8c17c  .word       0x01F8C17C                   # dsll32      $t8, $t8, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2944u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << (32 + 5));
label_2b2948:
    // 0x2b2948: 0x50040059  beql        $zero, $a0, . + 4 + (0x59 << 2)
label_2b294c:
    if (ctx->pc == 0x2B294Cu) {
        ctx->pc = 0x2B294Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2948u;
        // 0x2b294c: 0x1f9c97c  .word       0x01F9C97C                   # dsll32      $t9, $t9, 5 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) << (32 + 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2950u;
        goto label_2b2950;
    }
    ctx->pc = 0x2B2948u;
    {
        const bool branch_taken_0x2b2948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x2b2948) {
            ctx->pc = 0x2B294Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2948u;
            // 0x2b294c: 0x1f9c97c  .word       0x01F9C97C                   # dsll32      $t9, $t9, 5 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) << (32 + 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2AB0u;
            goto label_2b2ab0;
        }
    }
    ctx->pc = 0x2B2950u;
label_2b2950:
    // 0x2b2950: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2950u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2954:
    // 0x2b2954: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2954u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2958:
    // 0x2b2958: 0x1f34803  .word       0x01F34803                   # sra         $t1, $s3, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2958u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 19), 0));
label_2b295c:
    // 0x2b295c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b295cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2960:
    // 0x2b2960: 0x1f04800  .word       0x01F04800                   # sll         $t1, $s0, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2960u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 16), 0));
label_2b2964:
    // 0x2b2964: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2964u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2968:
    // 0x2b2968: 0x1f14801  .word       0x01F14801                   # INVALID     $t7, $s1, 0x4801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2968u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B2968 raw=0x01F14801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b296c:
    // 0x2b296c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b296cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2970:
    // 0x2b2970: 0x1f24802  .word       0x01F24802                   # srl         $t1, $s2, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2970u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 18), 0));
label_2b2974:
    // 0x2b2974: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2974u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2978:
    // 0x2b2978: 0x10030008  beq         $zero, $v1, . + 4 + (0x8 << 2)
label_2b297c:
    if (ctx->pc == 0x2B297Cu) {
        ctx->pc = 0x2B297Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2978u;
        // 0x2b297c: 0x1130503  .word       0x01130503                   # sra         $zero, $s3, 20 # 01000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2980u;
        goto label_2b2980;
    }
    ctx->pc = 0x2B2978u;
    {
        const bool branch_taken_0x2b2978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B297Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2978u;
        // 0x2b297c: 0x1130503  .word       0x01130503                   # sra         $zero, $s3, 20 # 01000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2978) {
            ctx->pc = 0x2B299Cu;
            goto label_2b299c;
        }
    }
    ctx->pc = 0x2B2980u;
label_2b2980:
    // 0x2b2980: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2980u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2984:
    // 0x2b2984: 0x1f021bc  .word       0x01F021BC                   # dsll32      $a0, $s0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2984u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 6));
label_2b2988:
    // 0x2b2988: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2988u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b298c:
    // 0x2b298c: 0x1f028bd  .word       0x01F028BD                   # INVALID     $t7, $s0, 0x28BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b298cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B298C raw=0x01F028BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2990:
    // 0x2b2990: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2990u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2994:
    // 0x2b2994: 0x1f030be  .word       0x01F030BE                   # dsrl32      $a2, $s0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2994u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) >> (32 + 2));
label_2b2998:
    // 0x2b2998: 0x34011800  ori         $at, $zero, 0x1800
    ctx->pc = 0x2b2998u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)6144);
label_2b299c:
    // 0x2b299c: 0x1f03c0b  .word       0x01F03C0B                   # movn        $a3, $t7, $s0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b299cu;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 15));
label_2b29a0:
    // 0x2b29a0: 0x5201004a  beql        $s0, $at, . + 4 + (0x4A << 2)
label_2b29a4:
    if (ctx->pc == 0x2B29A4u) {
        ctx->pc = 0x2B29A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B29A0u;
        // 0x2b29a4: 0x1f121bc  .word       0x01F121BC                   # dsll32      $a0, $s1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B29A8u;
        goto label_2b29a8;
    }
    ctx->pc = 0x2B29A0u;
    {
        const bool branch_taken_0x2b29a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b29a0) {
            ctx->pc = 0x2B29A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B29A0u;
            // 0x2b29a4: 0x1f121bc  .word       0x01F121BC                   # dsll32      $a0, $s1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2ACCu;
            goto label_2b2acc;
        }
    }
    ctx->pc = 0x2B29A8u;
label_2b29a8:
    // 0x2b29a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b29a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b29ac:
    // 0x2b29ac: 0x1f128bd  .word       0x01F128BD                   # INVALID     $t7, $s1, 0x28BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b29acu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B29AC raw=0x01F128BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b29b0:
    // 0x2b29b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b29b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b29b4:
    // 0x2b29b4: 0x1f130be  .word       0x01F130BE                   # dsrl32      $a2, $s1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b29b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) >> (32 + 2));
label_2b29b8:
    // 0x2b29b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b29b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b29bc:
    // 0x2b29bc: 0x1f13c4b  .word       0x01F13C4B                   # movn        $a3, $t7, $s1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b29bcu;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 15));
label_2b29c0:
    // 0x2b29c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b29c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b29c4:
    // 0x2b29c4: 0x1f221bc  .word       0x01F221BC                   # dsll32      $a0, $s2, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b29c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 6));
label_2b29c8:
    // 0x2b29c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b29c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b29cc:
    // 0x2b29cc: 0x1f228bd  .word       0x01F228BD                   # INVALID     $t7, $s2, 0x28BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b29ccu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B29CC raw=0x01F228BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b29d0:
    // 0x2b29d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b29d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b29d4:
    // 0x2b29d4: 0x1f230be  .word       0x01F230BE                   # dsrl32      $a2, $s2, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b29d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) >> (32 + 2));
label_2b29d8:
    // 0x2b29d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b29d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b29dc:
    // 0x2b29dc: 0x1f23c8b  .word       0x01F23C8B                   # movn        $a3, $t7, $s2 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b29dcu;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 15));
label_2b29e0:
    // 0x2b29e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b29e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b29e4:
    // 0x2b29e4: 0x1f321bc  .word       0x01F321BC                   # dsll32      $a0, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b29e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 6));
label_2b29e8:
    // 0x2b29e8: 0x100501a8  beq         $zero, $a1, . + 4 + (0x1A8 << 2)
label_2b29ec:
    if (ctx->pc == 0x2B29ECu) {
        ctx->pc = 0x2B29ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B29E8u;
        // 0x2b29ec: 0x1f328bd  .word       0x01F328BD                   # INVALID     $t7, $s3, 0x28BD # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B29EC raw=0x01F328BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B29F0u;
        goto label_2b29f0;
    }
    ctx->pc = 0x2B29E8u;
    {
        const bool branch_taken_0x2b29e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        ctx->pc = 0x2B29ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B29E8u;
        // 0x2b29ec: 0x1f328bd  .word       0x01F328BD                   # INVALID     $t7, $s3, 0x28BD # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B29EC raw=0x01F328BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b29e8) {
            ctx->pc = 0x2B308Cu;
            { ctx->pc = 0x2b308c; return; }
        }
    }
    ctx->pc = 0x2B29F0u;
label_2b29f0:
    // 0x2b29f0: 0x500e0002  beql        $zero, $t6, . + 4 + (0x2 << 2)
label_2b29f4:
    if (ctx->pc == 0x2B29F4u) {
        ctx->pc = 0x2B29F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B29F0u;
        // 0x2b29f4: 0x1f330be  .word       0x01F330BE                   # dsrl32      $a2, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) >> (32 + 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B29F8u;
        goto label_2b29f8;
    }
    ctx->pc = 0x2B29F0u;
    {
        const bool branch_taken_0x2b29f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        if (branch_taken_0x2b29f0) {
            ctx->pc = 0x2B29F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B29F0u;
            // 0x2b29f4: 0x1f330be  .word       0x01F330BE                   # dsrl32      $a2, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) >> (32 + 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B29FCu;
            goto label_2b29fc;
        }
    }
    ctx->pc = 0x2B29F8u;
label_2b29f8:
    // 0x2b29f8: 0x100d0270  beq         $zero, $t5, . + 4 + (0x270 << 2)
label_2b29fc:
    if (ctx->pc == 0x2B29FCu) {
        ctx->pc = 0x2B29FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B29F8u;
        // 0x2b29fc: 0x1f33ccb  .word       0x01F33CCB                   # movn        $a3, $t7, $s3 # 000004C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2A00u;
        goto label_2b2a00;
    }
    ctx->pc = 0x2B29F8u;
    {
        const bool branch_taken_0x2b29f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2B29FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B29F8u;
        // 0x2b29fc: 0x1f33ccb  .word       0x01F33CCB                   # movn        $a3, $t7, $s3 # 000004C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b29f8) {
            ctx->pc = 0x2B33BCu;
            { ctx->pc = 0x2b33bc; return; }
        }
    }
    ctx->pc = 0x2B2A00u;
label_2b2a00:
    // 0x2b2a00: 0x100d0338  beq         $zero, $t5, . + 4 + (0x338 << 2)
label_2b2a04:
    if (ctx->pc == 0x2B2A04u) {
        ctx->pc = 0x2B2A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2A00u;
        // 0x2b2a04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2A08u;
        goto label_2b2a08;
    }
    ctx->pc = 0x2B2A00u;
    {
        const bool branch_taken_0x2b2a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2B2A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2A00u;
        // 0x2b2a04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2a00) {
            ctx->pc = 0x2B36E4u;
            { ctx->pc = 0x2b36e4; return; }
        }
    }
    ctx->pc = 0x2B2A08u;
label_2b2a08:
    // 0x2b2a08: 0x1e12804  sllv        $a1, $at, $t7
    ctx->pc = 0x2b2a08u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 15) & 0x1F));
label_2b2a0c:
    // 0x2b2a0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2a0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2a10:
    // 0x2b2a10: 0x1f72802  .word       0x01F72802                   # srl         $a1, $s7, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2a10u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 23), 0));
label_2b2a14:
    // 0x2b2a14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2a14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2a18:
    // 0x2b2a18: 0x1e32800  .word       0x01E32800                   # sll         $a1, $v1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2a18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
label_2b2a1c:
    // 0x2b2a1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2a1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2a20:
    // 0x2b2a20: 0x1f52801  .word       0x01F52801                   # INVALID     $t7, $s5, 0x2801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2a20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B2A20 raw=0x01F52801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2a24:
    // 0x2b2a24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2a24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2a28:
    // 0x2b2a28: 0x100c6800  beq         $zero, $t4, . + 4 + (0x6800 << 2)
label_2b2a2c:
    if (ctx->pc == 0x2B2A2Cu) {
        ctx->pc = 0x2B2A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2A28u;
        // 0x2b2a2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2A30u;
        goto label_2b2a30;
    }
    ctx->pc = 0x2B2A28u;
    {
        const bool branch_taken_0x2b2a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 12));
        ctx->pc = 0x2B2A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2A28u;
        // 0x2b2a2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2a28) {
            ctx->pc = 0x2CCA2Cu;
            return;
        }
    }
    ctx->pc = 0x2B2A30u;
label_2b2a30:
    // 0x2b2a30: 0x8002bbfc  lb          $v0, -0x4404($zero)
    ctx->pc = 0x2b2a30u;
    SET_GPR_S32(ctx, 2, (int8_t)runtime->Load8(rdram, ctx, 0xFFFFBBFCu));
label_2b2a34:
    // 0x2b2a34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2a34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2a38:
    // 0x2b2a38: 0x81ed1b7d  lb          $t5, 0x1B7D($t7)
    ctx->pc = 0x2b2a38u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7037)));
label_2b2a3c:
    // 0x2b2a3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2a3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2a40:
    // 0x2b2a40: 0x81edab7d  lb          $t5, -0x5483($t7)
    ctx->pc = 0x2b2a40u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2b2a44:
    // 0x2b2a44: 0x1e181bc  .word       0x01E181BC                   # dsll32      $s0, $at, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2a44u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) << (32 + 6));
label_2b2a48:
    // 0x2b2a48: 0x81edbb7d  lb          $t5, -0x4483($t7)
    ctx->pc = 0x2b2a48u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294949757)));
label_2b2a4c:
    // 0x2b2a4c: 0x1e188bd  .word       0x01E188BD                   # INVALID     $t7, $at, -0x7743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2a4cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2A4C raw=0x01E188BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2a50:
    // 0x2b2a50: 0x800812f4  lb          $t0, 0x12F4($zero)
    ctx->pc = 0x2b2a50u;
    SET_GPR_S32(ctx, 8, (int8_t)FAST_READ8(0x12F4u));
label_2b2a54:
    // 0x2b2a54: 0x1e190be  .word       0x01E190BE                   # dsrl32      $s2, $at, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2a54u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 1) >> (32 + 2));
label_2b2a58:
    // 0x2b2a58: 0x10052803  beq         $zero, $a1, . + 4 + (0x2803 << 2)
label_2b2a5c:
    if (ctx->pc == 0x2B2A5Cu) {
        ctx->pc = 0x2B2A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2A58u;
        // 0x2b2a5c: 0x1e098cb  .word       0x01E098CB                   # movn        $s3, $t7, $zero # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2A60u;
        goto label_2b2a60;
    }
    ctx->pc = 0x2B2A58u;
    {
        const bool branch_taken_0x2b2a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        ctx->pc = 0x2B2A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2A58u;
        // 0x2b2a5c: 0x1e098cb  .word       0x01E098CB                   # movn        $s3, $t7, $zero # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2a58) {
            ctx->pc = 0x2BCA68u;
            { ctx->pc = 0x2bca68; return; }
        }
    }
    ctx->pc = 0x2B2A60u;
label_2b2a60:
    // 0x2b2a60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2a60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2a64:
    // 0x2b2a64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2a64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2a68:
    // 0x2b2a68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2a68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2a6c:
    // 0x2b2a6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2a6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2a70:
    // 0x2b2a70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2a70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2a74:
    // 0x2b2a74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2a74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2a78:
    // 0x2b2a78: 0x81e303bc  lb          $v1, 0x3BC($t7)
    ctx->pc = 0x2b2a78u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2b2a7c:
    // 0x2b2a7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2a7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2a80:
    // 0x2b2a80: 0x800b5ff2  lb          $t3, 0x5FF2($zero)
    ctx->pc = 0x2b2a80u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x5FF2u));
label_2b2a84:
    // 0x2b2a84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2a84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2a88:
    // 0x2b2a88: 0x1e12803  .word       0x01E12803                   # sra         $a1, $at, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2a88u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 1), 0));
label_2b2a8c:
    // 0x2b2a8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2a8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2a90:
    // 0x2b2a90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2a90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2a94:
    // 0x2b2a94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2a94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2a98:
    // 0x2b2a98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2a98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2a9c:
    // 0x2b2a9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2a9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2aa0:
    // 0x2b2aa0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2aa0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2aa4:
    // 0x2b2aa4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2aa4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2aa8:
    // 0x2b2aa8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2aa8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2aac:
    // 0x2b2aac: 0x20f56a  .word       0x0020F56A                   # slt         $fp, $at, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2aacu;
    SET_GPR_U64(ctx, 30, ((int64_t)GPR_S64(ctx, 1) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2b2ab0:
    // 0x2b2ab0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2ab0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2ab4:
    // 0x2b2ab4: 0x1c01d5c  .word       0x01C01D5C                   # dmult       $t6, $zero # 00001D40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2ab4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B2AB4 raw=0x01C01D5C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2ab8:
    // 0x2b2ab8: 0x1e22800  .word       0x01E22800                   # sll         $a1, $v0, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_2b2abc:
    // 0x2b2abc: 0x1e181bc  .word       0x01E181BC                   # dsll32      $s0, $at, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2abcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) << (32 + 6));
label_2b2ac0:
    // 0x2b2ac0: 0x10052802  beq         $zero, $a1, . + 4 + (0x2802 << 2)
label_2b2ac4:
    if (ctx->pc == 0x2B2AC4u) {
        ctx->pc = 0x2B2AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2AC0u;
        // 0x2b2ac4: 0x1e188bd  .word       0x01E188BD                   # INVALID     $t7, $at, -0x7743 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2AC4 raw=0x01E188BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2AC8u;
        goto label_2b2ac8;
    }
    ctx->pc = 0x2B2AC0u;
    {
        const bool branch_taken_0x2b2ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        ctx->pc = 0x2B2AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2AC0u;
        // 0x2b2ac4: 0x1e188bd  .word       0x01E188BD                   # INVALID     $t7, $at, -0x7743 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2AC4 raw=0x01E188BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2ac0) {
            ctx->pc = 0x2BCACCu;
            { ctx->pc = 0x2bcacc; return; }
        }
    }
    ctx->pc = 0x2B2AC8u;
label_2b2ac8:
    // 0x2b2ac8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2ac8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2acc:
    // 0x2b2acc: 0x1e190be  .word       0x01E190BE                   # dsrl32      $s2, $at, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2accu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 1) >> (32 + 2));
label_2b2ad0:
    // 0x2b2ad0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2ad0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2ad4:
    // 0x2b2ad4: 0x1f5a97d  .word       0x01F5A97D                   # INVALID     $t7, $s5, -0x5683 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2ad4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2AD4 raw=0x01F5A97D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2ad8:
    // 0x2b2ad8: 0x81ed137d  lb          $t5, 0x137D($t7)
    ctx->pc = 0x2b2ad8u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4989)));
label_2b2adc:
    // 0x2b2adc: 0x1e098cb  .word       0x01E098CB                   # movn        $s3, $t7, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2adcu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 15));
label_2b2ae0:
    // 0x2b2ae0: 0x81edcb7d  lb          $t5, -0x3483($t7)
    ctx->pc = 0x2b2ae0u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
label_2b2ae4:
    // 0x2b2ae4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2ae4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2ae8:
    // 0x2b2ae8: 0x520b07f1  beql        $s0, $t3, . + 4 + (0x7F1 << 2)
label_2b2aec:
    if (ctx->pc == 0x2B2AECu) {
        ctx->pc = 0x2B2AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2AE8u;
        // 0x2b2aec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2AF0u;
        goto label_2b2af0;
    }
    ctx->pc = 0x2B2AE8u;
    {
        const bool branch_taken_0x2b2ae8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 11));
        if (branch_taken_0x2b2ae8) {
            ctx->pc = 0x2B2AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2AE8u;
            // 0x2b2aec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4AB0u;
            { ctx->pc = 0x2b4ab0; return; }
        }
    }
    ctx->pc = 0x2B2AF0u;
label_2b2af0:
    // 0x2b2af0: 0x81edab7d  lb          $t5, -0x5483($t7)
    ctx->pc = 0x2b2af0u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2b2af4:
    // 0x2b2af4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2af4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2af8:
    // 0x2b2af8: 0x1e12804  sllv        $a1, $at, $t7
    ctx->pc = 0x2b2af8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 15) & 0x1F));
label_2b2afc:
    // 0x2b2afc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2afcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2b00:
    // 0x2b2b00: 0x1f72802  .word       0x01F72802                   # srl         $a1, $s7, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2b00u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 23), 0));
label_2b2b04:
    // 0x2b2b04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2b04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2b08:
    // 0x2b2b08: 0x1e32800  .word       0x01E32800                   # sll         $a1, $v1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2b08u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
label_2b2b0c:
    // 0x2b2b0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2b0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2b10:
    // 0x2b2b10: 0x1f57800  .word       0x01F57800                   # sll         $t7, $s5, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2b10u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 21), 0));
label_2b2b14:
    // 0x2b2b14: 0x1e181bc  .word       0x01E181BC                   # dsll32      $s0, $at, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2b14u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) << (32 + 6));
label_2b2b18:
    // 0x2b2b18: 0x10052803  beq         $zero, $a1, . + 4 + (0x2803 << 2)
label_2b2b1c:
    if (ctx->pc == 0x2B2B1Cu) {
        ctx->pc = 0x2B2B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2B18u;
        // 0x2b2b1c: 0x1e188bd  .word       0x01E188BD                   # INVALID     $t7, $at, -0x7743 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2B1C raw=0x01E188BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2B20u;
        goto label_2b2b20;
    }
    ctx->pc = 0x2B2B18u;
    {
        const bool branch_taken_0x2b2b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        ctx->pc = 0x2B2B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2B18u;
        // 0x2b2b1c: 0x1e188bd  .word       0x01E188BD                   # INVALID     $t7, $at, -0x7743 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2B1C raw=0x01E188BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2b18) {
            ctx->pc = 0x2BCB28u;
            { ctx->pc = 0x2bcb28; return; }
        }
    }
    ctx->pc = 0x2B2B20u;
label_2b2b20:
    // 0x2b2b20: 0x8002bbfc  lb          $v0, -0x4404($zero)
    ctx->pc = 0x2b2b20u;
    SET_GPR_S32(ctx, 2, (int8_t)runtime->Load8(rdram, ctx, 0xFFFFBBFCu));
label_2b2b24:
    // 0x2b2b24: 0x1e190be  .word       0x01E190BE                   # dsrl32      $s2, $at, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2b24u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 1) >> (32 + 2));
label_2b2b28:
    // 0x2b2b28: 0x81ed1b7d  lb          $t5, 0x1B7D($t7)
    ctx->pc = 0x2b2b28u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7037)));
label_2b2b2c:
    // 0x2b2b2c: 0x1e098cb  .word       0x01E098CB                   # movn        $s3, $t7, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2b2cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 15));
label_2b2b30:
    // 0x2b2b30: 0x81edab7d  lb          $t5, -0x5483($t7)
    ctx->pc = 0x2b2b30u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2b2b34:
    // 0x2b2b34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2b34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2b38:
    // 0x2b2b38: 0x81edbb7d  lb          $t5, -0x4483($t7)
    ctx->pc = 0x2b2b38u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294949757)));
label_2b2b3c:
    // 0x2b2b3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2b3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2b40:
    // 0x2b2b40: 0x800812f4  lb          $t0, 0x12F4($zero)
    ctx->pc = 0x2b2b40u;
    SET_GPR_S32(ctx, 8, (int8_t)FAST_READ8(0x12F4u));
label_2b2b44:
    // 0x2b2b44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2b44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2b48:
    // 0x2b2b48: 0x81e303bc  lb          $v1, 0x3BC($t7)
    ctx->pc = 0x2b2b48u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2b2b4c:
    // 0x2b2b4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2b4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2b50:
    // 0x2b2b50: 0x1e22800  .word       0x01E22800                   # sll         $a1, $v0, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2b50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_2b2b54:
    // 0x2b2b54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2b54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2b58:
    // 0x2b2b58: 0x1e12803  .word       0x01E12803                   # sra         $a1, $at, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2b58u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 1), 0));
label_2b2b5c:
    // 0x2b2b5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2b5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2b60:
    // 0x2b2b60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2b60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2b64:
    // 0x2b2b64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2b64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2b68:
    // 0x2b2b68: 0x800b5ff2  lb          $t3, 0x5FF2($zero)
    ctx->pc = 0x2b2b68u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x5FF2u));
label_2b2b6c:
    // 0x2b2b6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2b6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2b70:
    // 0x2b2b70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2b70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2b74:
    // 0x2b2b74: 0x22b604  .word       0x0022B604                   # sllv        $s6, $v0, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2b74u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 1) & 0x1F));
label_2b2b78:
    // 0x2b2b78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2b78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2b7c:
    // 0x2b2b7c: 0x20f56a  .word       0x0020F56A                   # slt         $fp, $at, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2b7cu;
    SET_GPR_U64(ctx, 30, ((int64_t)GPR_S64(ctx, 1) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2b2b80:
    // 0x2b2b80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2b80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2b84:
    // 0x2b2b84: 0x1c01d5c  .word       0x01C01D5C                   # dmult       $t6, $zero # 00001D40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2b84u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B2B84 raw=0x01C01D5C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2b88:
    // 0x2b2b88: 0x43000000  .word       0x43000000                   # INVALID     $t8, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b2b88u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x2B2B88 raw=0x43000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2b8c:
    // 0x2b2b8c: 0x81e181bc  lb          $at, -0x7E44($t7)
    ctx->pc = 0x2b2b8cu;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294934972)));
label_2b2b90:
    // 0x2b2b90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2b90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2b94:
    // 0x2b2b94: 0x20c61e  .word       0x0020C61E                   # ddiv        $t8, $at, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2b94u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2B2B94 raw=0x0020C61E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2b98:
    // 0x2b2b98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2b98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2b9c:
    // 0x2b2b9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2b9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2ba0:
    // 0x2b2ba0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2ba0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2ba4:
    // 0x2b2ba4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2ba4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2ba8:
    // 0x2b2ba8: 0x10052802  beq         $zero, $a1, . + 4 + (0x2802 << 2)
label_2b2bac:
    if (ctx->pc == 0x2B2BACu) {
        ctx->pc = 0x2B2BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2BA8u;
        // 0x2b2bac: 0x1e188bd  .word       0x01E188BD                   # INVALID     $t7, $at, -0x7743 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2BAC raw=0x01E188BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2BB0u;
        goto label_2b2bb0;
    }
    ctx->pc = 0x2B2BA8u;
    {
        const bool branch_taken_0x2b2ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        ctx->pc = 0x2B2BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2BA8u;
        // 0x2b2bac: 0x1e188bd  .word       0x01E188BD                   # INVALID     $t7, $at, -0x7743 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2BAC raw=0x01E188BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2ba8) {
            ctx->pc = 0x2BCBB4u;
            { ctx->pc = 0x2bcbb4; return; }
        }
    }
    ctx->pc = 0x2B2BB0u;
label_2b2bb0:
    // 0x2b2bb0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2bb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2bb4:
    // 0x2b2bb4: 0x38c17c  .word       0x0038C17C                   # dsll32      $t8, $t8, 5 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2bb4u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << (32 + 5));
label_2b2bb8:
    // 0x2b2bb8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2bb8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2bbc:
    // 0x2b2bbc: 0x1e190be  .word       0x01E190BE                   # dsrl32      $s2, $at, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2bbcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 1) >> (32 + 2));
label_2b2bc0:
    // 0x2b2bc0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2bc0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2bc4:
    // 0x2b2bc4: 0x1f5a97d  .word       0x01F5A97D                   # INVALID     $t7, $s5, -0x5683 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2bc4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2BC4 raw=0x01F5A97D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2bc8:
    // 0x2b2bc8: 0x81ed137d  lb          $t5, 0x137D($t7)
    ctx->pc = 0x2b2bc8u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4989)));
label_2b2bcc:
    // 0x2b2bcc: 0x1e098cb  .word       0x01E098CB                   # movn        $s3, $t7, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2bccu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 15));
label_2b2bd0:
    // 0x2b2bd0: 0x81edc37d  lb          $t5, -0x3C83($t7)
    ctx->pc = 0x2b2bd0u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294951805)));
label_2b2bd4:
    // 0x2b2bd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2bd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2bd8:
    // 0x2b2bd8: 0x520b07ed  beql        $s0, $t3, . + 4 + (0x7ED << 2)
label_2b2bdc:
    if (ctx->pc == 0x2B2BDCu) {
        ctx->pc = 0x2B2BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2BD8u;
        // 0x2b2bdc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2BE0u;
        goto label_2b2be0;
    }
    ctx->pc = 0x2B2BD8u;
    {
        const bool branch_taken_0x2b2bd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 11));
        if (branch_taken_0x2b2bd8) {
            ctx->pc = 0x2B2BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2BD8u;
            // 0x2b2bdc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4B90u;
            { ctx->pc = 0x2b4b90; return; }
        }
    }
    ctx->pc = 0x2B2BE0u;
label_2b2be0:
    // 0x2b2be0: 0x81edab7d  lb          $t5, -0x5483($t7)
    ctx->pc = 0x2b2be0u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2b2be4:
    // 0x2b2be4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2be4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2be8:
    // 0x2b2be8: 0x800066fc  lb          $zero, 0x66FC($zero)
    ctx->pc = 0x2b2be8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x66FCu));
label_2b2bec:
    // 0x2b2bec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2becu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2bf0:
    // 0x2b2bf0: 0x800e53b1  lb          $t6, 0x53B1($zero)
    ctx->pc = 0x2b2bf0u;
    SET_GPR_S32(ctx, 14, (int8_t)FAST_READ8(0x53B1u));
label_2b2bf4:
    // 0x2b2bf4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2bf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2bf8:
    // 0x2b2bf8: 0x800427f2  lb          $a0, 0x27F2($zero)
    ctx->pc = 0x2b2bf8u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x27F2u));
label_2b2bfc:
    // 0x2b2bfc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2bfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2c00:
    // 0x2b2c00: 0x10094804  beq         $zero, $t1, . + 4 + (0x4804 << 2)
label_2b2c04:
    if (ctx->pc == 0x2B2C04u) {
        ctx->pc = 0x2B2C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2C00u;
        // 0x2b2c04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2C08u;
        goto label_2b2c08;
    }
    ctx->pc = 0x2B2C00u;
    {
        const bool branch_taken_0x2b2c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2B2C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2C00u;
        // 0x2b2c04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2c00) {
            ctx->pc = 0x2C4C14u;
            return;
        }
    }
    ctx->pc = 0x2B2C08u;
label_2b2c08:
    // 0x2b2c08: 0x520407a9  beql        $s0, $a0, . + 4 + (0x7A9 << 2)
label_2b2c0c:
    if (ctx->pc == 0x2B2C0Cu) {
        ctx->pc = 0x2B2C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2C08u;
        // 0x2b2c0c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2C10u;
        goto label_2b2c10;
    }
    ctx->pc = 0x2B2C08u;
    {
        const bool branch_taken_0x2b2c08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        if (branch_taken_0x2b2c08) {
            ctx->pc = 0x2B2C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2C08u;
            // 0x2b2c0c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4AB0u;
            { ctx->pc = 0x2b4ab0; return; }
        }
    }
    ctx->pc = 0x2B2C10u;
label_2b2c10:
    // 0x2b2c10: 0x100f7801  beq         $zero, $t7, . + 4 + (0x7801 << 2)
label_2b2c14:
    if (ctx->pc == 0x2B2C14u) {
        ctx->pc = 0x2B2C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2C10u;
        // 0x2b2c14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2C18u;
        goto label_2b2c18;
    }
    ctx->pc = 0x2B2C10u;
    {
        const bool branch_taken_0x2b2c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 15));
        ctx->pc = 0x2B2C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2C10u;
        // 0x2b2c14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2c10) {
            ctx->pc = 0x2D0C18u;
            return;
        }
    }
    ctx->pc = 0x2B2C18u;
label_2b2c18:
    // 0x2b2c18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2c18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2c1c:
    // 0x2b2c1c: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b2c1cu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b2c20:
    // 0x2b2c20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2c20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2c24:
    // 0x2b2c24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2c24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2c28:
    // 0x2b2c28: 0x10020007  beq         $zero, $v0, . + 4 + (0x7 << 2)
label_2b2c2c:
    if (ctx->pc == 0x2B2C2Cu) {
        ctx->pc = 0x2B2C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2C28u;
        // 0x2b2c2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2C30u;
        goto label_2b2c30;
    }
    ctx->pc = 0x2B2C28u;
    {
        const bool branch_taken_0x2b2c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B2C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2C28u;
        // 0x2b2c2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2c28) {
            ctx->pc = 0x2B2C48u;
            goto label_2b2c48;
        }
    }
    ctx->pc = 0x2B2C30u;
label_2b2c30:
    // 0x2b2c30: 0x81e8137c  lb          $t0, 0x137C($t7)
    ctx->pc = 0x2b2c30u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
label_2b2c34:
    // 0x2b2c34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2c34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2c38:
    // 0x2b2c38: 0x81e9137c  lb          $t1, 0x137C($t7)
    ctx->pc = 0x2b2c38u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
label_2b2c3c:
    // 0x2b2c3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2c3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2c40:
    // 0x2b2c40: 0x81ea137c  lb          $t2, 0x137C($t7)
    ctx->pc = 0x2b2c40u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
label_2b2c44:
    // 0x2b2c44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2c44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2c48:
    // 0x2b2c48: 0x81eb137c  lb          $t3, 0x137C($t7)
    ctx->pc = 0x2b2c48u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
label_2b2c4c:
    // 0x2b2c4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2c4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2c50:
    // 0x2b2c50: 0x81ec137c  lb          $t4, 0x137C($t7)
    ctx->pc = 0x2b2c50u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
label_2b2c54:
    // 0x2b2c54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2c54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2c58:
    // 0x2b2c58: 0x81ed137c  lb          $t5, 0x137C($t7)
    ctx->pc = 0x2b2c58u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
label_2b2c5c:
    // 0x2b2c5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2c5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2c60:
    // 0x2b2c60: 0x81ee137c  lb          $t6, 0x137C($t7)
    ctx->pc = 0x2b2c60u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
label_2b2c64:
    // 0x2b2c64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2c64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2c68:
    // 0x2b2c68: 0x81ef137c  lb          $t7, 0x137C($t7)
    ctx->pc = 0x2b2c68u;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
label_2b2c6c:
    // 0x2b2c6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2c6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2c70:
    // 0x2b2c70: 0x10020010  beq         $zero, $v0, . + 4 + (0x10 << 2)
label_2b2c74:
    if (ctx->pc == 0x2B2C74u) {
        ctx->pc = 0x2B2C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2C70u;
        // 0x2b2c74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2C78u;
        goto label_2b2c78;
    }
    ctx->pc = 0x2B2C70u;
    {
        const bool branch_taken_0x2b2c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B2C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2C70u;
        // 0x2b2c74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2c70) {
            ctx->pc = 0x2B2CB4u;
            { ctx->pc = 0x2b2cb4; return; }
        }
    }
    ctx->pc = 0x2B2C78u;
label_2b2c78:
    // 0x2b2c78: 0x100300e4  beq         $zero, $v1, . + 4 + (0xE4 << 2)
label_2b2c7c:
    if (ctx->pc == 0x2B2C7Cu) {
        ctx->pc = 0x2B2C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2C78u;
        // 0x2b2c7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2C80u;
        goto label_2b2c80;
    }
    ctx->pc = 0x2B2C78u;
    {
        const bool branch_taken_0x2b2c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B2C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2C78u;
        // 0x2b2c7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2c78) {
            ctx->pc = 0x2B300Cu;
            { ctx->pc = 0x2b300c; return; }
        }
    }
    ctx->pc = 0x2B2C80u;
label_2b2c80:
    // 0x2b2c80: 0x10040010  beq         $zero, $a0, . + 4 + (0x10 << 2)
label_2b2c84:
    if (ctx->pc == 0x2B2C84u) {
        ctx->pc = 0x2B2C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2C80u;
        // 0x2b2c84: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2C88u;
        goto label_2b2c88;
    }
    ctx->pc = 0x2B2C80u;
    {
        const bool branch_taken_0x2b2c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B2C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2C80u;
        // 0x2b2c84: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2c80) {
            ctx->pc = 0x2B2CC4u;
            { ctx->pc = 0x2b2cc4; return; }
        }
    }
    ctx->pc = 0x2B2C88u;
label_2b2c88:
    // 0x2b2c88: 0x81f0137c  lb          $s0, 0x137C($t7)
    ctx->pc = 0x2b2c88u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
label_2b2c8c:
    // 0x2b2c8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2c8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2c90:
    // 0x2b2c90: 0x81f1137c  lb          $s1, 0x137C($t7)
    ctx->pc = 0x2b2c90u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
label_2b2c94:
    // 0x2b2c94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2c94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2c98:
    // 0x2b2c98: 0x81f2137c  lb          $s2, 0x137C($t7)
    ctx->pc = 0x2b2c98u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
label_2b2c9c:
    // 0x2b2c9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2c9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2ca0:
    // 0x2b2ca0: 0x81f3137c  lb          $s3, 0x137C($t7)
    ctx->pc = 0x2b2ca0u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
label_2b2ca4:
    // 0x2b2ca4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2ca4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2ca8:
    // 0x2b2ca8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2ca8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2cac:
    // 0x2b2cac: 0x1f041bc  .word       0x01F041BC                   # dsll32      $t0, $s0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2cacu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 16) << (32 + 6));
    ctx->pc = 0x2b2cb0u;
    return;
}

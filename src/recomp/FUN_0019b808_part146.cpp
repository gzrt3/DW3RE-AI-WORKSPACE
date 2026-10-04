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


void FUN_0019b808_part146(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1e24d8u: goto label_1e24d8;
        case 0x1e24dcu: goto label_1e24dc;
        case 0x1e24e0u: goto label_1e24e0;
        case 0x1e24e4u: goto label_1e24e4;
        case 0x1e24e8u: goto label_1e24e8;
        case 0x1e24ecu: goto label_1e24ec;
        case 0x1e24f0u: goto label_1e24f0;
        case 0x1e24f4u: goto label_1e24f4;
        case 0x1e24f8u: goto label_1e24f8;
        case 0x1e24fcu: goto label_1e24fc;
        case 0x1e2500u: goto label_1e2500;
        case 0x1e2504u: goto label_1e2504;
        case 0x1e2508u: goto label_1e2508;
        case 0x1e250cu: goto label_1e250c;
        case 0x1e2510u: goto label_1e2510;
        case 0x1e2514u: goto label_1e2514;
        case 0x1e2518u: goto label_1e2518;
        case 0x1e251cu: goto label_1e251c;
        case 0x1e2520u: goto label_1e2520;
        case 0x1e2524u: goto label_1e2524;
        case 0x1e2528u: goto label_1e2528;
        case 0x1e252cu: goto label_1e252c;
        case 0x1e2530u: goto label_1e2530;
        case 0x1e2534u: goto label_1e2534;
        case 0x1e2538u: goto label_1e2538;
        case 0x1e253cu: goto label_1e253c;
        case 0x1e2540u: goto label_1e2540;
        case 0x1e2544u: goto label_1e2544;
        case 0x1e2548u: goto label_1e2548;
        case 0x1e254cu: goto label_1e254c;
        case 0x1e2550u: goto label_1e2550;
        case 0x1e2554u: goto label_1e2554;
        case 0x1e2558u: goto label_1e2558;
        case 0x1e255cu: goto label_1e255c;
        case 0x1e2560u: goto label_1e2560;
        case 0x1e2564u: goto label_1e2564;
        case 0x1e2568u: goto label_1e2568;
        case 0x1e256cu: goto label_1e256c;
        case 0x1e2570u: goto label_1e2570;
        case 0x1e2574u: goto label_1e2574;
        case 0x1e2578u: goto label_1e2578;
        case 0x1e257cu: goto label_1e257c;
        case 0x1e2580u: goto label_1e2580;
        case 0x1e2584u: goto label_1e2584;
        case 0x1e2588u: goto label_1e2588;
        case 0x1e258cu: goto label_1e258c;
        case 0x1e2590u: goto label_1e2590;
        case 0x1e2594u: goto label_1e2594;
        case 0x1e2598u: goto label_1e2598;
        case 0x1e259cu: goto label_1e259c;
        case 0x1e25a0u: goto label_1e25a0;
        case 0x1e25a4u: goto label_1e25a4;
        case 0x1e25a8u: goto label_1e25a8;
        case 0x1e25acu: goto label_1e25ac;
        case 0x1e25b0u: goto label_1e25b0;
        case 0x1e25b4u: goto label_1e25b4;
        case 0x1e25b8u: goto label_1e25b8;
        case 0x1e25bcu: goto label_1e25bc;
        case 0x1e25c0u: goto label_1e25c0;
        case 0x1e25c4u: goto label_1e25c4;
        case 0x1e25c8u: goto label_1e25c8;
        case 0x1e25ccu: goto label_1e25cc;
        case 0x1e25d0u: goto label_1e25d0;
        case 0x1e25d4u: goto label_1e25d4;
        case 0x1e25d8u: goto label_1e25d8;
        case 0x1e25dcu: goto label_1e25dc;
        case 0x1e25e0u: goto label_1e25e0;
        case 0x1e25e4u: goto label_1e25e4;
        case 0x1e25e8u: goto label_1e25e8;
        case 0x1e25ecu: goto label_1e25ec;
        case 0x1e25f0u: goto label_1e25f0;
        case 0x1e25f4u: goto label_1e25f4;
        case 0x1e25f8u: goto label_1e25f8;
        case 0x1e25fcu: goto label_1e25fc;
        case 0x1e2600u: goto label_1e2600;
        case 0x1e2604u: goto label_1e2604;
        case 0x1e2608u: goto label_1e2608;
        case 0x1e260cu: goto label_1e260c;
        case 0x1e2610u: goto label_1e2610;
        case 0x1e2614u: goto label_1e2614;
        case 0x1e2618u: goto label_1e2618;
        case 0x1e261cu: goto label_1e261c;
        case 0x1e2620u: goto label_1e2620;
        case 0x1e2624u: goto label_1e2624;
        case 0x1e2628u: goto label_1e2628;
        case 0x1e262cu: goto label_1e262c;
        case 0x1e2630u: goto label_1e2630;
        case 0x1e2634u: goto label_1e2634;
        case 0x1e2638u: goto label_1e2638;
        case 0x1e263cu: goto label_1e263c;
        case 0x1e2640u: goto label_1e2640;
        case 0x1e2644u: goto label_1e2644;
        case 0x1e2648u: goto label_1e2648;
        case 0x1e264cu: goto label_1e264c;
        case 0x1e2650u: goto label_1e2650;
        case 0x1e2654u: goto label_1e2654;
        case 0x1e2658u: goto label_1e2658;
        case 0x1e265cu: goto label_1e265c;
        case 0x1e2660u: goto label_1e2660;
        case 0x1e2664u: goto label_1e2664;
        case 0x1e2668u: goto label_1e2668;
        case 0x1e266cu: goto label_1e266c;
        case 0x1e2670u: goto label_1e2670;
        case 0x1e2674u: goto label_1e2674;
        case 0x1e2678u: goto label_1e2678;
        case 0x1e267cu: goto label_1e267c;
        case 0x1e2680u: goto label_1e2680;
        case 0x1e2684u: goto label_1e2684;
        case 0x1e2688u: goto label_1e2688;
        case 0x1e268cu: goto label_1e268c;
        case 0x1e2690u: goto label_1e2690;
        case 0x1e2694u: goto label_1e2694;
        case 0x1e2698u: goto label_1e2698;
        case 0x1e269cu: goto label_1e269c;
        case 0x1e26a0u: goto label_1e26a0;
        case 0x1e26a4u: goto label_1e26a4;
        case 0x1e26a8u: goto label_1e26a8;
        case 0x1e26acu: goto label_1e26ac;
        case 0x1e26b0u: goto label_1e26b0;
        case 0x1e26b4u: goto label_1e26b4;
        case 0x1e26b8u: goto label_1e26b8;
        case 0x1e26bcu: goto label_1e26bc;
        case 0x1e26c0u: goto label_1e26c0;
        case 0x1e26c4u: goto label_1e26c4;
        case 0x1e26c8u: goto label_1e26c8;
        case 0x1e26ccu: goto label_1e26cc;
        case 0x1e26d0u: goto label_1e26d0;
        case 0x1e26d4u: goto label_1e26d4;
        case 0x1e26d8u: goto label_1e26d8;
        case 0x1e26dcu: goto label_1e26dc;
        case 0x1e26e0u: goto label_1e26e0;
        case 0x1e26e4u: goto label_1e26e4;
        case 0x1e26e8u: goto label_1e26e8;
        case 0x1e26ecu: goto label_1e26ec;
        case 0x1e26f0u: goto label_1e26f0;
        case 0x1e26f4u: goto label_1e26f4;
        case 0x1e26f8u: goto label_1e26f8;
        case 0x1e26fcu: goto label_1e26fc;
        case 0x1e2700u: goto label_1e2700;
        case 0x1e2704u: goto label_1e2704;
        case 0x1e2708u: goto label_1e2708;
        case 0x1e270cu: goto label_1e270c;
        case 0x1e2710u: goto label_1e2710;
        case 0x1e2714u: goto label_1e2714;
        case 0x1e2718u: goto label_1e2718;
        case 0x1e271cu: goto label_1e271c;
        case 0x1e2720u: goto label_1e2720;
        case 0x1e2724u: goto label_1e2724;
        case 0x1e2728u: goto label_1e2728;
        case 0x1e272cu: goto label_1e272c;
        case 0x1e2730u: goto label_1e2730;
        case 0x1e2734u: goto label_1e2734;
        case 0x1e2738u: goto label_1e2738;
        case 0x1e273cu: goto label_1e273c;
        case 0x1e2740u: goto label_1e2740;
        case 0x1e2744u: goto label_1e2744;
        case 0x1e2748u: goto label_1e2748;
        case 0x1e274cu: goto label_1e274c;
        case 0x1e2750u: goto label_1e2750;
        case 0x1e2754u: goto label_1e2754;
        case 0x1e2758u: goto label_1e2758;
        case 0x1e275cu: goto label_1e275c;
        case 0x1e2760u: goto label_1e2760;
        case 0x1e2764u: goto label_1e2764;
        case 0x1e2768u: goto label_1e2768;
        case 0x1e276cu: goto label_1e276c;
        case 0x1e2770u: goto label_1e2770;
        case 0x1e2774u: goto label_1e2774;
        case 0x1e2778u: goto label_1e2778;
        case 0x1e277cu: goto label_1e277c;
        case 0x1e2780u: goto label_1e2780;
        case 0x1e2784u: goto label_1e2784;
        case 0x1e2788u: goto label_1e2788;
        case 0x1e278cu: goto label_1e278c;
        case 0x1e2790u: goto label_1e2790;
        case 0x1e2794u: goto label_1e2794;
        case 0x1e2798u: goto label_1e2798;
        case 0x1e279cu: goto label_1e279c;
        case 0x1e27a0u: goto label_1e27a0;
        case 0x1e27a4u: goto label_1e27a4;
        case 0x1e27a8u: goto label_1e27a8;
        case 0x1e27acu: goto label_1e27ac;
        case 0x1e27b0u: goto label_1e27b0;
        case 0x1e27b4u: goto label_1e27b4;
        case 0x1e27b8u: goto label_1e27b8;
        case 0x1e27bcu: goto label_1e27bc;
        case 0x1e27c0u: goto label_1e27c0;
        case 0x1e27c4u: goto label_1e27c4;
        case 0x1e27c8u: goto label_1e27c8;
        case 0x1e27ccu: goto label_1e27cc;
        case 0x1e27d0u: goto label_1e27d0;
        case 0x1e27d4u: goto label_1e27d4;
        case 0x1e27d8u: goto label_1e27d8;
        case 0x1e27dcu: goto label_1e27dc;
        case 0x1e27e0u: goto label_1e27e0;
        case 0x1e27e4u: goto label_1e27e4;
        case 0x1e27e8u: goto label_1e27e8;
        case 0x1e27ecu: goto label_1e27ec;
        case 0x1e27f0u: goto label_1e27f0;
        case 0x1e27f4u: goto label_1e27f4;
        case 0x1e27f8u: goto label_1e27f8;
        case 0x1e27fcu: goto label_1e27fc;
        case 0x1e2800u: goto label_1e2800;
        case 0x1e2804u: goto label_1e2804;
        case 0x1e2808u: goto label_1e2808;
        case 0x1e280cu: goto label_1e280c;
        case 0x1e2810u: goto label_1e2810;
        case 0x1e2814u: goto label_1e2814;
        case 0x1e2818u: goto label_1e2818;
        case 0x1e281cu: goto label_1e281c;
        case 0x1e2820u: goto label_1e2820;
        case 0x1e2824u: goto label_1e2824;
        case 0x1e2828u: goto label_1e2828;
        case 0x1e282cu: goto label_1e282c;
        case 0x1e2830u: goto label_1e2830;
        case 0x1e2834u: goto label_1e2834;
        case 0x1e2838u: goto label_1e2838;
        case 0x1e283cu: goto label_1e283c;
        case 0x1e2840u: goto label_1e2840;
        case 0x1e2844u: goto label_1e2844;
        case 0x1e2848u: goto label_1e2848;
        case 0x1e284cu: goto label_1e284c;
        case 0x1e2850u: goto label_1e2850;
        case 0x1e2854u: goto label_1e2854;
        case 0x1e2858u: goto label_1e2858;
        case 0x1e285cu: goto label_1e285c;
        case 0x1e2860u: goto label_1e2860;
        case 0x1e2864u: goto label_1e2864;
        case 0x1e2868u: goto label_1e2868;
        case 0x1e286cu: goto label_1e286c;
        case 0x1e2870u: goto label_1e2870;
        case 0x1e2874u: goto label_1e2874;
        case 0x1e2878u: goto label_1e2878;
        case 0x1e287cu: goto label_1e287c;
        case 0x1e2880u: goto label_1e2880;
        case 0x1e2884u: goto label_1e2884;
        case 0x1e2888u: goto label_1e2888;
        case 0x1e288cu: goto label_1e288c;
        case 0x1e2890u: goto label_1e2890;
        case 0x1e2894u: goto label_1e2894;
        case 0x1e2898u: goto label_1e2898;
        case 0x1e289cu: goto label_1e289c;
        case 0x1e28a0u: goto label_1e28a0;
        case 0x1e28a4u: goto label_1e28a4;
        case 0x1e28a8u: goto label_1e28a8;
        case 0x1e28acu: goto label_1e28ac;
        case 0x1e28b0u: goto label_1e28b0;
        case 0x1e28b4u: goto label_1e28b4;
        case 0x1e28b8u: goto label_1e28b8;
        case 0x1e28bcu: goto label_1e28bc;
        case 0x1e28c0u: goto label_1e28c0;
        case 0x1e28c4u: goto label_1e28c4;
        case 0x1e28c8u: goto label_1e28c8;
        case 0x1e28ccu: goto label_1e28cc;
        case 0x1e28d0u: goto label_1e28d0;
        case 0x1e28d4u: goto label_1e28d4;
        case 0x1e28d8u: goto label_1e28d8;
        case 0x1e28dcu: goto label_1e28dc;
        case 0x1e28e0u: goto label_1e28e0;
        case 0x1e28e4u: goto label_1e28e4;
        case 0x1e28e8u: goto label_1e28e8;
        case 0x1e28ecu: goto label_1e28ec;
        case 0x1e28f0u: goto label_1e28f0;
        case 0x1e28f4u: goto label_1e28f4;
        case 0x1e28f8u: goto label_1e28f8;
        case 0x1e28fcu: goto label_1e28fc;
        case 0x1e2900u: goto label_1e2900;
        case 0x1e2904u: goto label_1e2904;
        case 0x1e2908u: goto label_1e2908;
        case 0x1e290cu: goto label_1e290c;
        case 0x1e2910u: goto label_1e2910;
        case 0x1e2914u: goto label_1e2914;
        case 0x1e2918u: goto label_1e2918;
        case 0x1e291cu: goto label_1e291c;
        case 0x1e2920u: goto label_1e2920;
        case 0x1e2924u: goto label_1e2924;
        case 0x1e2928u: goto label_1e2928;
        case 0x1e292cu: goto label_1e292c;
        case 0x1e2930u: goto label_1e2930;
        case 0x1e2934u: goto label_1e2934;
        case 0x1e2938u: goto label_1e2938;
        case 0x1e293cu: goto label_1e293c;
        case 0x1e2940u: goto label_1e2940;
        case 0x1e2944u: goto label_1e2944;
        case 0x1e2948u: goto label_1e2948;
        case 0x1e294cu: goto label_1e294c;
        case 0x1e2950u: goto label_1e2950;
        case 0x1e2954u: goto label_1e2954;
        case 0x1e2958u: goto label_1e2958;
        case 0x1e295cu: goto label_1e295c;
        case 0x1e2960u: goto label_1e2960;
        case 0x1e2964u: goto label_1e2964;
        case 0x1e2968u: goto label_1e2968;
        case 0x1e296cu: goto label_1e296c;
        case 0x1e2970u: goto label_1e2970;
        case 0x1e2974u: goto label_1e2974;
        case 0x1e2978u: goto label_1e2978;
        case 0x1e297cu: goto label_1e297c;
        case 0x1e2980u: goto label_1e2980;
        case 0x1e2984u: goto label_1e2984;
        case 0x1e2988u: goto label_1e2988;
        case 0x1e298cu: goto label_1e298c;
        case 0x1e2990u: goto label_1e2990;
        case 0x1e2994u: goto label_1e2994;
        case 0x1e2998u: goto label_1e2998;
        case 0x1e299cu: goto label_1e299c;
        case 0x1e29a0u: goto label_1e29a0;
        case 0x1e29a4u: goto label_1e29a4;
        case 0x1e29a8u: goto label_1e29a8;
        case 0x1e29acu: goto label_1e29ac;
        case 0x1e29b0u: goto label_1e29b0;
        case 0x1e29b4u: goto label_1e29b4;
        case 0x1e29b8u: goto label_1e29b8;
        case 0x1e29bcu: goto label_1e29bc;
        case 0x1e29c0u: goto label_1e29c0;
        case 0x1e29c4u: goto label_1e29c4;
        case 0x1e29c8u: goto label_1e29c8;
        case 0x1e29ccu: goto label_1e29cc;
        case 0x1e29d0u: goto label_1e29d0;
        case 0x1e29d4u: goto label_1e29d4;
        case 0x1e29d8u: goto label_1e29d8;
        case 0x1e29dcu: goto label_1e29dc;
        case 0x1e29e0u: goto label_1e29e0;
        case 0x1e29e4u: goto label_1e29e4;
        case 0x1e29e8u: goto label_1e29e8;
        case 0x1e29ecu: goto label_1e29ec;
        case 0x1e29f0u: goto label_1e29f0;
        case 0x1e29f4u: goto label_1e29f4;
        case 0x1e29f8u: goto label_1e29f8;
        case 0x1e29fcu: goto label_1e29fc;
        case 0x1e2a00u: goto label_1e2a00;
        case 0x1e2a04u: goto label_1e2a04;
        case 0x1e2a08u: goto label_1e2a08;
        case 0x1e2a0cu: goto label_1e2a0c;
        case 0x1e2a10u: goto label_1e2a10;
        case 0x1e2a14u: goto label_1e2a14;
        case 0x1e2a18u: goto label_1e2a18;
        case 0x1e2a1cu: goto label_1e2a1c;
        case 0x1e2a20u: goto label_1e2a20;
        case 0x1e2a24u: goto label_1e2a24;
        case 0x1e2a28u: goto label_1e2a28;
        case 0x1e2a2cu: goto label_1e2a2c;
        case 0x1e2a30u: goto label_1e2a30;
        case 0x1e2a34u: goto label_1e2a34;
        case 0x1e2a38u: goto label_1e2a38;
        case 0x1e2a3cu: goto label_1e2a3c;
        case 0x1e2a40u: goto label_1e2a40;
        case 0x1e2a44u: goto label_1e2a44;
        case 0x1e2a48u: goto label_1e2a48;
        case 0x1e2a4cu: goto label_1e2a4c;
        case 0x1e2a50u: goto label_1e2a50;
        case 0x1e2a54u: goto label_1e2a54;
        case 0x1e2a58u: goto label_1e2a58;
        case 0x1e2a5cu: goto label_1e2a5c;
        case 0x1e2a60u: goto label_1e2a60;
        case 0x1e2a64u: goto label_1e2a64;
        case 0x1e2a68u: goto label_1e2a68;
        case 0x1e2a6cu: goto label_1e2a6c;
        case 0x1e2a70u: goto label_1e2a70;
        case 0x1e2a74u: goto label_1e2a74;
        case 0x1e2a78u: goto label_1e2a78;
        case 0x1e2a7cu: goto label_1e2a7c;
        case 0x1e2a80u: goto label_1e2a80;
        case 0x1e2a84u: goto label_1e2a84;
        case 0x1e2a88u: goto label_1e2a88;
        case 0x1e2a8cu: goto label_1e2a8c;
        case 0x1e2a90u: goto label_1e2a90;
        case 0x1e2a94u: goto label_1e2a94;
        case 0x1e2a98u: goto label_1e2a98;
        case 0x1e2a9cu: goto label_1e2a9c;
        case 0x1e2aa0u: goto label_1e2aa0;
        case 0x1e2aa4u: goto label_1e2aa4;
        case 0x1e2aa8u: goto label_1e2aa8;
        case 0x1e2aacu: goto label_1e2aac;
        case 0x1e2ab0u: goto label_1e2ab0;
        case 0x1e2ab4u: goto label_1e2ab4;
        case 0x1e2ab8u: goto label_1e2ab8;
        case 0x1e2abcu: goto label_1e2abc;
        case 0x1e2ac0u: goto label_1e2ac0;
        case 0x1e2ac4u: goto label_1e2ac4;
        case 0x1e2ac8u: goto label_1e2ac8;
        case 0x1e2accu: goto label_1e2acc;
        case 0x1e2ad0u: goto label_1e2ad0;
        case 0x1e2ad4u: goto label_1e2ad4;
        case 0x1e2ad8u: goto label_1e2ad8;
        case 0x1e2adcu: goto label_1e2adc;
        case 0x1e2ae0u: goto label_1e2ae0;
        case 0x1e2ae4u: goto label_1e2ae4;
        case 0x1e2ae8u: goto label_1e2ae8;
        case 0x1e2aecu: goto label_1e2aec;
        case 0x1e2af0u: goto label_1e2af0;
        case 0x1e2af4u: goto label_1e2af4;
        case 0x1e2af8u: goto label_1e2af8;
        case 0x1e2afcu: goto label_1e2afc;
        case 0x1e2b00u: goto label_1e2b00;
        case 0x1e2b04u: goto label_1e2b04;
        case 0x1e2b08u: goto label_1e2b08;
        case 0x1e2b0cu: goto label_1e2b0c;
        case 0x1e2b10u: goto label_1e2b10;
        case 0x1e2b14u: goto label_1e2b14;
        case 0x1e2b18u: goto label_1e2b18;
        case 0x1e2b1cu: goto label_1e2b1c;
        case 0x1e2b20u: goto label_1e2b20;
        case 0x1e2b24u: goto label_1e2b24;
        case 0x1e2b28u: goto label_1e2b28;
        case 0x1e2b2cu: goto label_1e2b2c;
        case 0x1e2b30u: goto label_1e2b30;
        case 0x1e2b34u: goto label_1e2b34;
        case 0x1e2b38u: goto label_1e2b38;
        case 0x1e2b3cu: goto label_1e2b3c;
        case 0x1e2b40u: goto label_1e2b40;
        case 0x1e2b44u: goto label_1e2b44;
        case 0x1e2b48u: goto label_1e2b48;
        case 0x1e2b4cu: goto label_1e2b4c;
        case 0x1e2b50u: goto label_1e2b50;
        case 0x1e2b54u: goto label_1e2b54;
        case 0x1e2b58u: goto label_1e2b58;
        case 0x1e2b5cu: goto label_1e2b5c;
        case 0x1e2b60u: goto label_1e2b60;
        case 0x1e2b64u: goto label_1e2b64;
        case 0x1e2b68u: goto label_1e2b68;
        case 0x1e2b6cu: goto label_1e2b6c;
        case 0x1e2b70u: goto label_1e2b70;
        case 0x1e2b74u: goto label_1e2b74;
        case 0x1e2b78u: goto label_1e2b78;
        case 0x1e2b7cu: goto label_1e2b7c;
        case 0x1e2b80u: goto label_1e2b80;
        case 0x1e2b84u: goto label_1e2b84;
        case 0x1e2b88u: goto label_1e2b88;
        case 0x1e2b8cu: goto label_1e2b8c;
        case 0x1e2b90u: goto label_1e2b90;
        case 0x1e2b94u: goto label_1e2b94;
        case 0x1e2b98u: goto label_1e2b98;
        case 0x1e2b9cu: goto label_1e2b9c;
        case 0x1e2ba0u: goto label_1e2ba0;
        case 0x1e2ba4u: goto label_1e2ba4;
        case 0x1e2ba8u: goto label_1e2ba8;
        case 0x1e2bacu: goto label_1e2bac;
        case 0x1e2bb0u: goto label_1e2bb0;
        case 0x1e2bb4u: goto label_1e2bb4;
        case 0x1e2bb8u: goto label_1e2bb8;
        case 0x1e2bbcu: goto label_1e2bbc;
        case 0x1e2bc0u: goto label_1e2bc0;
        case 0x1e2bc4u: goto label_1e2bc4;
        case 0x1e2bc8u: goto label_1e2bc8;
        case 0x1e2bccu: goto label_1e2bcc;
        case 0x1e2bd0u: goto label_1e2bd0;
        case 0x1e2bd4u: goto label_1e2bd4;
        case 0x1e2bd8u: goto label_1e2bd8;
        case 0x1e2bdcu: goto label_1e2bdc;
        case 0x1e2be0u: goto label_1e2be0;
        case 0x1e2be4u: goto label_1e2be4;
        case 0x1e2be8u: goto label_1e2be8;
        case 0x1e2becu: goto label_1e2bec;
        case 0x1e2bf0u: goto label_1e2bf0;
        case 0x1e2bf4u: goto label_1e2bf4;
        case 0x1e2bf8u: goto label_1e2bf8;
        case 0x1e2bfcu: goto label_1e2bfc;
        case 0x1e2c00u: goto label_1e2c00;
        case 0x1e2c04u: goto label_1e2c04;
        case 0x1e2c08u: goto label_1e2c08;
        case 0x1e2c0cu: goto label_1e2c0c;
        case 0x1e2c10u: goto label_1e2c10;
        case 0x1e2c14u: goto label_1e2c14;
        case 0x1e2c18u: goto label_1e2c18;
        case 0x1e2c1cu: goto label_1e2c1c;
        case 0x1e2c20u: goto label_1e2c20;
        case 0x1e2c24u: goto label_1e2c24;
        case 0x1e2c28u: goto label_1e2c28;
        case 0x1e2c2cu: goto label_1e2c2c;
        case 0x1e2c30u: goto label_1e2c30;
        case 0x1e2c34u: goto label_1e2c34;
        case 0x1e2c38u: goto label_1e2c38;
        case 0x1e2c3cu: goto label_1e2c3c;
        case 0x1e2c40u: goto label_1e2c40;
        case 0x1e2c44u: goto label_1e2c44;
        case 0x1e2c48u: goto label_1e2c48;
        case 0x1e2c4cu: goto label_1e2c4c;
        case 0x1e2c50u: goto label_1e2c50;
        case 0x1e2c54u: goto label_1e2c54;
        case 0x1e2c58u: goto label_1e2c58;
        case 0x1e2c5cu: goto label_1e2c5c;
        case 0x1e2c60u: goto label_1e2c60;
        case 0x1e2c64u: goto label_1e2c64;
        case 0x1e2c68u: goto label_1e2c68;
        case 0x1e2c6cu: goto label_1e2c6c;
        case 0x1e2c70u: goto label_1e2c70;
        case 0x1e2c74u: goto label_1e2c74;
        case 0x1e2c78u: goto label_1e2c78;
        case 0x1e2c7cu: goto label_1e2c7c;
        case 0x1e2c80u: goto label_1e2c80;
        case 0x1e2c84u: goto label_1e2c84;
        case 0x1e2c88u: goto label_1e2c88;
        case 0x1e2c8cu: goto label_1e2c8c;
        case 0x1e2c90u: goto label_1e2c90;
        case 0x1e2c94u: goto label_1e2c94;
        case 0x1e2c98u: goto label_1e2c98;
        case 0x1e2c9cu: goto label_1e2c9c;
        case 0x1e2ca0u: goto label_1e2ca0;
        case 0x1e2ca4u: goto label_1e2ca4;
        default: return;
    }

label_1e24d8:
    // 0x1e24d8: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1e24d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1e24dc:
    // 0x1e24dc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1e24dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1e24e0:
    // 0x1e24e0: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x1e24e0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e24e4:
    // 0x1e24e4: 0xc05e234  jal         func_1788D0
label_1e24e8:
    if (ctx->pc == 0x1E24E8u) {
        ctx->pc = 0x1E24E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E24E4u;
        // 0x1e24e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E24ECu;
        goto label_1e24ec;
    }
    ctx->pc = 0x1E24E4u;
    SET_GPR_U32(ctx, 31, 0x1E24ECu);
    ctx->pc = 0x1E24E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E24E4u;
    // 0x1e24e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1E24E4u, 0x1E24ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E24ECu;
label_1e24ec:
    // 0x1e24ec: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x1e24ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_1e24f0:
    // 0x1e24f0: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x1e24f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1e24f4:
    // 0x1e24f4: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x1e24f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1e24f8:
    // 0x1e24f8: 0x24070384  addiu       $a3, $zero, 0x384
    ctx->pc = 0x1e24f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_1e24fc:
    // 0x1e24fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e24fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e2500:
    // 0x1e2500: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e2500u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e2504:
    // 0x1e2504: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1e2504u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e2508:
    // 0x1e2508: 0xc05e060  jal         func_178180
label_1e250c:
    if (ctx->pc == 0x1E250Cu) {
        ctx->pc = 0x1E250Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2508u;
        // 0x1e250c: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2510u;
        goto label_1e2510;
    }
    ctx->pc = 0x1E2508u;
    SET_GPR_U32(ctx, 31, 0x1E2510u);
    ctx->pc = 0x1E250Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2508u;
    // 0x1e250c: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178180u, 0x1E2508u, 0x1E2510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2510u;
label_1e2510:
    // 0x1e2510: 0xa2800078  sb          $zero, 0x78($s4)
    ctx->pc = 0x1e2510u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 120), (uint8_t)GPR_U32(ctx, 0));
label_1e2514:
    // 0x1e2514: 0x3c0d3f80  lui         $t5, 0x3F80
    ctx->pc = 0x1e2514u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)16256 << 16));
label_1e2518:
    // 0x1e2518: 0xa2800079  sb          $zero, 0x79($s4)
    ctx->pc = 0x1e2518u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 121), (uint8_t)GPR_U32(ctx, 0));
label_1e251c:
    // 0x1e251c: 0x240c0060  addiu       $t4, $zero, 0x60
    ctx->pc = 0x1e251cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1e2520:
    // 0x1e2520: 0xa280007a  sb          $zero, 0x7A($s4)
    ctx->pc = 0x1e2520u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 122), (uint8_t)GPR_U32(ctx, 0));
label_1e2524:
    // 0x1e2524: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1e2524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1e2528:
    // 0x1e2528: 0xa280007b  sb          $zero, 0x7B($s4)
    ctx->pc = 0x1e2528u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 123), (uint8_t)GPR_U32(ctx, 0));
label_1e252c:
    // 0x1e252c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e252cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e2530:
    // 0x1e2530: 0xae8d007c  sw          $t5, 0x7C($s4)
    ctx->pc = 0x1e2530u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 124), GPR_U32(ctx, 13));
label_1e2534:
    // 0x1e2534: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e2534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e2538:
    // 0x1e2538: 0xa2800098  sb          $zero, 0x98($s4)
    ctx->pc = 0x1e2538u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 152), (uint8_t)GPR_U32(ctx, 0));
label_1e253c:
    // 0x1e253c: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1e253cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1e2540:
    // 0x1e2540: 0xa2800099  sb          $zero, 0x99($s4)
    ctx->pc = 0x1e2540u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 153), (uint8_t)GPR_U32(ctx, 0));
label_1e2544:
    // 0x1e2544: 0x268400c0  addiu       $a0, $s4, 0xC0
    ctx->pc = 0x1e2544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
label_1e2548:
    // 0x1e2548: 0xa280009a  sb          $zero, 0x9A($s4)
    ctx->pc = 0x1e2548u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 154), (uint8_t)GPR_U32(ctx, 0));
label_1e254c:
    // 0x1e254c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1e254cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1e2550:
    // 0x1e2550: 0xa280009b  sb          $zero, 0x9B($s4)
    ctx->pc = 0x1e2550u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 155), (uint8_t)GPR_U32(ctx, 0));
label_1e2554:
    // 0x1e2554: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1e2554u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1e2558:
    // 0x1e2558: 0xae8d009c  sw          $t5, 0x9C($s4)
    ctx->pc = 0x1e2558u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 156), GPR_U32(ctx, 13));
label_1e255c:
    // 0x1e255c: 0x24080384  addiu       $t0, $zero, 0x384
    ctx->pc = 0x1e255cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_1e2560:
    // 0x1e2560: 0xa2800088  sb          $zero, 0x88($s4)
    ctx->pc = 0x1e2560u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 136), (uint8_t)GPR_U32(ctx, 0));
label_1e2564:
    // 0x1e2564: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e2564u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e2568:
    // 0x1e2568: 0xa2800089  sb          $zero, 0x89($s4)
    ctx->pc = 0x1e2568u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 137), (uint8_t)GPR_U32(ctx, 0));
label_1e256c:
    // 0x1e256c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e256cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e2570:
    // 0x1e2570: 0xa280008a  sb          $zero, 0x8A($s4)
    ctx->pc = 0x1e2570u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 138), (uint8_t)GPR_U32(ctx, 0));
label_1e2574:
    // 0x1e2574: 0xa28c008b  sb          $t4, 0x8B($s4)
    ctx->pc = 0x1e2574u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 139), (uint8_t)GPR_U32(ctx, 12));
label_1e2578:
    // 0x1e2578: 0xae8d008c  sw          $t5, 0x8C($s4)
    ctx->pc = 0x1e2578u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 140), GPR_U32(ctx, 13));
label_1e257c:
    // 0x1e257c: 0xa28000a8  sb          $zero, 0xA8($s4)
    ctx->pc = 0x1e257cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 168), (uint8_t)GPR_U32(ctx, 0));
label_1e2580:
    // 0x1e2580: 0xa28000a9  sb          $zero, 0xA9($s4)
    ctx->pc = 0x1e2580u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 169), (uint8_t)GPR_U32(ctx, 0));
label_1e2584:
    // 0x1e2584: 0xa28000aa  sb          $zero, 0xAA($s4)
    ctx->pc = 0x1e2584u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 170), (uint8_t)GPR_U32(ctx, 0));
label_1e2588:
    // 0x1e2588: 0xa28c00ab  sb          $t4, 0xAB($s4)
    ctx->pc = 0x1e2588u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 171), (uint8_t)GPR_U32(ctx, 12));
label_1e258c:
    // 0x1e258c: 0xae8d00ac  sw          $t5, 0xAC($s4)
    ctx->pc = 0x1e258cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 172), GPR_U32(ctx, 13));
label_1e2590:
    // 0x1e2590: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x1e2590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
label_1e2594:
    // 0x1e2594: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1e2594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1e2598:
    // 0x1e2598: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1e2598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1e259c:
    // 0x1e259c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1e259cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1e25a0:
    // 0x1e25a0: 0xdc252958  ld          $a1, 0x2958($at)
    ctx->pc = 0x1e25a0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 10584)));
label_1e25a4:
    // 0x1e25a4: 0xc05de30  jal         func_1778C0
label_1e25a8:
    if (ctx->pc == 0x1E25A8u) {
        ctx->pc = 0x1E25A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E25A4u;
        // 0x1e25a8: 0x240b00b8  addiu       $t3, $zero, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E25ACu;
        goto label_1e25ac;
    }
    ctx->pc = 0x1E25A4u;
    SET_GPR_U32(ctx, 31, 0x1E25ACu);
    ctx->pc = 0x1E25A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E25A4u;
    // 0x1e25a8: 0x240b00b8  addiu       $t3, $zero, 0xB8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1E25A4u, 0x1E25ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E25ACu;
label_1e25ac:
    // 0x1e25ac: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1e25acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1e25b0:
    // 0x1e25b0: 0x2a630003  slti        $v1, $s3, 0x3
    ctx->pc = 0x1e25b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
label_1e25b4:
    // 0x1e25b4: 0x1460ffc4  bnez        $v1, . + 4 + (-0x3C << 2)
label_1e25b8:
    if (ctx->pc == 0x1E25B8u) {
        ctx->pc = 0x1E25B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E25B4u;
        // 0x1e25b8: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E25BCu;
        goto label_1e25bc;
    }
    ctx->pc = 0x1E25B4u;
    {
        const bool branch_taken_0x1e25b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E25B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E25B4u;
        // 0x1e25b8: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e25b4) {
            ctx->pc = 0x1E24C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1e24c8; return; }
        }
    }
    ctx->pc = 0x1E25BCu;
label_1e25bc:
    // 0x1e25bc: 0x0  nop
    ctx->pc = 0x1e25bcu;
    // NOP
label_1e25c0:
    // 0x1e25c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e25c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1e25c4:
    // 0x1e25c4: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x1e25c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_1e25c8:
    // 0x1e25c8: 0x1460ff77  bnez        $v1, . + 4 + (-0x89 << 2)
label_1e25cc:
    if (ctx->pc == 0x1E25CCu) {
        ctx->pc = 0x1E25CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E25C8u;
        // 0x1e25cc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E25D0u;
        goto label_1e25d0;
    }
    ctx->pc = 0x1E25C8u;
    {
        const bool branch_taken_0x1e25c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E25CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E25C8u;
        // 0x1e25cc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e25c8) {
            ctx->pc = 0x1E23A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1e23a8; return; }
        }
    }
    ctx->pc = 0x1E25D0u;
label_1e25d0:
    // 0x1e25d0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1e25d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1e25d4:
    // 0x1e25d4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1e25d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e25d8:
    // 0x1e25d8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1e25d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e25dc:
    // 0x1e25dc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1e25dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e25e0:
    // 0x1e25e0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1e25e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e25e4:
    // 0x1e25e4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e25e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e25e8:
    // 0x1e25e8: 0x3e00008  jr          $ra
label_1e25ec:
    if (ctx->pc == 0x1E25ECu) {
        ctx->pc = 0x1E25ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E25E8u;
        // 0x1e25ec: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E25F0u;
        goto label_1e25f0;
    }
    ctx->pc = 0x1E25E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E25ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E25E8u;
        // 0x1e25ec: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E25E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E25F0u;
label_1e25f0:
    // 0x1e25f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e25f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1e25f4:
    // 0x1e25f4: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x1e25f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1e25f8:
    // 0x1e25f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e25f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1e25fc:
    // 0x1e25fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e25fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e2600:
    // 0x1e2600: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e2600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e2604:
    // 0x1e2604: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e2604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e2608:
    // 0x1e2608: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e2608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e260c:
    // 0x1e260c: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x1e260cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_1e2610:
    // 0x1e2610: 0x1483015d  bne         $a0, $v1, . + 4 + (0x15D << 2)
label_1e2614:
    if (ctx->pc == 0x1E2614u) {
        ctx->pc = 0x1E2618u;
        goto label_1e2618;
    }
    ctx->pc = 0x1E2610u;
    {
        const bool branch_taken_0x1e2610 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e2610) {
            ctx->pc = 0x1E2B88u;
            goto label_1e2b88;
        }
    }
    ctx->pc = 0x1E2618u;
label_1e2618:
    // 0x1e2618: 0x8f848d3c  lw          $a0, -0x72C4($gp)
    ctx->pc = 0x1e2618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
label_1e261c:
    // 0x1e261c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1e261cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1e2620:
    // 0x1e2620: 0x108302ad  beq         $a0, $v1, . + 4 + (0x2AD << 2)
label_1e2624:
    if (ctx->pc == 0x1E2624u) {
        ctx->pc = 0x1E2628u;
        goto label_1e2628;
    }
    ctx->pc = 0x1E2620u;
    {
        const bool branch_taken_0x1e2620 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e2620) {
            ctx->pc = 0x1E30D8u;
            { ctx->pc = 0x1e30d8; return; }
        }
    }
    ctx->pc = 0x1E2628u;
label_1e2628:
    // 0x1e2628: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x1e2628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
label_1e262c:
    // 0x1e262c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1e262cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_1e2630:
    // 0x1e2630: 0x34843ffc  ori         $a0, $a0, 0x3FFC
    ctx->pc = 0x1e2630u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16380);
label_1e2634:
    // 0x1e2634: 0x24631e00  addiu       $v1, $v1, 0x1E00
    ctx->pc = 0x1e2634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7680));
label_1e2638:
    // 0x1e2638: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1e2638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e263c:
    // 0x1e263c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e263cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e2640:
    // 0x1e2640: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e2640u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e2644:
    // 0x1e2644: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e2644u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e2648:
    // 0x1e2648: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1e2648u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_1e264c:
    // 0x1e264c: 0x10000147  b           . + 4 + (0x147 << 2)
label_1e2650:
    if (ctx->pc == 0x1E2650u) {
        ctx->pc = 0x1E2650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E264Cu;
        // 0x1e2650: 0x648821  addu        $s1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2654u;
        goto label_1e2654;
    }
    ctx->pc = 0x1E264Cu;
    {
        const bool branch_taken_0x1e264c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E264Cu;
        // 0x1e2650: 0x648821  addu        $s1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e264c) {
            ctx->pc = 0x1E2B6Cu;
            goto label_1e2b6c;
        }
    }
    ctx->pc = 0x1E2654u;
label_1e2654:
    // 0x1e2654: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e2654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1e2658:
    // 0x1e2658: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1e2658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1e265c:
    // 0x1e265c: 0x8c243ffc  lw          $a0, 0x3FFC($at)
    ctx->pc = 0x1e265cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1e2660:
    // 0x1e2660: 0x244226b0  addiu       $v0, $v0, 0x26B0
    ctx->pc = 0x1e2660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9904));
label_1e2664:
    // 0x1e2664: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x1e2664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1e2668:
    // 0x1e2668: 0x8f868d3c  lw          $a2, -0x72C4($gp)
    ctx->pc = 0x1e2668u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
label_1e266c:
    // 0x1e266c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1e266cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1e2670:
    // 0x1e2670: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x1e2670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_1e2674:
    // 0x1e2674: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1e2674u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1e2678:
    // 0x1e2678: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1e2678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1e267c:
    // 0x1e267c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1e267cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1e2680:
    // 0x1e2680: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1e2680u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1e2684:
    // 0x1e2684: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e2684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e2688:
    // 0x1e2688: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1e2688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e268c:
    // 0x1e268c: 0x14c0000d  bnez        $a2, . + 4 + (0xD << 2)
label_1e2690:
    if (ctx->pc == 0x1E2690u) {
        ctx->pc = 0x1E2690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E268Cu;
        // 0x1e2690: 0x24420090  addiu       $v0, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2694u;
        goto label_1e2694;
    }
    ctx->pc = 0x1E268Cu;
    {
        const bool branch_taken_0x1e268c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E268Cu;
        // 0x1e2690: 0x24420090  addiu       $v0, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e268c) {
            ctx->pc = 0x1E26C4u;
            goto label_1e26c4;
        }
    }
    ctx->pc = 0x1E2694u;
label_1e2694:
    // 0x1e2694: 0x8f838d38  lw          $v1, -0x72C8($gp)
    ctx->pc = 0x1e2694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
label_1e2698:
    // 0x1e2698: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1e2698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1e269c:
    // 0x1e269c: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x1e269cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1e26a0:
    // 0x1e26a0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1e26a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1e26a4:
    // 0x1e26a4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1e26a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e26a8:
    // 0x1e26a8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1e26a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_1e26ac:
    // 0x1e26ac: 0x4610015  bgez        $v1, . + 4 + (0x15 << 2)
label_1e26b0:
    if (ctx->pc == 0x1E26B0u) {
        ctx->pc = 0x1E26B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E26ACu;
        // 0x1e26b0: 0x32103  sra         $a0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E26B4u;
        goto label_1e26b4;
    }
    ctx->pc = 0x1E26ACu;
    {
        const bool branch_taken_0x1e26ac = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E26B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E26ACu;
        // 0x1e26b0: 0x32103  sra         $a0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e26ac) {
            ctx->pc = 0x1E2704u;
            goto label_1e2704;
        }
    }
    ctx->pc = 0x1E26B4u;
label_1e26b4:
    // 0x1e26b4: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1e26b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_1e26b8:
    // 0x1e26b8: 0x32103  sra         $a0, $v1, 4
    ctx->pc = 0x1e26b8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 4));
label_1e26bc:
    // 0x1e26bc: 0x10000011  b           . + 4 + (0x11 << 2)
label_1e26c0:
    if (ctx->pc == 0x1E26C0u) {
        ctx->pc = 0x1E26C4u;
        goto label_1e26c4;
    }
    ctx->pc = 0x1E26BCu;
    {
        const bool branch_taken_0x1e26bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e26bc) {
            ctx->pc = 0x1E2704u;
            goto label_1e2704;
        }
    }
    ctx->pc = 0x1E26C4u;
label_1e26c4:
    // 0x1e26c4: 0x0  nop
    ctx->pc = 0x1e26c4u;
    // NOP
label_1e26c8:
    // 0x1e26c8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1e26c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e26cc:
    // 0x1e26cc: 0x14c3000b  bne         $a2, $v1, . + 4 + (0xB << 2)
label_1e26d0:
    if (ctx->pc == 0x1E26D0u) {
        ctx->pc = 0x1E26D4u;
        goto label_1e26d4;
    }
    ctx->pc = 0x1E26CCu;
    {
        const bool branch_taken_0x1e26cc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e26cc) {
            ctx->pc = 0x1E26FCu;
            goto label_1e26fc;
        }
    }
    ctx->pc = 0x1E26D4u;
label_1e26d4:
    // 0x1e26d4: 0x8f848d38  lw          $a0, -0x72C8($gp)
    ctx->pc = 0x1e26d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
label_1e26d8:
    // 0x1e26d8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1e26d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1e26dc:
    // 0x1e26dc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1e26dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1e26e0:
    // 0x1e26e0: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1e26e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_1e26e4:
    // 0x1e26e4: 0x4610007  bgez        $v1, . + 4 + (0x7 << 2)
label_1e26e8:
    if (ctx->pc == 0x1E26E8u) {
        ctx->pc = 0x1E26E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E26E4u;
        // 0x1e26e8: 0x320c3  sra         $a0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E26ECu;
        goto label_1e26ec;
    }
    ctx->pc = 0x1E26E4u;
    {
        const bool branch_taken_0x1e26e4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E26E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E26E4u;
        // 0x1e26e8: 0x320c3  sra         $a0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e26e4) {
            ctx->pc = 0x1E2704u;
            goto label_1e2704;
        }
    }
    ctx->pc = 0x1E26ECu;
label_1e26ec:
    // 0x1e26ec: 0x24630007  addiu       $v1, $v1, 0x7
    ctx->pc = 0x1e26ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
label_1e26f0:
    // 0x1e26f0: 0x320c3  sra         $a0, $v1, 3
    ctx->pc = 0x1e26f0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 3));
label_1e26f4:
    // 0x1e26f4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e26f8:
    if (ctx->pc == 0x1E26F8u) {
        ctx->pc = 0x1E26FCu;
        goto label_1e26fc;
    }
    ctx->pc = 0x1E26F4u;
    {
        const bool branch_taken_0x1e26f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e26f4) {
            ctx->pc = 0x1E2704u;
            goto label_1e2704;
        }
    }
    ctx->pc = 0x1E26FCu;
label_1e26fc:
    // 0x1e26fc: 0x0  nop
    ctx->pc = 0x1e26fcu;
    // NOP
label_1e2700:
    // 0x1e2700: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e2700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e2704:
    // 0x1e2704: 0x0  nop
    ctx->pc = 0x1e2704u;
    // NOP
label_1e2708:
    // 0x1e2708: 0x248300c0  addiu       $v1, $a0, 0xC0
    ctx->pc = 0x1e2708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
label_1e270c:
    // 0x1e270c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1e270cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1e2710:
    // 0x1e2710: 0x24070384  addiu       $a3, $zero, 0x384
    ctx->pc = 0x1e2710u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_1e2714:
    // 0x1e2714: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1e2714u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1e2718:
    // 0x1e2718: 0x24886c00  addiu       $t0, $a0, 0x6C00
    ctx->pc = 0x1e2718u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
label_1e271c:
    // 0x1e271c: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x1e271cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
label_1e2720:
    // 0x1e2720: 0xa4a80080  sh          $t0, 0x80($a1)
    ctx->pc = 0x1e2720u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 128), (uint16_t)GPR_U32(ctx, 8));
label_1e2724:
    // 0x1e2724: 0xa4a30082  sh          $v1, 0x82($a1)
    ctx->pc = 0x1e2724u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 130), (uint16_t)GPR_U32(ctx, 3));
label_1e2728:
    // 0x1e2728: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1e2728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_1e272c:
    // 0x1e272c: 0xaca70084  sw          $a3, 0x84($a1)
    ctx->pc = 0x1e272cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 7));
label_1e2730:
    // 0x1e2730: 0x34069400  ori         $a2, $zero, 0x9400
    ctx->pc = 0x1e2730u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37888);
label_1e2734:
    // 0x1e2734: 0xa4a60090  sh          $a2, 0x90($a1)
    ctx->pc = 0x1e2734u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 144), (uint16_t)GPR_U32(ctx, 6));
label_1e2738:
    // 0x1e2738: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1e2738u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1e273c:
    // 0x1e273c: 0xa4a30092  sh          $v1, 0x92($a1)
    ctx->pc = 0x1e273cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 146), (uint16_t)GPR_U32(ctx, 3));
label_1e2740:
    // 0x1e2740: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1e2740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_1e2744:
    // 0x1e2744: 0xaca70094  sw          $a3, 0x94($a1)
    ctx->pc = 0x1e2744u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 148), GPR_U32(ctx, 7));
label_1e2748:
    // 0x1e2748: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e2748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e274c:
    // 0x1e274c: 0xa4a800a0  sh          $t0, 0xA0($a1)
    ctx->pc = 0x1e274cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 160), (uint16_t)GPR_U32(ctx, 8));
label_1e2750:
    // 0x1e2750: 0xa4a200a2  sh          $v0, 0xA2($a1)
    ctx->pc = 0x1e2750u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 162), (uint16_t)GPR_U32(ctx, 2));
label_1e2754:
    // 0x1e2754: 0xaca700a4  sw          $a3, 0xA4($a1)
    ctx->pc = 0x1e2754u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 164), GPR_U32(ctx, 7));
label_1e2758:
    // 0x1e2758: 0xa4a600b0  sh          $a2, 0xB0($a1)
    ctx->pc = 0x1e2758u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 176), (uint16_t)GPR_U32(ctx, 6));
label_1e275c:
    // 0x1e275c: 0xa4a200b2  sh          $v0, 0xB2($a1)
    ctx->pc = 0x1e275cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 178), (uint16_t)GPR_U32(ctx, 2));
label_1e2760:
    // 0x1e2760: 0xaca700b4  sw          $a3, 0xB4($a1)
    ctx->pc = 0x1e2760u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 180), GPR_U32(ctx, 7));
label_1e2764:
    // 0x1e2764: 0x8f868d3c  lw          $a2, -0x72C4($gp)
    ctx->pc = 0x1e2764u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
label_1e2768:
    // 0x1e2768: 0x14c40036  bne         $a2, $a0, . + 4 + (0x36 << 2)
label_1e276c:
    if (ctx->pc == 0x1E276Cu) {
        ctx->pc = 0x1E2770u;
        goto label_1e2770;
    }
    ctx->pc = 0x1E2768u;
    {
        const bool branch_taken_0x1e2768 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x1e2768) {
            ctx->pc = 0x1E2844u;
            goto label_1e2844;
        }
    }
    ctx->pc = 0x1E2770u;
label_1e2770:
    // 0x1e2770: 0x8f848d34  lw          $a0, -0x72CC($gp)
    ctx->pc = 0x1e2770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
label_1e2774:
    // 0x1e2774: 0x14900033  bne         $a0, $s0, . + 4 + (0x33 << 2)
label_1e2778:
    if (ctx->pc == 0x1E2778u) {
        ctx->pc = 0x1E277Cu;
        goto label_1e277c;
    }
    ctx->pc = 0x1E2774u;
    {
        const bool branch_taken_0x1e2774 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        if (branch_taken_0x1e2774) {
            ctx->pc = 0x1E2844u;
            goto label_1e2844;
        }
    }
    ctx->pc = 0x1E277Cu;
label_1e277c:
    // 0x1e277c: 0x8f848d38  lw          $a0, -0x72C8($gp)
    ctx->pc = 0x1e277cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
label_1e2780:
    // 0x1e2780: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
label_1e2784:
    if (ctx->pc == 0x1E2784u) {
        ctx->pc = 0x1E2784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2780u;
        // 0x1e2784: 0x3088001f  andi        $t0, $a0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2788u;
        goto label_1e2788;
    }
    ctx->pc = 0x1E2780u;
    {
        const bool branch_taken_0x1e2780 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1E2784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2780u;
        // 0x1e2784: 0x3088001f  andi        $t0, $a0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2780) {
            ctx->pc = 0x1E2794u;
            goto label_1e2794;
        }
    }
    ctx->pc = 0x1E2788u;
label_1e2788:
    // 0x1e2788: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
label_1e278c:
    if (ctx->pc == 0x1E278Cu) {
        ctx->pc = 0x1E278Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2788u;
        // 0x1e278c: 0x29010010  slti        $at, $t0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2790u;
        goto label_1e2790;
    }
    ctx->pc = 0x1E2788u;
    {
        const bool branch_taken_0x1e2788 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E278Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2788u;
        // 0x1e278c: 0x29010010  slti        $at, $t0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2788) {
            ctx->pc = 0x1E2798u;
            goto label_1e2798;
        }
    }
    ctx->pc = 0x1E2790u;
label_1e2790:
    // 0x1e2790: 0x2508ffe0  addiu       $t0, $t0, -0x20
    ctx->pc = 0x1e2790u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967264));
label_1e2794:
    // 0x1e2794: 0x29010010  slti        $at, $t0, 0x10
    ctx->pc = 0x1e2794u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)16) ? 1 : 0);
label_1e2798:
    // 0x1e2798: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_1e279c:
    if (ctx->pc == 0x1E279Cu) {
        ctx->pc = 0x1E27A0u;
        goto label_1e27a0;
    }
    ctx->pc = 0x1E2798u;
    {
        const bool branch_taken_0x1e2798 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2798) {
            ctx->pc = 0x1E27ECu;
            goto label_1e27ec;
        }
    }
    ctx->pc = 0x1E27A0u;
label_1e27a0:
    // 0x1e27a0: 0x83180  sll         $a2, $t0, 6
    ctx->pc = 0x1e27a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
label_1e27a4:
    // 0x1e27a4: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_1e27a8:
    if (ctx->pc == 0x1E27A8u) {
        ctx->pc = 0x1E27A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E27A4u;
        // 0x1e27a8: 0x62103  sra         $a0, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E27ACu;
        goto label_1e27ac;
    }
    ctx->pc = 0x1E27A4u;
    {
        const bool branch_taken_0x1e27a4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1E27A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E27A4u;
        // 0x1e27a8: 0x62103  sra         $a0, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e27a4) {
            ctx->pc = 0x1E27B4u;
            goto label_1e27b4;
        }
    }
    ctx->pc = 0x1E27ACu;
label_1e27ac:
    // 0x1e27ac: 0x24c4000f  addiu       $a0, $a2, 0xF
    ctx->pc = 0x1e27acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
label_1e27b0:
    // 0x1e27b0: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x1e27b0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
label_1e27b4:
    // 0x1e27b4: 0x24870040  addiu       $a3, $a0, 0x40
    ctx->pc = 0x1e27b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_1e27b8:
    // 0x1e27b8: 0x830c0  sll         $a2, $t0, 3
    ctx->pc = 0x1e27b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_1e27bc:
    // 0x1e27bc: 0xa0a700a8  sb          $a3, 0xA8($a1)
    ctx->pc = 0x1e27bcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 168), (uint8_t)GPR_U32(ctx, 7));
label_1e27c0:
    // 0x1e27c0: 0x62103  sra         $a0, $a2, 4
    ctx->pc = 0x1e27c0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 4));
label_1e27c4:
    // 0x1e27c4: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_1e27c8:
    if (ctx->pc == 0x1E27C8u) {
        ctx->pc = 0x1E27C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E27C4u;
        // 0x1e27c8: 0xa0a70088  sb          $a3, 0x88($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 136), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E27CCu;
        goto label_1e27cc;
    }
    ctx->pc = 0x1E27C4u;
    {
        const bool branch_taken_0x1e27c4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1E27C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E27C4u;
        // 0x1e27c8: 0xa0a70088  sb          $a3, 0x88($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 136), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e27c4) {
            ctx->pc = 0x1E27D4u;
            goto label_1e27d4;
        }
    }
    ctx->pc = 0x1E27CCu;
label_1e27cc:
    // 0x1e27cc: 0x24c4000f  addiu       $a0, $a2, 0xF
    ctx->pc = 0x1e27ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
label_1e27d0:
    // 0x1e27d0: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x1e27d0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
label_1e27d4:
    // 0x1e27d4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1e27d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1e27d8:
    // 0x1e27d8: 0xa0a400a9  sb          $a0, 0xA9($a1)
    ctx->pc = 0x1e27d8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 169), (uint8_t)GPR_U32(ctx, 4));
label_1e27dc:
    // 0x1e27dc: 0xa0a40089  sb          $a0, 0x89($a1)
    ctx->pc = 0x1e27dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 137), (uint8_t)GPR_U32(ctx, 4));
label_1e27e0:
    // 0x1e27e0: 0xa0a400aa  sb          $a0, 0xAA($a1)
    ctx->pc = 0x1e27e0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 170), (uint8_t)GPR_U32(ctx, 4));
label_1e27e4:
    // 0x1e27e4: 0x10000068  b           . + 4 + (0x68 << 2)
label_1e27e8:
    if (ctx->pc == 0x1E27E8u) {
        ctx->pc = 0x1E27E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E27E4u;
        // 0x1e27e8: 0xa0a4008a  sb          $a0, 0x8A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 138), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E27ECu;
        goto label_1e27ec;
    }
    ctx->pc = 0x1E27E4u;
    {
        const bool branch_taken_0x1e27e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E27E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E27E4u;
        // 0x1e27e8: 0xa0a4008a  sb          $a0, 0x8A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 138), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e27e4) {
            ctx->pc = 0x1E2988u;
            goto label_1e2988;
        }
    }
    ctx->pc = 0x1E27ECu;
label_1e27ec:
    // 0x1e27ec: 0x0  nop
    ctx->pc = 0x1e27ecu;
    // NOP
label_1e27f0:
    // 0x1e27f0: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1e27f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1e27f4:
    // 0x1e27f4: 0x884023  subu        $t0, $a0, $t0
    ctx->pc = 0x1e27f4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_1e27f8:
    // 0x1e27f8: 0x83180  sll         $a2, $t0, 6
    ctx->pc = 0x1e27f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
label_1e27fc:
    // 0x1e27fc: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_1e2800:
    if (ctx->pc == 0x1E2800u) {
        ctx->pc = 0x1E2800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E27FCu;
        // 0x1e2800: 0x62103  sra         $a0, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2804u;
        goto label_1e2804;
    }
    ctx->pc = 0x1E27FCu;
    {
        const bool branch_taken_0x1e27fc = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1E2800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E27FCu;
        // 0x1e2800: 0x62103  sra         $a0, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e27fc) {
            ctx->pc = 0x1E280Cu;
            goto label_1e280c;
        }
    }
    ctx->pc = 0x1E2804u;
label_1e2804:
    // 0x1e2804: 0x24c4000f  addiu       $a0, $a2, 0xF
    ctx->pc = 0x1e2804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
label_1e2808:
    // 0x1e2808: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x1e2808u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
label_1e280c:
    // 0x1e280c: 0x24870040  addiu       $a3, $a0, 0x40
    ctx->pc = 0x1e280cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_1e2810:
    // 0x1e2810: 0x830c0  sll         $a2, $t0, 3
    ctx->pc = 0x1e2810u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_1e2814:
    // 0x1e2814: 0xa0a700a8  sb          $a3, 0xA8($a1)
    ctx->pc = 0x1e2814u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 168), (uint8_t)GPR_U32(ctx, 7));
label_1e2818:
    // 0x1e2818: 0x62103  sra         $a0, $a2, 4
    ctx->pc = 0x1e2818u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 4));
label_1e281c:
    // 0x1e281c: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_1e2820:
    if (ctx->pc == 0x1E2820u) {
        ctx->pc = 0x1E2820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E281Cu;
        // 0x1e2820: 0xa0a70088  sb          $a3, 0x88($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 136), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2824u;
        goto label_1e2824;
    }
    ctx->pc = 0x1E281Cu;
    {
        const bool branch_taken_0x1e281c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1E2820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E281Cu;
        // 0x1e2820: 0xa0a70088  sb          $a3, 0x88($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 136), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e281c) {
            ctx->pc = 0x1E282Cu;
            goto label_1e282c;
        }
    }
    ctx->pc = 0x1E2824u;
label_1e2824:
    // 0x1e2824: 0x24c4000f  addiu       $a0, $a2, 0xF
    ctx->pc = 0x1e2824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
label_1e2828:
    // 0x1e2828: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x1e2828u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
label_1e282c:
    // 0x1e282c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1e282cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1e2830:
    // 0x1e2830: 0xa0a400a9  sb          $a0, 0xA9($a1)
    ctx->pc = 0x1e2830u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 169), (uint8_t)GPR_U32(ctx, 4));
label_1e2834:
    // 0x1e2834: 0xa0a40089  sb          $a0, 0x89($a1)
    ctx->pc = 0x1e2834u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 137), (uint8_t)GPR_U32(ctx, 4));
label_1e2838:
    // 0x1e2838: 0xa0a400aa  sb          $a0, 0xAA($a1)
    ctx->pc = 0x1e2838u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 170), (uint8_t)GPR_U32(ctx, 4));
label_1e283c:
    // 0x1e283c: 0x10000052  b           . + 4 + (0x52 << 2)
label_1e2840:
    if (ctx->pc == 0x1E2840u) {
        ctx->pc = 0x1E2840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E283Cu;
        // 0x1e2840: 0xa0a4008a  sb          $a0, 0x8A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 138), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2844u;
        goto label_1e2844;
    }
    ctx->pc = 0x1E283Cu;
    {
        const bool branch_taken_0x1e283c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E283Cu;
        // 0x1e2840: 0xa0a4008a  sb          $a0, 0x8A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 138), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e283c) {
            ctx->pc = 0x1E2988u;
            goto label_1e2988;
        }
    }
    ctx->pc = 0x1E2844u;
label_1e2844:
    // 0x1e2844: 0x0  nop
    ctx->pc = 0x1e2844u;
    // NOP
label_1e2848:
    // 0x1e2848: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1e2848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e284c:
    // 0x1e284c: 0x14c40048  bne         $a2, $a0, . + 4 + (0x48 << 2)
label_1e2850:
    if (ctx->pc == 0x1E2850u) {
        ctx->pc = 0x1E2854u;
        goto label_1e2854;
    }
    ctx->pc = 0x1E284Cu;
    {
        const bool branch_taken_0x1e284c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x1e284c) {
            ctx->pc = 0x1E2970u;
            goto label_1e2970;
        }
    }
    ctx->pc = 0x1E2854u;
label_1e2854:
    // 0x1e2854: 0x8f848d34  lw          $a0, -0x72CC($gp)
    ctx->pc = 0x1e2854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
label_1e2858:
    // 0x1e2858: 0x14900045  bne         $a0, $s0, . + 4 + (0x45 << 2)
label_1e285c:
    if (ctx->pc == 0x1E285Cu) {
        ctx->pc = 0x1E2860u;
        goto label_1e2860;
    }
    ctx->pc = 0x1E2858u;
    {
        const bool branch_taken_0x1e2858 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        if (branch_taken_0x1e2858) {
            ctx->pc = 0x1E2970u;
            goto label_1e2970;
        }
    }
    ctx->pc = 0x1E2860u;
label_1e2860:
    // 0x1e2860: 0x8f848d38  lw          $a0, -0x72C8($gp)
    ctx->pc = 0x1e2860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
label_1e2864:
    // 0x1e2864: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
label_1e2868:
    if (ctx->pc == 0x1E2868u) {
        ctx->pc = 0x1E2868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2864u;
        // 0x1e2868: 0x3088000f  andi        $t0, $a0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E286Cu;
        goto label_1e286c;
    }
    ctx->pc = 0x1E2864u;
    {
        const bool branch_taken_0x1e2864 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1E2868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2864u;
        // 0x1e2868: 0x3088000f  andi        $t0, $a0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2864) {
            ctx->pc = 0x1E2878u;
            goto label_1e2878;
        }
    }
    ctx->pc = 0x1E286Cu;
label_1e286c:
    // 0x1e286c: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
label_1e2870:
    if (ctx->pc == 0x1E2870u) {
        ctx->pc = 0x1E2870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E286Cu;
        // 0x1e2870: 0x29010008  slti        $at, $t0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2874u;
        goto label_1e2874;
    }
    ctx->pc = 0x1E286Cu;
    {
        const bool branch_taken_0x1e286c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E286Cu;
        // 0x1e2870: 0x29010008  slti        $at, $t0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e286c) {
            ctx->pc = 0x1E287Cu;
            goto label_1e287c;
        }
    }
    ctx->pc = 0x1E2874u;
label_1e2874:
    // 0x1e2874: 0x2508fff0  addiu       $t0, $t0, -0x10
    ctx->pc = 0x1e2874u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967280));
label_1e2878:
    // 0x1e2878: 0x29010008  slti        $at, $t0, 0x8
    ctx->pc = 0x1e2878u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)8) ? 1 : 0);
label_1e287c:
    // 0x1e287c: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
label_1e2880:
    if (ctx->pc == 0x1E2880u) {
        ctx->pc = 0x1E2884u;
        goto label_1e2884;
    }
    ctx->pc = 0x1E287Cu;
    {
        const bool branch_taken_0x1e287c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e287c) {
            ctx->pc = 0x1E28F4u;
            goto label_1e28f4;
        }
    }
    ctx->pc = 0x1E2884u;
label_1e2884:
    // 0x1e2884: 0x821c0  sll         $a0, $t0, 7
    ctx->pc = 0x1e2884u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 7));
label_1e2888:
    // 0x1e2888: 0x883023  subu        $a2, $a0, $t0
    ctx->pc = 0x1e2888u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_1e288c:
    // 0x1e288c: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_1e2890:
    if (ctx->pc == 0x1E2890u) {
        ctx->pc = 0x1E2890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E288Cu;
        // 0x1e2890: 0x620c3  sra         $a0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2894u;
        goto label_1e2894;
    }
    ctx->pc = 0x1E288Cu;
    {
        const bool branch_taken_0x1e288c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1E2890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E288Cu;
        // 0x1e2890: 0x620c3  sra         $a0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e288c) {
            ctx->pc = 0x1E289Cu;
            goto label_1e289c;
        }
    }
    ctx->pc = 0x1E2894u;
label_1e2894:
    // 0x1e2894: 0x24c40007  addiu       $a0, $a2, 0x7
    ctx->pc = 0x1e2894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
label_1e2898:
    // 0x1e2898: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x1e2898u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
label_1e289c:
    // 0x1e289c: 0x24860080  addiu       $a2, $a0, 0x80
    ctx->pc = 0x1e289cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_1e28a0:
    // 0x1e28a0: 0x820c0  sll         $a0, $t0, 3
    ctx->pc = 0x1e28a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_1e28a4:
    // 0x1e28a4: 0xa0a600a8  sb          $a2, 0xA8($a1)
    ctx->pc = 0x1e28a4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 168), (uint8_t)GPR_U32(ctx, 6));
label_1e28a8:
    // 0x1e28a8: 0x882023  subu        $a0, $a0, $t0
    ctx->pc = 0x1e28a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_1e28ac:
    // 0x1e28ac: 0xa0a60088  sb          $a2, 0x88($a1)
    ctx->pc = 0x1e28acu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 136), (uint8_t)GPR_U32(ctx, 6));
label_1e28b0:
    // 0x1e28b0: 0x43140  sll         $a2, $a0, 5
    ctx->pc = 0x1e28b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_1e28b4:
    // 0x1e28b4: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_1e28b8:
    if (ctx->pc == 0x1E28B8u) {
        ctx->pc = 0x1E28B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E28B4u;
        // 0x1e28b8: 0x620c3  sra         $a0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E28BCu;
        goto label_1e28bc;
    }
    ctx->pc = 0x1E28B4u;
    {
        const bool branch_taken_0x1e28b4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1E28B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E28B4u;
        // 0x1e28b8: 0x620c3  sra         $a0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e28b4) {
            ctx->pc = 0x1E28C4u;
            goto label_1e28c4;
        }
    }
    ctx->pc = 0x1E28BCu;
label_1e28bc:
    // 0x1e28bc: 0x24c40007  addiu       $a0, $a2, 0x7
    ctx->pc = 0x1e28bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
label_1e28c0:
    // 0x1e28c0: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x1e28c0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
label_1e28c4:
    // 0x1e28c4: 0x24870010  addiu       $a3, $a0, 0x10
    ctx->pc = 0x1e28c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_1e28c8:
    // 0x1e28c8: 0x83180  sll         $a2, $t0, 6
    ctx->pc = 0x1e28c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
label_1e28cc:
    // 0x1e28cc: 0xa0a700a9  sb          $a3, 0xA9($a1)
    ctx->pc = 0x1e28ccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 169), (uint8_t)GPR_U32(ctx, 7));
label_1e28d0:
    // 0x1e28d0: 0x620c3  sra         $a0, $a2, 3
    ctx->pc = 0x1e28d0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 3));
label_1e28d4:
    // 0x1e28d4: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_1e28d8:
    if (ctx->pc == 0x1E28D8u) {
        ctx->pc = 0x1E28D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E28D4u;
        // 0x1e28d8: 0xa0a70089  sb          $a3, 0x89($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 137), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E28DCu;
        goto label_1e28dc;
    }
    ctx->pc = 0x1E28D4u;
    {
        const bool branch_taken_0x1e28d4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1E28D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E28D4u;
        // 0x1e28d8: 0xa0a70089  sb          $a3, 0x89($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 137), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e28d4) {
            ctx->pc = 0x1E28E4u;
            goto label_1e28e4;
        }
    }
    ctx->pc = 0x1E28DCu;
label_1e28dc:
    // 0x1e28dc: 0x24c40007  addiu       $a0, $a2, 0x7
    ctx->pc = 0x1e28dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
label_1e28e0:
    // 0x1e28e0: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x1e28e0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
label_1e28e4:
    // 0x1e28e4: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1e28e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_1e28e8:
    // 0x1e28e8: 0xa0a400aa  sb          $a0, 0xAA($a1)
    ctx->pc = 0x1e28e8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 170), (uint8_t)GPR_U32(ctx, 4));
label_1e28ec:
    // 0x1e28ec: 0x10000026  b           . + 4 + (0x26 << 2)
label_1e28f0:
    if (ctx->pc == 0x1E28F0u) {
        ctx->pc = 0x1E28F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E28ECu;
        // 0x1e28f0: 0xa0a4008a  sb          $a0, 0x8A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 138), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E28F4u;
        goto label_1e28f4;
    }
    ctx->pc = 0x1E28ECu;
    {
        const bool branch_taken_0x1e28ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E28F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E28ECu;
        // 0x1e28f0: 0xa0a4008a  sb          $a0, 0x8A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 138), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e28ec) {
            ctx->pc = 0x1E2988u;
            goto label_1e2988;
        }
    }
    ctx->pc = 0x1E28F4u;
label_1e28f4:
    // 0x1e28f4: 0x0  nop
    ctx->pc = 0x1e28f4u;
    // NOP
label_1e28f8:
    // 0x1e28f8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1e28f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1e28fc:
    // 0x1e28fc: 0x884023  subu        $t0, $a0, $t0
    ctx->pc = 0x1e28fcu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_1e2900:
    // 0x1e2900: 0x821c0  sll         $a0, $t0, 7
    ctx->pc = 0x1e2900u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 7));
label_1e2904:
    // 0x1e2904: 0x883023  subu        $a2, $a0, $t0
    ctx->pc = 0x1e2904u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_1e2908:
    // 0x1e2908: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_1e290c:
    if (ctx->pc == 0x1E290Cu) {
        ctx->pc = 0x1E290Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2908u;
        // 0x1e290c: 0x620c3  sra         $a0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2910u;
        goto label_1e2910;
    }
    ctx->pc = 0x1E2908u;
    {
        const bool branch_taken_0x1e2908 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1E290Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2908u;
        // 0x1e290c: 0x620c3  sra         $a0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2908) {
            ctx->pc = 0x1E2918u;
            goto label_1e2918;
        }
    }
    ctx->pc = 0x1E2910u;
label_1e2910:
    // 0x1e2910: 0x24c40007  addiu       $a0, $a2, 0x7
    ctx->pc = 0x1e2910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
label_1e2914:
    // 0x1e2914: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x1e2914u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
label_1e2918:
    // 0x1e2918: 0x24860080  addiu       $a2, $a0, 0x80
    ctx->pc = 0x1e2918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_1e291c:
    // 0x1e291c: 0x820c0  sll         $a0, $t0, 3
    ctx->pc = 0x1e291cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_1e2920:
    // 0x1e2920: 0xa0a600a8  sb          $a2, 0xA8($a1)
    ctx->pc = 0x1e2920u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 168), (uint8_t)GPR_U32(ctx, 6));
label_1e2924:
    // 0x1e2924: 0x882023  subu        $a0, $a0, $t0
    ctx->pc = 0x1e2924u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_1e2928:
    // 0x1e2928: 0xa0a60088  sb          $a2, 0x88($a1)
    ctx->pc = 0x1e2928u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 136), (uint8_t)GPR_U32(ctx, 6));
label_1e292c:
    // 0x1e292c: 0x43140  sll         $a2, $a0, 5
    ctx->pc = 0x1e292cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_1e2930:
    // 0x1e2930: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_1e2934:
    if (ctx->pc == 0x1E2934u) {
        ctx->pc = 0x1E2934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2930u;
        // 0x1e2934: 0x620c3  sra         $a0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2938u;
        goto label_1e2938;
    }
    ctx->pc = 0x1E2930u;
    {
        const bool branch_taken_0x1e2930 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1E2934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2930u;
        // 0x1e2934: 0x620c3  sra         $a0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2930) {
            ctx->pc = 0x1E2940u;
            goto label_1e2940;
        }
    }
    ctx->pc = 0x1E2938u;
label_1e2938:
    // 0x1e2938: 0x24c40007  addiu       $a0, $a2, 0x7
    ctx->pc = 0x1e2938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
label_1e293c:
    // 0x1e293c: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x1e293cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
label_1e2940:
    // 0x1e2940: 0x24870010  addiu       $a3, $a0, 0x10
    ctx->pc = 0x1e2940u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_1e2944:
    // 0x1e2944: 0x83180  sll         $a2, $t0, 6
    ctx->pc = 0x1e2944u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
label_1e2948:
    // 0x1e2948: 0xa0a700a9  sb          $a3, 0xA9($a1)
    ctx->pc = 0x1e2948u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 169), (uint8_t)GPR_U32(ctx, 7));
label_1e294c:
    // 0x1e294c: 0x620c3  sra         $a0, $a2, 3
    ctx->pc = 0x1e294cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 3));
label_1e2950:
    // 0x1e2950: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_1e2954:
    if (ctx->pc == 0x1E2954u) {
        ctx->pc = 0x1E2954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2950u;
        // 0x1e2954: 0xa0a70089  sb          $a3, 0x89($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 137), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2958u;
        goto label_1e2958;
    }
    ctx->pc = 0x1E2950u;
    {
        const bool branch_taken_0x1e2950 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1E2954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2950u;
        // 0x1e2954: 0xa0a70089  sb          $a3, 0x89($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 137), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2950) {
            ctx->pc = 0x1E2960u;
            goto label_1e2960;
        }
    }
    ctx->pc = 0x1E2958u;
label_1e2958:
    // 0x1e2958: 0x24c40007  addiu       $a0, $a2, 0x7
    ctx->pc = 0x1e2958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
label_1e295c:
    // 0x1e295c: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x1e295cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
label_1e2960:
    // 0x1e2960: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1e2960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_1e2964:
    // 0x1e2964: 0xa0a400aa  sb          $a0, 0xAA($a1)
    ctx->pc = 0x1e2964u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 170), (uint8_t)GPR_U32(ctx, 4));
label_1e2968:
    // 0x1e2968: 0x10000007  b           . + 4 + (0x7 << 2)
label_1e296c:
    if (ctx->pc == 0x1E296Cu) {
        ctx->pc = 0x1E296Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2968u;
        // 0x1e296c: 0xa0a4008a  sb          $a0, 0x8A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 138), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2970u;
        goto label_1e2970;
    }
    ctx->pc = 0x1E2968u;
    {
        const bool branch_taken_0x1e2968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E296Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2968u;
        // 0x1e296c: 0xa0a4008a  sb          $a0, 0x8A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 138), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2968) {
            ctx->pc = 0x1E2988u;
            goto label_1e2988;
        }
    }
    ctx->pc = 0x1E2970u;
label_1e2970:
    // 0x1e2970: 0xa0a000a8  sb          $zero, 0xA8($a1)
    ctx->pc = 0x1e2970u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 168), (uint8_t)GPR_U32(ctx, 0));
label_1e2974:
    // 0x1e2974: 0xa0a00088  sb          $zero, 0x88($a1)
    ctx->pc = 0x1e2974u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 136), (uint8_t)GPR_U32(ctx, 0));
label_1e2978:
    // 0x1e2978: 0xa0a000a9  sb          $zero, 0xA9($a1)
    ctx->pc = 0x1e2978u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 169), (uint8_t)GPR_U32(ctx, 0));
label_1e297c:
    // 0x1e297c: 0xa0a00089  sb          $zero, 0x89($a1)
    ctx->pc = 0x1e297cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 137), (uint8_t)GPR_U32(ctx, 0));
label_1e2980:
    // 0x1e2980: 0xa0a000aa  sb          $zero, 0xAA($a1)
    ctx->pc = 0x1e2980u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 170), (uint8_t)GPR_U32(ctx, 0));
label_1e2984:
    // 0x1e2984: 0xa0a0008a  sb          $zero, 0x8A($a1)
    ctx->pc = 0x1e2984u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 138), (uint8_t)GPR_U32(ctx, 0));
label_1e2988:
    // 0x1e2988: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x1e2988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
label_1e298c:
    // 0x1e298c: 0x248426a0  addiu       $a0, $a0, 0x26A0
    ctx->pc = 0x1e298cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9888));
label_1e2990:
    // 0x1e2990: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x1e2990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_1e2994:
    // 0x1e2994: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1e2994u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e2998:
    // 0x1e2998: 0x28c40015  slti        $a0, $a2, 0x15
    ctx->pc = 0x1e2998u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)21) ? 1 : 0);
label_1e299c:
    // 0x1e299c: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
label_1e29a0:
    if (ctx->pc == 0x1E29A0u) {
        ctx->pc = 0x1E29A4u;
        goto label_1e29a4;
    }
    ctx->pc = 0x1E299Cu;
    {
        const bool branch_taken_0x1e299c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e299c) {
            ctx->pc = 0x1E29A8u;
            goto label_1e29a8;
        }
    }
    ctx->pc = 0x1E29A4u;
label_1e29a4:
    // 0x1e29a4: 0x24c6fffd  addiu       $a2, $a2, -0x3
    ctx->pc = 0x1e29a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967293));
label_1e29a8:
    // 0x1e29a8: 0x64140  sll         $t0, $a2, 5
    ctx->pc = 0x1e29a8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_1e29ac:
    // 0x1e29ac: 0x62240  sll         $a0, $a2, 9
    ctx->pc = 0x1e29acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 9));
label_1e29b0:
    // 0x1e29b0: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1e29b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1e29b4:
    // 0x1e29b4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1e29b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1e29b8:
    // 0x1e29b8: 0xa4a60138  sh          $a2, 0x138($a1)
    ctx->pc = 0x1e29b8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 312), (uint16_t)GPR_U32(ctx, 6));
label_1e29bc:
    // 0x1e29bc: 0x83e38  dsll        $a3, $t0, 24
    ctx->pc = 0x1e29bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << 24);
label_1e29c0:
    // 0x1e29c0: 0xa4a4013a  sh          $a0, 0x13A($a1)
    ctx->pc = 0x1e29c0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 314), (uint16_t)GPR_U32(ctx, 4));
label_1e29c4:
    // 0x1e29c4: 0x24060b88  addiu       $a2, $zero, 0xB88
    ctx->pc = 0x1e29c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2952));
label_1e29c8:
    // 0x1e29c8: 0x25040020  addiu       $a0, $t0, 0x20
    ctx->pc = 0x1e29c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
label_1e29cc:
    // 0x1e29cc: 0xa4a60148  sh          $a2, 0x148($a1)
    ctx->pc = 0x1e29ccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 328), (uint16_t)GPR_U32(ctx, 6));
label_1e29d0:
    // 0x1e29d0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1e29d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1e29d4:
    // 0x1e29d4: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x1e29d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
label_1e29d8:
    // 0x1e29d8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1e29d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1e29dc:
    // 0x1e29dc: 0x34c6c00a  ori         $a2, $a2, 0xC00A
    ctx->pc = 0x1e29dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)49162);
label_1e29e0:
    // 0x1e29e0: 0xa4a4014a  sh          $a0, 0x14A($a1)
    ctx->pc = 0x1e29e0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 330), (uint16_t)GPR_U32(ctx, 4));
label_1e29e4:
    // 0x1e29e4: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x1e29e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
label_1e29e8:
    // 0x1e29e8: 0x2504001f  addiu       $a0, $t0, 0x1F
    ctx->pc = 0x1e29e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 31));
label_1e29ec:
    // 0x1e29ec: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1e29ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1e29f0:
    // 0x1e29f0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1e29f0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_1e29f4:
    // 0x1e29f4: 0x420bc  dsll32      $a0, $a0, 2
    ctx->pc = 0x1e29f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 2));
label_1e29f8:
    // 0x1e29f8: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x1e29f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
label_1e29fc:
    // 0x1e29fc: 0xfca40100  sd          $a0, 0x100($a1)
    ctx->pc = 0x1e29fcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 256), GPR_U64(ctx, 4));
label_1e2a00:
    // 0x1e2a00: 0x8f848d3c  lw          $a0, -0x72C4($gp)
    ctx->pc = 0x1e2a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
label_1e2a04:
    // 0x1e2a04: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
label_1e2a08:
    if (ctx->pc == 0x1E2A08u) {
        ctx->pc = 0x1E2A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A04u;
        // 0x1e2a08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2A0Cu;
        goto label_1e2a0c;
    }
    ctx->pc = 0x1E2A04u;
    {
        const bool branch_taken_0x1e2a04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A04u;
        // 0x1e2a08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2a04) {
            ctx->pc = 0x1E2A38u;
            goto label_1e2a38;
        }
    }
    ctx->pc = 0x1E2A0Cu;
label_1e2a0c:
    // 0x1e2a0c: 0x8f868d38  lw          $a2, -0x72C8($gp)
    ctx->pc = 0x1e2a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
label_1e2a10:
    // 0x1e2a10: 0x24040268  addiu       $a0, $zero, 0x268
    ctx->pc = 0x1e2a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 616));
label_1e2a14:
    // 0x1e2a14: 0xc42018  mult        $a0, $a2, $a0
    ctx->pc = 0x1e2a14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1e2a18:
    // 0x1e2a18: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_1e2a1c:
    if (ctx->pc == 0x1E2A1Cu) {
        ctx->pc = 0x1E2A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A18u;
        // 0x1e2a1c: 0x43103  sra         $a2, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2A20u;
        goto label_1e2a20;
    }
    ctx->pc = 0x1E2A18u;
    {
        const bool branch_taken_0x1e2a18 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1E2A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A18u;
        // 0x1e2a1c: 0x43103  sra         $a2, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2a18) {
            ctx->pc = 0x1E2A28u;
            goto label_1e2a28;
        }
    }
    ctx->pc = 0x1E2A20u;
label_1e2a20:
    // 0x1e2a20: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x1e2a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
label_1e2a24:
    // 0x1e2a24: 0x43103  sra         $a2, $a0, 4
    ctx->pc = 0x1e2a24u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 4));
label_1e2a28:
    // 0x1e2a28: 0x240402d0  addiu       $a0, $zero, 0x2D0
    ctx->pc = 0x1e2a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
label_1e2a2c:
    // 0x1e2a2c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e2a30:
    if (ctx->pc == 0x1E2A30u) {
        ctx->pc = 0x1E2A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A2Cu;
        // 0x1e2a30: 0x863823  subu        $a3, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2A34u;
        goto label_1e2a34;
    }
    ctx->pc = 0x1E2A2Cu;
    {
        const bool branch_taken_0x1e2a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A2Cu;
        // 0x1e2a30: 0x863823  subu        $a3, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2a2c) {
            ctx->pc = 0x1E2A38u;
            goto label_1e2a38;
        }
    }
    ctx->pc = 0x1E2A34u;
label_1e2a34:
    // 0x1e2a34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e2a34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e2a38:
    // 0x1e2a38: 0x240401b0  addiu       $a0, $zero, 0x1B0
    ctx->pc = 0x1e2a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 432));
label_1e2a3c:
    // 0x1e2a3c: 0x24060384  addiu       $a2, $zero, 0x384
    ctx->pc = 0x1e2a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_1e2a40:
    // 0x1e2a40: 0x872023  subu        $a0, $a0, $a3
    ctx->pc = 0x1e2a40u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1e2a44:
    // 0x1e2a44: 0x43900  sll         $a3, $a0, 4
    ctx->pc = 0x1e2a44u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1e2a48:
    // 0x1e2a48: 0x24e76c00  addiu       $a3, $a3, 0x6C00
    ctx->pc = 0x1e2a48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 27648));
label_1e2a4c:
    // 0x1e2a4c: 0x248400b8  addiu       $a0, $a0, 0xB8
    ctx->pc = 0x1e2a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 184));
label_1e2a50:
    // 0x1e2a50: 0xa4a70140  sh          $a3, 0x140($a1)
    ctx->pc = 0x1e2a50u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 320), (uint16_t)GPR_U32(ctx, 7));
label_1e2a54:
    // 0x1e2a54: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1e2a54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1e2a58:
    // 0x1e2a58: 0xa4a30142  sh          $v1, 0x142($a1)
    ctx->pc = 0x1e2a58u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 322), (uint16_t)GPR_U32(ctx, 3));
label_1e2a5c:
    // 0x1e2a5c: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x1e2a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
label_1e2a60:
    // 0x1e2a60: 0xaca60144  sw          $a2, 0x144($a1)
    ctx->pc = 0x1e2a60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 324), GPR_U32(ctx, 6));
label_1e2a64:
    // 0x1e2a64: 0xa4a40150  sh          $a0, 0x150($a1)
    ctx->pc = 0x1e2a64u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 336), (uint16_t)GPR_U32(ctx, 4));
label_1e2a68:
    // 0x1e2a68: 0xa4a20152  sh          $v0, 0x152($a1)
    ctx->pc = 0x1e2a68u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 338), (uint16_t)GPR_U32(ctx, 2));
label_1e2a6c:
    // 0x1e2a6c: 0xaca60154  sw          $a2, 0x154($a1)
    ctx->pc = 0x1e2a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 340), GPR_U32(ctx, 6));
label_1e2a70:
    // 0x1e2a70: 0x8f868d3c  lw          $a2, -0x72C4($gp)
    ctx->pc = 0x1e2a70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
label_1e2a74:
    // 0x1e2a74: 0x14c00009  bnez        $a2, . + 4 + (0x9 << 2)
label_1e2a78:
    if (ctx->pc == 0x1E2A78u) {
        ctx->pc = 0x1E2A7Cu;
        goto label_1e2a7c;
    }
    ctx->pc = 0x1E2A74u;
    {
        const bool branch_taken_0x1e2a74 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2a74) {
            ctx->pc = 0x1E2A9Cu;
            goto label_1e2a9c;
        }
    }
    ctx->pc = 0x1E2A7Cu;
label_1e2a7c:
    // 0x1e2a7c: 0x8f828d38  lw          $v0, -0x72C8($gp)
    ctx->pc = 0x1e2a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
label_1e2a80:
    // 0x1e2a80: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1e2a80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1e2a84:
    // 0x1e2a84: 0x4410013  bgez        $v0, . + 4 + (0x13 << 2)
label_1e2a88:
    if (ctx->pc == 0x1E2A88u) {
        ctx->pc = 0x1E2A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A84u;
        // 0x1e2a88: 0x22103  sra         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2A8Cu;
        goto label_1e2a8c;
    }
    ctx->pc = 0x1E2A84u;
    {
        const bool branch_taken_0x1e2a84 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E2A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A84u;
        // 0x1e2a88: 0x22103  sra         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2a84) {
            ctx->pc = 0x1E2AD4u;
            goto label_1e2ad4;
        }
    }
    ctx->pc = 0x1E2A8Cu;
label_1e2a8c:
    // 0x1e2a8c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1e2a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_1e2a90:
    // 0x1e2a90: 0x22103  sra         $a0, $v0, 4
    ctx->pc = 0x1e2a90u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
label_1e2a94:
    // 0x1e2a94: 0x1000000f  b           . + 4 + (0xF << 2)
label_1e2a98:
    if (ctx->pc == 0x1E2A98u) {
        ctx->pc = 0x1E2A9Cu;
        goto label_1e2a9c;
    }
    ctx->pc = 0x1E2A94u;
    {
        const bool branch_taken_0x1e2a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2a94) {
            ctx->pc = 0x1E2AD4u;
            goto label_1e2ad4;
        }
    }
    ctx->pc = 0x1E2A9Cu;
label_1e2a9c:
    // 0x1e2a9c: 0x0  nop
    ctx->pc = 0x1e2a9cu;
    // NOP
label_1e2aa0:
    // 0x1e2aa0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e2aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e2aa4:
    // 0x1e2aa4: 0x14c2000a  bne         $a2, $v0, . + 4 + (0xA << 2)
label_1e2aa8:
    if (ctx->pc == 0x1E2AA8u) {
        ctx->pc = 0x1E2AACu;
        goto label_1e2aac;
    }
    ctx->pc = 0x1E2AA4u;
    {
        const bool branch_taken_0x1e2aa4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e2aa4) {
            ctx->pc = 0x1E2AD0u;
            goto label_1e2ad0;
        }
    }
    ctx->pc = 0x1E2AACu;
label_1e2aac:
    // 0x1e2aac: 0x8f828d38  lw          $v0, -0x72C8($gp)
    ctx->pc = 0x1e2aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
label_1e2ab0:
    // 0x1e2ab0: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1e2ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1e2ab4:
    // 0x1e2ab4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1e2ab8:
    if (ctx->pc == 0x1E2AB8u) {
        ctx->pc = 0x1E2AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2AB4u;
        // 0x1e2ab8: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2ABCu;
        goto label_1e2abc;
    }
    ctx->pc = 0x1E2AB4u;
    {
        const bool branch_taken_0x1e2ab4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E2AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2AB4u;
        // 0x1e2ab8: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2ab4) {
            ctx->pc = 0x1E2AC4u;
            goto label_1e2ac4;
        }
    }
    ctx->pc = 0x1E2ABCu;
label_1e2abc:
    // 0x1e2abc: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x1e2abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_1e2ac0:
    // 0x1e2ac0: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x1e2ac0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
label_1e2ac4:
    // 0x1e2ac4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e2ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e2ac8:
    // 0x1e2ac8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e2acc:
    if (ctx->pc == 0x1E2ACCu) {
        ctx->pc = 0x1E2ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2AC8u;
        // 0x1e2acc: 0x432023  subu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2AD0u;
        goto label_1e2ad0;
    }
    ctx->pc = 0x1E2AC8u;
    {
        const bool branch_taken_0x1e2ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2AC8u;
        // 0x1e2acc: 0x432023  subu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2ac8) {
            ctx->pc = 0x1E2AD4u;
            goto label_1e2ad4;
        }
    }
    ctx->pc = 0x1E2AD0u;
label_1e2ad0:
    // 0x1e2ad0: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1e2ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e2ad4:
    // 0x1e2ad4: 0x0  nop
    ctx->pc = 0x1e2ad4u;
    // NOP
label_1e2ad8:
    // 0x1e2ad8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e2ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e2adc:
    // 0x1e2adc: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
label_1e2ae0:
    if (ctx->pc == 0x1E2AE0u) {
        ctx->pc = 0x1E2AE4u;
        goto label_1e2ae4;
    }
    ctx->pc = 0x1E2ADCu;
    {
        const bool branch_taken_0x1e2adc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e2adc) {
            ctx->pc = 0x1E2AF0u;
            goto label_1e2af0;
        }
    }
    ctx->pc = 0x1E2AE4u;
label_1e2ae4:
    // 0x1e2ae4: 0x8f828d34  lw          $v0, -0x72CC($gp)
    ctx->pc = 0x1e2ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
label_1e2ae8:
    // 0x1e2ae8: 0x10500007  beq         $v0, $s0, . + 4 + (0x7 << 2)
label_1e2aec:
    if (ctx->pc == 0x1E2AECu) {
        ctx->pc = 0x1E2AF0u;
        goto label_1e2af0;
    }
    ctx->pc = 0x1E2AE8u;
    {
        const bool branch_taken_0x1e2ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x1e2ae8) {
            ctx->pc = 0x1E2B08u;
            goto label_1e2b08;
        }
    }
    ctx->pc = 0x1E2AF0u;
label_1e2af0:
    // 0x1e2af0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e2af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e2af4:
    // 0x1e2af4: 0x14c2000c  bne         $a2, $v0, . + 4 + (0xC << 2)
label_1e2af8:
    if (ctx->pc == 0x1E2AF8u) {
        ctx->pc = 0x1E2AFCu;
        goto label_1e2afc;
    }
    ctx->pc = 0x1E2AF4u;
    {
        const bool branch_taken_0x1e2af4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e2af4) {
            ctx->pc = 0x1E2B28u;
            goto label_1e2b28;
        }
    }
    ctx->pc = 0x1E2AFCu;
label_1e2afc:
    // 0x1e2afc: 0x8f828d34  lw          $v0, -0x72CC($gp)
    ctx->pc = 0x1e2afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937908)));
label_1e2b00:
    // 0x1e2b00: 0x14500009  bne         $v0, $s0, . + 4 + (0x9 << 2)
label_1e2b04:
    if (ctx->pc == 0x1E2B04u) {
        ctx->pc = 0x1E2B08u;
        goto label_1e2b08;
    }
    ctx->pc = 0x1E2B00u;
    {
        const bool branch_taken_0x1e2b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1e2b00) {
            ctx->pc = 0x1E2B28u;
            goto label_1e2b28;
        }
    }
    ctx->pc = 0x1E2B08u;
label_1e2b08:
    // 0x1e2b08: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1e2b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e2b0c:
    // 0x1e2b0c: 0xa0a30130  sb          $v1, 0x130($a1)
    ctx->pc = 0x1e2b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 304), (uint8_t)GPR_U32(ctx, 3));
label_1e2b10:
    // 0x1e2b10: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e2b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e2b14:
    // 0x1e2b14: 0xa0a30131  sb          $v1, 0x131($a1)
    ctx->pc = 0x1e2b14u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 305), (uint8_t)GPR_U32(ctx, 3));
label_1e2b18:
    // 0x1e2b18: 0xa0a30132  sb          $v1, 0x132($a1)
    ctx->pc = 0x1e2b18u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 306), (uint8_t)GPR_U32(ctx, 3));
label_1e2b1c:
    // 0x1e2b1c: 0xa0a40133  sb          $a0, 0x133($a1)
    ctx->pc = 0x1e2b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 307), (uint8_t)GPR_U32(ctx, 4));
label_1e2b20:
    // 0x1e2b20: 0x10000008  b           . + 4 + (0x8 << 2)
label_1e2b24:
    if (ctx->pc == 0x1E2B24u) {
        ctx->pc = 0x1E2B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B20u;
        // 0x1e2b24: 0xaca20134  sw          $v0, 0x134($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 308), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2B28u;
        goto label_1e2b28;
    }
    ctx->pc = 0x1E2B20u;
    {
        const bool branch_taken_0x1e2b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B20u;
        // 0x1e2b24: 0xaca20134  sw          $v0, 0x134($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 308), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2b20) {
            ctx->pc = 0x1E2B44u;
            goto label_1e2b44;
        }
    }
    ctx->pc = 0x1E2B28u;
label_1e2b28:
    // 0x1e2b28: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1e2b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1e2b2c:
    // 0x1e2b2c: 0xa0a30130  sb          $v1, 0x130($a1)
    ctx->pc = 0x1e2b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 304), (uint8_t)GPR_U32(ctx, 3));
label_1e2b30:
    // 0x1e2b30: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e2b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e2b34:
    // 0x1e2b34: 0xa0a30131  sb          $v1, 0x131($a1)
    ctx->pc = 0x1e2b34u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 305), (uint8_t)GPR_U32(ctx, 3));
label_1e2b38:
    // 0x1e2b38: 0xa0a30132  sb          $v1, 0x132($a1)
    ctx->pc = 0x1e2b38u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 306), (uint8_t)GPR_U32(ctx, 3));
label_1e2b3c:
    // 0x1e2b3c: 0xa0a40133  sb          $a0, 0x133($a1)
    ctx->pc = 0x1e2b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 307), (uint8_t)GPR_U32(ctx, 4));
label_1e2b40:
    // 0x1e2b40: 0xaca20134  sw          $v0, 0x134($a1)
    ctx->pc = 0x1e2b40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 308), GPR_U32(ctx, 2));
label_1e2b44:
    // 0x1e2b44: 0x0  nop
    ctx->pc = 0x1e2b44u;
    // NOP
label_1e2b48:
    // 0x1e2b48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e2b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e2b4c:
    // 0x1e2b4c: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x1e2b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1e2b50:
    // 0x1e2b50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e2b50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e2b54:
    // 0x1e2b54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e2b54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e2b58:
    // 0x1e2b58: 0xc066c72  jal         func_19B1C8
label_1e2b5c:
    if (ctx->pc == 0x1E2B5Cu) {
        ctx->pc = 0x1E2B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B58u;
        // 0x1e2b5c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2B60u;
        goto label_1e2b60;
    }
    ctx->pc = 0x1E2B58u;
    SET_GPR_U32(ctx, 31, 0x1E2B60u);
    ctx->pc = 0x1E2B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2B58u;
    // 0x1e2b5c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1E2B58u, 0x1E2B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2B60u;
label_1e2b60:
    // 0x1e2b60: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x1e2b60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_1e2b64:
    // 0x1e2b64: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1e2b64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_1e2b68:
    // 0x1e2b68: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e2b68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e2b6c:
    // 0x1e2b6c: 0x0  nop
    ctx->pc = 0x1e2b6cu;
    // NOP
label_1e2b70:
    // 0x1e2b70: 0x8f858d30  lw          $a1, -0x72D0($gp)
    ctx->pc = 0x1e2b70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937904)));
label_1e2b74:
    // 0x1e2b74: 0x205182a  slt         $v1, $s0, $a1
    ctx->pc = 0x1e2b74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1e2b78:
    // 0x1e2b78: 0x1460feb7  bnez        $v1, . + 4 + (-0x149 << 2)
label_1e2b7c:
    if (ctx->pc == 0x1E2B7Cu) {
        ctx->pc = 0x1E2B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B78u;
        // 0x1e2b7c: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2B80u;
        goto label_1e2b80;
    }
    ctx->pc = 0x1E2B78u;
    {
        const bool branch_taken_0x1e2b78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B78u;
        // 0x1e2b7c: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2b78) {
            ctx->pc = 0x1E2658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e2658;
        }
    }
    ctx->pc = 0x1E2B80u;
label_1e2b80:
    // 0x1e2b80: 0x10000155  b           . + 4 + (0x155 << 2)
label_1e2b84:
    if (ctx->pc == 0x1E2B84u) {
        ctx->pc = 0x1E2B88u;
        goto label_1e2b88;
    }
    ctx->pc = 0x1E2B80u;
    {
        const bool branch_taken_0x1e2b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2b80) {
            ctx->pc = 0x1E30D8u;
            { ctx->pc = 0x1e30d8; return; }
        }
    }
    ctx->pc = 0x1E2B88u;
label_1e2b88:
    // 0x1e2b88: 0x8f848d3c  lw          $a0, -0x72C4($gp)
    ctx->pc = 0x1e2b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
label_1e2b8c:
    // 0x1e2b8c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1e2b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1e2b90:
    // 0x1e2b90: 0x10830151  beq         $a0, $v1, . + 4 + (0x151 << 2)
label_1e2b94:
    if (ctx->pc == 0x1E2B94u) {
        ctx->pc = 0x1E2B98u;
        goto label_1e2b98;
    }
    ctx->pc = 0x1E2B90u;
    {
        const bool branch_taken_0x1e2b90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e2b90) {
            ctx->pc = 0x1E30D8u;
            { ctx->pc = 0x1e30d8; return; }
        }
    }
    ctx->pc = 0x1E2B98u;
label_1e2b98:
    // 0x1e2b98: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x1e2b98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
label_1e2b9c:
    // 0x1e2b9c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1e2b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_1e2ba0:
    // 0x1e2ba0: 0x34843ffc  ori         $a0, $a0, 0x3FFC
    ctx->pc = 0x1e2ba0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16380);
label_1e2ba4:
    // 0x1e2ba4: 0x24631e00  addiu       $v1, $v1, 0x1E00
    ctx->pc = 0x1e2ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7680));
label_1e2ba8:
    // 0x1e2ba8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1e2ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e2bac:
    // 0x1e2bac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e2bacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e2bb0:
    // 0x1e2bb0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e2bb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e2bb4:
    // 0x1e2bb4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e2bb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e2bb8:
    // 0x1e2bb8: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1e2bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_1e2bbc:
    // 0x1e2bbc: 0x10000141  b           . + 4 + (0x141 << 2)
label_1e2bc0:
    if (ctx->pc == 0x1E2BC0u) {
        ctx->pc = 0x1E2BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2BBCu;
        // 0x1e2bc0: 0x649021  addu        $s2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2BC4u;
        goto label_1e2bc4;
    }
    ctx->pc = 0x1E2BBCu;
    {
        const bool branch_taken_0x1e2bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2BBCu;
        // 0x1e2bc0: 0x649021  addu        $s2, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2bbc) {
            ctx->pc = 0x1E30C4u;
            { ctx->pc = 0x1e30c4; return; }
        }
    }
    ctx->pc = 0x1E2BC4u;
label_1e2bc4:
    // 0x1e2bc4: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1e2bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1e2bc8:
    // 0x1e2bc8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e2bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1e2bcc:
    // 0x1e2bcc: 0x244226b0  addiu       $v0, $v0, 0x26B0
    ctx->pc = 0x1e2bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9904));
label_1e2bd0:
    // 0x1e2bd0: 0x8c263ffc  lw          $a2, 0x3FFC($at)
    ctx->pc = 0x1e2bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1e2bd4:
    // 0x1e2bd4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1e2bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1e2bd8:
    // 0x1e2bd8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e2bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e2bdc:
    // 0x1e2bdc: 0x24450000  addiu       $a1, $v0, 0x0
    ctx->pc = 0x1e2bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1e2be0:
    // 0x1e2be0: 0x871023  subu        $v0, $a0, $a3
    ctx->pc = 0x1e2be0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1e2be4:
    // 0x1e2be4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1e2be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1e2be8:
    // 0x1e2be8: 0x8f878d3c  lw          $a3, -0x72C4($gp)
    ctx->pc = 0x1e2be8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
label_1e2bec:
    // 0x1e2bec: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1e2becu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1e2bf0:
    // 0x1e2bf0: 0x244300b0  addiu       $v1, $v0, 0xB0
    ctx->pc = 0x1e2bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
label_1e2bf4:
    // 0x1e2bf4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1e2bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1e2bf8:
    // 0x1e2bf8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1e2bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1e2bfc:
    // 0x1e2bfc: 0x14e0000d  bnez        $a3, . + 4 + (0xD << 2)
label_1e2c00:
    if (ctx->pc == 0x1E2C00u) {
        ctx->pc = 0x1E2C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2BFCu;
        // 0x1e2c00: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2C04u;
        goto label_1e2c04;
    }
    ctx->pc = 0x1E2BFCu;
    {
        const bool branch_taken_0x1e2bfc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2BFCu;
        // 0x1e2c00: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2bfc) {
            ctx->pc = 0x1E2C34u;
            goto label_1e2c34;
        }
    }
    ctx->pc = 0x1E2C04u;
label_1e2c04:
    // 0x1e2c04: 0x8f828d38  lw          $v0, -0x72C8($gp)
    ctx->pc = 0x1e2c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
label_1e2c08:
    // 0x1e2c08: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1e2c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1e2c0c:
    // 0x1e2c0c: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x1e2c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1e2c10:
    // 0x1e2c10: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1e2c10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1e2c14:
    // 0x1e2c14: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1e2c14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1e2c18:
    // 0x1e2c18: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e2c18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1e2c1c:
    // 0x1e2c1c: 0x4410013  bgez        $v0, . + 4 + (0x13 << 2)
label_1e2c20:
    if (ctx->pc == 0x1E2C20u) {
        ctx->pc = 0x1E2C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2C1Cu;
        // 0x1e2c20: 0x22103  sra         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2C24u;
        goto label_1e2c24;
    }
    ctx->pc = 0x1E2C1Cu;
    {
        const bool branch_taken_0x1e2c1c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E2C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2C1Cu;
        // 0x1e2c20: 0x22103  sra         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2c1c) {
            ctx->pc = 0x1E2C6Cu;
            goto label_1e2c6c;
        }
    }
    ctx->pc = 0x1E2C24u;
label_1e2c24:
    // 0x1e2c24: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1e2c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_1e2c28:
    // 0x1e2c28: 0x22103  sra         $a0, $v0, 4
    ctx->pc = 0x1e2c28u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
label_1e2c2c:
    // 0x1e2c2c: 0x1000000f  b           . + 4 + (0xF << 2)
label_1e2c30:
    if (ctx->pc == 0x1E2C30u) {
        ctx->pc = 0x1E2C34u;
        goto label_1e2c34;
    }
    ctx->pc = 0x1E2C2Cu;
    {
        const bool branch_taken_0x1e2c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2c2c) {
            ctx->pc = 0x1E2C6Cu;
            goto label_1e2c6c;
        }
    }
    ctx->pc = 0x1E2C34u;
label_1e2c34:
    // 0x1e2c34: 0x0  nop
    ctx->pc = 0x1e2c34u;
    // NOP
label_1e2c38:
    // 0x1e2c38: 0x14e4000b  bne         $a3, $a0, . + 4 + (0xB << 2)
label_1e2c3c:
    if (ctx->pc == 0x1E2C3Cu) {
        ctx->pc = 0x1E2C40u;
        goto label_1e2c40;
    }
    ctx->pc = 0x1E2C38u;
    {
        const bool branch_taken_0x1e2c38 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        if (branch_taken_0x1e2c38) {
            ctx->pc = 0x1E2C68u;
            goto label_1e2c68;
        }
    }
    ctx->pc = 0x1E2C40u;
label_1e2c40:
    // 0x1e2c40: 0x8f848d38  lw          $a0, -0x72C8($gp)
    ctx->pc = 0x1e2c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
label_1e2c44:
    // 0x1e2c44: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1e2c44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1e2c48:
    // 0x1e2c48: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1e2c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1e2c4c:
    // 0x1e2c4c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e2c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1e2c50:
    // 0x1e2c50: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
label_1e2c54:
    if (ctx->pc == 0x1E2C54u) {
        ctx->pc = 0x1E2C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2C50u;
        // 0x1e2c54: 0x220c3  sra         $a0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2C58u;
        goto label_1e2c58;
    }
    ctx->pc = 0x1E2C50u;
    {
        const bool branch_taken_0x1e2c50 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E2C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2C50u;
        // 0x1e2c54: 0x220c3  sra         $a0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2c50) {
            ctx->pc = 0x1E2C6Cu;
            goto label_1e2c6c;
        }
    }
    ctx->pc = 0x1E2C58u;
label_1e2c58:
    // 0x1e2c58: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x1e2c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_1e2c5c:
    // 0x1e2c5c: 0x220c3  sra         $a0, $v0, 3
    ctx->pc = 0x1e2c5cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 3));
label_1e2c60:
    // 0x1e2c60: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e2c64:
    if (ctx->pc == 0x1E2C64u) {
        ctx->pc = 0x1E2C68u;
        goto label_1e2c68;
    }
    ctx->pc = 0x1E2C60u;
    {
        const bool branch_taken_0x1e2c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2c60) {
            ctx->pc = 0x1E2C6Cu;
            goto label_1e2c6c;
        }
    }
    ctx->pc = 0x1E2C68u;
label_1e2c68:
    // 0x1e2c68: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e2c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e2c6c:
    // 0x1e2c6c: 0x0  nop
    ctx->pc = 0x1e2c6cu;
    // NOP
label_1e2c70:
    // 0x1e2c70: 0x248200c0  addiu       $v0, $a0, 0xC0
    ctx->pc = 0x1e2c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
label_1e2c74:
    // 0x1e2c74: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1e2c74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1e2c78:
    // 0x1e2c78: 0x24070384  addiu       $a3, $zero, 0x384
    ctx->pc = 0x1e2c78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_1e2c7c:
    // 0x1e2c7c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1e2c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1e2c80:
    // 0x1e2c80: 0x24886c00  addiu       $t0, $a0, 0x6C00
    ctx->pc = 0x1e2c80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
label_1e2c84:
    // 0x1e2c84: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1e2c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_1e2c88:
    // 0x1e2c88: 0xa4a80080  sh          $t0, 0x80($a1)
    ctx->pc = 0x1e2c88u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 128), (uint16_t)GPR_U32(ctx, 8));
label_1e2c8c:
    // 0x1e2c8c: 0xa4a20082  sh          $v0, 0x82($a1)
    ctx->pc = 0x1e2c8cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 130), (uint16_t)GPR_U32(ctx, 2));
label_1e2c90:
    // 0x1e2c90: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1e2c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_1e2c94:
    // 0x1e2c94: 0xaca70084  sw          $a3, 0x84($a1)
    ctx->pc = 0x1e2c94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 7));
label_1e2c98:
    // 0x1e2c98: 0x34069400  ori         $a2, $zero, 0x9400
    ctx->pc = 0x1e2c98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37888);
label_1e2c9c:
    // 0x1e2c9c: 0xa4a60090  sh          $a2, 0x90($a1)
    ctx->pc = 0x1e2c9cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 144), (uint16_t)GPR_U32(ctx, 6));
label_1e2ca0:
    // 0x1e2ca0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1e2ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1e2ca4:
    // 0x1e2ca4: 0xa4a20092  sh          $v0, 0x92($a1)
    ctx->pc = 0x1e2ca4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 146), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1e2ca8u;
    return;
}

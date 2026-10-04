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


void FUN_0014eba0_part762(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2c24f0u: goto label_2c24f0;
        case 0x2c24f4u: goto label_2c24f4;
        case 0x2c24f8u: goto label_2c24f8;
        case 0x2c24fcu: goto label_2c24fc;
        case 0x2c2500u: goto label_2c2500;
        case 0x2c2504u: goto label_2c2504;
        case 0x2c2508u: goto label_2c2508;
        case 0x2c250cu: goto label_2c250c;
        case 0x2c2510u: goto label_2c2510;
        case 0x2c2514u: goto label_2c2514;
        case 0x2c2518u: goto label_2c2518;
        case 0x2c251cu: goto label_2c251c;
        case 0x2c2520u: goto label_2c2520;
        case 0x2c2524u: goto label_2c2524;
        case 0x2c2528u: goto label_2c2528;
        case 0x2c252cu: goto label_2c252c;
        case 0x2c2530u: goto label_2c2530;
        case 0x2c2534u: goto label_2c2534;
        case 0x2c2538u: goto label_2c2538;
        case 0x2c253cu: goto label_2c253c;
        case 0x2c2540u: goto label_2c2540;
        case 0x2c2544u: goto label_2c2544;
        case 0x2c2548u: goto label_2c2548;
        case 0x2c254cu: goto label_2c254c;
        case 0x2c2550u: goto label_2c2550;
        case 0x2c2554u: goto label_2c2554;
        case 0x2c2558u: goto label_2c2558;
        case 0x2c255cu: goto label_2c255c;
        case 0x2c2560u: goto label_2c2560;
        case 0x2c2564u: goto label_2c2564;
        case 0x2c2568u: goto label_2c2568;
        case 0x2c256cu: goto label_2c256c;
        case 0x2c2570u: goto label_2c2570;
        case 0x2c2574u: goto label_2c2574;
        case 0x2c2578u: goto label_2c2578;
        case 0x2c257cu: goto label_2c257c;
        case 0x2c2580u: goto label_2c2580;
        case 0x2c2584u: goto label_2c2584;
        case 0x2c2588u: goto label_2c2588;
        case 0x2c258cu: goto label_2c258c;
        case 0x2c2590u: goto label_2c2590;
        case 0x2c2594u: goto label_2c2594;
        case 0x2c2598u: goto label_2c2598;
        case 0x2c259cu: goto label_2c259c;
        case 0x2c25a0u: goto label_2c25a0;
        case 0x2c25a4u: goto label_2c25a4;
        case 0x2c25a8u: goto label_2c25a8;
        case 0x2c25acu: goto label_2c25ac;
        case 0x2c25b0u: goto label_2c25b0;
        case 0x2c25b4u: goto label_2c25b4;
        case 0x2c25b8u: goto label_2c25b8;
        case 0x2c25bcu: goto label_2c25bc;
        case 0x2c25c0u: goto label_2c25c0;
        case 0x2c25c4u: goto label_2c25c4;
        case 0x2c25c8u: goto label_2c25c8;
        case 0x2c25ccu: goto label_2c25cc;
        case 0x2c25d0u: goto label_2c25d0;
        case 0x2c25d4u: goto label_2c25d4;
        case 0x2c25d8u: goto label_2c25d8;
        case 0x2c25dcu: goto label_2c25dc;
        case 0x2c25e0u: goto label_2c25e0;
        case 0x2c25e4u: goto label_2c25e4;
        case 0x2c25e8u: goto label_2c25e8;
        case 0x2c25ecu: goto label_2c25ec;
        case 0x2c25f0u: goto label_2c25f0;
        case 0x2c25f4u: goto label_2c25f4;
        case 0x2c25f8u: goto label_2c25f8;
        case 0x2c25fcu: goto label_2c25fc;
        case 0x2c2600u: goto label_2c2600;
        case 0x2c2604u: goto label_2c2604;
        case 0x2c2608u: goto label_2c2608;
        case 0x2c260cu: goto label_2c260c;
        case 0x2c2610u: goto label_2c2610;
        case 0x2c2614u: goto label_2c2614;
        case 0x2c2618u: goto label_2c2618;
        case 0x2c261cu: goto label_2c261c;
        case 0x2c2620u: goto label_2c2620;
        case 0x2c2624u: goto label_2c2624;
        case 0x2c2628u: goto label_2c2628;
        case 0x2c262cu: goto label_2c262c;
        case 0x2c2630u: goto label_2c2630;
        case 0x2c2634u: goto label_2c2634;
        case 0x2c2638u: goto label_2c2638;
        case 0x2c263cu: goto label_2c263c;
        case 0x2c2640u: goto label_2c2640;
        case 0x2c2644u: goto label_2c2644;
        case 0x2c2648u: goto label_2c2648;
        case 0x2c264cu: goto label_2c264c;
        case 0x2c2650u: goto label_2c2650;
        case 0x2c2654u: goto label_2c2654;
        case 0x2c2658u: goto label_2c2658;
        case 0x2c265cu: goto label_2c265c;
        case 0x2c2660u: goto label_2c2660;
        case 0x2c2664u: goto label_2c2664;
        case 0x2c2668u: goto label_2c2668;
        case 0x2c266cu: goto label_2c266c;
        case 0x2c2670u: goto label_2c2670;
        case 0x2c2674u: goto label_2c2674;
        case 0x2c2678u: goto label_2c2678;
        case 0x2c267cu: goto label_2c267c;
        case 0x2c2680u: goto label_2c2680;
        case 0x2c2684u: goto label_2c2684;
        case 0x2c2688u: goto label_2c2688;
        case 0x2c268cu: goto label_2c268c;
        case 0x2c2690u: goto label_2c2690;
        case 0x2c2694u: goto label_2c2694;
        case 0x2c2698u: goto label_2c2698;
        case 0x2c269cu: goto label_2c269c;
        case 0x2c26a0u: goto label_2c26a0;
        case 0x2c26a4u: goto label_2c26a4;
        case 0x2c26a8u: goto label_2c26a8;
        case 0x2c26acu: goto label_2c26ac;
        case 0x2c26b0u: goto label_2c26b0;
        case 0x2c26b4u: goto label_2c26b4;
        case 0x2c26b8u: goto label_2c26b8;
        case 0x2c26bcu: goto label_2c26bc;
        case 0x2c26c0u: goto label_2c26c0;
        case 0x2c26c4u: goto label_2c26c4;
        case 0x2c26c8u: goto label_2c26c8;
        case 0x2c26ccu: goto label_2c26cc;
        case 0x2c26d0u: goto label_2c26d0;
        case 0x2c26d4u: goto label_2c26d4;
        case 0x2c26d8u: goto label_2c26d8;
        case 0x2c26dcu: goto label_2c26dc;
        case 0x2c26e0u: goto label_2c26e0;
        case 0x2c26e4u: goto label_2c26e4;
        case 0x2c26e8u: goto label_2c26e8;
        case 0x2c26ecu: goto label_2c26ec;
        case 0x2c26f0u: goto label_2c26f0;
        case 0x2c26f4u: goto label_2c26f4;
        case 0x2c26f8u: goto label_2c26f8;
        case 0x2c26fcu: goto label_2c26fc;
        case 0x2c2700u: goto label_2c2700;
        case 0x2c2704u: goto label_2c2704;
        case 0x2c2708u: goto label_2c2708;
        case 0x2c270cu: goto label_2c270c;
        case 0x2c2710u: goto label_2c2710;
        case 0x2c2714u: goto label_2c2714;
        case 0x2c2718u: goto label_2c2718;
        case 0x2c271cu: goto label_2c271c;
        case 0x2c2720u: goto label_2c2720;
        case 0x2c2724u: goto label_2c2724;
        case 0x2c2728u: goto label_2c2728;
        case 0x2c272cu: goto label_2c272c;
        case 0x2c2730u: goto label_2c2730;
        case 0x2c2734u: goto label_2c2734;
        case 0x2c2738u: goto label_2c2738;
        case 0x2c273cu: goto label_2c273c;
        case 0x2c2740u: goto label_2c2740;
        case 0x2c2744u: goto label_2c2744;
        case 0x2c2748u: goto label_2c2748;
        case 0x2c274cu: goto label_2c274c;
        case 0x2c2750u: goto label_2c2750;
        case 0x2c2754u: goto label_2c2754;
        case 0x2c2758u: goto label_2c2758;
        case 0x2c275cu: goto label_2c275c;
        case 0x2c2760u: goto label_2c2760;
        case 0x2c2764u: goto label_2c2764;
        case 0x2c2768u: goto label_2c2768;
        case 0x2c276cu: goto label_2c276c;
        case 0x2c2770u: goto label_2c2770;
        case 0x2c2774u: goto label_2c2774;
        case 0x2c2778u: goto label_2c2778;
        case 0x2c277cu: goto label_2c277c;
        case 0x2c2780u: goto label_2c2780;
        case 0x2c2784u: goto label_2c2784;
        case 0x2c2788u: goto label_2c2788;
        case 0x2c278cu: goto label_2c278c;
        case 0x2c2790u: goto label_2c2790;
        case 0x2c2794u: goto label_2c2794;
        case 0x2c2798u: goto label_2c2798;
        case 0x2c279cu: goto label_2c279c;
        case 0x2c27a0u: goto label_2c27a0;
        case 0x2c27a4u: goto label_2c27a4;
        case 0x2c27a8u: goto label_2c27a8;
        case 0x2c27acu: goto label_2c27ac;
        case 0x2c27b0u: goto label_2c27b0;
        case 0x2c27b4u: goto label_2c27b4;
        case 0x2c27b8u: goto label_2c27b8;
        case 0x2c27bcu: goto label_2c27bc;
        case 0x2c27c0u: goto label_2c27c0;
        case 0x2c27c4u: goto label_2c27c4;
        case 0x2c27c8u: goto label_2c27c8;
        case 0x2c27ccu: goto label_2c27cc;
        case 0x2c27d0u: goto label_2c27d0;
        case 0x2c27d4u: goto label_2c27d4;
        case 0x2c27d8u: goto label_2c27d8;
        case 0x2c27dcu: goto label_2c27dc;
        case 0x2c27e0u: goto label_2c27e0;
        case 0x2c27e4u: goto label_2c27e4;
        case 0x2c27e8u: goto label_2c27e8;
        case 0x2c27ecu: goto label_2c27ec;
        case 0x2c27f0u: goto label_2c27f0;
        case 0x2c27f4u: goto label_2c27f4;
        case 0x2c27f8u: goto label_2c27f8;
        case 0x2c27fcu: goto label_2c27fc;
        case 0x2c2800u: goto label_2c2800;
        case 0x2c2804u: goto label_2c2804;
        case 0x2c2808u: goto label_2c2808;
        case 0x2c280cu: goto label_2c280c;
        case 0x2c2810u: goto label_2c2810;
        case 0x2c2814u: goto label_2c2814;
        case 0x2c2818u: goto label_2c2818;
        case 0x2c281cu: goto label_2c281c;
        case 0x2c2820u: goto label_2c2820;
        case 0x2c2824u: goto label_2c2824;
        case 0x2c2828u: goto label_2c2828;
        case 0x2c282cu: goto label_2c282c;
        case 0x2c2830u: goto label_2c2830;
        case 0x2c2834u: goto label_2c2834;
        case 0x2c2838u: goto label_2c2838;
        case 0x2c283cu: goto label_2c283c;
        case 0x2c2840u: goto label_2c2840;
        case 0x2c2844u: goto label_2c2844;
        case 0x2c2848u: goto label_2c2848;
        case 0x2c284cu: goto label_2c284c;
        case 0x2c2850u: goto label_2c2850;
        case 0x2c2854u: goto label_2c2854;
        case 0x2c2858u: goto label_2c2858;
        case 0x2c285cu: goto label_2c285c;
        case 0x2c2860u: goto label_2c2860;
        case 0x2c2864u: goto label_2c2864;
        case 0x2c2868u: goto label_2c2868;
        case 0x2c286cu: goto label_2c286c;
        case 0x2c2870u: goto label_2c2870;
        case 0x2c2874u: goto label_2c2874;
        case 0x2c2878u: goto label_2c2878;
        case 0x2c287cu: goto label_2c287c;
        case 0x2c2880u: goto label_2c2880;
        case 0x2c2884u: goto label_2c2884;
        case 0x2c2888u: goto label_2c2888;
        case 0x2c288cu: goto label_2c288c;
        case 0x2c2890u: goto label_2c2890;
        case 0x2c2894u: goto label_2c2894;
        case 0x2c2898u: goto label_2c2898;
        case 0x2c289cu: goto label_2c289c;
        case 0x2c28a0u: goto label_2c28a0;
        case 0x2c28a4u: goto label_2c28a4;
        case 0x2c28a8u: goto label_2c28a8;
        case 0x2c28acu: goto label_2c28ac;
        case 0x2c28b0u: goto label_2c28b0;
        case 0x2c28b4u: goto label_2c28b4;
        case 0x2c28b8u: goto label_2c28b8;
        case 0x2c28bcu: goto label_2c28bc;
        case 0x2c28c0u: goto label_2c28c0;
        case 0x2c28c4u: goto label_2c28c4;
        case 0x2c28c8u: goto label_2c28c8;
        case 0x2c28ccu: goto label_2c28cc;
        case 0x2c28d0u: goto label_2c28d0;
        case 0x2c28d4u: goto label_2c28d4;
        case 0x2c28d8u: goto label_2c28d8;
        case 0x2c28dcu: goto label_2c28dc;
        case 0x2c28e0u: goto label_2c28e0;
        case 0x2c28e4u: goto label_2c28e4;
        case 0x2c28e8u: goto label_2c28e8;
        case 0x2c28ecu: goto label_2c28ec;
        case 0x2c28f0u: goto label_2c28f0;
        case 0x2c28f4u: goto label_2c28f4;
        case 0x2c28f8u: goto label_2c28f8;
        case 0x2c28fcu: goto label_2c28fc;
        case 0x2c2900u: goto label_2c2900;
        case 0x2c2904u: goto label_2c2904;
        case 0x2c2908u: goto label_2c2908;
        case 0x2c290cu: goto label_2c290c;
        case 0x2c2910u: goto label_2c2910;
        case 0x2c2914u: goto label_2c2914;
        case 0x2c2918u: goto label_2c2918;
        case 0x2c291cu: goto label_2c291c;
        case 0x2c2920u: goto label_2c2920;
        case 0x2c2924u: goto label_2c2924;
        case 0x2c2928u: goto label_2c2928;
        case 0x2c292cu: goto label_2c292c;
        case 0x2c2930u: goto label_2c2930;
        case 0x2c2934u: goto label_2c2934;
        case 0x2c2938u: goto label_2c2938;
        case 0x2c293cu: goto label_2c293c;
        case 0x2c2940u: goto label_2c2940;
        case 0x2c2944u: goto label_2c2944;
        case 0x2c2948u: goto label_2c2948;
        case 0x2c294cu: goto label_2c294c;
        case 0x2c2950u: goto label_2c2950;
        case 0x2c2954u: goto label_2c2954;
        case 0x2c2958u: goto label_2c2958;
        case 0x2c295cu: goto label_2c295c;
        case 0x2c2960u: goto label_2c2960;
        case 0x2c2964u: goto label_2c2964;
        case 0x2c2968u: goto label_2c2968;
        case 0x2c296cu: goto label_2c296c;
        case 0x2c2970u: goto label_2c2970;
        case 0x2c2974u: goto label_2c2974;
        case 0x2c2978u: goto label_2c2978;
        case 0x2c297cu: goto label_2c297c;
        case 0x2c2980u: goto label_2c2980;
        case 0x2c2984u: goto label_2c2984;
        case 0x2c2988u: goto label_2c2988;
        case 0x2c298cu: goto label_2c298c;
        case 0x2c2990u: goto label_2c2990;
        case 0x2c2994u: goto label_2c2994;
        case 0x2c2998u: goto label_2c2998;
        case 0x2c299cu: goto label_2c299c;
        case 0x2c29a0u: goto label_2c29a0;
        case 0x2c29a4u: goto label_2c29a4;
        case 0x2c29a8u: goto label_2c29a8;
        case 0x2c29acu: goto label_2c29ac;
        case 0x2c29b0u: goto label_2c29b0;
        case 0x2c29b4u: goto label_2c29b4;
        case 0x2c29b8u: goto label_2c29b8;
        case 0x2c29bcu: goto label_2c29bc;
        case 0x2c29c0u: goto label_2c29c0;
        case 0x2c29c4u: goto label_2c29c4;
        case 0x2c29c8u: goto label_2c29c8;
        case 0x2c29ccu: goto label_2c29cc;
        case 0x2c29d0u: goto label_2c29d0;
        case 0x2c29d4u: goto label_2c29d4;
        case 0x2c29d8u: goto label_2c29d8;
        case 0x2c29dcu: goto label_2c29dc;
        case 0x2c29e0u: goto label_2c29e0;
        case 0x2c29e4u: goto label_2c29e4;
        case 0x2c29e8u: goto label_2c29e8;
        case 0x2c29ecu: goto label_2c29ec;
        case 0x2c29f0u: goto label_2c29f0;
        case 0x2c29f4u: goto label_2c29f4;
        case 0x2c29f8u: goto label_2c29f8;
        case 0x2c29fcu: goto label_2c29fc;
        case 0x2c2a00u: goto label_2c2a00;
        case 0x2c2a04u: goto label_2c2a04;
        case 0x2c2a08u: goto label_2c2a08;
        case 0x2c2a0cu: goto label_2c2a0c;
        case 0x2c2a10u: goto label_2c2a10;
        case 0x2c2a14u: goto label_2c2a14;
        case 0x2c2a18u: goto label_2c2a18;
        case 0x2c2a1cu: goto label_2c2a1c;
        case 0x2c2a20u: goto label_2c2a20;
        case 0x2c2a24u: goto label_2c2a24;
        case 0x2c2a28u: goto label_2c2a28;
        case 0x2c2a2cu: goto label_2c2a2c;
        case 0x2c2a30u: goto label_2c2a30;
        case 0x2c2a34u: goto label_2c2a34;
        case 0x2c2a38u: goto label_2c2a38;
        case 0x2c2a3cu: goto label_2c2a3c;
        case 0x2c2a40u: goto label_2c2a40;
        case 0x2c2a44u: goto label_2c2a44;
        case 0x2c2a48u: goto label_2c2a48;
        case 0x2c2a4cu: goto label_2c2a4c;
        case 0x2c2a50u: goto label_2c2a50;
        case 0x2c2a54u: goto label_2c2a54;
        case 0x2c2a58u: goto label_2c2a58;
        case 0x2c2a5cu: goto label_2c2a5c;
        case 0x2c2a60u: goto label_2c2a60;
        case 0x2c2a64u: goto label_2c2a64;
        case 0x2c2a68u: goto label_2c2a68;
        case 0x2c2a6cu: goto label_2c2a6c;
        case 0x2c2a70u: goto label_2c2a70;
        case 0x2c2a74u: goto label_2c2a74;
        case 0x2c2a78u: goto label_2c2a78;
        case 0x2c2a7cu: goto label_2c2a7c;
        case 0x2c2a80u: goto label_2c2a80;
        case 0x2c2a84u: goto label_2c2a84;
        case 0x2c2a88u: goto label_2c2a88;
        case 0x2c2a8cu: goto label_2c2a8c;
        case 0x2c2a90u: goto label_2c2a90;
        case 0x2c2a94u: goto label_2c2a94;
        case 0x2c2a98u: goto label_2c2a98;
        case 0x2c2a9cu: goto label_2c2a9c;
        case 0x2c2aa0u: goto label_2c2aa0;
        case 0x2c2aa4u: goto label_2c2aa4;
        case 0x2c2aa8u: goto label_2c2aa8;
        case 0x2c2aacu: goto label_2c2aac;
        case 0x2c2ab0u: goto label_2c2ab0;
        case 0x2c2ab4u: goto label_2c2ab4;
        case 0x2c2ab8u: goto label_2c2ab8;
        case 0x2c2abcu: goto label_2c2abc;
        case 0x2c2ac0u: goto label_2c2ac0;
        case 0x2c2ac4u: goto label_2c2ac4;
        case 0x2c2ac8u: goto label_2c2ac8;
        case 0x2c2accu: goto label_2c2acc;
        case 0x2c2ad0u: goto label_2c2ad0;
        case 0x2c2ad4u: goto label_2c2ad4;
        case 0x2c2ad8u: goto label_2c2ad8;
        case 0x2c2adcu: goto label_2c2adc;
        case 0x2c2ae0u: goto label_2c2ae0;
        case 0x2c2ae4u: goto label_2c2ae4;
        case 0x2c2ae8u: goto label_2c2ae8;
        case 0x2c2aecu: goto label_2c2aec;
        case 0x2c2af0u: goto label_2c2af0;
        case 0x2c2af4u: goto label_2c2af4;
        case 0x2c2af8u: goto label_2c2af8;
        case 0x2c2afcu: goto label_2c2afc;
        case 0x2c2b00u: goto label_2c2b00;
        case 0x2c2b04u: goto label_2c2b04;
        case 0x2c2b08u: goto label_2c2b08;
        case 0x2c2b0cu: goto label_2c2b0c;
        case 0x2c2b10u: goto label_2c2b10;
        case 0x2c2b14u: goto label_2c2b14;
        case 0x2c2b18u: goto label_2c2b18;
        case 0x2c2b1cu: goto label_2c2b1c;
        case 0x2c2b20u: goto label_2c2b20;
        case 0x2c2b24u: goto label_2c2b24;
        case 0x2c2b28u: goto label_2c2b28;
        case 0x2c2b2cu: goto label_2c2b2c;
        case 0x2c2b30u: goto label_2c2b30;
        case 0x2c2b34u: goto label_2c2b34;
        case 0x2c2b38u: goto label_2c2b38;
        case 0x2c2b3cu: goto label_2c2b3c;
        case 0x2c2b40u: goto label_2c2b40;
        case 0x2c2b44u: goto label_2c2b44;
        case 0x2c2b48u: goto label_2c2b48;
        case 0x2c2b4cu: goto label_2c2b4c;
        case 0x2c2b50u: goto label_2c2b50;
        case 0x2c2b54u: goto label_2c2b54;
        case 0x2c2b58u: goto label_2c2b58;
        case 0x2c2b5cu: goto label_2c2b5c;
        case 0x2c2b60u: goto label_2c2b60;
        case 0x2c2b64u: goto label_2c2b64;
        case 0x2c2b68u: goto label_2c2b68;
        case 0x2c2b6cu: goto label_2c2b6c;
        case 0x2c2b70u: goto label_2c2b70;
        case 0x2c2b74u: goto label_2c2b74;
        case 0x2c2b78u: goto label_2c2b78;
        case 0x2c2b7cu: goto label_2c2b7c;
        case 0x2c2b80u: goto label_2c2b80;
        case 0x2c2b84u: goto label_2c2b84;
        case 0x2c2b88u: goto label_2c2b88;
        case 0x2c2b8cu: goto label_2c2b8c;
        case 0x2c2b90u: goto label_2c2b90;
        case 0x2c2b94u: goto label_2c2b94;
        case 0x2c2b98u: goto label_2c2b98;
        case 0x2c2b9cu: goto label_2c2b9c;
        case 0x2c2ba0u: goto label_2c2ba0;
        case 0x2c2ba4u: goto label_2c2ba4;
        case 0x2c2ba8u: goto label_2c2ba8;
        case 0x2c2bacu: goto label_2c2bac;
        case 0x2c2bb0u: goto label_2c2bb0;
        case 0x2c2bb4u: goto label_2c2bb4;
        case 0x2c2bb8u: goto label_2c2bb8;
        case 0x2c2bbcu: goto label_2c2bbc;
        case 0x2c2bc0u: goto label_2c2bc0;
        case 0x2c2bc4u: goto label_2c2bc4;
        case 0x2c2bc8u: goto label_2c2bc8;
        case 0x2c2bccu: goto label_2c2bcc;
        case 0x2c2bd0u: goto label_2c2bd0;
        case 0x2c2bd4u: goto label_2c2bd4;
        case 0x2c2bd8u: goto label_2c2bd8;
        case 0x2c2bdcu: goto label_2c2bdc;
        case 0x2c2be0u: goto label_2c2be0;
        case 0x2c2be4u: goto label_2c2be4;
        case 0x2c2be8u: goto label_2c2be8;
        case 0x2c2becu: goto label_2c2bec;
        case 0x2c2bf0u: goto label_2c2bf0;
        case 0x2c2bf4u: goto label_2c2bf4;
        case 0x2c2bf8u: goto label_2c2bf8;
        case 0x2c2bfcu: goto label_2c2bfc;
        case 0x2c2c00u: goto label_2c2c00;
        case 0x2c2c04u: goto label_2c2c04;
        case 0x2c2c08u: goto label_2c2c08;
        case 0x2c2c0cu: goto label_2c2c0c;
        case 0x2c2c10u: goto label_2c2c10;
        case 0x2c2c14u: goto label_2c2c14;
        case 0x2c2c18u: goto label_2c2c18;
        case 0x2c2c1cu: goto label_2c2c1c;
        case 0x2c2c20u: goto label_2c2c20;
        case 0x2c2c24u: goto label_2c2c24;
        case 0x2c2c28u: goto label_2c2c28;
        case 0x2c2c2cu: goto label_2c2c2c;
        case 0x2c2c30u: goto label_2c2c30;
        case 0x2c2c34u: goto label_2c2c34;
        case 0x2c2c38u: goto label_2c2c38;
        case 0x2c2c3cu: goto label_2c2c3c;
        case 0x2c2c40u: goto label_2c2c40;
        case 0x2c2c44u: goto label_2c2c44;
        case 0x2c2c48u: goto label_2c2c48;
        case 0x2c2c4cu: goto label_2c2c4c;
        case 0x2c2c50u: goto label_2c2c50;
        case 0x2c2c54u: goto label_2c2c54;
        case 0x2c2c58u: goto label_2c2c58;
        case 0x2c2c5cu: goto label_2c2c5c;
        case 0x2c2c60u: goto label_2c2c60;
        case 0x2c2c64u: goto label_2c2c64;
        case 0x2c2c68u: goto label_2c2c68;
        case 0x2c2c6cu: goto label_2c2c6c;
        case 0x2c2c70u: goto label_2c2c70;
        case 0x2c2c74u: goto label_2c2c74;
        case 0x2c2c78u: goto label_2c2c78;
        case 0x2c2c7cu: goto label_2c2c7c;
        case 0x2c2c80u: goto label_2c2c80;
        case 0x2c2c84u: goto label_2c2c84;
        case 0x2c2c88u: goto label_2c2c88;
        case 0x2c2c8cu: goto label_2c2c8c;
        case 0x2c2c90u: goto label_2c2c90;
        case 0x2c2c94u: goto label_2c2c94;
        case 0x2c2c98u: goto label_2c2c98;
        case 0x2c2c9cu: goto label_2c2c9c;
        case 0x2c2ca0u: goto label_2c2ca0;
        case 0x2c2ca4u: goto label_2c2ca4;
        case 0x2c2ca8u: goto label_2c2ca8;
        case 0x2c2cacu: goto label_2c2cac;
        case 0x2c2cb0u: goto label_2c2cb0;
        case 0x2c2cb4u: goto label_2c2cb4;
        case 0x2c2cb8u: goto label_2c2cb8;
        case 0x2c2cbcu: goto label_2c2cbc;
        default: return;
    }

label_2c24f0:
    // 0x2c24f0: 0x10070000  beq         $zero, $a3, . + 4 + (0x0 << 2)
label_2c24f4:
    if (ctx->pc == 0x2C24F4u) {
        ctx->pc = 0x2C24F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C24F0u;
        // 0x2c24f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C24F8u;
        goto label_2c24f8;
    }
    ctx->pc = 0x2C24F0u;
    {
        const bool branch_taken_0x2c24f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2C24F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C24F0u;
        // 0x2c24f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c24f0) {
            ctx->pc = 0x2C24F4u;
            goto label_2c24f4;
        }
    }
    ctx->pc = 0x2C24F8u;
label_2c24f8:
    // 0x2c24f8: 0x10080038  beq         $zero, $t0, . + 4 + (0x38 << 2)
label_2c24fc:
    if (ctx->pc == 0x2C24FCu) {
        ctx->pc = 0x2C24FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C24F8u;
        // 0x2c24fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2500u;
        goto label_2c2500;
    }
    ctx->pc = 0x2C24F8u;
    {
        const bool branch_taken_0x2c24f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2C24FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C24F8u;
        // 0x2c24fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c24f8) {
            ctx->pc = 0x2C25DCu;
            goto label_2c25dc;
        }
    }
    ctx->pc = 0x2C2500u;
label_2c2500:
    // 0x2c2500: 0x10090012  beq         $zero, $t1, . + 4 + (0x12 << 2)
label_2c2504:
    if (ctx->pc == 0x2C2504u) {
        ctx->pc = 0x2C2504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2500u;
        // 0x2c2504: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2508u;
        goto label_2c2508;
    }
    ctx->pc = 0x2C2500u;
    {
        const bool branch_taken_0x2c2500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2C2504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2500u;
        // 0x2c2504: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2500) {
            ctx->pc = 0x2C254Cu;
            goto label_2c254c;
        }
    }
    ctx->pc = 0x2C2508u;
label_2c2508:
    // 0x2c2508: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2c2508u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2c250c:
    // 0x2c250c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c250cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2510:
    // 0x2c2510: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2c2514:
    if (ctx->pc == 0x2C2514u) {
        ctx->pc = 0x2C2514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2510u;
        // 0x2c2514: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2518u;
        goto label_2c2518;
    }
    ctx->pc = 0x2C2510u;
    {
        const bool branch_taken_0x2c2510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C2514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2510u;
        // 0x2c2514: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2510) {
            ctx->pc = 0x2C2514u;
            goto label_2c2514;
        }
    }
    ctx->pc = 0x2C2518u;
label_2c2518:
    // 0x2c2518: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2518u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c251c:
    // 0x2c251c: 0x1000747  .word       0x01000747                   # srav        $zero, $zero, $t0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c251cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
label_2c2520:
    // 0x2c2520: 0x81e9437c  lb          $t1, 0x437C($t7)
    ctx->pc = 0x2c2520u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c2524:
    // 0x2c2524: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2524u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2528:
    // 0x2c2528: 0x81ea437c  lb          $t2, 0x437C($t7)
    ctx->pc = 0x2c2528u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c252c:
    // 0x2c252c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c252cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2530:
    // 0x2c2530: 0x81f0437c  lb          $s0, 0x437C($t7)
    ctx->pc = 0x2c2530u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c2534:
    // 0x2c2534: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2534u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2538:
    // 0x2c2538: 0x81f1437c  lb          $s1, 0x437C($t7)
    ctx->pc = 0x2c2538u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c253c:
    // 0x2c253c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c253cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2540:
    // 0x2c2540: 0x81f2437c  lb          $s2, 0x437C($t7)
    ctx->pc = 0x2c2540u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c2544:
    // 0x2c2544: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2544u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2548:
    // 0x2c2548: 0x42020065  .word       0x42020065                   # INVALID     $s0, $v0, 0x65 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c2548u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x25 at 0x2C2548 raw=0x42020065");
 /* MITIGATED */
label_2c254c:
    // 0x2c254c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c254cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2550:
    // 0x2c2550: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2550u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2554:
    // 0x2c2554: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2554u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2558:
    // 0x2c2558: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2c255c:
    if (ctx->pc == 0x2C255Cu) {
        ctx->pc = 0x2C255Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2558u;
        // 0x2c255c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2560u;
        goto label_2c2560;
    }
    ctx->pc = 0x2C2558u;
    {
        const bool branch_taken_0x2c2558 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2C255Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2558u;
        // 0x2c255c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2558) {
            ctx->pc = 0x2D6560u;
            return;
        }
    }
    ctx->pc = 0x2C2560u;
label_2c2560:
    // 0x2c2560: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2560u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2564:
    // 0x2c2564: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2564u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2568:
    // 0x2c2568: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2c256c:
    if (ctx->pc == 0x2C256Cu) {
        ctx->pc = 0x2C256Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2568u;
        // 0x2c256c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2570u;
        goto label_2c2570;
    }
    ctx->pc = 0x2C2568u;
    {
        const bool branch_taken_0x2c2568 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2c2568) {
            ctx->pc = 0x2C256Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2568u;
            // 0x2c256c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4558u;
            { ctx->pc = 0x2c4558; return; }
        }
    }
    ctx->pc = 0x2C2570u;
label_2c2570:
    // 0x2c2570: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2570u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2574:
    // 0x2c2574: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2574u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2578:
    // 0x2c2578: 0x10080012  beq         $zero, $t0, . + 4 + (0x12 << 2)
label_2c257c:
    if (ctx->pc == 0x2C257Cu) {
        ctx->pc = 0x2C257Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2578u;
        // 0x2c257c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2580u;
        goto label_2c2580;
    }
    ctx->pc = 0x2C2578u;
    {
        const bool branch_taken_0x2c2578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2C257Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2578u;
        // 0x2c257c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2578) {
            ctx->pc = 0x2C25C4u;
            goto label_2c25c4;
        }
    }
    ctx->pc = 0x2C2580u;
label_2c2580:
    // 0x2c2580: 0x42020052  .word       0x42020052                   # INVALID     $s0, $v0, 0x52 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c2580u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x12 at 0x2C2580 raw=0x42020052");
 /* MITIGATED */
label_2c2584:
    // 0x2c2584: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2584u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2588:
    // 0x2c2588: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2588u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c258c:
    // 0x2c258c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c258cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2590:
    // 0x2c2590: 0x500b004e  beql        $zero, $t3, . + 4 + (0x4E << 2)
label_2c2594:
    if (ctx->pc == 0x2C2594u) {
        ctx->pc = 0x2C2594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2590u;
        // 0x2c2594: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2598u;
        goto label_2c2598;
    }
    ctx->pc = 0x2C2590u;
    {
        const bool branch_taken_0x2c2590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2c2590) {
            ctx->pc = 0x2C2594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2590u;
            // 0x2c2594: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C26CCu;
            goto label_2c26cc;
        }
    }
    ctx->pc = 0x2C2598u;
label_2c2598:
    // 0x2c2598: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2598u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c259c:
    // 0x2c259c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c259cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c25a0:
    // 0x2c25a0: 0x100d0040  beq         $zero, $t5, . + 4 + (0x40 << 2)
label_2c25a4:
    if (ctx->pc == 0x2C25A4u) {
        ctx->pc = 0x2C25A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C25A0u;
        // 0x2c25a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C25A8u;
        goto label_2c25a8;
    }
    ctx->pc = 0x2C25A0u;
    {
        const bool branch_taken_0x2c25a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2C25A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C25A0u;
        // 0x2c25a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c25a0) {
            ctx->pc = 0x2C26A4u;
            goto label_2c26a4;
        }
    }
    ctx->pc = 0x2C25A8u;
label_2c25a8:
    // 0x2c25a8: 0x10060001  beq         $zero, $a2, . + 4 + (0x1 << 2)
label_2c25ac:
    if (ctx->pc == 0x2C25ACu) {
        ctx->pc = 0x2C25ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C25A8u;
        // 0x2c25ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C25B0u;
        goto label_2c25b0;
    }
    ctx->pc = 0x2C25A8u;
    {
        const bool branch_taken_0x2c25a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2C25ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C25A8u;
        // 0x2c25ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c25a8) {
            ctx->pc = 0x2C25B0u;
            goto label_2c25b0;
        }
    }
    ctx->pc = 0x2C25B0u;
label_2c25b0:
    // 0x2c25b0: 0x10070000  beq         $zero, $a3, . + 4 + (0x0 << 2)
label_2c25b4:
    if (ctx->pc == 0x2C25B4u) {
        ctx->pc = 0x2C25B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C25B0u;
        // 0x2c25b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C25B8u;
        goto label_2c25b8;
    }
    ctx->pc = 0x2C25B0u;
    {
        const bool branch_taken_0x2c25b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2C25B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C25B0u;
        // 0x2c25b4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c25b0) {
            ctx->pc = 0x2C25B4u;
            goto label_2c25b4;
        }
    }
    ctx->pc = 0x2C25B8u;
label_2c25b8:
    // 0x2c25b8: 0x10080012  beq         $zero, $t0, . + 4 + (0x12 << 2)
label_2c25bc:
    if (ctx->pc == 0x2C25BCu) {
        ctx->pc = 0x2C25BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C25B8u;
        // 0x2c25bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C25C0u;
        goto label_2c25c0;
    }
    ctx->pc = 0x2C25B8u;
    {
        const bool branch_taken_0x2c25b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2C25BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C25B8u;
        // 0x2c25bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c25b8) {
            ctx->pc = 0x2C2604u;
            goto label_2c2604;
        }
    }
    ctx->pc = 0x2C25C0u;
label_2c25c0:
    // 0x2c25c0: 0x10090038  beq         $zero, $t1, . + 4 + (0x38 << 2)
label_2c25c4:
    if (ctx->pc == 0x2C25C4u) {
        ctx->pc = 0x2C25C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C25C0u;
        // 0x2c25c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C25C8u;
        goto label_2c25c8;
    }
    ctx->pc = 0x2C25C0u;
    {
        const bool branch_taken_0x2c25c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2C25C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C25C0u;
        // 0x2c25c4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c25c0) {
            ctx->pc = 0x2C26A4u;
            goto label_2c26a4;
        }
    }
    ctx->pc = 0x2C25C8u;
label_2c25c8:
    // 0x2c25c8: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2c25c8u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2c25cc:
    // 0x2c25cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c25ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c25d0:
    // 0x2c25d0: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2c25d4:
    if (ctx->pc == 0x2C25D4u) {
        ctx->pc = 0x2C25D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C25D0u;
        // 0x2c25d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C25D8u;
        goto label_2c25d8;
    }
    ctx->pc = 0x2C25D0u;
    {
        const bool branch_taken_0x2c25d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C25D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C25D0u;
        // 0x2c25d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c25d0) {
            ctx->pc = 0x2C25D4u;
            goto label_2c25d4;
        }
    }
    ctx->pc = 0x2C25D8u;
label_2c25d8:
    // 0x2c25d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c25d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c25dc:
    // 0x2c25dc: 0x1000743  .word       0x01000743                   # sra         $zero, $zero, 29 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c25dcu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 29));
label_2c25e0:
    // 0x2c25e0: 0x81e9437c  lb          $t1, 0x437C($t7)
    ctx->pc = 0x2c25e0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c25e4:
    // 0x2c25e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c25e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c25e8:
    // 0x2c25e8: 0x81ea437c  lb          $t2, 0x437C($t7)
    ctx->pc = 0x2c25e8u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c25ec:
    // 0x2c25ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c25ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c25f0:
    // 0x2c25f0: 0x81f0437c  lb          $s0, 0x437C($t7)
    ctx->pc = 0x2c25f0u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c25f4:
    // 0x2c25f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c25f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c25f8:
    // 0x2c25f8: 0x81f1437c  lb          $s1, 0x437C($t7)
    ctx->pc = 0x2c25f8u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c25fc:
    // 0x2c25fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c25fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2600:
    // 0x2c2600: 0x81f2437c  lb          $s2, 0x437C($t7)
    ctx->pc = 0x2c2600u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c2604:
    // 0x2c2604: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2604u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2608:
    // 0x2c2608: 0x4202004d  .word       0x4202004D                   # INVALID     $s0, $v0, 0x4D # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c2608u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0xD at 0x2C2608 raw=0x4202004D");
 /* MITIGATED */
label_2c260c:
    // 0x2c260c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c260cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2610:
    // 0x2c2610: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2610u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2614:
    // 0x2c2614: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2614u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2618:
    // 0x2c2618: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2c261c:
    if (ctx->pc == 0x2C261Cu) {
        ctx->pc = 0x2C261Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2618u;
        // 0x2c261c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2620u;
        goto label_2c2620;
    }
    ctx->pc = 0x2C2618u;
    {
        const bool branch_taken_0x2c2618 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2C261Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2618u;
        // 0x2c261c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2618) {
            ctx->pc = 0x2D6620u;
            return;
        }
    }
    ctx->pc = 0x2C2620u;
label_2c2620:
    // 0x2c2620: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2620u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2624:
    // 0x2c2624: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2624u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2628:
    // 0x2c2628: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2c262c:
    if (ctx->pc == 0x2C262Cu) {
        ctx->pc = 0x2C262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2628u;
        // 0x2c262c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2630u;
        goto label_2c2630;
    }
    ctx->pc = 0x2C2628u;
    {
        const bool branch_taken_0x2c2628 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2c2628) {
            ctx->pc = 0x2C262Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2628u;
            // 0x2c262c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4618u;
            { ctx->pc = 0x2c4618; return; }
        }
    }
    ctx->pc = 0x2C2630u;
label_2c2630:
    // 0x2c2630: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2630u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2634:
    // 0x2c2634: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2634u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2638:
    // 0x2c2638: 0x10080038  beq         $zero, $t0, . + 4 + (0x38 << 2)
label_2c263c:
    if (ctx->pc == 0x2C263Cu) {
        ctx->pc = 0x2C263Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2638u;
        // 0x2c263c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2640u;
        goto label_2c2640;
    }
    ctx->pc = 0x2C2638u;
    {
        const bool branch_taken_0x2c2638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2C263Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2638u;
        // 0x2c263c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2638) {
            ctx->pc = 0x2C271Cu;
            goto label_2c271c;
        }
    }
    ctx->pc = 0x2C2640u;
label_2c2640:
    // 0x2c2640: 0x4202003a  .word       0x4202003A                   # INVALID     $s0, $v0, 0x3A # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c2640u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x3A at 0x2C2640 raw=0x4202003A");
 /* MITIGATED */
label_2c2644:
    // 0x2c2644: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2644u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2648:
    // 0x2c2648: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2648u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c264c:
    // 0x2c264c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c264cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2650:
    // 0x2c2650: 0x500b0036  beql        $zero, $t3, . + 4 + (0x36 << 2)
label_2c2654:
    if (ctx->pc == 0x2C2654u) {
        ctx->pc = 0x2C2654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2650u;
        // 0x2c2654: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2658u;
        goto label_2c2658;
    }
    ctx->pc = 0x2C2650u;
    {
        const bool branch_taken_0x2c2650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2c2650) {
            ctx->pc = 0x2C2654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2650u;
            // 0x2c2654: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C272Cu;
            goto label_2c272c;
        }
    }
    ctx->pc = 0x2C2658u;
label_2c2658:
    // 0x2c2658: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2658u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c265c:
    // 0x2c265c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c265cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2660:
    // 0x2c2660: 0x100d0200  beq         $zero, $t5, . + 4 + (0x200 << 2)
label_2c2664:
    if (ctx->pc == 0x2C2664u) {
        ctx->pc = 0x2C2664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2660u;
        // 0x2c2664: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2668u;
        goto label_2c2668;
    }
    ctx->pc = 0x2C2660u;
    {
        const bool branch_taken_0x2c2660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2C2664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2660u;
        // 0x2c2664: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2660) {
            ctx->pc = 0x2C2E64u;
            { ctx->pc = 0x2c2e64; return; }
        }
    }
    ctx->pc = 0x2C2668u;
label_2c2668:
    // 0x2c2668: 0x10060008  beq         $zero, $a2, . + 4 + (0x8 << 2)
label_2c266c:
    if (ctx->pc == 0x2C266Cu) {
        ctx->pc = 0x2C266Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2668u;
        // 0x2c266c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2670u;
        goto label_2c2670;
    }
    ctx->pc = 0x2C2668u;
    {
        const bool branch_taken_0x2c2668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2C266Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2668u;
        // 0x2c266c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2668) {
            ctx->pc = 0x2C268Cu;
            goto label_2c268c;
        }
    }
    ctx->pc = 0x2C2670u;
label_2c2670:
    // 0x2c2670: 0x10070001  beq         $zero, $a3, . + 4 + (0x1 << 2)
label_2c2674:
    if (ctx->pc == 0x2C2674u) {
        ctx->pc = 0x2C2674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2670u;
        // 0x2c2674: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2678u;
        goto label_2c2678;
    }
    ctx->pc = 0x2C2670u;
    {
        const bool branch_taken_0x2c2670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2C2674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2670u;
        // 0x2c2674: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2670) {
            ctx->pc = 0x2C2678u;
            goto label_2c2678;
        }
    }
    ctx->pc = 0x2C2678u;
label_2c2678:
    // 0x2c2678: 0x10080038  beq         $zero, $t0, . + 4 + (0x38 << 2)
label_2c267c:
    if (ctx->pc == 0x2C267Cu) {
        ctx->pc = 0x2C267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2678u;
        // 0x2c267c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2680u;
        goto label_2c2680;
    }
    ctx->pc = 0x2C2678u;
    {
        const bool branch_taken_0x2c2678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2C267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2678u;
        // 0x2c267c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2678) {
            ctx->pc = 0x2C275Cu;
            goto label_2c275c;
        }
    }
    ctx->pc = 0x2C2680u;
label_2c2680:
    // 0x2c2680: 0x10090012  beq         $zero, $t1, . + 4 + (0x12 << 2)
label_2c2684:
    if (ctx->pc == 0x2C2684u) {
        ctx->pc = 0x2C2684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2680u;
        // 0x2c2684: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2688u;
        goto label_2c2688;
    }
    ctx->pc = 0x2C2680u;
    {
        const bool branch_taken_0x2c2680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2C2684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2680u;
        // 0x2c2684: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2680) {
            ctx->pc = 0x2C26CCu;
            goto label_2c26cc;
        }
    }
    ctx->pc = 0x2C2688u;
label_2c2688:
    // 0x2c2688: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2c2688u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2c268c:
    // 0x2c268c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c268cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2690:
    // 0x2c2690: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2c2694:
    if (ctx->pc == 0x2C2694u) {
        ctx->pc = 0x2C2694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2690u;
        // 0x2c2694: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2698u;
        goto label_2c2698;
    }
    ctx->pc = 0x2C2690u;
    {
        const bool branch_taken_0x2c2690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C2694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2690u;
        // 0x2c2694: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2690) {
            ctx->pc = 0x2C2694u;
            goto label_2c2694;
        }
    }
    ctx->pc = 0x2C2698u;
label_2c2698:
    // 0x2c2698: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2698u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c269c:
    // 0x2c269c: 0x1000747  .word       0x01000747                   # srav        $zero, $zero, $t0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c269cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
label_2c26a0:
    // 0x2c26a0: 0x81e9437c  lb          $t1, 0x437C($t7)
    ctx->pc = 0x2c26a0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c26a4:
    // 0x2c26a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c26a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c26a8:
    // 0x2c26a8: 0x81ea437c  lb          $t2, 0x437C($t7)
    ctx->pc = 0x2c26a8u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c26ac:
    // 0x2c26ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c26acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c26b0:
    // 0x2c26b0: 0x81f0437c  lb          $s0, 0x437C($t7)
    ctx->pc = 0x2c26b0u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c26b4:
    // 0x2c26b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c26b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c26b8:
    // 0x2c26b8: 0x81f1437c  lb          $s1, 0x437C($t7)
    ctx->pc = 0x2c26b8u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c26bc:
    // 0x2c26bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c26bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c26c0:
    // 0x2c26c0: 0x81f2437c  lb          $s2, 0x437C($t7)
    ctx->pc = 0x2c26c0u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c26c4:
    // 0x2c26c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c26c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c26c8:
    // 0x2c26c8: 0x42020035  .word       0x42020035                   # INVALID     $s0, $v0, 0x35 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c26c8u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x35 at 0x2C26C8 raw=0x42020035");
 /* MITIGATED */
label_2c26cc:
    // 0x2c26cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c26ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c26d0:
    // 0x2c26d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c26d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c26d4:
    // 0x2c26d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c26d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c26d8:
    // 0x2c26d8: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2c26dc:
    if (ctx->pc == 0x2C26DCu) {
        ctx->pc = 0x2C26DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C26D8u;
        // 0x2c26dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C26E0u;
        goto label_2c26e0;
    }
    ctx->pc = 0x2C26D8u;
    {
        const bool branch_taken_0x2c26d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2C26DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C26D8u;
        // 0x2c26dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c26d8) {
            ctx->pc = 0x2D66E0u;
            return;
        }
    }
    ctx->pc = 0x2C26E0u;
label_2c26e0:
    // 0x2c26e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c26e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c26e4:
    // 0x2c26e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c26e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c26e8:
    // 0x2c26e8: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2c26ec:
    if (ctx->pc == 0x2C26ECu) {
        ctx->pc = 0x2C26ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C26E8u;
        // 0x2c26ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C26F0u;
        goto label_2c26f0;
    }
    ctx->pc = 0x2C26E8u;
    {
        const bool branch_taken_0x2c26e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2c26e8) {
            ctx->pc = 0x2C26ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C26E8u;
            // 0x2c26ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C46D8u;
            { ctx->pc = 0x2c46d8; return; }
        }
    }
    ctx->pc = 0x2C26F0u;
label_2c26f0:
    // 0x2c26f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c26f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c26f4:
    // 0x2c26f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c26f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c26f8:
    // 0x2c26f8: 0x10080012  beq         $zero, $t0, . + 4 + (0x12 << 2)
label_2c26fc:
    if (ctx->pc == 0x2C26FCu) {
        ctx->pc = 0x2C26FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C26F8u;
        // 0x2c26fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2700u;
        goto label_2c2700;
    }
    ctx->pc = 0x2C26F8u;
    {
        const bool branch_taken_0x2c26f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2C26FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C26F8u;
        // 0x2c26fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c26f8) {
            ctx->pc = 0x2C2744u;
            goto label_2c2744;
        }
    }
    ctx->pc = 0x2C2700u;
label_2c2700:
    // 0x2c2700: 0x42020022  .word       0x42020022                   # INVALID     $s0, $v0, 0x22 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c2700u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x22 at 0x2C2700 raw=0x42020022");
 /* MITIGATED */
label_2c2704:
    // 0x2c2704: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2704u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2708:
    // 0x2c2708: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2708u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c270c:
    // 0x2c270c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c270cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2710:
    // 0x2c2710: 0x500b001e  beql        $zero, $t3, . + 4 + (0x1E << 2)
label_2c2714:
    if (ctx->pc == 0x2C2714u) {
        ctx->pc = 0x2C2714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2710u;
        // 0x2c2714: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2718u;
        goto label_2c2718;
    }
    ctx->pc = 0x2C2710u;
    {
        const bool branch_taken_0x2c2710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2c2710) {
            ctx->pc = 0x2C2714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2710u;
            // 0x2c2714: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C278Cu;
            goto label_2c278c;
        }
    }
    ctx->pc = 0x2C2718u;
label_2c2718:
    // 0x2c2718: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2718u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c271c:
    // 0x2c271c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c271cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2720:
    // 0x2c2720: 0x100d0100  beq         $zero, $t5, . + 4 + (0x100 << 2)
label_2c2724:
    if (ctx->pc == 0x2C2724u) {
        ctx->pc = 0x2C2724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2720u;
        // 0x2c2724: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2728u;
        goto label_2c2728;
    }
    ctx->pc = 0x2C2720u;
    {
        const bool branch_taken_0x2c2720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2C2724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2720u;
        // 0x2c2724: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2720) {
            ctx->pc = 0x2C2B24u;
            goto label_2c2b24;
        }
    }
    ctx->pc = 0x2C2728u;
label_2c2728:
    // 0x2c2728: 0x10060004  beq         $zero, $a2, . + 4 + (0x4 << 2)
label_2c272c:
    if (ctx->pc == 0x2C272Cu) {
        ctx->pc = 0x2C272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2728u;
        // 0x2c272c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2730u;
        goto label_2c2730;
    }
    ctx->pc = 0x2C2728u;
    {
        const bool branch_taken_0x2c2728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2C272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2728u;
        // 0x2c272c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2728) {
            ctx->pc = 0x2C273Cu;
            goto label_2c273c;
        }
    }
    ctx->pc = 0x2C2730u;
label_2c2730:
    // 0x2c2730: 0x10070001  beq         $zero, $a3, . + 4 + (0x1 << 2)
label_2c2734:
    if (ctx->pc == 0x2C2734u) {
        ctx->pc = 0x2C2734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2730u;
        // 0x2c2734: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2738u;
        goto label_2c2738;
    }
    ctx->pc = 0x2C2730u;
    {
        const bool branch_taken_0x2c2730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2C2734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2730u;
        // 0x2c2734: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2730) {
            ctx->pc = 0x2C2738u;
            goto label_2c2738;
        }
    }
    ctx->pc = 0x2C2738u;
label_2c2738:
    // 0x2c2738: 0x10080012  beq         $zero, $t0, . + 4 + (0x12 << 2)
label_2c273c:
    if (ctx->pc == 0x2C273Cu) {
        ctx->pc = 0x2C273Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2738u;
        // 0x2c273c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2740u;
        goto label_2c2740;
    }
    ctx->pc = 0x2C2738u;
    {
        const bool branch_taken_0x2c2738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2C273Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2738u;
        // 0x2c273c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2738) {
            ctx->pc = 0x2C2784u;
            goto label_2c2784;
        }
    }
    ctx->pc = 0x2C2740u;
label_2c2740:
    // 0x2c2740: 0x10090038  beq         $zero, $t1, . + 4 + (0x38 << 2)
label_2c2744:
    if (ctx->pc == 0x2C2744u) {
        ctx->pc = 0x2C2744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2740u;
        // 0x2c2744: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2748u;
        goto label_2c2748;
    }
    ctx->pc = 0x2C2740u;
    {
        const bool branch_taken_0x2c2740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2C2744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2740u;
        // 0x2c2744: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2740) {
            ctx->pc = 0x2C2824u;
            goto label_2c2824;
        }
    }
    ctx->pc = 0x2C2748u;
label_2c2748:
    // 0x2c2748: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2c2748u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2c274c:
    // 0x2c274c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c274cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2750:
    // 0x2c2750: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2c2754:
    if (ctx->pc == 0x2C2754u) {
        ctx->pc = 0x2C2754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2750u;
        // 0x2c2754: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2758u;
        goto label_2c2758;
    }
    ctx->pc = 0x2C2750u;
    {
        const bool branch_taken_0x2c2750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C2754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2750u;
        // 0x2c2754: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2750) {
            ctx->pc = 0x2C2754u;
            goto label_2c2754;
        }
    }
    ctx->pc = 0x2C2758u;
label_2c2758:
    // 0x2c2758: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2758u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c275c:
    // 0x2c275c: 0x1000743  .word       0x01000743                   # sra         $zero, $zero, 29 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c275cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 29));
label_2c2760:
    // 0x2c2760: 0x81e9437c  lb          $t1, 0x437C($t7)
    ctx->pc = 0x2c2760u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c2764:
    // 0x2c2764: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2764u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2768:
    // 0x2c2768: 0x81ea437c  lb          $t2, 0x437C($t7)
    ctx->pc = 0x2c2768u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c276c:
    // 0x2c276c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c276cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2770:
    // 0x2c2770: 0x81f0437c  lb          $s0, 0x437C($t7)
    ctx->pc = 0x2c2770u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c2774:
    // 0x2c2774: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2774u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2778:
    // 0x2c2778: 0x81f1437c  lb          $s1, 0x437C($t7)
    ctx->pc = 0x2c2778u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c277c:
    // 0x2c277c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c277cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2780:
    // 0x2c2780: 0x81f2437c  lb          $s2, 0x437C($t7)
    ctx->pc = 0x2c2780u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c2784:
    // 0x2c2784: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2784u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2788:
    // 0x2c2788: 0x4202001d  .word       0x4202001D                   # INVALID     $s0, $v0, 0x1D # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c2788u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x1D at 0x2C2788 raw=0x4202001D");
 /* MITIGATED */
label_2c278c:
    // 0x2c278c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c278cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2790:
    // 0x2c2790: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2790u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2794:
    // 0x2c2794: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2794u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2798:
    // 0x2c2798: 0x120a5001  beq         $s0, $t2, . + 4 + (0x5001 << 2)
label_2c279c:
    if (ctx->pc == 0x2C279Cu) {
        ctx->pc = 0x2C279Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2798u;
        // 0x2c279c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C27A0u;
        goto label_2c27a0;
    }
    ctx->pc = 0x2C2798u;
    {
        const bool branch_taken_0x2c2798 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        ctx->pc = 0x2C279Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2798u;
        // 0x2c279c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2798) {
            ctx->pc = 0x2D67A0u;
            return;
        }
    }
    ctx->pc = 0x2C27A0u;
label_2c27a0:
    // 0x2c27a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c27a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c27a4:
    // 0x2c27a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c27a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c27a8:
    // 0x2c27a8: 0x520a07fb  beql        $s0, $t2, . + 4 + (0x7FB << 2)
label_2c27ac:
    if (ctx->pc == 0x2C27ACu) {
        ctx->pc = 0x2C27ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C27A8u;
        // 0x2c27ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C27B0u;
        goto label_2c27b0;
    }
    ctx->pc = 0x2C27A8u;
    {
        const bool branch_taken_0x2c27a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 10));
        if (branch_taken_0x2c27a8) {
            ctx->pc = 0x2C27ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C27A8u;
            // 0x2c27ac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4798u;
            { ctx->pc = 0x2c4798; return; }
        }
    }
    ctx->pc = 0x2C27B0u;
label_2c27b0:
    // 0x2c27b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c27b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c27b4:
    // 0x2c27b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c27b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c27b8:
    // 0x2c27b8: 0x10080038  beq         $zero, $t0, . + 4 + (0x38 << 2)
label_2c27bc:
    if (ctx->pc == 0x2C27BCu) {
        ctx->pc = 0x2C27BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C27B8u;
        // 0x2c27bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C27C0u;
        goto label_2c27c0;
    }
    ctx->pc = 0x2C27B8u;
    {
        const bool branch_taken_0x2c27b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 8));
        ctx->pc = 0x2C27BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C27B8u;
        // 0x2c27bc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c27b8) {
            ctx->pc = 0x2C289Cu;
            goto label_2c289c;
        }
    }
    ctx->pc = 0x2C27C0u;
label_2c27c0:
    // 0x2c27c0: 0x4202000a  .word       0x4202000A                   # INVALID     $s0, $v0, 0xA # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c27c0u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0xA at 0x2C27C0 raw=0x4202000A");
 /* MITIGATED */
label_2c27c4:
    // 0x2c27c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c27c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c27c8:
    // 0x2c27c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c27c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c27cc:
    // 0x2c27cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c27ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c27d0:
    // 0x2c27d0: 0x500b0006  beql        $zero, $t3, . + 4 + (0x6 << 2)
label_2c27d4:
    if (ctx->pc == 0x2C27D4u) {
        ctx->pc = 0x2C27D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C27D0u;
        // 0x2c27d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C27D8u;
        goto label_2c27d8;
    }
    ctx->pc = 0x2C27D0u;
    {
        const bool branch_taken_0x2c27d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        if (branch_taken_0x2c27d0) {
            ctx->pc = 0x2C27D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C27D0u;
            // 0x2c27d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C27ECu;
            goto label_2c27ec;
        }
    }
    ctx->pc = 0x2C27D8u;
label_2c27d8:
    // 0x2c27d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c27d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c27dc:
    // 0x2c27dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c27dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c27e0:
    // 0x2c27e0: 0x10030038  beq         $zero, $v1, . + 4 + (0x38 << 2)
label_2c27e4:
    if (ctx->pc == 0x2C27E4u) {
        ctx->pc = 0x2C27E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C27E0u;
        // 0x2c27e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C27E8u;
        goto label_2c27e8;
    }
    ctx->pc = 0x2C27E0u;
    {
        const bool branch_taken_0x2c27e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C27E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C27E0u;
        // 0x2c27e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c27e0) {
            ctx->pc = 0x2C28C4u;
            goto label_2c28c4;
        }
    }
    ctx->pc = 0x2C27E8u;
label_2c27e8:
    // 0x2c27e8: 0x800b02b0  lb          $t3, 0x2B0($zero)
    ctx->pc = 0x2c27e8u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x2B0u));
label_2c27ec:
    // 0x2c27ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c27ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c27f0:
    // 0x2c27f0: 0x100b0000  beq         $zero, $t3, . + 4 + (0x0 << 2)
label_2c27f4:
    if (ctx->pc == 0x2C27F4u) {
        ctx->pc = 0x2C27F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C27F0u;
        // 0x2c27f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C27F8u;
        goto label_2c27f8;
    }
    ctx->pc = 0x2C27F0u;
    {
        const bool branch_taken_0x2c27f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C27F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C27F0u;
        // 0x2c27f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c27f0) {
            ctx->pc = 0x2C27F4u;
            goto label_2c27f4;
        }
    }
    ctx->pc = 0x2C27F8u;
label_2c27f8:
    // 0x2c27f8: 0x42010075  .word       0x42010075                   # INVALID     $s0, $at, 0x75 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c27f8u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x35 at 0x2C27F8 raw=0x42010075");
 /* MITIGATED */
label_2c27fc:
    // 0x2c27fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c27fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2800:
    // 0x2c2800: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2800u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2804:
    // 0x2c2804: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2804u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2808:
    // 0x2c2808: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2c2808u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2C2808 raw=0x48007800");
 /* MITIGATED */
label_2c280c:
    // 0x2c280c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c280cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2810:
    // 0x2c2810: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2810u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2814:
    // 0x2c2814: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2814u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2818:
    // 0x2c2818: 0x1f54000  .word       0x01F54000                   # sll         $t0, $s5, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2818u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), 0));
label_2c281c:
    // 0x2c281c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c281cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2820:
    // 0x2c2820: 0x1f64001  .word       0x01F64001                   # INVALID     $t7, $s6, 0x4001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2820u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2C2820 raw=0x01F64001");
 /* MITIGATED */
label_2c2824:
    // 0x2c2824: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2824u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2828:
    // 0x2c2828: 0x1f74002  .word       0x01F74002                   # srl         $t0, $s7, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2828u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 23), 0));
label_2c282c:
    // 0x2c282c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c282cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2830:
    // 0x2c2830: 0x1f84003  .word       0x01F84003                   # sra         $t0, $t8, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2830u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 24), 0));
label_2c2834:
    // 0x2c2834: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2834u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2838:
    // 0x2c2838: 0x1f94004  sllv        $t0, $t9, $t7
    ctx->pc = 0x2c2838u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 15) & 0x1F));
label_2c283c:
    // 0x2c283c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c283cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2840:
    // 0x2c2840: 0x81e9ab7d  lb          $t1, -0x5483($t7)
    ctx->pc = 0x2c2840u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2c2844:
    // 0x2c2844: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2844u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2848:
    // 0x2c2848: 0x81e9b37d  lb          $t1, -0x4C83($t7)
    ctx->pc = 0x2c2848u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
label_2c284c:
    // 0x2c284c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c284cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2850:
    // 0x2c2850: 0x81e9bb7d  lb          $t1, -0x4483($t7)
    ctx->pc = 0x2c2850u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294949757)));
label_2c2854:
    // 0x2c2854: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2854u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2858:
    // 0x2c2858: 0x81e9c37d  lb          $t1, -0x3C83($t7)
    ctx->pc = 0x2c2858u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294951805)));
label_2c285c:
    // 0x2c285c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c285cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2860:
    // 0x2c2860: 0x81e9cb7d  lb          $t1, -0x3483($t7)
    ctx->pc = 0x2c2860u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
label_2c2864:
    // 0x2c2864: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2864u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2868:
    // 0x2c2868: 0x48001000  .word       0x48001000                   # INVALID     $zero, $zero, 0x1000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2c2868u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2C2868 raw=0x48001000");
 /* MITIGATED */
label_2c286c:
    // 0x2c286c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c286cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2870:
    // 0x2c2870: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2870u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2874:
    // 0x2c2874: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2874u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2878:
    // 0x2c2878: 0x81e9437c  lb          $t1, 0x437C($t7)
    ctx->pc = 0x2c2878u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c287c:
    // 0x2c287c: 0x1e9fce8  .word       0x01E9FCE8                   # mfsa        $ra # 01E904C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c287cu;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2c2880:
    // 0x2c2880: 0x81ea437c  lb          $t2, 0x437C($t7)
    ctx->pc = 0x2c2880u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c2884:
    // 0x2c2884: 0x1eafd28  .word       0x01EAFD28                   # mfsa        $ra # 01EA0500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c2884u;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2c2888:
    // 0x2c2888: 0x81f0437c  lb          $s0, 0x437C($t7)
    ctx->pc = 0x2c2888u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c288c:
    // 0x2c288c: 0x1f0fd68  .word       0x01F0FD68                   # mfsa        $ra # 01F00540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c288cu;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2c2890:
    // 0x2c2890: 0x81f1437c  lb          $s1, 0x437C($t7)
    ctx->pc = 0x2c2890u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c2894:
    // 0x2c2894: 0x1f1fda8  .word       0x01F1FDA8                   # mfsa        $ra # 01F10580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c2894u;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2c2898:
    // 0x2c2898: 0x81f2437c  lb          $s2, 0x437C($t7)
    ctx->pc = 0x2c2898u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17276)));
label_2c289c:
    // 0x2c289c: 0x1f2fde8  .word       0x01F2FDE8                   # mfsa        $ra # 01F205C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c289cu;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_2c28a0:
    // 0x2c28a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c28a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c28a4:
    // 0x2c28a4: 0x1d399ff  .word       0x01D399FF                   # dsra32      $s3, $s3, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c28a4u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 7));
label_2c28a8:
    // 0x2c28a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c28a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c28ac:
    // 0x2c28ac: 0x1c949ff  .word       0x01C949FF                   # dsra32      $t1, $t1, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c28acu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 7));
label_2c28b0:
    // 0x2c28b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c28b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c28b4:
    // 0x2c28b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c28b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c28b8:
    // 0x2c28b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c28b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c28bc:
    // 0x2c28bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c28bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c28c0:
    // 0x2c28c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c28c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c28c4:
    // 0x2c28c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c28c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c28c8:
    // 0x2c28c8: 0x38010000  xori        $at, $zero, 0x0
    ctx->pc = 0x2c28c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) ^ (uint64_t)(uint16_t)0);
label_2c28cc:
    // 0x2c28cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c28ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c28d0:
    // 0x2c28d0: 0x800d0934  lb          $t5, 0x934($zero)
    ctx->pc = 0x2c28d0u;
    SET_GPR_S32(ctx, 13, (int8_t)FAST_READ8(0x934u));
label_2c28d4:
    // 0x2c28d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c28d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c28d8:
    // 0x2c28d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c28d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c28dc:
    // 0x2c28dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c28dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c28e0:
    // 0x2c28e0: 0x50040011  beql        $zero, $a0, . + 4 + (0x11 << 2)
label_2c28e4:
    if (ctx->pc == 0x2C28E4u) {
        ctx->pc = 0x2C28E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C28E0u;
        // 0x2c28e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C28E8u;
        goto label_2c28e8;
    }
    ctx->pc = 0x2C28E0u;
    {
        const bool branch_taken_0x2c28e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c28e0) {
            ctx->pc = 0x2C28E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C28E0u;
            // 0x2c28e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2928u;
            goto label_2c2928;
        }
    }
    ctx->pc = 0x2C28E8u;
label_2c28e8:
    // 0x2c28e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c28e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c28ec:
    // 0x2c28ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c28ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c28f0:
    // 0x2c28f0: 0x80060934  lb          $a2, 0x934($zero)
    ctx->pc = 0x2c28f0u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x934u));
label_2c28f4:
    // 0x2c28f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c28f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c28f8:
    // 0x2c28f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c28f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c28fc:
    // 0x2c28fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c28fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2900:
    // 0x2c2900: 0x50040003  beql        $zero, $a0, . + 4 + (0x3 << 2)
label_2c2904:
    if (ctx->pc == 0x2C2904u) {
        ctx->pc = 0x2C2904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2900u;
        // 0x2c2904: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2908u;
        goto label_2c2908;
    }
    ctx->pc = 0x2C2900u;
    {
        const bool branch_taken_0x2c2900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c2900) {
            ctx->pc = 0x2C2904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2900u;
            // 0x2c2904: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2910u;
            goto label_2c2910;
        }
    }
    ctx->pc = 0x2C2908u;
label_2c2908:
    // 0x2c2908: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2908u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c290c:
    // 0x2c290c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c290cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2910:
    // 0x2c2910: 0x40000024  .word       0x40000024                   # mfc0        $zero, Index # 00000024 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c2910u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c2914:
    // 0x2c2914: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2914u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2918:
    // 0x2c2918: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2918u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c291c:
    // 0x2c291c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c291cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2920:
    // 0x2c2920: 0x42010024  .word       0x42010024                   # INVALID     $s0, $at, 0x24 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c2920u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x24 at 0x2C2920 raw=0x42010024");
 /* MITIGATED */
label_2c2924:
    // 0x2c2924: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2924u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2928:
    // 0x2c2928: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2928u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c292c:
    // 0x2c292c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c292cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2930:
    // 0x2c2930: 0x81e9c37d  lb          $t1, -0x3C83($t7)
    ctx->pc = 0x2c2930u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294951805)));
label_2c2934:
    // 0x2c2934: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2934u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2938:
    // 0x2c2938: 0x81e9cb7d  lb          $t1, -0x3483($t7)
    ctx->pc = 0x2c2938u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
label_2c293c:
    // 0x2c293c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c293cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2940:
    // 0x2c2940: 0x81e9d37d  lb          $t1, -0x2C83($t7)
    ctx->pc = 0x2c2940u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294955901)));
label_2c2944:
    // 0x2c2944: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2944u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2948:
    // 0x2c2948: 0x81e9db7d  lb          $t1, -0x2483($t7)
    ctx->pc = 0x2c2948u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294957949)));
label_2c294c:
    // 0x2c294c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c294cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2950:
    // 0x2c2950: 0x81e9e37d  lb          $t1, -0x1C83($t7)
    ctx->pc = 0x2c2950u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294959997)));
label_2c2954:
    // 0x2c2954: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2954u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2958:
    // 0x2c2958: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2c295c:
    if (ctx->pc == 0x2C295Cu) {
        ctx->pc = 0x2C295Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2958u;
        // 0x2c295c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2960u;
        goto label_2c2960;
    }
    ctx->pc = 0x2C2958u;
    {
        const bool branch_taken_0x2c2958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C295Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2958u;
        // 0x2c295c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2958) {
            ctx->pc = 0x2D8960u;
            return;
        }
    }
    ctx->pc = 0x2C2960u;
label_2c2960:
    // 0x2c2960: 0x4000001a  .word       0x4000001A                   # mfc0        $zero, Index # 0000001A <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c2960u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c2964:
    // 0x2c2964: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2964u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2968:
    // 0x2c2968: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2968u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c296c:
    // 0x2c296c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c296cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2970:
    // 0x2c2970: 0x80060934  lb          $a2, 0x934($zero)
    ctx->pc = 0x2c2970u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x934u));
label_2c2974:
    // 0x2c2974: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2974u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2978:
    // 0x2c2978: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2978u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c297c:
    // 0x2c297c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c297cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2980:
    // 0x2c2980: 0x50040010  beql        $zero, $a0, . + 4 + (0x10 << 2)
label_2c2984:
    if (ctx->pc == 0x2C2984u) {
        ctx->pc = 0x2C2984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2980u;
        // 0x2c2984: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2988u;
        goto label_2c2988;
    }
    ctx->pc = 0x2C2980u;
    {
        const bool branch_taken_0x2c2980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c2980) {
            ctx->pc = 0x2C2984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2980u;
            // 0x2c2984: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C29C4u;
            goto label_2c29c4;
        }
    }
    ctx->pc = 0x2C2988u;
label_2c2988:
    // 0x2c2988: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2988u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c298c:
    // 0x2c298c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c298cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2990:
    // 0x2c2990: 0x42010016  .word       0x42010016                   # INVALID     $s0, $at, 0x16 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x2c2990u;
//     throw std::runtime_error("Unhandled COP0 CO-OP: 0x16 at 0x2C2990 raw=0x42010016");
 /* MITIGATED */
label_2c2994:
    // 0x2c2994: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2994u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2998:
    // 0x2c2998: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2998u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c299c:
    // 0x2c299c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c299cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c29a0:
    // 0x2c29a0: 0x81e99b7d  lb          $t1, -0x6483($t7)
    ctx->pc = 0x2c29a0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294941565)));
label_2c29a4:
    // 0x2c29a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c29a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c29a8:
    // 0x2c29a8: 0x81e9a37d  lb          $t1, -0x5C83($t7)
    ctx->pc = 0x2c29a8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2c29ac:
    // 0x2c29ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c29acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c29b0:
    // 0x2c29b0: 0x81e9ab7d  lb          $t1, -0x5483($t7)
    ctx->pc = 0x2c29b0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2c29b4:
    // 0x2c29b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c29b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c29b8:
    // 0x2c29b8: 0x81e9b37d  lb          $t1, -0x4C83($t7)
    ctx->pc = 0x2c29b8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
label_2c29bc:
    // 0x2c29bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c29bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c29c0:
    // 0x2c29c0: 0x81e9bb7d  lb          $t1, -0x4483($t7)
    ctx->pc = 0x2c29c0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294949757)));
label_2c29c4:
    // 0x2c29c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c29c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c29c8:
    // 0x2c29c8: 0x81e9c37d  lb          $t1, -0x3C83($t7)
    ctx->pc = 0x2c29c8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294951805)));
label_2c29cc:
    // 0x2c29cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c29ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c29d0:
    // 0x2c29d0: 0x81e9cb7d  lb          $t1, -0x3483($t7)
    ctx->pc = 0x2c29d0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953853)));
label_2c29d4:
    // 0x2c29d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c29d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c29d8:
    // 0x2c29d8: 0x81e9d37d  lb          $t1, -0x2C83($t7)
    ctx->pc = 0x2c29d8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294955901)));
label_2c29dc:
    // 0x2c29dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c29dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c29e0:
    // 0x2c29e0: 0x81e9db7d  lb          $t1, -0x2483($t7)
    ctx->pc = 0x2c29e0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294957949)));
label_2c29e4:
    // 0x2c29e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c29e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c29e8:
    // 0x2c29e8: 0x81e9e37d  lb          $t1, -0x1C83($t7)
    ctx->pc = 0x2c29e8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294959997)));
label_2c29ec:
    // 0x2c29ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c29ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c29f0:
    // 0x2c29f0: 0x100b5802  beq         $zero, $t3, . + 4 + (0x5802 << 2)
label_2c29f4:
    if (ctx->pc == 0x2C29F4u) {
        ctx->pc = 0x2C29F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C29F0u;
        // 0x2c29f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C29F8u;
        goto label_2c29f8;
    }
    ctx->pc = 0x2C29F0u;
    {
        const bool branch_taken_0x2c29f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C29F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C29F0u;
        // 0x2c29f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c29f0) {
            ctx->pc = 0x2D89FCu;
            return;
        }
    }
    ctx->pc = 0x2C29F8u;
label_2c29f8:
    // 0x2c29f8: 0x40000007  .word       0x40000007                   # mfc0        $zero, Index # 00000007 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c29f8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c29fc:
    // 0x2c29fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c29fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2a00:
    // 0x2c2a00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2a00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2a04:
    // 0x2c2a04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2a04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2a08:
    // 0x2c2a08: 0x81e99b7d  lb          $t1, -0x6483($t7)
    ctx->pc = 0x2c2a08u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294941565)));
label_2c2a0c:
    // 0x2c2a0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2a0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2a10:
    // 0x2c2a10: 0x81e9a37d  lb          $t1, -0x5C83($t7)
    ctx->pc = 0x2c2a10u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2c2a14:
    // 0x2c2a14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2a14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2a18:
    // 0x2c2a18: 0x81e9ab7d  lb          $t1, -0x5483($t7)
    ctx->pc = 0x2c2a18u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2c2a1c:
    // 0x2c2a1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2a1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2a20:
    // 0x2c2a20: 0x81e9b37d  lb          $t1, -0x4C83($t7)
    ctx->pc = 0x2c2a20u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
label_2c2a24:
    // 0x2c2a24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2a24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2a28:
    // 0x2c2a28: 0x81e9bb7d  lb          $t1, -0x4483($t7)
    ctx->pc = 0x2c2a28u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294949757)));
label_2c2a2c:
    // 0x2c2a2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2a2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2a30:
    // 0x2c2a30: 0x100b5801  beq         $zero, $t3, . + 4 + (0x5801 << 2)
label_2c2a34:
    if (ctx->pc == 0x2C2A34u) {
        ctx->pc = 0x2C2A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2A30u;
        // 0x2c2a34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2A38u;
        goto label_2c2a38;
    }
    ctx->pc = 0x2C2A30u;
    {
        const bool branch_taken_0x2c2a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 11));
        ctx->pc = 0x2C2A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2A30u;
        // 0x2c2a34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2a30) {
            ctx->pc = 0x2D8A38u;
            return;
        }
    }
    ctx->pc = 0x2C2A38u;
label_2c2a38:
    // 0x2c2a38: 0x48001000  .word       0x48001000                   # INVALID     $zero, $zero, 0x1000 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2c2a38u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2C2A38 raw=0x48001000");
 /* MITIGATED */
label_2c2a3c:
    // 0x2c2a3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2a3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2a40:
    // 0x2c2a40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2a40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2a44:
    // 0x2c2a44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2a44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2a48:
    // 0x2c2a48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2a48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2a4c:
    // 0x2c2a4c: 0x3d9e58  .word       0x003D9E58                   # mult        $s3, $at, $sp # 00000640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c2a4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_2c2a50:
    // 0x2c2a50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2a50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2a54:
    // 0x2c2a54: 0x3d4e98  .word       0x003D4E98                   # mult        $t1, $at, $sp # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c2a54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_2c2a58:
    // 0x2c2a58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2a58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2a5c:
    // 0x2c2a5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2a5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2a60:
    // 0x2c2a60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2a60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2a64:
    // 0x2c2a64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2a64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2a68:
    // 0x2c2a68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2a68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2a6c:
    // 0x2c2a6c: 0x1f99e47  .word       0x01F99E47                   # srav        $s3, $t9, $t7 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2a6cu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 25), GPR_U32(ctx, 15) & 0x1F));
label_2c2a70:
    // 0x2c2a70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2a70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2a74:
    // 0x2c2a74: 0x1fa4e87  .word       0x01FA4E87                   # srav        $t1, $k0, $t7 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2a74u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 26), GPR_U32(ctx, 15) & 0x1F));
label_2c2a78:
    // 0x2c2a78: 0x80070330  lb          $a3, 0x330($zero)
    ctx->pc = 0x2c2a78u;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x330u));
label_2c2a7c:
    // 0x2c2a7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2a7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2a80:
    // 0x2c2a80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2a80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2a84:
    // 0x2c2a84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2a84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2a88:
    // 0x2c2a88: 0x500c0007  beql        $zero, $t4, . + 4 + (0x7 << 2)
label_2c2a8c:
    if (ctx->pc == 0x2C2A8Cu) {
        ctx->pc = 0x2C2A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2A88u;
        // 0x2c2a8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2A90u;
        goto label_2c2a90;
    }
    ctx->pc = 0x2C2A88u;
    {
        const bool branch_taken_0x2c2a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 12));
        if (branch_taken_0x2c2a88) {
            ctx->pc = 0x2C2A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2A88u;
            // 0x2c2a8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2AA8u;
            goto label_2c2aa8;
        }
    }
    ctx->pc = 0x2C2A90u;
label_2c2a90:
    // 0x2c2a90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2a90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2a94:
    // 0x2c2a94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2a94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2a98:
    // 0x2c2a98: 0x81f9cb3d  lb          $t9, -0x34C3($t7)
    ctx->pc = 0x2c2a98u;
    SET_GPR_S32(ctx, 25, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294953789)));
label_2c2a9c:
    // 0x2c2a9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2a9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2aa0:
    // 0x2c2aa0: 0x81fad33d  lb          $k0, -0x2CC3($t7)
    ctx->pc = 0x2c2aa0u;
    SET_GPR_S32(ctx, 26, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294955837)));
label_2c2aa4:
    // 0x2c2aa4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2aa4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2aa8:
    // 0x2c2aa8: 0x120c6001  beq         $s0, $t4, . + 4 + (0x6001 << 2)
label_2c2aac:
    if (ctx->pc == 0x2C2AACu) {
        ctx->pc = 0x2C2AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2AA8u;
        // 0x2c2aac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2AB0u;
        goto label_2c2ab0;
    }
    ctx->pc = 0x2C2AA8u;
    {
        const bool branch_taken_0x2c2aa8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 12));
        ctx->pc = 0x2C2AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2AA8u;
        // 0x2c2aac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2aa8) {
            ctx->pc = 0x2DAAB0u;
            return;
        }
    }
    ctx->pc = 0x2C2AB0u;
label_2c2ab0:
    // 0x2c2ab0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2ab0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2ab4:
    // 0x2c2ab4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2ab4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2ab8:
    // 0x2c2ab8: 0x400007f9  .word       0x400007F9                   # mfc0        $zero, Index # 000007F9 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c2ab8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2c2abc:
    // 0x2c2abc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2abcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2ac0:
    // 0x2c2ac0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2ac0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2ac4:
    // 0x2c2ac4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2ac4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2ac8:
    // 0x2c2ac8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2ac8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2acc:
    // 0x2c2acc: 0x1d9d6ec  .word       0x01D9D6EC                   # dadd        $k0, $t6, $t9 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2accu;
    { int64_t a = (int64_t)GPR_S64(ctx, 14); int64_t b = (int64_t)GPR_S64(ctx, 25); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 26, r); }
label_2c2ad0:
    // 0x2c2ad0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2ad0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2ad4:
    // 0x2c2ad4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2ad4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2ad8:
    // 0x2c2ad8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2ad8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2adc:
    // 0x2c2adc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2adcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2ae0:
    // 0x2c2ae0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2ae0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2ae4:
    // 0x2c2ae4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2ae4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2ae8:
    // 0x2c2ae8: 0x801bcbbc  lb          $k1, -0x3444($zero)
    ctx->pc = 0x2c2ae8u;
    SET_GPR_S32(ctx, 27, (int8_t)runtime->Load8(rdram, ctx, 0xFFFFCBBCu));
label_2c2aec:
    // 0x2c2aec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2aecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2af0:
    // 0x2c2af0: 0x800003bf  lb          $zero, 0x3BF($zero)
    ctx->pc = 0x2c2af0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x3BFu));
label_2c2af4:
    // 0x2c2af4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2af4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2af8:
    // 0x2c2af8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2af8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2afc:
    // 0x2c2afc: 0x800760  .word       0x00800760                   # add         $zero, $a0, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2afcu;
    {     int32_t rs_val = GPR_S32(ctx, 4);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2c2b00:
    // 0x2c2b00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2b00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2b04:
    // 0x2c2b04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2b04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2b08:
    // 0x2c2b08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2b08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2b0c:
    // 0x2c2b0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2b0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2b10:
    // 0x2c2b10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2b10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2b14:
    // 0x2c2b14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2b14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2b18:
    // 0x2c2b18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2b18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2b1c:
    // 0x2c2b1c: 0x9de9fd  .word       0x009DE9FD                   # INVALID     $a0, $sp, -0x1603 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2b1cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C2B1C raw=0x009DE9FD");
 /* MITIGATED */
label_2c2b20:
    // 0x2c2b20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2b20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2b24:
    // 0x2c2b24: 0x1f34e2c  .word       0x01F34E2C                   # dadd        $t1, $t7, $s3 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2b24u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 19); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, r); }
label_2c2b28:
    // 0x2c2b28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2b28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2b2c:
    // 0x2c2b2c: 0x1f4566c  .word       0x01F4566C                   # dadd        $t2, $t7, $s4 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2b2cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 20); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 10, r); }
label_2c2b30:
    // 0x2c2b30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2b30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2b34:
    // 0x2c2b34: 0x1f586ac  .word       0x01F586AC                   # dadd        $s0, $t7, $s5 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2b34u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 21); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, r); }
label_2c2b38:
    // 0x2c2b38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2b38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2b3c:
    // 0x2c2b3c: 0x1f68eec  .word       0x01F68EEC                   # dadd        $s1, $t7, $s6 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2b3cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 22); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 17, r); }
label_2c2b40:
    // 0x2c2b40: 0x0  nop
    ctx->pc = 0x2c2b40u;
    // NOP
label_2c2b44:
    // 0x2c2b44: 0x4a630650  vmaxx.zw    $vf25, $vf0, $vf3x
    ctx->pc = 0x2c2b44u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
label_2c2b48:
    // 0x2c2b48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2b48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2b4c:
    // 0x2c2b4c: 0x1f7972c  .word       0x01F7972C                   # dadd        $s2, $t7, $s7 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2b4cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 23); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, r); }
label_2c2b50:
    // 0x2c2b50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2b50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2b54:
    // 0x2c2b54: 0x1fdc619  .word       0x01FDC619                   # multu       $t7, $sp # 0000C600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2b54u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 15) * (uint64_t)GPR_U32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 24, (int32_t)result); }
label_2c2b58:
    // 0x2c2b58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2b58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2b5c:
    // 0x2c2b5c: 0x1fdce59  .word       0x01FDCE59                   # multu       $t7, $sp # 0000CE40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2b5cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 15) * (uint64_t)GPR_U32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 25, (int32_t)result); }
label_2c2b60:
    // 0x2c2b60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2b60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2b64:
    // 0x2c2b64: 0x1fdd699  .word       0x01FDD699                   # multu       $t7, $sp # 0000D680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2b64u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 15) * (uint64_t)GPR_U32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 26, (int32_t)result); }
label_2c2b68:
    // 0x2c2b68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2b68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2b6c:
    // 0x2c2b6c: 0x1fdded9  .word       0x01FDDED9                   # multu       $t7, $sp # 0000DEC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2b6cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 15) * (uint64_t)GPR_U32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
label_2c2b70:
    // 0x2c2b70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2b70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2b74:
    // 0x2c2b74: 0x1fde719  .word       0x01FDE719                   # multu       $t7, $sp # 0000E700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2b74u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 15) * (uint64_t)GPR_U32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 28, (int32_t)result); }
label_2c2b78:
    // 0x2c2b78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2b78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2b7c:
    // 0x2c2b7c: 0x1f3c628  .word       0x01F3C628                   # mfsa        $t8 # 01F30600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c2b7cu;
    SET_GPR_U32(ctx, 24, ctx->sa);
label_2c2b80:
    // 0x2c2b80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2b80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2b84:
    // 0x2c2b84: 0x1f4ce68  .word       0x01F4CE68                   # mfsa        $t9 # 01F40640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c2b84u;
    SET_GPR_U32(ctx, 25, ctx->sa);
label_2c2b88:
    // 0x2c2b88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2b88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2b8c:
    // 0x2c2b8c: 0x1f5d6a8  .word       0x01F5D6A8                   # mfsa        $k0 # 01F50680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c2b8cu;
    SET_GPR_U32(ctx, 26, ctx->sa);
label_2c2b90:
    // 0x2c2b90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2b90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2b94:
    // 0x2c2b94: 0x1f6dee8  .word       0x01F6DEE8                   # mfsa        $k1 # 01F606C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c2b94u;
    SET_GPR_U32(ctx, 27, ctx->sa);
label_2c2b98:
    // 0x2c2b98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2b98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2b9c:
    // 0x2c2b9c: 0x1f7e728  .word       0x01F7E728                   # mfsa        $gp # 01F70700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c2b9cu;
    SET_GPR_U32(ctx, 28, ctx->sa);
label_2c2ba0:
    // 0x2c2ba0: 0x48000800  .word       0x48000800                   # INVALID     $zero, $zero, 0x800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2c2ba0u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x2C2BA0 raw=0x48000800");
 /* MITIGATED */
label_2c2ba4:
    // 0x2c2ba4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2ba4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2ba8:
    // 0x2c2ba8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2ba8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2bac:
    // 0x2c2bac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2bacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2bb0:
    // 0x2c2bb0: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x2c2bb0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
label_2c2bb4:
    // 0x2c2bb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2bb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2bb8:
    // 0x2c2bb8: 0x808613fe  lb          $a2, 0x13FE($a0)
    ctx->pc = 0x2c2bb8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5118)));
label_2c2bbc:
    // 0x2c2bbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2bbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2bc0:
    // 0x2c2bc0: 0x1fa0005  .word       0x01FA0005                   # INVALID     $t7, $k0, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2bc0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2C2BC0 raw=0x01FA0005");
 /* MITIGATED */
label_2c2bc4:
    // 0x2c2bc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2bc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2bc8:
    // 0x2c2bc8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2bc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2bcc:
    // 0x2c2bcc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2bccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2bd0:
    // 0x2c2bd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2bd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2bd4:
    // 0x2c2bd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2bd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2bd8:
    // 0x2c2bd8: 0x800a31f0  lb          $t2, 0x31F0($zero)
    ctx->pc = 0x2c2bd8u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x31F0u));
label_2c2bdc:
    // 0x2c2bdc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2bdcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2be0:
    // 0x2c2be0: 0x800a39f0  lb          $t2, 0x39F0($zero)
    ctx->pc = 0x2c2be0u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x39F0u));
label_2c2be4:
    // 0x2c2be4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2be4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2be8:
    // 0x2c2be8: 0x800a39f0  lb          $t2, 0x39F0($zero)
    ctx->pc = 0x2c2be8u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x39F0u));
label_2c2bec:
    // 0x2c2bec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2becu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2bf0:
    // 0x2c2bf0: 0x10073801  beq         $zero, $a3, . + 4 + (0x3801 << 2)
label_2c2bf4:
    if (ctx->pc == 0x2C2BF4u) {
        ctx->pc = 0x2C2BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2BF0u;
        // 0x2c2bf4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2BF8u;
        goto label_2c2bf8;
    }
    ctx->pc = 0x2C2BF0u;
    {
        const bool branch_taken_0x2c2bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 7));
        ctx->pc = 0x2C2BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2BF0u;
        // 0x2c2bf4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2bf0) {
            ctx->pc = 0x2D0BF8u;
            return;
        }
    }
    ctx->pc = 0x2C2BF8u;
label_2c2bf8:
    // 0x2c2bf8: 0x802713ff  lb          $a3, 0x13FF($at)
    ctx->pc = 0x2c2bf8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 5119)));
label_2c2bfc:
    // 0x2c2bfc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2bfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2c00:
    // 0x2c2c00: 0x81e6d37d  lb          $a2, -0x2C83($t7)
    ctx->pc = 0x2c2c00u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294955901)));
label_2c2c04:
    // 0x2c2c04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2c04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2c08:
    // 0x2c2c08: 0x81e7d37d  lb          $a3, -0x2C83($t7)
    ctx->pc = 0x2c2c08u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294955901)));
label_2c2c0c:
    // 0x2c2c0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2c0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2c10:
    // 0x2c2c10: 0x1f0000a  movz        $zero, $t7, $s0
    ctx->pc = 0x2c2c10u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 15));
label_2c2c14:
    // 0x2c2c14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2c14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2c18:
    // 0x2c2c18: 0x1f1000b  movn        $zero, $t7, $s1
    ctx->pc = 0x2c2c18u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 15));
label_2c2c1c:
    // 0x2c2c1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2c1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2c20:
    // 0x2c2c20: 0x1f2000c  .word       0x01F2000C                   # syscall     0 # 01F20000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2c20u;
    ctx->pc = 0x2C2C24u;
runtime->handleSyscall(rdram, ctx, 0x7C800u);
label_2c2c24:
    // 0x2c2c24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2c24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2c28:
    // 0x2c2c28: 0x1f3000d  break       499
    ctx->pc = 0x2c2c28u;
    runtime->handleBreak(rdram, ctx);
label_2c2c2c:
    // 0x2c2c2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2c2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2c30:
    // 0x2c2c30: 0xb0a37ff  j           func_C28DFFC
label_2c2c34:
    if (ctx->pc == 0x2C2C34u) {
        ctx->pc = 0x2C2C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2C30u;
        // 0x2c2c34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2C38u;
        goto label_2c2c38;
    }
    ctx->pc = 0x2C2C30u;
    ctx->pc = 0x2C2C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2C30u;
    // 0x2c2c34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC28DFFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC28DFFCu, 0x2C2C30u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2C2C38u;
label_2c2c38:
    // 0x2c2c38: 0xb0a3fff  j           func_C28FFFC
label_2c2c3c:
    if (ctx->pc == 0x2C2C3Cu) {
        ctx->pc = 0x2C2C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2C38u;
        // 0x2c2c3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2C40u;
        goto label_2c2c40;
    }
    ctx->pc = 0x2C2C38u;
    ctx->pc = 0x2C2C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2C38u;
    // 0x2c2c3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xC28FFFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC28FFFCu, 0x2C2C38u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2C2C40u;
label_2c2c40:
    // 0x2c2c40: 0x1f41800  .word       0x01F41800                   # sll         $v1, $s4, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2c40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 0));
label_2c2c44:
    // 0x2c2c44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2c44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2c48:
    // 0x2c2c48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2c48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2c4c:
    // 0x2c2c4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2c4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2c50:
    // 0x2c2c50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2c50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2c54:
    // 0x2c2c54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2c54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2c58:
    // 0x2c2c58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2c58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2c5c:
    // 0x2c2c5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2c5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2c60:
    // 0x2c2c60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2c60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2c64:
    // 0x2c2c64: 0x1f481bc  .word       0x01F481BC                   # dsll32      $s0, $s4, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2c64u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20) << (32 + 6));
label_2c2c68:
    // 0x2c2c68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2c68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2c6c:
    // 0x2c2c6c: 0x1f488bd  .word       0x01F488BD                   # INVALID     $t7, $s4, -0x7743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2c6cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2C2C6C raw=0x01F488BD");
 /* MITIGATED */
label_2c2c70:
    // 0x2c2c70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2c70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2c74:
    // 0x2c2c74: 0x1f490be  .word       0x01F490BE                   # dsrl32      $s2, $s4, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2c74u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 20) >> (32 + 2));
label_2c2c78:
    // 0x2c2c78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2c78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2c7c:
    // 0x2c2c7c: 0x1f49d4b  .word       0x01F49D4B                   # movn        $s3, $t7, $s4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c2c7cu;
    if (GPR_U64(ctx, 20) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 15));
label_2c2c80:
    // 0x2c2c80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2c80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2c84:
    // 0x2c2c84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2c84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2c88:
    // 0x2c2c88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2c88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2c8c:
    // 0x2c2c8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2c8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2c90:
    // 0x2c2c90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2c90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2c94:
    // 0x2c2c94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2c94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2c98:
    // 0x2c2c98: 0x81f503bc  lb          $s5, 0x3BC($t7)
    ctx->pc = 0x2c2c98u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2c2c9c:
    // 0x2c2c9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2c9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2ca0:
    // 0x2c2ca0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2ca0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2ca4:
    // 0x2c2ca4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2ca4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2ca8:
    // 0x2c2ca8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2ca8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2cac:
    // 0x2c2cac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2cacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2cb0:
    // 0x2c2cb0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2cb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2cb4:
    // 0x2c2cb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2cb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2c2cb8:
    // 0x2c2cb8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2c2cb8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2c2cbc:
    // 0x2c2cbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2c2cbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->pc = 0x2c2cc0u;
    return;
}

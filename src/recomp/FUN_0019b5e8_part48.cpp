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

// Function: FUN_0019b5e8
// Address: 0x19b5e8 - 0x29b5f4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b5e8_part48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x1b2738u: goto label_1b2738;
        case 0x1b273cu: goto label_1b273c;
        case 0x1b2740u: goto label_1b2740;
        case 0x1b2744u: goto label_1b2744;
        case 0x1b2748u: goto label_1b2748;
        case 0x1b274cu: goto label_1b274c;
        case 0x1b2750u: goto label_1b2750;
        case 0x1b2754u: goto label_1b2754;
        case 0x1b2758u: goto label_1b2758;
        case 0x1b275cu: goto label_1b275c;
        case 0x1b2760u: goto label_1b2760;
        case 0x1b2764u: goto label_1b2764;
        case 0x1b2768u: goto label_1b2768;
        case 0x1b276cu: goto label_1b276c;
        case 0x1b2770u: goto label_1b2770;
        case 0x1b2774u: goto label_1b2774;
        case 0x1b2778u: goto label_1b2778;
        case 0x1b277cu: goto label_1b277c;
        case 0x1b2780u: goto label_1b2780;
        case 0x1b2784u: goto label_1b2784;
        case 0x1b2788u: goto label_1b2788;
        case 0x1b278cu: goto label_1b278c;
        case 0x1b2790u: goto label_1b2790;
        case 0x1b2794u: goto label_1b2794;
        case 0x1b2798u: goto label_1b2798;
        case 0x1b279cu: goto label_1b279c;
        case 0x1b27a0u: goto label_1b27a0;
        case 0x1b27a4u: goto label_1b27a4;
        case 0x1b27a8u: goto label_1b27a8;
        case 0x1b27acu: goto label_1b27ac;
        case 0x1b27b0u: goto label_1b27b0;
        case 0x1b27b4u: goto label_1b27b4;
        case 0x1b27b8u: goto label_1b27b8;
        case 0x1b27bcu: goto label_1b27bc;
        case 0x1b27c0u: goto label_1b27c0;
        case 0x1b27c4u: goto label_1b27c4;
        case 0x1b27c8u: goto label_1b27c8;
        case 0x1b27ccu: goto label_1b27cc;
        case 0x1b27d0u: goto label_1b27d0;
        case 0x1b27d4u: goto label_1b27d4;
        case 0x1b27d8u: goto label_1b27d8;
        case 0x1b27dcu: goto label_1b27dc;
        case 0x1b27e0u: goto label_1b27e0;
        case 0x1b27e4u: goto label_1b27e4;
        case 0x1b27e8u: goto label_1b27e8;
        case 0x1b27ecu: goto label_1b27ec;
        case 0x1b27f0u: goto label_1b27f0;
        case 0x1b27f4u: goto label_1b27f4;
        case 0x1b27f8u: goto label_1b27f8;
        case 0x1b27fcu: goto label_1b27fc;
        case 0x1b2800u: goto label_1b2800;
        case 0x1b2804u: goto label_1b2804;
        case 0x1b2808u: goto label_1b2808;
        case 0x1b280cu: goto label_1b280c;
        case 0x1b2810u: goto label_1b2810;
        case 0x1b2814u: goto label_1b2814;
        case 0x1b2818u: goto label_1b2818;
        case 0x1b281cu: goto label_1b281c;
        case 0x1b2820u: goto label_1b2820;
        case 0x1b2824u: goto label_1b2824;
        case 0x1b2828u: goto label_1b2828;
        case 0x1b282cu: goto label_1b282c;
        case 0x1b2830u: goto label_1b2830;
        case 0x1b2834u: goto label_1b2834;
        case 0x1b2838u: goto label_1b2838;
        case 0x1b283cu: goto label_1b283c;
        case 0x1b2840u: goto label_1b2840;
        case 0x1b2844u: goto label_1b2844;
        case 0x1b2848u: goto label_1b2848;
        case 0x1b284cu: goto label_1b284c;
        case 0x1b2850u: goto label_1b2850;
        case 0x1b2854u: goto label_1b2854;
        case 0x1b2858u: goto label_1b2858;
        case 0x1b285cu: goto label_1b285c;
        case 0x1b2860u: goto label_1b2860;
        case 0x1b2864u: goto label_1b2864;
        case 0x1b2868u: goto label_1b2868;
        case 0x1b286cu: goto label_1b286c;
        case 0x1b2870u: goto label_1b2870;
        case 0x1b2874u: goto label_1b2874;
        case 0x1b2878u: goto label_1b2878;
        case 0x1b287cu: goto label_1b287c;
        case 0x1b2880u: goto label_1b2880;
        case 0x1b2884u: goto label_1b2884;
        case 0x1b2888u: goto label_1b2888;
        case 0x1b288cu: goto label_1b288c;
        case 0x1b2890u: goto label_1b2890;
        case 0x1b2894u: goto label_1b2894;
        case 0x1b2898u: goto label_1b2898;
        case 0x1b289cu: goto label_1b289c;
        case 0x1b28a0u: goto label_1b28a0;
        case 0x1b28a4u: goto label_1b28a4;
        case 0x1b28a8u: goto label_1b28a8;
        case 0x1b28acu: goto label_1b28ac;
        case 0x1b28b0u: goto label_1b28b0;
        case 0x1b28b4u: goto label_1b28b4;
        case 0x1b28b8u: goto label_1b28b8;
        case 0x1b28bcu: goto label_1b28bc;
        case 0x1b28c0u: goto label_1b28c0;
        case 0x1b28c4u: goto label_1b28c4;
        case 0x1b28c8u: goto label_1b28c8;
        case 0x1b28ccu: goto label_1b28cc;
        case 0x1b28d0u: goto label_1b28d0;
        case 0x1b28d4u: goto label_1b28d4;
        case 0x1b28d8u: goto label_1b28d8;
        case 0x1b28dcu: goto label_1b28dc;
        case 0x1b28e0u: goto label_1b28e0;
        case 0x1b28e4u: goto label_1b28e4;
        case 0x1b28e8u: goto label_1b28e8;
        case 0x1b28ecu: goto label_1b28ec;
        case 0x1b28f0u: goto label_1b28f0;
        case 0x1b28f4u: goto label_1b28f4;
        case 0x1b28f8u: goto label_1b28f8;
        case 0x1b28fcu: goto label_1b28fc;
        case 0x1b2900u: goto label_1b2900;
        case 0x1b2904u: goto label_1b2904;
        case 0x1b2908u: goto label_1b2908;
        case 0x1b290cu: goto label_1b290c;
        case 0x1b2910u: goto label_1b2910;
        case 0x1b2914u: goto label_1b2914;
        case 0x1b2918u: goto label_1b2918;
        case 0x1b291cu: goto label_1b291c;
        case 0x1b2920u: goto label_1b2920;
        case 0x1b2924u: goto label_1b2924;
        case 0x1b2928u: goto label_1b2928;
        case 0x1b292cu: goto label_1b292c;
        case 0x1b2930u: goto label_1b2930;
        case 0x1b2934u: goto label_1b2934;
        case 0x1b2938u: goto label_1b2938;
        case 0x1b293cu: goto label_1b293c;
        case 0x1b2940u: goto label_1b2940;
        case 0x1b2944u: goto label_1b2944;
        case 0x1b2948u: goto label_1b2948;
        case 0x1b294cu: goto label_1b294c;
        case 0x1b2950u: goto label_1b2950;
        case 0x1b2954u: goto label_1b2954;
        case 0x1b2958u: goto label_1b2958;
        case 0x1b295cu: goto label_1b295c;
        case 0x1b2960u: goto label_1b2960;
        case 0x1b2964u: goto label_1b2964;
        case 0x1b2968u: goto label_1b2968;
        case 0x1b296cu: goto label_1b296c;
        case 0x1b2970u: goto label_1b2970;
        case 0x1b2974u: goto label_1b2974;
        case 0x1b2978u: goto label_1b2978;
        case 0x1b297cu: goto label_1b297c;
        case 0x1b2980u: goto label_1b2980;
        case 0x1b2984u: goto label_1b2984;
        case 0x1b2988u: goto label_1b2988;
        case 0x1b298cu: goto label_1b298c;
        case 0x1b2990u: goto label_1b2990;
        case 0x1b2994u: goto label_1b2994;
        case 0x1b2998u: goto label_1b2998;
        case 0x1b299cu: goto label_1b299c;
        case 0x1b29a0u: goto label_1b29a0;
        case 0x1b29a4u: goto label_1b29a4;
        case 0x1b29a8u: goto label_1b29a8;
        case 0x1b29acu: goto label_1b29ac;
        case 0x1b29b0u: goto label_1b29b0;
        case 0x1b29b4u: goto label_1b29b4;
        case 0x1b29b8u: goto label_1b29b8;
        case 0x1b29bcu: goto label_1b29bc;
        case 0x1b29c0u: goto label_1b29c0;
        case 0x1b29c4u: goto label_1b29c4;
        case 0x1b29c8u: goto label_1b29c8;
        case 0x1b29ccu: goto label_1b29cc;
        case 0x1b29d0u: goto label_1b29d0;
        case 0x1b29d4u: goto label_1b29d4;
        case 0x1b29d8u: goto label_1b29d8;
        case 0x1b29dcu: goto label_1b29dc;
        case 0x1b29e0u: goto label_1b29e0;
        case 0x1b29e4u: goto label_1b29e4;
        case 0x1b29e8u: goto label_1b29e8;
        case 0x1b29ecu: goto label_1b29ec;
        case 0x1b29f0u: goto label_1b29f0;
        case 0x1b29f4u: goto label_1b29f4;
        case 0x1b29f8u: goto label_1b29f8;
        case 0x1b29fcu: goto label_1b29fc;
        case 0x1b2a00u: goto label_1b2a00;
        case 0x1b2a04u: goto label_1b2a04;
        case 0x1b2a08u: goto label_1b2a08;
        case 0x1b2a0cu: goto label_1b2a0c;
        case 0x1b2a10u: goto label_1b2a10;
        case 0x1b2a14u: goto label_1b2a14;
        case 0x1b2a18u: goto label_1b2a18;
        case 0x1b2a1cu: goto label_1b2a1c;
        case 0x1b2a20u: goto label_1b2a20;
        case 0x1b2a24u: goto label_1b2a24;
        case 0x1b2a28u: goto label_1b2a28;
        case 0x1b2a2cu: goto label_1b2a2c;
        case 0x1b2a30u: goto label_1b2a30;
        case 0x1b2a34u: goto label_1b2a34;
        case 0x1b2a38u: goto label_1b2a38;
        case 0x1b2a3cu: goto label_1b2a3c;
        case 0x1b2a40u: goto label_1b2a40;
        case 0x1b2a44u: goto label_1b2a44;
        case 0x1b2a48u: goto label_1b2a48;
        case 0x1b2a4cu: goto label_1b2a4c;
        case 0x1b2a50u: goto label_1b2a50;
        case 0x1b2a54u: goto label_1b2a54;
        case 0x1b2a58u: goto label_1b2a58;
        case 0x1b2a5cu: goto label_1b2a5c;
        case 0x1b2a60u: goto label_1b2a60;
        case 0x1b2a64u: goto label_1b2a64;
        case 0x1b2a68u: goto label_1b2a68;
        case 0x1b2a6cu: goto label_1b2a6c;
        case 0x1b2a70u: goto label_1b2a70;
        case 0x1b2a74u: goto label_1b2a74;
        case 0x1b2a78u: goto label_1b2a78;
        case 0x1b2a7cu: goto label_1b2a7c;
        case 0x1b2a80u: goto label_1b2a80;
        case 0x1b2a84u: goto label_1b2a84;
        case 0x1b2a88u: goto label_1b2a88;
        case 0x1b2a8cu: goto label_1b2a8c;
        case 0x1b2a90u: goto label_1b2a90;
        case 0x1b2a94u: goto label_1b2a94;
        case 0x1b2a98u: goto label_1b2a98;
        case 0x1b2a9cu: goto label_1b2a9c;
        case 0x1b2aa0u: goto label_1b2aa0;
        case 0x1b2aa4u: goto label_1b2aa4;
        case 0x1b2aa8u: goto label_1b2aa8;
        case 0x1b2aacu: goto label_1b2aac;
        case 0x1b2ab0u: goto label_1b2ab0;
        case 0x1b2ab4u: goto label_1b2ab4;
        case 0x1b2ab8u: goto label_1b2ab8;
        case 0x1b2abcu: goto label_1b2abc;
        case 0x1b2ac0u: goto label_1b2ac0;
        case 0x1b2ac4u: goto label_1b2ac4;
        case 0x1b2ac8u: goto label_1b2ac8;
        case 0x1b2accu: goto label_1b2acc;
        case 0x1b2ad0u: goto label_1b2ad0;
        case 0x1b2ad4u: goto label_1b2ad4;
        case 0x1b2ad8u: goto label_1b2ad8;
        case 0x1b2adcu: goto label_1b2adc;
        case 0x1b2ae0u: goto label_1b2ae0;
        case 0x1b2ae4u: goto label_1b2ae4;
        case 0x1b2ae8u: goto label_1b2ae8;
        case 0x1b2aecu: goto label_1b2aec;
        case 0x1b2af0u: goto label_1b2af0;
        case 0x1b2af4u: goto label_1b2af4;
        case 0x1b2af8u: goto label_1b2af8;
        case 0x1b2afcu: goto label_1b2afc;
        case 0x1b2b00u: goto label_1b2b00;
        case 0x1b2b04u: goto label_1b2b04;
        case 0x1b2b08u: goto label_1b2b08;
        case 0x1b2b0cu: goto label_1b2b0c;
        case 0x1b2b10u: goto label_1b2b10;
        case 0x1b2b14u: goto label_1b2b14;
        case 0x1b2b18u: goto label_1b2b18;
        case 0x1b2b1cu: goto label_1b2b1c;
        case 0x1b2b20u: goto label_1b2b20;
        case 0x1b2b24u: goto label_1b2b24;
        case 0x1b2b28u: goto label_1b2b28;
        case 0x1b2b2cu: goto label_1b2b2c;
        case 0x1b2b30u: goto label_1b2b30;
        case 0x1b2b34u: goto label_1b2b34;
        case 0x1b2b38u: goto label_1b2b38;
        case 0x1b2b3cu: goto label_1b2b3c;
        case 0x1b2b40u: goto label_1b2b40;
        case 0x1b2b44u: goto label_1b2b44;
        case 0x1b2b48u: goto label_1b2b48;
        case 0x1b2b4cu: goto label_1b2b4c;
        case 0x1b2b50u: goto label_1b2b50;
        case 0x1b2b54u: goto label_1b2b54;
        case 0x1b2b58u: goto label_1b2b58;
        case 0x1b2b5cu: goto label_1b2b5c;
        case 0x1b2b60u: goto label_1b2b60;
        case 0x1b2b64u: goto label_1b2b64;
        case 0x1b2b68u: goto label_1b2b68;
        case 0x1b2b6cu: goto label_1b2b6c;
        case 0x1b2b70u: goto label_1b2b70;
        case 0x1b2b74u: goto label_1b2b74;
        case 0x1b2b78u: goto label_1b2b78;
        case 0x1b2b7cu: goto label_1b2b7c;
        case 0x1b2b80u: goto label_1b2b80;
        case 0x1b2b84u: goto label_1b2b84;
        case 0x1b2b88u: goto label_1b2b88;
        case 0x1b2b8cu: goto label_1b2b8c;
        case 0x1b2b90u: goto label_1b2b90;
        case 0x1b2b94u: goto label_1b2b94;
        case 0x1b2b98u: goto label_1b2b98;
        case 0x1b2b9cu: goto label_1b2b9c;
        case 0x1b2ba0u: goto label_1b2ba0;
        case 0x1b2ba4u: goto label_1b2ba4;
        case 0x1b2ba8u: goto label_1b2ba8;
        case 0x1b2bacu: goto label_1b2bac;
        case 0x1b2bb0u: goto label_1b2bb0;
        case 0x1b2bb4u: goto label_1b2bb4;
        case 0x1b2bb8u: goto label_1b2bb8;
        case 0x1b2bbcu: goto label_1b2bbc;
        case 0x1b2bc0u: goto label_1b2bc0;
        case 0x1b2bc4u: goto label_1b2bc4;
        case 0x1b2bc8u: goto label_1b2bc8;
        case 0x1b2bccu: goto label_1b2bcc;
        case 0x1b2bd0u: goto label_1b2bd0;
        case 0x1b2bd4u: goto label_1b2bd4;
        case 0x1b2bd8u: goto label_1b2bd8;
        case 0x1b2bdcu: goto label_1b2bdc;
        case 0x1b2be0u: goto label_1b2be0;
        case 0x1b2be4u: goto label_1b2be4;
        case 0x1b2be8u: goto label_1b2be8;
        case 0x1b2becu: goto label_1b2bec;
        case 0x1b2bf0u: goto label_1b2bf0;
        case 0x1b2bf4u: goto label_1b2bf4;
        case 0x1b2bf8u: goto label_1b2bf8;
        case 0x1b2bfcu: goto label_1b2bfc;
        case 0x1b2c00u: goto label_1b2c00;
        case 0x1b2c04u: goto label_1b2c04;
        case 0x1b2c08u: goto label_1b2c08;
        case 0x1b2c0cu: goto label_1b2c0c;
        case 0x1b2c10u: goto label_1b2c10;
        case 0x1b2c14u: goto label_1b2c14;
        case 0x1b2c18u: goto label_1b2c18;
        case 0x1b2c1cu: goto label_1b2c1c;
        case 0x1b2c20u: goto label_1b2c20;
        case 0x1b2c24u: goto label_1b2c24;
        case 0x1b2c28u: goto label_1b2c28;
        case 0x1b2c2cu: goto label_1b2c2c;
        case 0x1b2c30u: goto label_1b2c30;
        case 0x1b2c34u: goto label_1b2c34;
        case 0x1b2c38u: goto label_1b2c38;
        case 0x1b2c3cu: goto label_1b2c3c;
        case 0x1b2c40u: goto label_1b2c40;
        case 0x1b2c44u: goto label_1b2c44;
        case 0x1b2c48u: goto label_1b2c48;
        case 0x1b2c4cu: goto label_1b2c4c;
        case 0x1b2c50u: goto label_1b2c50;
        case 0x1b2c54u: goto label_1b2c54;
        case 0x1b2c58u: goto label_1b2c58;
        case 0x1b2c5cu: goto label_1b2c5c;
        case 0x1b2c60u: goto label_1b2c60;
        case 0x1b2c64u: goto label_1b2c64;
        case 0x1b2c68u: goto label_1b2c68;
        case 0x1b2c6cu: goto label_1b2c6c;
        case 0x1b2c70u: goto label_1b2c70;
        case 0x1b2c74u: goto label_1b2c74;
        case 0x1b2c78u: goto label_1b2c78;
        case 0x1b2c7cu: goto label_1b2c7c;
        case 0x1b2c80u: goto label_1b2c80;
        case 0x1b2c84u: goto label_1b2c84;
        case 0x1b2c88u: goto label_1b2c88;
        case 0x1b2c8cu: goto label_1b2c8c;
        case 0x1b2c90u: goto label_1b2c90;
        case 0x1b2c94u: goto label_1b2c94;
        case 0x1b2c98u: goto label_1b2c98;
        case 0x1b2c9cu: goto label_1b2c9c;
        case 0x1b2ca0u: goto label_1b2ca0;
        case 0x1b2ca4u: goto label_1b2ca4;
        case 0x1b2ca8u: goto label_1b2ca8;
        case 0x1b2cacu: goto label_1b2cac;
        case 0x1b2cb0u: goto label_1b2cb0;
        case 0x1b2cb4u: goto label_1b2cb4;
        case 0x1b2cb8u: goto label_1b2cb8;
        case 0x1b2cbcu: goto label_1b2cbc;
        case 0x1b2cc0u: goto label_1b2cc0;
        case 0x1b2cc4u: goto label_1b2cc4;
        case 0x1b2cc8u: goto label_1b2cc8;
        case 0x1b2cccu: goto label_1b2ccc;
        case 0x1b2cd0u: goto label_1b2cd0;
        case 0x1b2cd4u: goto label_1b2cd4;
        case 0x1b2cd8u: goto label_1b2cd8;
        case 0x1b2cdcu: goto label_1b2cdc;
        case 0x1b2ce0u: goto label_1b2ce0;
        case 0x1b2ce4u: goto label_1b2ce4;
        default: return;
    }

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
            goto label_1b2778;
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
            goto label_1b2778;
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
            goto label_1b2778;
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
label_1b2738:
    // 0x1b2738: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1b2738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1b273c:
    // 0x1b273c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b273cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1b2740:
    // 0x1b2740: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b2740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b2744:
    // 0x1b2744: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x1b2744u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
label_1b2748:
    // 0x1b2748: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b2748u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b274c:
    // 0x1b274c: 0xc069e2a  jal         func_1A78A8
label_1b2750:
    if (ctx->pc == 0x1B2750u) {
        ctx->pc = 0x1B2750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B274Cu;
        // 0x1b2750: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2754u;
        goto label_1b2754;
    }
    ctx->pc = 0x1B274Cu;
    SET_GPR_U32(ctx, 31, 0x1B2754u);
    ctx->pc = 0x1B2750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B274Cu;
    // 0x1b2750: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1B2754u;
label_1b2754:
    // 0x1b2754: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b2754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b2758:
    // 0x1b2758: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_1b275c:
    if (ctx->pc == 0x1B275Cu) {
        ctx->pc = 0x1B275Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2758u;
        // 0x1b275c: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2760u;
        goto label_1b2760;
    }
    ctx->pc = 0x1B2758u;
    {
        const bool branch_taken_0x1b2758 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B275Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2758u;
        // 0x1b275c: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2758) {
            ctx->pc = 0x1B276Cu;
            goto label_1b276c;
        }
    }
    ctx->pc = 0x1B2760u;
label_1b2760:
    // 0x1b2760: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1b2760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1b2764:
    // 0x1b2764: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b2768:
    if (ctx->pc == 0x1B2768u) {
        ctx->pc = 0x1B2768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2764u;
        // 0x1b2768: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B276Cu;
        goto label_1b276c;
    }
    ctx->pc = 0x1B2764u;
    {
        const bool branch_taken_0x1b2764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2764u;
        // 0x1b2768: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2764) {
            ctx->pc = 0x1B2774u;
            goto label_1b2774;
        }
    }
    ctx->pc = 0x1B276Cu;
label_1b276c:
    // 0x1b276c: 0xc069210  jal         func_1A4840
label_1b2770:
    if (ctx->pc == 0x1B2770u) {
        ctx->pc = 0x1B2770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B276Cu;
        // 0x1b2770: 0x8e248d0c  lw          $a0, -0x72F4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294937868)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2774u;
        goto label_1b2774;
    }
    ctx->pc = 0x1B276Cu;
    SET_GPR_U32(ctx, 31, 0x1B2774u);
    ctx->pc = 0x1B2770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B276Cu;
    // 0x1b2770: 0x8e248d0c  lw          $a0, -0x72F4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1B2774u;
label_1b2774:
    // 0x1b2774: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b2774u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b2778:
    // 0x1b2778: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1b2778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1b277c:
    // 0x1b277c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1b277cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1b2780:
    // 0x1b2780: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1b2780u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1b2784:
    // 0x1b2784: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b2784u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1b2788:
    // 0x1b2788: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b2788u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b278c:
    // 0x1b278c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b278cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b2790:
    // 0x1b2790: 0x3e00008  jr          $ra
label_1b2794:
    if (ctx->pc == 0x1B2794u) {
        ctx->pc = 0x1B2794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2790u;
        // 0x1b2794: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2798u;
        goto label_1b2798;
    }
    ctx->pc = 0x1B2790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2790u;
        // 0x1b2794: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2798u;
label_1b2798:
    // 0x1b2798: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b2798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b279c:
    // 0x1b279c: 0x460062c6  mov.s       $f11, $f12
    ctx->pc = 0x1b279cu;
    ctx->f[11] = FPU_MOV_S(ctx->f[12]);
label_1b27a0:
    // 0x1b27a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b27a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1b27a4:
    // 0x1b27a4: 0xe7b60028  swc1        $f22, 0x28($sp)
    ctx->pc = 0x1b27a4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1b27a8:
    // 0x1b27a8: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x1b27a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1b27ac:
    // 0x1b27ac: 0x44045800  mfc1        $a0, $f11
    ctx->pc = 0x1b27acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[11], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_1b27b0:
    // 0x1b27b0: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1b27b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_1b27b4:
    // 0x1b27b4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1b27b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_1b27b8:
    // 0x1b27b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b27b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b27bc:
    // 0x1b27bc: 0x821824  and         $v1, $a0, $v0
    ctx->pc = 0x1b27bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_1b27c0:
    // 0x1b27c0: 0x14650009  bne         $v1, $a1, . + 4 + (0x9 << 2)
label_1b27c4:
    if (ctx->pc == 0x1B27C4u) {
        ctx->pc = 0x1B27C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B27C0u;
        // 0x1b27c4: 0xe7b40018  swc1        $f20, 0x18($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B27C8u;
        goto label_1b27c8;
    }
    ctx->pc = 0x1B27C0u;
    {
        const bool branch_taken_0x1b27c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1B27C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B27C0u;
        // 0x1b27c4: 0xe7b40018  swc1        $f20, 0x18($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b27c0) {
            ctx->pc = 0x1B27E8u;
            goto label_1b27e8;
        }
    }
    ctx->pc = 0x1B27C8u;
label_1b27c8:
    // 0x1b27c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b27c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b27cc:
    // 0x1b27cc: 0x1c8000fc  bgtz        $a0, . + 4 + (0xFC << 2)
label_1b27d0:
    if (ctx->pc == 0x1B27D0u) {
        ctx->pc = 0x1B27D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B27CCu;
        // 0x1b27d0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B27D4u;
        goto label_1b27d4;
    }
    ctx->pc = 0x1B27CCu;
    {
        const bool branch_taken_0x1b27cc = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1B27D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B27CCu;
        // 0x1b27d0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b27cc) {
            ctx->pc = 0x1B2BC0u;
            goto label_1b2bc0;
        }
    }
    ctx->pc = 0x1B27D4u;
label_1b27d4:
    // 0x1b27d4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1b27d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_1b27d8:
    // 0x1b27d8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1b27d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1b27dc:
    // 0x1b27dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b27dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b27e0:
    // 0x1b27e0: 0x100000f8  b           . + 4 + (0xF8 << 2)
label_1b27e4:
    if (ctx->pc == 0x1B27E4u) {
        ctx->pc = 0x1B27E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B27E0u;
        // 0x1b27e4: 0xc7b60028  lwc1        $f22, 0x28($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B27E8u;
        goto label_1b27e8;
    }
    ctx->pc = 0x1B27E0u;
    {
        const bool branch_taken_0x1b27e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B27E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B27E0u;
        // 0x1b27e4: 0xc7b60028  lwc1        $f22, 0x28($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b27e0) {
            ctx->pc = 0x1B2BC4u;
            goto label_1b2bc4;
        }
    }
    ctx->pc = 0x1B27E8u;
label_1b27e8:
    // 0x1b27e8: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x1b27e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1b27ec:
    // 0x1b27ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1b27f0:
    if (ctx->pc == 0x1B27F0u) {
        ctx->pc = 0x1B27F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B27ECu;
        // 0x1b27f0: 0x3c023eff  lui         $v0, 0x3EFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16127 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B27F4u;
        goto label_1b27f4;
    }
    ctx->pc = 0x1B27ECu;
    {
        const bool branch_taken_0x1b27ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B27F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B27ECu;
        // 0x1b27f0: 0x3c023eff  lui         $v0, 0x3EFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b27ec) {
            ctx->pc = 0x1B2810u;
            goto label_1b2810;
        }
    }
    ctx->pc = 0x1B27F4u;
label_1b27f4:
    // 0x1b27f4: 0x460b5801  sub.s       $f0, $f11, $f11
    ctx->pc = 0x1b27f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[11], ctx->f[11]);
label_1b27f8:
    // 0x1b27f8: 0x0  nop
    ctx->pc = 0x1b27f8u;
    // NOP
label_1b27fc:
    // 0x1b27fc: 0x0  nop
    ctx->pc = 0x1b27fcu;
    // NOP
label_1b2800:
    // 0x1b2800: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x1b2800u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[0];
label_1b2804:
    // 0x1b2804: 0x100000ee  b           . + 4 + (0xEE << 2)
label_1b2808:
    if (ctx->pc == 0x1B2808u) {
        ctx->pc = 0x1B2808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2804u;
        // 0x1b2808: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B280Cu;
        goto label_1b280c;
    }
    ctx->pc = 0x1B2804u;
    {
        const bool branch_taken_0x1b2804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2804u;
        // 0x1b2808: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2804) {
            ctx->pc = 0x1B2BC0u;
            goto label_1b2bc0;
        }
    }
    ctx->pc = 0x1B280Cu;
label_1b280c:
    // 0x1b280c: 0x0  nop
    ctx->pc = 0x1b280cu;
    // NOP
label_1b2810:
    // 0x1b2810: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b2810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b2814:
    // 0x1b2814: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1b2814u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1b2818:
    // 0x1b2818: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
label_1b281c:
    if (ctx->pc == 0x1B281Cu) {
        ctx->pc = 0x1B281Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2818u;
        // 0x1b281c: 0x3c022300  lui         $v0, 0x2300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8960 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2820u;
        goto label_1b2820;
    }
    ctx->pc = 0x1B2818u;
    {
        const bool branch_taken_0x1b2818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B281Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2818u;
        // 0x1b281c: 0x3c022300  lui         $v0, 0x2300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8960 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2818) {
            ctx->pc = 0x1B2948u;
            goto label_1b2948;
        }
    }
    ctx->pc = 0x1B2820u;
label_1b2820:
    // 0x1b2820: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1b2820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_1b2824:
    // 0x1b2824: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1b2824u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1b2828:
    // 0x1b2828: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b2828u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b282c:
    // 0x1b282c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1b282cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1b2830:
    // 0x1b2830: 0x104000e3  beqz        $v0, . + 4 + (0xE3 << 2)
label_1b2834:
    if (ctx->pc == 0x1B2834u) {
        ctx->pc = 0x1B2834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2830u;
        // 0x1b2834: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2838u;
        goto label_1b2838;
    }
    ctx->pc = 0x1B2830u;
    {
        const bool branch_taken_0x1b2830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2830u;
        // 0x1b2834: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2830) {
            ctx->pc = 0x1B2BC0u;
            goto label_1b2bc0;
        }
    }
    ctx->pc = 0x1B2838u;
label_1b2838:
    // 0x1b2838: 0x460b5d42  mul.s       $f21, $f11, $f11
    ctx->pc = 0x1b2838u;
    ctx->f[21] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
label_1b283c:
    // 0x1b283c: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x1b283cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
label_1b2840:
    // 0x1b2840: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x1b2840u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
label_1b2844:
    // 0x1b2844: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b2844u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b2848:
    // 0x1b2848: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x1b2848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
label_1b284c:
    // 0x1b284c: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x1b284cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
label_1b2850:
    // 0x1b2850: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b2850u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1b2854:
    // 0x1b2854: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x1b2854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
label_1b2858:
    // 0x1b2858: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x1b2858u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
label_1b285c:
    // 0x1b285c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1b285cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1b2860:
    // 0x1b2860: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x1b2860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
label_1b2864:
    // 0x1b2864: 0x3421c62e  ori         $at, $at, 0xC62E
    ctx->pc = 0x1b2864u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50734);
label_1b2868:
    // 0x1b2868: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b2868u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b286c:
    // 0x1b286c: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1b286cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_1b2870:
    // 0x1b2870: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x1b2870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
label_1b2874:
    // 0x1b2874: 0x34213361  ori         $at, $at, 0x3361
    ctx->pc = 0x1b2874u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13153);
label_1b2878:
    // 0x1b2878: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b2878u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b287c:
    // 0x1b287c: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x1b287cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
label_1b2880:
    // 0x1b2880: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x1b2880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
label_1b2884:
    // 0x1b2884: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x1b2884u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
label_1b2888:
    // 0x1b2888: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1b2888u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1b288c:
    // 0x1b288c: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x1b288cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
label_1b2890:
    // 0x1b2890: 0x3421572d  ori         $at, $at, 0x572D
    ctx->pc = 0x1b2890u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22317);
label_1b2894:
    // 0x1b2894: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1b2894u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1b2898:
    // 0x1b2898: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x1b2898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
label_1b289c:
    // 0x1b289c: 0x3421b090  ori         $at, $at, 0xB090
    ctx->pc = 0x1b289cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45200);
label_1b28a0:
    // 0x1b28a0: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1b28a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_1b28a4:
    // 0x1b28a4: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1b28a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1b28a8:
    // 0x1b28a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b28a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b28ac:
    // 0x1b28ac: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b28acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1b28b0:
    // 0x1b28b0: 0x0  nop
    ctx->pc = 0x1b28b0u;
    // NOP
label_1b28b4:
    // 0x1b28b4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1b28b4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1b28b8:
    // 0x1b28b8: 0x3c0133a2  lui         $at, 0x33A2
    ctx->pc = 0x1b28b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13218 << 16));
label_1b28bc:
    // 0x1b28bc: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x1b28bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
label_1b28c0:
    // 0x1b28c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b28c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b28c4:
    // 0x1b28c4: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x1b28c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
label_1b28c8:
    // 0x1b28c8: 0x3421d139  ori         $at, $at, 0xD139
    ctx->pc = 0x1b28c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53561);
label_1b28cc:
    // 0x1b28cc: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1b28ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1b28d0:
    // 0x1b28d0: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x1b28d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
label_1b28d4:
    // 0x1b28d4: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1b28d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
label_1b28d8:
    // 0x1b28d8: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1b28d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_1b28dc:
    // 0x1b28dc: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1b28dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_1b28e0:
    // 0x1b28e0: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1b28e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_1b28e4:
    // 0x1b28e4: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x1b28e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
label_1b28e8:
    // 0x1b28e8: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1b28e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_1b28ec:
    // 0x1b28ec: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x1b28ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
label_1b28f0:
    // 0x1b28f0: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x1b28f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
label_1b28f4:
    // 0x1b28f4: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x1b28f4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
label_1b28f8:
    // 0x1b28f8: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1b28f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_1b28fc:
    // 0x1b28fc: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x1b28fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
label_1b2900:
    // 0x1b2900: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x1b2900u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
label_1b2904:
    // 0x1b2904: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x1b2904u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
label_1b2908:
    // 0x1b2908: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1b2908u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_1b290c:
    // 0x1b290c: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x1b290cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
label_1b2910:
    // 0x1b2910: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x1b2910u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
label_1b2914:
    // 0x1b2914: 0x46031580  add.s       $f22, $f2, $f3
    ctx->pc = 0x1b2914u;
    ctx->f[22] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_1b2918:
    // 0x1b2918: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1b2918u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_1b291c:
    // 0x1b291c: 0x46080840  add.s       $f1, $f1, $f8
    ctx->pc = 0x1b291cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
label_1b2920:
    // 0x1b2920: 0x4601ad02  mul.s       $f20, $f21, $f1
    ctx->pc = 0x1b2920u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_1b2924:
    // 0x1b2924: 0x0  nop
    ctx->pc = 0x1b2924u;
    // NOP
label_1b2928:
    // 0x1b2928: 0x0  nop
    ctx->pc = 0x1b2928u;
    // NOP
label_1b292c:
    // 0x1b292c: 0x4616a303  div.s       $f12, $f20, $f22
    ctx->pc = 0x1b292cu;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[22];
label_1b2930:
    // 0x1b2930: 0x460c5842  mul.s       $f1, $f11, $f12
    ctx->pc = 0x1b2930u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[12]);
label_1b2934:
    // 0x1b2934: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b2934u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1b2938:
    // 0x1b2938: 0x46005801  sub.s       $f0, $f11, $f0
    ctx->pc = 0x1b2938u;
    ctx->f[0] = FPU_SUB_S(ctx->f[11], ctx->f[0]);
label_1b293c:
    // 0x1b293c: 0x100000a0  b           . + 4 + (0xA0 << 2)
label_1b2940:
    if (ctx->pc == 0x1B2940u) {
        ctx->pc = 0x1B2940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B293Cu;
        // 0x1b2940: 0x46005001  sub.s       $f0, $f10, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2944u;
        goto label_1b2944;
    }
    ctx->pc = 0x1B293Cu;
    {
        const bool branch_taken_0x1b293c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B293Cu;
        // 0x1b2940: 0x46005001  sub.s       $f0, $f10, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b293c) {
            ctx->pc = 0x1B2BC0u;
            goto label_1b2bc0;
        }
    }
    ctx->pc = 0x1B2944u;
label_1b2944:
    // 0x1b2944: 0x0  nop
    ctx->pc = 0x1b2944u;
    // NOP
label_1b2948:
    // 0x1b2948: 0x481004b  bgez        $a0, . + 4 + (0x4B << 2)
label_1b294c:
    if (ctx->pc == 0x1B294Cu) {
        ctx->pc = 0x1B2950u;
        goto label_1b2950;
    }
    ctx->pc = 0x1B2948u;
    {
        const bool branch_taken_0x1b2948 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1b2948) {
            ctx->pc = 0x1B2A78u;
            goto label_1b2a78;
        }
    }
    ctx->pc = 0x1B2950u;
label_1b2950:
    // 0x1b2950: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b2950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b2954:
    // 0x1b2954: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1b2954u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_1b2958:
    // 0x1b2958: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1b2958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1b295c:
    // 0x1b295c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b295cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1b2960:
    // 0x1b2960: 0x460a5880  add.s       $f2, $f11, $f10
    ctx->pc = 0x1b2960u;
    ctx->f[2] = FPU_ADD_S(ctx->f[11], ctx->f[10]);
label_1b2964:
    // 0x1b2964: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x1b2964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
label_1b2968:
    // 0x1b2968: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x1b2968u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
label_1b296c:
    // 0x1b296c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b296cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b2970:
    // 0x1b2970: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x1b2970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
label_1b2974:
    // 0x1b2974: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x1b2974u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
label_1b2978:
    // 0x1b2978: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1b2978u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1b297c:
    // 0x1b297c: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x1b297cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
label_1b2980:
    // 0x1b2980: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x1b2980u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
label_1b2984:
    // 0x1b2984: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1b2984u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1b2988:
    // 0x1b2988: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x1b2988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
label_1b298c:
    // 0x1b298c: 0x3421c62e  ori         $at, $at, 0xC62E
    ctx->pc = 0x1b298cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50734);
label_1b2990:
    // 0x1b2990: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b2990u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b2994:
    // 0x1b2994: 0x46031542  mul.s       $f21, $f2, $f3
    ctx->pc = 0x1b2994u;
    ctx->f[21] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_1b2998:
    // 0x1b2998: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x1b2998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
label_1b299c:
    // 0x1b299c: 0x3421572d  ori         $at, $at, 0x572D
    ctx->pc = 0x1b299cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22317);
label_1b29a0:
    // 0x1b29a0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b29a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b29a4:
    // 0x1b29a4: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x1b29a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
label_1b29a8:
    // 0x1b29a8: 0x34213361  ori         $at, $at, 0x3361
    ctx->pc = 0x1b29a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13153);
label_1b29ac:
    // 0x1b29ac: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1b29acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1b29b0:
    // 0x1b29b0: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x1b29b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
label_1b29b4:
    // 0x1b29b4: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x1b29b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
label_1b29b8:
    // 0x1b29b8: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1b29b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1b29bc:
    // 0x1b29bc: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x1b29bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
label_1b29c0:
    // 0x1b29c0: 0x3421b090  ori         $at, $at, 0xB090
    ctx->pc = 0x1b29c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45200);
label_1b29c4:
    // 0x1b29c4: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1b29c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_1b29c8:
    // 0x1b29c8: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1b29c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1b29cc:
    // 0x1b29cc: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x1b29ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
label_1b29d0:
    // 0x1b29d0: 0x3421d139  ori         $at, $at, 0xD139
    ctx->pc = 0x1b29d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53561);
label_1b29d4:
    // 0x1b29d4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1b29d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1b29d8:
    // 0x1b29d8: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1b29d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_1b29dc:
    // 0x1b29dc: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x1b29dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
label_1b29e0:
    // 0x1b29e0: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1b29e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
label_1b29e4:
    // 0x1b29e4: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1b29e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_1b29e8:
    // 0x1b29e8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1b29e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1b29ec:
    // 0x1b29ec: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x1b29ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_1b29f0:
    // 0x1b29f0: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x1b29f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_1b29f4:
    // 0x1b29f4: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1b29f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1b29f8:
    // 0x1b29f8: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1b29f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_1b29fc:
    // 0x1b29fc: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x1b29fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
label_1b2a00:
    // 0x1b2a00: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b2a00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1b2a04:
    // 0x1b2a04: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1b2a04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1b2a08:
    // 0x1b2a08: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1b2a08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_1b2a0c:
    // 0x1b2a0c: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x1b2a0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
label_1b2a10:
    // 0x1b2a10: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1b2a10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1b2a14:
    // 0x1b2a14: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1b2a14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1b2a18:
    // 0x1b2a18: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1b2a18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_1b2a1c:
    // 0x1b2a1c: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x1b2a1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
label_1b2a20:
    // 0x1b2a20: 0x460a0d80  add.s       $f22, $f1, $f10
    ctx->pc = 0x1b2a20u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[10]);
label_1b2a24:
    // 0x1b2a24: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1b2a24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1b2a28:
    // 0x1b2a28: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x1b2a28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
label_1b2a2c:
    // 0x1b2a2c: 0xc06cf7a  jal         func_1B3DE8
label_1b2a30:
    if (ctx->pc == 0x1B2A30u) {
        ctx->pc = 0x1B2A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2A2Cu;
        // 0x1b2a30: 0x4600ad02  mul.s       $f20, $f21, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2A34u;
        goto label_1b2a34;
    }
    ctx->pc = 0x1B2A2Cu;
    SET_GPR_U32(ctx, 31, 0x1B2A34u);
    ctx->pc = 0x1B2A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2A2Cu;
    // 0x1b2a30: 0x4600ad02  mul.s       $f20, $f21, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3DE8u;
    { ctx->pc = 0x1b3de8; return; }
    ctx->pc = 0x1B2A34u;
label_1b2a34:
    // 0x1b2a34: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1b2a34u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_1b2a38:
    // 0x1b2a38: 0x3c0133a2  lui         $at, 0x33A2
    ctx->pc = 0x1b2a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13218 << 16));
label_1b2a3c:
    // 0x1b2a3c: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x1b2a3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
label_1b2a40:
    // 0x1b2a40: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b2a40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b2a44:
    // 0x1b2a44: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1b2a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_1b2a48:
    // 0x1b2a48: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x1b2a48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
label_1b2a4c:
    // 0x1b2a4c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b2a4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b2a50:
    // 0x1b2a50: 0x0  nop
    ctx->pc = 0x1b2a50u;
    // NOP
label_1b2a54:
    // 0x1b2a54: 0x0  nop
    ctx->pc = 0x1b2a54u;
    // NOP
label_1b2a58:
    // 0x1b2a58: 0x4616a303  div.s       $f12, $f20, $f22
    ctx->pc = 0x1b2a58u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[22];
label_1b2a5c:
    // 0x1b2a5c: 0x460d6002  mul.s       $f0, $f12, $f13
    ctx->pc = 0x1b2a5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[13]);
label_1b2a60:
    // 0x1b2a60: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b2a60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1b2a64:
    // 0x1b2a64: 0x46006800  add.s       $f0, $f13, $f0
    ctx->pc = 0x1b2a64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
label_1b2a68:
    // 0x1b2a68: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1b2a68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1b2a6c:
    // 0x1b2a6c: 0x10000053  b           . + 4 + (0x53 << 2)
label_1b2a70:
    if (ctx->pc == 0x1B2A70u) {
        ctx->pc = 0x1B2A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2A6Cu;
        // 0x1b2a70: 0x46001001  sub.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2A74u;
        goto label_1b2a74;
    }
    ctx->pc = 0x1B2A6Cu;
    {
        const bool branch_taken_0x1b2a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2A6Cu;
        // 0x1b2a70: 0x46001001  sub.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2a6c) {
            ctx->pc = 0x1B2BBCu;
            goto label_1b2bbc;
        }
    }
    ctx->pc = 0x1B2A74u;
label_1b2a74:
    // 0x1b2a74: 0x0  nop
    ctx->pc = 0x1b2a74u;
    // NOP
label_1b2a78:
    // 0x1b2a78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b2a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b2a7c:
    // 0x1b2a7c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b2a7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1b2a80:
    // 0x1b2a80: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1b2a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1b2a84:
    // 0x1b2a84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b2a84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b2a88:
    // 0x1b2a88: 0x460ba001  sub.s       $f0, $f20, $f11
    ctx->pc = 0x1b2a88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[11]);
label_1b2a8c:
    // 0x1b2a8c: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x1b2a8cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1b2a90:
    // 0x1b2a90: 0xc06cf7a  jal         func_1B3DE8
label_1b2a94:
    if (ctx->pc == 0x1B2A94u) {
        ctx->pc = 0x1B2A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2A90u;
        // 0x1b2a94: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2A98u;
        goto label_1b2a98;
    }
    ctx->pc = 0x1B2A90u;
    SET_GPR_U32(ctx, 31, 0x1B2A98u);
    ctx->pc = 0x1B2A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2A90u;
    // 0x1b2a94: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3DE8u;
    { ctx->pc = 0x1b3de8; return; }
    ctx->pc = 0x1B2A98u;
label_1b2a98:
    // 0x1b2a98: 0x460002c6  mov.s       $f11, $f0
    ctx->pc = 0x1b2a98u;
    ctx->f[11] = FPU_MOV_S(ctx->f[0]);
label_1b2a9c:
    // 0x1b2a9c: 0x46005b46  mov.s       $f13, $f11
    ctx->pc = 0x1b2a9cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[11]);
label_1b2aa0:
    // 0x1b2aa0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1b2aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1b2aa4:
    // 0x1b2aa4: 0x2402f000  addiu       $v0, $zero, -0x1000
    ctx->pc = 0x1b2aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
label_1b2aa8:
    // 0x1b2aa8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1b2aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1b2aac:
    // 0x1b2aac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1b2aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1b2ab0:
    // 0x1b2ab0: 0x44835800  mtc1        $v1, $f11
    ctx->pc = 0x1b2ab0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_1b2ab4:
    // 0x1b2ab4: 0x0  nop
    ctx->pc = 0x1b2ab4u;
    // NOP
label_1b2ab8:
    // 0x1b2ab8: 0x460b58c2  mul.s       $f3, $f11, $f11
    ctx->pc = 0x1b2ab8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
label_1b2abc:
    // 0x1b2abc: 0x3c013811  lui         $at, 0x3811
    ctx->pc = 0x1b2abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14353 << 16));
label_1b2ac0:
    // 0x1b2ac0: 0x3421ef08  ori         $at, $at, 0xEF08
    ctx->pc = 0x1b2ac0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61192);
label_1b2ac4:
    // 0x1b2ac4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b2ac4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b2ac8:
    // 0x1b2ac8: 0x3c013a4f  lui         $at, 0x3A4F
    ctx->pc = 0x1b2ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14927 << 16));
label_1b2acc:
    // 0x1b2acc: 0x34217f04  ori         $at, $at, 0x7F04
    ctx->pc = 0x1b2accu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32516);
label_1b2ad0:
    // 0x1b2ad0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1b2ad0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1b2ad4:
    // 0x1b2ad4: 0x3c01bd24  lui         $at, 0xBD24
    ctx->pc = 0x1b2ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48420 << 16));
label_1b2ad8:
    // 0x1b2ad8: 0x34211146  ori         $at, $at, 0x1146
    ctx->pc = 0x1b2ad8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4422);
label_1b2adc:
    // 0x1b2adc: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1b2adcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_1b2ae0:
    // 0x1b2ae0: 0x3c013d9d  lui         $at, 0x3D9D
    ctx->pc = 0x1b2ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15773 << 16));
label_1b2ae4:
    // 0x1b2ae4: 0x3421c62e  ori         $at, $at, 0xC62E
    ctx->pc = 0x1b2ae4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50734);
label_1b2ae8:
    // 0x1b2ae8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b2ae8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b2aec:
    // 0x1b2aec: 0x0  nop
    ctx->pc = 0x1b2aecu;
    // NOP
label_1b2af0:
    // 0x1b2af0: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1b2af0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1b2af4:
    // 0x1b2af4: 0x3c01bf30  lui         $at, 0xBF30
    ctx->pc = 0x1b2af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48944 << 16));
label_1b2af8:
    // 0x1b2af8: 0x34213361  ori         $at, $at, 0x3361
    ctx->pc = 0x1b2af8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13153);
label_1b2afc:
    // 0x1b2afc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1b2afcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1b2b00:
    // 0x1b2b00: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1b2b00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_1b2b04:
    // 0x1b2b04: 0x3c013e4e  lui         $at, 0x3E4E
    ctx->pc = 0x1b2b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15950 << 16));
label_1b2b08:
    // 0x1b2b08: 0x34210aa8  ori         $at, $at, 0xAA8
    ctx->pc = 0x1b2b08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2728);
label_1b2b0c:
    // 0x1b2b0c: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x1b2b0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_1b2b10:
    // 0x1b2b10: 0x3c014001  lui         $at, 0x4001
    ctx->pc = 0x1b2b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16385 << 16));
label_1b2b14:
    // 0x1b2b14: 0x3421572d  ori         $at, $at, 0x572D
    ctx->pc = 0x1b2b14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)22317);
label_1b2b18:
    // 0x1b2b18: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1b2b18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1b2b1c:
    // 0x1b2b1c: 0x4603a8c1  sub.s       $f3, $f21, $f3
    ctx->pc = 0x1b2b1cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[21], ctx->f[3]);
label_1b2b20:
    // 0x1b2b20: 0x3c01bea6  lui         $at, 0xBEA6
    ctx->pc = 0x1b2b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48806 << 16));
label_1b2b24:
    // 0x1b2b24: 0x3421b090  ori         $at, $at, 0xB090
    ctx->pc = 0x1b2b24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45200);
label_1b2b28:
    // 0x1b2b28: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x1b2b28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_1b2b2c:
    // 0x1b2b2c: 0x0  nop
    ctx->pc = 0x1b2b2cu;
    // NOP
label_1b2b30:
    // 0x1b2b30: 0x460b6880  add.s       $f2, $f13, $f11
    ctx->pc = 0x1b2b30u;
    ctx->f[2] = FPU_ADD_S(ctx->f[13], ctx->f[11]);
label_1b2b34:
    // 0x1b2b34: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x1b2b34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_1b2b38:
    // 0x1b2b38: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x1b2b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
label_1b2b3c:
    // 0x1b2b3c: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1b2b3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
label_1b2b40:
    // 0x1b2b40: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1b2b40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1b2b44:
    // 0x1b2b44: 0x0  nop
    ctx->pc = 0x1b2b44u;
    // NOP
label_1b2b48:
    // 0x1b2b48: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x1b2b48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_1b2b4c:
    // 0x1b2b4c: 0x3c01c019  lui         $at, 0xC019
    ctx->pc = 0x1b2b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49177 << 16));
label_1b2b50:
    // 0x1b2b50: 0x3421d139  ori         $at, $at, 0xD139
    ctx->pc = 0x1b2b50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53561);
label_1b2b54:
    // 0x1b2b54: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1b2b54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_1b2b58:
    // 0x1b2b58: 0x0  nop
    ctx->pc = 0x1b2b58u;
    // NOP
label_1b2b5c:
    // 0x1b2b5c: 0x0  nop
    ctx->pc = 0x1b2b5cu;
    // NOP
label_1b2b60:
    // 0x1b2b60: 0x460218c3  div.s       $f3, $f3, $f2
    ctx->pc = 0x1b2b60u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[2];
label_1b2b64:
    // 0x1b2b64: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1b2b64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1b2b68:
    // 0x1b2b68: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1b2b68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_1b2b6c:
    // 0x1b2b6c: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x1b2b6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
label_1b2b70:
    // 0x1b2b70: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x1b2b70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
label_1b2b74:
    // 0x1b2b74: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1b2b74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1b2b78:
    // 0x1b2b78: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1b2b78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_1b2b7c:
    // 0x1b2b7c: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x1b2b7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
label_1b2b80:
    // 0x1b2b80: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x1b2b80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
label_1b2b84:
    // 0x1b2b84: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1b2b84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1b2b88:
    // 0x1b2b88: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1b2b88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_1b2b8c:
    // 0x1b2b8c: 0x460a0000  add.s       $f0, $f0, $f10
    ctx->pc = 0x1b2b8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
label_1b2b90:
    // 0x1b2b90: 0x46140d80  add.s       $f22, $f1, $f20
    ctx->pc = 0x1b2b90u;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_1b2b94:
    // 0x1b2b94: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1b2b94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1b2b98:
    // 0x1b2b98: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x1b2b98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_1b2b9c:
    // 0x1b2b9c: 0x4600ad02  mul.s       $f20, $f21, $f0
    ctx->pc = 0x1b2b9cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1b2ba0:
    // 0x1b2ba0: 0x0  nop
    ctx->pc = 0x1b2ba0u;
    // NOP
label_1b2ba4:
    // 0x1b2ba4: 0x0  nop
    ctx->pc = 0x1b2ba4u;
    // NOP
label_1b2ba8:
    // 0x1b2ba8: 0x4616a303  div.s       $f12, $f20, $f22
    ctx->pc = 0x1b2ba8u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[22];
label_1b2bac:
    // 0x1b2bac: 0x460d6002  mul.s       $f0, $f12, $f13
    ctx->pc = 0x1b2bacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[13]);
label_1b2bb0:
    // 0x1b2bb0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1b2bb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_1b2bb4:
    // 0x1b2bb4: 0x46005800  add.s       $f0, $f11, $f0
    ctx->pc = 0x1b2bb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[11], ctx->f[0]);
label_1b2bb8:
    // 0x1b2bb8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1b2bb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1b2bbc:
    // 0x1b2bbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b2bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b2bc0:
    // 0x1b2bc0: 0xc7b60028  lwc1        $f22, 0x28($sp)
    ctx->pc = 0x1b2bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1b2bc4:
    // 0x1b2bc4: 0xc7b50020  lwc1        $f21, 0x20($sp)
    ctx->pc = 0x1b2bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1b2bc8:
    // 0x1b2bc8: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x1b2bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1b2bcc:
    // 0x1b2bcc: 0x3e00008  jr          $ra
label_1b2bd0:
    if (ctx->pc == 0x1B2BD0u) {
        ctx->pc = 0x1B2BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2BCCu;
        // 0x1b2bd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2BD4u;
        goto label_1b2bd4;
    }
    ctx->pc = 0x1B2BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2BCCu;
        // 0x1b2bd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2BD4u;
label_1b2bd4:
    // 0x1b2bd4: 0x0  nop
    ctx->pc = 0x1b2bd4u;
    // NOP
label_1b2bd8:
    // 0x1b2bd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b2bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1b2bdc:
    // 0x1b2bdc: 0x46006046  mov.s       $f1, $f12
    ctx->pc = 0x1b2bdcu;
    ctx->f[1] = FPU_MOV_S(ctx->f[12]);
label_1b2be0:
    // 0x1b2be0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b2be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1b2be4:
    // 0x1b2be4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b2be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1b2be8:
    // 0x1b2be8: 0x44066800  mfc1        $a2, $f13
    ctx->pc = 0x1b2be8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_1b2bec:
    // 0x1b2bec: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1b2becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_1b2bf0:
    // 0x1b2bf0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b2bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b2bf4:
    // 0x1b2bf4: 0xc24024  and         $t0, $a2, $v0
    ctx->pc = 0x1b2bf4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_1b2bf8:
    // 0x1b2bf8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1b2bf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1b2bfc:
    // 0x1b2bfc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b2bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1b2c00:
    // 0x1b2c00: 0x14c30005  bne         $a2, $v1, . + 4 + (0x5 << 2)
label_1b2c04:
    if (ctx->pc == 0x1B2C04u) {
        ctx->pc = 0x1B2C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2C00u;
        // 0x1b2c04: 0xa23824  and         $a3, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2C08u;
        goto label_1b2c08;
    }
    ctx->pc = 0x1B2C00u;
    {
        const bool branch_taken_0x1b2c00 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B2C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2C00u;
        // 0x1b2c04: 0xa23824  and         $a3, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2c00) {
            ctx->pc = 0x1B2C18u;
            goto label_1b2c18;
        }
    }
    ctx->pc = 0x1B2C08u;
label_1b2c08:
    // 0x1b2c08: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b2c08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b2c0c:
    // 0x1b2c0c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b2c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1b2c10:
    // 0x1b2c10: 0x806d35a  j           func_1B4D68
label_1b2c14:
    if (ctx->pc == 0x1B2C14u) {
        ctx->pc = 0x1B2C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2C10u;
        // 0x1b2c14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2C18u;
        goto label_1b2c18;
    }
    ctx->pc = 0x1B2C10u;
    ctx->pc = 0x1B2C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2C10u;
    // 0x1b2c14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4D68u;
    { ctx->pc = 0x1b4d68; return; }
    ctx->pc = 0x1B2C18u;
label_1b2c18:
    // 0x1b2c18: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x1b2c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_1b2c1c:
    // 0x1b2c1c: 0x62783  sra         $a0, $a2, 30
    ctx->pc = 0x1b2c1cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 30));
label_1b2c20:
    // 0x1b2c20: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b2c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b2c24:
    // 0x1b2c24: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x1b2c24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_1b2c28:
    // 0x1b2c28: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x1b2c28u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_1b2c2c:
    // 0x1b2c2c: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x1b2c2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_1b2c30:
    // 0x1b2c30: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_1b2c34:
    if (ctx->pc == 0x1B2C34u) {
        ctx->pc = 0x1B2C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2C30u;
        // 0x1b2c34: 0x648025  or          $s0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2C38u;
        goto label_1b2c38;
    }
    ctx->pc = 0x1B2C30u;
    {
        const bool branch_taken_0x1b2c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2C30u;
        // 0x1b2c34: 0x648025  or          $s0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2c30) {
            ctx->pc = 0x1B2C7Cu;
            goto label_1b2c7c;
        }
    }
    ctx->pc = 0x1B2C38u;
label_1b2c38:
    // 0x1b2c38: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b2c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b2c3c:
    // 0x1b2c3c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1b2c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_1b2c40:
    // 0x1b2c40: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x1b2c40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
label_1b2c44:
    // 0x1b2c44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b2c44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b2c48:
    // 0x1b2c48: 0x12020058  beq         $s0, $v0, . + 4 + (0x58 << 2)
label_1b2c4c:
    if (ctx->pc == 0x1B2C4Cu) {
        ctx->pc = 0x1B2C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2C48u;
        // 0x1b2c4c: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2C50u;
        goto label_1b2c50;
    }
    ctx->pc = 0x1B2C48u;
    {
        const bool branch_taken_0x1b2c48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B2C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2C48u;
        // 0x1b2c4c: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2c48) {
            ctx->pc = 0x1B2DACu;
            { ctx->pc = 0x1b2dac; return; }
        }
    }
    ctx->pc = 0x1B2C50u;
label_1b2c50:
    // 0x1b2c50: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1b2c54:
    if (ctx->pc == 0x1B2C54u) {
        ctx->pc = 0x1B2C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2C50u;
        // 0x1b2c54: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2C58u;
        goto label_1b2c58;
    }
    ctx->pc = 0x1B2C50u;
    {
        const bool branch_taken_0x1b2c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2c50) {
            ctx->pc = 0x1B2C54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2C50u;
            // 0x1b2c54: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B2C68u;
            goto label_1b2c68;
        }
    }
    ctx->pc = 0x1B2C58u;
label_1b2c58:
    // 0x1b2c58: 0x6000009  bltz        $s0, . + 4 + (0x9 << 2)
label_1b2c5c:
    if (ctx->pc == 0x1B2C5Cu) {
        ctx->pc = 0x1B2C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2C58u;
        // 0x1b2c5c: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2C60u;
        goto label_1b2c60;
    }
    ctx->pc = 0x1B2C58u;
    {
        const bool branch_taken_0x1b2c58 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1B2C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2C58u;
        // 0x1b2c5c: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2c58) {
            ctx->pc = 0x1B2C80u;
            goto label_1b2c80;
        }
    }
    ctx->pc = 0x1B2C60u;
label_1b2c60:
    // 0x1b2c60: 0x10000052  b           . + 4 + (0x52 << 2)
label_1b2c64:
    if (ctx->pc == 0x1B2C64u) {
        ctx->pc = 0x1B2C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2C60u;
        // 0x1b2c64: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2C68u;
        goto label_1b2c68;
    }
    ctx->pc = 0x1B2C60u;
    {
        const bool branch_taken_0x1b2c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2C60u;
        // 0x1b2c64: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2c60) {
            ctx->pc = 0x1B2DACu;
            { ctx->pc = 0x1b2dac; return; }
        }
    }
    ctx->pc = 0x1B2C68u;
label_1b2c68:
    // 0x1b2c68: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x1b2c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
label_1b2c6c:
    // 0x1b2c6c: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x1b2c6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
label_1b2c70:
    // 0x1b2c70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b2c70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b2c74:
    // 0x1b2c74: 0x5202004e  beql        $s0, $v0, . + 4 + (0x4E << 2)
label_1b2c78:
    if (ctx->pc == 0x1B2C78u) {
        ctx->pc = 0x1B2C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2C74u;
        // 0x1b2c78: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2C7Cu;
        goto label_1b2c7c;
    }
    ctx->pc = 0x1B2C74u;
    {
        const bool branch_taken_0x1b2c74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b2c74) {
            ctx->pc = 0x1B2C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2C74u;
            // 0x1b2c78: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B2DB0u;
            { ctx->pc = 0x1b2db0; return; }
        }
    }
    ctx->pc = 0x1B2C7Cu;
label_1b2c7c:
    // 0x1b2c7c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x1b2c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_1b2c80:
    // 0x1b2c80: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b2c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b2c84:
    // 0x1b2c84: 0x48102a  slt         $v0, $v0, $t0
    ctx->pc = 0x1b2c84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_1b2c88:
    // 0x1b2c88: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1b2c8c:
    if (ctx->pc == 0x1B2C8Cu) {
        ctx->pc = 0x1B2C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2C88u;
        // 0x1b2c8c: 0xe81823  subu        $v1, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2C90u;
        goto label_1b2c90;
    }
    ctx->pc = 0x1B2C88u;
    {
        const bool branch_taken_0x1b2c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2C88u;
        // 0x1b2c8c: 0xe81823  subu        $v1, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2c88) {
            ctx->pc = 0x1B2CB8u;
            goto label_1b2cb8;
        }
    }
    ctx->pc = 0x1B2C90u;
label_1b2c90:
    // 0x1b2c90: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x1b2c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
label_1b2c94:
    // 0x1b2c94: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1b2c94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1b2c98:
    // 0x1b2c98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b2c98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b2c9c:
    // 0x1b2c9c: 0x4a00043  bltz        $a1, . + 4 + (0x43 << 2)
label_1b2ca0:
    if (ctx->pc == 0x1B2CA0u) {
        ctx->pc = 0x1B2CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2C9Cu;
        // 0x1b2ca0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2CA4u;
        goto label_1b2ca4;
    }
    ctx->pc = 0x1B2C9Cu;
    {
        const bool branch_taken_0x1b2c9c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1B2CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2C9Cu;
        // 0x1b2ca0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2c9c) {
            ctx->pc = 0x1B2DACu;
            { ctx->pc = 0x1b2dac; return; }
        }
    }
    ctx->pc = 0x1B2CA4u;
label_1b2ca4:
    // 0x1b2ca4: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1b2ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_1b2ca8:
    // 0x1b2ca8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1b2ca8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_1b2cac:
    // 0x1b2cac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b2cacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b2cb0:
    // 0x1b2cb0: 0x10000040  b           . + 4 + (0x40 << 2)
label_1b2cb4:
    if (ctx->pc == 0x1B2CB4u) {
        ctx->pc = 0x1B2CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2CB0u;
        // 0x1b2cb4: 0xdfbf0018  ld          $ra, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2CB8u;
        goto label_1b2cb8;
    }
    ctx->pc = 0x1B2CB0u;
    {
        const bool branch_taken_0x1b2cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2CB0u;
        // 0x1b2cb4: 0xdfbf0018  ld          $ra, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2cb0) {
            ctx->pc = 0x1B2DB4u;
            { ctx->pc = 0x1b2db4; return; }
        }
    }
    ctx->pc = 0x1B2CB8u;
label_1b2cb8:
    // 0x1b2cb8: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1b2cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_1b2cbc:
    // 0x1b2cbc: 0x34210fdc  ori         $at, $at, 0xFDC
    ctx->pc = 0x1b2cbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4060);
label_1b2cc0:
    // 0x1b2cc0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b2cc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b2cc4:
    // 0x1b2cc4: 0x31dc3  sra         $v1, $v1, 23
    ctx->pc = 0x1b2cc4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 23));
label_1b2cc8:
    // 0x1b2cc8: 0x2862003d  slti        $v0, $v1, 0x3D
    ctx->pc = 0x1b2cc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)61) ? 1 : 0);
label_1b2ccc:
    // 0x1b2ccc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1b2cd0:
    if (ctx->pc == 0x1B2CD0u) {
        ctx->pc = 0x1B2CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2CCCu;
        // 0x1b2cd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2CD4u;
        goto label_1b2cd4;
    }
    ctx->pc = 0x1B2CCCu;
    {
        const bool branch_taken_0x1b2ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2CCCu;
        // 0x1b2cd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2ccc) {
            ctx->pc = 0x1B2D0Cu;
            { ctx->pc = 0x1b2d0c; return; }
        }
    }
    ctx->pc = 0x1B2CD4u;
label_1b2cd4:
    // 0x1b2cd4: 0x4c10004  bgez        $a2, . + 4 + (0x4 << 2)
label_1b2cd8:
    if (ctx->pc == 0x1B2CD8u) {
        ctx->pc = 0x1B2CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2CD4u;
        // 0x1b2cd8: 0x2862ffc4  slti        $v0, $v1, -0x3C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967236) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2CDCu;
        goto label_1b2cdc;
    }
    ctx->pc = 0x1B2CD4u;
    {
        const bool branch_taken_0x1b2cd4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1B2CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2CD4u;
        // 0x1b2cd8: 0x2862ffc4  slti        $v0, $v1, -0x3C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967236) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2cd4) {
            ctx->pc = 0x1B2CE8u;
            { ctx->pc = 0x1b2ce8; return; }
        }
    }
    ctx->pc = 0x1B2CDCu;
label_1b2cdc:
    // 0x1b2cdc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1b2cdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b2ce0:
    // 0x1b2ce0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1b2ce4:
    if (ctx->pc == 0x1B2CE4u) {
        ctx->pc = 0x1B2CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2CE0u;
        // 0x1b2ce4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B2CE8u;
        { ctx->pc = 0x1b2ce8; return; }
    }
    ctx->pc = 0x1B2CE0u;
    {
        const bool branch_taken_0x1b2ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2CE0u;
        // 0x1b2ce4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2ce0) {
            ctx->pc = 0x1B2D0Cu;
            { ctx->pc = 0x1b2d0c; return; }
        }
    }
    ctx->pc = 0x1B2CE8u;
    ctx->pc = 0x1b2ce8u;
    return;
}

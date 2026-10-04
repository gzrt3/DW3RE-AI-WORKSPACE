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

// Function: FUN_0019b850
// Address: 0x19b850 - 0x29b858
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b850_part15(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1a25b0u: goto label_1a25b0;
        case 0x1a25b4u: goto label_1a25b4;
        case 0x1a25b8u: goto label_1a25b8;
        case 0x1a25bcu: goto label_1a25bc;
        case 0x1a25c0u: goto label_1a25c0;
        case 0x1a25c4u: goto label_1a25c4;
        case 0x1a25c8u: goto label_1a25c8;
        case 0x1a25ccu: goto label_1a25cc;
        case 0x1a25d0u: goto label_1a25d0;
        case 0x1a25d4u: goto label_1a25d4;
        case 0x1a25d8u: goto label_1a25d8;
        case 0x1a25dcu: goto label_1a25dc;
        case 0x1a25e0u: goto label_1a25e0;
        case 0x1a25e4u: goto label_1a25e4;
        case 0x1a25e8u: goto label_1a25e8;
        case 0x1a25ecu: goto label_1a25ec;
        case 0x1a25f0u: goto label_1a25f0;
        case 0x1a25f4u: goto label_1a25f4;
        case 0x1a25f8u: goto label_1a25f8;
        case 0x1a25fcu: goto label_1a25fc;
        case 0x1a2600u: goto label_1a2600;
        case 0x1a2604u: goto label_1a2604;
        case 0x1a2608u: goto label_1a2608;
        case 0x1a260cu: goto label_1a260c;
        case 0x1a2610u: goto label_1a2610;
        case 0x1a2614u: goto label_1a2614;
        case 0x1a2618u: goto label_1a2618;
        case 0x1a261cu: goto label_1a261c;
        case 0x1a2620u: goto label_1a2620;
        case 0x1a2624u: goto label_1a2624;
        case 0x1a2628u: goto label_1a2628;
        case 0x1a262cu: goto label_1a262c;
        case 0x1a2630u: goto label_1a2630;
        case 0x1a2634u: goto label_1a2634;
        case 0x1a2638u: goto label_1a2638;
        case 0x1a263cu: goto label_1a263c;
        case 0x1a2640u: goto label_1a2640;
        case 0x1a2644u: goto label_1a2644;
        case 0x1a2648u: goto label_1a2648;
        case 0x1a264cu: goto label_1a264c;
        case 0x1a2650u: goto label_1a2650;
        case 0x1a2654u: goto label_1a2654;
        case 0x1a2658u: goto label_1a2658;
        case 0x1a265cu: goto label_1a265c;
        case 0x1a2660u: goto label_1a2660;
        case 0x1a2664u: goto label_1a2664;
        case 0x1a2668u: goto label_1a2668;
        case 0x1a266cu: goto label_1a266c;
        case 0x1a2670u: goto label_1a2670;
        case 0x1a2674u: goto label_1a2674;
        case 0x1a2678u: goto label_1a2678;
        case 0x1a267cu: goto label_1a267c;
        case 0x1a2680u: goto label_1a2680;
        case 0x1a2684u: goto label_1a2684;
        case 0x1a2688u: goto label_1a2688;
        case 0x1a268cu: goto label_1a268c;
        case 0x1a2690u: goto label_1a2690;
        case 0x1a2694u: goto label_1a2694;
        case 0x1a2698u: goto label_1a2698;
        case 0x1a269cu: goto label_1a269c;
        case 0x1a26a0u: goto label_1a26a0;
        case 0x1a26a4u: goto label_1a26a4;
        case 0x1a26a8u: goto label_1a26a8;
        case 0x1a26acu: goto label_1a26ac;
        case 0x1a26b0u: goto label_1a26b0;
        case 0x1a26b4u: goto label_1a26b4;
        case 0x1a26b8u: goto label_1a26b8;
        case 0x1a26bcu: goto label_1a26bc;
        case 0x1a26c0u: goto label_1a26c0;
        case 0x1a26c4u: goto label_1a26c4;
        case 0x1a26c8u: goto label_1a26c8;
        case 0x1a26ccu: goto label_1a26cc;
        case 0x1a26d0u: goto label_1a26d0;
        case 0x1a26d4u: goto label_1a26d4;
        case 0x1a26d8u: goto label_1a26d8;
        case 0x1a26dcu: goto label_1a26dc;
        case 0x1a26e0u: goto label_1a26e0;
        case 0x1a26e4u: goto label_1a26e4;
        case 0x1a26e8u: goto label_1a26e8;
        case 0x1a26ecu: goto label_1a26ec;
        case 0x1a26f0u: goto label_1a26f0;
        case 0x1a26f4u: goto label_1a26f4;
        case 0x1a26f8u: goto label_1a26f8;
        case 0x1a26fcu: goto label_1a26fc;
        case 0x1a2700u: goto label_1a2700;
        case 0x1a2704u: goto label_1a2704;
        case 0x1a2708u: goto label_1a2708;
        case 0x1a270cu: goto label_1a270c;
        case 0x1a2710u: goto label_1a2710;
        case 0x1a2714u: goto label_1a2714;
        case 0x1a2718u: goto label_1a2718;
        case 0x1a271cu: goto label_1a271c;
        case 0x1a2720u: goto label_1a2720;
        case 0x1a2724u: goto label_1a2724;
        case 0x1a2728u: goto label_1a2728;
        case 0x1a272cu: goto label_1a272c;
        case 0x1a2730u: goto label_1a2730;
        case 0x1a2734u: goto label_1a2734;
        case 0x1a2738u: goto label_1a2738;
        case 0x1a273cu: goto label_1a273c;
        case 0x1a2740u: goto label_1a2740;
        case 0x1a2744u: goto label_1a2744;
        case 0x1a2748u: goto label_1a2748;
        case 0x1a274cu: goto label_1a274c;
        case 0x1a2750u: goto label_1a2750;
        case 0x1a2754u: goto label_1a2754;
        case 0x1a2758u: goto label_1a2758;
        case 0x1a275cu: goto label_1a275c;
        case 0x1a2760u: goto label_1a2760;
        case 0x1a2764u: goto label_1a2764;
        case 0x1a2768u: goto label_1a2768;
        case 0x1a276cu: goto label_1a276c;
        case 0x1a2770u: goto label_1a2770;
        case 0x1a2774u: goto label_1a2774;
        case 0x1a2778u: goto label_1a2778;
        case 0x1a277cu: goto label_1a277c;
        case 0x1a2780u: goto label_1a2780;
        case 0x1a2784u: goto label_1a2784;
        case 0x1a2788u: goto label_1a2788;
        case 0x1a278cu: goto label_1a278c;
        case 0x1a2790u: goto label_1a2790;
        case 0x1a2794u: goto label_1a2794;
        case 0x1a2798u: goto label_1a2798;
        case 0x1a279cu: goto label_1a279c;
        case 0x1a27a0u: goto label_1a27a0;
        case 0x1a27a4u: goto label_1a27a4;
        case 0x1a27a8u: goto label_1a27a8;
        case 0x1a27acu: goto label_1a27ac;
        case 0x1a27b0u: goto label_1a27b0;
        case 0x1a27b4u: goto label_1a27b4;
        case 0x1a27b8u: goto label_1a27b8;
        case 0x1a27bcu: goto label_1a27bc;
        case 0x1a27c0u: goto label_1a27c0;
        case 0x1a27c4u: goto label_1a27c4;
        case 0x1a27c8u: goto label_1a27c8;
        case 0x1a27ccu: goto label_1a27cc;
        case 0x1a27d0u: goto label_1a27d0;
        case 0x1a27d4u: goto label_1a27d4;
        case 0x1a27d8u: goto label_1a27d8;
        case 0x1a27dcu: goto label_1a27dc;
        case 0x1a27e0u: goto label_1a27e0;
        case 0x1a27e4u: goto label_1a27e4;
        case 0x1a27e8u: goto label_1a27e8;
        case 0x1a27ecu: goto label_1a27ec;
        case 0x1a27f0u: goto label_1a27f0;
        case 0x1a27f4u: goto label_1a27f4;
        case 0x1a27f8u: goto label_1a27f8;
        case 0x1a27fcu: goto label_1a27fc;
        case 0x1a2800u: goto label_1a2800;
        case 0x1a2804u: goto label_1a2804;
        case 0x1a2808u: goto label_1a2808;
        case 0x1a280cu: goto label_1a280c;
        case 0x1a2810u: goto label_1a2810;
        case 0x1a2814u: goto label_1a2814;
        case 0x1a2818u: goto label_1a2818;
        case 0x1a281cu: goto label_1a281c;
        case 0x1a2820u: goto label_1a2820;
        case 0x1a2824u: goto label_1a2824;
        case 0x1a2828u: goto label_1a2828;
        case 0x1a282cu: goto label_1a282c;
        case 0x1a2830u: goto label_1a2830;
        case 0x1a2834u: goto label_1a2834;
        case 0x1a2838u: goto label_1a2838;
        case 0x1a283cu: goto label_1a283c;
        case 0x1a2840u: goto label_1a2840;
        case 0x1a2844u: goto label_1a2844;
        case 0x1a2848u: goto label_1a2848;
        case 0x1a284cu: goto label_1a284c;
        case 0x1a2850u: goto label_1a2850;
        case 0x1a2854u: goto label_1a2854;
        case 0x1a2858u: goto label_1a2858;
        case 0x1a285cu: goto label_1a285c;
        case 0x1a2860u: goto label_1a2860;
        case 0x1a2864u: goto label_1a2864;
        case 0x1a2868u: goto label_1a2868;
        case 0x1a286cu: goto label_1a286c;
        case 0x1a2870u: goto label_1a2870;
        case 0x1a2874u: goto label_1a2874;
        case 0x1a2878u: goto label_1a2878;
        case 0x1a287cu: goto label_1a287c;
        case 0x1a2880u: goto label_1a2880;
        case 0x1a2884u: goto label_1a2884;
        case 0x1a2888u: goto label_1a2888;
        case 0x1a288cu: goto label_1a288c;
        case 0x1a2890u: goto label_1a2890;
        case 0x1a2894u: goto label_1a2894;
        case 0x1a2898u: goto label_1a2898;
        case 0x1a289cu: goto label_1a289c;
        case 0x1a28a0u: goto label_1a28a0;
        case 0x1a28a4u: goto label_1a28a4;
        case 0x1a28a8u: goto label_1a28a8;
        case 0x1a28acu: goto label_1a28ac;
        case 0x1a28b0u: goto label_1a28b0;
        case 0x1a28b4u: goto label_1a28b4;
        case 0x1a28b8u: goto label_1a28b8;
        case 0x1a28bcu: goto label_1a28bc;
        case 0x1a28c0u: goto label_1a28c0;
        case 0x1a28c4u: goto label_1a28c4;
        case 0x1a28c8u: goto label_1a28c8;
        case 0x1a28ccu: goto label_1a28cc;
        case 0x1a28d0u: goto label_1a28d0;
        case 0x1a28d4u: goto label_1a28d4;
        case 0x1a28d8u: goto label_1a28d8;
        case 0x1a28dcu: goto label_1a28dc;
        case 0x1a28e0u: goto label_1a28e0;
        case 0x1a28e4u: goto label_1a28e4;
        case 0x1a28e8u: goto label_1a28e8;
        case 0x1a28ecu: goto label_1a28ec;
        case 0x1a28f0u: goto label_1a28f0;
        case 0x1a28f4u: goto label_1a28f4;
        case 0x1a28f8u: goto label_1a28f8;
        case 0x1a28fcu: goto label_1a28fc;
        case 0x1a2900u: goto label_1a2900;
        case 0x1a2904u: goto label_1a2904;
        case 0x1a2908u: goto label_1a2908;
        case 0x1a290cu: goto label_1a290c;
        case 0x1a2910u: goto label_1a2910;
        case 0x1a2914u: goto label_1a2914;
        case 0x1a2918u: goto label_1a2918;
        case 0x1a291cu: goto label_1a291c;
        case 0x1a2920u: goto label_1a2920;
        case 0x1a2924u: goto label_1a2924;
        case 0x1a2928u: goto label_1a2928;
        case 0x1a292cu: goto label_1a292c;
        case 0x1a2930u: goto label_1a2930;
        case 0x1a2934u: goto label_1a2934;
        case 0x1a2938u: goto label_1a2938;
        case 0x1a293cu: goto label_1a293c;
        case 0x1a2940u: goto label_1a2940;
        case 0x1a2944u: goto label_1a2944;
        case 0x1a2948u: goto label_1a2948;
        case 0x1a294cu: goto label_1a294c;
        case 0x1a2950u: goto label_1a2950;
        case 0x1a2954u: goto label_1a2954;
        case 0x1a2958u: goto label_1a2958;
        case 0x1a295cu: goto label_1a295c;
        case 0x1a2960u: goto label_1a2960;
        case 0x1a2964u: goto label_1a2964;
        case 0x1a2968u: goto label_1a2968;
        case 0x1a296cu: goto label_1a296c;
        case 0x1a2970u: goto label_1a2970;
        case 0x1a2974u: goto label_1a2974;
        case 0x1a2978u: goto label_1a2978;
        case 0x1a297cu: goto label_1a297c;
        case 0x1a2980u: goto label_1a2980;
        case 0x1a2984u: goto label_1a2984;
        case 0x1a2988u: goto label_1a2988;
        case 0x1a298cu: goto label_1a298c;
        case 0x1a2990u: goto label_1a2990;
        case 0x1a2994u: goto label_1a2994;
        case 0x1a2998u: goto label_1a2998;
        case 0x1a299cu: goto label_1a299c;
        case 0x1a29a0u: goto label_1a29a0;
        case 0x1a29a4u: goto label_1a29a4;
        case 0x1a29a8u: goto label_1a29a8;
        case 0x1a29acu: goto label_1a29ac;
        case 0x1a29b0u: goto label_1a29b0;
        case 0x1a29b4u: goto label_1a29b4;
        case 0x1a29b8u: goto label_1a29b8;
        case 0x1a29bcu: goto label_1a29bc;
        case 0x1a29c0u: goto label_1a29c0;
        case 0x1a29c4u: goto label_1a29c4;
        case 0x1a29c8u: goto label_1a29c8;
        case 0x1a29ccu: goto label_1a29cc;
        case 0x1a29d0u: goto label_1a29d0;
        case 0x1a29d4u: goto label_1a29d4;
        case 0x1a29d8u: goto label_1a29d8;
        case 0x1a29dcu: goto label_1a29dc;
        case 0x1a29e0u: goto label_1a29e0;
        case 0x1a29e4u: goto label_1a29e4;
        case 0x1a29e8u: goto label_1a29e8;
        case 0x1a29ecu: goto label_1a29ec;
        case 0x1a29f0u: goto label_1a29f0;
        case 0x1a29f4u: goto label_1a29f4;
        case 0x1a29f8u: goto label_1a29f8;
        case 0x1a29fcu: goto label_1a29fc;
        case 0x1a2a00u: goto label_1a2a00;
        case 0x1a2a04u: goto label_1a2a04;
        case 0x1a2a08u: goto label_1a2a08;
        case 0x1a2a0cu: goto label_1a2a0c;
        case 0x1a2a10u: goto label_1a2a10;
        case 0x1a2a14u: goto label_1a2a14;
        case 0x1a2a18u: goto label_1a2a18;
        case 0x1a2a1cu: goto label_1a2a1c;
        case 0x1a2a20u: goto label_1a2a20;
        case 0x1a2a24u: goto label_1a2a24;
        case 0x1a2a28u: goto label_1a2a28;
        case 0x1a2a2cu: goto label_1a2a2c;
        case 0x1a2a30u: goto label_1a2a30;
        case 0x1a2a34u: goto label_1a2a34;
        case 0x1a2a38u: goto label_1a2a38;
        case 0x1a2a3cu: goto label_1a2a3c;
        case 0x1a2a40u: goto label_1a2a40;
        case 0x1a2a44u: goto label_1a2a44;
        case 0x1a2a48u: goto label_1a2a48;
        case 0x1a2a4cu: goto label_1a2a4c;
        case 0x1a2a50u: goto label_1a2a50;
        case 0x1a2a54u: goto label_1a2a54;
        case 0x1a2a58u: goto label_1a2a58;
        case 0x1a2a5cu: goto label_1a2a5c;
        case 0x1a2a60u: goto label_1a2a60;
        case 0x1a2a64u: goto label_1a2a64;
        case 0x1a2a68u: goto label_1a2a68;
        case 0x1a2a6cu: goto label_1a2a6c;
        case 0x1a2a70u: goto label_1a2a70;
        case 0x1a2a74u: goto label_1a2a74;
        case 0x1a2a78u: goto label_1a2a78;
        case 0x1a2a7cu: goto label_1a2a7c;
        case 0x1a2a80u: goto label_1a2a80;
        case 0x1a2a84u: goto label_1a2a84;
        case 0x1a2a88u: goto label_1a2a88;
        case 0x1a2a8cu: goto label_1a2a8c;
        case 0x1a2a90u: goto label_1a2a90;
        case 0x1a2a94u: goto label_1a2a94;
        case 0x1a2a98u: goto label_1a2a98;
        case 0x1a2a9cu: goto label_1a2a9c;
        case 0x1a2aa0u: goto label_1a2aa0;
        case 0x1a2aa4u: goto label_1a2aa4;
        case 0x1a2aa8u: goto label_1a2aa8;
        case 0x1a2aacu: goto label_1a2aac;
        case 0x1a2ab0u: goto label_1a2ab0;
        case 0x1a2ab4u: goto label_1a2ab4;
        case 0x1a2ab8u: goto label_1a2ab8;
        case 0x1a2abcu: goto label_1a2abc;
        case 0x1a2ac0u: goto label_1a2ac0;
        case 0x1a2ac4u: goto label_1a2ac4;
        case 0x1a2ac8u: goto label_1a2ac8;
        case 0x1a2accu: goto label_1a2acc;
        case 0x1a2ad0u: goto label_1a2ad0;
        case 0x1a2ad4u: goto label_1a2ad4;
        case 0x1a2ad8u: goto label_1a2ad8;
        case 0x1a2adcu: goto label_1a2adc;
        case 0x1a2ae0u: goto label_1a2ae0;
        case 0x1a2ae4u: goto label_1a2ae4;
        case 0x1a2ae8u: goto label_1a2ae8;
        case 0x1a2aecu: goto label_1a2aec;
        case 0x1a2af0u: goto label_1a2af0;
        case 0x1a2af4u: goto label_1a2af4;
        case 0x1a2af8u: goto label_1a2af8;
        case 0x1a2afcu: goto label_1a2afc;
        case 0x1a2b00u: goto label_1a2b00;
        case 0x1a2b04u: goto label_1a2b04;
        case 0x1a2b08u: goto label_1a2b08;
        case 0x1a2b0cu: goto label_1a2b0c;
        case 0x1a2b10u: goto label_1a2b10;
        case 0x1a2b14u: goto label_1a2b14;
        case 0x1a2b18u: goto label_1a2b18;
        case 0x1a2b1cu: goto label_1a2b1c;
        case 0x1a2b20u: goto label_1a2b20;
        case 0x1a2b24u: goto label_1a2b24;
        case 0x1a2b28u: goto label_1a2b28;
        case 0x1a2b2cu: goto label_1a2b2c;
        case 0x1a2b30u: goto label_1a2b30;
        case 0x1a2b34u: goto label_1a2b34;
        case 0x1a2b38u: goto label_1a2b38;
        case 0x1a2b3cu: goto label_1a2b3c;
        case 0x1a2b40u: goto label_1a2b40;
        case 0x1a2b44u: goto label_1a2b44;
        case 0x1a2b48u: goto label_1a2b48;
        case 0x1a2b4cu: goto label_1a2b4c;
        case 0x1a2b50u: goto label_1a2b50;
        case 0x1a2b54u: goto label_1a2b54;
        case 0x1a2b58u: goto label_1a2b58;
        case 0x1a2b5cu: goto label_1a2b5c;
        case 0x1a2b60u: goto label_1a2b60;
        case 0x1a2b64u: goto label_1a2b64;
        case 0x1a2b68u: goto label_1a2b68;
        case 0x1a2b6cu: goto label_1a2b6c;
        case 0x1a2b70u: goto label_1a2b70;
        case 0x1a2b74u: goto label_1a2b74;
        case 0x1a2b78u: goto label_1a2b78;
        case 0x1a2b7cu: goto label_1a2b7c;
        case 0x1a2b80u: goto label_1a2b80;
        case 0x1a2b84u: goto label_1a2b84;
        case 0x1a2b88u: goto label_1a2b88;
        case 0x1a2b8cu: goto label_1a2b8c;
        case 0x1a2b90u: goto label_1a2b90;
        case 0x1a2b94u: goto label_1a2b94;
        case 0x1a2b98u: goto label_1a2b98;
        case 0x1a2b9cu: goto label_1a2b9c;
        case 0x1a2ba0u: goto label_1a2ba0;
        case 0x1a2ba4u: goto label_1a2ba4;
        case 0x1a2ba8u: goto label_1a2ba8;
        case 0x1a2bacu: goto label_1a2bac;
        case 0x1a2bb0u: goto label_1a2bb0;
        case 0x1a2bb4u: goto label_1a2bb4;
        case 0x1a2bb8u: goto label_1a2bb8;
        case 0x1a2bbcu: goto label_1a2bbc;
        case 0x1a2bc0u: goto label_1a2bc0;
        case 0x1a2bc4u: goto label_1a2bc4;
        case 0x1a2bc8u: goto label_1a2bc8;
        case 0x1a2bccu: goto label_1a2bcc;
        case 0x1a2bd0u: goto label_1a2bd0;
        case 0x1a2bd4u: goto label_1a2bd4;
        case 0x1a2bd8u: goto label_1a2bd8;
        case 0x1a2bdcu: goto label_1a2bdc;
        case 0x1a2be0u: goto label_1a2be0;
        case 0x1a2be4u: goto label_1a2be4;
        case 0x1a2be8u: goto label_1a2be8;
        case 0x1a2becu: goto label_1a2bec;
        case 0x1a2bf0u: goto label_1a2bf0;
        case 0x1a2bf4u: goto label_1a2bf4;
        case 0x1a2bf8u: goto label_1a2bf8;
        case 0x1a2bfcu: goto label_1a2bfc;
        case 0x1a2c00u: goto label_1a2c00;
        case 0x1a2c04u: goto label_1a2c04;
        case 0x1a2c08u: goto label_1a2c08;
        case 0x1a2c0cu: goto label_1a2c0c;
        case 0x1a2c10u: goto label_1a2c10;
        case 0x1a2c14u: goto label_1a2c14;
        case 0x1a2c18u: goto label_1a2c18;
        case 0x1a2c1cu: goto label_1a2c1c;
        case 0x1a2c20u: goto label_1a2c20;
        case 0x1a2c24u: goto label_1a2c24;
        case 0x1a2c28u: goto label_1a2c28;
        case 0x1a2c2cu: goto label_1a2c2c;
        case 0x1a2c30u: goto label_1a2c30;
        case 0x1a2c34u: goto label_1a2c34;
        case 0x1a2c38u: goto label_1a2c38;
        case 0x1a2c3cu: goto label_1a2c3c;
        case 0x1a2c40u: goto label_1a2c40;
        case 0x1a2c44u: goto label_1a2c44;
        case 0x1a2c48u: goto label_1a2c48;
        case 0x1a2c4cu: goto label_1a2c4c;
        case 0x1a2c50u: goto label_1a2c50;
        case 0x1a2c54u: goto label_1a2c54;
        case 0x1a2c58u: goto label_1a2c58;
        case 0x1a2c5cu: goto label_1a2c5c;
        case 0x1a2c60u: goto label_1a2c60;
        case 0x1a2c64u: goto label_1a2c64;
        case 0x1a2c68u: goto label_1a2c68;
        case 0x1a2c6cu: goto label_1a2c6c;
        case 0x1a2c70u: goto label_1a2c70;
        case 0x1a2c74u: goto label_1a2c74;
        case 0x1a2c78u: goto label_1a2c78;
        case 0x1a2c7cu: goto label_1a2c7c;
        case 0x1a2c80u: goto label_1a2c80;
        case 0x1a2c84u: goto label_1a2c84;
        case 0x1a2c88u: goto label_1a2c88;
        case 0x1a2c8cu: goto label_1a2c8c;
        case 0x1a2c90u: goto label_1a2c90;
        case 0x1a2c94u: goto label_1a2c94;
        case 0x1a2c98u: goto label_1a2c98;
        case 0x1a2c9cu: goto label_1a2c9c;
        case 0x1a2ca0u: goto label_1a2ca0;
        case 0x1a2ca4u: goto label_1a2ca4;
        case 0x1a2ca8u: goto label_1a2ca8;
        case 0x1a2cacu: goto label_1a2cac;
        case 0x1a2cb0u: goto label_1a2cb0;
        case 0x1a2cb4u: goto label_1a2cb4;
        case 0x1a2cb8u: goto label_1a2cb8;
        case 0x1a2cbcu: goto label_1a2cbc;
        case 0x1a2cc0u: goto label_1a2cc0;
        case 0x1a2cc4u: goto label_1a2cc4;
        case 0x1a2cc8u: goto label_1a2cc8;
        case 0x1a2cccu: goto label_1a2ccc;
        case 0x1a2cd0u: goto label_1a2cd0;
        case 0x1a2cd4u: goto label_1a2cd4;
        case 0x1a2cd8u: goto label_1a2cd8;
        case 0x1a2cdcu: goto label_1a2cdc;
        case 0x1a2ce0u: goto label_1a2ce0;
        case 0x1a2ce4u: goto label_1a2ce4;
        case 0x1a2ce8u: goto label_1a2ce8;
        case 0x1a2cecu: goto label_1a2cec;
        case 0x1a2cf0u: goto label_1a2cf0;
        case 0x1a2cf4u: goto label_1a2cf4;
        case 0x1a2cf8u: goto label_1a2cf8;
        case 0x1a2cfcu: goto label_1a2cfc;
        case 0x1a2d00u: goto label_1a2d00;
        case 0x1a2d04u: goto label_1a2d04;
        case 0x1a2d08u: goto label_1a2d08;
        case 0x1a2d0cu: goto label_1a2d0c;
        case 0x1a2d10u: goto label_1a2d10;
        case 0x1a2d14u: goto label_1a2d14;
        case 0x1a2d18u: goto label_1a2d18;
        case 0x1a2d1cu: goto label_1a2d1c;
        case 0x1a2d20u: goto label_1a2d20;
        case 0x1a2d24u: goto label_1a2d24;
        case 0x1a2d28u: goto label_1a2d28;
        case 0x1a2d2cu: goto label_1a2d2c;
        case 0x1a2d30u: goto label_1a2d30;
        case 0x1a2d34u: goto label_1a2d34;
        case 0x1a2d38u: goto label_1a2d38;
        case 0x1a2d3cu: goto label_1a2d3c;
        case 0x1a2d40u: goto label_1a2d40;
        case 0x1a2d44u: goto label_1a2d44;
        case 0x1a2d48u: goto label_1a2d48;
        case 0x1a2d4cu: goto label_1a2d4c;
        case 0x1a2d50u: goto label_1a2d50;
        case 0x1a2d54u: goto label_1a2d54;
        case 0x1a2d58u: goto label_1a2d58;
        case 0x1a2d5cu: goto label_1a2d5c;
        case 0x1a2d60u: goto label_1a2d60;
        case 0x1a2d64u: goto label_1a2d64;
        case 0x1a2d68u: goto label_1a2d68;
        case 0x1a2d6cu: goto label_1a2d6c;
        case 0x1a2d70u: goto label_1a2d70;
        case 0x1a2d74u: goto label_1a2d74;
        case 0x1a2d78u: goto label_1a2d78;
        case 0x1a2d7cu: goto label_1a2d7c;
        default: return;
    }

label_1a25b0:
    // 0x1a25b0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_1a25b4:
    if (ctx->pc == 0x1A25B4u) {
        ctx->pc = 0x1A25B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A25B0u;
        // 0x1a25b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A25B8u;
        goto label_1a25b8;
    }
    ctx->pc = 0x1A25B0u;
    {
        const bool branch_taken_0x1a25b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A25B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A25B0u;
        // 0x1a25b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a25b0) {
            ctx->pc = 0x1A25A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1a25a0; return; }
        }
    }
    ctx->pc = 0x1A25B8u;
label_1a25b8:
    // 0x1a25b8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a25bc:
    if (ctx->pc == 0x1A25BCu) {
        ctx->pc = 0x1A25BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A25B8u;
        // 0x1a25bc: 0xde620018  ld          $v0, 0x18($s3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A25C0u;
        goto label_1a25c0;
    }
    ctx->pc = 0x1A25B8u;
    {
        const bool branch_taken_0x1a25b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A25BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A25B8u;
        // 0x1a25bc: 0xde620018  ld          $v0, 0x18($s3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a25b8) {
            ctx->pc = 0x1A25C4u;
            goto label_1a25c4;
        }
    }
    ctx->pc = 0x1A25C0u;
label_1a25c0:
    // 0x1a25c0: 0xde620018  ld          $v0, 0x18($s3)
    ctx->pc = 0x1a25c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 24)));
label_1a25c4:
    // 0x1a25c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1a25c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1a25c8:
    // 0x1a25c8: 0x52102f  dsubu       $v0, $v0, $s2
    ctx->pc = 0x1a25c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 18));
label_1a25cc:
    // 0x1a25cc: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x1a25ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
label_1a25d0:
    // 0x1a25d0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1a25d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1a25d4:
    // 0x1a25d4: 0x622823  subu        $a1, $v1, $v0
    ctx->pc = 0x1a25d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a25d8:
    // 0x1a25d8: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
label_1a25dc:
    if (ctx->pc == 0x1A25DCu) {
        ctx->pc = 0x1A25DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A25D8u;
        // 0x1a25dc: 0x8fa50018  lw          $a1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A25E0u;
        goto label_1a25e0;
    }
    ctx->pc = 0x1A25D8u;
    {
        const bool branch_taken_0x1a25d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a25d8) {
            ctx->pc = 0x1A25DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A25D8u;
            // 0x1a25dc: 0x8fa50018  lw          $a1, 0x18($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A25ECu;
            goto label_1a25ec;
        }
    }
    ctx->pc = 0x1A25E0u;
label_1a25e0:
    // 0x1a25e0: 0xc068636  jal         func_1A18D8
label_1a25e4:
    if (ctx->pc == 0x1A25E4u) {
        ctx->pc = 0x1A25E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A25E0u;
        // 0x1a25e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A25E8u;
        goto label_1a25e8;
    }
    ctx->pc = 0x1A25E0u;
    SET_GPR_U32(ctx, 31, 0x1A25E8u);
    ctx->pc = 0x1A25E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A25E0u;
    // 0x1a25e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A18D8u;
    { ctx->pc = 0x1a18d8; return; }
    ctx->pc = 0x1A25E8u;
label_1a25e8:
    // 0x1a25e8: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x1a25e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1a25ec:
    // 0x1a25ec: 0x3404bd00  ori         $a0, $zero, 0xBD00
    ctx->pc = 0x1a25ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48384);
label_1a25f0:
    // 0x1a25f0: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x1a25f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
label_1a25f4:
    // 0x1a25f4: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1a25f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1a25f8:
    // 0x1a25f8: 0xde830000  ld          $v1, 0x0($s4)
    ctx->pc = 0x1a25f8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 0)));
label_1a25fc:
    // 0x1a25fc: 0x458023  subu        $s0, $v0, $a1
    ctx->pc = 0x1a25fcu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1a2600:
    // 0x1a2600: 0x2605fffd  addiu       $a1, $s0, -0x3
    ctx->pc = 0x1a2600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
label_1a2604:
    // 0x1a2604: 0xae850024  sw          $a1, 0x24($s4)
    ctx->pc = 0x1a2604u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 5));
label_1a2608:
    // 0x1a2608: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x1a2608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_1a260c:
    // 0x1a260c: 0x1464000a  bne         $v1, $a0, . + 4 + (0xA << 2)
label_1a2610:
    if (ctx->pc == 0x1A2610u) {
        ctx->pc = 0x1A2610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A260Cu;
        // 0x1a2610: 0xae820020  sw          $v0, 0x20($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2614u;
        goto label_1a2614;
    }
    ctx->pc = 0x1A260Cu;
    {
        const bool branch_taken_0x1a260c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1A2610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A260Cu;
        // 0x1a2610: 0xae820020  sw          $v0, 0x20($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a260c) {
            ctx->pc = 0x1A2638u;
            goto label_1a2638;
        }
    }
    ctx->pc = 0x1A2614u;
label_1a2614:
    // 0x1a2614: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a2614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a2618:
    // 0x1a2618: 0xc068610  jal         func_1A1840
label_1a261c:
    if (ctx->pc == 0x1A261Cu) {
        ctx->pc = 0x1A261Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2618u;
        // 0x1a261c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2620u;
        goto label_1a2620;
    }
    ctx->pc = 0x1A2618u;
    SET_GPR_U32(ctx, 31, 0x1A2620u);
    ctx->pc = 0x1A261Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2618u;
    // 0x1a261c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    { ctx->pc = 0x1a1840; return; }
    ctx->pc = 0x1A2620u;
label_1a2620:
    // 0x1a2620: 0xde830000  ld          $v1, 0x0($s4)
    ctx->pc = 0x1a2620u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 0)));
label_1a2624:
    // 0x1a2624: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a2624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1a2628:
    // 0x1a2628: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a2628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1a262c:
    // 0x1a262c: 0x2605fff9  addiu       $a1, $s0, -0x7
    ctx->pc = 0x1a262cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967289));
label_1a2630:
    // 0x1a2630: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a2630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1a2634:
    // 0x1a2634: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x1a2634u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_1a2638:
    // 0x1a2638: 0x10a0003f  beqz        $a1, . + 4 + (0x3F << 2)
label_1a263c:
    if (ctx->pc == 0x1A263Cu) {
        ctx->pc = 0x1A263Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2638u;
        // 0x1a263c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2640u;
        goto label_1a2640;
    }
    ctx->pc = 0x1A2638u;
    {
        const bool branch_taken_0x1a2638 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A263Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2638u;
        // 0x1a263c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2638) {
            ctx->pc = 0x1A2738u;
            goto label_1a2738;
        }
    }
    ctx->pc = 0x1A2640u;
label_1a2640:
    // 0x1a2640: 0xc068636  jal         func_1A18D8
label_1a2644:
    if (ctx->pc == 0x1A2644u) {
        ctx->pc = 0x1A2644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2640u;
        // 0x1a2644: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2648u;
        goto label_1a2648;
    }
    ctx->pc = 0x1A2640u;
    SET_GPR_U32(ctx, 31, 0x1A2648u);
    ctx->pc = 0x1A2644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2640u;
    // 0x1a2644: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A18D8u;
    { ctx->pc = 0x1a18d8; return; }
    ctx->pc = 0x1A2648u;
label_1a2648:
    // 0x1a2648: 0x1000003b  b           . + 4 + (0x3B << 2)
label_1a264c:
    if (ctx->pc == 0x1A264Cu) {
        ctx->pc = 0x1A264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2648u;
        // 0x1a264c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2650u;
        goto label_1a2650;
    }
    ctx->pc = 0x1A2648u;
    {
        const bool branch_taken_0x1a2648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2648u;
        // 0x1a264c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2648) {
            ctx->pc = 0x1A2738u;
            goto label_1a2738;
        }
    }
    ctx->pc = 0x1A2650u;
label_1a2650:
    // 0x1a2650: 0x3402bc00  ori         $v0, $zero, 0xBC00
    ctx->pc = 0x1a2650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48128);
label_1a2654:
    // 0x1a2654: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1a2654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_1a2658:
    // 0x1a2658: 0x10a20019  beq         $a1, $v0, . + 4 + (0x19 << 2)
label_1a265c:
    if (ctx->pc == 0x1A265Cu) {
        ctx->pc = 0x1A2660u;
        goto label_1a2660;
    }
    ctx->pc = 0x1A2658u;
    {
        const bool branch_taken_0x1a2658 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a2658) {
            ctx->pc = 0x1A26C0u;
            goto label_1a26c0;
        }
    }
    ctx->pc = 0x1A2660u;
label_1a2660:
    // 0x1a2660: 0x3402bf00  ori         $v0, $zero, 0xBF00
    ctx->pc = 0x1a2660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48896);
label_1a2664:
    // 0x1a2664: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1a2664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_1a2668:
    // 0x1a2668: 0x10820017  beq         $a0, $v0, . + 4 + (0x17 << 2)
label_1a266c:
    if (ctx->pc == 0x1A266Cu) {
        ctx->pc = 0x1A2670u;
        goto label_1a2670;
    }
    ctx->pc = 0x1A2668u;
    {
        const bool branch_taken_0x1a2668 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a2668) {
            ctx->pc = 0x1A26C8u;
            goto label_1a26c8;
        }
    }
    ctx->pc = 0x1A2670u;
label_1a2670:
    // 0x1a2670: 0x3402f000  ori         $v0, $zero, 0xF000
    ctx->pc = 0x1a2670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
label_1a2674:
    // 0x1a2674: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1a2674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_1a2678:
    // 0x1a2678: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
label_1a267c:
    if (ctx->pc == 0x1A267Cu) {
        ctx->pc = 0x1A2680u;
        goto label_1a2680;
    }
    ctx->pc = 0x1A2678u;
    {
        const bool branch_taken_0x1a2678 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a2678) {
            ctx->pc = 0x1A26C0u;
            goto label_1a26c0;
        }
    }
    ctx->pc = 0x1A2680u;
label_1a2680:
    // 0x1a2680: 0x3402f100  ori         $v0, $zero, 0xF100
    ctx->pc = 0x1a2680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61696);
label_1a2684:
    // 0x1a2684: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1a2684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_1a2688:
    // 0x1a2688: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
label_1a268c:
    if (ctx->pc == 0x1A268Cu) {
        ctx->pc = 0x1A2690u;
        goto label_1a2690;
    }
    ctx->pc = 0x1A2688u;
    {
        const bool branch_taken_0x1a2688 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a2688) {
            ctx->pc = 0x1A26C0u;
            goto label_1a26c0;
        }
    }
    ctx->pc = 0x1A2690u;
label_1a2690:
    // 0x1a2690: 0x3402ff00  ori         $v0, $zero, 0xFF00
    ctx->pc = 0x1a2690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
label_1a2694:
    // 0x1a2694: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1a2694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_1a2698:
    // 0x1a2698: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
label_1a269c:
    if (ctx->pc == 0x1A269Cu) {
        ctx->pc = 0x1A26A0u;
        goto label_1a26a0;
    }
    ctx->pc = 0x1A2698u;
    {
        const bool branch_taken_0x1a2698 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a2698) {
            ctx->pc = 0x1A26C0u;
            goto label_1a26c0;
        }
    }
    ctx->pc = 0x1A26A0u;
label_1a26a0:
    // 0x1a26a0: 0x3402f200  ori         $v0, $zero, 0xF200
    ctx->pc = 0x1a26a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61952);
label_1a26a4:
    // 0x1a26a4: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1a26a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_1a26a8:
    // 0x1a26a8: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
label_1a26ac:
    if (ctx->pc == 0x1A26ACu) {
        ctx->pc = 0x1A26B0u;
        goto label_1a26b0;
    }
    ctx->pc = 0x1A26A8u;
    {
        const bool branch_taken_0x1a26a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a26a8) {
            ctx->pc = 0x1A26C0u;
            goto label_1a26c0;
        }
    }
    ctx->pc = 0x1A26B0u;
label_1a26b0:
    // 0x1a26b0: 0x3402f800  ori         $v0, $zero, 0xF800
    ctx->pc = 0x1a26b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63488);
label_1a26b4:
    // 0x1a26b4: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1a26b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_1a26b8:
    // 0x1a26b8: 0x14820015  bne         $a0, $v0, . + 4 + (0x15 << 2)
label_1a26bc:
    if (ctx->pc == 0x1A26BCu) {
        ctx->pc = 0x1A26C0u;
        goto label_1a26c0;
    }
    ctx->pc = 0x1A26B8u;
    {
        const bool branch_taken_0x1a26b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a26b8) {
            ctx->pc = 0x1A2710u;
            goto label_1a2710;
        }
    }
    ctx->pc = 0x1A26C0u;
label_1a26c0:
    // 0x1a26c0: 0x3402bf00  ori         $v0, $zero, 0xBF00
    ctx->pc = 0x1a26c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48896);
label_1a26c4:
    // 0x1a26c4: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1a26c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_1a26c8:
    // 0x1a26c8: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
label_1a26cc:
    if (ctx->pc == 0x1A26CCu) {
        ctx->pc = 0x1A26CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A26C8u;
        // 0x1a26cc: 0x8e900008  lw          $s0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A26D0u;
        goto label_1a26d0;
    }
    ctx->pc = 0x1A26C8u;
    {
        const bool branch_taken_0x1a26c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A26CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A26C8u;
        // 0x1a26cc: 0x8e900008  lw          $s0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a26c8) {
            ctx->pc = 0x1A26F4u;
            goto label_1a26f4;
        }
    }
    ctx->pc = 0x1A26D0u;
label_1a26d0:
    // 0x1a26d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a26d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a26d4:
    // 0x1a26d4: 0xc068610  jal         func_1A1840
label_1a26d8:
    if (ctx->pc == 0x1A26D8u) {
        ctx->pc = 0x1A26D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A26D4u;
        // 0x1a26d8: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A26DCu;
        goto label_1a26dc;
    }
    ctx->pc = 0x1A26D4u;
    SET_GPR_U32(ctx, 31, 0x1A26DCu);
    ctx->pc = 0x1A26D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A26D4u;
    // 0x1a26d8: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1840u;
    { ctx->pc = 0x1a1840; return; }
    ctx->pc = 0x1A26DCu;
label_1a26dc:
    // 0x1a26dc: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x1a26dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
label_1a26e0:
    // 0x1a26e0: 0xde830000  ld          $v1, 0x0($s4)
    ctx->pc = 0x1a26e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 0)));
label_1a26e4:
    // 0x1a26e4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a26e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1a26e8:
    // 0x1a26e8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1a26e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1a26ec:
    // 0x1a26ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a26ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1a26f0:
    // 0x1a26f0: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x1a26f0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
label_1a26f4:
    // 0x1a26f4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_1a26f8:
    if (ctx->pc == 0x1A26F8u) {
        ctx->pc = 0x1A26F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A26F4u;
        // 0x1a26f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A26FCu;
        goto label_1a26fc;
    }
    ctx->pc = 0x1A26F4u;
    {
        const bool branch_taken_0x1a26f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A26F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A26F4u;
        // 0x1a26f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a26f4) {
            ctx->pc = 0x1A2738u;
            goto label_1a2738;
        }
    }
    ctx->pc = 0x1A26FCu;
label_1a26fc:
    // 0x1a26fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a26fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a2700:
    // 0x1a2700: 0xc068636  jal         func_1A18D8
label_1a2704:
    if (ctx->pc == 0x1A2704u) {
        ctx->pc = 0x1A2704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2700u;
        // 0x1a2704: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2708u;
        goto label_1a2708;
    }
    ctx->pc = 0x1A2700u;
    SET_GPR_U32(ctx, 31, 0x1A2708u);
    ctx->pc = 0x1A2704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2700u;
    // 0x1a2704: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A18D8u;
    { ctx->pc = 0x1a18d8; return; }
    ctx->pc = 0x1A2708u;
label_1a2708:
    // 0x1a2708: 0x1000000b  b           . + 4 + (0xB << 2)
label_1a270c:
    if (ctx->pc == 0x1A270Cu) {
        ctx->pc = 0x1A270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2708u;
        // 0x1a270c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2710u;
        goto label_1a2710;
    }
    ctx->pc = 0x1A2708u;
    {
        const bool branch_taken_0x1a2708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2708u;
        // 0x1a270c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2708) {
            ctx->pc = 0x1A2738u;
            goto label_1a2738;
        }
    }
    ctx->pc = 0x1A2710u;
label_1a2710:
    // 0x1a2710: 0x3402be00  ori         $v0, $zero, 0xBE00
    ctx->pc = 0x1a2710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48640);
label_1a2714:
    // 0x1a2714: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1a2714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_1a2718:
    // 0x1a2718: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
label_1a271c:
    if (ctx->pc == 0x1A271Cu) {
        ctx->pc = 0x1A271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2718u;
        // 0x1a271c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2720u;
        goto label_1a2720;
    }
    ctx->pc = 0x1A2718u;
    {
        const bool branch_taken_0x1a2718 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2718u;
        // 0x1a271c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2718) {
            ctx->pc = 0x1A2738u;
            goto label_1a2738;
        }
    }
    ctx->pc = 0x1A2720u;
label_1a2720:
    // 0x1a2720: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x1a2720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1a2724:
    // 0x1a2724: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_1a2728:
    if (ctx->pc == 0x1A2728u) {
        ctx->pc = 0x1A2728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2724u;
        // 0x1a2728: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A272Cu;
        goto label_1a272c;
    }
    ctx->pc = 0x1A2724u;
    {
        const bool branch_taken_0x1a2724 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2724u;
        // 0x1a2728: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2724) {
            ctx->pc = 0x1A273Cu;
            goto label_1a273c;
        }
    }
    ctx->pc = 0x1A272Cu;
label_1a272c:
    // 0x1a272c: 0xc068636  jal         func_1A18D8
label_1a2730:
    if (ctx->pc == 0x1A2730u) {
        ctx->pc = 0x1A2730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A272Cu;
        // 0x1a2730: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2734u;
        goto label_1a2734;
    }
    ctx->pc = 0x1A272Cu;
    SET_GPR_U32(ctx, 31, 0x1A2734u);
    ctx->pc = 0x1A2730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A272Cu;
    // 0x1a2730: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A18D8u;
    { ctx->pc = 0x1a18d8; return; }
    ctx->pc = 0x1A2734u;
label_1a2734:
    // 0x1a2734: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a2734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a2738:
    // 0x1a2738: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1a2738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1a273c:
    // 0x1a273c: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x1a273cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1a2740:
    // 0x1a2740: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x1a2740u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1a2744:
    // 0x1a2744: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x1a2744u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1a2748:
    // 0x1a2748: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x1a2748u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1a274c:
    // 0x1a274c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1a274cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a2750:
    // 0x1a2750: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1a2750u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a2754:
    // 0x1a2754: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1a2754u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a2758:
    // 0x1a2758: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1a2758u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a275c:
    // 0x1a275c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a275cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a2760:
    // 0x1a2760: 0x3e00008  jr          $ra
label_1a2764:
    if (ctx->pc == 0x1A2764u) {
        ctx->pc = 0x1A2764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2760u;
        // 0x1a2764: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2768u;
        goto label_1a2768;
    }
    ctx->pc = 0x1A2760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2760u;
        // 0x1a2764: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2768u;
label_1a2768:
    // 0x1a2768: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a2768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a276c:
    // 0x1a276c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a276cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a2770:
    // 0x1a2770: 0xc06b518  jal         func_1AD460
label_1a2774:
    if (ctx->pc == 0x1A2774u) {
        ctx->pc = 0x1A2778u;
        goto label_1a2778;
    }
    ctx->pc = 0x1A2770u;
    SET_GPR_U32(ctx, 31, 0x1A2778u);
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1A2778u;
label_1a2778:
    // 0x1a2778: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x1a2778u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
label_1a277c:
    // 0x1a277c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1a277cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_1a2780:
    // 0x1a2780: 0x3508f520  ori         $t0, $t0, 0xF520
    ctx->pc = 0x1a2780u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)62752);
label_1a2784:
    // 0x1a2784: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x1a2784u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
label_1a2788:
    // 0x1a2788: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1a2788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1a278c:
    // 0x1a278c: 0x3529f590  ori         $t1, $t1, 0xF590
    ctx->pc = 0x1a278cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)62864);
label_1a2790:
    // 0x1a2790: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1a2790u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_1a2794:
    // 0x1a2794: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x1a2794u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_1a2798:
    // 0x1a2798: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a2798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a279c:
    // 0x1a279c: 0x34a5b000  ori         $a1, $a1, 0xB000
    ctx->pc = 0x1a279cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45056);
label_1a27a0:
    // 0x1a27a0: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x1a27a0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_1a27a4:
    // 0x1a27a4: 0x34e7feff  ori         $a3, $a3, 0xFEFF
    ctx->pc = 0x1a27a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65279);
label_1a27a8:
    // 0x1a27a8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1a27a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_1a27ac:
    // 0x1a27ac: 0x3c06fffe  lui         $a2, 0xFFFE
    ctx->pc = 0x1a27acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65534 << 16));
label_1a27b0:
    // 0x1a27b0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a27b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1a27b4:
    // 0x1a27b4: 0x3484b400  ori         $a0, $a0, 0xB400
    ctx->pc = 0x1a27b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46080);
label_1a27b8:
    // 0x1a27b8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1a27b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_1a27bc:
    // 0x1a27bc: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x1a27bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_1a27c0:
    // 0x1a27c0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1a27c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_1a27c4:
    // 0x1a27c4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a27c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a27c8:
    // 0x1a27c8: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x1a27c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_1a27cc:
    // 0x1a27cc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1a27ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1a27d0:
    // 0x1a27d0: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x1a27d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1a27d4:
    // 0x1a27d4: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1a27d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_1a27d8:
    // 0x1a27d8: 0xc06b52a  jal         func_1AD4A8
label_1a27dc:
    if (ctx->pc == 0x1A27DCu) {
        ctx->pc = 0x1A27DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A27D8u;
        // 0x1a27dc: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A27E0u;
        goto label_1a27e0;
    }
    ctx->pc = 0x1A27D8u;
    SET_GPR_U32(ctx, 31, 0x1A27E0u);
    ctx->pc = 0x1A27DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A27D8u;
    // 0x1a27dc: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A27E0u;
label_1a27e0:
    // 0x1a27e0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a27e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1a27e4:
    // 0x1a27e4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a27e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1a27e8:
    // 0x1a27e8: 0x3463b020  ori         $v1, $v1, 0xB020
    ctx->pc = 0x1a27e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45088);
label_1a27ec:
    // 0x1a27ec: 0x3442b420  ori         $v0, $v0, 0xB420
    ctx->pc = 0x1a27ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46112);
label_1a27f0:
    // 0x1a27f0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1a27f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_1a27f4:
    // 0x1a27f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a27f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a27f8:
    // 0x1a27f8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1a27f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1a27fc:
    // 0x1a27fc: 0x8069066  j           func_1A4198
label_1a2800:
    if (ctx->pc == 0x1A2800u) {
        ctx->pc = 0x1A2800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A27FCu;
        // 0x1a2800: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2804u;
        goto label_1a2804;
    }
    ctx->pc = 0x1A27FCu;
    ctx->pc = 0x1A2800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A27FCu;
    // 0x1a2800: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4198u;
    { ctx->pc = 0x1a4198; return; }
    ctx->pc = 0x1A2804u;
label_1a2804:
    // 0x1a2804: 0x0  nop
    ctx->pc = 0x1a2804u;
    // NOP
label_1a2808:
    // 0x1a2808: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a2808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1a280c:
    // 0x1a280c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1a280cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_1a2810:
    // 0x1a2810: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a2810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a2814:
    // 0x1a2814: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a2814u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a2818:
    // 0x1a2818: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a2818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a281c:
    // 0x1a281c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a281cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a2820:
    // 0x1a2820: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a2820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a2824:
    // 0x1a2824: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a2824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a2828:
    // 0x1a2828: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a2828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a282c:
    // 0x1a282c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a282cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1a2830:
    // 0x1a2830: 0xc08e9ac  jal         func_23A6B0
label_1a2834:
    if (ctx->pc == 0x1A2834u) {
        ctx->pc = 0x1A2834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2830u;
        // 0x1a2834: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2838u;
        goto label_1a2838;
    }
    ctx->pc = 0x1A2830u;
    SET_GPR_U32(ctx, 31, 0x1A2838u);
    ctx->pc = 0x1A2834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2830u;
    // 0x1a2834: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A6B0u;
    { ctx->pc = 0x23a6b0; return; }
    ctx->pc = 0x1A2838u;
label_1a2838:
    // 0x1a2838: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x1a2838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
label_1a283c:
    // 0x1a283c: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x1a283cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
label_1a2840:
    // 0x1a2840: 0x39080  sll         $s2, $v1, 2
    ctx->pc = 0x1a2840u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a2844:
    // 0x1a2844: 0x2508023  subu        $s0, $s2, $s0
    ctx->pc = 0x1a2844u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_1a2848:
    // 0x1a2848: 0x2303023  subu        $a2, $s1, $s0
    ctx->pc = 0x1a2848u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_1a284c:
    // 0x1a284c: 0x2cc210c0  sltiu       $v0, $a2, 0x10C0
    ctx->pc = 0x1a284cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4288) ? 1 : 0);
label_1a2850:
    // 0x1a2850: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a2854:
    if (ctx->pc == 0x1A2854u) {
        ctx->pc = 0x1A2854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2850u;
        // 0x1a2854: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2858u;
        goto label_1a2858;
    }
    ctx->pc = 0x1A2850u;
    {
        const bool branch_taken_0x1a2850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2850u;
        // 0x1a2854: 0x3c05002d  lui         $a1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2850) {
            ctx->pc = 0x1A286Cu;
            goto label_1a286c;
        }
    }
    ctx->pc = 0x1A2858u;
label_1a2858:
    // 0x1a2858: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a2858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a285c:
    // 0x1a285c: 0xc068d2c  jal         func_1A34B0
label_1a2860:
    if (ctx->pc == 0x1A2860u) {
        ctx->pc = 0x1A2860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A285Cu;
        // 0x1a2860: 0x24a5a2d0  addiu       $a1, $a1, -0x5D30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943440));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2864u;
        goto label_1a2864;
    }
    ctx->pc = 0x1A285Cu;
    SET_GPR_U32(ctx, 31, 0x1A2864u);
    ctx->pc = 0x1A2860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A285Cu;
    // 0x1a2860: 0x24a5a2d0  addiu       $a1, $a1, -0x5D30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A34B0u;
    { ctx->pc = 0x1a34b0; return; }
    ctx->pc = 0x1A2864u;
label_1a2864:
    // 0x1a2864: 0x10000063  b           . + 4 + (0x63 << 2)
label_1a2868:
    if (ctx->pc == 0x1A2868u) {
        ctx->pc = 0x1A2868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2864u;
        // 0x1a2868: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A286Cu;
        goto label_1a286c;
    }
    ctx->pc = 0x1A2864u;
    {
        const bool branch_taken_0x1a2864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2864u;
        // 0x1a2868: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2864) {
            ctx->pc = 0x1A29F4u;
            goto label_1a29f4;
        }
    }
    ctx->pc = 0x1A286Cu;
label_1a286c:
    // 0x1a286c: 0x26510108  addiu       $s1, $s2, 0x108
    ctx->pc = 0x1a286cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 264));
label_1a2870:
    // 0x1a2870: 0xae720040  sw          $s2, 0x40($s3)
    ctx->pc = 0x1a2870u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 18));
label_1a2874:
    // 0x1a2874: 0x24c6ef40  addiu       $a2, $a2, -0x10C0
    ctx->pc = 0x1a2874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963008));
label_1a2878:
    // 0x1a2878: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a2878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a287c:
    // 0x1a287c: 0x264510c0  addiu       $a1, $s2, 0x10C0
    ctx->pc = 0x1a287cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4288));
label_1a2880:
    // 0x1a2880: 0xc068b58  jal         func_1A2D60
label_1a2884:
    if (ctx->pc == 0x1A2884u) {
        ctx->pc = 0x1A2884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2880u;
        // 0x1a2884: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2888u;
        goto label_1a2888;
    }
    ctx->pc = 0x1A2880u;
    SET_GPR_U32(ctx, 31, 0x1A2888u);
    ctx->pc = 0x1A2884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2880u;
    // 0x1a2884: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2D60u;
    goto label_1a2d60;
    ctx->pc = 0x1A2888u;
label_1a2888:
    // 0x1a2888: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1a2888u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_1a288c:
    // 0x1a288c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a288cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a2890:
    // 0x1a2890: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x1a2890u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_1a2894:
    // 0x1a2894: 0x3c03001a  lui         $v1, 0x1A
    ctx->pc = 0x1a2894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26 << 16));
label_1a2898:
    // 0x1a2898: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x1a2898u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_1a289c:
    // 0x1a289c: 0x3c08001a  lui         $t0, 0x1A
    ctx->pc = 0x1a289cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)26 << 16));
label_1a28a0:
    // 0x1a28a0: 0x24633da0  addiu       $v1, $v1, 0x3DA0
    ctx->pc = 0x1a28a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15776));
label_1a28a4:
    // 0x1a28a4: 0x25083db0  addiu       $t0, $t0, 0x3DB0
    ctx->pc = 0x1a28a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 15792));
label_1a28a8:
    // 0x1a28a8: 0xfe620010  sd          $v0, 0x10($s3)
    ctx->pc = 0x1a28a8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 16), GPR_U64(ctx, 2));
label_1a28ac:
    // 0x1a28ac: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x1a28acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1a28b0:
    // 0x1a28b0: 0xfe620018  sd          $v0, 0x18($s3)
    ctx->pc = 0x1a28b0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 2));
label_1a28b4:
    // 0x1a28b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a28b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a28b8:
    // 0x1a28b8: 0xfe600020  sd          $zero, 0x20($s3)
    ctx->pc = 0x1a28b8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 32), GPR_U64(ctx, 0));
label_1a28bc:
    // 0x1a28bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a28bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a28c0:
    // 0x1a28c0: 0xfe620028  sd          $v0, 0x28($s3)
    ctx->pc = 0x1a28c0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 40), GPR_U64(ctx, 2));
label_1a28c4:
    // 0x1a28c4: 0x24060600  addiu       $a2, $zero, 0x600
    ctx->pc = 0x1a28c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
label_1a28c8:
    // 0x1a28c8: 0xfe620030  sd          $v0, 0x30($s3)
    ctx->pc = 0x1a28c8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 48), GPR_U64(ctx, 2));
label_1a28cc:
    // 0x1a28cc: 0xfe600038  sd          $zero, 0x38($s3)
    ctx->pc = 0x1a28ccu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 56), GPR_U64(ctx, 0));
label_1a28d0:
    // 0x1a28d0: 0xae4000b4  sw          $zero, 0xB4($s2)
    ctx->pc = 0x1a28d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 0));
label_1a28d4:
    // 0x1a28d4: 0xae4000b8  sw          $zero, 0xB8($s2)
    ctx->pc = 0x1a28d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 0));
label_1a28d8:
    // 0x1a28d8: 0xae4000bc  sw          $zero, 0xBC($s2)
    ctx->pc = 0x1a28d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 0));
label_1a28dc:
    // 0x1a28dc: 0xae4000c0  sw          $zero, 0xC0($s2)
    ctx->pc = 0x1a28dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 0));
label_1a28e0:
    // 0x1a28e0: 0xae4000c4  sw          $zero, 0xC4($s2)
    ctx->pc = 0x1a28e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 0));
label_1a28e4:
    // 0x1a28e4: 0xae4000c8  sw          $zero, 0xC8($s2)
    ctx->pc = 0x1a28e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 0));
label_1a28e8:
    // 0x1a28e8: 0xae4000cc  sw          $zero, 0xCC($s2)
    ctx->pc = 0x1a28e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 0));
label_1a28ec:
    // 0x1a28ec: 0xae4000d0  sw          $zero, 0xD0($s2)
    ctx->pc = 0x1a28ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 0));
label_1a28f0:
    // 0x1a28f0: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x1a28f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
label_1a28f4:
    // 0x1a28f4: 0xae4000d8  sw          $zero, 0xD8($s2)
    ctx->pc = 0x1a28f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 0));
label_1a28f8:
    // 0x1a28f8: 0xae4000dc  sw          $zero, 0xDC($s2)
    ctx->pc = 0x1a28f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 0));
label_1a28fc:
    // 0x1a28fc: 0xae4000e0  sw          $zero, 0xE0($s2)
    ctx->pc = 0x1a28fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 0));
label_1a2900:
    // 0x1a2900: 0xae4000e4  sw          $zero, 0xE4($s2)
    ctx->pc = 0x1a2900u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 0));
label_1a2904:
    // 0x1a2904: 0xae4000e8  sw          $zero, 0xE8($s2)
    ctx->pc = 0x1a2904u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 0));
label_1a2908:
    // 0x1a2908: 0xae4000f8  sw          $zero, 0xF8($s2)
    ctx->pc = 0x1a2908u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 248), GPR_U32(ctx, 0));
label_1a290c:
    // 0x1a290c: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x1a290cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_1a2910:
    // 0x1a2910: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x1a2910u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_1a2914:
    // 0x1a2914: 0xae40002c  sw          $zero, 0x2C($s2)
    ctx->pc = 0x1a2914u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
label_1a2918:
    // 0x1a2918: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x1a2918u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
label_1a291c:
    // 0x1a291c: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x1a291cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
label_1a2920:
    // 0x1a2920: 0xfe4200f0  sd          $v0, 0xF0($s2)
    ctx->pc = 0x1a2920u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 240), GPR_U64(ctx, 2));
label_1a2924:
    // 0x1a2924: 0xae43001c  sw          $v1, 0x1C($s2)
    ctx->pc = 0x1a2924u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
label_1a2928:
    // 0x1a2928: 0xc068b66  jal         func_1A2D98
label_1a292c:
    if (ctx->pc == 0x1A292Cu) {
        ctx->pc = 0x1A292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2928u;
        // 0x1a292c: 0xae480024  sw          $t0, 0x24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2930u;
        goto label_1a2930;
    }
    ctx->pc = 0x1A2928u;
    SET_GPR_U32(ctx, 31, 0x1A2930u);
    ctx->pc = 0x1A292Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2928u;
    // 0x1a292c: 0xae480024  sw          $t0, 0x24($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2D98u;
    { ctx->pc = 0x1a2d98; return; }
    ctx->pc = 0x1A2930u;
label_1a2930:
    // 0x1a2930: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a2930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a2934:
    // 0x1a2934: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x1a2934u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
label_1a2938:
    // 0x1a2938: 0xae4000fc  sw          $zero, 0xFC($s2)
    ctx->pc = 0x1a2938u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 252), GPR_U32(ctx, 0));
label_1a293c:
    // 0x1a293c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a293cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a2940:
    // 0x1a2940: 0xae400100  sw          $zero, 0x100($s2)
    ctx->pc = 0x1a2940u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 256), GPR_U32(ctx, 0));
label_1a2944:
    // 0x1a2944: 0xae400104  sw          $zero, 0x104($s2)
    ctx->pc = 0x1a2944u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 0));
label_1a2948:
    // 0x1a2948: 0xae400070  sw          $zero, 0x70($s2)
    ctx->pc = 0x1a2948u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 0));
label_1a294c:
    // 0x1a294c: 0xfe400078  sd          $zero, 0x78($s2)
    ctx->pc = 0x1a294cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 120), GPR_U64(ctx, 0));
label_1a2950:
    // 0x1a2950: 0xae500080  sw          $s0, 0x80($s2)
    ctx->pc = 0x1a2950u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 16));
label_1a2954:
    // 0x1a2954: 0xfe400088  sd          $zero, 0x88($s2)
    ctx->pc = 0x1a2954u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 136), GPR_U64(ctx, 0));
label_1a2958:
    // 0x1a2958: 0xae400090  sw          $zero, 0x90($s2)
    ctx->pc = 0x1a2958u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 0));
label_1a295c:
    // 0x1a295c: 0xae4000ac  sw          $zero, 0xAC($s2)
    ctx->pc = 0x1a295cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 0));
label_1a2960:
    // 0x1a2960: 0xae500094  sw          $s0, 0x94($s2)
    ctx->pc = 0x1a2960u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 16));
label_1a2964:
    // 0x1a2964: 0xae500098  sw          $s0, 0x98($s2)
    ctx->pc = 0x1a2964u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 16));
label_1a2968:
    // 0x1a2968: 0xae50009c  sw          $s0, 0x9C($s2)
    ctx->pc = 0x1a2968u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 16));
label_1a296c:
    // 0x1a296c: 0xae530858  sw          $s3, 0x858($s2)
    ctx->pc = 0x1a296cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2136), GPR_U32(ctx, 19));
label_1a2970:
    // 0x1a2970: 0xae420044  sw          $v0, 0x44($s2)
    ctx->pc = 0x1a2970u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
label_1a2974:
    // 0x1a2974: 0xc068cd2  jal         func_1A3348
label_1a2978:
    if (ctx->pc == 0x1A2978u) {
        ctx->pc = 0x1A2978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2974u;
        // 0x1a2978: 0xae4300b0  sw          $v1, 0xB0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A297Cu;
        goto label_1a297c;
    }
    ctx->pc = 0x1A2974u;
    SET_GPR_U32(ctx, 31, 0x1A297Cu);
    ctx->pc = 0x1A2978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2974u;
    // 0x1a2978: 0xae4300b0  sw          $v1, 0xB0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3348u;
    { ctx->pc = 0x1a3348; return; }
    ctx->pc = 0x1A297Cu;
label_1a297c:
    // 0x1a297c: 0xc068ade  jal         func_1A2B78
label_1a2980:
    if (ctx->pc == 0x1A2980u) {
        ctx->pc = 0x1A2980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A297Cu;
        // 0x1a2980: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2984u;
        goto label_1a2984;
    }
    ctx->pc = 0x1A297Cu;
    SET_GPR_U32(ctx, 31, 0x1A2984u);
    ctx->pc = 0x1A2980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A297Cu;
    // 0x1a2980: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2B78u;
    goto label_1a2b78;
    ctx->pc = 0x1A2984u;
label_1a2984:
    // 0x1a2984: 0xc068af2  jal         func_1A2BC8
label_1a2988:
    if (ctx->pc == 0x1A2988u) {
        ctx->pc = 0x1A2988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2984u;
        // 0x1a2988: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A298Cu;
        goto label_1a298c;
    }
    ctx->pc = 0x1A2984u;
    SET_GPR_U32(ctx, 31, 0x1A298Cu);
    ctx->pc = 0x1A2988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2984u;
    // 0x1a2988: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2BC8u;
    goto label_1a2bc8;
    ctx->pc = 0x1A298Cu;
label_1a298c:
    // 0x1a298c: 0x264301e8  addiu       $v1, $s2, 0x1E8
    ctx->pc = 0x1a298cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 488));
label_1a2990:
    // 0x1a2990: 0x26420250  addiu       $v0, $s2, 0x250
    ctx->pc = 0x1a2990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 592));
label_1a2994:
    // 0x1a2994: 0x264502b8  addiu       $a1, $s2, 0x2B8
    ctx->pc = 0x1a2994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 696));
label_1a2998:
    // 0x1a2998: 0x26460320  addiu       $a2, $s2, 0x320
    ctx->pc = 0x1a2998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 800));
label_1a299c:
    // 0x1a299c: 0x26470388  addiu       $a3, $s2, 0x388
    ctx->pc = 0x1a299cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 904));
label_1a29a0:
    // 0x1a29a0: 0x264803f0  addiu       $t0, $s2, 0x3F0
    ctx->pc = 0x1a29a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 1008));
label_1a29a4:
    // 0x1a29a4: 0x26490458  addiu       $t1, $s2, 0x458
    ctx->pc = 0x1a29a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 1112));
label_1a29a8:
    // 0x1a29a8: 0x264a04c0  addiu       $t2, $s2, 0x4C0
    ctx->pc = 0x1a29a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 1216));
label_1a29ac:
    // 0x1a29ac: 0x264b0528  addiu       $t3, $s2, 0x528
    ctx->pc = 0x1a29acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 1320));
label_1a29b0:
    // 0x1a29b0: 0xae4301b8  sw          $v1, 0x1B8($s2)
    ctx->pc = 0x1a29b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 440), GPR_U32(ctx, 3));
label_1a29b4:
    // 0x1a29b4: 0xae4201bc  sw          $v0, 0x1BC($s2)
    ctx->pc = 0x1a29b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 444), GPR_U32(ctx, 2));
label_1a29b8:
    // 0x1a29b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a29b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a29bc:
    // 0x1a29bc: 0xae4501c4  sw          $a1, 0x1C4($s2)
    ctx->pc = 0x1a29bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 452), GPR_U32(ctx, 5));
label_1a29c0:
    // 0x1a29c0: 0xae4601c8  sw          $a2, 0x1C8($s2)
    ctx->pc = 0x1a29c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 456), GPR_U32(ctx, 6));
label_1a29c4:
    // 0x1a29c4: 0xae4701cc  sw          $a3, 0x1CC($s2)
    ctx->pc = 0x1a29c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 460), GPR_U32(ctx, 7));
label_1a29c8:
    // 0x1a29c8: 0xae4801d4  sw          $t0, 0x1D4($s2)
    ctx->pc = 0x1a29c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 468), GPR_U32(ctx, 8));
label_1a29cc:
    // 0x1a29cc: 0xae4901d8  sw          $t1, 0x1D8($s2)
    ctx->pc = 0x1a29ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 472), GPR_U32(ctx, 9));
label_1a29d0:
    // 0x1a29d0: 0xae4a01dc  sw          $t2, 0x1DC($s2)
    ctx->pc = 0x1a29d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 476), GPR_U32(ctx, 10));
label_1a29d4:
    // 0x1a29d4: 0xc068b5e  jal         func_1A2D78
label_1a29d8:
    if (ctx->pc == 0x1A29D8u) {
        ctx->pc = 0x1A29D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A29D4u;
        // 0x1a29d8: 0xae4b01e4  sw          $t3, 0x1E4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 484), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A29DCu;
        goto label_1a29dc;
    }
    ctx->pc = 0x1A29D4u;
    SET_GPR_U32(ctx, 31, 0x1A29DCu);
    ctx->pc = 0x1A29D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A29D4u;
    // 0x1a29d8: 0xae4b01e4  sw          $t3, 0x1E4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 484), GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2D78u;
    goto label_1a2d78;
    ctx->pc = 0x1A29DCu;
label_1a29dc:
    // 0x1a29dc: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1a29dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_1a29e0:
    // 0x1a29e0: 0xae500850  sw          $s0, 0x850($s2)
    ctx->pc = 0x1a29e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2128), GPR_U32(ctx, 16));
label_1a29e4:
    // 0x1a29e4: 0x34423600  ori         $v0, $v0, 0x3600
    ctx->pc = 0x1a29e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13824);
label_1a29e8:
    // 0x1a29e8: 0xae400854  sw          $zero, 0x854($s2)
    ctx->pc = 0x1a29e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2132), GPR_U32(ctx, 0));
label_1a29ec:
    // 0x1a29ec: 0xae42081c  sw          $v0, 0x81C($s2)
    ctx->pc = 0x1a29ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2076), GPR_U32(ctx, 2));
label_1a29f0:
    // 0x1a29f0: 0xae40084c  sw          $zero, 0x84C($s2)
    ctx->pc = 0x1a29f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2124), GPR_U32(ctx, 0));
label_1a29f4:
    // 0x1a29f4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a29f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a29f8:
    // 0x1a29f8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a29f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a29fc:
    // 0x1a29fc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a29fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a2a00:
    // 0x1a2a00: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a2a00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a2a04:
    // 0x1a2a04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a2a04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a2a08:
    // 0x1a2a08: 0x3e00008  jr          $ra
label_1a2a0c:
    if (ctx->pc == 0x1A2A0Cu) {
        ctx->pc = 0x1A2A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2A08u;
        // 0x1a2a0c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2A10u;
        goto label_1a2a10;
    }
    ctx->pc = 0x1A2A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2A08u;
        // 0x1a2a0c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2A10u;
label_1a2a10:
    // 0x1a2a10: 0x3e00008  jr          $ra
label_1a2a14:
    if (ctx->pc == 0x1A2A14u) {
        ctx->pc = 0x1A2A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2A10u;
        // 0x1a2a14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2A18u;
        goto label_1a2a18;
    }
    ctx->pc = 0x1A2A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2A10u;
        // 0x1a2a14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2A10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2A18u;
label_1a2a18:
    // 0x1a2a18: 0x24c30013  addiu       $v1, $a2, 0x13
    ctx->pc = 0x1a2a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 19));
label_1a2a1c:
    // 0x1a2a1c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a2a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a2a20:
    // 0x1a2a20: 0x24c60022  addiu       $a2, $a2, 0x22
    ctx->pc = 0x1a2a20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 34));
label_1a2a24:
    // 0x1a2a24: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1a2a24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1a2a28:
    // 0x1a2a28: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x1a2a28u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_1a2a2c:
    // 0x1a2a2c: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x1a2a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1a2a30:
    // 0x1a2a30: 0x63103  sra         $a2, $a2, 4
    ctx->pc = 0x1a2a30u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
label_1a2a34:
    // 0x1a2a34: 0x8068d42  j           func_1A3508
label_1a2a38:
    if (ctx->pc == 0x1A2A38u) {
        ctx->pc = 0x1A2A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2A34u;
        // 0x1a2a38: 0x63100  sll         $a2, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2A3Cu;
        goto label_1a2a3c;
    }
    ctx->pc = 0x1A2A34u;
    ctx->pc = 0x1A2A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2A34u;
    // 0x1a2a38: 0x63100  sll         $a2, $a2, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3508u;
    { ctx->pc = 0x1a3508; return; }
    ctx->pc = 0x1A2A3Cu;
label_1a2a3c:
    // 0x1a2a3c: 0x0  nop
    ctx->pc = 0x1a2a3cu;
    // NOP
label_1a2a40:
    // 0x1a2a40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a2a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a2a44:
    // 0x1a2a44: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x1a2a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_1a2a48:
    // 0x1a2a48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a2a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a2a4c:
    // 0x1a2a4c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a2a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1a2a50:
    // 0x1a2a50: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1a2a50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_1a2a54:
    // 0x1a2a54: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1a2a54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_1a2a58:
    // 0x1a2a58: 0x8c870040  lw          $a3, 0x40($a0)
    ctx->pc = 0x1a2a58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1a2a5c:
    // 0x1a2a5c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1a2a5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1a2a60:
    // 0x1a2a60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a2a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a2a64:
    // 0x1a2a64: 0xace200b0  sw          $v0, 0xB0($a3)
    ctx->pc = 0x1a2a64u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 176), GPR_U32(ctx, 2));
label_1a2a68:
    // 0x1a2a68: 0xace500d8  sw          $a1, 0xD8($a3)
    ctx->pc = 0x1a2a68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 216), GPR_U32(ctx, 5));
label_1a2a6c:
    // 0x1a2a6c: 0xace600e4  sw          $a2, 0xE4($a3)
    ctx->pc = 0x1a2a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 228), GPR_U32(ctx, 6));
label_1a2a70:
    // 0x1a2a70: 0xace000dc  sw          $zero, 0xDC($a3)
    ctx->pc = 0x1a2a70u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 220), GPR_U32(ctx, 0));
label_1a2a74:
    // 0x1a2a74: 0xc068b88  jal         func_1A2E20
label_1a2a78:
    if (ctx->pc == 0x1A2A78u) {
        ctx->pc = 0x1A2A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2A74u;
        // 0x1a2a78: 0xace000e0  sw          $zero, 0xE0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2A7Cu;
        goto label_1a2a7c;
    }
    ctx->pc = 0x1A2A74u;
    SET_GPR_U32(ctx, 31, 0x1A2A7Cu);
    ctx->pc = 0x1A2A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2A74u;
    // 0x1a2a78: 0xace000e0  sw          $zero, 0xE0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 224), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2E20u;
    { ctx->pc = 0x1a2e20; return; }
    ctx->pc = 0x1A2A7Cu;
label_1a2a7c:
    // 0x1a2a7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a2a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a2a80:
    // 0x1a2a80: 0x3e00008  jr          $ra
label_1a2a84:
    if (ctx->pc == 0x1A2A84u) {
        ctx->pc = 0x1A2A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2A80u;
        // 0x1a2a84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2A88u;
        goto label_1a2a88;
    }
    ctx->pc = 0x1A2A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2A80u;
        // 0x1a2a84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2A88u;
label_1a2a88:
    // 0x1a2a88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a2a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a2a8c:
    // 0x1a2a8c: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x1a2a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_1a2a90:
    // 0x1a2a90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a2a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a2a94:
    // 0x1a2a94: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a2a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1a2a98:
    // 0x1a2a98: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1a2a98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_1a2a9c:
    // 0x1a2a9c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1a2a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
label_1a2aa0:
    // 0x1a2aa0: 0x8c870040  lw          $a3, 0x40($a0)
    ctx->pc = 0x1a2aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1a2aa4:
    // 0x1a2aa4: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1a2aa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1a2aa8:
    // 0x1a2aa8: 0xace600e4  sw          $a2, 0xE4($a3)
    ctx->pc = 0x1a2aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 228), GPR_U32(ctx, 6));
label_1a2aac:
    // 0x1a2aac: 0xace500d8  sw          $a1, 0xD8($a3)
    ctx->pc = 0x1a2aacu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 216), GPR_U32(ctx, 5));
label_1a2ab0:
    // 0x1a2ab0: 0xace000dc  sw          $zero, 0xDC($a3)
    ctx->pc = 0x1a2ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 220), GPR_U32(ctx, 0));
label_1a2ab4:
    // 0x1a2ab4: 0xace000b0  sw          $zero, 0xB0($a3)
    ctx->pc = 0x1a2ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 176), GPR_U32(ctx, 0));
label_1a2ab8:
    // 0x1a2ab8: 0xc068b88  jal         func_1A2E20
label_1a2abc:
    if (ctx->pc == 0x1A2ABCu) {
        ctx->pc = 0x1A2ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2AB8u;
        // 0x1a2abc: 0xace000e0  sw          $zero, 0xE0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2AC0u;
        goto label_1a2ac0;
    }
    ctx->pc = 0x1A2AB8u;
    SET_GPR_U32(ctx, 31, 0x1A2AC0u);
    ctx->pc = 0x1A2ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2AB8u;
    // 0x1a2abc: 0xace000e0  sw          $zero, 0xE0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 224), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2E20u;
    { ctx->pc = 0x1a2e20; return; }
    ctx->pc = 0x1A2AC0u;
label_1a2ac0:
    // 0x1a2ac0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a2ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a2ac4:
    // 0x1a2ac4: 0x3e00008  jr          $ra
label_1a2ac8:
    if (ctx->pc == 0x1A2AC8u) {
        ctx->pc = 0x1A2AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2AC4u;
        // 0x1a2ac8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2ACCu;
        goto label_1a2acc;
    }
    ctx->pc = 0x1A2AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2AC4u;
        // 0x1a2ac8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2ACCu;
label_1a2acc:
    // 0x1a2acc: 0x0  nop
    ctx->pc = 0x1a2accu;
    // NOP
label_1a2ad0:
    // 0x1a2ad0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a2ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a2ad4:
    // 0x1a2ad4: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x1a2ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_1a2ad8:
    // 0x1a2ad8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a2ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a2adc:
    // 0x1a2adc: 0xc74018  mult        $t0, $a2, $a3
    ctx->pc = 0x1a2adcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_1a2ae0:
    // 0x1a2ae0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a2ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1a2ae4:
    // 0x1a2ae4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x1a2ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1a2ae8:
    // 0x1a2ae8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1a2ae8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_1a2aec:
    // 0x1a2aec: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x1a2aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1a2af0:
    // 0x1a2af0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1a2af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_1a2af4:
    // 0x1a2af4: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x1a2af4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1a2af8:
    // 0x1a2af8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1a2af8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1a2afc:
    // 0x1a2afc: 0xac6700e0  sw          $a3, 0xE0($v1)
    ctx->pc = 0x1a2afcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 224), GPR_U32(ctx, 7));
label_1a2b00:
    // 0x1a2b00: 0xac6500d8  sw          $a1, 0xD8($v1)
    ctx->pc = 0x1a2b00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 216), GPR_U32(ctx, 5));
label_1a2b04:
    // 0x1a2b04: 0xac6800e4  sw          $t0, 0xE4($v1)
    ctx->pc = 0x1a2b04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 228), GPR_U32(ctx, 8));
label_1a2b08:
    // 0x1a2b08: 0xac6600dc  sw          $a2, 0xDC($v1)
    ctx->pc = 0x1a2b08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 220), GPR_U32(ctx, 6));
label_1a2b0c:
    // 0x1a2b0c: 0xc068b88  jal         func_1A2E20
label_1a2b10:
    if (ctx->pc == 0x1A2B10u) {
        ctx->pc = 0x1A2B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B0Cu;
        // 0x1a2b10: 0xac6000b0  sw          $zero, 0xB0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2B14u;
        goto label_1a2b14;
    }
    ctx->pc = 0x1A2B0Cu;
    SET_GPR_U32(ctx, 31, 0x1A2B14u);
    ctx->pc = 0x1A2B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2B0Cu;
    // 0x1a2b10: 0xac6000b0  sw          $zero, 0xB0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2E20u;
    { ctx->pc = 0x1a2e20; return; }
    ctx->pc = 0x1A2B14u;
label_1a2b14:
    // 0x1a2b14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a2b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a2b18:
    // 0x1a2b18: 0x3e00008  jr          $ra
label_1a2b1c:
    if (ctx->pc == 0x1A2B1Cu) {
        ctx->pc = 0x1A2B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B18u;
        // 0x1a2b1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2B20u;
        goto label_1a2b20;
    }
    ctx->pc = 0x1A2B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B18u;
        // 0x1a2b1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2B20u;
label_1a2b20:
    // 0x1a2b20: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x1a2b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1a2b24:
    // 0x1a2b24: 0xac47009c  sw          $a3, 0x9C($v0)
    ctx->pc = 0x1a2b24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 156), GPR_U32(ctx, 7));
label_1a2b28:
    // 0x1a2b28: 0xac450094  sw          $a1, 0x94($v0)
    ctx->pc = 0x1a2b28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 5));
label_1a2b2c:
    // 0x1a2b2c: 0x3e00008  jr          $ra
label_1a2b30:
    if (ctx->pc == 0x1A2B30u) {
        ctx->pc = 0x1A2B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B2Cu;
        // 0x1a2b30: 0xac460098  sw          $a2, 0x98($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 152), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2B34u;
        goto label_1a2b34;
    }
    ctx->pc = 0x1A2B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B2Cu;
        // 0x1a2b30: 0xac460098  sw          $a2, 0x98($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 152), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2B34u;
label_1a2b34:
    // 0x1a2b34: 0x0  nop
    ctx->pc = 0x1a2b34u;
    // NOP
label_1a2b38:
    // 0x1a2b38: 0x8c880040  lw          $t0, 0x40($a0)
    ctx->pc = 0x1a2b38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1a2b3c:
    // 0x1a2b3c: 0x8d020094  lw          $v0, 0x94($t0)
    ctx->pc = 0x1a2b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 148)));
label_1a2b40:
    // 0x1a2b40: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1a2b40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1a2b44:
    // 0x1a2b44: 0x8d030098  lw          $v1, 0x98($t0)
    ctx->pc = 0x1a2b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 152)));
label_1a2b48:
    // 0x1a2b48: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1a2b48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_1a2b4c:
    // 0x1a2b4c: 0x8d02009c  lw          $v0, 0x9C($t0)
    ctx->pc = 0x1a2b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 156)));
label_1a2b50:
    // 0x1a2b50: 0x3e00008  jr          $ra
label_1a2b54:
    if (ctx->pc == 0x1A2B54u) {
        ctx->pc = 0x1A2B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B50u;
        // 0x1a2b54: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2B58u;
        goto label_1a2b58;
    }
    ctx->pc = 0x1A2B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B50u;
        // 0x1a2b54: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2B58u;
label_1a2b58:
    // 0x1a2b58: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x1a2b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1a2b5c:
    // 0x1a2b5c: 0x3e00008  jr          $ra
label_1a2b60:
    if (ctx->pc == 0x1A2B60u) {
        ctx->pc = 0x1A2B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B5Cu;
        // 0x1a2b60: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2B64u;
        goto label_1a2b64;
    }
    ctx->pc = 0x1A2B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B5Cu;
        // 0x1a2b60: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2B64u;
label_1a2b64:
    // 0x1a2b64: 0x0  nop
    ctx->pc = 0x1a2b64u;
    // NOP
label_1a2b68:
    // 0x1a2b68: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x1a2b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1a2b6c:
    // 0x1a2b6c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1a2b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1a2b70:
    // 0x1a2b70: 0x3e00008  jr          $ra
label_1a2b74:
    if (ctx->pc == 0x1A2B74u) {
        ctx->pc = 0x1A2B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B70u;
        // 0x1a2b74: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2B78u;
        goto label_1a2b78;
    }
    ctx->pc = 0x1A2B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2B70u;
        // 0x1a2b74: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2B78u;
label_1a2b78:
    // 0x1a2b78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a2b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a2b7c:
    // 0x1a2b7c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a2b7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a2b80:
    // 0x1a2b80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a2b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a2b84:
    // 0x1a2b84: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a2b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a2b88:
    // 0x1a2b88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a2b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a2b8c:
    // 0x1a2b8c: 0x8c500040  lw          $s0, 0x40($v0)
    ctx->pc = 0x1a2b8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_1a2b90:
    // 0x1a2b90: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1a2b90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1a2b94:
    // 0x1a2b94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a2b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a2b98:
    // 0x1a2b98: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1a2b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1a2b9c:
    // 0x1a2b9c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1a2b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1a2ba0:
    // 0x1a2ba0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1a2ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_1a2ba4:
    // 0x1a2ba4: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x1a2ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_1a2ba8:
    // 0x1a2ba8: 0xc068cea  jal         func_1A33A8
label_1a2bac:
    if (ctx->pc == 0x1A2BACu) {
        ctx->pc = 0x1A2BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2BA8u;
        // 0x1a2bac: 0xae030080  sw          $v1, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2BB0u;
        goto label_1a2bb0;
    }
    ctx->pc = 0x1A2BA8u;
    SET_GPR_U32(ctx, 31, 0x1A2BB0u);
    ctx->pc = 0x1A2BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2BA8u;
    // 0x1a2bac: 0xae030080  sw          $v1, 0x80($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A33A8u;
    { ctx->pc = 0x1a33a8; return; }
    ctx->pc = 0x1A2BB0u;
label_1a2bb0:
    // 0x1a2bb0: 0xae000118  sw          $zero, 0x118($s0)
    ctx->pc = 0x1a2bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
label_1a2bb4:
    // 0x1a2bb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a2bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a2bb8:
    // 0x1a2bb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a2bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a2bbc:
    // 0x1a2bbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a2bbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a2bc0:
    // 0x1a2bc0: 0x8068cae  j           func_1A32B8
label_1a2bc4:
    if (ctx->pc == 0x1A2BC4u) {
        ctx->pc = 0x1A2BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2BC0u;
        // 0x1a2bc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2BC8u;
        goto label_1a2bc8;
    }
    ctx->pc = 0x1A2BC0u;
    ctx->pc = 0x1A2BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2BC0u;
    // 0x1a2bc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A32B8u;
    { ctx->pc = 0x1a32b8; return; }
    ctx->pc = 0x1A2BC8u;
label_1a2bc8:
    // 0x1a2bc8: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x1a2bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1a2bcc:
    // 0x1a2bcc: 0x8c6201b8  lw          $v0, 0x1B8($v1)
    ctx->pc = 0x1a2bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 440)));
label_1a2bd0:
    // 0x1a2bd0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1a2bd4:
    if (ctx->pc == 0x1A2BD4u) {
        ctx->pc = 0x1A2BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2BD0u;
        // 0x1a2bd4: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2BD8u;
        goto label_1a2bd8;
    }
    ctx->pc = 0x1A2BD0u;
    {
        const bool branch_taken_0x1a2bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2bd0) {
            ctx->pc = 0x1A2BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2BD0u;
            // 0x1a2bd4: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2BD8u;
            goto label_1a2bd8;
        }
    }
    ctx->pc = 0x1A2BD8u;
label_1a2bd8:
    // 0x1a2bd8: 0x8c6201c8  lw          $v0, 0x1C8($v1)
    ctx->pc = 0x1a2bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 456)));
label_1a2bdc:
    // 0x1a2bdc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1a2be0:
    if (ctx->pc == 0x1A2BE0u) {
        ctx->pc = 0x1A2BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2BDCu;
        // 0x1a2be0: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2BE4u;
        goto label_1a2be4;
    }
    ctx->pc = 0x1A2BDCu;
    {
        const bool branch_taken_0x1a2bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2bdc) {
            ctx->pc = 0x1A2BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2BDCu;
            // 0x1a2be0: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2BE4u;
            goto label_1a2be4;
        }
    }
    ctx->pc = 0x1A2BE4u;
label_1a2be4:
    // 0x1a2be4: 0x8c6201d8  lw          $v0, 0x1D8($v1)
    ctx->pc = 0x1a2be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 472)));
label_1a2be8:
    // 0x1a2be8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1a2bec:
    if (ctx->pc == 0x1A2BECu) {
        ctx->pc = 0x1A2BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2BE8u;
        // 0x1a2bec: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2BF0u;
        goto label_1a2bf0;
    }
    ctx->pc = 0x1A2BE8u;
    {
        const bool branch_taken_0x1a2be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2be8) {
            ctx->pc = 0x1A2BECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2BE8u;
            // 0x1a2bec: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2BF0u;
            goto label_1a2bf0;
        }
    }
    ctx->pc = 0x1A2BF0u;
label_1a2bf0:
    // 0x1a2bf0: 0x8c6201bc  lw          $v0, 0x1BC($v1)
    ctx->pc = 0x1a2bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 444)));
label_1a2bf4:
    // 0x1a2bf4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1a2bf8:
    if (ctx->pc == 0x1A2BF8u) {
        ctx->pc = 0x1A2BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2BF4u;
        // 0x1a2bf8: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2BFCu;
        goto label_1a2bfc;
    }
    ctx->pc = 0x1A2BF4u;
    {
        const bool branch_taken_0x1a2bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2bf4) {
            ctx->pc = 0x1A2BF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2BF4u;
            // 0x1a2bf8: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2BFCu;
            goto label_1a2bfc;
        }
    }
    ctx->pc = 0x1A2BFCu;
label_1a2bfc:
    // 0x1a2bfc: 0x8c6201cc  lw          $v0, 0x1CC($v1)
    ctx->pc = 0x1a2bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 460)));
label_1a2c00:
    // 0x1a2c00: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1a2c04:
    if (ctx->pc == 0x1A2C04u) {
        ctx->pc = 0x1A2C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C00u;
        // 0x1a2c04: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C08u;
        goto label_1a2c08;
    }
    ctx->pc = 0x1A2C00u;
    {
        const bool branch_taken_0x1a2c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2c00) {
            ctx->pc = 0x1A2C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2C00u;
            // 0x1a2c04: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2C08u;
            goto label_1a2c08;
        }
    }
    ctx->pc = 0x1A2C08u;
label_1a2c08:
    // 0x1a2c08: 0x8c6201dc  lw          $v0, 0x1DC($v1)
    ctx->pc = 0x1a2c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 476)));
label_1a2c0c:
    // 0x1a2c0c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1a2c10:
    if (ctx->pc == 0x1A2C10u) {
        ctx->pc = 0x1A2C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C0Cu;
        // 0x1a2c10: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C14u;
        goto label_1a2c14;
    }
    ctx->pc = 0x1A2C0Cu;
    {
        const bool branch_taken_0x1a2c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2c0c) {
            ctx->pc = 0x1A2C10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2C0Cu;
            // 0x1a2c10: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2C14u;
            goto label_1a2c14;
        }
    }
    ctx->pc = 0x1A2C14u;
label_1a2c14:
    // 0x1a2c14: 0x3e00008  jr          $ra
label_1a2c18:
    if (ctx->pc == 0x1A2C18u) {
        ctx->pc = 0x1A2C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C14u;
        // 0x1a2c18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C1Cu;
        goto label_1a2c1c;
    }
    ctx->pc = 0x1A2C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C14u;
        // 0x1a2c18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2C1Cu;
label_1a2c1c:
    // 0x1a2c1c: 0x0  nop
    ctx->pc = 0x1a2c1cu;
    // NOP
label_1a2c20:
    // 0x1a2c20: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x1a2c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1a2c24:
    // 0x1a2c24: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1a2c24u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1a2c28:
    // 0x1a2c28: 0x2443000c  addiu       $v1, $v0, 0xC
    ctx->pc = 0x1a2c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1a2c2c:
    // 0x1a2c2c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a2c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1a2c30:
    // 0x1a2c30: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1a2c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1a2c34:
    // 0x1a2c34: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x1a2c34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 7));
label_1a2c38:
    // 0x1a2c38: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a2c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a2c3c:
    // 0x1a2c3c: 0x3e00008  jr          $ra
label_1a2c40:
    if (ctx->pc == 0x1A2C40u) {
        ctx->pc = 0x1A2C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C3Cu;
        // 0x1a2c40: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C44u;
        goto label_1a2c44;
    }
    ctx->pc = 0x1A2C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C3Cu;
        // 0x1a2c40: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2C44u;
label_1a2c44:
    // 0x1a2c44: 0x0  nop
    ctx->pc = 0x1a2c44u;
    // NOP
label_1a2c48:
    // 0x1a2c48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a2c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a2c4c:
    // 0x1a2c4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a2c4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a2c50:
    // 0x1a2c50: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
label_1a2c54:
    if (ctx->pc == 0x1A2C54u) {
        ctx->pc = 0x1A2C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C50u;
        // 0x1a2c54: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C58u;
        goto label_1a2c58;
    }
    ctx->pc = 0x1A2C50u;
    {
        const bool branch_taken_0x1a2c50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C50u;
        // 0x1a2c54: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2c50) {
            ctx->pc = 0x1A2C88u;
            goto label_1a2c88;
        }
    }
    ctx->pc = 0x1A2C58u;
label_1a2c58:
    // 0x1a2c58: 0x8c860040  lw          $a2, 0x40($a0)
    ctx->pc = 0x1a2c58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1a2c5c:
    // 0x1a2c5c: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
label_1a2c60:
    if (ctx->pc == 0x1A2C60u) {
        ctx->pc = 0x1A2C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C5Cu;
        // 0x1a2c60: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C64u;
        goto label_1a2c64;
    }
    ctx->pc = 0x1A2C5Cu;
    {
        const bool branch_taken_0x1a2c5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C5Cu;
        // 0x1a2c60: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2c5c) {
            ctx->pc = 0x1A2C8Cu;
            goto label_1a2c8c;
        }
    }
    ctx->pc = 0x1A2C64u;
label_1a2c64:
    // 0x1a2c64: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a2c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1a2c68:
    // 0x1a2c68: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1a2c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1a2c6c:
    // 0x1a2c6c: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x1a2c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1a2c70:
    // 0x1a2c70: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1a2c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1a2c74:
    // 0x1a2c74: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1a2c78:
    if (ctx->pc == 0x1A2C78u) {
        ctx->pc = 0x1A2C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C74u;
        // 0x1a2c78: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C7Cu;
        goto label_1a2c7c;
    }
    ctx->pc = 0x1A2C74u;
    {
        const bool branch_taken_0x1a2c74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C74u;
        // 0x1a2c78: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2c74) {
            ctx->pc = 0x1A2C8Cu;
            goto label_1a2c8c;
        }
    }
    ctx->pc = 0x1A2C7Cu;
label_1a2c7c:
    // 0x1a2c7c: 0x60f809  jalr        $v1
label_1a2c80:
    if (ctx->pc == 0x1A2C80u) {
        ctx->pc = 0x1A2C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C7Cu;
        // 0x1a2c80: 0x8c460010  lw          $a2, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C84u;
        goto label_1a2c84;
    }
    ctx->pc = 0x1A2C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A2C84u);
        ctx->pc = 0x1A2C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C7Cu;
        // 0x1a2c80: 0x8c460010  lw          $a2, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2C7Cu, 0x1A2C84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A2C84u;
label_1a2c84:
    // 0x1a2c84: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1a2c84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a2c88:
    // 0x1a2c88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a2c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a2c8c:
    // 0x1a2c8c: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x1a2c8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a2c90:
    // 0x1a2c90: 0x3e00008  jr          $ra
label_1a2c94:
    if (ctx->pc == 0x1A2C94u) {
        ctx->pc = 0x1A2C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C90u;
        // 0x1a2c94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2C98u;
        goto label_1a2c98;
    }
    ctx->pc = 0x1A2C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2C90u;
        // 0x1a2c94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2C98u;
label_1a2c98:
    // 0x1a2c98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a2c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a2c9c:
    // 0x1a2c9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a2c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a2ca0:
    // 0x1a2ca0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a2ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a2ca4:
    // 0x1a2ca4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a2ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a2ca8:
    // 0x1a2ca8: 0xc068b12  jal         func_1A2C48
label_1a2cac:
    if (ctx->pc == 0x1A2CACu) {
        ctx->pc = 0x1A2CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CA8u;
        // 0x1a2cac: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2CB0u;
        goto label_1a2cb0;
    }
    ctx->pc = 0x1A2CA8u;
    SET_GPR_U32(ctx, 31, 0x1A2CB0u);
    ctx->pc = 0x1A2CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2CA8u;
    // 0x1a2cac: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2C48u;
    goto label_1a2c48;
    ctx->pc = 0x1A2CB0u;
label_1a2cb0:
    // 0x1a2cb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a2cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a2cb4:
    // 0x1a2cb4: 0x3e00008  jr          $ra
label_1a2cb8:
    if (ctx->pc == 0x1A2CB8u) {
        ctx->pc = 0x1A2CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CB4u;
        // 0x1a2cb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2CBCu;
        goto label_1a2cbc;
    }
    ctx->pc = 0x1A2CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CB4u;
        // 0x1a2cb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2CBCu;
label_1a2cbc:
    // 0x1a2cbc: 0x0  nop
    ctx->pc = 0x1a2cbcu;
    // NOP
label_1a2cc0:
    // 0x1a2cc0: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x1a2cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1a2cc4:
    // 0x1a2cc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a2cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a2cc8:
    // 0x1a2cc8: 0xfc450078  sd          $a1, 0x78($v0)
    ctx->pc = 0x1a2cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 120), GPR_U64(ctx, 5));
label_1a2ccc:
    // 0x1a2ccc: 0x3e00008  jr          $ra
label_1a2cd0:
    if (ctx->pc == 0x1A2CD0u) {
        ctx->pc = 0x1A2CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CCCu;
        // 0x1a2cd0: 0xac430070  sw          $v1, 0x70($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2CD4u;
        goto label_1a2cd4;
    }
    ctx->pc = 0x1A2CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CCCu;
        // 0x1a2cd0: 0xac430070  sw          $v1, 0x70($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2CD4u;
label_1a2cd4:
    // 0x1a2cd4: 0x0  nop
    ctx->pc = 0x1a2cd4u;
    // NOP
label_1a2cd8:
    // 0x1a2cd8: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x1a2cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1a2cdc:
    // 0x1a2cdc: 0xfc400078  sd          $zero, 0x78($v0)
    ctx->pc = 0x1a2cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 120), GPR_U64(ctx, 0));
label_1a2ce0:
    // 0x1a2ce0: 0x3e00008  jr          $ra
label_1a2ce4:
    if (ctx->pc == 0x1A2CE4u) {
        ctx->pc = 0x1A2CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CE0u;
        // 0x1a2ce4: 0xac400070  sw          $zero, 0x70($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2CE8u;
        goto label_1a2ce8;
    }
    ctx->pc = 0x1A2CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CE0u;
        // 0x1a2ce4: 0xac400070  sw          $zero, 0x70($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2CE8u;
label_1a2ce8:
    // 0x1a2ce8: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x1a2ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1a2cec:
    // 0x1a2cec: 0x3e00008  jr          $ra
label_1a2cf0:
    if (ctx->pc == 0x1A2CF0u) {
        ctx->pc = 0x1A2CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CECu;
        // 0x1a2cf0: 0xac4500d8  sw          $a1, 0xD8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 216), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2CF4u;
        goto label_1a2cf4;
    }
    ctx->pc = 0x1A2CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CECu;
        // 0x1a2cf0: 0xac4500d8  sw          $a1, 0xD8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 216), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2CF4u;
label_1a2cf4:
    // 0x1a2cf4: 0x0  nop
    ctx->pc = 0x1a2cf4u;
    // NOP
label_1a2cf8:
    // 0x1a2cf8: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x1a2cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1a2cfc:
    // 0x1a2cfc: 0x3e00008  jr          $ra
label_1a2d00:
    if (ctx->pc == 0x1A2D00u) {
        ctx->pc = 0x1A2D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CFCu;
        // 0x1a2d00: 0x8c6200cc  lw          $v0, 0xCC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2D04u;
        goto label_1a2d04;
    }
    ctx->pc = 0x1A2CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CFCu;
        // 0x1a2d00: 0x8c6200cc  lw          $v0, 0xCC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2D04u;
label_1a2d04:
    // 0x1a2d04: 0x0  nop
    ctx->pc = 0x1a2d04u;
    // NOP
label_1a2d08:
    // 0x1a2d08: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x1a2d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1a2d0c:
    // 0x1a2d0c: 0x3e00008  jr          $ra
label_1a2d10:
    if (ctx->pc == 0x1A2D10u) {
        ctx->pc = 0x1A2D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D0Cu;
        // 0x1a2d10: 0x8c6200d0  lw          $v0, 0xD0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2D14u;
        goto label_1a2d14;
    }
    ctx->pc = 0x1A2D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D0Cu;
        // 0x1a2d10: 0x8c6200d0  lw          $v0, 0xD0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2D14u;
label_1a2d14:
    // 0x1a2d14: 0x0  nop
    ctx->pc = 0x1a2d14u;
    // NOP
label_1a2d18:
    // 0x1a2d18: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x1a2d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1a2d1c:
    // 0x1a2d1c: 0x3e00008  jr          $ra
label_1a2d20:
    if (ctx->pc == 0x1A2D20u) {
        ctx->pc = 0x1A2D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D1Cu;
        // 0x1a2d20: 0x244200b4  addiu       $v0, $v0, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2D24u;
        goto label_1a2d24;
    }
    ctx->pc = 0x1A2D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D1Cu;
        // 0x1a2d20: 0x244200b4  addiu       $v0, $v0, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2D24u;
label_1a2d24:
    // 0x1a2d24: 0x0  nop
    ctx->pc = 0x1a2d24u;
    // NOP
label_1a2d28:
    // 0x1a2d28: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x1a2d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1a2d2c:
    // 0x1a2d2c: 0x3e00008  jr          $ra
label_1a2d30:
    if (ctx->pc == 0x1A2D30u) {
        ctx->pc = 0x1A2D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D2Cu;
        // 0x1a2d30: 0x244200b4  addiu       $v0, $v0, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2D34u;
        goto label_1a2d34;
    }
    ctx->pc = 0x1A2D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D2Cu;
        // 0x1a2d30: 0x244200b4  addiu       $v0, $v0, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2D34u;
label_1a2d34:
    // 0x1a2d34: 0x0  nop
    ctx->pc = 0x1a2d34u;
    // NOP
label_1a2d38:
    // 0x1a2d38: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x1a2d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1a2d3c:
    // 0x1a2d3c: 0x8c6200e8  lw          $v0, 0xE8($v1)
    ctx->pc = 0x1a2d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 232)));
label_1a2d40:
    // 0x1a2d40: 0x3e00008  jr          $ra
label_1a2d44:
    if (ctx->pc == 0x1A2D44u) {
        ctx->pc = 0x1A2D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D40u;
        // 0x1a2d44: 0xac6500e8  sw          $a1, 0xE8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 232), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2D48u;
        goto label_1a2d48;
    }
    ctx->pc = 0x1A2D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D40u;
        // 0x1a2d44: 0xac6500e8  sw          $a1, 0xE8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 232), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2D48u;
label_1a2d48:
    // 0x1a2d48: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x1a2d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_1a2d4c:
    // 0x1a2d4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a2d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a2d50:
    // 0x1a2d50: 0xac6200f8  sw          $v0, 0xF8($v1)
    ctx->pc = 0x1a2d50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 2));
label_1a2d54:
    // 0x1a2d54: 0x3e00008  jr          $ra
label_1a2d58:
    if (ctx->pc == 0x1A2D58u) {
        ctx->pc = 0x1A2D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D54u;
        // 0x1a2d58: 0xfc6500f0  sd          $a1, 0xF0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 240), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2D5Cu;
        goto label_1a2d5c;
    }
    ctx->pc = 0x1A2D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D54u;
        // 0x1a2d58: 0xfc6500f0  sd          $a1, 0xF0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 240), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2D5Cu;
label_1a2d5c:
    // 0x1a2d5c: 0x0  nop
    ctx->pc = 0x1a2d5cu;
    // NOP
label_1a2d60:
    // 0x1a2d60: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x1a2d60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_1a2d64:
    // 0x1a2d64: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x1a2d64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_1a2d68:
    // 0x1a2d68: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1a2d68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_1a2d6c:
    // 0x1a2d6c: 0x3e00008  jr          $ra
label_1a2d70:
    if (ctx->pc == 0x1A2D70u) {
        ctx->pc = 0x1A2D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D6Cu;
        // 0x1a2d70: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2D74u;
        goto label_1a2d74;
    }
    ctx->pc = 0x1A2D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D6Cu;
        // 0x1a2d70: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2D74u;
label_1a2d74:
    // 0x1a2d74: 0x0  nop
    ctx->pc = 0x1a2d74u;
    // NOP
label_1a2d78:
    // 0x1a2d78: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1a2d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1a2d7c:
    // 0x1a2d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1a2d80u;
    return;
}

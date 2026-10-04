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

// Function: FUN_0019b6a8
// Address: 0x19b6a8 - 0x29b6b0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b6a8_part81(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x1c28f0u: goto label_1c28f0;
        case 0x1c28f4u: goto label_1c28f4;
        case 0x1c28f8u: goto label_1c28f8;
        case 0x1c28fcu: goto label_1c28fc;
        case 0x1c2900u: goto label_1c2900;
        case 0x1c2904u: goto label_1c2904;
        case 0x1c2908u: goto label_1c2908;
        case 0x1c290cu: goto label_1c290c;
        case 0x1c2910u: goto label_1c2910;
        case 0x1c2914u: goto label_1c2914;
        case 0x1c2918u: goto label_1c2918;
        case 0x1c291cu: goto label_1c291c;
        case 0x1c2920u: goto label_1c2920;
        case 0x1c2924u: goto label_1c2924;
        case 0x1c2928u: goto label_1c2928;
        case 0x1c292cu: goto label_1c292c;
        case 0x1c2930u: goto label_1c2930;
        case 0x1c2934u: goto label_1c2934;
        case 0x1c2938u: goto label_1c2938;
        case 0x1c293cu: goto label_1c293c;
        case 0x1c2940u: goto label_1c2940;
        case 0x1c2944u: goto label_1c2944;
        case 0x1c2948u: goto label_1c2948;
        case 0x1c294cu: goto label_1c294c;
        case 0x1c2950u: goto label_1c2950;
        case 0x1c2954u: goto label_1c2954;
        case 0x1c2958u: goto label_1c2958;
        case 0x1c295cu: goto label_1c295c;
        case 0x1c2960u: goto label_1c2960;
        case 0x1c2964u: goto label_1c2964;
        case 0x1c2968u: goto label_1c2968;
        case 0x1c296cu: goto label_1c296c;
        case 0x1c2970u: goto label_1c2970;
        case 0x1c2974u: goto label_1c2974;
        case 0x1c2978u: goto label_1c2978;
        case 0x1c297cu: goto label_1c297c;
        case 0x1c2980u: goto label_1c2980;
        case 0x1c2984u: goto label_1c2984;
        case 0x1c2988u: goto label_1c2988;
        case 0x1c298cu: goto label_1c298c;
        case 0x1c2990u: goto label_1c2990;
        case 0x1c2994u: goto label_1c2994;
        case 0x1c2998u: goto label_1c2998;
        case 0x1c299cu: goto label_1c299c;
        case 0x1c29a0u: goto label_1c29a0;
        case 0x1c29a4u: goto label_1c29a4;
        case 0x1c29a8u: goto label_1c29a8;
        case 0x1c29acu: goto label_1c29ac;
        case 0x1c29b0u: goto label_1c29b0;
        case 0x1c29b4u: goto label_1c29b4;
        case 0x1c29b8u: goto label_1c29b8;
        case 0x1c29bcu: goto label_1c29bc;
        case 0x1c29c0u: goto label_1c29c0;
        case 0x1c29c4u: goto label_1c29c4;
        case 0x1c29c8u: goto label_1c29c8;
        case 0x1c29ccu: goto label_1c29cc;
        case 0x1c29d0u: goto label_1c29d0;
        case 0x1c29d4u: goto label_1c29d4;
        case 0x1c29d8u: goto label_1c29d8;
        case 0x1c29dcu: goto label_1c29dc;
        case 0x1c29e0u: goto label_1c29e0;
        case 0x1c29e4u: goto label_1c29e4;
        case 0x1c29e8u: goto label_1c29e8;
        case 0x1c29ecu: goto label_1c29ec;
        case 0x1c29f0u: goto label_1c29f0;
        case 0x1c29f4u: goto label_1c29f4;
        case 0x1c29f8u: goto label_1c29f8;
        case 0x1c29fcu: goto label_1c29fc;
        case 0x1c2a00u: goto label_1c2a00;
        case 0x1c2a04u: goto label_1c2a04;
        case 0x1c2a08u: goto label_1c2a08;
        case 0x1c2a0cu: goto label_1c2a0c;
        case 0x1c2a10u: goto label_1c2a10;
        case 0x1c2a14u: goto label_1c2a14;
        case 0x1c2a18u: goto label_1c2a18;
        case 0x1c2a1cu: goto label_1c2a1c;
        case 0x1c2a20u: goto label_1c2a20;
        case 0x1c2a24u: goto label_1c2a24;
        case 0x1c2a28u: goto label_1c2a28;
        case 0x1c2a2cu: goto label_1c2a2c;
        case 0x1c2a30u: goto label_1c2a30;
        case 0x1c2a34u: goto label_1c2a34;
        case 0x1c2a38u: goto label_1c2a38;
        case 0x1c2a3cu: goto label_1c2a3c;
        case 0x1c2a40u: goto label_1c2a40;
        case 0x1c2a44u: goto label_1c2a44;
        case 0x1c2a48u: goto label_1c2a48;
        case 0x1c2a4cu: goto label_1c2a4c;
        case 0x1c2a50u: goto label_1c2a50;
        case 0x1c2a54u: goto label_1c2a54;
        case 0x1c2a58u: goto label_1c2a58;
        case 0x1c2a5cu: goto label_1c2a5c;
        case 0x1c2a60u: goto label_1c2a60;
        case 0x1c2a64u: goto label_1c2a64;
        case 0x1c2a68u: goto label_1c2a68;
        case 0x1c2a6cu: goto label_1c2a6c;
        case 0x1c2a70u: goto label_1c2a70;
        case 0x1c2a74u: goto label_1c2a74;
        case 0x1c2a78u: goto label_1c2a78;
        case 0x1c2a7cu: goto label_1c2a7c;
        case 0x1c2a80u: goto label_1c2a80;
        case 0x1c2a84u: goto label_1c2a84;
        case 0x1c2a88u: goto label_1c2a88;
        case 0x1c2a8cu: goto label_1c2a8c;
        case 0x1c2a90u: goto label_1c2a90;
        case 0x1c2a94u: goto label_1c2a94;
        case 0x1c2a98u: goto label_1c2a98;
        case 0x1c2a9cu: goto label_1c2a9c;
        case 0x1c2aa0u: goto label_1c2aa0;
        case 0x1c2aa4u: goto label_1c2aa4;
        case 0x1c2aa8u: goto label_1c2aa8;
        case 0x1c2aacu: goto label_1c2aac;
        case 0x1c2ab0u: goto label_1c2ab0;
        case 0x1c2ab4u: goto label_1c2ab4;
        case 0x1c2ab8u: goto label_1c2ab8;
        case 0x1c2abcu: goto label_1c2abc;
        case 0x1c2ac0u: goto label_1c2ac0;
        case 0x1c2ac4u: goto label_1c2ac4;
        case 0x1c2ac8u: goto label_1c2ac8;
        case 0x1c2accu: goto label_1c2acc;
        case 0x1c2ad0u: goto label_1c2ad0;
        case 0x1c2ad4u: goto label_1c2ad4;
        case 0x1c2ad8u: goto label_1c2ad8;
        case 0x1c2adcu: goto label_1c2adc;
        case 0x1c2ae0u: goto label_1c2ae0;
        case 0x1c2ae4u: goto label_1c2ae4;
        case 0x1c2ae8u: goto label_1c2ae8;
        case 0x1c2aecu: goto label_1c2aec;
        case 0x1c2af0u: goto label_1c2af0;
        case 0x1c2af4u: goto label_1c2af4;
        case 0x1c2af8u: goto label_1c2af8;
        case 0x1c2afcu: goto label_1c2afc;
        case 0x1c2b00u: goto label_1c2b00;
        case 0x1c2b04u: goto label_1c2b04;
        case 0x1c2b08u: goto label_1c2b08;
        case 0x1c2b0cu: goto label_1c2b0c;
        case 0x1c2b10u: goto label_1c2b10;
        case 0x1c2b14u: goto label_1c2b14;
        case 0x1c2b18u: goto label_1c2b18;
        case 0x1c2b1cu: goto label_1c2b1c;
        case 0x1c2b20u: goto label_1c2b20;
        case 0x1c2b24u: goto label_1c2b24;
        case 0x1c2b28u: goto label_1c2b28;
        case 0x1c2b2cu: goto label_1c2b2c;
        case 0x1c2b30u: goto label_1c2b30;
        case 0x1c2b34u: goto label_1c2b34;
        case 0x1c2b38u: goto label_1c2b38;
        case 0x1c2b3cu: goto label_1c2b3c;
        case 0x1c2b40u: goto label_1c2b40;
        case 0x1c2b44u: goto label_1c2b44;
        case 0x1c2b48u: goto label_1c2b48;
        case 0x1c2b4cu: goto label_1c2b4c;
        case 0x1c2b50u: goto label_1c2b50;
        case 0x1c2b54u: goto label_1c2b54;
        case 0x1c2b58u: goto label_1c2b58;
        case 0x1c2b5cu: goto label_1c2b5c;
        case 0x1c2b60u: goto label_1c2b60;
        case 0x1c2b64u: goto label_1c2b64;
        case 0x1c2b68u: goto label_1c2b68;
        case 0x1c2b6cu: goto label_1c2b6c;
        case 0x1c2b70u: goto label_1c2b70;
        case 0x1c2b74u: goto label_1c2b74;
        case 0x1c2b78u: goto label_1c2b78;
        case 0x1c2b7cu: goto label_1c2b7c;
        case 0x1c2b80u: goto label_1c2b80;
        case 0x1c2b84u: goto label_1c2b84;
        case 0x1c2b88u: goto label_1c2b88;
        case 0x1c2b8cu: goto label_1c2b8c;
        case 0x1c2b90u: goto label_1c2b90;
        case 0x1c2b94u: goto label_1c2b94;
        case 0x1c2b98u: goto label_1c2b98;
        case 0x1c2b9cu: goto label_1c2b9c;
        case 0x1c2ba0u: goto label_1c2ba0;
        case 0x1c2ba4u: goto label_1c2ba4;
        case 0x1c2ba8u: goto label_1c2ba8;
        case 0x1c2bacu: goto label_1c2bac;
        case 0x1c2bb0u: goto label_1c2bb0;
        case 0x1c2bb4u: goto label_1c2bb4;
        case 0x1c2bb8u: goto label_1c2bb8;
        case 0x1c2bbcu: goto label_1c2bbc;
        case 0x1c2bc0u: goto label_1c2bc0;
        case 0x1c2bc4u: goto label_1c2bc4;
        case 0x1c2bc8u: goto label_1c2bc8;
        case 0x1c2bccu: goto label_1c2bcc;
        case 0x1c2bd0u: goto label_1c2bd0;
        case 0x1c2bd4u: goto label_1c2bd4;
        case 0x1c2bd8u: goto label_1c2bd8;
        case 0x1c2bdcu: goto label_1c2bdc;
        case 0x1c2be0u: goto label_1c2be0;
        case 0x1c2be4u: goto label_1c2be4;
        case 0x1c2be8u: goto label_1c2be8;
        case 0x1c2becu: goto label_1c2bec;
        case 0x1c2bf0u: goto label_1c2bf0;
        case 0x1c2bf4u: goto label_1c2bf4;
        case 0x1c2bf8u: goto label_1c2bf8;
        case 0x1c2bfcu: goto label_1c2bfc;
        case 0x1c2c00u: goto label_1c2c00;
        case 0x1c2c04u: goto label_1c2c04;
        case 0x1c2c08u: goto label_1c2c08;
        case 0x1c2c0cu: goto label_1c2c0c;
        case 0x1c2c10u: goto label_1c2c10;
        case 0x1c2c14u: goto label_1c2c14;
        case 0x1c2c18u: goto label_1c2c18;
        case 0x1c2c1cu: goto label_1c2c1c;
        case 0x1c2c20u: goto label_1c2c20;
        case 0x1c2c24u: goto label_1c2c24;
        case 0x1c2c28u: goto label_1c2c28;
        case 0x1c2c2cu: goto label_1c2c2c;
        case 0x1c2c30u: goto label_1c2c30;
        case 0x1c2c34u: goto label_1c2c34;
        case 0x1c2c38u: goto label_1c2c38;
        case 0x1c2c3cu: goto label_1c2c3c;
        case 0x1c2c40u: goto label_1c2c40;
        case 0x1c2c44u: goto label_1c2c44;
        case 0x1c2c48u: goto label_1c2c48;
        case 0x1c2c4cu: goto label_1c2c4c;
        case 0x1c2c50u: goto label_1c2c50;
        case 0x1c2c54u: goto label_1c2c54;
        case 0x1c2c58u: goto label_1c2c58;
        case 0x1c2c5cu: goto label_1c2c5c;
        case 0x1c2c60u: goto label_1c2c60;
        case 0x1c2c64u: goto label_1c2c64;
        case 0x1c2c68u: goto label_1c2c68;
        case 0x1c2c6cu: goto label_1c2c6c;
        case 0x1c2c70u: goto label_1c2c70;
        case 0x1c2c74u: goto label_1c2c74;
        case 0x1c2c78u: goto label_1c2c78;
        case 0x1c2c7cu: goto label_1c2c7c;
        case 0x1c2c80u: goto label_1c2c80;
        case 0x1c2c84u: goto label_1c2c84;
        case 0x1c2c88u: goto label_1c2c88;
        case 0x1c2c8cu: goto label_1c2c8c;
        case 0x1c2c90u: goto label_1c2c90;
        case 0x1c2c94u: goto label_1c2c94;
        case 0x1c2c98u: goto label_1c2c98;
        case 0x1c2c9cu: goto label_1c2c9c;
        case 0x1c2ca0u: goto label_1c2ca0;
        case 0x1c2ca4u: goto label_1c2ca4;
        case 0x1c2ca8u: goto label_1c2ca8;
        case 0x1c2cacu: goto label_1c2cac;
        case 0x1c2cb0u: goto label_1c2cb0;
        case 0x1c2cb4u: goto label_1c2cb4;
        case 0x1c2cb8u: goto label_1c2cb8;
        case 0x1c2cbcu: goto label_1c2cbc;
        case 0x1c2cc0u: goto label_1c2cc0;
        case 0x1c2cc4u: goto label_1c2cc4;
        case 0x1c2cc8u: goto label_1c2cc8;
        case 0x1c2cccu: goto label_1c2ccc;
        case 0x1c2cd0u: goto label_1c2cd0;
        case 0x1c2cd4u: goto label_1c2cd4;
        case 0x1c2cd8u: goto label_1c2cd8;
        case 0x1c2cdcu: goto label_1c2cdc;
        case 0x1c2ce0u: goto label_1c2ce0;
        case 0x1c2ce4u: goto label_1c2ce4;
        case 0x1c2ce8u: goto label_1c2ce8;
        case 0x1c2cecu: goto label_1c2cec;
        case 0x1c2cf0u: goto label_1c2cf0;
        case 0x1c2cf4u: goto label_1c2cf4;
        case 0x1c2cf8u: goto label_1c2cf8;
        case 0x1c2cfcu: goto label_1c2cfc;
        case 0x1c2d00u: goto label_1c2d00;
        case 0x1c2d04u: goto label_1c2d04;
        case 0x1c2d08u: goto label_1c2d08;
        case 0x1c2d0cu: goto label_1c2d0c;
        case 0x1c2d10u: goto label_1c2d10;
        case 0x1c2d14u: goto label_1c2d14;
        case 0x1c2d18u: goto label_1c2d18;
        case 0x1c2d1cu: goto label_1c2d1c;
        case 0x1c2d20u: goto label_1c2d20;
        case 0x1c2d24u: goto label_1c2d24;
        case 0x1c2d28u: goto label_1c2d28;
        case 0x1c2d2cu: goto label_1c2d2c;
        case 0x1c2d30u: goto label_1c2d30;
        case 0x1c2d34u: goto label_1c2d34;
        case 0x1c2d38u: goto label_1c2d38;
        case 0x1c2d3cu: goto label_1c2d3c;
        case 0x1c2d40u: goto label_1c2d40;
        case 0x1c2d44u: goto label_1c2d44;
        case 0x1c2d48u: goto label_1c2d48;
        case 0x1c2d4cu: goto label_1c2d4c;
        case 0x1c2d50u: goto label_1c2d50;
        case 0x1c2d54u: goto label_1c2d54;
        case 0x1c2d58u: goto label_1c2d58;
        case 0x1c2d5cu: goto label_1c2d5c;
        case 0x1c2d60u: goto label_1c2d60;
        case 0x1c2d64u: goto label_1c2d64;
        case 0x1c2d68u: goto label_1c2d68;
        case 0x1c2d6cu: goto label_1c2d6c;
        case 0x1c2d70u: goto label_1c2d70;
        case 0x1c2d74u: goto label_1c2d74;
        case 0x1c2d78u: goto label_1c2d78;
        case 0x1c2d7cu: goto label_1c2d7c;
        case 0x1c2d80u: goto label_1c2d80;
        case 0x1c2d84u: goto label_1c2d84;
        case 0x1c2d88u: goto label_1c2d88;
        case 0x1c2d8cu: goto label_1c2d8c;
        case 0x1c2d90u: goto label_1c2d90;
        case 0x1c2d94u: goto label_1c2d94;
        case 0x1c2d98u: goto label_1c2d98;
        case 0x1c2d9cu: goto label_1c2d9c;
        case 0x1c2da0u: goto label_1c2da0;
        case 0x1c2da4u: goto label_1c2da4;
        case 0x1c2da8u: goto label_1c2da8;
        case 0x1c2dacu: goto label_1c2dac;
        case 0x1c2db0u: goto label_1c2db0;
        case 0x1c2db4u: goto label_1c2db4;
        case 0x1c2db8u: goto label_1c2db8;
        case 0x1c2dbcu: goto label_1c2dbc;
        case 0x1c2dc0u: goto label_1c2dc0;
        case 0x1c2dc4u: goto label_1c2dc4;
        case 0x1c2dc8u: goto label_1c2dc8;
        case 0x1c2dccu: goto label_1c2dcc;
        case 0x1c2dd0u: goto label_1c2dd0;
        case 0x1c2dd4u: goto label_1c2dd4;
        case 0x1c2dd8u: goto label_1c2dd8;
        case 0x1c2ddcu: goto label_1c2ddc;
        case 0x1c2de0u: goto label_1c2de0;
        case 0x1c2de4u: goto label_1c2de4;
        case 0x1c2de8u: goto label_1c2de8;
        case 0x1c2decu: goto label_1c2dec;
        case 0x1c2df0u: goto label_1c2df0;
        case 0x1c2df4u: goto label_1c2df4;
        case 0x1c2df8u: goto label_1c2df8;
        case 0x1c2dfcu: goto label_1c2dfc;
        case 0x1c2e00u: goto label_1c2e00;
        case 0x1c2e04u: goto label_1c2e04;
        case 0x1c2e08u: goto label_1c2e08;
        case 0x1c2e0cu: goto label_1c2e0c;
        case 0x1c2e10u: goto label_1c2e10;
        case 0x1c2e14u: goto label_1c2e14;
        case 0x1c2e18u: goto label_1c2e18;
        case 0x1c2e1cu: goto label_1c2e1c;
        case 0x1c2e20u: goto label_1c2e20;
        case 0x1c2e24u: goto label_1c2e24;
        case 0x1c2e28u: goto label_1c2e28;
        case 0x1c2e2cu: goto label_1c2e2c;
        case 0x1c2e30u: goto label_1c2e30;
        case 0x1c2e34u: goto label_1c2e34;
        case 0x1c2e38u: goto label_1c2e38;
        case 0x1c2e3cu: goto label_1c2e3c;
        case 0x1c2e40u: goto label_1c2e40;
        case 0x1c2e44u: goto label_1c2e44;
        case 0x1c2e48u: goto label_1c2e48;
        case 0x1c2e4cu: goto label_1c2e4c;
        case 0x1c2e50u: goto label_1c2e50;
        case 0x1c2e54u: goto label_1c2e54;
        case 0x1c2e58u: goto label_1c2e58;
        case 0x1c2e5cu: goto label_1c2e5c;
        case 0x1c2e60u: goto label_1c2e60;
        case 0x1c2e64u: goto label_1c2e64;
        case 0x1c2e68u: goto label_1c2e68;
        case 0x1c2e6cu: goto label_1c2e6c;
        case 0x1c2e70u: goto label_1c2e70;
        case 0x1c2e74u: goto label_1c2e74;
        case 0x1c2e78u: goto label_1c2e78;
        case 0x1c2e7cu: goto label_1c2e7c;
        case 0x1c2e80u: goto label_1c2e80;
        case 0x1c2e84u: goto label_1c2e84;
        case 0x1c2e88u: goto label_1c2e88;
        case 0x1c2e8cu: goto label_1c2e8c;
        case 0x1c2e90u: goto label_1c2e90;
        case 0x1c2e94u: goto label_1c2e94;
        case 0x1c2e98u: goto label_1c2e98;
        case 0x1c2e9cu: goto label_1c2e9c;
        case 0x1c2ea0u: goto label_1c2ea0;
        case 0x1c2ea4u: goto label_1c2ea4;
        case 0x1c2ea8u: goto label_1c2ea8;
        case 0x1c2eacu: goto label_1c2eac;
        case 0x1c2eb0u: goto label_1c2eb0;
        case 0x1c2eb4u: goto label_1c2eb4;
        case 0x1c2eb8u: goto label_1c2eb8;
        case 0x1c2ebcu: goto label_1c2ebc;
        case 0x1c2ec0u: goto label_1c2ec0;
        case 0x1c2ec4u: goto label_1c2ec4;
        case 0x1c2ec8u: goto label_1c2ec8;
        case 0x1c2eccu: goto label_1c2ecc;
        case 0x1c2ed0u: goto label_1c2ed0;
        case 0x1c2ed4u: goto label_1c2ed4;
        case 0x1c2ed8u: goto label_1c2ed8;
        case 0x1c2edcu: goto label_1c2edc;
        case 0x1c2ee0u: goto label_1c2ee0;
        case 0x1c2ee4u: goto label_1c2ee4;
        case 0x1c2ee8u: goto label_1c2ee8;
        case 0x1c2eecu: goto label_1c2eec;
        case 0x1c2ef0u: goto label_1c2ef0;
        case 0x1c2ef4u: goto label_1c2ef4;
        case 0x1c2ef8u: goto label_1c2ef8;
        case 0x1c2efcu: goto label_1c2efc;
        case 0x1c2f00u: goto label_1c2f00;
        case 0x1c2f04u: goto label_1c2f04;
        case 0x1c2f08u: goto label_1c2f08;
        case 0x1c2f0cu: goto label_1c2f0c;
        case 0x1c2f10u: goto label_1c2f10;
        case 0x1c2f14u: goto label_1c2f14;
        case 0x1c2f18u: goto label_1c2f18;
        case 0x1c2f1cu: goto label_1c2f1c;
        case 0x1c2f20u: goto label_1c2f20;
        case 0x1c2f24u: goto label_1c2f24;
        case 0x1c2f28u: goto label_1c2f28;
        case 0x1c2f2cu: goto label_1c2f2c;
        case 0x1c2f30u: goto label_1c2f30;
        case 0x1c2f34u: goto label_1c2f34;
        case 0x1c2f38u: goto label_1c2f38;
        case 0x1c2f3cu: goto label_1c2f3c;
        case 0x1c2f40u: goto label_1c2f40;
        case 0x1c2f44u: goto label_1c2f44;
        case 0x1c2f48u: goto label_1c2f48;
        case 0x1c2f4cu: goto label_1c2f4c;
        case 0x1c2f50u: goto label_1c2f50;
        case 0x1c2f54u: goto label_1c2f54;
        case 0x1c2f58u: goto label_1c2f58;
        case 0x1c2f5cu: goto label_1c2f5c;
        case 0x1c2f60u: goto label_1c2f60;
        case 0x1c2f64u: goto label_1c2f64;
        case 0x1c2f68u: goto label_1c2f68;
        case 0x1c2f6cu: goto label_1c2f6c;
        case 0x1c2f70u: goto label_1c2f70;
        case 0x1c2f74u: goto label_1c2f74;
        default: return;
    }

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
            { ctx->pc = 0x1c2758; return; }
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
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180B20u, 0x1C27E8u, 0x1C27F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
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
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1819E0u, 0x1C2808u, 0x1C2810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
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
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180C00u, 0x1C282Cu, 0x1C2834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
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
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1819A0u, 0x1C2854u, 0x1C285Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
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
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180C00u, 0x1C2878u, 0x1C2880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
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
label_1c28f0:
    // 0x1c28f0: 0x48080  sll         $s0, $a0, 2
    ctx->pc = 0x1c28f0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1c28f4:
    // 0x1c28f4: 0x8c2a3ffc  lw          $t2, 0x3FFC($at)
    ctx->pc = 0x1c28f4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1c28f8:
    // 0x1c28f8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c28f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1c28fc:
    // 0x1c28fc: 0x24631e00  addiu       $v1, $v1, 0x1E00
    ctx->pc = 0x1c28fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7680));
label_1c2900:
    // 0x1c2900: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1c2900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c2904:
    // 0x1c2904: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x1c2904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_1c2908:
    // 0x1c2908: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c2908u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c290c:
    // 0x1c290c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c290cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2910:
    // 0x1c2910: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c2910u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2914:
    // 0x1c2914: 0xa1140  sll         $v0, $t2, 5
    ctx->pc = 0x1c2914u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
label_1c2918:
    // 0x1c2918: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x1c2918u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1c291c:
    // 0x1c291c: 0xc066c72  jal         func_19B1C8
label_1c2920:
    if (ctx->pc == 0x1C2920u) {
        ctx->pc = 0x1C2920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C291Cu;
        // 0x1c2920: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2924u;
        goto label_1c2924;
    }
    ctx->pc = 0x1C291Cu;
    SET_GPR_U32(ctx, 31, 0x1C2924u);
    ctx->pc = 0x1C2920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C291Cu;
    // 0x1c2920: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1C291Cu, 0x1C2924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2924u;
label_1c2924:
    // 0x1c2924: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c2924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1c2928:
    // 0x1c2928: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c292c:
    // 0x1c292c: 0x2442f280  addiu       $v0, $v0, -0xD80
    ctx->pc = 0x1c292cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963840));
label_1c2930:
    // 0x1c2930: 0x24060608  addiu       $a2, $zero, 0x608
    ctx->pc = 0x1c2930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1544));
label_1c2934:
    // 0x1c2934: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c2934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1c2938:
    // 0x1c2938: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c2938u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c293c:
    // 0x1c293c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1c293cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c2940:
    // 0x1c2940: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c2940u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2944:
    // 0x1c2944: 0xc066c72  jal         func_19B1C8
label_1c2948:
    if (ctx->pc == 0x1C2948u) {
        ctx->pc = 0x1C2948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2944u;
        // 0x1c2948: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C294Cu;
        goto label_1c294c;
    }
    ctx->pc = 0x1C2944u;
    SET_GPR_U32(ctx, 31, 0x1C294Cu);
    ctx->pc = 0x1C2948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2944u;
    // 0x1c2948: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1C2944u, 0x1C294Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C294Cu;
label_1c294c:
    // 0x1c294c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c294cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c2950:
    // 0x1c2950: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c2950u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c2954:
    // 0x1c2954: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c2954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c2958:
    // 0x1c2958: 0x3e00008  jr          $ra
label_1c295c:
    if (ctx->pc == 0x1C295Cu) {
        ctx->pc = 0x1C295Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2958u;
        // 0x1c295c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2960u;
        goto label_1c2960;
    }
    ctx->pc = 0x1C2958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C295Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2958u;
        // 0x1c295c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2960u;
label_1c2960:
    // 0x1c2960: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c2960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1c2964:
    // 0x1c2964: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c2964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1c2968:
    // 0x1c2968: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c2968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1c296c:
    // 0x1c296c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c296cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c2970:
    // 0x1c2970: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c2970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c2974:
    // 0x1c2974: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c2974u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2978:
    // 0x1c2978: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c2978u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c297c:
    // 0x1c297c: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x1c297cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_1c2980:
    // 0x1c2980: 0x2463f2f0  addiu       $v1, $v1, -0xD10
    ctx->pc = 0x1c2980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963952));
label_1c2984:
    // 0x1c2984: 0x719021  addu        $s2, $v1, $s1
    ctx->pc = 0x1c2984u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1c2988:
    // 0x1c2988: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1c2988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c298c:
    // 0x1c298c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1c2990:
    if (ctx->pc == 0x1C2990u) {
        ctx->pc = 0x1C2994u;
        goto label_1c2994;
    }
    ctx->pc = 0x1C298Cu;
    {
        const bool branch_taken_0x1c298c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c298c) {
            ctx->pc = 0x1C29A0u;
            goto label_1c29a0;
        }
    }
    ctx->pc = 0x1C2994u;
label_1c2994:
    // 0x1c2994: 0xc070038  jal         func_1C00E0
label_1c2998:
    if (ctx->pc == 0x1C2998u) {
        ctx->pc = 0x1C299Cu;
        goto label_1c299c;
    }
    ctx->pc = 0x1C2994u;
    SET_GPR_U32(ctx, 31, 0x1C299Cu);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1C299Cu;
label_1c299c:
    // 0x1c299c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1c299cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1c29a0:
    // 0x1c29a0: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x1c29a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_1c29a4:
    // 0x1c29a4: 0x2463f2c0  addiu       $v1, $v1, -0xD40
    ctx->pc = 0x1c29a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963904));
label_1c29a8:
    // 0x1c29a8: 0x719021  addu        $s2, $v1, $s1
    ctx->pc = 0x1c29a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1c29ac:
    // 0x1c29ac: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1c29acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c29b0:
    // 0x1c29b0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1c29b4:
    if (ctx->pc == 0x1C29B4u) {
        ctx->pc = 0x1C29B8u;
        goto label_1c29b8;
    }
    ctx->pc = 0x1C29B0u;
    {
        const bool branch_taken_0x1c29b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c29b0) {
            ctx->pc = 0x1C29C4u;
            goto label_1c29c4;
        }
    }
    ctx->pc = 0x1C29B8u;
label_1c29b8:
    // 0x1c29b8: 0xc070038  jal         func_1C00E0
label_1c29bc:
    if (ctx->pc == 0x1C29BCu) {
        ctx->pc = 0x1C29C0u;
        goto label_1c29c0;
    }
    ctx->pc = 0x1C29B8u;
    SET_GPR_U32(ctx, 31, 0x1C29C0u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1C29C0u;
label_1c29c0:
    // 0x1c29c0: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1c29c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1c29c4:
    // 0x1c29c4: 0x0  nop
    ctx->pc = 0x1c29c4u;
    // NOP
label_1c29c8:
    // 0x1c29c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c29c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c29cc:
    // 0x1c29cc: 0x2a03000c  slti        $v1, $s0, 0xC
    ctx->pc = 0x1c29ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
label_1c29d0:
    // 0x1c29d0: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
label_1c29d4:
    if (ctx->pc == 0x1C29D4u) {
        ctx->pc = 0x1C29D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C29D0u;
        // 0x1c29d4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C29D8u;
        goto label_1c29d8;
    }
    ctx->pc = 0x1C29D0u;
    {
        const bool branch_taken_0x1c29d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C29D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C29D0u;
        // 0x1c29d4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c29d0) {
            ctx->pc = 0x1C297Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c297c;
        }
    }
    ctx->pc = 0x1C29D8u;
label_1c29d8:
    // 0x1c29d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c29d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1c29dc:
    // 0x1c29dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c29dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c29e0:
    // 0x1c29e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c29e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c29e4:
    // 0x1c29e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c29e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c29e8:
    // 0x1c29e8: 0x3e00008  jr          $ra
label_1c29ec:
    if (ctx->pc == 0x1C29ECu) {
        ctx->pc = 0x1C29ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C29E8u;
        // 0x1c29ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C29F0u;
        goto label_1c29f0;
    }
    ctx->pc = 0x1C29E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C29ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C29E8u;
        // 0x1c29ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C29E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C29F0u;
label_1c29f0:
    // 0x1c29f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c29f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1c29f4:
    // 0x1c29f4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1c29f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1c29f8:
    // 0x1c29f8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1c29f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1c29fc:
    // 0x1c29fc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c29fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1c2a00:
    // 0x1c2a00: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c2a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1c2a04:
    // 0x1c2a04: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c2a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1c2a08:
    // 0x1c2a08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c2a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c2a0c:
    // 0x1c2a0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c2a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c2a10:
    // 0x1c2a10: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c2a10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2a14:
    // 0x1c2a14: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c2a14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2a18:
    // 0x1c2a18: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c2a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1c2a1c:
    // 0x1c2a1c: 0x2442f2f0  addiu       $v0, $v0, -0xD10
    ctx->pc = 0x1c2a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963952));
label_1c2a20:
    // 0x1c2a20: 0x519021  addu        $s2, $v0, $s1
    ctx->pc = 0x1c2a20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1c2a24:
    // 0x1c2a24: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1c2a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c2a28:
    // 0x1c2a28: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1c2a2c:
    if (ctx->pc == 0x1C2A2Cu) {
        ctx->pc = 0x1C2A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2A28u;
        // 0x1c2a2c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2A30u;
        goto label_1c2a30;
    }
    ctx->pc = 0x1C2A28u;
    {
        const bool branch_taken_0x1c2a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2A28u;
        // 0x1c2a2c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2a28) {
            ctx->pc = 0x1C2A3Cu;
            goto label_1c2a3c;
        }
    }
    ctx->pc = 0x1C2A30u;
label_1c2a30:
    // 0x1c2a30: 0xc070080  jal         func_1C0200
label_1c2a34:
    if (ctx->pc == 0x1C2A34u) {
        ctx->pc = 0x1C2A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2A30u;
        // 0x1c2a34: 0x24055a80  addiu       $a1, $zero, 0x5A80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2A38u;
        goto label_1c2a38;
    }
    ctx->pc = 0x1C2A30u;
    SET_GPR_U32(ctx, 31, 0x1C2A38u);
    ctx->pc = 0x1C2A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2A30u;
    // 0x1c2a34: 0x24055a80  addiu       $a1, $zero, 0x5A80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1C2A38u;
label_1c2a38:
    // 0x1c2a38: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1c2a38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1c2a3c:
    // 0x1c2a3c: 0x0  nop
    ctx->pc = 0x1c2a3cu;
    // NOP
label_1c2a40:
    // 0x1c2a40: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c2a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1c2a44:
    // 0x1c2a44: 0x2442f2c0  addiu       $v0, $v0, -0xD40
    ctx->pc = 0x1c2a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963904));
label_1c2a48:
    // 0x1c2a48: 0x519021  addu        $s2, $v0, $s1
    ctx->pc = 0x1c2a48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1c2a4c:
    // 0x1c2a4c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1c2a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c2a50:
    // 0x1c2a50: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1c2a54:
    if (ctx->pc == 0x1C2A54u) {
        ctx->pc = 0x1C2A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2A50u;
        // 0x1c2a54: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2A58u;
        goto label_1c2a58;
    }
    ctx->pc = 0x1C2A50u;
    {
        const bool branch_taken_0x1c2a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2A50u;
        // 0x1c2a54: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2a50) {
            ctx->pc = 0x1C2A64u;
            goto label_1c2a64;
        }
    }
    ctx->pc = 0x1C2A58u;
label_1c2a58:
    // 0x1c2a58: 0xc070080  jal         func_1C0200
label_1c2a5c:
    if (ctx->pc == 0x1C2A5Cu) {
        ctx->pc = 0x1C2A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2A58u;
        // 0x1c2a5c: 0x24050480  addiu       $a1, $zero, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2A60u;
        goto label_1c2a60;
    }
    ctx->pc = 0x1C2A58u;
    SET_GPR_U32(ctx, 31, 0x1C2A60u);
    ctx->pc = 0x1C2A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2A58u;
    // 0x1c2a5c: 0x24050480  addiu       $a1, $zero, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1C2A60u;
label_1c2a60:
    // 0x1c2a60: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1c2a60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1c2a64:
    // 0x1c2a64: 0x0  nop
    ctx->pc = 0x1c2a64u;
    // NOP
label_1c2a68:
    // 0x1c2a68: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c2a68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c2a6c:
    // 0x1c2a6c: 0x2a02000c  slti        $v0, $s0, 0xC
    ctx->pc = 0x1c2a6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
label_1c2a70:
    // 0x1c2a70: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_1c2a74:
    if (ctx->pc == 0x1C2A74u) {
        ctx->pc = 0x1C2A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2A70u;
        // 0x1c2a74: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2A78u;
        goto label_1c2a78;
    }
    ctx->pc = 0x1C2A70u;
    {
        const bool branch_taken_0x1c2a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2A70u;
        // 0x1c2a74: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2a70) {
            ctx->pc = 0x1C2A18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2a18;
        }
    }
    ctx->pc = 0x1C2A78u;
label_1c2a78:
    // 0x1c2a78: 0xc041738  jal         func_105CE0
label_1c2a7c:
    if (ctx->pc == 0x1C2A7Cu) {
        ctx->pc = 0x1C2A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2A78u;
        // 0x1c2a7c: 0x240407fb  addiu       $a0, $zero, 0x7FB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2043));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2A80u;
        goto label_1c2a80;
    }
    ctx->pc = 0x1C2A78u;
    SET_GPR_U32(ctx, 31, 0x1C2A80u);
    ctx->pc = 0x1C2A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2A78u;
    // 0x1c2a7c: 0x240407fb  addiu       $a0, $zero, 0x7FB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2043));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x1C2A78u, 0x1C2A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2A80u;
label_1c2a80:
    // 0x1c2a80: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x1c2a80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_1c2a84:
    // 0x1c2a84: 0xc070080  jal         func_1C0200
label_1c2a88:
    if (ctx->pc == 0x1C2A88u) {
        ctx->pc = 0x1C2A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2A84u;
        // 0x1c2a88: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2A8Cu;
        goto label_1c2a8c;
    }
    ctx->pc = 0x1C2A84u;
    SET_GPR_U32(ctx, 31, 0x1C2A8Cu);
    ctx->pc = 0x1C2A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2A84u;
    // 0x1c2a88: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1C2A8Cu;
label_1c2a8c:
    // 0x1c2a8c: 0x240407fb  addiu       $a0, $zero, 0x7FB
    ctx->pc = 0x1c2a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2043));
label_1c2a90:
    // 0x1c2a90: 0xc0416e4  jal         func_105B90
label_1c2a94:
    if (ctx->pc == 0x1C2A94u) {
        ctx->pc = 0x1C2A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2A90u;
        // 0x1c2a94: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2A98u;
        goto label_1c2a98;
    }
    ctx->pc = 0x1C2A90u;
    SET_GPR_U32(ctx, 31, 0x1C2A98u);
    ctx->pc = 0x1C2A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2A90u;
    // 0x1c2a94: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x1C2A90u, 0x1C2A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2A98u;
label_1c2a98:
    // 0x1c2a98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c2a98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c2a9c:
    // 0x1c2a9c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c2a9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2aa0:
    // 0x1c2aa0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c2aa0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2aa4:
    // 0x1c2aa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c2aa8:
    // 0x1c2aa8: 0xc0602c8  jal         func_180B20
label_1c2aac:
    if (ctx->pc == 0x1C2AACu) {
        ctx->pc = 0x1C2AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2AA8u;
        // 0x1c2aac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2AB0u;
        goto label_1c2ab0;
    }
    ctx->pc = 0x1C2AA8u;
    SET_GPR_U32(ctx, 31, 0x1C2AB0u);
    ctx->pc = 0x1C2AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2AA8u;
    // 0x1c2aac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180B20u, 0x1C2AA8u, 0x1C2AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2AB0u;
label_1c2ab0:
    // 0x1c2ab0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c2ab0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c2ab4:
    // 0x1c2ab4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c2ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2ab8:
    // 0x1c2ab8: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c2ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1c2abc:
    // 0x1c2abc: 0x2442f2f0  addiu       $v0, $v0, -0xD10
    ctx->pc = 0x1c2abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963952));
label_1c2ac0:
    // 0x1c2ac0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1c2ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1c2ac4:
    // 0x1c2ac4: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x1c2ac4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c2ac8:
    // 0x1c2ac8: 0xc060678  jal         func_1819E0
label_1c2acc:
    if (ctx->pc == 0x1C2ACCu) {
        ctx->pc = 0x1C2ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2AC8u;
        // 0x1c2acc: 0x26b40080  addiu       $s4, $s5, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2AD0u;
        goto label_1c2ad0;
    }
    ctx->pc = 0x1C2AC8u;
    SET_GPR_U32(ctx, 31, 0x1C2AD0u);
    ctx->pc = 0x1C2ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2AC8u;
    // 0x1c2acc: 0x26b40080  addiu       $s4, $s5, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1819E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1819E0u, 0x1C2AC8u, 0x1C2AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2AD0u;
label_1c2ad0:
    // 0x1c2ad0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1c2ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1c2ad4:
    // 0x1c2ad4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c2ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c2ad8:
    // 0x1c2ad8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1c2ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1c2adc:
    // 0x1c2adc: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x1c2adcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1c2ae0:
    // 0x1c2ae0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c2ae0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2ae4:
    // 0x1c2ae4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c2ae4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2ae8:
    // 0x1c2ae8: 0x240a00a0  addiu       $t2, $zero, 0xA0
    ctx->pc = 0x1c2ae8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_1c2aec:
    // 0x1c2aec: 0xc060300  jal         func_180C00
label_1c2af0:
    if (ctx->pc == 0x1C2AF0u) {
        ctx->pc = 0x1C2AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2AECu;
        // 0x1c2af0: 0x240b0090  addiu       $t3, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2AF4u;
        goto label_1c2af4;
    }
    ctx->pc = 0x1C2AECu;
    SET_GPR_U32(ctx, 31, 0x1C2AF4u);
    ctx->pc = 0x1C2AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2AECu;
    // 0x1c2af0: 0x240b0090  addiu       $t3, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180C00u, 0x1C2AECu, 0x1C2AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2AF4u;
label_1c2af4:
    // 0x1c2af4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c2af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1c2af8:
    // 0x1c2af8: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x1c2af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_1c2afc:
    // 0x1c2afc: 0xc08e93e  jal         func_23A4F8
label_1c2b00:
    if (ctx->pc == 0x1C2B00u) {
        ctx->pc = 0x1C2B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2AFCu;
        // 0x1c2b00: 0x24065a00  addiu       $a2, $zero, 0x5A00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2B04u;
        goto label_1c2b04;
    }
    ctx->pc = 0x1C2AFCu;
    SET_GPR_U32(ctx, 31, 0x1C2B04u);
    ctx->pc = 0x1C2B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2AFCu;
    // 0x1c2b00: 0x24065a00  addiu       $a2, $zero, 0x5A00 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x1C2B04u;
label_1c2b04:
    // 0x1c2b04: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c2b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1c2b08:
    // 0x1c2b08: 0x2442f2c0  addiu       $v0, $v0, -0xD40
    ctx->pc = 0x1c2b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963904));
label_1c2b0c:
    // 0x1c2b0c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1c2b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1c2b10:
    // 0x1c2b10: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x1c2b10u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c2b14:
    // 0x1c2b14: 0xc060668  jal         func_1819A0
label_1c2b18:
    if (ctx->pc == 0x1C2B18u) {
        ctx->pc = 0x1C2B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2B14u;
        // 0x1c2b18: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2B1Cu;
        goto label_1c2b1c;
    }
    ctx->pc = 0x1C2B14u;
    SET_GPR_U32(ctx, 31, 0x1C2B1Cu);
    ctx->pc = 0x1C2B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2B14u;
    // 0x1c2b18: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1819A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1819A0u, 0x1C2B14u, 0x1C2B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2B1Cu;
label_1c2b1c:
    // 0x1c2b1c: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x1c2b1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c2b20:
    // 0x1c2b20: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c2b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c2b24:
    // 0x1c2b24: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c2b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1c2b28:
    // 0x1c2b28: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c2b28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c2b2c:
    // 0x1c2b2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c2b2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2b30:
    // 0x1c2b30: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c2b30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2b34:
    // 0x1c2b34: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c2b34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2b38:
    // 0x1c2b38: 0xc060300  jal         func_180C00
label_1c2b3c:
    if (ctx->pc == 0x1C2B3Cu) {
        ctx->pc = 0x1C2B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2B38u;
        // 0x1c2b3c: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2B40u;
        goto label_1c2b40;
    }
    ctx->pc = 0x1C2B38u;
    SET_GPR_U32(ctx, 31, 0x1C2B40u);
    ctx->pc = 0x1C2B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2B38u;
    // 0x1c2b3c: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180C00u, 0x1C2B38u, 0x1C2B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2B40u;
label_1c2b40:
    // 0x1c2b40: 0x26840080  addiu       $a0, $s4, 0x80
    ctx->pc = 0x1c2b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
label_1c2b44:
    // 0x1c2b44: 0x26255a40  addiu       $a1, $s1, 0x5A40
    ctx->pc = 0x1c2b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 23104));
label_1c2b48:
    // 0x1c2b48: 0xc08e93e  jal         func_23A4F8
label_1c2b4c:
    if (ctx->pc == 0x1C2B4Cu) {
        ctx->pc = 0x1C2B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2B48u;
        // 0x1c2b4c: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2B50u;
        goto label_1c2b50;
    }
    ctx->pc = 0x1C2B48u;
    SET_GPR_U32(ctx, 31, 0x1C2B50u);
    ctx->pc = 0x1C2B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2B48u;
    // 0x1c2b4c: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x1C2B50u;
label_1c2b50:
    // 0x1c2b50: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1c2b50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1c2b54:
    // 0x1c2b54: 0x2a62000c  slti        $v0, $s3, 0xC
    ctx->pc = 0x1c2b54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)12) ? 1 : 0);
label_1c2b58:
    // 0x1c2b58: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
label_1c2b5c:
    if (ctx->pc == 0x1C2B5Cu) {
        ctx->pc = 0x1C2B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2B58u;
        // 0x1c2b5c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2B60u;
        goto label_1c2b60;
    }
    ctx->pc = 0x1C2B58u;
    {
        const bool branch_taken_0x1c2b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2B58u;
        // 0x1c2b5c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2b58) {
            ctx->pc = 0x1C2AA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2aa4;
        }
    }
    ctx->pc = 0x1C2B60u;
label_1c2b60:
    // 0x1c2b60: 0xc070038  jal         func_1C00E0
label_1c2b64:
    if (ctx->pc == 0x1C2B64u) {
        ctx->pc = 0x1C2B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2B60u;
        // 0x1c2b64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2B68u;
        goto label_1c2b68;
    }
    ctx->pc = 0x1C2B60u;
    SET_GPR_U32(ctx, 31, 0x1C2B68u);
    ctx->pc = 0x1C2B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2B60u;
    // 0x1c2b64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1C2B68u;
label_1c2b68:
    // 0x1c2b68: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1c2b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1c2b6c:
    // 0x1c2b6c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1c2b6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c2b70:
    // 0x1c2b70: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c2b70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c2b74:
    // 0x1c2b74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c2b74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c2b78:
    // 0x1c2b78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c2b78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c2b7c:
    // 0x1c2b7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c2b7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c2b80:
    // 0x1c2b80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c2b80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c2b84:
    // 0x1c2b84: 0x3e00008  jr          $ra
label_1c2b88:
    if (ctx->pc == 0x1C2B88u) {
        ctx->pc = 0x1C2B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2B84u;
        // 0x1c2b88: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2B8Cu;
        goto label_1c2b8c;
    }
    ctx->pc = 0x1C2B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2B84u;
        // 0x1c2b88: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2B8Cu;
label_1c2b8c:
    // 0x1c2b8c: 0x0  nop
    ctx->pc = 0x1c2b8cu;
    // NOP
label_1c2b90:
    // 0x1c2b90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c2b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1c2b94:
    // 0x1c2b94: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c2b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1c2b98:
    // 0x1c2b98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c2b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1c2b9c:
    // 0x1c2b9c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1c2b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_1c2ba0:
    // 0x1c2ba0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c2ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c2ba4:
    // 0x1c2ba4: 0x2442f2c0  addiu       $v0, $v0, -0xD40
    ctx->pc = 0x1c2ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963904));
label_1c2ba8:
    // 0x1c2ba8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c2ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c2bac:
    // 0x1c2bac: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1c2bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1c2bb0:
    // 0x1c2bb0: 0x48080  sll         $s0, $a0, 2
    ctx->pc = 0x1c2bb0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1c2bb4:
    // 0x1c2bb4: 0x8c2a3ffc  lw          $t2, 0x3FFC($at)
    ctx->pc = 0x1c2bb4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1c2bb8:
    // 0x1c2bb8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c2bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1c2bbc:
    // 0x1c2bbc: 0x24631e00  addiu       $v1, $v1, 0x1E00
    ctx->pc = 0x1c2bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7680));
label_1c2bc0:
    // 0x1c2bc0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1c2bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c2bc4:
    // 0x1c2bc4: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x1c2bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_1c2bc8:
    // 0x1c2bc8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c2bc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2bcc:
    // 0x1c2bcc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c2bccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2bd0:
    // 0x1c2bd0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c2bd0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2bd4:
    // 0x1c2bd4: 0xa1140  sll         $v0, $t2, 5
    ctx->pc = 0x1c2bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
label_1c2bd8:
    // 0x1c2bd8: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x1c2bd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1c2bdc:
    // 0x1c2bdc: 0xc066c72  jal         func_19B1C8
label_1c2be0:
    if (ctx->pc == 0x1C2BE0u) {
        ctx->pc = 0x1C2BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2BDCu;
        // 0x1c2be0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2BE4u;
        goto label_1c2be4;
    }
    ctx->pc = 0x1C2BDCu;
    SET_GPR_U32(ctx, 31, 0x1C2BE4u);
    ctx->pc = 0x1C2BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2BDCu;
    // 0x1c2be0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1C2BDCu, 0x1C2BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2BE4u;
label_1c2be4:
    // 0x1c2be4: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c2be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1c2be8:
    // 0x1c2be8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c2be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c2bec:
    // 0x1c2bec: 0x2442f2f0  addiu       $v0, $v0, -0xD10
    ctx->pc = 0x1c2becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963952));
label_1c2bf0:
    // 0x1c2bf0: 0x240605a8  addiu       $a2, $zero, 0x5A8
    ctx->pc = 0x1c2bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1448));
label_1c2bf4:
    // 0x1c2bf4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c2bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1c2bf8:
    // 0x1c2bf8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c2bf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2bfc:
    // 0x1c2bfc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1c2bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c2c00:
    // 0x1c2c00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c2c00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2c04:
    // 0x1c2c04: 0xc066c72  jal         func_19B1C8
label_1c2c08:
    if (ctx->pc == 0x1C2C08u) {
        ctx->pc = 0x1C2C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2C04u;
        // 0x1c2c08: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2C0Cu;
        goto label_1c2c0c;
    }
    ctx->pc = 0x1C2C04u;
    SET_GPR_U32(ctx, 31, 0x1C2C0Cu);
    ctx->pc = 0x1C2C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2C04u;
    // 0x1c2c08: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1C2C04u, 0x1C2C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2C0Cu;
label_1c2c0c:
    // 0x1c2c0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c2c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c2c10:
    // 0x1c2c10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c2c10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c2c14:
    // 0x1c2c14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c2c14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c2c18:
    // 0x1c2c18: 0x3e00008  jr          $ra
label_1c2c1c:
    if (ctx->pc == 0x1C2C1Cu) {
        ctx->pc = 0x1C2C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2C18u;
        // 0x1c2c1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2C20u;
        goto label_1c2c20;
    }
    ctx->pc = 0x1C2C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2C18u;
        // 0x1c2c1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2C20u;
label_1c2c20:
    // 0x1c2c20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c2c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1c2c24:
    // 0x1c2c24: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c2c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1c2c28:
    // 0x1c2c28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c2c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1c2c2c:
    // 0x1c2c2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c2c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c2c30:
    // 0x1c2c30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c2c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c2c34:
    // 0x1c2c34: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c2c34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2c38:
    // 0x1c2c38: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c2c38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2c3c:
    // 0x1c2c3c: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x1c2c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_1c2c40:
    // 0x1c2c40: 0x2463f530  addiu       $v1, $v1, -0xAD0
    ctx->pc = 0x1c2c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964528));
label_1c2c44:
    // 0x1c2c44: 0x719021  addu        $s2, $v1, $s1
    ctx->pc = 0x1c2c44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1c2c48:
    // 0x1c2c48: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1c2c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c2c4c:
    // 0x1c2c4c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1c2c50:
    if (ctx->pc == 0x1C2C50u) {
        ctx->pc = 0x1C2C54u;
        goto label_1c2c54;
    }
    ctx->pc = 0x1C2C4Cu;
    {
        const bool branch_taken_0x1c2c4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2c4c) {
            ctx->pc = 0x1C2C60u;
            goto label_1c2c60;
        }
    }
    ctx->pc = 0x1C2C54u;
label_1c2c54:
    // 0x1c2c54: 0xc070038  jal         func_1C00E0
label_1c2c58:
    if (ctx->pc == 0x1C2C58u) {
        ctx->pc = 0x1C2C5Cu;
        goto label_1c2c5c;
    }
    ctx->pc = 0x1C2C54u;
    SET_GPR_U32(ctx, 31, 0x1C2C5Cu);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1C2C5Cu;
label_1c2c5c:
    // 0x1c2c5c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1c2c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1c2c60:
    // 0x1c2c60: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x1c2c60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_1c2c64:
    // 0x1c2c64: 0x2463f320  addiu       $v1, $v1, -0xCE0
    ctx->pc = 0x1c2c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964000));
label_1c2c68:
    // 0x1c2c68: 0x719021  addu        $s2, $v1, $s1
    ctx->pc = 0x1c2c68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1c2c6c:
    // 0x1c2c6c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1c2c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c2c70:
    // 0x1c2c70: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1c2c74:
    if (ctx->pc == 0x1C2C74u) {
        ctx->pc = 0x1C2C78u;
        goto label_1c2c78;
    }
    ctx->pc = 0x1C2C70u;
    {
        const bool branch_taken_0x1c2c70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2c70) {
            ctx->pc = 0x1C2C84u;
            goto label_1c2c84;
        }
    }
    ctx->pc = 0x1C2C78u;
label_1c2c78:
    // 0x1c2c78: 0xc070038  jal         func_1C00E0
label_1c2c7c:
    if (ctx->pc == 0x1C2C7Cu) {
        ctx->pc = 0x1C2C80u;
        goto label_1c2c80;
    }
    ctx->pc = 0x1C2C78u;
    SET_GPR_U32(ctx, 31, 0x1C2C80u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1C2C80u;
label_1c2c80:
    // 0x1c2c80: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1c2c80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_1c2c84:
    // 0x1c2c84: 0x0  nop
    ctx->pc = 0x1c2c84u;
    // NOP
label_1c2c88:
    // 0x1c2c88: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c2c88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c2c8c:
    // 0x1c2c8c: 0x2a030083  slti        $v1, $s0, 0x83
    ctx->pc = 0x1c2c8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)131) ? 1 : 0);
label_1c2c90:
    // 0x1c2c90: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
label_1c2c94:
    if (ctx->pc == 0x1C2C94u) {
        ctx->pc = 0x1C2C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2C90u;
        // 0x1c2c94: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2C98u;
        goto label_1c2c98;
    }
    ctx->pc = 0x1C2C90u;
    {
        const bool branch_taken_0x1c2c90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2C90u;
        // 0x1c2c94: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2c90) {
            ctx->pc = 0x1C2C3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2c3c;
        }
    }
    ctx->pc = 0x1C2C98u;
label_1c2c98:
    // 0x1c2c98: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c2c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1c2c9c:
    // 0x1c2c9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c2c9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c2ca0:
    // 0x1c2ca0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c2ca0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c2ca4:
    // 0x1c2ca4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c2ca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c2ca8:
    // 0x1c2ca8: 0x3e00008  jr          $ra
label_1c2cac:
    if (ctx->pc == 0x1C2CACu) {
        ctx->pc = 0x1C2CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2CA8u;
        // 0x1c2cac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2CB0u;
        goto label_1c2cb0;
    }
    ctx->pc = 0x1C2CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2CA8u;
        // 0x1c2cac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2CB0u;
label_1c2cb0:
    // 0x1c2cb0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1c2cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1c2cb4:
    // 0x1c2cb4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1c2cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1c2cb8:
    // 0x1c2cb8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1c2cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1c2cbc:
    // 0x1c2cbc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c2cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1c2cc0:
    // 0x1c2cc0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c2cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1c2cc4:
    // 0x1c2cc4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c2cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1c2cc8:
    // 0x1c2cc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c2cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c2ccc:
    // 0x1c2ccc: 0x1080008c  beqz        $a0, . + 4 + (0x8C << 2)
label_1c2cd0:
    if (ctx->pc == 0x1C2CD0u) {
        ctx->pc = 0x1C2CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2CCCu;
        // 0x1c2cd0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2CD4u;
        goto label_1c2cd4;
    }
    ctx->pc = 0x1C2CCCu;
    {
        const bool branch_taken_0x1c2ccc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2CCCu;
        // 0x1c2cd0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2ccc) {
            ctx->pc = 0x1C2F00u;
            goto label_1c2f00;
        }
    }
    ctx->pc = 0x1C2CD4u;
label_1c2cd4:
    // 0x1c2cd4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c2cd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2cd8:
    // 0x1c2cd8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c2cd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2cdc:
    // 0x1c2cdc: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1c2cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_1c2ce0:
    // 0x1c2ce0: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x1c2ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_1c2ce4:
    // 0x1c2ce4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1c2ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1c2ce8:
    // 0x1c2ce8: 0x24643620  addiu       $a0, $v1, 0x3620
    ctx->pc = 0x1c2ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 13856));
label_1c2cec:
    // 0x1c2cec: 0x9063367c  lbu         $v1, 0x367C($v1)
    ctx->pc = 0x1c2cecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13948)));
label_1c2cf0:
    // 0x1c2cf0: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
label_1c2cf4:
    if (ctx->pc == 0x1C2CF4u) {
        ctx->pc = 0x1C2CF8u;
        goto label_1c2cf8;
    }
    ctx->pc = 0x1C2CF0u;
    {
        const bool branch_taken_0x1c2cf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2cf0) {
            ctx->pc = 0x1C2DB0u;
            goto label_1c2db0;
        }
    }
    ctx->pc = 0x1C2CF8u;
label_1c2cf8:
    // 0x1c2cf8: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x1c2cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_1c2cfc:
    // 0x1c2cfc: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1c2cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1c2d00:
    // 0x1c2d00: 0x24423b80  addiu       $v0, $v0, 0x3B80
    ctx->pc = 0x1c2d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15232));
label_1c2d04:
    // 0x1c2d04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c2d04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2d08:
    // 0x1c2d08: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1c2d08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1c2d0c:
    // 0x1c2d0c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1c2d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1c2d10:
    // 0x1c2d10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c2d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c2d14:
    // 0x1c2d14: 0x90450002  lbu         $a1, 0x2($v0)
    ctx->pc = 0x1c2d14u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_1c2d18:
    // 0x1c2d18: 0xc0651dc  jal         func_194770
label_1c2d1c:
    if (ctx->pc == 0x1C2D1Cu) {
        ctx->pc = 0x1C2D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2D18u;
        // 0x1c2d1c: 0x27a40078  addiu       $a0, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2D20u;
        goto label_1c2d20;
    }
    ctx->pc = 0x1C2D18u;
    SET_GPR_U32(ctx, 31, 0x1C2D20u);
    ctx->pc = 0x1C2D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2D18u;
    // 0x1c2d1c: 0x27a40078  addiu       $a0, $sp, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194770u, 0x1C2D18u, 0x1C2D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2D20u;
label_1c2d20:
    // 0x1c2d20: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c2d20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2d24:
    // 0x1c2d24: 0x0  nop
    ctx->pc = 0x1c2d24u;
    // NOP
label_1c2d28:
    // 0x1c2d28: 0x27a30078  addiu       $v1, $sp, 0x78
    ctx->pc = 0x1c2d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_1c2d2c:
    // 0x1c2d2c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1c2d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1c2d30:
    // 0x1c2d30: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x1c2d30u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1c2d34:
    // 0x1c2d34: 0x28830059  slti        $v1, $a0, 0x59
    ctx->pc = 0x1c2d34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)89) ? 1 : 0);
label_1c2d38:
    // 0x1c2d38: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_1c2d3c:
    if (ctx->pc == 0x1C2D3Cu) {
        ctx->pc = 0x1C2D40u;
        goto label_1c2d40;
    }
    ctx->pc = 0x1C2D38u;
    {
        const bool branch_taken_0x1c2d38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2d38) {
            ctx->pc = 0x1C2D44u;
            goto label_1c2d44;
        }
    }
    ctx->pc = 0x1C2D40u;
label_1c2d40:
    // 0x1c2d40: 0x2484ffd7  addiu       $a0, $a0, -0x29
    ctx->pc = 0x1c2d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967255));
label_1c2d44:
    // 0x1c2d44: 0x0  nop
    ctx->pc = 0x1c2d44u;
    // NOP
label_1c2d48:
    // 0x1c2d48: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x1c2d48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_1c2d4c:
    // 0x1c2d4c: 0x49880  sll         $s3, $a0, 2
    ctx->pc = 0x1c2d4cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1c2d50:
    // 0x1c2d50: 0x2463f530  addiu       $v1, $v1, -0xAD0
    ctx->pc = 0x1c2d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964528));
label_1c2d54:
    // 0x1c2d54: 0x73a021  addu        $s4, $v1, $s3
    ctx->pc = 0x1c2d54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1c2d58:
    // 0x1c2d58: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1c2d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1c2d5c:
    // 0x1c2d5c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_1c2d60:
    if (ctx->pc == 0x1C2D60u) {
        ctx->pc = 0x1C2D64u;
        goto label_1c2d64;
    }
    ctx->pc = 0x1C2D5Cu;
    {
        const bool branch_taken_0x1c2d5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2d5c) {
            ctx->pc = 0x1C2D74u;
            goto label_1c2d74;
        }
    }
    ctx->pc = 0x1C2D64u;
label_1c2d64:
    // 0x1c2d64: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1c2d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c2d68:
    // 0x1c2d68: 0xc070080  jal         func_1C0200
label_1c2d6c:
    if (ctx->pc == 0x1C2D6Cu) {
        ctx->pc = 0x1C2D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2D68u;
        // 0x1c2d6c: 0x24056080  addiu       $a1, $zero, 0x6080 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2D70u;
        goto label_1c2d70;
    }
    ctx->pc = 0x1C2D68u;
    SET_GPR_U32(ctx, 31, 0x1C2D70u);
    ctx->pc = 0x1C2D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2D68u;
    // 0x1c2d6c: 0x24056080  addiu       $a1, $zero, 0x6080 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1C2D70u;
label_1c2d70:
    // 0x1c2d70: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1c2d70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_1c2d74:
    // 0x1c2d74: 0x0  nop
    ctx->pc = 0x1c2d74u;
    // NOP
label_1c2d78:
    // 0x1c2d78: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x1c2d78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_1c2d7c:
    // 0x1c2d7c: 0x2463f320  addiu       $v1, $v1, -0xCE0
    ctx->pc = 0x1c2d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964000));
label_1c2d80:
    // 0x1c2d80: 0x739821  addu        $s3, $v1, $s3
    ctx->pc = 0x1c2d80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1c2d84:
    // 0x1c2d84: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1c2d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1c2d88:
    // 0x1c2d88: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1c2d8c:
    if (ctx->pc == 0x1C2D8Cu) {
        ctx->pc = 0x1C2D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2D88u;
        // 0x1c2d8c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2D90u;
        goto label_1c2d90;
    }
    ctx->pc = 0x1C2D88u;
    {
        const bool branch_taken_0x1c2d88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2D88u;
        // 0x1c2d8c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2d88) {
            ctx->pc = 0x1C2D9Cu;
            goto label_1c2d9c;
        }
    }
    ctx->pc = 0x1C2D90u;
label_1c2d90:
    // 0x1c2d90: 0xc070080  jal         func_1C0200
label_1c2d94:
    if (ctx->pc == 0x1C2D94u) {
        ctx->pc = 0x1C2D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2D90u;
        // 0x1c2d94: 0x24050480  addiu       $a1, $zero, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2D98u;
        goto label_1c2d98;
    }
    ctx->pc = 0x1C2D90u;
    SET_GPR_U32(ctx, 31, 0x1C2D98u);
    ctx->pc = 0x1C2D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2D90u;
    // 0x1c2d94: 0x24050480  addiu       $a1, $zero, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1C2D98u;
label_1c2d98:
    // 0x1c2d98: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1c2d98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1c2d9c:
    // 0x1c2d9c: 0x0  nop
    ctx->pc = 0x1c2d9cu;
    // NOP
label_1c2da0:
    // 0x1c2da0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c2da0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c2da4:
    // 0x1c2da4: 0x2a230005  slti        $v1, $s1, 0x5
    ctx->pc = 0x1c2da4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
label_1c2da8:
    // 0x1c2da8: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
label_1c2dac:
    if (ctx->pc == 0x1C2DACu) {
        ctx->pc = 0x1C2DB0u;
        goto label_1c2db0;
    }
    ctx->pc = 0x1C2DA8u;
    {
        const bool branch_taken_0x1c2da8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2da8) {
            ctx->pc = 0x1C2D24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2d24;
        }
    }
    ctx->pc = 0x1C2DB0u;
label_1c2db0:
    // 0x1c2db0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c2db0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c2db4:
    // 0x1c2db4: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1c2db4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1c2db8:
    // 0x1c2db8: 0x1460ffc8  bnez        $v1, . + 4 + (-0x38 << 2)
label_1c2dbc:
    if (ctx->pc == 0x1C2DBCu) {
        ctx->pc = 0x1C2DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2DB8u;
        // 0x1c2dbc: 0x26520090  addiu       $s2, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2DC0u;
        goto label_1c2dc0;
    }
    ctx->pc = 0x1C2DB8u;
    {
        const bool branch_taken_0x1c2db8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2DB8u;
        // 0x1c2dbc: 0x26520090  addiu       $s2, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2db8) {
            ctx->pc = 0x1C2CDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2cdc;
        }
    }
    ctx->pc = 0x1C2DC0u;
label_1c2dc0:
    // 0x1c2dc0: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c2dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c2dc4:
    // 0x1c2dc4: 0x8c23f738  lw          $v1, -0x8C8($at)
    ctx->pc = 0x1c2dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965048)));
label_1c2dc8:
    // 0x1c2dc8: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_1c2dcc:
    if (ctx->pc == 0x1C2DCCu) {
        ctx->pc = 0x1C2DD0u;
        goto label_1c2dd0;
    }
    ctx->pc = 0x1C2DC8u;
    {
        const bool branch_taken_0x1c2dc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2dc8) {
            ctx->pc = 0x1C2DE4u;
            goto label_1c2de4;
        }
    }
    ctx->pc = 0x1C2DD0u;
label_1c2dd0:
    // 0x1c2dd0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1c2dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c2dd4:
    // 0x1c2dd4: 0xc070080  jal         func_1C0200
label_1c2dd8:
    if (ctx->pc == 0x1C2DD8u) {
        ctx->pc = 0x1C2DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2DD4u;
        // 0x1c2dd8: 0x24056080  addiu       $a1, $zero, 0x6080 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2DDCu;
        goto label_1c2ddc;
    }
    ctx->pc = 0x1C2DD4u;
    SET_GPR_U32(ctx, 31, 0x1C2DDCu);
    ctx->pc = 0x1C2DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2DD4u;
    // 0x1c2dd8: 0x24056080  addiu       $a1, $zero, 0x6080 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1C2DDCu;
label_1c2ddc:
    // 0x1c2ddc: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c2ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c2de0:
    // 0x1c2de0: 0xac22f738  sw          $v0, -0x8C8($at)
    ctx->pc = 0x1c2de0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965048), GPR_U32(ctx, 2));
label_1c2de4:
    // 0x1c2de4: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c2de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c2de8:
    // 0x1c2de8: 0x8c23f528  lw          $v1, -0xAD8($at)
    ctx->pc = 0x1c2de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964520)));
label_1c2dec:
    // 0x1c2dec: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_1c2df0:
    if (ctx->pc == 0x1C2DF0u) {
        ctx->pc = 0x1C2DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2DECu;
        // 0x1c2df0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2DF4u;
        goto label_1c2df4;
    }
    ctx->pc = 0x1C2DECu;
    {
        const bool branch_taken_0x1c2dec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2DECu;
        // 0x1c2df0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2dec) {
            ctx->pc = 0x1C2E0Cu;
            goto label_1c2e0c;
        }
    }
    ctx->pc = 0x1C2DF4u;
label_1c2df4:
    // 0x1c2df4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1c2df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c2df8:
    // 0x1c2df8: 0xc070080  jal         func_1C0200
label_1c2dfc:
    if (ctx->pc == 0x1C2DFCu) {
        ctx->pc = 0x1C2DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2DF8u;
        // 0x1c2dfc: 0x24050480  addiu       $a1, $zero, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2E00u;
        goto label_1c2e00;
    }
    ctx->pc = 0x1C2DF8u;
    SET_GPR_U32(ctx, 31, 0x1C2E00u);
    ctx->pc = 0x1C2DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2DF8u;
    // 0x1c2dfc: 0x24050480  addiu       $a1, $zero, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1C2E00u;
label_1c2e00:
    // 0x1c2e00: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x1c2e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
label_1c2e04:
    // 0x1c2e04: 0xac22f528  sw          $v0, -0xAD8($at)
    ctx->pc = 0x1c2e04u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964520), GPR_U32(ctx, 2));
label_1c2e08:
    // 0x1c2e08: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c2e08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2e0c:
    // 0x1c2e0c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c2e0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2e10:
    // 0x1c2e10: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x1c2e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_1c2e14:
    // 0x1c2e14: 0x2463f530  addiu       $v1, $v1, -0xAD0
    ctx->pc = 0x1c2e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964528));
label_1c2e18:
    // 0x1c2e18: 0x709021  addu        $s2, $v1, $s0
    ctx->pc = 0x1c2e18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1c2e1c:
    // 0x1c2e1c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1c2e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c2e20:
    // 0x1c2e20: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
label_1c2e24:
    if (ctx->pc == 0x1C2E24u) {
        ctx->pc = 0x1C2E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2E20u;
        // 0x1c2e24: 0x2624087f  addiu       $a0, $s1, 0x87F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2175));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2E28u;
        goto label_1c2e28;
    }
    ctx->pc = 0x1C2E20u;
    {
        const bool branch_taken_0x1c2e20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2E20u;
        // 0x1c2e24: 0x2624087f  addiu       $a0, $s1, 0x87F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2175));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2e20) {
            ctx->pc = 0x1C2EE4u;
            goto label_1c2ee4;
        }
    }
    ctx->pc = 0x1C2E28u;
label_1c2e28:
    // 0x1c2e28: 0xc041738  jal         func_105CE0
label_1c2e2c:
    if (ctx->pc == 0x1C2E2Cu) {
        ctx->pc = 0x1C2E30u;
        goto label_1c2e30;
    }
    ctx->pc = 0x1C2E28u;
    SET_GPR_U32(ctx, 31, 0x1C2E30u);
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x1C2E28u, 0x1C2E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2E30u;
label_1c2e30:
    // 0x1c2e30: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x1c2e30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_1c2e34:
    // 0x1c2e34: 0xc070080  jal         func_1C0200
label_1c2e38:
    if (ctx->pc == 0x1C2E38u) {
        ctx->pc = 0x1C2E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2E34u;
        // 0x1c2e38: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2E3Cu;
        goto label_1c2e3c;
    }
    ctx->pc = 0x1C2E34u;
    SET_GPR_U32(ctx, 31, 0x1C2E3Cu);
    ctx->pc = 0x1C2E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2E34u;
    // 0x1c2e38: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1C2E3Cu;
label_1c2e3c:
    // 0x1c2e3c: 0x2624087f  addiu       $a0, $s1, 0x87F
    ctx->pc = 0x1c2e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2175));
label_1c2e40:
    // 0x1c2e40: 0xc0416e4  jal         func_105B90
label_1c2e44:
    if (ctx->pc == 0x1C2E44u) {
        ctx->pc = 0x1C2E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2E40u;
        // 0x1c2e44: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2E48u;
        goto label_1c2e48;
    }
    ctx->pc = 0x1C2E40u;
    SET_GPR_U32(ctx, 31, 0x1C2E48u);
    ctx->pc = 0x1C2E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2E40u;
    // 0x1c2e44: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x1C2E40u, 0x1C2E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2E48u;
label_1c2e48:
    // 0x1c2e48: 0x8e540000  lw          $s4, 0x0($s2)
    ctx->pc = 0x1c2e48u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c2e4c:
    // 0x1c2e4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c2e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2e50:
    // 0x1c2e50: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c2e50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c2e54:
    // 0x1c2e54: 0xc060678  jal         func_1819E0
label_1c2e58:
    if (ctx->pc == 0x1C2E58u) {
        ctx->pc = 0x1C2E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2E54u;
        // 0x1c2e58: 0x26930080  addiu       $s3, $s4, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2E5Cu;
        goto label_1c2e5c;
    }
    ctx->pc = 0x1C2E54u;
    SET_GPR_U32(ctx, 31, 0x1C2E5Cu);
    ctx->pc = 0x1C2E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2E54u;
    // 0x1c2e58: 0x26930080  addiu       $s3, $s4, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1819E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1819E0u, 0x1C2E54u, 0x1C2E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2E5Cu;
label_1c2e5c:
    // 0x1c2e5c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c2e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1c2e60:
    // 0x1c2e60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c2e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c2e64:
    // 0x1c2e64: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1c2e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1c2e68:
    // 0x1c2e68: 0x24070013  addiu       $a3, $zero, 0x13
    ctx->pc = 0x1c2e68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1c2e6c:
    // 0x1c2e6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c2e6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2e70:
    // 0x1c2e70: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c2e70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2e74:
    // 0x1c2e74: 0x240a00c0  addiu       $t2, $zero, 0xC0
    ctx->pc = 0x1c2e74u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_1c2e78:
    // 0x1c2e78: 0xc060300  jal         func_180C00
label_1c2e7c:
    if (ctx->pc == 0x1C2E7Cu) {
        ctx->pc = 0x1C2E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2E78u;
        // 0x1c2e7c: 0x240b0080  addiu       $t3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2E80u;
        goto label_1c2e80;
    }
    ctx->pc = 0x1C2E78u;
    SET_GPR_U32(ctx, 31, 0x1C2E80u);
    ctx->pc = 0x1C2E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2E78u;
    // 0x1c2e7c: 0x240b0080  addiu       $t3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180C00u, 0x1C2E78u, 0x1C2E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2E80u;
label_1c2e80:
    // 0x1c2e80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c2e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c2e84:
    // 0x1c2e84: 0x26450040  addiu       $a1, $s2, 0x40
    ctx->pc = 0x1c2e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_1c2e88:
    // 0x1c2e88: 0xc08e93e  jal         func_23A4F8
label_1c2e8c:
    if (ctx->pc == 0x1C2E8Cu) {
        ctx->pc = 0x1C2E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2E88u;
        // 0x1c2e8c: 0x24066000  addiu       $a2, $zero, 0x6000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2E90u;
        goto label_1c2e90;
    }
    ctx->pc = 0x1C2E88u;
    SET_GPR_U32(ctx, 31, 0x1C2E90u);
    ctx->pc = 0x1C2E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2E88u;
    // 0x1c2e8c: 0x24066000  addiu       $a2, $zero, 0x6000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x1C2E90u;
label_1c2e90:
    // 0x1c2e90: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c2e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1c2e94:
    // 0x1c2e94: 0x2442f320  addiu       $v0, $v0, -0xCE0
    ctx->pc = 0x1c2e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964000));
label_1c2e98:
    // 0x1c2e98: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c2e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1c2e9c:
    // 0x1c2e9c: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x1c2e9cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c2ea0:
    // 0x1c2ea0: 0xc060668  jal         func_1819A0
label_1c2ea4:
    if (ctx->pc == 0x1C2EA4u) {
        ctx->pc = 0x1C2EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2EA0u;
        // 0x1c2ea4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2EA8u;
        goto label_1c2ea8;
    }
    ctx->pc = 0x1C2EA0u;
    SET_GPR_U32(ctx, 31, 0x1C2EA8u);
    ctx->pc = 0x1C2EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2EA0u;
    // 0x1c2ea4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1819A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1819A0u, 0x1C2EA0u, 0x1C2EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2EA8u;
label_1c2ea8:
    // 0x1c2ea8: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x1c2ea8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c2eac:
    // 0x1c2eac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c2eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c2eb0:
    // 0x1c2eb0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c2eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c2eb4:
    // 0x1c2eb4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c2eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c2eb8:
    // 0x1c2eb8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c2eb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2ebc:
    // 0x1c2ebc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c2ebcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2ec0:
    // 0x1c2ec0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c2ec0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2ec4:
    // 0x1c2ec4: 0xc060300  jal         func_180C00
label_1c2ec8:
    if (ctx->pc == 0x1C2EC8u) {
        ctx->pc = 0x1C2EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2EC4u;
        // 0x1c2ec8: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2ECCu;
        goto label_1c2ecc;
    }
    ctx->pc = 0x1C2EC4u;
    SET_GPR_U32(ctx, 31, 0x1C2ECCu);
    ctx->pc = 0x1C2EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2EC4u;
    // 0x1c2ec8: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180C00u, 0x1C2EC4u, 0x1C2ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2ECCu;
label_1c2ecc:
    // 0x1c2ecc: 0x26640080  addiu       $a0, $s3, 0x80
    ctx->pc = 0x1c2eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
label_1c2ed0:
    // 0x1c2ed0: 0x26456040  addiu       $a1, $s2, 0x6040
    ctx->pc = 0x1c2ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24640));
label_1c2ed4:
    // 0x1c2ed4: 0xc08e93e  jal         func_23A4F8
label_1c2ed8:
    if (ctx->pc == 0x1C2ED8u) {
        ctx->pc = 0x1C2ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2ED4u;
        // 0x1c2ed8: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2EDCu;
        goto label_1c2edc;
    }
    ctx->pc = 0x1C2ED4u;
    SET_GPR_U32(ctx, 31, 0x1C2EDCu);
    ctx->pc = 0x1C2ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2ED4u;
    // 0x1c2ed8: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x1C2EDCu;
label_1c2edc:
    // 0x1c2edc: 0xc070038  jal         func_1C00E0
label_1c2ee0:
    if (ctx->pc == 0x1C2EE0u) {
        ctx->pc = 0x1C2EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2EDCu;
        // 0x1c2ee0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2EE4u;
        goto label_1c2ee4;
    }
    ctx->pc = 0x1C2EDCu;
    SET_GPR_U32(ctx, 31, 0x1C2EE4u);
    ctx->pc = 0x1C2EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2EDCu;
    // 0x1c2ee0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1C2EE4u;
label_1c2ee4:
    // 0x1c2ee4: 0x0  nop
    ctx->pc = 0x1c2ee4u;
    // NOP
label_1c2ee8:
    // 0x1c2ee8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c2ee8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c2eec:
    // 0x1c2eec: 0x2a230083  slti        $v1, $s1, 0x83
    ctx->pc = 0x1c2eecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)131) ? 1 : 0);
label_1c2ef0:
    // 0x1c2ef0: 0x1460ffc7  bnez        $v1, . + 4 + (-0x39 << 2)
label_1c2ef4:
    if (ctx->pc == 0x1C2EF4u) {
        ctx->pc = 0x1C2EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2EF0u;
        // 0x1c2ef4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2EF8u;
        goto label_1c2ef8;
    }
    ctx->pc = 0x1C2EF0u;
    {
        const bool branch_taken_0x1c2ef0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2EF0u;
        // 0x1c2ef4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2ef0) {
            ctx->pc = 0x1C2E10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2e10;
        }
    }
    ctx->pc = 0x1C2EF8u;
label_1c2ef8:
    // 0x1c2ef8: 0x10000058  b           . + 4 + (0x58 << 2)
label_1c2efc:
    if (ctx->pc == 0x1C2EFCu) {
        ctx->pc = 0x1C2EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2EF8u;
        // 0x1c2efc: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2F00u;
        goto label_1c2f00;
    }
    ctx->pc = 0x1C2EF8u;
    {
        const bool branch_taken_0x1c2ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2EF8u;
        // 0x1c2efc: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2ef8) {
            ctx->pc = 0x1C305Cu;
            { ctx->pc = 0x1c305c; return; }
        }
    }
    ctx->pc = 0x1C2F00u;
label_1c2f00:
    // 0x1c2f00: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c2f00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2f04:
    // 0x1c2f04: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c2f04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2f08:
    // 0x1c2f08: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c2f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1c2f0c:
    // 0x1c2f0c: 0x2442f530  addiu       $v0, $v0, -0xAD0
    ctx->pc = 0x1c2f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964528));
label_1c2f10:
    // 0x1c2f10: 0x519021  addu        $s2, $v0, $s1
    ctx->pc = 0x1c2f10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1c2f14:
    // 0x1c2f14: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1c2f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c2f18:
    // 0x1c2f18: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1c2f1c:
    if (ctx->pc == 0x1C2F1Cu) {
        ctx->pc = 0x1C2F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2F18u;
        // 0x1c2f1c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2F20u;
        goto label_1c2f20;
    }
    ctx->pc = 0x1C2F18u;
    {
        const bool branch_taken_0x1c2f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2F18u;
        // 0x1c2f1c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2f18) {
            ctx->pc = 0x1C2F2Cu;
            goto label_1c2f2c;
        }
    }
    ctx->pc = 0x1C2F20u;
label_1c2f20:
    // 0x1c2f20: 0xc070080  jal         func_1C0200
label_1c2f24:
    if (ctx->pc == 0x1C2F24u) {
        ctx->pc = 0x1C2F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2F20u;
        // 0x1c2f24: 0x24056080  addiu       $a1, $zero, 0x6080 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2F28u;
        goto label_1c2f28;
    }
    ctx->pc = 0x1C2F20u;
    SET_GPR_U32(ctx, 31, 0x1C2F28u);
    ctx->pc = 0x1C2F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2F20u;
    // 0x1c2f24: 0x24056080  addiu       $a1, $zero, 0x6080 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1C2F28u;
label_1c2f28:
    // 0x1c2f28: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1c2f28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1c2f2c:
    // 0x1c2f2c: 0x0  nop
    ctx->pc = 0x1c2f2cu;
    // NOP
label_1c2f30:
    // 0x1c2f30: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x1c2f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_1c2f34:
    // 0x1c2f34: 0x2442f320  addiu       $v0, $v0, -0xCE0
    ctx->pc = 0x1c2f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964000));
label_1c2f38:
    // 0x1c2f38: 0x519021  addu        $s2, $v0, $s1
    ctx->pc = 0x1c2f38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1c2f3c:
    // 0x1c2f3c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1c2f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c2f40:
    // 0x1c2f40: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1c2f44:
    if (ctx->pc == 0x1C2F44u) {
        ctx->pc = 0x1C2F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2F40u;
        // 0x1c2f44: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2F48u;
        goto label_1c2f48;
    }
    ctx->pc = 0x1C2F40u;
    {
        const bool branch_taken_0x1c2f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2F40u;
        // 0x1c2f44: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2f40) {
            ctx->pc = 0x1C2F54u;
            goto label_1c2f54;
        }
    }
    ctx->pc = 0x1C2F48u;
label_1c2f48:
    // 0x1c2f48: 0xc070080  jal         func_1C0200
label_1c2f4c:
    if (ctx->pc == 0x1C2F4Cu) {
        ctx->pc = 0x1C2F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2F48u;
        // 0x1c2f4c: 0x24050480  addiu       $a1, $zero, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2F50u;
        goto label_1c2f50;
    }
    ctx->pc = 0x1C2F48u;
    SET_GPR_U32(ctx, 31, 0x1C2F50u);
    ctx->pc = 0x1C2F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2F48u;
    // 0x1c2f4c: 0x24050480  addiu       $a1, $zero, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1C2F50u;
label_1c2f50:
    // 0x1c2f50: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1c2f50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1c2f54:
    // 0x1c2f54: 0x0  nop
    ctx->pc = 0x1c2f54u;
    // NOP
label_1c2f58:
    // 0x1c2f58: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c2f58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c2f5c:
    // 0x1c2f5c: 0x2a020083  slti        $v0, $s0, 0x83
    ctx->pc = 0x1c2f5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)131) ? 1 : 0);
label_1c2f60:
    // 0x1c2f60: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_1c2f64:
    if (ctx->pc == 0x1C2F64u) {
        ctx->pc = 0x1C2F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2F60u;
        // 0x1c2f64: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2F68u;
        goto label_1c2f68;
    }
    ctx->pc = 0x1C2F60u;
    {
        const bool branch_taken_0x1c2f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2F60u;
        // 0x1c2f64: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2f60) {
            ctx->pc = 0x1C2F08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2f08;
        }
    }
    ctx->pc = 0x1C2F68u;
label_1c2f68:
    // 0x1c2f68: 0xc041738  jal         func_105CE0
label_1c2f6c:
    if (ctx->pc == 0x1C2F6Cu) {
        ctx->pc = 0x1C2F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2F68u;
        // 0x1c2f6c: 0x240405c5  addiu       $a0, $zero, 0x5C5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1477));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2F70u;
        goto label_1c2f70;
    }
    ctx->pc = 0x1C2F68u;
    SET_GPR_U32(ctx, 31, 0x1C2F70u);
    ctx->pc = 0x1C2F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2F68u;
    // 0x1c2f6c: 0x240405c5  addiu       $a0, $zero, 0x5C5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1477));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x1C2F68u, 0x1C2F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2F70u;
label_1c2f70:
    // 0x1c2f70: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x1c2f70u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_1c2f74:
    // 0x1c2f74: 0xc070080  jal         func_1C0200
    ctx->pc = 0x1c2f78u;
    return;
}

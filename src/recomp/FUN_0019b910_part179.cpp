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


void FUN_0019b910_part179(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1f27b0u: goto label_1f27b0;
        case 0x1f27b4u: goto label_1f27b4;
        case 0x1f27b8u: goto label_1f27b8;
        case 0x1f27bcu: goto label_1f27bc;
        case 0x1f27c0u: goto label_1f27c0;
        case 0x1f27c4u: goto label_1f27c4;
        case 0x1f27c8u: goto label_1f27c8;
        case 0x1f27ccu: goto label_1f27cc;
        case 0x1f27d0u: goto label_1f27d0;
        case 0x1f27d4u: goto label_1f27d4;
        case 0x1f27d8u: goto label_1f27d8;
        case 0x1f27dcu: goto label_1f27dc;
        case 0x1f27e0u: goto label_1f27e0;
        case 0x1f27e4u: goto label_1f27e4;
        case 0x1f27e8u: goto label_1f27e8;
        case 0x1f27ecu: goto label_1f27ec;
        case 0x1f27f0u: goto label_1f27f0;
        case 0x1f27f4u: goto label_1f27f4;
        case 0x1f27f8u: goto label_1f27f8;
        case 0x1f27fcu: goto label_1f27fc;
        case 0x1f2800u: goto label_1f2800;
        case 0x1f2804u: goto label_1f2804;
        case 0x1f2808u: goto label_1f2808;
        case 0x1f280cu: goto label_1f280c;
        case 0x1f2810u: goto label_1f2810;
        case 0x1f2814u: goto label_1f2814;
        case 0x1f2818u: goto label_1f2818;
        case 0x1f281cu: goto label_1f281c;
        case 0x1f2820u: goto label_1f2820;
        case 0x1f2824u: goto label_1f2824;
        case 0x1f2828u: goto label_1f2828;
        case 0x1f282cu: goto label_1f282c;
        case 0x1f2830u: goto label_1f2830;
        case 0x1f2834u: goto label_1f2834;
        case 0x1f2838u: goto label_1f2838;
        case 0x1f283cu: goto label_1f283c;
        case 0x1f2840u: goto label_1f2840;
        case 0x1f2844u: goto label_1f2844;
        case 0x1f2848u: goto label_1f2848;
        case 0x1f284cu: goto label_1f284c;
        case 0x1f2850u: goto label_1f2850;
        case 0x1f2854u: goto label_1f2854;
        case 0x1f2858u: goto label_1f2858;
        case 0x1f285cu: goto label_1f285c;
        case 0x1f2860u: goto label_1f2860;
        case 0x1f2864u: goto label_1f2864;
        case 0x1f2868u: goto label_1f2868;
        case 0x1f286cu: goto label_1f286c;
        case 0x1f2870u: goto label_1f2870;
        case 0x1f2874u: goto label_1f2874;
        case 0x1f2878u: goto label_1f2878;
        case 0x1f287cu: goto label_1f287c;
        case 0x1f2880u: goto label_1f2880;
        case 0x1f2884u: goto label_1f2884;
        case 0x1f2888u: goto label_1f2888;
        case 0x1f288cu: goto label_1f288c;
        case 0x1f2890u: goto label_1f2890;
        case 0x1f2894u: goto label_1f2894;
        case 0x1f2898u: goto label_1f2898;
        case 0x1f289cu: goto label_1f289c;
        case 0x1f28a0u: goto label_1f28a0;
        case 0x1f28a4u: goto label_1f28a4;
        case 0x1f28a8u: goto label_1f28a8;
        case 0x1f28acu: goto label_1f28ac;
        case 0x1f28b0u: goto label_1f28b0;
        case 0x1f28b4u: goto label_1f28b4;
        case 0x1f28b8u: goto label_1f28b8;
        case 0x1f28bcu: goto label_1f28bc;
        case 0x1f28c0u: goto label_1f28c0;
        case 0x1f28c4u: goto label_1f28c4;
        case 0x1f28c8u: goto label_1f28c8;
        case 0x1f28ccu: goto label_1f28cc;
        case 0x1f28d0u: goto label_1f28d0;
        case 0x1f28d4u: goto label_1f28d4;
        case 0x1f28d8u: goto label_1f28d8;
        case 0x1f28dcu: goto label_1f28dc;
        case 0x1f28e0u: goto label_1f28e0;
        case 0x1f28e4u: goto label_1f28e4;
        case 0x1f28e8u: goto label_1f28e8;
        case 0x1f28ecu: goto label_1f28ec;
        case 0x1f28f0u: goto label_1f28f0;
        case 0x1f28f4u: goto label_1f28f4;
        case 0x1f28f8u: goto label_1f28f8;
        case 0x1f28fcu: goto label_1f28fc;
        case 0x1f2900u: goto label_1f2900;
        case 0x1f2904u: goto label_1f2904;
        case 0x1f2908u: goto label_1f2908;
        case 0x1f290cu: goto label_1f290c;
        case 0x1f2910u: goto label_1f2910;
        case 0x1f2914u: goto label_1f2914;
        case 0x1f2918u: goto label_1f2918;
        case 0x1f291cu: goto label_1f291c;
        case 0x1f2920u: goto label_1f2920;
        case 0x1f2924u: goto label_1f2924;
        case 0x1f2928u: goto label_1f2928;
        case 0x1f292cu: goto label_1f292c;
        case 0x1f2930u: goto label_1f2930;
        case 0x1f2934u: goto label_1f2934;
        case 0x1f2938u: goto label_1f2938;
        case 0x1f293cu: goto label_1f293c;
        case 0x1f2940u: goto label_1f2940;
        case 0x1f2944u: goto label_1f2944;
        case 0x1f2948u: goto label_1f2948;
        case 0x1f294cu: goto label_1f294c;
        case 0x1f2950u: goto label_1f2950;
        case 0x1f2954u: goto label_1f2954;
        case 0x1f2958u: goto label_1f2958;
        case 0x1f295cu: goto label_1f295c;
        case 0x1f2960u: goto label_1f2960;
        case 0x1f2964u: goto label_1f2964;
        case 0x1f2968u: goto label_1f2968;
        case 0x1f296cu: goto label_1f296c;
        case 0x1f2970u: goto label_1f2970;
        case 0x1f2974u: goto label_1f2974;
        case 0x1f2978u: goto label_1f2978;
        case 0x1f297cu: goto label_1f297c;
        case 0x1f2980u: goto label_1f2980;
        case 0x1f2984u: goto label_1f2984;
        case 0x1f2988u: goto label_1f2988;
        case 0x1f298cu: goto label_1f298c;
        case 0x1f2990u: goto label_1f2990;
        case 0x1f2994u: goto label_1f2994;
        case 0x1f2998u: goto label_1f2998;
        case 0x1f299cu: goto label_1f299c;
        case 0x1f29a0u: goto label_1f29a0;
        case 0x1f29a4u: goto label_1f29a4;
        case 0x1f29a8u: goto label_1f29a8;
        case 0x1f29acu: goto label_1f29ac;
        case 0x1f29b0u: goto label_1f29b0;
        case 0x1f29b4u: goto label_1f29b4;
        case 0x1f29b8u: goto label_1f29b8;
        case 0x1f29bcu: goto label_1f29bc;
        case 0x1f29c0u: goto label_1f29c0;
        case 0x1f29c4u: goto label_1f29c4;
        case 0x1f29c8u: goto label_1f29c8;
        case 0x1f29ccu: goto label_1f29cc;
        case 0x1f29d0u: goto label_1f29d0;
        case 0x1f29d4u: goto label_1f29d4;
        case 0x1f29d8u: goto label_1f29d8;
        case 0x1f29dcu: goto label_1f29dc;
        case 0x1f29e0u: goto label_1f29e0;
        case 0x1f29e4u: goto label_1f29e4;
        case 0x1f29e8u: goto label_1f29e8;
        case 0x1f29ecu: goto label_1f29ec;
        case 0x1f29f0u: goto label_1f29f0;
        case 0x1f29f4u: goto label_1f29f4;
        case 0x1f29f8u: goto label_1f29f8;
        case 0x1f29fcu: goto label_1f29fc;
        case 0x1f2a00u: goto label_1f2a00;
        case 0x1f2a04u: goto label_1f2a04;
        case 0x1f2a08u: goto label_1f2a08;
        case 0x1f2a0cu: goto label_1f2a0c;
        case 0x1f2a10u: goto label_1f2a10;
        case 0x1f2a14u: goto label_1f2a14;
        case 0x1f2a18u: goto label_1f2a18;
        case 0x1f2a1cu: goto label_1f2a1c;
        case 0x1f2a20u: goto label_1f2a20;
        case 0x1f2a24u: goto label_1f2a24;
        case 0x1f2a28u: goto label_1f2a28;
        case 0x1f2a2cu: goto label_1f2a2c;
        case 0x1f2a30u: goto label_1f2a30;
        case 0x1f2a34u: goto label_1f2a34;
        case 0x1f2a38u: goto label_1f2a38;
        case 0x1f2a3cu: goto label_1f2a3c;
        case 0x1f2a40u: goto label_1f2a40;
        case 0x1f2a44u: goto label_1f2a44;
        case 0x1f2a48u: goto label_1f2a48;
        case 0x1f2a4cu: goto label_1f2a4c;
        case 0x1f2a50u: goto label_1f2a50;
        case 0x1f2a54u: goto label_1f2a54;
        case 0x1f2a58u: goto label_1f2a58;
        case 0x1f2a5cu: goto label_1f2a5c;
        case 0x1f2a60u: goto label_1f2a60;
        case 0x1f2a64u: goto label_1f2a64;
        case 0x1f2a68u: goto label_1f2a68;
        case 0x1f2a6cu: goto label_1f2a6c;
        case 0x1f2a70u: goto label_1f2a70;
        case 0x1f2a74u: goto label_1f2a74;
        case 0x1f2a78u: goto label_1f2a78;
        case 0x1f2a7cu: goto label_1f2a7c;
        case 0x1f2a80u: goto label_1f2a80;
        case 0x1f2a84u: goto label_1f2a84;
        case 0x1f2a88u: goto label_1f2a88;
        case 0x1f2a8cu: goto label_1f2a8c;
        case 0x1f2a90u: goto label_1f2a90;
        case 0x1f2a94u: goto label_1f2a94;
        case 0x1f2a98u: goto label_1f2a98;
        case 0x1f2a9cu: goto label_1f2a9c;
        case 0x1f2aa0u: goto label_1f2aa0;
        case 0x1f2aa4u: goto label_1f2aa4;
        case 0x1f2aa8u: goto label_1f2aa8;
        case 0x1f2aacu: goto label_1f2aac;
        case 0x1f2ab0u: goto label_1f2ab0;
        case 0x1f2ab4u: goto label_1f2ab4;
        case 0x1f2ab8u: goto label_1f2ab8;
        case 0x1f2abcu: goto label_1f2abc;
        case 0x1f2ac0u: goto label_1f2ac0;
        case 0x1f2ac4u: goto label_1f2ac4;
        case 0x1f2ac8u: goto label_1f2ac8;
        case 0x1f2accu: goto label_1f2acc;
        case 0x1f2ad0u: goto label_1f2ad0;
        case 0x1f2ad4u: goto label_1f2ad4;
        case 0x1f2ad8u: goto label_1f2ad8;
        case 0x1f2adcu: goto label_1f2adc;
        case 0x1f2ae0u: goto label_1f2ae0;
        case 0x1f2ae4u: goto label_1f2ae4;
        case 0x1f2ae8u: goto label_1f2ae8;
        case 0x1f2aecu: goto label_1f2aec;
        case 0x1f2af0u: goto label_1f2af0;
        case 0x1f2af4u: goto label_1f2af4;
        case 0x1f2af8u: goto label_1f2af8;
        case 0x1f2afcu: goto label_1f2afc;
        case 0x1f2b00u: goto label_1f2b00;
        case 0x1f2b04u: goto label_1f2b04;
        case 0x1f2b08u: goto label_1f2b08;
        case 0x1f2b0cu: goto label_1f2b0c;
        case 0x1f2b10u: goto label_1f2b10;
        case 0x1f2b14u: goto label_1f2b14;
        case 0x1f2b18u: goto label_1f2b18;
        case 0x1f2b1cu: goto label_1f2b1c;
        case 0x1f2b20u: goto label_1f2b20;
        case 0x1f2b24u: goto label_1f2b24;
        case 0x1f2b28u: goto label_1f2b28;
        case 0x1f2b2cu: goto label_1f2b2c;
        case 0x1f2b30u: goto label_1f2b30;
        case 0x1f2b34u: goto label_1f2b34;
        case 0x1f2b38u: goto label_1f2b38;
        case 0x1f2b3cu: goto label_1f2b3c;
        case 0x1f2b40u: goto label_1f2b40;
        case 0x1f2b44u: goto label_1f2b44;
        case 0x1f2b48u: goto label_1f2b48;
        case 0x1f2b4cu: goto label_1f2b4c;
        case 0x1f2b50u: goto label_1f2b50;
        case 0x1f2b54u: goto label_1f2b54;
        case 0x1f2b58u: goto label_1f2b58;
        case 0x1f2b5cu: goto label_1f2b5c;
        case 0x1f2b60u: goto label_1f2b60;
        case 0x1f2b64u: goto label_1f2b64;
        case 0x1f2b68u: goto label_1f2b68;
        case 0x1f2b6cu: goto label_1f2b6c;
        case 0x1f2b70u: goto label_1f2b70;
        case 0x1f2b74u: goto label_1f2b74;
        case 0x1f2b78u: goto label_1f2b78;
        case 0x1f2b7cu: goto label_1f2b7c;
        case 0x1f2b80u: goto label_1f2b80;
        case 0x1f2b84u: goto label_1f2b84;
        case 0x1f2b88u: goto label_1f2b88;
        case 0x1f2b8cu: goto label_1f2b8c;
        case 0x1f2b90u: goto label_1f2b90;
        case 0x1f2b94u: goto label_1f2b94;
        case 0x1f2b98u: goto label_1f2b98;
        case 0x1f2b9cu: goto label_1f2b9c;
        case 0x1f2ba0u: goto label_1f2ba0;
        case 0x1f2ba4u: goto label_1f2ba4;
        case 0x1f2ba8u: goto label_1f2ba8;
        case 0x1f2bacu: goto label_1f2bac;
        case 0x1f2bb0u: goto label_1f2bb0;
        case 0x1f2bb4u: goto label_1f2bb4;
        case 0x1f2bb8u: goto label_1f2bb8;
        case 0x1f2bbcu: goto label_1f2bbc;
        case 0x1f2bc0u: goto label_1f2bc0;
        case 0x1f2bc4u: goto label_1f2bc4;
        case 0x1f2bc8u: goto label_1f2bc8;
        case 0x1f2bccu: goto label_1f2bcc;
        case 0x1f2bd0u: goto label_1f2bd0;
        case 0x1f2bd4u: goto label_1f2bd4;
        case 0x1f2bd8u: goto label_1f2bd8;
        case 0x1f2bdcu: goto label_1f2bdc;
        case 0x1f2be0u: goto label_1f2be0;
        case 0x1f2be4u: goto label_1f2be4;
        case 0x1f2be8u: goto label_1f2be8;
        case 0x1f2becu: goto label_1f2bec;
        case 0x1f2bf0u: goto label_1f2bf0;
        case 0x1f2bf4u: goto label_1f2bf4;
        case 0x1f2bf8u: goto label_1f2bf8;
        case 0x1f2bfcu: goto label_1f2bfc;
        case 0x1f2c00u: goto label_1f2c00;
        case 0x1f2c04u: goto label_1f2c04;
        case 0x1f2c08u: goto label_1f2c08;
        case 0x1f2c0cu: goto label_1f2c0c;
        case 0x1f2c10u: goto label_1f2c10;
        case 0x1f2c14u: goto label_1f2c14;
        case 0x1f2c18u: goto label_1f2c18;
        case 0x1f2c1cu: goto label_1f2c1c;
        case 0x1f2c20u: goto label_1f2c20;
        case 0x1f2c24u: goto label_1f2c24;
        case 0x1f2c28u: goto label_1f2c28;
        case 0x1f2c2cu: goto label_1f2c2c;
        case 0x1f2c30u: goto label_1f2c30;
        case 0x1f2c34u: goto label_1f2c34;
        case 0x1f2c38u: goto label_1f2c38;
        case 0x1f2c3cu: goto label_1f2c3c;
        case 0x1f2c40u: goto label_1f2c40;
        case 0x1f2c44u: goto label_1f2c44;
        case 0x1f2c48u: goto label_1f2c48;
        case 0x1f2c4cu: goto label_1f2c4c;
        case 0x1f2c50u: goto label_1f2c50;
        case 0x1f2c54u: goto label_1f2c54;
        case 0x1f2c58u: goto label_1f2c58;
        case 0x1f2c5cu: goto label_1f2c5c;
        case 0x1f2c60u: goto label_1f2c60;
        case 0x1f2c64u: goto label_1f2c64;
        case 0x1f2c68u: goto label_1f2c68;
        case 0x1f2c6cu: goto label_1f2c6c;
        case 0x1f2c70u: goto label_1f2c70;
        case 0x1f2c74u: goto label_1f2c74;
        case 0x1f2c78u: goto label_1f2c78;
        case 0x1f2c7cu: goto label_1f2c7c;
        case 0x1f2c80u: goto label_1f2c80;
        case 0x1f2c84u: goto label_1f2c84;
        case 0x1f2c88u: goto label_1f2c88;
        case 0x1f2c8cu: goto label_1f2c8c;
        case 0x1f2c90u: goto label_1f2c90;
        case 0x1f2c94u: goto label_1f2c94;
        case 0x1f2c98u: goto label_1f2c98;
        case 0x1f2c9cu: goto label_1f2c9c;
        case 0x1f2ca0u: goto label_1f2ca0;
        case 0x1f2ca4u: goto label_1f2ca4;
        case 0x1f2ca8u: goto label_1f2ca8;
        case 0x1f2cacu: goto label_1f2cac;
        case 0x1f2cb0u: goto label_1f2cb0;
        case 0x1f2cb4u: goto label_1f2cb4;
        case 0x1f2cb8u: goto label_1f2cb8;
        case 0x1f2cbcu: goto label_1f2cbc;
        case 0x1f2cc0u: goto label_1f2cc0;
        case 0x1f2cc4u: goto label_1f2cc4;
        case 0x1f2cc8u: goto label_1f2cc8;
        case 0x1f2cccu: goto label_1f2ccc;
        case 0x1f2cd0u: goto label_1f2cd0;
        case 0x1f2cd4u: goto label_1f2cd4;
        case 0x1f2cd8u: goto label_1f2cd8;
        case 0x1f2cdcu: goto label_1f2cdc;
        case 0x1f2ce0u: goto label_1f2ce0;
        case 0x1f2ce4u: goto label_1f2ce4;
        case 0x1f2ce8u: goto label_1f2ce8;
        case 0x1f2cecu: goto label_1f2cec;
        case 0x1f2cf0u: goto label_1f2cf0;
        case 0x1f2cf4u: goto label_1f2cf4;
        case 0x1f2cf8u: goto label_1f2cf8;
        case 0x1f2cfcu: goto label_1f2cfc;
        case 0x1f2d00u: goto label_1f2d00;
        case 0x1f2d04u: goto label_1f2d04;
        case 0x1f2d08u: goto label_1f2d08;
        case 0x1f2d0cu: goto label_1f2d0c;
        case 0x1f2d10u: goto label_1f2d10;
        case 0x1f2d14u: goto label_1f2d14;
        case 0x1f2d18u: goto label_1f2d18;
        case 0x1f2d1cu: goto label_1f2d1c;
        case 0x1f2d20u: goto label_1f2d20;
        case 0x1f2d24u: goto label_1f2d24;
        case 0x1f2d28u: goto label_1f2d28;
        case 0x1f2d2cu: goto label_1f2d2c;
        case 0x1f2d30u: goto label_1f2d30;
        case 0x1f2d34u: goto label_1f2d34;
        case 0x1f2d38u: goto label_1f2d38;
        case 0x1f2d3cu: goto label_1f2d3c;
        case 0x1f2d40u: goto label_1f2d40;
        case 0x1f2d44u: goto label_1f2d44;
        case 0x1f2d48u: goto label_1f2d48;
        case 0x1f2d4cu: goto label_1f2d4c;
        case 0x1f2d50u: goto label_1f2d50;
        case 0x1f2d54u: goto label_1f2d54;
        case 0x1f2d58u: goto label_1f2d58;
        case 0x1f2d5cu: goto label_1f2d5c;
        case 0x1f2d60u: goto label_1f2d60;
        case 0x1f2d64u: goto label_1f2d64;
        case 0x1f2d68u: goto label_1f2d68;
        case 0x1f2d6cu: goto label_1f2d6c;
        case 0x1f2d70u: goto label_1f2d70;
        case 0x1f2d74u: goto label_1f2d74;
        case 0x1f2d78u: goto label_1f2d78;
        case 0x1f2d7cu: goto label_1f2d7c;
        case 0x1f2d80u: goto label_1f2d80;
        case 0x1f2d84u: goto label_1f2d84;
        case 0x1f2d88u: goto label_1f2d88;
        case 0x1f2d8cu: goto label_1f2d8c;
        case 0x1f2d90u: goto label_1f2d90;
        case 0x1f2d94u: goto label_1f2d94;
        case 0x1f2d98u: goto label_1f2d98;
        case 0x1f2d9cu: goto label_1f2d9c;
        case 0x1f2da0u: goto label_1f2da0;
        case 0x1f2da4u: goto label_1f2da4;
        case 0x1f2da8u: goto label_1f2da8;
        case 0x1f2dacu: goto label_1f2dac;
        case 0x1f2db0u: goto label_1f2db0;
        case 0x1f2db4u: goto label_1f2db4;
        case 0x1f2db8u: goto label_1f2db8;
        case 0x1f2dbcu: goto label_1f2dbc;
        case 0x1f2dc0u: goto label_1f2dc0;
        case 0x1f2dc4u: goto label_1f2dc4;
        case 0x1f2dc8u: goto label_1f2dc8;
        case 0x1f2dccu: goto label_1f2dcc;
        case 0x1f2dd0u: goto label_1f2dd0;
        case 0x1f2dd4u: goto label_1f2dd4;
        case 0x1f2dd8u: goto label_1f2dd8;
        case 0x1f2ddcu: goto label_1f2ddc;
        case 0x1f2de0u: goto label_1f2de0;
        case 0x1f2de4u: goto label_1f2de4;
        case 0x1f2de8u: goto label_1f2de8;
        case 0x1f2decu: goto label_1f2dec;
        case 0x1f2df0u: goto label_1f2df0;
        case 0x1f2df4u: goto label_1f2df4;
        case 0x1f2df8u: goto label_1f2df8;
        case 0x1f2dfcu: goto label_1f2dfc;
        case 0x1f2e00u: goto label_1f2e00;
        case 0x1f2e04u: goto label_1f2e04;
        case 0x1f2e08u: goto label_1f2e08;
        case 0x1f2e0cu: goto label_1f2e0c;
        case 0x1f2e10u: goto label_1f2e10;
        case 0x1f2e14u: goto label_1f2e14;
        case 0x1f2e18u: goto label_1f2e18;
        case 0x1f2e1cu: goto label_1f2e1c;
        case 0x1f2e20u: goto label_1f2e20;
        case 0x1f2e24u: goto label_1f2e24;
        case 0x1f2e28u: goto label_1f2e28;
        case 0x1f2e2cu: goto label_1f2e2c;
        case 0x1f2e30u: goto label_1f2e30;
        case 0x1f2e34u: goto label_1f2e34;
        case 0x1f2e38u: goto label_1f2e38;
        case 0x1f2e3cu: goto label_1f2e3c;
        case 0x1f2e40u: goto label_1f2e40;
        case 0x1f2e44u: goto label_1f2e44;
        case 0x1f2e48u: goto label_1f2e48;
        case 0x1f2e4cu: goto label_1f2e4c;
        case 0x1f2e50u: goto label_1f2e50;
        case 0x1f2e54u: goto label_1f2e54;
        case 0x1f2e58u: goto label_1f2e58;
        case 0x1f2e5cu: goto label_1f2e5c;
        case 0x1f2e60u: goto label_1f2e60;
        case 0x1f2e64u: goto label_1f2e64;
        case 0x1f2e68u: goto label_1f2e68;
        case 0x1f2e6cu: goto label_1f2e6c;
        case 0x1f2e70u: goto label_1f2e70;
        case 0x1f2e74u: goto label_1f2e74;
        case 0x1f2e78u: goto label_1f2e78;
        case 0x1f2e7cu: goto label_1f2e7c;
        case 0x1f2e80u: goto label_1f2e80;
        case 0x1f2e84u: goto label_1f2e84;
        case 0x1f2e88u: goto label_1f2e88;
        case 0x1f2e8cu: goto label_1f2e8c;
        case 0x1f2e90u: goto label_1f2e90;
        case 0x1f2e94u: goto label_1f2e94;
        case 0x1f2e98u: goto label_1f2e98;
        case 0x1f2e9cu: goto label_1f2e9c;
        case 0x1f2ea0u: goto label_1f2ea0;
        case 0x1f2ea4u: goto label_1f2ea4;
        case 0x1f2ea8u: goto label_1f2ea8;
        case 0x1f2eacu: goto label_1f2eac;
        case 0x1f2eb0u: goto label_1f2eb0;
        case 0x1f2eb4u: goto label_1f2eb4;
        case 0x1f2eb8u: goto label_1f2eb8;
        case 0x1f2ebcu: goto label_1f2ebc;
        case 0x1f2ec0u: goto label_1f2ec0;
        case 0x1f2ec4u: goto label_1f2ec4;
        case 0x1f2ec8u: goto label_1f2ec8;
        case 0x1f2eccu: goto label_1f2ecc;
        case 0x1f2ed0u: goto label_1f2ed0;
        case 0x1f2ed4u: goto label_1f2ed4;
        case 0x1f2ed8u: goto label_1f2ed8;
        case 0x1f2edcu: goto label_1f2edc;
        case 0x1f2ee0u: goto label_1f2ee0;
        case 0x1f2ee4u: goto label_1f2ee4;
        case 0x1f2ee8u: goto label_1f2ee8;
        case 0x1f2eecu: goto label_1f2eec;
        case 0x1f2ef0u: goto label_1f2ef0;
        case 0x1f2ef4u: goto label_1f2ef4;
        case 0x1f2ef8u: goto label_1f2ef8;
        case 0x1f2efcu: goto label_1f2efc;
        case 0x1f2f00u: goto label_1f2f00;
        case 0x1f2f04u: goto label_1f2f04;
        case 0x1f2f08u: goto label_1f2f08;
        case 0x1f2f0cu: goto label_1f2f0c;
        case 0x1f2f10u: goto label_1f2f10;
        case 0x1f2f14u: goto label_1f2f14;
        case 0x1f2f18u: goto label_1f2f18;
        case 0x1f2f1cu: goto label_1f2f1c;
        case 0x1f2f20u: goto label_1f2f20;
        case 0x1f2f24u: goto label_1f2f24;
        case 0x1f2f28u: goto label_1f2f28;
        case 0x1f2f2cu: goto label_1f2f2c;
        case 0x1f2f30u: goto label_1f2f30;
        case 0x1f2f34u: goto label_1f2f34;
        case 0x1f2f38u: goto label_1f2f38;
        case 0x1f2f3cu: goto label_1f2f3c;
        case 0x1f2f40u: goto label_1f2f40;
        case 0x1f2f44u: goto label_1f2f44;
        case 0x1f2f48u: goto label_1f2f48;
        case 0x1f2f4cu: goto label_1f2f4c;
        case 0x1f2f50u: goto label_1f2f50;
        case 0x1f2f54u: goto label_1f2f54;
        case 0x1f2f58u: goto label_1f2f58;
        case 0x1f2f5cu: goto label_1f2f5c;
        case 0x1f2f60u: goto label_1f2f60;
        case 0x1f2f64u: goto label_1f2f64;
        case 0x1f2f68u: goto label_1f2f68;
        case 0x1f2f6cu: goto label_1f2f6c;
        case 0x1f2f70u: goto label_1f2f70;
        case 0x1f2f74u: goto label_1f2f74;
        case 0x1f2f78u: goto label_1f2f78;
        case 0x1f2f7cu: goto label_1f2f7c;
        default: return;
    }

label_1f27b0:
    // 0x1f27b0: 0x2674821  addu        $t1, $s3, $a3
    ctx->pc = 0x1f27b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
label_1f27b4:
    // 0x1f27b4: 0x8d270000  lw          $a3, 0x0($t1)
    ctx->pc = 0x1f27b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_1f27b8:
    // 0x1f27b8: 0x94e8000a  lhu         $t0, 0xA($a3)
    ctx->pc = 0x1f27b8u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_1f27bc:
    // 0x1f27bc: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x1f27bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_1f27c0:
    // 0x1f27c0: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x1f27c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1f27c4:
    // 0x1f27c4: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x1f27c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1f27c8:
    // 0x1f27c8: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x1f27c8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1f27cc:
    // 0x1f27cc: 0xaf868f98  sw          $a2, -0x7068($gp)
    ctx->pc = 0x1f27ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938520), GPR_U32(ctx, 6));
label_1f27d0:
    // 0x1f27d0: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x1f27d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_1f27d4:
    // 0x1f27d4: 0x94c7000a  lhu         $a3, 0xA($a2)
    ctx->pc = 0x1f27d4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
label_1f27d8:
    // 0x1f27d8: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x1f27d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1f27dc:
    // 0x1f27dc: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x1f27dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_1f27e0:
    // 0x1f27e0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1f27e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1f27e4:
    // 0x1f27e4: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x1f27e4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1f27e8:
    // 0x1f27e8: 0xaf858f94  sw          $a1, -0x706C($gp)
    ctx->pc = 0x1f27e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938516), GPR_U32(ctx, 5));
label_1f27ec:
    // 0x1f27ec: 0x84630232  lh          $v1, 0x232($v1)
    ctx->pc = 0x1f27ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 562)));
label_1f27f0:
    // 0x1f27f0: 0x830018  mult        $zero, $a0, $v1
    ctx->pc = 0x1f27f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1f27f4:
    // 0x1f27f4: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x1f27f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1f27f8:
    // 0x1f27f8: 0x0  nop
    ctx->pc = 0x1f27f8u;
    // NOP
label_1f27fc:
    // 0x1f27fc: 0x1810  mfhi        $v1
    ctx->pc = 0x1f27fcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1f2800:
    // 0x1f2800: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x1f2800u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_1f2804:
    // 0x1f2804: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f2804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f2808:
    // 0x1f2808: 0xaf838f8c  sw          $v1, -0x7074($gp)
    ctx->pc = 0x1f2808u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938508), GPR_U32(ctx, 3));
label_1f280c:
    // 0x1f280c: 0x8f838f8c  lw          $v1, -0x7074($gp)
    ctx->pc = 0x1f280cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938508)));
label_1f2810:
    // 0x1f2810: 0x28610009  slti        $at, $v1, 0x9
    ctx->pc = 0x1f2810u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_1f2814:
    // 0x1f2814: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1f2818:
    if (ctx->pc == 0x1F2818u) {
        ctx->pc = 0x1F281Cu;
        goto label_1f281c;
    }
    ctx->pc = 0x1F2814u;
    {
        const bool branch_taken_0x1f2814 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2814) {
            ctx->pc = 0x1F2820u;
            goto label_1f2820;
        }
    }
    ctx->pc = 0x1F281Cu;
label_1f281c:
    // 0x1f281c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1f281cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1f2820:
    // 0x1f2820: 0xaf838f8c  sw          $v1, -0x7074($gp)
    ctx->pc = 0x1f2820u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938508), GPR_U32(ctx, 3));
label_1f2824:
    // 0x1f2824: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f2824u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2828:
    // 0x1f2828: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f2828u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f282c:
    // 0x1f282c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f282cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2830:
    // 0x1f2830: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1f2830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f2834:
    // 0x1f2834: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f2834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f2838:
    // 0x1f2838: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f2838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f283c:
    // 0x1f283c: 0x2695021  addu        $t2, $s3, $t1
    ctx->pc = 0x1f283cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 9)));
label_1f2840:
    // 0x1f2840: 0x9143003e  lbu         $v1, 0x3E($t2)
    ctx->pc = 0x1f2840u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 62)));
label_1f2844:
    // 0x1f2844: 0x1470000b  bne         $v1, $s0, . + 4 + (0xB << 2)
label_1f2848:
    if (ctx->pc == 0x1F2848u) {
        ctx->pc = 0x1F284Cu;
        goto label_1f284c;
    }
    ctx->pc = 0x1F2844u;
    {
        const bool branch_taken_0x1f2844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x1f2844) {
            ctx->pc = 0x1F2874u;
            goto label_1f2874;
        }
    }
    ctx->pc = 0x1F284Cu;
label_1f284c:
    // 0x1f284c: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x1f284cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1f2850:
    // 0x1f2850: 0x90630015  lbu         $v1, 0x15($v1)
    ctx->pc = 0x1f2850u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 21)));
label_1f2854:
    // 0x1f2854: 0x10660007  beq         $v1, $a2, . + 4 + (0x7 << 2)
label_1f2858:
    if (ctx->pc == 0x1F2858u) {
        ctx->pc = 0x1F285Cu;
        goto label_1f285c;
    }
    ctx->pc = 0x1F2854u;
    {
        const bool branch_taken_0x1f2854 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x1f2854) {
            ctx->pc = 0x1F2874u;
            goto label_1f2874;
        }
    }
    ctx->pc = 0x1F285Cu;
label_1f285c:
    // 0x1f285c: 0x10650005  beq         $v1, $a1, . + 4 + (0x5 << 2)
label_1f2860:
    if (ctx->pc == 0x1F2860u) {
        ctx->pc = 0x1F2864u;
        goto label_1f2864;
    }
    ctx->pc = 0x1F285Cu;
    {
        const bool branch_taken_0x1f285c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1f285c) {
            ctx->pc = 0x1F2874u;
            goto label_1f2874;
        }
    }
    ctx->pc = 0x1F2864u;
label_1f2864:
    // 0x1f2864: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
label_1f2868:
    if (ctx->pc == 0x1F2868u) {
        ctx->pc = 0x1F286Cu;
        goto label_1f286c;
    }
    ctx->pc = 0x1F2864u;
    {
        const bool branch_taken_0x1f2864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1f2864) {
            ctx->pc = 0x1F2874u;
            goto label_1f2874;
        }
    }
    ctx->pc = 0x1F286Cu;
label_1f286c:
    // 0x1f286c: 0x9143002a  lbu         $v1, 0x2A($t2)
    ctx->pc = 0x1f286cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 42)));
label_1f2870:
    // 0x1f2870: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x1f2870u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_1f2874:
    // 0x1f2874: 0x0  nop
    ctx->pc = 0x1f2874u;
    // NOP
label_1f2878:
    // 0x1f2878: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1f2878u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1f287c:
    // 0x1f287c: 0x28e300ff  slti        $v1, $a3, 0xFF
    ctx->pc = 0x1f287cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)255) ? 1 : 0);
label_1f2880:
    // 0x1f2880: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
label_1f2884:
    if (ctx->pc == 0x1F2884u) {
        ctx->pc = 0x1F2884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2880u;
        // 0x1f2884: 0x25290048  addiu       $t1, $t1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2888u;
        goto label_1f2888;
    }
    ctx->pc = 0x1F2880u;
    {
        const bool branch_taken_0x1f2880 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2880u;
        // 0x1f2884: 0x25290048  addiu       $t1, $t1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2880) {
            ctx->pc = 0x1F283Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f283c;
        }
    }
    ctx->pc = 0x1F2888u;
label_1f2888:
    // 0x1f2888: 0x29010101  slti        $at, $t0, 0x101
    ctx->pc = 0x1f2888u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)257) ? 1 : 0);
label_1f288c:
    // 0x1f288c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1f2890:
    if (ctx->pc == 0x1F2890u) {
        ctx->pc = 0x1F2894u;
        goto label_1f2894;
    }
    ctx->pc = 0x1F288Cu;
    {
        const bool branch_taken_0x1f288c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f288c) {
            ctx->pc = 0x1F2898u;
            goto label_1f2898;
        }
    }
    ctx->pc = 0x1F2894u;
label_1f2894:
    // 0x1f2894: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f2894u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1f2898:
    // 0x1f2898: 0xaf888f88  sw          $t0, -0x7078($gp)
    ctx->pc = 0x1f2898u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938504), GPR_U32(ctx, 8));
label_1f289c:
    // 0x1f289c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1f289cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f28a0:
    // 0x1f28a0: 0xaf808f90  sw          $zero, -0x7070($gp)
    ctx->pc = 0x1f28a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938512), GPR_U32(ctx, 0));
label_1f28a4:
    // 0x1f28a4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f28a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f28a8:
    // 0x1f28a8: 0x12b10024  beq         $s5, $s1, . + 4 + (0x24 << 2)
label_1f28ac:
    if (ctx->pc == 0x1F28ACu) {
        ctx->pc = 0x1F28ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F28A8u;
        // 0x1f28ac: 0x272a021  addu        $s4, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F28B0u;
        goto label_1f28b0;
    }
    ctx->pc = 0x1F28A8u;
    {
        const bool branch_taken_0x1f28a8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 17));
        ctx->pc = 0x1F28ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F28A8u;
        // 0x1f28ac: 0x272a021  addu        $s4, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f28a8) {
            ctx->pc = 0x1F293Cu;
            goto label_1f293c;
        }
    }
    ctx->pc = 0x1F28B0u;
label_1f28b0:
    // 0x1f28b0: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1f28b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1f28b4:
    // 0x1f28b4: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x1f28b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
label_1f28b8:
    // 0x1f28b8: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x1f28b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_1f28bc:
    // 0x1f28bc: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
label_1f28c0:
    if (ctx->pc == 0x1F28C0u) {
        ctx->pc = 0x1F28C4u;
        goto label_1f28c4;
    }
    ctx->pc = 0x1F28BCu;
    {
        const bool branch_taken_0x1f28bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f28bc) {
            ctx->pc = 0x1F293Cu;
            goto label_1f293c;
        }
    }
    ctx->pc = 0x1F28C4u;
label_1f28c4:
    // 0x1f28c4: 0x9283003e  lbu         $v1, 0x3E($s4)
    ctx->pc = 0x1f28c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 62)));
label_1f28c8:
    // 0x1f28c8: 0x1470001c  bne         $v1, $s0, . + 4 + (0x1C << 2)
label_1f28cc:
    if (ctx->pc == 0x1F28CCu) {
        ctx->pc = 0x1F28CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F28C8u;
        // 0x1f28cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F28D0u;
        goto label_1f28d0;
    }
    ctx->pc = 0x1F28C8u;
    {
        const bool branch_taken_0x1f28c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x1F28CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F28C8u;
        // 0x1f28cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f28c8) {
            ctx->pc = 0x1F293Cu;
            goto label_1f293c;
        }
    }
    ctx->pc = 0x1F28D0u;
label_1f28d0:
    // 0x1f28d0: 0xc0448bc  jal         func_1122F0
label_1f28d4:
    if (ctx->pc == 0x1F28D4u) {
        ctx->pc = 0x1F28D8u;
        goto label_1f28d8;
    }
    ctx->pc = 0x1F28D0u;
    SET_GPR_U32(ctx, 31, 0x1F28D8u);
    ctx->pc = 0x1122F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1122F0u, 0x1F28D0u, 0x1F28D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F28D8u;
label_1f28d8:
    // 0x1f28d8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1f28dc:
    if (ctx->pc == 0x1F28DCu) {
        ctx->pc = 0x1F28E0u;
        goto label_1f28e0;
    }
    ctx->pc = 0x1F28D8u;
    {
        const bool branch_taken_0x1f28d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f28d8) {
            ctx->pc = 0x1F293Cu;
            goto label_1f293c;
        }
    }
    ctx->pc = 0x1F28E0u;
label_1f28e0:
    // 0x1f28e0: 0x8f838f90  lw          $v1, -0x7070($gp)
    ctx->pc = 0x1f28e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938512)));
label_1f28e4:
    // 0x1f28e4: 0x28630008  slti        $v1, $v1, 0x8
    ctx->pc = 0x1f28e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_1f28e8:
    // 0x1f28e8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_1f28ec:
    if (ctx->pc == 0x1F28ECu) {
        ctx->pc = 0x1F28ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F28E8u;
        // 0x1f28ec: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F28F0u;
        goto label_1f28f0;
    }
    ctx->pc = 0x1F28E8u;
    {
        const bool branch_taken_0x1f28e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F28ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F28E8u;
        // 0x1f28ec: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f28e8) {
            ctx->pc = 0x1F28F4u;
            goto label_1f28f4;
        }
    }
    ctx->pc = 0x1F28F0u;
label_1f28f0:
    // 0x1f28f0: 0xaf838f90  sw          $v1, -0x7070($gp)
    ctx->pc = 0x1f28f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938512), GPR_U32(ctx, 3));
label_1f28f4:
    // 0x1f28f4: 0x0  nop
    ctx->pc = 0x1f28f4u;
    // NOP
label_1f28f8:
    // 0x1f28f8: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x1f28f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1f28fc:
    // 0x1f28fc: 0x8f848f90  lw          $a0, -0x7070($gp)
    ctx->pc = 0x1f28fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938512)));
label_1f2900:
    // 0x1f2900: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x1f2900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
label_1f2904:
    // 0x1f2904: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1f2904u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_1f2908:
    // 0x1f2908: 0x24639ce0  addiu       $v1, $v1, -0x6320
    ctx->pc = 0x1f2908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941920));
label_1f290c:
    // 0x1f290c: 0x24a53b80  addiu       $a1, $a1, 0x3B80
    ctx->pc = 0x1f290cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15232));
label_1f2910:
    // 0x1f2910: 0x94c6000a  lhu         $a2, 0xA($a2)
    ctx->pc = 0x1f2910u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
label_1f2914:
    // 0x1f2914: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1f2914u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1f2918:
    // 0x1f2918: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f2918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f291c:
    // 0x1f291c: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x1f291cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1f2920:
    // 0x1f2920: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x1f2920u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1f2924:
    // 0x1f2924: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1f2924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1f2928:
    // 0x1f2928: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x1f2928u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1f292c:
    // 0x1f292c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1f292cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1f2930:
    // 0x1f2930: 0x8f838f90  lw          $v1, -0x7070($gp)
    ctx->pc = 0x1f2930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938512)));
label_1f2934:
    // 0x1f2934: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f2934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1f2938:
    // 0x1f2938: 0xaf838f90  sw          $v1, -0x7070($gp)
    ctx->pc = 0x1f2938u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938512), GPR_U32(ctx, 3));
label_1f293c:
    // 0x1f293c: 0x0  nop
    ctx->pc = 0x1f293cu;
    // NOP
label_1f2940:
    // 0x1f2940: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1f2940u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1f2944:
    // 0x1f2944: 0x2aa300ff  slti        $v1, $s5, 0xFF
    ctx->pc = 0x1f2944u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)255) ? 1 : 0);
label_1f2948:
    // 0x1f2948: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
label_1f294c:
    if (ctx->pc == 0x1F294Cu) {
        ctx->pc = 0x1F294Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2948u;
        // 0x1f294c: 0x26520048  addiu       $s2, $s2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2950u;
        goto label_1f2950;
    }
    ctx->pc = 0x1F2948u;
    {
        const bool branch_taken_0x1f2948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F294Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2948u;
        // 0x1f294c: 0x26520048  addiu       $s2, $s2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2948) {
            ctx->pc = 0x1F28A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f28a8;
        }
    }
    ctx->pc = 0x1F2950u;
label_1f2950:
    // 0x1f2950: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1f2950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1f2954:
    // 0x1f2954: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f2954u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f2958:
    // 0x1f2958: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f2958u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f295c:
    // 0x1f295c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f295cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f2960:
    // 0x1f2960: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f2960u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f2964:
    // 0x1f2964: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f2964u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f2968:
    // 0x1f2968: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f2968u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f296c:
    // 0x1f296c: 0x3e00008  jr          $ra
label_1f2970:
    if (ctx->pc == 0x1F2970u) {
        ctx->pc = 0x1F2970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F296Cu;
        // 0x1f2970: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2974u;
        goto label_1f2974;
    }
    ctx->pc = 0x1F296Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F296Cu;
        // 0x1f2970: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F296Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2974u;
label_1f2974:
    // 0x1f2974: 0x0  nop
    ctx->pc = 0x1f2974u;
    // NOP
label_1f2978:
    // 0x1f2978: 0x0  nop
    ctx->pc = 0x1f2978u;
    // NOP
label_1f297c:
    // 0x1f297c: 0x0  nop
    ctx->pc = 0x1f297cu;
    // NOP
label_1f2980:
    // 0x1f2980: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1f2980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1f2984:
    // 0x1f2984: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1f2984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1f2988:
    // 0x1f2988: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1f2988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1f298c:
    // 0x1f298c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1f298cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1f2990:
    // 0x1f2990: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1f2990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1f2994:
    // 0x1f2994: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f2994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1f2998:
    // 0x1f2998: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f2998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1f299c:
    // 0x1f299c: 0x8f838fa0  lw          $v1, -0x7060($gp)
    ctx->pc = 0x1f299cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938528)));
label_1f29a0:
    // 0x1f29a0: 0x1060007c  beqz        $v1, . + 4 + (0x7C << 2)
label_1f29a4:
    if (ctx->pc == 0x1F29A4u) {
        ctx->pc = 0x1F29A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F29A0u;
        // 0x1f29a4: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F29A8u;
        goto label_1f29a8;
    }
    ctx->pc = 0x1F29A0u;
    {
        const bool branch_taken_0x1f29a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F29A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F29A0u;
        // 0x1f29a4: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f29a0) {
            ctx->pc = 0x1F2B94u;
            goto label_1f2b94;
        }
    }
    ctx->pc = 0x1F29A8u;
label_1f29a8:
    // 0x1f29a8: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1f29a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_1f29ac:
    // 0x1f29ac: 0x8c2d3ffc  lw          $t5, 0x3FFC($at)
    ctx->pc = 0x1f29acu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1f29b0:
    // 0x1f29b0: 0x24051150  addiu       $a1, $zero, 0x1150
    ctx->pc = 0x1f29b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4432));
label_1f29b4:
    // 0x1f29b4: 0x3c0c0046  lui         $t4, 0x46
    ctx->pc = 0x1f29b4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)70 << 16));
label_1f29b8:
    // 0x1f29b8: 0x24429d00  addiu       $v0, $v0, -0x6300
    ctx->pc = 0x1f29b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941952));
label_1f29bc:
    // 0x1f29bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f29bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f29c0:
    // 0x1f29c0: 0x258c1e00  addiu       $t4, $t4, 0x1E00
    ctx->pc = 0x1f29c0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 7680));
label_1f29c4:
    // 0x1f29c4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1f29c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f29c8:
    // 0x1f29c8: 0x3409fdff  ori         $t1, $zero, 0xFDFF
    ctx->pc = 0x1f29c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65023);
label_1f29cc:
    // 0x1f29cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f29ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f29d0:
    // 0x1f29d0: 0x240700d8  addiu       $a3, $zero, 0xD8
    ctx->pc = 0x1f29d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
label_1f29d4:
    // 0x1f29d4: 0x24080158  addiu       $t0, $zero, 0x158
    ctx->pc = 0x1f29d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
label_1f29d8:
    // 0x1f29d8: 0x240a0060  addiu       $t2, $zero, 0x60
    ctx->pc = 0x1f29d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1f29dc:
    // 0x1f29dc: 0x1a52818  mult        $a1, $t5, $a1
    ctx->pc = 0x1f29dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_1f29e0:
    // 0x1f29e0: 0x240b0018  addiu       $t3, $zero, 0x18
    ctx->pc = 0x1f29e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1f29e4:
    // 0x1f29e4: 0x458021  addu        $s0, $v0, $a1
    ctx->pc = 0x1f29e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1f29e8:
    // 0x1f29e8: 0xd6940  sll         $t5, $t5, 5
    ctx->pc = 0x1f29e8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 5));
label_1f29ec:
    // 0x1f29ec: 0x26020380  addiu       $v0, $s0, 0x380
    ctx->pc = 0x1f29ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 896));
label_1f29f0:
    // 0x1f29f0: 0x18d8821  addu        $s1, $t4, $t5
    ctx->pc = 0x1f29f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
label_1f29f4:
    // 0x1f29f4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1f29f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1f29f8:
    // 0x1f29f8: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1f29f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1f29fc:
    // 0x1f29fc: 0x8f828f9c  lw          $v0, -0x7064($gp)
    ctx->pc = 0x1f29fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938524)));
label_1f2a00:
    // 0x1f2a00: 0x8f858f98  lw          $a1, -0x7068($gp)
    ctx->pc = 0x1f2a00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938520)));
label_1f2a04:
    // 0x1f2a04: 0xc054c60  jal         func_153180
label_1f2a08:
    if (ctx->pc == 0x1F2A08u) {
        ctx->pc = 0x1F2A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2A04u;
        // 0x1f2a08: 0x62300b  movn        $a2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2A0Cu;
        goto label_1f2a0c;
    }
    ctx->pc = 0x1F2A04u;
    SET_GPR_U32(ctx, 31, 0x1F2A0Cu);
    ctx->pc = 0x1F2A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2A04u;
    // 0x1f2a08: 0x62300b  movn        $a2, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153180u, 0x1F2A04u, 0x1F2A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2A0Cu;
label_1f2a0c:
    // 0x1f2a0c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f2a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2a10:
    // 0x1f2a10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f2a10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2a14:
    // 0x1f2a14: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1f2a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1f2a18:
    // 0x1f2a18: 0x8f828f8c  lw          $v0, -0x7074($gp)
    ctx->pc = 0x1f2a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938508)));
label_1f2a1c:
    // 0x1f2a1c: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x1f2a1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1f2a20:
    // 0x1f2a20: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1f2a24:
    if (ctx->pc == 0x1F2A24u) {
        ctx->pc = 0x1F2A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2A20u;
        // 0x1f2a24: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2A28u;
        goto label_1f2a28;
    }
    ctx->pc = 0x1F2A20u;
    {
        const bool branch_taken_0x1f2a20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2A20u;
        // 0x1f2a24: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2a20) {
            ctx->pc = 0x1F2A30u;
            goto label_1f2a30;
        }
    }
    ctx->pc = 0x1F2A28u;
label_1f2a28:
    // 0x1f2a28: 0x10000003  b           . + 4 + (0x3 << 2)
label_1f2a2c:
    if (ctx->pc == 0x1F2A2Cu) {
        ctx->pc = 0x1F2A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2A28u;
        // 0x1f2a2c: 0xa0430603  sb          $v1, 0x603($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1539), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2A30u;
        goto label_1f2a30;
    }
    ctx->pc = 0x1F2A28u;
    {
        const bool branch_taken_0x1f2a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2A28u;
        // 0x1f2a2c: 0xa0430603  sb          $v1, 0x603($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1539), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2a28) {
            ctx->pc = 0x1F2A38u;
            goto label_1f2a38;
        }
    }
    ctx->pc = 0x1F2A30u;
label_1f2a30:
    // 0x1f2a30: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x1f2a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_1f2a34:
    // 0x1f2a34: 0xa0400603  sb          $zero, 0x603($v0)
    ctx->pc = 0x1f2a34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1539), (uint8_t)GPR_U32(ctx, 0));
label_1f2a38:
    // 0x1f2a38: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f2a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1f2a3c:
    // 0x1f2a3c: 0x28820008  slti        $v0, $a0, 0x8
    ctx->pc = 0x1f2a3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
label_1f2a40:
    // 0x1f2a40: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_1f2a44:
    if (ctx->pc == 0x1F2A44u) {
        ctx->pc = 0x1F2A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2A40u;
        // 0x1f2a44: 0x24a500a0  addiu       $a1, $a1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2A48u;
        goto label_1f2a48;
    }
    ctx->pc = 0x1F2A40u;
    {
        const bool branch_taken_0x1f2a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2A40u;
        // 0x1f2a44: 0x24a500a0  addiu       $a1, $a1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2a40) {
            ctx->pc = 0x1F2A18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2a18;
        }
    }
    ctx->pc = 0x1F2A48u;
label_1f2a48:
    // 0x1f2a48: 0x8f828f88  lw          $v0, -0x7078($gp)
    ctx->pc = 0x1f2a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938504)));
label_1f2a4c:
    // 0x1f2a4c: 0x96040bb0  lhu         $a0, 0xBB0($s0)
    ctx->pc = 0x1f2a4cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2992)));
label_1f2a50:
    // 0x1f2a50: 0x21a80  sll         $v1, $v0, 10
    ctx->pc = 0x1f2a50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
label_1f2a54:
    // 0x1f2a54: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1f2a58:
    if (ctx->pc == 0x1F2A58u) {
        ctx->pc = 0x1F2A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2A54u;
        // 0x1f2a58: 0x31203  sra         $v0, $v1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2A5Cu;
        goto label_1f2a5c;
    }
    ctx->pc = 0x1F2A54u;
    {
        const bool branch_taken_0x1f2a54 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1F2A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2A54u;
        // 0x1f2a58: 0x31203  sra         $v0, $v1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2a54) {
            ctx->pc = 0x1F2A64u;
            goto label_1f2a64;
        }
    }
    ctx->pc = 0x1F2A5Cu;
label_1f2a5c:
    // 0x1f2a5c: 0x246200ff  addiu       $v0, $v1, 0xFF
    ctx->pc = 0x1f2a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 255));
label_1f2a60:
    // 0x1f2a60: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1f2a60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_1f2a64:
    // 0x1f2a64: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1f2a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1f2a68:
    // 0x1f2a68: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1f2a68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2a6c:
    // 0x1f2a6c: 0xa6020bc0  sh          $v0, 0xBC0($s0)
    ctx->pc = 0x1f2a6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 3008), (uint16_t)GPR_U32(ctx, 2));
label_1f2a70:
    // 0x1f2a70: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f2a70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2a74:
    // 0x1f2a74: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1f2a74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2a78:
    // 0x1f2a78: 0x8f828f90  lw          $v0, -0x7070($gp)
    ctx->pc = 0x1f2a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938512)));
label_1f2a7c:
    // 0x1f2a7c: 0x282082a  slt         $at, $s4, $v0
    ctx->pc = 0x1f2a7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1f2a80:
    // 0x1f2a80: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
label_1f2a84:
    if (ctx->pc == 0x1F2A84u) {
        ctx->pc = 0x1F2A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2A80u;
        // 0x1f2a84: 0x32830001  andi        $v1, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2A88u;
        goto label_1f2a88;
    }
    ctx->pc = 0x1F2A80u;
    {
        const bool branch_taken_0x1f2a80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2A80u;
        // 0x1f2a84: 0x32830001  andi        $v1, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2a80) {
            ctx->pc = 0x1F2B20u;
            goto label_1f2b20;
        }
    }
    ctx->pc = 0x1F2A88u;
label_1f2a88:
    // 0x1f2a88: 0x6810005  bgez        $s4, . + 4 + (0x5 << 2)
label_1f2a8c:
    if (ctx->pc == 0x1F2A8Cu) {
        ctx->pc = 0x1F2A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2A88u;
        // 0x1f2a8c: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2A90u;
        goto label_1f2a90;
    }
    ctx->pc = 0x1F2A88u;
    {
        const bool branch_taken_0x1f2a88 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x1F2A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2A88u;
        // 0x1f2a8c: 0x31040  sll         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2a88) {
            ctx->pc = 0x1F2AA0u;
            goto label_1f2aa0;
        }
    }
    ctx->pc = 0x1F2A90u;
label_1f2a90:
    // 0x1f2a90: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1f2a94:
    if (ctx->pc == 0x1F2A94u) {
        ctx->pc = 0x1F2A98u;
        goto label_1f2a98;
    }
    ctx->pc = 0x1F2A90u;
    {
        const bool branch_taken_0x1f2a90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2a90) {
            ctx->pc = 0x1F2A9Cu;
            goto label_1f2a9c;
        }
    }
    ctx->pc = 0x1F2A98u;
label_1f2a98:
    // 0x1f2a98: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x1f2a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_1f2a9c:
    // 0x1f2a9c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1f2a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1f2aa0:
    // 0x1f2aa0: 0x142043  sra         $a0, $s4, 1
    ctx->pc = 0x1f2aa0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 20), 1));
label_1f2aa4:
    // 0x1f2aa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f2aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f2aa8:
    // 0x1f2aa8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f2aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f2aac:
    // 0x1f2aac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f2aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f2ab0:
    // 0x1f2ab0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1f2ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1f2ab4:
    // 0x1f2ab4: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
label_1f2ab8:
    if (ctx->pc == 0x1F2AB8u) {
        ctx->pc = 0x1F2AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2AB4u;
        // 0x1f2ab8: 0x24470152  addiu       $a3, $v0, 0x152 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 338));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2ABCu;
        goto label_1f2abc;
    }
    ctx->pc = 0x1F2AB4u;
    {
        const bool branch_taken_0x1f2ab4 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x1F2AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2AB4u;
        // 0x1f2ab8: 0x24470152  addiu       $a3, $v0, 0x152 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 338));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2ab4) {
            ctx->pc = 0x1F2AC4u;
            goto label_1f2ac4;
        }
    }
    ctx->pc = 0x1F2ABCu;
label_1f2abc:
    // 0x1f2abc: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x1f2abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1f2ac0:
    // 0x1f2ac0: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x1f2ac0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_1f2ac4:
    // 0x1f2ac4: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x1f2ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_1f2ac8:
    // 0x1f2ac8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1f2ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1f2acc:
    // 0x1f2acc: 0x24420c70  addiu       $v0, $v0, 0xC70
    ctx->pc = 0x1f2accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3184));
label_1f2ad0:
    // 0x1f2ad0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f2ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f2ad4:
    // 0x1f2ad4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1f2ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1f2ad8:
    // 0x1f2ad8: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x1f2ad8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f2adc:
    // 0x1f2adc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1f2adcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f2ae0:
    // 0x1f2ae0: 0xffac0008  sd          $t4, 0x8($sp)
    ctx->pc = 0x1f2ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 12));
label_1f2ae4:
    // 0x1f2ae4: 0x2448015c  addiu       $t0, $v0, 0x15C
    ctx->pc = 0x1f2ae4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 348));
label_1f2ae8:
    // 0x1f2ae8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1f2ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f2aec:
    // 0x1f2aec: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1f2aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_1f2af0:
    // 0x1f2af0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f2af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2af4:
    // 0x1f2af4: 0x24429ce0  addiu       $v0, $v0, -0x6320
    ctx->pc = 0x1f2af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941920));
label_1f2af8:
    // 0x1f2af8: 0x3409fdff  ori         $t1, $zero, 0xFDFF
    ctx->pc = 0x1f2af8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65023);
label_1f2afc:
    // 0x1f2afc: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x1f2afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1f2b00:
    // 0x1f2b00: 0x240a0060  addiu       $t2, $zero, 0x60
    ctx->pc = 0x1f2b00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1f2b04:
    // 0x1f2b04: 0x8f828f9c  lw          $v0, -0x7064($gp)
    ctx->pc = 0x1f2b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938524)));
label_1f2b08:
    // 0x1f2b08: 0x240b0014  addiu       $t3, $zero, 0x14
    ctx->pc = 0x1f2b08u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1f2b0c:
    // 0x1f2b0c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1f2b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f2b10:
    // 0x1f2b10: 0xc054c60  jal         func_153180
label_1f2b14:
    if (ctx->pc == 0x1F2B14u) {
        ctx->pc = 0x1F2B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2B10u;
        // 0x1f2b14: 0x182300b  movn        $a2, $t4, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2B18u;
        goto label_1f2b18;
    }
    ctx->pc = 0x1F2B10u;
    SET_GPR_U32(ctx, 31, 0x1F2B18u);
    ctx->pc = 0x1F2B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2B10u;
    // 0x1f2b14: 0x182300b  movn        $a2, $t4, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153180u, 0x1F2B10u, 0x1F2B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2B18u;
label_1f2b18:
    // 0x1f2b18: 0x1000000f  b           . + 4 + (0xF << 2)
label_1f2b1c:
    if (ctx->pc == 0x1F2B1Cu) {
        ctx->pc = 0x1F2B20u;
        goto label_1f2b20;
    }
    ctx->pc = 0x1F2B18u;
    {
        const bool branch_taken_0x1f2b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2b18) {
            ctx->pc = 0x1F2B58u;
            goto label_1f2b58;
        }
    }
    ctx->pc = 0x1F2B20u;
label_1f2b20:
    // 0x1f2b20: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x1f2b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_1f2b24:
    // 0x1f2b24: 0x24430c70  addiu       $v1, $v0, 0xC70
    ctx->pc = 0x1f2b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 3184));
label_1f2b28:
    // 0x1f2b28: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f2b28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f2b2c:
    // 0x1f2b2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f2b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f2b30:
    // 0x1f2b30: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x1f2b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_1f2b34:
    // 0x1f2b34: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1f2b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f2b38:
    // 0x1f2b38: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1f2b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1f2b3c:
    // 0x1f2b3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f2b3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2b40:
    // 0x1f2b40: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1f2b40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1f2b44:
    // 0x1f2b44: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x1f2b44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1f2b48:
    // 0x1f2b48: 0x240801c0  addiu       $t0, $zero, 0x1C0
    ctx->pc = 0x1f2b48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1f2b4c:
    // 0x1f2b4c: 0x3409fdff  ori         $t1, $zero, 0xFDFF
    ctx->pc = 0x1f2b4cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65023);
label_1f2b50:
    // 0x1f2b50: 0xc054c60  jal         func_153180
label_1f2b54:
    if (ctx->pc == 0x1F2B54u) {
        ctx->pc = 0x1F2B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2B50u;
        // 0x1f2b54: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2B58u;
        goto label_1f2b58;
    }
    ctx->pc = 0x1F2B50u;
    SET_GPR_U32(ctx, 31, 0x1F2B58u);
    ctx->pc = 0x1F2B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2B50u;
    // 0x1f2b54: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153180u, 0x1F2B50u, 0x1F2B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2B58u;
label_1f2b58:
    // 0x1f2b58: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1f2b58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1f2b5c:
    // 0x1f2b5c: 0x2a820006  slti        $v0, $s4, 0x6
    ctx->pc = 0x1f2b5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)6) ? 1 : 0);
label_1f2b60:
    // 0x1f2b60: 0x265200d0  addiu       $s2, $s2, 0xD0
    ctx->pc = 0x1f2b60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
label_1f2b64:
    // 0x1f2b64: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
label_1f2b68:
    if (ctx->pc == 0x1F2B68u) {
        ctx->pc = 0x1F2B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2B64u;
        // 0x1f2b68: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2B6Cu;
        goto label_1f2b6c;
    }
    ctx->pc = 0x1F2B64u;
    {
        const bool branch_taken_0x1f2b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2B64u;
        // 0x1f2b68: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2b64) {
            ctx->pc = 0x1F2A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2a78;
        }
    }
    ctx->pc = 0x1F2B6Cu;
label_1f2b6c:
    // 0x1f2b6c: 0x8f848f94  lw          $a0, -0x706C($gp)
    ctx->pc = 0x1f2b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938516)));
label_1f2b70:
    // 0x1f2b70: 0xc070e2c  jal         func_1C38B0
label_1f2b74:
    if (ctx->pc == 0x1F2B74u) {
        ctx->pc = 0x1F2B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2B70u;
        // 0x1f2b74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2B78u;
        goto label_1f2b78;
    }
    ctx->pc = 0x1F2B70u;
    SET_GPR_U32(ctx, 31, 0x1F2B78u);
    ctx->pc = 0x1F2B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2B70u;
    // 0x1f2b74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1F2B78u;
label_1f2b78:
    // 0x1f2b78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f2b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f2b7c:
    // 0x1f2b7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f2b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f2b80:
    // 0x1f2b80: 0x24060115  addiu       $a2, $zero, 0x115
    ctx->pc = 0x1f2b80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 277));
label_1f2b84:
    // 0x1f2b84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f2b84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2b88:
    // 0x1f2b88: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f2b88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2b8c:
    // 0x1f2b8c: 0xc066c72  jal         func_19B1C8
label_1f2b90:
    if (ctx->pc == 0x1F2B90u) {
        ctx->pc = 0x1F2B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2B8Cu;
        // 0x1f2b90: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2B94u;
        goto label_1f2b94;
    }
    ctx->pc = 0x1F2B8Cu;
    SET_GPR_U32(ctx, 31, 0x1F2B94u);
    ctx->pc = 0x1F2B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2B8Cu;
    // 0x1f2b90: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1F2B8Cu, 0x1F2B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2B94u;
label_1f2b94:
    // 0x1f2b94: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1f2b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1f2b98:
    // 0x1f2b98: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1f2b98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f2b9c:
    // 0x1f2b9c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1f2b9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f2ba0:
    // 0x1f2ba0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1f2ba0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f2ba4:
    // 0x1f2ba4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f2ba4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f2ba8:
    // 0x1f2ba8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f2ba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f2bac:
    // 0x1f2bac: 0x3e00008  jr          $ra
label_1f2bb0:
    if (ctx->pc == 0x1F2BB0u) {
        ctx->pc = 0x1F2BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2BACu;
        // 0x1f2bb0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2BB4u;
        goto label_1f2bb4;
    }
    ctx->pc = 0x1F2BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2BACu;
        // 0x1f2bb0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2BB4u;
label_1f2bb4:
    // 0x1f2bb4: 0x0  nop
    ctx->pc = 0x1f2bb4u;
    // NOP
label_1f2bb8:
    // 0x1f2bb8: 0x0  nop
    ctx->pc = 0x1f2bb8u;
    // NOP
label_1f2bbc:
    // 0x1f2bbc: 0x0  nop
    ctx->pc = 0x1f2bbcu;
    // NOP
label_1f2bc0:
    // 0x1f2bc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f2bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1f2bc4:
    // 0x1f2bc4: 0x3c023b49  lui         $v0, 0x3B49
    ctx->pc = 0x1f2bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15177 << 16));
label_1f2bc8:
    // 0x1f2bc8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f2bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1f2bcc:
    // 0x1f2bcc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1f2bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1f2bd0:
    // 0x1f2bd0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f2bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1f2bd4:
    // 0x1f2bd4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f2bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1f2bd8:
    // 0x1f2bd8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f2bd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f2bdc:
    // 0x1f2bdc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1f2bdcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1f2be0:
    // 0x1f2be0: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1f2be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1f2be4:
    // 0x1f2be4: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1f2be4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1f2be8:
    // 0x1f2be8: 0xc078050  jal         func_1E0140
label_1f2bec:
    if (ctx->pc == 0x1F2BECu) {
        ctx->pc = 0x1F2BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2BE8u;
        // 0x1f2bec: 0x24100009  addiu       $s0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2BF0u;
        goto label_1f2bf0;
    }
    ctx->pc = 0x1F2BE8u;
    SET_GPR_U32(ctx, 31, 0x1F2BF0u);
    ctx->pc = 0x1F2BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2BE8u;
    // 0x1f2bec: 0x24100009  addiu       $s0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0140u;
    { ctx->pc = 0x1e0140; return; }
    ctx->pc = 0x1F2BF0u;
label_1f2bf0:
    // 0x1f2bf0: 0xc078070  jal         func_1E01C0
label_1f2bf4:
    if (ctx->pc == 0x1F2BF4u) {
        ctx->pc = 0x1F2BF8u;
        goto label_1f2bf8;
    }
    ctx->pc = 0x1F2BF0u;
    SET_GPR_U32(ctx, 31, 0x1F2BF8u);
    ctx->pc = 0x1E01C0u;
    { ctx->pc = 0x1e01c0; return; }
    ctx->pc = 0x1F2BF8u;
label_1f2bf8:
    // 0x1f2bf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f2bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f2bfc:
    // 0x1f2bfc: 0xaf828fd4  sw          $v0, -0x702C($gp)
    ctx->pc = 0x1f2bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938580), GPR_U32(ctx, 2));
label_1f2c00:
    // 0x1f2c00: 0x8f828f44  lw          $v0, -0x70BC($gp)
    ctx->pc = 0x1f2c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
label_1f2c04:
    // 0x1f2c04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1f2c08:
    if (ctx->pc == 0x1F2C08u) {
        ctx->pc = 0x1F2C0Cu;
        goto label_1f2c0c;
    }
    ctx->pc = 0x1F2C04u;
    {
        const bool branch_taken_0x1f2c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2c04) {
            ctx->pc = 0x1F2C14u;
            goto label_1f2c14;
        }
    }
    ctx->pc = 0x1F2C0Cu;
label_1f2c0c:
    // 0x1f2c0c: 0x10000036  b           . + 4 + (0x36 << 2)
label_1f2c10:
    if (ctx->pc == 0x1F2C10u) {
        ctx->pc = 0x1F2C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2C0Cu;
        // 0x1f2c10: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2C14u;
        goto label_1f2c14;
    }
    ctx->pc = 0x1F2C0Cu;
    {
        const bool branch_taken_0x1f2c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2C0Cu;
        // 0x1f2c10: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2c0c) {
            ctx->pc = 0x1F2CE8u;
            goto label_1f2ce8;
        }
    }
    ctx->pc = 0x1F2C14u;
label_1f2c14:
    // 0x1f2c14: 0x8f828f40  lw          $v0, -0x70C0($gp)
    ctx->pc = 0x1f2c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938432)));
label_1f2c18:
    // 0x1f2c18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1f2c1c:
    if (ctx->pc == 0x1F2C1Cu) {
        ctx->pc = 0x1F2C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2C18u;
        // 0x1f2c1c: 0x111900  sll         $v1, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2C20u;
        goto label_1f2c20;
    }
    ctx->pc = 0x1F2C18u;
    {
        const bool branch_taken_0x1f2c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2C18u;
        // 0x1f2c1c: 0x111900  sll         $v1, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2c18) {
            ctx->pc = 0x1F2C28u;
            goto label_1f2c28;
        }
    }
    ctx->pc = 0x1F2C20u;
label_1f2c20:
    // 0x1f2c20: 0x10000031  b           . + 4 + (0x31 << 2)
label_1f2c24:
    if (ctx->pc == 0x1F2C24u) {
        ctx->pc = 0x1F2C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2C20u;
        // 0x1f2c24: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2C28u;
        goto label_1f2c28;
    }
    ctx->pc = 0x1F2C20u;
    {
        const bool branch_taken_0x1f2c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2C20u;
        // 0x1f2c24: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2c20) {
            ctx->pc = 0x1F2CE8u;
            goto label_1f2ce8;
        }
    }
    ctx->pc = 0x1F2C28u;
label_1f2c28:
    // 0x1f2c28: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x1f2c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_1f2c2c:
    // 0x1f2c2c: 0x621804  sllv        $v1, $v0, $v1
    ctx->pc = 0x1f2c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_1f2c30:
    // 0x1f2c30: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x1f2c30u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_1f2c34:
    // 0x1f2c34: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f2c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1f2c38:
    // 0x1f2c38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1f2c3c:
    if (ctx->pc == 0x1F2C3Cu) {
        ctx->pc = 0x1F2C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2C38u;
        // 0x1f2c3c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2C40u;
        goto label_1f2c40;
    }
    ctx->pc = 0x1F2C38u;
    {
        const bool branch_taken_0x1f2c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2C38u;
        // 0x1f2c3c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2c38) {
            ctx->pc = 0x1F2C50u;
            goto label_1f2c50;
        }
    }
    ctx->pc = 0x1F2C40u;
label_1f2c40:
    // 0x1f2c40: 0xc05b420  jal         func_16D080
label_1f2c44:
    if (ctx->pc == 0x1F2C44u) {
        ctx->pc = 0x1F2C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2C40u;
        // 0x1f2c44: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2C48u;
        goto label_1f2c48;
    }
    ctx->pc = 0x1F2C40u;
    SET_GPR_U32(ctx, 31, 0x1F2C48u);
    ctx->pc = 0x1F2C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2C40u;
    // 0x1f2c44: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x1F2C40u, 0x1F2C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2C48u;
label_1f2c48:
    // 0x1f2c48: 0x10000027  b           . + 4 + (0x27 << 2)
label_1f2c4c:
    if (ctx->pc == 0x1F2C4Cu) {
        ctx->pc = 0x1F2C50u;
        goto label_1f2c50;
    }
    ctx->pc = 0x1F2C48u;
    {
        const bool branch_taken_0x1f2c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2c48) {
            ctx->pc = 0x1F2CE8u;
            goto label_1f2ce8;
        }
    }
    ctx->pc = 0x1F2C50u;
label_1f2c50:
    // 0x1f2c50: 0xc085d3c  jal         func_2174F0
label_1f2c54:
    if (ctx->pc == 0x1F2C54u) {
        ctx->pc = 0x1F2C58u;
        goto label_1f2c58;
    }
    ctx->pc = 0x1F2C50u;
    SET_GPR_U32(ctx, 31, 0x1F2C58u);
    ctx->pc = 0x2174F0u;
    { ctx->pc = 0x2174f0; return; }
    ctx->pc = 0x1F2C58u;
label_1f2c58:
    // 0x1f2c58: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1f2c58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f2c5c:
    // 0x1f2c5c: 0x0  nop
    ctx->pc = 0x1f2c5cu;
    // NOP
label_1f2c60:
    // 0x1f2c60: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x1f2c60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f2c64:
    // 0x1f2c64: 0x0  nop
    ctx->pc = 0x1f2c64u;
    // NOP
label_1f2c68:
    // 0x1f2c68: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_1f2c6c:
    if (ctx->pc == 0x1F2C6Cu) {
        ctx->pc = 0x1F2C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2C68u;
        // 0x1f2c6c: 0x3c023f49  lui         $v0, 0x3F49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2C70u;
        goto label_1f2c70;
    }
    ctx->pc = 0x1F2C68u;
    {
        const bool branch_taken_0x1f2c68 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F2C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2C68u;
        // 0x1f2c6c: 0x3c023f49  lui         $v0, 0x3F49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2c68) {
            ctx->pc = 0x1F2C9Cu;
            goto label_1f2c9c;
        }
    }
    ctx->pc = 0x1F2C70u;
label_1f2c70:
    // 0x1f2c70: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1f2c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1f2c74:
    // 0x1f2c74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f2c74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f2c78:
    // 0x1f2c78: 0x0  nop
    ctx->pc = 0x1f2c78u;
    // NOP
label_1f2c7c:
    // 0x1f2c7c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1f2c7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f2c80:
    // 0x1f2c80: 0x0  nop
    ctx->pc = 0x1f2c80u;
    // NOP
label_1f2c84:
    // 0x1f2c84: 0x45010011  bc1t        . + 4 + (0x11 << 2)
label_1f2c88:
    if (ctx->pc == 0x1F2C88u) {
        ctx->pc = 0x1F2C8Cu;
        goto label_1f2c8c;
    }
    ctx->pc = 0x1F2C84u;
    {
        const bool branch_taken_0x1f2c84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f2c84) {
            ctx->pc = 0x1F2CCCu;
            goto label_1f2ccc;
        }
    }
    ctx->pc = 0x1F2C8Cu;
label_1f2c8c:
    // 0x1f2c8c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1f2c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1f2c90:
    // 0x1f2c90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f2c90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f2c94:
    // 0x1f2c94: 0x1000000d  b           . + 4 + (0xD << 2)
label_1f2c98:
    if (ctx->pc == 0x1F2C98u) {
        ctx->pc = 0x1F2C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2C94u;
        // 0x1f2c98: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2C9Cu;
        goto label_1f2c9c;
    }
    ctx->pc = 0x1F2C94u;
    {
        const bool branch_taken_0x1f2c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2C94u;
        // 0x1f2c98: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2c94) {
            ctx->pc = 0x1F2CCCu;
            goto label_1f2ccc;
        }
    }
    ctx->pc = 0x1F2C9Cu;
label_1f2c9c:
    // 0x1f2c9c: 0x0  nop
    ctx->pc = 0x1f2c9cu;
    // NOP
label_1f2ca0:
    // 0x1f2ca0: 0x3c02bf49  lui         $v0, 0xBF49
    ctx->pc = 0x1f2ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48969 << 16));
label_1f2ca4:
    // 0x1f2ca4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1f2ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1f2ca8:
    // 0x1f2ca8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f2ca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f2cac:
    // 0x1f2cac: 0x0  nop
    ctx->pc = 0x1f2cacu;
    // NOP
label_1f2cb0:
    // 0x1f2cb0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1f2cb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f2cb4:
    // 0x1f2cb4: 0x0  nop
    ctx->pc = 0x1f2cb4u;
    // NOP
label_1f2cb8:
    // 0x1f2cb8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1f2cbc:
    if (ctx->pc == 0x1F2CBCu) {
        ctx->pc = 0x1F2CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2CB8u;
        // 0x1f2cbc: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2CC0u;
        goto label_1f2cc0;
    }
    ctx->pc = 0x1F2CB8u;
    {
        const bool branch_taken_0x1f2cb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F2CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2CB8u;
        // 0x1f2cbc: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2cb8) {
            ctx->pc = 0x1F2CCCu;
            goto label_1f2ccc;
        }
    }
    ctx->pc = 0x1F2CC0u;
label_1f2cc0:
    // 0x1f2cc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f2cc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f2cc4:
    // 0x1f2cc4: 0x0  nop
    ctx->pc = 0x1f2cc4u;
    // NOP
label_1f2cc8:
    // 0x1f2cc8: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1f2cc8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1f2ccc:
    // 0x1f2ccc: 0x0  nop
    ctx->pc = 0x1f2cccu;
    // NOP
label_1f2cd0:
    // 0x1f2cd0: 0xc085d34  jal         func_2174D0
label_1f2cd4:
    if (ctx->pc == 0x1F2CD4u) {
        ctx->pc = 0x1F2CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2CD0u;
        // 0x1f2cd4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2CD8u;
        goto label_1f2cd8;
    }
    ctx->pc = 0x1F2CD0u;
    SET_GPR_U32(ctx, 31, 0x1F2CD8u);
    ctx->pc = 0x1F2CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2CD0u;
    // 0x1f2cd4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2174D0u;
    { ctx->pc = 0x2174d0; return; }
    ctx->pc = 0x1F2CD8u;
label_1f2cd8:
    // 0x1f2cd8: 0xc07b48c  jal         func_1ED230
label_1f2cdc:
    if (ctx->pc == 0x1F2CDCu) {
        ctx->pc = 0x1F2CE0u;
        goto label_1f2ce0;
    }
    ctx->pc = 0x1F2CD8u;
    SET_GPR_U32(ctx, 31, 0x1F2CE0u);
    ctx->pc = 0x1ED230u;
    { ctx->pc = 0x1ed230; return; }
    ctx->pc = 0x1F2CE0u;
label_1f2ce0:
    // 0x1f2ce0: 0x1000ffc8  b           . + 4 + (-0x38 << 2)
label_1f2ce4:
    if (ctx->pc == 0x1F2CE4u) {
        ctx->pc = 0x1F2CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2CE0u;
        // 0x1f2ce4: 0x8f828f44  lw          $v0, -0x70BC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2CE8u;
        goto label_1f2ce8;
    }
    ctx->pc = 0x1F2CE0u;
    {
        const bool branch_taken_0x1f2ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2CE0u;
        // 0x1f2ce4: 0x8f828f44  lw          $v0, -0x70BC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2ce0) {
            ctx->pc = 0x1F2C04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2c04;
        }
    }
    ctx->pc = 0x1F2CE8u;
label_1f2ce8:
    // 0x1f2ce8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1f2ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1f2cec:
    // 0x1f2cec: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
label_1f2cf0:
    if (ctx->pc == 0x1F2CF0u) {
        ctx->pc = 0x1F2CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2CECu;
        // 0x1f2cf0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2CF4u;
        goto label_1f2cf4;
    }
    ctx->pc = 0x1F2CECu;
    {
        const bool branch_taken_0x1f2cec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F2CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2CECu;
        // 0x1f2cf0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2cec) {
            ctx->pc = 0x1F2D08u;
            goto label_1f2d08;
        }
    }
    ctx->pc = 0x1F2CF4u;
label_1f2cf4:
    // 0x1f2cf4: 0xc085bd0  jal         func_216F40
label_1f2cf8:
    if (ctx->pc == 0x1F2CF8u) {
        ctx->pc = 0x1F2CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2CF4u;
        // 0x1f2cf8: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2CFCu;
        goto label_1f2cfc;
    }
    ctx->pc = 0x1F2CF4u;
    SET_GPR_U32(ctx, 31, 0x1F2CFCu);
    ctx->pc = 0x1F2CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2CF4u;
    // 0x1f2cf8: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216F40u;
    { ctx->pc = 0x216f40; return; }
    ctx->pc = 0x1F2CFCu;
label_1f2cfc:
    // 0x1f2cfc: 0xc078078  jal         func_1E01E0
label_1f2d00:
    if (ctx->pc == 0x1F2D00u) {
        ctx->pc = 0x1F2D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2CFCu;
        // 0x1f2d00: 0xaf808fd4  sw          $zero, -0x702C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938580), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2D04u;
        goto label_1f2d04;
    }
    ctx->pc = 0x1F2CFCu;
    SET_GPR_U32(ctx, 31, 0x1F2D04u);
    ctx->pc = 0x1F2D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2CFCu;
    // 0x1f2d00: 0xaf808fd4  sw          $zero, -0x702C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938580), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E01E0u;
    { ctx->pc = 0x1e01e0; return; }
    ctx->pc = 0x1F2D04u;
label_1f2d04:
    // 0x1f2d04: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f2d04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f2d08:
    // 0x1f2d08: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f2d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1f2d0c:
    // 0x1f2d0c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f2d0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f2d10:
    // 0x1f2d10: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1f2d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1f2d14:
    // 0x1f2d14: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f2d14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f2d18:
    // 0x1f2d18: 0x3e00008  jr          $ra
label_1f2d1c:
    if (ctx->pc == 0x1F2D1Cu) {
        ctx->pc = 0x1F2D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2D18u;
        // 0x1f2d1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2D20u;
        goto label_1f2d20;
    }
    ctx->pc = 0x1F2D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2D18u;
        // 0x1f2d1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2D20u;
label_1f2d20:
    // 0x1f2d20: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x1f2d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
label_1f2d24:
    // 0x1f2d24: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1f2d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_1f2d28:
    // 0x1f2d28: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1f2d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1f2d2c:
    // 0x1f2d2c: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x1f2d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
label_1f2d30:
    // 0x1f2d30: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x1f2d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_1f2d34:
    // 0x1f2d34: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x1f2d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_1f2d38:
    // 0x1f2d38: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x1f2d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_1f2d3c:
    // 0x1f2d3c: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1f2d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_1f2d40:
    // 0x1f2d40: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1f2d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_1f2d44:
    // 0x1f2d44: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1f2d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_1f2d48:
    // 0x1f2d48: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1f2d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_1f2d4c:
    // 0x1f2d4c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1f2d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1f2d50:
    // 0x1f2d50: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f2d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1f2d54:
    // 0x1f2d54: 0xc07cc60  jal         func_1F3180
label_1f2d58:
    if (ctx->pc == 0x1F2D58u) {
        ctx->pc = 0x1F2D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2D54u;
        // 0x1f2d58: 0xaf808fd4  sw          $zero, -0x702C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938580), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2D5Cu;
        goto label_1f2d5c;
    }
    ctx->pc = 0x1F2D54u;
    SET_GPR_U32(ctx, 31, 0x1F2D5Cu);
    ctx->pc = 0x1F2D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2D54u;
    // 0x1f2d58: 0xaf808fd4  sw          $zero, -0x702C($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938580), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3180u;
    { ctx->pc = 0x1f3180; return; }
    ctx->pc = 0x1F2D5Cu;
label_1f2d5c:
    // 0x1f2d5c: 0xc07082c  jal         func_1C20B0
label_1f2d60:
    if (ctx->pc == 0x1F2D60u) {
        ctx->pc = 0x1F2D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2D5Cu;
        // 0x1f2d60: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2D64u;
        goto label_1f2d64;
    }
    ctx->pc = 0x1F2D5Cu;
    SET_GPR_U32(ctx, 31, 0x1F2D64u);
    ctx->pc = 0x1F2D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2D5Cu;
    // 0x1f2d60: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20B0u;
    { ctx->pc = 0x1c20b0; return; }
    ctx->pc = 0x1F2D64u;
label_1f2d64:
    // 0x1f2d64: 0xffa200f8  sd          $v0, 0xF8($sp)
    ctx->pc = 0x1f2d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 2));
label_1f2d68:
    // 0x1f2d68: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x1f2d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_1f2d6c:
    // 0x1f2d6c: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x1f2d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
label_1f2d70:
    // 0x1f2d70: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x1f2d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1f2d74:
    // 0x1f2d74: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x1f2d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
label_1f2d78:
    // 0x1f2d78: 0x24637ff0  addiu       $v1, $v1, 0x7FF0
    ctx->pc = 0x1f2d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32752));
label_1f2d7c:
    // 0x1f2d7c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f2d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f2d80:
    // 0x1f2d80: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x1f2d80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_1f2d84:
    // 0x1f2d84: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x1f2d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1f2d88:
    // 0x1f2d88: 0xc05e234  jal         func_1788D0
label_1f2d8c:
    if (ctx->pc == 0x1F2D8Cu) {
        ctx->pc = 0x1F2D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2D88u;
        // 0x1f2d8c: 0x24050e83  addiu       $a1, $zero, 0xE83 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3715));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2D90u;
        goto label_1f2d90;
    }
    ctx->pc = 0x1F2D88u;
    SET_GPR_U32(ctx, 31, 0x1F2D90u);
    ctx->pc = 0x1F2D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2D88u;
    // 0x1f2d8c: 0x24050e83  addiu       $a1, $zero, 0xE83 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3715));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1F2D88u, 0x1F2D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2D90u;
label_1f2d90:
    // 0x1f2d90: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f2d90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2d94:
    // 0x1f2d94: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x1f2d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
label_1f2d98:
    // 0x1f2d98: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1f2d98u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2d9c:
    // 0x1f2d9c: 0x0  nop
    ctx->pc = 0x1f2d9cu;
    // NOP
label_1f2da0:
    // 0x1f2da0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1f2da0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2da4:
    // 0x1f2da4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1f2da4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2da8:
    // 0x1f2da8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f2da8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2dac:
    // 0x1f2dac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f2dacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2db0:
    // 0x1f2db0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1f2db0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2db4:
    // 0x1f2db4: 0x0  nop
    ctx->pc = 0x1f2db4u;
    // NOP
label_1f2db8:
    // 0x1f2db8: 0xc070834  jal         func_1C20D0
label_1f2dbc:
    if (ctx->pc == 0x1F2DBCu) {
        ctx->pc = 0x1F2DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2DB8u;
        // 0x1f2dbc: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2DC0u;
        goto label_1f2dc0;
    }
    ctx->pc = 0x1F2DB8u;
    SET_GPR_U32(ctx, 31, 0x1F2DC0u);
    ctx->pc = 0x1F2DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2DB8u;
    // 0x1f2dbc: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1F2DC0u;
label_1f2dc0:
    // 0x1f2dc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f2dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f2dc4:
    // 0x1f2dc4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f2dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f2dc8:
    // 0x1f2dc8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f2dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f2dcc:
    // 0x1f2dcc: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1f2dccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1f2dd0:
    // 0x1f2dd0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1f2dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1f2dd4:
    // 0x1f2dd4: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1f2dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1f2dd8:
    // 0x1f2dd8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f2dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f2ddc:
    // 0x1f2ddc: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1f2ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1f2de0:
    // 0x1f2de0: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1f2de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1f2de4:
    // 0x1f2de4: 0x24090168  addiu       $t1, $zero, 0x168
    ctx->pc = 0x1f2de4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
label_1f2de8:
    // 0x1f2de8: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x1f2de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
label_1f2dec:
    // 0x1f2dec: 0x240a00a8  addiu       $t2, $zero, 0xA8
    ctx->pc = 0x1f2decu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_1f2df0:
    // 0x1f2df0: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x1f2df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_1f2df4:
    // 0x1f2df4: 0x240b0008  addiu       $t3, $zero, 0x8
    ctx->pc = 0x1f2df4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1f2df8:
    // 0x1f2df8: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1f2df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1f2dfc:
    // 0x1f2dfc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f2dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f2e00:
    // 0x1f2e00: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x1f2e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
label_1f2e04:
    // 0x1f2e04: 0x56a021  addu        $s4, $v0, $s6
    ctx->pc = 0x1f2e04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_1f2e08:
    // 0x1f2e08: 0xc05df9c  jal         func_177E70
label_1f2e0c:
    if (ctx->pc == 0x1F2E0Cu) {
        ctx->pc = 0x1F2E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2E08u;
        // 0x1f2e0c: 0x26840010  addiu       $a0, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2E10u;
        goto label_1f2e10;
    }
    ctx->pc = 0x1F2E08u;
    SET_GPR_U32(ctx, 31, 0x1F2E10u);
    ctx->pc = 0x1F2E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2E08u;
    // 0x1f2e0c: 0x26840010  addiu       $a0, $s4, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177E70u, 0x1F2E08u, 0x1F2E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2E10u;
label_1f2e10:
    // 0x1f2e10: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1f2e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_1f2e14:
    // 0x1f2e14: 0x24427fd0  addiu       $v0, $v0, 0x7FD0
    ctx->pc = 0x1f2e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32720));
label_1f2e18:
    // 0x1f2e18: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x1f2e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_1f2e1c:
    // 0x1f2e1c: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x1f2e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_1f2e20:
    // 0x1f2e20: 0x51a821  addu        $s5, $v0, $s1
    ctx->pc = 0x1f2e20u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1f2e24:
    // 0x1f2e24: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1f2e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1f2e28:
    // 0x1f2e28: 0x4410022  bgez        $v0, . + 4 + (0x22 << 2)
label_1f2e2c:
    if (ctx->pc == 0x1F2E2Cu) {
        ctx->pc = 0x1F2E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2E28u;
        // 0x1f2e2c: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2E30u;
        goto label_1f2e30;
    }
    ctx->pc = 0x1F2E28u;
    {
        const bool branch_taken_0x1f2e28 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F2E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2E28u;
        // 0x1f2e2c: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2e28) {
            ctx->pc = 0x1F2EB4u;
            goto label_1f2eb4;
        }
    }
    ctx->pc = 0x1F2E30u;
label_1f2e30:
    // 0x1f2e30: 0xc070834  jal         func_1C20D0
label_1f2e34:
    if (ctx->pc == 0x1F2E34u) {
        ctx->pc = 0x1F2E38u;
        goto label_1f2e38;
    }
    ctx->pc = 0x1F2E30u;
    SET_GPR_U32(ctx, 31, 0x1F2E38u);
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1F2E38u;
label_1f2e38:
    // 0x1f2e38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f2e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f2e3c:
    // 0x1f2e3c: 0x26840690  addiu       $a0, $s4, 0x690
    ctx->pc = 0x1f2e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1680));
label_1f2e40:
    // 0x1f2e40: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f2e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f2e44:
    // 0x1f2e44: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1f2e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1f2e48:
    // 0x1f2e48: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1f2e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1f2e4c:
    // 0x1f2e4c: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1f2e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1f2e50:
    // 0x1f2e50: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f2e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f2e54:
    // 0x1f2e54: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1f2e54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1f2e58:
    // 0x1f2e58: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1f2e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1f2e5c:
    // 0x1f2e5c: 0x24090168  addiu       $t1, $zero, 0x168
    ctx->pc = 0x1f2e5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
label_1f2e60:
    // 0x1f2e60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f2e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f2e64:
    // 0x1f2e64: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1f2e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1f2e68:
    // 0x1f2e68: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1f2e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1f2e6c:
    // 0x1f2e6c: 0x240a00a8  addiu       $t2, $zero, 0xA8
    ctx->pc = 0x1f2e6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_1f2e70:
    // 0x1f2e70: 0xc05df9c  jal         func_177E70
label_1f2e74:
    if (ctx->pc == 0x1F2E74u) {
        ctx->pc = 0x1F2E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2E70u;
        // 0x1f2e74: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2E78u;
        goto label_1f2e78;
    }
    ctx->pc = 0x1F2E70u;
    SET_GPR_U32(ctx, 31, 0x1F2E78u);
    ctx->pc = 0x1F2E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2E70u;
    // 0x1f2e74: 0x240b0008  addiu       $t3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177E70u, 0x1F2E70u, 0x1F2E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2E78u;
label_1f2e78:
    // 0x1f2e78: 0x26830d10  addiu       $v1, $s4, 0xD10
    ctx->pc = 0x1f2e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 3344));
label_1f2e7c:
    // 0x1f2e7c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f2e7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f2e80:
    // 0x1f2e80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f2e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f2e84:
    // 0x1f2e84: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x1f2e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_1f2e88:
    // 0x1f2e88: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1f2e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f2e8c:
    // 0x1f2e8c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1f2e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1f2e90:
    // 0x1f2e90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f2e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2e94:
    // 0x1f2e94: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1f2e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1f2e98:
    // 0x1f2e98: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x1f2e98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1f2e9c:
    // 0x1f2e9c: 0x240801c0  addiu       $t0, $zero, 0x1C0
    ctx->pc = 0x1f2e9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1f2ea0:
    // 0x1f2ea0: 0x3409fe00  ori         $t1, $zero, 0xFE00
    ctx->pc = 0x1f2ea0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1f2ea4:
    // 0x1f2ea4: 0xc054c60  jal         func_153180
label_1f2ea8:
    if (ctx->pc == 0x1F2EA8u) {
        ctx->pc = 0x1F2EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2EA4u;
        // 0x1f2ea8: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2EACu;
        goto label_1f2eac;
    }
    ctx->pc = 0x1F2EA4u;
    SET_GPR_U32(ctx, 31, 0x1F2EACu);
    ctx->pc = 0x1F2EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2EA4u;
    // 0x1f2ea8: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153180u, 0x1F2EA4u, 0x1F2EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2EACu;
label_1f2eac:
    // 0x1f2eac: 0x10000042  b           . + 4 + (0x42 << 2)
label_1f2eb0:
    if (ctx->pc == 0x1F2EB0u) {
        ctx->pc = 0x1F2EB4u;
        goto label_1f2eb4;
    }
    ctx->pc = 0x1F2EACu;
    {
        const bool branch_taken_0x1f2eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2eac) {
            ctx->pc = 0x1F2FB8u;
            { ctx->pc = 0x1f2fb8; return; }
        }
    }
    ctx->pc = 0x1F2EB4u;
label_1f2eb4:
    // 0x1f2eb4: 0x0  nop
    ctx->pc = 0x1f2eb4u;
    // NOP
label_1f2eb8:
    // 0x1f2eb8: 0xc070834  jal         func_1C20D0
label_1f2ebc:
    if (ctx->pc == 0x1F2EBCu) {
        ctx->pc = 0x1F2EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2EB8u;
        // 0x1f2ebc: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2EC0u;
        goto label_1f2ec0;
    }
    ctx->pc = 0x1F2EB8u;
    SET_GPR_U32(ctx, 31, 0x1F2EC0u);
    ctx->pc = 0x1F2EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2EB8u;
    // 0x1f2ebc: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1F2EC0u;
label_1f2ec0:
    // 0x1f2ec0: 0x240300a8  addiu       $v1, $zero, 0xA8
    ctx->pc = 0x1f2ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_1f2ec4:
    // 0x1f2ec4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1f2ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1f2ec8:
    // 0x1f2ec8: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x1f2ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_1f2ecc:
    // 0x1f2ecc: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x1f2eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
label_1f2ed0:
    // 0x1f2ed0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1f2ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f2ed4:
    // 0x1f2ed4: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x1f2ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
label_1f2ed8:
    // 0x1f2ed8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1f2ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f2edc:
    // 0x1f2edc: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x1f2edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
label_1f2ee0:
    // 0x1f2ee0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f2ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f2ee4:
    // 0x1f2ee4: 0xffa00020  sd          $zero, 0x20($sp)
    ctx->pc = 0x1f2ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 0));
label_1f2ee8:
    // 0x1f2ee8: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_1f2eec:
    if (ctx->pc == 0x1F2EECu) {
        ctx->pc = 0x1F2EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2EE8u;
        // 0x1f2eec: 0xffa30028  sd          $v1, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2EF0u;
        goto label_1f2ef0;
    }
    ctx->pc = 0x1F2EE8u;
    {
        const bool branch_taken_0x1f2ee8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2EE8u;
        // 0x1f2eec: 0xffa30028  sd          $v1, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2ee8) {
            ctx->pc = 0x1F2EFCu;
            goto label_1f2efc;
        }
    }
    ctx->pc = 0x1F2EF0u;
label_1f2ef0:
    // 0x1f2ef0: 0x24030038  addiu       $v1, $zero, 0x38
    ctx->pc = 0x1f2ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_1f2ef4:
    // 0x1f2ef4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1f2ef8:
    if (ctx->pc == 0x1F2EF8u) {
        ctx->pc = 0x1F2EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2EF4u;
        // 0x1f2ef8: 0x723023  subu        $a2, $v1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2EFCu;
        goto label_1f2efc;
    }
    ctx->pc = 0x1F2EF4u;
    {
        const bool branch_taken_0x1f2ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2EF4u;
        // 0x1f2ef8: 0x723023  subu        $a2, $v1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2ef4) {
            ctx->pc = 0x1F2F00u;
            goto label_1f2f00;
        }
    }
    ctx->pc = 0x1F2EFCu;
label_1f2efc:
    // 0x1f2efc: 0x26460188  addiu       $a2, $s2, 0x188
    ctx->pc = 0x1f2efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 392));
label_1f2f00:
    // 0x1f2f00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f2f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f2f04:
    // 0x1f2f04: 0x26670054  addiu       $a3, $s3, 0x54
    ctx->pc = 0x1f2f04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
label_1f2f08:
    // 0x1f2f08: 0x26840690  addiu       $a0, $s4, 0x690
    ctx->pc = 0x1f2f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1680));
label_1f2f0c:
    // 0x1f2f0c: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1f2f0cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1f2f10:
    // 0x1f2f10: 0x240900c0  addiu       $t1, $zero, 0xC0
    ctx->pc = 0x1f2f10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_1f2f14:
    // 0x1f2f14: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f2f14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f2f18:
    // 0x1f2f18: 0xc05ded8  jal         func_177B60
label_1f2f1c:
    if (ctx->pc == 0x1F2F1Cu) {
        ctx->pc = 0x1F2F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2F18u;
        // 0x1f2f1c: 0x240b0168  addiu       $t3, $zero, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2F20u;
        goto label_1f2f20;
    }
    ctx->pc = 0x1F2F18u;
    SET_GPR_U32(ctx, 31, 0x1F2F20u);
    ctx->pc = 0x1F2F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2F18u;
    // 0x1f2f1c: 0x240b0168  addiu       $t3, $zero, 0x168 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B60u, 0x1F2F18u, 0x1F2F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2F20u;
label_1f2f20:
    // 0x1f2f20: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_1f2f24:
    if (ctx->pc == 0x1F2F24u) {
        ctx->pc = 0x1F2F28u;
        goto label_1f2f28;
    }
    ctx->pc = 0x1F2F20u;
    {
        const bool branch_taken_0x1f2f20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2f20) {
            ctx->pc = 0x1F2F34u;
            goto label_1f2f34;
        }
    }
    ctx->pc = 0x1F2F28u;
label_1f2f28:
    // 0x1f2f28: 0xa2800733  sb          $zero, 0x733($s4)
    ctx->pc = 0x1f2f28u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1843), (uint8_t)GPR_U32(ctx, 0));
label_1f2f2c:
    // 0x1f2f2c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1f2f30:
    if (ctx->pc == 0x1F2F30u) {
        ctx->pc = 0x1F2F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2F2Cu;
        // 0x1f2f30: 0xa2800703  sb          $zero, 0x703($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1795), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2F34u;
        goto label_1f2f34;
    }
    ctx->pc = 0x1F2F2Cu;
    {
        const bool branch_taken_0x1f2f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2F2Cu;
        // 0x1f2f30: 0xa2800703  sb          $zero, 0x703($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1795), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2f2c) {
            ctx->pc = 0x1F2F40u;
            goto label_1f2f40;
        }
    }
    ctx->pc = 0x1F2F34u;
label_1f2f34:
    // 0x1f2f34: 0x0  nop
    ctx->pc = 0x1f2f34u;
    // NOP
label_1f2f38:
    // 0x1f2f38: 0xa280074b  sb          $zero, 0x74B($s4)
    ctx->pc = 0x1f2f38u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1867), (uint8_t)GPR_U32(ctx, 0));
label_1f2f3c:
    // 0x1f2f3c: 0xa280071b  sb          $zero, 0x71B($s4)
    ctx->pc = 0x1f2f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1819), (uint8_t)GPR_U32(ctx, 0));
label_1f2f40:
    // 0x1f2f40: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_1f2f44:
    if (ctx->pc == 0x1F2F44u) {
        ctx->pc = 0x1F2F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2F40u;
        // 0x1f2f44: 0x26470198  addiu       $a3, $s2, 0x198 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2F48u;
        goto label_1f2f48;
    }
    ctx->pc = 0x1F2F40u;
    {
        const bool branch_taken_0x1f2f40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2F40u;
        // 0x1f2f44: 0x26470198  addiu       $a3, $s2, 0x198 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2f40) {
            ctx->pc = 0x1F2F50u;
            goto label_1f2f50;
        }
    }
    ctx->pc = 0x1F2F48u;
label_1f2f48:
    // 0x1f2f48: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x1f2f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_1f2f4c:
    // 0x1f2f4c: 0x523823  subu        $a3, $v0, $s2
    ctx->pc = 0x1f2f4cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1f2f50:
    // 0x1f2f50: 0x1600000e  bnez        $s0, . + 4 + (0xE << 2)
label_1f2f54:
    if (ctx->pc == 0x1F2F54u) {
        ctx->pc = 0x1F2F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2F50u;
        // 0x1f2f54: 0x2668003c  addiu       $t0, $s3, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2F58u;
        goto label_1f2f58;
    }
    ctx->pc = 0x1F2F50u;
    {
        const bool branch_taken_0x1f2f50 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2F50u;
        // 0x1f2f54: 0x2668003c  addiu       $t0, $s3, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2f50) {
            ctx->pc = 0x1F2F8Cu;
            { ctx->pc = 0x1f2f8c; return; }
        }
    }
    ctx->pc = 0x1F2F58u;
label_1f2f58:
    // 0x1f2f58: 0x26830d10  addiu       $v1, $s4, 0xD10
    ctx->pc = 0x1f2f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 3344));
label_1f2f5c:
    // 0x1f2f5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f2f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f2f60:
    // 0x1f2f60: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x1f2f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_1f2f64:
    // 0x1f2f64: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f2f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2f68:
    // 0x1f2f68: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1f2f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1f2f6c:
    // 0x1f2f6c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1f2f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f2f70:
    // 0x1f2f70: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x1f2f70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1f2f74:
    // 0x1f2f74: 0x3409fe00  ori         $t1, $zero, 0xFE00
    ctx->pc = 0x1f2f74u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1f2f78:
    // 0x1f2f78: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1f2f78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1f2f7c:
    // 0x1f2f7c: 0xc054c60  jal         func_153180
    ctx->pc = 0x1f2f80u;
    return;
}

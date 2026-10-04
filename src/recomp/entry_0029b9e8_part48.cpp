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


void entry_0029b9e8_part48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
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
        case 0x2b2cb0u: goto label_2b2cb0;
        case 0x2b2cb4u: goto label_2b2cb4;
        case 0x2b2cb8u: goto label_2b2cb8;
        case 0x2b2cbcu: goto label_2b2cbc;
        case 0x2b2cc0u: goto label_2b2cc0;
        case 0x2b2cc4u: goto label_2b2cc4;
        case 0x2b2cc8u: goto label_2b2cc8;
        case 0x2b2cccu: goto label_2b2ccc;
        case 0x2b2cd0u: goto label_2b2cd0;
        case 0x2b2cd4u: goto label_2b2cd4;
        case 0x2b2cd8u: goto label_2b2cd8;
        case 0x2b2cdcu: goto label_2b2cdc;
        case 0x2b2ce0u: goto label_2b2ce0;
        case 0x2b2ce4u: goto label_2b2ce4;
        case 0x2b2ce8u: goto label_2b2ce8;
        case 0x2b2cecu: goto label_2b2cec;
        case 0x2b2cf0u: goto label_2b2cf0;
        case 0x2b2cf4u: goto label_2b2cf4;
        case 0x2b2cf8u: goto label_2b2cf8;
        case 0x2b2cfcu: goto label_2b2cfc;
        case 0x2b2d00u: goto label_2b2d00;
        case 0x2b2d04u: goto label_2b2d04;
        case 0x2b2d08u: goto label_2b2d08;
        case 0x2b2d0cu: goto label_2b2d0c;
        case 0x2b2d10u: goto label_2b2d10;
        case 0x2b2d14u: goto label_2b2d14;
        case 0x2b2d18u: goto label_2b2d18;
        case 0x2b2d1cu: goto label_2b2d1c;
        case 0x2b2d20u: goto label_2b2d20;
        case 0x2b2d24u: goto label_2b2d24;
        case 0x2b2d28u: goto label_2b2d28;
        case 0x2b2d2cu: goto label_2b2d2c;
        case 0x2b2d30u: goto label_2b2d30;
        case 0x2b2d34u: goto label_2b2d34;
        case 0x2b2d38u: goto label_2b2d38;
        case 0x2b2d3cu: goto label_2b2d3c;
        case 0x2b2d40u: goto label_2b2d40;
        case 0x2b2d44u: goto label_2b2d44;
        case 0x2b2d48u: goto label_2b2d48;
        case 0x2b2d4cu: goto label_2b2d4c;
        case 0x2b2d50u: goto label_2b2d50;
        case 0x2b2d54u: goto label_2b2d54;
        case 0x2b2d58u: goto label_2b2d58;
        case 0x2b2d5cu: goto label_2b2d5c;
        case 0x2b2d60u: goto label_2b2d60;
        case 0x2b2d64u: goto label_2b2d64;
        case 0x2b2d68u: goto label_2b2d68;
        case 0x2b2d6cu: goto label_2b2d6c;
        case 0x2b2d70u: goto label_2b2d70;
        case 0x2b2d74u: goto label_2b2d74;
        case 0x2b2d78u: goto label_2b2d78;
        case 0x2b2d7cu: goto label_2b2d7c;
        case 0x2b2d80u: goto label_2b2d80;
        case 0x2b2d84u: goto label_2b2d84;
        case 0x2b2d88u: goto label_2b2d88;
        case 0x2b2d8cu: goto label_2b2d8c;
        case 0x2b2d90u: goto label_2b2d90;
        case 0x2b2d94u: goto label_2b2d94;
        case 0x2b2d98u: goto label_2b2d98;
        case 0x2b2d9cu: goto label_2b2d9c;
        case 0x2b2da0u: goto label_2b2da0;
        case 0x2b2da4u: goto label_2b2da4;
        case 0x2b2da8u: goto label_2b2da8;
        case 0x2b2dacu: goto label_2b2dac;
        case 0x2b2db0u: goto label_2b2db0;
        case 0x2b2db4u: goto label_2b2db4;
        case 0x2b2db8u: goto label_2b2db8;
        case 0x2b2dbcu: goto label_2b2dbc;
        case 0x2b2dc0u: goto label_2b2dc0;
        case 0x2b2dc4u: goto label_2b2dc4;
        case 0x2b2dc8u: goto label_2b2dc8;
        case 0x2b2dccu: goto label_2b2dcc;
        case 0x2b2dd0u: goto label_2b2dd0;
        case 0x2b2dd4u: goto label_2b2dd4;
        case 0x2b2dd8u: goto label_2b2dd8;
        case 0x2b2ddcu: goto label_2b2ddc;
        case 0x2b2de0u: goto label_2b2de0;
        case 0x2b2de4u: goto label_2b2de4;
        case 0x2b2de8u: goto label_2b2de8;
        case 0x2b2decu: goto label_2b2dec;
        case 0x2b2df0u: goto label_2b2df0;
        case 0x2b2df4u: goto label_2b2df4;
        case 0x2b2df8u: goto label_2b2df8;
        case 0x2b2dfcu: goto label_2b2dfc;
        case 0x2b2e00u: goto label_2b2e00;
        case 0x2b2e04u: goto label_2b2e04;
        case 0x2b2e08u: goto label_2b2e08;
        case 0x2b2e0cu: goto label_2b2e0c;
        case 0x2b2e10u: goto label_2b2e10;
        case 0x2b2e14u: goto label_2b2e14;
        case 0x2b2e18u: goto label_2b2e18;
        case 0x2b2e1cu: goto label_2b2e1c;
        case 0x2b2e20u: goto label_2b2e20;
        case 0x2b2e24u: goto label_2b2e24;
        case 0x2b2e28u: goto label_2b2e28;
        case 0x2b2e2cu: goto label_2b2e2c;
        case 0x2b2e30u: goto label_2b2e30;
        case 0x2b2e34u: goto label_2b2e34;
        case 0x2b2e38u: goto label_2b2e38;
        case 0x2b2e3cu: goto label_2b2e3c;
        case 0x2b2e40u: goto label_2b2e40;
        case 0x2b2e44u: goto label_2b2e44;
        case 0x2b2e48u: goto label_2b2e48;
        case 0x2b2e4cu: goto label_2b2e4c;
        case 0x2b2e50u: goto label_2b2e50;
        case 0x2b2e54u: goto label_2b2e54;
        case 0x2b2e58u: goto label_2b2e58;
        case 0x2b2e5cu: goto label_2b2e5c;
        case 0x2b2e60u: goto label_2b2e60;
        case 0x2b2e64u: goto label_2b2e64;
        case 0x2b2e68u: goto label_2b2e68;
        case 0x2b2e6cu: goto label_2b2e6c;
        case 0x2b2e70u: goto label_2b2e70;
        case 0x2b2e74u: goto label_2b2e74;
        case 0x2b2e78u: goto label_2b2e78;
        case 0x2b2e7cu: goto label_2b2e7c;
        case 0x2b2e80u: goto label_2b2e80;
        case 0x2b2e84u: goto label_2b2e84;
        case 0x2b2e88u: goto label_2b2e88;
        case 0x2b2e8cu: goto label_2b2e8c;
        case 0x2b2e90u: goto label_2b2e90;
        case 0x2b2e94u: goto label_2b2e94;
        case 0x2b2e98u: goto label_2b2e98;
        case 0x2b2e9cu: goto label_2b2e9c;
        case 0x2b2ea0u: goto label_2b2ea0;
        case 0x2b2ea4u: goto label_2b2ea4;
        case 0x2b2ea8u: goto label_2b2ea8;
        case 0x2b2eacu: goto label_2b2eac;
        case 0x2b2eb0u: goto label_2b2eb0;
        case 0x2b2eb4u: goto label_2b2eb4;
        case 0x2b2eb8u: goto label_2b2eb8;
        case 0x2b2ebcu: goto label_2b2ebc;
        case 0x2b2ec0u: goto label_2b2ec0;
        case 0x2b2ec4u: goto label_2b2ec4;
        case 0x2b2ec8u: goto label_2b2ec8;
        case 0x2b2eccu: goto label_2b2ecc;
        case 0x2b2ed0u: goto label_2b2ed0;
        case 0x2b2ed4u: goto label_2b2ed4;
        case 0x2b2ed8u: goto label_2b2ed8;
        case 0x2b2edcu: goto label_2b2edc;
        case 0x2b2ee0u: goto label_2b2ee0;
        case 0x2b2ee4u: goto label_2b2ee4;
        case 0x2b2ee8u: goto label_2b2ee8;
        case 0x2b2eecu: goto label_2b2eec;
        case 0x2b2ef0u: goto label_2b2ef0;
        case 0x2b2ef4u: goto label_2b2ef4;
        case 0x2b2ef8u: goto label_2b2ef8;
        case 0x2b2efcu: goto label_2b2efc;
        case 0x2b2f00u: goto label_2b2f00;
        case 0x2b2f04u: goto label_2b2f04;
        case 0x2b2f08u: goto label_2b2f08;
        case 0x2b2f0cu: goto label_2b2f0c;
        case 0x2b2f10u: goto label_2b2f10;
        case 0x2b2f14u: goto label_2b2f14;
        case 0x2b2f18u: goto label_2b2f18;
        case 0x2b2f1cu: goto label_2b2f1c;
        case 0x2b2f20u: goto label_2b2f20;
        case 0x2b2f24u: goto label_2b2f24;
        case 0x2b2f28u: goto label_2b2f28;
        case 0x2b2f2cu: goto label_2b2f2c;
        case 0x2b2f30u: goto label_2b2f30;
        case 0x2b2f34u: goto label_2b2f34;
        case 0x2b2f38u: goto label_2b2f38;
        case 0x2b2f3cu: goto label_2b2f3c;
        case 0x2b2f40u: goto label_2b2f40;
        case 0x2b2f44u: goto label_2b2f44;
        case 0x2b2f48u: goto label_2b2f48;
        case 0x2b2f4cu: goto label_2b2f4c;
        case 0x2b2f50u: goto label_2b2f50;
        case 0x2b2f54u: goto label_2b2f54;
        case 0x2b2f58u: goto label_2b2f58;
        case 0x2b2f5cu: goto label_2b2f5c;
        case 0x2b2f60u: goto label_2b2f60;
        case 0x2b2f64u: goto label_2b2f64;
        case 0x2b2f68u: goto label_2b2f68;
        case 0x2b2f6cu: goto label_2b2f6c;
        case 0x2b2f70u: goto label_2b2f70;
        case 0x2b2f74u: goto label_2b2f74;
        case 0x2b2f78u: goto label_2b2f78;
        case 0x2b2f7cu: goto label_2b2f7c;
        case 0x2b2f80u: goto label_2b2f80;
        case 0x2b2f84u: goto label_2b2f84;
        case 0x2b2f88u: goto label_2b2f88;
        case 0x2b2f8cu: goto label_2b2f8c;
        case 0x2b2f90u: goto label_2b2f90;
        case 0x2b2f94u: goto label_2b2f94;
        case 0x2b2f98u: goto label_2b2f98;
        case 0x2b2f9cu: goto label_2b2f9c;
        case 0x2b2fa0u: goto label_2b2fa0;
        case 0x2b2fa4u: goto label_2b2fa4;
        case 0x2b2fa8u: goto label_2b2fa8;
        case 0x2b2facu: goto label_2b2fac;
        case 0x2b2fb0u: goto label_2b2fb0;
        case 0x2b2fb4u: goto label_2b2fb4;
        case 0x2b2fb8u: goto label_2b2fb8;
        case 0x2b2fbcu: goto label_2b2fbc;
        case 0x2b2fc0u: goto label_2b2fc0;
        case 0x2b2fc4u: goto label_2b2fc4;
        case 0x2b2fc8u: goto label_2b2fc8;
        case 0x2b2fccu: goto label_2b2fcc;
        case 0x2b2fd0u: goto label_2b2fd0;
        case 0x2b2fd4u: goto label_2b2fd4;
        case 0x2b2fd8u: goto label_2b2fd8;
        case 0x2b2fdcu: goto label_2b2fdc;
        case 0x2b2fe0u: goto label_2b2fe0;
        case 0x2b2fe4u: goto label_2b2fe4;
        case 0x2b2fe8u: goto label_2b2fe8;
        case 0x2b2fecu: goto label_2b2fec;
        case 0x2b2ff0u: goto label_2b2ff0;
        case 0x2b2ff4u: goto label_2b2ff4;
        case 0x2b2ff8u: goto label_2b2ff8;
        case 0x2b2ffcu: goto label_2b2ffc;
        case 0x2b3000u: goto label_2b3000;
        case 0x2b3004u: goto label_2b3004;
        case 0x2b3008u: goto label_2b3008;
        case 0x2b300cu: goto label_2b300c;
        case 0x2b3010u: goto label_2b3010;
        case 0x2b3014u: goto label_2b3014;
        case 0x2b3018u: goto label_2b3018;
        case 0x2b301cu: goto label_2b301c;
        case 0x2b3020u: goto label_2b3020;
        case 0x2b3024u: goto label_2b3024;
        case 0x2b3028u: goto label_2b3028;
        case 0x2b302cu: goto label_2b302c;
        case 0x2b3030u: goto label_2b3030;
        case 0x2b3034u: goto label_2b3034;
        case 0x2b3038u: goto label_2b3038;
        case 0x2b303cu: goto label_2b303c;
        case 0x2b3040u: goto label_2b3040;
        case 0x2b3044u: goto label_2b3044;
        case 0x2b3048u: goto label_2b3048;
        case 0x2b304cu: goto label_2b304c;
        case 0x2b3050u: goto label_2b3050;
        case 0x2b3054u: goto label_2b3054;
        case 0x2b3058u: goto label_2b3058;
        case 0x2b305cu: goto label_2b305c;
        case 0x2b3060u: goto label_2b3060;
        case 0x2b3064u: goto label_2b3064;
        case 0x2b3068u: goto label_2b3068;
        case 0x2b306cu: goto label_2b306c;
        case 0x2b3070u: goto label_2b3070;
        case 0x2b3074u: goto label_2b3074;
        case 0x2b3078u: goto label_2b3078;
        case 0x2b307cu: goto label_2b307c;
        case 0x2b3080u: goto label_2b3080;
        case 0x2b3084u: goto label_2b3084;
        case 0x2b3088u: goto label_2b3088;
        case 0x2b308cu: goto label_2b308c;
        case 0x2b3090u: goto label_2b3090;
        case 0x2b3094u: goto label_2b3094;
        case 0x2b3098u: goto label_2b3098;
        case 0x2b309cu: goto label_2b309c;
        case 0x2b30a0u: goto label_2b30a0;
        case 0x2b30a4u: goto label_2b30a4;
        case 0x2b30a8u: goto label_2b30a8;
        case 0x2b30acu: goto label_2b30ac;
        case 0x2b30b0u: goto label_2b30b0;
        case 0x2b30b4u: goto label_2b30b4;
        case 0x2b30b8u: goto label_2b30b8;
        case 0x2b30bcu: goto label_2b30bc;
        case 0x2b30c0u: goto label_2b30c0;
        case 0x2b30c4u: goto label_2b30c4;
        case 0x2b30c8u: goto label_2b30c8;
        case 0x2b30ccu: goto label_2b30cc;
        case 0x2b30d0u: goto label_2b30d0;
        case 0x2b30d4u: goto label_2b30d4;
        case 0x2b30d8u: goto label_2b30d8;
        case 0x2b30dcu: goto label_2b30dc;
        case 0x2b30e0u: goto label_2b30e0;
        case 0x2b30e4u: goto label_2b30e4;
        default: return;
    }

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
            goto label_2b308c;
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
            goto label_2b2cb4;
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
            goto label_2b300c;
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
            goto label_2b2cc4;
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
label_2b2cb0:
    // 0x2b2cb0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2cb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2cb4:
    // 0x2b2cb4: 0x1f048bd  .word       0x01F048BD                   # INVALID     $t7, $s0, 0x48BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2cb4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2CB4 raw=0x01F048BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2cb8:
    // 0x2b2cb8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2cb8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2cbc:
    // 0x2b2cbc: 0x1f050be  .word       0x01F050BE                   # dsrl32      $t2, $s0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2cbcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 16) >> (32 + 2));
label_2b2cc0:
    // 0x2b2cc0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2cc0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2cc4:
    // 0x2b2cc4: 0x1f05d0b  .word       0x01F05D0B                   # movn        $t3, $t7, $s0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2cc4u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 15));
label_2b2cc8:
    // 0x2b2cc8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2cc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2ccc:
    // 0x2b2ccc: 0x1f321bc  .word       0x01F321BC                   # dsll32      $a0, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2cccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 6));
label_2b2cd0:
    // 0x2b2cd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2cd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2cd4:
    // 0x2b2cd4: 0x1f328bd  .word       0x01F328BD                   # INVALID     $t7, $s3, 0x28BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2cd4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2CD4 raw=0x01F328BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2cd8:
    // 0x2b2cd8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2cd8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2cdc:
    // 0x2b2cdc: 0x1f330be  .word       0x01F330BE                   # dsrl32      $a2, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2cdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) >> (32 + 2));
label_2b2ce0:
    // 0x2b2ce0: 0x81e4a37d  lb          $a0, -0x5C83($t7)
    ctx->pc = 0x2b2ce0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294943613)));
label_2b2ce4:
    // 0x2b2ce4: 0x1f33ecb  .word       0x01F33ECB                   # movn        $a3, $t7, $s3 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2ce4u;
    if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 15));
label_2b2ce8:
    // 0x2b2ce8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2ce8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2cec:
    // 0x2b2cec: 0x1f141bc  .word       0x01F141BC                   # dsll32      $t0, $s1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2cecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) << (32 + 6));
label_2b2cf0:
    // 0x2b2cf0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2cf0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2cf4:
    // 0x2b2cf4: 0x1f148bd  .word       0x01F148BD                   # INVALID     $t7, $s1, 0x48BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2cf4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2CF4 raw=0x01F148BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2cf8:
    // 0x2b2cf8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2cf8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2cfc:
    // 0x2b2cfc: 0x1f150be  .word       0x01F150BE                   # dsrl32      $t2, $s1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2cfcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 17) >> (32 + 2));
label_2b2d00:
    // 0x2b2d00: 0x3e3d803  .word       0x03E3D803                   # sra         $k1, $v1, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2d00u;
    SET_GPR_S32(ctx, 27, SRA32(GPR_S32(ctx, 3), 0));
label_2b2d04:
    // 0x2b2d04: 0x1f15d4b  .word       0x01F15D4B                   # movn        $t3, $t7, $s1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2d04u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 15));
label_2b2d08:
    // 0x2b2d08: 0x81fb03bc  lb          $k1, 0x3BC($t7)
    ctx->pc = 0x2b2d08u;
    SET_GPR_S32(ctx, 27, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2b2d0c:
    // 0x2b2d0c: 0x1f121bc  .word       0x01F121BC                   # dsll32      $a0, $s1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2d0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 6));
label_2b2d10:
    // 0x2b2d10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2d10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2d14:
    // 0x2b2d14: 0x1f128bd  .word       0x01F128BD                   # INVALID     $t7, $s1, 0x28BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2d14u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2D14 raw=0x01F128BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2d18:
    // 0x2b2d18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2d18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2d1c:
    // 0x2b2d1c: 0x1f130be  .word       0x01F130BE                   # dsrl32      $a2, $s1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2d1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) >> (32 + 2));
label_2b2d20:
    // 0x2b2d20: 0x81e4ab7d  lb          $a0, -0x5483($t7)
    ctx->pc = 0x2b2d20u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294945661)));
label_2b2d24:
    // 0x2b2d24: 0x1f13e4b  .word       0x01F13E4B                   # movn        $a3, $t7, $s1 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2d24u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 15));
label_2b2d28:
    // 0x2b2d28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2d28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2d2c:
    // 0x2b2d2c: 0x1f241bc  .word       0x01F241BC                   # dsll32      $t0, $s2, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2d2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 18) << (32 + 6));
label_2b2d30:
    // 0x2b2d30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2d30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2d34:
    // 0x2b2d34: 0x1f248bd  .word       0x01F248BD                   # INVALID     $t7, $s2, 0x48BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2d34u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2D34 raw=0x01F248BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2d38:
    // 0x2b2d38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2d38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2d3c:
    // 0x2b2d3c: 0x1f250be  .word       0x01F250BE                   # dsrl32      $t2, $s2, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2d3cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 18) >> (32 + 2));
label_2b2d40:
    // 0x2b2d40: 0x3e3c801  .word       0x03E3C801                   # INVALID     $ra, $v1, -0x37FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2d40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B2D40 raw=0x03E3C801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2d44:
    // 0x2b2d44: 0x1f25d8b  .word       0x01F25D8B                   # movn        $t3, $t7, $s2 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2d44u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 15));
label_2b2d48:
    // 0x2b2d48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2d48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2d4c:
    // 0x2b2d4c: 0x1f221bc  .word       0x01F221BC                   # dsll32      $a0, $s2, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2d4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 6));
label_2b2d50:
    // 0x2b2d50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2d50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2d54:
    // 0x2b2d54: 0x1f228bd  .word       0x01F228BD                   # INVALID     $t7, $s2, 0x28BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2d54u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2D54 raw=0x01F228BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2d58:
    // 0x2b2d58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2d58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2d5c:
    // 0x2b2d5c: 0x1f230be  .word       0x01F230BE                   # dsrl32      $a2, $s2, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2d5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) >> (32 + 2));
label_2b2d60:
    // 0x2b2d60: 0x81e4b37d  lb          $a0, -0x4C83($t7)
    ctx->pc = 0x2b2d60u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
label_2b2d64:
    // 0x2b2d64: 0x1f23e8b  .word       0x01F23E8B                   # movn        $a3, $t7, $s2 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2d64u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 15));
label_2b2d68:
    // 0x2b2d68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2d68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2d6c:
    // 0x2b2d6c: 0x1f341bc  .word       0x01F341BC                   # dsll32      $t0, $s3, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2d6cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 19) << (32 + 6));
label_2b2d70:
    // 0x2b2d70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2d70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2d74:
    // 0x2b2d74: 0x1f348bd  .word       0x01F348BD                   # INVALID     $t7, $s3, 0x48BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2d74u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2D74 raw=0x01F348BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2d78:
    // 0x2b2d78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2d78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2d7c:
    // 0x2b2d7c: 0x1f350be  .word       0x01F350BE                   # dsrl32      $t2, $s3, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2d7cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 19) >> (32 + 2));
label_2b2d80:
    // 0x2b2d80: 0x3e3d002  .word       0x03E3D002                   # srl         $k0, $v1, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2d80u;
    SET_GPR_S32(ctx, 26, (int32_t)SRL32(GPR_U32(ctx, 3), 0));
label_2b2d84:
    // 0x2b2d84: 0x1f35dcb  .word       0x01F35DCB                   # movn        $t3, $t7, $s3 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2d84u;
    if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 15));
label_2b2d88:
    // 0x2b2d88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2d88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2d8c:
    // 0x2b2d8c: 0x1f021bc  .word       0x01F021BC                   # dsll32      $a0, $s0, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2d8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 6));
label_2b2d90:
    // 0x2b2d90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2d90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2d94:
    // 0x2b2d94: 0x1f028bd  .word       0x01F028BD                   # INVALID     $t7, $s0, 0x28BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2d94u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2D94 raw=0x01F028BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2d98:
    // 0x2b2d98: 0x11e807ff  beq         $t7, $t0, . + 4 + (0x7FF << 2)
label_2b2d9c:
    if (ctx->pc == 0x2B2D9Cu) {
        ctx->pc = 0x2B2D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2D98u;
        // 0x2b2d9c: 0x1f030be  .word       0x01F030BE                   # dsrl32      $a2, $s0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) >> (32 + 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2DA0u;
        goto label_2b2da0;
    }
    ctx->pc = 0x2B2D98u;
    {
        const bool branch_taken_0x2b2d98 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 8));
        ctx->pc = 0x2B2D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2D98u;
        // 0x2b2d9c: 0x1f030be  .word       0x01F030BE                   # dsrl32      $a2, $s0, 2 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) >> (32 + 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2d98) {
            ctx->pc = 0x2B4D98u;
            { ctx->pc = 0x2b4d98; return; }
        }
    }
    ctx->pc = 0x2B2DA0u;
label_2b2da0:
    // 0x2b2da0: 0x81e4bb7d  lb          $a0, -0x4483($t7)
    ctx->pc = 0x2b2da0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294949757)));
label_2b2da4:
    // 0x2b2da4: 0x1f03e0b  .word       0x01F03E0B                   # movn        $a3, $t7, $s0 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2da4u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 15));
label_2b2da8:
    // 0x2b2da8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2da8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2dac:
    // 0x2b2dac: 0x20f41c  .word       0x0020F41C                   # dmult       $at, $zero # 0000F400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2dacu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B2DAC raw=0x0020F41C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2db0:
    // 0x2b2db0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2db0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2db4:
    // 0x2b2db4: 0x4000ac  .word       0x004000AC                   # dadd        $zero, $v0, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2db4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 2); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2b2db8:
    // 0x2b2db8: 0x33000f  .word       0x0033000F                   # sync # 00330000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2db8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2b2dbc:
    // 0x2b2dbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2dbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2dc0:
    // 0x2b2dc0: 0x3e3c000  .word       0x03E3C000                   # sll         $t8, $v1, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2dc0u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
label_2b2dc4:
    // 0x2b2dc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2dc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2dc8:
    // 0x2b2dc8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2dc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2dcc:
    // 0x2b2dcc: 0x3e8402  .word       0x003E8402                   # srl         $s0, $fp, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2dccu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 30), 16));
label_2b2dd0:
    // 0x2b2dd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2dd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2dd4:
    // 0x2b2dd4: 0x401083  .word       0x00401083                   # sra         $v0, $zero, 2 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2dd4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 0), 2));
label_2b2dd8:
    // 0x2b2dd8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2dd8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2ddc:
    // 0x2b2ddc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2ddcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2de0:
    // 0x2b2de0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2de0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2de4:
    // 0x2b2de4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2de4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2de8:
    // 0x2b2de8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2de8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2dec:
    // 0x2b2dec: 0x3d842f  .word       0x003D842F                   # dsubu       $s0, $at, $sp # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2decu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) - GPR_U64(ctx, 29));
label_2b2df0:
    // 0x2b2df0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2df0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2df4:
    // 0x2b2df4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2df4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2df8:
    // 0x2b2df8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2df8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2dfc:
    // 0x2b2dfc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2dfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2e00:
    // 0x2b2e00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2e00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2e04:
    // 0x2b2e04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2e04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2e08:
    // 0x2b2e08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2e08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2e0c:
    // 0x2b2e0c: 0x208410  .word       0x00208410                   # mfhi        $s0 # 00200400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2e0cu;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_2b2e10:
    // 0x2b2e10: 0x11ef07ff  beq         $t7, $t7, . + 4 + (0x7FF << 2)
label_2b2e14:
    if (ctx->pc == 0x2B2E14u) {
        ctx->pc = 0x2B2E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E10u;
        // 0x2b2e14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2E18u;
        goto label_2b2e18;
    }
    ctx->pc = 0x2B2E10u;
    {
        const bool branch_taken_0x2b2e10 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 15));
        ctx->pc = 0x2B2E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E10u;
        // 0x2b2e14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2e10) {
            ctx->pc = 0x2B4E10u;
            { ctx->pc = 0x2b4e10; return; }
        }
    }
    ctx->pc = 0x2B2E18u;
label_2b2e18:
    // 0x2b2e18: 0x100f7801  beq         $zero, $t7, . + 4 + (0x7801 << 2)
label_2b2e1c:
    if (ctx->pc == 0x2B2E1Cu) {
        ctx->pc = 0x2B2E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E18u;
        // 0x2b2e1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2E20u;
        goto label_2b2e20;
    }
    ctx->pc = 0x2B2E18u;
    {
        const bool branch_taken_0x2b2e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 15));
        ctx->pc = 0x2B2E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E18u;
        // 0x2b2e1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2e18) {
            ctx->pc = 0x2D0E20u;
            return;
        }
    }
    ctx->pc = 0x2B2E20u;
label_2b2e20:
    // 0x2b2e20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2e20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2e24:
    // 0x2b2e24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2e24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2e28:
    // 0x2b2e28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2e28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2e2c:
    // 0x2b2e2c: 0x30817d  .word       0x0030817D                   # INVALID     $at, $s0, -0x7E83 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2e2cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2E2C raw=0x0030817D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2e30:
    // 0x2b2e30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2e30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2e34:
    // 0x2b2e34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2e34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2e38:
    // 0x2b2e38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2e38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2e3c:
    // 0x2b2e3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2e3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2e40:
    // 0x2b2e40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2e40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2e44:
    // 0x2b2e44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2e44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2e48:
    // 0x2b2e48: 0x806a83fc  lb          $t2, -0x7C04($v1)
    ctx->pc = 0x2b2e48u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294935548)));
label_2b2e4c:
    // 0x2b2e4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2e4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2e50:
    // 0x2b2e50: 0x800506bc  lb          $a1, 0x6BC($zero)
    ctx->pc = 0x2b2e50u;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0x6BCu));
label_2b2e54:
    // 0x2b2e54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2e54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2e58:
    // 0x2b2e58: 0x500e0002  beql        $zero, $t6, . + 4 + (0x2 << 2)
label_2b2e5c:
    if (ctx->pc == 0x2B2E5Cu) {
        ctx->pc = 0x2B2E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E58u;
        // 0x2b2e5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2E60u;
        goto label_2b2e60;
    }
    ctx->pc = 0x2B2E58u;
    {
        const bool branch_taken_0x2b2e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        if (branch_taken_0x2b2e58) {
            ctx->pc = 0x2B2E5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2E58u;
            // 0x2b2e5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2E64u;
            goto label_2b2e64;
        }
    }
    ctx->pc = 0x2B2E60u;
label_2b2e60:
    // 0x2b2e60: 0x100d031e  beq         $zero, $t5, . + 4 + (0x31E << 2)
label_2b2e64:
    if (ctx->pc == 0x2B2E64u) {
        ctx->pc = 0x2B2E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E60u;
        // 0x2b2e64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2E68u;
        goto label_2b2e68;
    }
    ctx->pc = 0x2B2E60u;
    {
        const bool branch_taken_0x2b2e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2B2E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E60u;
        // 0x2b2e64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2e60) {
            ctx->pc = 0x2B3ADCu;
            { ctx->pc = 0x2b3adc; return; }
        }
    }
    ctx->pc = 0x2B2E68u;
label_2b2e68:
    // 0x2b2e68: 0x100d038f  beq         $zero, $t5, . + 4 + (0x38F << 2)
label_2b2e6c:
    if (ctx->pc == 0x2B2E6Cu) {
        ctx->pc = 0x2B2E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E68u;
        // 0x2b2e6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2E70u;
        goto label_2b2e70;
    }
    ctx->pc = 0x2B2E68u;
    {
        const bool branch_taken_0x2b2e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 13));
        ctx->pc = 0x2B2E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E68u;
        // 0x2b2e6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2e68) {
            ctx->pc = 0x2B3CA8u;
            { ctx->pc = 0x2b3ca8; return; }
        }
    }
    ctx->pc = 0x2B2E70u;
label_2b2e70:
    // 0x2b2e70: 0x9022803  j           func_408A00C
label_2b2e74:
    if (ctx->pc == 0x2B2E74u) {
        ctx->pc = 0x2B2E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E70u;
        // 0x2b2e74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2E78u;
        goto label_2b2e78;
    }
    ctx->pc = 0x2B2E70u;
    ctx->pc = 0x2B2E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2E70u;
    // 0x2b2e74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x408A00Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x408A00Cu, 0x2B2E70u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B2E78u;
label_2b2e78:
    // 0x2b2e78: 0x45000000  bc1f        . + 4 + (0x0 << 2)
label_2b2e7c:
    if (ctx->pc == 0x2B2E7Cu) {
        ctx->pc = 0x2B2E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E78u;
        // 0x2b2e7c: 0x800002ff  lb          $zero, 0x2FF($zero) (Delay Slot)
        SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 767)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2E80u;
        goto label_2b2e80;
    }
    ctx->pc = 0x2B2E78u;
    {
        const bool branch_taken_0x2b2e78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B2E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E78u;
        // 0x2b2e7c: 0x800002ff  lb          $zero, 0x2FF($zero) (Delay Slot)
        SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 767)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2e78) {
            ctx->pc = 0x2B2E7Cu;
            goto label_2b2e7c;
        }
    }
    ctx->pc = 0x2B2E80u;
label_2b2e80:
    // 0x2b2e80: 0x43b40000  .word       0x43B40000                   # INVALID     $sp, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b2e80u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x1D at 0x2B2E80 raw=0x43B40000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2e84:
    // 0x2b2e84: 0x810006e2  lb          $zero, 0x6E2($t0)
    ctx->pc = 0x2b2e84u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 1762)));
label_2b2e88:
    // 0x2b2e88: 0x220000  .word       0x00220000                   # sll         $zero, $v0, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2e88u;
    
label_2b2e8c:
    // 0x2b2e8c: 0x20065e  .word       0x0020065E                   # ddiv        $zero, $at, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2e8cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2B2E8C raw=0x0020065E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2e90:
    // 0x2b2e90: 0x100c6800  beq         $zero, $t4, . + 4 + (0x6800 << 2)
label_2b2e94:
    if (ctx->pc == 0x2B2E94u) {
        ctx->pc = 0x2B2E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E90u;
        // 0x2b2e94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2E98u;
        goto label_2b2e98;
    }
    ctx->pc = 0x2B2E90u;
    {
        const bool branch_taken_0x2b2e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 12));
        ctx->pc = 0x2B2E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2E90u;
        // 0x2b2e94: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2e90) {
            ctx->pc = 0x2CCE94u;
            return;
        }
    }
    ctx->pc = 0x2B2E98u;
label_2b2e98:
    // 0x2b2e98: 0x800812f4  lb          $t0, 0x12F4($zero)
    ctx->pc = 0x2b2e98u;
    SET_GPR_S32(ctx, 8, (int8_t)FAST_READ8(0x12F4u));
label_2b2e9c:
    // 0x2b2e9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2e9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2ea0:
    // 0x2b2ea0: 0x10062804  beq         $zero, $a2, . + 4 + (0x2804 << 2)
label_2b2ea4:
    if (ctx->pc == 0x2B2EA4u) {
        ctx->pc = 0x2B2EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2EA0u;
        // 0x2b2ea4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2EA8u;
        goto label_2b2ea8;
    }
    ctx->pc = 0x2B2EA0u;
    {
        const bool branch_taken_0x2b2ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 6));
        ctx->pc = 0x2B2EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2EA0u;
        // 0x2b2ea4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2ea0) {
            ctx->pc = 0x2BCEB4u;
            { ctx->pc = 0x2bceb4; return; }
        }
    }
    ctx->pc = 0x2B2EA8u;
label_2b2ea8:
    // 0x2b2ea8: 0x800b31f0  lb          $t3, 0x31F0($zero)
    ctx->pc = 0x2b2ea8u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x31F0u));
label_2b2eac:
    // 0x2b2eac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2eacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2eb0:
    // 0x2b2eb0: 0x1f22800  .word       0x01F22800                   # sll         $a1, $s2, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 0));
label_2b2eb4:
    // 0x2b2eb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2eb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2eb8:
    // 0x2b2eb8: 0x1e12801  .word       0x01E12801                   # INVALID     $t7, $at, 0x2801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2eb8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2B2EB8 raw=0x01E12801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2ebc:
    // 0x2b2ebc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2ebcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2ec0:
    // 0x2b2ec0: 0x1ff2802  .word       0x01FF2802                   # srl         $a1, $ra, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 31), 0));
label_2b2ec4:
    // 0x2b2ec4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2ec4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2ec8:
    // 0x2b2ec8: 0x1f12803  .word       0x01F12803                   # sra         $a1, $s1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2ec8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 17), 0));
label_2b2ecc:
    // 0x2b2ecc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2eccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2ed0:
    // 0x2b2ed0: 0x81ed937d  lb          $t5, -0x6C83($t7)
    ctx->pc = 0x2b2ed0u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294939517)));
label_2b2ed4:
    // 0x2b2ed4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2ed4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2ed8:
    // 0x2b2ed8: 0x81ed0b7d  lb          $t5, 0xB7D($t7)
    ctx->pc = 0x2b2ed8u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2941)));
label_2b2edc:
    // 0x2b2edc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2edcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2ee0:
    // 0x2b2ee0: 0x81edfb7d  lb          $t5, -0x483($t7)
    ctx->pc = 0x2b2ee0u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294966141)));
label_2b2ee4:
    // 0x2b2ee4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2ee4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2ee8:
    // 0x2b2ee8: 0x81ed8b7d  lb          $t5, -0x7483($t7)
    ctx->pc = 0x2b2ee8u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294937469)));
label_2b2eec:
    // 0x2b2eec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2eecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2ef0:
    // 0x2b2ef0: 0x1004000f  beq         $zero, $a0, . + 4 + (0xF << 2)
label_2b2ef4:
    if (ctx->pc == 0x2B2EF4u) {
        ctx->pc = 0x2B2EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2EF0u;
        // 0x2b2ef4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2EF8u;
        goto label_2b2ef8;
    }
    ctx->pc = 0x2B2EF0u;
    {
        const bool branch_taken_0x2b2ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x2B2EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2EF0u;
        // 0x2b2ef4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2ef0) {
            ctx->pc = 0x2B2F30u;
            goto label_2b2f30;
        }
    }
    ctx->pc = 0x2B2EF8u;
label_2b2ef8:
    // 0x2b2ef8: 0x804423fe  lb          $a0, 0x23FE($v0)
    ctx->pc = 0x2b2ef8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 9214)));
label_2b2efc:
    // 0x2b2efc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2efcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2f00:
    // 0x2b2f00: 0x81ff3b7c  lb          $ra, 0x3B7C($t7)
    ctx->pc = 0x2b2f00u;
    SET_GPR_S32(ctx, 31, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 15228)));
label_2b2f04:
    // 0x2b2f04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2f04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2f08:
    // 0x2b2f08: 0x81f13b7c  lb          $s1, 0x3B7C($t7)
    ctx->pc = 0x2b2f08u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 15228)));
label_2b2f0c:
    // 0x2b2f0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2f0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2f10:
    // 0x2b2f10: 0x10090020  beq         $zero, $t1, . + 4 + (0x20 << 2)
label_2b2f14:
    if (ctx->pc == 0x2B2F14u) {
        ctx->pc = 0x2B2F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2F10u;
        // 0x2b2f14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2F18u;
        goto label_2b2f18;
    }
    ctx->pc = 0x2B2F10u;
    {
        const bool branch_taken_0x2b2f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 9));
        ctx->pc = 0x2B2F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2F10u;
        // 0x2b2f14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2f10) {
            ctx->pc = 0x2B2F94u;
            goto label_2b2f94;
        }
    }
    ctx->pc = 0x2B2F18u;
label_2b2f18:
    // 0x2b2f18: 0x1f420e4  .word       0x01F420E4                   # and         $a0, $t7, $s4 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2f18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 15) & GPR_U64(ctx, 20));
label_2b2f1c:
    // 0x2b2f1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2f1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2f20:
    // 0x2b2f20: 0x1f520e5  .word       0x01F520E5                   # or          $a0, $t7, $s5 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2f20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 15) | GPR_U64(ctx, 21));
label_2b2f24:
    // 0x2b2f24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2f24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2f28:
    // 0x2b2f28: 0x1f620e6  .word       0x01F620E6                   # xor         $a0, $t7, $s6 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2f28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 22));
label_2b2f2c:
    // 0x2b2f2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2f2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2f30:
    // 0x2b2f30: 0x1f720e7  .word       0x01F720E7                   # nor         $a0, $t7, $s7 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2f30u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 15) | GPR_U64(ctx, 23)));
label_2b2f34:
    // 0x2b2f34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2f34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2f38:
    // 0x2b2f38: 0x1e12010  .word       0x01E12010                   # mfhi        $a0 # 01E10000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2f38u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2b2f3c:
    // 0x2b2f3c: 0x1f1a1bc  .word       0x01F1A1BC                   # dsll32      $s4, $s1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2f3cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 17) << (32 + 6));
label_2b2f40:
    // 0x2b2f40: 0x0  nop
    ctx->pc = 0x2b2f40u;
    // NOP
label_2b2f44:
    // 0x2b2f44: 0x4a2e0200  vaddx.w     $vf8, $vf0, $vf14x
    ctx->pc = 0x2b2f44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
label_2b2f48:
    // 0x2b2f48: 0x1e32011  .word       0x01E32011                   # mthi        $t7 # 00032000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2f48u;
    ctx->hi = GPR_U64(ctx, 15);
label_2b2f4c:
    // 0x2b2f4c: 0x1f1a8bd  .word       0x01F1A8BD                   # INVALID     $t7, $s1, -0x5743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2f4cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2F4C raw=0x01F1A8BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2f50:
    // 0x2b2f50: 0x1fc2012  .word       0x01FC2012                   # mflo        $a0 # 01FC0000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2f50u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_2b2f54:
    // 0x2b2f54: 0x1f1b0be  .word       0x01F1B0BE                   # dsrl32      $s6, $s1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2f54u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 17) >> (32 + 2));
label_2b2f58:
    // 0x2b2f58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2f58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2f5c:
    // 0x2b2f5c: 0x1f1be8b  .word       0x01F1BE8B                   # movn        $s7, $t7, $s1 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2f5cu;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 15));
label_2b2f60:
    // 0x2b2f60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2f60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2f64:
    // 0x2b2f64: 0x1df09bc  .word       0x01DF09BC                   # dsll32      $at, $ra, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2f64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 31) << (32 + 6));
label_2b2f68:
    // 0x2b2f68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2f68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2f6c:
    // 0x2b2f6c: 0x1df18bd  .word       0x01DF18BD                   # INVALID     $t6, $ra, 0x18BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2f6cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2F6C raw=0x01DF18BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2f70:
    // 0x2b2f70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2f70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2f74:
    // 0x2b2f74: 0x1dfe60a  .word       0x01DFE60A                   # movz        $gp, $t6, $ra # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2f74u;
    if (GPR_U64(ctx, 31) == 0) SET_GPR_VEC(ctx, 28, GPR_VEC(ctx, 14));
label_2b2f78:
    // 0x2b2f78: 0x81fa03bc  lb          $k0, 0x3BC($t7)
    ctx->pc = 0x2b2f78u;
    SET_GPR_S32(ctx, 26, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2b2f7c:
    // 0x2b2f7c: 0x42d07f  .word       0x0042D07F                   # dsra32      $k0, $v0, 1 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2f7cu;
    SET_GPR_S64(ctx, 26, GPR_S64(ctx, 2) >> (32 + 1));
label_2b2f80:
    // 0x2b2f80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2f80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2f84:
    // 0x2b2f84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2f84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2f88:
    // 0x2b2f88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2f88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2f8c:
    // 0x2b2f8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2f8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2f90:
    // 0x2b2f90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2f90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2f94:
    // 0x2b2f94: 0x1e0c610  .word       0x01E0C610                   # mfhi        $t8 # 01E00600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2f94u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_2b2f98:
    // 0x2b2f98: 0x34024800  ori         $v0, $zero, 0x4800
    ctx->pc = 0x2b2f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)18432);
label_2b2f9c:
    // 0x2b2f9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2f9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2fa0:
    // 0x2b2fa0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2fa0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2fa4:
    // 0x2b2fa4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b2fa4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b2fa8:
    // 0x2b2fa8: 0x8233ffe  j           func_8CFFF8
label_2b2fac:
    if (ctx->pc == 0x2B2FACu) {
        ctx->pc = 0x2B2FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2FA8u;
        // 0x2b2fac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2FB0u;
        goto label_2b2fb0;
    }
    ctx->pc = 0x2B2FA8u;
    ctx->pc = 0x2B2FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2FA8u;
    // 0x2b2fac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x8CFFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8CFFF8u, 0x2B2FA8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B2FB0u;
label_2b2fb0:
    // 0x2b2fb0: 0x81ff3b7c  lb          $ra, 0x3B7C($t7)
    ctx->pc = 0x2b2fb0u;
    SET_GPR_S32(ctx, 31, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 15228)));
label_2b2fb4:
    // 0x2b2fb4: 0x1c0d69c  .word       0x01C0D69C                   # dmult       $t6, $zero # 0000D680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2fb4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B2FB4 raw=0x01C0D69C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2fb8:
    // 0x2b2fb8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2fb8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2fbc:
    // 0x2b2fbc: 0x1f861bc  .word       0x01F861BC                   # dsll32      $t4, $t8, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2fbcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 24) << (32 + 6));
label_2b2fc0:
    // 0x2b2fc0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2fc0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2fc4:
    // 0x2b2fc4: 0x1f868bd  .word       0x01F868BD                   # INVALID     $t7, $t8, 0x68BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2fc4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2FC4 raw=0x01F868BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2fc8:
    // 0x2b2fc8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2fc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2fcc:
    // 0x2b2fcc: 0x1f870be  .word       0x01F870BE                   # dsrl32      $t6, $t8, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2fccu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 24) >> (32 + 2));
label_2b2fd0:
    // 0x2b2fd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2fd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2fd4:
    // 0x2b2fd4: 0x1c07ccb  .word       0x01C07CCB                   # movn        $t7, $t6, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2fd4u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 14));
label_2b2fd8:
    // 0x2b2fd8: 0x81f13b7c  lb          $s1, 0x3B7C($t7)
    ctx->pc = 0x2b2fd8u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 15228)));
label_2b2fdc:
    // 0x2b2fdc: 0x1df09bc  .word       0x01DF09BC                   # dsll32      $at, $ra, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2fdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 31) << (32 + 6));
label_2b2fe0:
    // 0x2b2fe0: 0x81f2d33c  lb          $s2, -0x2CC4($t7)
    ctx->pc = 0x2b2fe0u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294955836)));
label_2b2fe4:
    // 0x2b2fe4: 0x1df18bd  .word       0x01DF18BD                   # INVALID     $t6, $ra, 0x18BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2fe4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B2FE4 raw=0x01DF18BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b2fe8:
    // 0x2b2fe8: 0x800a18f0  lb          $t2, 0x18F0($zero)
    ctx->pc = 0x2b2fe8u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x18F0u));
label_2b2fec:
    // 0x2b2fec: 0x19bd684  .word       0x019BD684                   # sllv        $k0, $k1, $t4 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2fecu;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 27), GPR_U32(ctx, 12) & 0x1F));
label_2b2ff0:
    // 0x2b2ff0: 0xa236802  j           func_88DA008
label_2b2ff4:
    if (ctx->pc == 0x2B2FF4u) {
        ctx->pc = 0x2B2FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2FF0u;
        // 0x2b2ff4: 0x1dfe60a  .word       0x01DFE60A                   # movz        $gp, $t6, $ra # 00000600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 31) == 0) SET_GPR_VEC(ctx, 28, GPR_VEC(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2FF8u;
        goto label_2b2ff8;
    }
    ctx->pc = 0x2B2FF0u;
    ctx->pc = 0x2B2FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2FF0u;
    // 0x2b2ff4: 0x1dfe60a  .word       0x01DFE60A                   # movz        $gp, $t6, $ra # 00000600 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    if (GPR_U64(ctx, 31) == 0) SET_GPR_VEC(ctx, 28, GPR_VEC(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x88DA008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x88DA008u, 0x2B2FF0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B2FF8u;
label_2b2ff8:
    // 0x2b2ff8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b2ff8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b2ffc:
    // 0x2b2ffc: 0x1f1a1bc  .word       0x01F1A1BC                   # dsll32      $s4, $s1, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b2ffcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 17) << (32 + 6));
label_2b3000:
    // 0x2b3000: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3000u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b3004:
    // 0x2b3004: 0x1f1a8bd  .word       0x01F1A8BD                   # INVALID     $t7, $s1, -0x5743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3004u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B3004 raw=0x01F1A8BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b3008:
    // 0x2b3008: 0x800a78f0  lb          $t2, 0x78F0($zero)
    ctx->pc = 0x2b3008u;
    SET_GPR_S32(ctx, 10, (int8_t)FAST_READ8(0x78F0u));
label_2b300c:
    // 0x2b300c: 0x1d9d1ff  .word       0x01D9D1FF                   # dsra32      $k0, $t9, 7 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b300cu;
    SET_GPR_S64(ctx, 26, GPR_S64(ctx, 25) >> (32 + 7));
label_2b3010:
    // 0x2b3010: 0x800b5ff2  lb          $t3, 0x5FF2($zero)
    ctx->pc = 0x2b3010u;
    SET_GPR_S32(ctx, 11, (int8_t)FAST_READ8(0x5FF2u));
label_2b3014:
    // 0x2b3014: 0x1f1b0be  .word       0x01F1B0BE                   # dsrl32      $s6, $s1, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3014u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 17) >> (32 + 2));
label_2b3018:
    // 0x2b3018: 0x8182337c  lb          $v0, 0x337C($t4)
    ctx->pc = 0x2b3018u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 13180)));
label_2b301c:
    // 0x2b301c: 0x1f1be8b  .word       0x01F1BE8B                   # movn        $s7, $t7, $s1 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b301cu;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 15));
label_2b3020:
    // 0x2b3020: 0x50020003  beql        $zero, $v0, . + 4 + (0x3 << 2)
label_2b3024:
    if (ctx->pc == 0x2B3024u) {
        ctx->pc = 0x2B3024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3020u;
        // 0x2b3024: 0x1dd9cef  .word       0x01DD9CEF                   # dsubu       $s3, $t6, $sp # 000004C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 14) - GPR_U64(ctx, 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3028u;
        goto label_2b3028;
    }
    ctx->pc = 0x2B3020u;
    {
        const bool branch_taken_0x2b3020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b3020) {
            ctx->pc = 0x2B3024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3020u;
            // 0x2b3024: 0x1dd9cef  .word       0x01DD9CEF                   # dsubu       $s3, $t6, $sp # 000004C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_U64(ctx, 19, GPR_U64(ctx, 14) - GPR_U64(ctx, 29));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3030u;
            goto label_2b3030;
        }
    }
    ctx->pc = 0x2B3028u;
label_2b3028:
    // 0x2b3028: 0x2400000f  addiu       $zero, $zero, 0xF
    ctx->pc = 0x2b3028u;
    // NOP (addiu $zero, ...)
label_2b302c:
    // 0x2b302c: 0x1e0c610  .word       0x01E0C610                   # mfhi        $t8 # 01E00600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b302cu;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_2b3030:
    // 0x2b3030: 0x50010002  beql        $zero, $at, . + 4 + (0x2 << 2)
label_2b3034:
    if (ctx->pc == 0x2B3034u) {
        ctx->pc = 0x2B3034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3030u;
        // 0x2b3034: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3038u;
        goto label_2b3038;
    }
    ctx->pc = 0x2B3030u;
    {
        const bool branch_taken_0x2b3030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        if (branch_taken_0x2b3030) {
            ctx->pc = 0x2B3034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3030u;
            // 0x2b3034: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B303Cu;
            goto label_2b303c;
        }
    }
    ctx->pc = 0x2B3038u;
label_2b3038:
    // 0x2b3038: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3038u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b303c:
    // 0x2b303c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b303cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3040:
    // 0x2b3040: 0xa236802  j           func_88DA008
label_2b3044:
    if (ctx->pc == 0x2B3044u) {
        ctx->pc = 0x2B3044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3040u;
        // 0x2b3044: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3048u;
        goto label_2b3048;
    }
    ctx->pc = 0x2B3040u;
    ctx->pc = 0x2B3044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3040u;
    // 0x2b3044: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x88DA008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x88DA008u, 0x2B3040u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B3048u;
label_2b3048:
    // 0x2b3048: 0x81fa03bc  lb          $k0, 0x3BC($t7)
    ctx->pc = 0x2b3048u;
    SET_GPR_S32(ctx, 26, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
label_2b304c:
    // 0x2b304c: 0x42d07f  .word       0x0042D07F                   # dsra32      $k0, $v0, 1 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b304cu;
    SET_GPR_S64(ctx, 26, GPR_S64(ctx, 2) >> (32 + 1));
label_2b3050:
    // 0x2b3050: 0x8233ffe  j           func_8CFFF8
label_2b3054:
    if (ctx->pc == 0x2B3054u) {
        ctx->pc = 0x2B3054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3050u;
        // 0x2b3054: 0x1f861bc  .word       0x01F861BC                   # dsll32      $t4, $t8, 6 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 24) << (32 + 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3058u;
        goto label_2b3058;
    }
    ctx->pc = 0x2B3050u;
    ctx->pc = 0x2B3054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3050u;
    // 0x2b3054: 0x1f861bc  .word       0x01F861BC                   # dsll32      $t4, $t8, 6 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 24) << (32 + 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x8CFFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8CFFF8u, 0x2B3050u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2B3058u;
label_2b3058:
    // 0x2b3058: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b3058u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b305c:
    // 0x2b305c: 0x1d3997c  .word       0x01D3997C                   # dsll32      $s3, $s3, 5 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b305cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 5));
label_2b3060:
    // 0x2b3060: 0x81cd137d  lb          $t5, 0x137D($t6)
    ctx->pc = 0x2b3060u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 4989)));
label_2b3064:
    // 0x2b3064: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3064u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3068:
    // 0x2b3068: 0x34024800  ori         $v0, $zero, 0x4800
    ctx->pc = 0x2b3068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)18432);
label_2b306c:
    // 0x2b306c: 0x1f2917d  .word       0x01F2917D                   # INVALID     $t7, $s2, -0x6E83 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b306cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B306C raw=0x01F2917D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b3070:
    // 0x2b3070: 0x81ff3b7c  lb          $ra, 0x3B7C($t7)
    ctx->pc = 0x2b3070u;
    SET_GPR_S32(ctx, 31, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 15228)));
label_2b3074:
    // 0x2b3074: 0x1f868bd  .word       0x01F868BD                   # INVALID     $t7, $t8, 0x68BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b3074u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2B3074 raw=0x01F868BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2b3078:
    // 0x2b3078: 0x81ed9b7d  lb          $t5, -0x6483($t7)
    ctx->pc = 0x2b3078u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294941565)));
label_2b307c:
    // 0x2b307c: 0x1f870be  .word       0x01F870BE                   # dsrl32      $t6, $t8, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b307cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 24) >> (32 + 2));
label_2b3080:
    // 0x2b3080: 0x520b07ea  beql        $s0, $t3, . + 4 + (0x7EA << 2)
label_2b3084:
    if (ctx->pc == 0x2B3084u) {
        ctx->pc = 0x2B3084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3080u;
        // 0x2b3084: 0x1c0d69c  .word       0x01C0D69C                   # dmult       $t6, $zero # 0000D680 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B3084 raw=0x01C0D69C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3088u;
        goto label_2b3088;
    }
    ctx->pc = 0x2B3080u;
    {
        const bool branch_taken_0x2b3080 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 11));
        if (branch_taken_0x2b3080) {
            ctx->pc = 0x2B3084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3080u;
            // 0x2b3084: 0x1c0d69c  .word       0x01C0D69C                   # dmult       $t6, $zero # 0000D680 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //             throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2B3084 raw=0x01C0D69C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B502Cu;
            { ctx->pc = 0x2b502c; return; }
        }
    }
    ctx->pc = 0x2B3088u;
label_2b3088:
    // 0x2b3088: 0x81cd937d  lb          $t5, -0x6C83($t6)
    ctx->pc = 0x2b3088u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 4294939517)));
label_2b308c:
    // 0x2b308c: 0x1c07ccb  .word       0x01C07CCB                   # movn        $t7, $t6, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b308cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 15, GPR_VEC(ctx, 14));
label_2b3090:
    // 0x2b3090: 0x800066fc  lb          $zero, 0x66FC($zero)
    ctx->pc = 0x2b3090u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x66FCu));
label_2b3094:
    // 0x2b3094: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b3094u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b3098:
    // 0x2b3098: 0x10010001  beq         $zero, $at, . + 4 + (0x1 << 2)
label_2b309c:
    if (ctx->pc == 0x2B309Cu) {
        ctx->pc = 0x2B309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3098u;
        // 0x2b309c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B30A0u;
        goto label_2b30a0;
    }
    ctx->pc = 0x2B3098u;
    {
        const bool branch_taken_0x2b3098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x2B309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3098u;
        // 0x2b309c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3098) {
            ctx->pc = 0x2B30A0u;
            goto label_2b30a0;
        }
    }
    ctx->pc = 0x2B30A0u;
label_2b30a0:
    // 0x2b30a0: 0x800e0bb1  lb          $t6, 0xBB1($zero)
    ctx->pc = 0x2b30a0u;
    SET_GPR_S32(ctx, 14, (int8_t)FAST_READ8(0xBB1u));
label_2b30a4:
    // 0x2b30a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b30a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b30a8:
    // 0x2b30a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b30a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b30ac:
    // 0x2b30ac: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x2b30acu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_2b30b0:
    // 0x2b30b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x2b30b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
label_2b30b4:
    // 0x2b30b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x2b30b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_2b30b8:
    // 0x2b30b8: 0x0  nop
    ctx->pc = 0x2b30b8u;
    // NOP
label_2b30bc:
    // 0x2b30bc: 0x0  nop
    ctx->pc = 0x2b30bcu;
    // NOP
label_2b30c0:
    // 0x2b30c0: 0x70000000  madd        $zero, $zero, $zero
    ctx->pc = 0x2b30c0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
label_2b30c4:
    // 0x2b30c4: 0x0  nop
    ctx->pc = 0x2b30c4u;
    // NOP
label_2b30c8:
    // 0x2b30c8: 0x0  nop
    ctx->pc = 0x2b30c8u;
    // NOP
label_2b30cc:
    // 0x2b30cc: 0x0  nop
    ctx->pc = 0x2b30ccu;
    // NOP
label_2b30d0:
    // 0x2b30d0: 0x0  nop
    ctx->pc = 0x2b30d0u;
    // NOP
label_2b30d4:
    // 0x2b30d4: 0x0  nop
    ctx->pc = 0x2b30d4u;
    // NOP
label_2b30d8:
    // 0x2b30d8: 0x0  nop
    ctx->pc = 0x2b30d8u;
    // NOP
label_2b30dc:
    // 0x2b30dc: 0x0  nop
    ctx->pc = 0x2b30dcu;
    // NOP
label_2b30e0:
    // 0x2b30e0: 0x0  nop
    ctx->pc = 0x2b30e0u;
    // NOP
label_2b30e4:
    // 0x2b30e4: 0x0  nop
    ctx->pc = 0x2b30e4u;
    // NOP
    ctx->pc = 0x2b30e8u;
    return;
}

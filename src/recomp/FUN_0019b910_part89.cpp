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


void FUN_0019b910_part89(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1c6890u: goto label_1c6890;
        case 0x1c6894u: goto label_1c6894;
        case 0x1c6898u: goto label_1c6898;
        case 0x1c689cu: goto label_1c689c;
        case 0x1c68a0u: goto label_1c68a0;
        case 0x1c68a4u: goto label_1c68a4;
        case 0x1c68a8u: goto label_1c68a8;
        case 0x1c68acu: goto label_1c68ac;
        case 0x1c68b0u: goto label_1c68b0;
        case 0x1c68b4u: goto label_1c68b4;
        case 0x1c68b8u: goto label_1c68b8;
        case 0x1c68bcu: goto label_1c68bc;
        case 0x1c68c0u: goto label_1c68c0;
        case 0x1c68c4u: goto label_1c68c4;
        case 0x1c68c8u: goto label_1c68c8;
        case 0x1c68ccu: goto label_1c68cc;
        case 0x1c68d0u: goto label_1c68d0;
        case 0x1c68d4u: goto label_1c68d4;
        case 0x1c68d8u: goto label_1c68d8;
        case 0x1c68dcu: goto label_1c68dc;
        case 0x1c68e0u: goto label_1c68e0;
        case 0x1c68e4u: goto label_1c68e4;
        case 0x1c68e8u: goto label_1c68e8;
        case 0x1c68ecu: goto label_1c68ec;
        case 0x1c68f0u: goto label_1c68f0;
        case 0x1c68f4u: goto label_1c68f4;
        case 0x1c68f8u: goto label_1c68f8;
        case 0x1c68fcu: goto label_1c68fc;
        case 0x1c6900u: goto label_1c6900;
        case 0x1c6904u: goto label_1c6904;
        case 0x1c6908u: goto label_1c6908;
        case 0x1c690cu: goto label_1c690c;
        case 0x1c6910u: goto label_1c6910;
        case 0x1c6914u: goto label_1c6914;
        case 0x1c6918u: goto label_1c6918;
        case 0x1c691cu: goto label_1c691c;
        case 0x1c6920u: goto label_1c6920;
        case 0x1c6924u: goto label_1c6924;
        case 0x1c6928u: goto label_1c6928;
        case 0x1c692cu: goto label_1c692c;
        case 0x1c6930u: goto label_1c6930;
        case 0x1c6934u: goto label_1c6934;
        case 0x1c6938u: goto label_1c6938;
        case 0x1c693cu: goto label_1c693c;
        case 0x1c6940u: goto label_1c6940;
        case 0x1c6944u: goto label_1c6944;
        case 0x1c6948u: goto label_1c6948;
        case 0x1c694cu: goto label_1c694c;
        case 0x1c6950u: goto label_1c6950;
        case 0x1c6954u: goto label_1c6954;
        case 0x1c6958u: goto label_1c6958;
        case 0x1c695cu: goto label_1c695c;
        case 0x1c6960u: goto label_1c6960;
        case 0x1c6964u: goto label_1c6964;
        case 0x1c6968u: goto label_1c6968;
        case 0x1c696cu: goto label_1c696c;
        case 0x1c6970u: goto label_1c6970;
        case 0x1c6974u: goto label_1c6974;
        case 0x1c6978u: goto label_1c6978;
        case 0x1c697cu: goto label_1c697c;
        case 0x1c6980u: goto label_1c6980;
        case 0x1c6984u: goto label_1c6984;
        case 0x1c6988u: goto label_1c6988;
        case 0x1c698cu: goto label_1c698c;
        case 0x1c6990u: goto label_1c6990;
        case 0x1c6994u: goto label_1c6994;
        case 0x1c6998u: goto label_1c6998;
        case 0x1c699cu: goto label_1c699c;
        case 0x1c69a0u: goto label_1c69a0;
        case 0x1c69a4u: goto label_1c69a4;
        case 0x1c69a8u: goto label_1c69a8;
        case 0x1c69acu: goto label_1c69ac;
        case 0x1c69b0u: goto label_1c69b0;
        case 0x1c69b4u: goto label_1c69b4;
        case 0x1c69b8u: goto label_1c69b8;
        case 0x1c69bcu: goto label_1c69bc;
        case 0x1c69c0u: goto label_1c69c0;
        case 0x1c69c4u: goto label_1c69c4;
        case 0x1c69c8u: goto label_1c69c8;
        case 0x1c69ccu: goto label_1c69cc;
        case 0x1c69d0u: goto label_1c69d0;
        case 0x1c69d4u: goto label_1c69d4;
        case 0x1c69d8u: goto label_1c69d8;
        case 0x1c69dcu: goto label_1c69dc;
        case 0x1c69e0u: goto label_1c69e0;
        case 0x1c69e4u: goto label_1c69e4;
        case 0x1c69e8u: goto label_1c69e8;
        case 0x1c69ecu: goto label_1c69ec;
        case 0x1c69f0u: goto label_1c69f0;
        case 0x1c69f4u: goto label_1c69f4;
        case 0x1c69f8u: goto label_1c69f8;
        case 0x1c69fcu: goto label_1c69fc;
        case 0x1c6a00u: goto label_1c6a00;
        case 0x1c6a04u: goto label_1c6a04;
        case 0x1c6a08u: goto label_1c6a08;
        case 0x1c6a0cu: goto label_1c6a0c;
        case 0x1c6a10u: goto label_1c6a10;
        case 0x1c6a14u: goto label_1c6a14;
        case 0x1c6a18u: goto label_1c6a18;
        case 0x1c6a1cu: goto label_1c6a1c;
        case 0x1c6a20u: goto label_1c6a20;
        case 0x1c6a24u: goto label_1c6a24;
        case 0x1c6a28u: goto label_1c6a28;
        case 0x1c6a2cu: goto label_1c6a2c;
        case 0x1c6a30u: goto label_1c6a30;
        case 0x1c6a34u: goto label_1c6a34;
        case 0x1c6a38u: goto label_1c6a38;
        case 0x1c6a3cu: goto label_1c6a3c;
        case 0x1c6a40u: goto label_1c6a40;
        case 0x1c6a44u: goto label_1c6a44;
        case 0x1c6a48u: goto label_1c6a48;
        case 0x1c6a4cu: goto label_1c6a4c;
        case 0x1c6a50u: goto label_1c6a50;
        case 0x1c6a54u: goto label_1c6a54;
        case 0x1c6a58u: goto label_1c6a58;
        case 0x1c6a5cu: goto label_1c6a5c;
        case 0x1c6a60u: goto label_1c6a60;
        case 0x1c6a64u: goto label_1c6a64;
        case 0x1c6a68u: goto label_1c6a68;
        case 0x1c6a6cu: goto label_1c6a6c;
        case 0x1c6a70u: goto label_1c6a70;
        case 0x1c6a74u: goto label_1c6a74;
        case 0x1c6a78u: goto label_1c6a78;
        case 0x1c6a7cu: goto label_1c6a7c;
        case 0x1c6a80u: goto label_1c6a80;
        case 0x1c6a84u: goto label_1c6a84;
        case 0x1c6a88u: goto label_1c6a88;
        case 0x1c6a8cu: goto label_1c6a8c;
        case 0x1c6a90u: goto label_1c6a90;
        case 0x1c6a94u: goto label_1c6a94;
        case 0x1c6a98u: goto label_1c6a98;
        case 0x1c6a9cu: goto label_1c6a9c;
        case 0x1c6aa0u: goto label_1c6aa0;
        case 0x1c6aa4u: goto label_1c6aa4;
        case 0x1c6aa8u: goto label_1c6aa8;
        case 0x1c6aacu: goto label_1c6aac;
        case 0x1c6ab0u: goto label_1c6ab0;
        case 0x1c6ab4u: goto label_1c6ab4;
        case 0x1c6ab8u: goto label_1c6ab8;
        case 0x1c6abcu: goto label_1c6abc;
        case 0x1c6ac0u: goto label_1c6ac0;
        case 0x1c6ac4u: goto label_1c6ac4;
        case 0x1c6ac8u: goto label_1c6ac8;
        case 0x1c6accu: goto label_1c6acc;
        case 0x1c6ad0u: goto label_1c6ad0;
        case 0x1c6ad4u: goto label_1c6ad4;
        case 0x1c6ad8u: goto label_1c6ad8;
        case 0x1c6adcu: goto label_1c6adc;
        case 0x1c6ae0u: goto label_1c6ae0;
        case 0x1c6ae4u: goto label_1c6ae4;
        case 0x1c6ae8u: goto label_1c6ae8;
        case 0x1c6aecu: goto label_1c6aec;
        case 0x1c6af0u: goto label_1c6af0;
        case 0x1c6af4u: goto label_1c6af4;
        case 0x1c6af8u: goto label_1c6af8;
        case 0x1c6afcu: goto label_1c6afc;
        case 0x1c6b00u: goto label_1c6b00;
        case 0x1c6b04u: goto label_1c6b04;
        case 0x1c6b08u: goto label_1c6b08;
        case 0x1c6b0cu: goto label_1c6b0c;
        case 0x1c6b10u: goto label_1c6b10;
        case 0x1c6b14u: goto label_1c6b14;
        case 0x1c6b18u: goto label_1c6b18;
        case 0x1c6b1cu: goto label_1c6b1c;
        case 0x1c6b20u: goto label_1c6b20;
        case 0x1c6b24u: goto label_1c6b24;
        case 0x1c6b28u: goto label_1c6b28;
        case 0x1c6b2cu: goto label_1c6b2c;
        case 0x1c6b30u: goto label_1c6b30;
        case 0x1c6b34u: goto label_1c6b34;
        case 0x1c6b38u: goto label_1c6b38;
        case 0x1c6b3cu: goto label_1c6b3c;
        case 0x1c6b40u: goto label_1c6b40;
        case 0x1c6b44u: goto label_1c6b44;
        case 0x1c6b48u: goto label_1c6b48;
        case 0x1c6b4cu: goto label_1c6b4c;
        case 0x1c6b50u: goto label_1c6b50;
        case 0x1c6b54u: goto label_1c6b54;
        case 0x1c6b58u: goto label_1c6b58;
        case 0x1c6b5cu: goto label_1c6b5c;
        case 0x1c6b60u: goto label_1c6b60;
        case 0x1c6b64u: goto label_1c6b64;
        case 0x1c6b68u: goto label_1c6b68;
        case 0x1c6b6cu: goto label_1c6b6c;
        case 0x1c6b70u: goto label_1c6b70;
        case 0x1c6b74u: goto label_1c6b74;
        case 0x1c6b78u: goto label_1c6b78;
        case 0x1c6b7cu: goto label_1c6b7c;
        case 0x1c6b80u: goto label_1c6b80;
        case 0x1c6b84u: goto label_1c6b84;
        case 0x1c6b88u: goto label_1c6b88;
        case 0x1c6b8cu: goto label_1c6b8c;
        case 0x1c6b90u: goto label_1c6b90;
        case 0x1c6b94u: goto label_1c6b94;
        case 0x1c6b98u: goto label_1c6b98;
        case 0x1c6b9cu: goto label_1c6b9c;
        case 0x1c6ba0u: goto label_1c6ba0;
        case 0x1c6ba4u: goto label_1c6ba4;
        case 0x1c6ba8u: goto label_1c6ba8;
        case 0x1c6bacu: goto label_1c6bac;
        case 0x1c6bb0u: goto label_1c6bb0;
        case 0x1c6bb4u: goto label_1c6bb4;
        case 0x1c6bb8u: goto label_1c6bb8;
        case 0x1c6bbcu: goto label_1c6bbc;
        case 0x1c6bc0u: goto label_1c6bc0;
        case 0x1c6bc4u: goto label_1c6bc4;
        case 0x1c6bc8u: goto label_1c6bc8;
        case 0x1c6bccu: goto label_1c6bcc;
        case 0x1c6bd0u: goto label_1c6bd0;
        case 0x1c6bd4u: goto label_1c6bd4;
        case 0x1c6bd8u: goto label_1c6bd8;
        case 0x1c6bdcu: goto label_1c6bdc;
        case 0x1c6be0u: goto label_1c6be0;
        case 0x1c6be4u: goto label_1c6be4;
        case 0x1c6be8u: goto label_1c6be8;
        case 0x1c6becu: goto label_1c6bec;
        case 0x1c6bf0u: goto label_1c6bf0;
        case 0x1c6bf4u: goto label_1c6bf4;
        case 0x1c6bf8u: goto label_1c6bf8;
        case 0x1c6bfcu: goto label_1c6bfc;
        case 0x1c6c00u: goto label_1c6c00;
        case 0x1c6c04u: goto label_1c6c04;
        case 0x1c6c08u: goto label_1c6c08;
        case 0x1c6c0cu: goto label_1c6c0c;
        case 0x1c6c10u: goto label_1c6c10;
        case 0x1c6c14u: goto label_1c6c14;
        case 0x1c6c18u: goto label_1c6c18;
        case 0x1c6c1cu: goto label_1c6c1c;
        case 0x1c6c20u: goto label_1c6c20;
        case 0x1c6c24u: goto label_1c6c24;
        case 0x1c6c28u: goto label_1c6c28;
        case 0x1c6c2cu: goto label_1c6c2c;
        case 0x1c6c30u: goto label_1c6c30;
        case 0x1c6c34u: goto label_1c6c34;
        case 0x1c6c38u: goto label_1c6c38;
        case 0x1c6c3cu: goto label_1c6c3c;
        case 0x1c6c40u: goto label_1c6c40;
        case 0x1c6c44u: goto label_1c6c44;
        case 0x1c6c48u: goto label_1c6c48;
        case 0x1c6c4cu: goto label_1c6c4c;
        case 0x1c6c50u: goto label_1c6c50;
        case 0x1c6c54u: goto label_1c6c54;
        case 0x1c6c58u: goto label_1c6c58;
        case 0x1c6c5cu: goto label_1c6c5c;
        case 0x1c6c60u: goto label_1c6c60;
        case 0x1c6c64u: goto label_1c6c64;
        case 0x1c6c68u: goto label_1c6c68;
        case 0x1c6c6cu: goto label_1c6c6c;
        case 0x1c6c70u: goto label_1c6c70;
        case 0x1c6c74u: goto label_1c6c74;
        case 0x1c6c78u: goto label_1c6c78;
        case 0x1c6c7cu: goto label_1c6c7c;
        case 0x1c6c80u: goto label_1c6c80;
        case 0x1c6c84u: goto label_1c6c84;
        case 0x1c6c88u: goto label_1c6c88;
        case 0x1c6c8cu: goto label_1c6c8c;
        case 0x1c6c90u: goto label_1c6c90;
        case 0x1c6c94u: goto label_1c6c94;
        case 0x1c6c98u: goto label_1c6c98;
        case 0x1c6c9cu: goto label_1c6c9c;
        case 0x1c6ca0u: goto label_1c6ca0;
        case 0x1c6ca4u: goto label_1c6ca4;
        case 0x1c6ca8u: goto label_1c6ca8;
        case 0x1c6cacu: goto label_1c6cac;
        case 0x1c6cb0u: goto label_1c6cb0;
        case 0x1c6cb4u: goto label_1c6cb4;
        case 0x1c6cb8u: goto label_1c6cb8;
        case 0x1c6cbcu: goto label_1c6cbc;
        case 0x1c6cc0u: goto label_1c6cc0;
        case 0x1c6cc4u: goto label_1c6cc4;
        case 0x1c6cc8u: goto label_1c6cc8;
        case 0x1c6cccu: goto label_1c6ccc;
        case 0x1c6cd0u: goto label_1c6cd0;
        case 0x1c6cd4u: goto label_1c6cd4;
        case 0x1c6cd8u: goto label_1c6cd8;
        case 0x1c6cdcu: goto label_1c6cdc;
        case 0x1c6ce0u: goto label_1c6ce0;
        case 0x1c6ce4u: goto label_1c6ce4;
        case 0x1c6ce8u: goto label_1c6ce8;
        case 0x1c6cecu: goto label_1c6cec;
        case 0x1c6cf0u: goto label_1c6cf0;
        case 0x1c6cf4u: goto label_1c6cf4;
        case 0x1c6cf8u: goto label_1c6cf8;
        case 0x1c6cfcu: goto label_1c6cfc;
        case 0x1c6d00u: goto label_1c6d00;
        case 0x1c6d04u: goto label_1c6d04;
        case 0x1c6d08u: goto label_1c6d08;
        case 0x1c6d0cu: goto label_1c6d0c;
        case 0x1c6d10u: goto label_1c6d10;
        case 0x1c6d14u: goto label_1c6d14;
        case 0x1c6d18u: goto label_1c6d18;
        case 0x1c6d1cu: goto label_1c6d1c;
        case 0x1c6d20u: goto label_1c6d20;
        case 0x1c6d24u: goto label_1c6d24;
        case 0x1c6d28u: goto label_1c6d28;
        case 0x1c6d2cu: goto label_1c6d2c;
        case 0x1c6d30u: goto label_1c6d30;
        case 0x1c6d34u: goto label_1c6d34;
        case 0x1c6d38u: goto label_1c6d38;
        case 0x1c6d3cu: goto label_1c6d3c;
        case 0x1c6d40u: goto label_1c6d40;
        case 0x1c6d44u: goto label_1c6d44;
        case 0x1c6d48u: goto label_1c6d48;
        case 0x1c6d4cu: goto label_1c6d4c;
        case 0x1c6d50u: goto label_1c6d50;
        case 0x1c6d54u: goto label_1c6d54;
        case 0x1c6d58u: goto label_1c6d58;
        case 0x1c6d5cu: goto label_1c6d5c;
        case 0x1c6d60u: goto label_1c6d60;
        case 0x1c6d64u: goto label_1c6d64;
        case 0x1c6d68u: goto label_1c6d68;
        case 0x1c6d6cu: goto label_1c6d6c;
        case 0x1c6d70u: goto label_1c6d70;
        case 0x1c6d74u: goto label_1c6d74;
        case 0x1c6d78u: goto label_1c6d78;
        case 0x1c6d7cu: goto label_1c6d7c;
        case 0x1c6d80u: goto label_1c6d80;
        case 0x1c6d84u: goto label_1c6d84;
        case 0x1c6d88u: goto label_1c6d88;
        case 0x1c6d8cu: goto label_1c6d8c;
        case 0x1c6d90u: goto label_1c6d90;
        case 0x1c6d94u: goto label_1c6d94;
        case 0x1c6d98u: goto label_1c6d98;
        case 0x1c6d9cu: goto label_1c6d9c;
        case 0x1c6da0u: goto label_1c6da0;
        case 0x1c6da4u: goto label_1c6da4;
        case 0x1c6da8u: goto label_1c6da8;
        case 0x1c6dacu: goto label_1c6dac;
        case 0x1c6db0u: goto label_1c6db0;
        case 0x1c6db4u: goto label_1c6db4;
        case 0x1c6db8u: goto label_1c6db8;
        case 0x1c6dbcu: goto label_1c6dbc;
        case 0x1c6dc0u: goto label_1c6dc0;
        case 0x1c6dc4u: goto label_1c6dc4;
        case 0x1c6dc8u: goto label_1c6dc8;
        case 0x1c6dccu: goto label_1c6dcc;
        case 0x1c6dd0u: goto label_1c6dd0;
        case 0x1c6dd4u: goto label_1c6dd4;
        case 0x1c6dd8u: goto label_1c6dd8;
        case 0x1c6ddcu: goto label_1c6ddc;
        case 0x1c6de0u: goto label_1c6de0;
        case 0x1c6de4u: goto label_1c6de4;
        case 0x1c6de8u: goto label_1c6de8;
        case 0x1c6decu: goto label_1c6dec;
        case 0x1c6df0u: goto label_1c6df0;
        case 0x1c6df4u: goto label_1c6df4;
        case 0x1c6df8u: goto label_1c6df8;
        case 0x1c6dfcu: goto label_1c6dfc;
        case 0x1c6e00u: goto label_1c6e00;
        case 0x1c6e04u: goto label_1c6e04;
        case 0x1c6e08u: goto label_1c6e08;
        case 0x1c6e0cu: goto label_1c6e0c;
        case 0x1c6e10u: goto label_1c6e10;
        case 0x1c6e14u: goto label_1c6e14;
        case 0x1c6e18u: goto label_1c6e18;
        case 0x1c6e1cu: goto label_1c6e1c;
        case 0x1c6e20u: goto label_1c6e20;
        case 0x1c6e24u: goto label_1c6e24;
        case 0x1c6e28u: goto label_1c6e28;
        case 0x1c6e2cu: goto label_1c6e2c;
        case 0x1c6e30u: goto label_1c6e30;
        case 0x1c6e34u: goto label_1c6e34;
        case 0x1c6e38u: goto label_1c6e38;
        case 0x1c6e3cu: goto label_1c6e3c;
        case 0x1c6e40u: goto label_1c6e40;
        case 0x1c6e44u: goto label_1c6e44;
        case 0x1c6e48u: goto label_1c6e48;
        case 0x1c6e4cu: goto label_1c6e4c;
        case 0x1c6e50u: goto label_1c6e50;
        case 0x1c6e54u: goto label_1c6e54;
        case 0x1c6e58u: goto label_1c6e58;
        case 0x1c6e5cu: goto label_1c6e5c;
        case 0x1c6e60u: goto label_1c6e60;
        case 0x1c6e64u: goto label_1c6e64;
        case 0x1c6e68u: goto label_1c6e68;
        case 0x1c6e6cu: goto label_1c6e6c;
        case 0x1c6e70u: goto label_1c6e70;
        case 0x1c6e74u: goto label_1c6e74;
        case 0x1c6e78u: goto label_1c6e78;
        case 0x1c6e7cu: goto label_1c6e7c;
        case 0x1c6e80u: goto label_1c6e80;
        case 0x1c6e84u: goto label_1c6e84;
        case 0x1c6e88u: goto label_1c6e88;
        case 0x1c6e8cu: goto label_1c6e8c;
        case 0x1c6e90u: goto label_1c6e90;
        case 0x1c6e94u: goto label_1c6e94;
        case 0x1c6e98u: goto label_1c6e98;
        case 0x1c6e9cu: goto label_1c6e9c;
        case 0x1c6ea0u: goto label_1c6ea0;
        case 0x1c6ea4u: goto label_1c6ea4;
        case 0x1c6ea8u: goto label_1c6ea8;
        case 0x1c6eacu: goto label_1c6eac;
        case 0x1c6eb0u: goto label_1c6eb0;
        case 0x1c6eb4u: goto label_1c6eb4;
        case 0x1c6eb8u: goto label_1c6eb8;
        case 0x1c6ebcu: goto label_1c6ebc;
        case 0x1c6ec0u: goto label_1c6ec0;
        case 0x1c6ec4u: goto label_1c6ec4;
        case 0x1c6ec8u: goto label_1c6ec8;
        case 0x1c6eccu: goto label_1c6ecc;
        case 0x1c6ed0u: goto label_1c6ed0;
        case 0x1c6ed4u: goto label_1c6ed4;
        case 0x1c6ed8u: goto label_1c6ed8;
        case 0x1c6edcu: goto label_1c6edc;
        case 0x1c6ee0u: goto label_1c6ee0;
        case 0x1c6ee4u: goto label_1c6ee4;
        case 0x1c6ee8u: goto label_1c6ee8;
        case 0x1c6eecu: goto label_1c6eec;
        case 0x1c6ef0u: goto label_1c6ef0;
        case 0x1c6ef4u: goto label_1c6ef4;
        case 0x1c6ef8u: goto label_1c6ef8;
        case 0x1c6efcu: goto label_1c6efc;
        case 0x1c6f00u: goto label_1c6f00;
        case 0x1c6f04u: goto label_1c6f04;
        case 0x1c6f08u: goto label_1c6f08;
        case 0x1c6f0cu: goto label_1c6f0c;
        case 0x1c6f10u: goto label_1c6f10;
        case 0x1c6f14u: goto label_1c6f14;
        case 0x1c6f18u: goto label_1c6f18;
        case 0x1c6f1cu: goto label_1c6f1c;
        case 0x1c6f20u: goto label_1c6f20;
        case 0x1c6f24u: goto label_1c6f24;
        case 0x1c6f28u: goto label_1c6f28;
        case 0x1c6f2cu: goto label_1c6f2c;
        case 0x1c6f30u: goto label_1c6f30;
        case 0x1c6f34u: goto label_1c6f34;
        case 0x1c6f38u: goto label_1c6f38;
        case 0x1c6f3cu: goto label_1c6f3c;
        case 0x1c6f40u: goto label_1c6f40;
        case 0x1c6f44u: goto label_1c6f44;
        case 0x1c6f48u: goto label_1c6f48;
        case 0x1c6f4cu: goto label_1c6f4c;
        case 0x1c6f50u: goto label_1c6f50;
        case 0x1c6f54u: goto label_1c6f54;
        case 0x1c6f58u: goto label_1c6f58;
        case 0x1c6f5cu: goto label_1c6f5c;
        case 0x1c6f60u: goto label_1c6f60;
        case 0x1c6f64u: goto label_1c6f64;
        case 0x1c6f68u: goto label_1c6f68;
        case 0x1c6f6cu: goto label_1c6f6c;
        case 0x1c6f70u: goto label_1c6f70;
        case 0x1c6f74u: goto label_1c6f74;
        case 0x1c6f78u: goto label_1c6f78;
        case 0x1c6f7cu: goto label_1c6f7c;
        case 0x1c6f80u: goto label_1c6f80;
        case 0x1c6f84u: goto label_1c6f84;
        case 0x1c6f88u: goto label_1c6f88;
        case 0x1c6f8cu: goto label_1c6f8c;
        case 0x1c6f90u: goto label_1c6f90;
        case 0x1c6f94u: goto label_1c6f94;
        case 0x1c6f98u: goto label_1c6f98;
        case 0x1c6f9cu: goto label_1c6f9c;
        case 0x1c6fa0u: goto label_1c6fa0;
        case 0x1c6fa4u: goto label_1c6fa4;
        case 0x1c6fa8u: goto label_1c6fa8;
        case 0x1c6facu: goto label_1c6fac;
        case 0x1c6fb0u: goto label_1c6fb0;
        case 0x1c6fb4u: goto label_1c6fb4;
        case 0x1c6fb8u: goto label_1c6fb8;
        case 0x1c6fbcu: goto label_1c6fbc;
        case 0x1c6fc0u: goto label_1c6fc0;
        case 0x1c6fc4u: goto label_1c6fc4;
        case 0x1c6fc8u: goto label_1c6fc8;
        case 0x1c6fccu: goto label_1c6fcc;
        case 0x1c6fd0u: goto label_1c6fd0;
        case 0x1c6fd4u: goto label_1c6fd4;
        case 0x1c6fd8u: goto label_1c6fd8;
        case 0x1c6fdcu: goto label_1c6fdc;
        case 0x1c6fe0u: goto label_1c6fe0;
        case 0x1c6fe4u: goto label_1c6fe4;
        case 0x1c6fe8u: goto label_1c6fe8;
        case 0x1c6fecu: goto label_1c6fec;
        case 0x1c6ff0u: goto label_1c6ff0;
        case 0x1c6ff4u: goto label_1c6ff4;
        case 0x1c6ff8u: goto label_1c6ff8;
        case 0x1c6ffcu: goto label_1c6ffc;
        case 0x1c7000u: goto label_1c7000;
        case 0x1c7004u: goto label_1c7004;
        case 0x1c7008u: goto label_1c7008;
        case 0x1c700cu: goto label_1c700c;
        case 0x1c7010u: goto label_1c7010;
        case 0x1c7014u: goto label_1c7014;
        case 0x1c7018u: goto label_1c7018;
        case 0x1c701cu: goto label_1c701c;
        case 0x1c7020u: goto label_1c7020;
        case 0x1c7024u: goto label_1c7024;
        case 0x1c7028u: goto label_1c7028;
        case 0x1c702cu: goto label_1c702c;
        case 0x1c7030u: goto label_1c7030;
        case 0x1c7034u: goto label_1c7034;
        case 0x1c7038u: goto label_1c7038;
        case 0x1c703cu: goto label_1c703c;
        case 0x1c7040u: goto label_1c7040;
        case 0x1c7044u: goto label_1c7044;
        case 0x1c7048u: goto label_1c7048;
        case 0x1c704cu: goto label_1c704c;
        case 0x1c7050u: goto label_1c7050;
        case 0x1c7054u: goto label_1c7054;
        case 0x1c7058u: goto label_1c7058;
        case 0x1c705cu: goto label_1c705c;
        default: return;
    }

label_1c6890:
    // 0x1c6890: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x1c6890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_1c6894:
    // 0x1c6894: 0xc4a002b4  lwc1        $f0, 0x2B4($a1)
    ctx->pc = 0x1c6894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c6898:
    // 0x1c6898: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c6898u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1c689c:
    // 0x1c689c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1c689cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_1c68a0:
    // 0x1c68a0: 0x1460ffb2  bnez        $v1, . + 4 + (-0x4E << 2)
label_1c68a4:
    if (ctx->pc == 0x1C68A4u) {
        ctx->pc = 0x1C68A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C68A0u;
        // 0x1c68a4: 0xac44001c  sw          $a0, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C68A8u;
        goto label_1c68a8;
    }
    ctx->pc = 0x1C68A0u;
    {
        const bool branch_taken_0x1c68a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C68A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C68A0u;
        // 0x1c68a4: 0xac44001c  sw          $a0, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c68a0) {
            ctx->pc = 0x1C676Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1c676c; return; }
        }
    }
    ctx->pc = 0x1C68A8u;
label_1c68a8:
    // 0x1c68a8: 0x920302e1  lbu         $v1, 0x2E1($s0)
    ctx->pc = 0x1c68a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 737)));
label_1c68ac:
    // 0x1c68ac: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
label_1c68b0:
    if (ctx->pc == 0x1C68B0u) {
        ctx->pc = 0x1C68B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C68ACu;
        // 0x1c68b0: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C68B4u;
        goto label_1c68b4;
    }
    ctx->pc = 0x1C68ACu;
    {
        const bool branch_taken_0x1c68ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C68B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C68ACu;
        // 0x1c68b0: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c68ac) {
            ctx->pc = 0x1C6940u;
            goto label_1c6940;
        }
    }
    ctx->pc = 0x1C68B4u;
label_1c68b4:
    // 0x1c68b4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1c68b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c68b8:
    // 0x1c68b8: 0x10660019  beq         $v1, $a2, . + 4 + (0x19 << 2)
label_1c68bc:
    if (ctx->pc == 0x1C68BCu) {
        ctx->pc = 0x1C68BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C68B8u;
        // 0x1c68bc: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C68C0u;
        goto label_1c68c0;
    }
    ctx->pc = 0x1C68B8u;
    {
        const bool branch_taken_0x1c68b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x1C68BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C68B8u;
        // 0x1c68bc: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c68b8) {
            ctx->pc = 0x1C6920u;
            goto label_1c6920;
        }
    }
    ctx->pc = 0x1C68C0u;
label_1c68c0:
    // 0x1c68c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c68c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c68c4:
    // 0x1c68c4: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_1c68c8:
    if (ctx->pc == 0x1C68C8u) {
        ctx->pc = 0x1C68C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C68C4u;
        // 0x1c68c8: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C68CCu;
        goto label_1c68cc;
    }
    ctx->pc = 0x1C68C4u;
    {
        const bool branch_taken_0x1c68c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C68C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C68C4u;
        // 0x1c68c8: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c68c4) {
            ctx->pc = 0x1C6900u;
            goto label_1c6900;
        }
    }
    ctx->pc = 0x1C68CCu;
label_1c68cc:
    // 0x1c68cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c68ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c68d0:
    // 0x1c68d0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1c68d4:
    if (ctx->pc == 0x1C68D4u) {
        ctx->pc = 0x1C68D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C68D0u;
        // 0x1c68d4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C68D8u;
        goto label_1c68d8;
    }
    ctx->pc = 0x1C68D0u;
    {
        const bool branch_taken_0x1c68d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C68D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C68D0u;
        // 0x1c68d4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c68d0) {
            ctx->pc = 0x1C68E0u;
            goto label_1c68e0;
        }
    }
    ctx->pc = 0x1C68D8u;
label_1c68d8:
    // 0x1c68d8: 0x10000021  b           . + 4 + (0x21 << 2)
label_1c68dc:
    if (ctx->pc == 0x1C68DCu) {
        ctx->pc = 0x1C68DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C68D8u;
        // 0x1c68dc: 0x920202e1  lbu         $v0, 0x2E1($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 737)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C68E0u;
        goto label_1c68e0;
    }
    ctx->pc = 0x1C68D8u;
    {
        const bool branch_taken_0x1c68d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C68DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C68D8u;
        // 0x1c68dc: 0x920202e1  lbu         $v0, 0x2E1($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 737)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c68d8) {
            ctx->pc = 0x1C6960u;
            goto label_1c6960;
        }
    }
    ctx->pc = 0x1C68E0u;
label_1c68e0:
    // 0x1c68e0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1c68e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1c68e4:
    // 0x1c68e4: 0x24a54b50  addiu       $a1, $a1, 0x4B50
    ctx->pc = 0x1c68e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19280));
label_1c68e8:
    // 0x1c68e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c68e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c68ec:
    // 0x1c68ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c68ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c68f0:
    // 0x1c68f0: 0xc066c72  jal         func_19B1C8
label_1c68f4:
    if (ctx->pc == 0x1C68F4u) {
        ctx->pc = 0x1C68F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C68F0u;
        // 0x1c68f4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C68F8u;
        goto label_1c68f8;
    }
    ctx->pc = 0x1C68F0u;
    SET_GPR_U32(ctx, 31, 0x1C68F8u);
    ctx->pc = 0x1C68F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C68F0u;
    // 0x1c68f4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1C68F0u, 0x1C68F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C68F8u;
label_1c68f8:
    // 0x1c68f8: 0x10000018  b           . + 4 + (0x18 << 2)
label_1c68fc:
    if (ctx->pc == 0x1C68FCu) {
        ctx->pc = 0x1C6900u;
        goto label_1c6900;
    }
    ctx->pc = 0x1C68F8u;
    {
        const bool branch_taken_0x1c68f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c68f8) {
            ctx->pc = 0x1C695Cu;
            goto label_1c695c;
        }
    }
    ctx->pc = 0x1C6900u;
label_1c6900:
    // 0x1c6900: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1c6900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1c6904:
    // 0x1c6904: 0x24a54b20  addiu       $a1, $a1, 0x4B20
    ctx->pc = 0x1c6904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19232));
label_1c6908:
    // 0x1c6908: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c6908u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c690c:
    // 0x1c690c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c690cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c6910:
    // 0x1c6910: 0xc066c72  jal         func_19B1C8
label_1c6914:
    if (ctx->pc == 0x1C6914u) {
        ctx->pc = 0x1C6914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6910u;
        // 0x1c6914: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6918u;
        goto label_1c6918;
    }
    ctx->pc = 0x1C6910u;
    SET_GPR_U32(ctx, 31, 0x1C6918u);
    ctx->pc = 0x1C6914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6910u;
    // 0x1c6914: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1C6910u, 0x1C6918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6918u;
label_1c6918:
    // 0x1c6918: 0x10000010  b           . + 4 + (0x10 << 2)
label_1c691c:
    if (ctx->pc == 0x1C691Cu) {
        ctx->pc = 0x1C6920u;
        goto label_1c6920;
    }
    ctx->pc = 0x1C6918u;
    {
        const bool branch_taken_0x1c6918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6918) {
            ctx->pc = 0x1C695Cu;
            goto label_1c695c;
        }
    }
    ctx->pc = 0x1C6920u;
label_1c6920:
    // 0x1c6920: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1c6920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1c6924:
    // 0x1c6924: 0x24a54af0  addiu       $a1, $a1, 0x4AF0
    ctx->pc = 0x1c6924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19184));
label_1c6928:
    // 0x1c6928: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c6928u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c692c:
    // 0x1c692c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c692cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c6930:
    // 0x1c6930: 0xc066c72  jal         func_19B1C8
label_1c6934:
    if (ctx->pc == 0x1C6934u) {
        ctx->pc = 0x1C6934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6930u;
        // 0x1c6934: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6938u;
        goto label_1c6938;
    }
    ctx->pc = 0x1C6930u;
    SET_GPR_U32(ctx, 31, 0x1C6938u);
    ctx->pc = 0x1C6934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6930u;
    // 0x1c6934: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1C6930u, 0x1C6938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6938u;
label_1c6938:
    // 0x1c6938: 0x10000008  b           . + 4 + (0x8 << 2)
label_1c693c:
    if (ctx->pc == 0x1C693Cu) {
        ctx->pc = 0x1C6940u;
        goto label_1c6940;
    }
    ctx->pc = 0x1C6938u;
    {
        const bool branch_taken_0x1c6938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6938) {
            ctx->pc = 0x1C695Cu;
            goto label_1c695c;
        }
    }
    ctx->pc = 0x1C6940u;
label_1c6940:
    // 0x1c6940: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1c6940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1c6944:
    // 0x1c6944: 0x24a54ac0  addiu       $a1, $a1, 0x4AC0
    ctx->pc = 0x1c6944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19136));
label_1c6948:
    // 0x1c6948: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1c6948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c694c:
    // 0x1c694c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c694cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c6950:
    // 0x1c6950: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c6950u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c6954:
    // 0x1c6954: 0xc066c72  jal         func_19B1C8
label_1c6958:
    if (ctx->pc == 0x1C6958u) {
        ctx->pc = 0x1C6958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6954u;
        // 0x1c6958: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C695Cu;
        goto label_1c695c;
    }
    ctx->pc = 0x1C6954u;
    SET_GPR_U32(ctx, 31, 0x1C695Cu);
    ctx->pc = 0x1C6958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6954u;
    // 0x1c6958: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1C6954u, 0x1C695Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C695Cu;
label_1c695c:
    // 0x1c695c: 0x920202e1  lbu         $v0, 0x2E1($s0)
    ctx->pc = 0x1c695cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 737)));
label_1c6960:
    // 0x1c6960: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1c6964:
    if (ctx->pc == 0x1C6964u) {
        ctx->pc = 0x1C6964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6960u;
        // 0x1c6964: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6968u;
        goto label_1c6968;
    }
    ctx->pc = 0x1C6960u;
    {
        const bool branch_taken_0x1c6960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6960u;
        // 0x1c6964: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6960) {
            ctx->pc = 0x1C6990u;
            goto label_1c6990;
        }
    }
    ctx->pc = 0x1C6968u;
label_1c6968:
    // 0x1c6968: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x1c6968u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_1c696c:
    // 0x1c696c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1c696cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1c6970:
    // 0x1c6970: 0x24a54c70  addiu       $a1, $a1, 0x4C70
    ctx->pc = 0x1c6970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19568));
label_1c6974:
    // 0x1c6974: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1c6974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c6978:
    // 0x1c6978: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c6978u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c697c:
    // 0x1c697c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c697cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c6980:
    // 0x1c6980: 0xc066c72  jal         func_19B1C8
label_1c6984:
    if (ctx->pc == 0x1C6984u) {
        ctx->pc = 0x1C6984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6980u;
        // 0x1c6984: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6988u;
        goto label_1c6988;
    }
    ctx->pc = 0x1C6980u;
    SET_GPR_U32(ctx, 31, 0x1C6988u);
    ctx->pc = 0x1C6984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6980u;
    // 0x1c6984: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1C6980u, 0x1C6988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6988u;
label_1c6988:
    // 0x1c6988: 0x10000009  b           . + 4 + (0x9 << 2)
label_1c698c:
    if (ctx->pc == 0x1C698Cu) {
        ctx->pc = 0x1C698Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6988u;
        // 0x1c698c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6990u;
        goto label_1c6990;
    }
    ctx->pc = 0x1C6988u;
    {
        const bool branch_taken_0x1c6988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C698Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6988u;
        // 0x1c698c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6988) {
            ctx->pc = 0x1C69B0u;
            goto label_1c69b0;
        }
    }
    ctx->pc = 0x1C6990u;
label_1c6990:
    // 0x1c6990: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1c6990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1c6994:
    // 0x1c6994: 0x24a54ca0  addiu       $a1, $a1, 0x4CA0
    ctx->pc = 0x1c6994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19616));
label_1c6998:
    // 0x1c6998: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1c6998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c699c:
    // 0x1c699c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c699cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c69a0:
    // 0x1c69a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c69a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c69a4:
    // 0x1c69a4: 0xc066c72  jal         func_19B1C8
label_1c69a8:
    if (ctx->pc == 0x1C69A8u) {
        ctx->pc = 0x1C69A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C69A4u;
        // 0x1c69a8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C69ACu;
        goto label_1c69ac;
    }
    ctx->pc = 0x1C69A4u;
    SET_GPR_U32(ctx, 31, 0x1C69ACu);
    ctx->pc = 0x1C69A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C69A4u;
    // 0x1c69a8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1C69A4u, 0x1C69ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C69ACu;
label_1c69ac:
    // 0x1c69ac: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1c69acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1c69b0:
    // 0x1c69b0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1c69b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1c69b4:
    // 0x1c69b4: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x1c69b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1c69b8:
    // 0x1c69b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c69b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c69bc:
    // 0x1c69bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c69bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c69c0:
    // 0x1c69c0: 0xc066c72  jal         func_19B1C8
label_1c69c4:
    if (ctx->pc == 0x1C69C4u) {
        ctx->pc = 0x1C69C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C69C0u;
        // 0x1c69c4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C69C8u;
        goto label_1c69c8;
    }
    ctx->pc = 0x1C69C0u;
    SET_GPR_U32(ctx, 31, 0x1C69C8u);
    ctx->pc = 0x1C69C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C69C0u;
    // 0x1c69c4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1C69C0u, 0x1C69C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C69C8u;
label_1c69c8:
    // 0x1c69c8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1c69c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1c69cc:
    // 0x1c69cc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1c69ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1c69d0:
    // 0x1c69d0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1c69d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1c69d4:
    // 0x1c69d4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1c69d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c69d8:
    // 0x1c69d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c69d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c69dc:
    // 0x1c69dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c69dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c69e0:
    // 0x1c69e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c69e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c69e4:
    // 0x1c69e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c69e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c69e8:
    // 0x1c69e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c69e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c69ec:
    // 0x1c69ec: 0x3e00008  jr          $ra
label_1c69f0:
    if (ctx->pc == 0x1C69F0u) {
        ctx->pc = 0x1C69F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C69ECu;
        // 0x1c69f0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C69F4u;
        goto label_1c69f4;
    }
    ctx->pc = 0x1C69ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C69F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C69ECu;
        // 0x1c69f0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C69ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C69F4u;
label_1c69f4:
    // 0x1c69f4: 0x0  nop
    ctx->pc = 0x1c69f4u;
    // NOP
label_1c69f8:
    // 0x1c69f8: 0x0  nop
    ctx->pc = 0x1c69f8u;
    // NOP
label_1c69fc:
    // 0x1c69fc: 0x0  nop
    ctx->pc = 0x1c69fcu;
    // NOP
label_1c6a00:
    // 0x1c6a00: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1c6a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_1c6a04:
    // 0x1c6a04: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1c6a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_1c6a08:
    // 0x1c6a08: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1c6a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_1c6a0c:
    // 0x1c6a0c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1c6a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_1c6a10:
    // 0x1c6a10: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1c6a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1c6a14:
    // 0x1c6a14: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1c6a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1c6a18:
    // 0x1c6a18: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1c6a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1c6a1c:
    // 0x1c6a1c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1c6a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1c6a20:
    // 0x1c6a20: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1c6a20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c6a24:
    // 0x1c6a24: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1c6a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1c6a28:
    // 0x1c6a28: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c6a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1c6a2c:
    // 0x1c6a2c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c6a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1c6a30:
    // 0x1c6a30: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1c6a30u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1c6a34:
    // 0x1c6a34: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c6a34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1c6a38:
    // 0x1c6a38: 0x908402e4  lbu         $a0, 0x2E4($a0)
    ctx->pc = 0x1c6a38u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 740)));
label_1c6a3c:
    // 0x1c6a3c: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x1c6a3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_1c6a40:
    // 0x1c6a40: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1c6a44:
    if (ctx->pc == 0x1C6A44u) {
        ctx->pc = 0x1C6A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6A40u;
        // 0x1c6a44: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6A48u;
        goto label_1c6a48;
    }
    ctx->pc = 0x1C6A40u;
    {
        const bool branch_taken_0x1c6a40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6A40u;
        // 0x1c6a44: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6a40) {
            ctx->pc = 0x1C6A54u;
            goto label_1c6a54;
        }
    }
    ctx->pc = 0x1C6A48u;
label_1c6a48:
    // 0x1c6a48: 0x8f838640  lw          $v1, -0x79C0($gp)
    ctx->pc = 0x1c6a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
label_1c6a4c:
    // 0x1c6a4c: 0x148301be  bne         $a0, $v1, . + 4 + (0x1BE << 2)
label_1c6a50:
    if (ctx->pc == 0x1C6A50u) {
        ctx->pc = 0x1C6A54u;
        goto label_1c6a54;
    }
    ctx->pc = 0x1C6A4Cu;
    {
        const bool branch_taken_0x1c6a4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c6a4c) {
            ctx->pc = 0x1C7148u;
            { ctx->pc = 0x1c7148; return; }
        }
    }
    ctx->pc = 0x1C6A54u;
label_1c6a54:
    // 0x1c6a54: 0x8f838640  lw          $v1, -0x79C0($gp)
    ctx->pc = 0x1c6a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
label_1c6a58:
    // 0x1c6a58: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1c6a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1c6a5c:
    // 0x1c6a5c: 0x24429c40  addiu       $v0, $v0, -0x63C0
    ctx->pc = 0x1c6a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941760));
label_1c6a60:
    // 0x1c6a60: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1c6a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1c6a64:
    // 0x1c6a64: 0x26860250  addiu       $a2, $s4, 0x250
    ctx->pc = 0x1c6a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 592));
label_1c6a68:
    // 0x1c6a68: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1c6a68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_1c6a6c:
    // 0x1c6a6c: 0xc066d7a  jal         func_19B5E8
label_1c6a70:
    if (ctx->pc == 0x1C6A70u) {
        ctx->pc = 0x1C6A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6A6Cu;
        // 0x1c6a70: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6A74u;
        goto label_1c6a74;
    }
    ctx->pc = 0x1C6A6Cu;
    SET_GPR_U32(ctx, 31, 0x1C6A74u);
    ctx->pc = 0x1C6A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6A6Cu;
    // 0x1c6a70: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B5E8u, 0x1C6A6Cu, 0x1C6A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6A74u;
label_1c6a74:
    // 0x1c6a74: 0xc07f1a0  jal         func_1FC680
label_1c6a78:
    if (ctx->pc == 0x1C6A78u) {
        ctx->pc = 0x1C6A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6A74u;
        // 0x1c6a78: 0x8f848640  lw          $a0, -0x79C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6A7Cu;
        goto label_1c6a7c;
    }
    ctx->pc = 0x1C6A74u;
    SET_GPR_U32(ctx, 31, 0x1C6A7Cu);
    ctx->pc = 0x1C6A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6A74u;
    // 0x1c6a78: 0x8f848640  lw          $a0, -0x79C0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC680u;
    { ctx->pc = 0x1fc680; return; }
    ctx->pc = 0x1C6A7Cu;
label_1c6a7c:
    // 0x1c6a7c: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x1c6a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c6a80:
    // 0x1c6a80: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c6a80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c6a84:
    // 0x1c6a84: 0x0  nop
    ctx->pc = 0x1c6a84u;
    // NOP
label_1c6a88:
    // 0x1c6a88: 0x450001af  bc1f        . + 4 + (0x1AF << 2)
label_1c6a8c:
    if (ctx->pc == 0x1C6A8Cu) {
        ctx->pc = 0x1C6A90u;
        goto label_1c6a90;
    }
    ctx->pc = 0x1C6A88u;
    {
        const bool branch_taken_0x1c6a88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c6a88) {
            ctx->pc = 0x1C7148u;
            { ctx->pc = 0x1c7148; return; }
        }
    }
    ctx->pc = 0x1C6A90u;
label_1c6a90:
    // 0x1c6a90: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1c6a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_1c6a94:
    // 0x1c6a94: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x1c6a94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_1c6a98:
    // 0x1c6a98: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x1c6a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_1c6a9c:
    // 0x1c6a9c: 0x43b821  addu        $s7, $v0, $v1
    ctx->pc = 0x1c6a9cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c6aa0:
    // 0x1c6aa0: 0x8f828640  lw          $v0, -0x79C0($gp)
    ctx->pc = 0x1c6aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
label_1c6aa4:
    // 0x1c6aa4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1c6aa8:
    if (ctx->pc == 0x1C6AA8u) {
        ctx->pc = 0x1C6AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6AA4u;
        // 0x1c6aa8: 0x1010c0  sll         $v0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6AACu;
        goto label_1c6aac;
    }
    ctx->pc = 0x1C6AA4u;
    {
        const bool branch_taken_0x1c6aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6AA4u;
        // 0x1c6aa8: 0x1010c0  sll         $v0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6aa4) {
            ctx->pc = 0x1C6AC4u;
            goto label_1c6ac4;
        }
    }
    ctx->pc = 0x1C6AACu;
label_1c6aac:
    // 0x1c6aac: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x1c6aacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_1c6ab0:
    // 0x1c6ab0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c6ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1c6ab4:
    // 0x1c6ab4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c6ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1c6ab8:
    // 0x1c6ab8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1c6ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1c6abc:
    // 0x1c6abc: 0x10000005  b           . + 4 + (0x5 << 2)
label_1c6ac0:
    if (ctx->pc == 0x1C6AC0u) {
        ctx->pc = 0x1C6AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6ABCu;
        // 0x1c6ac0: 0x245e0010  addiu       $fp, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6AC4u;
        goto label_1c6ac4;
    }
    ctx->pc = 0x1C6ABCu;
    {
        const bool branch_taken_0x1c6abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6ABCu;
        // 0x1c6ac0: 0x245e0010  addiu       $fp, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6abc) {
            ctx->pc = 0x1C6AD4u;
            goto label_1c6ad4;
        }
    }
    ctx->pc = 0x1C6AC4u;
label_1c6ac4:
    // 0x1c6ac4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1c6ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1c6ac8:
    // 0x1c6ac8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c6ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1c6acc:
    // 0x1c6acc: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1c6accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1c6ad0:
    // 0x1c6ad0: 0x245e0130  addiu       $fp, $v0, 0x130
    ctx->pc = 0x1c6ad0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
label_1c6ad4:
    // 0x1c6ad4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1c6ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1c6ad8:
    // 0x1c6ad8: 0xc066e44  jal         func_19B910
label_1c6adc:
    if (ctx->pc == 0x1C6ADCu) {
        ctx->pc = 0x1C6ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6AD8u;
        // 0x1c6adc: 0x27d00020  addiu       $s0, $fp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6AE0u;
        goto label_1c6ae0;
    }
    ctx->pc = 0x1C6AD8u;
    SET_GPR_U32(ctx, 31, 0x1C6AE0u);
    ctx->pc = 0x1C6ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6AD8u;
    // 0x1c6adc: 0x27d00020  addiu       $s0, $fp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x1C6AE0u;
label_1c6ae0:
    // 0x1c6ae0: 0xc68c02a8  lwc1        $f12, 0x2A8($s4)
    ctx->pc = 0x1c6ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c6ae4:
    // 0x1c6ae4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1c6ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1c6ae8:
    // 0x1c6ae8: 0xc066e6c  jal         func_19B9B0
label_1c6aec:
    if (ctx->pc == 0x1C6AECu) {
        ctx->pc = 0x1C6AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6AE8u;
        // 0x1c6aec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6AF0u;
        goto label_1c6af0;
    }
    ctx->pc = 0x1C6AE8u;
    SET_GPR_U32(ctx, 31, 0x1C6AF0u);
    ctx->pc = 0x1C6AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6AE8u;
    // 0x1c6aec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    { ctx->pc = 0x19b9b0; return; }
    ctx->pc = 0x1C6AF0u;
label_1c6af0:
    // 0x1c6af0: 0x928302e2  lbu         $v1, 0x2E2($s4)
    ctx->pc = 0x1c6af0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 738)));
label_1c6af4:
    // 0x1c6af4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c6af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1c6af8:
    // 0x1c6af8: 0x10620038  beq         $v1, $v0, . + 4 + (0x38 << 2)
label_1c6afc:
    if (ctx->pc == 0x1C6AFCu) {
        ctx->pc = 0x1C6AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6AF8u;
        // 0x1c6afc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6B00u;
        goto label_1c6b00;
    }
    ctx->pc = 0x1C6AF8u;
    {
        const bool branch_taken_0x1c6af8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6AF8u;
        // 0x1c6afc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6af8) {
            ctx->pc = 0x1C6BDCu;
            goto label_1c6bdc;
        }
    }
    ctx->pc = 0x1C6B00u;
label_1c6b00:
    // 0x1c6b00: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
label_1c6b04:
    if (ctx->pc == 0x1C6B04u) {
        ctx->pc = 0x1C6B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B00u;
        // 0x1c6b04: 0x3c010036  lui         $at, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6B08u;
        goto label_1c6b08;
    }
    ctx->pc = 0x1C6B00u;
    {
        const bool branch_taken_0x1c6b00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B00u;
        // 0x1c6b04: 0x3c010036  lui         $at, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6b00) {
            ctx->pc = 0x1C6BB0u;
            goto label_1c6bb0;
        }
    }
    ctx->pc = 0x1C6B08u;
label_1c6b08:
    // 0x1c6b08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c6b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c6b0c:
    // 0x1c6b0c: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
label_1c6b10:
    if (ctx->pc == 0x1C6B10u) {
        ctx->pc = 0x1C6B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B0Cu;
        // 0x1c6b10: 0x3c010036  lui         $at, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6B14u;
        goto label_1c6b14;
    }
    ctx->pc = 0x1C6B0Cu;
    {
        const bool branch_taken_0x1c6b0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B0Cu;
        // 0x1c6b10: 0x3c010036  lui         $at, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6b0c) {
            ctx->pc = 0x1C6B84u;
            goto label_1c6b84;
        }
    }
    ctx->pc = 0x1C6B14u;
label_1c6b14:
    // 0x1c6b14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c6b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c6b18:
    // 0x1c6b18: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_1c6b1c:
    if (ctx->pc == 0x1C6B1Cu) {
        ctx->pc = 0x1C6B20u;
        goto label_1c6b20;
    }
    ctx->pc = 0x1C6B18u;
    {
        const bool branch_taken_0x1c6b18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c6b18) {
            ctx->pc = 0x1C6B58u;
            goto label_1c6b58;
        }
    }
    ctx->pc = 0x1C6B20u;
label_1c6b20:
    // 0x1c6b20: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1c6b24:
    if (ctx->pc == 0x1C6B24u) {
        ctx->pc = 0x1C6B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B20u;
        // 0x1c6b24: 0x3c010036  lui         $at, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6B28u;
        goto label_1c6b28;
    }
    ctx->pc = 0x1C6B20u;
    {
        const bool branch_taken_0x1c6b20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B20u;
        // 0x1c6b24: 0x3c010036  lui         $at, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6b20) {
            ctx->pc = 0x1C6B30u;
            goto label_1c6b30;
        }
    }
    ctx->pc = 0x1C6B28u;
label_1c6b28:
    // 0x1c6b28: 0x1000002d  b           . + 4 + (0x2D << 2)
label_1c6b2c:
    if (ctx->pc == 0x1C6B2Cu) {
        ctx->pc = 0x1C6B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B28u;
        // 0x1c6b2c: 0xc68c02a0  lwc1        $f12, 0x2A0($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6B30u;
        goto label_1c6b30;
    }
    ctx->pc = 0x1C6B28u;
    {
        const bool branch_taken_0x1c6b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B28u;
        // 0x1c6b2c: 0xc68c02a0  lwc1        $f12, 0x2A0($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6b28) {
            ctx->pc = 0x1C6BE0u;
            goto label_1c6be0;
        }
    }
    ctx->pc = 0x1C6B30u;
label_1c6b30:
    // 0x1c6b30: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1c6b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1c6b34:
    // 0x1c6b34: 0xc42c39f0  lwc1        $f12, 0x39F0($at)
    ctx->pc = 0x1c6b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 14832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c6b38:
    // 0x1c6b38: 0xc066e96  jal         func_19BA58
label_1c6b3c:
    if (ctx->pc == 0x1C6B3Cu) {
        ctx->pc = 0x1C6B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B38u;
        // 0x1c6b3c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6B40u;
        goto label_1c6b40;
    }
    ctx->pc = 0x1C6B38u;
    SET_GPR_U32(ctx, 31, 0x1C6B40u);
    ctx->pc = 0x1C6B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B38u;
    // 0x1c6b3c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x1C6B40u;
label_1c6b40:
    // 0x1c6b40: 0xc68c02a4  lwc1        $f12, 0x2A4($s4)
    ctx->pc = 0x1c6b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c6b44:
    // 0x1c6b44: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1c6b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1c6b48:
    // 0x1c6b48: 0xc066ec0  jal         func_19BB00
label_1c6b4c:
    if (ctx->pc == 0x1C6B4Cu) {
        ctx->pc = 0x1C6B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B48u;
        // 0x1c6b4c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6B50u;
        goto label_1c6b50;
    }
    ctx->pc = 0x1C6B48u;
    SET_GPR_U32(ctx, 31, 0x1C6B50u);
    ctx->pc = 0x1C6B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B48u;
    // 0x1c6b4c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x1C6B50u;
label_1c6b50:
    // 0x1c6b50: 0x1000002b  b           . + 4 + (0x2B << 2)
label_1c6b54:
    if (ctx->pc == 0x1C6B54u) {
        ctx->pc = 0x1C6B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B50u;
        // 0x1c6b54: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6B58u;
        goto label_1c6b58;
    }
    ctx->pc = 0x1C6B50u;
    {
        const bool branch_taken_0x1c6b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B50u;
        // 0x1c6b54: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6b50) {
            ctx->pc = 0x1C6C00u;
            goto label_1c6c00;
        }
    }
    ctx->pc = 0x1C6B58u;
label_1c6b58:
    // 0x1c6b58: 0xc68c02a0  lwc1        $f12, 0x2A0($s4)
    ctx->pc = 0x1c6b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c6b5c:
    // 0x1c6b5c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1c6b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1c6b60:
    // 0x1c6b60: 0xc066e96  jal         func_19BA58
label_1c6b64:
    if (ctx->pc == 0x1C6B64u) {
        ctx->pc = 0x1C6B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B60u;
        // 0x1c6b64: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6B68u;
        goto label_1c6b68;
    }
    ctx->pc = 0x1C6B60u;
    SET_GPR_U32(ctx, 31, 0x1C6B68u);
    ctx->pc = 0x1C6B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B60u;
    // 0x1c6b64: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x1C6B68u;
label_1c6b68:
    // 0x1c6b68: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1c6b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1c6b6c:
    // 0x1c6b6c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1c6b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1c6b70:
    // 0x1c6b70: 0xc42c39f4  lwc1        $f12, 0x39F4($at)
    ctx->pc = 0x1c6b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 14836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c6b74:
    // 0x1c6b74: 0xc066ec0  jal         func_19BB00
label_1c6b78:
    if (ctx->pc == 0x1C6B78u) {
        ctx->pc = 0x1C6B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B74u;
        // 0x1c6b78: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6B7Cu;
        goto label_1c6b7c;
    }
    ctx->pc = 0x1C6B74u;
    SET_GPR_U32(ctx, 31, 0x1C6B7Cu);
    ctx->pc = 0x1C6B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B74u;
    // 0x1c6b78: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x1C6B7Cu;
label_1c6b7c:
    // 0x1c6b7c: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1c6b80:
    if (ctx->pc == 0x1C6B80u) {
        ctx->pc = 0x1C6B84u;
        goto label_1c6b84;
    }
    ctx->pc = 0x1C6B7Cu;
    {
        const bool branch_taken_0x1c6b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6b7c) {
            ctx->pc = 0x1C6BFCu;
            goto label_1c6bfc;
        }
    }
    ctx->pc = 0x1C6B84u;
label_1c6b84:
    // 0x1c6b84: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1c6b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1c6b88:
    // 0x1c6b88: 0xc42c39f0  lwc1        $f12, 0x39F0($at)
    ctx->pc = 0x1c6b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 14832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c6b8c:
    // 0x1c6b8c: 0xc066e96  jal         func_19BA58
label_1c6b90:
    if (ctx->pc == 0x1C6B90u) {
        ctx->pc = 0x1C6B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B8Cu;
        // 0x1c6b90: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6B94u;
        goto label_1c6b94;
    }
    ctx->pc = 0x1C6B8Cu;
    SET_GPR_U32(ctx, 31, 0x1C6B94u);
    ctx->pc = 0x1C6B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B8Cu;
    // 0x1c6b90: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x1C6B94u;
label_1c6b94:
    // 0x1c6b94: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1c6b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1c6b98:
    // 0x1c6b98: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1c6b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1c6b9c:
    // 0x1c6b9c: 0xc42c39f4  lwc1        $f12, 0x39F4($at)
    ctx->pc = 0x1c6b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 14836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c6ba0:
    // 0x1c6ba0: 0xc066ec0  jal         func_19BB00
label_1c6ba4:
    if (ctx->pc == 0x1C6BA4u) {
        ctx->pc = 0x1C6BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BA0u;
        // 0x1c6ba4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6BA8u;
        goto label_1c6ba8;
    }
    ctx->pc = 0x1C6BA0u;
    SET_GPR_U32(ctx, 31, 0x1C6BA8u);
    ctx->pc = 0x1C6BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BA0u;
    // 0x1c6ba4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x1C6BA8u;
label_1c6ba8:
    // 0x1c6ba8: 0x10000014  b           . + 4 + (0x14 << 2)
label_1c6bac:
    if (ctx->pc == 0x1C6BACu) {
        ctx->pc = 0x1C6BB0u;
        goto label_1c6bb0;
    }
    ctx->pc = 0x1C6BA8u;
    {
        const bool branch_taken_0x1c6ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6ba8) {
            ctx->pc = 0x1C6BFCu;
            goto label_1c6bfc;
        }
    }
    ctx->pc = 0x1C6BB0u;
label_1c6bb0:
    // 0x1c6bb0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1c6bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1c6bb4:
    // 0x1c6bb4: 0xc42c39f0  lwc1        $f12, 0x39F0($at)
    ctx->pc = 0x1c6bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 14832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c6bb8:
    // 0x1c6bb8: 0xc066e96  jal         func_19BA58
label_1c6bbc:
    if (ctx->pc == 0x1C6BBCu) {
        ctx->pc = 0x1C6BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BB8u;
        // 0x1c6bbc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6BC0u;
        goto label_1c6bc0;
    }
    ctx->pc = 0x1C6BB8u;
    SET_GPR_U32(ctx, 31, 0x1C6BC0u);
    ctx->pc = 0x1C6BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BB8u;
    // 0x1c6bbc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x1C6BC0u;
label_1c6bc0:
    // 0x1c6bc0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1c6bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1c6bc4:
    // 0x1c6bc4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1c6bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1c6bc8:
    // 0x1c6bc8: 0xc42c39f4  lwc1        $f12, 0x39F4($at)
    ctx->pc = 0x1c6bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 14836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c6bcc:
    // 0x1c6bcc: 0xc066ec0  jal         func_19BB00
label_1c6bd0:
    if (ctx->pc == 0x1C6BD0u) {
        ctx->pc = 0x1C6BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BCCu;
        // 0x1c6bd0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6BD4u;
        goto label_1c6bd4;
    }
    ctx->pc = 0x1C6BCCu;
    SET_GPR_U32(ctx, 31, 0x1C6BD4u);
    ctx->pc = 0x1C6BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BCCu;
    // 0x1c6bd0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x1C6BD4u;
label_1c6bd4:
    // 0x1c6bd4: 0x10000009  b           . + 4 + (0x9 << 2)
label_1c6bd8:
    if (ctx->pc == 0x1C6BD8u) {
        ctx->pc = 0x1C6BDCu;
        goto label_1c6bdc;
    }
    ctx->pc = 0x1C6BD4u;
    {
        const bool branch_taken_0x1c6bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6bd4) {
            ctx->pc = 0x1C6BFCu;
            goto label_1c6bfc;
        }
    }
    ctx->pc = 0x1C6BDCu;
label_1c6bdc:
    // 0x1c6bdc: 0xc68c02a0  lwc1        $f12, 0x2A0($s4)
    ctx->pc = 0x1c6bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c6be0:
    // 0x1c6be0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1c6be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1c6be4:
    // 0x1c6be4: 0xc066e96  jal         func_19BA58
label_1c6be8:
    if (ctx->pc == 0x1C6BE8u) {
        ctx->pc = 0x1C6BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BE4u;
        // 0x1c6be8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6BECu;
        goto label_1c6bec;
    }
    ctx->pc = 0x1C6BE4u;
    SET_GPR_U32(ctx, 31, 0x1C6BECu);
    ctx->pc = 0x1C6BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BE4u;
    // 0x1c6be8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    { ctx->pc = 0x19ba58; return; }
    ctx->pc = 0x1C6BECu;
label_1c6bec:
    // 0x1c6bec: 0xc68c02a4  lwc1        $f12, 0x2A4($s4)
    ctx->pc = 0x1c6becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c6bf0:
    // 0x1c6bf0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1c6bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1c6bf4:
    // 0x1c6bf4: 0xc066ec0  jal         func_19BB00
label_1c6bf8:
    if (ctx->pc == 0x1C6BF8u) {
        ctx->pc = 0x1C6BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BF4u;
        // 0x1c6bf8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6BFCu;
        goto label_1c6bfc;
    }
    ctx->pc = 0x1C6BF4u;
    SET_GPR_U32(ctx, 31, 0x1C6BFCu);
    ctx->pc = 0x1C6BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BF4u;
    // 0x1c6bf8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x1C6BFCu;
label_1c6bfc:
    // 0x1c6bfc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1c6bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1c6c00:
    // 0x1c6c00: 0x26860250  addiu       $a2, $s4, 0x250
    ctx->pc = 0x1c6c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 592));
label_1c6c04:
    // 0x1c6c04: 0xc066e1a  jal         func_19B868
label_1c6c08:
    if (ctx->pc == 0x1C6C08u) {
        ctx->pc = 0x1C6C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C04u;
        // 0x1c6c08: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6C0Cu;
        goto label_1c6c0c;
    }
    ctx->pc = 0x1C6C04u;
    SET_GPR_U32(ctx, 31, 0x1C6C0Cu);
    ctx->pc = 0x1C6C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C04u;
    // 0x1c6c08: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B868u, 0x1C6C04u, 0x1C6C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C0Cu;
label_1c6c0c:
    // 0x1c6c0c: 0xc68c02d0  lwc1        $f12, 0x2D0($s4)
    ctx->pc = 0x1c6c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c6c10:
    // 0x1c6c10: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1c6c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1c6c14:
    // 0x1c6c14: 0xc066e14  jal         func_19B850
label_1c6c18:
    if (ctx->pc == 0x1C6C18u) {
        ctx->pc = 0x1C6C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C14u;
        // 0x1c6c18: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6C1Cu;
        goto label_1c6c1c;
    }
    ctx->pc = 0x1C6C14u;
    SET_GPR_U32(ctx, 31, 0x1C6C1Cu);
    ctx->pc = 0x1C6C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C14u;
    // 0x1c6c18: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x1C6C14u, 0x1C6C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C1Cu;
label_1c6c1c:
    // 0x1c6c1c: 0xc68c02d4  lwc1        $f12, 0x2D4($s4)
    ctx->pc = 0x1c6c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c6c20:
    // 0x1c6c20: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1c6c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1c6c24:
    // 0x1c6c24: 0xc066e14  jal         func_19B850
label_1c6c28:
    if (ctx->pc == 0x1C6C28u) {
        ctx->pc = 0x1C6C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C24u;
        // 0x1c6c28: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6C2Cu;
        goto label_1c6c2c;
    }
    ctx->pc = 0x1C6C24u;
    SET_GPR_U32(ctx, 31, 0x1C6C2Cu);
    ctx->pc = 0x1C6C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C24u;
    // 0x1c6c28: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x1C6C24u, 0x1C6C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C2Cu;
label_1c6c2c:
    // 0x1c6c2c: 0xc68c02d8  lwc1        $f12, 0x2D8($s4)
    ctx->pc = 0x1c6c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c6c30:
    // 0x1c6c30: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1c6c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1c6c34:
    // 0x1c6c34: 0xc066e14  jal         func_19B850
label_1c6c38:
    if (ctx->pc == 0x1C6C38u) {
        ctx->pc = 0x1C6C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C34u;
        // 0x1c6c38: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6C3Cu;
        goto label_1c6c3c;
    }
    ctx->pc = 0x1C6C34u;
    SET_GPR_U32(ctx, 31, 0x1C6C3Cu);
    ctx->pc = 0x1C6C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C34u;
    // 0x1c6c38: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x1C6C34u, 0x1C6C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C3Cu;
label_1c6c3c:
    // 0x1c6c3c: 0x8f838640  lw          $v1, -0x79C0($gp)
    ctx->pc = 0x1c6c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
label_1c6c40:
    // 0x1c6c40: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1c6c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1c6c44:
    // 0x1c6c44: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1c6c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1c6c48:
    // 0x1c6c48: 0x24429bc0  addiu       $v0, $v0, -0x6440
    ctx->pc = 0x1c6c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941632));
label_1c6c4c:
    // 0x1c6c4c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1c6c4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c6c50:
    // 0x1c6c50: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1c6c50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_1c6c54:
    // 0x1c6c54: 0xc066d86  jal         func_19B618
label_1c6c58:
    if (ctx->pc == 0x1C6C58u) {
        ctx->pc = 0x1C6C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C54u;
        // 0x1c6c58: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6C5Cu;
        goto label_1c6c5c;
    }
    ctx->pc = 0x1C6C54u;
    SET_GPR_U32(ctx, 31, 0x1C6C5Cu);
    ctx->pc = 0x1C6C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C54u;
    // 0x1c6c58: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B618u, 0x1C6C54u, 0x1C6C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C5Cu;
label_1c6c5c:
    // 0x1c6c5c: 0x928202e0  lbu         $v0, 0x2E0($s4)
    ctx->pc = 0x1c6c5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 736)));
label_1c6c60:
    // 0x1c6c60: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c6c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1c6c64:
    // 0x1c6c64: 0x1040008c  beqz        $v0, . + 4 + (0x8C << 2)
label_1c6c68:
    if (ctx->pc == 0x1C6C68u) {
        ctx->pc = 0x1C6C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C64u;
        // 0x1c6c68: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6C6Cu;
        goto label_1c6c6c;
    }
    ctx->pc = 0x1C6C64u;
    {
        const bool branch_taken_0x1c6c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C64u;
        // 0x1c6c68: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6c64) {
            ctx->pc = 0x1C6E98u;
            goto label_1c6e98;
        }
    }
    ctx->pc = 0x1C6C6Cu;
label_1c6c6c:
    // 0x1c6c6c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1c6c6cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c6c70:
    // 0x1c6c70: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c6c70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c6c74:
    // 0x1c6c74: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c6c74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c6c78:
    // 0x1c6c78: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c6c78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c6c7c:
    // 0x1c6c7c: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x1c6c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_1c6c80:
    // 0x1c6c80: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1c6c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1c6c84:
    // 0x1c6c84: 0x24460260  addiu       $a2, $v0, 0x260
    ctx->pc = 0x1c6c84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 608));
label_1c6c88:
    // 0x1c6c88: 0xc066d7a  jal         func_19B5E8
label_1c6c8c:
    if (ctx->pc == 0x1C6C8Cu) {
        ctx->pc = 0x1C6C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C88u;
        // 0x1c6c8c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6C90u;
        goto label_1c6c90;
    }
    ctx->pc = 0x1C6C88u;
    SET_GPR_U32(ctx, 31, 0x1C6C90u);
    ctx->pc = 0x1C6C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C88u;
    // 0x1c6c8c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B5E8u, 0x1C6C88u, 0x1C6C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C90u;
label_1c6c90:
    // 0x1c6c90: 0x27b6011c  addiu       $s6, $sp, 0x11C
    ctx->pc = 0x1c6c90u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
label_1c6c94:
    // 0x1c6c94: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c6c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1c6c98:
    // 0x1c6c98: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x1c6c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c6c9c:
    // 0x1c6c9c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1c6c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1c6ca0:
    // 0x1c6ca0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c6ca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c6ca4:
    // 0x1c6ca4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c6ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c6ca8:
    // 0x1c6ca8: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1c6ca8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_1c6cac:
    // 0x1c6cac: 0x0  nop
    ctx->pc = 0x1c6cacu;
    // NOP
label_1c6cb0:
    // 0x1c6cb0: 0x0  nop
    ctx->pc = 0x1c6cb0u;
    // NOP
label_1c6cb4:
    // 0x1c6cb4: 0xc066e14  jal         func_19B850
label_1c6cb8:
    if (ctx->pc == 0x1C6CB8u) {
        ctx->pc = 0x1C6CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6CB4u;
        // 0x1c6cb8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6CBCu;
        goto label_1c6cbc;
    }
    ctx->pc = 0x1C6CB4u;
    SET_GPR_U32(ctx, 31, 0x1C6CBCu);
    ctx->pc = 0x1C6CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6CB4u;
    // 0x1c6cb8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x1C6CB4u, 0x1C6CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6CBCu;
label_1c6cbc:
    // 0x1c6cbc: 0xc07f198  jal         func_1FC660
label_1c6cc0:
    if (ctx->pc == 0x1C6CC0u) {
        ctx->pc = 0x1C6CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6CBCu;
        // 0x1c6cc0: 0x8f848640  lw          $a0, -0x79C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6CC4u;
        goto label_1c6cc4;
    }
    ctx->pc = 0x1C6CBCu;
    SET_GPR_U32(ctx, 31, 0x1C6CC4u);
    ctx->pc = 0x1C6CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6CBCu;
    // 0x1c6cc0: 0x8f848640  lw          $a0, -0x79C0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC660u;
    { ctx->pc = 0x1fc660; return; }
    ctx->pc = 0x1C6CC4u;
label_1c6cc4:
    // 0x1c6cc4: 0x8f848640  lw          $a0, -0x79C0($gp)
    ctx->pc = 0x1c6cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
label_1c6cc8:
    // 0x1c6cc8: 0xc07f190  jal         func_1FC640
label_1c6ccc:
    if (ctx->pc == 0x1C6CCCu) {
        ctx->pc = 0x1C6CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6CC8u;
        // 0x1c6ccc: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6CD0u;
        goto label_1c6cd0;
    }
    ctx->pc = 0x1C6CC8u;
    SET_GPR_U32(ctx, 31, 0x1C6CD0u);
    ctx->pc = 0x1C6CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6CC8u;
    // 0x1c6ccc: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC640u;
    { ctx->pc = 0x1fc640; return; }
    ctx->pc = 0x1C6CD0u;
label_1c6cd0:
    // 0x1c6cd0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1c6cd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1c6cd4:
    // 0x1c6cd4: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1c6cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_1c6cd8:
    // 0x1c6cd8: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x1c6cd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_1c6cdc:
    // 0x1c6cdc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c6cdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c6ce0:
    // 0x1c6ce0: 0x0  nop
    ctx->pc = 0x1c6ce0u;
    // NOP
label_1c6ce4:
    // 0x1c6ce4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c6ce4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c6ce8:
    // 0x1c6ce8: 0x0  nop
    ctx->pc = 0x1c6ce8u;
    // NOP
label_1c6cec:
    // 0x1c6cec: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1c6cf0:
    if (ctx->pc == 0x1C6CF0u) {
        ctx->pc = 0x1C6CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6CECu;
        // 0x1c6cf0: 0xe6c00000  swc1        $f0, 0x0($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6CF4u;
        goto label_1c6cf4;
    }
    ctx->pc = 0x1C6CECu;
    {
        const bool branch_taken_0x1c6cec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6CECu;
        // 0x1c6cf0: 0xe6c00000  swc1        $f0, 0x0($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6cec) {
            ctx->pc = 0x1C6CFCu;
            goto label_1c6cfc;
        }
    }
    ctx->pc = 0x1C6CF4u;
label_1c6cf4:
    // 0x1c6cf4: 0x10000009  b           . + 4 + (0x9 << 2)
label_1c6cf8:
    if (ctx->pc == 0x1C6CF8u) {
        ctx->pc = 0x1C6CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6CF4u;
        // 0x1c6cf8: 0xe6c10000  swc1        $f1, 0x0($s6) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6CFCu;
        goto label_1c6cfc;
    }
    ctx->pc = 0x1C6CF4u;
    {
        const bool branch_taken_0x1c6cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6CF4u;
        // 0x1c6cf8: 0xe6c10000  swc1        $f1, 0x0($s6) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6cf4) {
            ctx->pc = 0x1C6D1Cu;
            goto label_1c6d1c;
        }
    }
    ctx->pc = 0x1C6CFCu;
label_1c6cfc:
    // 0x1c6cfc: 0x0  nop
    ctx->pc = 0x1c6cfcu;
    // NOP
label_1c6d00:
    // 0x1c6d00: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c6d00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c6d04:
    // 0x1c6d04: 0x0  nop
    ctx->pc = 0x1c6d04u;
    // NOP
label_1c6d08:
    // 0x1c6d08: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c6d08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c6d0c:
    // 0x1c6d0c: 0x0  nop
    ctx->pc = 0x1c6d0cu;
    // NOP
label_1c6d10:
    // 0x1c6d10: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1c6d14:
    if (ctx->pc == 0x1C6D14u) {
        ctx->pc = 0x1C6D18u;
        goto label_1c6d18;
    }
    ctx->pc = 0x1C6D10u;
    {
        const bool branch_taken_0x1c6d10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c6d10) {
            ctx->pc = 0x1C6D1Cu;
            goto label_1c6d1c;
        }
    }
    ctx->pc = 0x1C6D18u;
label_1c6d18:
    // 0x1c6d18: 0xe6c10000  swc1        $f1, 0x0($s6)
    ctx->pc = 0x1c6d18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
label_1c6d1c:
    // 0x1c6d1c: 0x0  nop
    ctx->pc = 0x1c6d1cu;
    // NOP
label_1c6d20:
    // 0x1c6d20: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x1c6d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
label_1c6d24:
    // 0x1c6d24: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x1c6d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c6d28:
    // 0x1c6d28: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c6d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1c6d2c:
    // 0x1c6d2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c6d2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c6d30:
    // 0x1c6d30: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x1c6d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1c6d34:
    // 0x1c6d34: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c6d34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1c6d38:
    // 0x1c6d38: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x1c6d38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_1c6d3c:
    // 0x1c6d3c: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x1c6d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c6d40:
    // 0x1c6d40: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c6d40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1c6d44:
    // 0x1c6d44: 0xc066e34  jal         func_19B8D0
label_1c6d48:
    if (ctx->pc == 0x1C6D48u) {
        ctx->pc = 0x1C6D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6D44u;
        // 0x1c6d48: 0xe6c00000  swc1        $f0, 0x0($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6D4Cu;
        goto label_1c6d4c;
    }
    ctx->pc = 0x1C6D44u;
    SET_GPR_U32(ctx, 31, 0x1C6D4Cu);
    ctx->pc = 0x1C6D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6D44u;
    // 0x1c6d48: 0xe6c00000  swc1        $f0, 0x0($s6) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B8D0u, 0x1C6D44u, 0x1C6D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6D4Cu;
label_1c6d4c:
    // 0x1c6d4c: 0x928202e0  lbu         $v0, 0x2E0($s4)
    ctx->pc = 0x1c6d4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 736)));
label_1c6d50:
    // 0x1c6d50: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c6d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_1c6d54:
    // 0x1c6d54: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
label_1c6d58:
    if (ctx->pc == 0x1C6D58u) {
        ctx->pc = 0x1C6D5Cu;
        goto label_1c6d5c;
    }
    ctx->pc = 0x1C6D54u;
    {
        const bool branch_taken_0x1c6d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6d54) {
            ctx->pc = 0x1C6E18u;
            goto label_1c6e18;
        }
    }
    ctx->pc = 0x1C6D5Cu;
label_1c6d5c:
    // 0x1c6d5c: 0x928202e3  lbu         $v0, 0x2E3($s4)
    ctx->pc = 0x1c6d5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 739)));
label_1c6d60:
    // 0x1c6d60: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_1c6d64:
    if (ctx->pc == 0x1C6D64u) {
        ctx->pc = 0x1C6D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6D60u;
        // 0x1c6d64: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6D68u;
        goto label_1c6d68;
    }
    ctx->pc = 0x1C6D60u;
    {
        const bool branch_taken_0x1c6d60 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1C6D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6D60u;
        // 0x1c6d64: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d60) {
            ctx->pc = 0x1C6D74u;
            goto label_1c6d74;
        }
    }
    ctx->pc = 0x1C6D68u;
label_1c6d68:
    // 0x1c6d68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c6d68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c6d6c:
    // 0x1c6d6c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c6d70:
    if (ctx->pc == 0x1C6D70u) {
        ctx->pc = 0x1C6D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6D6Cu;
        // 0x1c6d70: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6D74u;
        goto label_1c6d74;
    }
    ctx->pc = 0x1C6D6Cu;
    {
        const bool branch_taken_0x1c6d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6D6Cu;
        // 0x1c6d70: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d6c) {
            ctx->pc = 0x1C6D8Cu;
            goto label_1c6d8c;
        }
    }
    ctx->pc = 0x1C6D74u;
label_1c6d74:
    // 0x1c6d74: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c6d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1c6d78:
    // 0x1c6d78: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1c6d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1c6d7c:
    // 0x1c6d7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c6d7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c6d80:
    // 0x1c6d80: 0x0  nop
    ctx->pc = 0x1c6d80u;
    // NOP
label_1c6d84:
    // 0x1c6d84: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1c6d84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_1c6d88:
    // 0x1c6d88: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x1c6d88u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_1c6d8c:
    // 0x1c6d8c: 0xc7a200fc  lwc1        $f2, 0xFC($sp)
    ctx->pc = 0x1c6d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c6d90:
    // 0x1c6d90: 0x3c023b80  lui         $v0, 0x3B80
    ctx->pc = 0x1c6d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15232 << 16));
label_1c6d94:
    // 0x1c6d94: 0x3443806e  ori         $v1, $v0, 0x806E
    ctx->pc = 0x1c6d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32878);
label_1c6d98:
    // 0x1c6d98: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1c6d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1c6d9c:
    // 0x1c6d9c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c6d9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c6da0:
    // 0x1c6da0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c6da0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c6da4:
    // 0x1c6da4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c6da4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1c6da8:
    // 0x1c6da8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1c6da8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_1c6dac:
    // 0x1c6dac: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1c6dacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1c6db0:
    // 0x1c6db0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c6db0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c6db4:
    // 0x1c6db4: 0x0  nop
    ctx->pc = 0x1c6db4u;
    // NOP
label_1c6db8:
    // 0x1c6db8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1c6dbc:
    if (ctx->pc == 0x1C6DBCu) {
        ctx->pc = 0x1C6DC0u;
        goto label_1c6dc0;
    }
    ctx->pc = 0x1C6DB8u;
    {
        const bool branch_taken_0x1c6db8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c6db8) {
            ctx->pc = 0x1C6DD0u;
            goto label_1c6dd0;
        }
    }
    ctx->pc = 0x1C6DC0u;
label_1c6dc0:
    // 0x1c6dc0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c6dc0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1c6dc4:
    // 0x1c6dc4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1c6dc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1c6dc8:
    // 0x1c6dc8: 0x10000008  b           . + 4 + (0x8 << 2)
label_1c6dcc:
    if (ctx->pc == 0x1C6DCCu) {
        ctx->pc = 0x1C6DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6DC8u;
        // 0x1c6dcc: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6DD0u;
        goto label_1c6dd0;
    }
    ctx->pc = 0x1C6DC8u;
    {
        const bool branch_taken_0x1c6dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6DC8u;
        // 0x1c6dcc: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6dc8) {
            ctx->pc = 0x1C6DECu;
            goto label_1c6dec;
        }
    }
    ctx->pc = 0x1C6DD0u;
label_1c6dd0:
    // 0x1c6dd0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1c6dd0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1c6dd4:
    // 0x1c6dd4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1c6dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1c6dd8:
    // 0x1c6dd8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c6dd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1c6ddc:
    // 0x1c6ddc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1c6ddcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1c6de0:
    // 0x1c6de0: 0x0  nop
    ctx->pc = 0x1c6de0u;
    // NOP
label_1c6de4:
    // 0x1c6de4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1c6de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1c6de8:
    // 0x1c6de8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1c6de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1c6dec:
    // 0x1c6dec: 0x2122821  addu        $a1, $s0, $s2
    ctx->pc = 0x1c6decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_1c6df0:
    // 0x1c6df0: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x1c6df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_1c6df4:
    // 0x1c6df4: 0x22600  sll         $a0, $v0, 24
    ctx->pc = 0x1c6df4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_1c6df8:
    // 0x1c6df8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c6df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1c6dfc:
    // 0x1c6dfc: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x1c6dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
label_1c6e00:
    // 0x1c6e00: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x1c6e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
label_1c6e04:
    // 0x1c6e04: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x1c6e04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
label_1c6e08:
    // 0x1c6e08: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x1c6e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_1c6e0c:
    // 0x1c6e0c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1c6e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1c6e10:
    // 0x1c6e10: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x1c6e10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
label_1c6e14:
    // 0x1c6e14: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x1c6e14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
label_1c6e18:
    // 0x1c6e18: 0x93a200fc  lbu         $v0, 0xFC($sp)
    ctx->pc = 0x1c6e18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 252)));
label_1c6e1c:
    // 0x1c6e1c: 0x97a600f8  lhu         $a2, 0xF8($sp)
    ctx->pc = 0x1c6e1cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 248)));
label_1c6e20:
    // 0x1c6e20: 0x2123821  addu        $a3, $s0, $s2
    ctx->pc = 0x1c6e20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_1c6e24:
    // 0x1c6e24: 0x87a500f4  lh          $a1, 0xF4($sp)
    ctx->pc = 0x1c6e24u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 244)));
label_1c6e28:
    // 0x1c6e28: 0x2934021  addu        $t0, $s4, $s3
    ctx->pc = 0x1c6e28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_1c6e2c:
    // 0x1c6e2c: 0x87a300f0  lh          $v1, 0xF0($sp)
    ctx->pc = 0x1c6e2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 240)));
label_1c6e30:
    // 0x1c6e30: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1c6e30u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1c6e34:
    // 0x1c6e34: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x1c6e34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1c6e38:
    // 0x1c6e38: 0x26520018  addiu       $s2, $s2, 0x18
    ctx->pc = 0x1c6e38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_1c6e3c:
    // 0x1c6e3c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1c6e3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1c6e40:
    // 0x1c6e40: 0x22600  sll         $a0, $v0, 24
    ctx->pc = 0x1c6e40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_1c6e44:
    // 0x1c6e44: 0x2ea20004  sltiu       $v0, $s5, 0x4
    ctx->pc = 0x1c6e44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_1c6e48:
    // 0x1c6e48: 0xa4e30020  sh          $v1, 0x20($a3)
    ctx->pc = 0x1c6e48u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 32), (uint16_t)GPR_U32(ctx, 3));
label_1c6e4c:
    // 0x1c6e4c: 0xa4e50022  sh          $a1, 0x22($a3)
    ctx->pc = 0x1c6e4cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 34), (uint16_t)GPR_U32(ctx, 5));
label_1c6e50:
    // 0x1c6e50: 0xace60024  sw          $a2, 0x24($a3)
    ctx->pc = 0x1c6e50u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 6));
label_1c6e54:
    // 0x1c6e54: 0x8ce30024  lw          $v1, 0x24($a3)
    ctx->pc = 0x1c6e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
label_1c6e58:
    // 0x1c6e58: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x1c6e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
label_1c6e5c:
    // 0x1c6e5c: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x1c6e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
label_1c6e60:
    // 0x1c6e60: 0xace30024  sw          $v1, 0x24($a3)
    ctx->pc = 0x1c6e60u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 3));
label_1c6e64:
    // 0x1c6e64: 0x8ce30024  lw          $v1, 0x24($a3)
    ctx->pc = 0x1c6e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
label_1c6e68:
    // 0x1c6e68: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1c6e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1c6e6c:
    // 0x1c6e6c: 0xace30024  sw          $v1, 0x24($a3)
    ctx->pc = 0x1c6e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 3));
label_1c6e70:
    // 0x1c6e70: 0xc50002b0  lwc1        $f0, 0x2B0($t0)
    ctx->pc = 0x1c6e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c6e74:
    // 0x1c6e74: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1c6e74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1c6e78:
    // 0x1c6e78: 0xe4e00010  swc1        $f0, 0x10($a3)
    ctx->pc = 0x1c6e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
label_1c6e7c:
    // 0x1c6e7c: 0xc50002b4  lwc1        $f0, 0x2B4($t0)
    ctx->pc = 0x1c6e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c6e80:
    // 0x1c6e80: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1c6e80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1c6e84:
    // 0x1c6e84: 0xe4e00014  swc1        $f0, 0x14($a3)
    ctx->pc = 0x1c6e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
label_1c6e88:
    // 0x1c6e88: 0x1440ff7c  bnez        $v0, . + 4 + (-0x84 << 2)
label_1c6e8c:
    if (ctx->pc == 0x1C6E8Cu) {
        ctx->pc = 0x1C6E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6E88u;
        // 0x1c6e8c: 0xe4f4001c  swc1        $f20, 0x1C($a3) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6E90u;
        goto label_1c6e90;
    }
    ctx->pc = 0x1C6E88u;
    {
        const bool branch_taken_0x1c6e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6E88u;
        // 0x1c6e8c: 0xe4f4001c  swc1        $f20, 0x1C($a3) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6e88) {
            ctx->pc = 0x1C6C7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6c7c;
        }
    }
    ctx->pc = 0x1C6E90u;
label_1c6e90:
    // 0x1c6e90: 0x10000065  b           . + 4 + (0x65 << 2)
label_1c6e94:
    if (ctx->pc == 0x1C6E94u) {
        ctx->pc = 0x1C6E98u;
        goto label_1c6e98;
    }
    ctx->pc = 0x1C6E90u;
    {
        const bool branch_taken_0x1c6e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6e90) {
            ctx->pc = 0x1C7028u;
            goto label_1c7028;
        }
    }
    ctx->pc = 0x1C6E98u;
label_1c6e98:
    // 0x1c6e98: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1c6e98u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c6e9c:
    // 0x1c6e9c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c6e9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c6ea0:
    // 0x1c6ea0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c6ea0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c6ea4:
    // 0x1c6ea4: 0x2951021  addu        $v0, $s4, $s5
    ctx->pc = 0x1c6ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
label_1c6ea8:
    // 0x1c6ea8: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1c6ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1c6eac:
    // 0x1c6eac: 0x24460260  addiu       $a2, $v0, 0x260
    ctx->pc = 0x1c6eacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 608));
label_1c6eb0:
    // 0x1c6eb0: 0xc066d7a  jal         func_19B5E8
label_1c6eb4:
    if (ctx->pc == 0x1C6EB4u) {
        ctx->pc = 0x1C6EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6EB0u;
        // 0x1c6eb4: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6EB8u;
        goto label_1c6eb8;
    }
    ctx->pc = 0x1C6EB0u;
    SET_GPR_U32(ctx, 31, 0x1C6EB8u);
    ctx->pc = 0x1C6EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6EB0u;
    // 0x1c6eb4: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B5E8u, 0x1C6EB0u, 0x1C6EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6EB8u;
label_1c6eb8:
    // 0x1c6eb8: 0x27b6012c  addiu       $s6, $sp, 0x12C
    ctx->pc = 0x1c6eb8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
label_1c6ebc:
    // 0x1c6ebc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c6ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1c6ec0:
    // 0x1c6ec0: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x1c6ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c6ec4:
    // 0x1c6ec4: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1c6ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1c6ec8:
    // 0x1c6ec8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c6ec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c6ecc:
    // 0x1c6ecc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c6eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c6ed0:
    // 0x1c6ed0: 0x46000d43  div.s       $f21, $f1, $f0
    ctx->pc = 0x1c6ed0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[21] = ctx->f[1] / ctx->f[0];
label_1c6ed4:
    // 0x1c6ed4: 0x0  nop
    ctx->pc = 0x1c6ed4u;
    // NOP
label_1c6ed8:
    // 0x1c6ed8: 0x0  nop
    ctx->pc = 0x1c6ed8u;
    // NOP
label_1c6edc:
    // 0x1c6edc: 0xc066e14  jal         func_19B850
label_1c6ee0:
    if (ctx->pc == 0x1C6EE0u) {
        ctx->pc = 0x1C6EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6EDCu;
        // 0x1c6ee0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6EE4u;
        goto label_1c6ee4;
    }
    ctx->pc = 0x1C6EDCu;
    SET_GPR_U32(ctx, 31, 0x1C6EE4u);
    ctx->pc = 0x1C6EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6EDCu;
    // 0x1c6ee0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B850u, 0x1C6EDCu, 0x1C6EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6EE4u;
label_1c6ee4:
    // 0x1c6ee4: 0xc07f198  jal         func_1FC660
label_1c6ee8:
    if (ctx->pc == 0x1C6EE8u) {
        ctx->pc = 0x1C6EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6EE4u;
        // 0x1c6ee8: 0x8f848640  lw          $a0, -0x79C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6EECu;
        goto label_1c6eec;
    }
    ctx->pc = 0x1C6EE4u;
    SET_GPR_U32(ctx, 31, 0x1C6EECu);
    ctx->pc = 0x1C6EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6EE4u;
    // 0x1c6ee8: 0x8f848640  lw          $a0, -0x79C0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC660u;
    { ctx->pc = 0x1fc660; return; }
    ctx->pc = 0x1C6EECu;
label_1c6eec:
    // 0x1c6eec: 0x8f848640  lw          $a0, -0x79C0($gp)
    ctx->pc = 0x1c6eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936128)));
label_1c6ef0:
    // 0x1c6ef0: 0xc07f190  jal         func_1FC640
label_1c6ef4:
    if (ctx->pc == 0x1C6EF4u) {
        ctx->pc = 0x1C6EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6EF0u;
        // 0x1c6ef4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6EF8u;
        goto label_1c6ef8;
    }
    ctx->pc = 0x1C6EF0u;
    SET_GPR_U32(ctx, 31, 0x1C6EF8u);
    ctx->pc = 0x1C6EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6EF0u;
    // 0x1c6ef4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC640u;
    { ctx->pc = 0x1fc640; return; }
    ctx->pc = 0x1C6EF8u;
label_1c6ef8:
    // 0x1c6ef8: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1c6ef8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1c6efc:
    // 0x1c6efc: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1c6efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_1c6f00:
    // 0x1c6f00: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x1c6f00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1c6f04:
    // 0x1c6f04: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c6f04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c6f08:
    // 0x1c6f08: 0x0  nop
    ctx->pc = 0x1c6f08u;
    // NOP
label_1c6f0c:
    // 0x1c6f0c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1c6f0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c6f10:
    // 0x1c6f10: 0x0  nop
    ctx->pc = 0x1c6f10u;
    // NOP
label_1c6f14:
    // 0x1c6f14: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1c6f18:
    if (ctx->pc == 0x1C6F18u) {
        ctx->pc = 0x1C6F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6F14u;
        // 0x1c6f18: 0xe6c00000  swc1        $f0, 0x0($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6F1Cu;
        goto label_1c6f1c;
    }
    ctx->pc = 0x1C6F14u;
    {
        const bool branch_taken_0x1c6f14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6F14u;
        // 0x1c6f18: 0xe6c00000  swc1        $f0, 0x0($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6f14) {
            ctx->pc = 0x1C6F24u;
            goto label_1c6f24;
        }
    }
    ctx->pc = 0x1C6F1Cu;
label_1c6f1c:
    // 0x1c6f1c: 0x10000009  b           . + 4 + (0x9 << 2)
label_1c6f20:
    if (ctx->pc == 0x1C6F20u) {
        ctx->pc = 0x1C6F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6F1Cu;
        // 0x1c6f20: 0xe6c10000  swc1        $f1, 0x0($s6) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6F24u;
        goto label_1c6f24;
    }
    ctx->pc = 0x1C6F1Cu;
    {
        const bool branch_taken_0x1c6f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6F1Cu;
        // 0x1c6f20: 0xe6c10000  swc1        $f1, 0x0($s6) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6f1c) {
            ctx->pc = 0x1C6F44u;
            goto label_1c6f44;
        }
    }
    ctx->pc = 0x1C6F24u;
label_1c6f24:
    // 0x1c6f24: 0x0  nop
    ctx->pc = 0x1c6f24u;
    // NOP
label_1c6f28:
    // 0x1c6f28: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c6f28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c6f2c:
    // 0x1c6f2c: 0x0  nop
    ctx->pc = 0x1c6f2cu;
    // NOP
label_1c6f30:
    // 0x1c6f30: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c6f30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c6f34:
    // 0x1c6f34: 0x0  nop
    ctx->pc = 0x1c6f34u;
    // NOP
label_1c6f38:
    // 0x1c6f38: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1c6f3c:
    if (ctx->pc == 0x1C6F3Cu) {
        ctx->pc = 0x1C6F40u;
        goto label_1c6f40;
    }
    ctx->pc = 0x1C6F38u;
    {
        const bool branch_taken_0x1c6f38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c6f38) {
            ctx->pc = 0x1C6F44u;
            goto label_1c6f44;
        }
    }
    ctx->pc = 0x1C6F40u;
label_1c6f40:
    // 0x1c6f40: 0xe6c10000  swc1        $f1, 0x0($s6)
    ctx->pc = 0x1c6f40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
label_1c6f44:
    // 0x1c6f44: 0x0  nop
    ctx->pc = 0x1c6f44u;
    // NOP
label_1c6f48:
    // 0x1c6f48: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x1c6f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
label_1c6f4c:
    // 0x1c6f4c: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x1c6f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c6f50:
    // 0x1c6f50: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1c6f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1c6f54:
    // 0x1c6f54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c6f54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c6f58:
    // 0x1c6f58: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1c6f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1c6f5c:
    // 0x1c6f5c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c6f5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1c6f60:
    // 0x1c6f60: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x1c6f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_1c6f64:
    // 0x1c6f64: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x1c6f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c6f68:
    // 0x1c6f68: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c6f68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1c6f6c:
    // 0x1c6f6c: 0xc066e34  jal         func_19B8D0
label_1c6f70:
    if (ctx->pc == 0x1C6F70u) {
        ctx->pc = 0x1C6F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6F6Cu;
        // 0x1c6f70: 0xe6c00000  swc1        $f0, 0x0($s6) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6F74u;
        goto label_1c6f74;
    }
    ctx->pc = 0x1C6F6Cu;
    SET_GPR_U32(ctx, 31, 0x1C6F74u);
    ctx->pc = 0x1C6F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6F6Cu;
    // 0x1c6f70: 0xe6c00000  swc1        $f0, 0x0($s6) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B8D0u, 0x1C6F6Cu, 0x1C6F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6F74u;
label_1c6f74:
    // 0x1c6f74: 0x928202e0  lbu         $v0, 0x2E0($s4)
    ctx->pc = 0x1c6f74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 736)));
label_1c6f78:
    // 0x1c6f78: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c6f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_1c6f7c:
    // 0x1c6f7c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_1c6f80:
    if (ctx->pc == 0x1C6F80u) {
        ctx->pc = 0x1C6F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6F7Cu;
        // 0x1c6f80: 0x2112821  addu        $a1, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C6F84u;
        goto label_1c6f84;
    }
    ctx->pc = 0x1C6F7Cu;
    {
        const bool branch_taken_0x1c6f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6F7Cu;
        // 0x1c6f80: 0x2112821  addu        $a1, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6f7c) {
            ctx->pc = 0x1C6FB0u;
            goto label_1c6fb0;
        }
    }
    ctx->pc = 0x1C6F84u;
label_1c6f84:
    // 0x1c6f84: 0x928402e3  lbu         $a0, 0x2E3($s4)
    ctx->pc = 0x1c6f84u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 739)));
label_1c6f88:
    // 0x1c6f88: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x1c6f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_1c6f8c:
    // 0x1c6f8c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c6f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1c6f90:
    // 0x1c6f90: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1c6f90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_1c6f94:
    // 0x1c6f94: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x1c6f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
label_1c6f98:
    // 0x1c6f98: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x1c6f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
label_1c6f9c:
    // 0x1c6f9c: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x1c6f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
label_1c6fa0:
    // 0x1c6fa0: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x1c6fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_1c6fa4:
    // 0x1c6fa4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1c6fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1c6fa8:
    // 0x1c6fa8: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x1c6fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
label_1c6fac:
    // 0x1c6fac: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x1c6facu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
label_1c6fb0:
    // 0x1c6fb0: 0x93a200fc  lbu         $v0, 0xFC($sp)
    ctx->pc = 0x1c6fb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 252)));
label_1c6fb4:
    // 0x1c6fb4: 0x97a600f8  lhu         $a2, 0xF8($sp)
    ctx->pc = 0x1c6fb4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 248)));
label_1c6fb8:
    // 0x1c6fb8: 0x2113821  addu        $a3, $s0, $s1
    ctx->pc = 0x1c6fb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_1c6fbc:
    // 0x1c6fbc: 0x87a500f4  lh          $a1, 0xF4($sp)
    ctx->pc = 0x1c6fbcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 244)));
label_1c6fc0:
    // 0x1c6fc0: 0x2924021  addu        $t0, $s4, $s2
    ctx->pc = 0x1c6fc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_1c6fc4:
    // 0x1c6fc4: 0x87a300f0  lh          $v1, 0xF0($sp)
    ctx->pc = 0x1c6fc4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 240)));
label_1c6fc8:
    // 0x1c6fc8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1c6fc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1c6fcc:
    // 0x1c6fcc: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x1c6fccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_1c6fd0:
    // 0x1c6fd0: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x1c6fd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_1c6fd4:
    // 0x1c6fd4: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x1c6fd4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_1c6fd8:
    // 0x1c6fd8: 0x22600  sll         $a0, $v0, 24
    ctx->pc = 0x1c6fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_1c6fdc:
    // 0x1c6fdc: 0x2e620004  sltiu       $v0, $s3, 0x4
    ctx->pc = 0x1c6fdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_1c6fe0:
    // 0x1c6fe0: 0xa4e30020  sh          $v1, 0x20($a3)
    ctx->pc = 0x1c6fe0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 32), (uint16_t)GPR_U32(ctx, 3));
label_1c6fe4:
    // 0x1c6fe4: 0xa4e50022  sh          $a1, 0x22($a3)
    ctx->pc = 0x1c6fe4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 34), (uint16_t)GPR_U32(ctx, 5));
label_1c6fe8:
    // 0x1c6fe8: 0xace60024  sw          $a2, 0x24($a3)
    ctx->pc = 0x1c6fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 6));
label_1c6fec:
    // 0x1c6fec: 0x8ce30024  lw          $v1, 0x24($a3)
    ctx->pc = 0x1c6fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
label_1c6ff0:
    // 0x1c6ff0: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x1c6ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
label_1c6ff4:
    // 0x1c6ff4: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x1c6ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
label_1c6ff8:
    // 0x1c6ff8: 0xace30024  sw          $v1, 0x24($a3)
    ctx->pc = 0x1c6ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 3));
label_1c6ffc:
    // 0x1c6ffc: 0x8ce30024  lw          $v1, 0x24($a3)
    ctx->pc = 0x1c6ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
label_1c7000:
    // 0x1c7000: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1c7000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1c7004:
    // 0x1c7004: 0xace30024  sw          $v1, 0x24($a3)
    ctx->pc = 0x1c7004u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 3));
label_1c7008:
    // 0x1c7008: 0xc50002b0  lwc1        $f0, 0x2B0($t0)
    ctx->pc = 0x1c7008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c700c:
    // 0x1c700c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1c700cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_1c7010:
    // 0x1c7010: 0xe4e00010  swc1        $f0, 0x10($a3)
    ctx->pc = 0x1c7010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
label_1c7014:
    // 0x1c7014: 0xc50002b4  lwc1        $f0, 0x2B4($t0)
    ctx->pc = 0x1c7014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c7018:
    // 0x1c7018: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1c7018u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_1c701c:
    // 0x1c701c: 0xe4e00014  swc1        $f0, 0x14($a3)
    ctx->pc = 0x1c701cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
label_1c7020:
    // 0x1c7020: 0x1440ffa0  bnez        $v0, . + 4 + (-0x60 << 2)
label_1c7024:
    if (ctx->pc == 0x1C7024u) {
        ctx->pc = 0x1C7024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7020u;
        // 0x1c7024: 0xe4f5001c  swc1        $f21, 0x1C($a3) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7028u;
        goto label_1c7028;
    }
    ctx->pc = 0x1C7020u;
    {
        const bool branch_taken_0x1c7020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7020u;
        // 0x1c7024: 0xe4f5001c  swc1        $f21, 0x1C($a3) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7020) {
            ctx->pc = 0x1C6EA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6ea4;
        }
    }
    ctx->pc = 0x1C7028u;
label_1c7028:
    // 0x1c7028: 0x928302e1  lbu         $v1, 0x2E1($s4)
    ctx->pc = 0x1c7028u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 737)));
label_1c702c:
    // 0x1c702c: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
label_1c7030:
    if (ctx->pc == 0x1C7030u) {
        ctx->pc = 0x1C7030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C702Cu;
        // 0x1c7030: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7034u;
        goto label_1c7034;
    }
    ctx->pc = 0x1C702Cu;
    {
        const bool branch_taken_0x1c702c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C702Cu;
        // 0x1c7030: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c702c) {
            ctx->pc = 0x1C70C0u;
            { ctx->pc = 0x1c70c0; return; }
        }
    }
    ctx->pc = 0x1C7034u;
label_1c7034:
    // 0x1c7034: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1c7034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c7038:
    // 0x1c7038: 0x10660019  beq         $v1, $a2, . + 4 + (0x19 << 2)
label_1c703c:
    if (ctx->pc == 0x1C703Cu) {
        ctx->pc = 0x1C703Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7038u;
        // 0x1c703c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7040u;
        goto label_1c7040;
    }
    ctx->pc = 0x1C7038u;
    {
        const bool branch_taken_0x1c7038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x1C703Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7038u;
        // 0x1c703c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7038) {
            ctx->pc = 0x1C70A0u;
            { ctx->pc = 0x1c70a0; return; }
        }
    }
    ctx->pc = 0x1C7040u;
label_1c7040:
    // 0x1c7040: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c7040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c7044:
    // 0x1c7044: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_1c7048:
    if (ctx->pc == 0x1C7048u) {
        ctx->pc = 0x1C7048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7044u;
        // 0x1c7048: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C704Cu;
        goto label_1c704c;
    }
    ctx->pc = 0x1C7044u;
    {
        const bool branch_taken_0x1c7044 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C7048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7044u;
        // 0x1c7048: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7044) {
            ctx->pc = 0x1C7080u;
            { ctx->pc = 0x1c7080; return; }
        }
    }
    ctx->pc = 0x1C704Cu;
label_1c704c:
    // 0x1c704c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c704cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c7050:
    // 0x1c7050: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1c7054:
    if (ctx->pc == 0x1C7054u) {
        ctx->pc = 0x1C7054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7050u;
        // 0x1c7054: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7058u;
        goto label_1c7058;
    }
    ctx->pc = 0x1C7050u;
    {
        const bool branch_taken_0x1c7050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C7054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7050u;
        // 0x1c7054: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7050) {
            ctx->pc = 0x1C7060u;
            { ctx->pc = 0x1c7060; return; }
        }
    }
    ctx->pc = 0x1C7058u;
label_1c7058:
    // 0x1c7058: 0x10000021  b           . + 4 + (0x21 << 2)
label_1c705c:
    if (ctx->pc == 0x1C705Cu) {
        ctx->pc = 0x1C705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7058u;
        // 0x1c705c: 0x928202e1  lbu         $v0, 0x2E1($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 737)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C7060u;
        { ctx->pc = 0x1c7060; return; }
    }
    ctx->pc = 0x1C7058u;
    {
        const bool branch_taken_0x1c7058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7058u;
        // 0x1c705c: 0x928202e1  lbu         $v0, 0x2E1($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 737)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7058) {
            ctx->pc = 0x1C70E0u;
            { ctx->pc = 0x1c70e0; return; }
        }
    }
    ctx->pc = 0x1C7060u;
    ctx->pc = 0x1c7060u;
    return;
}

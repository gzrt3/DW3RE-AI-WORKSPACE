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


void FUN_0019b5e8_part24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1a6998u: goto label_1a6998;
        case 0x1a699cu: goto label_1a699c;
        case 0x1a69a0u: goto label_1a69a0;
        case 0x1a69a4u: goto label_1a69a4;
        case 0x1a69a8u: goto label_1a69a8;
        case 0x1a69acu: goto label_1a69ac;
        case 0x1a69b0u: goto label_1a69b0;
        case 0x1a69b4u: goto label_1a69b4;
        case 0x1a69b8u: goto label_1a69b8;
        case 0x1a69bcu: goto label_1a69bc;
        case 0x1a69c0u: goto label_1a69c0;
        case 0x1a69c4u: goto label_1a69c4;
        case 0x1a69c8u: goto label_1a69c8;
        case 0x1a69ccu: goto label_1a69cc;
        case 0x1a69d0u: goto label_1a69d0;
        case 0x1a69d4u: goto label_1a69d4;
        case 0x1a69d8u: goto label_1a69d8;
        case 0x1a69dcu: goto label_1a69dc;
        case 0x1a69e0u: goto label_1a69e0;
        case 0x1a69e4u: goto label_1a69e4;
        case 0x1a69e8u: goto label_1a69e8;
        case 0x1a69ecu: goto label_1a69ec;
        case 0x1a69f0u: goto label_1a69f0;
        case 0x1a69f4u: goto label_1a69f4;
        case 0x1a69f8u: goto label_1a69f8;
        case 0x1a69fcu: goto label_1a69fc;
        case 0x1a6a00u: goto label_1a6a00;
        case 0x1a6a04u: goto label_1a6a04;
        case 0x1a6a08u: goto label_1a6a08;
        case 0x1a6a0cu: goto label_1a6a0c;
        case 0x1a6a10u: goto label_1a6a10;
        case 0x1a6a14u: goto label_1a6a14;
        case 0x1a6a18u: goto label_1a6a18;
        case 0x1a6a1cu: goto label_1a6a1c;
        case 0x1a6a20u: goto label_1a6a20;
        case 0x1a6a24u: goto label_1a6a24;
        case 0x1a6a28u: goto label_1a6a28;
        case 0x1a6a2cu: goto label_1a6a2c;
        case 0x1a6a30u: goto label_1a6a30;
        case 0x1a6a34u: goto label_1a6a34;
        case 0x1a6a38u: goto label_1a6a38;
        case 0x1a6a3cu: goto label_1a6a3c;
        case 0x1a6a40u: goto label_1a6a40;
        case 0x1a6a44u: goto label_1a6a44;
        case 0x1a6a48u: goto label_1a6a48;
        case 0x1a6a4cu: goto label_1a6a4c;
        case 0x1a6a50u: goto label_1a6a50;
        case 0x1a6a54u: goto label_1a6a54;
        case 0x1a6a58u: goto label_1a6a58;
        case 0x1a6a5cu: goto label_1a6a5c;
        case 0x1a6a60u: goto label_1a6a60;
        case 0x1a6a64u: goto label_1a6a64;
        case 0x1a6a68u: goto label_1a6a68;
        case 0x1a6a6cu: goto label_1a6a6c;
        case 0x1a6a70u: goto label_1a6a70;
        case 0x1a6a74u: goto label_1a6a74;
        case 0x1a6a78u: goto label_1a6a78;
        case 0x1a6a7cu: goto label_1a6a7c;
        case 0x1a6a80u: goto label_1a6a80;
        case 0x1a6a84u: goto label_1a6a84;
        case 0x1a6a88u: goto label_1a6a88;
        case 0x1a6a8cu: goto label_1a6a8c;
        case 0x1a6a90u: goto label_1a6a90;
        case 0x1a6a94u: goto label_1a6a94;
        case 0x1a6a98u: goto label_1a6a98;
        case 0x1a6a9cu: goto label_1a6a9c;
        case 0x1a6aa0u: goto label_1a6aa0;
        case 0x1a6aa4u: goto label_1a6aa4;
        case 0x1a6aa8u: goto label_1a6aa8;
        case 0x1a6aacu: goto label_1a6aac;
        case 0x1a6ab0u: goto label_1a6ab0;
        case 0x1a6ab4u: goto label_1a6ab4;
        case 0x1a6ab8u: goto label_1a6ab8;
        case 0x1a6abcu: goto label_1a6abc;
        case 0x1a6ac0u: goto label_1a6ac0;
        case 0x1a6ac4u: goto label_1a6ac4;
        case 0x1a6ac8u: goto label_1a6ac8;
        case 0x1a6accu: goto label_1a6acc;
        case 0x1a6ad0u: goto label_1a6ad0;
        case 0x1a6ad4u: goto label_1a6ad4;
        case 0x1a6ad8u: goto label_1a6ad8;
        case 0x1a6adcu: goto label_1a6adc;
        case 0x1a6ae0u: goto label_1a6ae0;
        case 0x1a6ae4u: goto label_1a6ae4;
        case 0x1a6ae8u: goto label_1a6ae8;
        case 0x1a6aecu: goto label_1a6aec;
        case 0x1a6af0u: goto label_1a6af0;
        case 0x1a6af4u: goto label_1a6af4;
        case 0x1a6af8u: goto label_1a6af8;
        case 0x1a6afcu: goto label_1a6afc;
        case 0x1a6b00u: goto label_1a6b00;
        case 0x1a6b04u: goto label_1a6b04;
        case 0x1a6b08u: goto label_1a6b08;
        case 0x1a6b0cu: goto label_1a6b0c;
        case 0x1a6b10u: goto label_1a6b10;
        case 0x1a6b14u: goto label_1a6b14;
        case 0x1a6b18u: goto label_1a6b18;
        case 0x1a6b1cu: goto label_1a6b1c;
        case 0x1a6b20u: goto label_1a6b20;
        case 0x1a6b24u: goto label_1a6b24;
        case 0x1a6b28u: goto label_1a6b28;
        case 0x1a6b2cu: goto label_1a6b2c;
        case 0x1a6b30u: goto label_1a6b30;
        case 0x1a6b34u: goto label_1a6b34;
        case 0x1a6b38u: goto label_1a6b38;
        case 0x1a6b3cu: goto label_1a6b3c;
        case 0x1a6b40u: goto label_1a6b40;
        case 0x1a6b44u: goto label_1a6b44;
        case 0x1a6b48u: goto label_1a6b48;
        case 0x1a6b4cu: goto label_1a6b4c;
        case 0x1a6b50u: goto label_1a6b50;
        case 0x1a6b54u: goto label_1a6b54;
        case 0x1a6b58u: goto label_1a6b58;
        case 0x1a6b5cu: goto label_1a6b5c;
        case 0x1a6b60u: goto label_1a6b60;
        case 0x1a6b64u: goto label_1a6b64;
        case 0x1a6b68u: goto label_1a6b68;
        case 0x1a6b6cu: goto label_1a6b6c;
        case 0x1a6b70u: goto label_1a6b70;
        case 0x1a6b74u: goto label_1a6b74;
        case 0x1a6b78u: goto label_1a6b78;
        case 0x1a6b7cu: goto label_1a6b7c;
        case 0x1a6b80u: goto label_1a6b80;
        case 0x1a6b84u: goto label_1a6b84;
        case 0x1a6b88u: goto label_1a6b88;
        case 0x1a6b8cu: goto label_1a6b8c;
        case 0x1a6b90u: goto label_1a6b90;
        case 0x1a6b94u: goto label_1a6b94;
        case 0x1a6b98u: goto label_1a6b98;
        case 0x1a6b9cu: goto label_1a6b9c;
        case 0x1a6ba0u: goto label_1a6ba0;
        case 0x1a6ba4u: goto label_1a6ba4;
        case 0x1a6ba8u: goto label_1a6ba8;
        case 0x1a6bacu: goto label_1a6bac;
        case 0x1a6bb0u: goto label_1a6bb0;
        case 0x1a6bb4u: goto label_1a6bb4;
        case 0x1a6bb8u: goto label_1a6bb8;
        case 0x1a6bbcu: goto label_1a6bbc;
        case 0x1a6bc0u: goto label_1a6bc0;
        case 0x1a6bc4u: goto label_1a6bc4;
        case 0x1a6bc8u: goto label_1a6bc8;
        case 0x1a6bccu: goto label_1a6bcc;
        case 0x1a6bd0u: goto label_1a6bd0;
        case 0x1a6bd4u: goto label_1a6bd4;
        case 0x1a6bd8u: goto label_1a6bd8;
        case 0x1a6bdcu: goto label_1a6bdc;
        case 0x1a6be0u: goto label_1a6be0;
        case 0x1a6be4u: goto label_1a6be4;
        case 0x1a6be8u: goto label_1a6be8;
        case 0x1a6becu: goto label_1a6bec;
        case 0x1a6bf0u: goto label_1a6bf0;
        case 0x1a6bf4u: goto label_1a6bf4;
        case 0x1a6bf8u: goto label_1a6bf8;
        case 0x1a6bfcu: goto label_1a6bfc;
        case 0x1a6c00u: goto label_1a6c00;
        case 0x1a6c04u: goto label_1a6c04;
        case 0x1a6c08u: goto label_1a6c08;
        case 0x1a6c0cu: goto label_1a6c0c;
        case 0x1a6c10u: goto label_1a6c10;
        case 0x1a6c14u: goto label_1a6c14;
        case 0x1a6c18u: goto label_1a6c18;
        case 0x1a6c1cu: goto label_1a6c1c;
        case 0x1a6c20u: goto label_1a6c20;
        case 0x1a6c24u: goto label_1a6c24;
        case 0x1a6c28u: goto label_1a6c28;
        case 0x1a6c2cu: goto label_1a6c2c;
        case 0x1a6c30u: goto label_1a6c30;
        case 0x1a6c34u: goto label_1a6c34;
        case 0x1a6c38u: goto label_1a6c38;
        case 0x1a6c3cu: goto label_1a6c3c;
        case 0x1a6c40u: goto label_1a6c40;
        case 0x1a6c44u: goto label_1a6c44;
        case 0x1a6c48u: goto label_1a6c48;
        case 0x1a6c4cu: goto label_1a6c4c;
        case 0x1a6c50u: goto label_1a6c50;
        case 0x1a6c54u: goto label_1a6c54;
        case 0x1a6c58u: goto label_1a6c58;
        case 0x1a6c5cu: goto label_1a6c5c;
        case 0x1a6c60u: goto label_1a6c60;
        case 0x1a6c64u: goto label_1a6c64;
        case 0x1a6c68u: goto label_1a6c68;
        case 0x1a6c6cu: goto label_1a6c6c;
        case 0x1a6c70u: goto label_1a6c70;
        case 0x1a6c74u: goto label_1a6c74;
        case 0x1a6c78u: goto label_1a6c78;
        case 0x1a6c7cu: goto label_1a6c7c;
        case 0x1a6c80u: goto label_1a6c80;
        case 0x1a6c84u: goto label_1a6c84;
        case 0x1a6c88u: goto label_1a6c88;
        case 0x1a6c8cu: goto label_1a6c8c;
        case 0x1a6c90u: goto label_1a6c90;
        case 0x1a6c94u: goto label_1a6c94;
        case 0x1a6c98u: goto label_1a6c98;
        case 0x1a6c9cu: goto label_1a6c9c;
        case 0x1a6ca0u: goto label_1a6ca0;
        case 0x1a6ca4u: goto label_1a6ca4;
        case 0x1a6ca8u: goto label_1a6ca8;
        case 0x1a6cacu: goto label_1a6cac;
        case 0x1a6cb0u: goto label_1a6cb0;
        case 0x1a6cb4u: goto label_1a6cb4;
        case 0x1a6cb8u: goto label_1a6cb8;
        case 0x1a6cbcu: goto label_1a6cbc;
        case 0x1a6cc0u: goto label_1a6cc0;
        case 0x1a6cc4u: goto label_1a6cc4;
        case 0x1a6cc8u: goto label_1a6cc8;
        case 0x1a6cccu: goto label_1a6ccc;
        case 0x1a6cd0u: goto label_1a6cd0;
        case 0x1a6cd4u: goto label_1a6cd4;
        case 0x1a6cd8u: goto label_1a6cd8;
        case 0x1a6cdcu: goto label_1a6cdc;
        case 0x1a6ce0u: goto label_1a6ce0;
        case 0x1a6ce4u: goto label_1a6ce4;
        case 0x1a6ce8u: goto label_1a6ce8;
        case 0x1a6cecu: goto label_1a6cec;
        case 0x1a6cf0u: goto label_1a6cf0;
        case 0x1a6cf4u: goto label_1a6cf4;
        case 0x1a6cf8u: goto label_1a6cf8;
        case 0x1a6cfcu: goto label_1a6cfc;
        case 0x1a6d00u: goto label_1a6d00;
        case 0x1a6d04u: goto label_1a6d04;
        case 0x1a6d08u: goto label_1a6d08;
        case 0x1a6d0cu: goto label_1a6d0c;
        case 0x1a6d10u: goto label_1a6d10;
        case 0x1a6d14u: goto label_1a6d14;
        case 0x1a6d18u: goto label_1a6d18;
        case 0x1a6d1cu: goto label_1a6d1c;
        case 0x1a6d20u: goto label_1a6d20;
        case 0x1a6d24u: goto label_1a6d24;
        case 0x1a6d28u: goto label_1a6d28;
        case 0x1a6d2cu: goto label_1a6d2c;
        case 0x1a6d30u: goto label_1a6d30;
        case 0x1a6d34u: goto label_1a6d34;
        case 0x1a6d38u: goto label_1a6d38;
        case 0x1a6d3cu: goto label_1a6d3c;
        case 0x1a6d40u: goto label_1a6d40;
        case 0x1a6d44u: goto label_1a6d44;
        case 0x1a6d48u: goto label_1a6d48;
        case 0x1a6d4cu: goto label_1a6d4c;
        case 0x1a6d50u: goto label_1a6d50;
        case 0x1a6d54u: goto label_1a6d54;
        case 0x1a6d58u: goto label_1a6d58;
        case 0x1a6d5cu: goto label_1a6d5c;
        case 0x1a6d60u: goto label_1a6d60;
        case 0x1a6d64u: goto label_1a6d64;
        case 0x1a6d68u: goto label_1a6d68;
        case 0x1a6d6cu: goto label_1a6d6c;
        case 0x1a6d70u: goto label_1a6d70;
        case 0x1a6d74u: goto label_1a6d74;
        case 0x1a6d78u: goto label_1a6d78;
        case 0x1a6d7cu: goto label_1a6d7c;
        case 0x1a6d80u: goto label_1a6d80;
        case 0x1a6d84u: goto label_1a6d84;
        case 0x1a6d88u: goto label_1a6d88;
        case 0x1a6d8cu: goto label_1a6d8c;
        case 0x1a6d90u: goto label_1a6d90;
        case 0x1a6d94u: goto label_1a6d94;
        case 0x1a6d98u: goto label_1a6d98;
        case 0x1a6d9cu: goto label_1a6d9c;
        case 0x1a6da0u: goto label_1a6da0;
        case 0x1a6da4u: goto label_1a6da4;
        case 0x1a6da8u: goto label_1a6da8;
        case 0x1a6dacu: goto label_1a6dac;
        case 0x1a6db0u: goto label_1a6db0;
        case 0x1a6db4u: goto label_1a6db4;
        case 0x1a6db8u: goto label_1a6db8;
        case 0x1a6dbcu: goto label_1a6dbc;
        case 0x1a6dc0u: goto label_1a6dc0;
        case 0x1a6dc4u: goto label_1a6dc4;
        case 0x1a6dc8u: goto label_1a6dc8;
        case 0x1a6dccu: goto label_1a6dcc;
        case 0x1a6dd0u: goto label_1a6dd0;
        case 0x1a6dd4u: goto label_1a6dd4;
        case 0x1a6dd8u: goto label_1a6dd8;
        case 0x1a6ddcu: goto label_1a6ddc;
        case 0x1a6de0u: goto label_1a6de0;
        case 0x1a6de4u: goto label_1a6de4;
        case 0x1a6de8u: goto label_1a6de8;
        case 0x1a6decu: goto label_1a6dec;
        case 0x1a6df0u: goto label_1a6df0;
        case 0x1a6df4u: goto label_1a6df4;
        case 0x1a6df8u: goto label_1a6df8;
        case 0x1a6dfcu: goto label_1a6dfc;
        case 0x1a6e00u: goto label_1a6e00;
        case 0x1a6e04u: goto label_1a6e04;
        case 0x1a6e08u: goto label_1a6e08;
        case 0x1a6e0cu: goto label_1a6e0c;
        case 0x1a6e10u: goto label_1a6e10;
        case 0x1a6e14u: goto label_1a6e14;
        case 0x1a6e18u: goto label_1a6e18;
        case 0x1a6e1cu: goto label_1a6e1c;
        case 0x1a6e20u: goto label_1a6e20;
        case 0x1a6e24u: goto label_1a6e24;
        case 0x1a6e28u: goto label_1a6e28;
        case 0x1a6e2cu: goto label_1a6e2c;
        case 0x1a6e30u: goto label_1a6e30;
        case 0x1a6e34u: goto label_1a6e34;
        case 0x1a6e38u: goto label_1a6e38;
        case 0x1a6e3cu: goto label_1a6e3c;
        case 0x1a6e40u: goto label_1a6e40;
        case 0x1a6e44u: goto label_1a6e44;
        case 0x1a6e48u: goto label_1a6e48;
        case 0x1a6e4cu: goto label_1a6e4c;
        case 0x1a6e50u: goto label_1a6e50;
        case 0x1a6e54u: goto label_1a6e54;
        case 0x1a6e58u: goto label_1a6e58;
        case 0x1a6e5cu: goto label_1a6e5c;
        case 0x1a6e60u: goto label_1a6e60;
        case 0x1a6e64u: goto label_1a6e64;
        case 0x1a6e68u: goto label_1a6e68;
        case 0x1a6e6cu: goto label_1a6e6c;
        case 0x1a6e70u: goto label_1a6e70;
        case 0x1a6e74u: goto label_1a6e74;
        case 0x1a6e78u: goto label_1a6e78;
        case 0x1a6e7cu: goto label_1a6e7c;
        case 0x1a6e80u: goto label_1a6e80;
        case 0x1a6e84u: goto label_1a6e84;
        case 0x1a6e88u: goto label_1a6e88;
        case 0x1a6e8cu: goto label_1a6e8c;
        case 0x1a6e90u: goto label_1a6e90;
        case 0x1a6e94u: goto label_1a6e94;
        case 0x1a6e98u: goto label_1a6e98;
        case 0x1a6e9cu: goto label_1a6e9c;
        case 0x1a6ea0u: goto label_1a6ea0;
        case 0x1a6ea4u: goto label_1a6ea4;
        case 0x1a6ea8u: goto label_1a6ea8;
        case 0x1a6eacu: goto label_1a6eac;
        case 0x1a6eb0u: goto label_1a6eb0;
        case 0x1a6eb4u: goto label_1a6eb4;
        case 0x1a6eb8u: goto label_1a6eb8;
        case 0x1a6ebcu: goto label_1a6ebc;
        case 0x1a6ec0u: goto label_1a6ec0;
        case 0x1a6ec4u: goto label_1a6ec4;
        case 0x1a6ec8u: goto label_1a6ec8;
        case 0x1a6eccu: goto label_1a6ecc;
        case 0x1a6ed0u: goto label_1a6ed0;
        case 0x1a6ed4u: goto label_1a6ed4;
        case 0x1a6ed8u: goto label_1a6ed8;
        case 0x1a6edcu: goto label_1a6edc;
        case 0x1a6ee0u: goto label_1a6ee0;
        case 0x1a6ee4u: goto label_1a6ee4;
        case 0x1a6ee8u: goto label_1a6ee8;
        case 0x1a6eecu: goto label_1a6eec;
        case 0x1a6ef0u: goto label_1a6ef0;
        case 0x1a6ef4u: goto label_1a6ef4;
        case 0x1a6ef8u: goto label_1a6ef8;
        case 0x1a6efcu: goto label_1a6efc;
        case 0x1a6f00u: goto label_1a6f00;
        case 0x1a6f04u: goto label_1a6f04;
        case 0x1a6f08u: goto label_1a6f08;
        case 0x1a6f0cu: goto label_1a6f0c;
        case 0x1a6f10u: goto label_1a6f10;
        case 0x1a6f14u: goto label_1a6f14;
        case 0x1a6f18u: goto label_1a6f18;
        case 0x1a6f1cu: goto label_1a6f1c;
        case 0x1a6f20u: goto label_1a6f20;
        case 0x1a6f24u: goto label_1a6f24;
        case 0x1a6f28u: goto label_1a6f28;
        case 0x1a6f2cu: goto label_1a6f2c;
        case 0x1a6f30u: goto label_1a6f30;
        case 0x1a6f34u: goto label_1a6f34;
        case 0x1a6f38u: goto label_1a6f38;
        case 0x1a6f3cu: goto label_1a6f3c;
        case 0x1a6f40u: goto label_1a6f40;
        case 0x1a6f44u: goto label_1a6f44;
        case 0x1a6f48u: goto label_1a6f48;
        case 0x1a6f4cu: goto label_1a6f4c;
        case 0x1a6f50u: goto label_1a6f50;
        case 0x1a6f54u: goto label_1a6f54;
        case 0x1a6f58u: goto label_1a6f58;
        case 0x1a6f5cu: goto label_1a6f5c;
        case 0x1a6f60u: goto label_1a6f60;
        case 0x1a6f64u: goto label_1a6f64;
        case 0x1a6f68u: goto label_1a6f68;
        case 0x1a6f6cu: goto label_1a6f6c;
        case 0x1a6f70u: goto label_1a6f70;
        case 0x1a6f74u: goto label_1a6f74;
        case 0x1a6f78u: goto label_1a6f78;
        case 0x1a6f7cu: goto label_1a6f7c;
        case 0x1a6f80u: goto label_1a6f80;
        case 0x1a6f84u: goto label_1a6f84;
        case 0x1a6f88u: goto label_1a6f88;
        case 0x1a6f8cu: goto label_1a6f8c;
        case 0x1a6f90u: goto label_1a6f90;
        case 0x1a6f94u: goto label_1a6f94;
        case 0x1a6f98u: goto label_1a6f98;
        case 0x1a6f9cu: goto label_1a6f9c;
        case 0x1a6fa0u: goto label_1a6fa0;
        case 0x1a6fa4u: goto label_1a6fa4;
        case 0x1a6fa8u: goto label_1a6fa8;
        case 0x1a6facu: goto label_1a6fac;
        case 0x1a6fb0u: goto label_1a6fb0;
        case 0x1a6fb4u: goto label_1a6fb4;
        case 0x1a6fb8u: goto label_1a6fb8;
        case 0x1a6fbcu: goto label_1a6fbc;
        case 0x1a6fc0u: goto label_1a6fc0;
        case 0x1a6fc4u: goto label_1a6fc4;
        case 0x1a6fc8u: goto label_1a6fc8;
        case 0x1a6fccu: goto label_1a6fcc;
        case 0x1a6fd0u: goto label_1a6fd0;
        case 0x1a6fd4u: goto label_1a6fd4;
        case 0x1a6fd8u: goto label_1a6fd8;
        case 0x1a6fdcu: goto label_1a6fdc;
        case 0x1a6fe0u: goto label_1a6fe0;
        case 0x1a6fe4u: goto label_1a6fe4;
        case 0x1a6fe8u: goto label_1a6fe8;
        case 0x1a6fecu: goto label_1a6fec;
        case 0x1a6ff0u: goto label_1a6ff0;
        case 0x1a6ff4u: goto label_1a6ff4;
        case 0x1a6ff8u: goto label_1a6ff8;
        case 0x1a6ffcu: goto label_1a6ffc;
        case 0x1a7000u: goto label_1a7000;
        case 0x1a7004u: goto label_1a7004;
        case 0x1a7008u: goto label_1a7008;
        case 0x1a700cu: goto label_1a700c;
        case 0x1a7010u: goto label_1a7010;
        case 0x1a7014u: goto label_1a7014;
        case 0x1a7018u: goto label_1a7018;
        case 0x1a701cu: goto label_1a701c;
        case 0x1a7020u: goto label_1a7020;
        case 0x1a7024u: goto label_1a7024;
        case 0x1a7028u: goto label_1a7028;
        case 0x1a702cu: goto label_1a702c;
        case 0x1a7030u: goto label_1a7030;
        case 0x1a7034u: goto label_1a7034;
        case 0x1a7038u: goto label_1a7038;
        case 0x1a703cu: goto label_1a703c;
        case 0x1a7040u: goto label_1a7040;
        case 0x1a7044u: goto label_1a7044;
        case 0x1a7048u: goto label_1a7048;
        case 0x1a704cu: goto label_1a704c;
        case 0x1a7050u: goto label_1a7050;
        case 0x1a7054u: goto label_1a7054;
        case 0x1a7058u: goto label_1a7058;
        case 0x1a705cu: goto label_1a705c;
        case 0x1a7060u: goto label_1a7060;
        case 0x1a7064u: goto label_1a7064;
        case 0x1a7068u: goto label_1a7068;
        case 0x1a706cu: goto label_1a706c;
        case 0x1a7070u: goto label_1a7070;
        case 0x1a7074u: goto label_1a7074;
        case 0x1a7078u: goto label_1a7078;
        case 0x1a707cu: goto label_1a707c;
        case 0x1a7080u: goto label_1a7080;
        case 0x1a7084u: goto label_1a7084;
        case 0x1a7088u: goto label_1a7088;
        case 0x1a708cu: goto label_1a708c;
        case 0x1a7090u: goto label_1a7090;
        case 0x1a7094u: goto label_1a7094;
        case 0x1a7098u: goto label_1a7098;
        case 0x1a709cu: goto label_1a709c;
        case 0x1a70a0u: goto label_1a70a0;
        case 0x1a70a4u: goto label_1a70a4;
        case 0x1a70a8u: goto label_1a70a8;
        case 0x1a70acu: goto label_1a70ac;
        case 0x1a70b0u: goto label_1a70b0;
        case 0x1a70b4u: goto label_1a70b4;
        case 0x1a70b8u: goto label_1a70b8;
        case 0x1a70bcu: goto label_1a70bc;
        case 0x1a70c0u: goto label_1a70c0;
        case 0x1a70c4u: goto label_1a70c4;
        case 0x1a70c8u: goto label_1a70c8;
        case 0x1a70ccu: goto label_1a70cc;
        case 0x1a70d0u: goto label_1a70d0;
        case 0x1a70d4u: goto label_1a70d4;
        case 0x1a70d8u: goto label_1a70d8;
        case 0x1a70dcu: goto label_1a70dc;
        case 0x1a70e0u: goto label_1a70e0;
        case 0x1a70e4u: goto label_1a70e4;
        case 0x1a70e8u: goto label_1a70e8;
        case 0x1a70ecu: goto label_1a70ec;
        case 0x1a70f0u: goto label_1a70f0;
        case 0x1a70f4u: goto label_1a70f4;
        case 0x1a70f8u: goto label_1a70f8;
        case 0x1a70fcu: goto label_1a70fc;
        case 0x1a7100u: goto label_1a7100;
        case 0x1a7104u: goto label_1a7104;
        case 0x1a7108u: goto label_1a7108;
        case 0x1a710cu: goto label_1a710c;
        case 0x1a7110u: goto label_1a7110;
        case 0x1a7114u: goto label_1a7114;
        case 0x1a7118u: goto label_1a7118;
        case 0x1a711cu: goto label_1a711c;
        case 0x1a7120u: goto label_1a7120;
        case 0x1a7124u: goto label_1a7124;
        case 0x1a7128u: goto label_1a7128;
        case 0x1a712cu: goto label_1a712c;
        case 0x1a7130u: goto label_1a7130;
        case 0x1a7134u: goto label_1a7134;
        case 0x1a7138u: goto label_1a7138;
        case 0x1a713cu: goto label_1a713c;
        case 0x1a7140u: goto label_1a7140;
        case 0x1a7144u: goto label_1a7144;
        case 0x1a7148u: goto label_1a7148;
        case 0x1a714cu: goto label_1a714c;
        case 0x1a7150u: goto label_1a7150;
        case 0x1a7154u: goto label_1a7154;
        case 0x1a7158u: goto label_1a7158;
        case 0x1a715cu: goto label_1a715c;
        case 0x1a7160u: goto label_1a7160;
        case 0x1a7164u: goto label_1a7164;
        default: return;
    }

label_1a6998:
    // 0x1a6998: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a6998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1a699c:
    // 0x1a699c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1a699cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1a69a0:
    // 0x1a69a0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1a69a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1a69a4:
    // 0x1a69a4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1a69a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_1a69a8:
    // 0x1a69a8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a69a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a69ac:
    // 0x1a69ac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a69acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a69b0:
    // 0x1a69b0: 0xc06b518  jal         func_1AD460
label_1a69b4:
    if (ctx->pc == 0x1A69B4u) {
        ctx->pc = 0x1A69B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A69B0u;
        // 0x1a69b4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A69B8u;
        goto label_1a69b8;
    }
    ctx->pc = 0x1A69B0u;
    SET_GPR_U32(ctx, 31, 0x1A69B8u);
    ctx->pc = 0x1A69B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A69B0u;
    // 0x1a69b4: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1A69B8u;
label_1a69b8:
    // 0x1a69b8: 0x3c0a0028  lui         $t2, 0x28
    ctx->pc = 0x1a69b8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)40 << 16));
label_1a69bc:
    // 0x1a69bc: 0x8d425b68  lw          $v0, 0x5B68($t2)
    ctx->pc = 0x1a69bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 23400)));
label_1a69c0:
    // 0x1a69c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1a69c4:
    if (ctx->pc == 0x1A69C4u) {
        ctx->pc = 0x1A69C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A69C0u;
        // 0x1a69c4: 0x3c130037  lui         $s3, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A69C8u;
        goto label_1a69c8;
    }
    ctx->pc = 0x1A69C0u;
    {
        const bool branch_taken_0x1a69c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A69C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A69C0u;
        // 0x1a69c4: 0x3c130037  lui         $s3, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a69c0) {
            ctx->pc = 0x1A69E8u;
            goto label_1a69e8;
        }
    }
    ctx->pc = 0x1A69C8u;
label_1a69c8:
    // 0x1a69c8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1a69c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a69cc:
    // 0x1a69cc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1a69ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a69d0:
    // 0x1a69d0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a69d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a69d4:
    // 0x1a69d4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a69d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a69d8:
    // 0x1a69d8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a69d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a69dc:
    // 0x1a69dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a69dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a69e0:
    // 0x1a69e0: 0x806b52a  j           func_1AD4A8
label_1a69e4:
    if (ctx->pc == 0x1A69E4u) {
        ctx->pc = 0x1A69E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A69E0u;
        // 0x1a69e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A69E8u;
        goto label_1a69e8;
    }
    ctx->pc = 0x1A69E0u;
    ctx->pc = 0x1A69E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A69E0u;
    // 0x1a69e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A69E8u;
label_1a69e8:
    // 0x1a69e8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1a69e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1a69ec:
    // 0x1a69ec: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1a69ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_1a69f0:
    // 0x1a69f0: 0x24a517c0  addiu       $a1, $a1, 0x17C0
    ctx->pc = 0x1a69f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6080));
label_1a69f4:
    // 0x1a69f4: 0x26661740  addiu       $a2, $s3, 0x1740
    ctx->pc = 0x1a69f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 5952));
label_1a69f8:
    // 0x1a69f8: 0x3c120037  lui         $s2, 0x37
    ctx->pc = 0x1a69f8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)55 << 16));
label_1a69fc:
    // 0x1a69fc: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1a69fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1a6a00:
    // 0x1a6a00: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1a6a00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_1a6a04:
    // 0x1a6a04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a6a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6a08:
    // 0x1a6a08: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1a6a08u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
label_1a6a0c:
    // 0x1a6a0c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1a6a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1a6a10:
    // 0x1a6a10: 0x26421818  addiu       $v0, $s2, 0x1818
    ctx->pc = 0x1a6a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 6168));
label_1a6a14:
    // 0x1a6a14: 0xad435b68  sw          $v1, 0x5B68($t2)
    ctx->pc = 0x1a6a14u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 23400), GPR_U32(ctx, 3));
label_1a6a18:
    // 0x1a6a18: 0x25281840  addiu       $t0, $t1, 0x1840
    ctx->pc = 0x1a6a18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 6208));
label_1a6a1c:
    // 0x1a6a1c: 0xae461818  sw          $a2, 0x1818($s2)
    ctx->pc = 0x1a6a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6168), GPR_U32(ctx, 6));
label_1a6a20:
    // 0x1a6a20: 0x24841940  addiu       $a0, $a0, 0x1940
    ctx->pc = 0x1a6a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6464));
label_1a6a24:
    // 0x1a6a24: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x1a6a24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1a6a28:
    // 0x1a6a28: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x1a6a28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
label_1a6a2c:
    // 0x1a6a2c: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x1a6a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_1a6a30:
    // 0x1a6a30: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x1a6a30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1a6a34:
    // 0x1a6a34: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x1a6a34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 7));
label_1a6a38:
    // 0x1a6a38: 0x3c140037  lui         $s4, 0x37
    ctx->pc = 0x1a6a38u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)55 << 16));
label_1a6a3c:
    // 0x1a6a3c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1a6a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_1a6a40:
    // 0x1a6a40: 0x2410001f  addiu       $s0, $zero, 0x1F
    ctx->pc = 0x1a6a40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1a6a44:
    // 0x1a6a44: 0xac48000c  sw          $t0, 0xC($v0)
    ctx->pc = 0x1a6a44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 8));
label_1a6a48:
    // 0x1a6a48: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x1a6a48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_1a6a4c:
    // 0x1a6a4c: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1a6a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_1a6a50:
    // 0x1a6a50: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1a6a50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_1a6a54:
    // 0x1a6a54: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1a6a54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1a6a58:
    // 0x1a6a58: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1a6a58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1a6a5c:
    // 0x1a6a5c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1a6a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_1a6a60:
    // 0x1a6a60: 0x0  nop
    ctx->pc = 0x1a6a60u;
    // NOP
label_1a6a64:
    // 0x1a6a64: 0x601fffa  bgez        $s0, . + 4 + (-0x6 << 2)
label_1a6a68:
    if (ctx->pc == 0x1A6A68u) {
        ctx->pc = 0x1A6A6Cu;
        goto label_1a6a6c;
    }
    ctx->pc = 0x1A6A64u;
    {
        const bool branch_taken_0x1a6a64 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1a6a64) {
            ctx->pc = 0x1A6A50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a6a50;
        }
    }
    ctx->pc = 0x1A6A6Cu;
label_1a6a6c:
    // 0x1a6a6c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a6a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1a6a70:
    // 0x1a6a70: 0x2410001f  addiu       $s0, $zero, 0x1F
    ctx->pc = 0x1a6a70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1a6a74:
    // 0x1a6a74: 0x24421940  addiu       $v0, $v0, 0x1940
    ctx->pc = 0x1a6a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6464));
label_1a6a78:
    // 0x1a6a78: 0x2442007c  addiu       $v0, $v0, 0x7C
    ctx->pc = 0x1a6a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
label_1a6a7c:
    // 0x1a6a7c: 0x0  nop
    ctx->pc = 0x1a6a7cu;
    // NOP
label_1a6a80:
    // 0x1a6a80: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1a6a80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1a6a84:
    // 0x1a6a84: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1a6a84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1a6a88:
    // 0x1a6a88: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1a6a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_1a6a8c:
    // 0x1a6a8c: 0x0  nop
    ctx->pc = 0x1a6a8cu;
    // NOP
label_1a6a90:
    // 0x1a6a90: 0x0  nop
    ctx->pc = 0x1a6a90u;
    // NOP
label_1a6a94:
    // 0x1a6a94: 0x601fffa  bgez        $s0, . + 4 + (-0x6 << 2)
label_1a6a98:
    if (ctx->pc == 0x1A6A98u) {
        ctx->pc = 0x1A6A9Cu;
        goto label_1a6a9c;
    }
    ctx->pc = 0x1A6A94u;
    {
        const bool branch_taken_0x1a6a94 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1a6a94) {
            ctx->pc = 0x1A6A80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a6a80;
        }
    }
    ctx->pc = 0x1A6A9Cu;
label_1a6a9c:
    // 0x1a6a9c: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1a6a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
label_1a6aa0:
    // 0x1a6aa0: 0x3c03001a  lui         $v1, 0x1A
    ctx->pc = 0x1a6aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26 << 16));
label_1a6aa4:
    // 0x1a6aa4: 0x24426940  addiu       $v0, $v0, 0x6940
    ctx->pc = 0x1a6aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26944));
label_1a6aa8:
    // 0x1a6aa8: 0x25241840  addiu       $a0, $t1, 0x1840
    ctx->pc = 0x1a6aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 6208));
label_1a6aac:
    // 0x1a6aac: 0x24636920  addiu       $v1, $v1, 0x6920
    ctx->pc = 0x1a6aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26912));
label_1a6ab0:
    // 0x1a6ab0: 0x26511818  addiu       $s1, $s2, 0x1818
    ctx->pc = 0x1a6ab0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 6168));
label_1a6ab4:
    // 0x1a6ab4: 0xad221840  sw          $v0, 0x1840($t1)
    ctx->pc = 0x1a6ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 6208), GPR_U32(ctx, 2));
label_1a6ab8:
    // 0x1a6ab8: 0x24100020  addiu       $s0, $zero, 0x20
    ctx->pc = 0x1a6ab8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1a6abc:
    // 0x1a6abc: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1a6abcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_1a6ac0:
    // 0x1a6ac0: 0xac91000c  sw          $s1, 0xC($a0)
    ctx->pc = 0x1a6ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 17));
label_1a6ac4:
    // 0x1a6ac4: 0xc06b52a  jal         func_1AD4A8
label_1a6ac8:
    if (ctx->pc == 0x1A6AC8u) {
        ctx->pc = 0x1A6AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6AC4u;
        // 0x1a6ac8: 0xac910004  sw          $s1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6ACCu;
        goto label_1a6acc;
    }
    ctx->pc = 0x1A6AC4u;
    SET_GPR_U32(ctx, 31, 0x1A6ACCu);
    ctx->pc = 0x1A6AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6AC4u;
    // 0x1a6ac8: 0xac910004  sw          $s1, 0x4($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A6ACCu;
label_1a6acc:
    // 0x1a6acc: 0xc0692a8  jal         func_1A4AA0
label_1a6ad0:
    if (ctx->pc == 0x1A6AD0u) {
        ctx->pc = 0x1A6AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6ACCu;
        // 0x1a6ad0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6AD4u;
        goto label_1a6ad4;
    }
    ctx->pc = 0x1A6ACCu;
    SET_GPR_U32(ctx, 31, 0x1A6AD4u);
    ctx->pc = 0x1A6AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6ACCu;
    // 0x1a6ad0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    { ctx->pc = 0x1a4aa0; return; }
    ctx->pc = 0x1A6AD4u;
label_1a6ad4:
    // 0x1a6ad4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a6ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1a6ad8:
    // 0x1a6ad8: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x1a6ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
label_1a6adc:
    // 0x1a6adc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a6adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a6ae0:
    // 0x1a6ae0: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x1a6ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_1a6ae4:
    // 0x1a6ae4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1a6ae8:
    if (ctx->pc == 0x1A6AE8u) {
        ctx->pc = 0x1A6AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6AE4u;
        // 0x1a6ae8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6AECu;
        goto label_1a6aec;
    }
    ctx->pc = 0x1A6AE4u;
    {
        const bool branch_taken_0x1a6ae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6AE4u;
        // 0x1a6ae8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6ae4) {
            ctx->pc = 0x1A6AF8u;
            goto label_1a6af8;
        }
    }
    ctx->pc = 0x1A6AECu;
label_1a6aec:
    // 0x1a6aec: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1a6aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
label_1a6af0:
    // 0x1a6af0: 0xac30e010  sw          $s0, -0x1FF0($at)
    ctx->pc = 0x1a6af0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959120), GPR_U32(ctx, 16));
label_1a6af4:
    // 0x1a6af4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a6af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1a6af8:
    // 0x1a6af8: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x1a6af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
label_1a6afc:
    // 0x1a6afc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a6afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a6b00:
    // 0x1a6b00: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x1a6b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_1a6b04:
    // 0x1a6b04: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1a6b08:
    if (ctx->pc == 0x1A6B08u) {
        ctx->pc = 0x1A6B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B04u;
        // 0x1a6b08: 0x3c05001a  lui         $a1, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6B0Cu;
        goto label_1a6b0c;
    }
    ctx->pc = 0x1A6B04u;
    {
        const bool branch_taken_0x1a6b04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B04u;
        // 0x1a6b08: 0x3c05001a  lui         $a1, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6b04) {
            ctx->pc = 0x1A6B18u;
            goto label_1a6b18;
        }
    }
    ctx->pc = 0x1A6B0Cu;
label_1a6b0c:
    // 0x1a6b0c: 0xc069300  jal         func_1A4C00
label_1a6b10:
    if (ctx->pc == 0x1A6B10u) {
        ctx->pc = 0x1A6B14u;
        goto label_1a6b14;
    }
    ctx->pc = 0x1A6B0Cu;
    SET_GPR_U32(ctx, 31, 0x1A6B14u);
    ctx->pc = 0x1A4C00u;
    { ctx->pc = 0x1a4c00; return; }
    ctx->pc = 0x1A6B14u;
label_1a6b14:
    // 0x1a6b14: 0x3c05001a  lui         $a1, 0x1A
    ctx->pc = 0x1a6b14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
label_1a6b18:
    // 0x1a6b18: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1a6b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1a6b1c:
    // 0x1a6b1c: 0x24a56e90  addiu       $a1, $a1, 0x6E90
    ctx->pc = 0x1a6b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28304));
label_1a6b20:
    // 0x1a6b20: 0xc06914c  jal         func_1A4530
label_1a6b24:
    if (ctx->pc == 0x1A6B24u) {
        ctx->pc = 0x1A6B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B20u;
        // 0x1a6b24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6B28u;
        goto label_1a6b28;
    }
    ctx->pc = 0x1A6B20u;
    SET_GPR_U32(ctx, 31, 0x1A6B28u);
    ctx->pc = 0x1A6B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6B20u;
    // 0x1a6b24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4530u;
    { ctx->pc = 0x1a4530; return; }
    ctx->pc = 0x1A6B28u;
label_1a6b28:
    // 0x1a6b28: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1a6b28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1a6b2c:
    // 0x1a6b2c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1a6b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1a6b30:
    // 0x1a6b30: 0xc06950e  jal         func_1A5438
label_1a6b34:
    if (ctx->pc == 0x1A6B34u) {
        ctx->pc = 0x1A6B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B30u;
        // 0x1a6b34: 0xac621814  sw          $v0, 0x1814($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 6164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6B38u;
        goto label_1a6b38;
    }
    ctx->pc = 0x1A6B30u;
    SET_GPR_U32(ctx, 31, 0x1A6B38u);
    ctx->pc = 0x1A6B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6B30u;
    // 0x1a6b34: 0xac621814  sw          $v0, 0x1814($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 6164), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5438u;
    { ctx->pc = 0x1a5438; return; }
    ctx->pc = 0x1A6B38u;
label_1a6b38:
    // 0x1a6b38: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a6b38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1a6b3c:
    // 0x1a6b3c: 0xc06930c  jal         func_1A4C30
label_1a6b40:
    if (ctx->pc == 0x1A6B40u) {
        ctx->pc = 0x1A6B44u;
        goto label_1a6b44;
    }
    ctx->pc = 0x1A6B3Cu;
    SET_GPR_U32(ctx, 31, 0x1A6B44u);
    ctx->pc = 0x1A4C30u;
    { ctx->pc = 0x1a4c30; return; }
    ctx->pc = 0x1A6B44u;
label_1a6b44:
    // 0x1a6b44: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1a6b48:
    if (ctx->pc == 0x1A6B48u) {
        ctx->pc = 0x1A6B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B44u;
        // 0x1a6b48: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6B4Cu;
        goto label_1a6b4c;
    }
    ctx->pc = 0x1A6B44u;
    {
        const bool branch_taken_0x1a6b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B44u;
        // 0x1a6b48: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6b44) {
            ctx->pc = 0x1A6B8Cu;
            goto label_1a6b8c;
        }
    }
    ctx->pc = 0x1A6B4Cu;
label_1a6b4c:
    // 0x1a6b4c: 0x26851800  addiu       $a1, $s4, 0x1800
    ctx->pc = 0x1a6b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 6144));
label_1a6b50:
    // 0x1a6b50: 0x26621740  addiu       $v0, $s3, 0x1740
    ctx->pc = 0x1a6b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 5952));
label_1a6b54:
    // 0x1a6b54: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1a6b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a6b58:
    // 0x1a6b58: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a6b58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1a6b5c:
    // 0x1a6b5c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1a6b5cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a6b60:
    // 0x1a6b60: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1a6b60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a6b64:
    // 0x1a6b64: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a6b64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a6b68:
    // 0x1a6b68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a6b68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6b6c:
    // 0x1a6b6c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a6b6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a6b70:
    // 0x1a6b70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a6b70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6b74:
    // 0x1a6b74: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a6b74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a6b78:
    // 0x1a6b78: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a6b78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6b7c:
    // 0x1a6b7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a6b7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a6b80:
    // 0x1a6b80: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x1a6b80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
label_1a6b84:
    // 0x1a6b84: 0x8069b84  j           func_1A6E10
label_1a6b88:
    if (ctx->pc == 0x1A6B88u) {
        ctx->pc = 0x1A6B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B84u;
        // 0x1a6b88: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6B8Cu;
        goto label_1a6b8c;
    }
    ctx->pc = 0x1A6B84u;
    ctx->pc = 0x1A6B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6B84u;
    // 0x1a6b88: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6E10u;
    goto label_1a6e10;
    ctx->pc = 0x1A6B8Cu;
label_1a6b8c:
    // 0x1a6b8c: 0x3c100002  lui         $s0, 0x2
    ctx->pc = 0x1a6b8cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)2 << 16));
label_1a6b90:
    // 0x1a6b90: 0xc06930c  jal         func_1A4C30
label_1a6b94:
    if (ctx->pc == 0x1A6B94u) {
        ctx->pc = 0x1A6B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B90u;
        // 0x1a6b94: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6B98u;
        goto label_1a6b98;
    }
    ctx->pc = 0x1A6B90u;
    SET_GPR_U32(ctx, 31, 0x1A6B98u);
    ctx->pc = 0x1A6B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6B90u;
    // 0x1a6b94: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C30u;
    { ctx->pc = 0x1a4c30; return; }
    ctx->pc = 0x1A6B98u;
label_1a6b98:
    // 0x1a6b98: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x1a6b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_1a6b9c:
    // 0x1a6b9c: 0x1040fffc  beqz        $v0, . + 4 + (-0x4 << 2)
label_1a6ba0:
    if (ctx->pc == 0x1A6BA0u) {
        ctx->pc = 0x1A6BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B9Cu;
        // 0x1a6ba0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6BA4u;
        goto label_1a6ba4;
    }
    ctx->pc = 0x1A6B9Cu;
    {
        const bool branch_taken_0x1a6b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B9Cu;
        // 0x1a6ba0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6b9c) {
            ctx->pc = 0x1A6B90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a6b90;
        }
    }
    ctx->pc = 0x1A6BA4u;
label_1a6ba4:
    // 0x1a6ba4: 0xc06930c  jal         func_1A4C30
label_1a6ba8:
    if (ctx->pc == 0x1A6BA8u) {
        ctx->pc = 0x1A6BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6BA4u;
        // 0x1a6ba8: 0x26501818  addiu       $s0, $s2, 0x1818 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 6168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6BACu;
        goto label_1a6bac;
    }
    ctx->pc = 0x1A6BA4u;
    SET_GPR_U32(ctx, 31, 0x1A6BACu);
    ctx->pc = 0x1A6BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6BA4u;
    // 0x1a6ba8: 0x26501818  addiu       $s0, $s2, 0x1818 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 6168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C30u;
    { ctx->pc = 0x1a4c30; return; }
    ctx->pc = 0x1A6BACu;
label_1a6bac:
    // 0x1a6bac: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1a6bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1a6bb0:
    // 0x1a6bb0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a6bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1a6bb4:
    // 0x1a6bb4: 0xc069308  jal         func_1A4C20
label_1a6bb8:
    if (ctx->pc == 0x1A6BB8u) {
        ctx->pc = 0x1A6BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6BB4u;
        // 0x1a6bb8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6BBCu;
        goto label_1a6bbc;
    }
    ctx->pc = 0x1A6BB4u;
    SET_GPR_U32(ctx, 31, 0x1A6BBCu);
    ctx->pc = 0x1A6BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6BB4u;
    // 0x1a6bb8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C20u;
    { ctx->pc = 0x1a4c20; return; }
    ctx->pc = 0x1A6BBCu;
label_1a6bbc:
    // 0x1a6bbc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a6bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1a6bc0:
    // 0x1a6bc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a6bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a6bc4:
    // 0x1a6bc4: 0xc069308  jal         func_1A4C20
label_1a6bc8:
    if (ctx->pc == 0x1A6BC8u) {
        ctx->pc = 0x1A6BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6BC4u;
        // 0x1a6bc8: 0x34840001  ori         $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6BCCu;
        goto label_1a6bcc;
    }
    ctx->pc = 0x1A6BC4u;
    SET_GPR_U32(ctx, 31, 0x1A6BCCu);
    ctx->pc = 0x1A6BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6BC4u;
    // 0x1a6bc8: 0x34840001  ori         $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C20u;
    { ctx->pc = 0x1a4c20; return; }
    ctx->pc = 0x1A6BCCu;
label_1a6bcc:
    // 0x1a6bcc: 0x26831800  addiu       $v1, $s4, 0x1800
    ctx->pc = 0x1a6bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 6144));
label_1a6bd0:
    // 0x1a6bd0: 0x26621740  addiu       $v0, $s3, 0x1740
    ctx->pc = 0x1a6bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 5952));
label_1a6bd4:
    // 0x1a6bd4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a6bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1a6bd8:
    // 0x1a6bd8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1a6bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a6bdc:
    // 0x1a6bdc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1a6bdcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a6be0:
    // 0x1a6be0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1a6be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a6be4:
    // 0x1a6be4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a6be4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a6be8:
    // 0x1a6be8: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x1a6be8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
label_1a6bec:
    // 0x1a6bec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a6becu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a6bf0:
    // 0x1a6bf0: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1a6bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a6bf4:
    // 0x1a6bf4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a6bf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a6bf8:
    // 0x1a6bf8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a6bf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6bfc:
    // 0x1a6bfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a6bfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a6c00:
    // 0x1a6c00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a6c00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6c04:
    // 0x1a6c04: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x1a6c04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_1a6c08:
    // 0x1a6c08: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a6c08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6c0c:
    // 0x1a6c0c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1a6c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_1a6c10:
    // 0x1a6c10: 0x8069b84  j           func_1A6E10
label_1a6c14:
    if (ctx->pc == 0x1A6C14u) {
        ctx->pc = 0x1A6C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C10u;
        // 0x1a6c14: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6C18u;
        goto label_1a6c18;
    }
    ctx->pc = 0x1A6C10u;
    ctx->pc = 0x1A6C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6C10u;
    // 0x1a6c14: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6E10u;
    goto label_1a6e10;
    ctx->pc = 0x1A6C18u;
label_1a6c18:
    // 0x1a6c18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a6c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a6c1c:
    // 0x1a6c1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a6c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a6c20:
    // 0x1a6c20: 0xc0694f4  jal         func_1A53D0
label_1a6c24:
    if (ctx->pc == 0x1A6C24u) {
        ctx->pc = 0x1A6C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C20u;
        // 0x1a6c24: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6C28u;
        goto label_1a6c28;
    }
    ctx->pc = 0x1A6C20u;
    SET_GPR_U32(ctx, 31, 0x1A6C28u);
    ctx->pc = 0x1A6C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6C20u;
    // 0x1a6c24: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A53D0u;
    { ctx->pc = 0x1a53d0; return; }
    ctx->pc = 0x1A6C28u;
label_1a6c28:
    // 0x1a6c28: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1a6c28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1a6c2c:
    // 0x1a6c2c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1a6c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1a6c30:
    // 0x1a6c30: 0xc069154  jal         func_1A4550
label_1a6c34:
    if (ctx->pc == 0x1A6C34u) {
        ctx->pc = 0x1A6C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C30u;
        // 0x1a6c34: 0x8c651814  lw          $a1, 0x1814($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6C38u;
        goto label_1a6c38;
    }
    ctx->pc = 0x1A6C30u;
    SET_GPR_U32(ctx, 31, 0x1A6C38u);
    ctx->pc = 0x1A6C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6C30u;
    // 0x1a6c34: 0x8c651814  lw          $a1, 0x1814($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4550u;
    { ctx->pc = 0x1a4550; return; }
    ctx->pc = 0x1A6C38u;
label_1a6c38:
    // 0x1a6c38: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1a6c38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1a6c3c:
    // 0x1a6c3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a6c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a6c40:
    // 0x1a6c40: 0xac605b68  sw          $zero, 0x5B68($v1)
    ctx->pc = 0x1a6c40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 23400), GPR_U32(ctx, 0));
label_1a6c44:
    // 0x1a6c44: 0x3e00008  jr          $ra
label_1a6c48:
    if (ctx->pc == 0x1A6C48u) {
        ctx->pc = 0x1A6C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C44u;
        // 0x1a6c48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6C4Cu;
        goto label_1a6c4c;
    }
    ctx->pc = 0x1A6C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C44u;
        // 0x1a6c48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6C4Cu;
label_1a6c4c:
    // 0x1a6c4c: 0x0  nop
    ctx->pc = 0x1a6c4cu;
    // NOP
label_1a6c50:
    // 0x1a6c50: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1a6c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1a6c54:
    // 0x1a6c54: 0x24631818  addiu       $v1, $v1, 0x1818
    ctx->pc = 0x1a6c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6168));
label_1a6c58:
    // 0x1a6c58: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1a6c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1a6c5c:
    // 0x1a6c5c: 0xac650018  sw          $a1, 0x18($v1)
    ctx->pc = 0x1a6c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 5));
label_1a6c60:
    // 0x1a6c60: 0x3e00008  jr          $ra
label_1a6c64:
    if (ctx->pc == 0x1A6C64u) {
        ctx->pc = 0x1A6C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C60u;
        // 0x1a6c64: 0xac640014  sw          $a0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6C68u;
        goto label_1a6c68;
    }
    ctx->pc = 0x1A6C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C60u;
        // 0x1a6c64: 0xac640014  sw          $a0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6C68u;
label_1a6c68:
    // 0x1a6c68: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1a6c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1a6c6c:
    // 0x1a6c6c: 0x24631818  addiu       $v1, $v1, 0x1818
    ctx->pc = 0x1a6c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6168));
label_1a6c70:
    // 0x1a6c70: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1a6c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1a6c74:
    // 0x1a6c74: 0xac650010  sw          $a1, 0x10($v1)
    ctx->pc = 0x1a6c74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 5));
label_1a6c78:
    // 0x1a6c78: 0x3e00008  jr          $ra
label_1a6c7c:
    if (ctx->pc == 0x1A6C7Cu) {
        ctx->pc = 0x1A6C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C78u;
        // 0x1a6c7c: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6C80u;
        goto label_1a6c80;
    }
    ctx->pc = 0x1A6C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C78u;
        // 0x1a6c7c: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6C80u;
label_1a6c80:
    // 0x1a6c80: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
label_1a6c84:
    if (ctx->pc == 0x1A6C84u) {
        ctx->pc = 0x1A6C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C80u;
        // 0x1a6c84: 0x418c0  sll         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6C88u;
        goto label_1a6c88;
    }
    ctx->pc = 0x1A6C80u;
    {
        const bool branch_taken_0x1a6c80 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1A6C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C80u;
        // 0x1a6c84: 0x418c0  sll         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6c80) {
            ctx->pc = 0x1A6C94u;
            goto label_1a6c94;
        }
    }
    ctx->pc = 0x1A6C88u;
label_1a6c88:
    // 0x1a6c88: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a6c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1a6c8c:
    // 0x1a6c8c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a6c90:
    if (ctx->pc == 0x1A6C90u) {
        ctx->pc = 0x1A6C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C8Cu;
        // 0x1a6c90: 0x8c441824  lw          $a0, 0x1824($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6C94u;
        goto label_1a6c94;
    }
    ctx->pc = 0x1A6C8Cu;
    {
        const bool branch_taken_0x1a6c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6C8Cu;
        // 0x1a6c90: 0x8c441824  lw          $a0, 0x1824($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6c8c) {
            ctx->pc = 0x1A6C9Cu;
            goto label_1a6c9c;
        }
    }
    ctx->pc = 0x1A6C94u;
label_1a6c94:
    // 0x1a6c94: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a6c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1a6c98:
    // 0x1a6c98: 0x8c44182c  lw          $a0, 0x182C($v0)
    ctx->pc = 0x1a6c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6188)));
label_1a6c9c:
    // 0x1a6c9c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a6c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a6ca0:
    // 0x1a6ca0: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x1a6ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
label_1a6ca4:
    // 0x1a6ca4: 0x3e00008  jr          $ra
label_1a6ca8:
    if (ctx->pc == 0x1A6CA8u) {
        ctx->pc = 0x1A6CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6CA4u;
        // 0x1a6ca8: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6CACu;
        goto label_1a6cac;
    }
    ctx->pc = 0x1A6CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6CA4u;
        // 0x1a6ca8: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6CACu;
label_1a6cac:
    // 0x1a6cac: 0x0  nop
    ctx->pc = 0x1a6cacu;
    // NOP
label_1a6cb0:
    // 0x1a6cb0: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
label_1a6cb4:
    if (ctx->pc == 0x1A6CB4u) {
        ctx->pc = 0x1A6CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6CB0u;
        // 0x1a6cb4: 0x418c0  sll         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6CB8u;
        goto label_1a6cb8;
    }
    ctx->pc = 0x1A6CB0u;
    {
        const bool branch_taken_0x1a6cb0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1A6CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6CB0u;
        // 0x1a6cb4: 0x418c0  sll         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6cb0) {
            ctx->pc = 0x1A6CC4u;
            goto label_1a6cc4;
        }
    }
    ctx->pc = 0x1A6CB8u;
label_1a6cb8:
    // 0x1a6cb8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a6cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1a6cbc:
    // 0x1a6cbc: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a6cc0:
    if (ctx->pc == 0x1A6CC0u) {
        ctx->pc = 0x1A6CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6CBCu;
        // 0x1a6cc0: 0x8c441824  lw          $a0, 0x1824($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6CC4u;
        goto label_1a6cc4;
    }
    ctx->pc = 0x1A6CBCu;
    {
        const bool branch_taken_0x1a6cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6CBCu;
        // 0x1a6cc0: 0x8c441824  lw          $a0, 0x1824($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6cbc) {
            ctx->pc = 0x1A6CCCu;
            goto label_1a6ccc;
        }
    }
    ctx->pc = 0x1A6CC4u;
label_1a6cc4:
    // 0x1a6cc4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a6cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1a6cc8:
    // 0x1a6cc8: 0x8c44182c  lw          $a0, 0x182C($v0)
    ctx->pc = 0x1a6cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6188)));
label_1a6ccc:
    // 0x1a6ccc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a6cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a6cd0:
    // 0x1a6cd0: 0x3e00008  jr          $ra
label_1a6cd4:
    if (ctx->pc == 0x1A6CD4u) {
        ctx->pc = 0x1A6CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6CD0u;
        // 0x1a6cd4: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6CD8u;
        goto label_1a6cd8;
    }
    ctx->pc = 0x1A6CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6CD0u;
        // 0x1a6cd4: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6CD8u;
label_1a6cd8:
    // 0x1a6cd8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1a6cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1a6cdc:
    // 0x1a6cdc: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1a6cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_1a6ce0:
    // 0x1a6ce0: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1a6ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_1a6ce4:
    // 0x1a6ce4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1a6ce4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a6ce8:
    // 0x1a6ce8: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x1a6ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_1a6cec:
    // 0x1a6cec: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1a6cecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a6cf0:
    // 0x1a6cf0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a6cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1a6cf4:
    // 0x1a6cf4: 0x2622fff0  addiu       $v0, $s1, -0x10
    ctx->pc = 0x1a6cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
label_1a6cf8:
    // 0x1a6cf8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a6cf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a6cfc:
    // 0x1a6cfc: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1a6cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1a6d00:
    // 0x1a6d00: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1a6d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_1a6d04:
    // 0x1a6d04: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1a6d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a6d08:
    // 0x1a6d08: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1a6d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1a6d0c:
    // 0x1a6d0c: 0x2c420061  sltiu       $v0, $v0, 0x61
    ctx->pc = 0x1a6d0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)97) ? 1 : 0);
label_1a6d10:
    // 0x1a6d10: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1a6d14:
    if (ctx->pc == 0x1A6D14u) {
        ctx->pc = 0x1A6D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D10u;
        // 0x1a6d14: 0x140282d  daddu       $a1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6D18u;
        goto label_1a6d18;
    }
    ctx->pc = 0x1A6D10u;
    {
        const bool branch_taken_0x1a6d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D10u;
        // 0x1a6d14: 0x140282d  daddu       $a1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6d10) {
            ctx->pc = 0x1A6D20u;
            goto label_1a6d20;
        }
    }
    ctx->pc = 0x1A6D18u;
label_1a6d18:
    // 0x1a6d18: 0x10000034  b           . + 4 + (0x34 << 2)
label_1a6d1c:
    if (ctx->pc == 0x1A6D1Cu) {
        ctx->pc = 0x1A6D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D18u;
        // 0x1a6d1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6D20u;
        goto label_1a6d20;
    }
    ctx->pc = 0x1A6D18u;
    {
        const bool branch_taken_0x1a6d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D18u;
        // 0x1a6d1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6d18) {
            ctx->pc = 0x1A6DECu;
            goto label_1a6dec;
        }
    }
    ctx->pc = 0x1A6D20u;
label_1a6d20:
    // 0x1a6d20: 0x18a00011  blez        $a1, . + 4 + (0x11 << 2)
label_1a6d24:
    if (ctx->pc == 0x1A6D24u) {
        ctx->pc = 0x1A6D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D20u;
        // 0x1a6d24: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6D28u;
        goto label_1a6d28;
    }
    ctx->pc = 0x1A6D20u;
    {
        const bool branch_taken_0x1a6d20 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1A6D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D20u;
        // 0x1a6d24: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6d20) {
            ctx->pc = 0x1A6D68u;
            goto label_1a6d68;
        }
    }
    ctx->pc = 0x1A6D28u;
label_1a6d28:
    // 0x1a6d28: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1a6d28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6d2c:
    // 0x1a6d2c: 0x51a00  sll         $v1, $a1, 8
    ctx->pc = 0x1a6d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1a6d30:
    // 0x1a6d30: 0xae090004  sw          $t1, 0x4($s0)
    ctx->pc = 0x1a6d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 9));
label_1a6d34:
    // 0x1a6d34: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1a6d34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6d38:
    // 0x1a6d38: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a6d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a6d3c:
    // 0x1a6d3c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1a6d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1a6d40:
    // 0x1a6d40: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a6d40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1a6d44:
    // 0x1a6d44: 0x32630004  andi        $v1, $s3, 0x4
    ctx->pc = 0x1a6d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
label_1a6d48:
    // 0x1a6d48: 0xafa90004  sw          $t1, 0x4($sp)
    ctx->pc = 0x1a6d48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
label_1a6d4c:
    // 0x1a6d4c: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x1a6d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
label_1a6d50:
    // 0x1a6d50: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_1a6d54:
    if (ctx->pc == 0x1A6D54u) {
        ctx->pc = 0x1A6D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D50u;
        // 0x1a6d54: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6D58u;
        goto label_1a6d58;
    }
    ctx->pc = 0x1A6D50u;
    {
        const bool branch_taken_0x1a6d50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D50u;
        // 0x1a6d54: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6d50) {
            ctx->pc = 0x1A6D74u;
            goto label_1a6d74;
        }
    }
    ctx->pc = 0x1A6D58u;
label_1a6d58:
    // 0x1a6d58: 0xc069bee  jal         func_1A6FB8
label_1a6d5c:
    if (ctx->pc == 0x1A6D5Cu) {
        ctx->pc = 0x1A6D60u;
        goto label_1a6d60;
    }
    ctx->pc = 0x1A6D58u;
    SET_GPR_U32(ctx, 31, 0x1A6D60u);
    ctx->pc = 0x1A6FB8u;
    goto label_1a6fb8;
    ctx->pc = 0x1A6D60u;
label_1a6d60:
    // 0x1a6d60: 0x10000005  b           . + 4 + (0x5 << 2)
label_1a6d64:
    if (ctx->pc == 0x1A6D64u) {
        ctx->pc = 0x1A6D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D60u;
        // 0x1a6d64: 0x122900  sll         $a1, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6D68u;
        goto label_1a6d68;
    }
    ctx->pc = 0x1A6D60u;
    {
        const bool branch_taken_0x1a6d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D60u;
        // 0x1a6d64: 0x122900  sll         $a1, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6d60) {
            ctx->pc = 0x1A6D78u;
            goto label_1a6d78;
        }
    }
    ctx->pc = 0x1A6D68u;
label_1a6d68:
    // 0x1a6d68: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1a6d68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6d6c:
    // 0x1a6d6c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1a6d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1a6d70:
    // 0x1a6d70: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a6d70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1a6d74:
    // 0x1a6d74: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x1a6d74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_1a6d78:
    // 0x1a6d78: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1a6d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1a6d7c:
    // 0x1a6d7c: 0x8c441820  lw          $a0, 0x1820($v0)
    ctx->pc = 0x1a6d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6176)));
label_1a6d80:
    // 0x1a6d80: 0x3a51821  addu        $v1, $sp, $a1
    ctx->pc = 0x1a6d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
label_1a6d84:
    // 0x1a6d84: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x1a6d84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_1a6d88:
    // 0x1a6d88: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x1a6d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_1a6d8c:
    // 0x1a6d8c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a6d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1a6d90:
    // 0x1a6d90: 0x27a30008  addiu       $v1, $sp, 0x8
    ctx->pc = 0x1a6d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_1a6d94:
    // 0x1a6d94: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1a6d94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1a6d98:
    // 0x1a6d98: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1a6d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1a6d9c:
    // 0x1a6d9c: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x1a6d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_1a6da0:
    // 0x1a6da0: 0x27a4000c  addiu       $a0, $sp, 0xC
    ctx->pc = 0x1a6da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
label_1a6da4:
    // 0x1a6da4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1a6da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1a6da8:
    // 0x1a6da8: 0xae140008  sw          $s4, 0x8($s0)
    ctx->pc = 0x1a6da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 20));
label_1a6dac:
    // 0x1a6dac: 0xa2110000  sb          $s1, 0x0($s0)
    ctx->pc = 0x1a6dacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 17));
label_1a6db0:
    // 0x1a6db0: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x1a6db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_1a6db4:
    // 0x1a6db4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1a6db4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1a6db8:
    // 0x1a6db8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a6db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a6dbc:
    // 0x1a6dbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a6dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a6dc0:
    // 0x1a6dc0: 0xc069bee  jal         func_1A6FB8
label_1a6dc4:
    if (ctx->pc == 0x1A6DC4u) {
        ctx->pc = 0x1A6DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6DC0u;
        // 0x1a6dc4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6DC8u;
        goto label_1a6dc8;
    }
    ctx->pc = 0x1A6DC0u;
    SET_GPR_U32(ctx, 31, 0x1A6DC8u);
    ctx->pc = 0x1A6DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6DC0u;
    // 0x1a6dc4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    goto label_1a6fb8;
    ctx->pc = 0x1A6DC8u;
label_1a6dc8:
    // 0x1a6dc8: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x1a6dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_1a6dcc:
    // 0x1a6dcc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a6dd0:
    if (ctx->pc == 0x1A6DD0u) {
        ctx->pc = 0x1A6DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6DCCu;
        // 0x1a6dd0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6DD4u;
        goto label_1a6dd4;
    }
    ctx->pc = 0x1A6DCCu;
    {
        const bool branch_taken_0x1a6dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6DCCu;
        // 0x1a6dd0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6dcc) {
            ctx->pc = 0x1A6DE4u;
            goto label_1a6de4;
        }
    }
    ctx->pc = 0x1A6DD4u;
label_1a6dd4:
    // 0x1a6dd4: 0xc0692fc  jal         func_1A4BF0
label_1a6dd8:
    if (ctx->pc == 0x1A6DD8u) {
        ctx->pc = 0x1A6DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6DD4u;
        // 0x1a6dd8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6DDCu;
        goto label_1a6ddc;
    }
    ctx->pc = 0x1A6DD4u;
    SET_GPR_U32(ctx, 31, 0x1A6DDCu);
    ctx->pc = 0x1A6DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6DD4u;
    // 0x1a6dd8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4BF0u;
    { ctx->pc = 0x1a4bf0; return; }
    ctx->pc = 0x1A6DDCu;
label_1a6ddc:
    // 0x1a6ddc: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a6de0:
    if (ctx->pc == 0x1A6DE0u) {
        ctx->pc = 0x1A6DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6DDCu;
        // 0x1a6de0: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6DE4u;
        goto label_1a6de4;
    }
    ctx->pc = 0x1A6DDCu;
    {
        const bool branch_taken_0x1a6ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6DDCu;
        // 0x1a6de0: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6ddc) {
            ctx->pc = 0x1A6DF0u;
            goto label_1a6df0;
        }
    }
    ctx->pc = 0x1A6DE4u;
label_1a6de4:
    // 0x1a6de4: 0xc0692f8  jal         func_1A4BE0
label_1a6de8:
    if (ctx->pc == 0x1A6DE8u) {
        ctx->pc = 0x1A6DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6DE4u;
        // 0x1a6de8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6DECu;
        goto label_1a6dec;
    }
    ctx->pc = 0x1A6DE4u;
    SET_GPR_U32(ctx, 31, 0x1A6DECu);
    ctx->pc = 0x1A6DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6DE4u;
    // 0x1a6de8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4BE0u;
    { ctx->pc = 0x1a4be0; return; }
    ctx->pc = 0x1A6DECu;
label_1a6dec:
    // 0x1a6dec: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1a6decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1a6df0:
    // 0x1a6df0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1a6df0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a6df4:
    // 0x1a6df4: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1a6df4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a6df8:
    // 0x1a6df8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1a6df8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a6dfc:
    // 0x1a6dfc: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1a6dfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a6e00:
    // 0x1a6e00: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a6e00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a6e04:
    // 0x1a6e04: 0x3e00008  jr          $ra
label_1a6e08:
    if (ctx->pc == 0x1A6E08u) {
        ctx->pc = 0x1A6E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E04u;
        // 0x1a6e08: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6E0Cu;
        goto label_1a6e0c;
    }
    ctx->pc = 0x1A6E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E04u;
        // 0x1a6e08: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6E04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6E0Cu;
label_1a6e0c:
    // 0x1a6e0c: 0x0  nop
    ctx->pc = 0x1a6e0cu;
    // NOP
label_1a6e10:
    // 0x1a6e10: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1a6e10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a6e14:
    // 0x1a6e14: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x1a6e14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a6e18:
    // 0x1a6e18: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x1a6e18u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1a6e1c:
    // 0x1a6e1c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a6e1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a6e20:
    // 0x1a6e20: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x1a6e20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1a6e24:
    // 0x1a6e24: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1a6e24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a6e28:
    // 0x1a6e28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a6e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a6e2c:
    // 0x1a6e2c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1a6e2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a6e30:
    // 0x1a6e30: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x1a6e30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a6e34:
    // 0x1a6e34: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x1a6e34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1a6e38:
    // 0x1a6e38: 0xc069b36  jal         func_1A6CD8
label_1a6e3c:
    if (ctx->pc == 0x1A6E3Cu) {
        ctx->pc = 0x1A6E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E38u;
        // 0x1a6e3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6E40u;
        goto label_1a6e40;
    }
    ctx->pc = 0x1A6E38u;
    SET_GPR_U32(ctx, 31, 0x1A6E40u);
    ctx->pc = 0x1A6E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6E38u;
    // 0x1a6e3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6CD8u;
    goto label_1a6cd8;
    ctx->pc = 0x1A6E40u;
label_1a6e40:
    // 0x1a6e40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a6e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a6e44:
    // 0x1a6e44: 0x3e00008  jr          $ra
label_1a6e48:
    if (ctx->pc == 0x1A6E48u) {
        ctx->pc = 0x1A6E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E44u;
        // 0x1a6e48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6E4Cu;
        goto label_1a6e4c;
    }
    ctx->pc = 0x1A6E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E44u;
        // 0x1a6e48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6E4Cu;
label_1a6e4c:
    // 0x1a6e4c: 0x0  nop
    ctx->pc = 0x1a6e4cu;
    // NOP
label_1a6e50:
    // 0x1a6e50: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1a6e50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a6e54:
    // 0x1a6e54: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x1a6e54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a6e58:
    // 0x1a6e58: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x1a6e58u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1a6e5c:
    // 0x1a6e5c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a6e5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a6e60:
    // 0x1a6e60: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x1a6e60u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1a6e64:
    // 0x1a6e64: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1a6e64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a6e68:
    // 0x1a6e68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a6e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a6e6c:
    // 0x1a6e6c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1a6e6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a6e70:
    // 0x1a6e70: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x1a6e70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a6e74:
    // 0x1a6e74: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x1a6e74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1a6e78:
    // 0x1a6e78: 0xc069b36  jal         func_1A6CD8
label_1a6e7c:
    if (ctx->pc == 0x1A6E7Cu) {
        ctx->pc = 0x1A6E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E78u;
        // 0x1a6e7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6E80u;
        goto label_1a6e80;
    }
    ctx->pc = 0x1A6E78u;
    SET_GPR_U32(ctx, 31, 0x1A6E80u);
    ctx->pc = 0x1A6E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6E78u;
    // 0x1a6e7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6CD8u;
    goto label_1a6cd8;
    ctx->pc = 0x1A6E80u;
label_1a6e80:
    // 0x1a6e80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a6e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a6e84:
    // 0x1a6e84: 0x3e00008  jr          $ra
label_1a6e88:
    if (ctx->pc == 0x1A6E88u) {
        ctx->pc = 0x1A6E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E84u;
        // 0x1a6e88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6E8Cu;
        goto label_1a6e8c;
    }
    ctx->pc = 0x1A6E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E84u;
        // 0x1a6e88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6E8Cu;
label_1a6e8c:
    // 0x1a6e8c: 0x0  nop
    ctx->pc = 0x1a6e8cu;
    // NOP
label_1a6e90:
    // 0x1a6e90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1a6e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1a6e94:
    // 0x1a6e94: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x1a6e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
label_1a6e98:
    // 0x1a6e98: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1a6e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1a6e9c:
    // 0x1a6e9c: 0xc06b52a  jal         func_1AD4A8
label_1a6ea0:
    if (ctx->pc == 0x1A6EA0u) {
        ctx->pc = 0x1A6EA4u;
        goto label_1a6ea4;
    }
    ctx->pc = 0x1A6E9Cu;
    SET_GPR_U32(ctx, 31, 0x1A6EA4u);
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A6EA4u;
label_1a6ea4:
    // 0x1a6ea4: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1a6ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1a6ea8:
    // 0x1a6ea8: 0x8c671818  lw          $a3, 0x1818($v1)
    ctx->pc = 0x1a6ea8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6168)));
label_1a6eac:
    // 0x1a6eac: 0x24701818  addiu       $s0, $v1, 0x1818
    ctx->pc = 0x1a6eacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 6168));
label_1a6eb0:
    // 0x1a6eb0: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x1a6eb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_1a6eb4:
    // 0x1a6eb4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1a6eb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1a6eb8:
    // 0x1a6eb8: 0x10a0003b  beqz        $a1, . + 4 + (0x3B << 2)
label_1a6ebc:
    if (ctx->pc == 0x1A6EBCu) {
        ctx->pc = 0x1A6EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6EB8u;
        // 0x1a6ebc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6EC0u;
        goto label_1a6ec0;
    }
    ctx->pc = 0x1A6EB8u;
    {
        const bool branch_taken_0x1a6eb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6EB8u;
        // 0x1a6ebc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6eb8) {
            ctx->pc = 0x1A6FA8u;
            goto label_1a6fa8;
        }
    }
    ctx->pc = 0x1A6EC0u;
label_1a6ec0:
    // 0x1a6ec0: 0x24a2000f  addiu       $v0, $a1, 0xF
    ctx->pc = 0x1a6ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
label_1a6ec4:
    // 0x1a6ec4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a6ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a6ec8:
    // 0x1a6ec8: 0x24a4001e  addiu       $a0, $a1, 0x1E
    ctx->pc = 0x1a6ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 30));
label_1a6ecc:
    // 0x1a6ecc: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1a6eccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a6ed0:
    // 0x1a6ed0: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x1a6ed0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_1a6ed4:
    // 0x1a6ed4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1a6ed4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a6ed8:
    // 0x1a6ed8: 0x42903  sra         $a1, $a0, 4
    ctx->pc = 0x1a6ed8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 4));
label_1a6edc:
    // 0x1a6edc: 0xa0e00000  sb          $zero, 0x0($a3)
    ctx->pc = 0x1a6edcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
label_1a6ee0:
    // 0x1a6ee0: 0x18a0000a  blez        $a1, . + 4 + (0xA << 2)
label_1a6ee4:
    if (ctx->pc == 0x1A6EE4u) {
        ctx->pc = 0x1A6EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6EE0u;
        // 0x1a6ee4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6EE8u;
        goto label_1a6ee8;
    }
    ctx->pc = 0x1A6EE0u;
    {
        const bool branch_taken_0x1a6ee0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1A6EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6EE0u;
        // 0x1a6ee4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6ee0) {
            ctx->pc = 0x1A6F0Cu;
            goto label_1a6f0c;
        }
    }
    ctx->pc = 0x1A6EE8u;
label_1a6ee8:
    // 0x1a6ee8: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x1a6ee8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a6eec:
    // 0x1a6eec: 0x0  nop
    ctx->pc = 0x1a6eecu;
    // NOP
label_1a6ef0:
    // 0x1a6ef0: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x1a6ef0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_1a6ef4:
    // 0x1a6ef4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1a6ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1a6ef8:
    // 0x1a6ef8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1a6ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_1a6efc:
    // 0x1a6efc: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1a6efcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_1a6f00:
    // 0x1a6f00: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1a6f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1a6f04:
    // 0x1a6f04: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_1a6f08:
    if (ctx->pc == 0x1A6F08u) {
        ctx->pc = 0x1A6F0Cu;
        goto label_1a6f0c;
    }
    ctx->pc = 0x1A6F04u;
    {
        const bool branch_taken_0x1a6f04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a6f04) {
            ctx->pc = 0x1A6EF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a6ef0;
        }
    }
    ctx->pc = 0x1A6F0Cu;
label_1a6f0c:
    // 0x1a6f0c: 0xc069304  jal         func_1A4C10
label_1a6f10:
    if (ctx->pc == 0x1A6F10u) {
        ctx->pc = 0x1A6F14u;
        goto label_1a6f14;
    }
    ctx->pc = 0x1A6F0Cu;
    SET_GPR_U32(ctx, 31, 0x1A6F14u);
    ctx->pc = 0x1A4C10u;
    { ctx->pc = 0x1a4c10; return; }
    ctx->pc = 0x1A6F14u;
label_1a6f14:
    // 0x1a6f14: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1a6f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1a6f18:
    // 0x1a6f18: 0x4610013  bgez        $v1, . + 4 + (0x13 << 2)
label_1a6f1c:
    if (ctx->pc == 0x1A6F1Cu) {
        ctx->pc = 0x1A6F20u;
        goto label_1a6f20;
    }
    ctx->pc = 0x1A6F18u;
    {
        const bool branch_taken_0x1a6f18 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1a6f18) {
            ctx->pc = 0x1A6F68u;
            goto label_1a6f68;
        }
    }
    ctx->pc = 0x1A6F20u;
label_1a6f20:
    // 0x1a6f20: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1a6f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1a6f24:
    // 0x1a6f24: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1a6f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_1a6f28:
    // 0x1a6f28: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a6f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1a6f2c:
    // 0x1a6f2c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1a6f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a6f30:
    // 0x1a6f30: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x1a6f30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1a6f34:
    // 0x1a6f34: 0xa4202a  slt         $a0, $a1, $a0
    ctx->pc = 0x1a6f34u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1a6f38:
    // 0x1a6f38: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
label_1a6f3c:
    if (ctx->pc == 0x1A6F3Cu) {
        ctx->pc = 0x1A6F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F38u;
        // 0x1a6f3c: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6F40u;
        goto label_1a6f40;
    }
    ctx->pc = 0x1A6F38u;
    {
        const bool branch_taken_0x1a6f38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F38u;
        // 0x1a6f3c: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6f38) {
            ctx->pc = 0x1A6F9Cu;
            goto label_1a6f9c;
        }
    }
    ctx->pc = 0x1A6F40u;
label_1a6f40:
    // 0x1a6f40: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1a6f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1a6f44:
    // 0x1a6f44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a6f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a6f48:
    // 0x1a6f48: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1a6f48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a6f4c:
    // 0x1a6f4c: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
label_1a6f50:
    if (ctx->pc == 0x1A6F50u) {
        ctx->pc = 0x1A6F54u;
        goto label_1a6f54;
    }
    ctx->pc = 0x1A6F4Cu;
    {
        const bool branch_taken_0x1a6f4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6f4c) {
            ctx->pc = 0x1A6F9Cu;
            goto label_1a6f9c;
        }
    }
    ctx->pc = 0x1A6F54u;
label_1a6f54:
    // 0x1a6f54: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1a6f54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a6f58:
    // 0x1a6f58: 0xc0f809  jalr        $a2
label_1a6f5c:
    if (ctx->pc == 0x1A6F5Cu) {
        ctx->pc = 0x1A6F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F58u;
        // 0x1a6f5c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6F60u;
        goto label_1a6f60;
    }
    ctx->pc = 0x1A6F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1A6F60u);
        ctx->pc = 0x1A6F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F58u;
        // 0x1a6f5c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6F58u, 0x1A6F60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6F60u;
label_1a6f60:
    // 0x1a6f60: 0x1000000e  b           . + 4 + (0xE << 2)
label_1a6f64:
    if (ctx->pc == 0x1A6F64u) {
        ctx->pc = 0x1A6F68u;
        goto label_1a6f68;
    }
    ctx->pc = 0x1A6F60u;
    {
        const bool branch_taken_0x1a6f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6f60) {
            ctx->pc = 0x1A6F9Cu;
            goto label_1a6f9c;
        }
    }
    ctx->pc = 0x1A6F68u;
label_1a6f68:
    // 0x1a6f68: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x1a6f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1a6f6c:
    // 0x1a6f6c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1a6f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1a6f70:
    // 0x1a6f70: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1a6f70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a6f74:
    // 0x1a6f74: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1a6f78:
    if (ctx->pc == 0x1A6F78u) {
        ctx->pc = 0x1A6F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F74u;
        // 0x1a6f78: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6F7Cu;
        goto label_1a6f7c;
    }
    ctx->pc = 0x1A6F74u;
    {
        const bool branch_taken_0x1a6f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F74u;
        // 0x1a6f78: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6f74) {
            ctx->pc = 0x1A6F9Cu;
            goto label_1a6f9c;
        }
    }
    ctx->pc = 0x1A6F7Cu;
label_1a6f7c:
    // 0x1a6f7c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1a6f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1a6f80:
    // 0x1a6f80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a6f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a6f84:
    // 0x1a6f84: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1a6f84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a6f88:
    // 0x1a6f88: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_1a6f8c:
    if (ctx->pc == 0x1A6F8Cu) {
        ctx->pc = 0x1A6F90u;
        goto label_1a6f90;
    }
    ctx->pc = 0x1A6F88u;
    {
        const bool branch_taken_0x1a6f88 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6f88) {
            ctx->pc = 0x1A6F9Cu;
            goto label_1a6f9c;
        }
    }
    ctx->pc = 0x1A6F90u;
label_1a6f90:
    // 0x1a6f90: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1a6f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a6f94:
    // 0x1a6f94: 0xc0f809  jalr        $a2
label_1a6f98:
    if (ctx->pc == 0x1A6F98u) {
        ctx->pc = 0x1A6F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F94u;
        // 0x1a6f98: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6F9Cu;
        goto label_1a6f9c;
    }
    ctx->pc = 0x1A6F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1A6F9Cu);
        ctx->pc = 0x1A6F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F94u;
        // 0x1a6f98: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6F94u, 0x1A6F9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6F9Cu;
label_1a6f9c:
    // 0x1a6f9c: 0xf  sync
    ctx->pc = 0x1a6f9cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a6fa0:
    // 0x1a6fa0: 0x42000038  ei
    ctx->pc = 0x1a6fa0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_1a6fa4:
    // 0x1a6fa4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a6fa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6fa8:
    // 0x1a6fa8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1a6fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1a6fac:
    // 0x1a6fac: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x1a6facu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1a6fb0:
    // 0x1a6fb0: 0x3e00008  jr          $ra
label_1a6fb4:
    if (ctx->pc == 0x1A6FB4u) {
        ctx->pc = 0x1A6FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6FB0u;
        // 0x1a6fb4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6FB8u;
        goto label_1a6fb8;
    }
    ctx->pc = 0x1A6FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6FB0u;
        // 0x1a6fb4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6FB8u;
label_1a6fb8:
    // 0x1a6fb8: 0x3c19ffff  lui         $t9, 0xFFFF
    ctx->pc = 0x1a6fb8u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)65535 << 16));
label_1a6fbc:
    // 0x1a6fbc: 0x3739ffc0  ori         $t9, $t9, 0xFFC0
    ctx->pc = 0x1a6fbcu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)65472);
label_1a6fc0:
    // 0x1a6fc0: 0x18a00026  blez        $a1, . + 4 + (0x26 << 2)
label_1a6fc4:
    if (ctx->pc == 0x1A6FC4u) {
        ctx->pc = 0x1A6FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6FC0u;
        // 0x1a6fc4: 0x855021  addu        $t2, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6FC8u;
        goto label_1a6fc8;
    }
    ctx->pc = 0x1A6FC0u;
    {
        const bool branch_taken_0x1a6fc0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1A6FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6FC0u;
        // 0x1a6fc4: 0x855021  addu        $t2, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6fc0) {
            ctx->pc = 0x1A705Cu;
            goto label_1a705c;
        }
    }
    ctx->pc = 0x1A6FC8u;
label_1a6fc8:
    // 0x1a6fc8: 0x994024  and         $t0, $a0, $t9
    ctx->pc = 0x1a6fc8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & GPR_U64(ctx, 25));
label_1a6fcc:
    // 0x1a6fcc: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x1a6fccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_1a6fd0:
    // 0x1a6fd0: 0x1594824  and         $t1, $t2, $t9
    ctx->pc = 0x1a6fd0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) & GPR_U64(ctx, 25));
label_1a6fd4:
    // 0x1a6fd4: 0x1285023  subu        $t2, $t1, $t0
    ctx->pc = 0x1a6fd4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_1a6fd8:
    // 0x1a6fd8: 0xa5982  srl         $t3, $t2, 6
    ctx->pc = 0x1a6fd8u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 6));
label_1a6fdc:
    // 0x1a6fdc: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1a6fdcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_1a6fe0:
    // 0x1a6fe0: 0x31690007  andi        $t1, $t3, 0x7
    ctx->pc = 0x1a6fe0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)7);
label_1a6fe4:
    // 0x1a6fe4: 0x11200008  beqz        $t1, . + 4 + (0x8 << 2)
label_1a6fe8:
    if (ctx->pc == 0x1A6FE8u) {
        ctx->pc = 0x1A6FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6FE4u;
        // 0x1a6fe8: 0xb50c2  srl         $t2, $t3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 11), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6FECu;
        goto label_1a6fec;
    }
    ctx->pc = 0x1A6FE4u;
    {
        const bool branch_taken_0x1a6fe4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6FE4u;
        // 0x1a6fe8: 0xb50c2  srl         $t2, $t3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 11), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6fe4) {
            ctx->pc = 0x1A7008u;
            goto label_1a7008;
        }
    }
    ctx->pc = 0x1A6FECu;
label_1a6fec:
    // 0x1a6fec: 0xf  sync
    ctx->pc = 0x1a6fecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a6ff0:
    // 0x1a6ff0: 0xbd180000  cache       0x18, 0x0($t0)
    ctx->pc = 0x1a6ff0u;
    // CACHE instruction (ignored)
label_1a6ff4:
    // 0x1a6ff4: 0xf  sync
    ctx->pc = 0x1a6ff4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a6ff8:
    // 0x1a6ff8: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x1a6ff8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_1a6ffc:
    // 0x1a6ffc: 0x0  nop
    ctx->pc = 0x1a6ffcu;
    // NOP
label_1a7000:
    // 0x1a7000: 0x1d20fffa  bgtz        $t1, . + 4 + (-0x6 << 2)
label_1a7004:
    if (ctx->pc == 0x1A7004u) {
        ctx->pc = 0x1A7004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7000u;
        // 0x1a7004: 0x25080040  addiu       $t0, $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7008u;
        goto label_1a7008;
    }
    ctx->pc = 0x1A7000u;
    {
        const bool branch_taken_0x1a7000 = (GPR_S32(ctx, 9) > 0);
        ctx->pc = 0x1A7004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7000u;
        // 0x1a7004: 0x25080040  addiu       $t0, $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7000) {
            ctx->pc = 0x1A6FECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a6fec;
        }
    }
    ctx->pc = 0x1A7008u;
label_1a7008:
    // 0x1a7008: 0x11400014  beqz        $t2, . + 4 + (0x14 << 2)
label_1a700c:
    if (ctx->pc == 0x1A700Cu) {
        ctx->pc = 0x1A700Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7008u;
        // 0x1a700c: 0x254affff  addiu       $t2, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7010u;
        goto label_1a7010;
    }
    ctx->pc = 0x1A7008u;
    {
        const bool branch_taken_0x1a7008 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A700Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7008u;
        // 0x1a700c: 0x254affff  addiu       $t2, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7008) {
            ctx->pc = 0x1A705Cu;
            goto label_1a705c;
        }
    }
    ctx->pc = 0x1A7010u;
label_1a7010:
    // 0x1a7010: 0xf  sync
    ctx->pc = 0x1a7010u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a7014:
    // 0x1a7014: 0xbd180000  cache       0x18, 0x0($t0)
    ctx->pc = 0x1a7014u;
    // CACHE instruction (ignored)
label_1a7018:
    // 0x1a7018: 0xf  sync
    ctx->pc = 0x1a7018u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a701c:
    // 0x1a701c: 0xbd180040  cache       0x18, 0x40($t0)
    ctx->pc = 0x1a701cu;
    // CACHE instruction (ignored)
label_1a7020:
    // 0x1a7020: 0xf  sync
    ctx->pc = 0x1a7020u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a7024:
    // 0x1a7024: 0xbd180080  cache       0x18, 0x80($t0)
    ctx->pc = 0x1a7024u;
    // CACHE instruction (ignored)
label_1a7028:
    // 0x1a7028: 0xf  sync
    ctx->pc = 0x1a7028u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a702c:
    // 0x1a702c: 0xbd1800c0  cache       0x18, 0xC0($t0)
    ctx->pc = 0x1a702cu;
    // CACHE instruction (ignored)
label_1a7030:
    // 0x1a7030: 0xf  sync
    ctx->pc = 0x1a7030u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a7034:
    // 0x1a7034: 0xbd180100  cache       0x18, 0x100($t0)
    ctx->pc = 0x1a7034u;
    // CACHE instruction (ignored)
label_1a7038:
    // 0x1a7038: 0xf  sync
    ctx->pc = 0x1a7038u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a703c:
    // 0x1a703c: 0xbd180140  cache       0x18, 0x140($t0)
    ctx->pc = 0x1a703cu;
    // CACHE instruction (ignored)
label_1a7040:
    // 0x1a7040: 0xf  sync
    ctx->pc = 0x1a7040u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a7044:
    // 0x1a7044: 0xbd180180  cache       0x18, 0x180($t0)
    ctx->pc = 0x1a7044u;
    // CACHE instruction (ignored)
label_1a7048:
    // 0x1a7048: 0xf  sync
    ctx->pc = 0x1a7048u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a704c:
    // 0x1a704c: 0xbd1801c0  cache       0x18, 0x1C0($t0)
    ctx->pc = 0x1a704cu;
    // CACHE instruction (ignored)
label_1a7050:
    // 0x1a7050: 0xf  sync
    ctx->pc = 0x1a7050u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a7054:
    // 0x1a7054: 0x1d40ffed  bgtz        $t2, . + 4 + (-0x13 << 2)
label_1a7058:
    if (ctx->pc == 0x1A7058u) {
        ctx->pc = 0x1A7058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7054u;
        // 0x1a7058: 0x25080200  addiu       $t0, $t0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A705Cu;
        goto label_1a705c;
    }
    ctx->pc = 0x1A7054u;
    {
        const bool branch_taken_0x1a7054 = (GPR_S32(ctx, 10) > 0);
        ctx->pc = 0x1A7058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7054u;
        // 0x1a7058: 0x25080200  addiu       $t0, $t0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7054) {
            ctx->pc = 0x1A700Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a700c;
        }
    }
    ctx->pc = 0x1A705Cu;
label_1a705c:
    // 0x1a705c: 0x3e00008  jr          $ra
label_1a7060:
    if (ctx->pc == 0x1A7060u) {
        ctx->pc = 0x1A7064u;
        goto label_1a7064;
    }
    ctx->pc = 0x1A705Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A705Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7064u;
label_1a7064:
    // 0x1a7064: 0x3e00008  jr          $ra
label_1a7068:
    if (ctx->pc == 0x1A7068u) {
        ctx->pc = 0x1A7068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7064u;
        // 0x1a7068: 0x27bdffc0  addiu       $sp, $sp, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A706Cu;
        goto label_1a706c;
    }
    ctx->pc = 0x1A7064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7064u;
        // 0x1a7068: 0x27bdffc0  addiu       $sp, $sp, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A706Cu;
label_1a706c:
    // 0x1a706c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a706cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1a7070:
    // 0x1a7070: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a7070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a7074:
    // 0x1a7074: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a7074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a7078:
    // 0x1a7078: 0xc06b518  jal         func_1AD460
label_1a707c:
    if (ctx->pc == 0x1A707Cu) {
        ctx->pc = 0x1A707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7078u;
        // 0x1a707c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7080u;
        goto label_1a7080;
    }
    ctx->pc = 0x1A7078u;
    SET_GPR_U32(ctx, 31, 0x1A7080u);
    ctx->pc = 0x1A707Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7078u;
    // 0x1a707c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1A7080u;
label_1a7080:
    // 0x1a7080: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1a7080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1a7084:
    // 0x1a7084: 0x8c625b70  lw          $v0, 0x5B70($v1)
    ctx->pc = 0x1a7084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 23408)));
label_1a7088:
    // 0x1a7088: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a708c:
    if (ctx->pc == 0x1A708Cu) {
        ctx->pc = 0x1A708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7088u;
        // 0x1a708c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7090u;
        goto label_1a7090;
    }
    ctx->pc = 0x1A7088u;
    {
        const bool branch_taken_0x1a7088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7088u;
        // 0x1a708c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7088) {
            ctx->pc = 0x1A70A8u;
            goto label_1a70a8;
        }
    }
    ctx->pc = 0x1A7090u;
label_1a7090:
    // 0x1a7090: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a7090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a7094:
    // 0x1a7094: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a7094u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a7098:
    // 0x1a7098: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a7098u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a709c:
    // 0x1a709c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a709cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a70a0:
    // 0x1a70a0: 0x806b52a  j           func_1AD4A8
label_1a70a4:
    if (ctx->pc == 0x1A70A4u) {
        ctx->pc = 0x1A70A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A70A0u;
        // 0x1a70a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A70A8u;
        goto label_1a70a8;
    }
    ctx->pc = 0x1A70A0u;
    ctx->pc = 0x1A70A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A70A0u;
    // 0x1a70a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A70A8u;
label_1a70a8:
    // 0x1a70a8: 0xc06b52a  jal         func_1AD4A8
label_1a70ac:
    if (ctx->pc == 0x1A70ACu) {
        ctx->pc = 0x1A70ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A70A8u;
        // 0x1a70ac: 0xac715b70  sw          $s1, 0x5B70($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 23408), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A70B0u;
        goto label_1a70b0;
    }
    ctx->pc = 0x1A70A8u;
    SET_GPR_U32(ctx, 31, 0x1A70B0u);
    ctx->pc = 0x1A70ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A70A8u;
    // 0x1a70ac: 0xac715b70  sw          $s1, 0x5B70($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 23408), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1A70B0u;
label_1a70b0:
    // 0x1a70b0: 0xc069a66  jal         func_1A6998
label_1a70b4:
    if (ctx->pc == 0x1A70B4u) {
        ctx->pc = 0x1A70B8u;
        goto label_1a70b8;
    }
    ctx->pc = 0x1A70B0u;
    SET_GPR_U32(ctx, 31, 0x1A70B8u);
    ctx->pc = 0x1A6998u;
    goto label_1a6998;
    ctx->pc = 0x1A70B8u;
label_1a70b8:
    // 0x1a70b8: 0xc06b518  jal         func_1AD460
label_1a70bc:
    if (ctx->pc == 0x1A70BCu) {
        ctx->pc = 0x1A70C0u;
        goto label_1a70c0;
    }
    ctx->pc = 0x1A70B8u;
    SET_GPR_U32(ctx, 31, 0x1A70C0u);
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1A70C0u;
label_1a70c0:
    // 0x1a70c0: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1a70c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1a70c4:
    // 0x1a70c4: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x1a70c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
label_1a70c8:
    // 0x1a70c8: 0x247219c0  addiu       $s2, $v1, 0x19C0
    ctx->pc = 0x1a70c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 6592));
label_1a70cc:
    // 0x1a70cc: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1a70ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_1a70d0:
    // 0x1a70d0: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x1a70d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_1a70d4:
    // 0x1a70d4: 0x251031c0  addiu       $s0, $t0, 0x31C0
    ctx->pc = 0x1a70d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 12736));
label_1a70d8:
    // 0x1a70d8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1a70d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1a70dc:
    // 0x1a70dc: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1a70dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_1a70e0:
    // 0x1a70e0: 0x24c621c0  addiu       $a2, $a2, 0x21C0
    ctx->pc = 0x1a70e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8640));
label_1a70e4:
    // 0x1a70e4: 0x24e729c0  addiu       $a3, $a3, 0x29C0
    ctx->pc = 0x1a70e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10688));
label_1a70e8:
    // 0x1a70e8: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1a70e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_1a70ec:
    // 0x1a70ec: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1a70ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1a70f0:
    // 0x1a70f0: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1a70f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_1a70f4:
    // 0x1a70f4: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x1a70f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
label_1a70f8:
    // 0x1a70f8: 0xad1131c0  sw          $s1, 0x31C0($t0)
    ctx->pc = 0x1a70f8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12736), GPR_U32(ctx, 17));
label_1a70fc:
    // 0x1a70fc: 0x3c05001a  lui         $a1, 0x1A
    ctx->pc = 0x1a70fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
label_1a7100:
    // 0x1a7100: 0xae060014  sw          $a2, 0x14($s0)
    ctx->pc = 0x1a7100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 6));
label_1a7104:
    // 0x1a7104: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a7104u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1a7108:
    // 0x1a7108: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a7108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1a710c:
    // 0x1a710c: 0x24a57368  addiu       $a1, $a1, 0x7368
    ctx->pc = 0x1a710cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29544));
label_1a7110:
    // 0x1a7110: 0xae07001c  sw          $a3, 0x1C($s0)
    ctx->pc = 0x1a7110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 7));
label_1a7114:
    // 0x1a7114: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x1a7114u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_1a7118:
    // 0x1a7118: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a7118u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a711c:
    // 0x1a711c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1a711cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_1a7120:
    // 0x1a7120: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1a7120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_1a7124:
    // 0x1a7124: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1a7124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_1a7128:
    // 0x1a7128: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x1a7128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
label_1a712c:
    // 0x1a712c: 0xc069b20  jal         func_1A6C80
label_1a7130:
    if (ctx->pc == 0x1A7130u) {
        ctx->pc = 0x1A7130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A712Cu;
        // 0x1a7130: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7134u;
        goto label_1a7134;
    }
    ctx->pc = 0x1A712Cu;
    SET_GPR_U32(ctx, 31, 0x1A7134u);
    ctx->pc = 0x1A7130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A712Cu;
    // 0x1a7130: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6C80u;
    goto label_1a6c80;
    ctx->pc = 0x1A7134u;
label_1a7134:
    // 0x1a7134: 0x3c05001a  lui         $a1, 0x1A
    ctx->pc = 0x1a7134u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
label_1a7138:
    // 0x1a7138: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a7138u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1a713c:
    // 0x1a713c: 0x24a57628  addiu       $a1, $a1, 0x7628
    ctx->pc = 0x1a713cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30248));
label_1a7140:
    // 0x1a7140: 0x34840009  ori         $a0, $a0, 0x9
    ctx->pc = 0x1a7140u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9);
label_1a7144:
    // 0x1a7144: 0xc069b20  jal         func_1A6C80
label_1a7148:
    if (ctx->pc == 0x1A7148u) {
        ctx->pc = 0x1A7148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7144u;
        // 0x1a7148: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A714Cu;
        goto label_1a714c;
    }
    ctx->pc = 0x1A7144u;
    SET_GPR_U32(ctx, 31, 0x1A714Cu);
    ctx->pc = 0x1A7148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7144u;
    // 0x1a7148: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6C80u;
    goto label_1a6c80;
    ctx->pc = 0x1A714Cu;
label_1a714c:
    // 0x1a714c: 0x3c05001a  lui         $a1, 0x1A
    ctx->pc = 0x1a714cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
label_1a7150:
    // 0x1a7150: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1a7150u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1a7154:
    // 0x1a7154: 0x24a57818  addiu       $a1, $a1, 0x7818
    ctx->pc = 0x1a7154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30744));
label_1a7158:
    // 0x1a7158: 0x3484000a  ori         $a0, $a0, 0xA
    ctx->pc = 0x1a7158u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
label_1a715c:
    // 0x1a715c: 0xc069b20  jal         func_1A6C80
label_1a7160:
    if (ctx->pc == 0x1A7160u) {
        ctx->pc = 0x1A7160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A715Cu;
        // 0x1a7160: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A7164u;
        goto label_1a7164;
    }
    ctx->pc = 0x1A715Cu;
    SET_GPR_U32(ctx, 31, 0x1A7164u);
    ctx->pc = 0x1A7160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A715Cu;
    // 0x1a7160: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6C80u;
    goto label_1a6c80;
    ctx->pc = 0x1A7164u;
label_1a7164:
    // 0x1a7164: 0x3c05001a  lui         $a1, 0x1A
    ctx->pc = 0x1a7164u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
    ctx->pc = 0x1a7168u;
    return;
}

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


void FUN_0019b6a8_part110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1d0a38u: goto label_1d0a38;
        case 0x1d0a3cu: goto label_1d0a3c;
        case 0x1d0a40u: goto label_1d0a40;
        case 0x1d0a44u: goto label_1d0a44;
        case 0x1d0a48u: goto label_1d0a48;
        case 0x1d0a4cu: goto label_1d0a4c;
        case 0x1d0a50u: goto label_1d0a50;
        case 0x1d0a54u: goto label_1d0a54;
        case 0x1d0a58u: goto label_1d0a58;
        case 0x1d0a5cu: goto label_1d0a5c;
        case 0x1d0a60u: goto label_1d0a60;
        case 0x1d0a64u: goto label_1d0a64;
        case 0x1d0a68u: goto label_1d0a68;
        case 0x1d0a6cu: goto label_1d0a6c;
        case 0x1d0a70u: goto label_1d0a70;
        case 0x1d0a74u: goto label_1d0a74;
        case 0x1d0a78u: goto label_1d0a78;
        case 0x1d0a7cu: goto label_1d0a7c;
        case 0x1d0a80u: goto label_1d0a80;
        case 0x1d0a84u: goto label_1d0a84;
        case 0x1d0a88u: goto label_1d0a88;
        case 0x1d0a8cu: goto label_1d0a8c;
        case 0x1d0a90u: goto label_1d0a90;
        case 0x1d0a94u: goto label_1d0a94;
        case 0x1d0a98u: goto label_1d0a98;
        case 0x1d0a9cu: goto label_1d0a9c;
        case 0x1d0aa0u: goto label_1d0aa0;
        case 0x1d0aa4u: goto label_1d0aa4;
        case 0x1d0aa8u: goto label_1d0aa8;
        case 0x1d0aacu: goto label_1d0aac;
        case 0x1d0ab0u: goto label_1d0ab0;
        case 0x1d0ab4u: goto label_1d0ab4;
        case 0x1d0ab8u: goto label_1d0ab8;
        case 0x1d0abcu: goto label_1d0abc;
        case 0x1d0ac0u: goto label_1d0ac0;
        case 0x1d0ac4u: goto label_1d0ac4;
        case 0x1d0ac8u: goto label_1d0ac8;
        case 0x1d0accu: goto label_1d0acc;
        case 0x1d0ad0u: goto label_1d0ad0;
        case 0x1d0ad4u: goto label_1d0ad4;
        case 0x1d0ad8u: goto label_1d0ad8;
        case 0x1d0adcu: goto label_1d0adc;
        case 0x1d0ae0u: goto label_1d0ae0;
        case 0x1d0ae4u: goto label_1d0ae4;
        case 0x1d0ae8u: goto label_1d0ae8;
        case 0x1d0aecu: goto label_1d0aec;
        case 0x1d0af0u: goto label_1d0af0;
        case 0x1d0af4u: goto label_1d0af4;
        case 0x1d0af8u: goto label_1d0af8;
        case 0x1d0afcu: goto label_1d0afc;
        case 0x1d0b00u: goto label_1d0b00;
        case 0x1d0b04u: goto label_1d0b04;
        case 0x1d0b08u: goto label_1d0b08;
        case 0x1d0b0cu: goto label_1d0b0c;
        case 0x1d0b10u: goto label_1d0b10;
        case 0x1d0b14u: goto label_1d0b14;
        case 0x1d0b18u: goto label_1d0b18;
        case 0x1d0b1cu: goto label_1d0b1c;
        case 0x1d0b20u: goto label_1d0b20;
        case 0x1d0b24u: goto label_1d0b24;
        case 0x1d0b28u: goto label_1d0b28;
        case 0x1d0b2cu: goto label_1d0b2c;
        case 0x1d0b30u: goto label_1d0b30;
        case 0x1d0b34u: goto label_1d0b34;
        case 0x1d0b38u: goto label_1d0b38;
        case 0x1d0b3cu: goto label_1d0b3c;
        case 0x1d0b40u: goto label_1d0b40;
        case 0x1d0b44u: goto label_1d0b44;
        case 0x1d0b48u: goto label_1d0b48;
        case 0x1d0b4cu: goto label_1d0b4c;
        case 0x1d0b50u: goto label_1d0b50;
        case 0x1d0b54u: goto label_1d0b54;
        case 0x1d0b58u: goto label_1d0b58;
        case 0x1d0b5cu: goto label_1d0b5c;
        case 0x1d0b60u: goto label_1d0b60;
        case 0x1d0b64u: goto label_1d0b64;
        case 0x1d0b68u: goto label_1d0b68;
        case 0x1d0b6cu: goto label_1d0b6c;
        case 0x1d0b70u: goto label_1d0b70;
        case 0x1d0b74u: goto label_1d0b74;
        case 0x1d0b78u: goto label_1d0b78;
        case 0x1d0b7cu: goto label_1d0b7c;
        case 0x1d0b80u: goto label_1d0b80;
        case 0x1d0b84u: goto label_1d0b84;
        case 0x1d0b88u: goto label_1d0b88;
        case 0x1d0b8cu: goto label_1d0b8c;
        case 0x1d0b90u: goto label_1d0b90;
        case 0x1d0b94u: goto label_1d0b94;
        case 0x1d0b98u: goto label_1d0b98;
        case 0x1d0b9cu: goto label_1d0b9c;
        case 0x1d0ba0u: goto label_1d0ba0;
        case 0x1d0ba4u: goto label_1d0ba4;
        case 0x1d0ba8u: goto label_1d0ba8;
        case 0x1d0bacu: goto label_1d0bac;
        case 0x1d0bb0u: goto label_1d0bb0;
        case 0x1d0bb4u: goto label_1d0bb4;
        case 0x1d0bb8u: goto label_1d0bb8;
        case 0x1d0bbcu: goto label_1d0bbc;
        case 0x1d0bc0u: goto label_1d0bc0;
        case 0x1d0bc4u: goto label_1d0bc4;
        case 0x1d0bc8u: goto label_1d0bc8;
        case 0x1d0bccu: goto label_1d0bcc;
        case 0x1d0bd0u: goto label_1d0bd0;
        case 0x1d0bd4u: goto label_1d0bd4;
        case 0x1d0bd8u: goto label_1d0bd8;
        case 0x1d0bdcu: goto label_1d0bdc;
        case 0x1d0be0u: goto label_1d0be0;
        case 0x1d0be4u: goto label_1d0be4;
        case 0x1d0be8u: goto label_1d0be8;
        case 0x1d0becu: goto label_1d0bec;
        case 0x1d0bf0u: goto label_1d0bf0;
        case 0x1d0bf4u: goto label_1d0bf4;
        case 0x1d0bf8u: goto label_1d0bf8;
        case 0x1d0bfcu: goto label_1d0bfc;
        case 0x1d0c00u: goto label_1d0c00;
        case 0x1d0c04u: goto label_1d0c04;
        case 0x1d0c08u: goto label_1d0c08;
        case 0x1d0c0cu: goto label_1d0c0c;
        case 0x1d0c10u: goto label_1d0c10;
        case 0x1d0c14u: goto label_1d0c14;
        case 0x1d0c18u: goto label_1d0c18;
        case 0x1d0c1cu: goto label_1d0c1c;
        case 0x1d0c20u: goto label_1d0c20;
        case 0x1d0c24u: goto label_1d0c24;
        case 0x1d0c28u: goto label_1d0c28;
        case 0x1d0c2cu: goto label_1d0c2c;
        case 0x1d0c30u: goto label_1d0c30;
        case 0x1d0c34u: goto label_1d0c34;
        case 0x1d0c38u: goto label_1d0c38;
        case 0x1d0c3cu: goto label_1d0c3c;
        case 0x1d0c40u: goto label_1d0c40;
        case 0x1d0c44u: goto label_1d0c44;
        case 0x1d0c48u: goto label_1d0c48;
        case 0x1d0c4cu: goto label_1d0c4c;
        case 0x1d0c50u: goto label_1d0c50;
        case 0x1d0c54u: goto label_1d0c54;
        case 0x1d0c58u: goto label_1d0c58;
        case 0x1d0c5cu: goto label_1d0c5c;
        case 0x1d0c60u: goto label_1d0c60;
        case 0x1d0c64u: goto label_1d0c64;
        case 0x1d0c68u: goto label_1d0c68;
        case 0x1d0c6cu: goto label_1d0c6c;
        case 0x1d0c70u: goto label_1d0c70;
        case 0x1d0c74u: goto label_1d0c74;
        case 0x1d0c78u: goto label_1d0c78;
        case 0x1d0c7cu: goto label_1d0c7c;
        case 0x1d0c80u: goto label_1d0c80;
        case 0x1d0c84u: goto label_1d0c84;
        case 0x1d0c88u: goto label_1d0c88;
        case 0x1d0c8cu: goto label_1d0c8c;
        case 0x1d0c90u: goto label_1d0c90;
        case 0x1d0c94u: goto label_1d0c94;
        case 0x1d0c98u: goto label_1d0c98;
        case 0x1d0c9cu: goto label_1d0c9c;
        case 0x1d0ca0u: goto label_1d0ca0;
        case 0x1d0ca4u: goto label_1d0ca4;
        case 0x1d0ca8u: goto label_1d0ca8;
        case 0x1d0cacu: goto label_1d0cac;
        case 0x1d0cb0u: goto label_1d0cb0;
        case 0x1d0cb4u: goto label_1d0cb4;
        case 0x1d0cb8u: goto label_1d0cb8;
        case 0x1d0cbcu: goto label_1d0cbc;
        case 0x1d0cc0u: goto label_1d0cc0;
        case 0x1d0cc4u: goto label_1d0cc4;
        case 0x1d0cc8u: goto label_1d0cc8;
        case 0x1d0cccu: goto label_1d0ccc;
        case 0x1d0cd0u: goto label_1d0cd0;
        case 0x1d0cd4u: goto label_1d0cd4;
        case 0x1d0cd8u: goto label_1d0cd8;
        case 0x1d0cdcu: goto label_1d0cdc;
        case 0x1d0ce0u: goto label_1d0ce0;
        case 0x1d0ce4u: goto label_1d0ce4;
        case 0x1d0ce8u: goto label_1d0ce8;
        case 0x1d0cecu: goto label_1d0cec;
        case 0x1d0cf0u: goto label_1d0cf0;
        case 0x1d0cf4u: goto label_1d0cf4;
        case 0x1d0cf8u: goto label_1d0cf8;
        case 0x1d0cfcu: goto label_1d0cfc;
        case 0x1d0d00u: goto label_1d0d00;
        case 0x1d0d04u: goto label_1d0d04;
        case 0x1d0d08u: goto label_1d0d08;
        case 0x1d0d0cu: goto label_1d0d0c;
        case 0x1d0d10u: goto label_1d0d10;
        case 0x1d0d14u: goto label_1d0d14;
        case 0x1d0d18u: goto label_1d0d18;
        case 0x1d0d1cu: goto label_1d0d1c;
        case 0x1d0d20u: goto label_1d0d20;
        case 0x1d0d24u: goto label_1d0d24;
        case 0x1d0d28u: goto label_1d0d28;
        case 0x1d0d2cu: goto label_1d0d2c;
        case 0x1d0d30u: goto label_1d0d30;
        case 0x1d0d34u: goto label_1d0d34;
        case 0x1d0d38u: goto label_1d0d38;
        case 0x1d0d3cu: goto label_1d0d3c;
        case 0x1d0d40u: goto label_1d0d40;
        case 0x1d0d44u: goto label_1d0d44;
        case 0x1d0d48u: goto label_1d0d48;
        case 0x1d0d4cu: goto label_1d0d4c;
        case 0x1d0d50u: goto label_1d0d50;
        case 0x1d0d54u: goto label_1d0d54;
        case 0x1d0d58u: goto label_1d0d58;
        case 0x1d0d5cu: goto label_1d0d5c;
        case 0x1d0d60u: goto label_1d0d60;
        case 0x1d0d64u: goto label_1d0d64;
        case 0x1d0d68u: goto label_1d0d68;
        case 0x1d0d6cu: goto label_1d0d6c;
        case 0x1d0d70u: goto label_1d0d70;
        case 0x1d0d74u: goto label_1d0d74;
        case 0x1d0d78u: goto label_1d0d78;
        case 0x1d0d7cu: goto label_1d0d7c;
        case 0x1d0d80u: goto label_1d0d80;
        case 0x1d0d84u: goto label_1d0d84;
        case 0x1d0d88u: goto label_1d0d88;
        case 0x1d0d8cu: goto label_1d0d8c;
        case 0x1d0d90u: goto label_1d0d90;
        case 0x1d0d94u: goto label_1d0d94;
        case 0x1d0d98u: goto label_1d0d98;
        case 0x1d0d9cu: goto label_1d0d9c;
        case 0x1d0da0u: goto label_1d0da0;
        case 0x1d0da4u: goto label_1d0da4;
        case 0x1d0da8u: goto label_1d0da8;
        case 0x1d0dacu: goto label_1d0dac;
        case 0x1d0db0u: goto label_1d0db0;
        case 0x1d0db4u: goto label_1d0db4;
        case 0x1d0db8u: goto label_1d0db8;
        case 0x1d0dbcu: goto label_1d0dbc;
        case 0x1d0dc0u: goto label_1d0dc0;
        case 0x1d0dc4u: goto label_1d0dc4;
        case 0x1d0dc8u: goto label_1d0dc8;
        case 0x1d0dccu: goto label_1d0dcc;
        case 0x1d0dd0u: goto label_1d0dd0;
        case 0x1d0dd4u: goto label_1d0dd4;
        case 0x1d0dd8u: goto label_1d0dd8;
        case 0x1d0ddcu: goto label_1d0ddc;
        case 0x1d0de0u: goto label_1d0de0;
        case 0x1d0de4u: goto label_1d0de4;
        case 0x1d0de8u: goto label_1d0de8;
        case 0x1d0decu: goto label_1d0dec;
        case 0x1d0df0u: goto label_1d0df0;
        case 0x1d0df4u: goto label_1d0df4;
        case 0x1d0df8u: goto label_1d0df8;
        case 0x1d0dfcu: goto label_1d0dfc;
        case 0x1d0e00u: goto label_1d0e00;
        case 0x1d0e04u: goto label_1d0e04;
        case 0x1d0e08u: goto label_1d0e08;
        case 0x1d0e0cu: goto label_1d0e0c;
        case 0x1d0e10u: goto label_1d0e10;
        case 0x1d0e14u: goto label_1d0e14;
        case 0x1d0e18u: goto label_1d0e18;
        case 0x1d0e1cu: goto label_1d0e1c;
        case 0x1d0e20u: goto label_1d0e20;
        case 0x1d0e24u: goto label_1d0e24;
        case 0x1d0e28u: goto label_1d0e28;
        case 0x1d0e2cu: goto label_1d0e2c;
        case 0x1d0e30u: goto label_1d0e30;
        case 0x1d0e34u: goto label_1d0e34;
        case 0x1d0e38u: goto label_1d0e38;
        case 0x1d0e3cu: goto label_1d0e3c;
        case 0x1d0e40u: goto label_1d0e40;
        case 0x1d0e44u: goto label_1d0e44;
        case 0x1d0e48u: goto label_1d0e48;
        case 0x1d0e4cu: goto label_1d0e4c;
        case 0x1d0e50u: goto label_1d0e50;
        case 0x1d0e54u: goto label_1d0e54;
        case 0x1d0e58u: goto label_1d0e58;
        case 0x1d0e5cu: goto label_1d0e5c;
        case 0x1d0e60u: goto label_1d0e60;
        case 0x1d0e64u: goto label_1d0e64;
        case 0x1d0e68u: goto label_1d0e68;
        case 0x1d0e6cu: goto label_1d0e6c;
        case 0x1d0e70u: goto label_1d0e70;
        case 0x1d0e74u: goto label_1d0e74;
        case 0x1d0e78u: goto label_1d0e78;
        case 0x1d0e7cu: goto label_1d0e7c;
        case 0x1d0e80u: goto label_1d0e80;
        case 0x1d0e84u: goto label_1d0e84;
        case 0x1d0e88u: goto label_1d0e88;
        case 0x1d0e8cu: goto label_1d0e8c;
        case 0x1d0e90u: goto label_1d0e90;
        case 0x1d0e94u: goto label_1d0e94;
        case 0x1d0e98u: goto label_1d0e98;
        case 0x1d0e9cu: goto label_1d0e9c;
        case 0x1d0ea0u: goto label_1d0ea0;
        case 0x1d0ea4u: goto label_1d0ea4;
        case 0x1d0ea8u: goto label_1d0ea8;
        case 0x1d0eacu: goto label_1d0eac;
        case 0x1d0eb0u: goto label_1d0eb0;
        case 0x1d0eb4u: goto label_1d0eb4;
        case 0x1d0eb8u: goto label_1d0eb8;
        case 0x1d0ebcu: goto label_1d0ebc;
        case 0x1d0ec0u: goto label_1d0ec0;
        case 0x1d0ec4u: goto label_1d0ec4;
        case 0x1d0ec8u: goto label_1d0ec8;
        case 0x1d0eccu: goto label_1d0ecc;
        case 0x1d0ed0u: goto label_1d0ed0;
        case 0x1d0ed4u: goto label_1d0ed4;
        case 0x1d0ed8u: goto label_1d0ed8;
        case 0x1d0edcu: goto label_1d0edc;
        case 0x1d0ee0u: goto label_1d0ee0;
        case 0x1d0ee4u: goto label_1d0ee4;
        case 0x1d0ee8u: goto label_1d0ee8;
        case 0x1d0eecu: goto label_1d0eec;
        case 0x1d0ef0u: goto label_1d0ef0;
        case 0x1d0ef4u: goto label_1d0ef4;
        case 0x1d0ef8u: goto label_1d0ef8;
        case 0x1d0efcu: goto label_1d0efc;
        case 0x1d0f00u: goto label_1d0f00;
        case 0x1d0f04u: goto label_1d0f04;
        case 0x1d0f08u: goto label_1d0f08;
        case 0x1d0f0cu: goto label_1d0f0c;
        case 0x1d0f10u: goto label_1d0f10;
        case 0x1d0f14u: goto label_1d0f14;
        case 0x1d0f18u: goto label_1d0f18;
        case 0x1d0f1cu: goto label_1d0f1c;
        case 0x1d0f20u: goto label_1d0f20;
        case 0x1d0f24u: goto label_1d0f24;
        case 0x1d0f28u: goto label_1d0f28;
        case 0x1d0f2cu: goto label_1d0f2c;
        case 0x1d0f30u: goto label_1d0f30;
        case 0x1d0f34u: goto label_1d0f34;
        case 0x1d0f38u: goto label_1d0f38;
        case 0x1d0f3cu: goto label_1d0f3c;
        case 0x1d0f40u: goto label_1d0f40;
        case 0x1d0f44u: goto label_1d0f44;
        case 0x1d0f48u: goto label_1d0f48;
        case 0x1d0f4cu: goto label_1d0f4c;
        case 0x1d0f50u: goto label_1d0f50;
        case 0x1d0f54u: goto label_1d0f54;
        case 0x1d0f58u: goto label_1d0f58;
        case 0x1d0f5cu: goto label_1d0f5c;
        case 0x1d0f60u: goto label_1d0f60;
        case 0x1d0f64u: goto label_1d0f64;
        case 0x1d0f68u: goto label_1d0f68;
        case 0x1d0f6cu: goto label_1d0f6c;
        case 0x1d0f70u: goto label_1d0f70;
        case 0x1d0f74u: goto label_1d0f74;
        case 0x1d0f78u: goto label_1d0f78;
        case 0x1d0f7cu: goto label_1d0f7c;
        case 0x1d0f80u: goto label_1d0f80;
        case 0x1d0f84u: goto label_1d0f84;
        case 0x1d0f88u: goto label_1d0f88;
        case 0x1d0f8cu: goto label_1d0f8c;
        case 0x1d0f90u: goto label_1d0f90;
        case 0x1d0f94u: goto label_1d0f94;
        case 0x1d0f98u: goto label_1d0f98;
        case 0x1d0f9cu: goto label_1d0f9c;
        case 0x1d0fa0u: goto label_1d0fa0;
        case 0x1d0fa4u: goto label_1d0fa4;
        case 0x1d0fa8u: goto label_1d0fa8;
        case 0x1d0facu: goto label_1d0fac;
        case 0x1d0fb0u: goto label_1d0fb0;
        case 0x1d0fb4u: goto label_1d0fb4;
        case 0x1d0fb8u: goto label_1d0fb8;
        case 0x1d0fbcu: goto label_1d0fbc;
        case 0x1d0fc0u: goto label_1d0fc0;
        case 0x1d0fc4u: goto label_1d0fc4;
        case 0x1d0fc8u: goto label_1d0fc8;
        case 0x1d0fccu: goto label_1d0fcc;
        case 0x1d0fd0u: goto label_1d0fd0;
        case 0x1d0fd4u: goto label_1d0fd4;
        case 0x1d0fd8u: goto label_1d0fd8;
        case 0x1d0fdcu: goto label_1d0fdc;
        case 0x1d0fe0u: goto label_1d0fe0;
        case 0x1d0fe4u: goto label_1d0fe4;
        case 0x1d0fe8u: goto label_1d0fe8;
        case 0x1d0fecu: goto label_1d0fec;
        case 0x1d0ff0u: goto label_1d0ff0;
        case 0x1d0ff4u: goto label_1d0ff4;
        case 0x1d0ff8u: goto label_1d0ff8;
        case 0x1d0ffcu: goto label_1d0ffc;
        case 0x1d1000u: goto label_1d1000;
        case 0x1d1004u: goto label_1d1004;
        case 0x1d1008u: goto label_1d1008;
        case 0x1d100cu: goto label_1d100c;
        case 0x1d1010u: goto label_1d1010;
        case 0x1d1014u: goto label_1d1014;
        case 0x1d1018u: goto label_1d1018;
        case 0x1d101cu: goto label_1d101c;
        case 0x1d1020u: goto label_1d1020;
        case 0x1d1024u: goto label_1d1024;
        case 0x1d1028u: goto label_1d1028;
        case 0x1d102cu: goto label_1d102c;
        case 0x1d1030u: goto label_1d1030;
        case 0x1d1034u: goto label_1d1034;
        case 0x1d1038u: goto label_1d1038;
        case 0x1d103cu: goto label_1d103c;
        case 0x1d1040u: goto label_1d1040;
        case 0x1d1044u: goto label_1d1044;
        case 0x1d1048u: goto label_1d1048;
        case 0x1d104cu: goto label_1d104c;
        case 0x1d1050u: goto label_1d1050;
        case 0x1d1054u: goto label_1d1054;
        case 0x1d1058u: goto label_1d1058;
        case 0x1d105cu: goto label_1d105c;
        case 0x1d1060u: goto label_1d1060;
        case 0x1d1064u: goto label_1d1064;
        case 0x1d1068u: goto label_1d1068;
        case 0x1d106cu: goto label_1d106c;
        case 0x1d1070u: goto label_1d1070;
        case 0x1d1074u: goto label_1d1074;
        case 0x1d1078u: goto label_1d1078;
        case 0x1d107cu: goto label_1d107c;
        case 0x1d1080u: goto label_1d1080;
        case 0x1d1084u: goto label_1d1084;
        case 0x1d1088u: goto label_1d1088;
        case 0x1d108cu: goto label_1d108c;
        case 0x1d1090u: goto label_1d1090;
        case 0x1d1094u: goto label_1d1094;
        case 0x1d1098u: goto label_1d1098;
        case 0x1d109cu: goto label_1d109c;
        case 0x1d10a0u: goto label_1d10a0;
        case 0x1d10a4u: goto label_1d10a4;
        case 0x1d10a8u: goto label_1d10a8;
        case 0x1d10acu: goto label_1d10ac;
        case 0x1d10b0u: goto label_1d10b0;
        case 0x1d10b4u: goto label_1d10b4;
        case 0x1d10b8u: goto label_1d10b8;
        case 0x1d10bcu: goto label_1d10bc;
        case 0x1d10c0u: goto label_1d10c0;
        case 0x1d10c4u: goto label_1d10c4;
        case 0x1d10c8u: goto label_1d10c8;
        case 0x1d10ccu: goto label_1d10cc;
        case 0x1d10d0u: goto label_1d10d0;
        case 0x1d10d4u: goto label_1d10d4;
        case 0x1d10d8u: goto label_1d10d8;
        case 0x1d10dcu: goto label_1d10dc;
        case 0x1d10e0u: goto label_1d10e0;
        case 0x1d10e4u: goto label_1d10e4;
        case 0x1d10e8u: goto label_1d10e8;
        case 0x1d10ecu: goto label_1d10ec;
        case 0x1d10f0u: goto label_1d10f0;
        case 0x1d10f4u: goto label_1d10f4;
        case 0x1d10f8u: goto label_1d10f8;
        case 0x1d10fcu: goto label_1d10fc;
        case 0x1d1100u: goto label_1d1100;
        case 0x1d1104u: goto label_1d1104;
        case 0x1d1108u: goto label_1d1108;
        case 0x1d110cu: goto label_1d110c;
        case 0x1d1110u: goto label_1d1110;
        case 0x1d1114u: goto label_1d1114;
        case 0x1d1118u: goto label_1d1118;
        case 0x1d111cu: goto label_1d111c;
        case 0x1d1120u: goto label_1d1120;
        case 0x1d1124u: goto label_1d1124;
        case 0x1d1128u: goto label_1d1128;
        case 0x1d112cu: goto label_1d112c;
        case 0x1d1130u: goto label_1d1130;
        case 0x1d1134u: goto label_1d1134;
        case 0x1d1138u: goto label_1d1138;
        case 0x1d113cu: goto label_1d113c;
        case 0x1d1140u: goto label_1d1140;
        case 0x1d1144u: goto label_1d1144;
        case 0x1d1148u: goto label_1d1148;
        case 0x1d114cu: goto label_1d114c;
        case 0x1d1150u: goto label_1d1150;
        case 0x1d1154u: goto label_1d1154;
        case 0x1d1158u: goto label_1d1158;
        case 0x1d115cu: goto label_1d115c;
        case 0x1d1160u: goto label_1d1160;
        case 0x1d1164u: goto label_1d1164;
        case 0x1d1168u: goto label_1d1168;
        case 0x1d116cu: goto label_1d116c;
        case 0x1d1170u: goto label_1d1170;
        case 0x1d1174u: goto label_1d1174;
        case 0x1d1178u: goto label_1d1178;
        case 0x1d117cu: goto label_1d117c;
        case 0x1d1180u: goto label_1d1180;
        case 0x1d1184u: goto label_1d1184;
        case 0x1d1188u: goto label_1d1188;
        case 0x1d118cu: goto label_1d118c;
        case 0x1d1190u: goto label_1d1190;
        case 0x1d1194u: goto label_1d1194;
        case 0x1d1198u: goto label_1d1198;
        case 0x1d119cu: goto label_1d119c;
        case 0x1d11a0u: goto label_1d11a0;
        case 0x1d11a4u: goto label_1d11a4;
        case 0x1d11a8u: goto label_1d11a8;
        case 0x1d11acu: goto label_1d11ac;
        case 0x1d11b0u: goto label_1d11b0;
        case 0x1d11b4u: goto label_1d11b4;
        case 0x1d11b8u: goto label_1d11b8;
        case 0x1d11bcu: goto label_1d11bc;
        case 0x1d11c0u: goto label_1d11c0;
        case 0x1d11c4u: goto label_1d11c4;
        case 0x1d11c8u: goto label_1d11c8;
        case 0x1d11ccu: goto label_1d11cc;
        case 0x1d11d0u: goto label_1d11d0;
        case 0x1d11d4u: goto label_1d11d4;
        case 0x1d11d8u: goto label_1d11d8;
        case 0x1d11dcu: goto label_1d11dc;
        case 0x1d11e0u: goto label_1d11e0;
        case 0x1d11e4u: goto label_1d11e4;
        case 0x1d11e8u: goto label_1d11e8;
        case 0x1d11ecu: goto label_1d11ec;
        case 0x1d11f0u: goto label_1d11f0;
        case 0x1d11f4u: goto label_1d11f4;
        case 0x1d11f8u: goto label_1d11f8;
        case 0x1d11fcu: goto label_1d11fc;
        case 0x1d1200u: goto label_1d1200;
        case 0x1d1204u: goto label_1d1204;
        default: return;
    }

label_1d0a38:
    // 0x1d0a38: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d0a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d0a3c:
    // 0x1d0a3c: 0x8424ae10  lh          $a0, -0x51F0($at)
    ctx->pc = 0x1d0a3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294946320)));
label_1d0a40:
    // 0x1d0a40: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1d0a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1d0a44:
    // 0x1d0a44: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d0a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d0a48:
    // 0x1d0a48: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1d0a48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1d0a4c:
    // 0x1d0a4c: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x1d0a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
label_1d0a50:
    // 0x1d0a50: 0xa4440080  sh          $a0, 0x80($v0)
    ctx->pc = 0x1d0a50u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 128), (uint16_t)GPR_U32(ctx, 4));
label_1d0a54:
    // 0x1d0a54: 0x8424ae10  lh          $a0, -0x51F0($at)
    ctx->pc = 0x1d0a54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294946320)));
label_1d0a58:
    // 0x1d0a58: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1d0a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1d0a5c:
    // 0x1d0a5c: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1d0a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1d0a60:
    // 0x1d0a60: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1d0a60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1d0a64:
    // 0x1d0a64: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x1d0a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
label_1d0a68:
    // 0x1d0a68: 0xa4440090  sh          $a0, 0x90($v0)
    ctx->pc = 0x1d0a68u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 4));
label_1d0a6c:
    // 0x1d0a6c: 0x84620008  lh          $v0, 0x8($v1)
    ctx->pc = 0x1d0a6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1d0a70:
    // 0x1d0a70: 0x86040090  lh          $a0, 0x90($s0)
    ctx->pc = 0x1d0a70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 144)));
label_1d0a74:
    // 0x1d0a74: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d0a74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1d0a78:
    // 0x1d0a78: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1d0a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1d0a7c:
    // 0x1d0a7c: 0xa60200d8  sh          $v0, 0xD8($s0)
    ctx->pc = 0x1d0a7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 216), (uint16_t)GPR_U32(ctx, 2));
label_1d0a80:
    // 0x1d0a80: 0xa60200a8  sh          $v0, 0xA8($s0)
    ctx->pc = 0x1d0a80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 168), (uint16_t)GPR_U32(ctx, 2));
label_1d0a84:
    // 0x1d0a84: 0x8462000c  lh          $v0, 0xC($v1)
    ctx->pc = 0x1d0a84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_1d0a88:
    // 0x1d0a88: 0x86040230  lh          $a0, 0x230($s0)
    ctx->pc = 0x1d0a88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 560)));
label_1d0a8c:
    // 0x1d0a8c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d0a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1d0a90:
    // 0x1d0a90: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1d0a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1d0a94:
    // 0x1d0a94: 0xa6020278  sh          $v0, 0x278($s0)
    ctx->pc = 0x1d0a94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 632), (uint16_t)GPR_U32(ctx, 2));
label_1d0a98:
    // 0x1d0a98: 0xa6020248  sh          $v0, 0x248($s0)
    ctx->pc = 0x1d0a98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 584), (uint16_t)GPR_U32(ctx, 2));
label_1d0a9c:
    // 0x1d0a9c: 0x8466000c  lh          $a2, 0xC($v1)
    ctx->pc = 0x1d0a9cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_1d0aa0:
    // 0x1d0aa0: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x1d0aa0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_1d0aa4:
    // 0x1d0aa4: 0x86020160  lh          $v0, 0x160($s0)
    ctx->pc = 0x1d0aa4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 352)));
label_1d0aa8:
    // 0x1d0aa8: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1d0aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1d0aac:
    // 0x1d0aac: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x1d0aacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1d0ab0:
    // 0x1d0ab0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d0ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1d0ab4:
    // 0x1d0ab4: 0xa60201a8  sh          $v0, 0x1A8($s0)
    ctx->pc = 0x1d0ab4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 424), (uint16_t)GPR_U32(ctx, 2));
label_1d0ab8:
    // 0x1d0ab8: 0xa6020178  sh          $v0, 0x178($s0)
    ctx->pc = 0x1d0ab8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 376), (uint16_t)GPR_U32(ctx, 2));
label_1d0abc:
    // 0x1d0abc: 0x8c640024  lw          $a0, 0x24($v1)
    ctx->pc = 0x1d0abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1d0ac0:
    // 0x1d0ac0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1d0ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_1d0ac4:
    // 0x1d0ac4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1d0ac8:
    if (ctx->pc == 0x1D0AC8u) {
        ctx->pc = 0x1D0AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0AC4u;
        // 0x1d0ac8: 0x26070a60  addiu       $a3, $s0, 0xA60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 2656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0ACCu;
        goto label_1d0acc;
    }
    ctx->pc = 0x1D0AC4u;
    {
        const bool branch_taken_0x1d0ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0AC4u;
        // 0x1d0ac8: 0x26070a60  addiu       $a3, $s0, 0xA60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 2656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0ac4) {
            ctx->pc = 0x1D0AD4u;
            goto label_1d0ad4;
        }
    }
    ctx->pc = 0x1D0ACCu;
label_1d0acc:
    // 0x1d0acc: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d0ad0:
    if (ctx->pc == 0x1D0AD0u) {
        ctx->pc = 0x1D0AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0ACCu;
        // 0x1d0ad0: 0xdf828608  ld          $v0, -0x79F8($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936072)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0AD4u;
        goto label_1d0ad4;
    }
    ctx->pc = 0x1D0ACCu;
    {
        const bool branch_taken_0x1d0acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0ACCu;
        // 0x1d0ad0: 0xdf828608  ld          $v0, -0x79F8($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0acc) {
            ctx->pc = 0x1D0ADCu;
            goto label_1d0adc;
        }
    }
    ctx->pc = 0x1D0AD4u;
label_1d0ad4:
    // 0x1d0ad4: 0xdf828610  ld          $v0, -0x79F0($gp)
    ctx->pc = 0x1d0ad4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936080)));
label_1d0ad8:
    // 0x1d0ad8: 0x0  nop
    ctx->pc = 0x1d0ad8u;
    // NOP
label_1d0adc:
    // 0x1d0adc: 0xfce20060  sd          $v0, 0x60($a3)
    ctx->pc = 0x1d0adcu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 96), GPR_U64(ctx, 2));
label_1d0ae0:
    // 0x1d0ae0: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_1d0ae4:
    if (ctx->pc == 0x1D0AE4u) {
        ctx->pc = 0x1D0AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0AE0u;
        // 0x1d0ae4: 0x44043  sra         $t0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0AE8u;
        goto label_1d0ae8;
    }
    ctx->pc = 0x1D0AE0u;
    {
        const bool branch_taken_0x1d0ae0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1D0AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0AE0u;
        // 0x1d0ae4: 0x44043  sra         $t0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0ae0) {
            ctx->pc = 0x1D0AF0u;
            goto label_1d0af0;
        }
    }
    ctx->pc = 0x1D0AE8u;
label_1d0ae8:
    // 0x1d0ae8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1d0ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1d0aec:
    // 0x1d0aec: 0x24043  sra         $t0, $v0, 1
    ctx->pc = 0x1d0aecu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 1));
label_1d0af0:
    // 0x1d0af0: 0x5010004  bgez        $t0, . + 4 + (0x4 << 2)
label_1d0af4:
    if (ctx->pc == 0x1D0AF4u) {
        ctx->pc = 0x1D0AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0AF0u;
        // 0x1d0af4: 0x31020007  andi        $v0, $t0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0AF8u;
        goto label_1d0af8;
    }
    ctx->pc = 0x1D0AF0u;
    {
        const bool branch_taken_0x1d0af0 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x1D0AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0AF0u;
        // 0x1d0af4: 0x31020007  andi        $v0, $t0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0af0) {
            ctx->pc = 0x1D0B04u;
            goto label_1d0b04;
        }
    }
    ctx->pc = 0x1D0AF8u;
label_1d0af8:
    // 0x1d0af8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1d0afc:
    if (ctx->pc == 0x1D0AFCu) {
        ctx->pc = 0x1D0B00u;
        goto label_1d0b00;
    }
    ctx->pc = 0x1D0AF8u;
    {
        const bool branch_taken_0x1d0af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0af8) {
            ctx->pc = 0x1D0B04u;
            goto label_1d0b04;
        }
    }
    ctx->pc = 0x1D0B00u;
label_1d0b00:
    // 0x1d0b00: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x1d0b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_1d0b04:
    // 0x1d0b04: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1d0b04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1d0b08:
    // 0x1d0b08: 0x830c3  sra         $a2, $t0, 3
    ctx->pc = 0x1d0b08u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 8), 3));
label_1d0b0c:
    // 0x1d0b0c: 0x5010003  bgez        $t0, . + 4 + (0x3 << 2)
label_1d0b10:
    if (ctx->pc == 0x1D0B10u) {
        ctx->pc = 0x1D0B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0B0Cu;
        // 0x1d0b10: 0x3044ffff  andi        $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0B14u;
        goto label_1d0b14;
    }
    ctx->pc = 0x1D0B0Cu;
    {
        const bool branch_taken_0x1d0b0c = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x1D0B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0B0Cu;
        // 0x1d0b10: 0x3044ffff  andi        $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0b0c) {
            ctx->pc = 0x1D0B1Cu;
            goto label_1d0b1c;
        }
    }
    ctx->pc = 0x1D0B14u;
label_1d0b14:
    // 0x1d0b14: 0x25020007  addiu       $v0, $t0, 0x7
    ctx->pc = 0x1d0b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 7));
label_1d0b18:
    // 0x1d0b18: 0x230c3  sra         $a2, $v0, 3
    ctx->pc = 0x1d0b18u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 3));
label_1d0b1c:
    // 0x1d0b1c: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x1d0b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1d0b20:
    // 0x1d0b20: 0x24880080  addiu       $t0, $a0, 0x80
    ctx->pc = 0x1d0b20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_1d0b24:
    // 0x1d0b24: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1d0b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1d0b28:
    // 0x1d0b28: 0x29010400  slti        $at, $t0, 0x400
    ctx->pc = 0x1d0b28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)1024) ? 1 : 0);
label_1d0b2c:
    // 0x1d0b2c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1d0b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1d0b30:
    // 0x1d0b30: 0x3049ffff  andi        $t1, $v0, 0xFFFF
    ctx->pc = 0x1d0b30u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1d0b34:
    // 0x1d0b34: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1d0b38:
    if (ctx->pc == 0x1D0B38u) {
        ctx->pc = 0x1D0B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0B34u;
        // 0x1d0b38: 0x252b0018  addiu       $t3, $t1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0B3Cu;
        goto label_1d0b3c;
    }
    ctx->pc = 0x1D0B34u;
    {
        const bool branch_taken_0x1d0b34 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0B34u;
        // 0x1d0b38: 0x252b0018  addiu       $t3, $t1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0b34) {
            ctx->pc = 0x1D0B40u;
            goto label_1d0b40;
        }
    }
    ctx->pc = 0x1D0B3Cu;
label_1d0b3c:
    // 0x1d0b3c: 0x240803ff  addiu       $t0, $zero, 0x3FF
    ctx->pc = 0x1d0b3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
label_1d0b40:
    // 0x1d0b40: 0x29610280  slti        $at, $t3, 0x280
    ctx->pc = 0x1d0b40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)640) ? 1 : 0);
label_1d0b44:
    // 0x1d0b44: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1d0b48:
    if (ctx->pc == 0x1D0B48u) {
        ctx->pc = 0x1D0B4Cu;
        goto label_1d0b4c;
    }
    ctx->pc = 0x1D0B44u;
    {
        const bool branch_taken_0x1d0b44 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0b44) {
            ctx->pc = 0x1D0B50u;
            goto label_1d0b50;
        }
    }
    ctx->pc = 0x1D0B4Cu;
label_1d0b4c:
    // 0x1d0b4c: 0x240b027f  addiu       $t3, $zero, 0x27F
    ctx->pc = 0x1d0b4cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 639));
label_1d0b50:
    // 0x1d0b50: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x1d0b50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_1d0b54:
    // 0x1d0b54: 0x43100  sll         $a2, $a0, 4
    ctx->pc = 0x1d0b54u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1d0b58:
    // 0x1d0b58: 0x244c0008  addiu       $t4, $v0, 0x8
    ctx->pc = 0x1d0b58u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_1d0b5c:
    // 0x1d0b5c: 0x24cd0008  addiu       $t5, $a2, 0x8
    ctx->pc = 0x1d0b5cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_1d0b60:
    // 0x1d0b60: 0x9103c  dsll32      $v0, $t1, 0
    ctx->pc = 0x1d0b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 0));
label_1d0b64:
    // 0x1d0b64: 0xa4ed0078  sh          $t5, 0x78($a3)
    ctx->pc = 0x1d0b64u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 120), (uint16_t)GPR_U32(ctx, 13));
label_1d0b68:
    // 0x1d0b68: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d0b68u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1d0b6c:
    // 0x1d0b6c: 0x83100  sll         $a2, $t0, 4
    ctx->pc = 0x1d0b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_1d0b70:
    // 0x1d0b70: 0x25638  dsll        $t2, $v0, 24
    ctx->pc = 0x1d0b70u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << 24);
label_1d0b74:
    // 0x1d0b74: 0xa4ec007a  sh          $t4, 0x7A($a3)
    ctx->pc = 0x1d0b74u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 122), (uint16_t)GPR_U32(ctx, 12));
label_1d0b78:
    // 0x1d0b78: 0xb1100  sll         $v0, $t3, 4
    ctx->pc = 0x1d0b78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
label_1d0b7c:
    // 0x1d0b7c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1d0b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_1d0b80:
    // 0x1d0b80: 0x244e0008  addiu       $t6, $v0, 0x8
    ctx->pc = 0x1d0b80u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_1d0b84:
    // 0x1d0b84: 0xa4e60090  sh          $a2, 0x90($a3)
    ctx->pc = 0x1d0b84u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 144), (uint16_t)GPR_U32(ctx, 6));
label_1d0b88:
    // 0x1d0b88: 0x2562ffff  addiu       $v0, $t3, -0x1
    ctx->pc = 0x1d0b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
label_1d0b8c:
    // 0x1d0b8c: 0xa4ec0092  sh          $t4, 0x92($a3)
    ctx->pc = 0x1d0b8cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 146), (uint16_t)GPR_U32(ctx, 12));
label_1d0b90:
    // 0x1d0b90: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d0b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1d0b94:
    // 0x1d0b94: 0xa4ed00a8  sh          $t5, 0xA8($a3)
    ctx->pc = 0x1d0b94u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 168), (uint16_t)GPR_U32(ctx, 13));
label_1d0b98:
    // 0x1d0b98: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d0b98u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1d0b9c:
    // 0x1d0b9c: 0xa4ee00aa  sh          $t6, 0xAA($a3)
    ctx->pc = 0x1d0b9cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 170), (uint16_t)GPR_U32(ctx, 14));
label_1d0ba0:
    // 0x1d0ba0: 0xa4e600c0  sh          $a2, 0xC0($a3)
    ctx->pc = 0x1d0ba0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 192), (uint16_t)GPR_U32(ctx, 6));
label_1d0ba4:
    // 0x1d0ba4: 0x248bc  dsll32      $t1, $v0, 2
    ctx->pc = 0x1d0ba4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (32 + 2));
label_1d0ba8:
    // 0x1d0ba8: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x1d0ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
label_1d0bac:
    // 0x1d0bac: 0x2506ffff  addiu       $a2, $t0, -0x1
    ctx->pc = 0x1d0bacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_1d0bb0:
    // 0x1d0bb0: 0x6583c  dsll32      $t3, $a2, 0
    ctx->pc = 0x1d0bb0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) << (32 + 0));
label_1d0bb4:
    // 0x1d0bb4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1d0bb4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1d0bb8:
    // 0x1d0bb8: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x1d0bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
label_1d0bbc:
    // 0x1d0bbc: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x1d0bbcu;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
label_1d0bc0:
    // 0x1d0bc0: 0x344c000a  ori         $t4, $v0, 0xA
    ctx->pc = 0x1d0bc0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
label_1d0bc4:
    // 0x1d0bc4: 0xb5bb8  dsll        $t3, $t3, 14
    ctx->pc = 0x1d0bc4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 14);
label_1d0bc8:
    // 0x1d0bc8: 0x18b5825  or          $t3, $t4, $t3
    ctx->pc = 0x1d0bc8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) | GPR_U64(ctx, 11));
label_1d0bcc:
    // 0x1d0bcc: 0xa4ee00c2  sh          $t6, 0xC2($a3)
    ctx->pc = 0x1d0bccu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 194), (uint16_t)GPR_U32(ctx, 14));
label_1d0bd0:
    // 0x1d0bd0: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x1d0bd0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
label_1d0bd4:
    // 0x1d0bd4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d0bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d0bd8:
    // 0x1d0bd8: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x1d0bd8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
label_1d0bdc:
    // 0x1d0bdc: 0x24060210  addiu       $a2, $zero, 0x210
    ctx->pc = 0x1d0bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
label_1d0be0:
    // 0x1d0be0: 0xfce90040  sd          $t1, 0x40($a3)
    ctx->pc = 0x1d0be0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 64), GPR_U64(ctx, 9));
label_1d0be4:
    // 0x1d0be4: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x1d0be4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d0be8:
    // 0x1d0be8: 0x240a0005  addiu       $t2, $zero, 0x5
    ctx->pc = 0x1d0be8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1d0bec:
    // 0x1d0bec: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x1d0becu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d0bf0:
    // 0x1d0bf0: 0x2063821  addu        $a3, $s0, $a2
    ctx->pc = 0x1d0bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_1d0bf4:
    // 0x1d0bf4: 0x144c0009  bne         $v0, $t4, . + 4 + (0x9 << 2)
label_1d0bf8:
    if (ctx->pc == 0x1D0BF8u) {
        ctx->pc = 0x1D0BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0BF4u;
        // 0x1d0bf8: 0x24ed0640  addiu       $t5, $a3, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 1600));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0BFCu;
        goto label_1d0bfc;
    }
    ctx->pc = 0x1D0BF4u;
    {
        const bool branch_taken_0x1d0bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 12));
        ctx->pc = 0x1D0BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0BF4u;
        // 0x1d0bf8: 0x24ed0640  addiu       $t5, $a3, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 1600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0bf4) {
            ctx->pc = 0x1D0C1Cu;
            goto label_1d0c1c;
        }
    }
    ctx->pc = 0x1D0BFCu;
label_1d0bfc:
    // 0x1d0bfc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_1d0c00:
    if (ctx->pc == 0x1D0C00u) {
        ctx->pc = 0x1D0C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0BFCu;
        // 0x1d0c00: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0C04u;
        goto label_1d0c04;
    }
    ctx->pc = 0x1D0BFCu;
    {
        const bool branch_taken_0x1d0bfc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0BFCu;
        // 0x1d0c00: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0bfc) {
            ctx->pc = 0x1D0C0Cu;
            goto label_1d0c0c;
        }
    }
    ctx->pc = 0x1D0C04u;
label_1d0c04:
    // 0x1d0c04: 0x10000018  b           . + 4 + (0x18 << 2)
label_1d0c08:
    if (ctx->pc == 0x1D0C08u) {
        ctx->pc = 0x1D0C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0C04u;
        // 0x1d0c08: 0x24080022  addiu       $t0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0C0Cu;
        goto label_1d0c0c;
    }
    ctx->pc = 0x1D0C04u;
    {
        const bool branch_taken_0x1d0c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0C04u;
        // 0x1d0c08: 0x24080022  addiu       $t0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0c04) {
            ctx->pc = 0x1D0C68u;
            goto label_1d0c68;
        }
    }
    ctx->pc = 0x1D0C0Cu;
label_1d0c0c:
    // 0x1d0c0c: 0x0  nop
    ctx->pc = 0x1d0c0cu;
    // NOP
label_1d0c10:
    // 0x1d0c10: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x1d0c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_1d0c14:
    // 0x1d0c14: 0x10000014  b           . + 4 + (0x14 << 2)
label_1d0c18:
    if (ctx->pc == 0x1D0C18u) {
        ctx->pc = 0x1D0C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0C14u;
        // 0x1d0c18: 0x24080056  addiu       $t0, $zero, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0C1Cu;
        goto label_1d0c1c;
    }
    ctx->pc = 0x1D0C14u;
    {
        const bool branch_taken_0x1d0c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0C14u;
        // 0x1d0c18: 0x24080056  addiu       $t0, $zero, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0c14) {
            ctx->pc = 0x1D0C68u;
            goto label_1d0c68;
        }
    }
    ctx->pc = 0x1D0C1Cu;
label_1d0c1c:
    // 0x1d0c1c: 0x0  nop
    ctx->pc = 0x1d0c1cu;
    // NOP
label_1d0c20:
    // 0x1d0c20: 0x144b0008  bne         $v0, $t3, . + 4 + (0x8 << 2)
label_1d0c24:
    if (ctx->pc == 0x1D0C24u) {
        ctx->pc = 0x1D0C28u;
        goto label_1d0c28;
    }
    ctx->pc = 0x1D0C20u;
    {
        const bool branch_taken_0x1d0c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 11));
        if (branch_taken_0x1d0c20) {
            ctx->pc = 0x1D0C44u;
            goto label_1d0c44;
        }
    }
    ctx->pc = 0x1D0C28u;
label_1d0c28:
    // 0x1d0c28: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_1d0c2c:
    if (ctx->pc == 0x1D0C2Cu) {
        ctx->pc = 0x1D0C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0C28u;
        // 0x1d0c2c: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0C30u;
        goto label_1d0c30;
    }
    ctx->pc = 0x1D0C28u;
    {
        const bool branch_taken_0x1d0c28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0C28u;
        // 0x1d0c2c: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0c28) {
            ctx->pc = 0x1D0C38u;
            goto label_1d0c38;
        }
    }
    ctx->pc = 0x1D0C30u;
label_1d0c30:
    // 0x1d0c30: 0x1000000d  b           . + 4 + (0xD << 2)
label_1d0c34:
    if (ctx->pc == 0x1D0C34u) {
        ctx->pc = 0x1D0C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0C30u;
        // 0x1d0c34: 0x240800a2  addiu       $t0, $zero, 0xA2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0C38u;
        goto label_1d0c38;
    }
    ctx->pc = 0x1D0C30u;
    {
        const bool branch_taken_0x1d0c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0C30u;
        // 0x1d0c34: 0x240800a2  addiu       $t0, $zero, 0xA2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0c30) {
            ctx->pc = 0x1D0C68u;
            goto label_1d0c68;
        }
    }
    ctx->pc = 0x1D0C38u;
label_1d0c38:
    // 0x1d0c38: 0x24040056  addiu       $a0, $zero, 0x56
    ctx->pc = 0x1d0c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
label_1d0c3c:
    // 0x1d0c3c: 0x1000000a  b           . + 4 + (0xA << 2)
label_1d0c40:
    if (ctx->pc == 0x1D0C40u) {
        ctx->pc = 0x1D0C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0C3Cu;
        // 0x1d0c40: 0x240800d6  addiu       $t0, $zero, 0xD6 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 214));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0C44u;
        goto label_1d0c44;
    }
    ctx->pc = 0x1D0C3Cu;
    {
        const bool branch_taken_0x1d0c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0C3Cu;
        // 0x1d0c40: 0x240800d6  addiu       $t0, $zero, 0xD6 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 214));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0c3c) {
            ctx->pc = 0x1D0C68u;
            goto label_1d0c68;
        }
    }
    ctx->pc = 0x1D0C44u;
label_1d0c44:
    // 0x1d0c44: 0x0  nop
    ctx->pc = 0x1d0c44u;
    // NOP
label_1d0c48:
    // 0x1d0c48: 0x144a0007  bne         $v0, $t2, . + 4 + (0x7 << 2)
label_1d0c4c:
    if (ctx->pc == 0x1D0C4Cu) {
        ctx->pc = 0x1D0C50u;
        goto label_1d0c50;
    }
    ctx->pc = 0x1D0C48u;
    {
        const bool branch_taken_0x1d0c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 10));
        if (branch_taken_0x1d0c48) {
            ctx->pc = 0x1D0C68u;
            goto label_1d0c68;
        }
    }
    ctx->pc = 0x1D0C50u;
label_1d0c50:
    // 0x1d0c50: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_1d0c54:
    if (ctx->pc == 0x1D0C54u) {
        ctx->pc = 0x1D0C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0C50u;
        // 0x1d0c54: 0x240400a2  addiu       $a0, $zero, 0xA2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0C58u;
        goto label_1d0c58;
    }
    ctx->pc = 0x1D0C50u;
    {
        const bool branch_taken_0x1d0c50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0C50u;
        // 0x1d0c54: 0x240400a2  addiu       $a0, $zero, 0xA2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0c50) {
            ctx->pc = 0x1D0C60u;
            goto label_1d0c60;
        }
    }
    ctx->pc = 0x1D0C58u;
label_1d0c58:
    // 0x1d0c58: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d0c5c:
    if (ctx->pc == 0x1D0C5Cu) {
        ctx->pc = 0x1D0C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0C58u;
        // 0x1d0c5c: 0x240800ca  addiu       $t0, $zero, 0xCA (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0C60u;
        goto label_1d0c60;
    }
    ctx->pc = 0x1D0C58u;
    {
        const bool branch_taken_0x1d0c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0C58u;
        // 0x1d0c5c: 0x240800ca  addiu       $t0, $zero, 0xCA (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0c58) {
            ctx->pc = 0x1D0C68u;
            goto label_1d0c68;
        }
    }
    ctx->pc = 0x1D0C60u;
label_1d0c60:
    // 0x1d0c60: 0x240400d6  addiu       $a0, $zero, 0xD6
    ctx->pc = 0x1d0c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 214));
label_1d0c64:
    // 0x1d0c64: 0x240800fe  addiu       $t0, $zero, 0xFE
    ctx->pc = 0x1d0c64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
label_1d0c68:
    // 0x1d0c68: 0x43900  sll         $a3, $a0, 4
    ctx->pc = 0x1d0c68u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1d0c6c:
    // 0x1d0c6c: 0x24e96c00  addiu       $t1, $a3, 0x6C00
    ctx->pc = 0x1d0c6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 27648));
label_1d0c70:
    // 0x1d0c70: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x1d0c70u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_1d0c74:
    // 0x1d0c74: 0xa5a90090  sh          $t1, 0x90($t5)
    ctx->pc = 0x1d0c74u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 144), (uint16_t)GPR_U32(ctx, 9));
label_1d0c78:
    // 0x1d0c78: 0x24e76c00  addiu       $a3, $a3, 0x6C00
    ctx->pc = 0x1d0c78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 27648));
label_1d0c7c:
    // 0x1d0c7c: 0xa5a90070  sh          $t1, 0x70($t5)
    ctx->pc = 0x1d0c7cu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 112), (uint16_t)GPR_U32(ctx, 9));
label_1d0c80:
    // 0x1d0c80: 0xa5a700a0  sh          $a3, 0xA0($t5)
    ctx->pc = 0x1d0c80u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 160), (uint16_t)GPR_U32(ctx, 7));
label_1d0c84:
    // 0x1d0c84: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_1d0c88:
    if (ctx->pc == 0x1D0C88u) {
        ctx->pc = 0x1D0C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0C84u;
        // 0x1d0c88: 0xa5a70080  sh          $a3, 0x80($t5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 13), 128), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0C8Cu;
        goto label_1d0c8c;
    }
    ctx->pc = 0x1D0C84u;
    {
        const bool branch_taken_0x1d0c84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0C84u;
        // 0x1d0c88: 0xa5a70080  sh          $a3, 0x80($t5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 13), 128), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0c84) {
            ctx->pc = 0x1D0CA8u;
            goto label_1d0ca8;
        }
    }
    ctx->pc = 0x1D0C8Cu;
label_1d0c8c:
    // 0x1d0c8c: 0x95a70070  lhu         $a3, 0x70($t5)
    ctx->pc = 0x1d0c8cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 112)));
label_1d0c90:
    // 0x1d0c90: 0x24e7006a  addiu       $a3, $a3, 0x6A
    ctx->pc = 0x1d0c90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 106));
label_1d0c94:
    // 0x1d0c94: 0xa5a70070  sh          $a3, 0x70($t5)
    ctx->pc = 0x1d0c94u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 112), (uint16_t)GPR_U32(ctx, 7));
label_1d0c98:
    // 0x1d0c98: 0x95a70080  lhu         $a3, 0x80($t5)
    ctx->pc = 0x1d0c98u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 128)));
label_1d0c9c:
    // 0x1d0c9c: 0x24e7006a  addiu       $a3, $a3, 0x6A
    ctx->pc = 0x1d0c9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 106));
label_1d0ca0:
    // 0x1d0ca0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1d0ca4:
    if (ctx->pc == 0x1D0CA4u) {
        ctx->pc = 0x1D0CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0CA0u;
        // 0x1d0ca4: 0xa5a70080  sh          $a3, 0x80($t5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 13), 128), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0CA8u;
        goto label_1d0ca8;
    }
    ctx->pc = 0x1D0CA0u;
    {
        const bool branch_taken_0x1d0ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0CA0u;
        // 0x1d0ca4: 0xa5a70080  sh          $a3, 0x80($t5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 13), 128), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0ca0) {
            ctx->pc = 0x1D0CC0u;
            goto label_1d0cc0;
        }
    }
    ctx->pc = 0x1D0CA8u;
label_1d0ca8:
    // 0x1d0ca8: 0x95a70070  lhu         $a3, 0x70($t5)
    ctx->pc = 0x1d0ca8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 112)));
label_1d0cac:
    // 0x1d0cac: 0x24e70080  addiu       $a3, $a3, 0x80
    ctx->pc = 0x1d0cacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
label_1d0cb0:
    // 0x1d0cb0: 0xa5a70070  sh          $a3, 0x70($t5)
    ctx->pc = 0x1d0cb0u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 112), (uint16_t)GPR_U32(ctx, 7));
label_1d0cb4:
    // 0x1d0cb4: 0x95a70080  lhu         $a3, 0x80($t5)
    ctx->pc = 0x1d0cb4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 128)));
label_1d0cb8:
    // 0x1d0cb8: 0x24e70080  addiu       $a3, $a3, 0x80
    ctx->pc = 0x1d0cb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
label_1d0cbc:
    // 0x1d0cbc: 0xa5a70080  sh          $a3, 0x80($t5)
    ctx->pc = 0x1d0cbcu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 128), (uint16_t)GPR_U32(ctx, 7));
label_1d0cc0:
    // 0x1d0cc0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d0cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d0cc4:
    // 0x1d0cc4: 0x28410006  slti        $at, $v0, 0x6
    ctx->pc = 0x1d0cc4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
label_1d0cc8:
    // 0x1d0cc8: 0x1420ffc9  bnez        $at, . + 4 + (-0x37 << 2)
label_1d0ccc:
    if (ctx->pc == 0x1D0CCCu) {
        ctx->pc = 0x1D0CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0CC8u;
        // 0x1d0ccc: 0x24c600b0  addiu       $a2, $a2, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0CD0u;
        goto label_1d0cd0;
    }
    ctx->pc = 0x1D0CC8u;
    {
        const bool branch_taken_0x1d0cc8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0CC8u;
        // 0x1d0ccc: 0x24c600b0  addiu       $a2, $a2, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0cc8) {
            ctx->pc = 0x1D0BF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0bf0;
        }
    }
    ctx->pc = 0x1D0CD0u;
label_1d0cd0:
    // 0x1d0cd0: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x1d0cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_1d0cd4:
    // 0x1d0cd4: 0x30c40001  andi        $a0, $a2, 0x1
    ctx->pc = 0x1d0cd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_1d0cd8:
    // 0x1d0cd8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1d0cdc:
    if (ctx->pc == 0x1D0CDCu) {
        ctx->pc = 0x1D0CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0CD8u;
        // 0x1d0cdc: 0x26020b30  addiu       $v0, $s0, 0xB30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0CE0u;
        goto label_1d0ce0;
    }
    ctx->pc = 0x1D0CD8u;
    {
        const bool branch_taken_0x1d0cd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0CD8u;
        // 0x1d0cdc: 0x26020b30  addiu       $v0, $s0, 0xB30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0cd8) {
            ctx->pc = 0x1D0CE8u;
            goto label_1d0ce8;
        }
    }
    ctx->pc = 0x1D0CE0u;
label_1d0ce0:
    // 0x1d0ce0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d0ce4:
    if (ctx->pc == 0x1D0CE4u) {
        ctx->pc = 0x1D0CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0CE0u;
        // 0x1d0ce4: 0xdf848608  ld          $a0, -0x79F8($gp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294936072)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0CE8u;
        goto label_1d0ce8;
    }
    ctx->pc = 0x1D0CE0u;
    {
        const bool branch_taken_0x1d0ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0CE0u;
        // 0x1d0ce4: 0xdf848608  ld          $a0, -0x79F8($gp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294936072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0ce0) {
            ctx->pc = 0x1D0CF0u;
            goto label_1d0cf0;
        }
    }
    ctx->pc = 0x1D0CE8u;
label_1d0ce8:
    // 0x1d0ce8: 0xdf848610  ld          $a0, -0x79F0($gp)
    ctx->pc = 0x1d0ce8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294936080)));
label_1d0cec:
    // 0x1d0cec: 0x0  nop
    ctx->pc = 0x1d0cecu;
    // NOP
label_1d0cf0:
    // 0x1d0cf0: 0xfc440060  sd          $a0, 0x60($v0)
    ctx->pc = 0x1d0cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 96), GPR_U64(ctx, 4));
label_1d0cf4:
    // 0x1d0cf4: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_1d0cf8:
    if (ctx->pc == 0x1D0CF8u) {
        ctx->pc = 0x1D0CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0CF4u;
        // 0x1d0cf8: 0x63843  sra         $a3, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0CFCu;
        goto label_1d0cfc;
    }
    ctx->pc = 0x1D0CF4u;
    {
        const bool branch_taken_0x1d0cf4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1D0CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0CF4u;
        // 0x1d0cf8: 0x63843  sra         $a3, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0cf4) {
            ctx->pc = 0x1D0D04u;
            goto label_1d0d04;
        }
    }
    ctx->pc = 0x1D0CFCu;
label_1d0cfc:
    // 0x1d0cfc: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x1d0cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1d0d00:
    // 0x1d0d00: 0x43843  sra         $a3, $a0, 1
    ctx->pc = 0x1d0d00u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 4), 1));
label_1d0d04:
    // 0x1d0d04: 0x4e10004  bgez        $a3, . + 4 + (0x4 << 2)
label_1d0d08:
    if (ctx->pc == 0x1D0D08u) {
        ctx->pc = 0x1D0D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0D04u;
        // 0x1d0d08: 0x30e40007  andi        $a0, $a3, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0D0Cu;
        goto label_1d0d0c;
    }
    ctx->pc = 0x1D0D04u;
    {
        const bool branch_taken_0x1d0d04 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1D0D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0D04u;
        // 0x1d0d08: 0x30e40007  andi        $a0, $a3, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0d04) {
            ctx->pc = 0x1D0D18u;
            goto label_1d0d18;
        }
    }
    ctx->pc = 0x1D0D0Cu;
label_1d0d0c:
    // 0x1d0d0c: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
label_1d0d10:
    if (ctx->pc == 0x1D0D10u) {
        ctx->pc = 0x1D0D14u;
        goto label_1d0d14;
    }
    ctx->pc = 0x1D0D0Cu;
    {
        const bool branch_taken_0x1d0d0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0d0c) {
            ctx->pc = 0x1D0D18u;
            goto label_1d0d18;
        }
    }
    ctx->pc = 0x1D0D14u;
label_1d0d14:
    // 0x1d0d14: 0x2484fff8  addiu       $a0, $a0, -0x8
    ctx->pc = 0x1d0d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
label_1d0d18:
    // 0x1d0d18: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x1d0d18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
label_1d0d1c:
    // 0x1d0d1c: 0x730c3  sra         $a2, $a3, 3
    ctx->pc = 0x1d0d1cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 3));
label_1d0d20:
    // 0x1d0d20: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
label_1d0d24:
    if (ctx->pc == 0x1D0D24u) {
        ctx->pc = 0x1D0D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0D20u;
        // 0x1d0d24: 0x3088ffff  andi        $t0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0D28u;
        goto label_1d0d28;
    }
    ctx->pc = 0x1D0D20u;
    {
        const bool branch_taken_0x1d0d20 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1D0D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0D20u;
        // 0x1d0d24: 0x3088ffff  andi        $t0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0d20) {
            ctx->pc = 0x1D0D30u;
            goto label_1d0d30;
        }
    }
    ctx->pc = 0x1D0D28u;
label_1d0d28:
    // 0x1d0d28: 0x24e40007  addiu       $a0, $a3, 0x7
    ctx->pc = 0x1d0d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
label_1d0d2c:
    // 0x1d0d2c: 0x430c3  sra         $a2, $a0, 3
    ctx->pc = 0x1d0d2cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 3));
label_1d0d30:
    // 0x1d0d30: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x1d0d30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1d0d34:
    // 0x1d0d34: 0x250c0080  addiu       $t4, $t0, 0x80
    ctx->pc = 0x1d0d34u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
label_1d0d38:
    // 0x1d0d38: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1d0d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1d0d3c:
    // 0x1d0d3c: 0x29810400  slti        $at, $t4, 0x400
    ctx->pc = 0x1d0d3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)1024) ? 1 : 0);
label_1d0d40:
    // 0x1d0d40: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1d0d40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1d0d44:
    // 0x1d0d44: 0x3089ffff  andi        $t1, $a0, 0xFFFF
    ctx->pc = 0x1d0d44u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_1d0d48:
    // 0x1d0d48: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1d0d4c:
    if (ctx->pc == 0x1D0D4Cu) {
        ctx->pc = 0x1D0D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0D48u;
        // 0x1d0d4c: 0x25240018  addiu       $a0, $t1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0D50u;
        goto label_1d0d50;
    }
    ctx->pc = 0x1D0D48u;
    {
        const bool branch_taken_0x1d0d48 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0D48u;
        // 0x1d0d4c: 0x25240018  addiu       $a0, $t1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0d48) {
            ctx->pc = 0x1D0D54u;
            goto label_1d0d54;
        }
    }
    ctx->pc = 0x1D0D50u;
label_1d0d50:
    // 0x1d0d50: 0x240c03ff  addiu       $t4, $zero, 0x3FF
    ctx->pc = 0x1d0d50u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
label_1d0d54:
    // 0x1d0d54: 0x28810280  slti        $at, $a0, 0x280
    ctx->pc = 0x1d0d54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)640) ? 1 : 0);
label_1d0d58:
    // 0x1d0d58: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1d0d5c:
    if (ctx->pc == 0x1D0D5Cu) {
        ctx->pc = 0x1D0D60u;
        goto label_1d0d60;
    }
    ctx->pc = 0x1D0D58u;
    {
        const bool branch_taken_0x1d0d58 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0d58) {
            ctx->pc = 0x1D0D64u;
            goto label_1d0d64;
        }
    }
    ctx->pc = 0x1D0D60u;
label_1d0d60:
    // 0x1d0d60: 0x2404027f  addiu       $a0, $zero, 0x27F
    ctx->pc = 0x1d0d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 639));
label_1d0d64:
    // 0x1d0d64: 0x8303c  dsll32      $a2, $t0, 0
    ctx->pc = 0x1d0d64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) << (32 + 0));
label_1d0d68:
    // 0x1d0d68: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x1d0d68u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_1d0d6c:
    // 0x1d0d6c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1d0d6cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_1d0d70:
    // 0x1d0d70: 0x24ea0008  addiu       $t2, $a3, 0x8
    ctx->pc = 0x1d0d70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_1d0d74:
    // 0x1d0d74: 0x63138  dsll        $a2, $a2, 4
    ctx->pc = 0x1d0d74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 4);
label_1d0d78:
    // 0x1d0d78: 0x93900  sll         $a3, $t1, 4
    ctx->pc = 0x1d0d78u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_1d0d7c:
    // 0x1d0d7c: 0x34c8000a  ori         $t0, $a2, 0xA
    ctx->pc = 0x1d0d7cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)10);
label_1d0d80:
    // 0x1d0d80: 0xa44a0078  sh          $t2, 0x78($v0)
    ctx->pc = 0x1d0d80u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 120), (uint16_t)GPR_U32(ctx, 10));
label_1d0d84:
    // 0x1d0d84: 0x9303c  dsll32      $a2, $t1, 0
    ctx->pc = 0x1d0d84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) << (32 + 0));
label_1d0d88:
    // 0x1d0d88: 0x24e90008  addiu       $t1, $a3, 0x8
    ctx->pc = 0x1d0d88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_1d0d8c:
    // 0x1d0d8c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1d0d8cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_1d0d90:
    // 0x1d0d90: 0xc3900  sll         $a3, $t4, 4
    ctx->pc = 0x1d0d90u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
label_1d0d94:
    // 0x1d0d94: 0x63638  dsll        $a2, $a2, 24
    ctx->pc = 0x1d0d94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 24);
label_1d0d98:
    // 0x1d0d98: 0x24eb0008  addiu       $t3, $a3, 0x8
    ctx->pc = 0x1d0d98u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_1d0d9c:
    // 0x1d0d9c: 0xa449007a  sh          $t1, 0x7A($v0)
    ctx->pc = 0x1d0d9cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 122), (uint16_t)GPR_U32(ctx, 9));
label_1d0da0:
    // 0x1d0da0: 0x2587ffff  addiu       $a3, $t4, -0x1
    ctx->pc = 0x1d0da0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
label_1d0da4:
    // 0x1d0da4: 0xa44b0090  sh          $t3, 0x90($v0)
    ctx->pc = 0x1d0da4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 11));
label_1d0da8:
    // 0x1d0da8: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x1d0da8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
label_1d0dac:
    // 0x1d0dac: 0xa4490092  sh          $t1, 0x92($v0)
    ctx->pc = 0x1d0dacu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 146), (uint16_t)GPR_U32(ctx, 9));
label_1d0db0:
    // 0x1d0db0: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x1d0db0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
label_1d0db4:
    // 0x1d0db4: 0xa44a00a8  sh          $t2, 0xA8($v0)
    ctx->pc = 0x1d0db4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 168), (uint16_t)GPR_U32(ctx, 10));
label_1d0db8:
    // 0x1d0db8: 0x73bb8  dsll        $a3, $a3, 14
    ctx->pc = 0x1d0db8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 14);
label_1d0dbc:
    // 0x1d0dbc: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x1d0dbcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
label_1d0dc0:
    // 0x1d0dc0: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1d0dc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_1d0dc4:
    // 0x1d0dc4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d0dc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0dc8:
    // 0x1d0dc8: 0x43900  sll         $a3, $a0, 4
    ctx->pc = 0x1d0dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1d0dcc:
    // 0x1d0dcc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1d0dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1d0dd0:
    // 0x1d0dd0: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x1d0dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_1d0dd4:
    // 0x1d0dd4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1d0dd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1d0dd8:
    // 0x1d0dd8: 0xa44700aa  sh          $a3, 0xAA($v0)
    ctx->pc = 0x1d0dd8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 170), (uint16_t)GPR_U32(ctx, 7));
label_1d0ddc:
    // 0x1d0ddc: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1d0ddcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_1d0de0:
    // 0x1d0de0: 0xa44b00c0  sh          $t3, 0xC0($v0)
    ctx->pc = 0x1d0de0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 192), (uint16_t)GPR_U32(ctx, 11));
label_1d0de4:
    // 0x1d0de4: 0x420bc  dsll32      $a0, $a0, 2
    ctx->pc = 0x1d0de4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 2));
label_1d0de8:
    // 0x1d0de8: 0xa44700c2  sh          $a3, 0xC2($v0)
    ctx->pc = 0x1d0de8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 194), (uint16_t)GPR_U32(ctx, 7));
label_1d0dec:
    // 0x1d0dec: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x1d0decu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
label_1d0df0:
    // 0x1d0df0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d0df0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0df4:
    // 0x1d0df4: 0xfc440040  sd          $a0, 0x40($v0)
    ctx->pc = 0x1d0df4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 64), GPR_U64(ctx, 4));
label_1d0df8:
    // 0x1d0df8: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1d0df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d0dfc:
    // 0x1d0dfc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1d0dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1d0e00:
    // 0x1d0e00: 0x2073021  addu        $a2, $s0, $a3
    ctx->pc = 0x1d0e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_1d0e04:
    // 0x1d0e04: 0x102082a  slt         $at, $t0, $v0
    ctx->pc = 0x1d0e04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d0e08:
    // 0x1d0e08: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1d0e0c:
    if (ctx->pc == 0x1D0E0Cu) {
        ctx->pc = 0x1D0E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E08u;
        // 0x1d0e0c: 0x24c60c00  addiu       $a2, $a2, 0xC00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0E10u;
        goto label_1d0e10;
    }
    ctx->pc = 0x1D0E08u;
    {
        const bool branch_taken_0x1d0e08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E08u;
        // 0x1d0e0c: 0x24c60c00  addiu       $a2, $a2, 0xC00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0e08) {
            ctx->pc = 0x1D0E18u;
            goto label_1d0e18;
        }
    }
    ctx->pc = 0x1D0E10u;
label_1d0e10:
    // 0x1d0e10: 0x10000002  b           . + 4 + (0x2 << 2)
label_1d0e14:
    if (ctx->pc == 0x1D0E14u) {
        ctx->pc = 0x1D0E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E10u;
        // 0x1d0e14: 0xa0c40073  sb          $a0, 0x73($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 115), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0E18u;
        goto label_1d0e18;
    }
    ctx->pc = 0x1D0E10u;
    {
        const bool branch_taken_0x1d0e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E10u;
        // 0x1d0e14: 0xa0c40073  sb          $a0, 0x73($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 115), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0e10) {
            ctx->pc = 0x1D0E1Cu;
            goto label_1d0e1c;
        }
    }
    ctx->pc = 0x1D0E18u;
label_1d0e18:
    // 0x1d0e18: 0xa0c00073  sb          $zero, 0x73($a2)
    ctx->pc = 0x1d0e18u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 115), (uint8_t)GPR_U32(ctx, 0));
label_1d0e1c:
    // 0x1d0e1c: 0x0  nop
    ctx->pc = 0x1d0e1cu;
    // NOP
label_1d0e20:
    // 0x1d0e20: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d0e20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d0e24:
    // 0x1d0e24: 0x29020008  slti        $v0, $t0, 0x8
    ctx->pc = 0x1d0e24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)8) ? 1 : 0);
label_1d0e28:
    // 0x1d0e28: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_1d0e2c:
    if (ctx->pc == 0x1D0E2Cu) {
        ctx->pc = 0x1D0E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E28u;
        // 0x1d0e2c: 0x24e700a0  addiu       $a3, $a3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0E30u;
        goto label_1d0e30;
    }
    ctx->pc = 0x1D0E28u;
    {
        const bool branch_taken_0x1d0e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E28u;
        // 0x1d0e2c: 0x24e700a0  addiu       $a3, $a3, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0e28) {
            ctx->pc = 0x1D0DFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0dfc;
        }
    }
    ctx->pc = 0x1D0E30u;
label_1d0e30:
    // 0x1d0e30: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
label_1d0e34:
    if (ctx->pc == 0x1D0E34u) {
        ctx->pc = 0x1D0E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E30u;
        // 0x1d0e34: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0E38u;
        goto label_1d0e38;
    }
    ctx->pc = 0x1D0E30u;
    {
        const bool branch_taken_0x1d0e30 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E30u;
        // 0x1d0e34: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0e30) {
            ctx->pc = 0x1D0E48u;
            goto label_1d0e48;
        }
    }
    ctx->pc = 0x1D0E38u;
label_1d0e38:
    // 0x1d0e38: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1d0e38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1d0e3c:
    // 0x1d0e3c: 0xc070e2c  jal         func_1C38B0
label_1d0e40:
    if (ctx->pc == 0x1D0E40u) {
        ctx->pc = 0x1D0E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E3Cu;
        // 0x1d0e40: 0x8c640014  lw          $a0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0E44u;
        goto label_1d0e44;
    }
    ctx->pc = 0x1D0E3Cu;
    SET_GPR_U32(ctx, 31, 0x1D0E44u);
    ctx->pc = 0x1D0E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E3Cu;
    // 0x1d0e40: 0x8c640014  lw          $a0, 0x14($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1D0E44u;
label_1d0e44:
    // 0x1d0e44: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d0e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1d0e48:
    // 0x1d0e48: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1d0e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_1d0e4c:
    // 0x1d0e4c: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1d0e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1d0e50:
    // 0x1d0e50: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x1d0e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_1d0e54:
    // 0x1d0e54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d0e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d0e58:
    // 0x1d0e58: 0x24060110  addiu       $a2, $zero, 0x110
    ctx->pc = 0x1d0e58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_1d0e5c:
    // 0x1d0e5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d0e5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0e60:
    // 0x1d0e60: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d0e60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0e64:
    // 0x1d0e64: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d0e64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0e68:
    // 0x1d0e68: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1d0e68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1d0e6c:
    // 0x1d0e6c: 0xc066c72  jal         func_19B1C8
label_1d0e70:
    if (ctx->pc == 0x1D0E70u) {
        ctx->pc = 0x1D0E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E6Cu;
        // 0x1d0e70: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0E74u;
        goto label_1d0e74;
    }
    ctx->pc = 0x1D0E6Cu;
    SET_GPR_U32(ctx, 31, 0x1D0E74u);
    ctx->pc = 0x1D0E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E6Cu;
    // 0x1d0e70: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1D0E6Cu, 0x1D0E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0E74u;
label_1d0e74:
    // 0x1d0e74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d0e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d0e78:
    // 0x1d0e78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d0e78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d0e7c:
    // 0x1d0e7c: 0x3e00008  jr          $ra
label_1d0e80:
    if (ctx->pc == 0x1D0E80u) {
        ctx->pc = 0x1D0E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E7Cu;
        // 0x1d0e80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0E84u;
        goto label_1d0e84;
    }
    ctx->pc = 0x1D0E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E7Cu;
        // 0x1d0e80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0E84u;
label_1d0e84:
    // 0x1d0e84: 0x0  nop
    ctx->pc = 0x1d0e84u;
    // NOP
label_1d0e88:
    // 0x1d0e88: 0x0  nop
    ctx->pc = 0x1d0e88u;
    // NOP
label_1d0e8c:
    // 0x1d0e8c: 0x0  nop
    ctx->pc = 0x1d0e8cu;
    // NOP
label_1d0e90:
    // 0x1d0e90: 0x24022230  addiu       $v0, $zero, 0x2230
    ctx->pc = 0x1d0e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8752));
label_1d0e94:
    // 0x1d0e94: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d0e94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d0e98:
    // 0x1d0e98: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x1d0e98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1d0e9c:
    // 0x1d0e9c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d0e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1d0ea0:
    // 0x1d0ea0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d0ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d0ea4:
    // 0x1d0ea4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d0ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d0ea8:
    // 0x1d0ea8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1d0ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_1d0eac:
    // 0x1d0eac: 0x2442c980  addiu       $v0, $v0, -0x3680
    ctx->pc = 0x1d0eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953344));
label_1d0eb0:
    // 0x1d0eb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d0eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d0eb4:
    // 0x1d0eb4: 0xc06ff68  jal         func_1BFDA0
label_1d0eb8:
    if (ctx->pc == 0x1D0EB8u) {
        ctx->pc = 0x1D0EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0EB4u;
        // 0x1d0eb8: 0x24512200  addiu       $s1, $v0, 0x2200 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 8704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0EBCu;
        goto label_1d0ebc;
    }
    ctx->pc = 0x1D0EB4u;
    SET_GPR_U32(ctx, 31, 0x1D0EBCu);
    ctx->pc = 0x1D0EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0EB4u;
    // 0x1d0eb8: 0x24512200  addiu       $s1, $v0, 0x2200 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 8704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFDA0u;
    { ctx->pc = 0x1bfda0; return; }
    ctx->pc = 0x1D0EBCu;
label_1d0ebc:
    // 0x1d0ebc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d0ebcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d0ec0:
    // 0x1d0ec0: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
label_1d0ec4:
    if (ctx->pc == 0x1D0EC4u) {
        ctx->pc = 0x1D0EC8u;
        goto label_1d0ec8;
    }
    ctx->pc = 0x1D0EC0u;
    {
        const bool branch_taken_0x1d0ec0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0ec0) {
            ctx->pc = 0x1D0EE0u;
            goto label_1d0ee0;
        }
    }
    ctx->pc = 0x1D0EC8u;
label_1d0ec8:
    // 0x1d0ec8: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1d0ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1d0ecc:
    // 0x1d0ecc: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1d0eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1d0ed0:
    // 0x1d0ed0: 0xae240018  sw          $a0, 0x18($s1)
    ctx->pc = 0x1d0ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 4));
label_1d0ed4:
    // 0x1d0ed4: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x1d0ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
label_1d0ed8:
    // 0x1d0ed8: 0x1000004b  b           . + 4 + (0x4B << 2)
label_1d0edc:
    if (ctx->pc == 0x1D0EDCu) {
        ctx->pc = 0x1D0EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0ED8u;
        // 0x1d0edc: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0EE0u;
        goto label_1d0ee0;
    }
    ctx->pc = 0x1D0ED8u;
    {
        const bool branch_taken_0x1d0ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0ED8u;
        // 0x1d0edc: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0ed8) {
            ctx->pc = 0x1D1008u;
            goto label_1d1008;
        }
    }
    ctx->pc = 0x1D0EE0u;
label_1d0ee0:
    // 0x1d0ee0: 0x9203023a  lbu         $v1, 0x23A($s0)
    ctx->pc = 0x1d0ee0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 570)));
label_1d0ee4:
    // 0x1d0ee4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d0ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d0ee8:
    // 0x1d0ee8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1d0eec:
    if (ctx->pc == 0x1D0EECu) {
        ctx->pc = 0x1D0EF0u;
        goto label_1d0ef0;
    }
    ctx->pc = 0x1D0EE8u;
    {
        const bool branch_taken_0x1d0ee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d0ee8) {
            ctx->pc = 0x1D0EF8u;
            goto label_1d0ef8;
        }
    }
    ctx->pc = 0x1D0EF0u;
label_1d0ef0:
    // 0x1d0ef0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d0ef4:
    if (ctx->pc == 0x1D0EF4u) {
        ctx->pc = 0x1D0EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0EF0u;
        // 0x1d0ef4: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0EF8u;
        goto label_1d0ef8;
    }
    ctx->pc = 0x1D0EF0u;
    {
        const bool branch_taken_0x1d0ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0EF0u;
        // 0x1d0ef4: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0ef0) {
            ctx->pc = 0x1D0F00u;
            goto label_1d0f00;
        }
    }
    ctx->pc = 0x1D0EF8u;
label_1d0ef8:
    // 0x1d0ef8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d0ef8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0efc:
    // 0x1d0efc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1d0efcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1d0f00:
    // 0x1d0f00: 0x92020242  lbu         $v0, 0x242($s0)
    ctx->pc = 0x1d0f00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 578)));
label_1d0f04:
    // 0x1d0f04: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x1d0f04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_1d0f08:
    // 0x1d0f08: 0x92020241  lbu         $v0, 0x241($s0)
    ctx->pc = 0x1d0f08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 577)));
label_1d0f0c:
    // 0x1d0f0c: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x1d0f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_1d0f10:
    // 0x1d0f10: 0x86020220  lh          $v0, 0x220($s0)
    ctx->pc = 0x1d0f10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 544)));
label_1d0f14:
    // 0x1d0f14: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1d0f14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d0f18:
    // 0x1d0f18: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1d0f1c:
    if (ctx->pc == 0x1D0F1Cu) {
        ctx->pc = 0x1D0F20u;
        goto label_1d0f20;
    }
    ctx->pc = 0x1D0F18u;
    {
        const bool branch_taken_0x1d0f18 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0f18) {
            ctx->pc = 0x1D0F28u;
            goto label_1d0f28;
        }
    }
    ctx->pc = 0x1D0F20u;
label_1d0f20:
    // 0x1d0f20: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d0f24:
    if (ctx->pc == 0x1D0F24u) {
        ctx->pc = 0x1D0F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0F20u;
        // 0x1d0f24: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0F28u;
        goto label_1d0f28;
    }
    ctx->pc = 0x1D0F20u;
    {
        const bool branch_taken_0x1d0f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0F20u;
        // 0x1d0f24: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0f20) {
            ctx->pc = 0x1D0F30u;
            goto label_1d0f30;
        }
    }
    ctx->pc = 0x1D0F28u;
label_1d0f28:
    // 0x1d0f28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d0f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d0f2c:
    // 0x1d0f2c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1d0f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_1d0f30:
    // 0x1d0f30: 0x8602021c  lh          $v0, 0x21C($s0)
    ctx->pc = 0x1d0f30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 540)));
label_1d0f34:
    // 0x1d0f34: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1d0f34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1d0f38:
    // 0x1d0f38: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x1d0f38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d0f3c:
    // 0x1d0f3c: 0x41280a  movz        $a1, $v0, $at
    ctx->pc = 0x1d0f3cu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_1d0f40:
    // 0x1d0f40: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x1d0f40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1d0f44:
    // 0x1d0f44: 0x1280a  movz        $a1, $zero, $at
    ctx->pc = 0x1d0f44u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_1d0f48:
    // 0x1d0f48: 0x92040233  lbu         $a0, 0x233($s0)
    ctx->pc = 0x1d0f48u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 563)));
label_1d0f4c:
    // 0x1d0f4c: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1d0f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1d0f50:
    // 0x1d0f50: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
label_1d0f54:
    if (ctx->pc == 0x1D0F54u) {
        ctx->pc = 0x1D0F58u;
        goto label_1d0f58;
    }
    ctx->pc = 0x1D0F50u;
    {
        const bool branch_taken_0x1d0f50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d0f50) {
            ctx->pc = 0x1D0F68u;
            goto label_1d0f68;
        }
    }
    ctx->pc = 0x1D0F58u;
label_1d0f58:
    // 0x1d0f58: 0x92030239  lbu         $v1, 0x239($s0)
    ctx->pc = 0x1d0f58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 569)));
label_1d0f5c:
    // 0x1d0f5c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1d0f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1d0f60:
    // 0x1d0f60: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_1d0f64:
    if (ctx->pc == 0x1D0F64u) {
        ctx->pc = 0x1D0F68u;
        goto label_1d0f68;
    }
    ctx->pc = 0x1D0F60u;
    {
        const bool branch_taken_0x1d0f60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d0f60) {
            ctx->pc = 0x1D0F84u;
            goto label_1d0f84;
        }
    }
    ctx->pc = 0x1D0F68u;
label_1d0f68:
    // 0x1d0f68: 0xae240018  sw          $a0, 0x18($s1)
    ctx->pc = 0x1d0f68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 4));
label_1d0f6c:
    // 0x1d0f6c: 0x92020239  lbu         $v0, 0x239($s0)
    ctx->pc = 0x1d0f6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 569)));
label_1d0f70:
    // 0x1d0f70: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x1d0f70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
label_1d0f74:
    // 0x1d0f74: 0x8602021e  lh          $v0, 0x21E($s0)
    ctx->pc = 0x1d0f74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 542)));
label_1d0f78:
    // 0x1d0f78: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1d0f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1d0f7c:
    // 0x1d0f7c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1d0f80:
    if (ctx->pc == 0x1D0F80u) {
        ctx->pc = 0x1D0F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0F7Cu;
        // 0x1d0f80: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0F84u;
        goto label_1d0f84;
    }
    ctx->pc = 0x1D0F7Cu;
    {
        const bool branch_taken_0x1d0f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0F7Cu;
        // 0x1d0f80: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0f7c) {
            ctx->pc = 0x1D0FA0u;
            goto label_1d0fa0;
        }
    }
    ctx->pc = 0x1D0F84u;
label_1d0f84:
    // 0x1d0f84: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1d0f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1d0f88:
    // 0x1d0f88: 0x10450005  beq         $v0, $a1, . + 4 + (0x5 << 2)
label_1d0f8c:
    if (ctx->pc == 0x1D0F8Cu) {
        ctx->pc = 0x1D0F90u;
        goto label_1d0f90;
    }
    ctx->pc = 0x1D0F88u;
    {
        const bool branch_taken_0x1d0f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1d0f88) {
            ctx->pc = 0x1D0FA0u;
            goto label_1d0fa0;
        }
    }
    ctx->pc = 0x1D0F90u;
label_1d0f90:
    // 0x1d0f90: 0x451823  subu        $v1, $v0, $a1
    ctx->pc = 0x1d0f90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1d0f94:
    // 0x1d0f94: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1d0f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1d0f98:
    // 0x1d0f98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d0f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d0f9c:
    // 0x1d0f9c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1d0f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_1d0fa0:
    // 0x1d0fa0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1d0fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1d0fa4:
    // 0x1d0fa4: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_1d0fa8:
    if (ctx->pc == 0x1D0FA8u) {
        ctx->pc = 0x1D0FACu;
        goto label_1d0fac;
    }
    ctx->pc = 0x1D0FA4u;
    {
        const bool branch_taken_0x1d0fa4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d0fa4) {
            ctx->pc = 0x1D0FB4u;
            goto label_1d0fb4;
        }
    }
    ctx->pc = 0x1D0FACu;
label_1d0fac:
    // 0x1d0fac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d0facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1d0fb0:
    // 0x1d0fb0: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1d0fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_1d0fb4:
    // 0x1d0fb4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1d0fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1d0fb8:
    // 0x1d0fb8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1d0fb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d0fbc:
    // 0x1d0fbc: 0x1100a  movz        $v0, $zero, $at
    ctx->pc = 0x1d0fbcu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1d0fc0:
    // 0x1d0fc0: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1d0fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_1d0fc4:
    // 0x1d0fc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d0fc8:
    // 0x1d0fc8: 0xc06ffcc  jal         func_1BFF30
label_1d0fcc:
    if (ctx->pc == 0x1D0FCCu) {
        ctx->pc = 0x1D0FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0FC8u;
        // 0x1d0fcc: 0xae25000c  sw          $a1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0FD0u;
        goto label_1d0fd0;
    }
    ctx->pc = 0x1D0FC8u;
    SET_GPR_U32(ctx, 31, 0x1D0FD0u);
    ctx->pc = 0x1D0FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0FC8u;
    // 0x1d0fcc: 0xae25000c  sw          $a1, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFF30u;
    { ctx->pc = 0x1bff30; return; }
    ctx->pc = 0x1D0FD0u;
label_1d0fd0:
    // 0x1d0fd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d0fd4:
    // 0x1d0fd4: 0xc06ffac  jal         func_1BFEB0
label_1d0fd8:
    if (ctx->pc == 0x1D0FD8u) {
        ctx->pc = 0x1D0FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0FD4u;
        // 0x1d0fd8: 0xae220028  sw          $v0, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0FDCu;
        goto label_1d0fdc;
    }
    ctx->pc = 0x1D0FD4u;
    SET_GPR_U32(ctx, 31, 0x1D0FDCu);
    ctx->pc = 0x1D0FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0FD4u;
    // 0x1d0fd8: 0xae220028  sw          $v0, 0x28($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFEB0u;
    { ctx->pc = 0x1bfeb0; return; }
    ctx->pc = 0x1D0FDCu;
label_1d0fdc:
    // 0x1d0fdc: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x1d0fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
label_1d0fe0:
    // 0x1d0fe0: 0x22fc2  srl         $a1, $v0, 31
    ctx->pc = 0x1d0fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_1d0fe4:
    // 0x1d0fe4: 0x3464851f  ori         $a0, $v1, 0x851F
    ctx->pc = 0x1d0fe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
label_1d0fe8:
    // 0x1d0fe8: 0x820018  mult        $zero, $a0, $v0
    ctx->pc = 0x1d0fe8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1d0fec:
    // 0x1d0fec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d0fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d0ff0:
    // 0x1d0ff0: 0x0  nop
    ctx->pc = 0x1d0ff0u;
    // NOP
label_1d0ff4:
    // 0x1d0ff4: 0x2010  mfhi        $a0
    ctx->pc = 0x1d0ff4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_1d0ff8:
    // 0x1d0ff8: 0x42143  sra         $a0, $a0, 5
    ctx->pc = 0x1d0ff8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 5));
label_1d0ffc:
    // 0x1d0ffc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1d0ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1d1000:
    // 0x1d1000: 0xae240020  sw          $a0, 0x20($s1)
    ctx->pc = 0x1d1000u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 4));
label_1d1004:
    // 0x1d1004: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1d1004u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1d1008:
    // 0x1d1008: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d1008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d100c:
    // 0x1d100c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d100cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d1010:
    // 0x1d1010: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d1010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d1014:
    // 0x1d1014: 0x3e00008  jr          $ra
label_1d1018:
    if (ctx->pc == 0x1D1018u) {
        ctx->pc = 0x1D1018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1014u;
        // 0x1d1018: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D101Cu;
        goto label_1d101c;
    }
    ctx->pc = 0x1D1014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1014u;
        // 0x1d1018: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D101Cu;
label_1d101c:
    // 0x1d101c: 0x0  nop
    ctx->pc = 0x1d101cu;
    // NOP
label_1d1020:
    // 0x1d1020: 0x3e00008  jr          $ra
label_1d1024:
    if (ctx->pc == 0x1D1024u) {
        ctx->pc = 0x1D1028u;
        goto label_1d1028;
    }
    ctx->pc = 0x1D1020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1028u;
label_1d1028:
    // 0x1d1028: 0x0  nop
    ctx->pc = 0x1d1028u;
    // NOP
label_1d102c:
    // 0x1d102c: 0x0  nop
    ctx->pc = 0x1d102cu;
    // NOP
label_1d1030:
    // 0x1d1030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d1030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1d1034:
    // 0x1d1034: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d1034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1d1038:
    // 0x1d1038: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d1038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d103c:
    // 0x1d103c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_1d1040:
    if (ctx->pc == 0x1D1040u) {
        ctx->pc = 0x1D1040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D103Cu;
        // 0x1d1040: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1044u;
        goto label_1d1044;
    }
    ctx->pc = 0x1D103Cu;
    {
        const bool branch_taken_0x1d103c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D103Cu;
        // 0x1d1040: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d103c) {
            ctx->pc = 0x1D107Cu;
            goto label_1d107c;
        }
    }
    ctx->pc = 0x1D1044u;
label_1d1044:
    // 0x1d1044: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d1044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1048:
    // 0x1d1048: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d1048u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d104c:
    // 0x1d104c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1d104cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_1d1050:
    // 0x1d1050: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d1050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d1054:
    // 0x1d1054: 0x2442c980  addiu       $v0, $v0, -0x3680
    ctx->pc = 0x1d1054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953344));
label_1d1058:
    // 0x1d1058: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d1058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d105c:
    // 0x1d105c: 0xc07442c  jal         func_1D10B0
label_1d1060:
    if (ctx->pc == 0x1D1060u) {
        ctx->pc = 0x1D1060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D105Cu;
        // 0x1d1060: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1064u;
        goto label_1d1064;
    }
    ctx->pc = 0x1D105Cu;
    SET_GPR_U32(ctx, 31, 0x1D1064u);
    ctx->pc = 0x1D1060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D105Cu;
    // 0x1d1060: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D10B0u;
    goto label_1d10b0;
    ctx->pc = 0x1D1064u;
label_1d1064:
    // 0x1d1064: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d1064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d1068:
    // 0x1d1068: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1d1068u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d106c:
    // 0x1d106c: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_1d1070:
    if (ctx->pc == 0x1D1070u) {
        ctx->pc = 0x1D1070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D106Cu;
        // 0x1d1070: 0x26312230  addiu       $s1, $s1, 0x2230 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1074u;
        goto label_1d1074;
    }
    ctx->pc = 0x1D106Cu;
    {
        const bool branch_taken_0x1d106c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D106Cu;
        // 0x1d1070: 0x26312230  addiu       $s1, $s1, 0x2230 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d106c) {
            ctx->pc = 0x1D104Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d104c;
        }
    }
    ctx->pc = 0x1D1074u;
label_1d1074:
    // 0x1d1074: 0x10000007  b           . + 4 + (0x7 << 2)
label_1d1078:
    if (ctx->pc == 0x1D1078u) {
        ctx->pc = 0x1D1078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1074u;
        // 0x1d1078: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D107Cu;
        goto label_1d107c;
    }
    ctx->pc = 0x1D1074u;
    {
        const bool branch_taken_0x1d1074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1074u;
        // 0x1d1078: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1074) {
            ctx->pc = 0x1D1094u;
            goto label_1d1094;
        }
    }
    ctx->pc = 0x1D107Cu;
label_1d107c:
    // 0x1d107c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1d107cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_1d1080:
    // 0x1d1080: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d1080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1084:
    // 0x1d1084: 0x2484c980  addiu       $a0, $a0, -0x3680
    ctx->pc = 0x1d1084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953344));
label_1d1088:
    // 0x1d1088: 0xc07442c  jal         func_1D10B0
label_1d108c:
    if (ctx->pc == 0x1D108Cu) {
        ctx->pc = 0x1D108Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1088u;
        // 0x1d108c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1090u;
        goto label_1d1090;
    }
    ctx->pc = 0x1D1088u;
    SET_GPR_U32(ctx, 31, 0x1D1090u);
    ctx->pc = 0x1D108Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1088u;
    // 0x1d108c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D10B0u;
    goto label_1d10b0;
    ctx->pc = 0x1D1090u;
label_1d1090:
    // 0x1d1090: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d1090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d1094:
    // 0x1d1094: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d1094u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d1098:
    // 0x1d1098: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d1098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d109c:
    // 0x1d109c: 0x3e00008  jr          $ra
label_1d10a0:
    if (ctx->pc == 0x1D10A0u) {
        ctx->pc = 0x1D10A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D109Cu;
        // 0x1d10a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D10A4u;
        goto label_1d10a4;
    }
    ctx->pc = 0x1D109Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D10A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D109Cu;
        // 0x1d10a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D109Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D10A4u;
label_1d10a4:
    // 0x1d10a4: 0x0  nop
    ctx->pc = 0x1d10a4u;
    // NOP
label_1d10a8:
    // 0x1d10a8: 0x0  nop
    ctx->pc = 0x1d10a8u;
    // NOP
label_1d10ac:
    // 0x1d10ac: 0x0  nop
    ctx->pc = 0x1d10acu;
    // NOP
label_1d10b0:
    // 0x1d10b0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1d10b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_1d10b4:
    // 0x1d10b4: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1d10b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1d10b8:
    // 0x1d10b8: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1d10b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_1d10bc:
    // 0x1d10bc: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1d10bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1d10c0:
    // 0x1d10c0: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x1d10c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
label_1d10c4:
    // 0x1d10c4: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x1d10c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_1d10c8:
    // 0x1d10c8: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x1d10c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_1d10cc:
    // 0x1d10cc: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x1d10ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_1d10d0:
    // 0x1d10d0: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1d10d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_1d10d4:
    // 0x1d10d4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1d10d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d10d8:
    // 0x1d10d8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1d10d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_1d10dc:
    // 0x1d10dc: 0x24050039  addiu       $a1, $zero, 0x39
    ctx->pc = 0x1d10dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_1d10e0:
    // 0x1d10e0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1d10e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_1d10e4:
    // 0x1d10e4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1d10e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d10e8:
    // 0x1d10e8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1d10e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1d10ec:
    // 0x1d10ec: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d10ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1d10f0:
    // 0x1d10f0: 0xac802200  sw          $zero, 0x2200($a0)
    ctx->pc = 0x1d10f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8704), GPR_U32(ctx, 0));
label_1d10f4:
    // 0x1d10f4: 0xac802204  sw          $zero, 0x2204($a0)
    ctx->pc = 0x1d10f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8708), GPR_U32(ctx, 0));
label_1d10f8:
    // 0x1d10f8: 0xafa4015c  sw          $a0, 0x15C($sp)
    ctx->pc = 0x1d10f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 4));
label_1d10fc:
    // 0x1d10fc: 0xac802208  sw          $zero, 0x2208($a0)
    ctx->pc = 0x1d10fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8712), GPR_U32(ctx, 0));
label_1d1100:
    // 0x1d1100: 0xac80220c  sw          $zero, 0x220C($a0)
    ctx->pc = 0x1d1100u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8716), GPR_U32(ctx, 0));
label_1d1104:
    // 0x1d1104: 0xac802210  sw          $zero, 0x2210($a0)
    ctx->pc = 0x1d1104u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8720), GPR_U32(ctx, 0));
label_1d1108:
    // 0x1d1108: 0xac852214  sw          $a1, 0x2214($a0)
    ctx->pc = 0x1d1108u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8724), GPR_U32(ctx, 5));
label_1d110c:
    // 0x1d110c: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x1d110cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_1d1110:
    // 0x1d1110: 0xac832218  sw          $v1, 0x2218($a0)
    ctx->pc = 0x1d1110u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8728), GPR_U32(ctx, 3));
label_1d1114:
    // 0x1d1114: 0xafa00140  sw          $zero, 0x140($sp)
    ctx->pc = 0x1d1114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 0));
label_1d1118:
    // 0x1d1118: 0xac82221c  sw          $v0, 0x221C($a0)
    ctx->pc = 0x1d1118u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8732), GPR_U32(ctx, 2));
label_1d111c:
    // 0x1d111c: 0xac802220  sw          $zero, 0x2220($a0)
    ctx->pc = 0x1d111cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8736), GPR_U32(ctx, 0));
label_1d1120:
    // 0x1d1120: 0x8fa3015c  lw          $v1, 0x15C($sp)
    ctx->pc = 0x1d1120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_1d1124:
    // 0x1d1124: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1d1124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1d1128:
    // 0x1d1128: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1d1128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d112c:
    // 0x1d112c: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x1d112cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_1d1130:
    // 0x1d1130: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1d1130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1d1134:
    // 0x1d1134: 0xc05e234  jal         func_1788D0
label_1d1138:
    if (ctx->pc == 0x1D1138u) {
        ctx->pc = 0x1D1138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1134u;
        // 0x1d1138: 0x2405010f  addiu       $a1, $zero, 0x10F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D113Cu;
        goto label_1d113c;
    }
    ctx->pc = 0x1D1134u;
    SET_GPR_U32(ctx, 31, 0x1D113Cu);
    ctx->pc = 0x1D1138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1134u;
    // 0x1d1138: 0x2405010f  addiu       $a1, $zero, 0x10F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1D1134u, 0x1D113Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D113Cu;
label_1d113c:
    // 0x1d113c: 0xc070834  jal         func_1C20D0
label_1d1140:
    if (ctx->pc == 0x1D1140u) {
        ctx->pc = 0x1D1140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D113Cu;
        // 0x1d1140: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1144u;
        goto label_1d1144;
    }
    ctx->pc = 0x1D113Cu;
    SET_GPR_U32(ctx, 31, 0x1D1144u);
    ctx->pc = 0x1D1140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D113Cu;
    // 0x1d1140: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1D1144u;
label_1d1144:
    // 0x1d1144: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d1144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d1148:
    // 0x1d1148: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d1148u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d114c:
    // 0x1d114c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d114cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1150:
    // 0x1d1150: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1d1150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1d1154:
    // 0x1d1154: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1d1154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1d1158:
    // 0x1d1158: 0x1280001b  beqz        $s4, . + 4 + (0x1B << 2)
label_1d115c:
    if (ctx->pc == 0x1D115Cu) {
        ctx->pc = 0x1D115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1158u;
        // 0x1d115c: 0x24520010  addiu       $s2, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1160u;
        goto label_1d1160;
    }
    ctx->pc = 0x1D1158u;
    {
        const bool branch_taken_0x1d1158 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D115Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1158u;
        // 0x1d115c: 0x24520010  addiu       $s2, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1158) {
            ctx->pc = 0x1D11C8u;
            goto label_1d11c8;
        }
    }
    ctx->pc = 0x1D1160u;
label_1d1160:
    // 0x1d1160: 0x240300b0  addiu       $v1, $zero, 0xB0
    ctx->pc = 0x1d1160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_1d1164:
    // 0x1d1164: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1d1164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1d1168:
    // 0x1d1168: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x1d1168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_1d116c:
    // 0x1d116c: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d116cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d1170:
    // 0x1d1170: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1d1170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1d1174:
    // 0x1d1174: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1d1174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1d1178:
    // 0x1d1178: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x1d1178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
label_1d117c:
    // 0x1d117c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d117cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d1180:
    // 0x1d1180: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1d1180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1d1184:
    // 0x1d1184: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d1184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d1188:
    // 0x1d1188: 0xffa00020  sd          $zero, 0x20($sp)
    ctx->pc = 0x1d1188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 0));
label_1d118c:
    // 0x1d118c: 0x1510c0  sll         $v0, $s5, 3
    ctx->pc = 0x1d118cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_1d1190:
    // 0x1d1190: 0xffa30028  sd          $v1, 0x28($sp)
    ctx->pc = 0x1d1190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 3));
label_1d1194:
    // 0x1d1194: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x1d1194u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1d1198:
    // 0x1d1198: 0x8c28ad84  lw          $t0, -0x527C($at)
    ctx->pc = 0x1d1198u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294946180)));
label_1d119c:
    // 0x1d119c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1d119cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1d11a0:
    // 0x1d11a0: 0x24470018  addiu       $a3, $v0, 0x18
    ctx->pc = 0x1d11a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_1d11a4:
    // 0x1d11a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d11a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d11a8:
    // 0x1d11a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d11a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d11ac:
    // 0x1d11ac: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1d11acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1d11b0:
    // 0x1d11b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d11b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d11b4:
    // 0x1d11b4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1d11b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d11b8:
    // 0x1d11b8: 0xc05ded8  jal         func_177B60
label_1d11bc:
    if (ctx->pc == 0x1D11BCu) {
        ctx->pc = 0x1D11BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D11B8u;
        // 0x1d11bc: 0x240b01a8  addiu       $t3, $zero, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D11C0u;
        goto label_1d11c0;
    }
    ctx->pc = 0x1D11B8u;
    SET_GPR_U32(ctx, 31, 0x1D11C0u);
    ctx->pc = 0x1D11BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D11B8u;
    // 0x1d11bc: 0x240b01a8  addiu       $t3, $zero, 0x1A8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B60u, 0x1D11B8u, 0x1D11C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D11C0u;
label_1d11c0:
    // 0x1d11c0: 0x10000016  b           . + 4 + (0x16 << 2)
label_1d11c4:
    if (ctx->pc == 0x1D11C4u) {
        ctx->pc = 0x1D11C8u;
        goto label_1d11c8;
    }
    ctx->pc = 0x1D11C0u;
    {
        const bool branch_taken_0x1d11c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d11c0) {
            ctx->pc = 0x1D121Cu;
            { ctx->pc = 0x1d121c; return; }
        }
    }
    ctx->pc = 0x1D11C8u;
label_1d11c8:
    // 0x1d11c8: 0x240200b0  addiu       $v0, $zero, 0xB0
    ctx->pc = 0x1d11c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_1d11cc:
    // 0x1d11cc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1d11ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1d11d0:
    // 0x1d11d0: 0x3c010029  lui         $at, 0x29
    ctx->pc = 0x1d11d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)41 << 16));
label_1d11d4:
    // 0x1d11d4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1d11d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1d11d8:
    // 0x1d11d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d11d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d11dc:
    // 0x1d11dc: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1d11dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1d11e0:
    // 0x1d11e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d11e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d11e4:
    // 0x1d11e4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1d11e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1d11e8:
    // 0x1d11e8: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x1d11e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1d11ec:
    // 0x1d11ec: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1d11ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_1d11f0:
    // 0x1d11f0: 0x24070019  addiu       $a3, $zero, 0x19
    ctx->pc = 0x1d11f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_1d11f4:
    // 0x1d11f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d11f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d11f8:
    // 0x1d11f8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d11f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d11fc:
    // 0x1d11fc: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1d11fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1d1200:
    // 0x1d1200: 0x240a000a  addiu       $t2, $zero, 0xA
    ctx->pc = 0x1d1200u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1d1204:
    // 0x1d1204: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d1204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1d1208u;
    return;
}

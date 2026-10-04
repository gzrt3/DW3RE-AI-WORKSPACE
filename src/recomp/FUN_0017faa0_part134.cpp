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

// Function: FUN_0017faa0
// Address: 0x17faa0 - 0x2bfb1c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017faa0_part134(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1c09b0u: goto label_1c09b0;
        case 0x1c09b4u: goto label_1c09b4;
        case 0x1c09b8u: goto label_1c09b8;
        case 0x1c09bcu: goto label_1c09bc;
        case 0x1c09c0u: goto label_1c09c0;
        case 0x1c09c4u: goto label_1c09c4;
        case 0x1c09c8u: goto label_1c09c8;
        case 0x1c09ccu: goto label_1c09cc;
        case 0x1c09d0u: goto label_1c09d0;
        case 0x1c09d4u: goto label_1c09d4;
        case 0x1c09d8u: goto label_1c09d8;
        case 0x1c09dcu: goto label_1c09dc;
        case 0x1c09e0u: goto label_1c09e0;
        case 0x1c09e4u: goto label_1c09e4;
        case 0x1c09e8u: goto label_1c09e8;
        case 0x1c09ecu: goto label_1c09ec;
        case 0x1c09f0u: goto label_1c09f0;
        case 0x1c09f4u: goto label_1c09f4;
        case 0x1c09f8u: goto label_1c09f8;
        case 0x1c09fcu: goto label_1c09fc;
        case 0x1c0a00u: goto label_1c0a00;
        case 0x1c0a04u: goto label_1c0a04;
        case 0x1c0a08u: goto label_1c0a08;
        case 0x1c0a0cu: goto label_1c0a0c;
        case 0x1c0a10u: goto label_1c0a10;
        case 0x1c0a14u: goto label_1c0a14;
        case 0x1c0a18u: goto label_1c0a18;
        case 0x1c0a1cu: goto label_1c0a1c;
        case 0x1c0a20u: goto label_1c0a20;
        case 0x1c0a24u: goto label_1c0a24;
        case 0x1c0a28u: goto label_1c0a28;
        case 0x1c0a2cu: goto label_1c0a2c;
        case 0x1c0a30u: goto label_1c0a30;
        case 0x1c0a34u: goto label_1c0a34;
        case 0x1c0a38u: goto label_1c0a38;
        case 0x1c0a3cu: goto label_1c0a3c;
        case 0x1c0a40u: goto label_1c0a40;
        case 0x1c0a44u: goto label_1c0a44;
        case 0x1c0a48u: goto label_1c0a48;
        case 0x1c0a4cu: goto label_1c0a4c;
        case 0x1c0a50u: goto label_1c0a50;
        case 0x1c0a54u: goto label_1c0a54;
        case 0x1c0a58u: goto label_1c0a58;
        case 0x1c0a5cu: goto label_1c0a5c;
        case 0x1c0a60u: goto label_1c0a60;
        case 0x1c0a64u: goto label_1c0a64;
        case 0x1c0a68u: goto label_1c0a68;
        case 0x1c0a6cu: goto label_1c0a6c;
        case 0x1c0a70u: goto label_1c0a70;
        case 0x1c0a74u: goto label_1c0a74;
        case 0x1c0a78u: goto label_1c0a78;
        case 0x1c0a7cu: goto label_1c0a7c;
        case 0x1c0a80u: goto label_1c0a80;
        case 0x1c0a84u: goto label_1c0a84;
        case 0x1c0a88u: goto label_1c0a88;
        case 0x1c0a8cu: goto label_1c0a8c;
        case 0x1c0a90u: goto label_1c0a90;
        case 0x1c0a94u: goto label_1c0a94;
        case 0x1c0a98u: goto label_1c0a98;
        case 0x1c0a9cu: goto label_1c0a9c;
        case 0x1c0aa0u: goto label_1c0aa0;
        case 0x1c0aa4u: goto label_1c0aa4;
        case 0x1c0aa8u: goto label_1c0aa8;
        case 0x1c0aacu: goto label_1c0aac;
        case 0x1c0ab0u: goto label_1c0ab0;
        case 0x1c0ab4u: goto label_1c0ab4;
        case 0x1c0ab8u: goto label_1c0ab8;
        case 0x1c0abcu: goto label_1c0abc;
        case 0x1c0ac0u: goto label_1c0ac0;
        case 0x1c0ac4u: goto label_1c0ac4;
        case 0x1c0ac8u: goto label_1c0ac8;
        case 0x1c0accu: goto label_1c0acc;
        case 0x1c0ad0u: goto label_1c0ad0;
        case 0x1c0ad4u: goto label_1c0ad4;
        case 0x1c0ad8u: goto label_1c0ad8;
        case 0x1c0adcu: goto label_1c0adc;
        case 0x1c0ae0u: goto label_1c0ae0;
        case 0x1c0ae4u: goto label_1c0ae4;
        case 0x1c0ae8u: goto label_1c0ae8;
        case 0x1c0aecu: goto label_1c0aec;
        case 0x1c0af0u: goto label_1c0af0;
        case 0x1c0af4u: goto label_1c0af4;
        case 0x1c0af8u: goto label_1c0af8;
        case 0x1c0afcu: goto label_1c0afc;
        case 0x1c0b00u: goto label_1c0b00;
        case 0x1c0b04u: goto label_1c0b04;
        case 0x1c0b08u: goto label_1c0b08;
        case 0x1c0b0cu: goto label_1c0b0c;
        case 0x1c0b10u: goto label_1c0b10;
        case 0x1c0b14u: goto label_1c0b14;
        case 0x1c0b18u: goto label_1c0b18;
        case 0x1c0b1cu: goto label_1c0b1c;
        case 0x1c0b20u: goto label_1c0b20;
        case 0x1c0b24u: goto label_1c0b24;
        case 0x1c0b28u: goto label_1c0b28;
        case 0x1c0b2cu: goto label_1c0b2c;
        case 0x1c0b30u: goto label_1c0b30;
        case 0x1c0b34u: goto label_1c0b34;
        case 0x1c0b38u: goto label_1c0b38;
        case 0x1c0b3cu: goto label_1c0b3c;
        case 0x1c0b40u: goto label_1c0b40;
        case 0x1c0b44u: goto label_1c0b44;
        case 0x1c0b48u: goto label_1c0b48;
        case 0x1c0b4cu: goto label_1c0b4c;
        case 0x1c0b50u: goto label_1c0b50;
        case 0x1c0b54u: goto label_1c0b54;
        case 0x1c0b58u: goto label_1c0b58;
        case 0x1c0b5cu: goto label_1c0b5c;
        case 0x1c0b60u: goto label_1c0b60;
        case 0x1c0b64u: goto label_1c0b64;
        case 0x1c0b68u: goto label_1c0b68;
        case 0x1c0b6cu: goto label_1c0b6c;
        case 0x1c0b70u: goto label_1c0b70;
        case 0x1c0b74u: goto label_1c0b74;
        case 0x1c0b78u: goto label_1c0b78;
        case 0x1c0b7cu: goto label_1c0b7c;
        case 0x1c0b80u: goto label_1c0b80;
        case 0x1c0b84u: goto label_1c0b84;
        case 0x1c0b88u: goto label_1c0b88;
        case 0x1c0b8cu: goto label_1c0b8c;
        case 0x1c0b90u: goto label_1c0b90;
        case 0x1c0b94u: goto label_1c0b94;
        case 0x1c0b98u: goto label_1c0b98;
        case 0x1c0b9cu: goto label_1c0b9c;
        case 0x1c0ba0u: goto label_1c0ba0;
        case 0x1c0ba4u: goto label_1c0ba4;
        case 0x1c0ba8u: goto label_1c0ba8;
        case 0x1c0bacu: goto label_1c0bac;
        case 0x1c0bb0u: goto label_1c0bb0;
        case 0x1c0bb4u: goto label_1c0bb4;
        case 0x1c0bb8u: goto label_1c0bb8;
        case 0x1c0bbcu: goto label_1c0bbc;
        case 0x1c0bc0u: goto label_1c0bc0;
        case 0x1c0bc4u: goto label_1c0bc4;
        case 0x1c0bc8u: goto label_1c0bc8;
        case 0x1c0bccu: goto label_1c0bcc;
        case 0x1c0bd0u: goto label_1c0bd0;
        case 0x1c0bd4u: goto label_1c0bd4;
        case 0x1c0bd8u: goto label_1c0bd8;
        case 0x1c0bdcu: goto label_1c0bdc;
        case 0x1c0be0u: goto label_1c0be0;
        case 0x1c0be4u: goto label_1c0be4;
        case 0x1c0be8u: goto label_1c0be8;
        case 0x1c0becu: goto label_1c0bec;
        case 0x1c0bf0u: goto label_1c0bf0;
        case 0x1c0bf4u: goto label_1c0bf4;
        case 0x1c0bf8u: goto label_1c0bf8;
        case 0x1c0bfcu: goto label_1c0bfc;
        case 0x1c0c00u: goto label_1c0c00;
        case 0x1c0c04u: goto label_1c0c04;
        case 0x1c0c08u: goto label_1c0c08;
        case 0x1c0c0cu: goto label_1c0c0c;
        case 0x1c0c10u: goto label_1c0c10;
        case 0x1c0c14u: goto label_1c0c14;
        case 0x1c0c18u: goto label_1c0c18;
        case 0x1c0c1cu: goto label_1c0c1c;
        case 0x1c0c20u: goto label_1c0c20;
        case 0x1c0c24u: goto label_1c0c24;
        case 0x1c0c28u: goto label_1c0c28;
        case 0x1c0c2cu: goto label_1c0c2c;
        case 0x1c0c30u: goto label_1c0c30;
        case 0x1c0c34u: goto label_1c0c34;
        case 0x1c0c38u: goto label_1c0c38;
        case 0x1c0c3cu: goto label_1c0c3c;
        case 0x1c0c40u: goto label_1c0c40;
        case 0x1c0c44u: goto label_1c0c44;
        case 0x1c0c48u: goto label_1c0c48;
        case 0x1c0c4cu: goto label_1c0c4c;
        case 0x1c0c50u: goto label_1c0c50;
        case 0x1c0c54u: goto label_1c0c54;
        case 0x1c0c58u: goto label_1c0c58;
        case 0x1c0c5cu: goto label_1c0c5c;
        case 0x1c0c60u: goto label_1c0c60;
        case 0x1c0c64u: goto label_1c0c64;
        case 0x1c0c68u: goto label_1c0c68;
        case 0x1c0c6cu: goto label_1c0c6c;
        case 0x1c0c70u: goto label_1c0c70;
        case 0x1c0c74u: goto label_1c0c74;
        case 0x1c0c78u: goto label_1c0c78;
        case 0x1c0c7cu: goto label_1c0c7c;
        case 0x1c0c80u: goto label_1c0c80;
        case 0x1c0c84u: goto label_1c0c84;
        case 0x1c0c88u: goto label_1c0c88;
        case 0x1c0c8cu: goto label_1c0c8c;
        case 0x1c0c90u: goto label_1c0c90;
        case 0x1c0c94u: goto label_1c0c94;
        case 0x1c0c98u: goto label_1c0c98;
        case 0x1c0c9cu: goto label_1c0c9c;
        case 0x1c0ca0u: goto label_1c0ca0;
        case 0x1c0ca4u: goto label_1c0ca4;
        case 0x1c0ca8u: goto label_1c0ca8;
        case 0x1c0cacu: goto label_1c0cac;
        case 0x1c0cb0u: goto label_1c0cb0;
        case 0x1c0cb4u: goto label_1c0cb4;
        case 0x1c0cb8u: goto label_1c0cb8;
        case 0x1c0cbcu: goto label_1c0cbc;
        case 0x1c0cc0u: goto label_1c0cc0;
        case 0x1c0cc4u: goto label_1c0cc4;
        case 0x1c0cc8u: goto label_1c0cc8;
        case 0x1c0cccu: goto label_1c0ccc;
        case 0x1c0cd0u: goto label_1c0cd0;
        case 0x1c0cd4u: goto label_1c0cd4;
        case 0x1c0cd8u: goto label_1c0cd8;
        case 0x1c0cdcu: goto label_1c0cdc;
        case 0x1c0ce0u: goto label_1c0ce0;
        case 0x1c0ce4u: goto label_1c0ce4;
        case 0x1c0ce8u: goto label_1c0ce8;
        case 0x1c0cecu: goto label_1c0cec;
        case 0x1c0cf0u: goto label_1c0cf0;
        case 0x1c0cf4u: goto label_1c0cf4;
        case 0x1c0cf8u: goto label_1c0cf8;
        case 0x1c0cfcu: goto label_1c0cfc;
        case 0x1c0d00u: goto label_1c0d00;
        case 0x1c0d04u: goto label_1c0d04;
        case 0x1c0d08u: goto label_1c0d08;
        case 0x1c0d0cu: goto label_1c0d0c;
        case 0x1c0d10u: goto label_1c0d10;
        case 0x1c0d14u: goto label_1c0d14;
        case 0x1c0d18u: goto label_1c0d18;
        case 0x1c0d1cu: goto label_1c0d1c;
        case 0x1c0d20u: goto label_1c0d20;
        case 0x1c0d24u: goto label_1c0d24;
        case 0x1c0d28u: goto label_1c0d28;
        case 0x1c0d2cu: goto label_1c0d2c;
        case 0x1c0d30u: goto label_1c0d30;
        case 0x1c0d34u: goto label_1c0d34;
        case 0x1c0d38u: goto label_1c0d38;
        case 0x1c0d3cu: goto label_1c0d3c;
        case 0x1c0d40u: goto label_1c0d40;
        case 0x1c0d44u: goto label_1c0d44;
        case 0x1c0d48u: goto label_1c0d48;
        case 0x1c0d4cu: goto label_1c0d4c;
        case 0x1c0d50u: goto label_1c0d50;
        case 0x1c0d54u: goto label_1c0d54;
        case 0x1c0d58u: goto label_1c0d58;
        case 0x1c0d5cu: goto label_1c0d5c;
        case 0x1c0d60u: goto label_1c0d60;
        case 0x1c0d64u: goto label_1c0d64;
        case 0x1c0d68u: goto label_1c0d68;
        case 0x1c0d6cu: goto label_1c0d6c;
        case 0x1c0d70u: goto label_1c0d70;
        case 0x1c0d74u: goto label_1c0d74;
        case 0x1c0d78u: goto label_1c0d78;
        case 0x1c0d7cu: goto label_1c0d7c;
        case 0x1c0d80u: goto label_1c0d80;
        case 0x1c0d84u: goto label_1c0d84;
        case 0x1c0d88u: goto label_1c0d88;
        case 0x1c0d8cu: goto label_1c0d8c;
        case 0x1c0d90u: goto label_1c0d90;
        case 0x1c0d94u: goto label_1c0d94;
        case 0x1c0d98u: goto label_1c0d98;
        case 0x1c0d9cu: goto label_1c0d9c;
        case 0x1c0da0u: goto label_1c0da0;
        case 0x1c0da4u: goto label_1c0da4;
        case 0x1c0da8u: goto label_1c0da8;
        case 0x1c0dacu: goto label_1c0dac;
        case 0x1c0db0u: goto label_1c0db0;
        case 0x1c0db4u: goto label_1c0db4;
        case 0x1c0db8u: goto label_1c0db8;
        case 0x1c0dbcu: goto label_1c0dbc;
        case 0x1c0dc0u: goto label_1c0dc0;
        case 0x1c0dc4u: goto label_1c0dc4;
        case 0x1c0dc8u: goto label_1c0dc8;
        case 0x1c0dccu: goto label_1c0dcc;
        case 0x1c0dd0u: goto label_1c0dd0;
        case 0x1c0dd4u: goto label_1c0dd4;
        case 0x1c0dd8u: goto label_1c0dd8;
        case 0x1c0ddcu: goto label_1c0ddc;
        case 0x1c0de0u: goto label_1c0de0;
        case 0x1c0de4u: goto label_1c0de4;
        case 0x1c0de8u: goto label_1c0de8;
        case 0x1c0decu: goto label_1c0dec;
        case 0x1c0df0u: goto label_1c0df0;
        case 0x1c0df4u: goto label_1c0df4;
        case 0x1c0df8u: goto label_1c0df8;
        case 0x1c0dfcu: goto label_1c0dfc;
        case 0x1c0e00u: goto label_1c0e00;
        case 0x1c0e04u: goto label_1c0e04;
        case 0x1c0e08u: goto label_1c0e08;
        case 0x1c0e0cu: goto label_1c0e0c;
        case 0x1c0e10u: goto label_1c0e10;
        case 0x1c0e14u: goto label_1c0e14;
        case 0x1c0e18u: goto label_1c0e18;
        case 0x1c0e1cu: goto label_1c0e1c;
        case 0x1c0e20u: goto label_1c0e20;
        case 0x1c0e24u: goto label_1c0e24;
        case 0x1c0e28u: goto label_1c0e28;
        case 0x1c0e2cu: goto label_1c0e2c;
        case 0x1c0e30u: goto label_1c0e30;
        case 0x1c0e34u: goto label_1c0e34;
        case 0x1c0e38u: goto label_1c0e38;
        case 0x1c0e3cu: goto label_1c0e3c;
        case 0x1c0e40u: goto label_1c0e40;
        case 0x1c0e44u: goto label_1c0e44;
        case 0x1c0e48u: goto label_1c0e48;
        case 0x1c0e4cu: goto label_1c0e4c;
        case 0x1c0e50u: goto label_1c0e50;
        case 0x1c0e54u: goto label_1c0e54;
        case 0x1c0e58u: goto label_1c0e58;
        case 0x1c0e5cu: goto label_1c0e5c;
        case 0x1c0e60u: goto label_1c0e60;
        case 0x1c0e64u: goto label_1c0e64;
        case 0x1c0e68u: goto label_1c0e68;
        case 0x1c0e6cu: goto label_1c0e6c;
        case 0x1c0e70u: goto label_1c0e70;
        case 0x1c0e74u: goto label_1c0e74;
        case 0x1c0e78u: goto label_1c0e78;
        case 0x1c0e7cu: goto label_1c0e7c;
        case 0x1c0e80u: goto label_1c0e80;
        case 0x1c0e84u: goto label_1c0e84;
        case 0x1c0e88u: goto label_1c0e88;
        case 0x1c0e8cu: goto label_1c0e8c;
        case 0x1c0e90u: goto label_1c0e90;
        case 0x1c0e94u: goto label_1c0e94;
        case 0x1c0e98u: goto label_1c0e98;
        case 0x1c0e9cu: goto label_1c0e9c;
        case 0x1c0ea0u: goto label_1c0ea0;
        case 0x1c0ea4u: goto label_1c0ea4;
        case 0x1c0ea8u: goto label_1c0ea8;
        case 0x1c0eacu: goto label_1c0eac;
        case 0x1c0eb0u: goto label_1c0eb0;
        case 0x1c0eb4u: goto label_1c0eb4;
        case 0x1c0eb8u: goto label_1c0eb8;
        case 0x1c0ebcu: goto label_1c0ebc;
        case 0x1c0ec0u: goto label_1c0ec0;
        case 0x1c0ec4u: goto label_1c0ec4;
        case 0x1c0ec8u: goto label_1c0ec8;
        case 0x1c0eccu: goto label_1c0ecc;
        case 0x1c0ed0u: goto label_1c0ed0;
        case 0x1c0ed4u: goto label_1c0ed4;
        case 0x1c0ed8u: goto label_1c0ed8;
        case 0x1c0edcu: goto label_1c0edc;
        case 0x1c0ee0u: goto label_1c0ee0;
        case 0x1c0ee4u: goto label_1c0ee4;
        case 0x1c0ee8u: goto label_1c0ee8;
        case 0x1c0eecu: goto label_1c0eec;
        case 0x1c0ef0u: goto label_1c0ef0;
        case 0x1c0ef4u: goto label_1c0ef4;
        case 0x1c0ef8u: goto label_1c0ef8;
        case 0x1c0efcu: goto label_1c0efc;
        case 0x1c0f00u: goto label_1c0f00;
        case 0x1c0f04u: goto label_1c0f04;
        case 0x1c0f08u: goto label_1c0f08;
        case 0x1c0f0cu: goto label_1c0f0c;
        case 0x1c0f10u: goto label_1c0f10;
        case 0x1c0f14u: goto label_1c0f14;
        case 0x1c0f18u: goto label_1c0f18;
        case 0x1c0f1cu: goto label_1c0f1c;
        case 0x1c0f20u: goto label_1c0f20;
        case 0x1c0f24u: goto label_1c0f24;
        case 0x1c0f28u: goto label_1c0f28;
        case 0x1c0f2cu: goto label_1c0f2c;
        case 0x1c0f30u: goto label_1c0f30;
        case 0x1c0f34u: goto label_1c0f34;
        case 0x1c0f38u: goto label_1c0f38;
        case 0x1c0f3cu: goto label_1c0f3c;
        case 0x1c0f40u: goto label_1c0f40;
        case 0x1c0f44u: goto label_1c0f44;
        case 0x1c0f48u: goto label_1c0f48;
        case 0x1c0f4cu: goto label_1c0f4c;
        case 0x1c0f50u: goto label_1c0f50;
        case 0x1c0f54u: goto label_1c0f54;
        case 0x1c0f58u: goto label_1c0f58;
        case 0x1c0f5cu: goto label_1c0f5c;
        case 0x1c0f60u: goto label_1c0f60;
        case 0x1c0f64u: goto label_1c0f64;
        case 0x1c0f68u: goto label_1c0f68;
        case 0x1c0f6cu: goto label_1c0f6c;
        case 0x1c0f70u: goto label_1c0f70;
        case 0x1c0f74u: goto label_1c0f74;
        case 0x1c0f78u: goto label_1c0f78;
        case 0x1c0f7cu: goto label_1c0f7c;
        case 0x1c0f80u: goto label_1c0f80;
        case 0x1c0f84u: goto label_1c0f84;
        case 0x1c0f88u: goto label_1c0f88;
        case 0x1c0f8cu: goto label_1c0f8c;
        case 0x1c0f90u: goto label_1c0f90;
        case 0x1c0f94u: goto label_1c0f94;
        case 0x1c0f98u: goto label_1c0f98;
        case 0x1c0f9cu: goto label_1c0f9c;
        case 0x1c0fa0u: goto label_1c0fa0;
        case 0x1c0fa4u: goto label_1c0fa4;
        case 0x1c0fa8u: goto label_1c0fa8;
        case 0x1c0facu: goto label_1c0fac;
        case 0x1c0fb0u: goto label_1c0fb0;
        case 0x1c0fb4u: goto label_1c0fb4;
        case 0x1c0fb8u: goto label_1c0fb8;
        case 0x1c0fbcu: goto label_1c0fbc;
        case 0x1c0fc0u: goto label_1c0fc0;
        case 0x1c0fc4u: goto label_1c0fc4;
        case 0x1c0fc8u: goto label_1c0fc8;
        case 0x1c0fccu: goto label_1c0fcc;
        case 0x1c0fd0u: goto label_1c0fd0;
        case 0x1c0fd4u: goto label_1c0fd4;
        case 0x1c0fd8u: goto label_1c0fd8;
        case 0x1c0fdcu: goto label_1c0fdc;
        case 0x1c0fe0u: goto label_1c0fe0;
        case 0x1c0fe4u: goto label_1c0fe4;
        case 0x1c0fe8u: goto label_1c0fe8;
        case 0x1c0fecu: goto label_1c0fec;
        case 0x1c0ff0u: goto label_1c0ff0;
        case 0x1c0ff4u: goto label_1c0ff4;
        case 0x1c0ff8u: goto label_1c0ff8;
        case 0x1c0ffcu: goto label_1c0ffc;
        case 0x1c1000u: goto label_1c1000;
        case 0x1c1004u: goto label_1c1004;
        case 0x1c1008u: goto label_1c1008;
        case 0x1c100cu: goto label_1c100c;
        case 0x1c1010u: goto label_1c1010;
        case 0x1c1014u: goto label_1c1014;
        case 0x1c1018u: goto label_1c1018;
        case 0x1c101cu: goto label_1c101c;
        case 0x1c1020u: goto label_1c1020;
        case 0x1c1024u: goto label_1c1024;
        case 0x1c1028u: goto label_1c1028;
        case 0x1c102cu: goto label_1c102c;
        case 0x1c1030u: goto label_1c1030;
        case 0x1c1034u: goto label_1c1034;
        case 0x1c1038u: goto label_1c1038;
        case 0x1c103cu: goto label_1c103c;
        case 0x1c1040u: goto label_1c1040;
        case 0x1c1044u: goto label_1c1044;
        case 0x1c1048u: goto label_1c1048;
        case 0x1c104cu: goto label_1c104c;
        case 0x1c1050u: goto label_1c1050;
        case 0x1c1054u: goto label_1c1054;
        case 0x1c1058u: goto label_1c1058;
        case 0x1c105cu: goto label_1c105c;
        case 0x1c1060u: goto label_1c1060;
        case 0x1c1064u: goto label_1c1064;
        case 0x1c1068u: goto label_1c1068;
        case 0x1c106cu: goto label_1c106c;
        case 0x1c1070u: goto label_1c1070;
        case 0x1c1074u: goto label_1c1074;
        case 0x1c1078u: goto label_1c1078;
        case 0x1c107cu: goto label_1c107c;
        case 0x1c1080u: goto label_1c1080;
        case 0x1c1084u: goto label_1c1084;
        case 0x1c1088u: goto label_1c1088;
        case 0x1c108cu: goto label_1c108c;
        case 0x1c1090u: goto label_1c1090;
        case 0x1c1094u: goto label_1c1094;
        case 0x1c1098u: goto label_1c1098;
        case 0x1c109cu: goto label_1c109c;
        case 0x1c10a0u: goto label_1c10a0;
        case 0x1c10a4u: goto label_1c10a4;
        case 0x1c10a8u: goto label_1c10a8;
        case 0x1c10acu: goto label_1c10ac;
        case 0x1c10b0u: goto label_1c10b0;
        case 0x1c10b4u: goto label_1c10b4;
        case 0x1c10b8u: goto label_1c10b8;
        case 0x1c10bcu: goto label_1c10bc;
        case 0x1c10c0u: goto label_1c10c0;
        case 0x1c10c4u: goto label_1c10c4;
        case 0x1c10c8u: goto label_1c10c8;
        case 0x1c10ccu: goto label_1c10cc;
        case 0x1c10d0u: goto label_1c10d0;
        case 0x1c10d4u: goto label_1c10d4;
        case 0x1c10d8u: goto label_1c10d8;
        case 0x1c10dcu: goto label_1c10dc;
        case 0x1c10e0u: goto label_1c10e0;
        case 0x1c10e4u: goto label_1c10e4;
        case 0x1c10e8u: goto label_1c10e8;
        case 0x1c10ecu: goto label_1c10ec;
        case 0x1c10f0u: goto label_1c10f0;
        case 0x1c10f4u: goto label_1c10f4;
        case 0x1c10f8u: goto label_1c10f8;
        case 0x1c10fcu: goto label_1c10fc;
        case 0x1c1100u: goto label_1c1100;
        case 0x1c1104u: goto label_1c1104;
        case 0x1c1108u: goto label_1c1108;
        case 0x1c110cu: goto label_1c110c;
        case 0x1c1110u: goto label_1c1110;
        case 0x1c1114u: goto label_1c1114;
        case 0x1c1118u: goto label_1c1118;
        case 0x1c111cu: goto label_1c111c;
        case 0x1c1120u: goto label_1c1120;
        case 0x1c1124u: goto label_1c1124;
        case 0x1c1128u: goto label_1c1128;
        case 0x1c112cu: goto label_1c112c;
        case 0x1c1130u: goto label_1c1130;
        case 0x1c1134u: goto label_1c1134;
        case 0x1c1138u: goto label_1c1138;
        case 0x1c113cu: goto label_1c113c;
        case 0x1c1140u: goto label_1c1140;
        case 0x1c1144u: goto label_1c1144;
        case 0x1c1148u: goto label_1c1148;
        case 0x1c114cu: goto label_1c114c;
        case 0x1c1150u: goto label_1c1150;
        case 0x1c1154u: goto label_1c1154;
        case 0x1c1158u: goto label_1c1158;
        case 0x1c115cu: goto label_1c115c;
        case 0x1c1160u: goto label_1c1160;
        case 0x1c1164u: goto label_1c1164;
        case 0x1c1168u: goto label_1c1168;
        case 0x1c116cu: goto label_1c116c;
        case 0x1c1170u: goto label_1c1170;
        case 0x1c1174u: goto label_1c1174;
        case 0x1c1178u: goto label_1c1178;
        case 0x1c117cu: goto label_1c117c;
        default: return;
    }

label_1c09b0:
    // 0x1c09b0: 0xa24201eb  sb          $v0, 0x1EB($s2)
    ctx->pc = 0x1c09b0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 491), (uint8_t)GPR_U32(ctx, 2));
label_1c09b4:
    // 0x1c09b4: 0xae4301ec  sw          $v1, 0x1EC($s2)
    ctx->pc = 0x1c09b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 492), GPR_U32(ctx, 3));
label_1c09b8:
    // 0x1c09b8: 0xa24501f8  sb          $a1, 0x1F8($s2)
    ctx->pc = 0x1c09b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 504), (uint8_t)GPR_U32(ctx, 5));
label_1c09bc:
    // 0x1c09bc: 0xa24601f9  sb          $a2, 0x1F9($s2)
    ctx->pc = 0x1c09bcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 505), (uint8_t)GPR_U32(ctx, 6));
label_1c09c0:
    // 0x1c09c0: 0xa24701fa  sb          $a3, 0x1FA($s2)
    ctx->pc = 0x1c09c0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 506), (uint8_t)GPR_U32(ctx, 7));
label_1c09c4:
    // 0x1c09c4: 0xa24001fb  sb          $zero, 0x1FB($s2)
    ctx->pc = 0x1c09c4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 507), (uint8_t)GPR_U32(ctx, 0));
label_1c09c8:
    // 0x1c09c8: 0xae4301fc  sw          $v1, 0x1FC($s2)
    ctx->pc = 0x1c09c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 508), GPR_U32(ctx, 3));
label_1c09cc:
    // 0x1c09cc: 0xa2450208  sb          $a1, 0x208($s2)
    ctx->pc = 0x1c09ccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 520), (uint8_t)GPR_U32(ctx, 5));
label_1c09d0:
    // 0x1c09d0: 0xa2460209  sb          $a2, 0x209($s2)
    ctx->pc = 0x1c09d0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 521), (uint8_t)GPR_U32(ctx, 6));
label_1c09d4:
    // 0x1c09d4: 0xa247020a  sb          $a3, 0x20A($s2)
    ctx->pc = 0x1c09d4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 522), (uint8_t)GPR_U32(ctx, 7));
label_1c09d8:
    // 0x1c09d8: 0xa240020b  sb          $zero, 0x20B($s2)
    ctx->pc = 0x1c09d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 523), (uint8_t)GPR_U32(ctx, 0));
label_1c09dc:
    // 0x1c09dc: 0x1000012a  b           . + 4 + (0x12A << 2)
label_1c09e0:
    if (ctx->pc == 0x1C09E0u) {
        ctx->pc = 0x1C09E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C09DCu;
        // 0x1c09e0: 0xae43020c  sw          $v1, 0x20C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 524), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C09E4u;
        goto label_1c09e4;
    }
    ctx->pc = 0x1C09DCu;
    {
        const bool branch_taken_0x1c09dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C09E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C09DCu;
        // 0x1c09e0: 0xae43020c  sw          $v1, 0x20C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 524), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c09dc) {
            ctx->pc = 0x1C0E88u;
            goto label_1c0e88;
        }
    }
    ctx->pc = 0x1C09E4u;
label_1c09e4:
    // 0x1c09e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c09e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c09e8:
    // 0x1c09e8: 0x14620094  bne         $v1, $v0, . + 4 + (0x94 << 2)
label_1c09ec:
    if (ctx->pc == 0x1C09ECu) {
        ctx->pc = 0x1C09ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C09E8u;
        // 0x1c09ec: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C09F0u;
        goto label_1c09f0;
    }
    ctx->pc = 0x1C09E8u;
    {
        const bool branch_taken_0x1c09e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C09ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C09E8u;
        // 0x1c09ec: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c09e8) {
            ctx->pc = 0x1C0C3Cu;
            goto label_1c0c3c;
        }
    }
    ctx->pc = 0x1C09F0u;
label_1c09f0:
    // 0x1c09f0: 0x8f8a8908  lw          $t2, -0x76F8($gp)
    ctx->pc = 0x1c09f0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936840)));
label_1c09f4:
    // 0x1c09f4: 0x29410008  slti        $at, $t2, 0x8
    ctx->pc = 0x1c09f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)8) ? 1 : 0);
label_1c09f8:
    // 0x1c09f8: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_1c09fc:
    if (ctx->pc == 0x1C09FCu) {
        ctx->pc = 0x1C09FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C09F8u;
        // 0x1c09fc: 0x24100060  addiu       $s0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0A00u;
        goto label_1c0a00;
    }
    ctx->pc = 0x1C09F8u;
    {
        const bool branch_taken_0x1c09f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C09FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C09F8u;
        // 0x1c09fc: 0x24100060  addiu       $s0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c09f8) {
            ctx->pc = 0x1C0A28u;
            goto label_1c0a28;
        }
    }
    ctx->pc = 0x1C0A00u;
label_1c0a00:
    // 0x1c0a00: 0xa1040  sll         $v0, $t2, 1
    ctx->pc = 0x1c0a00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_1c0a04:
    // 0x1c0a04: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1c0a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_1c0a08:
    // 0x1c0a08: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1c0a08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1c0a0c:
    // 0x1c0a0c: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
label_1c0a10:
    if (ctx->pc == 0x1C0A10u) {
        ctx->pc = 0x1C0A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A0Cu;
        // 0x1c0a10: 0x280c3  sra         $s0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0A14u;
        goto label_1c0a14;
    }
    ctx->pc = 0x1C0A0Cu;
    {
        const bool branch_taken_0x1c0a0c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1C0A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A0Cu;
        // 0x1c0a10: 0x280c3  sra         $s0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0a0c) {
            ctx->pc = 0x1C0A28u;
            goto label_1c0a28;
        }
    }
    ctx->pc = 0x1C0A14u;
label_1c0a14:
    // 0x1c0a14: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x1c0a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_1c0a18:
    // 0x1c0a18: 0x280c3  sra         $s0, $v0, 3
    ctx->pc = 0x1c0a18u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 3));
label_1c0a1c:
    // 0x1c0a1c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1c0a20:
    if (ctx->pc == 0x1C0A20u) {
        ctx->pc = 0x1C0A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A1Cu;
        // 0x1c0a20: 0xa2450078  sb          $a1, 0x78($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 120), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0A24u;
        goto label_1c0a24;
    }
    ctx->pc = 0x1C0A1Cu;
    {
        const bool branch_taken_0x1c0a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0A1Cu;
        // 0x1c0a20: 0xa2450078  sb          $a1, 0x78($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 120), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0a1c) {
            ctx->pc = 0x1C0A2Cu;
            goto label_1c0a2c;
        }
    }
    ctx->pc = 0x1C0A24u;
label_1c0a24:
    // 0x1c0a24: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x1c0a24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1c0a28:
    // 0x1c0a28: 0xa2450078  sb          $a1, 0x78($s2)
    ctx->pc = 0x1c0a28u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 120), (uint8_t)GPR_U32(ctx, 5));
label_1c0a2c:
    // 0x1c0a2c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1c0a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_1c0a30:
    // 0x1c0a30: 0xa2460079  sb          $a2, 0x79($s2)
    ctx->pc = 0x1c0a30u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 121), (uint8_t)GPR_U32(ctx, 6));
label_1c0a34:
    // 0x1c0a34: 0x3c0c3f80  lui         $t4, 0x3F80
    ctx->pc = 0x1c0a34u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)16256 << 16));
label_1c0a38:
    // 0x1c0a38: 0xa247007a  sb          $a3, 0x7A($s2)
    ctx->pc = 0x1c0a38u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 122), (uint8_t)GPR_U32(ctx, 7));
label_1c0a3c:
    // 0x1c0a3c: 0x240b0060  addiu       $t3, $zero, 0x60
    ctx->pc = 0x1c0a3cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1c0a40:
    // 0x1c0a40: 0xa240007b  sb          $zero, 0x7B($s2)
    ctx->pc = 0x1c0a40u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 123), (uint8_t)GPR_U32(ctx, 0));
label_1c0a44:
    // 0x1c0a44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c0a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0a48:
    // 0x1c0a48: 0xae4c007c  sw          $t4, 0x7C($s2)
    ctx->pc = 0x1c0a48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 12));
label_1c0a4c:
    // 0x1c0a4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c0a4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0a50:
    // 0x1c0a50: 0xa2450088  sb          $a1, 0x88($s2)
    ctx->pc = 0x1c0a50u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 136), (uint8_t)GPR_U32(ctx, 5));
label_1c0a54:
    // 0x1c0a54: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c0a54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0a58:
    // 0x1c0a58: 0xa2460089  sb          $a2, 0x89($s2)
    ctx->pc = 0x1c0a58u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 137), (uint8_t)GPR_U32(ctx, 6));
label_1c0a5c:
    // 0x1c0a5c: 0x240e0002  addiu       $t6, $zero, 0x2
    ctx->pc = 0x1c0a5cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c0a60:
    // 0x1c0a60: 0xa247008a  sb          $a3, 0x8A($s2)
    ctx->pc = 0x1c0a60u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 138), (uint8_t)GPR_U32(ctx, 7));
label_1c0a64:
    // 0x1c0a64: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1c0a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1c0a68:
    // 0x1c0a68: 0xa240008b  sb          $zero, 0x8B($s2)
    ctx->pc = 0x1c0a68u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 139), (uint8_t)GPR_U32(ctx, 0));
label_1c0a6c:
    // 0x1c0a6c: 0x24424ac0  addiu       $v0, $v0, 0x4AC0
    ctx->pc = 0x1c0a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19136));
label_1c0a70:
    // 0x1c0a70: 0xae4c008c  sw          $t4, 0x8C($s2)
    ctx->pc = 0x1c0a70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 12));
label_1c0a74:
    // 0x1c0a74: 0xa2450098  sb          $a1, 0x98($s2)
    ctx->pc = 0x1c0a74u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 152), (uint8_t)GPR_U32(ctx, 5));
label_1c0a78:
    // 0x1c0a78: 0xa2460099  sb          $a2, 0x99($s2)
    ctx->pc = 0x1c0a78u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 153), (uint8_t)GPR_U32(ctx, 6));
label_1c0a7c:
    // 0x1c0a7c: 0xa247009a  sb          $a3, 0x9A($s2)
    ctx->pc = 0x1c0a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 154), (uint8_t)GPR_U32(ctx, 7));
label_1c0a80:
    // 0x1c0a80: 0xa250009b  sb          $s0, 0x9B($s2)
    ctx->pc = 0x1c0a80u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 155), (uint8_t)GPR_U32(ctx, 16));
label_1c0a84:
    // 0x1c0a84: 0xae4c009c  sw          $t4, 0x9C($s2)
    ctx->pc = 0x1c0a84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 12));
label_1c0a88:
    // 0x1c0a88: 0xa24500a8  sb          $a1, 0xA8($s2)
    ctx->pc = 0x1c0a88u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 168), (uint8_t)GPR_U32(ctx, 5));
label_1c0a8c:
    // 0x1c0a8c: 0xa24600a9  sb          $a2, 0xA9($s2)
    ctx->pc = 0x1c0a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 169), (uint8_t)GPR_U32(ctx, 6));
label_1c0a90:
    // 0x1c0a90: 0xa24700aa  sb          $a3, 0xAA($s2)
    ctx->pc = 0x1c0a90u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 170), (uint8_t)GPR_U32(ctx, 7));
label_1c0a94:
    // 0x1c0a94: 0xa24b00ab  sb          $t3, 0xAB($s2)
    ctx->pc = 0x1c0a94u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 171), (uint8_t)GPR_U32(ctx, 11));
label_1c0a98:
    // 0x1c0a98: 0xae4c00ac  sw          $t4, 0xAC($s2)
    ctx->pc = 0x1c0a98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 12));
label_1c0a9c:
    // 0x1c0a9c: 0xa2450128  sb          $a1, 0x128($s2)
    ctx->pc = 0x1c0a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 296), (uint8_t)GPR_U32(ctx, 5));
label_1c0aa0:
    // 0x1c0aa0: 0xa2460129  sb          $a2, 0x129($s2)
    ctx->pc = 0x1c0aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 297), (uint8_t)GPR_U32(ctx, 6));
label_1c0aa4:
    // 0x1c0aa4: 0xa247012a  sb          $a3, 0x12A($s2)
    ctx->pc = 0x1c0aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 298), (uint8_t)GPR_U32(ctx, 7));
label_1c0aa8:
    // 0x1c0aa8: 0xa250012b  sb          $s0, 0x12B($s2)
    ctx->pc = 0x1c0aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 299), (uint8_t)GPR_U32(ctx, 16));
label_1c0aac:
    // 0x1c0aac: 0xae4c012c  sw          $t4, 0x12C($s2)
    ctx->pc = 0x1c0aacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 300), GPR_U32(ctx, 12));
label_1c0ab0:
    // 0x1c0ab0: 0xa2450148  sb          $a1, 0x148($s2)
    ctx->pc = 0x1c0ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 328), (uint8_t)GPR_U32(ctx, 5));
label_1c0ab4:
    // 0x1c0ab4: 0xa2460149  sb          $a2, 0x149($s2)
    ctx->pc = 0x1c0ab4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 329), (uint8_t)GPR_U32(ctx, 6));
label_1c0ab8:
    // 0x1c0ab8: 0xa247014a  sb          $a3, 0x14A($s2)
    ctx->pc = 0x1c0ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 330), (uint8_t)GPR_U32(ctx, 7));
label_1c0abc:
    // 0x1c0abc: 0xa250014b  sb          $s0, 0x14B($s2)
    ctx->pc = 0x1c0abcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 331), (uint8_t)GPR_U32(ctx, 16));
label_1c0ac0:
    // 0x1c0ac0: 0xae4c014c  sw          $t4, 0x14C($s2)
    ctx->pc = 0x1c0ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 332), GPR_U32(ctx, 12));
label_1c0ac4:
    // 0x1c0ac4: 0xa2450138  sb          $a1, 0x138($s2)
    ctx->pc = 0x1c0ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 312), (uint8_t)GPR_U32(ctx, 5));
label_1c0ac8:
    // 0x1c0ac8: 0xa2460139  sb          $a2, 0x139($s2)
    ctx->pc = 0x1c0ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 313), (uint8_t)GPR_U32(ctx, 6));
label_1c0acc:
    // 0x1c0acc: 0xa247013a  sb          $a3, 0x13A($s2)
    ctx->pc = 0x1c0accu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 314), (uint8_t)GPR_U32(ctx, 7));
label_1c0ad0:
    // 0x1c0ad0: 0xa24b013b  sb          $t3, 0x13B($s2)
    ctx->pc = 0x1c0ad0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 315), (uint8_t)GPR_U32(ctx, 11));
label_1c0ad4:
    // 0x1c0ad4: 0xae4c013c  sw          $t4, 0x13C($s2)
    ctx->pc = 0x1c0ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 316), GPR_U32(ctx, 12));
label_1c0ad8:
    // 0x1c0ad8: 0xa2450158  sb          $a1, 0x158($s2)
    ctx->pc = 0x1c0ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 344), (uint8_t)GPR_U32(ctx, 5));
label_1c0adc:
    // 0x1c0adc: 0xa2460159  sb          $a2, 0x159($s2)
    ctx->pc = 0x1c0adcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 345), (uint8_t)GPR_U32(ctx, 6));
label_1c0ae0:
    // 0x1c0ae0: 0xa247015a  sb          $a3, 0x15A($s2)
    ctx->pc = 0x1c0ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 346), (uint8_t)GPR_U32(ctx, 7));
label_1c0ae4:
    // 0x1c0ae4: 0xa24b015b  sb          $t3, 0x15B($s2)
    ctx->pc = 0x1c0ae4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 347), (uint8_t)GPR_U32(ctx, 11));
label_1c0ae8:
    // 0x1c0ae8: 0xae4c015c  sw          $t4, 0x15C($s2)
    ctx->pc = 0x1c0ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 348), GPR_U32(ctx, 12));
label_1c0aec:
    // 0x1c0aec: 0xa24501d8  sb          $a1, 0x1D8($s2)
    ctx->pc = 0x1c0aecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 472), (uint8_t)GPR_U32(ctx, 5));
label_1c0af0:
    // 0x1c0af0: 0xa24601d9  sb          $a2, 0x1D9($s2)
    ctx->pc = 0x1c0af0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 473), (uint8_t)GPR_U32(ctx, 6));
label_1c0af4:
    // 0x1c0af4: 0xa24701da  sb          $a3, 0x1DA($s2)
    ctx->pc = 0x1c0af4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 474), (uint8_t)GPR_U32(ctx, 7));
label_1c0af8:
    // 0x1c0af8: 0xa25001db  sb          $s0, 0x1DB($s2)
    ctx->pc = 0x1c0af8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 475), (uint8_t)GPR_U32(ctx, 16));
label_1c0afc:
    // 0x1c0afc: 0xae4c01dc  sw          $t4, 0x1DC($s2)
    ctx->pc = 0x1c0afcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 476), GPR_U32(ctx, 12));
label_1c0b00:
    // 0x1c0b00: 0xa24501e8  sb          $a1, 0x1E8($s2)
    ctx->pc = 0x1c0b00u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 488), (uint8_t)GPR_U32(ctx, 5));
label_1c0b04:
    // 0x1c0b04: 0xa24601e9  sb          $a2, 0x1E9($s2)
    ctx->pc = 0x1c0b04u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 489), (uint8_t)GPR_U32(ctx, 6));
label_1c0b08:
    // 0x1c0b08: 0xa24701ea  sb          $a3, 0x1EA($s2)
    ctx->pc = 0x1c0b08u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 490), (uint8_t)GPR_U32(ctx, 7));
label_1c0b0c:
    // 0x1c0b0c: 0xa24b01eb  sb          $t3, 0x1EB($s2)
    ctx->pc = 0x1c0b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 491), (uint8_t)GPR_U32(ctx, 11));
label_1c0b10:
    // 0x1c0b10: 0xae4c01ec  sw          $t4, 0x1EC($s2)
    ctx->pc = 0x1c0b10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 492), GPR_U32(ctx, 12));
label_1c0b14:
    // 0x1c0b14: 0xa24501f8  sb          $a1, 0x1F8($s2)
    ctx->pc = 0x1c0b14u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 504), (uint8_t)GPR_U32(ctx, 5));
label_1c0b18:
    // 0x1c0b18: 0xa24601f9  sb          $a2, 0x1F9($s2)
    ctx->pc = 0x1c0b18u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 505), (uint8_t)GPR_U32(ctx, 6));
label_1c0b1c:
    // 0x1c0b1c: 0xa24701fa  sb          $a3, 0x1FA($s2)
    ctx->pc = 0x1c0b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 506), (uint8_t)GPR_U32(ctx, 7));
label_1c0b20:
    // 0x1c0b20: 0xa24001fb  sb          $zero, 0x1FB($s2)
    ctx->pc = 0x1c0b20u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 507), (uint8_t)GPR_U32(ctx, 0));
label_1c0b24:
    // 0x1c0b24: 0xae4c01fc  sw          $t4, 0x1FC($s2)
    ctx->pc = 0x1c0b24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 508), GPR_U32(ctx, 12));
label_1c0b28:
    // 0x1c0b28: 0xa2450208  sb          $a1, 0x208($s2)
    ctx->pc = 0x1c0b28u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 520), (uint8_t)GPR_U32(ctx, 5));
label_1c0b2c:
    // 0x1c0b2c: 0xa2460209  sb          $a2, 0x209($s2)
    ctx->pc = 0x1c0b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 521), (uint8_t)GPR_U32(ctx, 6));
label_1c0b30:
    // 0x1c0b30: 0xa247020a  sb          $a3, 0x20A($s2)
    ctx->pc = 0x1c0b30u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 522), (uint8_t)GPR_U32(ctx, 7));
label_1c0b34:
    // 0x1c0b34: 0xa240020b  sb          $zero, 0x20B($s2)
    ctx->pc = 0x1c0b34u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 523), (uint8_t)GPR_U32(ctx, 0));
label_1c0b38:
    // 0x1c0b38: 0x10000038  b           . + 4 + (0x38 << 2)
label_1c0b3c:
    if (ctx->pc == 0x1C0B3Cu) {
        ctx->pc = 0x1C0B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0B38u;
        // 0x1c0b3c: 0xae4c020c  sw          $t4, 0x20C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 524), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0B40u;
        goto label_1c0b40;
    }
    ctx->pc = 0x1C0B38u;
    {
        const bool branch_taken_0x1c0b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0B38u;
        // 0x1c0b3c: 0xae4c020c  sw          $t4, 0x20C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 524), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0b38) {
            ctx->pc = 0x1C0C1Cu;
            goto label_1c0c1c;
        }
    }
    ctx->pc = 0x1C0B40u;
label_1c0b40:
    // 0x1c0b40: 0x2482821  addu        $a1, $s2, $t0
    ctx->pc = 0x1c0b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
label_1c0b44:
    // 0x1c0b44: 0x1443023  subu        $a2, $t2, $a0
    ctx->pc = 0x1c0b44u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_1c0b48:
    // 0x1c0b48: 0x4c10002  bgez        $a2, . + 4 + (0x2 << 2)
label_1c0b4c:
    if (ctx->pc == 0x1C0B4Cu) {
        ctx->pc = 0x1C0B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0B48u;
        // 0x1c0b4c: 0x24a50420  addiu       $a1, $a1, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0B50u;
        goto label_1c0b50;
    }
    ctx->pc = 0x1C0B48u;
    {
        const bool branch_taken_0x1c0b48 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1C0B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0B48u;
        // 0x1c0b4c: 0x24a50420  addiu       $a1, $a1, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0b48) {
            ctx->pc = 0x1C0B54u;
            goto label_1c0b54;
        }
    }
    ctx->pc = 0x1C0B50u;
label_1c0b50:
    // 0x1c0b50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c0b50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0b54:
    // 0x1c0b54: 0x28c10009  slti        $at, $a2, 0x9
    ctx->pc = 0x1c0b54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
label_1c0b58:
    // 0x1c0b58: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1c0b5c:
    if (ctx->pc == 0x1C0B5Cu) {
        ctx->pc = 0x1C0B60u;
        goto label_1c0b60;
    }
    ctx->pc = 0x1C0B58u;
    {
        const bool branch_taken_0x1c0b58 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0b58) {
            ctx->pc = 0x1C0B64u;
            goto label_1c0b64;
        }
    }
    ctx->pc = 0x1C0B60u;
label_1c0b60:
    // 0x1c0b60: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1c0b60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1c0b64:
    // 0x1c0b64: 0x666823  subu        $t5, $v1, $a2
    ctx->pc = 0x1c0b64u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1c0b68:
    // 0x1c0b68: 0x68100  sll         $s0, $a2, 4
    ctx->pc = 0x1c0b68u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1c0b6c:
    // 0x1c0b6c: 0x493021  addu        $a2, $v0, $t1
    ctx->pc = 0x1c0b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_1c0b70:
    // 0x1c0b70: 0xd60c0  sll         $t4, $t5, 3
    ctx->pc = 0x1c0b70u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
label_1c0b74:
    // 0x1c0b74: 0x8ccf0000  lw          $t7, 0x0($a2)
    ctx->pc = 0x1c0b74u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1c0b78:
    // 0x1c0b78: 0xd3940  sll         $a3, $t5, 5
    ctx->pc = 0x1c0b78u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 13), 5));
label_1c0b7c:
    // 0x1c0b7c: 0xd5900  sll         $t3, $t5, 4
    ctx->pc = 0x1c0b7cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
label_1c0b80:
    // 0x1c0b80: 0x1ec7821  addu        $t7, $t7, $t4
    ctx->pc = 0x1c0b80u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 12)));
label_1c0b84:
    // 0x1c0b84: 0xef7821  addu        $t7, $a3, $t7
    ctx->pc = 0x1c0b84u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 15)));
label_1c0b88:
    // 0x1c0b88: 0xf7900  sll         $t7, $t7, 4
    ctx->pc = 0x1c0b88u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
label_1c0b8c:
    // 0x1c0b8c: 0x25ef6c00  addiu       $t7, $t7, 0x6C00
    ctx->pc = 0x1c0b8cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 27648));
label_1c0b90:
    // 0x1c0b90: 0xa4af0028  sh          $t7, 0x28($a1)
    ctx->pc = 0x1c0b90u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 40), (uint16_t)GPR_U32(ctx, 15));
label_1c0b94:
    // 0x1c0b94: 0x8ccf0004  lw          $t7, 0x4($a2)
    ctx->pc = 0x1c0b94u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1c0b98:
    // 0x1c0b98: 0x1eb7821  addu        $t7, $t7, $t3
    ctx->pc = 0x1c0b98u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 11)));
label_1c0b9c:
    // 0x1c0b9c: 0xef7821  addu        $t7, $a3, $t7
    ctx->pc = 0x1c0b9cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 15)));
label_1c0ba0:
    // 0x1c0ba0: 0xf7900  sll         $t7, $t7, 4
    ctx->pc = 0x1c0ba0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
label_1c0ba4:
    // 0x1c0ba4: 0x25ef6c00  addiu       $t7, $t7, 0x6C00
    ctx->pc = 0x1c0ba4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 27648));
label_1c0ba8:
    // 0x1c0ba8: 0xa4af0040  sh          $t7, 0x40($a1)
    ctx->pc = 0x1c0ba8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 64), (uint16_t)GPR_U32(ctx, 15));
label_1c0bac:
    // 0x1c0bac: 0x84cf0000  lh          $t7, 0x0($a2)
    ctx->pc = 0x1c0bacu;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_1c0bb0:
    // 0x1c0bb0: 0x1eb5823  subu        $t3, $t7, $t3
    ctx->pc = 0x1c0bb0u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 11)));
label_1c0bb4:
    // 0x1c0bb4: 0xeb5821  addu        $t3, $a3, $t3
    ctx->pc = 0x1c0bb4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
label_1c0bb8:
    // 0x1c0bb8: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x1c0bb8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
label_1c0bbc:
    // 0x1c0bbc: 0x256b6c00  addiu       $t3, $t3, 0x6C00
    ctx->pc = 0x1c0bbcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 27648));
label_1c0bc0:
    // 0x1c0bc0: 0xa4ab0058  sh          $t3, 0x58($a1)
    ctx->pc = 0x1c0bc0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 88), (uint16_t)GPR_U32(ctx, 11));
label_1c0bc4:
    // 0x1c0bc4: 0x84c60004  lh          $a2, 0x4($a2)
    ctx->pc = 0x1c0bc4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
label_1c0bc8:
    // 0x1c0bc8: 0xcc3023  subu        $a2, $a2, $t4
    ctx->pc = 0x1c0bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
label_1c0bcc:
    // 0x1c0bcc: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x1c0bccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_1c0bd0:
    // 0x1c0bd0: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x1c0bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1c0bd4:
    // 0x1c0bd4: 0x24c66c00  addiu       $a2, $a2, 0x6C00
    ctx->pc = 0x1c0bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27648));
label_1c0bd8:
    // 0x1c0bd8: 0xa4a60070  sh          $a2, 0x70($a1)
    ctx->pc = 0x1c0bd8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 112), (uint16_t)GPR_U32(ctx, 6));
label_1c0bdc:
    // 0x1c0bdc: 0xa0b00063  sb          $s0, 0x63($a1)
    ctx->pc = 0x1c0bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 99), (uint8_t)GPR_U32(ctx, 16));
label_1c0be0:
    // 0x1c0be0: 0xa0b0004b  sb          $s0, 0x4B($a1)
    ctx->pc = 0x1c0be0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 75), (uint8_t)GPR_U32(ctx, 16));
label_1c0be4:
    // 0x1c0be4: 0xa0b00033  sb          $s0, 0x33($a1)
    ctx->pc = 0x1c0be4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 51), (uint8_t)GPR_U32(ctx, 16));
label_1c0be8:
    // 0x1c0be8: 0xa0b0001b  sb          $s0, 0x1B($a1)
    ctx->pc = 0x1c0be8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 27), (uint8_t)GPR_U32(ctx, 16));
label_1c0bec:
    // 0x1c0bec: 0x8f8588f4  lw          $a1, -0x770C($gp)
    ctx->pc = 0x1c0becu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936820)));
label_1c0bf0:
    // 0x1c0bf0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1c0bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1c0bf4:
    // 0x1c0bf4: 0x14850005  bne         $a0, $a1, . + 4 + (0x5 << 2)
label_1c0bf8:
    if (ctx->pc == 0x1C0BF8u) {
        ctx->pc = 0x1C0BFCu;
        goto label_1c0bfc;
    }
    ctx->pc = 0x1C0BF4u;
    {
        const bool branch_taken_0x1c0bf4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x1c0bf4) {
            ctx->pc = 0x1C0C0Cu;
            goto label_1c0c0c;
        }
    }
    ctx->pc = 0x1C0BFCu;
label_1c0bfc:
    // 0x1c0bfc: 0x1da00003  bgtz        $t5, . + 4 + (0x3 << 2)
label_1c0c00:
    if (ctx->pc == 0x1C0C00u) {
        ctx->pc = 0x1C0C04u;
        goto label_1c0c04;
    }
    ctx->pc = 0x1C0BFCu;
    {
        const bool branch_taken_0x1c0bfc = (GPR_S32(ctx, 13) > 0);
        if (branch_taken_0x1c0bfc) {
            ctx->pc = 0x1C0C0Cu;
            goto label_1c0c0c;
        }
    }
    ctx->pc = 0x1C0C04u;
label_1c0c04:
    // 0x1c0c04: 0xaf8e88f0  sw          $t6, -0x7710($gp)
    ctx->pc = 0x1c0c04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936816), GPR_U32(ctx, 14));
label_1c0c08:
    // 0x1c0c08: 0xaf808908  sw          $zero, -0x76F8($gp)
    ctx->pc = 0x1c0c08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 0));
label_1c0c0c:
    // 0x1c0c0c: 0x0  nop
    ctx->pc = 0x1c0c0cu;
    // NOP
label_1c0c10:
    // 0x1c0c10: 0x25080080  addiu       $t0, $t0, 0x80
    ctx->pc = 0x1c0c10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
label_1c0c14:
    // 0x1c0c14: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x1c0c14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
label_1c0c18:
    // 0x1c0c18: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1c0c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1c0c1c:
    // 0x1c0c1c: 0x0  nop
    ctx->pc = 0x1c0c1cu;
    // NOP
label_1c0c20:
    // 0x1c0c20: 0x8f8588f4  lw          $a1, -0x770C($gp)
    ctx->pc = 0x1c0c20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936820)));
label_1c0c24:
    // 0x1c0c24: 0x85282a  slt         $a1, $a0, $a1
    ctx->pc = 0x1c0c24u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1c0c28:
    // 0x1c0c28: 0x14a0ffc6  bnez        $a1, . + 4 + (-0x3A << 2)
label_1c0c2c:
    if (ctx->pc == 0x1C0C2Cu) {
        ctx->pc = 0x1C0C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C28u;
        // 0x1c0c2c: 0x2482821  addu        $a1, $s2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0C30u;
        goto label_1c0c30;
    }
    ctx->pc = 0x1C0C28u;
    {
        const bool branch_taken_0x1c0c28 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C28u;
        // 0x1c0c2c: 0x2482821  addu        $a1, $s2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0c28) {
            ctx->pc = 0x1C0B44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0b44;
        }
    }
    ctx->pc = 0x1C0C30u;
label_1c0c30:
    // 0x1c0c30: 0x10000095  b           . + 4 + (0x95 << 2)
label_1c0c34:
    if (ctx->pc == 0x1C0C34u) {
        ctx->pc = 0x1C0C38u;
        goto label_1c0c38;
    }
    ctx->pc = 0x1C0C30u;
    {
        const bool branch_taken_0x1c0c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0c30) {
            ctx->pc = 0x1C0E88u;
            goto label_1c0e88;
        }
    }
    ctx->pc = 0x1C0C38u;
label_1c0c38:
    // 0x1c0c38: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c0c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c0c3c:
    // 0x1c0c3c: 0x14620092  bne         $v1, $v0, . + 4 + (0x92 << 2)
label_1c0c40:
    if (ctx->pc == 0x1C0C40u) {
        ctx->pc = 0x1C0C44u;
        goto label_1c0c44;
    }
    ctx->pc = 0x1C0C3Cu;
    {
        const bool branch_taken_0x1c0c3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c0c3c) {
            ctx->pc = 0x1C0E88u;
            goto label_1c0e88;
        }
    }
    ctx->pc = 0x1C0C44u;
label_1c0c44:
    // 0x1c0c44: 0x8f8b8908  lw          $t3, -0x76F8($gp)
    ctx->pc = 0x1c0c44u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936840)));
label_1c0c48:
    // 0x1c0c48: 0x29610081  slti        $at, $t3, 0x81
    ctx->pc = 0x1c0c48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)129) ? 1 : 0);
label_1c0c4c:
    // 0x1c0c4c: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
label_1c0c50:
    if (ctx->pc == 0x1C0C50u) {
        ctx->pc = 0x1C0C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C4Cu;
        // 0x1c0c50: 0x24100060  addiu       $s0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0C54u;
        goto label_1c0c54;
    }
    ctx->pc = 0x1C0C4Cu;
    {
        const bool branch_taken_0x1c0c4c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C4Cu;
        // 0x1c0c50: 0x24100060  addiu       $s0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0c4c) {
            ctx->pc = 0x1C0C84u;
            goto label_1c0c84;
        }
    }
    ctx->pc = 0x1C0C54u;
label_1c0c54:
    // 0x1c0c54: 0x24020088  addiu       $v0, $zero, 0x88
    ctx->pc = 0x1c0c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
label_1c0c58:
    // 0x1c0c58: 0x4b1823  subu        $v1, $v0, $t3
    ctx->pc = 0x1c0c58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_1c0c5c:
    // 0x1c0c5c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1c0c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1c0c60:
    // 0x1c0c60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c0c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c0c64:
    // 0x1c0c64: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1c0c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1c0c68:
    // 0x1c0c68: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
label_1c0c6c:
    if (ctx->pc == 0x1C0C6Cu) {
        ctx->pc = 0x1C0C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C68u;
        // 0x1c0c6c: 0x280c3  sra         $s0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0C70u;
        goto label_1c0c70;
    }
    ctx->pc = 0x1C0C68u;
    {
        const bool branch_taken_0x1c0c68 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1C0C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C68u;
        // 0x1c0c6c: 0x280c3  sra         $s0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0c68) {
            ctx->pc = 0x1C0C84u;
            goto label_1c0c84;
        }
    }
    ctx->pc = 0x1C0C70u;
label_1c0c70:
    // 0x1c0c70: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x1c0c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_1c0c74:
    // 0x1c0c74: 0x280c3  sra         $s0, $v0, 3
    ctx->pc = 0x1c0c74u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 3));
label_1c0c78:
    // 0x1c0c78: 0x10000003  b           . + 4 + (0x3 << 2)
label_1c0c7c:
    if (ctx->pc == 0x1C0C7Cu) {
        ctx->pc = 0x1C0C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C78u;
        // 0x1c0c7c: 0xa2450078  sb          $a1, 0x78($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 120), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0C80u;
        goto label_1c0c80;
    }
    ctx->pc = 0x1C0C78u;
    {
        const bool branch_taken_0x1c0c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0C78u;
        // 0x1c0c7c: 0xa2450078  sb          $a1, 0x78($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 120), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0c78) {
            ctx->pc = 0x1C0C88u;
            goto label_1c0c88;
        }
    }
    ctx->pc = 0x1C0C80u;
label_1c0c80:
    // 0x1c0c80: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x1c0c80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1c0c84:
    // 0x1c0c84: 0xa2450078  sb          $a1, 0x78($s2)
    ctx->pc = 0x1c0c84u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 120), (uint8_t)GPR_U32(ctx, 5));
label_1c0c88:
    // 0x1c0c88: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1c0c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_1c0c8c:
    // 0x1c0c8c: 0xa2460079  sb          $a2, 0x79($s2)
    ctx->pc = 0x1c0c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 121), (uint8_t)GPR_U32(ctx, 6));
label_1c0c90:
    // 0x1c0c90: 0x3c0a3f80  lui         $t2, 0x3F80
    ctx->pc = 0x1c0c90u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16256 << 16));
label_1c0c94:
    // 0x1c0c94: 0xa247007a  sb          $a3, 0x7A($s2)
    ctx->pc = 0x1c0c94u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 122), (uint8_t)GPR_U32(ctx, 7));
label_1c0c98:
    // 0x1c0c98: 0x24090060  addiu       $t1, $zero, 0x60
    ctx->pc = 0x1c0c98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1c0c9c:
    // 0x1c0c9c: 0xa240007b  sb          $zero, 0x7B($s2)
    ctx->pc = 0x1c0c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 123), (uint8_t)GPR_U32(ctx, 0));
label_1c0ca0:
    // 0x1c0ca0: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1c0ca0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0ca4:
    // 0x1c0ca4: 0xae4a007c  sw          $t2, 0x7C($s2)
    ctx->pc = 0x1c0ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 10));
label_1c0ca8:
    // 0x1c0ca8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c0ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0cac:
    // 0x1c0cac: 0xa2450088  sb          $a1, 0x88($s2)
    ctx->pc = 0x1c0cacu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 136), (uint8_t)GPR_U32(ctx, 5));
label_1c0cb0:
    // 0x1c0cb0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c0cb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0cb4:
    // 0x1c0cb4: 0xa2460089  sb          $a2, 0x89($s2)
    ctx->pc = 0x1c0cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 137), (uint8_t)GPR_U32(ctx, 6));
label_1c0cb8:
    // 0x1c0cb8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1c0cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1c0cbc:
    // 0x1c0cbc: 0xa247008a  sb          $a3, 0x8A($s2)
    ctx->pc = 0x1c0cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 138), (uint8_t)GPR_U32(ctx, 7));
label_1c0cc0:
    // 0x1c0cc0: 0x24424ac0  addiu       $v0, $v0, 0x4AC0
    ctx->pc = 0x1c0cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19136));
label_1c0cc4:
    // 0x1c0cc4: 0xa240008b  sb          $zero, 0x8B($s2)
    ctx->pc = 0x1c0cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 139), (uint8_t)GPR_U32(ctx, 0));
label_1c0cc8:
    // 0x1c0cc8: 0xae4a008c  sw          $t2, 0x8C($s2)
    ctx->pc = 0x1c0cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 10));
label_1c0ccc:
    // 0x1c0ccc: 0xa2450098  sb          $a1, 0x98($s2)
    ctx->pc = 0x1c0cccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 152), (uint8_t)GPR_U32(ctx, 5));
label_1c0cd0:
    // 0x1c0cd0: 0xa2460099  sb          $a2, 0x99($s2)
    ctx->pc = 0x1c0cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 153), (uint8_t)GPR_U32(ctx, 6));
label_1c0cd4:
    // 0x1c0cd4: 0xa247009a  sb          $a3, 0x9A($s2)
    ctx->pc = 0x1c0cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 154), (uint8_t)GPR_U32(ctx, 7));
label_1c0cd8:
    // 0x1c0cd8: 0xa249009b  sb          $t1, 0x9B($s2)
    ctx->pc = 0x1c0cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 155), (uint8_t)GPR_U32(ctx, 9));
label_1c0cdc:
    // 0x1c0cdc: 0xae4a009c  sw          $t2, 0x9C($s2)
    ctx->pc = 0x1c0cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 10));
label_1c0ce0:
    // 0x1c0ce0: 0xa24500a8  sb          $a1, 0xA8($s2)
    ctx->pc = 0x1c0ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 168), (uint8_t)GPR_U32(ctx, 5));
label_1c0ce4:
    // 0x1c0ce4: 0xa24600a9  sb          $a2, 0xA9($s2)
    ctx->pc = 0x1c0ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 169), (uint8_t)GPR_U32(ctx, 6));
label_1c0ce8:
    // 0x1c0ce8: 0xa24700aa  sb          $a3, 0xAA($s2)
    ctx->pc = 0x1c0ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 170), (uint8_t)GPR_U32(ctx, 7));
label_1c0cec:
    // 0x1c0cec: 0xa25000ab  sb          $s0, 0xAB($s2)
    ctx->pc = 0x1c0cecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 171), (uint8_t)GPR_U32(ctx, 16));
label_1c0cf0:
    // 0x1c0cf0: 0xae4a00ac  sw          $t2, 0xAC($s2)
    ctx->pc = 0x1c0cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 10));
label_1c0cf4:
    // 0x1c0cf4: 0xa2450128  sb          $a1, 0x128($s2)
    ctx->pc = 0x1c0cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 296), (uint8_t)GPR_U32(ctx, 5));
label_1c0cf8:
    // 0x1c0cf8: 0xa2460129  sb          $a2, 0x129($s2)
    ctx->pc = 0x1c0cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 297), (uint8_t)GPR_U32(ctx, 6));
label_1c0cfc:
    // 0x1c0cfc: 0xa247012a  sb          $a3, 0x12A($s2)
    ctx->pc = 0x1c0cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 298), (uint8_t)GPR_U32(ctx, 7));
label_1c0d00:
    // 0x1c0d00: 0xa249012b  sb          $t1, 0x12B($s2)
    ctx->pc = 0x1c0d00u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 299), (uint8_t)GPR_U32(ctx, 9));
label_1c0d04:
    // 0x1c0d04: 0xae4a012c  sw          $t2, 0x12C($s2)
    ctx->pc = 0x1c0d04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 300), GPR_U32(ctx, 10));
label_1c0d08:
    // 0x1c0d08: 0xa2450148  sb          $a1, 0x148($s2)
    ctx->pc = 0x1c0d08u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 328), (uint8_t)GPR_U32(ctx, 5));
label_1c0d0c:
    // 0x1c0d0c: 0xa2460149  sb          $a2, 0x149($s2)
    ctx->pc = 0x1c0d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 329), (uint8_t)GPR_U32(ctx, 6));
label_1c0d10:
    // 0x1c0d10: 0xa247014a  sb          $a3, 0x14A($s2)
    ctx->pc = 0x1c0d10u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 330), (uint8_t)GPR_U32(ctx, 7));
label_1c0d14:
    // 0x1c0d14: 0xa249014b  sb          $t1, 0x14B($s2)
    ctx->pc = 0x1c0d14u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 331), (uint8_t)GPR_U32(ctx, 9));
label_1c0d18:
    // 0x1c0d18: 0xae4a014c  sw          $t2, 0x14C($s2)
    ctx->pc = 0x1c0d18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 332), GPR_U32(ctx, 10));
label_1c0d1c:
    // 0x1c0d1c: 0xa2450138  sb          $a1, 0x138($s2)
    ctx->pc = 0x1c0d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 312), (uint8_t)GPR_U32(ctx, 5));
label_1c0d20:
    // 0x1c0d20: 0xa2460139  sb          $a2, 0x139($s2)
    ctx->pc = 0x1c0d20u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 313), (uint8_t)GPR_U32(ctx, 6));
label_1c0d24:
    // 0x1c0d24: 0xa247013a  sb          $a3, 0x13A($s2)
    ctx->pc = 0x1c0d24u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 314), (uint8_t)GPR_U32(ctx, 7));
label_1c0d28:
    // 0x1c0d28: 0xa250013b  sb          $s0, 0x13B($s2)
    ctx->pc = 0x1c0d28u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 315), (uint8_t)GPR_U32(ctx, 16));
label_1c0d2c:
    // 0x1c0d2c: 0xae4a013c  sw          $t2, 0x13C($s2)
    ctx->pc = 0x1c0d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 316), GPR_U32(ctx, 10));
label_1c0d30:
    // 0x1c0d30: 0xa2450158  sb          $a1, 0x158($s2)
    ctx->pc = 0x1c0d30u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 344), (uint8_t)GPR_U32(ctx, 5));
label_1c0d34:
    // 0x1c0d34: 0xa2460159  sb          $a2, 0x159($s2)
    ctx->pc = 0x1c0d34u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 345), (uint8_t)GPR_U32(ctx, 6));
label_1c0d38:
    // 0x1c0d38: 0xa247015a  sb          $a3, 0x15A($s2)
    ctx->pc = 0x1c0d38u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 346), (uint8_t)GPR_U32(ctx, 7));
label_1c0d3c:
    // 0x1c0d3c: 0xa250015b  sb          $s0, 0x15B($s2)
    ctx->pc = 0x1c0d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 347), (uint8_t)GPR_U32(ctx, 16));
label_1c0d40:
    // 0x1c0d40: 0xae4a015c  sw          $t2, 0x15C($s2)
    ctx->pc = 0x1c0d40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 348), GPR_U32(ctx, 10));
label_1c0d44:
    // 0x1c0d44: 0xa24501d8  sb          $a1, 0x1D8($s2)
    ctx->pc = 0x1c0d44u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 472), (uint8_t)GPR_U32(ctx, 5));
label_1c0d48:
    // 0x1c0d48: 0xa24601d9  sb          $a2, 0x1D9($s2)
    ctx->pc = 0x1c0d48u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 473), (uint8_t)GPR_U32(ctx, 6));
label_1c0d4c:
    // 0x1c0d4c: 0xa24701da  sb          $a3, 0x1DA($s2)
    ctx->pc = 0x1c0d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 474), (uint8_t)GPR_U32(ctx, 7));
label_1c0d50:
    // 0x1c0d50: 0xa24901db  sb          $t1, 0x1DB($s2)
    ctx->pc = 0x1c0d50u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 475), (uint8_t)GPR_U32(ctx, 9));
label_1c0d54:
    // 0x1c0d54: 0xae4a01dc  sw          $t2, 0x1DC($s2)
    ctx->pc = 0x1c0d54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 476), GPR_U32(ctx, 10));
label_1c0d58:
    // 0x1c0d58: 0xa24501e8  sb          $a1, 0x1E8($s2)
    ctx->pc = 0x1c0d58u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 488), (uint8_t)GPR_U32(ctx, 5));
label_1c0d5c:
    // 0x1c0d5c: 0xa24601e9  sb          $a2, 0x1E9($s2)
    ctx->pc = 0x1c0d5cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 489), (uint8_t)GPR_U32(ctx, 6));
label_1c0d60:
    // 0x1c0d60: 0xa24701ea  sb          $a3, 0x1EA($s2)
    ctx->pc = 0x1c0d60u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 490), (uint8_t)GPR_U32(ctx, 7));
label_1c0d64:
    // 0x1c0d64: 0xa25001eb  sb          $s0, 0x1EB($s2)
    ctx->pc = 0x1c0d64u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 491), (uint8_t)GPR_U32(ctx, 16));
label_1c0d68:
    // 0x1c0d68: 0xae4a01ec  sw          $t2, 0x1EC($s2)
    ctx->pc = 0x1c0d68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 492), GPR_U32(ctx, 10));
label_1c0d6c:
    // 0x1c0d6c: 0xa24501f8  sb          $a1, 0x1F8($s2)
    ctx->pc = 0x1c0d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 504), (uint8_t)GPR_U32(ctx, 5));
label_1c0d70:
    // 0x1c0d70: 0xa24601f9  sb          $a2, 0x1F9($s2)
    ctx->pc = 0x1c0d70u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 505), (uint8_t)GPR_U32(ctx, 6));
label_1c0d74:
    // 0x1c0d74: 0xa24701fa  sb          $a3, 0x1FA($s2)
    ctx->pc = 0x1c0d74u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 506), (uint8_t)GPR_U32(ctx, 7));
label_1c0d78:
    // 0x1c0d78: 0xa24001fb  sb          $zero, 0x1FB($s2)
    ctx->pc = 0x1c0d78u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 507), (uint8_t)GPR_U32(ctx, 0));
label_1c0d7c:
    // 0x1c0d7c: 0xae4a01fc  sw          $t2, 0x1FC($s2)
    ctx->pc = 0x1c0d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 508), GPR_U32(ctx, 10));
label_1c0d80:
    // 0x1c0d80: 0xa2450208  sb          $a1, 0x208($s2)
    ctx->pc = 0x1c0d80u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 520), (uint8_t)GPR_U32(ctx, 5));
label_1c0d84:
    // 0x1c0d84: 0xa2460209  sb          $a2, 0x209($s2)
    ctx->pc = 0x1c0d84u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 521), (uint8_t)GPR_U32(ctx, 6));
label_1c0d88:
    // 0x1c0d88: 0xa247020a  sb          $a3, 0x20A($s2)
    ctx->pc = 0x1c0d88u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 522), (uint8_t)GPR_U32(ctx, 7));
label_1c0d8c:
    // 0x1c0d8c: 0xa240020b  sb          $zero, 0x20B($s2)
    ctx->pc = 0x1c0d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 523), (uint8_t)GPR_U32(ctx, 0));
label_1c0d90:
    // 0x1c0d90: 0x10000038  b           . + 4 + (0x38 << 2)
label_1c0d94:
    if (ctx->pc == 0x1C0D94u) {
        ctx->pc = 0x1C0D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D90u;
        // 0x1c0d94: 0xae4a020c  sw          $t2, 0x20C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 524), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0D98u;
        goto label_1c0d98;
    }
    ctx->pc = 0x1C0D90u;
    {
        const bool branch_taken_0x1c0d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0D90u;
        // 0x1c0d94: 0xae4a020c  sw          $t2, 0x20C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 524), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0d90) {
            ctx->pc = 0x1C0E74u;
            goto label_1c0e74;
        }
    }
    ctx->pc = 0x1C0D98u;
label_1c0d98:
    // 0x1c0d98: 0x2442821  addu        $a1, $s2, $a0
    ctx->pc = 0x1c0d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_1c0d9c:
    // 0x1c0d9c: 0x16c5023  subu        $t2, $t3, $t4
    ctx->pc = 0x1c0d9cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
label_1c0da0:
    // 0x1c0da0: 0x5410002  bgez        $t2, . + 4 + (0x2 << 2)
label_1c0da4:
    if (ctx->pc == 0x1C0DA4u) {
        ctx->pc = 0x1C0DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0DA0u;
        // 0x1c0da4: 0x24ad0420  addiu       $t5, $a1, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), 1056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0DA8u;
        goto label_1c0da8;
    }
    ctx->pc = 0x1C0DA0u;
    {
        const bool branch_taken_0x1c0da0 = (GPR_S32(ctx, 10) >= 0);
        ctx->pc = 0x1C0DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0DA0u;
        // 0x1c0da4: 0x24ad0420  addiu       $t5, $a1, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), 1056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0da0) {
            ctx->pc = 0x1C0DACu;
            goto label_1c0dac;
        }
    }
    ctx->pc = 0x1C0DA8u;
label_1c0da8:
    // 0x1c0da8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c0da8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0dac:
    // 0x1c0dac: 0x29410009  slti        $at, $t2, 0x9
    ctx->pc = 0x1c0dacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)9) ? 1 : 0);
label_1c0db0:
    // 0x1c0db0: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1c0db4:
    if (ctx->pc == 0x1C0DB4u) {
        ctx->pc = 0x1C0DB8u;
        goto label_1c0db8;
    }
    ctx->pc = 0x1C0DB0u;
    {
        const bool branch_taken_0x1c0db0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0db0) {
            ctx->pc = 0x1C0DBCu;
            goto label_1c0dbc;
        }
    }
    ctx->pc = 0x1C0DB8u;
label_1c0db8:
    // 0x1c0db8: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x1c0db8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1c0dbc:
    // 0x1c0dbc: 0x482821  addu        $a1, $v0, $t0
    ctx->pc = 0x1c0dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1c0dc0:
    // 0x1c0dc0: 0x6a3023  subu        $a2, $v1, $t2
    ctx->pc = 0x1c0dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_1c0dc4:
    // 0x1c0dc4: 0x8cae0000  lw          $t6, 0x0($a1)
    ctx->pc = 0x1c0dc4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1c0dc8:
    // 0x1c0dc8: 0x68100  sll         $s0, $a2, 4
    ctx->pc = 0x1c0dc8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1c0dcc:
    // 0x1c0dcc: 0xa48c0  sll         $t1, $t2, 3
    ctx->pc = 0x1c0dccu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_1c0dd0:
    // 0x1c0dd0: 0xa3140  sll         $a2, $t2, 5
    ctx->pc = 0x1c0dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
label_1c0dd4:
    // 0x1c0dd4: 0xa3900  sll         $a3, $t2, 4
    ctx->pc = 0x1c0dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_1c0dd8:
    // 0x1c0dd8: 0x1c97021  addu        $t6, $t6, $t1
    ctx->pc = 0x1c0dd8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 9)));
label_1c0ddc:
    // 0x1c0ddc: 0x1c67023  subu        $t6, $t6, $a2
    ctx->pc = 0x1c0ddcu;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 6)));
label_1c0de0:
    // 0x1c0de0: 0xe7100  sll         $t6, $t6, 4
    ctx->pc = 0x1c0de0u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
label_1c0de4:
    // 0x1c0de4: 0x25ce6c00  addiu       $t6, $t6, 0x6C00
    ctx->pc = 0x1c0de4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 27648));
label_1c0de8:
    // 0x1c0de8: 0xa5ae0028  sh          $t6, 0x28($t5)
    ctx->pc = 0x1c0de8u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 40), (uint16_t)GPR_U32(ctx, 14));
label_1c0dec:
    // 0x1c0dec: 0x8cae0004  lw          $t6, 0x4($a1)
    ctx->pc = 0x1c0decu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1c0df0:
    // 0x1c0df0: 0x1c77021  addu        $t6, $t6, $a3
    ctx->pc = 0x1c0df0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 7)));
label_1c0df4:
    // 0x1c0df4: 0x1c67023  subu        $t6, $t6, $a2
    ctx->pc = 0x1c0df4u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 6)));
label_1c0df8:
    // 0x1c0df8: 0xe7100  sll         $t6, $t6, 4
    ctx->pc = 0x1c0df8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
label_1c0dfc:
    // 0x1c0dfc: 0x25ce6c00  addiu       $t6, $t6, 0x6C00
    ctx->pc = 0x1c0dfcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 27648));
label_1c0e00:
    // 0x1c0e00: 0xa5ae0040  sh          $t6, 0x40($t5)
    ctx->pc = 0x1c0e00u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 64), (uint16_t)GPR_U32(ctx, 14));
label_1c0e04:
    // 0x1c0e04: 0x84ae0000  lh          $t6, 0x0($a1)
    ctx->pc = 0x1c0e04u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_1c0e08:
    // 0x1c0e08: 0x1c73823  subu        $a3, $t6, $a3
    ctx->pc = 0x1c0e08u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 7)));
label_1c0e0c:
    // 0x1c0e0c: 0xe63823  subu        $a3, $a3, $a2
    ctx->pc = 0x1c0e0cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_1c0e10:
    // 0x1c0e10: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x1c0e10u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1c0e14:
    // 0x1c0e14: 0x24e76c00  addiu       $a3, $a3, 0x6C00
    ctx->pc = 0x1c0e14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 27648));
label_1c0e18:
    // 0x1c0e18: 0xa5a70058  sh          $a3, 0x58($t5)
    ctx->pc = 0x1c0e18u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 88), (uint16_t)GPR_U32(ctx, 7));
label_1c0e1c:
    // 0x1c0e1c: 0x84a50004  lh          $a1, 0x4($a1)
    ctx->pc = 0x1c0e1cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_1c0e20:
    // 0x1c0e20: 0xa92823  subu        $a1, $a1, $t1
    ctx->pc = 0x1c0e20u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_1c0e24:
    // 0x1c0e24: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1c0e24u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1c0e28:
    // 0x1c0e28: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1c0e28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1c0e2c:
    // 0x1c0e2c: 0x24a56c00  addiu       $a1, $a1, 0x6C00
    ctx->pc = 0x1c0e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27648));
label_1c0e30:
    // 0x1c0e30: 0xa5a50070  sh          $a1, 0x70($t5)
    ctx->pc = 0x1c0e30u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 112), (uint16_t)GPR_U32(ctx, 5));
label_1c0e34:
    // 0x1c0e34: 0xa1b00063  sb          $s0, 0x63($t5)
    ctx->pc = 0x1c0e34u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 99), (uint8_t)GPR_U32(ctx, 16));
label_1c0e38:
    // 0x1c0e38: 0xa1b0004b  sb          $s0, 0x4B($t5)
    ctx->pc = 0x1c0e38u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 75), (uint8_t)GPR_U32(ctx, 16));
label_1c0e3c:
    // 0x1c0e3c: 0xa1b00033  sb          $s0, 0x33($t5)
    ctx->pc = 0x1c0e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 13), 51), (uint8_t)GPR_U32(ctx, 16));
label_1c0e40:
    // 0x1c0e40: 0xa1b0001b  sb          $s0, 0x1B($t5)
    ctx->pc = 0x1c0e40u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 27), (uint8_t)GPR_U32(ctx, 16));
label_1c0e44:
    // 0x1c0e44: 0x8f8588f4  lw          $a1, -0x770C($gp)
    ctx->pc = 0x1c0e44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936820)));
label_1c0e48:
    // 0x1c0e48: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1c0e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1c0e4c:
    // 0x1c0e4c: 0x15850006  bne         $t4, $a1, . + 4 + (0x6 << 2)
label_1c0e50:
    if (ctx->pc == 0x1C0E50u) {
        ctx->pc = 0x1C0E54u;
        goto label_1c0e54;
    }
    ctx->pc = 0x1C0E4Cu;
    {
        const bool branch_taken_0x1c0e4c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 5));
        if (branch_taken_0x1c0e4c) {
            ctx->pc = 0x1C0E68u;
            goto label_1c0e68;
        }
    }
    ctx->pc = 0x1C0E54u;
label_1c0e54:
    // 0x1c0e54: 0x29450008  slti        $a1, $t2, 0x8
    ctx->pc = 0x1c0e54u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)8) ? 1 : 0);
label_1c0e58:
    // 0x1c0e58: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
label_1c0e5c:
    if (ctx->pc == 0x1C0E5Cu) {
        ctx->pc = 0x1C0E60u;
        goto label_1c0e60;
    }
    ctx->pc = 0x1C0E58u;
    {
        const bool branch_taken_0x1c0e58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0e58) {
            ctx->pc = 0x1C0E68u;
            goto label_1c0e68;
        }
    }
    ctx->pc = 0x1C0E60u;
label_1c0e60:
    // 0x1c0e60: 0xaf8088f0  sw          $zero, -0x7710($gp)
    ctx->pc = 0x1c0e60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936816), GPR_U32(ctx, 0));
label_1c0e64:
    // 0x1c0e64: 0xaf808908  sw          $zero, -0x76F8($gp)
    ctx->pc = 0x1c0e64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 0));
label_1c0e68:
    // 0x1c0e68: 0x24840080  addiu       $a0, $a0, 0x80
    ctx->pc = 0x1c0e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_1c0e6c:
    // 0x1c0e6c: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x1c0e6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_1c0e70:
    // 0x1c0e70: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x1c0e70u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_1c0e74:
    // 0x1c0e74: 0x0  nop
    ctx->pc = 0x1c0e74u;
    // NOP
label_1c0e78:
    // 0x1c0e78: 0x8f8588f4  lw          $a1, -0x770C($gp)
    ctx->pc = 0x1c0e78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936820)));
label_1c0e7c:
    // 0x1c0e7c: 0x185282a  slt         $a1, $t4, $a1
    ctx->pc = 0x1c0e7cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1c0e80:
    // 0x1c0e80: 0x14a0ffc6  bnez        $a1, . + 4 + (-0x3A << 2)
label_1c0e84:
    if (ctx->pc == 0x1C0E84u) {
        ctx->pc = 0x1C0E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0E80u;
        // 0x1c0e84: 0x2442821  addu        $a1, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0E88u;
        goto label_1c0e88;
    }
    ctx->pc = 0x1C0E80u;
    {
        const bool branch_taken_0x1c0e80 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0E80u;
        // 0x1c0e84: 0x2442821  addu        $a1, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0e80) {
            ctx->pc = 0x1C0D9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0d9c;
        }
    }
    ctx->pc = 0x1C0E88u;
label_1c0e88:
    // 0x1c0e88: 0x8f84890c  lw          $a0, -0x76F4($gp)
    ctx->pc = 0x1c0e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936844)));
label_1c0e8c:
    // 0x1c0e8c: 0x24020039  addiu       $v0, $zero, 0x39
    ctx->pc = 0x1c0e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_1c0e90:
    // 0x1c0e90: 0x1082002b  beq         $a0, $v0, . + 4 + (0x2B << 2)
label_1c0e94:
    if (ctx->pc == 0x1C0E94u) {
        ctx->pc = 0x1C0E98u;
        goto label_1c0e98;
    }
    ctx->pc = 0x1C0E90u;
    {
        const bool branch_taken_0x1c0e90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c0e90) {
            ctx->pc = 0x1C0F40u;
            goto label_1c0f40;
        }
    }
    ctx->pc = 0x1C0E98u;
label_1c0e98:
    // 0x1c0e98: 0x8f8388f0  lw          $v1, -0x7710($gp)
    ctx->pc = 0x1c0e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936816)));
label_1c0e9c:
    // 0x1c0e9c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c0e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c0ea0:
    // 0x1c0ea0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1c0ea4:
    if (ctx->pc == 0x1C0EA4u) {
        ctx->pc = 0x1C0EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0EA0u;
        // 0x1c0ea4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0EA8u;
        goto label_1c0ea8;
    }
    ctx->pc = 0x1C0EA0u;
    {
        const bool branch_taken_0x1c0ea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C0EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0EA0u;
        // 0x1c0ea4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0ea0) {
            ctx->pc = 0x1C0EB4u;
            goto label_1c0eb4;
        }
    }
    ctx->pc = 0x1C0EA8u;
label_1c0ea8:
    // 0x1c0ea8: 0x10000020  b           . + 4 + (0x20 << 2)
label_1c0eac:
    if (ctx->pc == 0x1C0EACu) {
        ctx->pc = 0x1C0EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0EA8u;
        // 0x1c0eac: 0x24100080  addiu       $s0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0EB0u;
        goto label_1c0eb0;
    }
    ctx->pc = 0x1C0EA8u;
    {
        const bool branch_taken_0x1c0ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0EA8u;
        // 0x1c0eac: 0x24100080  addiu       $s0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0ea8) {
            ctx->pc = 0x1C0F2Cu;
            goto label_1c0f2c;
        }
    }
    ctx->pc = 0x1C0EB0u;
label_1c0eb0:
    // 0x1c0eb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c0eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c0eb4:
    // 0x1c0eb4: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_1c0eb8:
    if (ctx->pc == 0x1C0EB8u) {
        ctx->pc = 0x1C0EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0EB4u;
        // 0x1c0eb8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0EBCu;
        goto label_1c0ebc;
    }
    ctx->pc = 0x1C0EB4u;
    {
        const bool branch_taken_0x1c0eb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C0EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0EB4u;
        // 0x1c0eb8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0eb4) {
            ctx->pc = 0x1C0EF0u;
            goto label_1c0ef0;
        }
    }
    ctx->pc = 0x1C0EBCu;
label_1c0ebc:
    // 0x1c0ebc: 0x8f838908  lw          $v1, -0x76F8($gp)
    ctx->pc = 0x1c0ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936840)));
label_1c0ec0:
    // 0x1c0ec0: 0x3c027878  lui         $v0, 0x7878
    ctx->pc = 0x1c0ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30840 << 16));
label_1c0ec4:
    // 0x1c0ec4: 0x34427879  ori         $v0, $v0, 0x7879
    ctx->pc = 0x1c0ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30841);
label_1c0ec8:
    // 0x1c0ec8: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x1c0ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_1c0ecc:
    // 0x1c0ecc: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x1c0eccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1c0ed0:
    // 0x1c0ed0: 0x0  nop
    ctx->pc = 0x1c0ed0u;
    // NOP
label_1c0ed4:
    // 0x1c0ed4: 0x0  nop
    ctx->pc = 0x1c0ed4u;
    // NOP
label_1c0ed8:
    // 0x1c0ed8: 0x1010  mfhi        $v0
    ctx->pc = 0x1c0ed8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1c0edc:
    // 0x1c0edc: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1c0edcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1c0ee0:
    // 0x1c0ee0: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x1c0ee0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_1c0ee4:
    // 0x1c0ee4: 0x10000011  b           . + 4 + (0x11 << 2)
label_1c0ee8:
    if (ctx->pc == 0x1C0EE8u) {
        ctx->pc = 0x1C0EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0EE4u;
        // 0x1c0ee8: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0EECu;
        goto label_1c0eec;
    }
    ctx->pc = 0x1C0EE4u;
    {
        const bool branch_taken_0x1c0ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0EE4u;
        // 0x1c0ee8: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0ee4) {
            ctx->pc = 0x1C0F2Cu;
            goto label_1c0f2c;
        }
    }
    ctx->pc = 0x1C0EECu;
label_1c0eec:
    // 0x1c0eec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c0eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c0ef0:
    // 0x1c0ef0: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_1c0ef4:
    if (ctx->pc == 0x1C0EF4u) {
        ctx->pc = 0x1C0EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0EF0u;
        // 0x1c0ef4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0EF8u;
        goto label_1c0ef8;
    }
    ctx->pc = 0x1C0EF0u;
    {
        const bool branch_taken_0x1c0ef0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C0EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0EF0u;
        // 0x1c0ef4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0ef0) {
            ctx->pc = 0x1C0F30u;
            goto label_1c0f30;
        }
    }
    ctx->pc = 0x1C0EF8u;
label_1c0ef8:
    // 0x1c0ef8: 0x8f838908  lw          $v1, -0x76F8($gp)
    ctx->pc = 0x1c0ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936840)));
label_1c0efc:
    // 0x1c0efc: 0x24050088  addiu       $a1, $zero, 0x88
    ctx->pc = 0x1c0efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
label_1c0f00:
    // 0x1c0f00: 0x3c027878  lui         $v0, 0x7878
    ctx->pc = 0x1c0f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30840 << 16));
label_1c0f04:
    // 0x1c0f04: 0x34427879  ori         $v0, $v0, 0x7879
    ctx->pc = 0x1c0f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30841);
label_1c0f08:
    // 0x1c0f08: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x1c0f08u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1c0f0c:
    // 0x1c0f0c: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x1c0f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_1c0f10:
    // 0x1c0f10: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x1c0f10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1c0f14:
    // 0x1c0f14: 0x0  nop
    ctx->pc = 0x1c0f14u;
    // NOP
label_1c0f18:
    // 0x1c0f18: 0x0  nop
    ctx->pc = 0x1c0f18u;
    // NOP
label_1c0f1c:
    // 0x1c0f1c: 0x1010  mfhi        $v0
    ctx->pc = 0x1c0f1cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1c0f20:
    // 0x1c0f20: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1c0f20u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_1c0f24:
    // 0x1c0f24: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x1c0f24u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_1c0f28:
    // 0x1c0f28: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1c0f28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c0f2c:
    // 0x1c0f2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c0f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0f30:
    // 0x1c0f30: 0xc070e2c  jal         func_1C38B0
label_1c0f34:
    if (ctx->pc == 0x1C0F34u) {
        ctx->pc = 0x1C0F38u;
        goto label_1c0f38;
    }
    ctx->pc = 0x1C0F30u;
    SET_GPR_U32(ctx, 31, 0x1C0F38u);
    ctx->pc = 0x1C38B0u;
    { ctx->pc = 0x1c38b0; return; }
    ctx->pc = 0x1C0F38u;
label_1c0f38:
    // 0x1c0f38: 0x10000003  b           . + 4 + (0x3 << 2)
label_1c0f3c:
    if (ctx->pc == 0x1C0F3Cu) {
        ctx->pc = 0x1C0F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0F38u;
        // 0x1c0f3c: 0xa25002ab  sb          $s0, 0x2AB($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 683), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0F40u;
        goto label_1c0f40;
    }
    ctx->pc = 0x1C0F38u;
    {
        const bool branch_taken_0x1c0f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0F38u;
        // 0x1c0f3c: 0xa25002ab  sb          $s0, 0x2AB($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 683), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0f38) {
            ctx->pc = 0x1C0F48u;
            goto label_1c0f48;
        }
    }
    ctx->pc = 0x1C0F40u;
label_1c0f40:
    // 0x1c0f40: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c0f40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0f44:
    // 0x1c0f44: 0xa25002ab  sb          $s0, 0x2AB($s2)
    ctx->pc = 0x1c0f44u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 683), (uint8_t)GPR_U32(ctx, 16));
label_1c0f48:
    // 0x1c0f48: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1c0f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_1c0f4c:
    // 0x1c0f4c: 0xa2500293  sb          $s0, 0x293($s2)
    ctx->pc = 0x1c0f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 659), (uint8_t)GPR_U32(ctx, 16));
label_1c0f50:
    // 0x1c0f50: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1c0f50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1c0f54:
    // 0x1c0f54: 0xa25002db  sb          $s0, 0x2DB($s2)
    ctx->pc = 0x1c0f54u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 731), (uint8_t)GPR_U32(ctx, 16));
label_1c0f58:
    // 0x1c0f58: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1c0f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1c0f5c:
    // 0x1c0f5c: 0xa25002c3  sb          $s0, 0x2C3($s2)
    ctx->pc = 0x1c0f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 707), (uint8_t)GPR_U32(ctx, 16));
label_1c0f60:
    // 0x1c0f60: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c0f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1c0f64:
    // 0x1c0f64: 0xa250037b  sb          $s0, 0x37B($s2)
    ctx->pc = 0x1c0f64u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 891), (uint8_t)GPR_U32(ctx, 16));
label_1c0f68:
    // 0x1c0f68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c0f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c0f6c:
    // 0x1c0f6c: 0xa2500363  sb          $s0, 0x363($s2)
    ctx->pc = 0x1c0f6cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 867), (uint8_t)GPR_U32(ctx, 16));
label_1c0f70:
    // 0x1c0f70: 0xa24003ab  sb          $zero, 0x3AB($s2)
    ctx->pc = 0x1c0f70u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 939), (uint8_t)GPR_U32(ctx, 0));
label_1c0f74:
    // 0x1c0f74: 0xa2400393  sb          $zero, 0x393($s2)
    ctx->pc = 0x1c0f74u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 915), (uint8_t)GPR_U32(ctx, 0));
label_1c0f78:
    // 0x1c0f78: 0x8f8388f4  lw          $v1, -0x770C($gp)
    ctx->pc = 0x1c0f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936820)));
label_1c0f7c:
    // 0x1c0f7c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1c0f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1c0f80:
    // 0x1c0f80: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1c0f80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1c0f84:
    // 0x1c0f84: 0xfe420410  sd          $v0, 0x410($s2)
    ctx->pc = 0x1c0f84u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 1040), GPR_U64(ctx, 2));
label_1c0f88:
    // 0x1c0f88: 0x24700042  addiu       $s0, $v1, 0x42
    ctx->pc = 0x1c0f88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 66));
label_1c0f8c:
    // 0x1c0f8c: 0xc05e234  jal         func_1788D0
label_1c0f90:
    if (ctx->pc == 0x1C0F90u) {
        ctx->pc = 0x1C0F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0F8Cu;
        // 0x1c0f90: 0x2605ffff  addiu       $a1, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0F94u;
        goto label_1c0f94;
    }
    ctx->pc = 0x1C0F8Cu;
    SET_GPR_U32(ctx, 31, 0x1C0F94u);
    ctx->pc = 0x1C0F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0F8Cu;
    // 0x1c0f90: 0x2605ffff  addiu       $a1, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1C0F8Cu, 0x1C0F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0F94u;
label_1c0f94:
    // 0x1c0f94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c0f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c0f98:
    // 0x1c0f98: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c0f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c0f9c:
    // 0x1c0f9c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c0f9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c0fa0:
    // 0x1c0fa0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c0fa0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0fa4:
    // 0x1c0fa4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c0fa4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0fa8:
    // 0x1c0fa8: 0xc066c72  jal         func_19B1C8
label_1c0fac:
    if (ctx->pc == 0x1C0FACu) {
        ctx->pc = 0x1C0FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0FA8u;
        // 0x1c0fac: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0FB0u;
        goto label_1c0fb0;
    }
    ctx->pc = 0x1C0FA8u;
    SET_GPR_U32(ctx, 31, 0x1C0FB0u);
    ctx->pc = 0x1C0FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0FA8u;
    // 0x1c0fac: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x1C0FB0u;
label_1c0fb0:
    // 0x1c0fb0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c0fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1c0fb4:
    // 0x1c0fb4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c0fb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c0fb8:
    // 0x1c0fb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c0fb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c0fbc:
    // 0x1c0fbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c0fbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c0fc0:
    // 0x1c0fc0: 0x3e00008  jr          $ra
label_1c0fc4:
    if (ctx->pc == 0x1C0FC4u) {
        ctx->pc = 0x1C0FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0FC0u;
        // 0x1c0fc4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0FC8u;
        goto label_1c0fc8;
    }
    ctx->pc = 0x1C0FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0FC0u;
        // 0x1c0fc4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0FC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0FC8u;
label_1c0fc8:
    // 0x1c0fc8: 0x0  nop
    ctx->pc = 0x1c0fc8u;
    // NOP
label_1c0fcc:
    // 0x1c0fcc: 0x0  nop
    ctx->pc = 0x1c0fccu;
    // NOP
label_1c0fd0:
    // 0x1c0fd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c0fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c0fd4:
    // 0x1c0fd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c0fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c0fd8:
    // 0x1c0fd8: 0x8f8688f0  lw          $a2, -0x7710($gp)
    ctx->pc = 0x1c0fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936816)));
label_1c0fdc:
    // 0x1c0fdc: 0x10c00035  beqz        $a2, . + 4 + (0x35 << 2)
label_1c0fe0:
    if (ctx->pc == 0x1C0FE0u) {
        ctx->pc = 0x1C0FE4u;
        goto label_1c0fe4;
    }
    ctx->pc = 0x1C0FDCu;
    {
        const bool branch_taken_0x1c0fdc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0fdc) {
            ctx->pc = 0x1C10B4u;
            goto label_1c10b4;
        }
    }
    ctx->pc = 0x1C0FE4u;
label_1c0fe4:
    // 0x1c0fe4: 0x8f858904  lw          $a1, -0x76FC($gp)
    ctx->pc = 0x1c0fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936836)));
label_1c0fe8:
    // 0x1c0fe8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c0fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c0fec:
    // 0x1c0fec: 0x8f848908  lw          $a0, -0x76F8($gp)
    ctx->pc = 0x1c0fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936840)));
label_1c0ff0:
    // 0x1c0ff0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c0ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1c0ff4:
    // 0x1c0ff4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1c0ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1c0ff8:
    // 0x1c0ff8: 0xaf858904  sw          $a1, -0x76FC($gp)
    ctx->pc = 0x1c0ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936836), GPR_U32(ctx, 5));
label_1c0ffc:
    // 0x1c0ffc: 0x14c30008  bne         $a2, $v1, . + 4 + (0x8 << 2)
label_1c1000:
    if (ctx->pc == 0x1C1000u) {
        ctx->pc = 0x1C1000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0FFCu;
        // 0x1c1000: 0xaf848908  sw          $a0, -0x76F8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1004u;
        goto label_1c1004;
    }
    ctx->pc = 0x1C0FFCu;
    {
        const bool branch_taken_0x1c0ffc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C1000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0FFCu;
        // 0x1c1000: 0xaf848908  sw          $a0, -0x76F8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0ffc) {
            ctx->pc = 0x1C1020u;
            goto label_1c1020;
        }
    }
    ctx->pc = 0x1C1004u;
label_1c1004:
    // 0x1c1004: 0x8f838908  lw          $v1, -0x76F8($gp)
    ctx->pc = 0x1c1004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936840)));
label_1c1008:
    // 0x1c1008: 0x28630088  slti        $v1, $v1, 0x88
    ctx->pc = 0x1c1008u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)136) ? 1 : 0);
label_1c100c:
    // 0x1c100c: 0x14600029  bnez        $v1, . + 4 + (0x29 << 2)
label_1c1010:
    if (ctx->pc == 0x1C1010u) {
        ctx->pc = 0x1C1010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C100Cu;
        // 0x1c1010: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1014u;
        goto label_1c1014;
    }
    ctx->pc = 0x1C100Cu;
    {
        const bool branch_taken_0x1c100c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C100Cu;
        // 0x1c1010: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c100c) {
            ctx->pc = 0x1C10B4u;
            goto label_1c10b4;
        }
    }
    ctx->pc = 0x1C1014u;
label_1c1014:
    // 0x1c1014: 0xaf808908  sw          $zero, -0x76F8($gp)
    ctx->pc = 0x1c1014u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 0));
label_1c1018:
    // 0x1c1018: 0x10000026  b           . + 4 + (0x26 << 2)
label_1c101c:
    if (ctx->pc == 0x1C101Cu) {
        ctx->pc = 0x1C101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1018u;
        // 0x1c101c: 0xaf8388f0  sw          $v1, -0x7710($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936816), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1020u;
        goto label_1c1020;
    }
    ctx->pc = 0x1C1018u;
    {
        const bool branch_taken_0x1c1018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1018u;
        // 0x1c101c: 0xaf8388f0  sw          $v1, -0x7710($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936816), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1018) {
            ctx->pc = 0x1C10B4u;
            goto label_1c10b4;
        }
    }
    ctx->pc = 0x1C1020u;
label_1c1020:
    // 0x1c1020: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c1020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c1024:
    // 0x1c1024: 0x14c3001b  bne         $a2, $v1, . + 4 + (0x1B << 2)
label_1c1028:
    if (ctx->pc == 0x1C1028u) {
        ctx->pc = 0x1C1028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1024u;
        // 0x1c1028: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C102Cu;
        goto label_1c102c;
    }
    ctx->pc = 0x1C1024u;
    {
        const bool branch_taken_0x1c1024 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C1028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1024u;
        // 0x1c1028: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1024) {
            ctx->pc = 0x1C1094u;
            goto label_1c1094;
        }
    }
    ctx->pc = 0x1C102Cu;
label_1c102c:
    // 0x1c102c: 0x8f84890c  lw          $a0, -0x76F4($gp)
    ctx->pc = 0x1c102cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936844)));
label_1c1030:
    // 0x1c1030: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x1c1030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_1c1034:
    // 0x1c1034: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
label_1c1038:
    if (ctx->pc == 0x1C1038u) {
        ctx->pc = 0x1C103Cu;
        goto label_1c103c;
    }
    ctx->pc = 0x1C1034u;
    {
        const bool branch_taken_0x1c1034 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c1034) {
            ctx->pc = 0x1C1068u;
            goto label_1c1068;
        }
    }
    ctx->pc = 0x1C103Cu;
label_1c103c:
    // 0x1c103c: 0x8f838908  lw          $v1, -0x76F8($gp)
    ctx->pc = 0x1c103cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936840)));
label_1c1040:
    // 0x1c1040: 0x286300e4  slti        $v1, $v1, 0xE4
    ctx->pc = 0x1c1040u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)228) ? 1 : 0);
label_1c1044:
    // 0x1c1044: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
label_1c1048:
    if (ctx->pc == 0x1C1048u) {
        ctx->pc = 0x1C1048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1044u;
        // 0x1c1048: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C104Cu;
        goto label_1c104c;
    }
    ctx->pc = 0x1C1044u;
    {
        const bool branch_taken_0x1c1044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1044u;
        // 0x1c1048: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1044) {
            ctx->pc = 0x1C10B4u;
            goto label_1c10b4;
        }
    }
    ctx->pc = 0x1C104Cu;
label_1c104c:
    // 0x1c104c: 0xc05b308  jal         func_16CC20
label_1c1050:
    if (ctx->pc == 0x1C1050u) {
        ctx->pc = 0x1C1054u;
        goto label_1c1054;
    }
    ctx->pc = 0x1C104Cu;
    SET_GPR_U32(ctx, 31, 0x1C1054u);
    ctx->pc = 0x16CC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CC20u, 0x1C104Cu, 0x1C1054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1054u;
label_1c1054:
    // 0x1c1054: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_1c1058:
    if (ctx->pc == 0x1C1058u) {
        ctx->pc = 0x1C1058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1054u;
        // 0x1c1058: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C105Cu;
        goto label_1c105c;
    }
    ctx->pc = 0x1C1054u;
    {
        const bool branch_taken_0x1c1054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1054u;
        // 0x1c1058: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1054) {
            ctx->pc = 0x1C10B4u;
            goto label_1c10b4;
        }
    }
    ctx->pc = 0x1C105Cu;
label_1c105c:
    // 0x1c105c: 0xaf808908  sw          $zero, -0x76F8($gp)
    ctx->pc = 0x1c105cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 0));
label_1c1060:
    // 0x1c1060: 0x10000014  b           . + 4 + (0x14 << 2)
label_1c1064:
    if (ctx->pc == 0x1C1064u) {
        ctx->pc = 0x1C1064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1060u;
        // 0x1c1064: 0xaf8388f0  sw          $v1, -0x7710($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936816), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1068u;
        goto label_1c1068;
    }
    ctx->pc = 0x1C1060u;
    {
        const bool branch_taken_0x1c1060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1060u;
        // 0x1c1064: 0xaf8388f0  sw          $v1, -0x7710($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936816), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1060) {
            ctx->pc = 0x1C10B4u;
            goto label_1c10b4;
        }
    }
    ctx->pc = 0x1C1068u;
label_1c1068:
    // 0x1c1068: 0x8f838908  lw          $v1, -0x76F8($gp)
    ctx->pc = 0x1c1068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936840)));
label_1c106c:
    // 0x1c106c: 0x28630060  slti        $v1, $v1, 0x60
    ctx->pc = 0x1c106cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)96) ? 1 : 0);
label_1c1070:
    // 0x1c1070: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
label_1c1074:
    if (ctx->pc == 0x1C1074u) {
        ctx->pc = 0x1C1074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1070u;
        // 0x1c1074: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1078u;
        goto label_1c1078;
    }
    ctx->pc = 0x1C1070u;
    {
        const bool branch_taken_0x1c1070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1070u;
        // 0x1c1074: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1070) {
            ctx->pc = 0x1C10B4u;
            goto label_1c10b4;
        }
    }
    ctx->pc = 0x1C1078u;
label_1c1078:
    // 0x1c1078: 0xc05b308  jal         func_16CC20
label_1c107c:
    if (ctx->pc == 0x1C107Cu) {
        ctx->pc = 0x1C1080u;
        goto label_1c1080;
    }
    ctx->pc = 0x1C1078u;
    SET_GPR_U32(ctx, 31, 0x1C1080u);
    ctx->pc = 0x16CC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CC20u, 0x1C1078u, 0x1C1080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1080u;
label_1c1080:
    // 0x1c1080: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_1c1084:
    if (ctx->pc == 0x1C1084u) {
        ctx->pc = 0x1C1084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1080u;
        // 0x1c1084: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1088u;
        goto label_1c1088;
    }
    ctx->pc = 0x1C1080u;
    {
        const bool branch_taken_0x1c1080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1080u;
        // 0x1c1084: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1080) {
            ctx->pc = 0x1C10B4u;
            goto label_1c10b4;
        }
    }
    ctx->pc = 0x1C1088u;
label_1c1088:
    // 0x1c1088: 0xaf808908  sw          $zero, -0x76F8($gp)
    ctx->pc = 0x1c1088u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 0));
label_1c108c:
    // 0x1c108c: 0x10000009  b           . + 4 + (0x9 << 2)
label_1c1090:
    if (ctx->pc == 0x1C1090u) {
        ctx->pc = 0x1C1090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C108Cu;
        // 0x1c1090: 0xaf8388f0  sw          $v1, -0x7710($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936816), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1094u;
        goto label_1c1094;
    }
    ctx->pc = 0x1C108Cu;
    {
        const bool branch_taken_0x1c108c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C108Cu;
        // 0x1c1090: 0xaf8388f0  sw          $v1, -0x7710($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936816), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c108c) {
            ctx->pc = 0x1C10B4u;
            goto label_1c10b4;
        }
    }
    ctx->pc = 0x1C1094u;
label_1c1094:
    // 0x1c1094: 0x14c30007  bne         $a2, $v1, . + 4 + (0x7 << 2)
label_1c1098:
    if (ctx->pc == 0x1C1098u) {
        ctx->pc = 0x1C109Cu;
        goto label_1c109c;
    }
    ctx->pc = 0x1C1094u;
    {
        const bool branch_taken_0x1c1094 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c1094) {
            ctx->pc = 0x1C10B4u;
            goto label_1c10b4;
        }
    }
    ctx->pc = 0x1C109Cu;
label_1c109c:
    // 0x1c109c: 0x8f838908  lw          $v1, -0x76F8($gp)
    ctx->pc = 0x1c109cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936840)));
label_1c10a0:
    // 0x1c10a0: 0x28630088  slti        $v1, $v1, 0x88
    ctx->pc = 0x1c10a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)136) ? 1 : 0);
label_1c10a4:
    // 0x1c10a4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1c10a8:
    if (ctx->pc == 0x1C10A8u) {
        ctx->pc = 0x1C10ACu;
        goto label_1c10ac;
    }
    ctx->pc = 0x1C10A4u;
    {
        const bool branch_taken_0x1c10a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c10a4) {
            ctx->pc = 0x1C10B4u;
            goto label_1c10b4;
        }
    }
    ctx->pc = 0x1C10ACu;
label_1c10ac:
    // 0x1c10ac: 0xaf8088f0  sw          $zero, -0x7710($gp)
    ctx->pc = 0x1c10acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936816), GPR_U32(ctx, 0));
label_1c10b0:
    // 0x1c10b0: 0xaf808908  sw          $zero, -0x76F8($gp)
    ctx->pc = 0x1c10b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936840), GPR_U32(ctx, 0));
label_1c10b4:
    // 0x1c10b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c10b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c10b8:
    // 0x1c10b8: 0x3e00008  jr          $ra
label_1c10bc:
    if (ctx->pc == 0x1C10BCu) {
        ctx->pc = 0x1C10BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C10B8u;
        // 0x1c10bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C10C0u;
        goto label_1c10c0;
    }
    ctx->pc = 0x1C10B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C10BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C10B8u;
        // 0x1c10bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C10B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C10C0u;
label_1c10c0:
    // 0x1c10c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c10c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1c10c4:
    // 0x1c10c4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c10c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1c10c8:
    // 0x1c10c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c10c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1c10cc:
    // 0x1c10cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c10ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1c10d0:
    // 0x1c10d0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1c10d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c10d4:
    // 0x1c10d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c10d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1c10d8:
    // 0x1c10d8: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1c10d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1c10dc:
    // 0x1c10dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c10dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c10e0:
    // 0x1c10e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c10e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c10e4:
    // 0x1c10e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c10e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c10e8:
    // 0x1c10e8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1c10e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1c10ec:
    // 0x1c10ec: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1c10ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1c10f0:
    // 0x1c10f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c10f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c10f4:
    // 0x1c10f4: 0x24050260  addiu       $a1, $zero, 0x260
    ctx->pc = 0x1c10f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
label_1c10f8:
    // 0x1c10f8: 0xc055148  jal         func_154520
label_1c10fc:
    if (ctx->pc == 0x1C10FCu) {
        ctx->pc = 0x1C10FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C10F8u;
        // 0x1c10fc: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1100u;
        goto label_1c1100;
    }
    ctx->pc = 0x1C10F8u;
    SET_GPR_U32(ctx, 31, 0x1C1100u);
    ctx->pc = 0x1C10FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C10F8u;
    // 0x1c10fc: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154520u, 0x1C10F8u, 0x1C1100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1100u;
label_1c1100:
    // 0x1c1100: 0x24090016  addiu       $t1, $zero, 0x16
    ctx->pc = 0x1c1100u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1c1104:
    // 0x1c1104: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x1c1104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1c1108:
    // 0x1c1108: 0x62480a  movz        $t1, $v1, $v0
    ctx->pc = 0x1c1108u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
label_1c110c:
    // 0x1c110c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1c110cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1c1110:
    // 0x1c1110: 0x8f828910  lw          $v0, -0x76F0($gp)
    ctx->pc = 0x1c1110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936848)));
label_1c1114:
    // 0x1c1114: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1c1114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1c1118:
    // 0x1c1118: 0x24060260  addiu       $a2, $zero, 0x260
    ctx->pc = 0x1c1118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
label_1c111c:
    // 0x1c111c: 0x2407002c  addiu       $a3, $zero, 0x2C
    ctx->pc = 0x1c111cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_1c1120:
    // 0x1c1120: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c1120u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1124:
    // 0x1c1124: 0x340affe4  ori         $t2, $zero, 0xFFE4
    ctx->pc = 0x1c1124u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65508);
label_1c1128:
    // 0x1c1128: 0xc054e5c  jal         func_153970
label_1c112c:
    if (ctx->pc == 0x1C112Cu) {
        ctx->pc = 0x1C112Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1128u;
        // 0x1c112c: 0x494823  subu        $t1, $v0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1130u;
        goto label_1c1130;
    }
    ctx->pc = 0x1C1128u;
    SET_GPR_U32(ctx, 31, 0x1C1130u);
    ctx->pc = 0x1C112Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1128u;
    // 0x1c112c: 0x494823  subu        $t1, $v0, $t1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x1C1128u, 0x1C1130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1130u;
label_1c1130:
    // 0x1c1130: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1c1130u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1c1134:
    // 0x1c1134: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1c1134u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c1138:
    // 0x1c1138: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x1c1138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
label_1c113c:
    // 0x1c113c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c113cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1140:
    // 0x1c1140: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1c1140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1c1144:
    // 0x1c1144: 0xc054e74  jal         func_1539D0
label_1c1148:
    if (ctx->pc == 0x1C1148u) {
        ctx->pc = 0x1C1148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1144u;
        // 0x1c1148: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C114Cu;
        goto label_1c114c;
    }
    ctx->pc = 0x1C1144u;
    SET_GPR_U32(ctx, 31, 0x1C114Cu);
    ctx->pc = 0x1C1148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1144u;
    // 0x1c1148: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1C1144u, 0x1C114Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C114Cu;
label_1c114c:
    // 0x1c114c: 0x12800032  beqz        $s4, . + 4 + (0x32 << 2)
label_1c1150:
    if (ctx->pc == 0x1C1150u) {
        ctx->pc = 0x1C1150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C114Cu;
        // 0x1c1150: 0xaf8288f4  sw          $v0, -0x770C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936820), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1154u;
        goto label_1c1154;
    }
    ctx->pc = 0x1C114Cu;
    {
        const bool branch_taken_0x1c114c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C114Cu;
        // 0x1c1150: 0xaf8288f4  sw          $v0, -0x770C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936820), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c114c) {
            ctx->pc = 0x1C1218u;
            { ctx->pc = 0x1c1218; return; }
        }
    }
    ctx->pc = 0x1C1154u;
label_1c1154:
    // 0x1c1154: 0x8f8488f4  lw          $a0, -0x770C($gp)
    ctx->pc = 0x1c1154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936820)));
label_1c1158:
    // 0x1c1158: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1c1158u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_1c115c:
    // 0x1c115c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c115cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1160:
    // 0x1c1160: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x1c1160u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1c1164:
    // 0x1c1164: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c1164u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1168:
    // 0x1c1168: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c1168u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c116c:
    // 0x1c116c: 0x10000018  b           . + 4 + (0x18 << 2)
label_1c1170:
    if (ctx->pc == 0x1C1170u) {
        ctx->pc = 0x1C1170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C116Cu;
        // 0x1c1170: 0x24a54ec0  addiu       $a1, $a1, 0x4EC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1174u;
        goto label_1c1174;
    }
    ctx->pc = 0x1C116Cu;
    {
        const bool branch_taken_0x1c116c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C116Cu;
        // 0x1c1170: 0x24a54ec0  addiu       $a1, $a1, 0x4EC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c116c) {
            ctx->pc = 0x1C11D0u;
            { ctx->pc = 0x1c11d0; return; }
        }
    }
    ctx->pc = 0x1C1174u;
label_1c1174:
    // 0x1c1174: 0x94e30028  lhu         $v1, 0x28($a3)
    ctx->pc = 0x1c1174u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 40)));
label_1c1178:
    // 0x1c1178: 0x24639400  addiu       $v1, $v1, -0x6C00
    ctx->pc = 0x1c1178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939648));
label_1c117c:
    // 0x1c117c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1c1180u;
    return;
}

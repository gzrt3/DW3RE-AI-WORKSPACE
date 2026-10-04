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

// Function: FUN_001d49b0
// Address: 0x1d49b0 - 0x254d4c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_001d49b0_part44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1e99a0u: goto label_1e99a0;
        case 0x1e99a4u: goto label_1e99a4;
        case 0x1e99a8u: goto label_1e99a8;
        case 0x1e99acu: goto label_1e99ac;
        case 0x1e99b0u: goto label_1e99b0;
        case 0x1e99b4u: goto label_1e99b4;
        case 0x1e99b8u: goto label_1e99b8;
        case 0x1e99bcu: goto label_1e99bc;
        case 0x1e99c0u: goto label_1e99c0;
        case 0x1e99c4u: goto label_1e99c4;
        case 0x1e99c8u: goto label_1e99c8;
        case 0x1e99ccu: goto label_1e99cc;
        case 0x1e99d0u: goto label_1e99d0;
        case 0x1e99d4u: goto label_1e99d4;
        case 0x1e99d8u: goto label_1e99d8;
        case 0x1e99dcu: goto label_1e99dc;
        case 0x1e99e0u: goto label_1e99e0;
        case 0x1e99e4u: goto label_1e99e4;
        case 0x1e99e8u: goto label_1e99e8;
        case 0x1e99ecu: goto label_1e99ec;
        case 0x1e99f0u: goto label_1e99f0;
        case 0x1e99f4u: goto label_1e99f4;
        case 0x1e99f8u: goto label_1e99f8;
        case 0x1e99fcu: goto label_1e99fc;
        case 0x1e9a00u: goto label_1e9a00;
        case 0x1e9a04u: goto label_1e9a04;
        case 0x1e9a08u: goto label_1e9a08;
        case 0x1e9a0cu: goto label_1e9a0c;
        case 0x1e9a10u: goto label_1e9a10;
        case 0x1e9a14u: goto label_1e9a14;
        case 0x1e9a18u: goto label_1e9a18;
        case 0x1e9a1cu: goto label_1e9a1c;
        case 0x1e9a20u: goto label_1e9a20;
        case 0x1e9a24u: goto label_1e9a24;
        case 0x1e9a28u: goto label_1e9a28;
        case 0x1e9a2cu: goto label_1e9a2c;
        case 0x1e9a30u: goto label_1e9a30;
        case 0x1e9a34u: goto label_1e9a34;
        case 0x1e9a38u: goto label_1e9a38;
        case 0x1e9a3cu: goto label_1e9a3c;
        case 0x1e9a40u: goto label_1e9a40;
        case 0x1e9a44u: goto label_1e9a44;
        case 0x1e9a48u: goto label_1e9a48;
        case 0x1e9a4cu: goto label_1e9a4c;
        case 0x1e9a50u: goto label_1e9a50;
        case 0x1e9a54u: goto label_1e9a54;
        case 0x1e9a58u: goto label_1e9a58;
        case 0x1e9a5cu: goto label_1e9a5c;
        case 0x1e9a60u: goto label_1e9a60;
        case 0x1e9a64u: goto label_1e9a64;
        case 0x1e9a68u: goto label_1e9a68;
        case 0x1e9a6cu: goto label_1e9a6c;
        case 0x1e9a70u: goto label_1e9a70;
        case 0x1e9a74u: goto label_1e9a74;
        case 0x1e9a78u: goto label_1e9a78;
        case 0x1e9a7cu: goto label_1e9a7c;
        case 0x1e9a80u: goto label_1e9a80;
        case 0x1e9a84u: goto label_1e9a84;
        case 0x1e9a88u: goto label_1e9a88;
        case 0x1e9a8cu: goto label_1e9a8c;
        case 0x1e9a90u: goto label_1e9a90;
        case 0x1e9a94u: goto label_1e9a94;
        case 0x1e9a98u: goto label_1e9a98;
        case 0x1e9a9cu: goto label_1e9a9c;
        case 0x1e9aa0u: goto label_1e9aa0;
        case 0x1e9aa4u: goto label_1e9aa4;
        case 0x1e9aa8u: goto label_1e9aa8;
        case 0x1e9aacu: goto label_1e9aac;
        case 0x1e9ab0u: goto label_1e9ab0;
        case 0x1e9ab4u: goto label_1e9ab4;
        case 0x1e9ab8u: goto label_1e9ab8;
        case 0x1e9abcu: goto label_1e9abc;
        case 0x1e9ac0u: goto label_1e9ac0;
        case 0x1e9ac4u: goto label_1e9ac4;
        case 0x1e9ac8u: goto label_1e9ac8;
        case 0x1e9accu: goto label_1e9acc;
        case 0x1e9ad0u: goto label_1e9ad0;
        case 0x1e9ad4u: goto label_1e9ad4;
        case 0x1e9ad8u: goto label_1e9ad8;
        case 0x1e9adcu: goto label_1e9adc;
        case 0x1e9ae0u: goto label_1e9ae0;
        case 0x1e9ae4u: goto label_1e9ae4;
        case 0x1e9ae8u: goto label_1e9ae8;
        case 0x1e9aecu: goto label_1e9aec;
        case 0x1e9af0u: goto label_1e9af0;
        case 0x1e9af4u: goto label_1e9af4;
        case 0x1e9af8u: goto label_1e9af8;
        case 0x1e9afcu: goto label_1e9afc;
        case 0x1e9b00u: goto label_1e9b00;
        case 0x1e9b04u: goto label_1e9b04;
        case 0x1e9b08u: goto label_1e9b08;
        case 0x1e9b0cu: goto label_1e9b0c;
        case 0x1e9b10u: goto label_1e9b10;
        case 0x1e9b14u: goto label_1e9b14;
        case 0x1e9b18u: goto label_1e9b18;
        case 0x1e9b1cu: goto label_1e9b1c;
        case 0x1e9b20u: goto label_1e9b20;
        case 0x1e9b24u: goto label_1e9b24;
        case 0x1e9b28u: goto label_1e9b28;
        case 0x1e9b2cu: goto label_1e9b2c;
        case 0x1e9b30u: goto label_1e9b30;
        case 0x1e9b34u: goto label_1e9b34;
        case 0x1e9b38u: goto label_1e9b38;
        case 0x1e9b3cu: goto label_1e9b3c;
        case 0x1e9b40u: goto label_1e9b40;
        case 0x1e9b44u: goto label_1e9b44;
        case 0x1e9b48u: goto label_1e9b48;
        case 0x1e9b4cu: goto label_1e9b4c;
        case 0x1e9b50u: goto label_1e9b50;
        case 0x1e9b54u: goto label_1e9b54;
        case 0x1e9b58u: goto label_1e9b58;
        case 0x1e9b5cu: goto label_1e9b5c;
        case 0x1e9b60u: goto label_1e9b60;
        case 0x1e9b64u: goto label_1e9b64;
        case 0x1e9b68u: goto label_1e9b68;
        case 0x1e9b6cu: goto label_1e9b6c;
        case 0x1e9b70u: goto label_1e9b70;
        case 0x1e9b74u: goto label_1e9b74;
        case 0x1e9b78u: goto label_1e9b78;
        case 0x1e9b7cu: goto label_1e9b7c;
        case 0x1e9b80u: goto label_1e9b80;
        case 0x1e9b84u: goto label_1e9b84;
        case 0x1e9b88u: goto label_1e9b88;
        case 0x1e9b8cu: goto label_1e9b8c;
        case 0x1e9b90u: goto label_1e9b90;
        case 0x1e9b94u: goto label_1e9b94;
        case 0x1e9b98u: goto label_1e9b98;
        case 0x1e9b9cu: goto label_1e9b9c;
        case 0x1e9ba0u: goto label_1e9ba0;
        case 0x1e9ba4u: goto label_1e9ba4;
        case 0x1e9ba8u: goto label_1e9ba8;
        case 0x1e9bacu: goto label_1e9bac;
        case 0x1e9bb0u: goto label_1e9bb0;
        case 0x1e9bb4u: goto label_1e9bb4;
        case 0x1e9bb8u: goto label_1e9bb8;
        case 0x1e9bbcu: goto label_1e9bbc;
        case 0x1e9bc0u: goto label_1e9bc0;
        case 0x1e9bc4u: goto label_1e9bc4;
        case 0x1e9bc8u: goto label_1e9bc8;
        case 0x1e9bccu: goto label_1e9bcc;
        case 0x1e9bd0u: goto label_1e9bd0;
        case 0x1e9bd4u: goto label_1e9bd4;
        case 0x1e9bd8u: goto label_1e9bd8;
        case 0x1e9bdcu: goto label_1e9bdc;
        case 0x1e9be0u: goto label_1e9be0;
        case 0x1e9be4u: goto label_1e9be4;
        case 0x1e9be8u: goto label_1e9be8;
        case 0x1e9becu: goto label_1e9bec;
        case 0x1e9bf0u: goto label_1e9bf0;
        case 0x1e9bf4u: goto label_1e9bf4;
        case 0x1e9bf8u: goto label_1e9bf8;
        case 0x1e9bfcu: goto label_1e9bfc;
        case 0x1e9c00u: goto label_1e9c00;
        case 0x1e9c04u: goto label_1e9c04;
        case 0x1e9c08u: goto label_1e9c08;
        case 0x1e9c0cu: goto label_1e9c0c;
        case 0x1e9c10u: goto label_1e9c10;
        case 0x1e9c14u: goto label_1e9c14;
        case 0x1e9c18u: goto label_1e9c18;
        case 0x1e9c1cu: goto label_1e9c1c;
        case 0x1e9c20u: goto label_1e9c20;
        case 0x1e9c24u: goto label_1e9c24;
        case 0x1e9c28u: goto label_1e9c28;
        case 0x1e9c2cu: goto label_1e9c2c;
        case 0x1e9c30u: goto label_1e9c30;
        case 0x1e9c34u: goto label_1e9c34;
        case 0x1e9c38u: goto label_1e9c38;
        case 0x1e9c3cu: goto label_1e9c3c;
        case 0x1e9c40u: goto label_1e9c40;
        case 0x1e9c44u: goto label_1e9c44;
        case 0x1e9c48u: goto label_1e9c48;
        case 0x1e9c4cu: goto label_1e9c4c;
        case 0x1e9c50u: goto label_1e9c50;
        case 0x1e9c54u: goto label_1e9c54;
        case 0x1e9c58u: goto label_1e9c58;
        case 0x1e9c5cu: goto label_1e9c5c;
        case 0x1e9c60u: goto label_1e9c60;
        case 0x1e9c64u: goto label_1e9c64;
        case 0x1e9c68u: goto label_1e9c68;
        case 0x1e9c6cu: goto label_1e9c6c;
        case 0x1e9c70u: goto label_1e9c70;
        case 0x1e9c74u: goto label_1e9c74;
        case 0x1e9c78u: goto label_1e9c78;
        case 0x1e9c7cu: goto label_1e9c7c;
        case 0x1e9c80u: goto label_1e9c80;
        case 0x1e9c84u: goto label_1e9c84;
        case 0x1e9c88u: goto label_1e9c88;
        case 0x1e9c8cu: goto label_1e9c8c;
        case 0x1e9c90u: goto label_1e9c90;
        case 0x1e9c94u: goto label_1e9c94;
        case 0x1e9c98u: goto label_1e9c98;
        case 0x1e9c9cu: goto label_1e9c9c;
        case 0x1e9ca0u: goto label_1e9ca0;
        case 0x1e9ca4u: goto label_1e9ca4;
        case 0x1e9ca8u: goto label_1e9ca8;
        case 0x1e9cacu: goto label_1e9cac;
        case 0x1e9cb0u: goto label_1e9cb0;
        case 0x1e9cb4u: goto label_1e9cb4;
        case 0x1e9cb8u: goto label_1e9cb8;
        case 0x1e9cbcu: goto label_1e9cbc;
        case 0x1e9cc0u: goto label_1e9cc0;
        case 0x1e9cc4u: goto label_1e9cc4;
        case 0x1e9cc8u: goto label_1e9cc8;
        case 0x1e9cccu: goto label_1e9ccc;
        case 0x1e9cd0u: goto label_1e9cd0;
        case 0x1e9cd4u: goto label_1e9cd4;
        case 0x1e9cd8u: goto label_1e9cd8;
        case 0x1e9cdcu: goto label_1e9cdc;
        case 0x1e9ce0u: goto label_1e9ce0;
        case 0x1e9ce4u: goto label_1e9ce4;
        case 0x1e9ce8u: goto label_1e9ce8;
        case 0x1e9cecu: goto label_1e9cec;
        case 0x1e9cf0u: goto label_1e9cf0;
        case 0x1e9cf4u: goto label_1e9cf4;
        case 0x1e9cf8u: goto label_1e9cf8;
        case 0x1e9cfcu: goto label_1e9cfc;
        case 0x1e9d00u: goto label_1e9d00;
        case 0x1e9d04u: goto label_1e9d04;
        case 0x1e9d08u: goto label_1e9d08;
        case 0x1e9d0cu: goto label_1e9d0c;
        case 0x1e9d10u: goto label_1e9d10;
        case 0x1e9d14u: goto label_1e9d14;
        case 0x1e9d18u: goto label_1e9d18;
        case 0x1e9d1cu: goto label_1e9d1c;
        case 0x1e9d20u: goto label_1e9d20;
        case 0x1e9d24u: goto label_1e9d24;
        case 0x1e9d28u: goto label_1e9d28;
        case 0x1e9d2cu: goto label_1e9d2c;
        case 0x1e9d30u: goto label_1e9d30;
        case 0x1e9d34u: goto label_1e9d34;
        case 0x1e9d38u: goto label_1e9d38;
        case 0x1e9d3cu: goto label_1e9d3c;
        case 0x1e9d40u: goto label_1e9d40;
        case 0x1e9d44u: goto label_1e9d44;
        case 0x1e9d48u: goto label_1e9d48;
        case 0x1e9d4cu: goto label_1e9d4c;
        case 0x1e9d50u: goto label_1e9d50;
        case 0x1e9d54u: goto label_1e9d54;
        case 0x1e9d58u: goto label_1e9d58;
        case 0x1e9d5cu: goto label_1e9d5c;
        case 0x1e9d60u: goto label_1e9d60;
        case 0x1e9d64u: goto label_1e9d64;
        case 0x1e9d68u: goto label_1e9d68;
        case 0x1e9d6cu: goto label_1e9d6c;
        case 0x1e9d70u: goto label_1e9d70;
        case 0x1e9d74u: goto label_1e9d74;
        case 0x1e9d78u: goto label_1e9d78;
        case 0x1e9d7cu: goto label_1e9d7c;
        case 0x1e9d80u: goto label_1e9d80;
        case 0x1e9d84u: goto label_1e9d84;
        case 0x1e9d88u: goto label_1e9d88;
        case 0x1e9d8cu: goto label_1e9d8c;
        case 0x1e9d90u: goto label_1e9d90;
        case 0x1e9d94u: goto label_1e9d94;
        case 0x1e9d98u: goto label_1e9d98;
        case 0x1e9d9cu: goto label_1e9d9c;
        case 0x1e9da0u: goto label_1e9da0;
        case 0x1e9da4u: goto label_1e9da4;
        case 0x1e9da8u: goto label_1e9da8;
        case 0x1e9dacu: goto label_1e9dac;
        case 0x1e9db0u: goto label_1e9db0;
        case 0x1e9db4u: goto label_1e9db4;
        case 0x1e9db8u: goto label_1e9db8;
        case 0x1e9dbcu: goto label_1e9dbc;
        case 0x1e9dc0u: goto label_1e9dc0;
        case 0x1e9dc4u: goto label_1e9dc4;
        case 0x1e9dc8u: goto label_1e9dc8;
        case 0x1e9dccu: goto label_1e9dcc;
        case 0x1e9dd0u: goto label_1e9dd0;
        case 0x1e9dd4u: goto label_1e9dd4;
        case 0x1e9dd8u: goto label_1e9dd8;
        case 0x1e9ddcu: goto label_1e9ddc;
        case 0x1e9de0u: goto label_1e9de0;
        case 0x1e9de4u: goto label_1e9de4;
        case 0x1e9de8u: goto label_1e9de8;
        case 0x1e9decu: goto label_1e9dec;
        case 0x1e9df0u: goto label_1e9df0;
        case 0x1e9df4u: goto label_1e9df4;
        case 0x1e9df8u: goto label_1e9df8;
        case 0x1e9dfcu: goto label_1e9dfc;
        case 0x1e9e00u: goto label_1e9e00;
        case 0x1e9e04u: goto label_1e9e04;
        case 0x1e9e08u: goto label_1e9e08;
        case 0x1e9e0cu: goto label_1e9e0c;
        case 0x1e9e10u: goto label_1e9e10;
        case 0x1e9e14u: goto label_1e9e14;
        case 0x1e9e18u: goto label_1e9e18;
        case 0x1e9e1cu: goto label_1e9e1c;
        case 0x1e9e20u: goto label_1e9e20;
        case 0x1e9e24u: goto label_1e9e24;
        case 0x1e9e28u: goto label_1e9e28;
        case 0x1e9e2cu: goto label_1e9e2c;
        case 0x1e9e30u: goto label_1e9e30;
        case 0x1e9e34u: goto label_1e9e34;
        case 0x1e9e38u: goto label_1e9e38;
        case 0x1e9e3cu: goto label_1e9e3c;
        case 0x1e9e40u: goto label_1e9e40;
        case 0x1e9e44u: goto label_1e9e44;
        case 0x1e9e48u: goto label_1e9e48;
        case 0x1e9e4cu: goto label_1e9e4c;
        case 0x1e9e50u: goto label_1e9e50;
        case 0x1e9e54u: goto label_1e9e54;
        case 0x1e9e58u: goto label_1e9e58;
        case 0x1e9e5cu: goto label_1e9e5c;
        case 0x1e9e60u: goto label_1e9e60;
        case 0x1e9e64u: goto label_1e9e64;
        case 0x1e9e68u: goto label_1e9e68;
        case 0x1e9e6cu: goto label_1e9e6c;
        case 0x1e9e70u: goto label_1e9e70;
        case 0x1e9e74u: goto label_1e9e74;
        case 0x1e9e78u: goto label_1e9e78;
        case 0x1e9e7cu: goto label_1e9e7c;
        case 0x1e9e80u: goto label_1e9e80;
        case 0x1e9e84u: goto label_1e9e84;
        case 0x1e9e88u: goto label_1e9e88;
        case 0x1e9e8cu: goto label_1e9e8c;
        case 0x1e9e90u: goto label_1e9e90;
        case 0x1e9e94u: goto label_1e9e94;
        case 0x1e9e98u: goto label_1e9e98;
        case 0x1e9e9cu: goto label_1e9e9c;
        case 0x1e9ea0u: goto label_1e9ea0;
        case 0x1e9ea4u: goto label_1e9ea4;
        case 0x1e9ea8u: goto label_1e9ea8;
        case 0x1e9eacu: goto label_1e9eac;
        case 0x1e9eb0u: goto label_1e9eb0;
        case 0x1e9eb4u: goto label_1e9eb4;
        case 0x1e9eb8u: goto label_1e9eb8;
        case 0x1e9ebcu: goto label_1e9ebc;
        case 0x1e9ec0u: goto label_1e9ec0;
        case 0x1e9ec4u: goto label_1e9ec4;
        case 0x1e9ec8u: goto label_1e9ec8;
        case 0x1e9eccu: goto label_1e9ecc;
        case 0x1e9ed0u: goto label_1e9ed0;
        case 0x1e9ed4u: goto label_1e9ed4;
        case 0x1e9ed8u: goto label_1e9ed8;
        case 0x1e9edcu: goto label_1e9edc;
        case 0x1e9ee0u: goto label_1e9ee0;
        case 0x1e9ee4u: goto label_1e9ee4;
        case 0x1e9ee8u: goto label_1e9ee8;
        case 0x1e9eecu: goto label_1e9eec;
        case 0x1e9ef0u: goto label_1e9ef0;
        case 0x1e9ef4u: goto label_1e9ef4;
        case 0x1e9ef8u: goto label_1e9ef8;
        case 0x1e9efcu: goto label_1e9efc;
        case 0x1e9f00u: goto label_1e9f00;
        case 0x1e9f04u: goto label_1e9f04;
        case 0x1e9f08u: goto label_1e9f08;
        case 0x1e9f0cu: goto label_1e9f0c;
        case 0x1e9f10u: goto label_1e9f10;
        case 0x1e9f14u: goto label_1e9f14;
        case 0x1e9f18u: goto label_1e9f18;
        case 0x1e9f1cu: goto label_1e9f1c;
        case 0x1e9f20u: goto label_1e9f20;
        case 0x1e9f24u: goto label_1e9f24;
        case 0x1e9f28u: goto label_1e9f28;
        case 0x1e9f2cu: goto label_1e9f2c;
        case 0x1e9f30u: goto label_1e9f30;
        case 0x1e9f34u: goto label_1e9f34;
        case 0x1e9f38u: goto label_1e9f38;
        case 0x1e9f3cu: goto label_1e9f3c;
        case 0x1e9f40u: goto label_1e9f40;
        case 0x1e9f44u: goto label_1e9f44;
        case 0x1e9f48u: goto label_1e9f48;
        case 0x1e9f4cu: goto label_1e9f4c;
        case 0x1e9f50u: goto label_1e9f50;
        case 0x1e9f54u: goto label_1e9f54;
        case 0x1e9f58u: goto label_1e9f58;
        case 0x1e9f5cu: goto label_1e9f5c;
        case 0x1e9f60u: goto label_1e9f60;
        case 0x1e9f64u: goto label_1e9f64;
        case 0x1e9f68u: goto label_1e9f68;
        case 0x1e9f6cu: goto label_1e9f6c;
        case 0x1e9f70u: goto label_1e9f70;
        case 0x1e9f74u: goto label_1e9f74;
        case 0x1e9f78u: goto label_1e9f78;
        case 0x1e9f7cu: goto label_1e9f7c;
        case 0x1e9f80u: goto label_1e9f80;
        case 0x1e9f84u: goto label_1e9f84;
        case 0x1e9f88u: goto label_1e9f88;
        case 0x1e9f8cu: goto label_1e9f8c;
        case 0x1e9f90u: goto label_1e9f90;
        case 0x1e9f94u: goto label_1e9f94;
        case 0x1e9f98u: goto label_1e9f98;
        case 0x1e9f9cu: goto label_1e9f9c;
        case 0x1e9fa0u: goto label_1e9fa0;
        case 0x1e9fa4u: goto label_1e9fa4;
        case 0x1e9fa8u: goto label_1e9fa8;
        case 0x1e9facu: goto label_1e9fac;
        case 0x1e9fb0u: goto label_1e9fb0;
        case 0x1e9fb4u: goto label_1e9fb4;
        case 0x1e9fb8u: goto label_1e9fb8;
        case 0x1e9fbcu: goto label_1e9fbc;
        case 0x1e9fc0u: goto label_1e9fc0;
        case 0x1e9fc4u: goto label_1e9fc4;
        case 0x1e9fc8u: goto label_1e9fc8;
        case 0x1e9fccu: goto label_1e9fcc;
        case 0x1e9fd0u: goto label_1e9fd0;
        case 0x1e9fd4u: goto label_1e9fd4;
        case 0x1e9fd8u: goto label_1e9fd8;
        case 0x1e9fdcu: goto label_1e9fdc;
        case 0x1e9fe0u: goto label_1e9fe0;
        case 0x1e9fe4u: goto label_1e9fe4;
        case 0x1e9fe8u: goto label_1e9fe8;
        case 0x1e9fecu: goto label_1e9fec;
        case 0x1e9ff0u: goto label_1e9ff0;
        case 0x1e9ff4u: goto label_1e9ff4;
        case 0x1e9ff8u: goto label_1e9ff8;
        case 0x1e9ffcu: goto label_1e9ffc;
        case 0x1ea000u: goto label_1ea000;
        case 0x1ea004u: goto label_1ea004;
        case 0x1ea008u: goto label_1ea008;
        case 0x1ea00cu: goto label_1ea00c;
        case 0x1ea010u: goto label_1ea010;
        case 0x1ea014u: goto label_1ea014;
        case 0x1ea018u: goto label_1ea018;
        case 0x1ea01cu: goto label_1ea01c;
        case 0x1ea020u: goto label_1ea020;
        case 0x1ea024u: goto label_1ea024;
        case 0x1ea028u: goto label_1ea028;
        case 0x1ea02cu: goto label_1ea02c;
        case 0x1ea030u: goto label_1ea030;
        case 0x1ea034u: goto label_1ea034;
        case 0x1ea038u: goto label_1ea038;
        case 0x1ea03cu: goto label_1ea03c;
        case 0x1ea040u: goto label_1ea040;
        case 0x1ea044u: goto label_1ea044;
        case 0x1ea048u: goto label_1ea048;
        case 0x1ea04cu: goto label_1ea04c;
        case 0x1ea050u: goto label_1ea050;
        case 0x1ea054u: goto label_1ea054;
        case 0x1ea058u: goto label_1ea058;
        case 0x1ea05cu: goto label_1ea05c;
        case 0x1ea060u: goto label_1ea060;
        case 0x1ea064u: goto label_1ea064;
        case 0x1ea068u: goto label_1ea068;
        case 0x1ea06cu: goto label_1ea06c;
        case 0x1ea070u: goto label_1ea070;
        case 0x1ea074u: goto label_1ea074;
        case 0x1ea078u: goto label_1ea078;
        case 0x1ea07cu: goto label_1ea07c;
        case 0x1ea080u: goto label_1ea080;
        case 0x1ea084u: goto label_1ea084;
        case 0x1ea088u: goto label_1ea088;
        case 0x1ea08cu: goto label_1ea08c;
        case 0x1ea090u: goto label_1ea090;
        case 0x1ea094u: goto label_1ea094;
        case 0x1ea098u: goto label_1ea098;
        case 0x1ea09cu: goto label_1ea09c;
        case 0x1ea0a0u: goto label_1ea0a0;
        case 0x1ea0a4u: goto label_1ea0a4;
        case 0x1ea0a8u: goto label_1ea0a8;
        case 0x1ea0acu: goto label_1ea0ac;
        case 0x1ea0b0u: goto label_1ea0b0;
        case 0x1ea0b4u: goto label_1ea0b4;
        case 0x1ea0b8u: goto label_1ea0b8;
        case 0x1ea0bcu: goto label_1ea0bc;
        case 0x1ea0c0u: goto label_1ea0c0;
        case 0x1ea0c4u: goto label_1ea0c4;
        case 0x1ea0c8u: goto label_1ea0c8;
        case 0x1ea0ccu: goto label_1ea0cc;
        case 0x1ea0d0u: goto label_1ea0d0;
        case 0x1ea0d4u: goto label_1ea0d4;
        case 0x1ea0d8u: goto label_1ea0d8;
        case 0x1ea0dcu: goto label_1ea0dc;
        case 0x1ea0e0u: goto label_1ea0e0;
        case 0x1ea0e4u: goto label_1ea0e4;
        case 0x1ea0e8u: goto label_1ea0e8;
        case 0x1ea0ecu: goto label_1ea0ec;
        case 0x1ea0f0u: goto label_1ea0f0;
        case 0x1ea0f4u: goto label_1ea0f4;
        case 0x1ea0f8u: goto label_1ea0f8;
        case 0x1ea0fcu: goto label_1ea0fc;
        case 0x1ea100u: goto label_1ea100;
        case 0x1ea104u: goto label_1ea104;
        case 0x1ea108u: goto label_1ea108;
        case 0x1ea10cu: goto label_1ea10c;
        case 0x1ea110u: goto label_1ea110;
        case 0x1ea114u: goto label_1ea114;
        case 0x1ea118u: goto label_1ea118;
        case 0x1ea11cu: goto label_1ea11c;
        case 0x1ea120u: goto label_1ea120;
        case 0x1ea124u: goto label_1ea124;
        case 0x1ea128u: goto label_1ea128;
        case 0x1ea12cu: goto label_1ea12c;
        case 0x1ea130u: goto label_1ea130;
        case 0x1ea134u: goto label_1ea134;
        case 0x1ea138u: goto label_1ea138;
        case 0x1ea13cu: goto label_1ea13c;
        case 0x1ea140u: goto label_1ea140;
        case 0x1ea144u: goto label_1ea144;
        case 0x1ea148u: goto label_1ea148;
        case 0x1ea14cu: goto label_1ea14c;
        case 0x1ea150u: goto label_1ea150;
        case 0x1ea154u: goto label_1ea154;
        case 0x1ea158u: goto label_1ea158;
        case 0x1ea15cu: goto label_1ea15c;
        case 0x1ea160u: goto label_1ea160;
        case 0x1ea164u: goto label_1ea164;
        case 0x1ea168u: goto label_1ea168;
        case 0x1ea16cu: goto label_1ea16c;
        default: return;
    }

label_1e99a0:
    // 0x1e99a0: 0x146200ce  bne         $v1, $v0, . + 4 + (0xCE << 2)
label_1e99a4:
    if (ctx->pc == 0x1E99A4u) {
        ctx->pc = 0x1E99A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E99A0u;
        // 0x1e99a4: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E99A8u;
        goto label_1e99a8;
    }
    ctx->pc = 0x1E99A0u;
    {
        const bool branch_taken_0x1e99a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E99A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E99A0u;
        // 0x1e99a4: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e99a0) {
            ctx->pc = 0x1E9CDCu;
            goto label_1e9cdc;
        }
    }
    ctx->pc = 0x1E99A8u;
label_1e99a8:
    // 0x1e99a8: 0xc045db4  jal         func_1176D0
label_1e99ac:
    if (ctx->pc == 0x1E99ACu) {
        ctx->pc = 0x1E99ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E99A8u;
        // 0x1e99ac: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E99B0u;
        goto label_1e99b0;
    }
    ctx->pc = 0x1E99A8u;
    SET_GPR_U32(ctx, 31, 0x1E99B0u);
    ctx->pc = 0x1E99ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E99A8u;
    // 0x1e99ac: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1176D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1176D0u, 0x1E99A8u, 0x1E99B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E99B0u;
label_1e99b0:
    // 0x1e99b0: 0x100000ca  b           . + 4 + (0xCA << 2)
label_1e99b4:
    if (ctx->pc == 0x1E99B4u) {
        ctx->pc = 0x1E99B8u;
        goto label_1e99b8;
    }
    ctx->pc = 0x1E99B0u;
    {
        const bool branch_taken_0x1e99b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e99b0) {
            ctx->pc = 0x1E9CDCu;
            goto label_1e9cdc;
        }
    }
    ctx->pc = 0x1E99B8u;
label_1e99b8:
    // 0x1e99b8: 0x86230054  lh          $v1, 0x54($s1)
    ctx->pc = 0x1e99b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
label_1e99bc:
    // 0x1e99bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e99bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e99c0:
    // 0x1e99c0: 0x146200c6  bne         $v1, $v0, . + 4 + (0xC6 << 2)
label_1e99c4:
    if (ctx->pc == 0x1E99C4u) {
        ctx->pc = 0x1E99C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E99C0u;
        // 0x1e99c4: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E99C8u;
        goto label_1e99c8;
    }
    ctx->pc = 0x1E99C0u;
    {
        const bool branch_taken_0x1e99c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E99C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E99C0u;
        // 0x1e99c4: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e99c0) {
            ctx->pc = 0x1E9CDCu;
            goto label_1e9cdc;
        }
    }
    ctx->pc = 0x1E99C8u;
label_1e99c8:
    // 0x1e99c8: 0xc04610c  jal         func_118430
label_1e99cc:
    if (ctx->pc == 0x1E99CCu) {
        ctx->pc = 0x1E99CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E99C8u;
        // 0x1e99cc: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E99D0u;
        goto label_1e99d0;
    }
    ctx->pc = 0x1E99C8u;
    SET_GPR_U32(ctx, 31, 0x1E99D0u);
    ctx->pc = 0x1E99CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E99C8u;
    // 0x1e99cc: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118430u, 0x1E99C8u, 0x1E99D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E99D0u;
label_1e99d0:
    // 0x1e99d0: 0x100000c2  b           . + 4 + (0xC2 << 2)
label_1e99d4:
    if (ctx->pc == 0x1E99D4u) {
        ctx->pc = 0x1E99D8u;
        goto label_1e99d8;
    }
    ctx->pc = 0x1E99D0u;
    {
        const bool branch_taken_0x1e99d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e99d0) {
            ctx->pc = 0x1E9CDCu;
            goto label_1e9cdc;
        }
    }
    ctx->pc = 0x1E99D8u;
label_1e99d8:
    // 0x1e99d8: 0x86230054  lh          $v1, 0x54($s1)
    ctx->pc = 0x1e99d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
label_1e99dc:
    // 0x1e99dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e99dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e99e0:
    // 0x1e99e0: 0x146200be  bne         $v1, $v0, . + 4 + (0xBE << 2)
label_1e99e4:
    if (ctx->pc == 0x1E99E4u) {
        ctx->pc = 0x1E99E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E99E0u;
        // 0x1e99e4: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E99E8u;
        goto label_1e99e8;
    }
    ctx->pc = 0x1E99E0u;
    {
        const bool branch_taken_0x1e99e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E99E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E99E0u;
        // 0x1e99e4: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e99e0) {
            ctx->pc = 0x1E9CDCu;
            goto label_1e9cdc;
        }
    }
    ctx->pc = 0x1E99E8u;
label_1e99e8:
    // 0x1e99e8: 0xc045dbc  jal         func_1176F0
label_1e99ec:
    if (ctx->pc == 0x1E99ECu) {
        ctx->pc = 0x1E99ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E99E8u;
        // 0x1e99ec: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E99F0u;
        goto label_1e99f0;
    }
    ctx->pc = 0x1E99E8u;
    SET_GPR_U32(ctx, 31, 0x1E99F0u);
    ctx->pc = 0x1E99ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E99E8u;
    // 0x1e99ec: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1176F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1176F0u, 0x1E99E8u, 0x1E99F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E99F0u;
label_1e99f0:
    // 0x1e99f0: 0x100000ba  b           . + 4 + (0xBA << 2)
label_1e99f4:
    if (ctx->pc == 0x1E99F4u) {
        ctx->pc = 0x1E99F8u;
        goto label_1e99f8;
    }
    ctx->pc = 0x1E99F0u;
    {
        const bool branch_taken_0x1e99f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e99f0) {
            ctx->pc = 0x1E9CDCu;
            goto label_1e9cdc;
        }
    }
    ctx->pc = 0x1E99F8u;
label_1e99f8:
    // 0x1e99f8: 0x86230054  lh          $v1, 0x54($s1)
    ctx->pc = 0x1e99f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
label_1e99fc:
    // 0x1e99fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e99fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e9a00:
    // 0x1e9a00: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_1e9a04:
    if (ctx->pc == 0x1E9A04u) {
        ctx->pc = 0x1E9A08u;
        goto label_1e9a08;
    }
    ctx->pc = 0x1E9A00u;
    {
        const bool branch_taken_0x1e9a00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e9a00) {
            ctx->pc = 0x1E9A30u;
            goto label_1e9a30;
        }
    }
    ctx->pc = 0x1E9A08u;
label_1e9a08:
    // 0x1e9a08: 0x90820232  lbu         $v0, 0x232($a0)
    ctx->pc = 0x1e9a08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 562)));
label_1e9a0c:
    // 0x1e9a0c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1e9a10:
    if (ctx->pc == 0x1E9A10u) {
        ctx->pc = 0x1E9A14u;
        goto label_1e9a14;
    }
    ctx->pc = 0x1E9A0Cu;
    {
        const bool branch_taken_0x1e9a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9a0c) {
            ctx->pc = 0x1E9A24u;
            goto label_1e9a24;
        }
    }
    ctx->pc = 0x1E9A14u;
label_1e9a14:
    // 0x1e9a14: 0xc045f28  jal         func_117CA0
label_1e9a18:
    if (ctx->pc == 0x1E9A18u) {
        ctx->pc = 0x1E9A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9A14u;
        // 0x1e9a18: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9A1Cu;
        goto label_1e9a1c;
    }
    ctx->pc = 0x1E9A14u;
    SET_GPR_U32(ctx, 31, 0x1E9A1Cu);
    ctx->pc = 0x1E9A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9A14u;
    // 0x1e9a18: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117CA0u, 0x1E9A14u, 0x1E9A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9A1Cu;
label_1e9a1c:
    // 0x1e9a1c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e9a20:
    if (ctx->pc == 0x1E9A20u) {
        ctx->pc = 0x1E9A24u;
        goto label_1e9a24;
    }
    ctx->pc = 0x1E9A1Cu;
    {
        const bool branch_taken_0x1e9a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9a1c) {
            ctx->pc = 0x1E9A30u;
            goto label_1e9a30;
        }
    }
    ctx->pc = 0x1E9A24u;
label_1e9a24:
    // 0x1e9a24: 0x0  nop
    ctx->pc = 0x1e9a24u;
    // NOP
label_1e9a28:
    // 0x1e9a28: 0xc045f20  jal         func_117C80
label_1e9a2c:
    if (ctx->pc == 0x1E9A2Cu) {
        ctx->pc = 0x1E9A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9A28u;
        // 0x1e9a2c: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9A30u;
        goto label_1e9a30;
    }
    ctx->pc = 0x1E9A28u;
    SET_GPR_U32(ctx, 31, 0x1E9A30u);
    ctx->pc = 0x1E9A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9A28u;
    // 0x1e9a2c: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C80u, 0x1E9A28u, 0x1E9A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9A30u;
label_1e9a30:
    // 0x1e9a30: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x1e9a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_1e9a34:
    // 0x1e9a34: 0xc045f3c  jal         func_117CF0
label_1e9a38:
    if (ctx->pc == 0x1E9A38u) {
        ctx->pc = 0x1E9A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9A34u;
        // 0x1e9a38: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9A3Cu;
        goto label_1e9a3c;
    }
    ctx->pc = 0x1E9A34u;
    SET_GPR_U32(ctx, 31, 0x1E9A3Cu);
    ctx->pc = 0x1E9A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9A34u;
    // 0x1e9a38: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117CF0u, 0x1E9A34u, 0x1E9A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9A3Cu;
label_1e9a3c:
    // 0x1e9a3c: 0x100000a7  b           . + 4 + (0xA7 << 2)
label_1e9a40:
    if (ctx->pc == 0x1E9A40u) {
        ctx->pc = 0x1E9A44u;
        goto label_1e9a44;
    }
    ctx->pc = 0x1E9A3Cu;
    {
        const bool branch_taken_0x1e9a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9a3c) {
            ctx->pc = 0x1E9CDCu;
            goto label_1e9cdc;
        }
    }
    ctx->pc = 0x1E9A44u;
label_1e9a44:
    // 0x1e9a44: 0x0  nop
    ctx->pc = 0x1e9a44u;
    // NOP
label_1e9a48:
    // 0x1e9a48: 0x86230054  lh          $v1, 0x54($s1)
    ctx->pc = 0x1e9a48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
label_1e9a4c:
    // 0x1e9a4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e9a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e9a50:
    // 0x1e9a50: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_1e9a54:
    if (ctx->pc == 0x1E9A54u) {
        ctx->pc = 0x1E9A58u;
        goto label_1e9a58;
    }
    ctx->pc = 0x1E9A50u;
    {
        const bool branch_taken_0x1e9a50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e9a50) {
            ctx->pc = 0x1E9A80u;
            goto label_1e9a80;
        }
    }
    ctx->pc = 0x1E9A58u;
label_1e9a58:
    // 0x1e9a58: 0x90820232  lbu         $v0, 0x232($a0)
    ctx->pc = 0x1e9a58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 562)));
label_1e9a5c:
    // 0x1e9a5c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1e9a60:
    if (ctx->pc == 0x1E9A60u) {
        ctx->pc = 0x1E9A64u;
        goto label_1e9a64;
    }
    ctx->pc = 0x1E9A5Cu;
    {
        const bool branch_taken_0x1e9a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9a5c) {
            ctx->pc = 0x1E9A74u;
            goto label_1e9a74;
        }
    }
    ctx->pc = 0x1E9A64u;
label_1e9a64:
    // 0x1e9a64: 0xc045f18  jal         func_117C60
label_1e9a68:
    if (ctx->pc == 0x1E9A68u) {
        ctx->pc = 0x1E9A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9A64u;
        // 0x1e9a68: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9A6Cu;
        goto label_1e9a6c;
    }
    ctx->pc = 0x1E9A64u;
    SET_GPR_U32(ctx, 31, 0x1E9A6Cu);
    ctx->pc = 0x1E9A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9A64u;
    // 0x1e9a68: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C60u, 0x1E9A64u, 0x1E9A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9A6Cu;
label_1e9a6c:
    // 0x1e9a6c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e9a70:
    if (ctx->pc == 0x1E9A70u) {
        ctx->pc = 0x1E9A74u;
        goto label_1e9a74;
    }
    ctx->pc = 0x1E9A6Cu;
    {
        const bool branch_taken_0x1e9a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9a6c) {
            ctx->pc = 0x1E9A80u;
            goto label_1e9a80;
        }
    }
    ctx->pc = 0x1E9A74u;
label_1e9a74:
    // 0x1e9a74: 0x0  nop
    ctx->pc = 0x1e9a74u;
    // NOP
label_1e9a78:
    // 0x1e9a78: 0xc045f10  jal         func_117C40
label_1e9a7c:
    if (ctx->pc == 0x1E9A7Cu) {
        ctx->pc = 0x1E9A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9A78u;
        // 0x1e9a7c: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9A80u;
        goto label_1e9a80;
    }
    ctx->pc = 0x1E9A78u;
    SET_GPR_U32(ctx, 31, 0x1E9A80u);
    ctx->pc = 0x1E9A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9A78u;
    // 0x1e9a7c: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C40u, 0x1E9A78u, 0x1E9A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9A80u;
label_1e9a80:
    // 0x1e9a80: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x1e9a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_1e9a84:
    // 0x1e9a84: 0xc045f30  jal         func_117CC0
label_1e9a88:
    if (ctx->pc == 0x1E9A88u) {
        ctx->pc = 0x1E9A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9A84u;
        // 0x1e9a88: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9A8Cu;
        goto label_1e9a8c;
    }
    ctx->pc = 0x1E9A84u;
    SET_GPR_U32(ctx, 31, 0x1E9A8Cu);
    ctx->pc = 0x1E9A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9A84u;
    // 0x1e9a88: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117CC0u, 0x1E9A84u, 0x1E9A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9A8Cu;
label_1e9a8c:
    // 0x1e9a8c: 0x10000093  b           . + 4 + (0x93 << 2)
label_1e9a90:
    if (ctx->pc == 0x1E9A90u) {
        ctx->pc = 0x1E9A94u;
        goto label_1e9a94;
    }
    ctx->pc = 0x1E9A8Cu;
    {
        const bool branch_taken_0x1e9a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9a8c) {
            ctx->pc = 0x1E9CDCu;
            goto label_1e9cdc;
        }
    }
    ctx->pc = 0x1E9A94u;
label_1e9a94:
    // 0x1e9a94: 0x0  nop
    ctx->pc = 0x1e9a94u;
    // NOP
label_1e9a98:
    // 0x1e9a98: 0xc045ec0  jal         func_117B00
label_1e9a9c:
    if (ctx->pc == 0x1E9A9Cu) {
        ctx->pc = 0x1E9A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9A98u;
        // 0x1e9a9c: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9AA0u;
        goto label_1e9aa0;
    }
    ctx->pc = 0x1E9A98u;
    SET_GPR_U32(ctx, 31, 0x1E9AA0u);
    ctx->pc = 0x1E9A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9A98u;
    // 0x1e9a9c: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117B00u, 0x1E9A98u, 0x1E9AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9AA0u;
label_1e9aa0:
    // 0x1e9aa0: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x1e9aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_1e9aa4:
    // 0x1e9aa4: 0xc045eac  jal         func_117AB0
label_1e9aa8:
    if (ctx->pc == 0x1E9AA8u) {
        ctx->pc = 0x1E9AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9AA4u;
        // 0x1e9aa8: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9AACu;
        goto label_1e9aac;
    }
    ctx->pc = 0x1E9AA4u;
    SET_GPR_U32(ctx, 31, 0x1E9AACu);
    ctx->pc = 0x1E9AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9AA4u;
    // 0x1e9aa8: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117AB0u, 0x1E9AA4u, 0x1E9AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9AACu;
label_1e9aac:
    // 0x1e9aac: 0x1000008b  b           . + 4 + (0x8B << 2)
label_1e9ab0:
    if (ctx->pc == 0x1E9AB0u) {
        ctx->pc = 0x1E9AB4u;
        goto label_1e9ab4;
    }
    ctx->pc = 0x1E9AACu;
    {
        const bool branch_taken_0x1e9aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9aac) {
            ctx->pc = 0x1E9CDCu;
            goto label_1e9cdc;
        }
    }
    ctx->pc = 0x1E9AB4u;
label_1e9ab4:
    // 0x1e9ab4: 0x0  nop
    ctx->pc = 0x1e9ab4u;
    // NOP
label_1e9ab8:
    // 0x1e9ab8: 0xc046964  jal         func_11A590
label_1e9abc:
    if (ctx->pc == 0x1E9ABCu) {
        ctx->pc = 0x1E9ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9AB8u;
        // 0x1e9abc: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9AC0u;
        goto label_1e9ac0;
    }
    ctx->pc = 0x1E9AB8u;
    SET_GPR_U32(ctx, 31, 0x1E9AC0u);
    ctx->pc = 0x1E9ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9AB8u;
    // 0x1e9abc: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A590u, 0x1E9AB8u, 0x1E9AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9AC0u;
label_1e9ac0:
    // 0x1e9ac0: 0x10000086  b           . + 4 + (0x86 << 2)
label_1e9ac4:
    if (ctx->pc == 0x1E9AC4u) {
        ctx->pc = 0x1E9AC8u;
        goto label_1e9ac8;
    }
    ctx->pc = 0x1E9AC0u;
    {
        const bool branch_taken_0x1e9ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9ac0) {
            ctx->pc = 0x1E9CDCu;
            goto label_1e9cdc;
        }
    }
    ctx->pc = 0x1E9AC8u;
label_1e9ac8:
    // 0x1e9ac8: 0xc046934  jal         func_11A4D0
label_1e9acc:
    if (ctx->pc == 0x1E9ACCu) {
        ctx->pc = 0x1E9ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9AC8u;
        // 0x1e9acc: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9AD0u;
        goto label_1e9ad0;
    }
    ctx->pc = 0x1E9AC8u;
    SET_GPR_U32(ctx, 31, 0x1E9AD0u);
    ctx->pc = 0x1E9ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9AC8u;
    // 0x1e9acc: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A4D0u, 0x1E9AC8u, 0x1E9AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9AD0u;
label_1e9ad0:
    // 0x1e9ad0: 0x10000082  b           . + 4 + (0x82 << 2)
label_1e9ad4:
    if (ctx->pc == 0x1E9AD4u) {
        ctx->pc = 0x1E9AD8u;
        goto label_1e9ad8;
    }
    ctx->pc = 0x1E9AD0u;
    {
        const bool branch_taken_0x1e9ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9ad0) {
            ctx->pc = 0x1E9CDCu;
            goto label_1e9cdc;
        }
    }
    ctx->pc = 0x1E9AD8u;
label_1e9ad8:
    // 0x1e9ad8: 0xc046904  jal         func_11A410
label_1e9adc:
    if (ctx->pc == 0x1E9ADCu) {
        ctx->pc = 0x1E9ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9AD8u;
        // 0x1e9adc: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9AE0u;
        goto label_1e9ae0;
    }
    ctx->pc = 0x1E9AD8u;
    SET_GPR_U32(ctx, 31, 0x1E9AE0u);
    ctx->pc = 0x1E9ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9AD8u;
    // 0x1e9adc: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A410u, 0x1E9AD8u, 0x1E9AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9AE0u;
label_1e9ae0:
    // 0x1e9ae0: 0x1000007e  b           . + 4 + (0x7E << 2)
label_1e9ae4:
    if (ctx->pc == 0x1E9AE4u) {
        ctx->pc = 0x1E9AE8u;
        goto label_1e9ae8;
    }
    ctx->pc = 0x1E9AE0u;
    {
        const bool branch_taken_0x1e9ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9ae0) {
            ctx->pc = 0x1E9CDCu;
            goto label_1e9cdc;
        }
    }
    ctx->pc = 0x1E9AE8u;
label_1e9ae8:
    // 0x1e9ae8: 0xc0468d4  jal         func_11A350
label_1e9aec:
    if (ctx->pc == 0x1E9AECu) {
        ctx->pc = 0x1E9AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9AE8u;
        // 0x1e9aec: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9AF0u;
        goto label_1e9af0;
    }
    ctx->pc = 0x1E9AE8u;
    SET_GPR_U32(ctx, 31, 0x1E9AF0u);
    ctx->pc = 0x1E9AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9AE8u;
    // 0x1e9aec: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A350u, 0x1E9AE8u, 0x1E9AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9AF0u;
label_1e9af0:
    // 0x1e9af0: 0x1000007a  b           . + 4 + (0x7A << 2)
label_1e9af4:
    if (ctx->pc == 0x1E9AF4u) {
        ctx->pc = 0x1E9AF8u;
        goto label_1e9af8;
    }
    ctx->pc = 0x1E9AF0u;
    {
        const bool branch_taken_0x1e9af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9af0) {
            ctx->pc = 0x1E9CDCu;
            goto label_1e9cdc;
        }
    }
    ctx->pc = 0x1E9AF8u;
label_1e9af8:
    // 0x1e9af8: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x1e9af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_1e9afc:
    // 0x1e9afc: 0xc0468cc  jal         func_11A330
label_1e9b00:
    if (ctx->pc == 0x1E9B00u) {
        ctx->pc = 0x1E9B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9AFCu;
        // 0x1e9b00: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9B04u;
        goto label_1e9b04;
    }
    ctx->pc = 0x1E9AFCu;
    SET_GPR_U32(ctx, 31, 0x1E9B04u);
    ctx->pc = 0x1E9B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9AFCu;
    // 0x1e9b00: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A330u, 0x1E9AFCu, 0x1E9B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9B04u;
label_1e9b04:
    // 0x1e9b04: 0x10000075  b           . + 4 + (0x75 << 2)
label_1e9b08:
    if (ctx->pc == 0x1E9B08u) {
        ctx->pc = 0x1E9B0Cu;
        goto label_1e9b0c;
    }
    ctx->pc = 0x1E9B04u;
    {
        const bool branch_taken_0x1e9b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9b04) {
            ctx->pc = 0x1E9CDCu;
            goto label_1e9cdc;
        }
    }
    ctx->pc = 0x1E9B0Cu;
label_1e9b0c:
    // 0x1e9b0c: 0x0  nop
    ctx->pc = 0x1e9b0cu;
    // NOP
label_1e9b10:
    // 0x1e9b10: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x1e9b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_1e9b14:
    // 0x1e9b14: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1e9b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_1e9b18:
    // 0x1e9b18: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1e9b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1e9b1c:
    // 0x1e9b1c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e9b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1e9b20:
    // 0x1e9b20: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1e9b24:
    if (ctx->pc == 0x1E9B24u) {
        ctx->pc = 0x1E9B28u;
        goto label_1e9b28;
    }
    ctx->pc = 0x1E9B20u;
    {
        const bool branch_taken_0x1e9b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9b20) {
            ctx->pc = 0x1E9B68u;
            goto label_1e9b68;
        }
    }
    ctx->pc = 0x1E9B28u;
label_1e9b28:
    // 0x1e9b28: 0x9622005c  lhu         $v0, 0x5C($s1)
    ctx->pc = 0x1e9b28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 92)));
label_1e9b2c:
    // 0x1e9b2c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1e9b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_1e9b30:
    // 0x1e9b30: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1e9b34:
    if (ctx->pc == 0x1E9B34u) {
        ctx->pc = 0x1E9B38u;
        goto label_1e9b38;
    }
    ctx->pc = 0x1E9B30u;
    {
        const bool branch_taken_0x1e9b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9b30) {
            ctx->pc = 0x1E9B68u;
            goto label_1e9b68;
        }
    }
    ctx->pc = 0x1E9B38u;
label_1e9b38:
    // 0x1e9b38: 0x82240059  lb          $a0, 0x59($s1)
    ctx->pc = 0x1e9b38u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 89)));
label_1e9b3c:
    // 0x1e9b3c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e9b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e9b40:
    // 0x1e9b40: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
label_1e9b44:
    if (ctx->pc == 0x1E9B44u) {
        ctx->pc = 0x1E9B48u;
        goto label_1e9b48;
    }
    ctx->pc = 0x1E9B40u;
    {
        const bool branch_taken_0x1e9b40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e9b40) {
            ctx->pc = 0x1E9B58u;
            goto label_1e9b58;
        }
    }
    ctx->pc = 0x1E9B48u;
label_1e9b48:
    // 0x1e9b48: 0xc05ca18  jal         func_172860
label_1e9b4c:
    if (ctx->pc == 0x1E9B4Cu) {
        ctx->pc = 0x1E9B50u;
        goto label_1e9b50;
    }
    ctx->pc = 0x1E9B48u;
    SET_GPR_U32(ctx, 31, 0x1E9B50u);
    ctx->pc = 0x172860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172860u, 0x1E9B48u, 0x1E9B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9B50u;
label_1e9b50:
    // 0x1e9b50: 0x10000005  b           . + 4 + (0x5 << 2)
label_1e9b54:
    if (ctx->pc == 0x1E9B54u) {
        ctx->pc = 0x1E9B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9B50u;
        // 0x1e9b54: 0xa2220059  sb          $v0, 0x59($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 89), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9B58u;
        goto label_1e9b58;
    }
    ctx->pc = 0x1E9B50u;
    {
        const bool branch_taken_0x1e9b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9B50u;
        // 0x1e9b54: 0xa2220059  sb          $v0, 0x59($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 89), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9b50) {
            ctx->pc = 0x1E9B68u;
            goto label_1e9b68;
        }
    }
    ctx->pc = 0x1E9B58u;
label_1e9b58:
    // 0x1e9b58: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1e9b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_1e9b5c:
    // 0x1e9b5c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e9b5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e9b60:
    // 0x1e9b60: 0xc046ea4  jal         func_11BA90
label_1e9b64:
    if (ctx->pc == 0x1E9B64u) {
        ctx->pc = 0x1E9B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9B60u;
        // 0x1e9b64: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9B68u;
        goto label_1e9b68;
    }
    ctx->pc = 0x1E9B60u;
    SET_GPR_U32(ctx, 31, 0x1E9B68u);
    ctx->pc = 0x1E9B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9B60u;
    // 0x1e9b64: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BA90u, 0x1E9B60u, 0x1E9B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9B68u;
label_1e9b68:
    // 0x1e9b68: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x1e9b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_1e9b6c:
    // 0x1e9b6c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1e9b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_1e9b70:
    // 0x1e9b70: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1e9b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1e9b74:
    // 0x1e9b74: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e9b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1e9b78:
    // 0x1e9b78: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1e9b7c:
    if (ctx->pc == 0x1E9B7Cu) {
        ctx->pc = 0x1E9B80u;
        goto label_1e9b80;
    }
    ctx->pc = 0x1E9B78u;
    {
        const bool branch_taken_0x1e9b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9b78) {
            ctx->pc = 0x1E9BC8u;
            goto label_1e9bc8;
        }
    }
    ctx->pc = 0x1E9B80u;
label_1e9b80:
    // 0x1e9b80: 0x9622005c  lhu         $v0, 0x5C($s1)
    ctx->pc = 0x1e9b80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 92)));
label_1e9b84:
    // 0x1e9b84: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1e9b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_1e9b88:
    // 0x1e9b88: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1e9b8c:
    if (ctx->pc == 0x1E9B8Cu) {
        ctx->pc = 0x1E9B90u;
        goto label_1e9b90;
    }
    ctx->pc = 0x1E9B88u;
    {
        const bool branch_taken_0x1e9b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9b88) {
            ctx->pc = 0x1E9BC8u;
            goto label_1e9bc8;
        }
    }
    ctx->pc = 0x1E9B90u;
label_1e9b90:
    // 0x1e9b90: 0x82240059  lb          $a0, 0x59($s1)
    ctx->pc = 0x1e9b90u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 89)));
label_1e9b94:
    // 0x1e9b94: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e9b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e9b98:
    // 0x1e9b98: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
label_1e9b9c:
    if (ctx->pc == 0x1E9B9Cu) {
        ctx->pc = 0x1E9BA0u;
        goto label_1e9ba0;
    }
    ctx->pc = 0x1E9B98u;
    {
        const bool branch_taken_0x1e9b98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e9b98) {
            ctx->pc = 0x1E9BB0u;
            goto label_1e9bb0;
        }
    }
    ctx->pc = 0x1E9BA0u;
label_1e9ba0:
    // 0x1e9ba0: 0xc05ca18  jal         func_172860
label_1e9ba4:
    if (ctx->pc == 0x1E9BA4u) {
        ctx->pc = 0x1E9BA8u;
        goto label_1e9ba8;
    }
    ctx->pc = 0x1E9BA0u;
    SET_GPR_U32(ctx, 31, 0x1E9BA8u);
    ctx->pc = 0x172860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172860u, 0x1E9BA0u, 0x1E9BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9BA8u;
label_1e9ba8:
    // 0x1e9ba8: 0x1000000f  b           . + 4 + (0xF << 2)
label_1e9bac:
    if (ctx->pc == 0x1E9BACu) {
        ctx->pc = 0x1E9BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9BA8u;
        // 0x1e9bac: 0xa2220059  sb          $v0, 0x59($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 89), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9BB0u;
        goto label_1e9bb0;
    }
    ctx->pc = 0x1E9BA8u;
    {
        const bool branch_taken_0x1e9ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9BA8u;
        // 0x1e9bac: 0xa2220059  sb          $v0, 0x59($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 89), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9ba8) {
            ctx->pc = 0x1E9BE8u;
            goto label_1e9be8;
        }
    }
    ctx->pc = 0x1E9BB0u;
label_1e9bb0:
    // 0x1e9bb0: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1e9bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_1e9bb4:
    // 0x1e9bb4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e9bb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e9bb8:
    // 0x1e9bb8: 0xc046f68  jal         func_11BDA0
label_1e9bbc:
    if (ctx->pc == 0x1E9BBCu) {
        ctx->pc = 0x1E9BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9BB8u;
        // 0x1e9bbc: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9BC0u;
        goto label_1e9bc0;
    }
    ctx->pc = 0x1E9BB8u;
    SET_GPR_U32(ctx, 31, 0x1E9BC0u);
    ctx->pc = 0x1E9BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9BB8u;
    // 0x1e9bbc: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BDA0u, 0x1E9BB8u, 0x1E9BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9BC0u;
label_1e9bc0:
    // 0x1e9bc0: 0x10000009  b           . + 4 + (0x9 << 2)
label_1e9bc4:
    if (ctx->pc == 0x1E9BC4u) {
        ctx->pc = 0x1E9BC8u;
        goto label_1e9bc8;
    }
    ctx->pc = 0x1E9BC0u;
    {
        const bool branch_taken_0x1e9bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9bc0) {
            ctx->pc = 0x1E9BE8u;
            goto label_1e9be8;
        }
    }
    ctx->pc = 0x1E9BC8u;
label_1e9bc8:
    // 0x1e9bc8: 0x82230058  lb          $v1, 0x58($s1)
    ctx->pc = 0x1e9bc8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 88)));
label_1e9bcc:
    // 0x1e9bcc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1e9bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1e9bd0:
    // 0x1e9bd0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1e9bd4:
    if (ctx->pc == 0x1E9BD4u) {
        ctx->pc = 0x1E9BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9BD0u;
        // 0x1e9bd4: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9BD8u;
        goto label_1e9bd8;
    }
    ctx->pc = 0x1E9BD0u;
    {
        const bool branch_taken_0x1e9bd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E9BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9BD0u;
        // 0x1e9bd4: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9bd0) {
            ctx->pc = 0x1E9BE0u;
            goto label_1e9be0;
        }
    }
    ctx->pc = 0x1E9BD8u;
label_1e9bd8:
    // 0x1e9bd8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1e9bdc:
    if (ctx->pc == 0x1E9BDCu) {
        ctx->pc = 0x1E9BE0u;
        goto label_1e9be0;
    }
    ctx->pc = 0x1E9BD8u;
    {
        const bool branch_taken_0x1e9bd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e9bd8) {
            ctx->pc = 0x1E9BE8u;
            goto label_1e9be8;
        }
    }
    ctx->pc = 0x1E9BE0u;
label_1e9be0:
    // 0x1e9be0: 0xc0466b4  jal         func_119AD0
label_1e9be4:
    if (ctx->pc == 0x1E9BE4u) {
        ctx->pc = 0x1E9BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9BE0u;
        // 0x1e9be4: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9BE8u;
        goto label_1e9be8;
    }
    ctx->pc = 0x1E9BE0u;
    SET_GPR_U32(ctx, 31, 0x1E9BE8u);
    ctx->pc = 0x1E9BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9BE0u;
    // 0x1e9be4: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119AD0u, 0x1E9BE0u, 0x1E9BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9BE8u;
label_1e9be8:
    // 0x1e9be8: 0x9622005c  lhu         $v0, 0x5C($s1)
    ctx->pc = 0x1e9be8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 92)));
label_1e9bec:
    // 0x1e9bec: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1e9becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_1e9bf0:
    // 0x1e9bf0: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_1e9bf4:
    if (ctx->pc == 0x1E9BF4u) {
        ctx->pc = 0x1E9BF8u;
        goto label_1e9bf8;
    }
    ctx->pc = 0x1E9BF0u;
    {
        const bool branch_taken_0x1e9bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9bf0) {
            ctx->pc = 0x1E9CA0u;
            goto label_1e9ca0;
        }
    }
    ctx->pc = 0x1E9BF8u;
label_1e9bf8:
    // 0x1e9bf8: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x1e9bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_1e9bfc:
    // 0x1e9bfc: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1e9bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1e9c00:
    // 0x1e9c00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1e9c04:
    if (ctx->pc == 0x1E9C04u) {
        ctx->pc = 0x1E9C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9C00u;
        // 0x1e9c04: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9C08u;
        goto label_1e9c08;
    }
    ctx->pc = 0x1E9C00u;
    {
        const bool branch_taken_0x1e9c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9C00u;
        // 0x1e9c04: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9c00) {
            ctx->pc = 0x1E9C10u;
            goto label_1e9c10;
        }
    }
    ctx->pc = 0x1E9C08u;
label_1e9c08:
    // 0x1e9c08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1e9c0c:
    if (ctx->pc == 0x1E9C0Cu) {
        ctx->pc = 0x1E9C10u;
        goto label_1e9c10;
    }
    ctx->pc = 0x1E9C08u;
    {
        const bool branch_taken_0x1e9c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9c08) {
            ctx->pc = 0x1E9C18u;
            goto label_1e9c18;
        }
    }
    ctx->pc = 0x1E9C10u;
label_1e9c10:
    // 0x1e9c10: 0x10000020  b           . + 4 + (0x20 << 2)
label_1e9c14:
    if (ctx->pc == 0x1E9C14u) {
        ctx->pc = 0x1E9C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9C10u;
        // 0x1e9c14: 0xa220005a  sb          $zero, 0x5A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 90), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9C18u;
        goto label_1e9c18;
    }
    ctx->pc = 0x1E9C10u;
    {
        const bool branch_taken_0x1e9c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9C10u;
        // 0x1e9c14: 0xa220005a  sb          $zero, 0x5A($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 90), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9c10) {
            ctx->pc = 0x1E9C94u;
            goto label_1e9c94;
        }
    }
    ctx->pc = 0x1E9C18u;
label_1e9c18:
    // 0x1e9c18: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x1e9c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_1e9c1c:
    // 0x1e9c1c: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_1e9c20:
    if (ctx->pc == 0x1E9C20u) {
        ctx->pc = 0x1E9C24u;
        goto label_1e9c24;
    }
    ctx->pc = 0x1E9C1Cu;
    {
        const bool branch_taken_0x1e9c1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9c1c) {
            ctx->pc = 0x1E9C94u;
            goto label_1e9c94;
        }
    }
    ctx->pc = 0x1E9C24u;
label_1e9c24:
    // 0x1e9c24: 0x906201a2  lbu         $v0, 0x1A2($v1)
    ctx->pc = 0x1e9c24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 418)));
label_1e9c28:
    // 0x1e9c28: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_1e9c2c:
    if (ctx->pc == 0x1E9C2Cu) {
        ctx->pc = 0x1E9C30u;
        goto label_1e9c30;
    }
    ctx->pc = 0x1E9C28u;
    {
        const bool branch_taken_0x1e9c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9c28) {
            ctx->pc = 0x1E9C94u;
            goto label_1e9c94;
        }
    }
    ctx->pc = 0x1E9C30u;
label_1e9c30:
    // 0x1e9c30: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x1e9c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1e9c34:
    // 0x1e9c34: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e9c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1e9c38:
    // 0x1e9c38: 0x8c223ffc  lw          $v0, 0x3FFC($at)
    ctx->pc = 0x1e9c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1e9c3c:
    // 0x1e9c3c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1e9c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1e9c40:
    // 0x1e9c40: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1e9c40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1e9c44:
    // 0x1e9c44: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1e9c44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1e9c48:
    // 0x1e9c48: 0x24a205a0  addiu       $v0, $a1, 0x5A0
    ctx->pc = 0x1e9c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1440));
label_1e9c4c:
    // 0x1e9c4c: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x1e9c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_1e9c50:
    // 0x1e9c50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e9c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e9c54:
    // 0x1e9c54: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1e9c54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e9c58:
    // 0x1e9c58: 0xc08e93e  jal         func_23A4F8
label_1e9c5c:
    if (ctx->pc == 0x1E9C5Cu) {
        ctx->pc = 0x1E9C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9C58u;
        // 0x1e9c5c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9C60u;
        goto label_1e9c60;
    }
    ctx->pc = 0x1E9C58u;
    SET_GPR_U32(ctx, 31, 0x1E9C60u);
    ctx->pc = 0x1E9C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9C58u;
    // 0x1e9c5c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x1E9C60u;
label_1e9c60:
    // 0x1e9c60: 0xc066e44  jal         func_19B910
label_1e9c64:
    if (ctx->pc == 0x1E9C64u) {
        ctx->pc = 0x1E9C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9C60u;
        // 0x1e9c64: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9C68u;
        goto label_1e9c68;
    }
    ctx->pc = 0x1E9C60u;
    SET_GPR_U32(ctx, 31, 0x1E9C68u);
    ctx->pc = 0x1E9C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9C60u;
    // 0x1e9c64: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B910u, 0x1E9C60u, 0x1E9C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9C68u;
label_1e9c68:
    // 0x1e9c68: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e9c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1e9c6c:
    // 0x1e9c6c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e9c6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e9c70:
    // 0x1e9c70: 0xc066eea  jal         func_19BBA8
label_1e9c74:
    if (ctx->pc == 0x1E9C74u) {
        ctx->pc = 0x1E9C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9C70u;
        // 0x1e9c74: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9C78u;
        goto label_1e9c78;
    }
    ctx->pc = 0x1E9C70u;
    SET_GPR_U32(ctx, 31, 0x1E9C78u);
    ctx->pc = 0x1E9C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9C70u;
    // 0x1e9c74: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BBA8u, 0x1E9C70u, 0x1E9C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9C78u;
label_1e9c78:
    // 0x1e9c78: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e9c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1e9c7c:
    // 0x1e9c7c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1e9c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1e9c80:
    // 0x1e9c80: 0xc066d86  jal         func_19B618
label_1e9c84:
    if (ctx->pc == 0x1E9C84u) {
        ctx->pc = 0x1E9C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9C80u;
        // 0x1e9c84: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9C88u;
        goto label_1e9c88;
    }
    ctx->pc = 0x1E9C80u;
    SET_GPR_U32(ctx, 31, 0x1E9C88u);
    ctx->pc = 0x1E9C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9C80u;
    // 0x1e9c84: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B618u, 0x1E9C80u, 0x1E9C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9C88u;
label_1e9c88:
    // 0x1e9c88: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e9c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1e9c8c:
    // 0x1e9c8c: 0xc064f54  jal         func_193D50
label_1e9c90:
    if (ctx->pc == 0x1E9C90u) {
        ctx->pc = 0x1E9C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9C8Cu;
        // 0x1e9c90: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9C94u;
        goto label_1e9c94;
    }
    ctx->pc = 0x1E9C8Cu;
    SET_GPR_U32(ctx, 31, 0x1E9C94u);
    ctx->pc = 0x1E9C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9C8Cu;
    // 0x1e9c90: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193D50u, 0x1E9C8Cu, 0x1E9C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9C94u;
label_1e9c94:
    // 0x1e9c94: 0x0  nop
    ctx->pc = 0x1e9c94u;
    // NOP
label_1e9c98:
    // 0x1e9c98: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e9c9c:
    if (ctx->pc == 0x1E9C9Cu) {
        ctx->pc = 0x1E9C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9C98u;
        // 0x1e9c9c: 0xa6200054  sh          $zero, 0x54($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 84), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9CA0u;
        goto label_1e9ca0;
    }
    ctx->pc = 0x1E9C98u;
    {
        const bool branch_taken_0x1e9c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9C98u;
        // 0x1e9c9c: 0xa6200054  sh          $zero, 0x54($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 84), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9c98) {
            ctx->pc = 0x1E9CC8u;
            goto label_1e9cc8;
        }
    }
    ctx->pc = 0x1E9CA0u;
label_1e9ca0:
    // 0x1e9ca0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1e9ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1e9ca4:
    // 0x1e9ca4: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1e9ca4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_1e9ca8:
    // 0x1e9ca8: 0x4a000238  vcallms     0x40
    ctx->pc = 0x1e9ca8u;
    {     ctx->vu0_tpc = 0x40;     runtime->executeVU0Microprogram(rdram, ctx, 0x40); }
label_1e9cac:
    // 0x1e9cac: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x1e9cacu;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_1e9cb0:
    // 0x1e9cb0: 0xf8900000  sqc2        $vf16, 0x0($a0)
    ctx->pc = 0x1e9cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
label_1e9cb4:
    // 0x1e9cb4: 0xf8910010  sqc2        $vf17, 0x10($a0)
    ctx->pc = 0x1e9cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[17]));
label_1e9cb8:
    // 0x1e9cb8: 0xf8920020  sqc2        $vf18, 0x20($a0)
    ctx->pc = 0x1e9cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[18]));
label_1e9cbc:
    // 0x1e9cbc: 0xf8930030  sqc2        $vf19, 0x30($a0)
    ctx->pc = 0x1e9cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[19]));
label_1e9cc0:
    // 0x1e9cc0: 0xc064f54  jal         func_193D50
label_1e9cc4:
    if (ctx->pc == 0x1E9CC4u) {
        ctx->pc = 0x1E9CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9CC0u;
        // 0x1e9cc4: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9CC8u;
        goto label_1e9cc8;
    }
    ctx->pc = 0x1E9CC0u;
    SET_GPR_U32(ctx, 31, 0x1E9CC8u);
    ctx->pc = 0x1E9CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9CC0u;
    // 0x1e9cc4: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193D50u, 0x1E9CC0u, 0x1E9CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9CC8u;
label_1e9cc8:
    // 0x1e9cc8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e9cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e9ccc:
    // 0x1e9ccc: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x1e9cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_1e9cd0:
    // 0x1e9cd0: 0x9225005f  lbu         $a1, 0x5F($s1)
    ctx->pc = 0x1e9cd0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 95)));
label_1e9cd4:
    // 0x1e9cd4: 0xc05ebf4  jal         func_17AFD0
label_1e9cd8:
    if (ctx->pc == 0x1E9CD8u) {
        ctx->pc = 0x1E9CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9CD4u;
        // 0x1e9cd8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9CDCu;
        goto label_1e9cdc;
    }
    ctx->pc = 0x1E9CD4u;
    SET_GPR_U32(ctx, 31, 0x1E9CDCu);
    ctx->pc = 0x1E9CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9CD4u;
    // 0x1e9cd8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AFD0u, 0x1E9CD4u, 0x1E9CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9CDCu;
label_1e9cdc:
    // 0x1e9cdc: 0x0  nop
    ctx->pc = 0x1e9cdcu;
    // NOP
label_1e9ce0:
    // 0x1e9ce0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e9ce0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e9ce4:
    // 0x1e9ce4: 0x26310060  addiu       $s1, $s1, 0x60
    ctx->pc = 0x1e9ce4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_1e9ce8:
    // 0x1e9ce8: 0x2a020032  slti        $v0, $s0, 0x32
    ctx->pc = 0x1e9ce8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)50) ? 1 : 0);
label_1e9cec:
    // 0x1e9cec: 0x1440feed  bnez        $v0, . + 4 + (-0x113 << 2)
label_1e9cf0:
    if (ctx->pc == 0x1E9CF0u) {
        ctx->pc = 0x1E9CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9CECu;
        // 0x1e9cf0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9CF4u;
        goto label_1e9cf4;
    }
    ctx->pc = 0x1E9CECu;
    {
        const bool branch_taken_0x1e9cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9CECu;
        // 0x1e9cf0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9cec) {
            ctx->pc = 0x1E98A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1e98a4; return; }
        }
    }
    ctx->pc = 0x1E9CF4u;
label_1e9cf4:
    // 0x1e9cf4: 0xc05eb74  jal         func_17ADD0
label_1e9cf8:
    if (ctx->pc == 0x1E9CF8u) {
        ctx->pc = 0x1E9CFCu;
        goto label_1e9cfc;
    }
    ctx->pc = 0x1E9CF4u;
    SET_GPR_U32(ctx, 31, 0x1E9CFCu);
    ctx->pc = 0x17ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ADD0u, 0x1E9CF4u, 0x1E9CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9CFCu;
label_1e9cfc:
    // 0x1e9cfc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e9cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1e9d00:
    // 0x1e9d00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e9d00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e9d04:
    // 0x1e9d04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e9d04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e9d08:
    // 0x1e9d08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e9d08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e9d0c:
    // 0x1e9d0c: 0x3e00008  jr          $ra
label_1e9d10:
    if (ctx->pc == 0x1E9D10u) {
        ctx->pc = 0x1E9D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9D0Cu;
        // 0x1e9d10: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9D14u;
        goto label_1e9d14;
    }
    ctx->pc = 0x1E9D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9D0Cu;
        // 0x1e9d10: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9D14u;
label_1e9d14:
    // 0x1e9d14: 0x0  nop
    ctx->pc = 0x1e9d14u;
    // NOP
label_1e9d18:
    // 0x1e9d18: 0x0  nop
    ctx->pc = 0x1e9d18u;
    // NOP
label_1e9d1c:
    // 0x1e9d1c: 0x0  nop
    ctx->pc = 0x1e9d1cu;
    // NOP
label_1e9d20:
    // 0x1e9d20: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1e9d20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1e9d24:
    // 0x1e9d24: 0x246331d0  addiu       $v1, $v1, 0x31D0
    ctx->pc = 0x1e9d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12752));
label_1e9d28:
    // 0x1e9d28: 0x3e00008  jr          $ra
label_1e9d2c:
    if (ctx->pc == 0x1E9D2Cu) {
        ctx->pc = 0x1E9D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9D28u;
        // 0x1e9d2c: 0xaf83821c  sw          $v1, -0x7DE4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935068), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9D30u;
        goto label_1e9d30;
    }
    ctx->pc = 0x1E9D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9D28u;
        // 0x1e9d2c: 0xaf83821c  sw          $v1, -0x7DE4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935068), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9D30u;
label_1e9d30:
    // 0x1e9d30: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1e9d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1e9d34:
    // 0x1e9d34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e9d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9d38:
    // 0x1e9d38: 0x246344a0  addiu       $v1, $v1, 0x44A0
    ctx->pc = 0x1e9d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17568));
label_1e9d3c:
    // 0x1e9d3c: 0xaf83821c  sw          $v1, -0x7DE4($gp)
    ctx->pc = 0x1e9d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935068), GPR_U32(ctx, 3));
label_1e9d40:
    // 0x1e9d40: 0x8f86821c  lw          $a2, -0x7DE4($gp)
    ctx->pc = 0x1e9d40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935068)));
label_1e9d44:
    // 0x1e9d44: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1e9d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e9d48:
    // 0x1e9d48: 0xa0c0005a  sb          $zero, 0x5A($a2)
    ctx->pc = 0x1e9d48u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 90), (uint8_t)GPR_U32(ctx, 0));
label_1e9d4c:
    // 0x1e9d4c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1e9d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1e9d50:
    // 0x1e9d50: 0xa0c0005b  sb          $zero, 0x5B($a2)
    ctx->pc = 0x1e9d50u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 91), (uint8_t)GPR_U32(ctx, 0));
label_1e9d54:
    // 0x1e9d54: 0x28830032  slti        $v1, $a0, 0x32
    ctx->pc = 0x1e9d54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)50) ? 1 : 0);
label_1e9d58:
    // 0x1e9d58: 0xa4c00054  sh          $zero, 0x54($a2)
    ctx->pc = 0x1e9d58u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 84), (uint16_t)GPR_U32(ctx, 0));
label_1e9d5c:
    // 0x1e9d5c: 0x24c60060  addiu       $a2, $a2, 0x60
    ctx->pc = 0x1e9d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
label_1e9d60:
    // 0x1e9d60: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_1e9d64:
    if (ctx->pc == 0x1E9D64u) {
        ctx->pc = 0x1E9D68u;
        goto label_1e9d68;
    }
    ctx->pc = 0x1E9D60u;
    {
        const bool branch_taken_0x1e9d60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9d60) {
            ctx->pc = 0x1E9D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9d48;
        }
    }
    ctx->pc = 0x1E9D68u;
label_1e9d68:
    // 0x1e9d68: 0x3e00008  jr          $ra
label_1e9d6c:
    if (ctx->pc == 0x1E9D6Cu) {
        ctx->pc = 0x1E9D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9D68u;
        // 0x1e9d6c: 0xaca012c0  sw          $zero, 0x12C0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4800), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9D70u;
        goto label_1e9d70;
    }
    ctx->pc = 0x1E9D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9D68u;
        // 0x1e9d6c: 0xaca012c0  sw          $zero, 0x12C0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4800), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9D70u;
label_1e9d70:
    // 0x1e9d70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e9d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e9d74:
    // 0x1e9d74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e9d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e9d78:
    // 0x1e9d78: 0xc08bba8  jal         func_22EEA0
label_1e9d7c:
    if (ctx->pc == 0x1E9D7Cu) {
        ctx->pc = 0x1E9D80u;
        goto label_1e9d80;
    }
    ctx->pc = 0x1E9D78u;
    SET_GPR_U32(ctx, 31, 0x1E9D80u);
    ctx->pc = 0x22EEA0u;
    { ctx->pc = 0x22eea0; return; }
    ctx->pc = 0x1E9D80u;
label_1e9d80:
    // 0x1e9d80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e9d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e9d84:
    // 0x1e9d84: 0x3e00008  jr          $ra
label_1e9d88:
    if (ctx->pc == 0x1E9D88u) {
        ctx->pc = 0x1E9D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9D84u;
        // 0x1e9d88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9D8Cu;
        goto label_1e9d8c;
    }
    ctx->pc = 0x1E9D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9D84u;
        // 0x1e9d88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9D8Cu;
label_1e9d8c:
    // 0x1e9d8c: 0x0  nop
    ctx->pc = 0x1e9d8cu;
    // NOP
label_1e9d90:
    // 0x1e9d90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e9d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e9d94:
    // 0x1e9d94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e9d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9d98:
    // 0x1e9d98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e9d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e9d9c:
    // 0x1e9d9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e9d9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9da0:
    // 0x1e9da0: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x1e9da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
label_1e9da4:
    // 0x1e9da4: 0x246331d0  addiu       $v1, $v1, 0x31D0
    ctx->pc = 0x1e9da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12752));
label_1e9da8:
    // 0x1e9da8: 0x674021  addu        $t0, $v1, $a3
    ctx->pc = 0x1e9da8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1e9dac:
    // 0x1e9dac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e9dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9db0:
    // 0x1e9db0: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1e9db0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1e9db4:
    // 0x1e9db4: 0x0  nop
    ctx->pc = 0x1e9db4u;
    // NOP
label_1e9db8:
    // 0x1e9db8: 0xa0c0005a  sb          $zero, 0x5A($a2)
    ctx->pc = 0x1e9db8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 90), (uint8_t)GPR_U32(ctx, 0));
label_1e9dbc:
    // 0x1e9dbc: 0xa0c0005b  sb          $zero, 0x5B($a2)
    ctx->pc = 0x1e9dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 91), (uint8_t)GPR_U32(ctx, 0));
label_1e9dc0:
    // 0x1e9dc0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1e9dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1e9dc4:
    // 0x1e9dc4: 0xa4c00054  sh          $zero, 0x54($a2)
    ctx->pc = 0x1e9dc4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 84), (uint16_t)GPR_U32(ctx, 0));
label_1e9dc8:
    // 0x1e9dc8: 0x28a20032  slti        $v0, $a1, 0x32
    ctx->pc = 0x1e9dc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)50) ? 1 : 0);
label_1e9dcc:
    // 0x1e9dcc: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1e9dd0:
    if (ctx->pc == 0x1E9DD0u) {
        ctx->pc = 0x1E9DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9DCCu;
        // 0x1e9dd0: 0x24c60060  addiu       $a2, $a2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9DD4u;
        goto label_1e9dd4;
    }
    ctx->pc = 0x1E9DCCu;
    {
        const bool branch_taken_0x1e9dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9DCCu;
        // 0x1e9dd0: 0x24c60060  addiu       $a2, $a2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9dcc) {
            ctx->pc = 0x1E9DB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9db4;
        }
    }
    ctx->pc = 0x1E9DD4u;
label_1e9dd4:
    // 0x1e9dd4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1e9dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1e9dd8:
    // 0x1e9dd8: 0xad0012c0  sw          $zero, 0x12C0($t0)
    ctx->pc = 0x1e9dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4800), GPR_U32(ctx, 0));
label_1e9ddc:
    // 0x1e9ddc: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x1e9ddcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_1e9de0:
    // 0x1e9de0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_1e9de4:
    if (ctx->pc == 0x1E9DE4u) {
        ctx->pc = 0x1E9DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9DE0u;
        // 0x1e9de4: 0x24e712d0  addiu       $a3, $a3, 0x12D0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4816));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9DE8u;
        goto label_1e9de8;
    }
    ctx->pc = 0x1E9DE0u;
    {
        const bool branch_taken_0x1e9de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9DE0u;
        // 0x1e9de4: 0x24e712d0  addiu       $a3, $a3, 0x12D0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9de0) {
            ctx->pc = 0x1E9DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9da8;
        }
    }
    ctx->pc = 0x1E9DE8u;
label_1e9de8:
    // 0x1e9de8: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1e9de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1e9dec:
    // 0x1e9dec: 0x244231d0  addiu       $v0, $v0, 0x31D0
    ctx->pc = 0x1e9decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12752));
label_1e9df0:
    // 0x1e9df0: 0xc05ec60  jal         func_17B180
label_1e9df4:
    if (ctx->pc == 0x1E9DF4u) {
        ctx->pc = 0x1E9DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9DF0u;
        // 0x1e9df4: 0xaf82821c  sw          $v0, -0x7DE4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935068), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9DF8u;
        goto label_1e9df8;
    }
    ctx->pc = 0x1E9DF0u;
    SET_GPR_U32(ctx, 31, 0x1E9DF8u);
    ctx->pc = 0x1E9DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9DF0u;
    // 0x1e9df4: 0xaf82821c  sw          $v0, -0x7DE4($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935068), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B180u, 0x1E9DF0u, 0x1E9DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9DF8u;
label_1e9df8:
    // 0x1e9df8: 0xc08bbb0  jal         func_22EEC0
label_1e9dfc:
    if (ctx->pc == 0x1E9DFCu) {
        ctx->pc = 0x1E9E00u;
        goto label_1e9e00;
    }
    ctx->pc = 0x1E9DF8u;
    SET_GPR_U32(ctx, 31, 0x1E9E00u);
    ctx->pc = 0x22EEC0u;
    { ctx->pc = 0x22eec0; return; }
    ctx->pc = 0x1E9E00u;
label_1e9e00:
    // 0x1e9e00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e9e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e9e04:
    // 0x1e9e04: 0x3e00008  jr          $ra
label_1e9e08:
    if (ctx->pc == 0x1E9E08u) {
        ctx->pc = 0x1E9E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9E04u;
        // 0x1e9e08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9E0Cu;
        goto label_1e9e0c;
    }
    ctx->pc = 0x1E9E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9E04u;
        // 0x1e9e08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9E04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9E0Cu;
label_1e9e0c:
    // 0x1e9e0c: 0x0  nop
    ctx->pc = 0x1e9e0cu;
    // NOP
label_1e9e10:
    // 0x1e9e10: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1e9e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1e9e14:
    // 0x1e9e14: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1e9e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_1e9e18:
    // 0x1e9e18: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x1e9e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_1e9e1c:
    // 0x1e9e1c: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1e9e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_1e9e20:
    // 0x1e9e20: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1e9e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_1e9e24:
    // 0x1e9e24: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1e9e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_1e9e28:
    // 0x1e9e28: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1e9e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1e9e2c:
    // 0x1e9e2c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1e9e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1e9e30:
    // 0x1e9e30: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1e9e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1e9e34:
    // 0x1e9e34: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e9e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1e9e38:
    // 0x1e9e38: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e9e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1e9e3c:
    // 0x1e9e3c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e9e3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9e40:
    // 0x1e9e40: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e9e40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9e44:
    // 0x1e9e44: 0x0  nop
    ctx->pc = 0x1e9e44u;
    // NOP
label_1e9e48:
    // 0x1e9e48: 0x27828f00  addiu       $v0, $gp, -0x7100
    ctx->pc = 0x1e9e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938368));
label_1e9e4c:
    // 0x1e9e4c: 0x519021  addu        $s2, $v0, $s1
    ctx->pc = 0x1e9e4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1e9e50:
    // 0x1e9e50: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1e9e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e9e54:
    // 0x1e9e54: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e9e58:
    if (ctx->pc == 0x1E9E58u) {
        ctx->pc = 0x1E9E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9E54u;
        // 0x1e9e58: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9E5Cu;
        goto label_1e9e5c;
    }
    ctx->pc = 0x1E9E54u;
    {
        const bool branch_taken_0x1e9e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9E54u;
        // 0x1e9e58: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9e54) {
            ctx->pc = 0x1E9E68u;
            goto label_1e9e68;
        }
    }
    ctx->pc = 0x1E9E5Cu;
label_1e9e5c:
    // 0x1e9e5c: 0xc070080  jal         func_1C0200
label_1e9e60:
    if (ctx->pc == 0x1E9E60u) {
        ctx->pc = 0x1E9E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9E5Cu;
        // 0x1e9e60: 0x240575f0  addiu       $a1, $zero, 0x75F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9E64u;
        goto label_1e9e64;
    }
    ctx->pc = 0x1E9E5Cu;
    SET_GPR_U32(ctx, 31, 0x1E9E64u);
    ctx->pc = 0x1E9E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9E5Cu;
    // 0x1e9e60: 0x240575f0  addiu       $a1, $zero, 0x75F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x1E9E5Cu, 0x1E9E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9E64u;
label_1e9e64:
    // 0x1e9e64: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1e9e64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1e9e68:
    // 0x1e9e68: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e9e68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e9e6c:
    // 0x1e9e6c: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x1e9e6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1e9e70:
    // 0x1e9e70: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_1e9e74:
    if (ctx->pc == 0x1E9E74u) {
        ctx->pc = 0x1E9E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9E70u;
        // 0x1e9e74: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9E78u;
        goto label_1e9e78;
    }
    ctx->pc = 0x1E9E70u;
    {
        const bool branch_taken_0x1e9e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9E70u;
        // 0x1e9e74: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9e70) {
            ctx->pc = 0x1E9E44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9e44;
        }
    }
    ctx->pc = 0x1E9E78u;
label_1e9e78:
    // 0x1e9e78: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1e9e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1e9e7c:
    // 0x1e9e7c: 0xaf808ef8  sw          $zero, -0x7108($gp)
    ctx->pc = 0x1e9e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938360), GPR_U32(ctx, 0));
label_1e9e80:
    // 0x1e9e80: 0xaf828ef0  sw          $v0, -0x7110($gp)
    ctx->pc = 0x1e9e80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938352), GPR_U32(ctx, 2));
label_1e9e84:
    // 0x1e9e84: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1e9e84u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9e88:
    // 0x1e9e88: 0x24020280  addiu       $v0, $zero, 0x280
    ctx->pc = 0x1e9e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1e9e8c:
    // 0x1e9e8c: 0xaf808efc  sw          $zero, -0x7104($gp)
    ctx->pc = 0x1e9e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938364), GPR_U32(ctx, 0));
label_1e9e90:
    // 0x1e9e90: 0xaf828eec  sw          $v0, -0x7114($gp)
    ctx->pc = 0x1e9e90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938348), GPR_U32(ctx, 2));
label_1e9e94:
    // 0x1e9e94: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1e9e94u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9e98:
    // 0x1e9e98: 0x240201c0  addiu       $v0, $zero, 0x1C0
    ctx->pc = 0x1e9e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1e9e9c:
    // 0x1e9e9c: 0xaf808ef4  sw          $zero, -0x710C($gp)
    ctx->pc = 0x1e9e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938356), GPR_U32(ctx, 0));
label_1e9ea0:
    // 0x1e9ea0: 0xaf828ee8  sw          $v0, -0x7118($gp)
    ctx->pc = 0x1e9ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938344), GPR_U32(ctx, 2));
label_1e9ea4:
    // 0x1e9ea4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1e9ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1e9ea8:
    // 0x1e9ea8: 0xaf808ee4  sw          $zero, -0x711C($gp)
    ctx->pc = 0x1e9ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938340), GPR_U32(ctx, 0));
label_1e9eac:
    // 0x1e9eac: 0xaf828ee0  sw          $v0, -0x7120($gp)
    ctx->pc = 0x1e9eacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938336), GPR_U32(ctx, 2));
label_1e9eb0:
    // 0x1e9eb0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1e9eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1e9eb4:
    // 0x1e9eb4: 0xaf808ed8  sw          $zero, -0x7128($gp)
    ctx->pc = 0x1e9eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938328), GPR_U32(ctx, 0));
label_1e9eb8:
    // 0x1e9eb8: 0xaf828edc  sw          $v0, -0x7124($gp)
    ctx->pc = 0x1e9eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938332), GPR_U32(ctx, 2));
label_1e9ebc:
    // 0x1e9ebc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e9ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e9ec0:
    // 0x1e9ec0: 0xaf808ed4  sw          $zero, -0x712C($gp)
    ctx->pc = 0x1e9ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938324), GPR_U32(ctx, 0));
label_1e9ec4:
    // 0x1e9ec4: 0xaf828ed0  sw          $v0, -0x7130($gp)
    ctx->pc = 0x1e9ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938320), GPR_U32(ctx, 2));
label_1e9ec8:
    // 0x1e9ec8: 0xaf828ecc  sw          $v0, -0x7134($gp)
    ctx->pc = 0x1e9ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938316), GPR_U32(ctx, 2));
label_1e9ecc:
    // 0x1e9ecc: 0xaf808ec8  sw          $zero, -0x7138($gp)
    ctx->pc = 0x1e9eccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938312), GPR_U32(ctx, 0));
label_1e9ed0:
    // 0x1e9ed0: 0xaf808eb4  sw          $zero, -0x714C($gp)
    ctx->pc = 0x1e9ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938292), GPR_U32(ctx, 0));
label_1e9ed4:
    // 0x1e9ed4: 0x27828f00  addiu       $v0, $gp, -0x7100
    ctx->pc = 0x1e9ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938368));
label_1e9ed8:
    // 0x1e9ed8: 0x2405075e  addiu       $a1, $zero, 0x75E
    ctx->pc = 0x1e9ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1886));
label_1e9edc:
    // 0x1e9edc: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x1e9edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_1e9ee0:
    // 0x1e9ee0: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x1e9ee0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e9ee4:
    // 0x1e9ee4: 0xc05e234  jal         func_1788D0
label_1e9ee8:
    if (ctx->pc == 0x1E9EE8u) {
        ctx->pc = 0x1E9EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9EE4u;
        // 0x1e9ee8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9EECu;
        goto label_1e9eec;
    }
    ctx->pc = 0x1E9EE4u;
    SET_GPR_U32(ctx, 31, 0x1E9EECu);
    ctx->pc = 0x1E9EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9EE4u;
    // 0x1e9ee8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1E9EE4u, 0x1E9EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9EECu;
label_1e9eec:
    // 0x1e9eec: 0xc070834  jal         func_1C20D0
label_1e9ef0:
    if (ctx->pc == 0x1E9EF0u) {
        ctx->pc = 0x1E9EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9EECu;
        // 0x1e9ef0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9EF4u;
        goto label_1e9ef4;
    }
    ctx->pc = 0x1E9EECu;
    SET_GPR_U32(ctx, 31, 0x1E9EF4u);
    ctx->pc = 0x1E9EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9EECu;
    // 0x1e9ef0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C20D0u, 0x1E9EECu, 0x1E9EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9EF4u;
label_1e9ef4:
    // 0x1e9ef4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1e9ef4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e9ef8:
    // 0x1e9ef8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e9ef8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9efc:
    // 0x1e9efc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e9efcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9f00:
    // 0x1e9f00: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e9f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e9f04:
    // 0x1e9f04: 0x202001a  div         $zero, $s0, $v0
    ctx->pc = 0x1e9f04u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1e9f08:
    // 0x1e9f08: 0x240b0008  addiu       $t3, $zero, 0x8
    ctx->pc = 0x1e9f08u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1e9f0c:
    // 0x1e9f0c: 0x2b3a021  addu        $s4, $s5, $s3
    ctx->pc = 0x1e9f0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_1e9f10:
    // 0x1e9f10: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e9f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e9f14:
    // 0x1e9f14: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x1e9f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
label_1e9f18:
    // 0x1e9f18: 0x1057c2  srl         $t2, $s0, 31
    ctx->pc = 0x1e9f18u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
label_1e9f1c:
    // 0x1e9f1c: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1e9f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1e9f20:
    // 0x1e9f20: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x1e9f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_1e9f24:
    // 0x1e9f24: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1e9f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1e9f28:
    // 0x1e9f28: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1e9f28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1e9f2c:
    // 0x1e9f2c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1e9f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1e9f30:
    // 0x1e9f30: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1e9f30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1e9f34:
    // 0x1e9f34: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e9f34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9f38:
    // 0x1e9f38: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x1e9f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
label_1e9f3c:
    // 0x1e9f3c: 0x34495556  ori         $t1, $v0, 0x5556
    ctx->pc = 0x1e9f3cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
label_1e9f40:
    // 0x1e9f40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e9f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e9f44:
    // 0x1e9f44: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1e9f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1e9f48:
    // 0x1e9f48: 0x1010  mfhi        $v0
    ctx->pc = 0x1e9f48u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e9f4c:
    // 0x1e9f4c: 0x1300018  mult        $zero, $t1, $s0
    ctx->pc = 0x1e9f4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1e9f50:
    // 0x1e9f50: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1e9f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1e9f54:
    // 0x1e9f54: 0x24510178  addiu       $s1, $v0, 0x178
    ctx->pc = 0x1e9f54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 376));
label_1e9f58:
    // 0x1e9f58: 0x1010  mfhi        $v0
    ctx->pc = 0x1e9f58u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e9f5c:
    // 0x1e9f5c: 0x3229ffff  andi        $t1, $s1, 0xFFFF
    ctx->pc = 0x1e9f5cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_1e9f60:
    // 0x1e9f60: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1e9f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_1e9f64:
    // 0x1e9f64: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1e9f64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1e9f68:
    // 0x1e9f68: 0x24520090  addiu       $s2, $v0, 0x90
    ctx->pc = 0x1e9f68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_1e9f6c:
    // 0x1e9f6c: 0xc05de30  jal         func_1778C0
label_1e9f70:
    if (ctx->pc == 0x1E9F70u) {
        ctx->pc = 0x1E9F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9F6Cu;
        // 0x1e9f70: 0x324affff  andi        $t2, $s2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9F74u;
        goto label_1e9f74;
    }
    ctx->pc = 0x1E9F6Cu;
    SET_GPR_U32(ctx, 31, 0x1E9F74u);
    ctx->pc = 0x1E9F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9F6Cu;
    // 0x1e9f70: 0x324affff  andi        $t2, $s2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1E9F6Cu, 0x1E9F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9F74u;
label_1e9f74:
    // 0x1e9f74: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x1e9f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
label_1e9f78:
    // 0x1e9f78: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x1e9f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
label_1e9f7c:
    // 0x1e9f7c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1e9f7cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_1e9f80:
    // 0x1e9f80: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1e9f80u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1e9f84:
    // 0x1e9f84: 0x323b8  dsll        $a0, $v1, 14
    ctx->pc = 0x1e9f84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 14);
label_1e9f88:
    // 0x1e9f88: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e9f88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e9f8c:
    // 0x1e9f8c: 0x218bc  dsll32      $v1, $v0, 2
    ctx->pc = 0x1e9f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 2));
label_1e9f90:
    // 0x1e9f90: 0x267300a0  addiu       $s3, $s3, 0xA0
    ctx->pc = 0x1e9f90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
label_1e9f94:
    // 0x1e9f94: 0x3c020700  lui         $v0, 0x700
    ctx->pc = 0x1e9f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1792 << 16));
label_1e9f98:
    // 0x1e9f98: 0x3442007f  ori         $v0, $v0, 0x7F
    ctx->pc = 0x1e9f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)127);
label_1e9f9c:
    // 0x1e9f9c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1e9f9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_1e9fa0:
    // 0x1e9fa0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1e9fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1e9fa4:
    // 0x1e9fa4: 0x2a020009  slti        $v0, $s0, 0x9
    ctx->pc = 0x1e9fa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
label_1e9fa8:
    // 0x1e9fa8: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
label_1e9fac:
    if (ctx->pc == 0x1E9FACu) {
        ctx->pc = 0x1E9FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9FA8u;
        // 0x1e9fac: 0xfe830050  sd          $v1, 0x50($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 80), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9FB0u;
        goto label_1e9fb0;
    }
    ctx->pc = 0x1E9FA8u;
    {
        const bool branch_taken_0x1e9fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9FA8u;
        // 0x1e9fac: 0xfe830050  sd          $v1, 0x50($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 80), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9fa8) {
            ctx->pc = 0x1E9F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9f00;
        }
    }
    ctx->pc = 0x1E9FB0u;
label_1e9fb0:
    // 0x1e9fb0: 0xc070834  jal         func_1C20D0
label_1e9fb4:
    if (ctx->pc == 0x1E9FB4u) {
        ctx->pc = 0x1E9FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9FB0u;
        // 0x1e9fb4: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E9FB8u;
        goto label_1e9fb8;
    }
    ctx->pc = 0x1E9FB0u;
    SET_GPR_U32(ctx, 31, 0x1E9FB8u);
    ctx->pc = 0x1E9FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9FB0u;
    // 0x1e9fb4: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C20D0u, 0x1E9FB0u, 0x1E9FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9FB8u;
label_1e9fb8:
    // 0x1e9fb8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1e9fb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e9fbc:
    // 0x1e9fbc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e9fbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9fc0:
    // 0x1e9fc0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e9fc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9fc4:
    // 0x1e9fc4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e9fc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9fc8:
    // 0x1e9fc8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1e9fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1e9fcc:
    // 0x1e9fcc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1e9fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1e9fd0:
    // 0x1e9fd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e9fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e9fd4:
    // 0x1e9fd4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e9fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e9fd8:
    // 0x1e9fd8: 0x320affff  andi        $t2, $s0, 0xFFFF
    ctx->pc = 0x1e9fd8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_1e9fdc:
    // 0x1e9fdc: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1e9fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1e9fe0:
    // 0x1e9fe0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1e9fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e9fe4:
    // 0x1e9fe4: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1e9fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1e9fe8:
    // 0x1e9fe8: 0x2b11021  addu        $v0, $s5, $s1
    ctx->pc = 0x1e9fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
label_1e9fec:
    // 0x1e9fec: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x1e9fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_1e9ff0:
    // 0x1e9ff0: 0x244405b0  addiu       $a0, $v0, 0x5B0
    ctx->pc = 0x1e9ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1456));
label_1e9ff4:
    // 0x1e9ff4: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1e9ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1e9ff8:
    // 0x1e9ff8: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1e9ff8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1e9ffc:
    // 0x1e9ffc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e9ffcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea000:
    // 0x1ea000: 0x24090380  addiu       $t1, $zero, 0x380
    ctx->pc = 0x1ea000u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 896));
label_1ea004:
    // 0x1ea004: 0xc05de30  jal         func_1778C0
label_1ea008:
    if (ctx->pc == 0x1EA008u) {
        ctx->pc = 0x1EA008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA004u;
        // 0x1ea008: 0x240b0060  addiu       $t3, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA00Cu;
        goto label_1ea00c;
    }
    ctx->pc = 0x1EA004u;
    SET_GPR_U32(ctx, 31, 0x1EA00Cu);
    ctx->pc = 0x1EA008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA004u;
    // 0x1ea008: 0x240b0060  addiu       $t3, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1EA004u, 0x1EA00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA00Cu;
label_1ea00c:
    // 0x1ea00c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ea00cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1ea010:
    // 0x1ea010: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x1ea010u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1ea014:
    // 0x1ea014: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x1ea014u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_1ea018:
    // 0x1ea018: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_1ea01c:
    if (ctx->pc == 0x1EA01Cu) {
        ctx->pc = 0x1EA01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA018u;
        // 0x1ea01c: 0x263100a0  addiu       $s1, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA020u;
        goto label_1ea020;
    }
    ctx->pc = 0x1EA018u;
    {
        const bool branch_taken_0x1ea018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA018u;
        // 0x1ea01c: 0x263100a0  addiu       $s1, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea018) {
            ctx->pc = 0x1E9FC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9fc8;
        }
    }
    ctx->pc = 0x1EA020u;
label_1ea020:
    // 0x1ea020: 0xc070834  jal         func_1C20D0
label_1ea024:
    if (ctx->pc == 0x1EA024u) {
        ctx->pc = 0x1EA024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA020u;
        // 0x1ea024: 0x24040025  addiu       $a0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA028u;
        goto label_1ea028;
    }
    ctx->pc = 0x1EA020u;
    SET_GPR_U32(ctx, 31, 0x1EA028u);
    ctx->pc = 0x1EA024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA020u;
    // 0x1ea024: 0x24040025  addiu       $a0, $zero, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C20D0u, 0x1EA020u, 0x1EA028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA028u;
label_1ea028:
    // 0x1ea028: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ea028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ea02c:
    // 0x1ea02c: 0x240b0018  addiu       $t3, $zero, 0x18
    ctx->pc = 0x1ea02cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ea030:
    // 0x1ea030: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x1ea030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
label_1ea034:
    // 0x1ea034: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ea034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ea038:
    // 0x1ea038: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1ea038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1ea03c:
    // 0x1ea03c: 0x26a406f0  addiu       $a0, $s5, 0x6F0
    ctx->pc = 0x1ea03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1776));
label_1ea040:
    // 0x1ea040: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ea040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ea044:
    // 0x1ea044: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1ea044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1ea048:
    // 0x1ea048: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1ea048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1ea04c:
    // 0x1ea04c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1ea04cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1ea050:
    // 0x1ea050: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1ea050u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1ea054:
    // 0x1ea054: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ea054u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea058:
    // 0x1ea058: 0x24090190  addiu       $t1, $zero, 0x190
    ctx->pc = 0x1ea058u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_1ea05c:
    // 0x1ea05c: 0xc05de30  jal         func_1778C0
label_1ea060:
    if (ctx->pc == 0x1EA060u) {
        ctx->pc = 0x1EA060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA05Cu;
        // 0x1ea060: 0x240a00e8  addiu       $t2, $zero, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA064u;
        goto label_1ea064;
    }
    ctx->pc = 0x1EA05Cu;
    SET_GPR_U32(ctx, 31, 0x1EA064u);
    ctx->pc = 0x1EA060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA05Cu;
    // 0x1ea060: 0x240a00e8  addiu       $t2, $zero, 0xE8 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1EA05Cu, 0x1EA064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA064u;
label_1ea064:
    // 0x1ea064: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ea064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ea068:
    // 0x1ea068: 0x26a40790  addiu       $a0, $s5, 0x790
    ctx->pc = 0x1ea068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1936));
label_1ea06c:
    // 0x1ea06c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ea06cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ea070:
    // 0x1ea070: 0xc05e1d4  jal         func_178750
label_1ea074:
    if (ctx->pc == 0x1EA074u) {
        ctx->pc = 0x1EA074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA070u;
        // 0x1ea074: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA078u;
        goto label_1ea078;
    }
    ctx->pc = 0x1EA070u;
    SET_GPR_U32(ctx, 31, 0x1EA078u);
    ctx->pc = 0x1EA074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA070u;
    // 0x1ea074: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178750u, 0x1EA070u, 0x1EA078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA078u;
label_1ea078:
    // 0x1ea078: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1ea078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_1ea07c:
    // 0x1ea07c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1ea07cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1ea080:
    // 0x1ea080: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1ea080u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_1ea084:
    // 0x1ea084: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ea084u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea088:
    // 0x1ea088: 0x3c02f531  lui         $v0, 0xF531
    ctx->pc = 0x1ea088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62769 << 16));
label_1ea08c:
    // 0x1ea08c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1ea08cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1ea090:
    // 0x1ea090: 0x34425315  ori         $v0, $v0, 0x5315
    ctx->pc = 0x1ea090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21269);
label_1ea094:
    // 0x1ea094: 0xfea307e0  sd          $v1, 0x7E0($s5)
    ctx->pc = 0x1ea094u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 2016), GPR_U64(ctx, 3));
label_1ea098:
    // 0x1ea098: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ea098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1ea09c:
    // 0x1ea09c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ea09cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea0a0:
    // 0x1ea0a0: 0x3c023153  lui         $v0, 0x3153
    ctx->pc = 0x1ea0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12627 << 16));
label_1ea0a4:
    // 0x1ea0a4: 0x34421097  ori         $v0, $v0, 0x1097
    ctx->pc = 0x1ea0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4247);
label_1ea0a8:
    // 0x1ea0a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ea0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1ea0ac:
    // 0x1ea0ac: 0xfea207e8  sd          $v0, 0x7E8($s5)
    ctx->pc = 0x1ea0acu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 2024), GPR_U64(ctx, 2));
label_1ea0b0:
    // 0x1ea0b0: 0x2b01021  addu        $v0, $s5, $s0
    ctx->pc = 0x1ea0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_1ea0b4:
    // 0x1ea0b4: 0x244407f0  addiu       $a0, $v0, 0x7F0
    ctx->pc = 0x1ea0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2032));
label_1ea0b8:
    // 0x1ea0b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ea0b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea0bc:
    // 0x1ea0bc: 0xc05e158  jal         func_178560
label_1ea0c0:
    if (ctx->pc == 0x1EA0C0u) {
        ctx->pc = 0x1EA0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA0BCu;
        // 0x1ea0c0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA0C4u;
        goto label_1ea0c4;
    }
    ctx->pc = 0x1EA0BCu;
    SET_GPR_U32(ctx, 31, 0x1EA0C4u);
    ctx->pc = 0x1EA0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA0BCu;
    // 0x1ea0c0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178560u, 0x1EA0BCu, 0x1EA0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA0C4u;
label_1ea0c4:
    // 0x1ea0c4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ea0c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1ea0c8:
    // 0x1ea0c8: 0x2a2200dc  slti        $v0, $s1, 0xDC
    ctx->pc = 0x1ea0c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)220) ? 1 : 0);
label_1ea0cc:
    // 0x1ea0cc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_1ea0d0:
    if (ctx->pc == 0x1EA0D0u) {
        ctx->pc = 0x1EA0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA0CCu;
        // 0x1ea0d0: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA0D4u;
        goto label_1ea0d4;
    }
    ctx->pc = 0x1EA0CCu;
    {
        const bool branch_taken_0x1ea0cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA0CCu;
        // 0x1ea0d0: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea0cc) {
            ctx->pc = 0x1EA0B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ea0b0;
        }
    }
    ctx->pc = 0x1EA0D4u;
label_1ea0d4:
    // 0x1ea0d4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1ea0d4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1ea0d8:
    // 0x1ea0d8: 0x2ac20002  slti        $v0, $s6, 0x2
    ctx->pc = 0x1ea0d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
label_1ea0dc:
    // 0x1ea0dc: 0x1440ff7d  bnez        $v0, . + 4 + (-0x83 << 2)
label_1ea0e0:
    if (ctx->pc == 0x1EA0E0u) {
        ctx->pc = 0x1EA0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA0DCu;
        // 0x1ea0e0: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA0E4u;
        goto label_1ea0e4;
    }
    ctx->pc = 0x1EA0DCu;
    {
        const bool branch_taken_0x1ea0dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA0DCu;
        // 0x1ea0e0: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea0dc) {
            ctx->pc = 0x1E9ED4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9ed4;
        }
    }
    ctx->pc = 0x1EA0E4u;
label_1ea0e4:
    // 0x1ea0e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ea0e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea0e8:
    // 0x1ea0e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ea0e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea0ec:
    // 0x1ea0ec: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1ea0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
label_1ea0f0:
    // 0x1ea0f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ea0f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ea0f4:
    // 0x1ea0f4: 0x24425770  addiu       $v0, $v0, 0x5770
    ctx->pc = 0x1ea0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22384));
label_1ea0f8:
    // 0x1ea0f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ea0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ea0fc:
    // 0x1ea0fc: 0xc05e158  jal         func_178560
label_1ea100:
    if (ctx->pc == 0x1EA100u) {
        ctx->pc = 0x1EA100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA0FCu;
        // 0x1ea100: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA104u;
        goto label_1ea104;
    }
    ctx->pc = 0x1EA0FCu;
    SET_GPR_U32(ctx, 31, 0x1EA104u);
    ctx->pc = 0x1EA100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA0FCu;
    // 0x1ea100: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178560u, 0x1EA0FCu, 0x1EA104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA104u;
label_1ea104:
    // 0x1ea104: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ea104u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1ea108:
    // 0x1ea108: 0x2a2300dc  slti        $v1, $s1, 0xDC
    ctx->pc = 0x1ea108u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)220) ? 1 : 0);
label_1ea10c:
    // 0x1ea10c: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_1ea110:
    if (ctx->pc == 0x1EA110u) {
        ctx->pc = 0x1EA110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA10Cu;
        // 0x1ea110: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA114u;
        goto label_1ea114;
    }
    ctx->pc = 0x1EA10Cu;
    {
        const bool branch_taken_0x1ea10c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA10Cu;
        // 0x1ea110: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea10c) {
            ctx->pc = 0x1EA0ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ea0ec;
        }
    }
    ctx->pc = 0x1EA114u;
label_1ea114:
    // 0x1ea114: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1ea114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1ea118:
    // 0x1ea118: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x1ea118u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1ea11c:
    // 0x1ea11c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1ea11cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1ea120:
    // 0x1ea120: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1ea120u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1ea124:
    // 0x1ea124: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1ea124u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1ea128:
    // 0x1ea128: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1ea128u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1ea12c:
    // 0x1ea12c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1ea12cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ea130:
    // 0x1ea130: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1ea130u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ea134:
    // 0x1ea134: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1ea134u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ea138:
    // 0x1ea138: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ea138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ea13c:
    // 0x1ea13c: 0x3e00008  jr          $ra
label_1ea140:
    if (ctx->pc == 0x1EA140u) {
        ctx->pc = 0x1EA140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA13Cu;
        // 0x1ea140: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EA144u;
        goto label_1ea144;
    }
    ctx->pc = 0x1EA13Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA13Cu;
        // 0x1ea140: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA13Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA144u;
label_1ea144:
    // 0x1ea144: 0x0  nop
    ctx->pc = 0x1ea144u;
    // NOP
label_1ea148:
    // 0x1ea148: 0x0  nop
    ctx->pc = 0x1ea148u;
    // NOP
label_1ea14c:
    // 0x1ea14c: 0x0  nop
    ctx->pc = 0x1ea14cu;
    // NOP
label_1ea150:
    // 0x1ea150: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1ea150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ea154:
    // 0x1ea154: 0xaf808ef8  sw          $zero, -0x7108($gp)
    ctx->pc = 0x1ea154u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938360), GPR_U32(ctx, 0));
label_1ea158:
    // 0x1ea158: 0xaf838ef0  sw          $v1, -0x7110($gp)
    ctx->pc = 0x1ea158u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938352), GPR_U32(ctx, 3));
label_1ea15c:
    // 0x1ea15c: 0x24030280  addiu       $v1, $zero, 0x280
    ctx->pc = 0x1ea15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1ea160:
    // 0x1ea160: 0xaf808efc  sw          $zero, -0x7104($gp)
    ctx->pc = 0x1ea160u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938364), GPR_U32(ctx, 0));
label_1ea164:
    // 0x1ea164: 0xaf838eec  sw          $v1, -0x7114($gp)
    ctx->pc = 0x1ea164u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938348), GPR_U32(ctx, 3));
label_1ea168:
    // 0x1ea168: 0x240301c0  addiu       $v1, $zero, 0x1C0
    ctx->pc = 0x1ea168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1ea16c:
    // 0x1ea16c: 0xaf808ef4  sw          $zero, -0x710C($gp)
    ctx->pc = 0x1ea16cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938356), GPR_U32(ctx, 0));
    ctx->pc = 0x1ea170u;
    return;
}

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

// Function: FUN_0014eba0
// Address: 0x14eba0 - 0x2ced24
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0014eba0_part777(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2c9a20u: goto label_2c9a20;
        case 0x2c9a24u: goto label_2c9a24;
        case 0x2c9a28u: goto label_2c9a28;
        case 0x2c9a2cu: goto label_2c9a2c;
        case 0x2c9a30u: goto label_2c9a30;
        case 0x2c9a34u: goto label_2c9a34;
        case 0x2c9a38u: goto label_2c9a38;
        case 0x2c9a3cu: goto label_2c9a3c;
        case 0x2c9a40u: goto label_2c9a40;
        case 0x2c9a44u: goto label_2c9a44;
        case 0x2c9a48u: goto label_2c9a48;
        case 0x2c9a4cu: goto label_2c9a4c;
        case 0x2c9a50u: goto label_2c9a50;
        case 0x2c9a54u: goto label_2c9a54;
        case 0x2c9a58u: goto label_2c9a58;
        case 0x2c9a5cu: goto label_2c9a5c;
        case 0x2c9a60u: goto label_2c9a60;
        case 0x2c9a64u: goto label_2c9a64;
        case 0x2c9a68u: goto label_2c9a68;
        case 0x2c9a6cu: goto label_2c9a6c;
        case 0x2c9a70u: goto label_2c9a70;
        case 0x2c9a74u: goto label_2c9a74;
        case 0x2c9a78u: goto label_2c9a78;
        case 0x2c9a7cu: goto label_2c9a7c;
        case 0x2c9a80u: goto label_2c9a80;
        case 0x2c9a84u: goto label_2c9a84;
        case 0x2c9a88u: goto label_2c9a88;
        case 0x2c9a8cu: goto label_2c9a8c;
        case 0x2c9a90u: goto label_2c9a90;
        case 0x2c9a94u: goto label_2c9a94;
        case 0x2c9a98u: goto label_2c9a98;
        case 0x2c9a9cu: goto label_2c9a9c;
        case 0x2c9aa0u: goto label_2c9aa0;
        case 0x2c9aa4u: goto label_2c9aa4;
        case 0x2c9aa8u: goto label_2c9aa8;
        case 0x2c9aacu: goto label_2c9aac;
        case 0x2c9ab0u: goto label_2c9ab0;
        case 0x2c9ab4u: goto label_2c9ab4;
        case 0x2c9ab8u: goto label_2c9ab8;
        case 0x2c9abcu: goto label_2c9abc;
        case 0x2c9ac0u: goto label_2c9ac0;
        case 0x2c9ac4u: goto label_2c9ac4;
        case 0x2c9ac8u: goto label_2c9ac8;
        case 0x2c9accu: goto label_2c9acc;
        case 0x2c9ad0u: goto label_2c9ad0;
        case 0x2c9ad4u: goto label_2c9ad4;
        case 0x2c9ad8u: goto label_2c9ad8;
        case 0x2c9adcu: goto label_2c9adc;
        case 0x2c9ae0u: goto label_2c9ae0;
        case 0x2c9ae4u: goto label_2c9ae4;
        case 0x2c9ae8u: goto label_2c9ae8;
        case 0x2c9aecu: goto label_2c9aec;
        case 0x2c9af0u: goto label_2c9af0;
        case 0x2c9af4u: goto label_2c9af4;
        case 0x2c9af8u: goto label_2c9af8;
        case 0x2c9afcu: goto label_2c9afc;
        case 0x2c9b00u: goto label_2c9b00;
        case 0x2c9b04u: goto label_2c9b04;
        case 0x2c9b08u: goto label_2c9b08;
        case 0x2c9b0cu: goto label_2c9b0c;
        case 0x2c9b10u: goto label_2c9b10;
        case 0x2c9b14u: goto label_2c9b14;
        case 0x2c9b18u: goto label_2c9b18;
        case 0x2c9b1cu: goto label_2c9b1c;
        case 0x2c9b20u: goto label_2c9b20;
        case 0x2c9b24u: goto label_2c9b24;
        case 0x2c9b28u: goto label_2c9b28;
        case 0x2c9b2cu: goto label_2c9b2c;
        case 0x2c9b30u: goto label_2c9b30;
        case 0x2c9b34u: goto label_2c9b34;
        case 0x2c9b38u: goto label_2c9b38;
        case 0x2c9b3cu: goto label_2c9b3c;
        case 0x2c9b40u: goto label_2c9b40;
        case 0x2c9b44u: goto label_2c9b44;
        case 0x2c9b48u: goto label_2c9b48;
        case 0x2c9b4cu: goto label_2c9b4c;
        case 0x2c9b50u: goto label_2c9b50;
        case 0x2c9b54u: goto label_2c9b54;
        case 0x2c9b58u: goto label_2c9b58;
        case 0x2c9b5cu: goto label_2c9b5c;
        case 0x2c9b60u: goto label_2c9b60;
        case 0x2c9b64u: goto label_2c9b64;
        case 0x2c9b68u: goto label_2c9b68;
        case 0x2c9b6cu: goto label_2c9b6c;
        case 0x2c9b70u: goto label_2c9b70;
        case 0x2c9b74u: goto label_2c9b74;
        case 0x2c9b78u: goto label_2c9b78;
        case 0x2c9b7cu: goto label_2c9b7c;
        case 0x2c9b80u: goto label_2c9b80;
        case 0x2c9b84u: goto label_2c9b84;
        case 0x2c9b88u: goto label_2c9b88;
        case 0x2c9b8cu: goto label_2c9b8c;
        case 0x2c9b90u: goto label_2c9b90;
        case 0x2c9b94u: goto label_2c9b94;
        case 0x2c9b98u: goto label_2c9b98;
        case 0x2c9b9cu: goto label_2c9b9c;
        case 0x2c9ba0u: goto label_2c9ba0;
        case 0x2c9ba4u: goto label_2c9ba4;
        case 0x2c9ba8u: goto label_2c9ba8;
        case 0x2c9bacu: goto label_2c9bac;
        case 0x2c9bb0u: goto label_2c9bb0;
        case 0x2c9bb4u: goto label_2c9bb4;
        case 0x2c9bb8u: goto label_2c9bb8;
        case 0x2c9bbcu: goto label_2c9bbc;
        case 0x2c9bc0u: goto label_2c9bc0;
        case 0x2c9bc4u: goto label_2c9bc4;
        case 0x2c9bc8u: goto label_2c9bc8;
        case 0x2c9bccu: goto label_2c9bcc;
        case 0x2c9bd0u: goto label_2c9bd0;
        case 0x2c9bd4u: goto label_2c9bd4;
        case 0x2c9bd8u: goto label_2c9bd8;
        case 0x2c9bdcu: goto label_2c9bdc;
        case 0x2c9be0u: goto label_2c9be0;
        case 0x2c9be4u: goto label_2c9be4;
        case 0x2c9be8u: goto label_2c9be8;
        case 0x2c9becu: goto label_2c9bec;
        case 0x2c9bf0u: goto label_2c9bf0;
        case 0x2c9bf4u: goto label_2c9bf4;
        case 0x2c9bf8u: goto label_2c9bf8;
        case 0x2c9bfcu: goto label_2c9bfc;
        case 0x2c9c00u: goto label_2c9c00;
        case 0x2c9c04u: goto label_2c9c04;
        case 0x2c9c08u: goto label_2c9c08;
        case 0x2c9c0cu: goto label_2c9c0c;
        case 0x2c9c10u: goto label_2c9c10;
        case 0x2c9c14u: goto label_2c9c14;
        case 0x2c9c18u: goto label_2c9c18;
        case 0x2c9c1cu: goto label_2c9c1c;
        case 0x2c9c20u: goto label_2c9c20;
        case 0x2c9c24u: goto label_2c9c24;
        case 0x2c9c28u: goto label_2c9c28;
        case 0x2c9c2cu: goto label_2c9c2c;
        case 0x2c9c30u: goto label_2c9c30;
        case 0x2c9c34u: goto label_2c9c34;
        case 0x2c9c38u: goto label_2c9c38;
        case 0x2c9c3cu: goto label_2c9c3c;
        case 0x2c9c40u: goto label_2c9c40;
        case 0x2c9c44u: goto label_2c9c44;
        case 0x2c9c48u: goto label_2c9c48;
        case 0x2c9c4cu: goto label_2c9c4c;
        case 0x2c9c50u: goto label_2c9c50;
        case 0x2c9c54u: goto label_2c9c54;
        case 0x2c9c58u: goto label_2c9c58;
        case 0x2c9c5cu: goto label_2c9c5c;
        case 0x2c9c60u: goto label_2c9c60;
        case 0x2c9c64u: goto label_2c9c64;
        case 0x2c9c68u: goto label_2c9c68;
        case 0x2c9c6cu: goto label_2c9c6c;
        case 0x2c9c70u: goto label_2c9c70;
        case 0x2c9c74u: goto label_2c9c74;
        case 0x2c9c78u: goto label_2c9c78;
        case 0x2c9c7cu: goto label_2c9c7c;
        case 0x2c9c80u: goto label_2c9c80;
        case 0x2c9c84u: goto label_2c9c84;
        case 0x2c9c88u: goto label_2c9c88;
        case 0x2c9c8cu: goto label_2c9c8c;
        case 0x2c9c90u: goto label_2c9c90;
        case 0x2c9c94u: goto label_2c9c94;
        case 0x2c9c98u: goto label_2c9c98;
        case 0x2c9c9cu: goto label_2c9c9c;
        case 0x2c9ca0u: goto label_2c9ca0;
        case 0x2c9ca4u: goto label_2c9ca4;
        case 0x2c9ca8u: goto label_2c9ca8;
        case 0x2c9cacu: goto label_2c9cac;
        case 0x2c9cb0u: goto label_2c9cb0;
        case 0x2c9cb4u: goto label_2c9cb4;
        case 0x2c9cb8u: goto label_2c9cb8;
        case 0x2c9cbcu: goto label_2c9cbc;
        case 0x2c9cc0u: goto label_2c9cc0;
        case 0x2c9cc4u: goto label_2c9cc4;
        case 0x2c9cc8u: goto label_2c9cc8;
        case 0x2c9cccu: goto label_2c9ccc;
        case 0x2c9cd0u: goto label_2c9cd0;
        case 0x2c9cd4u: goto label_2c9cd4;
        case 0x2c9cd8u: goto label_2c9cd8;
        case 0x2c9cdcu: goto label_2c9cdc;
        case 0x2c9ce0u: goto label_2c9ce0;
        case 0x2c9ce4u: goto label_2c9ce4;
        case 0x2c9ce8u: goto label_2c9ce8;
        case 0x2c9cecu: goto label_2c9cec;
        case 0x2c9cf0u: goto label_2c9cf0;
        case 0x2c9cf4u: goto label_2c9cf4;
        case 0x2c9cf8u: goto label_2c9cf8;
        case 0x2c9cfcu: goto label_2c9cfc;
        case 0x2c9d00u: goto label_2c9d00;
        case 0x2c9d04u: goto label_2c9d04;
        case 0x2c9d08u: goto label_2c9d08;
        case 0x2c9d0cu: goto label_2c9d0c;
        case 0x2c9d10u: goto label_2c9d10;
        case 0x2c9d14u: goto label_2c9d14;
        case 0x2c9d18u: goto label_2c9d18;
        case 0x2c9d1cu: goto label_2c9d1c;
        case 0x2c9d20u: goto label_2c9d20;
        case 0x2c9d24u: goto label_2c9d24;
        case 0x2c9d28u: goto label_2c9d28;
        case 0x2c9d2cu: goto label_2c9d2c;
        case 0x2c9d30u: goto label_2c9d30;
        case 0x2c9d34u: goto label_2c9d34;
        case 0x2c9d38u: goto label_2c9d38;
        case 0x2c9d3cu: goto label_2c9d3c;
        case 0x2c9d40u: goto label_2c9d40;
        case 0x2c9d44u: goto label_2c9d44;
        case 0x2c9d48u: goto label_2c9d48;
        case 0x2c9d4cu: goto label_2c9d4c;
        case 0x2c9d50u: goto label_2c9d50;
        case 0x2c9d54u: goto label_2c9d54;
        case 0x2c9d58u: goto label_2c9d58;
        case 0x2c9d5cu: goto label_2c9d5c;
        case 0x2c9d60u: goto label_2c9d60;
        case 0x2c9d64u: goto label_2c9d64;
        case 0x2c9d68u: goto label_2c9d68;
        case 0x2c9d6cu: goto label_2c9d6c;
        case 0x2c9d70u: goto label_2c9d70;
        case 0x2c9d74u: goto label_2c9d74;
        case 0x2c9d78u: goto label_2c9d78;
        case 0x2c9d7cu: goto label_2c9d7c;
        case 0x2c9d80u: goto label_2c9d80;
        case 0x2c9d84u: goto label_2c9d84;
        case 0x2c9d88u: goto label_2c9d88;
        case 0x2c9d8cu: goto label_2c9d8c;
        case 0x2c9d90u: goto label_2c9d90;
        case 0x2c9d94u: goto label_2c9d94;
        case 0x2c9d98u: goto label_2c9d98;
        case 0x2c9d9cu: goto label_2c9d9c;
        case 0x2c9da0u: goto label_2c9da0;
        case 0x2c9da4u: goto label_2c9da4;
        case 0x2c9da8u: goto label_2c9da8;
        case 0x2c9dacu: goto label_2c9dac;
        case 0x2c9db0u: goto label_2c9db0;
        case 0x2c9db4u: goto label_2c9db4;
        case 0x2c9db8u: goto label_2c9db8;
        case 0x2c9dbcu: goto label_2c9dbc;
        case 0x2c9dc0u: goto label_2c9dc0;
        case 0x2c9dc4u: goto label_2c9dc4;
        case 0x2c9dc8u: goto label_2c9dc8;
        case 0x2c9dccu: goto label_2c9dcc;
        case 0x2c9dd0u: goto label_2c9dd0;
        case 0x2c9dd4u: goto label_2c9dd4;
        case 0x2c9dd8u: goto label_2c9dd8;
        case 0x2c9ddcu: goto label_2c9ddc;
        case 0x2c9de0u: goto label_2c9de0;
        case 0x2c9de4u: goto label_2c9de4;
        case 0x2c9de8u: goto label_2c9de8;
        case 0x2c9decu: goto label_2c9dec;
        case 0x2c9df0u: goto label_2c9df0;
        case 0x2c9df4u: goto label_2c9df4;
        case 0x2c9df8u: goto label_2c9df8;
        case 0x2c9dfcu: goto label_2c9dfc;
        case 0x2c9e00u: goto label_2c9e00;
        case 0x2c9e04u: goto label_2c9e04;
        case 0x2c9e08u: goto label_2c9e08;
        case 0x2c9e0cu: goto label_2c9e0c;
        case 0x2c9e10u: goto label_2c9e10;
        case 0x2c9e14u: goto label_2c9e14;
        case 0x2c9e18u: goto label_2c9e18;
        case 0x2c9e1cu: goto label_2c9e1c;
        case 0x2c9e20u: goto label_2c9e20;
        case 0x2c9e24u: goto label_2c9e24;
        case 0x2c9e28u: goto label_2c9e28;
        case 0x2c9e2cu: goto label_2c9e2c;
        case 0x2c9e30u: goto label_2c9e30;
        case 0x2c9e34u: goto label_2c9e34;
        case 0x2c9e38u: goto label_2c9e38;
        case 0x2c9e3cu: goto label_2c9e3c;
        case 0x2c9e40u: goto label_2c9e40;
        case 0x2c9e44u: goto label_2c9e44;
        case 0x2c9e48u: goto label_2c9e48;
        case 0x2c9e4cu: goto label_2c9e4c;
        case 0x2c9e50u: goto label_2c9e50;
        case 0x2c9e54u: goto label_2c9e54;
        case 0x2c9e58u: goto label_2c9e58;
        case 0x2c9e5cu: goto label_2c9e5c;
        case 0x2c9e60u: goto label_2c9e60;
        case 0x2c9e64u: goto label_2c9e64;
        case 0x2c9e68u: goto label_2c9e68;
        case 0x2c9e6cu: goto label_2c9e6c;
        case 0x2c9e70u: goto label_2c9e70;
        case 0x2c9e74u: goto label_2c9e74;
        case 0x2c9e78u: goto label_2c9e78;
        case 0x2c9e7cu: goto label_2c9e7c;
        case 0x2c9e80u: goto label_2c9e80;
        case 0x2c9e84u: goto label_2c9e84;
        case 0x2c9e88u: goto label_2c9e88;
        case 0x2c9e8cu: goto label_2c9e8c;
        case 0x2c9e90u: goto label_2c9e90;
        case 0x2c9e94u: goto label_2c9e94;
        case 0x2c9e98u: goto label_2c9e98;
        case 0x2c9e9cu: goto label_2c9e9c;
        case 0x2c9ea0u: goto label_2c9ea0;
        case 0x2c9ea4u: goto label_2c9ea4;
        case 0x2c9ea8u: goto label_2c9ea8;
        case 0x2c9eacu: goto label_2c9eac;
        case 0x2c9eb0u: goto label_2c9eb0;
        case 0x2c9eb4u: goto label_2c9eb4;
        case 0x2c9eb8u: goto label_2c9eb8;
        case 0x2c9ebcu: goto label_2c9ebc;
        case 0x2c9ec0u: goto label_2c9ec0;
        case 0x2c9ec4u: goto label_2c9ec4;
        case 0x2c9ec8u: goto label_2c9ec8;
        case 0x2c9eccu: goto label_2c9ecc;
        case 0x2c9ed0u: goto label_2c9ed0;
        case 0x2c9ed4u: goto label_2c9ed4;
        case 0x2c9ed8u: goto label_2c9ed8;
        case 0x2c9edcu: goto label_2c9edc;
        case 0x2c9ee0u: goto label_2c9ee0;
        case 0x2c9ee4u: goto label_2c9ee4;
        case 0x2c9ee8u: goto label_2c9ee8;
        case 0x2c9eecu: goto label_2c9eec;
        case 0x2c9ef0u: goto label_2c9ef0;
        case 0x2c9ef4u: goto label_2c9ef4;
        case 0x2c9ef8u: goto label_2c9ef8;
        case 0x2c9efcu: goto label_2c9efc;
        case 0x2c9f00u: goto label_2c9f00;
        case 0x2c9f04u: goto label_2c9f04;
        case 0x2c9f08u: goto label_2c9f08;
        case 0x2c9f0cu: goto label_2c9f0c;
        case 0x2c9f10u: goto label_2c9f10;
        case 0x2c9f14u: goto label_2c9f14;
        case 0x2c9f18u: goto label_2c9f18;
        case 0x2c9f1cu: goto label_2c9f1c;
        case 0x2c9f20u: goto label_2c9f20;
        case 0x2c9f24u: goto label_2c9f24;
        case 0x2c9f28u: goto label_2c9f28;
        case 0x2c9f2cu: goto label_2c9f2c;
        case 0x2c9f30u: goto label_2c9f30;
        case 0x2c9f34u: goto label_2c9f34;
        case 0x2c9f38u: goto label_2c9f38;
        case 0x2c9f3cu: goto label_2c9f3c;
        case 0x2c9f40u: goto label_2c9f40;
        case 0x2c9f44u: goto label_2c9f44;
        case 0x2c9f48u: goto label_2c9f48;
        case 0x2c9f4cu: goto label_2c9f4c;
        case 0x2c9f50u: goto label_2c9f50;
        case 0x2c9f54u: goto label_2c9f54;
        case 0x2c9f58u: goto label_2c9f58;
        case 0x2c9f5cu: goto label_2c9f5c;
        case 0x2c9f60u: goto label_2c9f60;
        case 0x2c9f64u: goto label_2c9f64;
        case 0x2c9f68u: goto label_2c9f68;
        case 0x2c9f6cu: goto label_2c9f6c;
        case 0x2c9f70u: goto label_2c9f70;
        case 0x2c9f74u: goto label_2c9f74;
        case 0x2c9f78u: goto label_2c9f78;
        case 0x2c9f7cu: goto label_2c9f7c;
        case 0x2c9f80u: goto label_2c9f80;
        case 0x2c9f84u: goto label_2c9f84;
        case 0x2c9f88u: goto label_2c9f88;
        case 0x2c9f8cu: goto label_2c9f8c;
        case 0x2c9f90u: goto label_2c9f90;
        case 0x2c9f94u: goto label_2c9f94;
        case 0x2c9f98u: goto label_2c9f98;
        case 0x2c9f9cu: goto label_2c9f9c;
        case 0x2c9fa0u: goto label_2c9fa0;
        case 0x2c9fa4u: goto label_2c9fa4;
        case 0x2c9fa8u: goto label_2c9fa8;
        case 0x2c9facu: goto label_2c9fac;
        case 0x2c9fb0u: goto label_2c9fb0;
        case 0x2c9fb4u: goto label_2c9fb4;
        case 0x2c9fb8u: goto label_2c9fb8;
        case 0x2c9fbcu: goto label_2c9fbc;
        case 0x2c9fc0u: goto label_2c9fc0;
        case 0x2c9fc4u: goto label_2c9fc4;
        case 0x2c9fc8u: goto label_2c9fc8;
        case 0x2c9fccu: goto label_2c9fcc;
        case 0x2c9fd0u: goto label_2c9fd0;
        case 0x2c9fd4u: goto label_2c9fd4;
        case 0x2c9fd8u: goto label_2c9fd8;
        case 0x2c9fdcu: goto label_2c9fdc;
        case 0x2c9fe0u: goto label_2c9fe0;
        case 0x2c9fe4u: goto label_2c9fe4;
        case 0x2c9fe8u: goto label_2c9fe8;
        case 0x2c9fecu: goto label_2c9fec;
        case 0x2c9ff0u: goto label_2c9ff0;
        case 0x2c9ff4u: goto label_2c9ff4;
        case 0x2c9ff8u: goto label_2c9ff8;
        case 0x2c9ffcu: goto label_2c9ffc;
        case 0x2ca000u: goto label_2ca000;
        case 0x2ca004u: goto label_2ca004;
        case 0x2ca008u: goto label_2ca008;
        case 0x2ca00cu: goto label_2ca00c;
        case 0x2ca010u: goto label_2ca010;
        case 0x2ca014u: goto label_2ca014;
        case 0x2ca018u: goto label_2ca018;
        case 0x2ca01cu: goto label_2ca01c;
        case 0x2ca020u: goto label_2ca020;
        case 0x2ca024u: goto label_2ca024;
        case 0x2ca028u: goto label_2ca028;
        case 0x2ca02cu: goto label_2ca02c;
        case 0x2ca030u: goto label_2ca030;
        case 0x2ca034u: goto label_2ca034;
        case 0x2ca038u: goto label_2ca038;
        case 0x2ca03cu: goto label_2ca03c;
        case 0x2ca040u: goto label_2ca040;
        case 0x2ca044u: goto label_2ca044;
        case 0x2ca048u: goto label_2ca048;
        case 0x2ca04cu: goto label_2ca04c;
        case 0x2ca050u: goto label_2ca050;
        case 0x2ca054u: goto label_2ca054;
        case 0x2ca058u: goto label_2ca058;
        case 0x2ca05cu: goto label_2ca05c;
        case 0x2ca060u: goto label_2ca060;
        case 0x2ca064u: goto label_2ca064;
        case 0x2ca068u: goto label_2ca068;
        case 0x2ca06cu: goto label_2ca06c;
        case 0x2ca070u: goto label_2ca070;
        case 0x2ca074u: goto label_2ca074;
        case 0x2ca078u: goto label_2ca078;
        case 0x2ca07cu: goto label_2ca07c;
        case 0x2ca080u: goto label_2ca080;
        case 0x2ca084u: goto label_2ca084;
        case 0x2ca088u: goto label_2ca088;
        case 0x2ca08cu: goto label_2ca08c;
        case 0x2ca090u: goto label_2ca090;
        case 0x2ca094u: goto label_2ca094;
        case 0x2ca098u: goto label_2ca098;
        case 0x2ca09cu: goto label_2ca09c;
        case 0x2ca0a0u: goto label_2ca0a0;
        case 0x2ca0a4u: goto label_2ca0a4;
        case 0x2ca0a8u: goto label_2ca0a8;
        case 0x2ca0acu: goto label_2ca0ac;
        case 0x2ca0b0u: goto label_2ca0b0;
        case 0x2ca0b4u: goto label_2ca0b4;
        case 0x2ca0b8u: goto label_2ca0b8;
        case 0x2ca0bcu: goto label_2ca0bc;
        case 0x2ca0c0u: goto label_2ca0c0;
        case 0x2ca0c4u: goto label_2ca0c4;
        case 0x2ca0c8u: goto label_2ca0c8;
        case 0x2ca0ccu: goto label_2ca0cc;
        case 0x2ca0d0u: goto label_2ca0d0;
        case 0x2ca0d4u: goto label_2ca0d4;
        case 0x2ca0d8u: goto label_2ca0d8;
        case 0x2ca0dcu: goto label_2ca0dc;
        case 0x2ca0e0u: goto label_2ca0e0;
        case 0x2ca0e4u: goto label_2ca0e4;
        case 0x2ca0e8u: goto label_2ca0e8;
        case 0x2ca0ecu: goto label_2ca0ec;
        case 0x2ca0f0u: goto label_2ca0f0;
        case 0x2ca0f4u: goto label_2ca0f4;
        case 0x2ca0f8u: goto label_2ca0f8;
        case 0x2ca0fcu: goto label_2ca0fc;
        case 0x2ca100u: goto label_2ca100;
        case 0x2ca104u: goto label_2ca104;
        case 0x2ca108u: goto label_2ca108;
        case 0x2ca10cu: goto label_2ca10c;
        case 0x2ca110u: goto label_2ca110;
        case 0x2ca114u: goto label_2ca114;
        case 0x2ca118u: goto label_2ca118;
        case 0x2ca11cu: goto label_2ca11c;
        case 0x2ca120u: goto label_2ca120;
        case 0x2ca124u: goto label_2ca124;
        case 0x2ca128u: goto label_2ca128;
        case 0x2ca12cu: goto label_2ca12c;
        case 0x2ca130u: goto label_2ca130;
        case 0x2ca134u: goto label_2ca134;
        case 0x2ca138u: goto label_2ca138;
        case 0x2ca13cu: goto label_2ca13c;
        case 0x2ca140u: goto label_2ca140;
        case 0x2ca144u: goto label_2ca144;
        case 0x2ca148u: goto label_2ca148;
        case 0x2ca14cu: goto label_2ca14c;
        case 0x2ca150u: goto label_2ca150;
        case 0x2ca154u: goto label_2ca154;
        case 0x2ca158u: goto label_2ca158;
        case 0x2ca15cu: goto label_2ca15c;
        case 0x2ca160u: goto label_2ca160;
        case 0x2ca164u: goto label_2ca164;
        case 0x2ca168u: goto label_2ca168;
        case 0x2ca16cu: goto label_2ca16c;
        case 0x2ca170u: goto label_2ca170;
        case 0x2ca174u: goto label_2ca174;
        case 0x2ca178u: goto label_2ca178;
        case 0x2ca17cu: goto label_2ca17c;
        case 0x2ca180u: goto label_2ca180;
        case 0x2ca184u: goto label_2ca184;
        case 0x2ca188u: goto label_2ca188;
        case 0x2ca18cu: goto label_2ca18c;
        case 0x2ca190u: goto label_2ca190;
        case 0x2ca194u: goto label_2ca194;
        case 0x2ca198u: goto label_2ca198;
        case 0x2ca19cu: goto label_2ca19c;
        case 0x2ca1a0u: goto label_2ca1a0;
        case 0x2ca1a4u: goto label_2ca1a4;
        case 0x2ca1a8u: goto label_2ca1a8;
        case 0x2ca1acu: goto label_2ca1ac;
        case 0x2ca1b0u: goto label_2ca1b0;
        case 0x2ca1b4u: goto label_2ca1b4;
        case 0x2ca1b8u: goto label_2ca1b8;
        case 0x2ca1bcu: goto label_2ca1bc;
        case 0x2ca1c0u: goto label_2ca1c0;
        case 0x2ca1c4u: goto label_2ca1c4;
        case 0x2ca1c8u: goto label_2ca1c8;
        case 0x2ca1ccu: goto label_2ca1cc;
        case 0x2ca1d0u: goto label_2ca1d0;
        case 0x2ca1d4u: goto label_2ca1d4;
        case 0x2ca1d8u: goto label_2ca1d8;
        case 0x2ca1dcu: goto label_2ca1dc;
        case 0x2ca1e0u: goto label_2ca1e0;
        case 0x2ca1e4u: goto label_2ca1e4;
        case 0x2ca1e8u: goto label_2ca1e8;
        case 0x2ca1ecu: goto label_2ca1ec;
        default: return;
    }

label_2c9a20:
    // 0x2c9a20: 0x6e6f  .word       0x00006E6F                   # dsubu       $t5, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9a20u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2c9a24:
    // 0x2c9a24: 0x0  nop
    ctx->pc = 0x2c9a24u;
    // NOP
label_2c9a28:
    // 0x2c9a28: 0x3a647473  xori        $a0, $s3, 0x7473
    ctx->pc = 0x2c9a28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)29811);
label_2c9a2c:
    // 0x2c9a2c: 0x6378653a  daddi       $t8, $k1, 0x653A
    ctx->pc = 0x2c9a2cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)25914; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 24, res); }
label_2c9a30:
    // 0x2c9a30: 0x69747065  ldl         $s4, 0x7065($t3)
    ctx->pc = 0x2c9a30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28773); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_2c9a34:
    // 0x2c9a34: 0x6e6f  .word       0x00006E6F                   # dsubu       $t5, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9a34u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2c9a38:
    // 0x2c9a38: 0x2c9a28  .word       0x002C9A28                   # mfsa        $s3 # 002C0200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2c9a38u;
    SET_GPR_U32(ctx, 19, ctx->sa);
label_2c9a3c:
    // 0x2c9a3c: 0x0  nop
    ctx->pc = 0x2c9a3cu;
    // NOP
label_2c9a40:
    // 0x2c9a40: 0x2c9a38  .word       0x002C9A38                   # dsll        $s3, $t4, 8 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9a40u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 12) << 8);
label_2c9a44:
    // 0x2c9a44: 0x0  nop
    ctx->pc = 0x2c9a44u;
    // NOP
label_2c9a48:
    // 0x2c9a48: 0x0  nop
    ctx->pc = 0x2c9a48u;
    // NOP
label_2c9a4c:
    // 0x2c9a4c: 0x0  nop
    ctx->pc = 0x2c9a4cu;
    // NOP
label_2c9a50:
    // 0x2c9a50: 0x2c9a10  .word       0x002C9A10                   # mfhi        $s3 # 002C0200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9a50u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_2c9a54:
    // 0x2c9a54: 0x2c9a40  .word       0x002C9A40                   # sll         $s3, $t4, 9 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9a54u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 12), 9));
label_2c9a58:
    // 0x2c9a58: 0x5f646162  .word       0x5F646162                   # bgtzl       $k1, . + 4 + (0x6162 << 2) # 00040000 <InstrIdType: CPU_NORMAL>
label_2c9a5c:
    if (ctx->pc == 0x2C9A5Cu) {
        ctx->pc = 0x2C9A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9A58u;
        // 0x2c9a5c: 0x65637865  daddiu      $v1, $t3, 0x7865 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30821);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9A60u;
        goto label_2c9a60;
    }
    ctx->pc = 0x2C9A58u;
    {
        const bool branch_taken_0x2c9a58 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x2c9a58) {
            ctx->pc = 0x2C9A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9A58u;
            // 0x2c9a5c: 0x65637865  daddiu      $v1, $t3, 0x7865 (Delay Slot)
            SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30821);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1FE4u;
            return;
        }
    }
    ctx->pc = 0x2C9A60u;
label_2c9a60:
    // 0x2c9a60: 0x6f697470  ldr         $t1, 0x7470($k1)
    ctx->pc = 0x2c9a60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29808); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2c9a64:
    // 0x2c9a64: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9a64u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2c9a68:
    // 0x2c9a68: 0x47656373  .word       0x47656373                   # INVALID     $k1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c9a68u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x33 at 0x2C9A68 raw=0x47656373");
 /* MITIGATED */
label_2c9a6c:
    // 0x2c9a6c: 0x66654473  daddiu      $a1, $s3, 0x4473
    ctx->pc = 0x2c9a6cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)17523);
label_2c9a70:
    // 0x2c9a70: 0x70736944  .word       0x70736944                   # plzcw       $t5, $v1 # 00130140 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c9a70u;
    { uint64_t v = GPR_U64(ctx, 3); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 13, out); }
label_2c9a74:
    // 0x2c9a74: 0x3a766e45  xori        $s6, $s3, 0x6E45
    ctx->pc = 0x2c9a74u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)28229);
label_2c9a78:
    // 0x2c9a78: 0x20746f4e  addi        $s4, $v1, 0x6F4E
    ctx->pc = 0x2c9a78u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28494, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_2c9a7c:
    // 0x2c9a7c: 0x70707573  .word       0x70707573                   # INVALID     $v1, $s0, 0x7573 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c9a7cu;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x2C9A7C raw=0x70707573");
 /* MITIGATED */
label_2c9a80:
    // 0x2c9a80: 0x2074726f  addi        $s4, $v1, 0x726F
    ctx->pc = 0x2c9a80u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_2c9a84:
    // 0x2c9a84: 0x70736964  .word       0x70736964                   # INVALID     $v1, $s3, 0x6964 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c9a84u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x24 at 0x2C9A84 raw=0x70736964");
 /* MITIGATED */
label_2c9a88:
    // 0x2c9a88: 0x6d79616c  ldr         $t9, 0x616C($t3)
    ctx->pc = 0x2c9a88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24940); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem >> shift)); }
label_2c9a8c:
    // 0x2c9a8c: 0x2065646f  addi        $a1, $v1, 0x646F
    ctx->pc = 0x2c9a8cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25711, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2c9a90:
    // 0x2c9a90: 0x20726f66  addi        $s2, $v1, 0x6F66
    ctx->pc = 0x2c9a90u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28518, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
label_2c9a94:
    // 0x2c9a94: 0x21216425  addi        $at, $t1, 0x6425
    ctx->pc = 0x2c9a94u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 9), (int32_t)25637, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_2c9a98:
    // 0x2c9a98: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x2c9a98u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2c9a9c:
    // 0x2c9a9c: 0x0  nop
    ctx->pc = 0x2c9a9cu;
    // NOP
label_2c9aa0:
    // 0x2c9aa0: 0x47656373  .word       0x47656373                   # INVALID     $k1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c9aa0u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x33 at 0x2C9AA0 raw=0x47656373");
 /* MITIGATED */
label_2c9aa4:
    // 0x2c9aa4: 0x74755073  .word       0x74755073                   # INVALID     $v1, $s5, 0x5073 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c9aa4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C9AA4 raw=0x74755073");
 /* MITIGATED */
label_2c9aa8:
    // 0x2c9aa8: 0x77617244  .word       0x77617244                   # INVALID     $k1, $at, 0x7244 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c9aa8u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C9AA8 raw=0x77617244");
 /* MITIGATED */
label_2c9aac:
    // 0x2c9aac: 0x3a766e45  xori        $s6, $s3, 0x6E45
    ctx->pc = 0x2c9aacu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)28229);
label_2c9ab0:
    // 0x2c9ab0: 0x414d4420  .word       0x414D4420                   # INVALID     $t2, $t5, 0x4420 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c9ab0u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x2C9AB0 raw=0x414D4420");
 /* MITIGATED */
label_2c9ab4:
    // 0x2c9ab4: 0x2e684320  sltiu       $t0, $s3, 0x4320
    ctx->pc = 0x2c9ab4u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)17184) ? 1 : 0);
label_2c9ab8:
    // 0x2c9ab8: 0x6f642032  ldr         $a0, 0x2032($k1)
    ctx->pc = 0x2c9ab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8242); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_2c9abc:
    // 0x2c9abc: 0x6e207365  ldr         $zero, 0x7365($s1)
    ctx->pc = 0x2c9abcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 29541); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2c9ac0:
    // 0x2c9ac0: 0x7420746f  .word       0x7420746F                   # INVALID     $at, $zero, 0x746F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c9ac0u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C9AC0 raw=0x7420746F");
 /* MITIGATED */
label_2c9ac4:
    // 0x2c9ac4: 0x696d7265  ldl         $t5, 0x7265($t3)
    ctx->pc = 0x2c9ac4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
label_2c9ac8:
    // 0x2c9ac8: 0x6574616e  daddiu      $s4, $t3, 0x616E
    ctx->pc = 0x2c9ac8u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24942);
label_2c9acc:
    // 0x2c9acc: 0xa0d  break       0, 40
    ctx->pc = 0x2c9accu;
    runtime->handleBreak(rdram, ctx);
label_2c9ad0:
    // 0x2c9ad0: 0x47656373  .word       0x47656373                   # INVALID     $k1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c9ad0u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x33 at 0x2C9AD0 raw=0x47656373");
 /* MITIGATED */
label_2c9ad4:
    // 0x2c9ad4: 0x6e795373  ldr         $t9, 0x5373($s3)
    ctx->pc = 0x2c9ad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 21363); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem >> shift)); }
label_2c9ad8:
    // 0x2c9ad8: 0x74615063  .word       0x74615063                   # INVALID     $v1, $at, 0x5063 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c9ad8u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C9AD8 raw=0x74615063");
 /* MITIGATED */
label_2c9adc:
    // 0x2c9adc: 0x44203a68  .word       0x44203A68                   # dmfc1       $zero, $f7 # 00000268 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c9adcu;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x1, function 0x28 at 0x2C9ADC raw=0x44203A68");
 /* MITIGATED */
label_2c9ae0:
    // 0x2c9ae0: 0x4320414d  .word       0x4320414D                   # INVALID     $t9, $zero, 0x414D # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c9ae0u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x2C9AE0 raw=0x4320414D");
 /* MITIGATED */
label_2c9ae4:
    // 0x2c9ae4: 0x20312e68  addi        $s1, $at, 0x2E68
    ctx->pc = 0x2c9ae4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)11880, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 17, (int32_t)tmp); }
label_2c9ae8:
    // 0x2c9ae8: 0x73656f64  .word       0x73656F64                   # INVALID     $k1, $a1, 0x6F64 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c9ae8u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x24 at 0x2C9AE8 raw=0x73656F64");
 /* MITIGATED */
label_2c9aec:
    // 0x2c9aec: 0x746f6e20  .word       0x746F6E20                   # INVALID     $v1, $t7, 0x6E20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c9aecu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C9AEC raw=0x746F6E20");
 /* MITIGATED */
label_2c9af0:
    // 0x2c9af0: 0x72657420  .word       0x72657420                   # madd1       $t6, $s3, $a1 # 00000400 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c9af0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 5); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_2c9af4:
    // 0x2c9af4: 0x616e696d  daddi       $t6, $t3, 0x696D
    ctx->pc = 0x2c9af4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26989; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_2c9af8:
    // 0x2c9af8: 0xa0d6574  j           func_83595D0
label_2c9afc:
    if (ctx->pc == 0x2C9AFCu) {
        ctx->pc = 0x2C9B00u;
        goto label_2c9b00;
    }
    ctx->pc = 0x2C9AF8u;
    ctx->pc = 0x83595D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x83595D0u, 0x2C9AF8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2C9B00u;
label_2c9b00:
    // 0x2c9b00: 0x31443c09  andi        $a0, $t2, 0x3C09
    ctx->pc = 0x2c9b00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)15369);
label_2c9b04:
    // 0x2c9b04: 0x4348435f  .word       0x4348435F                   # INVALID     $k0, $t0, 0x435F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c9b04u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x2C9B04 raw=0x4348435F");
 /* MITIGATED */
label_2c9b08:
    // 0x2c9b08: 0x30253d52  andi        $a1, $at, 0x3D52
    ctx->pc = 0x2c9b08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)15698);
label_2c9b0c:
    // 0x2c9b0c: 0x3a7838  .word       0x003A7838                   # dsll        $t7, $k0, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9b0cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 26) << 0);
label_2c9b10:
    // 0x2c9b10: 0x545f3144  bnel        $v0, $ra, . + 4 + (0x3144 << 2)
label_2c9b14:
    if (ctx->pc == 0x2C9B14u) {
        ctx->pc = 0x2C9B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B10u;
        // 0x2c9b14: 0x3d524441  .word       0x3D524441                   # lui         $s2, 0x4441 # 01400000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)17473 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9B18u;
        goto label_2c9b18;
    }
    ctx->pc = 0x2C9B10u;
    {
        const bool branch_taken_0x2c9b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 31));
        if (branch_taken_0x2c9b10) {
            ctx->pc = 0x2C9B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9B10u;
            // 0x2c9b14: 0x3d524441  .word       0x3D524441                   # lui         $s2, 0x4441 # 01400000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)17473 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6024u;
            return;
        }
    }
    ctx->pc = 0x2C9B18u;
label_2c9b18:
    // 0x2c9b18: 0x78383025  lq          $t8, 0x3025($at)
    ctx->pc = 0x2c9b18u;
    SET_GPR_VEC(ctx, 24, READ128(ADD32(GPR_U32(ctx, 1), 12325)));
label_2c9b1c:
    // 0x2c9b1c: 0x3a  dsrl        $zero, $zero, 0
    ctx->pc = 0x2c9b1cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 0);
label_2c9b20:
    // 0x2c9b20: 0x4d5f3144  .word       0x4D5F3144                   # INVALID     $t2, $ra, 0x3144 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c9b20u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C9B20 raw=0x4D5F3144");
 /* MITIGATED */
label_2c9b24:
    // 0x2c9b24: 0x3d524441  .word       0x3D524441                   # lui         $s2, 0x4441 # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c9b24u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)17473 << 16));
label_2c9b28:
    // 0x2c9b28: 0x78383025  lq          $t8, 0x3025($at)
    ctx->pc = 0x2c9b28u;
    SET_GPR_VEC(ctx, 24, READ128(ADD32(GPR_U32(ctx, 1), 12325)));
label_2c9b2c:
    // 0x2c9b2c: 0x3a  dsrl        $zero, $zero, 0
    ctx->pc = 0x2c9b2cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 0);
label_2c9b30:
    // 0x2c9b30: 0x515f3144  beql        $t2, $ra, . + 4 + (0x3144 << 2)
label_2c9b34:
    if (ctx->pc == 0x2C9B34u) {
        ctx->pc = 0x2C9B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B30u;
        // 0x2c9b34: 0x253d4357  addiu       $sp, $t1, 0x4357 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 9), 17239));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9B38u;
        goto label_2c9b38;
    }
    ctx->pc = 0x2C9B30u;
    {
        const bool branch_taken_0x2c9b30 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 31));
        if (branch_taken_0x2c9b30) {
            ctx->pc = 0x2C9B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9B30u;
            // 0x2c9b34: 0x253d4357  addiu       $sp, $t1, 0x4357 (Delay Slot)
            SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 9), 17239));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6044u;
            return;
        }
    }
    ctx->pc = 0x2C9B38u;
label_2c9b38:
    // 0x2c9b38: 0x3e783830  .word       0x3E783830                   # lui         $t8, 0x3830 # 02600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c9b38u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)14384 << 16));
label_2c9b3c:
    // 0x2c9b3c: 0xa0d  break       0, 40
    ctx->pc = 0x2c9b3cu;
    runtime->handleBreak(rdram, ctx);
label_2c9b40:
    // 0x2c9b40: 0x32443c09  andi        $a0, $s2, 0x3C09
    ctx->pc = 0x2c9b40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)15369);
label_2c9b44:
    // 0x2c9b44: 0x4348435f  .word       0x4348435F                   # INVALID     $k0, $t0, 0x435F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c9b44u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x2C9B44 raw=0x4348435F");
 /* MITIGATED */
label_2c9b48:
    // 0x2c9b48: 0x30253d52  andi        $a1, $at, 0x3D52
    ctx->pc = 0x2c9b48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)15698);
label_2c9b4c:
    // 0x2c9b4c: 0x3a7838  .word       0x003A7838                   # dsll        $t7, $k0, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9b4cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 26) << 0);
label_2c9b50:
    // 0x2c9b50: 0x545f3244  bnel        $v0, $ra, . + 4 + (0x3244 << 2)
label_2c9b54:
    if (ctx->pc == 0x2C9B54u) {
        ctx->pc = 0x2C9B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B50u;
        // 0x2c9b54: 0x3d524441  .word       0x3D524441                   # lui         $s2, 0x4441 # 01400000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)17473 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9B58u;
        goto label_2c9b58;
    }
    ctx->pc = 0x2C9B50u;
    {
        const bool branch_taken_0x2c9b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 31));
        if (branch_taken_0x2c9b50) {
            ctx->pc = 0x2C9B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9B50u;
            // 0x2c9b54: 0x3d524441  .word       0x3D524441                   # lui         $s2, 0x4441 # 01400000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)17473 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6464u;
            return;
        }
    }
    ctx->pc = 0x2C9B58u;
label_2c9b58:
    // 0x2c9b58: 0x78383025  lq          $t8, 0x3025($at)
    ctx->pc = 0x2c9b58u;
    SET_GPR_VEC(ctx, 24, READ128(ADD32(GPR_U32(ctx, 1), 12325)));
label_2c9b5c:
    // 0x2c9b5c: 0x3a  dsrl        $zero, $zero, 0
    ctx->pc = 0x2c9b5cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 0);
label_2c9b60:
    // 0x2c9b60: 0x4d5f3244  .word       0x4D5F3244                   # INVALID     $t2, $ra, 0x3244 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c9b60u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C9B60 raw=0x4D5F3244");
 /* MITIGATED */
label_2c9b64:
    // 0x2c9b64: 0x3d524441  .word       0x3D524441                   # lui         $s2, 0x4441 # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c9b64u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)17473 << 16));
label_2c9b68:
    // 0x2c9b68: 0x78383025  lq          $t8, 0x3025($at)
    ctx->pc = 0x2c9b68u;
    SET_GPR_VEC(ctx, 24, READ128(ADD32(GPR_U32(ctx, 1), 12325)));
label_2c9b6c:
    // 0x2c9b6c: 0x3a  dsrl        $zero, $zero, 0
    ctx->pc = 0x2c9b6cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 0);
label_2c9b70:
    // 0x2c9b70: 0x515f3244  beql        $t2, $ra, . + 4 + (0x3244 << 2)
label_2c9b74:
    if (ctx->pc == 0x2C9B74u) {
        ctx->pc = 0x2C9B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B70u;
        // 0x2c9b74: 0x253d4357  addiu       $sp, $t1, 0x4357 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 9), 17239));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9B78u;
        goto label_2c9b78;
    }
    ctx->pc = 0x2C9B70u;
    {
        const bool branch_taken_0x2c9b70 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 31));
        if (branch_taken_0x2c9b70) {
            ctx->pc = 0x2C9B74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9B70u;
            // 0x2c9b74: 0x253d4357  addiu       $sp, $t1, 0x4357 (Delay Slot)
            SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 9), 17239));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6484u;
            return;
        }
    }
    ctx->pc = 0x2C9B78u;
label_2c9b78:
    // 0x2c9b78: 0x3e783830  .word       0x3E783830                   # lui         $t8, 0x3830 # 02600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c9b78u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)14384 << 16));
label_2c9b7c:
    // 0x2c9b7c: 0xa0d  break       0, 40
    ctx->pc = 0x2c9b7cu;
    runtime->handleBreak(rdram, ctx);
label_2c9b80:
    // 0x2c9b80: 0x49563c09  .word       0x49563C09                   # INVALID     $t2, $s6, 0x3C09 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2c9b80u;
//     throw std::runtime_error("Unhandled COP2 format: 0xA at 0x2C9B80 raw=0x49563C09");
 /* MITIGATED */
label_2c9b84:
    // 0x2c9b84: 0x535f3146  beql        $k0, $ra, . + 4 + (0x3146 << 2)
label_2c9b88:
    if (ctx->pc == 0x2C9B88u) {
        ctx->pc = 0x2C9B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B84u;
        // 0x2c9b88: 0x3d544154  .word       0x3D544154                   # lui         $s4, 0x4154 # 01400000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)16724 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9B8Cu;
        goto label_2c9b8c;
    }
    ctx->pc = 0x2C9B84u;
    {
        const bool branch_taken_0x2c9b84 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 31));
        if (branch_taken_0x2c9b84) {
            ctx->pc = 0x2C9B88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9B84u;
            // 0x2c9b88: 0x3d544154  .word       0x3D544154                   # lui         $s4, 0x4154 # 01400000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)16724 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D60A0u;
            return;
        }
    }
    ctx->pc = 0x2C9B8Cu;
label_2c9b8c:
    // 0x2c9b8c: 0x78383025  lq          $t8, 0x3025($at)
    ctx->pc = 0x2c9b8cu;
    SET_GPR_VEC(ctx, 24, READ128(ADD32(GPR_U32(ctx, 1), 12325)));
label_2c9b90:
    // 0x2c9b90: 0x3a  dsrl        $zero, $zero, 0
    ctx->pc = 0x2c9b90u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 0);
label_2c9b94:
    // 0x2c9b94: 0x0  nop
    ctx->pc = 0x2c9b94u;
    // NOP
label_2c9b98:
    // 0x2c9b98: 0x5f464947  .word       0x5F464947                   # bgtzl       $k0, . + 4 + (0x4947 << 2) # 00060000 <InstrIdType: CPU_NORMAL>
label_2c9b9c:
    if (ctx->pc == 0x2C9B9Cu) {
        ctx->pc = 0x2C9B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9B98u;
        // 0x2c9b9c: 0x54415453  bnel        $v0, $at, . + 4 + (0x5453 << 2) (Delay Slot)
        // Likely branch instruction at 0x2C9B9C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9BA0u;
        goto label_2c9ba0;
    }
    ctx->pc = 0x2C9B98u;
    {
        const bool branch_taken_0x2c9b98 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x2c9b98) {
            ctx->pc = 0x2C9B9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9B98u;
            // 0x2c9b9c: 0x54415453  bnel        $v0, $at, . + 4 + (0x5453 << 2) (Delay Slot)
            // Likely branch instruction at 0x2C9B9C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC0B8u;
            return;
        }
    }
    ctx->pc = 0x2C9BA0u;
label_2c9ba0:
    // 0x2c9ba0: 0x3830253d  xori        $s0, $at, 0x253D
    ctx->pc = 0x2c9ba0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) ^ (uint64_t)(uint16_t)9533);
label_2c9ba4:
    // 0x2c9ba4: 0xa0d3e78  j           func_834F9E0
label_2c9ba8:
    if (ctx->pc == 0x2C9BA8u) {
        ctx->pc = 0x2C9BACu;
        goto label_2c9bac;
    }
    ctx->pc = 0x2C9BA4u;
    ctx->pc = 0x834F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x834F9E0u, 0x2C9BA4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2C9BACu;
label_2c9bac:
    // 0x2c9bac: 0x0  nop
    ctx->pc = 0x2c9bacu;
    // NOP
label_2c9bb0:
    // 0x2c9bb0: 0x47656373  .word       0x47656373                   # INVALID     $k1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c9bb0u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x33 at 0x2C9BB0 raw=0x47656373");
 /* MITIGATED */
label_2c9bb4:
    // 0x2c9bb4: 0x6e795373  ldr         $t9, 0x5373($s3)
    ctx->pc = 0x2c9bb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 21363); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem >> shift)); }
label_2c9bb8:
    // 0x2c9bb8: 0x74615063  .word       0x74615063                   # INVALID     $v1, $at, 0x5063 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c9bb8u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C9BB8 raw=0x74615063");
 /* MITIGATED */
label_2c9bbc:
    // 0x2c9bbc: 0x44203a68  .word       0x44203A68                   # dmfc1       $zero, $f7 # 00000268 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c9bbcu;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x1, function 0x28 at 0x2C9BBC raw=0x44203A68");
 /* MITIGATED */
label_2c9bc0:
    // 0x2c9bc0: 0x4320414d  .word       0x4320414D                   # INVALID     $t9, $zero, 0x414D # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c9bc0u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x2C9BC0 raw=0x4320414D");
 /* MITIGATED */
label_2c9bc4:
    // 0x2c9bc4: 0x20322e68  addi        $s2, $at, 0x2E68
    ctx->pc = 0x2c9bc4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)11880, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
label_2c9bc8:
    // 0x2c9bc8: 0x73656f64  .word       0x73656F64                   # INVALID     $k1, $a1, 0x6F64 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c9bc8u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x24 at 0x2C9BC8 raw=0x73656F64");
 /* MITIGATED */
label_2c9bcc:
    // 0x2c9bcc: 0x746f6e20  .word       0x746F6E20                   # INVALID     $v1, $t7, 0x6E20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c9bccu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C9BCC raw=0x746F6E20");
 /* MITIGATED */
label_2c9bd0:
    // 0x2c9bd0: 0x72657420  .word       0x72657420                   # madd1       $t6, $s3, $a1 # 00000400 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c9bd0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 5); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_2c9bd4:
    // 0x2c9bd4: 0x616e696d  daddi       $t6, $t3, 0x696D
    ctx->pc = 0x2c9bd4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26989; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_2c9bd8:
    // 0x2c9bd8: 0xa0d6574  j           func_83595D0
label_2c9bdc:
    if (ctx->pc == 0x2C9BDCu) {
        ctx->pc = 0x2C9BE0u;
        goto label_2c9be0;
    }
    ctx->pc = 0x2C9BD8u;
    ctx->pc = 0x83595D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x83595D0u, 0x2C9BD8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2C9BE0u;
label_2c9be0:
    // 0x2c9be0: 0x47656373  .word       0x47656373                   # INVALID     $k1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c9be0u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x33 at 0x2C9BE0 raw=0x47656373");
 /* MITIGATED */
label_2c9be4:
    // 0x2c9be4: 0x6e795373  ldr         $t9, 0x5373($s3)
    ctx->pc = 0x2c9be4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 21363); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem >> shift)); }
label_2c9be8:
    // 0x2c9be8: 0x74615063  .word       0x74615063                   # INVALID     $v1, $at, 0x5063 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c9be8u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C9BE8 raw=0x74615063");
 /* MITIGATED */
label_2c9bec:
    // 0x2c9bec: 0x56203a68  bnel        $s1, $zero, . + 4 + (0x3A68 << 2)
label_2c9bf0:
    if (ctx->pc == 0x2C9BF0u) {
        ctx->pc = 0x2C9BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9BECu;
        // 0x2c9bf0: 0x20314649  addi        $s1, $at, 0x4649 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)17993, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 17, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9BF4u;
        goto label_2c9bf4;
    }
    ctx->pc = 0x2C9BECu;
    {
        const bool branch_taken_0x2c9bec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9bec) {
            ctx->pc = 0x2C9BF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9BECu;
            // 0x2c9bf0: 0x20314649  addi        $s1, $at, 0x4649 (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)17993, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 17, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D8590u;
            return;
        }
    }
    ctx->pc = 0x2C9BF4u;
label_2c9bf4:
    // 0x2c9bf4: 0x73656f64  .word       0x73656F64                   # INVALID     $k1, $a1, 0x6F64 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c9bf4u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x24 at 0x2C9BF4 raw=0x73656F64");
 /* MITIGATED */
label_2c9bf8:
    // 0x2c9bf8: 0x746f6e20  .word       0x746F6E20                   # INVALID     $v1, $t7, 0x6E20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c9bf8u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C9BF8 raw=0x746F6E20");
 /* MITIGATED */
label_2c9bfc:
    // 0x2c9bfc: 0x72657420  .word       0x72657420                   # madd1       $t6, $s3, $a1 # 00000400 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c9bfcu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 5); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_2c9c00:
    // 0x2c9c00: 0x616e696d  daddi       $t6, $t3, 0x696D
    ctx->pc = 0x2c9c00u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26989; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_2c9c04:
    // 0x2c9c04: 0xa0d6574  j           func_83595D0
label_2c9c08:
    if (ctx->pc == 0x2C9C08u) {
        ctx->pc = 0x2C9C0Cu;
        goto label_2c9c0c;
    }
    ctx->pc = 0x2C9C04u;
    ctx->pc = 0x83595D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x83595D0u, 0x2C9C04u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2C9C0Cu;
label_2c9c0c:
    // 0x2c9c0c: 0x0  nop
    ctx->pc = 0x2c9c0cu;
    // NOP
label_2c9c10:
    // 0x2c9c10: 0x47656373  .word       0x47656373                   # INVALID     $k1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c9c10u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x33 at 0x2C9C10 raw=0x47656373");
 /* MITIGATED */
label_2c9c14:
    // 0x2c9c14: 0x6e795373  ldr         $t9, 0x5373($s3)
    ctx->pc = 0x2c9c14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 21363); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem >> shift)); }
label_2c9c18:
    // 0x2c9c18: 0x74615063  .word       0x74615063                   # INVALID     $v1, $at, 0x5063 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c9c18u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C9C18 raw=0x74615063");
 /* MITIGATED */
label_2c9c1c:
    // 0x2c9c1c: 0x56203a68  bnel        $s1, $zero, . + 4 + (0x3A68 << 2)
label_2c9c20:
    if (ctx->pc == 0x2C9C20u) {
        ctx->pc = 0x2C9C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9C1Cu;
        // 0x2c9c20: 0x64203155  daddiu      $zero, $at, 0x3155 (Delay Slot)
        SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)12629);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9C24u;
        goto label_2c9c24;
    }
    ctx->pc = 0x2C9C1Cu;
    {
        const bool branch_taken_0x2c9c1c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9c1c) {
            ctx->pc = 0x2C9C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9C1Cu;
            // 0x2c9c20: 0x64203155  daddiu      $zero, $at, 0x3155 (Delay Slot)
            SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)12629);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D85C0u;
            return;
        }
    }
    ctx->pc = 0x2C9C24u;
label_2c9c24:
    // 0x2c9c24: 0x2073656f  addi        $s3, $v1, 0x656F
    ctx->pc = 0x2c9c24u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25967, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_2c9c28:
    // 0x2c9c28: 0x20746f6e  addi        $s4, $v1, 0x6F6E
    ctx->pc = 0x2c9c28u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28526, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_2c9c2c:
    // 0x2c9c2c: 0x6d726574  ldr         $s2, 0x6574($t3)
    ctx->pc = 0x2c9c2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25972); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_2c9c30:
    // 0x2c9c30: 0x74616e69  .word       0x74616E69                   # INVALID     $v1, $at, 0x6E69 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c9c30u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C9C30 raw=0x74616E69");
 /* MITIGATED */
label_2c9c34:
    // 0x2c9c34: 0xa0d65  .word       0x000A0D65                   # or          $at, $zero, $t2 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9c34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | GPR_U64(ctx, 10));
label_2c9c38:
    // 0x2c9c38: 0x47656373  .word       0x47656373                   # INVALID     $k1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c9c38u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x33 at 0x2C9C38 raw=0x47656373");
 /* MITIGATED */
label_2c9c3c:
    // 0x2c9c3c: 0x6e795373  ldr         $t9, 0x5373($s3)
    ctx->pc = 0x2c9c3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 21363); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem >> shift)); }
label_2c9c40:
    // 0x2c9c40: 0x74615063  .word       0x74615063                   # INVALID     $v1, $at, 0x5063 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c9c40u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C9C40 raw=0x74615063");
 /* MITIGATED */
label_2c9c44:
    // 0x2c9c44: 0x47203a68  .word       0x47203A68                   # INVALID     $t9, $zero, 0x3A68 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c9c44u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x19, function 0x28 at 0x2C9C44 raw=0x47203A68");
 /* MITIGATED */
label_2c9c48:
    // 0x2c9c48: 0x64204649  daddiu      $zero, $at, 0x4649
    ctx->pc = 0x2c9c48u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)17993);
label_2c9c4c:
    // 0x2c9c4c: 0x2073656f  addi        $s3, $v1, 0x656F
    ctx->pc = 0x2c9c4cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25967, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_2c9c50:
    // 0x2c9c50: 0x20746f6e  addi        $s4, $v1, 0x6F6E
    ctx->pc = 0x2c9c50u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28526, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_2c9c54:
    // 0x2c9c54: 0x6d726574  ldr         $s2, 0x6574($t3)
    ctx->pc = 0x2c9c54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25972); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_2c9c58:
    // 0x2c9c58: 0x74616e69  .word       0x74616E69                   # INVALID     $v1, $at, 0x6E69 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c9c58u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C9C58 raw=0x74616E69");
 /* MITIGATED */
label_2c9c5c:
    // 0x2c9c5c: 0xa0d65  .word       0x000A0D65                   # or          $at, $zero, $t2 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9c5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | GPR_U64(ctx, 10));
label_2c9c60:
    // 0x2c9c60: 0x47656373  .word       0x47656373                   # INVALID     $k1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c9c60u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x33 at 0x2C9C60 raw=0x47656373");
 /* MITIGATED */
label_2c9c64:
    // 0x2c9c64: 0x74655373  .word       0x74655373                   # INVALID     $v1, $a1, 0x5373 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c9c64u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C9C64 raw=0x74655373");
 /* MITIGATED */
label_2c9c68:
    // 0x2c9c68: 0x4c666544  .word       0x4C666544                   # INVALID     $v1, $a2, 0x6544 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c9c68u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C9C68 raw=0x4C666544");
 /* MITIGATED */
label_2c9c6c:
    // 0x2c9c6c: 0x4964616f  .word       0x4964616F                   # INVALID     $t3, $a0, 0x616F # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2c9c6cu;
//     throw std::runtime_error("Unhandled COP2 format: 0xB at 0x2C9C6C raw=0x4964616F");
 /* MITIGATED */
label_2c9c70:
    // 0x2c9c70: 0x6567616d  daddiu      $a3, $t3, 0x616D
    ctx->pc = 0x2c9c70u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24941);
label_2c9c74:
    // 0x2c9c74: 0x6f74203a  ldr         $s4, 0x203A($k1)
    ctx->pc = 0x2c9c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8250); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
label_2c9c78:
    // 0x2c9c78: 0x6962206f  ldl         $v0, 0x206F($t3)
    ctx->pc = 0x2c9c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2c9c7c:
    // 0x2c9c7c: 0x69732067  ldl         $s3, 0x2067($t3)
    ctx->pc = 0x2c9c7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
label_2c9c80:
    // 0x2c9c80: 0xa0d657a  j           func_83595E8
label_2c9c84:
    if (ctx->pc == 0x2C9C84u) {
        ctx->pc = 0x2C9C88u;
        goto label_2c9c88;
    }
    ctx->pc = 0x2C9C80u;
    ctx->pc = 0x83595E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x83595E8u, 0x2C9C80u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2C9C88u;
label_2c9c88:
    // 0x2c9c88: 0x0  nop
    ctx->pc = 0x2c9c88u;
    // NOP
label_2c9c8c:
    // 0x2c9c8c: 0x0  nop
    ctx->pc = 0x2c9c8cu;
    // NOP
label_2c9c90:
    // 0x2c9c90: 0x199484  .word       0x00199484                   # sllv        $s2, $t9, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9c90u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
label_2c9c94:
    // 0x2c9c94: 0x199490  .word       0x00199490                   # mfhi        $s2 # 00190480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9c94u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_2c9c98:
    // 0x2c9c98: 0x1994a4  .word       0x001994A4                   # and         $s2, $zero, $t9 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9c98u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) & GPR_U64(ctx, 25));
label_2c9c9c:
    // 0x2c9c9c: 0x1994c4  .word       0x001994C4                   # sllv        $s2, $t9, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9c9cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
label_2c9ca0:
    // 0x2c9ca0: 0x1994c4  .word       0x001994C4                   # sllv        $s2, $t9, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9ca0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
label_2c9ca4:
    // 0x2c9ca4: 0x1994c4  .word       0x001994C4                   # sllv        $s2, $t9, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9ca4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
label_2c9ca8:
    // 0x2c9ca8: 0x1994c4  .word       0x001994C4                   # sllv        $s2, $t9, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9ca8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
label_2c9cac:
    // 0x2c9cac: 0x1994c4  .word       0x001994C4                   # sllv        $s2, $t9, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9cacu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
label_2c9cb0:
    // 0x2c9cb0: 0x1994c4  .word       0x001994C4                   # sllv        $s2, $t9, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9cb0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
label_2c9cb4:
    // 0x2c9cb4: 0x1994c4  .word       0x001994C4                   # sllv        $s2, $t9, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9cb4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
label_2c9cb8:
    // 0x2c9cb8: 0x1994a4  .word       0x001994A4                   # and         $s2, $zero, $t9 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9cb8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) & GPR_U64(ctx, 25));
label_2c9cbc:
    // 0x2c9cbc: 0x1994c4  .word       0x001994C4                   # sllv        $s2, $t9, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9cbcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
label_2c9cc0:
    // 0x2c9cc0: 0x1994c4  .word       0x001994C4                   # sllv        $s2, $t9, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9cc0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
label_2c9cc4:
    // 0x2c9cc4: 0x1994c4  .word       0x001994C4                   # sllv        $s2, $t9, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9cc4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
label_2c9cc8:
    // 0x2c9cc8: 0x1994c4  .word       0x001994C4                   # sllv        $s2, $t9, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9cc8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
label_2c9ccc:
    // 0x2c9ccc: 0x1994c4  .word       0x001994C4                   # sllv        $s2, $t9, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9cccu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
label_2c9cd0:
    // 0x2c9cd0: 0x1994c4  .word       0x001994C4                   # sllv        $s2, $t9, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9cd0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
label_2c9cd4:
    // 0x2c9cd4: 0x1994c4  .word       0x001994C4                   # sllv        $s2, $t9, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9cd4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
label_2c9cd8:
    // 0x2c9cd8: 0x1994c4  .word       0x001994C4                   # sllv        $s2, $t9, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9cd8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
label_2c9cdc:
    // 0x2c9cdc: 0x1994b0  tge         $zero, $t9, 594
    ctx->pc = 0x2c9cdcu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
label_2c9ce0:
    // 0x2c9ce0: 0x1994bc  dsll32      $s2, $t9, 18
    ctx->pc = 0x2c9ce0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 25) << (32 + 18));
label_2c9ce4:
    // 0x2c9ce4: 0x1994c4  .word       0x001994C4                   # sllv        $s2, $t9, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9ce4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
label_2c9ce8:
    // 0x2c9ce8: 0x1994c4  .word       0x001994C4                   # sllv        $s2, $t9, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9ce8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
label_2c9cec:
    // 0x2c9cec: 0x1994c4  .word       0x001994C4                   # sllv        $s2, $t9, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9cecu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
label_2c9cf0:
    // 0x2c9cf0: 0x1994c4  .word       0x001994C4                   # sllv        $s2, $t9, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9cf0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
label_2c9cf4:
    // 0x2c9cf4: 0x1994c4  .word       0x001994C4                   # sllv        $s2, $t9, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9cf4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
label_2c9cf8:
    // 0x2c9cf8: 0x1994c4  .word       0x001994C4                   # sllv        $s2, $t9, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9cf8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
label_2c9cfc:
    // 0x2c9cfc: 0x1994b0  tge         $zero, $t9, 594
    ctx->pc = 0x2c9cfcu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 25)) { runtime->handleTrap(rdram, ctx); }
label_2c9d00:
    // 0x2c9d00: 0x1994c4  .word       0x001994C4                   # sllv        $s2, $t9, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9d00u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
label_2c9d04:
    // 0x2c9d04: 0x1994c4  .word       0x001994C4                   # sllv        $s2, $t9, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9d04u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
label_2c9d08:
    // 0x2c9d08: 0x1994c4  .word       0x001994C4                   # sllv        $s2, $t9, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9d08u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
label_2c9d0c:
    // 0x2c9d0c: 0x1994c4  .word       0x001994C4                   # sllv        $s2, $t9, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9d0cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
label_2c9d10:
    // 0x2c9d10: 0x1994c4  .word       0x001994C4                   # sllv        $s2, $t9, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9d10u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
label_2c9d14:
    // 0x2c9d14: 0x1994c4  .word       0x001994C4                   # sllv        $s2, $t9, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9d14u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
label_2c9d18:
    // 0x2c9d18: 0x1994c4  .word       0x001994C4                   # sllv        $s2, $t9, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9d18u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
label_2c9d1c:
    // 0x2c9d1c: 0x1994c4  .word       0x001994C4                   # sllv        $s2, $t9, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9d1cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
label_2c9d20:
    // 0x2c9d20: 0x1994bc  dsll32      $s2, $t9, 18
    ctx->pc = 0x2c9d20u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 25) << (32 + 18));
label_2c9d24:
    // 0x2c9d24: 0x1994c4  .word       0x001994C4                   # sllv        $s2, $t9, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9d24u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
label_2c9d28:
    // 0x2c9d28: 0x1994c4  .word       0x001994C4                   # sllv        $s2, $t9, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9d28u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
label_2c9d2c:
    // 0x2c9d2c: 0x1994c4  .word       0x001994C4                   # sllv        $s2, $t9, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9d2cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
label_2c9d30:
    // 0x2c9d30: 0x1994c4  .word       0x001994C4                   # sllv        $s2, $t9, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9d30u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
label_2c9d34:
    // 0x2c9d34: 0x1994c4  .word       0x001994C4                   # sllv        $s2, $t9, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9d34u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
label_2c9d38:
    // 0x2c9d38: 0x1994c4  .word       0x001994C4                   # sllv        $s2, $t9, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9d38u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
label_2c9d3c:
    // 0x2c9d3c: 0x1994c4  .word       0x001994C4                   # sllv        $s2, $t9, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9d3cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
label_2c9d40:
    // 0x2c9d40: 0x1994bc  dsll32      $s2, $t9, 18
    ctx->pc = 0x2c9d40u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 25) << (32 + 18));
label_2c9d44:
    // 0x2c9d44: 0x1994c4  .word       0x001994C4                   # sllv        $s2, $t9, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9d44u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
label_2c9d48:
    // 0x2c9d48: 0x1994c4  .word       0x001994C4                   # sllv        $s2, $t9, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9d48u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
label_2c9d4c:
    // 0x2c9d4c: 0x1994c4  .word       0x001994C4                   # sllv        $s2, $t9, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9d4cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
label_2c9d50:
    // 0x2c9d50: 0x199484  .word       0x00199484                   # sllv        $s2, $t9, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9d50u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
label_2c9d54:
    // 0x2c9d54: 0x199490  .word       0x00199490                   # mfhi        $s2 # 00190480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9d54u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_2c9d58:
    // 0x2c9d58: 0x1994a4  .word       0x001994A4                   # and         $s2, $zero, $t9 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9d58u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) & GPR_U64(ctx, 25));
label_2c9d5c:
    // 0x2c9d5c: 0x1994c4  .word       0x001994C4                   # sllv        $s2, $t9, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9d5cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
label_2c9d60:
    // 0x2c9d60: 0x1994c4  .word       0x001994C4                   # sllv        $s2, $t9, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9d60u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
label_2c9d64:
    // 0x2c9d64: 0x1994c4  .word       0x001994C4                   # sllv        $s2, $t9, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9d64u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
label_2c9d68:
    // 0x2c9d68: 0x1994c4  .word       0x001994C4                   # sllv        $s2, $t9, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9d68u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
label_2c9d6c:
    // 0x2c9d6c: 0x1994c4  .word       0x001994C4                   # sllv        $s2, $t9, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9d6cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
label_2c9d70:
    // 0x2c9d70: 0x1994c4  .word       0x001994C4                   # sllv        $s2, $t9, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9d70u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
label_2c9d74:
    // 0x2c9d74: 0x1994c4  .word       0x001994C4                   # sllv        $s2, $t9, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9d74u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 0) & 0x1F));
label_2c9d78:
    // 0x2c9d78: 0x1994a4  .word       0x001994A4                   # and         $s2, $zero, $t9 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9d78u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) & GPR_U64(ctx, 25));
label_2c9d7c:
    // 0x2c9d7c: 0x0  nop
    ctx->pc = 0x2c9d7cu;
    // NOP
label_2c9d80:
    // 0x2c9d80: 0x47656373  .word       0x47656373                   # INVALID     $k1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c9d80u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x33 at 0x2C9D80 raw=0x47656373");
 /* MITIGATED */
label_2c9d84:
    // 0x2c9d84: 0x65784573  daddiu      $t8, $t3, 0x4573
    ctx->pc = 0x2c9d84u;
    SET_GPR_S64(ctx, 24, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)17779);
label_2c9d88:
    // 0x2c9d88: 0x616f4c63  daddi       $t7, $t3, 0x4C63
    ctx->pc = 0x2c9d88u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)19555; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, res); }
label_2c9d8c:
    // 0x2c9d8c: 0x616d4964  daddi       $t5, $t3, 0x4964
    ctx->pc = 0x2c9d8cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)18788; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
label_2c9d90:
    // 0x2c9d90: 0x203a6567  addi        $k0, $at, 0x6567
    ctx->pc = 0x2c9d90u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)25959, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
label_2c9d94:
    // 0x2c9d94: 0x20414d44  addi        $at, $v0, 0x4D44
    ctx->pc = 0x2c9d94u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)19780, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_2c9d98:
    // 0x2c9d98: 0x322e6843  andi        $t6, $s1, 0x6843
    ctx->pc = 0x2c9d98u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)26691);
label_2c9d9c:
    // 0x2c9d9c: 0x656f6420  daddiu      $t7, $t3, 0x6420
    ctx->pc = 0x2c9d9cu;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25632);
label_2c9da0:
    // 0x2c9da0: 0x6f6e2073  ldr         $t6, 0x2073($k1)
    ctx->pc = 0x2c9da0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8307); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_2c9da4:
    // 0x2c9da4: 0x65742074  daddiu      $s4, $t3, 0x2074
    ctx->pc = 0x2c9da4u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8308);
label_2c9da8:
    // 0x2c9da8: 0x6e696d72  ldr         $t1, 0x6D72($s3)
    ctx->pc = 0x2c9da8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28018); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2c9dac:
    // 0x2c9dac: 0xd657461  jal         func_595D184
label_2c9db0:
    if (ctx->pc == 0x2C9DB0u) {
        ctx->pc = 0x2C9DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9DACu;
        // 0x2c9db0: 0xa  movz        $zero, $zero, $zero (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C9DB4u;
        goto label_2c9db4;
    }
    ctx->pc = 0x2C9DACu;
    SET_GPR_U32(ctx, 31, 0x2C9DB4u);
    ctx->pc = 0x2C9DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9DACu;
    // 0x2c9db0: 0xa  movz        $zero, $zero, $zero (Delay Slot)
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x595D184u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x595D184u, 0x2C9DACu, 0x2C9DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9DB4u;
label_2c9db4:
    // 0x2c9db4: 0x0  nop
    ctx->pc = 0x2c9db4u;
    // NOP
label_2c9db8:
    // 0x2c9db8: 0x0  nop
    ctx->pc = 0x2c9db8u;
    // NOP
label_2c9dbc:
    // 0x2c9dbc: 0x0  nop
    ctx->pc = 0x2c9dbcu;
    // NOP
label_2c9dc0:
    // 0x2c9dc0: 0x47656373  .word       0x47656373                   # INVALID     $k1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c9dc0u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x33 at 0x2C9DC0 raw=0x47656373");
 /* MITIGATED */
label_2c9dc4:
    // 0x2c9dc4: 0x65784573  daddiu      $t8, $t3, 0x4573
    ctx->pc = 0x2c9dc4u;
    SET_GPR_S64(ctx, 24, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)17779);
label_2c9dc8:
    // 0x2c9dc8: 0x6f745363  ldr         $s4, 0x5363($k1)
    ctx->pc = 0x2c9dc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 21347); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
label_2c9dcc:
    // 0x2c9dcc: 0x6d496572  ldr         $t1, 0x6572($t2)
    ctx->pc = 0x2c9dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 25970); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2c9dd0:
    // 0x2c9dd0: 0x3a656761  xori        $a1, $s3, 0x6761
    ctx->pc = 0x2c9dd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)26465);
label_2c9dd4:
    // 0x2c9dd4: 0x414d4420  .word       0x414D4420                   # INVALID     $t2, $t5, 0x4420 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c9dd4u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x2C9DD4 raw=0x414D4420");
 /* MITIGATED */
label_2c9dd8:
    // 0x2c9dd8: 0x2e684320  sltiu       $t0, $s3, 0x4320
    ctx->pc = 0x2c9dd8u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)17184) ? 1 : 0);
label_2c9ddc:
    // 0x2c9ddc: 0x6f642031  ldr         $a0, 0x2031($k1)
    ctx->pc = 0x2c9ddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8241); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_2c9de0:
    // 0x2c9de0: 0x6e207365  ldr         $zero, 0x7365($s1)
    ctx->pc = 0x2c9de0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 29541); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2c9de4:
    // 0x2c9de4: 0x7420746f  .word       0x7420746F                   # INVALID     $at, $zero, 0x746F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c9de4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C9DE4 raw=0x7420746F");
 /* MITIGATED */
label_2c9de8:
    // 0x2c9de8: 0x696d7265  ldl         $t5, 0x7265($t3)
    ctx->pc = 0x2c9de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
label_2c9dec:
    // 0x2c9dec: 0x6574616e  daddiu      $s4, $t3, 0x616E
    ctx->pc = 0x2c9decu;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24942);
label_2c9df0:
    // 0x2c9df0: 0xa0d  break       0, 40
    ctx->pc = 0x2c9df0u;
    runtime->handleBreak(rdram, ctx);
label_2c9df4:
    // 0x2c9df4: 0x0  nop
    ctx->pc = 0x2c9df4u;
    // NOP
label_2c9df8:
    // 0x2c9df8: 0x47656373  .word       0x47656373                   # INVALID     $k1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c9df8u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x33 at 0x2C9DF8 raw=0x47656373");
 /* MITIGATED */
label_2c9dfc:
    // 0x2c9dfc: 0x65784573  daddiu      $t8, $t3, 0x4573
    ctx->pc = 0x2c9dfcu;
    SET_GPR_S64(ctx, 24, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)17779);
label_2c9e00:
    // 0x2c9e00: 0x6f745363  ldr         $s4, 0x5363($k1)
    ctx->pc = 0x2c9e00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 21347); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
label_2c9e04:
    // 0x2c9e04: 0x6d496572  ldr         $t1, 0x6572($t2)
    ctx->pc = 0x2c9e04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 25970); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2c9e08:
    // 0x2c9e08: 0x3a656761  xori        $a1, $s3, 0x6761
    ctx->pc = 0x2c9e08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)26465);
label_2c9e0c:
    // 0x2c9e0c: 0x20534720  addi        $s3, $v0, 0x4720
    ctx->pc = 0x2c9e0cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)18208, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_2c9e10:
    // 0x2c9e10: 0x73656f64  .word       0x73656F64                   # INVALID     $k1, $a1, 0x6F64 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c9e10u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x24 at 0x2C9E10 raw=0x73656F64");
 /* MITIGATED */
label_2c9e14:
    // 0x2c9e14: 0x746f6e20  .word       0x746F6E20                   # INVALID     $v1, $t7, 0x6E20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c9e14u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C9E14 raw=0x746F6E20");
 /* MITIGATED */
label_2c9e18:
    // 0x2c9e18: 0x72657420  .word       0x72657420                   # madd1       $t6, $s3, $a1 # 00000400 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c9e18u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 5); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_2c9e1c:
    // 0x2c9e1c: 0x616e696d  daddi       $t6, $t3, 0x696D
    ctx->pc = 0x2c9e1cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26989; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_2c9e20:
    // 0x2c9e20: 0xa0d6574  j           func_83595D0
label_2c9e24:
    if (ctx->pc == 0x2C9E24u) {
        ctx->pc = 0x2C9E28u;
        goto label_2c9e28;
    }
    ctx->pc = 0x2C9E20u;
    ctx->pc = 0x83595D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x83595D0u, 0x2C9E20u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2C9E28u;
label_2c9e28:
    // 0x2c9e28: 0x47656373  .word       0x47656373                   # INVALID     $k1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c9e28u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x33 at 0x2C9E28 raw=0x47656373");
 /* MITIGATED */
label_2c9e2c:
    // 0x2c9e2c: 0x65784573  daddiu      $t8, $t3, 0x4573
    ctx->pc = 0x2c9e2cu;
    SET_GPR_S64(ctx, 24, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)17779);
label_2c9e30:
    // 0x2c9e30: 0x6f745363  ldr         $s4, 0x5363($k1)
    ctx->pc = 0x2c9e30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 21347); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
label_2c9e34:
    // 0x2c9e34: 0x6d496572  ldr         $t1, 0x6572($t2)
    ctx->pc = 0x2c9e34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 25970); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2c9e38:
    // 0x2c9e38: 0x3a656761  xori        $a1, $s3, 0x6761
    ctx->pc = 0x2c9e38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)26465);
label_2c9e3c:
    // 0x2c9e3c: 0x414d4420  .word       0x414D4420                   # INVALID     $t2, $t5, 0x4420 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2c9e3cu;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x2C9E3C raw=0x414D4420");
 /* MITIGATED */
label_2c9e40:
    // 0x2c9e40: 0x2e684320  sltiu       $t0, $s3, 0x4320
    ctx->pc = 0x2c9e40u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)17184) ? 1 : 0);
label_2c9e44:
    // 0x2c9e44: 0x47282031  .word       0x47282031                   # INVALID     $t9, $t0, 0x2031 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c9e44u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x19, function 0x31 at 0x2C9E44 raw=0x47282031");
 /* MITIGATED */
label_2c9e48:
    // 0x2c9e48: 0x4d3e2d53  .word       0x4D3E2D53                   # INVALID     $t1, $fp, 0x2D53 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c9e48u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2C9E48 raw=0x4D3E2D53");
 /* MITIGATED */
label_2c9e4c:
    // 0x2c9e4c: 0x20294d45  addi        $t1, $at, 0x4D45
    ctx->pc = 0x2c9e4cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)19781, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_2c9e50:
    // 0x2c9e50: 0x73656f64  .word       0x73656F64                   # INVALID     $k1, $a1, 0x6F64 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c9e50u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x24 at 0x2C9E50 raw=0x73656F64");
 /* MITIGATED */
label_2c9e54:
    // 0x2c9e54: 0x746f6e20  .word       0x746F6E20                   # INVALID     $v1, $t7, 0x6E20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c9e54u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C9E54 raw=0x746F6E20");
 /* MITIGATED */
label_2c9e58:
    // 0x2c9e58: 0x72657420  .word       0x72657420                   # madd1       $t6, $s3, $a1 # 00000400 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c9e58u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 5); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_2c9e5c:
    // 0x2c9e5c: 0x616e696d  daddi       $t6, $t3, 0x696D
    ctx->pc = 0x2c9e5cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26989; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_2c9e60:
    // 0x2c9e60: 0xa0d6574  j           func_83595D0
label_2c9e64:
    if (ctx->pc == 0x2C9E64u) {
        ctx->pc = 0x2C9E68u;
        goto label_2c9e68;
    }
    ctx->pc = 0x2C9E60u;
    ctx->pc = 0x83595D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x83595D0u, 0x2C9E60u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2C9E68u;
label_2c9e68:
    // 0x2c9e68: 0x47656373  .word       0x47656373                   # INVALID     $k1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2c9e68u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x33 at 0x2C9E68 raw=0x47656373");
 /* MITIGATED */
label_2c9e6c:
    // 0x2c9e6c: 0x65784573  daddiu      $t8, $t3, 0x4573
    ctx->pc = 0x2c9e6cu;
    SET_GPR_S64(ctx, 24, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)17779);
label_2c9e70:
    // 0x2c9e70: 0x6f745363  ldr         $s4, 0x5363($k1)
    ctx->pc = 0x2c9e70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 21347); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
label_2c9e74:
    // 0x2c9e74: 0x6d496572  ldr         $t1, 0x6572($t2)
    ctx->pc = 0x2c9e74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 25970); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2c9e78:
    // 0x2c9e78: 0x3a656761  xori        $a1, $s3, 0x6761
    ctx->pc = 0x2c9e78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)26465);
label_2c9e7c:
    // 0x2c9e7c: 0x6f6e4520  ldr         $t6, 0x4520($k1)
    ctx->pc = 0x2c9e7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 17696); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_2c9e80:
    // 0x2c9e80: 0x20686775  addi        $t0, $v1, 0x6775
    ctx->pc = 0x2c9e80u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26485, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
label_2c9e84:
    // 0x2c9e84: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x2c9e84u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_2c9e88:
    // 0x2c9e88: 0x656f6420  daddiu      $t7, $t3, 0x6420
    ctx->pc = 0x2c9e88u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25632);
label_2c9e8c:
    // 0x2c9e8c: 0x6f6e2073  ldr         $t6, 0x2073($k1)
    ctx->pc = 0x2c9e8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8307); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_2c9e90:
    // 0x2c9e90: 0x65722074  daddiu      $s2, $t3, 0x2074
    ctx->pc = 0x2c9e90u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8308);
label_2c9e94:
    // 0x2c9e94: 0x20686361  addi        $t0, $v1, 0x6361
    ctx->pc = 0x2c9e94u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25441, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
label_2c9e98:
    // 0x2c9e98: 0x31464956  andi        $a2, $t2, 0x4956
    ctx->pc = 0x2c9e98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)18774);
label_2c9e9c:
    // 0x2c9e9c: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x2c9e9cu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2c9ea0:
    // 0x2c9ea0: 0x19995c  .word       0x0019995C                   # dmult       $zero, $t9 # 00009940 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9ea0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C9EA0 raw=0x0019995C");
 /* MITIGATED */
label_2c9ea4:
    // 0x2c9ea4: 0x199994  .word       0x00199994                   # dsllv       $s3, $t9, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9ea4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 25) << (GPR_U32(ctx, 0) & 0x3F));
label_2c9ea8:
    // 0x2c9ea8: 0x1999e4  .word       0x001999E4                   # and         $s3, $zero, $t9 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9ea8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) & GPR_U64(ctx, 25));
label_2c9eac:
    // 0x2c9eac: 0x199a9c  .word       0x00199A9C                   # dmult       $zero, $t9 # 00009A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9eacu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C9EAC raw=0x00199A9C");
 /* MITIGATED */
label_2c9eb0:
    // 0x2c9eb0: 0x199a9c  .word       0x00199A9C                   # dmult       $zero, $t9 # 00009A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9eb0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C9EB0 raw=0x00199A9C");
 /* MITIGATED */
label_2c9eb4:
    // 0x2c9eb4: 0x199a9c  .word       0x00199A9C                   # dmult       $zero, $t9 # 00009A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9eb4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C9EB4 raw=0x00199A9C");
 /* MITIGATED */
label_2c9eb8:
    // 0x2c9eb8: 0x199a9c  .word       0x00199A9C                   # dmult       $zero, $t9 # 00009A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9eb8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C9EB8 raw=0x00199A9C");
 /* MITIGATED */
label_2c9ebc:
    // 0x2c9ebc: 0x199a9c  .word       0x00199A9C                   # dmult       $zero, $t9 # 00009A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9ebcu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C9EBC raw=0x00199A9C");
 /* MITIGATED */
label_2c9ec0:
    // 0x2c9ec0: 0x199a9c  .word       0x00199A9C                   # dmult       $zero, $t9 # 00009A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9ec0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C9EC0 raw=0x00199A9C");
 /* MITIGATED */
label_2c9ec4:
    // 0x2c9ec4: 0x199a9c  .word       0x00199A9C                   # dmult       $zero, $t9 # 00009A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9ec4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C9EC4 raw=0x00199A9C");
 /* MITIGATED */
label_2c9ec8:
    // 0x2c9ec8: 0x1999e4  .word       0x001999E4                   # and         $s3, $zero, $t9 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9ec8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) & GPR_U64(ctx, 25));
label_2c9ecc:
    // 0x2c9ecc: 0x199a9c  .word       0x00199A9C                   # dmult       $zero, $t9 # 00009A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9eccu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C9ECC raw=0x00199A9C");
 /* MITIGATED */
label_2c9ed0:
    // 0x2c9ed0: 0x199a9c  .word       0x00199A9C                   # dmult       $zero, $t9 # 00009A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9ed0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C9ED0 raw=0x00199A9C");
 /* MITIGATED */
label_2c9ed4:
    // 0x2c9ed4: 0x199a9c  .word       0x00199A9C                   # dmult       $zero, $t9 # 00009A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9ed4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C9ED4 raw=0x00199A9C");
 /* MITIGATED */
label_2c9ed8:
    // 0x2c9ed8: 0x199a9c  .word       0x00199A9C                   # dmult       $zero, $t9 # 00009A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9ed8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C9ED8 raw=0x00199A9C");
 /* MITIGATED */
label_2c9edc:
    // 0x2c9edc: 0x199a9c  .word       0x00199A9C                   # dmult       $zero, $t9 # 00009A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9edcu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C9EDC raw=0x00199A9C");
 /* MITIGATED */
label_2c9ee0:
    // 0x2c9ee0: 0x199a9c  .word       0x00199A9C                   # dmult       $zero, $t9 # 00009A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9ee0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C9EE0 raw=0x00199A9C");
 /* MITIGATED */
label_2c9ee4:
    // 0x2c9ee4: 0x199a9c  .word       0x00199A9C                   # dmult       $zero, $t9 # 00009A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9ee4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C9EE4 raw=0x00199A9C");
 /* MITIGATED */
label_2c9ee8:
    // 0x2c9ee8: 0x199a9c  .word       0x00199A9C                   # dmult       $zero, $t9 # 00009A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9ee8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C9EE8 raw=0x00199A9C");
 /* MITIGATED */
label_2c9eec:
    // 0x2c9eec: 0x199a1c  .word       0x00199A1C                   # dmult       $zero, $t9 # 00009A00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9eecu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C9EEC raw=0x00199A1C");
 /* MITIGATED */
label_2c9ef0:
    // 0x2c9ef0: 0x199a50  .word       0x00199A50                   # mfhi        $s3 # 00190240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9ef0u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_2c9ef4:
    // 0x2c9ef4: 0x199a9c  .word       0x00199A9C                   # dmult       $zero, $t9 # 00009A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9ef4u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C9EF4 raw=0x00199A9C");
 /* MITIGATED */
label_2c9ef8:
    // 0x2c9ef8: 0x199a9c  .word       0x00199A9C                   # dmult       $zero, $t9 # 00009A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9ef8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C9EF8 raw=0x00199A9C");
 /* MITIGATED */
label_2c9efc:
    // 0x2c9efc: 0x199a9c  .word       0x00199A9C                   # dmult       $zero, $t9 # 00009A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9efcu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C9EFC raw=0x00199A9C");
 /* MITIGATED */
label_2c9f00:
    // 0x2c9f00: 0x199a9c  .word       0x00199A9C                   # dmult       $zero, $t9 # 00009A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9f00u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C9F00 raw=0x00199A9C");
 /* MITIGATED */
label_2c9f04:
    // 0x2c9f04: 0x199a9c  .word       0x00199A9C                   # dmult       $zero, $t9 # 00009A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9f04u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C9F04 raw=0x00199A9C");
 /* MITIGATED */
label_2c9f08:
    // 0x2c9f08: 0x199a9c  .word       0x00199A9C                   # dmult       $zero, $t9 # 00009A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9f08u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C9F08 raw=0x00199A9C");
 /* MITIGATED */
label_2c9f0c:
    // 0x2c9f0c: 0x199a1c  .word       0x00199A1C                   # dmult       $zero, $t9 # 00009A00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9f0cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C9F0C raw=0x00199A1C");
 /* MITIGATED */
label_2c9f10:
    // 0x2c9f10: 0x199a9c  .word       0x00199A9C                   # dmult       $zero, $t9 # 00009A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9f10u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C9F10 raw=0x00199A9C");
 /* MITIGATED */
label_2c9f14:
    // 0x2c9f14: 0x199a9c  .word       0x00199A9C                   # dmult       $zero, $t9 # 00009A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9f14u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C9F14 raw=0x00199A9C");
 /* MITIGATED */
label_2c9f18:
    // 0x2c9f18: 0x199a9c  .word       0x00199A9C                   # dmult       $zero, $t9 # 00009A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9f18u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C9F18 raw=0x00199A9C");
 /* MITIGATED */
label_2c9f1c:
    // 0x2c9f1c: 0x199a9c  .word       0x00199A9C                   # dmult       $zero, $t9 # 00009A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9f1cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C9F1C raw=0x00199A9C");
 /* MITIGATED */
label_2c9f20:
    // 0x2c9f20: 0x199a9c  .word       0x00199A9C                   # dmult       $zero, $t9 # 00009A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9f20u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C9F20 raw=0x00199A9C");
 /* MITIGATED */
label_2c9f24:
    // 0x2c9f24: 0x199a9c  .word       0x00199A9C                   # dmult       $zero, $t9 # 00009A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9f24u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C9F24 raw=0x00199A9C");
 /* MITIGATED */
label_2c9f28:
    // 0x2c9f28: 0x199a9c  .word       0x00199A9C                   # dmult       $zero, $t9 # 00009A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9f28u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C9F28 raw=0x00199A9C");
 /* MITIGATED */
label_2c9f2c:
    // 0x2c9f2c: 0x199a9c  .word       0x00199A9C                   # dmult       $zero, $t9 # 00009A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9f2cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C9F2C raw=0x00199A9C");
 /* MITIGATED */
label_2c9f30:
    // 0x2c9f30: 0x199a50  .word       0x00199A50                   # mfhi        $s3 # 00190240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9f30u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_2c9f34:
    // 0x2c9f34: 0x199a9c  .word       0x00199A9C                   # dmult       $zero, $t9 # 00009A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9f34u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C9F34 raw=0x00199A9C");
 /* MITIGATED */
label_2c9f38:
    // 0x2c9f38: 0x199a9c  .word       0x00199A9C                   # dmult       $zero, $t9 # 00009A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9f38u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C9F38 raw=0x00199A9C");
 /* MITIGATED */
label_2c9f3c:
    // 0x2c9f3c: 0x199a9c  .word       0x00199A9C                   # dmult       $zero, $t9 # 00009A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9f3cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C9F3C raw=0x00199A9C");
 /* MITIGATED */
label_2c9f40:
    // 0x2c9f40: 0x199a9c  .word       0x00199A9C                   # dmult       $zero, $t9 # 00009A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9f40u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C9F40 raw=0x00199A9C");
 /* MITIGATED */
label_2c9f44:
    // 0x2c9f44: 0x199a9c  .word       0x00199A9C                   # dmult       $zero, $t9 # 00009A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9f44u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C9F44 raw=0x00199A9C");
 /* MITIGATED */
label_2c9f48:
    // 0x2c9f48: 0x199a9c  .word       0x00199A9C                   # dmult       $zero, $t9 # 00009A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9f48u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C9F48 raw=0x00199A9C");
 /* MITIGATED */
label_2c9f4c:
    // 0x2c9f4c: 0x199a9c  .word       0x00199A9C                   # dmult       $zero, $t9 # 00009A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9f4cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C9F4C raw=0x00199A9C");
 /* MITIGATED */
label_2c9f50:
    // 0x2c9f50: 0x199a50  .word       0x00199A50                   # mfhi        $s3 # 00190240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9f50u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_2c9f54:
    // 0x2c9f54: 0x199a9c  .word       0x00199A9C                   # dmult       $zero, $t9 # 00009A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9f54u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C9F54 raw=0x00199A9C");
 /* MITIGATED */
label_2c9f58:
    // 0x2c9f58: 0x199a9c  .word       0x00199A9C                   # dmult       $zero, $t9 # 00009A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9f58u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C9F58 raw=0x00199A9C");
 /* MITIGATED */
label_2c9f5c:
    // 0x2c9f5c: 0x199a9c  .word       0x00199A9C                   # dmult       $zero, $t9 # 00009A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9f5cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C9F5C raw=0x00199A9C");
 /* MITIGATED */
label_2c9f60:
    // 0x2c9f60: 0x19995c  .word       0x0019995C                   # dmult       $zero, $t9 # 00009940 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9f60u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C9F60 raw=0x0019995C");
 /* MITIGATED */
label_2c9f64:
    // 0x2c9f64: 0x199994  .word       0x00199994                   # dsllv       $s3, $t9, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9f64u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 25) << (GPR_U32(ctx, 0) & 0x3F));
label_2c9f68:
    // 0x2c9f68: 0x1999e4  .word       0x001999E4                   # and         $s3, $zero, $t9 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9f68u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) & GPR_U64(ctx, 25));
label_2c9f6c:
    // 0x2c9f6c: 0x199a9c  .word       0x00199A9C                   # dmult       $zero, $t9 # 00009A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9f6cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C9F6C raw=0x00199A9C");
 /* MITIGATED */
label_2c9f70:
    // 0x2c9f70: 0x199a9c  .word       0x00199A9C                   # dmult       $zero, $t9 # 00009A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9f70u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C9F70 raw=0x00199A9C");
 /* MITIGATED */
label_2c9f74:
    // 0x2c9f74: 0x199a9c  .word       0x00199A9C                   # dmult       $zero, $t9 # 00009A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9f74u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C9F74 raw=0x00199A9C");
 /* MITIGATED */
label_2c9f78:
    // 0x2c9f78: 0x199a9c  .word       0x00199A9C                   # dmult       $zero, $t9 # 00009A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9f78u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C9F78 raw=0x00199A9C");
 /* MITIGATED */
label_2c9f7c:
    // 0x2c9f7c: 0x199a9c  .word       0x00199A9C                   # dmult       $zero, $t9 # 00009A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9f7cu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C9F7C raw=0x00199A9C");
 /* MITIGATED */
label_2c9f80:
    // 0x2c9f80: 0x199a9c  .word       0x00199A9C                   # dmult       $zero, $t9 # 00009A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9f80u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C9F80 raw=0x00199A9C");
 /* MITIGATED */
label_2c9f84:
    // 0x2c9f84: 0x199a9c  .word       0x00199A9C                   # dmult       $zero, $t9 # 00009A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9f84u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2C9F84 raw=0x00199A9C");
 /* MITIGATED */
label_2c9f88:
    // 0x2c9f88: 0x1999e4  .word       0x001999E4                   # and         $s3, $zero, $t9 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9f88u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) & GPR_U64(ctx, 25));
label_2c9f8c:
    // 0x2c9f8c: 0x0  nop
    ctx->pc = 0x2c9f8cu;
    // NOP
label_2c9f90:
    // 0x2c9f90: 0x6462696c  daddiu      $v0, $v1, 0x696C
    ctx->pc = 0x2c9f90u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26988);
label_2c9f94:
    // 0x2c9f94: 0x203a616d  addi        $k0, $at, 0x616D
    ctx->pc = 0x2c9f94u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)24941, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
label_2c9f98:
    // 0x2c9f98: 0x636e7973  daddi       $t6, $k1, 0x7973
    ctx->pc = 0x2c9f98u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)31091; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_2c9f9c:
    // 0x2c9f9c: 0x6d697420  ldr         $t1, 0x7420($t3)
    ctx->pc = 0x2c9f9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29728); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2c9fa0:
    // 0x2c9fa0: 0x74756f65  .word       0x74756F65                   # INVALID     $v1, $s5, 0x6F65 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c9fa0u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C9FA0 raw=0x74756F65");
 /* MITIGATED */
label_2c9fa4:
    // 0x2c9fa4: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x2c9fa4u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2c9fa8:
    // 0x2c9fa8: 0x61766e49  daddi       $s6, $t3, 0x6E49
    ctx->pc = 0x2c9fa8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28233; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, res); }
label_2c9fac:
    // 0x2c9fac: 0x2064696c  addi        $a0, $v1, 0x696C
    ctx->pc = 0x2c9facu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26988, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2c9fb0:
    // 0x2c9fb0: 0x69646f6d  ldl         $a0, 0x6F6D($t3)
    ctx->pc = 0x2c9fb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28525); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_2c9fb4:
    // 0x2c9fb4: 0x74206e6f  .word       0x74206E6F                   # INVALID     $at, $zero, 0x6E6F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c9fb4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C9FB4 raw=0x74206E6F");
 /* MITIGATED */
label_2c9fb8:
    // 0x2c9fb8: 0x20657079  addi        $a1, $v1, 0x7079
    ctx->pc = 0x2c9fb8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28793, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2c9fbc:
    // 0x2c9fbc: 0x69202d2d  ldl         $zero, 0x2D2D($t1)
    ctx->pc = 0x2c9fbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 11565); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
label_2c9fc0:
    // 0x2c9fc0: 0x726f6e67  .word       0x726F6E67                   # INVALID     $s3, $t7, 0x6E67 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2c9fc0u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x27 at 0x2C9FC0 raw=0x726F6E67");
 /* MITIGATED */
label_2c9fc4:
    // 0x2c9fc4: 0x25286465  addiu       $t0, $t1, 0x6465
    ctx->pc = 0x2c9fc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 25701));
label_2c9fc8:
    // 0x2c9fc8: 0x2964  .word       0x00002964                   # and         $a1, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2c9fc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2c9fcc:
    // 0x2c9fcc: 0x0  nop
    ctx->pc = 0x2c9fccu;
    // NOP
label_2c9fd0:
    // 0x2c9fd0: 0x20296128  addi        $t1, $at, 0x6128
    ctx->pc = 0x2c9fd0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)24872, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_2c9fd4:
    // 0x2c9fd4: 0x61766e69  daddi       $s6, $t3, 0x6E69
    ctx->pc = 0x2c9fd4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28265; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, res); }
label_2c9fd8:
    // 0x2c9fd8: 0x2064696c  addi        $a0, $v1, 0x696C
    ctx->pc = 0x2c9fd8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26988, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2c9fdc:
    // 0x2c9fdc: 0x69746f6d  ldl         $s4, 0x6F6D($t3)
    ctx->pc = 0x2c9fdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28525); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_2c9fe0:
    // 0x2c9fe0: 0x745f6e6f  .word       0x745F6E6F                   # INVALID     $v0, $ra, 0x6E6F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2c9fe0u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2C9FE0 raw=0x745F6E6F");
 /* MITIGATED */
label_2c9fe4:
    // 0x2c9fe4: 0x28657079  slti        $a1, $v1, 0x7079
    ctx->pc = 0x2c9fe4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)28793) ? 1 : 0);
label_2c9fe8:
    // 0x2c9fe8: 0x2d296425  sltiu       $t1, $t1, 0x6425
    ctx->pc = 0x2c9fe8u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)25637) ? 1 : 0);
label_2c9fec:
    // 0x2c9fec: 0x30  tge         $zero, $zero, 0
    ctx->pc = 0x2c9fecu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2c9ff0:
    // 0x2c9ff0: 0x20296228  addi        $t1, $at, 0x6228
    ctx->pc = 0x2c9ff0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)25128, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_2c9ff4:
    // 0x2c9ff4: 0x61766e69  daddi       $s6, $t3, 0x6E69
    ctx->pc = 0x2c9ff4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28265; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, res); }
label_2c9ff8:
    // 0x2c9ff8: 0x2064696c  addi        $a0, $v1, 0x696C
    ctx->pc = 0x2c9ff8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26988, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2c9ffc:
    // 0x2c9ffc: 0x69746f6d  ldl         $s4, 0x6F6D($t3)
    ctx->pc = 0x2c9ffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28525); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_2ca000:
    // 0x2ca000: 0x745f6e6f  .word       0x745F6E6F                   # INVALID     $v0, $ra, 0x6E6F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ca000u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CA000 raw=0x745F6E6F");
 /* MITIGATED */
label_2ca004:
    // 0x2ca004: 0x28657079  slti        $a1, $v1, 0x7079
    ctx->pc = 0x2ca004u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)28793) ? 1 : 0);
label_2ca008:
    // 0x2ca008: 0x2d296425  sltiu       $t1, $t1, 0x6425
    ctx->pc = 0x2ca008u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)25637) ? 1 : 0);
label_2ca00c:
    // 0x2ca00c: 0x31  tgeu        $zero, $zero, 0
    ctx->pc = 0x2ca00cu;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2ca010:
    // 0x2ca010: 0x20296328  addi        $t1, $at, 0x6328
    ctx->pc = 0x2ca010u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)25384, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_2ca014:
    // 0x2ca014: 0x61766e69  daddi       $s6, $t3, 0x6E69
    ctx->pc = 0x2ca014u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28265; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, res); }
label_2ca018:
    // 0x2ca018: 0x2064696c  addi        $a0, $v1, 0x696C
    ctx->pc = 0x2ca018u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26988, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2ca01c:
    // 0x2ca01c: 0x69746f6d  ldl         $s4, 0x6F6D($t3)
    ctx->pc = 0x2ca01cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28525); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_2ca020:
    // 0x2ca020: 0x745f6e6f  .word       0x745F6E6F                   # INVALID     $v0, $ra, 0x6E6F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ca020u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CA020 raw=0x745F6E6F");
 /* MITIGATED */
label_2ca024:
    // 0x2ca024: 0x28657079  slti        $a1, $v1, 0x7079
    ctx->pc = 0x2ca024u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)28793) ? 1 : 0);
label_2ca028:
    // 0x2ca028: 0x2d296425  sltiu       $t1, $t1, 0x6425
    ctx->pc = 0x2ca028u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)25637) ? 1 : 0);
label_2ca02c:
    // 0x2ca02c: 0x32  tlt         $zero, $zero, 0
    ctx->pc = 0x2ca02cu;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2ca030:
    // 0x2ca030: 0x72746e69  .word       0x72746E69                   # INVALID     $s3, $s4, 0x6E69 # 00000000 <InstrIdType: R5900_MMI_3>
    ctx->pc = 0x2ca030u;
//     throw std::runtime_error("Unhandled MMI3 instruction: function 0x19 at 0x2CA030 raw=0x72746E69");
 /* MITIGATED */
label_2ca034:
    // 0x2ca034: 0x26262061  addiu       $a2, $s1, 0x2061
    ctx->pc = 0x2ca034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8289));
label_2ca038:
    // 0x2ca038: 0x696b7320  ldl         $t3, 0x7320($t3)
    ctx->pc = 0x2ca038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29472); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_2ca03c:
    // 0x2ca03c: 0x424d2070  .word       0x424D2070                   # INVALID     $s2, $t5, 0x2070 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2ca03cu;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x2CA03C raw=0x424D2070");
 /* MITIGATED */
label_2ca040:
    // 0x2ca040: 0x0  nop
    ctx->pc = 0x2ca040u;
    // NOP
label_2ca044:
    // 0x2ca044: 0x0  nop
    ctx->pc = 0x2ca044u;
    // NOP
label_2ca048:
    // 0x2ca048: 0x6f727245  ldr         $s2, 0x7245($k1)
    ctx->pc = 0x2ca048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29253); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_2ca04c:
    // 0x2ca04c: 0x6f632072  ldr         $v1, 0x2072($k1)
    ctx->pc = 0x2ca04cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8306); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2ca050:
    // 0x2ca050: 0x64206564  daddiu      $zero, $at, 0x6564
    ctx->pc = 0x2ca050u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)25956);
label_2ca054:
    // 0x2ca054: 0x63657465  daddi       $a1, $k1, 0x7465
    ctx->pc = 0x2ca054u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)29797; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_2ca058:
    // 0x2ca058: 0x28646574  slti        $a0, $v1, 0x6574
    ctx->pc = 0x2ca058u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)25972) ? 1 : 0);
label_2ca05c:
    // 0x2ca05c: 0x43454442  .word       0x43454442                   # INVALID     $k0, $a1, 0x4442 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2ca05cu;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x2CA05C raw=0x43454442");
 /* MITIGATED */
label_2ca060:
    // 0x2ca060: 0x29  mtsa        $zero
    ctx->pc = 0x2ca060u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2ca064:
    // 0x2ca064: 0x0  nop
    ctx->pc = 0x2ca064u;
    // NOP
label_2ca068:
    // 0x2ca068: 0x61766e49  daddi       $s6, $t3, 0x6E49
    ctx->pc = 0x2ca068u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28233; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, res); }
label_2ca06c:
    // 0x2ca06c: 0x2064696c  addi        $a0, $v1, 0x696C
    ctx->pc = 0x2ca06cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26988, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2ca070:
    // 0x2ca070: 0x7263616d  .word       0x7263616D                   # INVALID     $s3, $v1, 0x616D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ca070u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x2CA070 raw=0x7263616D");
 /* MITIGATED */
label_2ca074:
    // 0x2ca074: 0x6f6c626f  ldr         $t4, 0x626F($k1)
    ctx->pc = 0x2ca074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2ca078:
    // 0x2ca078: 0x615f6b63  daddi       $ra, $t2, 0x6B63
    ctx->pc = 0x2ca078u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)27491; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
label_2ca07c:
    // 0x2ca07c: 0x65726464  daddiu      $s2, $t3, 0x6464
    ctx->pc = 0x2ca07cu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25700);
label_2ca080:
    // 0x2ca080: 0x695f7373  ldl         $ra, 0x7373($t2)
    ctx->pc = 0x2ca080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 29555); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
label_2ca084:
    // 0x2ca084: 0x6572636e  daddiu      $s2, $t3, 0x636E
    ctx->pc = 0x2ca084u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25454);
label_2ca088:
    // 0x2ca088: 0x746e656d  .word       0x746E656D                   # INVALID     $v1, $t6, 0x656D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ca088u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CA088 raw=0x746E656D");
 /* MITIGATED */
label_2ca08c:
    // 0x2ca08c: 0x646f6320  daddiu      $t7, $v1, 0x6320
    ctx->pc = 0x2ca08cu;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25376);
label_2ca090:
    // 0x2ca090: 0x78302865  lq          $s0, 0x2865($at)
    ctx->pc = 0x2ca090u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 1), 10341)));
label_2ca094:
    // 0x2ca094: 0x78383025  lq          $t8, 0x3025($at)
    ctx->pc = 0x2ca094u;
    SET_GPR_VEC(ctx, 24, READ128(ADD32(GPR_U32(ctx, 1), 12325)));
label_2ca098:
    // 0x2ca098: 0x29  mtsa        $zero
    ctx->pc = 0x2ca098u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2ca09c:
    // 0x2ca09c: 0x0  nop
    ctx->pc = 0x2ca09cu;
    // NOP
label_2ca0a0:
    // 0x2ca0a0: 0x6b53203d  ldl         $s3, 0x203D($k0)
    ctx->pc = 0x2ca0a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 8253); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
label_2ca0a4:
    // 0x2ca0a4: 0x74207069  .word       0x74207069                   # INVALID     $at, $zero, 0x7069 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ca0a4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CA0A4 raw=0x74207069");
 /* MITIGATED */
label_2ca0a8:
    // 0x2ca0a8: 0x6874206f  ldl         $s4, 0x206F($v1)
    ctx->pc = 0x2ca0a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_2ca0ac:
    // 0x2ca0ac: 0x656e2065  daddiu      $t6, $t3, 0x2065
    ctx->pc = 0x2ca0acu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8293);
label_2ca0b0:
    // 0x2ca0b0: 0x70207478  .word       0x70207478                   # INVALID     $at, $zero, 0x7478 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ca0b0u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x38 at 0x2CA0B0 raw=0x70207478");
 /* MITIGATED */
label_2ca0b4:
    // 0x2ca0b4: 0x75746369  .word       0x75746369                   # INVALID     $t3, $s4, 0x6369 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ca0b4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CA0B4 raw=0x75746369");
 /* MITIGATED */
label_2ca0b8:
    // 0x2ca0b8: 0x3d206572  .word       0x3D206572                   # lui         $zero, 0x6572 # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ca0b8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)25970 << 16));
label_2ca0bc:
    // 0x2ca0bc: 0x0  nop
    ctx->pc = 0x2ca0bcu;
    // NOP
label_2ca0c0:
    // 0x2ca0c0: 0x63696c73  daddi       $t1, $k1, 0x6C73
    ctx->pc = 0x2ca0c0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27763; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, res); }
label_2ca0c4:
    // 0x2ca0c4: 0x74735f65  .word       0x74735F65                   # INVALID     $v1, $s3, 0x5F65 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ca0c4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CA0C4 raw=0x74735F65");
 /* MITIGATED */
label_2ca0c8:
    // 0x2ca0c8: 0x5f747261  .word       0x5F747261                   # bgtzl       $k1, . + 4 + (0x7261 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_2ca0cc:
    if (ctx->pc == 0x2CA0CCu) {
        ctx->pc = 0x2CA0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA0C8u;
        // 0x2ca0cc: 0x65646f63  daddiu      $a0, $t3, 0x6F63 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28515);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA0D0u;
        goto label_2ca0d0;
    }
    ctx->pc = 0x2CA0C8u;
    {
        const bool branch_taken_0x2ca0c8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x2ca0c8) {
            ctx->pc = 0x2CA0CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA0C8u;
            // 0x2ca0cc: 0x65646f63  daddiu      $a0, $t3, 0x6F63 (Delay Slot)
            SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28515);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6A50u;
            return;
        }
    }
    ctx->pc = 0x2CA0D0u;
label_2ca0d0:
    // 0x2ca0d0: 0x25783028  addiu       $t8, $t3, 0x3028
    ctx->pc = 0x2ca0d0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 11), 12328));
label_2ca0d4:
    // 0x2ca0d4: 0x29783830  slti        $t8, $t3, 0x3830
    ctx->pc = 0x2ca0d4u;
    SET_GPR_U64(ctx, 24, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)14384) ? 1 : 0);
label_2ca0d8:
    // 0x2ca0d8: 0x74756f20  .word       0x74756F20                   # INVALID     $v1, $s5, 0x6F20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ca0d8u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CA0D8 raw=0x74756F20");
 /* MITIGATED */
label_2ca0dc:
    // 0x2ca0dc: 0x20666f20  addi        $a2, $v1, 0x6F20
    ctx->pc = 0x2ca0dcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28448, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
label_2ca0e0:
    // 0x2ca0e0: 0x676e6172  daddiu      $t6, $k1, 0x6172
    ctx->pc = 0x2ca0e0u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24946);
label_2ca0e4:
    // 0x2ca0e4: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca0e4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2ca0e8:
    // 0x2ca0e8: 0x696c735f  ldl         $t4, 0x735F($t3)
    ctx->pc = 0x2ca0e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29535); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_2ca0ec:
    // 0x2ca0ec: 0x30416563  andi        $at, $v0, 0x6563
    ctx->pc = 0x2ca0ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)25955);
label_2ca0f0:
    // 0x2ca0f0: 0x203a2928  addi        $k0, $at, 0x2928
    ctx->pc = 0x2ca0f0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)10536, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
label_2ca0f4:
    // 0x2ca0f4: 0x6f727265  ldr         $s2, 0x7265($k1)
    ctx->pc = 0x2ca0f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_2ca0f8:
    // 0x2ca0f8: 0x61682072  daddi       $t0, $t3, 0x2072
    ctx->pc = 0x2ca0f8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8306; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, res); }
label_2ca0fc:
    // 0x2ca0fc: 0x6e657070  ldr         $a1, 0x7070($s3)
    ctx->pc = 0x2ca0fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28784); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2ca100:
    // 0x2ca100: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x2ca100u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2ca104:
    // 0x2ca104: 0x0  nop
    ctx->pc = 0x2ca104u;
    // NOP
label_2ca108:
    // 0x2ca108: 0x206f6f54  addi        $t7, $v1, 0x6F54
    ctx->pc = 0x2ca108u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28500, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_2ca10c:
    // 0x2ca10c: 0x796e616d  lq          $t6, 0x616D($t3)
    ctx->pc = 0x2ca10cu;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 11), 24941)));
label_2ca110:
    // 0x2ca110: 0x63616d20  daddi       $at, $k1, 0x6D20
    ctx->pc = 0x2ca110u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27936; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_2ca114:
    // 0x2ca114: 0x6c626f72  ldr         $v0, 0x6F72($v1)
    ctx->pc = 0x2ca114u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28530); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2ca118:
    // 0x2ca118: 0x736b636f  .word       0x736B636F                   # INVALID     $k1, $t3, 0x636F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ca118u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x2CA118 raw=0x736B636F");
 /* MITIGATED */
label_2ca11c:
    // 0x2ca11c: 0x206e6920  addi        $t6, $v1, 0x6920
    ctx->pc = 0x2ca11cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26912, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2ca120:
    // 0x2ca120: 0x74636970  .word       0x74636970                   # INVALID     $v1, $v1, 0x6970 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ca120u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CA120 raw=0x74636970");
 /* MITIGATED */
label_2ca124:
    // 0x2ca124: 0x657275  .word       0x00657275                   # INVALID     $v1, $a1, 0x7275 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca124u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2CA124 raw=0x00657275");
 /* MITIGATED */
label_2ca128:
    // 0x2ca128: 0x70696b73  .word       0x70696B73                   # INVALID     $v1, $t1, 0x6B73 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ca128u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x2CA128 raw=0x70696B73");
 /* MITIGATED */
label_2ca12c:
    // 0x2ca12c: 0x6d206465  ldr         $zero, 0x6465($t1)
    ctx->pc = 0x2ca12cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 25701); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2ca130:
    // 0x2ca130: 0x6f726361  ldr         $s2, 0x6361($k1)
    ctx->pc = 0x2ca130u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25441); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_2ca134:
    // 0x2ca134: 0x636f6c62  daddi       $t7, $k1, 0x6C62
    ctx->pc = 0x2ca134u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27746; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, res); }
label_2ca138:
    // 0x2ca138: 0x6e69206b  ldr         $t1, 0x206B($s3)
    ctx->pc = 0x2ca138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8299); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2ca13c:
    // 0x2ca13c: 0x70204920  .word       0x70204920                   # madd1       $t1, $at, $zero # 00000100 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ca13cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 0); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_2ca140:
    // 0x2ca140: 0x72756369  .word       0x72756369                   # pdivuw      $s3, $s5 # 00006000 <InstrIdType: R5900_MMI_3>
    ctx->pc = 0x2ca140u;
    { uint32_t rs0 = GPR_U32(ctx, 19); uint32_t rt0 = GPR_U32(ctx, 21); 
   if (rt0 != 0) { ctx->lo = rs0 / rt0; ctx->hi = rs0 % rt0; } 
   else { ctx->lo = 0xFFFFFFFF; ctx->hi = rs0; } 
   SET_GPR_U32(ctx, 12, ctx->lo); }
label_2ca144:
    // 0x2ca144: 0x73692065  .word       0x73692065                   # INVALID     $k1, $t1, 0x2065 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ca144u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x2CA144 raw=0x73692065");
 /* MITIGATED */
label_2ca148:
    // 0x2ca148: 0x746f6e20  .word       0x746F6E20                   # INVALID     $v1, $t7, 0x6E20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ca148u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CA148 raw=0x746F6E20");
 /* MITIGATED */
label_2ca14c:
    // 0x2ca14c: 0x6c6c6120  ldr         $t4, 0x6120($v1)
    ctx->pc = 0x2ca14cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24864); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2ca150:
    // 0x2ca150: 0x6465776f  daddiu      $a1, $v1, 0x776F
    ctx->pc = 0x2ca150u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)30575);
label_2ca154:
    // 0x2ca154: 0x0  nop
    ctx->pc = 0x2ca154u;
    // NOP
label_2ca158:
    // 0x2ca158: 0x61766e49  daddi       $s6, $t3, 0x6E49
    ctx->pc = 0x2ca158u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28233; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, res); }
label_2ca15c:
    // 0x2ca15c: 0x2064696c  addi        $a0, $v1, 0x696C
    ctx->pc = 0x2ca15cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26988, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2ca160:
    // 0x2ca160: 0x7263616d  .word       0x7263616D                   # INVALID     $s3, $v1, 0x616D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ca160u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x2CA160 raw=0x7263616D");
 /* MITIGATED */
label_2ca164:
    // 0x2ca164: 0x6f6c626f  ldr         $t4, 0x626F($k1)
    ctx->pc = 0x2ca164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2ca168:
    // 0x2ca168: 0x745f6b63  .word       0x745F6B63                   # INVALID     $v0, $ra, 0x6B63 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ca168u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CA168 raw=0x745F6B63");
 /* MITIGATED */
label_2ca16c:
    // 0x2ca16c: 0x20657079  addi        $a1, $v1, 0x7079
    ctx->pc = 0x2ca16cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28793, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2ca170:
    // 0x2ca170: 0x65646f63  daddiu      $a0, $t3, 0x6F63
    ctx->pc = 0x2ca170u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28515);
label_2ca174:
    // 0x2ca174: 0x30203a  .word       0x0030203A                   # dsrl        $a0, $s0, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca174u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> 0);
label_2ca178:
    // 0x2ca178: 0x1a3d70  tge         $zero, $k0, 245
    ctx->pc = 0x2ca178u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 26)) { runtime->handleTrap(rdram, ctx); }
label_2ca17c:
    // 0x2ca17c: 0x1a3ba0  .word       0x001A3BA0                   # add         $a3, $zero, $k0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca17cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_2ca180:
    // 0x2ca180: 0x1a3cd0  .word       0x001A3CD0                   # mfhi        $a3 # 001A04C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca180u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_2ca184:
    // 0x2ca184: 0x19ffd0  .word       0x0019FFD0                   # mfhi        $ra # 001907C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca184u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_2ca188:
    // 0x2ca188: 0x1a0190  .word       0x001A0190                   # mfhi        $zero # 001A0180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca188u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2ca18c:
    // 0x2ca18c: 0x1a3d60  .word       0x001A3D60                   # add         $a3, $zero, $k0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca18cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 26);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_2ca190:
    // 0x2ca190: 0x1a3d70  tge         $zero, $k0, 245
    ctx->pc = 0x2ca190u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 26)) { runtime->handleTrap(rdram, ctx); }
label_2ca194:
    // 0x2ca194: 0x1a0098  .word       0x001A0098                   # mult        $zero, $zero, $k0 # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2ca194u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 26); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2ca198:
    // 0x2ca198: 0x19fc80  sll         $ra, $t9, 18
    ctx->pc = 0x2ca198u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 25), 18));
label_2ca19c:
    // 0x2ca19c: 0x1a3d80  sll         $a3, $k0, 22
    ctx->pc = 0x2ca19cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 26), 22));
label_2ca1a0:
    // 0x2ca1a0: 0x1a3d90  .word       0x001A3D90                   # mfhi        $a3 # 001A0580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca1a0u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_2ca1a4:
    // 0x2ca1a4: 0x0  nop
    ctx->pc = 0x2ca1a4u;
    // NOP
label_2ca1a8:
    // 0x2ca1a8: 0x64616f6c  daddiu      $at, $v1, 0x6F6C
    ctx->pc = 0x2ca1a8u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28524);
label_2ca1ac:
    // 0x2ca1ac: 0x7268635f  .word       0x7268635F                   # INVALID     $s3, $t0, 0x635F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ca1acu;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x1F at 0x2CA1AC raw=0x7268635F");
 /* MITIGATED */
label_2ca1b0:
    // 0x2ca1b0: 0x5f616d6f  .word       0x5F616D6F                   # bgtzl       $k1, . + 4 + (0x6D6F << 2) # 00010000 <InstrIdType: CPU_NORMAL>
label_2ca1b4:
    if (ctx->pc == 0x2CA1B4u) {
        ctx->pc = 0x2CA1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA1B0u;
        // 0x2ca1b4: 0x72746e69  .word       0x72746E69                   # INVALID     $s3, $s4, 0x6E69 # 00000000 <InstrIdType: R5900_MMI_3> (Delay Slot)
//         throw std::runtime_error("Unhandled MMI3 instruction: function 0x19 at 0x2CA1B4 raw=0x72746E69");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA1B8u;
        goto label_2ca1b8;
    }
    ctx->pc = 0x2CA1B0u;
    {
        const bool branch_taken_0x2ca1b0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x2ca1b0) {
            ctx->pc = 0x2CA1B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA1B0u;
            // 0x2ca1b4: 0x72746e69  .word       0x72746E69                   # INVALID     $s3, $s4, 0x6E69 # 00000000 <InstrIdType: R5900_MMI_3> (Delay Slot)
//             throw std::runtime_error("Unhandled MMI3 instruction: function 0x19 at 0x2CA1B4 raw=0x72746E69");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5770u;
            return;
        }
    }
    ctx->pc = 0x2CA1B8u;
label_2ca1b8:
    // 0x2ca1b8: 0x75715f61  .word       0x75715F61                   # INVALID     $t3, $s1, 0x5F61 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ca1b8u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CA1B8 raw=0x75715F61");
 /* MITIGATED */
label_2ca1bc:
    // 0x2ca1bc: 0x69746e61  ldl         $s4, 0x6E61($t3)
    ctx->pc = 0x2ca1bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28257); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_2ca1c0:
    // 0x2ca1c0: 0x5f72657a  .word       0x5F72657A                   # bgtzl       $k1, . + 4 + (0x657A << 2) # 00120000 <InstrIdType: CPU_NORMAL>
label_2ca1c4:
    if (ctx->pc == 0x2CA1C4u) {
        ctx->pc = 0x2CA1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA1C0u;
        // 0x2ca1c4: 0x7274616d  .word       0x7274616D                   # INVALID     $s3, $s4, 0x616D # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
//         throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x2CA1C4 raw=0x7274616D");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA1C8u;
        goto label_2ca1c8;
    }
    ctx->pc = 0x2CA1C0u;
    {
        const bool branch_taken_0x2ca1c0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x2ca1c0) {
            ctx->pc = 0x2CA1C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA1C0u;
            // 0x2ca1c4: 0x7274616d  .word       0x7274616D                   # INVALID     $s3, $s4, 0x616D # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
//             throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x2CA1C4 raw=0x7274616D");
 /* MITIGATED */
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E37ACu;
            return;
        }
    }
    ctx->pc = 0x2CA1C8u;
label_2ca1c8:
    // 0x2ca1c8: 0x3d207869  .word       0x3D207869                   # lui         $zero, 0x7869 # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ca1c8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)30825 << 16));
label_2ca1cc:
    // 0x2ca1cc: 0x31203d  .word       0x0031203D                   # INVALID     $at, $s1, 0x203D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2ca1ccu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2CA1CC raw=0x0031203D");
 /* MITIGATED */
label_2ca1d0:
    // 0x2ca1d0: 0x64616f6c  daddiu      $at, $v1, 0x6F6C
    ctx->pc = 0x2ca1d0u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28524);
label_2ca1d4:
    // 0x2ca1d4: 0x7268635f  .word       0x7268635F                   # INVALID     $s3, $t0, 0x635F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2ca1d4u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x1F at 0x2CA1D4 raw=0x7268635F");
 /* MITIGATED */
label_2ca1d8:
    // 0x2ca1d8: 0x5f616d6f  .word       0x5F616D6F                   # bgtzl       $k1, . + 4 + (0x6D6F << 2) # 00010000 <InstrIdType: CPU_NORMAL>
label_2ca1dc:
    if (ctx->pc == 0x2CA1DCu) {
        ctx->pc = 0x2CA1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA1D8u;
        // 0x2ca1dc: 0x5f6e6f6e  .word       0x5F6E6F6E                   # bgtzl       $k1, . + 4 + (0x6F6E << 2) # 000E0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x2CA1DC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CA1E0u;
        goto label_2ca1e0;
    }
    ctx->pc = 0x2CA1D8u;
    {
        const bool branch_taken_0x2ca1d8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x2ca1d8) {
            ctx->pc = 0x2CA1DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA1D8u;
            // 0x2ca1dc: 0x5f6e6f6e  .word       0x5F6E6F6E                   # bgtzl       $k1, . + 4 + (0x6F6E << 2) # 000E0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x2CA1DC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E5798u;
            return;
        }
    }
    ctx->pc = 0x2CA1E0u;
label_2ca1e0:
    // 0x2ca1e0: 0x72746e69  .word       0x72746E69                   # INVALID     $s3, $s4, 0x6E69 # 00000000 <InstrIdType: R5900_MMI_3>
    ctx->pc = 0x2ca1e0u;
//     throw std::runtime_error("Unhandled MMI3 instruction: function 0x19 at 0x2CA1E0 raw=0x72746E69");
 /* MITIGATED */
label_2ca1e4:
    // 0x2ca1e4: 0x75715f61  .word       0x75715F61                   # INVALID     $t3, $s1, 0x5F61 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ca1e4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CA1E4 raw=0x75715F61");
 /* MITIGATED */
label_2ca1e8:
    // 0x2ca1e8: 0x69746e61  ldl         $s4, 0x6E61($t3)
    ctx->pc = 0x2ca1e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28257); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_2ca1ec:
    // 0x2ca1ec: 0x5f72657a  .word       0x5F72657A                   # bgtzl       $k1, . + 4 + (0x657A << 2) # 00120000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2ca1f0u;
    return;
}
